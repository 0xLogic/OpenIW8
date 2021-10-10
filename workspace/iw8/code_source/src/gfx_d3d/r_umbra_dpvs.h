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
  __int128 v4; 
  __int64 v5; 
  bool v10; 
  Umbra::OcclusionBuffer *OcclusionBuffer_Internal; 
  int v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  Umbra::OcclusionBuffer::VisibilityTestResult v18; 
  __int64 v19; 
  __int64 v20; 
  Umbra::Vector3 mx; 
  Umbra::Vector3 mn; 
  __int128 v23; 

  v5 = sceneViewType;
  if ( sceneViewType >= 0x21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 319, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", sceneViewType, 33) )
    __debugbreak();
  if ( rg.useCachedSunShadow && (unsigned int)(v5 - 1) <= 2 )
    return R_Umbra_IsBoxVisible_CachedSunShadows(bounds, v5, projectedBoundsTest);
  if ( (unsigned int)v5 >= 0x21 )
  {
    LODWORD(v20) = 33;
    LODWORD(v19) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 189, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v19, v20) )
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
      LODWORD(v19) = v5;
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 249, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(249): unhandled case %d in switch statement", v19);
LABEL_20:
      if ( v10 )
        __debugbreak();
      break;
  }
  OcclusionBuffer_Internal = R_Umbra_GetOcclusionBuffer_Internal(v5, viewInfoIndex);
  v12 = 1;
  if ( OcclusionBuffer_Internal )
  {
    v13 = bounds->midPoint.v[1];
    v14 = bounds->midPoint.v[2];
    v23 = v4;
    v15 = bounds->midPoint.v[0] - bounds->halfSize.v[0];
    mx.x = bounds->midPoint.v[0] + bounds->halfSize.v[0];
    mx.y = v13 + bounds->halfSize.v[1];
    mx.z = v14 + bounds->halfSize.v[2];
    v16 = v13 - bounds->halfSize.v[1];
    mn.x = v15;
    v17 = v14 - bounds->halfSize.v[2];
    mn.y = v16;
    mn.z = v17;
    v18 = Umbra::OcclusionBuffer::testAABBVisibility(OcclusionBuffer_Internal, &mn, &mx, 0, NULL);
    if ( v18 )
    {
      if ( v18 != VISIBLE && v18 != 3 )
      {
        LODWORD(v19) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(281): unhandled case %d in switch statement", v19) )
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
  __int128 v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  Umbra::OcclusionBuffer::VisibilityTestResult v8; 
  Umbra::Vector3 mx; 
  Umbra::Vector3 mn; 
  __int128 v12; 

  if ( !occlusionBuffer )
    return 1i64;
  v3 = bounds->midPoint.v[1];
  v4 = bounds->midPoint.v[2];
  v12 = v2;
  v5 = bounds->midPoint.v[0] - bounds->halfSize.v[0];
  mx.x = bounds->midPoint.v[0] + bounds->halfSize.v[0];
  mx.y = v3 + bounds->halfSize.v[1];
  mx.z = v4 + bounds->halfSize.v[2];
  v6 = v3 - bounds->halfSize.v[1];
  mn.x = v5;
  v7 = v4 - bounds->halfSize.v[2];
  mn.y = v6;
  mn.z = v7;
  v8 = Umbra::OcclusionBuffer::testAABBVisibility((Umbra::OcclusionBuffer *)occlusionBuffer, &mn, &mx, 0, NULL);
  if ( v8 )
  {
    if ( v8 != VISIBLE && v8 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(281): unhandled case %d in switch statement", v8) )
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

