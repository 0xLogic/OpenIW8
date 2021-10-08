/*
==============
FX_ToggleVisBlockerFrame
==============
*/

void __fastcall FX_ToggleVisBlockerFrame(FxSystem *system)
{
  ?FX_ToggleVisBlockerFrame@@YAXPEAUFxSystem@@@Z(system);
}

/*
==============
FX_AddVisBlocker
==============
*/

void __fastcall FX_AddVisBlocker(const FxSystem *system, const vec3_t *posWorld, float radius, float opacity)
{
  ?FX_AddVisBlocker@@YAXPEBUFxSystem@@AEBTvec3_t@@MM@Z(system, posWorld, radius, opacity);
}

/*
==============
FX_SetUpdateCamera
==============
*/

void __fastcall FX_SetUpdateCamera(const refdef_t *refdef, float zfar, int isThermalVision, int isZeroG, FxCamera *camera, LocalClientNum_t localClientNum)
{
  ?FX_SetUpdateCamera@@YAXPEBUrefdef_t@@MHHPEAUFxCamera@@W4LocalClientNum_t@@@Z(refdef, zfar, isThermalVision, isZeroG, camera, localClientNum);
}

/*
==============
FX_AddVisBlocker
==============
*/

void __fastcall FX_AddVisBlocker(const FxSystem *system, const vec3_t *posWorld, double radius, double opacity)
{
  FxVisState *visStateBufferWrite; 
  volatile int *p_blockerCount; 
  int v11; 
  __int64 v15; 
  bool v16; 
  bool v17; 
  char *v18; 
  bool v19; 

  visStateBufferWrite = system->visStateBufferWrite;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm6, xmm3
  }
  p_blockerCount = &visStateBufferWrite->blockerCount;
  v11 = visStateBufferWrite->blockerCount + 1;
  __asm { vmovaps xmm8, xmm2 }
  if ( v11 < 256 )
  {
    v15 = 16i64 * v11;
    v16 = __CFADD__(visStateBufferWrite, v15);
    v17 = __CFADD__(visStateBufferWrite, v15) || (FxVisState *)((char *)visStateBufferWrite + v15) == NULL;
    v18 = (char *)visStateBufferWrite + v15;
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm7
      vcomiss xmm8, cs:__real@45800000
    }
    *(vec3_t *)v18 = *posWorld;
    if ( !v16 )
    {
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 153, ASSERT_TYPE_ASSERT, "(radius < 65536.0f * (1.0f / 16.0f))", (const char *)&queryFormat, "radius < 65536.0f * FX_VIS_BLOCKER_RADIUS_INV_SCALE");
      v16 = 0;
      v17 = !v19;
      if ( v19 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( v16 )
      goto LABEL_18;
    __asm { vcomiss xmm6, xmm7 }
    if ( !v17 )
    {
LABEL_18:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 154, ASSERT_TYPE_ASSERT, "(opacity >= 0.0f && opacity <= 65536.0f * (1.0f / 65536.0f))", (const char *)&queryFormat, "opacity >= 0.0f && opacity <= 65536.0f * FX_VIS_BLOCKER_VISIBILITY_INV_SCALE") )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm0, xmm8, cs:__real@41800000
      vcvttss2si eax, xmm0
    }
    *((_WORD *)v18 + 6) = _EAX;
    __asm
    {
      vsubss  xmm0, xmm7, xmm6
      vmovaps xmm7, [rsp+68h+var_28]
      vmulss  xmm1, xmm0, cs:__real@47800000
      vcvttss2si eax, xmm1
    }
    *((_WORD *)v18 + 7) = _EAX;
    if ( ((unsigned __int8)p_blockerCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_blockerCount) )
      __debugbreak();
    _InterlockedIncrement(p_blockerCount);
  }
  else if ( warnCount != system->frameCount )
  {
    warnCount = system->frameCount;
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_18]
      vmovaps xmm8, [rsp+68h+var_38]
    }
    Com_PrintWarning(21, "More than %i visibility blocking particles exist concurrently\n", 256i64);
    return;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm8, [rsp+68h+var_38]
  }
}

/*
==============
FX_SetUpdateCamera
==============
*/

void __fastcall FX_SetUpdateCamera(const refdef_t *refdef, double zfar, int isThermalVision, int isZeroG, FxCamera *camera, LocalClientNum_t localClientNum)
{
  bool v67; 
  bool v68; 
  bool v72; 
  bool v75; 
  bool v78; 
  unsigned int refdefViewOrg_aab; 
  unsigned int v159; 
  __int64 v160; 
  bool v161; 
  unsigned int frustumPlaneCount; 
  float tanHalfFovX; 
  float v204; 
  float v206; 
  __int64 v232; 
  double v233; 
  double v234; 
  double v235; 
  double v236; 
  double v237; 
  double v238; 
  double v239; 
  __int64 v240; 
  double v241; 
  double v242; 
  double v243; 
  double v244; 
  double v245; 
  double v246; 
  double v247; 
  double v248; 
  double v249; 
  double v250; 
  __int128 v252; 
  __int128 v254; 
  __int128 v256; 
  __int128 v258; 
  __int128 v260; 
  __int128 v262; 
  __int128 v264; 
  char v267; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
  }
  _RSI = refdef;
  _RBX = camera;
  __asm { vmovaps xmm12, xmm1 }
  if ( !refdef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 20, ASSERT_TYPE_ASSERT, "(refdef)", (const char *)&queryFormat, "refdef") )
    __debugbreak();
  if ( !camera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 21, ASSERT_TYPE_ASSERT, "(camera)", (const char *)&queryFormat, "camera") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vmovss  xmm3, dword ptr [rsi+2Ch]
    vmovss  xmm4, dword ptr [rsi+24h]
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3b83126f
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, xmm9
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vmovss  xmm1, dword ptr [rsi+28h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+1A0h+var_160], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+1A0h+var_168], xmm1
    vcvtss2sd xmm2, xmm4, xmm4
    vmovsd  [rsp+1A0h+var_170], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 25, ASSERT_TYPE_ASSERT, "(Particle_Vec3IsNormalized( view->axis[0] ))", "%s\n\t%g %g %g", "Particle_Vec3IsNormalized( view->axis[0] )", v237, v242, v246) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+34h]
    vmovss  xmm4, dword ptr [rsi+30h]
    vmovss  xmm3, dword ptr [rsi+38h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm9
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
    vmovss  xmm1, dword ptr [rsi+34h]
    vmovaps xmm0, xmm3
    vcvtss2sd xmm0, xmm3, xmm3
    vmovsd  [rsp+1A0h+var_160], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+1A0h+var_168], xmm1
    vcvtss2sd xmm2, xmm4, xmm4
    vmovsd  [rsp+1A0h+var_170], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 26, ASSERT_TYPE_ASSERT, "(Particle_Vec3IsNormalized( view->axis[1] ))", "%s\n\t%g %g %g", "Particle_Vec3IsNormalized( view->axis[1] )", v238, v243, v247) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+40h]
    vmovss  xmm4, dword ptr [rsi+3Ch]
    vmovss  xmm3, dword ptr [rsi+44h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm9
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
    vmovss  xmm1, dword ptr [rsi+40h]
    vmovaps xmm0, xmm3
    vcvtss2sd xmm0, xmm3, xmm3
    vmovsd  [rsp+1A0h+var_160], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+1A0h+var_168], xmm1
    vcvtss2sd xmm2, xmm4, xmm4
    vmovsd  [rsp+1A0h+var_170], xmm2
  }
  v67 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 27, ASSERT_TYPE_ASSERT, "(Particle_Vec3IsNormalized( view->axis[2] ))", "%s\n\t%g %g %g", "Particle_Vec3IsNormalized( view->axis[2] )", v239, v244, v248);
  v68 = !v67;
  if ( v67 )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+10h]
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm0, xmm10
  }
  if ( !v67 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+1A0h+var_178], xmm0
    }
    v72 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 28, ASSERT_TYPE_ASSERT, "( ( view->tanHalfFovX > 0 ) )", "( view->tanHalfFovX ) = %g", v233);
    v68 = !v72;
    if ( v72 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+14h]
    vcomiss xmm0, xmm10
  }
  if ( v68 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+1A0h+var_178], xmm0
    }
    v75 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 29, ASSERT_TYPE_ASSERT, "( ( view->tanHalfFovY > 0 ) )", "( view->tanHalfFovY ) = %g", v234);
    v68 = !v75;
    if ( v75 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4Ch]
    vcomiss xmm0, xmm10
  }
  if ( v68 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+1A0h+var_178], xmm0
    }
    v78 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 30, ASSERT_TYPE_ASSERT, "( ( view->depthHackFov.tanHalfFovX > 0 ) )", "( view->depthHackFov.tanHalfFovX ) = %g", v235);
    v68 = !v78;
    if ( v78 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+50h]
    vcomiss xmm0, xmm10
  }
  if ( v68 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+1A0h+var_178], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 31, ASSERT_TYPE_ASSERT, "( ( view->depthHackFov.tanHalfFovY > 0 ) )", "( view->depthHackFov.tanHalfFovY ) = %g", v236) )
      __debugbreak();
  }
  refdefViewOrg_aab = _RSI->view.refdefViewOrg_aab;
  if ( _RSI == (const refdef_t *)-24i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(camera->origin.v[0]) = LODWORD(_RSI->view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 24)) * ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 24)) + 2));
  LODWORD(camera->origin.v[1]) = LODWORD(_RSI->view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 28)) * ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 28)) + 2));
  LODWORD(camera->origin.v[2]) = LODWORD(_RSI->view.org.org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 32)) * ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 32)) + 2));
  AxisCopy(&_RSI->view.axis, &camera->axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  HIDWORD(v252) = 0;
  __asm
  {
    vmovups xmm11, xmmword ptr [rsp+70h]
    vmovss  xmm11, xmm11, xmm0
    vmovss  xmm0, dword ptr [rsi+24h]
    vinsertps xmm11, xmm11, dword ptr [rbx+4], 10h
    vinsertps xmm11, xmm11, dword ptr [rbx+8], 20h ; ' '
  }
  HIDWORD(v254) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp-80h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rsi+28h], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+2Ch], 20h ; ' '
    vmovups xmmword ptr [rbx+10h], xmm3
  }
  camera->viewOffset = _RSI->viewOffset;
  __asm
  {
    vmovups xmmword ptr [rbp-80h], xmm3
    vmovss  xmm3, dword ptr [rsi+10h]
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm0, xmm9
    vsqrtss xmm2, xmm1, xmm1
    vdivss  xmm5, xmm9, xmm2
    vmulss  xmm0, xmm5, dword ptr [rsi+30h]
    vmulss  xmm6, xmm3, xmm5
    vmulss  xmm1, xmm6, dword ptr [rsi+24h]
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm0, xmm5, dword ptr [rsi+34h]
    vmulss  xmm1, xmm6, dword ptr [rsi+28h]
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rsi+38h]
    vmulss  xmm0, xmm6, dword ptr [rsi+2Ch]
    vaddss  xmm2, xmm1, xmm0
  }
  HIDWORD(v256) = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp-70h]
    vmovss  xmm0, xmm0, xmm4
    vinsertps xmm0, xmm0, xmm3, 10h
    vinsertps xmm0, xmm0, xmm2, 20h ; ' '
    vmovups xmmword ptr [rbx+20h], xmm0
    vmulss  xmm1, xmm6, dword ptr [rsi+24h]
    vmulss  xmm2, xmm6, dword ptr [rsi+28h]
    vxorps  xmm3, xmm5, xmm13
    vmovups xmmword ptr [rbp-70h], xmm0
    vmulss  xmm0, xmm3, dword ptr [rsi+30h]
    vaddss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm3, dword ptr [rsi+34h]
    vmulss  xmm1, xmm3, dword ptr [rsi+38h]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsi+2Ch]
    vaddss  xmm2, xmm1, xmm0
    vmovups xmmword ptr [rsp+70h], xmm11
  }
  HIDWORD(v258) = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp-60h]
    vmovss  xmm0, xmm0, xmm5
    vinsertps xmm0, xmm0, xmm4, 10h
    vinsertps xmm0, xmm0, xmm2, 20h ; ' '
    vmovups xmmword ptr [rbx+30h], xmm0
    vmovss  xmm3, dword ptr [rsi+14h]
    vmovups xmmword ptr [rbp-60h], xmm0
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm0, xmm9
    vsqrtss xmm2, xmm1, xmm1
    vdivss  xmm5, xmm9, xmm2
    vmulss  xmm0, xmm5, dword ptr [rsi+3Ch]
    vmulss  xmm6, xmm3, xmm5
    vmulss  xmm1, xmm6, dword ptr [rsi+24h]
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm0, xmm5, dword ptr [rsi+40h]
    vmulss  xmm1, xmm6, dword ptr [rsi+28h]
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rsi+44h]
    vmulss  xmm0, xmm6, dword ptr [rsi+2Ch]
    vaddss  xmm2, xmm1, xmm0
  }
  HIDWORD(v260) = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp-50h]
    vmovss  xmm0, xmm0, xmm4
    vinsertps xmm0, xmm0, xmm3, 10h
    vinsertps xmm0, xmm0, xmm2, 20h ; ' '
    vmovups xmmword ptr [rbx+40h], xmm0
    vxorps  xmm3, xmm5, xmm13
    vmulss  xmm1, xmm3, dword ptr [rsi+3Ch]
    vmulss  xmm2, xmm3, dword ptr [rsi+40h]
    vmovups xmmword ptr [rbp-50h], xmm0
    vmulss  xmm0, xmm6, dword ptr [rsi+24h]
    vaddss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsi+28h]
    vmulss  xmm1, xmm6, dword ptr [rsi+2Ch]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm2, xmm3, dword ptr [rsi+44h]
    vaddss  xmm0, xmm2, xmm1
  }
  HIDWORD(v262) = 0;
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp-40h]
    vmovss  xmm1, xmm1, xmm5
    vinsertps xmm1, xmm1, xmm4, 10h
    vinsertps xmm1, xmm1, xmm0, 20h ; ' '
    vmovups xmmword ptr [rbp-40h], xmm1
    vmovups xmmword ptr [rbx+50h], xmm1
  }
  camera->frustumPlaneCount = 5;
  v159 = 0;
  do
  {
    v160 = v159 + 1i64;
    v161 = __CFADD__(v160, v160);
    _RDI = 2 * v160;
    __asm
    {
      vmovups xmm3, xmmword ptr [rbx+rdi*8]
      vmulss  xmm1, xmm3, xmm3
      vshufps xmm4, xmm3, xmm3, 55h ; 'U'
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vshufps xmm5, xmm3, xmm3, 0AAh ; 'ª'
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm0
      vshufps xmm6, xmm3, xmm3, 0FFh
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm1, xmm1, xmm0
      vsubss  xmm2, xmm1, xmm9
      vandps  xmm2, xmm2, xmm7
      vcomiss xmm2, xmm8
      vmovups [rbp+0A0h+var_C0], xmm3
    }
    if ( !v161 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+1A0h+var_158], xmm0
        vcvtss2sd xmm1, xmm5, xmm5
        vmovsd  [rsp+1A0h+var_160], xmm1
        vcvtss2sd xmm2, xmm4, xmm4
        vmovsd  [rsp+1A0h+var_168], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+1A0h+var_170], xmm3
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 136, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( normalVec ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( normalVec )", v241, v245, v249, v250) )
        __debugbreak();
    }
    __asm
    {
      vmulps  xmm1, xmm11, xmmword ptr [rbx+rdi*8]
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vmovups xmm2, xmmword ptr [rbx+rdi*8]
      vhaddps xmm0, xmm0, xmm0
      vshufps xmm1, xmm2, xmm0, 0FAh ; 'ú'
      vshufps xmm2, xmm2, xmm1, 84h ; '„'
      vmovups xmmword ptr [rbx+rdi*8], xmm2
    }
    frustumPlaneCount = camera->frustumPlaneCount;
    ++v159;
  }
  while ( v159 < frustumPlaneCount );
  __asm { vcomiss xmm12, xmm10 }
  if ( v159 > frustumPlaneCount )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+24h]
      vmovss  xmm1, dword ptr [rbx+1Ch]
    }
    HIDWORD(v264) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rbp-30h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsi+28h], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+2Ch], 20h ; ' '
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [rbp-30h], xmm3
      vsubps  xmm3, xmm0, xmm3
      vxorps  xmm0, xmm1, xmm13
      vsubss  xmm2, xmm0, xmm12
      vshufps xmm2, xmm2, xmm2, 0
      vshufps xmm1, xmm3, xmm2, 0FAh ; 'ú'
      vshufps xmm0, xmm3, xmm1, 84h ; '„'
      vmovups xmmword ptr [rbx+60h], xmm0
    }
    camera->frustumPlaneCount = 6;
  }
  __asm { vmovss  xmm6, cs:__real@3f000000 }
  camera->lightmap = 1;
  camera->thermal = isThermalVision != 0;
  camera->zeroG = isZeroG != 0;
  tanHalfFovX = _RSI->view.fov.tanHalfFovX;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+14h]
    vmovss  dword ptr [rbx+0A8h], xmm0
  }
  camera->tanHalfFov.v[0] = tanHalfFovX;
  v204 = _RSI->view.depthHackFov.tanHalfFovX;
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+50h]
    vmovss  dword ptr [rbx+0B0h], xmm1
  }
  camera->depthHackTanHalfFov.v[0] = v204;
  v206 = _RSI->view.defaultFov.tanHalfFovX;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+5Ch]
    vmovss  dword ptr [rbx+0B8h], xmm0
  }
  camera->defaultFov.v[0] = v206;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.lodParms.invFovScaleFx; r_globals_t rg
    vmovss  dword ptr [rbx+0C4h], xmm0
  }
  camera->znear = _RSI->view.zNear;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm0, xmm0, dword ptr [rax+28h]
    vmovss  dword ptr [rbx+0C0h], xmm0
  }
  camera->lightingFractionBias = _RSI->lightingFraction.bias;
  LODWORD(camera->barrelHeatScaleMin) = fx_barrelHeatScaleMin->current.integer;
  __asm
  {
    vmulss  xmm7, xmm6, dword ptr [rax+28h]
    vmulss  xmm0, xmm7, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm11, xmm0
    vmulss  xmm2, xmm6, dword ptr [rax+28h]
    vminss  xmm3, xmm2, xmm7
    vmulss  xmm0, xmm3, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm0, xmm11
    vmaxss  xmm6, xmm1, cs:__real@34000000
    vucomiss xmm6, xmm10
  }
  if ( v68 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 652, ASSERT_TYPE_SANITY, "( val != 0.0f )", (const char *)&queryFormat, "val != 0.0f") )
    __debugbreak();
  __asm
  {
    vdivss  xmm0, xmm9, xmm6
    vmovss  dword ptr [rbx+0D0h], xmm0
    vmulss  xmm0, xmm0, xmm11
    vxorps  xmm1, xmm0, xmm13
    vmovss  dword ptr [rbx+0D4h], xmm1
  }
  camera->isValid = 1;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v240) = 2;
    LODWORD(v232) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v232, v240) )
      __debugbreak();
  }
  g_particleManager[localClientNum].m_enableUpdate = 1;
  _R11 = &v267;
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
  }
}

/*
==============
FX_ToggleVisBlockerFrame
==============
*/
void FX_ToggleVisBlockerFrame(FxSystem *system)
{
  FxVisState *visStateBufferRead; 

  if ( !system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 163, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_FX_VIS);
  visStateBufferRead = (FxVisState *)system->visStateBufferRead;
  system->visStateBufferRead = system->visStateBufferWrite;
  system->visStateBufferWrite = visStateBufferRead;
  visStateBufferRead->blockerCount = 0;
  fx_serverVisClient = system->localClientNum;
  Sys_LeaveCriticalSection(CRITSECT_FX_VIS);
}

