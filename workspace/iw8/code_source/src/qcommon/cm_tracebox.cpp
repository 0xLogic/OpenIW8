/*
==============
CM_TraceBox_NoFloat4
==============
*/

int __fastcall CM_TraceBox_NoFloat4(const TraceExtents *extents, const Bounds *bounds, float fraction)
{
  return ?CM_TraceBox_NoFloat4@@YAHPEBUTraceExtents@@PEBUBounds@@M@Z(extents, bounds, fraction);
}

/*
==============
CM_CalcTraceExtents
==============
*/

void __fastcall CM_CalcTraceExtents(TraceExtents *extents)
{
  ?CM_CalcTraceExtents@@YAXPEAUTraceExtents@@@Z(extents);
}

/*
==============
CM_TraceBox
==============
*/

int __fastcall CM_TraceBox(const TraceExtents *extents, const Bounds *bounds, float fraction)
{
  return ?CM_TraceBox@@YAHPEBUTraceExtents@@PEBUBounds@@M@Z(extents, bounds, fraction);
}

/*
==============
CM_TraceBox_Float4
==============
*/

int __fastcall CM_TraceBox_Float4(const TraceExtents *extents, const Bounds *bounds, float fraction)
{
  return ?CM_TraceBox_Float4@@YAHPEBUTraceExtents@@PEBUBounds@@M@Z(extents, bounds, fraction);
}

/*
==============
CM_CalcTraceExtents
==============
*/
void CM_CalcTraceExtents(TraceExtents *extents)
{
  int v30; 
  TraceExtents *v37; 
  bool v38; 
  bool v39; 
  __int64 v46; 
  __int64 v47; 
  int v48[4]; 
  char v50; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm3, dword ptr [rcx+50h]
    vsubss  xmm5, xmm3, dword ptr [rcx+40h]
    vmovss  xmm0, dword ptr [rcx+54h]
    vsubss  xmm6, xmm0, dword ptr [rcx+44h]
    vaddss  xmm0, xmm3, dword ptr [rcx+40h]
    vmovss  xmm1, dword ptr [rcx+58h]
    vsubss  xmm7, xmm1, dword ptr [rcx+48h]
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3f800000
    vmulss  xmm0, xmm0, xmm4
    vmovss  dword ptr [rcx], xmm0
    vmovss  xmm1, dword ptr [rcx+54h]
    vaddss  xmm2, xmm1, dword ptr [rcx+44h]
    vmulss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rcx+4], xmm0
    vmovss  xmm1, dword ptr [rcx+58h]
    vaddss  xmm2, xmm1, dword ptr [rcx+48h]
    vmulss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rcx+8], xmm0
    vmulss  xmm1, xmm7, xmm4
    vmovss  dword ptr [rcx+18h], xmm1
    vmulss  xmm2, xmm5, xmm4
    vmovss  dword ptr [rcx+10h], xmm2
    vmulss  xmm0, xmm6, xmm4
    vmovss  dword ptr [rcx+14h], xmm0
    vandps  xmm7, xmm7, xmm3
    vandps  xmm2, xmm2, xmm3
    vmovss  dword ptr [rcx+20h], xmm2
    vmovss  xmm0, dword ptr [rcx+14h]
    vandps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rcx+24h], xmm0
    vmovss  xmm1, dword ptr [rcx+18h]
  }
  v30 = 0;
  __asm
  {
    vandps  xmm1, xmm1, xmm3
    vandps  xmm5, xmm5, xmm3
    vandps  xmm6, xmm6, xmm3
  }
  _RBP = (char *)&extents->invDeltaAbs - (char *)v48;
  _RDI = v48;
  __asm
  {
    vmovss  [rsp+0A8h+var_60], xmm7
    vmovss  xmm7, cs:__real@358637bd
    vmovss  dword ptr [rcx+28h], xmm1
    vmovss  [rsp+0A8h+var_68], xmm5
    vmovss  [rsp+0A8h+var_64], xmm6
  }
  v37 = extents;
  v38 = 1;
  do
  {
    if ( !v38 )
    {
      LODWORD(v47) = 3;
      LODWORD(v46) = v30;
      v39 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47);
      v38 = 0;
      if ( v39 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rdi]
      vcomiss xmm6, xmm7
    }
    if ( v38 )
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
    }
    else
    {
      if ( (unsigned int)v30 >= 3 )
      {
        LODWORD(v47) = 3;
        LODWORD(v46) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
          __debugbreak();
      }
      __asm { vdivss  xmm6, xmm8, xmm6 }
    }
    if ( (unsigned int)v30 >= 3 )
    {
      LODWORD(v47) = 3;
      LODWORD(v46) = v30;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi+rbp], xmm6 }
    ++_RDI;
    v38 = (unsigned int)++v30 < 3;
  }
  while ( v30 < 3 );
  v37->midPointPad = 0.0;
  v37->halfDeltaPad = 0.0;
  v37->halfDeltaAbsPad = 0.0;
  v37->startPad = 0.0;
  v37->endPad = 0.0;
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CM_TraceBox
==============
*/

int __fastcall CM_TraceBox(const TraceExtents *extents, const Bounds *bounds, float fraction)
{
  return CM_TraceBox_Float4(extents, bounds, fraction);
}

/*
==============
CM_TraceBox_Float4
==============
*/

_BOOL8 __fastcall CM_TraceBox_Float4(const TraceExtents *extents, const Bounds *bounds, double fraction)
{
  _BOOL8 result; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  __int128 v72; 

  __asm
  {
    vmovaps [rsp+70h+var_10], xmm6
    vmovaps [rsp+70h+var_20], xmm7
    vmovaps [rsp+70h+var_30], xmm8
    vmovaps [rsp+70h+var_40], xmm9
    vmovaps [rsp+70h+var_50], xmm10
    vmovss  xmm0, dword ptr [rcx+40h]
    vmovss  xmm3, dword ptr [rcx+48h]
    vmovups xmm10, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
  }
  HIDWORD(v68) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp-70h]
    vmovss  xmm5, xmm5, xmm0
    vinsertps xmm5, xmm5, dword ptr [rcx+44h], 10h
    vmovss  xmm0, dword ptr [rcx+10h]
    vinsertps xmm5, xmm5, xmm3, 20h ; ' '
    vmovups xmmword ptr [rbp-70h], xmm5
  }
  HIDWORD(v69) = 0;
  __asm
  {
    vmovups xmm7, xmmword ptr [rbp-70h]
    vmovss  xmm7, xmm7, xmm0
    vmovss  xmm0, dword ptr [rcx+20h]
    vinsertps xmm7, xmm7, dword ptr [rcx+14h], 10h
    vinsertps xmm7, xmm7, dword ptr [rcx+18h], 20h ; ' '
    vmovups xmmword ptr [rbp-70h], xmm7
  }
  HIDWORD(v70) = 0;
  __asm
  {
    vmovups xmm8, xmmword ptr [rbp-70h]
    vmovss  xmm8, xmm8, xmm0
    vmovss  xmm0, dword ptr [rdx]
    vinsertps xmm8, xmm8, dword ptr [rcx+24h], 10h
    vinsertps xmm8, xmm8, dword ptr [rcx+28h], 20h ; ' '
    vmovups xmmword ptr [rbp-70h], xmm8
  }
  HIDWORD(v71) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rbp-70h]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vinsertps xmm4, xmm4, dword ptr [rdx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+8], 20h ; ' '
    vmovaps xmm3, xmm2
    vmovups xmmword ptr [rbp-70h], xmm4
  }
  HIDWORD(v72) = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rbp-70h]
    vmovss  xmm9, xmm9, xmm0
    vinsertps xmm9, xmm9, dword ptr [rdx+10h], 10h
    vinsertps xmm9, xmm9, dword ptr [rdx+14h], 20h ; ' '
    vshufps xmm3, xmm3, xmm3, 0
    vmulps  xmm0, xmm3, xmm7
    vaddps  xmm1, xmm0, xmm5
    vsubps  xmm5, xmm1, xmm4
    vmulps  xmm0, xmm3, xmm8
    vandnps xmm2, xmm10, xmm5
    vaddps  xmm1, xmm0, xmm9
    vcmpltps xmm2, xmm1, xmm2
    vmovmskps eax, xmm2
  }
  if ( (_EAX & 0xF) != 0 )
  {
    result = 1i64;
  }
  else
  {
    __asm
    {
      vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
      vshufps xmm3, xmm5, xmm5, 0C9h ; 'É'
      vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
      vmulps  xmm1, xmm1, xmm0
      vshufps xmm7, xmm7, xmm7, 0D2h ; 'Ò'
      vmulps  xmm0, xmm7, xmm3
      vsubps  xmm1, xmm1, xmm0
      vandnps xmm3, xmm10, xmm1
      vshufps xmm5, xmm9, xmm9, 0C9h ; 'É'
      vshufps xmm6, xmm9, xmm9, 0D2h ; 'Ò'
      vshufps xmm4, xmm8, xmm8, 0C9h ; 'É'
      vshufps xmm2, xmm8, xmm8, 0D2h ; 'Ò'
      vmulps  xmm2, xmm5, xmm2
      vmulps  xmm0, xmm6, xmm4
      vaddps  xmm1, xmm0, xmm2
      vcmpltps xmm2, xmm1, xmm3
      vmovmskps eax, xmm2
    }
    result = (_EAX & 0xF) != 0;
  }
  __asm
  {
    vmovaps xmm6, [rsp+70h+var_10]
    vmovaps xmm7, [rsp+70h+var_20]
    vmovaps xmm8, [rsp+70h+var_30]
    vmovaps xmm9, [rsp+70h+var_40]
    vmovaps xmm10, [rsp+70h+var_50]
  }
  return result;
}

/*
==============
CM_TraceBox_NoFloat4
==============
*/

__int64 __fastcall CM_TraceBox_NoFloat4(const TraceExtents *extents, const Bounds *bounds, double fraction)
{
  __int64 result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rcx+10h]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm12, dword ptr [rcx+20h]
    vmovaps [rsp+0A8h+var_88], xmm13
    vmovss  xmm13, dword ptr [rdx+0Ch]
    vmulss  xmm0, xmm10, xmm2
    vaddss  xmm1, xmm0, dword ptr [rcx+40h]
    vsubss  xmm11, xmm1, dword ptr [rdx]
    vmulss  xmm0, xmm12, xmm2
    vandps  xmm3, xmm11, xmm4
    vaddss  xmm1, xmm0, xmm13
    vcomiss xmm3, xmm1
    vmovaps [rsp+0A8h+var_98], xmm14
    vmovaps [rsp+0A8h+var_A8], xmm15
    vmovaps xmm5, xmm2
  }
  result = 1i64;
  __asm { vmovaps xmm13, [rsp+0A8h+var_88] }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm14, [rsp+0A8h+var_98]
    vmovaps xmm15, [rsp+0A8h+var_A8]
  }
  return result;
}

