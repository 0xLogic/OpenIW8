/*
==============
R_DecalVolume_GetHighlightColor
==============
*/
vec4_t *R_DecalVolume_GetHighlightColor(vec4_t *result, unsigned int idx)
{
  vec4_t *v3; 

  switch ( idx & 7 )
  {
    case 0u:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; jumptable 00000001420BBD05 case 0
        vmovups xmmword ptr [rcx], xmm0
      }
      v3 = result;
      break;
    case 1u:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; jumptable 00000001420BBD05 case 1
        vmovups xmmword ptr [rcx], xmm0
      }
      v3 = result;
      break;
    case 2u:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; jumptable 00000001420BBD05 case 2
        vmovups xmmword ptr [rcx], xmm0
      }
      v3 = result;
      break;
    case 3u:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; jumptable 00000001420BBD05 case 3
        vmovups xmmword ptr [rcx], xmm0
      }
      v3 = result;
      break;
    case 4u:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; jumptable 00000001420BBD05 case 4
        vmovups xmmword ptr [rcx], xmm0
      }
      v3 = result;
      break;
    case 5u:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; jumptable 00000001420BBD05 case 5
        vmovups xmmword ptr [rcx], xmm0
      }
      v3 = result;
      break;
    case 6u:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; jumptable 00000001420BBD05 case 6
        vmovups xmmword ptr [rcx], xmm0
      }
      v3 = result;
      break;
    case 7u:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorTeal@@3Tvec4_t@@B; jumptable 00000001420BBD05 case 7
        vmovups xmmword ptr [rcx], xmm0
      }
      v3 = result;
      break;
  }
  return v3;
}

/*
==============
MatrixForViewerOrthogonalTransposed
==============
*/
void MatrixForViewerOrthogonalTransposed(const vec3_t *origin, const tmat33_t<vec3_t> *axis, tmat44_t<vec4_t> *mtx)
{
  double v85; 
  double v86; 
  double v87; 
  double v88; 
  double v89; 
  double v90; 
  double v91; 
  double v92; 
  double v93; 
  double v94; 
  double v95; 
  double v96; 
  double v97; 
  double v98; 
  char v100; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+0Ch]
    vmovss  xmm4, dword ptr [rdx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = mtx;
  __asm
  {
    vmovss  xmm7, dword ptr [rdx+4]
    vmulss  xmm1, xmm7, dword ptr [rdx+10h]
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = axis;
  __asm
  {
    vmovss  xmm8, dword ptr [rdx+8]
    vmulss  xmm1, xmm8, dword ptr [rdx+14h]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  _RSI = origin;
  __asm
  {
    vmovss  xmm5, dword ptr [rdx+14h]
    vmovss  xmm6, dword ptr [rdx+10h]
    vcvtss2sd xmm0, xmm1, xmm1
    vmovsd  qword ptr [rax-40h], xmm0
    vcvtss2sd xmm1, xmm3, xmm3
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  qword ptr [rax-48h], xmm5
    vcvtss2sd xmm2, xmm8, xmm8
    vcvtss2sd xmm3, xmm7, xmm7
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  qword ptr [rax-50h], xmm6
    vmovsd  qword ptr [rax-58h], xmm1
    vmovsd  qword ptr [rax-60h], xmm2
    vmovsd  qword ptr [rax-68h], xmm3
    vmovsd  qword ptr [rax-70h], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_shared.h", 127, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v85, v87, v89, v91, v93, v95, v97) )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+4]
    vmulss  xmm1, xmm7, dword ptr [rbx+1Ch]
    vmovss  xmm3, dword ptr [rbx+18h]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm8, dword ptr [rbx+8]
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbx+20h]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
    vmovss  xmm5, dword ptr [rbx+20h]
    vmovss  xmm6, dword ptr [rbx+1Ch]
    vcvtss2sd xmm0, xmm1, xmm1
    vmovsd  [rsp+98h+var_40], xmm0
    vcvtss2sd xmm1, xmm3, xmm3
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+98h+var_48], xmm5
    vcvtss2sd xmm2, xmm8, xmm8
    vcvtss2sd xmm3, xmm7, xmm7
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+98h+var_50], xmm6
    vmovsd  [rsp+98h+var_58], xmm1
    vmovsd  [rsp+98h+var_60], xmm2
    vmovsd  [rsp+98h+var_68], xmm3
    vmovsd  [rsp+98h+var_70], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_shared.h", 128, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v86, v88, v90, v92, v94, v96, v98) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmm7, [rsp+98h+var_28]
  }
  _R11 = &v100;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vxorps  xmm0, xmm0, xmm5
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rbx+10h]
    vxorps  xmm0, xmm1, xmm5
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm2, dword ptr [rbx+14h]
    vxorps  xmm4, xmm2, xmm5
    vmovss  dword ptr [rdi+8], xmm4
    vmovss  xmm0, dword ptr [rsi]
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vmulss  xmm0, xmm4, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rsi+4]
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vaddss  xmm3, xmm3, xmm2
    vaddss  xmm1, xmm3, xmm0
    vxorps  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+0Ch], xmm2
  }
  _RDI->m[1].v[0] = _RBX->m[2].v[0];
  _RDI->m[1].v[1] = _RBX->m[2].v[1];
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+20h]
    vmovss  dword ptr [rdi+18h], xmm4
    vmovss  xmm0, dword ptr [rdi+14h]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm4, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rdi+10h]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vaddss  xmm3, xmm3, xmm2
    vaddss  xmm1, xmm3, xmm0
    vxorps  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+1Ch], xmm2
  }
  _RDI->m[2].v[0] = _RBX->m[0].v[0];
  _RDI->m[2].v[1] = _RBX->m[0].v[1];
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+28h], xmm4
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmulss  xmm2, xmm1, dword ptr [rdi+24h]
    vmulss  xmm3, xmm0, dword ptr [rdi+20h]
    vmulss  xmm0, xmm4, dword ptr [rsi+8]
    vaddss  xmm3, xmm3, xmm2
    vaddss  xmm1, xmm3, xmm0
    vxorps  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+2Ch], xmm2
  }
  *(_QWORD *)_RDI->row3.v = 0i64;
  _RDI->m[3].v[2] = 0.0;
  _RDI->m[3].v[3] = 1.0;
}

