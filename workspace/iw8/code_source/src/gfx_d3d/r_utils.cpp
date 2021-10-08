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

float __fastcall FresnelTerm(double n0, double n1, double cosIncidentAngle)
{
  char v28; 
  char v46; 
  double v55; 
  double v56; 
  double v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vcomiss xmm2, cs:__real@bf800000
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm10, xmm0
    vmovaps xmm6, xmm2
    vmovaps xmm9, xmm1
    vmovss  xmm7, cs:__real@3f800000
    vcomiss xmm6, xmm7
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  [rsp+98h+var_70], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_utils.cpp", 378, ASSERT_TYPE_SANITY, "( ( cosIncidentAngle <= 1 ) )", "( cosIncidentAngle ) = %g", v55) )
    __debugbreak();
  __asm { vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; X }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vcvtss2sd xmm8, xmm0, xmm0
    vmovaps xmm0, xmm8; X
  }
  *(double *)&_XMM0 = sin_0(*(double *)&_XMM0);
  __asm
  {
    vdivss  xmm1, xmm10, xmm9
    vcvtss2sd xmm2, xmm1, xmm1
    vmulsd  xmm0, xmm0, xmm2
    vmaxsd  xmm3, xmm0, cs:__real@bff0000000000000
    vminsd  xmm0, xmm3, cs:__real@3ff0000000000000; X
  }
  *(double *)&_XMM0 = asin_0(*(double *)&_XMM0);
  __asm
  {
    vaddsd  xmm10, xmm0, xmm8
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm10; X
  }
  *(double *)&_XMM0 = sin_0(*(double *)&_XMM0);
  __asm
  {
    vxorpd  xmm11, xmm11, xmm11
    vucomisd xmm0, xmm11
    vmovaps xmm6, xmm0
  }
  if ( v28 )
  {
    __asm
    {
      vcvtsd2ss xmm1, xmm6, xmm0
      vcvtss2sd xmm2, xmm1, xmm1
      vmovsd  [rsp+98h+var_70], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_utils.cpp", 391, ASSERT_TYPE_SANITY, "( ( sinSum != 0 ) )", "( sinSum ) = %g", v56) )
      __debugbreak();
  }
  __asm
  {
    vsubsd  xmm9, xmm8, xmm9
    vmovaps xmm0, xmm9; X
  }
  *(double *)&_XMM0 = sin_0(*(double *)&_XMM0);
  __asm
  {
    vdivsd  xmm8, xmm0, xmm6
    vmovaps xmm0, xmm10; X
  }
  *(double *)&_XMM0 = tan_0(*(double *)&_XMM0);
  __asm
  {
    vucomisd xmm0, xmm11
    vmovaps xmm6, xmm0
  }
  if ( v28 )
  {
    __asm
    {
      vcvtsd2ss xmm1, xmm6, xmm0
      vcvtss2sd xmm2, xmm1, xmm1
      vmovsd  [rsp+98h+var_70], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_utils.cpp", 397, ASSERT_TYPE_SANITY, "( ( tanSum != 0 ) )", "( tanSum ) = %g", v57) )
      __debugbreak();
  }
  __asm { vmovaps xmm0, xmm9; X }
  *(double *)&_XMM0 = tan_0(*(double *)&_XMM0);
  __asm
  {
    vdivsd  xmm1, xmm0, xmm6
    vmulsd  xmm3, xmm1, xmm1
    vmulsd  xmm2, xmm8, xmm8
    vaddsd  xmm0, xmm3, xmm2
    vmulsd  xmm1, xmm0, cs:__real@3fe0000000000000
    vcvtsd2ss xmm4, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm4, xmm0
  }
  if ( !v46 )
  {
    __asm
    {
      vcmpltss xmm0, xmm7, xmm4
      vblendvps xmm0, xmm4, xmm7, xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
    vmovaps xmm10, [rsp+98h+var_58]
    vmovaps xmm11, [rsp+98h+var_68]
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

char __fastcall R_CullPointAndRadius(const vec3_t *pt, double radius, const DpvsPlane *clipPlanes, unsigned int clipPlaneCount)
{
  unsigned int v5; 
  char result; 

  v5 = 0;
  __asm { vmovaps [rsp+18h+var_18], xmm6 }
  if ( clipPlaneCount )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rcx+4]
      vmovss  xmm3, dword ptr [rcx]
      vmovss  xmm6, dword ptr [rcx+8]
      vxorps  xmm4, xmm1, cs:__xmm@80000000800000008000000080000000
    }
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm5, dword ptr [rax+4]
        vmulss  xmm0, xmm3, dword ptr [rax]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr [rax+8]
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm2, xmm0, dword ptr [rax+0Ch]
        vcomiss xmm2, xmm4
      }
      if ( __CFADD__(clipPlanes, 16i64 * v5) )
        break;
      if ( ++v5 >= clipPlaneCount )
        goto LABEL_5;
    }
    __asm { vmovaps xmm6, [rsp+18h+var_18] }
    return 1;
  }
  else
  {
LABEL_5:
    result = 0;
    __asm { vmovaps xmm6, [rsp+18h+var_18] }
  }
  return result;
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
  const dvar_t *v7; 
  unsigned int flags; 

  _RBX = unpackedRgba;
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
    v7 = DCONST_DVARINT_developer;
    if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v7->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v7->name) )
        __debugbreak();
    }
    if ( v7->current.integer )
    {
LABEL_16:
      if ( r_clear->current.integer == 3 || (Sys_Milliseconds() & 0x200) == 0 )
      {
        __asm
        {
          vmovss  xmm2, cs:__real@3b808081
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm0, xmm0, xmm2
          vmovss  dword ptr [rbx], xmm0
          vcvtsi2ss xmm1, xmm1, eax
          vmulss  xmm0, xmm1, xmm2
          vmovss  dword ptr [rbx+4], xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmulss  xmm0, xmm1, xmm2
          vmovss  dword ptr [rbx+8], xmm0
        }
        _RBX->v[3] = 1.0;
        return 1;
      }
      else
      {
        __asm
        {
          vmovss  xmm2, cs:__real@3b808081
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm0, xmm0, xmm2
          vmovss  dword ptr [rbx], xmm0
          vcvtsi2ss xmm1, xmm1, eax
          vmulss  xmm0, xmm1, xmm2
          vmovss  dword ptr [rbx+4], xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmulss  xmm0, xmm1, xmm2
          vmovss  dword ptr [rbx+8], xmm0
        }
        _RBX->v[3] = 1.0;
        return 1;
      }
    }
    else
    {
LABEL_19:
      result = 0;
      *(_QWORD *)_RBX->v = 0i64;
      *(_QWORD *)&_RBX->xyz.z = 0i64;
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

