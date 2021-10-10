/*
==============
FresnelTerm
==============
*/

double __fastcall FresnelTerm(float n0, float n1, float cosIncidentAngle)
{
  double result; 

  *(float *)&result = ?FresnelTerm@@YAMMMM@Z(n0, n1, cosIncidentAngle);
  return result;
}

/*
==============
R_AllocGlobalVariable
==============
*/

void *__fastcall R_AllocGlobalVariable(unsigned __int64 bytes, const char *name)
{
  return ?R_AllocGlobalVariable@@YAPEAX_KPEBD@Z(bytes, name);
}

/*
==============
R_GetTechniqueNames
==============
*/

const char **__fastcall R_GetTechniqueNames()
{
  return ?R_GetTechniqueNames@@YAPEAPEBDXZ();
}

/*
==============
R_GetTechniqueNameFromType
==============
*/

const char *__fastcall R_GetTechniqueNameFromType(MaterialTechniqueType techType)
{
  return ?R_GetTechniqueNameFromType@@YAPEBDW4MaterialTechniqueType@@@Z(techType);
}

/*
==============
R_HashAssetName
==============
*/

unsigned int __fastcall R_HashAssetName(const char *name)
{
  return ?R_HashAssetName@@YAIPEBD@Z(name);
}

/*
==============
R_CullPointAndRadius
==============
*/

bool __fastcall R_CullPointAndRadius(const vec3_t *pt, float radius, const DpvsPlane *clipPlanes, unsigned int clipPlaneCount)
{
  return ?R_CullPointAndRadius@@YA_NAEBTvec3_t@@MQEBUDpvsPlane@@I@Z(pt, radius, clipPlanes, clipPlaneCount);
}

/*
==============
R_GetClearColor
==============
*/

bool __fastcall R_GetClearColor(const GfxViewInfo *viewInfo, vec4_t *unpackedRgba)
{
  return ?R_GetClearColor@@YA_NPEBUGfxViewInfo@@AEATvec4_t@@@Z(viewInfo, unpackedRgba);
}

/*
==============
FresnelTerm
==============
*/

float __fastcall FresnelTerm(float n0, float n1, double cosIncidentAngle)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v11; 
  double v12; 
  __int128 v16; 
  double v17; 

  if ( *(float *)&cosIncidentAngle < -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_utils.cpp", 377, ASSERT_TYPE_SANITY, "( ( cosIncidentAngle >= -1 ) )", "( cosIncidentAngle ) = %g", *(float *)&cosIncidentAngle) )
    __debugbreak();
  _XMM7 = LODWORD(FLOAT_1_0);
  if ( *(float *)&cosIncidentAngle > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_utils.cpp", 378, ASSERT_TYPE_SANITY, "( ( cosIncidentAngle <= 1 ) )", "( cosIncidentAngle ) = %g", *(float *)&cosIncidentAngle) )
    __debugbreak();
  *((_QWORD *)&v7 + 1) = *(_QWORD *)(&cosIncidentAngle + 1) & *((_QWORD *)&_xmm + 1);
  *(double *)&v7 = acosf_0(COERCE_FLOAT(LODWORD(cosIncidentAngle) & _xmm));
  v6 = v7;
  *((_QWORD *)&v7 + 1) = *(_QWORD *)(&cosIncidentAngle + 1) & *((_QWORD *)&_xmm + 1);
  *(double *)&v7 = sin_0(*(double *)&v7) * (float)(n0 / n1);
  _XMM0 = v7;
  __asm
  {
    vmaxsd  xmm3, xmm0, cs:__real@bff0000000000000
    vminsd  xmm0, xmm3, cs:__real@3ff0000000000000; X
  }
  *(double *)&_XMM0 = asin_0(*(double *)&_XMM0);
  *((_QWORD *)&v7 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v7 = *(double *)&_XMM0 + *(double *)&v6;
  v11 = v7;
  v12 = *(double *)&_XMM0;
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  _XMM6 = v7;
  if ( sin_0(*(double *)&_XMM0 + *(double *)&v6) == *(double *)&_XMM11 )
  {
    __asm { vcvtsd2ss xmm1, xmm6, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_utils.cpp", 391, ASSERT_TYPE_SANITY, "( ( sinSum != 0 ) )", "( sinSum ) = %g", *(float *)&_XMM1) )
      __debugbreak();
  }
  *((_QWORD *)&v16 + 1) = *((_QWORD *)&v6 + 1);
  *(double *)&v16 = *(double *)&v6 - v12;
  v17 = sin_0(*(double *)&v6 - v12) / *(double *)&_XMM6;
  _XMM6 = v11;
  if ( tan_0(*(double *)&v11) == *(double *)&_XMM11 )
  {
    __asm { vcvtsd2ss xmm1, xmm6, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_utils.cpp", 397, ASSERT_TYPE_SANITY, "( ( tanSum != 0 ) )", "( tanSum ) = %g", *(float *)&_XMM1) )
      __debugbreak();
  }
  *(double *)&_XMM0 = tan_0(*(double *)&v16);
  *(double *)&v16 = (*(double *)&_XMM0 / *(double *)&v11 * (*(double *)&_XMM0 / *(double *)&v11) + v17 * v17) * 0.5;
  _XMM1 = v16;
  __asm { vcvtsd2ss xmm4, xmm1, xmm1 }
  LODWORD(_XMM0) = 0;
  if ( *(float *)&_XMM4 >= 0.0 )
  {
    __asm
    {
      vcmpltss xmm0, xmm7, xmm4
      vblendvps xmm0, xmm4, xmm7, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
R_AllocGlobalVariable
==============
*/
void *R_AllocGlobalVariable(unsigned __int64 bytes, const char *name)
{
  return PMem_Alloc(bytes, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, name);
}

/*
==============
R_CullPointAndRadius
==============
*/
char R_CullPointAndRadius(const vec3_t *pt, float radius, const DpvsPlane *clipPlanes, unsigned int clipPlaneCount)
{
  int v4; 

  v4 = 0;
  if ( !clipPlaneCount )
    return 0;
  while ( (float)((float)((float)((float)(pt->v[1] * clipPlanes[v4].coeffs.v[1]) + (float)(pt->v[0] * clipPlanes[v4].coeffs.v[0])) + (float)(pt->v[2] * clipPlanes[v4].coeffs.v[2])) + clipPlanes[v4].coeffs.v[3]) >= COERCE_FLOAT(LODWORD(radius) ^ _xmm) )
  {
    if ( ++v4 >= clipPlaneCount )
      return 0;
  }
  return 1;
}

/*
==============
R_GetClearColor
==============
*/
bool R_GetClearColor(const GfxViewInfo *viewInfo, vec4_t *unpackedRgba)
{
  bool result; 
  int integer; 
  const dvar_t *v5; 
  unsigned int flags; 
  const dvar_t *v7; 
  const dvar_t *v8; 

  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 10) & 0x4000000) != 0 )
  {
    *unpackedRgba = viewInfo->viewportFeatures.m_overrideClearColor;
    return 1;
  }
  else
  {
    integer = r_clear->current.integer;
    if ( !integer )
      goto LABEL_19;
    if ( integer != 1 )
      goto LABEL_16;
    v5 = DCONST_DVARINT_developer;
    if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v5->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v5->name) )
        __debugbreak();
    }
    if ( v5->current.integer )
    {
LABEL_16:
      if ( r_clear->current.integer == 3 || (Sys_Milliseconds() & 0x200) == 0 )
      {
        v8 = r_clearColor;
        unpackedRgba->v[0] = (float)r_clearColor->current.color[0] * 0.0039215689;
        unpackedRgba->v[1] = (float)v8->current.color[1] * 0.0039215689;
        unpackedRgba->v[2] = (float)v8->current.color[2] * 0.0039215689;
        unpackedRgba->v[3] = 1.0;
        return 1;
      }
      else
      {
        v7 = r_clearColor2;
        unpackedRgba->v[0] = (float)r_clearColor2->current.color[0] * 0.0039215689;
        unpackedRgba->v[1] = (float)v7->current.color[1] * 0.0039215689;
        unpackedRgba->v[2] = (float)v7->current.color[2] * 0.0039215689;
        unpackedRgba->v[3] = 1.0;
        return 1;
      }
    }
    else
    {
LABEL_19:
      result = 0;
      *(_QWORD *)unpackedRgba->v = 0i64;
      *(_QWORD *)&unpackedRgba->xyz.z = 0i64;
    }
  }
  return result;
}

/*
==============
R_GetTechniqueNameFromType
==============
*/
const char *R_GetTechniqueNameFromType(MaterialTechniqueType techType)
{
  __int64 v1; 
  int v4; 

  v1 = techType;
  if ( (unsigned int)techType >= TECHNIQUE_COUNT )
  {
    v4 = 195;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_utils.cpp", 302, ASSERT_TYPE_ASSERT, "(unsigned)( techType ) < (unsigned)( TECHNIQUE_COUNT )", "techType doesn't index TECHNIQUE_COUNT\n\t%i not in [0, %i)", techType, v4) )
      __debugbreak();
  }
  return s_techniqueNames[v1];
}

/*
==============
R_GetTechniqueNames
==============
*/
const char **R_GetTechniqueNames()
{
  return s_techniqueNames;
}

/*
==============
R_HashAssetName
==============
*/
__int64 R_HashAssetName(const char *name)
{
  char v1; 
  unsigned int v2; 
  const char *i; 
  int v5; 

  v1 = *name;
  v2 = 0;
  for ( i = name; *i; v2 = (33 * v2) ^ (char)(v5 + ((unsigned int)(v5 - 65) < 0x1A ? 0x20 : 0)) )
  {
    if ( v1 == 92 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_utils.cpp", 35, ASSERT_TYPE_ASSERT, "( ( *pos != '\\\\' || *pos == '/' ) )", "( name ) = %s", name) )
      __debugbreak();
    v5 = *i++;
    v1 = *i;
  }
  return v2;
}

