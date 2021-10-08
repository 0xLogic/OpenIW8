/*
==============
R_Umbra_UseForStatics
==============
*/

bool __fastcall R_Umbra_UseForStatics(unsigned int sceneViewType)
{
  return ?R_Umbra_UseForStatics@@YA_NI@Z(sceneViewType);
}

/*
==============
R_Umbra_IsBoxVisible
==============
*/

int __fastcall R_Umbra_IsBoxVisible(const Bounds *bounds, const Umbra::OcclusionBuffer *occlusionBuffer)
{
  return ?R_Umbra_IsBoxVisible@@YAHPEBUBounds@@PEBVOcclusionBuffer@Umbra@@@Z(bounds, occlusionBuffer);
}

/*
==============
R_Umbra_IsBoxVisible
==============
*/

int __fastcall R_Umbra_IsBoxVisible(const Bounds *bounds, const unsigned int sceneViewType, const unsigned int viewInfoIndex, const bool projectedBoundsTest)
{
  return ?R_Umbra_IsBoxVisible@@YAHPEBUBounds@@II_N@Z(bounds, sceneViewType, viewInfoIndex, projectedBoundsTest);
}

/*
==============
R_Umbra_UseForDynamics
==============
*/

bool __fastcall R_Umbra_UseForDynamics(unsigned int sceneViewType)
{
  return ?R_Umbra_UseForDynamics@@YA_NI@Z(sceneViewType);
}

/*
==============
R_Umbra_GetOcclusionBuffer
==============
*/

Umbra::OcclusionBuffer *__fastcall R_Umbra_GetOcclusionBuffer(unsigned int sceneViewType, unsigned int viewInfoIndex)
{
  return ?R_Umbra_GetOcclusionBuffer@@YAPEAVOcclusionBuffer@Umbra@@II@Z(sceneViewType, viewInfoIndex);
}

/*
==============
R_Umbra_IsBoxVisible
==============
*/
int R_Umbra_IsBoxVisible(const Bounds *bounds, const unsigned int sceneViewType, const unsigned int viewInfoIndex, const bool projectedBoundsTest)
{
  __int64 v5; 
  bool v10; 
  Umbra::OcclusionBuffer *OcclusionBuffer_Internal; 
  int v12; 
  Umbra::OcclusionBuffer::VisibilityTestResult v22; 
  __int64 v24; 
  __int64 v25; 
  Umbra::Vector3 mx; 
  Umbra::Vector3 mn; 

  v5 = sceneViewType;
  _RDI = bounds;
  if ( sceneViewType >= 0x21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 319, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", sceneViewType, 33) )
    __debugbreak();
  if ( rg.useCachedSunShadow && (unsigned int)(v5 - 1) <= 2 )
    return R_Umbra_IsBoxVisible_CachedSunShadows(_RDI, v5, projectedBoundsTest);
  if ( (unsigned int)v5 >= 0x21 )
  {
    LODWORD(v25) = 33;
    LODWORD(v24) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 189, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  switch ( (int)v5 )
  {
    case 0:
      if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_UMBRA_QUERY_STATIC_CAMERA) )
      {
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 196, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_UMBRA_QUERY_STATIC_CAMERA ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_UMBRA_QUERY_STATIC_CAMERA )");
        goto LABEL_20;
      }
      break;
    case 1:
    case 2:
    case 3:
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      if ( s_umbraOcclusionBuffer[v5] )
      {
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 214, ASSERT_TYPE_ASSERT, "(s_umbraOcclusionBuffer[sceneViewType] == nullptr)", (const char *)&queryFormat, "s_umbraOcclusionBuffer[sceneViewType] == nullptr");
        goto LABEL_20;
      }
      break;
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
      if ( s_umbraOcclusionBuffer[v5] )
      {
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 229, ASSERT_TYPE_ASSERT, "(s_umbraOcclusionBuffer[sceneViewType] == nullptr)", (const char *)&queryFormat, "s_umbraOcclusionBuffer[sceneViewType] == nullptr");
        goto LABEL_20;
      }
      break;
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
      if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_UMBRA_QUERY_STATIC_CACHED_SUNSHADOWS) )
      {
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 243, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_UMBRA_QUERY_STATIC_CACHED_SUNSHADOWS ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_UMBRA_QUERY_STATIC_CACHED_SUNSHADOWS )");
        goto LABEL_20;
      }
      break;
    default:
      LODWORD(v24) = v5;
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 249, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(249): unhandled case %d in switch statement", v24);
LABEL_20:
      if ( v10 )
        __debugbreak();
      break;
  }
  OcclusionBuffer_Internal = R_Umbra_GetOcclusionBuffer_Internal(v5, viewInfoIndex);
  v12 = 1;
  if ( OcclusionBuffer_Internal )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rdi+4]
      vmovss  xmm3, dword ptr [rdi+8]
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovss  xmm6, dword ptr [rdi]
      vaddss  xmm0, xmm6, dword ptr [rdi+0Ch]
      vsubss  xmm1, xmm6, dword ptr [rdi+0Ch]
      vmovss  [rsp+0A8h+mx.x], xmm0
      vaddss  xmm0, xmm5, dword ptr [rdi+10h]
      vmovss  [rsp+0A8h+mx.y], xmm0
      vaddss  xmm0, xmm3, dword ptr [rdi+14h]
      vmovss  [rsp+0A8h+mx.z], xmm0
      vsubss  xmm0, xmm5, dword ptr [rdi+10h]
      vmovss  [rsp+0A8h+mn.x], xmm1
      vsubss  xmm1, xmm3, dword ptr [rdi+14h]
      vmovss  [rsp+0A8h+mn.y], xmm0
      vmovss  [rsp+0A8h+mn.z], xmm1
    }
    v22 = Umbra::OcclusionBuffer::testAABBVisibility(OcclusionBuffer_Internal, &mn, &mx, 0, NULL);
    __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
    if ( v22 )
    {
      if ( v22 != VISIBLE && v22 != 3 )
      {
        LODWORD(v24) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(281): unhandled case %d in switch statement", v24) )
          __debugbreak();
      }
    }
    else
    {
      return 0;
    }
  }
  return v12;
}

/*
==============
R_Umbra_GetOcclusionBuffer
==============
*/
Umbra::OcclusionBuffer *R_Umbra_GetOcclusionBuffer(unsigned int sceneViewType, unsigned int viewInfoIndex)
{
  __int64 v2; 
  bool v4; 
  __int64 v6; 
  int v8; 

  v2 = sceneViewType;
  if ( sceneViewType >= 0x21 )
  {
    v8 = 33;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 189, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", sceneViewType, v8) )
      __debugbreak();
  }
  switch ( (int)v2 )
  {
    case 0:
      if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_UMBRA_QUERY_STATIC_CAMERA) )
      {
        v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 196, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_UMBRA_QUERY_STATIC_CAMERA ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_UMBRA_QUERY_STATIC_CAMERA )");
        goto LABEL_14;
      }
      break;
    case 1:
    case 2:
    case 3:
      return R_Umbra_GetOcclusionBuffer_Internal(v2, viewInfoIndex);
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      if ( s_umbraOcclusionBuffer[v2] )
      {
        v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 214, ASSERT_TYPE_ASSERT, "(s_umbraOcclusionBuffer[sceneViewType] == nullptr)", (const char *)&queryFormat, "s_umbraOcclusionBuffer[sceneViewType] == nullptr");
        goto LABEL_14;
      }
      break;
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
      if ( s_umbraOcclusionBuffer[v2] )
      {
        v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 229, ASSERT_TYPE_ASSERT, "(s_umbraOcclusionBuffer[sceneViewType] == nullptr)", (const char *)&queryFormat, "s_umbraOcclusionBuffer[sceneViewType] == nullptr");
        goto LABEL_14;
      }
      break;
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
      if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_UMBRA_QUERY_STATIC_CACHED_SUNSHADOWS) )
      {
        v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 243, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_UMBRA_QUERY_STATIC_CACHED_SUNSHADOWS ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_UMBRA_QUERY_STATIC_CACHED_SUNSHADOWS )");
        goto LABEL_14;
      }
      break;
    default:
      LODWORD(v6) = v2;
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 249, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(249): unhandled case %d in switch statement", v6);
LABEL_14:
      if ( v4 )
        __debugbreak();
      break;
  }
  return R_Umbra_GetOcclusionBuffer_Internal(v2, viewInfoIndex);
}

/*
==============
R_Umbra_IsBoxVisible
==============
*/
__int64 R_Umbra_IsBoxVisible(const Bounds *bounds, const Umbra::OcclusionBuffer *occlusionBuffer)
{
  Umbra::OcclusionBuffer::VisibilityTestResult v12; 
  Umbra::Vector3 mx; 
  Umbra::Vector3 mn; 

  if ( !occlusionBuffer )
    return 1i64;
  __asm
  {
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovaps [rsp+78h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx]
    vaddss  xmm0, xmm6, dword ptr [rcx+0Ch]
    vsubss  xmm1, xmm6, dword ptr [rcx+0Ch]
    vmovss  [rsp+78h+mx.x], xmm0
    vaddss  xmm0, xmm5, dword ptr [rcx+10h]
    vmovss  [rsp+78h+mx.y], xmm0
    vaddss  xmm0, xmm3, dword ptr [rcx+14h]
    vmovss  [rsp+78h+mx.z], xmm0
    vsubss  xmm0, xmm5, dword ptr [rcx+10h]
    vmovss  [rsp+78h+mn.x], xmm1
    vsubss  xmm1, xmm3, dword ptr [rcx+14h]
    vmovss  [rsp+78h+mn.y], xmm0
    vmovss  [rsp+78h+mn.z], xmm1
  }
  v12 = Umbra::OcclusionBuffer::testAABBVisibility((Umbra::OcclusionBuffer *)occlusionBuffer, &mn, &mx, 0, NULL);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  if ( v12 )
  {
    if ( v12 != VISIBLE && v12 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(281): unhandled case %d in switch statement", v12) )
      __debugbreak();
    return 1i64;
  }
  return 0i64;
}

/*
==============
R_Umbra_UseForDynamics
==============
*/
bool R_Umbra_UseForDynamics(unsigned int sceneViewType)
{
  bool result; 

  switch ( sceneViewType )
  {
    case 0u:
      result = 1;
      break;
    case 1u:
    case 2u:
    case 3u:
      result = rg.umbraShadowCasters;
      break;
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
      goto $LN4_121;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 458, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(458): unhandled case %d in switch statement", sceneViewType) )
        __debugbreak();
$LN4_121:
      result = 0;
      break;
  }
  return result;
}

/*
==============
R_Umbra_UseForStatics
==============
*/
bool R_Umbra_UseForStatics(unsigned int sceneViewType)
{
  bool result; 

  switch ( sceneViewType )
  {
    case 0u:
      result = 1;
      break;
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
      goto $LN4_122;
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
      result = rg.umbraShadowCasters;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 399, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(399): unhandled case %d in switch statement", sceneViewType) )
        __debugbreak();
$LN4_122:
      result = 0;
      break;
  }
  return result;
}

