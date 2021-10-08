/*
==============
LUIElement_HeartbeatSensorRender
==============
*/
void LUIElement_HeartbeatSensorRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  HeartbeatSensorData *Data; 
  HeartbeatSensorData *v16; 
  const dvar_t *v17; 
  const ScreenPlacement *ActivePlacement; 
  CgCompassSystem *CompassSystem; 
  CompassDisplay v32; 
  unsigned int refdefViewOrg_aab; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  OmnvarData *v40; 
  float fmt; 
  float centerY; 
  float centerX; 
  SecureVec3 playerWorldPos; 
  float outAngle[2]; 
  CgCompassSystem *v52; 
  __int64 v53; 
  vec2_t pos; 
  rectDef_s x; 
  vec2_t pingStartPos; 
  vec2_t outVector; 
  rectDef_s mapRect; 
  rectDef_s parentRect; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  v53 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBX = element;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->nextSnap )
  {
    Data = LUIElement_HeartbeatSensor_GetData(_RBX, luaVM);
    v16 = Data;
    if ( Data->constructTime == -1 )
      Data->constructTime = LocalClientGlobals->time;
    v17 = DCONST_DVARINT_heartbeatSensorInitialSweepDelay;
    if ( !DCONST_DVARINT_heartbeatSensorInitialSweepDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorInitialSweepDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v16->constructTime + v17->current.integer <= LocalClientGlobals->time )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovups xmmword ptr [rbp+40h+parentRect.x], xmm0
      }
      *(_WORD *)&parentRect.horzAlign = 1285;
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+0CCh]
        vmovss  [rbp+40h+x], xmm1
        vmovss  xmm3, dword ptr [rbx+0D0h]
        vmovss  [rbp+40h+y], xmm3
        vmovss  xmm0, dword ptr [rbx+0D4h]
        vsubss  xmm1, xmm0, xmm1
        vmovss  [rbp+40h+w], xmm1
        vmovss  xmm2, dword ptr [rbx+0D8h]
        vsubss  xmm0, xmm2, xmm3
        vmovss  [rbp+40h+h], xmm0
      }
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      ScrPlace_ApplyRect(ActivePlacement, &x.x, &x.y, &x.w, &x.h, 5, 5);
      *(_WORD *)&x.horzAlign = 1285;
      CG_CompassCalcDimensions(COMPASS_TYPE_PARTIAL, LocalClientGlobals, &parentRect, &x, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
      __asm
      {
        vmovss  xmm2, cs:__real@3f000000
        vmulss  xmm1, xmm2, [rbp+40h+mapRect.w]
        vaddss  xmm6, xmm1, [rbp+40h+mapRect.x]
        vmovss  [rsp+140h+centerX], xmm6
        vmulss  xmm1, xmm2, [rbp+40h+mapRect.h]
        vaddss  xmm7, xmm1, [rbp+40h+mapRect.y]
        vmovss  [rsp+140h+centerY], xmm7
      }
      CompassSystem = CgCompassSystem::GetCompassSystem(localClientNum);
      v52 = CompassSystem;
      CgCompassSystem::GetCompassYaw(CompassSystem, COMPASS_TYPE_PARTIAL, 0, LocalClientGlobals, outAngle, &outVector);
      v32 = COMPASS_DISPLAY_HEARTBEATSENSOR_TABLET;
      if ( v16->targetRTT == EMP )
        v32 = COMPASS_DISPLAY_HEARTBEATSENSOR_EMP;
      CgCompassSystem::SetCurrentCompassDisplayType(CompassSystem, v32);
      if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
        __debugbreak();
      refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
      if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
        __debugbreak();
      LODWORD(playerWorldPos.x) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
      LODWORD(playerWorldPos.y) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
      LODWORD(pingStartPos.v[0]) = refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944);
      LODWORD(playerWorldPos.z) = (LODWORD(pingStartPos.v[0]) * (LODWORD(pingStartPos.v[0]) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+140h+fmt], xmm0
      }
      CgCompassSystem::WorldPosToCompass(v52, COMPASS_TYPE_PARTIAL, 0, &mapRect, fmt, &outVector, (const vec2_t *)&playerWorldPos, (const vec2_t *)&LocalClientGlobals->predictedPlayerState.origin, NULL, &pos);
      __asm
      {
        vaddss  xmm3, xmm6, dword ptr [rbp+40h+pos]
        vmovss  dword ptr [rbp+40h+pos], xmm3
        vaddss  xmm1, xmm7, dword ptr [rsi+85Ch]
        vaddss  xmm2, xmm1, dword ptr [rbp+40h+pos+4]
        vmovss  dword ptr [rbp+40h+pos+4], xmm2
        vmovss  dword ptr [rbp+40h+pingStartPos], xmm3
        vmovss  dword ptr [rbp+40h+pingStartPos+4], xmm2
      }
      IndexByName = BG_Omnvar_GetIndexByName("ui_scrambler_strength");
      Def = BG_Omnvar_GetDef(IndexByName);
      v40 = CG_Omnvar_GetData(localClientNum, IndexByName);
      if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@3e4ccccd; glitchAmount
      }
      LUI_Render_PushGlitch(*(float *)&_XMM0);
      LUIElement_HeartbeatSensor_Sweep(localClientNum, _RBX, &x, pos, &outVector, &playerWorldPos, luaVM);
      LUI_Element_HeartbeatSensor_RenderBlips(localClientNum, _RBX, &x, &mapRect, &outVector, pingStartPos, &centerX, &centerY, luaVM);
      LUIElement_HeartbeatSensor_DrawDistance(localClientNum, _RBX, luaVM);
      LUI_Render_PopGlitch();
      memset(&playerWorldPos, 0, sizeof(playerWorldPos));
    }
  }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
LUIElement_HeartbeatSensor_DrawDistance
==============
*/
void LUIElement_HeartbeatSensor_DrawDistance(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM)
{
  char v20; 
  const char *v33; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  int fontSize; 
  float v71; 
  vec4_t color; 
  vec4_t quadVerts[4]; 
  char _Buffer[32]; 

  _RSI = element;
  _RDI = LUIElement_HeartbeatSensor_GetData(element, luaVM);
  if ( _RDI->numBlipsInFrame )
  {
    _RBX = DCONST_DVARVEC4_compassMainHUDColor;
    if ( !DCONST_DVARVEC4_compassMainHUDColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMainHUDColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [rsp+198h+color], xmm0
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rsp+198h+color+4], xmm1
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovss  dword ptr [rsp+198h+color+8], xmm0
      vmovss  xmm1, dword ptr [rbx+34h]
      vmovss  dword ptr [rsp+198h+color+0Ch], xmm1
      vmovss  xmm0, dword ptr [rdi+844h]
      vcomiss xmm0, cs:__real@7f7fffff
    }
    if ( v20 )
    {
      __asm
      {
        vmovaps [rsp+198h+var_48], xmm6
        vmovaps [rsp+198h+var_58], xmm7
        vmovaps [rsp+198h+var_68], xmm8
        vmovaps [rsp+198h+var_78], xmm9
        vsqrtss xmm0, xmm0, xmm0
        vmulss  xmm6, xmm0, cs:__real@3cd013a9
        vcvtss2sd xmm3, xmm6, xmm6
        vmovaps [rsp+198h+var_88], xmm10
        vmovq   r9, xmm3
        vmovaps [rsp+198h+var_98], xmm11
        vmovaps [rsp+198h+var_A8], xmm12
      }
      j_snprintf(_Buffer, 0x20ui64, "%.1fm", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0D4h]
        vmovss  xmm1, dword ptr [rsi+0D8h]
        vsubss  xmm11, xmm0, dword ptr [rsi+0CCh]
        vsubss  xmm12, xmm1, dword ptr [rsi+0D0h]
      }
      if ( _RDI->targetRTT )
      {
        _RBX = DCONST_DVARVEC2_heartbeatSensorTabletDistanceTextOffset;
        if ( !DCONST_DVARVEC2_heartbeatSensorTabletDistanceTextOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletDistanceTextOffset") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm9, dword ptr [rbx+28h]
          vmovss  xmm10, dword ptr [rbx+2Ch]
        }
        _RBX = DCONST_DVARFLT_heartbeatSensorTabletFontScalar;
        if ( DCONST_DVARFLT_heartbeatSensorTabletFontScalar )
          goto LABEL_19;
        v33 = "heartbeatSensorTabletFontScalar";
      }
      else
      {
        _RBX = DCONST_DVARVEC2_heartbeatSensorEMPDistanceTextOffset;
        if ( !DCONST_DVARVEC2_heartbeatSensorEMPDistanceTextOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPDistanceTextOffset") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm9, dword ptr [rbx+28h]
          vmovss  xmm10, dword ptr [rbx+2Ch]
        }
        _RBX = DCONST_DVARFLT_heartbeatSensorEMPFontScalar;
        if ( DCONST_DVARFLT_heartbeatSensorEMPFontScalar )
          goto LABEL_19;
        v33 = "heartbeatSensorEMPFontScalar";
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v33) )
        __debugbreak();
LABEL_19:
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm8, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_heartbeatSensorEnemyDistanceWarningThreshold;
      if ( !DCONST_DVARFLT_heartbeatSensorEnemyDistanceWarningThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEnemyDistanceWarningThreshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( v20 )
      {
        _RBX = DCONST_DVARVEC4_heartbeatSensorEnemyDistanceWarningColor;
        if ( !DCONST_DVARVEC4_heartbeatSensorEnemyDistanceWarningColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEnemyDistanceWarningColor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmovss  dword ptr [rsp+198h+color], xmm0
          vmovss  xmm1, dword ptr [rbx+2Ch]
          vmovss  dword ptr [rsp+198h+color+4], xmm1
          vmovss  xmm0, dword ptr [rbx+30h]
          vmovss  dword ptr [rsp+198h+color+8], xmm0
          vmovss  xmm1, dword ptr [rbx+34h]
          vmovss  dword ptr [rsp+198h+color+0Ch], xmm1
        }
      }
      *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
      __asm { vmovaps xmm7, xmm0 }
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      __asm { vmovss  xmm2, cs:__real@3f800000; scale }
      font = UI_GetFontHandle(ActivePlacement, 1, *(float *)&_XMM2);
      R_TextHeight(font);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm2, xmm1, xmm8
        vcvttss2si ebx, xmm2
      }
      R_TextWidth(_Buffer, 0, font, _EBX);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm3, xmm0, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
        vmulss  xmm0, xmm10, xmm12
        vmulss  xmm6, xmm1, xmm7
        vaddss  xmm1, xmm0, dword ptr [rsi+0D0h]; top
        vmulss  xmm0, xmm3, xmm7
        vmulss  xmm2, xmm9, xmm11
        vaddss  xmm4, xmm2, dword ptr [rsi+0CCh]
        vaddss  xmm2, xmm0, xmm4; right
        vsubss  xmm0, xmm4, xmm0; left
        vaddss  xmm3, xmm1, xmm6; bottom
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
      __asm
      {
        vcvttss2si eax, xmm6
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+198h+var_150], xmm0
      }
      LUI_Render_DrawText(localClientNum, luaVM, _RSI, (const vec4_t (*)[4])quadVerts, &color, font, _Buffer, 0, 0, v71, fontSize, NULL, NULL);
      __asm
      {
        vmovaps xmm12, [rsp+198h+var_A8]
        vmovaps xmm11, [rsp+198h+var_98]
        vmovaps xmm10, [rsp+198h+var_88]
        vmovaps xmm9, [rsp+198h+var_78]
        vmovaps xmm8, [rsp+198h+var_68]
        vmovaps xmm7, [rsp+198h+var_58]
        vmovaps xmm6, [rsp+198h+var_48]
      }
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
  __int64 v11; 
  CgCompassSystem **v17; 
  CgCompassSystem *v18; 
  __int64 v19; 
  unsigned int v21; 
  CgCompassSystem_vtbl *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  char v35; 
  bool v36; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v44; 
  __int64 v51; 
  __int64 v52; 
  int v53; 
  int v54; 
  int v55; 
  __int64 v56; 
  cg_t *LocalClientGlobals; 
  __int64 v58[3]; 
  vec2_t vec; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  v58[2] = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  v11 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _R13 = LUIElement_HeartbeatSensor_GetData(element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+850h]; val
    vmovaps xmm2, xmm0; max
    vmovss  xmm1, dword ptr [rax+854h]; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmulss  xmm8, xmm0, xmm0 }
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType == HALF )
      goto LABEL_8;
    v54 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    v53 = 1;
  }
  else
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_8;
    v54 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    v53 = 2;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v11, v53, v54) )
    __debugbreak();
LABEL_8:
  if ( (unsigned int)v11 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v52) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v51) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v51, v52) )
      __debugbreak();
  }
  v17 = &CgCompassSystem::ms_compassSystemArray[v11];
  if ( !*v17 )
  {
    LODWORD(v52) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v52) )
      __debugbreak();
  }
  v18 = *v17;
  v19 = 0i64;
  __asm { vmovss  xmm7, cs:__real@7f7fffff }
  v21 = 0;
  v55 = ((__int64 (__fastcall *)(CgCompassSystem *))(*v17)->GetCompassActorCount)(*v17) - 1;
  if ( v55 > 0 )
  {
    __asm
    {
      vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm10, cs:__real@42b40000
    }
    do
    {
      v36 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
      v24 = v18->__vftable;
      if ( v36 )
      {
        v25 = (__int64)v24->GetCompassActor(v18, v21);
      }
      else
      {
        v25 = (__int64)v24->GetCompassActor(v18, v21);
        v26 = v18->GetCompassActor(v18, v21);
        if ( CG_Players_ShouldHidePlayerFromLocalPlayer((const LocalClientNum_t)v11, *(_DWORD *)(v26 + 112)) )
          goto LABEL_36;
      }
      if ( (*(_DWORD *)v25 & 3) == 1 )
      {
        if ( !*(_QWORD *)(v25 + 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 177, ASSERT_TYPE_ASSERT, "(actor->lastPos.Get_lastPos)", (const char *)&queryFormat, "actor->lastPos.Get_lastPos") )
          __debugbreak();
        ((void (__fastcall *)(__int64, __int64 *))((v25 + 16) ^ *(_QWORD *)(v25 + 24) ^ s_aab_get_pointer_lastpos))(v25 + 32, v58);
        v27 = v58[0];
        v56 = v58[0];
        memset(v58, 0, 0xCui64);
        __asm { vmovss  xmm0, dword ptr [rsp+118h+var_C0] }
        _RDI = LocalClientGlobals;
        __asm
        {
          vsubss  xmm1, xmm0, dword ptr [rdi+38h]
          vmovss  dword ptr [rsp+118h+vec], xmm1
          vmovss  xmm2, dword ptr [rsp+118h+var_C0+4]
          vsubss  xmm0, xmm2, dword ptr [rdi+3Ch]
          vmovss  dword ptr [rsp+118h+vec+4], xmm0
        }
        *(double *)&_XMM0 = vectoyaw(&vec);
        __asm
        {
          vmovaps xmm1, xmm0; angle2
          vmovss  xmm0, dword ptr [rdi+1E4h]; angle1
        }
        *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vandps  xmm0, xmm0, xmm9
          vcomiss xmm0, xmm10
        }
        if ( v35 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+118h+vec+4]
            vmulss  xmm3, xmm0, xmm0
            vmovss  xmm1, dword ptr [rsp+118h+vec]
            vmulss  xmm2, xmm1, xmm1
            vaddss  xmm6, xmm3, xmm2
            vcomiss xmm6, xmm8
          }
          if ( v35 | v36 )
          {
            PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x27u);
            v44 = (unsigned int)PerkNetworkPriorityIndex;
            if ( PerkNetworkPriorityIndex < 0 )
              goto LABEL_40;
            if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
            {
              LODWORD(v52) = 64;
              LODWORD(v51) = PerkNetworkPriorityIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v51, v52) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v44 & 0x1F)) & *(_DWORD *)(v25 + 4 * (v44 >> 5) + 80)) == 0 )
            {
LABEL_40:
              if ( (unsigned int)v19 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_heartbeatsensor.cpp", 224, ASSERT_TYPE_ASSERT, "(currentBlipLocCount < (((200 + 48)) + 8))", (const char *)&queryFormat, "currentBlipLocCount < MAX_COMPASS_AND_MT_ACTORS_COMMON") )
                __debugbreak();
              _R13->blipLocations[v19] = (vec2_t)v27;
              v19 = (unsigned int)(v19 + 1);
              if ( (_DWORD)v19 == 255 )
                break;
              __asm { vminss  xmm7, xmm6, xmm7 }
            }
          }
        }
      }
LABEL_36:
      ++v21;
    }
    while ( (int)v21 < v55 );
  }
  _R13->numBlipsInFrame = v19;
  __asm { vmovss  dword ptr [r13+844h], xmm7 }
  memset(&v56, 0, sizeof(v56));
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
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
  cg_t *LocalClientGlobals; 
  int time; 
  const char *v17; 
  int v25; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  int timeshift; 
  float system; 
  int vertAlign; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float h; 
  float w; 
  float x[2]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  *(vec2_t *)x = pos;
  _RSI = LUIElement_HeartbeatSensor_GetData(element, luaVM);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( _RSI->startTime < 0 )
  {
    time = LocalClientGlobals->time;
    v17 = PING_SOUND_ALIAS;
    _RSI->startTime = time;
    _RSI->endTime = _RSI->duration + time;
    SND_PlaySoundAlias(v17, localClientNum, LocalClientGlobals->predictedPlayerState.groundEntityNum, &LocalClientGlobals->predictedPlayerState.origin, 0, SASYS_CGAME);
    _RSI->shouldPong = 1;
LABEL_5:
    _RSI->playerPositionInFrame = *(vec2_t *)&tmpRefdefOrg->x;
    _RSI->playerYawInFrame = *yawVector;
    LUIElement_HeartbeatSensor_ProcessEntities(localClientNum, element, luaVM);
    goto LABEL_6;
  }
  if ( LocalClientGlobals->time > _RSI->endTime + _RSI->nextPingTime )
  {
    _RSI->startTime = -1;
    goto LABEL_5;
  }
LABEL_6:
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+870h]
    vdivss  xmm6, xmm1, xmm0
    vmulss  xmm2, xmm6, dword ptr [rsi+860h]
    vmulss  xmm1, xmm2, cs:__real@40000000
    vmovss  dword ptr [rsi+24h], xmm2
  }
  v25 = rect->vertAlign;
  horzAlign = rect->horzAlign;
  __asm
  {
    vmovss  [rsp+0F8h+w], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edx
    vdivss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, cs:__real@bf000000
    vaddss  xmm1, xmm2, [rsp+0F8h+x+4]
    vmovss  [rsp+0F8h+x+4], xmm1
    vmovss  [rsp+0F8h+h], xmm0
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  ScrPlace_ApplyRect(ActivePlacement, x, &x[1], &w, &h, horzAlign, v25);
  __asm { vmovss  xmm1, cs:__real@3f800000 }
  _RSI->sweepCenterPosition = *(vec2_t *)x;
  __asm
  {
    vmovss  xmm3, [rsp+0F8h+x+4]; centerY
    vmovss  xmm2, [rsp+0F8h+x]; centerX
    vsubss  xmm0, xmm1, xmm6
    vmovss  [rsp+0F8h+var_88], xmm0
    vmovss  [rsp+0F8h+var_90], xmm1
    vmovss  [rsp+0F8h+var_98], xmm1
    vmovss  [rsp+0F8h+var_A0], xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0F8h+var_A8], xmm0
    vmovss  [rsp+0F8h+var_B0], xmm1
    vmovss  [rsp+0F8h+var_B8], xmm1
    vmovss  xmm1, [rsp+0F8h+w]
    vmovss  [rsp+0F8h+var_C0], xmm0
    vmovss  [rsp+0F8h+vertAlign], xmm0
    vmovss  xmm0, [rsp+0F8h+h]
    vmovss  [rsp+0F8h+system], xmm0
    vmovss  [rsp+0F8h+timeshift], xmm1
  }
  LUI_Render_DrawQuadRotated(localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&timeshift, system, *(float *)&vertAlign, v47, v48, v49, v50, v51, v52, v53, v54, _RSI->sweepCircle, luaVM);
  __asm { vmovaps xmm6, [rsp+0F8h+var_48] }
}

/*
==============
LUI_Element_HeartbeatSensor_RenderBlips
==============
*/
void LUI_Element_HeartbeatSensor_RenderBlips(const LocalClientNum_t localClientNum, LUIElement *element, const rectDef_s *rect, const rectDef_s *scaledRect, const vec2_t *yawVector, vec2_t pingStartPos, const float *centerX, const float *centerY, lua_State *luaVM)
{
  __int64 v22; 
  CgCompassSystem *CompassSystem; 
  ScreenPlacement *ActivePlacement; 
  const dvar_t *v29; 
  bool v39; 
  const dvar_t *v51; 
  const vec2_t *p_playerPositionInFrame; 
  char v70; 
  HeartbeatSensorData *Data; 
  cg_t *v90; 
  unsigned int v91; 
  const dvar_t *v92; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float maskRotation; 
  int maskRotationa; 
  float maskRotationb; 
  float alphaScale; 
  int alphaScalea; 
  float alphaScaleb; 
  float in; 
  float ina; 
  float applyParallax; 
  float outClipped; 
  float outClippeda; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float viewportSize; 
  float image; 
  float x; 
  float y; 
  float h; 
  int v139; 
  const float *v140; 
  const float *v141; 
  CgCompassSystem *v142; 
  const rectDef_s *v143; 
  ScreenPlacement *scrPlace; 
  cg_t *LocalClientGlobals; 
  float w[2]; 
  vec2_t north; 
  vec2_t outSize; 
  vec2_t v149; 
  rectDef_s mapRect; 
  vec2_t v151; 

  _R15 = element;
  *(vec2_t *)w = pingStartPos;
  v141 = centerX;
  _R14 = scaledRect;
  v140 = centerY;
  v143 = rect;
  _RBX = LUIElement_HeartbeatSensor_GetData(element, luaVM);
  if ( _RBX->numBlipsInFrame )
  {
    __asm
    {
      vmovaps [rsp+1F0h+var_70], xmm8
      vmovaps [rsp+1F0h+var_80], xmm9
      vmovaps [rsp+1F0h+var_D0], xmm14
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v22 = (__int64)LocalClientGlobals;
    CompassSystem = CgCompassSystem::GetCompassSystem(localClientNum);
    _RDI = DCONST_DVARFLT_heartbeatSensorAlphaFalloff;
    v142 = CompassSystem;
    if ( !DCONST_DVARFLT_heartbeatSensorAlphaFalloff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorAlphaFalloff") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm14, dword ptr [rdi+28h] }
    ActivePlacement = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovss  xmm2, dword ptr [r14+4]
    }
    v29 = DCONST_DVARBOOL_hearbeatSensorUseCurrentOrientation;
    *(_DWORD *)&mapRect.horzAlign = *(_DWORD *)&_R14->horzAlign;
    _RCX = v140;
    scrPlace = ActivePlacement;
    __asm
    {
      vmovups xmmword ptr [rbp+0E0h+mapRect.x], xmm0
      vmovss  xmm0, dword ptr [rcx]
      vaddss  xmm1, xmm0, dword ptr [rbx+85Ch]
      vmovss  [rbp+0E0h+mapRect.h], xmm1
      vaddss  xmm0, xmm2, dword ptr [rbx+85Ch]
      vmovss  [rbp+0E0h+mapRect.y], xmm0
    }
    if ( !DCONST_DVARBOOL_hearbeatSensorUseCurrentOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hearbeatSensorUseCurrentOrientation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.enabled )
    {
      _RAX = yawVector;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  dword ptr [rbp+0E0h+north], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmovss  dword ptr [rbp+0E0h+north], xmm0
        vmovss  xmm1, dword ptr [rbx+2Ch]
      }
    }
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vmovss  dword ptr [rbp+0E0h+north+4], xmm1
    }
    v39 = _RBX->targetRTT == TABLET;
    __asm
    {
      vmovaps [rsp+1F0h+var_50], xmm6
      vmovaps [rsp+1F0h+var_60], xmm7
      vxorps  xmm9, xmm9, xmm9
    }
    if ( v39 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15+0D8h]
        vmovss  xmm1, dword ptr [r15+0D4h]
        vsubss  xmm7, xmm0, dword ptr [r15+0D0h]
        vsubss  xmm6, xmm1, dword ptr [r15+0CCh]
      }
      LUI_Render_GetViewportSize(localClientNum, &outSize);
      _R14 = v140;
      _RAX = v141;
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vsubss  xmm2, xmm0, dword ptr [rbx+85Ch]; maskCenterY
        vmovss  [rsp+1F0h+var_190], xmm8
        vmovss  xmm1, dword ptr [rax]; maskCenterX
        vmovss  [rsp+1F0h+var_198], xmm8
        vmovss  [rsp+1F0h+var_1A0], xmm9
        vmovss  dword ptr [rsp+1F0h+outClipped], xmm9
        vmovss  dword ptr [rsp+1F0h+in], xmm9
        vmovss  [rsp+1F0h+alphaScale], xmm8
        vmovss  [rsp+1F0h+maskRotation], xmm9
        vmovaps xmm3, xmm6; maskWidth
        vmovss  dword ptr [rsp+1F0h+fmt], xmm7
      }
      LUI_Render_PushMask(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, maskRotation, alphaScale, in, 0, outClipped, v128, v130, v132, &outSize, _RBX->blipTabletMask);
    }
    v51 = NULL;
    v139 = 0;
    if ( _RBX->numBlipsInFrame )
    {
      __asm { vmovaps [rsp+1F0h+var_90], xmm10 }
      p_playerPositionInFrame = &_RBX->playerPositionInFrame;
      __asm
      {
        vmovaps [rsp+1F0h+var_A0], xmm11
        vmovaps [rsp+1F0h+var_B0], xmm12
        vmovss  xmm12, [rbp+0E0h+w+4]
        vmovaps [rsp+1F0h+var_C0], xmm13
        vmovss  xmm13, [rbp+0E0h+w]
      }
      do
      {
        v149 = _RBX->blipLocations[(_QWORD)v51];
        __asm { vmovss  dword ptr [rsp+1F0h+fmt], xmm9 }
        CgCompassSystem::WorldPosToCompass(v142, COMPASS_TYPE_PARTIAL, 0, &mapRect, fmta, &north, p_playerPositionInFrame, &v149, &outSize, &v151);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0E0h+outSize]
          vmovss  xmm2, dword ptr [rbp+0E0h+outSize+4]
          vaddss  xmm1, xmm0, dword ptr [rax]
          vaddss  xmm0, xmm2, dword ptr [r14]
          vmovss  xmm2, dword ptr [rbx+864h]
        }
        alphaScalea = v143->vertAlign;
        maskRotationa = v143->horzAlign;
        __asm
        {
          vmovss  [rbp+0E0h+x], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+85Ch]
          vmovss  [rbp+0E0h+y], xmm1
          vmovss  [rbp+0E0h+w], xmm2
          vmovss  [rbp+0E0h+h], xmm2
        }
        ScrPlace_ApplyRect(scrPlace, &x, &y, w, &h, maskRotationa, alphaScalea);
        __asm
        {
          vmovss  xmm10, [rbp+0E0h+x]
          vmovss  xmm11, [rbp+0E0h+y]
          vmovss  xmm2, dword ptr [rbx+858h]
          vsubss  xmm4, xmm10, xmm13
          vsubss  xmm5, xmm11, xmm12
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm3, xmm1, xmm1
          vcomiss xmm3, xmm2
        }
        if ( !(v70 | v39) )
        {
          __asm
          {
            vmulss  xmm0, xmm4, xmm2
            vdivss  xmm3, xmm8, xmm3
            vmulss  xmm1, xmm0, xmm3
            vmulss  xmm2, xmm5, xmm2
            vmulss  xmm0, xmm2, xmm3
            vaddss  xmm11, xmm0, xmm12
            vaddss  xmm10, xmm1, xmm13
          }
        }
        __asm { vmovaps xmm7, xmm9 }
        if ( *(_DWORD *)(v22 + 26092) <= _RBX->endTime )
        {
          _RAX = LUIElement_HeartbeatSensor_GetData(_R15, luaVM);
          __asm
          {
            vsubss  xmm0, xmm12, xmm11
            vmulss  xmm2, xmm0, xmm0
            vsubss  xmm1, xmm13, xmm10
            vmovss  xmm3, dword ptr [rax+24h]
            vmulss  xmm1, xmm1, xmm1
            vmulss  xmm0, xmm3, xmm3
            vaddss  xmm6, xmm2, xmm1
            vcomiss xmm6, xmm0
          }
          if ( v70 | v39 )
          {
            __asm { vmovaps xmm7, xmm8 }
            Data = LUIElement_HeartbeatSensor_GetData(_R15, luaVM);
            if ( Data->shouldPong )
            {
              v90 = CG_GetLocalClientGlobals(localClientNum);
              v91 = SND_PlaySoundAlias(PONG_SOUND_ALIAS, localClientNum, v90->predictedPlayerState.groundEntityNum, &v90->predictedPlayerState.origin, 0, SASYS_CGAME);
              if ( v91 )
              {
                v92 = DCONST_DVARFLT_heartbeatSensorMaxPitchRange;
                __asm { vsqrtss xmm6, xmm6, xmm6 }
                if ( !DCONST_DVARFLT_heartbeatSensorMaxPitchRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorMaxPitchRange") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v92);
                __asm
                {
                  vdivss  xmm0, xmm6, dword ptr [rdi+28h]; val
                  vmovaps xmm2, xmm8; max
                  vmovaps xmm1, xmm9; min
                }
                *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v51 = DCONST_DVARFLT_heartbeatSensorPitchShiftValue;
                __asm { vmovaps xmm6, xmm0 }
                if ( !DCONST_DVARFLT_heartbeatSensorPitchShiftValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorPitchShiftValue") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v51);
                __asm
                {
                  vsubss  xmm0, xmm8, xmm6
                  vmulss  xmm0, xmm0, dword ptr [rdi+28h]
                  vaddss  xmm1, xmm0, xmm6; pitch
                }
                SND_ScaleVoicePitchById(v91, *(float *)&_XMM1, 0);
                LODWORD(v51) = v139;
              }
              v22 = (__int64)LocalClientGlobals;
              Data->shouldPong = 0;
            }
          }
        }
        else
        {
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+86Ch]
            vmulss  xmm1, xmm0, xmm14
            vcvtsi2ss xmm2, xmm2, eax
            vdivss  xmm2, xmm2, xmm1
            vsubss  xmm7, xmm8, xmm2
          }
        }
        __asm
        {
          vmovss  xmm0, [rbp+0E0h+h]
          vmovss  xmm1, [rbp+0E0h+w]
          vmovss  dword ptr [rsp+1F0h+image], xmm7
          vmovss  dword ptr [rsp+1F0h+viewportSize], xmm8
          vmovss  [rsp+1F0h+var_190], xmm8
          vmovss  [rsp+1F0h+var_198], xmm8
          vmovss  [rsp+1F0h+var_1A0], xmm9
          vmovss  dword ptr [rsp+1F0h+outClipped], xmm8
          vmovss  dword ptr [rsp+1F0h+applyParallax], xmm8
          vmovss  dword ptr [rsp+1F0h+in], xmm9
          vmovss  [rsp+1F0h+alphaScale], xmm9
          vmovss  [rsp+1F0h+maskRotation], xmm0
          vmovaps xmm3, xmm11; centerY
          vmovaps xmm2, xmm10; centerX
          vmovss  dword ptr [rsp+1F0h+fmt], xmm1
        }
        LUI_Render_DrawQuadRotated(localClientNum, _R15, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, maskRotationb, alphaScaleb, ina, applyParallax, outClippeda, v129, v131, v133, viewportSize, image, _RBX->pingIcon, luaVM);
        v51 = (const dvar_t *)(unsigned int)((_DWORD)v51 + 1);
        p_playerPositionInFrame = &_RBX->playerPositionInFrame;
        v139 = (int)v51;
      }
      while ( (unsigned int)v51 < _RBX->numBlipsInFrame );
      __asm
      {
        vmovaps xmm13, [rsp+1F0h+var_C0]
        vmovaps xmm12, [rsp+1F0h+var_B0]
        vmovaps xmm11, [rsp+1F0h+var_A0]
        vmovaps xmm10, [rsp+1F0h+var_90]
      }
    }
    __asm
    {
      vmovaps xmm14, [rsp+1F0h+var_D0]
      vmovaps xmm9, [rsp+1F0h+var_80]
      vmovaps xmm8, [rsp+1F0h+var_70]
      vmovaps xmm7, [rsp+1F0h+var_60]
      vmovaps xmm6, [rsp+1F0h+var_50]
    }
    if ( _RBX->targetRTT == TABLET )
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

