/*
==============
LUIElement_RadialSensorRender
==============
*/
void LUIElement_RadialSensorRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v21; 
  cg_t *v22; 
  const ScreenPlacement *ActivePlacement; 
  CgCompassSystem *v36; 
  unsigned int refdefViewOrg_aab; 
  int v44; 
  entityState_t *entities; 
  __int64 number; 
  CgEntitySystem *v51; 
  __int64 v52; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  const GfxImage **p_pingImage; 
  const dvar_t *v69; 
  int v102; 
  int v103; 
  const ScreenPlacement *v104; 
  lua_State *v105; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  __int64 vertAlign; 
  __int64 vertAligna; 
  int vertAlignb; 
  int vertAlignc; 
  vec2_t *in; 
  float ina; 
  float inb; 
  float out; 
  float outa; 
  float outClipped; 
  float outClippeda; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float width; 
  float v155; 
  float v156; 
  vec2_t v157[2]; 
  float outAngle; 
  LUIElement *elementa; 
  lua_State *v162; 
  vec2_t playerWorldPos[2]; 
  const CgSnapshotMP *NextSnap; 
  CgCompassSystem *v165; 
  ScreenPlacement *scrPlace; 
  RadialSensorData *Data; 
  __int64 v168; 
  vec2_t pos; 
  rectDef_s x; 
  rectDef_s mapRect; 
  vec2_t v172; 
  vec2_t outVector; 
  rectDef_s parentRect; 
  char v175; 
  void *retaddr; 

  _RAX = &retaddr;
  v168 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R15 = element;
  elementa = element;
  v21 = localClientNum;
  v162 = luaVM;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v21] )
  {
    LODWORD(vertAlign) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", vertAlign) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(vertAlign) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", vertAlign) )
      __debugbreak();
  }
  v22 = cg_t::ms_cgArray[v21];
  if ( v22->nextSnap )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [rbp+140h+parentRect.x], xmm0
    }
    *(_WORD *)&parentRect.horzAlign = 1285;
    __asm
    {
      vmovss  xmm1, dword ptr [r15+0CCh]
      vmovss  [rbp+140h+x], xmm1
      vmovss  xmm3, dword ptr [r15+0D0h]
      vmovss  [rbp+140h+y], xmm3
      vmovss  xmm0, dword ptr [r15+0D4h]
      vsubss  xmm1, xmm0, xmm1
      vmovss  [rbp+140h+w], xmm1
      vmovss  xmm2, dword ptr [r15+0D8h]
      vsubss  xmm0, xmm2, xmm3
      vmovss  [rbp+140h+h], xmm0
    }
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v21);
    ScrPlace_ApplyRect(ActivePlacement, &x.x, &x.y, &x.w, &x.h, 5, 5);
    *(_WORD *)&x.horzAlign = 1285;
    CG_CompassCalcDimensions(COMPASS_TYPE_PARTIAL, v22, &parentRect, &x, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, [rbp+140h+mapRect.w]
      vaddss  xmm6, xmm1, [rbp+140h+mapRect.x]
      vmovss  [rbp+140h+var_198], xmm6
      vmulss  xmm0, xmm3, [rbp+140h+mapRect.h]
      vaddss  xmm7, xmm0, [rbp+140h+mapRect.y]
      vmovss  [rbp+140h+var_194], xmm7
    }
    if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
    {
      LODWORD(in) = 2;
      LODWORD(vertAligna) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", vertAligna, in, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
        __debugbreak();
    }
    if ( (unsigned int)v21 >= CgCompassSystem::ms_allocatedCount )
    {
      LODWORD(vertAligna) = CgCompassSystem::ms_allocatedCount;
      LODWORD(horzAlign) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", horzAlign, vertAligna) )
        __debugbreak();
    }
    if ( !CgCompassSystem::ms_compassSystemArray[v21] )
    {
      LODWORD(vertAligna) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", vertAligna) )
        __debugbreak();
    }
    v36 = CgCompassSystem::ms_compassSystemArray[v21];
    v165 = v36;
    CgCompassSystem::GetCompassYaw(v36, COMPASS_TYPE_PARTIAL, 0, v22, &outAngle, &outVector);
    CgCompassSystem::SetCurrentCompassDisplayType(v36, COMPASS_DISPLAY_RADIALSENSOR);
    scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)v21);
    NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)v21);
    _RDI = DCONST_DVARFLT_radialSensorIconSize;
    if ( !DCONST_DVARFLT_radialSensorIconSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorIconSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm15, dword ptr [rdi+28h] }
    Data = LUIElement_RadialSensorSweep_GetData(_R15, luaVM);
    if ( v22 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = v22->refdef.view.refdefViewOrg_aab;
    if ( v22 == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(playerWorldPos[0].v[0]) = LODWORD(v22->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v22 + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)v22 + 26936)) + 2));
    LODWORD(playerWorldPos[0].v[1]) = LODWORD(v22->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v22 + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)v22 + 26940)) + 2));
    LODWORD(v153) = refdefViewOrg_aab ^ ((_DWORD)v22 + 26944);
    LODWORD(playerWorldPos[1].v[0]) = (LODWORD(v153) * (LODWORD(v153) + 2)) ^ LODWORD(v22->refdef.view.org.org.v[2]);
    _RDI = DCONST_DVARVEC4_radialSensorIconColor;
    if ( !DCONST_DVARVEC4_radialSensorIconColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorIconColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm11, dword ptr [rdi+28h]
      vmovss  xmm12, dword ptr [rdi+2Ch]
      vmovss  xmm13, dword ptr [rdi+30h]
    }
    v44 = 0;
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vmovss  xmm8, cs:__real@3f800000
    }
    if ( NextSnap->numEntities > 0 )
    {
      entities = NextSnap->entities;
      __asm
      {
        vmovsd  xmm10, cs:__real@3f30000000000000
        vmovss  xmm14, cs:__real@3fa00000
      }
      do
      {
        number = entities->number;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(vertAligna) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", vertAligna) )
            __debugbreak();
        }
        if ( (unsigned int)v21 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(vertAligna) = CgEntitySystem::ms_allocatedCount;
          LODWORD(horzAligna) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", horzAligna, vertAligna) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v21] )
        {
          LODWORD(vertAligna) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", vertAligna) )
            __debugbreak();
        }
        v51 = CgEntitySystem::ms_entitySystemArray[v21];
        if ( (unsigned int)number >= 0x800 )
        {
          LODWORD(vertAligna) = 2048;
          LODWORD(horzAligna) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", horzAligna, vertAligna) )
            __debugbreak();
        }
        v52 = (__int64)&v51->m_entities[number];
        if ( (*(_BYTE *)(v52 + 648) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialsensor.cpp", 131, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        if ( (*(_BYTE *)(v52 + 524) & 8) != 0 )
        {
          if ( !*(_QWORD *)(v52 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v52 + 48), (const cpose_t *)v52);
          FunctionPointer_origin((const vec4_t *)(v52 + 56), (vec3_t *)v157);
          if ( *(_BYTE *)(v52 + 2) )
          {
            __asm
            {
              vmovd   xmm0, dword ptr [rbp+140h+var_1A8]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm10
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rbp+140h+var_1A8], xmm2
              vmovd   xmm0, dword ptr [rbp+140h+var_1A8+4]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm10
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rbp+140h+var_1A8+4], xmm2
              vmovd   xmm0, [rbp+140h+var_1A0]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm10
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  [rbp+140h+var_1A0], xmm2
            }
          }
          __asm { vmovss  dword ptr [rsp+250h+fmt], xmm9 }
          CgCompassSystem::WorldPosToCompass(v165, COMPASS_TYPE_PARTIAL, 0, &mapRect, fmt, &outVector, playerWorldPos, v157, NULL, &v172);
          __asm
          {
            vaddss  xmm1, xmm6, dword ptr [rbp+140h+var_100]
            vmovss  [rbp+140h+var_1BC], xmm1
            vaddss  xmm0, xmm7, dword ptr [rbp+140h+var_100+4]
            vmovss  [rbp+140h+var_1C0], xmm0
            vmovss  [rbp+140h+var_1B8], xmm15
            vmovss  [rbp+140h+width], xmm15
          }
          ScrPlace_ApplyRect(scrPlace, &v152, &v151, &v153, &width, x.horzAlign, x.vertAlign);
          p_pingImage = &Data->pingImage;
          if ( v22->time <= Data->endTime )
          {
            __asm
            {
              vmovss  xmm6, [rbp+140h+var_1BC]
              vmovss  xmm7, [rbp+140h+var_1C0]
            }
            _RAX = LUIElement_RadialSensorSweep_GetData(elementa, v162);
            __asm
            {
              vsubss  xmm2, xmm6, dword ptr [rax+14h]
              vsubss  xmm0, xmm7, dword ptr [rax+18h]
              vmovss  xmm3, dword ptr [rax+10h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vcmpless xmm3, xmm2, xmm1
              vblendvps xmm2, xmm9, xmm8, xmm3
              vmovss  xmm6, [rbp+140h+var_198]
              vmovss  xmm7, [rbp+140h+var_194]
            }
          }
          else
          {
            v69 = DCONST_DVARINT_radialSensorNextPingTime;
            if ( !DCONST_DVARINT_radialSensorNextPingTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorNextPingTime") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v69);
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, eax
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, dword ptr [rdi+28h]
              vdivss  xmm0, xmm14, xmm0
              vmulss  xmm1, xmm1, xmm0
              vsubss  xmm2, xmm8, xmm1
            }
          }
          __asm
          {
            vmovss  dword ptr [rsp+250h+var_1E0], xmm2
            vmovss  [rsp+250h+var_1E8], xmm13
            vmovss  [rsp+250h+var_1F0], xmm12
            vmovss  [rsp+250h+var_1F8], xmm11
            vmovss  [rsp+250h+var_200], xmm9
            vmovss  dword ptr [rsp+250h+outClipped], xmm8
            vmovss  dword ptr [rsp+250h+out], xmm8
            vmovss  dword ptr [rsp+250h+in], xmm9
            vmovss  [rsp+250h+vertAlign], xmm9
            vmovss  xmm0, [rbp+140h+width]
            vmovss  [rsp+250h+horzAlign], xmm0
            vmovss  xmm1, [rbp+140h+var_1B8]
            vmovss  dword ptr [rsp+250h+fmt], xmm1
            vmovss  xmm3, [rbp+140h+var_1C0]; centerY
            vmovss  xmm2, [rbp+140h+var_1BC]; centerX
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v21, elementa, *(float *)&_XMM2, *(float *)&_XMM3, fmta, *(float *)&horzAlignb, *(float *)&vertAlignb, ina, out, outClipped, v141, v143, v145, v147, v149, *p_pingImage, v162);
          memset(v157, 0, 0xCui64);
        }
        ++v44;
        ++entities;
      }
      while ( v44 < NextSnap->numEntities );
      _R15 = elementa;
    }
    __asm { vmovss  dword ptr [rsp+250h+fmt], xmm9 }
    CgCompassSystem::WorldPosToCompass(v165, COMPASS_TYPE_PARTIAL, 0, &mapRect, fmtb, &outVector, playerWorldPos, (const vec2_t *)&v22->predictedPlayerState.origin, NULL, &pos);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbp+140h+pos]
      vmovss  dword ptr [rbp+140h+pos], xmm1
      vaddss  xmm0, xmm7, dword ptr [rbp+140h+pos+4]
      vmovss  dword ptr [rbp+140h+pos+4], xmm0
      vmovss  xmm0, [rbp+140h+outAngle]
      vsubss  xmm1, xmm0, dword ptr [rax+4Ch]
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm0, xmm1, xmm2, 1
      vsubss  xmm0, xmm4, xmm0
      vmulss  xmm6, xmm0, cs:__real@43b40000
      vmovss  [rbp+140h+var_1AC], xmm15
      vmovss  [rbp+140h+var_1B0], xmm15
    }
    v102 = x.vertAlign;
    v103 = x.horzAlign;
    v104 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v21);
    ScrPlace_ApplyRect(v104, (float *)&pos, (float *)&pos + 1, &v156, &v155, v103, v102);
    v105 = v162;
    __asm
    {
      vmovss  dword ptr [rsp+250h+var_1E0], xmm8
      vmovss  xmm0, cs:__real@3e4ccccd
      vmovss  [rsp+250h+var_1E8], xmm0
      vmovss  [rsp+250h+var_1F0], xmm8
      vmovss  [rsp+250h+var_1F8], xmm8
      vmovss  [rsp+250h+var_200], xmm6
      vmovss  dword ptr [rsp+250h+outClipped], xmm8
      vmovss  dword ptr [rsp+250h+out], xmm8
      vmovss  dword ptr [rsp+250h+in], xmm9
      vmovss  [rsp+250h+vertAlign], xmm9
      vmovss  xmm0, [rbp+140h+var_1B0]
      vmovss  [rsp+250h+horzAlign], xmm0
      vmovss  xmm1, [rbp+140h+var_1AC]
      vmovss  dword ptr [rsp+250h+fmt], xmm1
      vmovss  xmm3, dword ptr [rbp+140h+pos+4]; centerY
      vmovss  xmm2, dword ptr [rbp+140h+pos]; centerX
    }
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)v21, _R15, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, *(float *)&horzAlignc, *(float *)&vertAlignc, inb, outa, outClippeda, v142, v144, v146, v148, v150, cgMedia.compass.self_arrow, v162);
    LUIElement_RadialSensorSweep((const LocalClientNum_t)v21, &parentRect, &x, &pos, _R15, v105);
    memset(playerWorldPos, 0, 0xCui64);
  }
  _R11 = &v175;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
LUIElement_RadialSensorSweep
==============
*/
void LUIElement_RadialSensorSweep(const LocalClientNum_t localClientNum, const rectDef_s *parentRect, const rectDef_s *rect, vec2_t *pos, LUIElement *element, lua_State *luaVM)
{
  __int64 v12; 
  lua_State *v13; 
  cg_t *v14; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v23; 
  __int64 v28; 
  int v30; 
  int v31; 
  const ScreenPlacement *ActivePlacement; 
  LUIElement *v36; 
  float fmt; 
  int horzAligna; 
  __int64 vertAlign; 
  int vertAligna; 
  int vertAlignb; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float w[16]; 
  char v61; 
  void *retaddr; 
  float h; 
  const rectDef_s *v64; 
  float *x; 

  _RAX = &retaddr;
  x = (float *)pos;
  v64 = rect;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v12 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    vertAligna = cg_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, vertAligna) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
  {
    LODWORD(vertAlign) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", vertAlign) )
      __debugbreak();
  }
  v13 = luaVM;
  v14 = cg_t::ms_cgArray[v12];
  _RBP = LUIElement_RadialSensorSweep_GetData(element, luaVM);
  if ( _RBP->startTime >= 0 )
  {
    v17 = DCONST_DVARINT_radialSensorNextPingTime;
    if ( !DCONST_DVARINT_radialSensorNextPingTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorNextPingTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v14->time > _RBP->endTime + v17->current.integer )
      _RBP->startTime = -1;
  }
  else
  {
    _RBP->startTime = v14->time;
    v16 = DCONST_DVARINT_radialSensorSweepDuration;
    if ( !DCONST_DVARINT_radialSensorSweepDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorSweepDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    _RBP->endTime = _RBP->startTime + v16->current.integer;
  }
  v18 = DCONST_DVARINT_radialSensorSweepDuration;
  if ( !DCONST_DVARINT_radialSensorSweepDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorSweepDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+28h]
  }
  v23 = DCONST_DVARFLT_radialSensorSweepRadius;
  __asm
  {
    vcvtsi2ss xmm1, xmm1, eax
    vdivss  xmm7, xmm1, xmm0
    vsubss  xmm8, xmm6, xmm7
  }
  if ( !DCONST_DVARFLT_radialSensorSweepRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorSweepRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  __asm { vmulss  xmm0, xmm7, dword ptr [rsi+28h] }
  v28 = (__int64)v64;
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40000000
    vmovss  dword ptr [rbp+10h], xmm0
    vmovss  [rsp+108h+w], xmm1
  }
  v30 = *(unsigned __int8 *)(v28 + 17);
  v31 = *(unsigned __int8 *)(v28 + 16);
  __asm { vmovss  [rsp+108h+h], xmm1 }
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v12);
  _R15 = x;
  ScrPlace_ApplyRect(ActivePlacement, x, x + 1, w, &h, v31, v30);
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  xmm1, dword ptr [r15+4]
  }
  v36 = element;
  __asm
  {
    vmovss  dword ptr [rsp+108h+arg_10], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+108h+arg_10+4], xmm1
  }
  _RBP->sweepCenterPosition = (vec2_t)v64;
  __asm
  {
    vmovss  xmm1, [rsp+108h+w]
    vmovss  xmm3, dword ptr [r15+4]; centerY
    vmovss  xmm2, dword ptr [r15]; centerX
    vmovss  [rsp+108h+var_98], xmm8
    vmovss  [rsp+108h+var_A0], xmm6
    vmovss  [rsp+108h+var_A8], xmm6
    vmovss  [rsp+108h+var_B0], xmm6
    vmovss  [rsp+108h+var_B8], xmm0
    vmovss  [rsp+108h+var_C0], xmm6
    vmovss  [rsp+108h+var_C8], xmm6
    vmovss  [rsp+108h+var_D0], xmm0
    vmovss  [rsp+108h+vertAlign], xmm0
    vmovss  xmm0, [rsp+108h+h]
    vmovss  [rsp+108h+horzAlign], xmm0
    vmovss  dword ptr [rsp+108h+fmt], xmm1
  }
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)v12, v36, *(float *)&_XMM2, *(float *)&_XMM3, fmt, *(float *)&horzAligna, *(float *)&vertAlignb, v52, v53, v54, v55, v56, v57, v58, v59, cgMedia.compassping_portable_radar_sweep, v13);
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
LUIElement_RadialSensorSweep_GetData
==============
*/
RadialSensorData *LUIElement_RadialSensorSweep_GetData(LUIElement *element, lua_State *luaVM)
{
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialsensor.cpp", 37, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialsensor.cpp", 38, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (RadialSensorData *)element->customElementData;
}

/*
==============
LUI_LuaCall_LUIElement_SetupRadialSensor
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRadialSensor(lua_State *luaVM)
{
  LUIElement *v2; 
  GfxImage **v3; 
  const char *v4; 
  GfxImage *v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = LUIElement_RadialSensorRender;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = (GfxImage **)j_lua_newuserdata(luaVM, 0x20ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  *v3 = NULL;
  v3[1] = NULL;
  v3[2] = NULL;
  v3[3] = NULL;
  j_lua_getfield(luaVM, 2, "pingIcon");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v4 = j_lua_tolstring(luaVM, -1, NULL);
    v5 = Image_Register(v4, IMAGE_TRACK_HUD);
  }
  else
  {
    v5 = (GfxImage *)LUI_DefaultMaterial;
  }
  *v3 = v5;
  j_lua_settop(luaVM, -2);
  *((_DWORD *)v3 + 2) = -1;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

