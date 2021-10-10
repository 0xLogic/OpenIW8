/*
==============
LUIElement_HeartbeatSensorRender
==============
*/
void LUIElement_HeartbeatSensorRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  HeartbeatSensorData *Data; 
  HeartbeatSensorData *v12; 
  const dvar_t *v13; 
  const ScreenPlacement *ActivePlacement; 
  float v15; 
  float v16; 
  CgCompassSystem *CompassSystem; 
  CompassDisplay v18; 
  unsigned int refdefViewOrg_aab; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  OmnvarData *v22; 
  float centerY; 
  float centerX; 
  SecureVec3 playerWorldPos; 
  float outAngle[2]; 
  CgCompassSystem *v27; 
  __int64 v28; 
  vec2_t pos; 
  rectDef_s x; 
  vec2_t pingStartPos; 
  vec2_t outVector; 
  rectDef_s mapRect; 
  rectDef_s parentRect; 

  v28 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->nextSnap )
  {
    Data = LUIElement_HeartbeatSensor_GetData(element, luaVM);
    v12 = Data;
    if ( Data->constructTime == -1 )
      Data->constructTime = LocalClientGlobals->time;
    v13 = DCONST_DVARINT_heartbeatSensorInitialSweepDelay;
    if ( !DCONST_DVARINT_heartbeatSensorInitialSweepDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorInitialSweepDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v12->constructTime + v13->current.integer <= LocalClientGlobals->time )
    {
      *(_OWORD *)&parentRect.x = 0i64;
      *(_WORD *)&parentRect.horzAlign = 1285;
      x.x = element->left;
      x.y = element->top;
      x.w = element->right - x.x;
      x.h = element->bottom - x.y;
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      ScrPlace_ApplyRect(ActivePlacement, &x.x, &x.y, &x.w, &x.h, 5, 5);
      *(_WORD *)&x.horzAlign = 1285;
      CG_CompassCalcDimensions(COMPASS_TYPE_PARTIAL, LocalClientGlobals, &parentRect, &x, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
      v15 = (float)(0.5 * mapRect.w) + mapRect.x;
      centerX = v15;
      v16 = (float)(0.5 * mapRect.h) + mapRect.y;
      centerY = v16;
      CompassSystem = CgCompassSystem::GetCompassSystem(localClientNum);
      v27 = CompassSystem;
      CgCompassSystem::GetCompassYaw(CompassSystem, COMPASS_TYPE_PARTIAL, 0, LocalClientGlobals, outAngle, &outVector);
      v18 = COMPASS_DISPLAY_HEARTBEATSENSOR_TABLET;
      if ( v12->targetRTT == EMP )
        v18 = COMPASS_DISPLAY_HEARTBEATSENSOR_EMP;
      CgCompassSystem::SetCurrentCompassDisplayType(CompassSystem, v18);
      if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
        __debugbreak();
      refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
      if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
        __debugbreak();
      LODWORD(playerWorldPos.x) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
      LODWORD(playerWorldPos.y) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
      LODWORD(pingStartPos.v[0]) = refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944);
      LODWORD(playerWorldPos.z) = (LODWORD(pingStartPos.v[0]) * (LODWORD(pingStartPos.v[0]) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
      CgCompassSystem::WorldPosToCompass(v27, COMPASS_TYPE_PARTIAL, 0, &mapRect, 0.0, &outVector, (const vec2_t *)&playerWorldPos, (const vec2_t *)&LocalClientGlobals->predictedPlayerState.origin, NULL, &pos);
      pos.v[0] = v15 + pos.v[0];
      pos.v[1] = (float)(v16 + v12->verticalPingOffset) + pos.v[1];
      pingStartPos = pos;
      IndexByName = BG_Omnvar_GetIndexByName("ui_scrambler_strength");
      Def = BG_Omnvar_GetDef(IndexByName);
      v22 = CG_Omnvar_GetData(localClientNum, IndexByName);
      if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
        __debugbreak();
      LUI_Render_PushGlitch((float)(v22->current.integer + Def->minvalue) * 0.2);
      LUIElement_HeartbeatSensor_Sweep(localClientNum, element, &x, pos, &outVector, &playerWorldPos, luaVM);
      LUI_Element_HeartbeatSensor_RenderBlips(localClientNum, element, &x, &mapRect, &outVector, pingStartPos, &centerX, &centerY, luaVM);
      LUIElement_HeartbeatSensor_DrawDistance(localClientNum, element, luaVM);
      LUI_Render_PopGlitch();
      memset(&playerWorldPos, 0, sizeof(playerWorldPos));
    }
  }
}

/*
==============
LUIElement_HeartbeatSensor_DrawDistance
==============
*/
void LUIElement_HeartbeatSensor_DrawDistance(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM)
{
  HeartbeatSensorData *Data; 
  const dvar_t *v7; 
  float closestDistanceInFrame; 
  float v9; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  float value; 
  float v14; 
  const dvar_t *v15; 
  const char *v16; 
  const dvar_t *v17; 
  float v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  double CurrentUnitScale; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  int v24; 
  int v25; 
  float v26; 
  vec4_t color; 
  vec4_t quadVerts[4]; 
  char _Buffer[32]; 

  Data = LUIElement_HeartbeatSensor_GetData(element, luaVM);
  if ( Data->numBlipsInFrame )
  {
    v7 = DCONST_DVARVEC4_compassMainHUDColor;
    if ( !DCONST_DVARVEC4_compassMainHUDColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMainHUDColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    color = v7->current.vector;
    closestDistanceInFrame = Data->closestDistanceInFrame;
    if ( closestDistanceInFrame < 3.4028235e38 )
    {
      v9 = fsqrt(closestDistanceInFrame) * 0.0254;
      j_snprintf(_Buffer, 0x20ui64, "%.1fm", v9);
      v10 = element->right - element->left;
      v11 = element->bottom - element->top;
      if ( Data->targetRTT )
      {
        v17 = DCONST_DVARVEC2_heartbeatSensorTabletDistanceTextOffset;
        if ( !DCONST_DVARVEC2_heartbeatSensorTabletDistanceTextOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletDistanceTextOffset") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        value = v17->current.value;
        v14 = v17->current.vector.v[1];
        v15 = DCONST_DVARFLT_heartbeatSensorTabletFontScalar;
        if ( DCONST_DVARFLT_heartbeatSensorTabletFontScalar )
          goto LABEL_19;
        v16 = "heartbeatSensorTabletFontScalar";
      }
      else
      {
        v12 = DCONST_DVARVEC2_heartbeatSensorEMPDistanceTextOffset;
        if ( !DCONST_DVARVEC2_heartbeatSensorEMPDistanceTextOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPDistanceTextOffset") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        value = v12->current.value;
        v14 = v12->current.vector.v[1];
        v15 = DCONST_DVARFLT_heartbeatSensorEMPFontScalar;
        if ( DCONST_DVARFLT_heartbeatSensorEMPFontScalar )
          goto LABEL_19;
        v16 = "heartbeatSensorEMPFontScalar";
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v16) )
        __debugbreak();
LABEL_19:
      Dvar_CheckFrontendServerThread(v15);
      v18 = v15->current.value;
      v19 = DCONST_DVARFLT_heartbeatSensorEnemyDistanceWarningThreshold;
      if ( !DCONST_DVARFLT_heartbeatSensorEnemyDistanceWarningThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEnemyDistanceWarningThreshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v9 < v19->current.value )
      {
        v20 = DCONST_DVARVEC4_heartbeatSensorEnemyDistanceWarningColor;
        if ( !DCONST_DVARVEC4_heartbeatSensorEnemyDistanceWarningColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEnemyDistanceWarningColor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        color = v20->current.vector;
      }
      CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      font = UI_GetFontHandle(ActivePlacement, 1, 1.0);
      v24 = (int)(float)((float)R_TextHeight(font) * v18);
      v25 = R_TextWidth(_Buffer, 0, font, v24);
      v26 = (float)v24 * *(float *)&CurrentUnitScale;
      LUI_CoD_GenerateQuadVerts((float)((float)(value * v10) + element->left) - (float)((float)((float)v25 * 0.5) * *(float *)&CurrentUnitScale), (float)(v14 * v11) + element->top, (float)((float)((float)v25 * 0.5) * *(float *)&CurrentUnitScale) + (float)((float)(value * v10) + element->left), (float)((float)(v14 * v11) + element->top) + v26, (vec4_t (*)[4])quadVerts);
      LUI_Render_DrawText(localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, &color, font, _Buffer, 0, 0, 0.0, (int)v26, NULL, NULL);
    }
  }
}

/*
==============
LUIElement_HeartbeatSensor_GetData
==============
*/
HeartbeatSensorData *LUIElement_HeartbeatSensor_GetData(LUIElement *element, lua_State *luaVM)
{
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_heartbeatsensor.cpp", 75, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_heartbeatsensor.cpp", 76, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (HeartbeatSensorData *)element->customElementData;
}

/*
==============
LUIElement_HeartbeatSensor_ProcessEntities
==============
*/
void LUIElement_HeartbeatSensor_ProcessEntities(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM)
{
  __int64 v5; 
  HeartbeatSensorData *Data; 
  double v7; 
  float v8; 
  CgCompassSystem **v9; 
  CgCompassSystem *v10; 
  __int64 v11; 
  unsigned int v13; 
  bool v14; 
  CgCompassSystem_vtbl *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  double v19; 
  double v20; 
  __int128 v21; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  int v29; 
  __int64 v30; 
  cg_t *LocalClientGlobals; 
  __int64 v32[3]; 
  vec2_t vec; 

  v32[2] = -2i64;
  v5 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Data = LUIElement_HeartbeatSensor_GetData(element, luaVM);
  v7 = I_fclamp(Data->maxDrawRange, Data->range, Data->maxDrawRange);
  v8 = *(float *)&v7 * *(float *)&v7;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType == HALF )
      goto LABEL_8;
    v28 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    v27 = 1;
  }
  else
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_8;
    v28 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    v27 = 2;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v5, v27, v28) )
    __debugbreak();
LABEL_8:
  if ( (unsigned int)v5 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v26) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v25) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  v9 = &CgCompassSystem::ms_compassSystemArray[v5];
  if ( !*v9 )
  {
    LODWORD(v26) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v26) )
      __debugbreak();
  }
  v10 = *v9;
  v11 = 0i64;
  *(float *)&_XMM7 = FLOAT_3_4028235e38;
  v13 = 0;
  v29 = ((__int64 (__fastcall *)(CgCompassSystem *))(*v9)->GetCompassActorCount)(*v9) - 1;
  if ( v29 > 0 )
  {
    do
    {
      v14 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
      v15 = v10->__vftable;
      if ( v14 )
      {
        v16 = (__int64)v15->GetCompassActor(v10, v13);
      }
      else
      {
        v16 = (__int64)v15->GetCompassActor(v10, v13);
        v17 = v10->GetCompassActor(v10, v13);
        if ( CG_Players_ShouldHidePlayerFromLocalPlayer((const LocalClientNum_t)v5, *(_DWORD *)(v17 + 112)) )
          goto LABEL_35;
      }
      if ( (*(_DWORD *)v16 & 3) == 1 )
      {
        if ( !*(_QWORD *)(v16 + 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 177, ASSERT_TYPE_ASSERT, "(actor->lastPos.Get_lastPos)", (const char *)&queryFormat, "actor->lastPos.Get_lastPos") )
          __debugbreak();
        ((void (__fastcall *)(__int64, __int64 *))((v16 + 16) ^ *(_QWORD *)(v16 + 24) ^ s_aab_get_pointer_lastpos))(v16 + 32, v32);
        v18 = v32[0];
        v30 = v32[0];
        memset(v32, 0, 0xCui64);
        vec.v[0] = *(float *)&v30 - LocalClientGlobals->predictedPlayerState.origin.v[0];
        vec.v[1] = *((float *)&v30 + 1) - LocalClientGlobals->predictedPlayerState.origin.v[1];
        v19 = vectoyaw(&vec);
        v20 = AngleDelta(LocalClientGlobals->predictedPlayerState.viewangles.v[1], *(const float *)&v19);
        if ( COERCE_FLOAT(LODWORD(v20) & _xmm) < 90.0 )
        {
          v21 = LODWORD(vec.v[1]);
          *(float *)&v21 = (float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0]);
          _XMM6 = v21;
          if ( *(float *)&v21 <= v8 )
          {
            PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x27u);
            v24 = (unsigned int)PerkNetworkPriorityIndex;
            if ( PerkNetworkPriorityIndex < 0 )
              goto LABEL_39;
            if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
            {
              LODWORD(v26) = 64;
              LODWORD(v25) = PerkNetworkPriorityIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v25, v26) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v24 & 0x1F)) & *(_DWORD *)(v16 + 4 * (v24 >> 5) + 80)) == 0 )
            {
LABEL_39:
              if ( (unsigned int)v11 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_heartbeatsensor.cpp", 224, ASSERT_TYPE_ASSERT, "(currentBlipLocCount < (((200 + 48)) + 8))", (const char *)&queryFormat, "currentBlipLocCount < MAX_COMPASS_AND_MT_ACTORS_COMMON") )
                __debugbreak();
              Data->blipLocations[v11] = (vec2_t)v18;
              v11 = (unsigned int)(v11 + 1);
              if ( (_DWORD)v11 == 255 )
                break;
              __asm { vminss  xmm7, xmm6, xmm7 }
            }
          }
        }
      }
LABEL_35:
      ++v13;
    }
    while ( (int)v13 < v29 );
  }
  Data->numBlipsInFrame = v11;
  Data->closestDistanceInFrame = *(float *)&_XMM7;
  memset(&v30, 0, sizeof(v30));
}

/*
==============
LUIElement_HeartbeatSensor_SetSettings
==============
*/
void LUIElement_HeartbeatSensor_SetSettings(HeartbeatSensorData *data)
{
  HeartbeatSensorTarget targetRTT; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 

  targetRTT = data->targetRTT;
  if ( targetRTT )
  {
    if ( targetRTT == TABLET )
    {
      v3 = DVARFLT_heartbeatSensorTabletRange;
      if ( !DVARFLT_heartbeatSensorTabletRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      LODWORD(data->range) = v3->current.integer;
      v4 = DCONST_DVARFLT_heartbeatSensorTabletIconSize;
      if ( !DCONST_DVARFLT_heartbeatSensorTabletIconSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletIconSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      LODWORD(data->iconSize) = v4->current.integer;
      data->clampRadius = 500.0;
      data->verticalPingOffset = 170.0;
      v5 = DCONST_DVARINT_heartbeatSensorTabletSweepDuration;
      if ( !DCONST_DVARINT_heartbeatSensorTabletSweepDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletSweepDuration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      data->duration = v5->current.integer;
      v6 = DCONST_DVARFLT_heartbeatSensorTabletSweepRadius;
      if ( !DCONST_DVARFLT_heartbeatSensorTabletSweepRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletSweepRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      LODWORD(data->sweepRadius) = v6->current.integer;
      v7 = DCONST_DVARINT_heartbeatSensorTabletSweepDuration;
      if ( !DCONST_DVARINT_heartbeatSensorTabletSweepDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletSweepDuration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      data->sweepDuration = v7->current.integer;
      v8 = DVARINT_heartbeatSensorTabletNextPingTime;
      if ( !DVARINT_heartbeatSensorTabletNextPingTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletNextPingTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      data->nextPingTime = v8->current.integer;
      v9 = DVARFLT_heartbeatSensorTabletMaxDrawRange;
      if ( !DVARFLT_heartbeatSensorTabletMaxDrawRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletMaxDrawRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      LODWORD(data->maxDrawRange) = v9->current.integer;
    }
  }
  else
  {
    v10 = DVARFLT_heartbeatSensorEMPMaxDrawRange;
    if ( !DVARFLT_heartbeatSensorEMPMaxDrawRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPMaxDrawRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    LODWORD(data->maxDrawRange) = v10->current.integer;
    v11 = DCONST_DVARFLT_heartbeatSensorEMPRange;
    if ( !DCONST_DVARFLT_heartbeatSensorEMPRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    LODWORD(data->range) = v11->current.integer;
    v12 = DCONST_DVARFLT_heartbeatSensorEMPIconSize;
    if ( !DCONST_DVARFLT_heartbeatSensorEMPIconSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPIconSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    LODWORD(data->iconSize) = v12->current.integer;
    v13 = DVARINT_heartbeatSensorEMPNextPingTime;
    if ( !DVARINT_heartbeatSensorEMPNextPingTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPNextPingTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    data->nextPingTime = v13->current.integer;
    data->clampRadius = 240.0;
    data->verticalPingOffset = 130.0;
    v14 = DCONST_DVARINT_heartbeatSensorEMPSweepDuration;
    if ( !DCONST_DVARINT_heartbeatSensorEMPSweepDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPSweepDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    data->duration = v14->current.integer;
    v15 = DCONST_DVARFLT_heartbeatSensorEMPSweepRadius;
    if ( !DCONST_DVARFLT_heartbeatSensorEMPSweepRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPSweepRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    LODWORD(data->sweepRadius) = v15->current.integer;
    v16 = DCONST_DVARINT_heartbeatSensorEMPSweepDuration;
    if ( !DCONST_DVARINT_heartbeatSensorEMPSweepDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPSweepDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    data->sweepDuration = v16->current.integer;
  }
}

/*
==============
LUIElement_HeartbeatSensor_Sweep
==============
*/
void LUIElement_HeartbeatSensor_Sweep(const LocalClientNum_t localClientNum, LUIElement *element, const rectDef_s *rect, vec2_t pos, const vec2_t *yawVector, const SecureVec3 *tmpRefdefOrg, lua_State *luaVM)
{
  HeartbeatSensorData *Data; 
  cg_t *LocalClientGlobals; 
  cg_t *v12; 
  int time; 
  const char *v14; 
  const GfxImage *sweepCircle; 
  float v16; 
  float v17; 
  int height; 
  int width; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float h; 
  float w; 
  float x[2]; 

  *(vec2_t *)x = pos;
  Data = LUIElement_HeartbeatSensor_GetData(element, luaVM);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v12 = LocalClientGlobals;
  if ( Data->startTime < 0 )
  {
    time = LocalClientGlobals->time;
    v14 = PING_SOUND_ALIAS;
    Data->startTime = time;
    Data->endTime = Data->duration + time;
    SND_PlaySoundAlias(v14, localClientNum, LocalClientGlobals->predictedPlayerState.groundEntityNum, &LocalClientGlobals->predictedPlayerState.origin, 0, SASYS_CGAME);
    Data->shouldPong = 1;
LABEL_5:
    Data->playerPositionInFrame = *(vec2_t *)&tmpRefdefOrg->x;
    Data->playerYawInFrame = *yawVector;
    LUIElement_HeartbeatSensor_ProcessEntities(localClientNum, element, luaVM);
    goto LABEL_6;
  }
  if ( LocalClientGlobals->time > Data->endTime + Data->nextPingTime )
  {
    Data->startTime = -1;
    goto LABEL_5;
  }
LABEL_6:
  sweepCircle = Data->sweepCircle;
  v16 = (float)(v12->time - Data->startTime) / (float)Data->sweepDuration;
  v17 = v16 * Data->sweepRadius;
  Data->currentRadius = v17;
  height = sweepCircle->height;
  width = sweepCircle->width;
  vertAlign = rect->vertAlign;
  horzAlign = rect->horzAlign;
  w = v17 * 2.0;
  x[1] = (float)((float)((float)((float)height * (float)(v17 * 2.0)) / (float)width) * -0.5) + x[1];
  h = (float)((float)height * (float)(v17 * 2.0)) / (float)width;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  ScrPlace_ApplyRect(ActivePlacement, x, &x[1], &w, &h, horzAlign, vertAlign);
  Data->sweepCenterPosition = *(vec2_t *)x;
  LUI_Render_DrawQuadRotated(localClientNum, element, x[0], x[1], w, h, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0 - v16, Data->sweepCircle, luaVM);
}

/*
==============
LUI_Element_HeartbeatSensor_RenderBlips
==============
*/
void LUI_Element_HeartbeatSensor_RenderBlips(const LocalClientNum_t localClientNum, LUIElement *element, const rectDef_s *rect, const rectDef_s *scaledRect, const vec2_t *yawVector, vec2_t pingStartPos, const float *centerX, const float *centerY, lua_State *luaVM)
{
  HeartbeatSensorData *Data; 
  __int64 v13; 
  CgCompassSystem *CompassSystem; 
  const dvar_t *v15; 
  float value; 
  ScreenPlacement *ActivePlacement; 
  __int128 v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  float *v24; 
  const dvar_t *v25; 
  const vec2_t *p_playerPositionInFrame; 
  float v27; 
  float v28; 
  float v29; 
  float iconSize; 
  float v31; 
  float v32; 
  float clampRadius; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  int v38; 
  int endTime; 
  float v40; 
  HeartbeatSensorData *v41; 
  float v42; 
  float v43; 
  HeartbeatSensorData *v44; 
  cg_t *v45; 
  unsigned int v46; 
  const dvar_t *v47; 
  float v48; 
  double v49; 
  int maskRotation; 
  int alphaScale; 
  float x; 
  float y; 
  float h; 
  int v55; 
  const float *v56; 
  float *v57; 
  CgCompassSystem *v58; 
  const rectDef_s *v59; 
  ScreenPlacement *scrPlace; 
  cg_t *LocalClientGlobals; 
  float w[2]; 
  vec2_t north; 
  vec2_t outSize; 
  vec2_t in; 
  rectDef_s mapRect; 
  vec2_t outClipped; 

  *(vec2_t *)w = pingStartPos;
  v57 = (float *)centerX;
  v56 = centerY;
  v59 = rect;
  Data = LUIElement_HeartbeatSensor_GetData(element, luaVM);
  if ( Data->numBlipsInFrame )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v13 = (__int64)LocalClientGlobals;
    CompassSystem = CgCompassSystem::GetCompassSystem(localClientNum);
    v15 = DCONST_DVARFLT_heartbeatSensorAlphaFalloff;
    v58 = CompassSystem;
    if ( !DCONST_DVARFLT_heartbeatSensorAlphaFalloff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorAlphaFalloff") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    value = v15->current.value;
    ActivePlacement = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
    v18 = *(_OWORD *)&scaledRect->x;
    v19 = scaledRect->y;
    v20 = DCONST_DVARBOOL_hearbeatSensorUseCurrentOrientation;
    *(_DWORD *)&mapRect.horzAlign = *(_DWORD *)&scaledRect->horzAlign;
    scrPlace = ActivePlacement;
    *(_OWORD *)&mapRect.x = v18;
    mapRect.h = *v56 + Data->verticalPingOffset;
    mapRect.y = v19 + Data->verticalPingOffset;
    if ( !DCONST_DVARBOOL_hearbeatSensorUseCurrentOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hearbeatSensorUseCurrentOrientation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      v21 = yawVector->v[1];
      north.v[0] = yawVector->v[0];
    }
    else
    {
      north.v[0] = Data->playerYawInFrame.v[0];
      v21 = Data->playerYawInFrame.v[1];
    }
    north.v[1] = v21;
    if ( Data->targetRTT == TABLET )
    {
      v22 = element->bottom - element->top;
      v23 = element->right - element->left;
      LUI_Render_GetViewportSize(localClientNum, &outSize);
      v24 = (float *)v56;
      LUI_Render_PushMask(localClientNum, *v57, *v56 - Data->verticalPingOffset, v23, v22, 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, &outSize, Data->blipTabletMask);
    }
    else
    {
      v24 = (float *)v56;
    }
    v25 = NULL;
    v55 = 0;
    if ( Data->numBlipsInFrame )
    {
      p_playerPositionInFrame = &Data->playerPositionInFrame;
      v27 = w[1];
      v28 = w[0];
      do
      {
        in = Data->blipLocations[(_QWORD)v25];
        CgCompassSystem::WorldPosToCompass(v58, COMPASS_TYPE_PARTIAL, 0, &mapRect, 0.0, &north, p_playerPositionInFrame, &in, &outSize, &outClipped);
        v29 = outSize.v[1] + *v24;
        iconSize = Data->iconSize;
        alphaScale = v59->vertAlign;
        maskRotation = v59->horzAlign;
        x = outSize.v[0] + *v57;
        y = v29 + Data->verticalPingOffset;
        w[0] = iconSize;
        h = iconSize;
        ScrPlace_ApplyRect(scrPlace, &x, &y, w, &h, maskRotation, alphaScale);
        v31 = x;
        v32 = y;
        clampRadius = Data->clampRadius;
        v34 = x - v28;
        v35 = y - v27;
        v36 = fsqrt((float)(v35 * v35) + (float)(v34 * v34));
        if ( v36 > clampRadius )
        {
          v37 = 1.0 / v36;
          v32 = (float)((float)(v35 * clampRadius) * v37) + v27;
          v31 = (float)((float)(v34 * clampRadius) * v37) + v28;
        }
        v38 = *(_DWORD *)(v13 + 26092);
        endTime = Data->endTime;
        v40 = 0.0;
        if ( v38 <= endTime )
        {
          v41 = LUIElement_HeartbeatSensor_GetData(element, luaVM);
          v42 = (float)(v27 - v32) * (float)(v27 - v32);
          v43 = (float)(v28 - v31) * (float)(v28 - v31);
          if ( (float)(v42 + v43) <= (float)(v41->currentRadius * v41->currentRadius) )
          {
            v40 = FLOAT_1_0;
            v44 = LUIElement_HeartbeatSensor_GetData(element, luaVM);
            if ( v44->shouldPong )
            {
              v45 = CG_GetLocalClientGlobals(localClientNum);
              v46 = SND_PlaySoundAlias(PONG_SOUND_ALIAS, localClientNum, v45->predictedPlayerState.groundEntityNum, &v45->predictedPlayerState.origin, 0, SASYS_CGAME);
              if ( v46 )
              {
                v47 = DCONST_DVARFLT_heartbeatSensorMaxPitchRange;
                v48 = fsqrt(v42 + v43);
                if ( !DCONST_DVARFLT_heartbeatSensorMaxPitchRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorMaxPitchRange") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v47);
                v49 = I_fclamp(v48 / v47->current.value, 0.0, 1.0);
                v25 = DCONST_DVARFLT_heartbeatSensorPitchShiftValue;
                if ( !DCONST_DVARFLT_heartbeatSensorPitchShiftValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorPitchShiftValue") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v25);
                SND_ScaleVoicePitchById(v46, (float)((float)(1.0 - *(float *)&v49) * v25->current.value) + *(float *)&v49, 0);
                LODWORD(v25) = v55;
              }
              v13 = (__int64)LocalClientGlobals;
              v44->shouldPong = 0;
            }
            v24 = (float *)v56;
          }
        }
        else
        {
          v40 = 1.0 - (float)((float)(v38 - endTime) / (float)((float)Data->nextPingTime * value));
        }
        LUI_Render_DrawQuadRotated(localClientNum, element, v31, v32, w[0], h, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, v40, Data->pingIcon, luaVM);
        v25 = (const dvar_t *)(unsigned int)((_DWORD)v25 + 1);
        p_playerPositionInFrame = &Data->playerPositionInFrame;
        v55 = (int)v25;
      }
      while ( (unsigned int)v25 < Data->numBlipsInFrame );
    }
    if ( Data->targetRTT == TABLET )
      LUI_Render_PopMask(localClientNum);
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupHeartbeatSensor
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupHeartbeatSensor(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupHeartbeatSensor_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupHeartbeatSensor_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupHeartbeatSensor_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  HeartbeatSensorData *v3; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = LUIElement_HeartbeatSensorRender;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = (HeartbeatSensorData *)j_lua_newuserdata(luaVM, 0x878ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  memset_0(v3, 0, sizeof(HeartbeatSensorData));
  v3->sweepCircle = Image_Register("heart_sensor_glow_ring", IMAGE_TRACK_HUD);
  v3->pingIcon = Image_Register("heart_sensor_ping", IMAGE_TRACK_HUD);
  v3->blipTabletMask = Image_Register("ui_hori_mask", IMAGE_TRACK_UI);
  v3->startTime = -1;
  v3->targetRTT = EMP;
  v3->numBlipsInFrame = 0;
  v3->shouldPong = 1;
  v3->constructTime = -1;
  j_lua_getfield(luaVM, 2, "TargetRTT");
  if ( j_lua_isnumber(luaVM, -1) )
    v3->targetRTT = lui_tointeger32(luaVM, -1);
  j_lua_settop(luaVM, -2);
  LUIElement_HeartbeatSensor_SetSettings(v3);
  return 0i64;
}

