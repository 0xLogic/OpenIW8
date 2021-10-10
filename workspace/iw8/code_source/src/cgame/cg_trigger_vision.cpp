/*
==============
CG_ShutdownClientSideTriggersVision
==============
*/

void CG_ShutdownClientSideTriggersVision(void)
{
  ?CG_ShutdownClientSideTriggersVision@@YAXXZ();
}

/*
==============
CG_StartClientSideTriggerVision
==============
*/

void __fastcall CG_StartClientSideTriggerVision(LocalClientNum_t localClientNum)
{
  ?CG_StartClientSideTriggerVision@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_StartClientSideTriggersVisionTrigger
==============
*/

void __fastcall CG_StartClientSideTriggersVisionTrigger(unsigned int triggerIter)
{
  ?CG_StartClientSideTriggersVisionTrigger@@YAXI@Z(triggerIter);
}

/*
==============
CG_TriggerUpdateVision
==============
*/

void __fastcall CG_TriggerUpdateVision(LocalClientNum_t localClientNum, unsigned int visionBlendTrigger, unsigned int visionTrigger, const vec3_t *viewPos)
{
  ?CG_TriggerUpdateVision@@YAXW4LocalClientNum_t@@IIAEBTvec3_t@@@Z(localClientNum, visionBlendTrigger, visionTrigger, viewPos);
}

/*
==============
CG_ShutdownClientSideTriggersVision
==============
*/
void CG_ShutdownClientSideTriggersVision(void)
{
  g_numActiveFogSets = 0;
}

/*
==============
CG_StartClientSideTriggerVision
==============
*/
void CG_StartClientSideTriggerVision(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  memset_0(g_fogVisionSet, 0, sizeof(g_fogVisionSet));
  memset_0(s_fogVisionSetNames, 0, sizeof(s_fogVisionSetNames));
  s_fogVisionSetNameCount = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->cvsData.archived.prevTrigA = 0x4000;
  LocalClientGlobals->cvsData.archived.prevTrigB = 0x4000;
}

/*
==============
CG_StartClientSideTriggersVisionTrigger
==============
*/
void CG_StartClientSideTriggersVisionTrigger(unsigned int triggerIter)
{
  __int64 v1; 
  __int16 v2; 
  int v3; 
  const char *v4; 
  const char *v5; 
  ClientSideVisionAndFogSet *v6; 
  PhysicsLibrary *physicsLibrary; 
  unsigned __int8 v8; 
  unsigned __int8 v9; 
  __int64 numVisionSets; 
  unsigned __int8 v11; 
  __int64 v12; 
  unsigned __int16 v13; 
  char *data_p; 
  char dest[64]; 

  v1 = triggerIter;
  v2 = cm.mapEnts->clientTrigger.visionSetTriggers[v1];
  if ( v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 156, ASSERT_TYPE_ASSERT, "(visionSet >= 0)", (const char *)&queryFormat, "visionSet >= 0") )
    __debugbreak();
  if ( g_numActiveFogSets < 0x1388u )
  {
    data_p = &cm.mapEnts->clientTrigger.triggerString[v2];
    Com_BeginParseSession("clienttrigger");
    v3 = 0;
    while ( 1 )
    {
      v4 = Com_Parse((const char **)&data_p);
      v5 = v4;
      if ( !*v4 )
      {
LABEL_30:
        v13 = g_numActiveFogSets;
        g_triggerFogSetIndex[v1] = g_numActiveFogSets;
        g_numActiveFogSets = v13 + 1;
        goto LABEL_31;
      }
      v6 = &g_fogVisionSet[g_numActiveFogSets];
      Com_sprintf(dest, 0x40ui64, "vision/%s.vision", v4);
      physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, dest, 1).physicsLibrary;
      if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, dest) )
        break;
      v8 = s_fogVisionSetNameCount;
      if ( s_fogVisionSetNameCount >= 0x80u )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 75, ASSERT_TYPE_ASSERT, "(s_fogVisionSetNameCount < VISION_SET_NAME_MAX)", (const char *)&queryFormat, "s_fogVisionSetNameCount < VISION_SET_NAME_MAX", data_p) )
          __debugbreak();
        v8 = s_fogVisionSetNameCount;
      }
      v9 = 0;
      if ( v8 )
      {
        while ( s_fogVisionSetNames[v9].assetHeader.physicsLibrary != physicsLibrary )
        {
          if ( ++v9 >= v8 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        v9 = 0x80;
      }
      v6->visionSets[v6->numVisionSets] = v9;
      numVisionSets = v6->numVisionSets;
      if ( v6->visionSets[numVisionSets] == 0x80 )
      {
        if ( !*v5 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 106, ASSERT_TYPE_ASSERT, "(name && name[0])", (const char *)&queryFormat, "name && name[0]") )
            __debugbreak();
          v8 = s_fogVisionSetNameCount;
        }
        if ( v8 < 0x80u )
          goto LABEL_27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 107, ASSERT_TYPE_ASSERT, "(s_fogVisionSetNameCount < VISION_SET_NAME_MAX)", (const char *)&queryFormat, "s_fogVisionSetNameCount < VISION_SET_NAME_MAX") )
          __debugbreak();
        v8 = s_fogVisionSetNameCount;
        if ( s_fogVisionSetNameCount < 0x80u )
        {
LABEL_27:
          Com_DPrintf(14, "s_fogVisionSetNames[%3d] = %s\n", v8, v5);
          v12 = s_fogVisionSetNameCount;
          s_fogVisionSetNames[v12].assetHeader.physicsLibrary = physicsLibrary;
          Core_strcpy(s_fogVisionSetNames[v12].name, 0x40ui64, v5);
          v11 = s_fogVisionSetNameCount++;
        }
        else
        {
          Com_PrintError(1, "Max number of fog vision set names reached.  Max: %d\n", 128i64);
          v11 = 0;
        }
        v6->visionSets[v6->numVisionSets] = v11;
        LOBYTE(numVisionSets) = v6->numVisionSets;
      }
      ++v3;
      v6->numVisionSets = numVisionSets + 1;
      if ( v3 >= 8 )
        goto LABEL_30;
    }
    Com_PrintError(1, "Client Trigger Vision %s not found.\n", dest);
LABEL_31:
    Com_EndParseSession();
  }
  else
  {
    Com_PrintWarning(8, "Discarding fog vision set.  Max number [%lu] reached.\n", 5000i64);
  }
}

/*
==============
CG_TriggerSetVision
==============
*/
void CG_TriggerSetVision(LocalClientNum_t localClientNum, int trigA, int trigB)
{
  __int64 v3; 
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  ClientSideVisionAndFogSet *v7; 
  ClientSideVisionAndFogSet *v8; 
  int stagedVisionStateTo; 
  unsigned __int8 numVisionSets; 
  unsigned __int8 v11; 
  char *name; 
  unsigned __int8 v13; 
  int v14; 
  unsigned __int8 v15; 
  char *v16; 
  __int64 style; 
  __int64 v19; 
  int v20; 

  v3 = trigA;
  v5 = trigB;
  if ( (unsigned int)trigA >= 0x4000 )
  {
    v20 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 233, ASSERT_TYPE_ASSERT, "(unsigned)( trigA ) < (unsigned)( (16*1024) )", "trigA doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", trigA, v20) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= cm.mapEnts->clientTrigger.trigger.count )
  {
    LODWORD(v19) = cm.mapEnts->clientTrigger.trigger.count;
    LODWORD(style) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 234, ASSERT_TYPE_ASSERT, "(unsigned)( trigA ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigA doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", style, v19) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0x4000 )
  {
    LODWORD(v19) = 0x4000;
    LODWORD(style) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 235, ASSERT_TYPE_ASSERT, "(unsigned)( trigB ) < (unsigned)( (16*1024) )", "trigB doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", style, v19) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= cm.mapEnts->clientTrigger.trigger.count )
  {
    LODWORD(v19) = cm.mapEnts->clientTrigger.trigger.count;
    LODWORD(style) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( trigB ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigB doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", style, v19) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = &g_fogVisionSet[g_triggerFogSetIndex[v3]];
  v8 = &g_fogVisionSet[g_triggerFogSetIndex[v5]];
  stagedVisionStateTo = 0;
  numVisionSets = v7->numVisionSets;
  if ( numVisionSets && numVisionSets > LocalClientGlobals->cvsData.archived.stagedVisionStateTo )
    stagedVisionStateTo = LocalClientGlobals->cvsData.archived.stagedVisionStateTo;
  v11 = v7->visionSets[stagedVisionStateTo];
  if ( v11 >= s_fogVisionSetNameCount )
  {
    LODWORD(v19) = s_fogVisionSetNameCount;
    LODWORD(style) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 251, ASSERT_TYPE_ASSERT, "(unsigned)( nameIndexA ) < (unsigned)( s_fogVisionSetNameCount )", "nameIndexA doesn't index s_fogVisionSetNameCount\n\t%i not in [0, %i)", style, v19) )
      __debugbreak();
  }
  name = s_fogVisionSetNames[v11].name;
  if ( CG_VisionSetIsLeafDifferent(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_CT_A_TO, name) )
  {
    CG_VisionSetUpdateToNode(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_A);
    CG_VisionSetMergeBlendToLeaf(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_A, VISIONSET_LEAFTYPE_CT_A_FROM);
    CG_VisionSetRegisterLeafByFileSimple(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_CT_A_TO, name);
    CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_CT_A, LocalClientGlobals->cvsData.archived.stagedVisionStart, LocalClientGlobals->cvsData.archived.stagedVisionDuration, 1, VISIONSETLERP_SMOOTH);
  }
  v13 = v8->numVisionSets;
  v14 = 0;
  if ( v13 && v13 > LocalClientGlobals->cvsData.archived.stagedVisionStateTo )
    v14 = LocalClientGlobals->cvsData.archived.stagedVisionStateTo;
  v15 = v8->visionSets[v14];
  if ( v15 >= s_fogVisionSetNameCount )
  {
    LODWORD(v19) = s_fogVisionSetNameCount;
    LODWORD(style) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 274, ASSERT_TYPE_ASSERT, "(unsigned)( nameIndexB ) < (unsigned)( s_fogVisionSetNameCount )", "nameIndexB doesn't index s_fogVisionSetNameCount\n\t%i not in [0, %i)", style, v19) )
      __debugbreak();
  }
  v16 = s_fogVisionSetNames[v15].name;
  if ( CG_VisionSetIsLeafDifferent(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_CT_B_TO, v16) )
  {
    CG_VisionSetUpdateToNode(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_B);
    CG_VisionSetMergeBlendToLeaf(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_B, VISIONSET_LEAFTYPE_CT_B_FROM);
    CG_VisionSetRegisterLeafByFileSimple(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_CT_B_TO, v16);
    CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_CT_B, LocalClientGlobals->cvsData.archived.stagedVisionStart, LocalClientGlobals->cvsData.archived.stagedVisionDuration, 1, VISIONSETLERP_SMOOTH);
  }
}

/*
==============
CG_TriggerUpdateVision
==============
*/
void CG_TriggerUpdateVision(LocalClientNum_t localClientNum, unsigned int visionBlendTrigger, unsigned int visionTrigger, const vec3_t *viewPos)
{
  cg_t *LocalClientGlobals; 
  cg_t *v9; 
  float *scriptDelay; 
  float v11; 
  int v14; 
  int v17; 
  int prevTrigA; 
  int v21; 
  int prevTrigB; 
  __int64 v23; 
  float *v24; 
  float v25; 
  int v28; 
  bool trigB; 
  float *lerpAmount; 
  __int64 v33; 
  unsigned int v34; 
  float v35[3]; 
  unsigned int trigA; 

  trigA = 0x4000;
  v34 = 0x4000;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = LocalClientGlobals;
  if ( visionTrigger == 0x4000 && LocalClientGlobals->playerTeleported )
  {
    CG_VisionSetSetBlendOff(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_CT_DELAY);
LABEL_40:
    v9->cvsData.archived.prevTrigB = 0x4000;
    v9->cvsData.archived.prevTrigA = 0x4000;
    return;
  }
  if ( visionBlendTrigger != 0x4000 )
  {
    v35[0] = 0.0;
    CG_TriggerLerpTriggers(localClientNum, visionBlendTrigger, viewPos, &trigA, &v34, v35);
    CG_VisionSetSetBlendPush(&v9->cvsData, VISIONSET_BLENDTYPE_CT_BLEND, v35[0]);
    CG_TriggerSetVision(localClientNum, trigA, v34);
    if ( v9->cvsData.archived.prevTrigA != 0x4000 )
    {
LABEL_14:
      v9->cvsData.archived.prevTrigA = trigA;
      v9->cvsData.archived.prevTrigB = v34;
      return;
    }
    scriptDelay = cm.mapEnts->clientTrigger.scriptDelay;
    v11 = scriptDelay[trigA];
    if ( v11 == 0.0 )
      goto LABEL_10;
    if ( scriptDelay[v34] != 0.0 )
    {
      _XMM0 = 0i64;
      __asm { vroundss xmm1, xmm0, xmm3, 1 }
      v14 = (int)*(float *)&_XMM1;
LABEL_13:
      CG_TriggersVisionBlend(&v9->cvsData, 1, v14, v9->time, v9->playerTeleported);
      goto LABEL_14;
    }
    if ( v11 == 0.0 )
    {
LABEL_10:
      if ( scriptDelay[v34] == 0.0 )
      {
        v14 = 0;
        goto LABEL_13;
      }
    }
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    v14 = (int)*(float *)&_XMM4;
    goto LABEL_13;
  }
  if ( visionTrigger == 0x4000 )
  {
    prevTrigA = LocalClientGlobals->cvsData.archived.prevTrigA;
    v21 = prevTrigA;
    if ( prevTrigA != 0x4000 )
    {
      prevTrigB = v9->cvsData.archived.prevTrigB;
      if ( prevTrigB != 0x4000 )
      {
        CG_TriggerSetVision(localClientNum, prevTrigA, prevTrigB);
        v21 = v9->cvsData.archived.prevTrigA;
      }
    }
    if ( v21 == 0x4000 )
      goto LABEL_40;
    v23 = v9->cvsData.archived.prevTrigB;
    v24 = cm.mapEnts->clientTrigger.scriptDelay;
    if ( v21 == (_DWORD)v23 )
      goto LABEL_34;
    v25 = v24[v21];
    if ( v25 == 0.0 )
      goto LABEL_36;
    if ( v24[v23] != 0.0 )
    {
LABEL_34:
      _XMM0 = 0i64;
      __asm { vroundss xmm1, xmm0, xmm3, 1 }
      v28 = (int)*(float *)&_XMM1;
LABEL_39:
      CG_TriggersVisionBlend(&v9->cvsData, 0, v28, v9->time, v9->playerTeleported);
      goto LABEL_40;
    }
    if ( v25 == 0.0 )
    {
LABEL_36:
      if ( v24[v23] == 0.0 )
      {
        v28 = 0;
        goto LABEL_39;
      }
    }
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    v28 = (int)*(float *)&_XMM4;
    goto LABEL_39;
  }
  if ( visionTrigger >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 362, ASSERT_TYPE_ASSERT, "(unsigned)( visionTrigger ) < (unsigned)( (16*1024) )", "visionTrigger doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", visionTrigger, 0x4000) )
    __debugbreak();
  if ( visionTrigger >= cm.mapEnts->clientTrigger.trigger.count )
  {
    LODWORD(v33) = cm.mapEnts->clientTrigger.trigger.count;
    LODWORD(lerpAmount) = visionTrigger;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( visionTrigger ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "visionTrigger doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", lerpAmount, v33) )
      __debugbreak();
  }
  CG_TriggerSetVision(localClientNum, visionTrigger, visionTrigger);
  if ( v9->cvsData.archived.prevTrigA == 0x4000 )
  {
    trigB = v9->playerTeleported;
    v17 = 0;
    _XMM0 = 0i64;
    __asm { vroundss xmm1, xmm0, xmm3, 1 }
    if ( !trigB )
      v17 = (int)*(float *)&_XMM1;
    CG_TriggersVisionBlend(&v9->cvsData, 1, v17, v9->time, trigB);
  }
  v9->cvsData.archived.prevTrigA = visionTrigger;
  v9->cvsData.archived.prevTrigB = visionTrigger;
}

/*
==============
CG_TriggersVisionBlend
==============
*/
void CG_TriggersVisionBlend(ClientVisionSetData *cvsData, int forward, int duration, int clientTime, bool playerTeleported)
{
  int v5; 

  v5 = 0;
  if ( !playerTeleported )
    v5 = duration;
  if ( CG_VisionSetIsBlending(cvsData, VISIONSET_BLENDTYPE_CT_DELAY, clientTime) )
    CG_VisionSetReverseBlend(cvsData, VISIONSET_BLENDTYPE_CT_DELAY, clientTime, v5);
  else
    CG_VisionSetRegisterBlendStart(cvsData, VISIONSET_BLENDTYPE_CT_DELAY, clientTime, v5, forward, VISIONSETLERP_SMOOTH);
}

