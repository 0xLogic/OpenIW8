/*
==============
DebugDrawEntVec
==============
*/

void __fastcall DebugDrawEntVec(const vec3_t *vec, const vec4_t *color, gentity_s *ent, float scale, float zOffset)
{
  ?DebugDrawEntVec@@YAXAEBTvec3_t@@AEBTvec4_t@@PEAUgentity_s@@MM@Z(vec, color, ent, scale, zOffset);
}

/*
==============
DebugDrawEntVec
==============
*/

void __fastcall DebugDrawEntVec(const vec3_t *vec, const vec4_t *color, int entnum, float scale, float zOffset)
{
  ?DebugDrawEntVec@@YAXAEBTvec3_t@@AEBTvec4_t@@HMM@Z(vec, color, entnum, scale, zOffset);
}

/*
==============
DebugDrawEntVec
==============
*/

void __fastcall DebugDrawEntVec(const vec3_t *vec, const vec4_t *color, int entnum, double scale, float zOffset)
{
  __int64 v6; 
  vec3_t end; 
  vec3_t start; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  v6 = entnum;
  _RDI = vec;
  __asm { vmovaps xmm6, xmm3 }
  if ( G_IsEntityInUse(entnum) )
  {
    __asm { vmovsd  xmm0, qword ptr [rdi] }
    _RAX = g_entities;
    __asm
    {
      vmovss  xmm4, [rsp+88h+zOffset]
      vmovsd  qword ptr [rsp+88h+end], xmm0
      vmulss  xmm2, xmm6, dword ptr [rsp+88h+end+4]
      vmulss  xmm0, xmm0, xmm6
    }
    _RDX = 1456 * v6;
    __asm
    {
      vmovss  dword ptr [rsp+88h+start+8], xmm4
      vmovsd  xmm3, qword ptr [rdx+rax+130h]
      vaddss  xmm0, xmm0, xmm3
      vmovss  dword ptr [rsp+88h+end], xmm0
      vshufps xmm0, xmm3, xmm3, 55h ; 'U'
      vaddss  xmm0, xmm2, xmm0
      vaddss  xmm2, xmm4, dword ptr [rsp+88h+end+8]
      vmovss  dword ptr [rsp+88h+end+8], xmm2
      vmovss  dword ptr [rsp+88h+end+4], xmm0
      vmovsd  qword ptr [rsp+88h+start], xmm3
    }
    G_DebugLineWithDuration(&start, &end, color, 1, 1);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
DebugDrawEntVec
==============
*/

void __fastcall DebugDrawEntVec(const vec3_t *vec, const vec4_t *color, gentity_s *ent, double scale, float zOffset)
{
  vec3_t end; 
  vec3_t start; 

  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  xmm4, qword ptr [r8+130h]
    vmovss  xmm5, [rsp+68h+zOffset]
    vmovsd  qword ptr [rsp+68h+end], xmm0
    vmulss  xmm2, xmm3, dword ptr [rsp+68h+end+4]
    vmulss  xmm0, xmm0, xmm3
    vaddss  xmm0, xmm0, xmm4
    vmovss  dword ptr [rsp+68h+end], xmm0
    vshufps xmm0, xmm4, xmm4, 55h ; 'U'
    vaddss  xmm0, xmm2, xmm0
    vaddss  xmm2, xmm5, dword ptr [rsp+68h+end+8]
    vmovss  dword ptr [rsp+68h+end+8], xmm2
    vmovss  dword ptr [rsp+68h+start+8], xmm5
    vmovss  dword ptr [rsp+68h+end+4], xmm0
    vmovsd  qword ptr [rsp+68h+start], xmm4
  }
  G_DebugLineWithDuration(&start, &end, color, 1, 1);
}

