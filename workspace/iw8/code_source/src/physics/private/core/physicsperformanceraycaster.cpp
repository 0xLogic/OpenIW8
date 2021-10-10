/*
==============
PhysPerfRaycast_DebugRender_GetSampleValues
==============
*/

void __fastcall PhysPerfRaycast_DebugRender_GetSampleValues(unsigned __int8 *pixels)
{
  ?PhysPerfRaycast_DebugRender_GetSampleValues@@YAXPEAE@Z(pixels);
}

/*
==============
PhysPerfRaycast_FreeImage
==============
*/

void PhysPerfRaycast_FreeImage(void)
{
  ?PhysPerfRaycast_FreeImage@@YAXXZ();
}

/*
==============
PhysPerfRaycast_DebugRender
==============
*/

void __fastcall PhysPerfRaycast_DebugRender(GfxCmdBufContext *gfxContext)
{
  ?PhysPerfRaycast_DebugRender@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
PhysPerfRaycast_ClearData
==============
*/

void PhysPerfRaycast_ClearData(void)
{
  ?PhysPerfRaycast_ClearData@@YAXXZ();
}

/*
==============
PhysPerfRaycast_DebugDraw
==============
*/

void __fastcall PhysPerfRaycast_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?PhysPerfRaycast_DebugDraw@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
PhysPerfRaycast_GetImage
==============
*/

GfxImage *__fastcall PhysPerfRaycast_GetImage()
{
  return ?PhysPerfRaycast_GetImage@@YAPEAUGfxImage@@XZ();
}

/*
==============
PhysPerfRaycast_Update
==============
*/

void PhysPerfRaycast_Update(void)
{
  ?PhysPerfRaycast_Update@@YAXXZ();
}

/*
==============
PhysPerfRaycast_ClearData
==============
*/
void PhysPerfRaycast_ClearData(void)
{
  memset_0(s_PhysPerfRaycastSampleValues, 0, sizeof(s_PhysPerfRaycastSampleValues));
  memset_0(s_PhysPerfRaycastSampleValuesCounts, 0, sizeof(s_PhysPerfRaycastSampleValuesCounts));
}

/*
==============
PhysPerfRaycast_DebugDraw
==============
*/
void PhysPerfRaycast_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const dvar_t *v5; 
  const dvar_t *v9; 
  const char *v10; 
  const char *v11; 
  const dvar_t *v12; 
  const char *v13; 
  const dvar_t *v14; 
  const char *v15; 

  v5 = DVARINT_physics_debugRaycasterMode;
  if ( !DVARINT_physics_debugRaycasterMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer )
  {
    Physics_DrawDebugString(scrPlace, *x, *y, "Physics Raycaster Enabled", &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    *x = tabWidth + *x;
    v9 = DVARINT_physics_debugRaycasterMode;
    if ( !DVARINT_physics_debugRaycasterMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    switch ( v9->current.integer )
    {
      case 1:
        v10 = "Client PMove - we use the client predictive world and pmove contents flags";
        break;
      case 2:
        v10 = "Client Sim - we use the client auth world and common dynent/ragdoll contents flags";
        break;
      case 3:
        v10 = "Client Weapons, world only - we use the client detail world and bullet contents flags, but only collide against the world and static models";
        break;
      case 4:
        v10 = "Client Weapons - we use the client detail world and bullet contents flags";
        break;
      default:
        goto LABEL_17;
    }
    Physics_DrawDebugString(scrPlace, *x, *y, v10, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
LABEL_17:
    v11 = j_va("Image Dimensions: %ix%i", 256i64, 256i64);
    Physics_DrawDebugString(scrPlace, *x, *y, v11, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    v12 = DVARFLT_physics_debugRaycasterMaxCost;
    if ( !DVARFLT_physics_debugRaycasterMaxCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMaxCost") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = j_va("Max time: %.2f microseconds", v12->current.value);
    Physics_DrawDebugString(scrPlace, *x, *y, v13, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    v14 = DVARINT_physics_debugRaycasterRaysPerFrame;
    if ( !DVARINT_physics_debugRaycasterRaysPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterRaysPerFrame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = j_va("Rays per frame: %i", v14->current.unsignedInt);
    Physics_DrawDebugString(scrPlace, *x, *y, v15, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    *x = *x - tabWidth;
  }
}

/*
==============
PhysPerfRaycast_DebugRender
==============
*/
void PhysPerfRaycast_DebugRender(GfxCmdBufContext *gfxContext)
{
  const dvar_t *v1; 
  GfxCmdBufContext v3; 
  GfxImage *physPerfRaycastImage; 
  GfxMatrix *ActiveMatrixForEdit; 
  float displayHeight; 
  float v7; 
  GfxCmdBufContext v8; 

  v1 = DVARINT_physics_debugRaycasterMode;
  if ( !DVARINT_physics_debugRaycasterMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer )
  {
    PhysPerfRaycast_DebugRender_PrepareImage();
    v3 = *gfxContext;
    physPerfRaycastImage = rgp.physPerfRaycastImage;
    if ( rgp.physPerfRaycastImage )
    {
      ActiveMatrixForEdit = R_GetActiveMatrixForEdit(v3.source, 0xAAu);
      MatrixIdentity44(&ActiveMatrixForEdit->m);
      ActiveMatrixForEdit->m.m[3].v[0] = ActiveMatrixForEdit->m.m[3].v[0] - v3.source->eyeOffset.v[0];
      ActiveMatrixForEdit->m.m[3].v[1] = ActiveMatrixForEdit->m.m[3].v[1] - v3.source->eyeOffset.v[1];
      ActiveMatrixForEdit->m.m[3].v[2] = ActiveMatrixForEdit->m.m[3].v[2] - v3.source->eyeOffset.v[2];
      displayHeight = (float)cls.vidConfig.displayHeight;
      v7 = displayHeight - 576.0;
      if ( !v3.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( v3.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      v3.source->input.codeImages[4] = physPerfRaycastImage;
      v8 = v3;
      RB_DrawStretchPic(&v8, rgp.feedbackReplaceBackbufferMaterial, 64.0, v7, 512.0, 512.0, 0.0, 1.0, 1.0, 0.0, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
      v8 = v3;
      RB_EndTessSurfaceInternal(&v8, "c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsperformanceraycaster.cpp(378)");
    }
  }
}

/*
==============
PhysPerfRaycast_DebugRender_GetSampleValues
==============
*/
void PhysPerfRaycast_DebugRender_GetSampleValues(unsigned __int8 *pixels)
{
  const dvar_t *v1; 
  float v3; 
  signed __int64 v4; 
  unsigned __int8 *v5; 
  float *v6; 
  unsigned __int8 *v7; 
  __int64 v8; 
  unsigned __int8 v9; 
  float v10; 
  int v11; 
  bool v12; 
  unsigned __int8 *v13; 
  __int64 v14; 

  v1 = DVARFLT_physics_debugRaycasterMaxCost;
  if ( !DVARFLT_physics_debugRaycasterMaxCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMaxCost") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v3 = 1.0 / v1->current.value;
  v14 = 256i64;
  v4 = s_PhysPerfRaycastSampleValuesCounts - pixels - 65280;
  v5 = pixels + 65280;
  v13 = pixels + 65280;
  v6 = s_PhysPerfRaycastSampleValues;
  do
  {
    v7 = v5;
    v8 = 256i64;
    do
    {
      v9 = v7[v4];
      if ( v9 )
        v10 = *v6 / (float)v9;
      else
        v10 = 0.0;
      v11 = (int)(float)((float)(v10 * 255.0) * v3);
      if ( v11 > 255 )
        v11 = 255;
      if ( v11 < 0 )
        LOBYTE(v11) = 0;
      *v7 = v11;
      ++v6;
      ++v7;
      --v8;
    }
    while ( v8 );
    v4 += 512i64;
    v5 = v13 - 256;
    v12 = v14-- == 1;
    v13 -= 256;
  }
  while ( !v12 );
}

/*
==============
PhysPerfRaycast_DebugRender_PrepareImage
==============
*/
void PhysPerfRaycast_DebugRender_PrepareImage()
{
  const dvar_t *v0; 
  float v1; 
  signed __int64 v2; 
  char *v3; 
  float *v4; 
  char *v5; 
  __int64 v6; 
  unsigned __int8 v7; 
  float v8; 
  int v9; 
  bool v10; 
  char *v11; 
  __int64 v12; 
  const GfxImage *image; 
  unsigned __int8 src[65280]; 
  char v15[256]; 

  image = rgp.physPerfRaycastImage;
  if ( rgp.physPerfRaycastImage )
  {
    v0 = DVARFLT_physics_debugRaycasterMaxCost;
    if ( !DVARFLT_physics_debugRaycasterMaxCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMaxCost") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    v1 = 1.0 / v0->current.value;
    v12 = 256i64;
    v2 = s_PhysPerfRaycastSampleValuesCounts - (unsigned __int8 *)v15;
    v3 = v15;
    v11 = v15;
    v4 = s_PhysPerfRaycastSampleValues;
    do
    {
      v5 = v3;
      v6 = 256i64;
      do
      {
        v7 = v5[v2];
        if ( v7 )
          v8 = *v4 / (float)v7;
        else
          v8 = 0.0;
        v9 = (int)(float)((float)(v8 * 255.0) * v1);
        if ( v9 > 255 )
          v9 = 255;
        if ( v9 < 0 )
          LOBYTE(v9) = 0;
        *v5 = v9;
        ++v4;
        ++v5;
        --v6;
      }
      while ( v6 );
      v2 += 512i64;
      v3 = v11 - 256;
      v10 = v12-- == 1;
      v11 -= 256;
    }
    while ( !v10 );
    Image_UploadData(image, GFX_CUBE_FACE_POS_X, 0, src);
  }
}

/*
==============
PhysPerfRaycast_FreeImage
==============
*/
void PhysPerfRaycast_FreeImage(void)
{
  if ( s_physPerfRaycasterImage )
  {
    Image_Release(s_physPerfRaycasterImage);
    s_physPerfRaycasterImage = NULL;
  }
}

/*
==============
PhysPerfRaycast_GetImage
==============
*/

GfxImage *__fastcall PhysPerfRaycast_GetImage(double _XMM0_8)
{
  GfxImage *result; 
  __m256i v3; 
  __m256i v4; 
  Image_SetupParams params; 

  result = s_physPerfRaycasterImage;
  if ( !s_physPerfRaycasterImage )
  {
    v3.m256i_i32[2] = 1;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v4.m256i_i64[0] = 0i64;
    *(_OWORD *)&v4.m256i_u64[1] = _XMM0;
    *(__int64 *)((char *)&v3.m256i_i64[1] + 4) = 1i64;
    v4.m256i_i32[6] = -1;
    v3.m256i_i64[0] = 0x10000000100i64;
    v3.m256i_i32[5] = 3;
    v3.m256i_i32[6] = 1;
    *(__m256i *)&params.width = v3;
    *(__m256i *)&params.customAllocFunc = v4;
    s_physPerfRaycasterImage = Image_AllocProg(IMAGE_PROG_PHYS_PERF_RAYCASTER, IMG_CATEGORY_RAW, TS_FUNCTION);
    Image_Setup(s_physPerfRaycasterImage, &params);
    return s_physPerfRaycasterImage;
  }
  return result;
}

/*
==============
PhysPerfRaycast_Update
==============
*/
void PhysPerfRaycast_Update(void)
{
  const dvar_t *rbx1; 
  Physics_DebugRaycasterMode integer; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  double v8; 
  Physics_WorldId v9; 
  __int32 v10; 
  __int32 v11; 
  __int32 v12; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned __int8 *WeaponPriorityMap; 
  const dvar_t *v15; 
  int v16; 
  __int64 v17; 
  double v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  float v22; 
  float v23; 
  unsigned __int64 TickCounter; 
  __int128 v27; 
  __int128 v29; 
  hkMemoryAllocator *v31; 
  hkMemoryAllocator *v32; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v34; 
  __int64 v35; 
  vec3_t start; 
  vec3_t v0; 
  vec3_t row1; 
  vec3_t row2; 
  vec3_t end; 

  v35 = -2i64;
  rbx1 = DVARINT_physics_debugRaycasterMode;
  if ( !DVARINT_physics_debugRaycasterMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(rbx1);
  integer = rbx1->current.integer;
  if ( integer )
  {
    if ( s_physPerfRaycasterMode != integer )
    {
      memset_0(s_PhysPerfRaycastSampleValues, 0, sizeof(s_PhysPerfRaycastSampleValues));
      memset_0(s_PhysPerfRaycastSampleValuesCounts, 0, sizeof(s_PhysPerfRaycastSampleValuesCounts));
      s_physPerfRaycasterMode = integer;
    }
    v0 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->refdef.view.axis.m[0];
    row1 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->refdef.view.axis.row1;
    row2 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->refdef.view.axis.row2;
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    p_view = &LocalClientGlobals->refdef.view;
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(start.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(start.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    LODWORD(start.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
    if ( !VecNCompareCustomEpsilon(v0.v, s_physPerfRaycasterCamForward.v, 0.0099999998, 3) || !VecNCompareCustomEpsilon(row1.v, s_physPerfRaycasterCamLeft.v, 0.0099999998, 3) || !VecNCompareCustomEpsilon(row2.v, s_physPerfRaycasterCamUp.v, 0.0099999998, 3) || !VecNCompareCustomEpsilon(start.v, s_physPerfRaycasterCamPos.v, 1.0, 3) )
    {
      memset_0(s_PhysPerfRaycastSampleValues, 0, sizeof(s_PhysPerfRaycastSampleValues));
      memset_0(s_PhysPerfRaycastSampleValuesCounts, 0, sizeof(s_PhysPerfRaycastSampleValuesCounts));
      s_physPerfRaycasterCamForward = v0;
      s_physPerfRaycasterCamLeft = row1;
      s_physPerfRaycasterCamUp = row2;
      s_physPerfRaycasterCamPos = start;
    }
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (hkStopwatch::getTicksPerSecond() & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    v8 = 1.0 / *(double *)&_XMM1;
    v9 = PHYSICS_WORLD_ID_INVALID;
    extendedData.contents = -1;
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v34, 1, 0);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v34, 0, 0, 1, 0, 0, 0, 0);
    extendedData.ignoreBodies = &v34;
    v10 = integer - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            v9 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
            extendedData.contents = 41974001;
            extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
          }
        }
        else
        {
          v9 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
          extendedData.contents = 41974001;
          extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
          HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v34, -2);
        }
      }
      else
      {
        v9 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
        extendedData.contents = 8391985;
      }
    }
    else
    {
      v9 = PHYSICS_WORLD_ID_CLIENT_FIRST;
      extendedData.contents = 198705;
    }
    CollisionQueryResult = Physics_AllocateCollisionQueryResult(v9, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST);
    if ( Physics_IsDetailWorld(v9) )
    {
      WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
      Physics_AddDetailTrace(CollisionQueryResult, WeaponPriorityMap);
    }
    v15 = DVARINT_physics_debugRaycasterRaysPerFrame;
    if ( !DVARINT_physics_debugRaycasterRaysPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterRaysPerFrame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = v15->current.integer;
    if ( v16 > 0 )
    {
      v17 = (unsigned int)v16;
      do
      {
        BG_flrand(0.0, 1.0, &s_physPerfRaycastRandSeed);
        v18 = BG_flrand(0.0, 1.0, &s_physPerfRaycastRandSeed);
        v19 = (int)(float)(0.0 * 256.0);
        if ( v19 > 255 )
          v19 = 255;
        if ( v19 < 0 )
          v19 = 0;
        v20 = (int)(float)(*(float *)&v18 * 256.0);
        if ( v20 > 255 )
          v20 = 255;
        if ( v20 < 0 )
          v20 = 0;
        v21 = v19 + (v20 << 8);
        if ( s_PhysPerfRaycastSampleValuesCounts[v21] != 0xFF )
        {
          v22 = 2364.8267 - (float)(0.0 * 4729.6533);
          v23 = 2364.8267 - (float)(*(float *)&v18 * 4729.6533);
          end.v[0] = (float)(v23 * row2.v[0]) + (float)((float)(v22 * row1.v[0]) + (float)((float)(4096.0 * v0.v[0]) + start.v[0]));
          end.v[1] = (float)(v23 * row2.v[1]) + (float)((float)(v22 * row1.v[1]) + (float)((float)(4096.0 * v0.v[1]) + start.v[1]));
          end.v[2] = (float)(v23 * row2.v[2]) + (float)((float)(v22 * row1.v[2]) + (float)((float)(4096.0 * v0.v[2]) + start.v[2]));
          HavokPhysics_CollisionQueryResult::Reset(CollisionQueryResult, 0);
          TickCounter = hkStopwatch::getTickCounter();
          Physics_Raycast(v9, &start, &end, &extendedData, CollisionQueryResult);
          _XMM0 = 0i64;
          __asm { vcvtsi2sd xmm0, xmm0, rax }
          if ( (__int64)(hkStopwatch::getTickCounter() - TickCounter) < 0 )
          {
            *((_QWORD *)&v27 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v27 = *(double *)&_XMM0 + 1.844674407370955e19;
            _XMM0 = v27;
          }
          *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v29 = *(double *)&_XMM0 * v8;
          _XMM0 = v29;
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          s_PhysPerfRaycastSampleValues[v21] = (float)(*(float *)&_XMM1 * 1000000.0) + s_PhysPerfRaycastSampleValues[v21];
          ++s_PhysPerfRaycastSampleValuesCounts[v21];
        }
        --v17;
      }
      while ( v17 );
    }
    Physics_FreeCollisionQueryResult(CollisionQueryResult);
    v31 = hkMemHeapAllocator();
    v34.m_ignoreBodies.m_size = 0;
    if ( v34.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v31, v34.m_ignoreBodies.m_data, 4, v34.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v34.m_ignoreBodies.m_data = NULL;
    v34.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v32 = hkMemHeapAllocator();
    v34.m_ignoreEntities.m_size = 0;
    if ( v34.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v32, v34.m_ignoreEntities.m_data, 8, v34.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
  else
  {
    s_physPerfRaycasterMode = Physics_DebugRaycasterMode_Off;
  }
}

