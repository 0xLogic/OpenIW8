/*
==============
R_GetModelSurfaceXSurface
==============
*/

const XSurface *__fastcall R_GetModelSurfaceXSurface(const void *modelSurf, surfaceType_t surfType)
{
  return ?R_GetModelSurfaceXSurface@@YAPEBUXSurface@@PEBXW4surfaceType_t@@@Z(modelSurf, surfType);
}

/*
==============
R_GetModelRigidSurfaceChildCount
==============
*/

unsigned int __fastcall R_GetModelRigidSurfaceChildCount(const GfxModelRigidSurface *modelSurf)
{
  return ?R_GetModelRigidSurfaceChildCount@@YAIPEBUGfxModelRigidSurface@@@Z(modelSurf);
}

/*
==============
R_GetModelRigidSurfaceSize
==============
*/

__int64 __fastcall R_GetModelRigidSurfaceSize(const GfxModelRigidSurface *modelSurf)
{
  return ?R_GetModelRigidSurfaceSize@@YA_JPEBUGfxModelRigidSurface@@@Z(modelSurf);
}

/*
==============
R_GetRigidSurfaceTypeForChildCount
==============
*/

int __fastcall R_GetRigidSurfaceTypeForChildCount(int childCount)
{
  return ?R_GetRigidSurfaceTypeForChildCount@@YAHH@Z(childCount);
}

/*
==============
R_GetModelRigidSurfaceChildCount
==============
*/
__int64 R_GetModelRigidSurfaceChildCount(const GfxModelRigidSurface *modelSurf)
{
  int v1; 
  int v3; 
  int v4; 

  v1 = -3 - modelSurf->base.skinnedCachedOffset;
  if ( v1 > 128 )
  {
    v4 = 128;
    v3 = -3 - modelSurf->base.skinnedCachedOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v3, v4) )
      __debugbreak();
  }
  return (unsigned int)v1;
}

/*
==============
R_GetModelRigidSurfaceSize
==============
*/
__int64 R_GetModelRigidSurfaceSize(const GfxModelRigidSurface *modelSurf)
{
  int v2; 
  int v4; 
  int v5; 

  if ( modelSurf->base.skinnedCachedOffset > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
    __debugbreak();
  v2 = -3 - modelSurf->base.skinnedCachedOffset;
  if ( v2 > 128 )
  {
    v5 = 128;
    v4 = -3 - modelSurf->base.skinnedCachedOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v4, v5) )
      __debugbreak();
  }
  return 32i64 * (unsigned int)v2 + 76;
}

/*
==============
R_GetModelSurfaceXSurface
==============
*/
const XSurface *R_GetModelSurfaceXSurface(const void *modelSurf, surfaceType_t surfType)
{
  __int64 v5; 

  if ( !modelSurf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 234, ASSERT_TYPE_ASSERT, "(modelSurf)", (const char *)&queryFormat, "modelSurf") )
    __debugbreak();
  if ( (unsigned int)(surfType - 6) > 5 )
  {
    LODWORD(v5) = surfType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 247, ASSERT_TYPE_ASSERT, "( ( surfType == SF_XMODEL_SKINNED || surfType == SF_XMODEL_SKINNED_SUBDIV || surfType == SF_XMODEL_SKINNED_SUBDIV_PATCH ) )", "( surfType ) = %i", v5) )
      __debugbreak();
  }
  return (const XSurface *)*((_QWORD *)modelSurf + 7);
}

/*
==============
R_GetRigidSurfaceTypeForChildCount
==============
*/
__int64 R_GetRigidSurfaceTypeForChildCount(int childCount)
{
  int v3; 
  int v4; 

  if ( (unsigned int)(childCount - 1) >= 0x80 )
  {
    v4 = 128;
    v3 = childCount - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( childCount - 1 ) < (unsigned)( ( XMODEL_MAX_RIGID_GROUPS ) )", "childCount - 1 doesn't index MAX_RIGID_CHILD_SURFACES\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return (unsigned int)(-3 - childCount);
}

