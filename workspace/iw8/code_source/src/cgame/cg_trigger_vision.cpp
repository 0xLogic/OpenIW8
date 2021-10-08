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
  cg_t *v11; 
  int v34; 
  int prevTrigA; 
  unsigned int v39; 
  int prevTrigB; 
  bool trigB; 
  float *lerpAmount; 
  __int64 v56; 
  unsigned int v57; 
  float v58[3]; 
  unsigned int trigA; 

  _RDI = visionTrigger;
  trigA = 0x4000;
  v57 = 0x4000;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v11 = LocalClientGlobals;
  if ( (_DWORD)_RDI == 0x4000 && LocalClientGlobals->playerTeleported )
  {
    CG_VisionSetSetBlendOff(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_CT_DELAY);
LABEL_38:
    v11->cvsData.archived.prevTrigB = 0x4000;
    v11->cvsData.archived.prevTrigA = 0x4000;
    return;
  }
  if ( visionBlendTrigger != 0x4000 )
  {
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vxorps  xmm6, xmm6, xmm6
      vmovss  [rsp+78h+var_34], xmm6
    }
    CG_TriggerLerpTriggers(localClientNum, visionBlendTrigger, viewPos, &trigA, &v57, v58);
    __asm { vmovss  xmm2, [rsp+78h+var_34]; lerp }
    CG_VisionSetSetBlendPush(&v11->cvsData, VISIONSET_BLENDTYPE_CT_BLEND, *(const float *)&_XMM2);
    CG_TriggerSetVision(localClientNum, trigA, v57);
    if ( v11->cvsData.archived.prevTrigA != 0x4000 )
    {
LABEL_14:
      __asm { vmovaps xmm6, [rsp+78h+var_28] }
      v11->cvsData.archived.prevTrigA = trigA;
      v11->cvsData.archived.prevTrigB = v57;
      return;
    }
    _RDX = v57;
    _RCX = cm.mapEnts->clientTrigger.scriptDelay;
    _RAX = trigA;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rax*4]
      vucomiss xmm0, xmm6
    }
    if ( v11->cvsData.archived.prevTrigA == 0x4000 )
      goto LABEL_10;
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+rdx*4]
      vucomiss xmm1, xmm6
    }
    if ( v11->cvsData.archived.prevTrigA != 0x4000 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@43fa0000
        vmulss  xmm1, xmm0, xmm1
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm1, xmm0, xmm3, 1
        vcvttss2si ecx, xmm1
      }
LABEL_13:
      CG_TriggersVisionBlend(&v11->cvsData, 1, _ECX, v11->time, v11->playerTeleported);
      goto LABEL_14;
    }
    __asm { vucomiss xmm0, xmm6 }
    if ( v11->cvsData.archived.prevTrigA == 0x4000 )
    {
LABEL_10:
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rdx*4]
        vucomiss xmm0, xmm6
      }
      if ( v11->cvsData.archived.prevTrigA == 0x4000 )
      {
        _ECX = 0;
        goto LABEL_13;
      }
    }
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@447a0000
      vaddss  xmm2, xmm0, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm2, 1
      vcvttss2si ecx, xmm4
    }
    goto LABEL_13;
  }
  if ( (_DWORD)_RDI == 0x4000 )
  {
    prevTrigA = LocalClientGlobals->cvsData.archived.prevTrigA;
    v39 = prevTrigA;
    if ( prevTrigA != 0x4000 )
    {
      prevTrigB = v11->cvsData.archived.prevTrigB;
      if ( prevTrigB != 0x4000 )
      {
        CG_TriggerSetVision(localClientNum, prevTrigA, prevTrigB);
        v39 = v11->cvsData.archived.prevTrigA;
      }
    }
    if ( v39 == 0x4000 )
      goto LABEL_38;
    _R8 = v11->cvsData.archived.prevTrigB;
    _RDX = v39;
    _RCX = cm.mapEnts->clientTrigger.scriptDelay;
    if ( v39 == (_DWORD)_R8 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rdx*4]
        vmulss  xmm1, xmm0, cs:__real@447a0000
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rcx+rdx*4]
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm1, xmm0
      }
      if ( v39 == (_DWORD)_R8 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rcx+r8*4]
          vucomiss xmm1, xmm0
        }
        _ECX = 0;
        goto LABEL_37;
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rcx+r8*4]
        vucomiss xmm2, xmm0
        vmulss  xmm0, xmm1, cs:__real@43fa0000
        vmulss  xmm1, xmm0, xmm2
      }
    }
    __asm
    {
      vaddss  xmm3, xmm1, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm1, xmm0, xmm3, 1
      vcvttss2si ecx, xmm1
    }
LABEL_37:
    CG_TriggersVisionBlend(&v11->cvsData, 0, _ECX, v11->time, v11->playerTeleported);
    goto LABEL_38;
  }
  if ( (unsigned int)_RDI >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 362, ASSERT_TYPE_ASSERT, "(unsigned)( visionTrigger ) < (unsigned)( (16*1024) )", "visionTrigger doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", _RDI, 0x4000) )
    __debugbreak();
  if ( (unsigned int)_RDI >= cm.mapEnts->clientTrigger.trigger.count )
  {
    LODWORD(v56) = cm.mapEnts->clientTrigger.trigger.count;
    LODWORD(lerpAmount) = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_vision.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( visionTrigger ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "visionTrigger doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", lerpAmount, v56) )
      __debugbreak();
  }
  CG_TriggerSetVision(localClientNum, _RDI, _RDI);
  if ( v11->cvsData.archived.prevTrigA == 0x4000 )
  {
    trigB = v11->playerTeleported;
    _RCX = cm.mapEnts->clientTrigger.scriptDelay;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rdi*4]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vaddss  xmm3, xmm1, cs:__real@3f000000
    }
    v34 = 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm1, xmm0, xmm3, 1
      vcvttss2si eax, xmm1
    }
    if ( !trigB )
      v34 = _EAX;
    CG_TriggersVisionBlend(&v11->cvsData, 1, v34, v11->time, trigB);
  }
  v11->cvsData.archived.prevTrigA = _RDI;
  v11->cvsData.archived.prevTrigB = _RDI;
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

