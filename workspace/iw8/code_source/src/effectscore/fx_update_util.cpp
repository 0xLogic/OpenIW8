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
void FX_AddVisBlocker(const FxSystem *system, const vec3_t *posWorld, float radius, float opacity)
{
  FxVisState *visStateBufferWrite; 
  volatile int *p_blockerCount; 
  int v6; 
  FxVisBlocker *v7; 

  visStateBufferWrite = system->visStateBufferWrite;
  p_blockerCount = &visStateBufferWrite->blockerCount;
  v6 = visStateBufferWrite->blockerCount + 1;
  if ( v6 < 256 )
  {
    v7 = &visStateBufferWrite->blocker[v6];
    v7->origin = *posWorld;
    if ( radius >= 4096.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 153, ASSERT_TYPE_ASSERT, "(radius < 65536.0f * (1.0f / 16.0f))", (const char *)&queryFormat, "radius < 65536.0f * FX_VIS_BLOCKER_RADIUS_INV_SCALE") )
      __debugbreak();
    if ( (opacity < 0.0 || opacity > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 154, ASSERT_TYPE_ASSERT, "(opacity >= 0.0f && opacity <= 65536.0f * (1.0f / 65536.0f))", (const char *)&queryFormat, "opacity >= 0.0f && opacity <= 65536.0f * FX_VIS_BLOCKER_VISIBILITY_INV_SCALE") )
      __debugbreak();
    v7->radius = (int)(float)(radius * 16.0);
    v7->visibility = (int)(float)((float)(1.0 - opacity) * 65536.0);
    if ( ((unsigned __int8)p_blockerCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_blockerCount) )
      __debugbreak();
    _InterlockedIncrement(p_blockerCount);
  }
  else if ( warnCount != system->frameCount )
  {
    warnCount = system->frameCount;
    Com_PrintWarning(21, "More than %i visibility blocking particles exist concurrently\n", 256i64);
  }
}

/*
==============
FX_SetUpdateCamera
==============
*/
void FX_SetUpdateCamera(const refdef_t *refdef, float zfar, int isThermalVision, int isZeroG, FxCamera *camera, LocalClientNum_t localClientNum)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float tanHalfFovX; 
  float tanHalfFovY; 
  float v16; 
  float v17; 
  unsigned int refdefViewOrg_aab; 
  __int128 v20; 
  __int128 v24; 
  float v27; 
  __int128 v29; 
  __int128 v33; 
  float v36; 
  __int128 v38; 
  __int128 v42; 
  unsigned int v45; 
  __m128 v; 
  float v47; 
  float v48; 
  float v49; 
  __m128 v53; 
  __int128 v55; 
  __int128 v57; 
  __m128 v60; 
  __m128 v61; 
  float v62; 
  float v63; 
  float v64; 
  float width; 
  float v66; 
  float v67; 
  __int128 v69; 
  __int128 v71; 
  __int64 v74; 
  __int64 v75; 
  __int128 v77; 
  __int128 v78; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 

  if ( !refdef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 20, ASSERT_TYPE_ASSERT, "(refdef)", (const char *)&queryFormat, "refdef") )
    __debugbreak();
  if ( !camera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 21, ASSERT_TYPE_ASSERT, "(camera)", (const char *)&queryFormat, "camera") )
    __debugbreak();
  v9 = refdef->view.axis.m[0].v[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v9 * v9) + (float)(refdef->view.axis.m[0].v[1] * refdef->view.axis.m[0].v[1])) + (float)(refdef->view.axis.m[0].v[2] * refdef->view.axis.m[0].v[2])) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 25, ASSERT_TYPE_ASSERT, "(Particle_Vec3IsNormalized( view->axis[0] ))", "%s\n\t%g %g %g", "Particle_Vec3IsNormalized( view->axis[0] )", v9, refdef->view.axis.m[0].v[1], refdef->view.axis.m[0].v[2]) )
    __debugbreak();
  v10 = refdef->view.axis.m[1].v[0];
  v11 = refdef->view.axis.m[1].v[2];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v10 * v10) + (float)(refdef->view.axis.m[1].v[1] * refdef->view.axis.m[1].v[1])) + (float)(v11 * v11)) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 26, ASSERT_TYPE_ASSERT, "(Particle_Vec3IsNormalized( view->axis[1] ))", "%s\n\t%g %g %g", "Particle_Vec3IsNormalized( view->axis[1] )", v10, refdef->view.axis.m[1].v[1], v11) )
    __debugbreak();
  v12 = refdef->view.axis.m[2].v[0];
  v13 = refdef->view.axis.m[2].v[2];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v12 * v12) + (float)(refdef->view.axis.m[2].v[1] * refdef->view.axis.m[2].v[1])) + (float)(v13 * v13)) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 27, ASSERT_TYPE_ASSERT, "(Particle_Vec3IsNormalized( view->axis[2] ))", "%s\n\t%g %g %g", "Particle_Vec3IsNormalized( view->axis[2] )", v12, refdef->view.axis.m[2].v[1], v13) )
    __debugbreak();
  tanHalfFovX = refdef->view.fov.tanHalfFovX;
  if ( tanHalfFovX <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 28, ASSERT_TYPE_ASSERT, "( ( view->tanHalfFovX > 0 ) )", "( view->tanHalfFovX ) = %g", tanHalfFovX) )
    __debugbreak();
  tanHalfFovY = refdef->view.fov.tanHalfFovY;
  if ( tanHalfFovY <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 29, ASSERT_TYPE_ASSERT, "( ( view->tanHalfFovY > 0 ) )", "( view->tanHalfFovY ) = %g", tanHalfFovY) )
    __debugbreak();
  v16 = refdef->view.depthHackFov.tanHalfFovX;
  if ( v16 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 30, ASSERT_TYPE_ASSERT, "( ( view->depthHackFov.tanHalfFovX > 0 ) )", "( view->depthHackFov.tanHalfFovX ) = %g", v16) )
    __debugbreak();
  v17 = refdef->view.depthHackFov.tanHalfFovY;
  if ( v17 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.cpp", 31, ASSERT_TYPE_ASSERT, "( ( view->depthHackFov.tanHalfFovY > 0 ) )", "( view->depthHackFov.tanHalfFovY ) = %g", v17) )
    __debugbreak();
  refdefViewOrg_aab = refdef->view.refdefViewOrg_aab;
  if ( refdef == (const refdef_t *)-24i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(camera->origin.v[0]) = LODWORD(refdef->view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)refdef + 24)) * ((refdefViewOrg_aab ^ ((_DWORD)refdef + 24)) + 2));
  LODWORD(camera->origin.v[1]) = LODWORD(refdef->view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)refdef + 28)) * ((refdefViewOrg_aab ^ ((_DWORD)refdef + 28)) + 2));
  LODWORD(camera->origin.v[2]) = LODWORD(refdef->view.org.org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)refdef + 32)) * ((refdefViewOrg_aab ^ ((_DWORD)refdef + 32)) + 2));
  AxisCopy(&refdef->view.axis, &camera->axis);
  HIDWORD(v77) = 0;
  v20 = v77;
  *(float *)&v20 = camera->origin.v[0];
  _XMM11 = v20;
  __asm
  {
    vinsertps xmm11, xmm11, dword ptr [rbx+4], 10h
    vinsertps xmm11, xmm11, dword ptr [rbx+8], 20h ; ' '
  }
  HIDWORD(v78) = 0;
  v24 = v78;
  *(float *)&v24 = refdef->view.axis.m[0].v[0];
  _XMM3 = v24;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rsi+28h], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+2Ch], 20h ; ' '
  }
  camera->frustum[0] = (float4)_XMM3.v;
  camera->viewOffset = refdef->viewOffset;
  _XMM3.v.m128_i32[0] = LODWORD(refdef->view.fov.tanHalfFovX);
  v27 = 1.0 / fsqrt((float)(_XMM3.v.m128_f32[0] * _XMM3.v.m128_f32[0]) + 1.0);
  HIDWORD(v79) = 0;
  v29 = v79;
  *(float *)&v29 = (float)((float)(_XMM3.v.m128_f32[0] * v27) * refdef->view.axis.m[0].v[0]) + (float)(v27 * refdef->view.axis.m[1].v[0]);
  _XMM0 = v29;
  __asm
  {
    vinsertps xmm0, xmm0, xmm3, 10h
    vinsertps xmm0, xmm0, xmm2, 20h ; ' '
  }
  camera->frustum[1] = (float4)_XMM0.v;
  HIDWORD(v80) = 0;
  v33 = v80;
  *(float *)&v33 = (float)((float)(_XMM3.v.m128_f32[0] * v27) * refdef->view.axis.m[0].v[0]) + (float)(COERCE_FLOAT(LODWORD(v27) ^ _xmm) * refdef->view.axis.m[1].v[0]);
  _XMM0 = v33;
  __asm
  {
    vinsertps xmm0, xmm0, xmm4, 10h
    vinsertps xmm0, xmm0, xmm2, 20h ; ' '
  }
  camera->frustum[2] = (float4)_XMM0.v;
  _XMM3.v.m128_i32[0] = LODWORD(refdef->view.fov.tanHalfFovY);
  v36 = 1.0 / fsqrt((float)(_XMM3.v.m128_f32[0] * _XMM3.v.m128_f32[0]) + 1.0);
  HIDWORD(v81) = 0;
  v38 = v81;
  *(float *)&v38 = (float)((float)(_XMM3.v.m128_f32[0] * v36) * refdef->view.axis.m[0].v[0]) + (float)(v36 * refdef->view.axis.m[2].v[0]);
  _XMM0 = v38;
  __asm
  {
    vinsertps xmm0, xmm0, xmm3, 10h
    vinsertps xmm0, xmm0, xmm2, 20h ; ' '
  }
  camera->frustum[3] = (float4)_XMM0.v;
  HIDWORD(v82) = 0;
  v42 = v82;
  *(float *)&v42 = (float)(COERCE_FLOAT(LODWORD(v36) ^ _xmm) * refdef->view.axis.m[2].v[0]) + (float)((float)(_XMM3.v.m128_f32[0] * v36) * refdef->view.axis.m[0].v[0]);
  _XMM1 = v42;
  __asm
  {
    vinsertps xmm1, xmm1, xmm4, 10h
    vinsertps xmm1, xmm1, xmm0, 20h ; ' '
  }
  camera->frustum[4] = (float4)_XMM1.v;
  camera->frustumPlaneCount = 5;
  v45 = 0;
  do
  {
    v = camera->frustum[v45].v;
    v47 = _mm_shuffle_ps(v, v, 85).m128_f32[0];
    v48 = _mm_shuffle_ps(v, v, 170).m128_f32[0];
    v49 = _mm_shuffle_ps(v, v, 255).m128_f32[0];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(v.m128_f32[0] * v.m128_f32[0]) + (float)(v47 * v47)) + (float)(v48 * v48)) + (float)(v49 * v49)) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 136, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( normalVec ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( normalVec )", v.m128_f32[0], v47, v48, v49) )
      __debugbreak();
    _XMM1 = _mm128_mul_ps(_XMM11, camera->frustum[v45].v);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
    }
    v53 = camera->frustum[v45].v;
    __asm { vhaddps xmm0, xmm0, xmm0 }
    *(__m128 *)&camera->origin.v[4 * ++v45] = _mm_shuffle_ps(v53, _mm_shuffle_ps(v53, _XMM0, 250), 132);
  }
  while ( v45 < camera->frustumPlaneCount );
  if ( zfar > 0.0 )
  {
    v55 = camera->frustum[0].v.m128_u32[3];
    HIDWORD(v83) = 0;
    v57 = v83;
    *(float *)&v57 = refdef->view.axis.m[0].v[0];
    _XMM3 = v57;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsi+28h], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+2Ch], 20h ; ' '
    }
    v60 = _mm128_sub_ps((__m128)0i64, _XMM3);
    v61 = (__m128)(v55 ^ (unsigned int)_xmm);
    v61.m128_f32[0] = COERCE_FLOAT(v55 ^ _xmm) - zfar;
    camera->frustum[5].v = _mm_shuffle_ps(v60, _mm_shuffle_ps(v60, _mm_shuffle_ps(v61, v61, 0), 250), 132);
    camera->frustumPlaneCount = 6;
  }
  camera->lightmap = 1;
  camera->thermal = isThermalVision != 0;
  camera->zeroG = isZeroG != 0;
  v62 = refdef->view.fov.tanHalfFovX;
  camera->tanHalfFov.v[1] = refdef->view.fov.tanHalfFovY;
  camera->tanHalfFov.v[0] = v62;
  v63 = refdef->view.depthHackFov.tanHalfFovX;
  camera->depthHackTanHalfFov.v[1] = refdef->view.depthHackFov.tanHalfFovY;
  camera->depthHackTanHalfFov.v[0] = v63;
  v64 = refdef->view.defaultFov.tanHalfFovX;
  camera->defaultFov.v[1] = refdef->view.defaultFov.tanHalfFovY;
  camera->defaultFov.v[0] = v64;
  camera->invFovScale = rg.lodParms.invFovScaleFx;
  camera->znear = refdef->view.zNear;
  width = (float)refdef->displayViewport.width;
  camera->viewportLightmapScale = width / fx_lightmap_pixels_per_texel->current.value;
  camera->lightingFractionBias = refdef->lightingFraction.bias;
  LODWORD(camera->barrelHeatScaleMin) = fx_barrelHeatScaleMin->current.integer;
  v66 = (float)(0.5 * fx_cull_fovOuter->current.value) * 0.017453292;
  cosf_0(v66);
  v67 = v66;
  v69 = LODWORD(FLOAT_0_5);
  *(float *)&v69 = 0.5 * fx_cull_fovInner->current.value;
  _XMM2 = v69;
  __asm { vminss  xmm3, xmm2, xmm7 }
  v71 = _XMM3;
  *(float *)&v71 = cosf_0(*(float *)&_XMM3 * 0.017453292) - v67;
  _XMM1 = v71;
  __asm { vmaxss  xmm6, xmm1, cs:__real@34000000 }
  if ( *(float *)&_XMM6 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 652, ASSERT_TYPE_SANITY, "( val != 0.0f )", (const char *)&queryFormat, "val != 0.0f") )
    __debugbreak();
  camera->coneCullFovScale = 1.0 / *(float *)&_XMM6;
  camera->coneCullFovBias = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM6) * v67) ^ _xmm);
  camera->isValid = 1;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v75) = 2;
    LODWORD(v74) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v74, v75) )
      __debugbreak();
  }
  g_particleManager[localClientNum].m_enableUpdate = 1;
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

