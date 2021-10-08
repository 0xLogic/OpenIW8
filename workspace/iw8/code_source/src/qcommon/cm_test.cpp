/*
==============
CM_TransformPoint
==============
*/

void __fastcall CM_TransformPoint(const vec3_t *in, const vec3_t *origin, const vec3_t *angles, vec3_t *out)
{
  ?CM_TransformPoint@@YAXAEBTvec3_t@@00AEAT1@@Z(in, origin, angles, out);
}

/*
==============
CM_TransformPoint
==============
*/
void CM_TransformPoint(const vec3_t *in, const vec3_t *origin, const vec3_t *angles, vec3_t *out)
{
  char v5; 
  const vec3_t *v8; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [r8]
  }
  _RDI = out;
  v8 = in;
  if ( !v5 )
    goto LABEL_5;
  __asm { vucomiss xmm0, dword ptr [r8+4] }
  if ( !v5 )
    goto LABEL_5;
  __asm { vucomiss xmm0, dword ptr [r8+8] }
  if ( v5 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx]
      vsubss  xmm1, xmm0, dword ptr [rdx]
      vmovss  dword ptr [r9], xmm1
      vmovss  xmm2, dword ptr [rcx+4]
      vsubss  xmm0, xmm2, dword ptr [rdx+4]
      vmovss  dword ptr [r9+4], xmm0
      vmovss  xmm1, dword ptr [rcx+8]
      vsubss  xmm2, xmm1, dword ptr [rdx+8]
      vmovss  dword ptr [r9+8], xmm2
    }
  }
  else
  {
LABEL_5:
    AnglesToAxis(angles, &axis);
    if ( v8 == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+axis]
      vmulss  xmm3, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rsp+68h+axis+4]
      vmulss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rsp+68h+axis+8]
      vmulss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  xmm0, dword ptr [rsp+68h+axis+0Ch]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  xmm1, dword ptr [rsp+68h+axis+10h]
      vmovss  dword ptr [rdi], xmm2
      vmulss  xmm3, xmm0, dword ptr [rbx]
      vmulss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rsp+68h+axis+14h]
      vmulss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  xmm0, dword ptr [rsp+68h+axis+18h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  xmm1, dword ptr [rsp+68h+axis+1Ch]
      vmovss  dword ptr [rdi+4], xmm2
      vmulss  xmm2, xmm1, dword ptr [rbx+4]
      vmulss  xmm3, xmm0, dword ptr [rbx]
      vmovss  xmm0, dword ptr [rsp+68h+axis+20h]
      vmulss  xmm1, xmm0, dword ptr [rbx+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
}

