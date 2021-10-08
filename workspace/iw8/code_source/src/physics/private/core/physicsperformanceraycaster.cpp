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

void __fastcall PhysPerfRaycast_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  const dvar_t *v7; 
  const dvar_t *v17; 
  const char *v18; 
  const char *v22; 
  const char *v30; 
  const dvar_t *v34; 
  const char *v35; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 

  v7 = DVARINT_physics_debugRaycasterMode;
  __asm { vmovaps [rsp+98h+var_48], xmm7 }
  _RBX = y;
  _RDI = x;
  __asm { vmovaps xmm7, xmm3 }
  if ( !DVARINT_physics_debugRaycasterMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovaps [rsp+98h+var_38], xmm6
      vmovss  xmm6, [rsp+98h+charHeight]
      vmovss  [rsp+98h+var_60], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Physics Raycaster Enabled", &colorWhite, 0, 1, v43, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
      vaddss  xmm1, xmm7, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
    }
    v17 = DVARINT_physics_debugRaycasterMode;
    if ( !DVARINT_physics_debugRaycasterMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    switch ( v17->current.integer )
    {
      case 1:
        v18 = "Client PMove - we use the client predictive world and pmove contents flags";
        break;
      case 2:
        v18 = "Client Sim - we use the client auth world and common dynent/ragdoll contents flags";
        break;
      case 3:
        v18 = "Client Weapons, world only - we use the client detail world and bullet contents flags, but only collide against the world and static models";
        break;
      case 4:
        v18 = "Client Weapons - we use the client detail world and bullet contents flags";
        break;
      default:
        goto LABEL_17;
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  [rsp+98h+var_60], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v18, &colorWhite, 0, 1, v44, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
LABEL_17:
    v22 = j_va("Image Dimensions: %ix%i", 256i64, 256i64);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  [rsp+98h+var_60], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v22, &colorWhite, 0, 1, v45, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
    _RSI = DVARFLT_physics_debugRaycasterMaxCost;
    if ( !DVARFLT_physics_debugRaycasterMaxCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMaxCost") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+28h]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v30 = j_va("Max time: %.2f microseconds", _RDX);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  [rsp+98h+var_60], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v30, &colorWhite, 0, 1, v46, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
    v34 = DVARINT_physics_debugRaycasterRaysPerFrame;
    if ( !DVARINT_physics_debugRaycasterRaysPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterRaysPerFrame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    v35 = j_va("Rays per frame: %i", v34->current.unsignedInt);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  [rsp+98h+var_60], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v35, &colorWhite, 0, 1, v47, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovaps xmm6, [rsp+98h+var_38]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr [rdi]
      vsubss  xmm2, xmm1, xmm7
      vmovss  dword ptr [rdi], xmm2
    }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
}

/*
==============
PhysPerfRaycast_DebugRender
==============
*/
void PhysPerfRaycast_DebugRender(GfxCmdBufContext *gfxContext)
{
  const dvar_t *v3; 
  GfxImage *physPerfRaycastImage; 
  float fmt; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  GfxCmdBufContext v31; 

  v3 = DVARINT_physics_debugRaycasterMode;
  _RDI = gfxContext;
  if ( !DVARINT_physics_debugRaycasterMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer )
  {
    __asm { vmovaps [rsp+98h+var_18], xmm6 }
    PhysPerfRaycast_DebugRender_PrepareImage();
    __asm { vmovups xmm6, xmmword ptr [rdi] }
    physPerfRaycastImage = rgp.physPerfRaycastImage;
    if ( rgp.physPerfRaycastImage )
    {
      __asm
      {
        vmovq   rsi, xmm6
        vmovaps [rsp+98h+var_28], xmm7
      }
      _RBX = R_GetActiveMatrixForEdit(_RSI, 0xAAu);
      MatrixIdentity44(&_RBX->m);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+30h]
        vsubss  xmm1, xmm0, dword ptr [rsi+2790h]
        vmovss  dword ptr [rbx+30h], xmm1
        vmovss  xmm0, dword ptr [rbx+34h]
        vsubss  xmm1, xmm0, dword ptr [rsi+2794h]
        vmovss  dword ptr [rbx+34h], xmm1
        vmovss  xmm0, dword ptr [rbx+38h]
        vsubss  xmm1, xmm0, dword ptr [rsi+2798h]
        vmovss  dword ptr [rbx+38h], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vsubss  xmm7, xmm0, cs:__real@44100000
      }
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( _RSI == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm2, cs:__real@42800000
        vxorps  xmm1, xmm1, xmm1
        vmovss  [rsp+98h+var_50], xmm1
        vmovss  [rsp+98h+var_58], xmm0
        vmovss  [rsp+98h+var_60], xmm0
        vmovss  xmm0, cs:__real@44000000
        vmovss  dword ptr [rsp+98h+var_68], xmm1
      }
      _RSI->input.codeImages[4] = physPerfRaycastImage;
      __asm
      {
        vmovss  dword ptr [rsp+98h+var_70], xmm0
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+98h+fmt], xmm0
        vmovdqa [rsp+98h+var_38], xmm6
      }
      RB_DrawStretchPic(&v31, rgp.feedbackReplaceBackbufferMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v26, v27, v28, v29, v30, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
      __asm { vmovdqa [rsp+98h+var_38], xmm6 }
      RB_EndTessSurfaceInternal(&v31, "c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsperformanceraycaster.cpp(378)");
      __asm { vmovaps xmm7, [rsp+98h+var_28] }
    }
    __asm { vmovaps xmm6, [rsp+98h+var_18] }
  }
}

/*
==============
PhysPerfRaycast_DebugRender_GetSampleValues
==============
*/

void __fastcall PhysPerfRaycast_DebugRender_GetSampleValues(unsigned __int8 *pixels, double _XMM1_8)
{
  const dvar_t *v4; 
  signed __int64 v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v12; 
  __int64 v13; 
  bool v19; 
  unsigned __int8 *v24; 
  __int64 v25; 

  v4 = DVARFLT_physics_debugRaycasterMaxCost;
  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm6
    vmovaps [rsp+0A8h+var_58], xmm7
  }
  if ( !DVARFLT_physics_debugRaycasterMaxCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMaxCost") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm6, xmm0, dword ptr [rbx+28h]
    vmovss  xmm7, cs:__real@437f0000
  }
  v25 = 256i64;
  v9 = s_PhysPerfRaycastSampleValuesCounts - pixels - 65280;
  v10 = pixels + 65280;
  v24 = pixels + 65280;
  _RSI = s_PhysPerfRaycastSampleValues;
  do
  {
    v12 = v10;
    v13 = 256i64;
    do
    {
      if ( v12[v9] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vdivss  xmm0, xmm0, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmulss  xmm0, xmm0, xmm7
        vmulss  xmm1, xmm0, xmm6
        vcvttss2si ebx, xmm1
      }
      if ( _EBX > 255 )
        _EBX = 255;
      if ( _EBX < 0 )
        LOBYTE(_EBX) = 0;
      *v12 = _EBX;
      ++_RSI;
      ++v12;
      --v13;
    }
    while ( v13 );
    v9 += 512i64;
    v10 = v24 - 256;
    v19 = v25-- == 1;
    v24 -= 256;
  }
  while ( !v19 );
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_48]
    vmovaps xmm7, [rsp+0A8h+var_58]
  }
}

/*
==============
PhysPerfRaycast_DebugRender_PrepareImage
==============
*/

void __fastcall PhysPerfRaycast_DebugRender_PrepareImage(__int64 a1, double _XMM1_8)
{
  const dvar_t *v4; 
  signed __int64 v8; 
  char *v9; 
  char *v11; 
  __int64 v12; 
  bool v18; 
  char *v21; 
  __int64 v22; 
  const GfxImage *image; 
  unsigned __int8 src[65280]; 
  char v25[256]; 

  image = rgp.physPerfRaycastImage;
  if ( rgp.physPerfRaycastImage )
  {
    v4 = DVARFLT_physics_debugRaycasterMaxCost;
    __asm
    {
      vmovaps [rsp+100C8h+var_38], xmm6
      vmovaps [rsp+100C8h+var_48], xmm7
    }
    if ( !DVARFLT_physics_debugRaycasterMaxCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMaxCost") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm6, xmm0, dword ptr [rbx+28h]
      vmovss  xmm7, cs:__real@437f0000
    }
    v22 = 256i64;
    v8 = s_PhysPerfRaycastSampleValuesCounts - (unsigned __int8 *)v25;
    v9 = v25;
    v21 = v25;
    _RSI = s_PhysPerfRaycastSampleValues;
    do
    {
      v11 = v9;
      v12 = 256i64;
      do
      {
        if ( v11[v8] )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi]
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vdivss  xmm0, xmm0, xmm1
          }
        }
        else
        {
          __asm { vxorps  xmm0, xmm0, xmm0 }
        }
        __asm
        {
          vmulss  xmm0, xmm0, xmm7
          vmulss  xmm1, xmm0, xmm6
          vcvttss2si ebx, xmm1
        }
        if ( _EBX > 255 )
          _EBX = 255;
        if ( _EBX < 0 )
          LOBYTE(_EBX) = 0;
        *v11 = _EBX;
        ++_RSI;
        ++v11;
        --v12;
      }
      while ( v12 );
      v8 += 512i64;
      v9 = v21 - 256;
      v18 = v22-- == 1;
      v21 -= 256;
    }
    while ( !v18 );
    Image_UploadData(image, GFX_CUBE_FACE_POS_X, 0, src);
    __asm
    {
      vmovaps xmm7, [rsp+100C8h+var_48]
      vmovaps xmm6, [rsp+100C8h+var_38]
    }
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
  __m256i v5; 
  __m256i v6; 
  Image_SetupParams params; 

  result = s_physPerfRaycasterImage;
  if ( !s_physPerfRaycasterImage )
  {
    v5.m256i_i32[2] = 1;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v6.m256i_i64[0] = 0i64;
    __asm { vmovdqu xmmword ptr [rsp+0A8h+var_68+8], xmm0 }
    *(__int64 *)((char *)&v5.m256i_i64[1] + 4) = 1i64;
    v6.m256i_i32[6] = -1;
    __asm { vmovups ymm1, [rsp+0A8h+var_68] }
    v5.m256i_i64[0] = 0x10000000100i64;
    v5.m256i_i32[5] = 3;
    v5.m256i_i32[6] = 1;
    __asm
    {
      vmovups ymm0, [rsp+0A8h+var_88]
      vmovups ymmword ptr [rsp+0A8h+params.width], ymm0
      vmovups ymmword ptr [rsp+0A8h+params.customAllocFunc], ymm1
    }
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
void PhysPerfRaycast_Update()
{
  const dvar_t *v11; 
  Physics_DebugRaycasterMode integer; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  Physics_WorldId v45; 
  __int32 v47; 
  __int32 v48; 
  __int32 v49; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned __int8 *WeaponPriorityMap; 
  const dvar_t *v52; 
  int v53; 
  __int64 v54; 
  unsigned __int64 TickCounter; 
  hkMemoryAllocator *v101; 
  hkMemoryAllocator *v102; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v115; 
  __int64 v116; 
  vec3_t start; 
  float v0[2]; 
  float v119; 
  float v120[2]; 
  float v121; 
  float v122[2]; 
  float v123; 
  vec3_t end; 
  char v125; 
  void *retaddr; 

  _RAX = &retaddr;
  v116 = -2i64;
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
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  v11 = DVARINT_physics_debugRaycasterMode;
  if ( !DVARINT_physics_debugRaycasterMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  integer = v11->current.integer;
  if ( integer )
  {
    if ( s_physPerfRaycasterMode != integer )
    {
      memset_0(s_PhysPerfRaycastSampleValues, 0, sizeof(s_PhysPerfRaycastSampleValues));
      memset_0(s_PhysPerfRaycastSampleValuesCounts, 0, sizeof(s_PhysPerfRaycastSampleValuesCounts));
      s_physPerfRaycasterMode = integer;
    }
    _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+6944h]
      vmovss  [rbp+0D0h+v0], xmm0
      vmovss  xmm1, dword ptr [rax+6948h]
      vmovss  [rbp+0D0h+v0+4], xmm1
      vmovss  xmm0, dword ptr [rax+694Ch]
      vmovss  [rbp+0D0h+var_108], xmm0
    }
    _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+6950h]
      vmovss  [rbp+0D0h+var_100], xmm0
      vmovss  xmm1, dword ptr [rax+6954h]
      vmovss  [rbp+0D0h+var_100+4], xmm1
      vmovss  xmm0, dword ptr [rax+6958h]
      vmovss  [rbp+0D0h+var_F8], xmm0
    }
    _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+695Ch]
      vmovss  [rbp+0D0h+var_F0], xmm0
      vmovss  xmm1, dword ptr [rax+6960h]
      vmovss  [rbp+0D0h+var_F0+4], xmm1
      vmovss  xmm0, dword ptr [rax+6964h]
      vmovss  [rbp+0D0h+var_E8], xmm0
    }
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
    __asm
    {
      vmovss  xmm6, cs:__real@3c23d70a
      vmovaps xmm2, xmm6; epsilon
      vmovss  xmm11, cs:__real@3f800000
    }
    if ( !VecNCompareCustomEpsilon(v0, s_physPerfRaycasterCamForward.v, *(float *)&_XMM2, 3) )
      goto LABEL_18;
    __asm { vmovaps xmm2, xmm6; epsilon }
    if ( !VecNCompareCustomEpsilon(v120, s_physPerfRaycasterCamLeft.v, *(float *)&_XMM2, 3) )
      goto LABEL_18;
    __asm { vmovaps xmm2, xmm6; epsilon }
    if ( !VecNCompareCustomEpsilon(v122, s_physPerfRaycasterCamUp.v, *(float *)&_XMM2, 3) )
      goto LABEL_18;
    __asm { vmovaps xmm2, xmm11; epsilon }
    if ( !VecNCompareCustomEpsilon(start.v, s_physPerfRaycasterCamPos.v, *(float *)&_XMM2, 3) )
    {
LABEL_18:
      memset_0(s_PhysPerfRaycastSampleValues, 0, sizeof(s_PhysPerfRaycastSampleValues));
      memset_0(s_PhysPerfRaycastSampleValuesCounts, 0, sizeof(s_PhysPerfRaycastSampleValuesCounts));
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+0D0h+v0]
        vmovsd  qword ptr cs:s_physPerfRaycasterCamForward, xmm0
      }
      s_physPerfRaycasterCamForward.v[2] = v119;
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+0D0h+var_100]
        vmovsd  qword ptr cs:s_physPerfRaycasterCamLeft, xmm0
      }
      s_physPerfRaycasterCamLeft.v[2] = v121;
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+0D0h+var_F0]
        vmovsd  qword ptr cs:s_physPerfRaycasterCamUp, xmm0
      }
      s_physPerfRaycasterCamUp.v[2] = v123;
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+0D0h+start]
        vmovsd  qword ptr cs:s_physPerfRaycasterCamPos, xmm0
      }
      s_physPerfRaycasterCamPos.v[2] = start.v[2];
    }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, rax
      vmovsd  xmm8, cs:__real@43f0000000000000
    }
    if ( (hkStopwatch::getTicksPerSecond() & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm8 }
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vdivsd  xmm13, xmm0, xmm1
    }
    v45 = PHYSICS_WORLD_ID_INVALID;
    extendedData.contents = -1;
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vmovss  [rsp+1D0h+extendedData.collisionBuffer], xmm9
    }
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v115, 1, 0);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v115, 0, 0, 1, 0, 0, 0, 0);
    extendedData.ignoreBodies = &v115;
    v47 = integer - 1;
    if ( v47 )
    {
      v48 = v47 - 1;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( v49 )
        {
          if ( v49 == 1 )
          {
            v45 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
            extendedData.contents = 41974001;
            extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
          }
        }
        else
        {
          v45 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
          extendedData.contents = 41974001;
          extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
          HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v115, -2);
        }
      }
      else
      {
        v45 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
        extendedData.contents = 8391985;
      }
    }
    else
    {
      v45 = PHYSICS_WORLD_ID_CLIENT_FIRST;
      extendedData.contents = 198705;
    }
    CollisionQueryResult = Physics_AllocateCollisionQueryResult(v45, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST);
    if ( Physics_IsDetailWorld(v45) )
    {
      WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
      Physics_AddDetailTrace(CollisionQueryResult, WeaponPriorityMap);
    }
    v52 = DVARINT_physics_debugRaycasterRaysPerFrame;
    if ( !DVARINT_physics_debugRaycasterRaysPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugRaycasterRaysPerFrame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    v53 = v52->current.integer;
    if ( v53 > 0 )
    {
      v54 = (unsigned int)v53;
      __asm
      {
        vmovss  xmm10, cs:__real@43800000
        vmovss  xmm15, cs:__real@4593cd3a
        vmovss  xmm14, cs:__real@45800000
        vmovss  xmm12, cs:__real@49742400
      }
      do
      {
        __asm
        {
          vmovaps xmm1, xmm11; max
          vmovaps xmm0, xmm9; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &s_physPerfRaycastRandSeed);
        __asm
        {
          vmovaps xmm6, xmm0
          vmovaps xmm1, xmm11; max
          vmovaps xmm0, xmm9; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &s_physPerfRaycastRandSeed);
        __asm
        {
          vmovaps xmm2, xmm0
          vmulss  xmm1, xmm6, xmm10
          vcvttss2si ecx, xmm1
        }
        if ( _ECX > 255 )
          _ECX = 255;
        if ( _ECX < 0 )
          _ECX = 0;
        __asm
        {
          vmulss  xmm1, xmm0, xmm10
          vcvttss2si eax, xmm1
        }
        if ( _EAX > 255 )
          _EAX = 255;
        if ( _EAX < 0 )
          _EAX = 0;
        _RDI = _ECX + (_EAX << 8);
        if ( s_PhysPerfRaycastSampleValuesCounts[_RDI] != 0xFF )
        {
          __asm
          {
            vmulss  xmm0, xmm6, xmm15
            vmovss  xmm3, cs:__real@4513cd3a
            vsubss  xmm6, xmm3, xmm0
            vmulss  xmm1, xmm2, xmm15
            vsubss  xmm7, xmm3, xmm1
            vmulss  xmm1, xmm14, [rbp+0D0h+v0]
            vaddss  xmm3, xmm1, dword ptr [rbp+0D0h+start]
            vmulss  xmm0, xmm14, [rbp+0D0h+v0+4]
            vaddss  xmm4, xmm0, dword ptr [rbp+0D0h+start+4]
            vmulss  xmm2, xmm14, [rbp+0D0h+var_108]
            vaddss  xmm5, xmm2, dword ptr [rbp+0D0h+start+8]
            vmulss  xmm1, xmm6, [rbp+0D0h+var_100]
            vaddss  xmm3, xmm1, xmm3
            vmulss  xmm0, xmm6, [rbp+0D0h+var_100+4]
            vaddss  xmm4, xmm0, xmm4
            vmulss  xmm2, xmm6, [rbp+0D0h+var_F8]
            vaddss  xmm5, xmm2, xmm5
            vmulss  xmm1, xmm7, [rbp+0D0h+var_F0]
            vaddss  xmm2, xmm1, xmm3
            vmovss  dword ptr [rbp+0D0h+end], xmm2
            vmulss  xmm1, xmm7, [rbp+0D0h+var_F0+4]
            vaddss  xmm2, xmm1, xmm4
            vmovss  dword ptr [rbp+0D0h+end+4], xmm2
            vmulss  xmm1, xmm7, [rbp+0D0h+var_E8]
            vaddss  xmm2, xmm1, xmm5
            vmovss  dword ptr [rbp+0D0h+end+8], xmm2
          }
          HavokPhysics_CollisionQueryResult::Reset(CollisionQueryResult, 0);
          TickCounter = hkStopwatch::getTickCounter();
          Physics_Raycast(v45, &start, &end, &extendedData, CollisionQueryResult);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2sd xmm0, xmm0, rax
          }
          if ( (__int64)(hkStopwatch::getTickCounter() - TickCounter) < 0 )
            __asm { vaddsd  xmm0, xmm0, xmm8 }
          __asm
          {
            vmulsd  xmm0, xmm0, xmm13
            vcvtsd2ss xmm1, xmm0, xmm0
            vmulss  xmm2, xmm1, xmm12
          }
          _RAX = s_PhysPerfRaycastSampleValues;
          __asm
          {
            vaddss  xmm0, xmm2, dword ptr [rax+rdi*4]
            vmovss  dword ptr [rax+rdi*4], xmm0
          }
          ++s_PhysPerfRaycastSampleValuesCounts[_RDI];
        }
        --v54;
      }
      while ( v54 );
    }
    Physics_FreeCollisionQueryResult(CollisionQueryResult);
    v101 = hkMemHeapAllocator();
    v115.m_ignoreBodies.m_size = 0;
    if ( v115.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v101, v115.m_ignoreBodies.m_data, 4, v115.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v115.m_ignoreBodies.m_data = NULL;
    v115.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v102 = hkMemHeapAllocator();
    v115.m_ignoreEntities.m_size = 0;
    if ( v115.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v102, v115.m_ignoreEntities.m_data, 8, v115.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
  else
  {
    s_physPerfRaycasterMode = Physics_DebugRaycasterMode_Off;
  }
  _R11 = &v125;
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

