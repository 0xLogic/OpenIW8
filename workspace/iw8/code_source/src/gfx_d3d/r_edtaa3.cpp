/*
==============
EDTAA3_edtaa3
==============
*/

void __fastcall EDTAA3_edtaa3(float *img, float *gx, float *gy, int w, int h, __int16 *distx, __int16 *disty, float *dist)
{
  ?EDTAA3_edtaa3@@YAXPEAM00HHPEAF10@Z(img, gx, gy, w, h, distx, disty, dist);
}

/*
==============
EDTAA3_edgedf
==============
*/

double __fastcall EDTAA3_edgedf(float gx, float gy, float a)
{
  double result; 

  *(float *)&result = ?EDTAA3_edgedf@@YAMMMM@Z(gx, gy, a);
  return result;
}

/*
==============
EDTAA3_computegradient
==============
*/

void __fastcall EDTAA3_computegradient(float *img, int w, int h, float *gx, float *gy)
{
  ?EDTAA3_computegradient@@YAXPEAMHH00@Z(img, w, h, gx, gy);
}

/*
==============
EDTAA3_computegradient
==============
*/
void EDTAA3_computegradient(float *img, int w, int h, float *gx, float *gy)
{
  int v7; 
  int v8; 
  int v13; 
  unsigned int v16; 
  bool v18; 
  bool v19; 

  v7 = h - 1;
  v8 = 1;
  _RDI = img;
  if ( h - 1 > 1 )
  {
    __asm { vmovss  xmm5, cs:__real@3f800000 }
    v13 = w - 1;
    __asm
    {
      vmovaps [rsp+38h+var_28], xmm6
      vmovaps [rsp+38h+var_38], xmm7
      vmovss  xmm7, cs:__real@3fb504f4
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      v16 = 1;
      if ( v13 > 1 )
      {
        _R11 = (char *)img - (char *)gx;
        v18 = gy < gx;
        _R10 = (char *)gy - (char *)gx;
        v19 = gy <= gx;
        _R8 = &gx[w * v8 + 1];
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r11+r8]
            vcomiss xmm0, xmm6
          }
          if ( !v19 )
          {
            __asm { vcomiss xmm0, xmm5 }
            if ( v18 )
            {
              __asm { vmulss  xmm1, xmm7, dword ptr [r11+r8-4] }
              _RDX = (int)(v16 + w * (v8 - 1));
              __asm
              {
                vaddss  xmm2, xmm1, dword ptr [rdi+rdx*4-4]
                vmovss  xmm0, dword ptr [rdi+rdx*4+4]
                vaddss  xmm3, xmm2, dword ptr [rdi+rcx*4-4]
                vmulss  xmm2, xmm7, dword ptr [r11+r8+4]
                vsubss  xmm4, xmm0, xmm3
                vaddss  xmm0, xmm4, xmm2
                vaddss  xmm3, xmm0, dword ptr [rdi+rcx*4+4]
                vmovss  dword ptr [r8], xmm3
                vmulss  xmm0, xmm7, dword ptr [rdi+rdx*4]
                vaddss  xmm2, xmm0, dword ptr [rdi+rdx*4-4]
                vaddss  xmm3, xmm2, dword ptr [rdi+rcx*4-4]
                vmovss  xmm1, dword ptr [rdi+rdx*4+4]
                vmulss  xmm2, xmm7, dword ptr [rdi+rcx*4]
                vsubss  xmm4, xmm1, xmm3
                vaddss  xmm1, xmm4, xmm2
                vaddss  xmm3, xmm1, dword ptr [rdi+rcx*4+4]
                vmovss  dword ptr [r10+r8], xmm3
                vmovss  xmm2, dword ptr [r8]
                vmulss  xmm0, xmm2, xmm2
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm4, xmm1, xmm0
                vcomiss xmm4, xmm6
              }
              if ( !__CFADD__(v16, w * (v8 + 1)) && v16 + w * (v8 + 1) != 0 )
              {
                __asm
                {
                  vsqrtss xmm0, xmm4, xmm4
                  vdivss  xmm1, xmm5, xmm0
                  vmulss  xmm0, xmm2, xmm1
                  vmovss  dword ptr [r8], xmm0
                  vmulss  xmm1, xmm1, dword ptr [r10+r8]
                  vmovss  dword ptr [r10+r8], xmm1
                }
              }
            }
          }
          ++v16;
          ++_R8;
          v18 = v16 < v13;
          v19 = v16 <= v13;
        }
        while ( (int)v16 < v13 );
      }
      ++v8;
    }
    while ( v8 < v7 );
    __asm
    {
      vmovaps xmm7, [rsp+38h+var_38]
      vmovaps xmm6, [rsp+38h+var_28]
    }
  }
}

/*
==============
EDTAA3_edgedf
==============
*/

float __fastcall EDTAA3_edgedf(double gx, double gy, double a)
{
  __asm
  {
    vmovaps xmm5, xmm0
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm5, xmm0
    vmovaps [rsp+28h+var_18], xmm6
    vmovaps xmm6, xmm2
    vucomiss xmm1, xmm0
    vmulss  xmm4, xmm5, xmm5
    vmulss  xmm3, xmm1, xmm1
    vaddss  xmm2, xmm4, xmm3
    vmovss  xmm3, cs:__real@3f800000
    vsqrtss xmm4, xmm2, xmm2
    vcomiss xmm4, xmm0
    vmovaps [rsp+28h+var_28], xmm7
    vdivss  xmm0, xmm3, xmm4
    vmulss  xmm5, xmm5, xmm0
    vmulss  xmm1, xmm1, xmm0
    vandps  xmm5, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm4, cs:__real@3f000000
    vmaxss  xmm7, xmm1, xmm5
    vminss  xmm2, xmm1, xmm5
    vmulss  xmm5, xmm2, xmm4
    vdivss  xmm0, xmm5, xmm7
    vcomiss xmm6, xmm0
    vsubss  xmm0, xmm3, xmm0
    vcomiss xmm6, xmm0
    vmulss  xmm0, xmm7, cs:__real@40000000
    vmulss  xmm2, xmm0, xmm2
    vsubss  xmm1, xmm3, xmm6
    vmulss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm7, xmm4
    vmovaps xmm7, [rsp+28h+var_28]
    vaddss  xmm1, xmm2, xmm5
    vsqrtss xmm3, xmm0, xmm0
    vsubss  xmm0, xmm3, xmm1
    vmovaps xmm6, [rsp+28h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
EDTAA3_edtaa3
==============
*/
void EDTAA3_edtaa3(float *img, float *gx, float *gy, int w, int h, __int16 *distx, __int16 *disty, float *dist)
{
  int v18; 
  int v19; 
  __int16 *v23; 
  __int64 v26; 
  bool v28; 
  bool v29; 
  signed __int64 v30; 
  int v35; 
  int v38; 
  int v39; 
  int v40; 
  int v42; 
  int v45; 
  unsigned int v46; 
  int v48; 
  unsigned int v50; 
  bool v52; 
  unsigned int v53; 
  __int64 v74; 
  unsigned int v75; 
  int v77; 
  unsigned int v79; 
  bool v81; 
  signed int v82; 
  __int16 *v105; 
  int v106; 
  bool v107; 
  __int64 v108; 
  __int16 *v110; 
  char *v111; 
  __int16 v113; 
  unsigned int v114; 
  unsigned int v117; 
  bool v118; 
  unsigned int v119; 
  int v143; 
  int v145; 
  int v147; 
  bool v148; 
  int v172; 
  int v174; 
  int v176; 
  bool v177; 
  int v201; 
  int v203; 
  int v205; 
  bool v206; 
  __int16 *v232; 
  __int16 *v233; 
  int v234; 
  unsigned int v236; 
  unsigned int v238; 
  bool v239; 
  unsigned int v240; 
  __int64 v265; 
  int v266; 
  unsigned int v267; 
  unsigned int v270; 
  bool v272; 
  signed int v273; 
  __int16 *v297; 
  __int64 v298; 
  int v299; 
  unsigned int v300; 
  unsigned int v303; 
  bool v305; 
  signed int v306; 
  __int16 *v329; 
  int v331; 
  __int16 *v333; 
  int v334; 
  bool v335; 
  char *v336; 
  __int16 v338; 
  unsigned int v339; 
  unsigned int v342; 
  bool v343; 
  unsigned int v344; 
  int v368; 
  __int16 *v370; 
  int v371; 
  __int16 *v374; 
  __int64 v376; 
  int v377; 
  unsigned int v378; 
  unsigned int v381; 
  bool v383; 
  signed int v384; 
  int v407; 
  int v408; 
  unsigned int v409; 
  unsigned int v412; 
  bool v414; 
  unsigned int v415; 
  int v438; 
  bool v439; 
  __int16 *v441; 
  int v442; 
  bool v443; 
  char *v444; 
  __int16 v446; 
  unsigned int v447; 
  unsigned int v450; 
  bool v451; 
  unsigned int v452; 
  int v477; 
  int v479; 
  int v481; 
  bool v482; 
  unsigned int v507; 
  int v509; 
  unsigned int v510; 
  bool v512; 
  unsigned int v513; 
  __int64 v538; 
  int v539; 
  int v540; 
  bool v543; 
  __int16 v569; 
  unsigned int v571; 
  unsigned int v572; 
  bool v573; 
  unsigned int v574; 
  __int64 v600; 
  int v601; 
  unsigned int v602; 
  unsigned int v605; 
  bool v607; 
  signed int v608; 
  __int16 *v631; 
  __int64 v632; 
  int v633; 
  unsigned int v634; 
  unsigned int v637; 
  bool v639; 
  signed int v640; 
  int v663; 
  __int64 v664; 
  bool v665; 
  signed __int64 v666; 
  __int16 *v668; 
  __int16 v670; 
  unsigned int v671; 
  unsigned int v674; 
  bool v675; 
  unsigned int v676; 
  int v708; 
  int v709; 
  int v710; 
  int v711; 
  int v712; 
  int v713; 
  int v714; 
  char *v715; 
  __int64 v716; 
  char *v717; 
  __int64 v718; 
  __int64 v719; 
  char *v720; 
  char *v721; 
  __int64 v722; 
  char v723; 
  void *retaddr; 
  int v728; 

  _RAX = &retaddr;
  v728 = w;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  _R11 = gx;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  v18 = -w;
  __asm { vmovaps xmmword ptr [rax-98h], xmm10 }
  v19 = 0;
  __asm { vmovaps xmmword ptr [rax-0A8h], xmm11 }
  _R10 = gy;
  __asm
  {
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovss  xmm12, cs:__real@3f800000
  }
  v710 = -w;
  v711 = 1 - w;
  v714 = w + 1;
  v712 = ~w;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( h * w > 0 )
  {
    v23 = disty;
    _RBX = dist;
    _RBP = (char *)img - (char *)gy;
    v26 = (unsigned int)(h * w);
    _R12 = (char *)_R11 - (char *)gy;
    v28 = gy < dist;
    v30 = (char *)gy - (char *)dist;
    v29 = gy <= dist;
    do
    {
      *(__int16 *)((char *)v23 + (char *)distx - (char *)disty) = 0;
      _RAX = (char *)_RBX + v30;
      *v23 = 0;
      __asm
      {
        vmovss  xmm2, dword ptr [rax+rbp]; a
        vcomiss xmm2, xmm8
      }
      if ( v29 )
      {
        *_RBX = 1000000.0;
      }
      else
      {
        __asm { vcomiss xmm2, xmm12 }
        if ( v28 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rax]; gy
            vmovss  xmm0, dword ptr [rax+r12]; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  dword ptr [rbx], xmm0 }
        }
        else
        {
          *_RBX = 0.0;
        }
      }
      ++v23;
      ++_RBX;
      v28 = v26-- == 0;
      v29 = v28 || v26 == 0;
    }
    while ( v26 );
    w = v728;
    _R10 = gy;
    _R11 = gx;
    v18 = v710;
  }
  v35 = h;
  __asm
  {
    vmovss  xmm10, cs:__real@49742400
    vmovss  xmm11, cs:__real@3a83126f
  }
  v38 = h - 2;
  do
  {
    v39 = 1;
    v708 = 1;
    if ( v35 > 1 )
    {
      v40 = w - 2;
      v713 = w - 2;
      while ( 1 )
      {
        _RBP = dist;
        v42 = w * v39;
        _RBX = w * v39;
        __asm
        {
          vmovss  xmm7, dword ptr [rbp+rbx*4+0]
          vcomiss xmm7, xmm8
        }
        if ( (unsigned __int64)(w * (__int64)v39) >> 32 != 0 || v439 )
          goto LABEL_34;
        v45 = v42 + v18;
        v46 = distx[v42 + v18];
        _ER8 = v46;
        v48 = disty[v42 + v18];
        _EDI = v48 + 1;
        v50 = v45 - w * v48;
        _RCX = img;
        v52 = v50 < v46;
        v53 = v50 - v46;
        _RAX = (int)v53;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rax*4]
          vmovss  xmm9, dword ptr [r11+rax*4]
          vmovss  xmm5, dword ptr [r10+rax*4]
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm8; a
          vucomiss xmm2, xmm8
        }
        if ( v53 )
        {
          __asm
          {
            vmovd   xmm4, r8d
            vcvtdq2ps xmm4, xmm4
            vmulss  xmm0, xmm4, xmm4
            vmovd   xmm3, edi
            vcvtdq2ps xmm3, xmm3
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm6, xmm1, xmm1
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm1, xmm3, xmm5, xmm0; gy
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm0, xmm4, xmm9, xmm0; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          w = v728;
          __asm { vaddss  xmm6, xmm0, xmm6 }
        }
        else
        {
          __asm { vmovaps xmm6, xmm10 }
        }
        __asm
        {
          vsubss  xmm0, xmm7, xmm11
          vcomiss xmm6, xmm0
        }
        if ( v52 )
        {
          distx[v42] = v46;
          if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
            __debugbreak();
          v19 = 1;
          w = v728;
          __asm { vmovaps xmm7, xmm6 }
          disty[v42] = _EDI;
          __asm { vmovss  dword ptr [rbp+rbx*4+0], xmm6 }
        }
        v74 = v42 + v711;
        v75 = distx[v74];
        _EDI = v75 - 1;
        v77 = disty[v74];
        _ESI = v77 + 1;
        v79 = v42 + v711 - w * v77;
        _RCX = gx;
        v81 = v79 < v75;
        v82 = v79 - v75;
        _RAX = v82;
        __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
        _RCX = gy;
        __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
        _RCX = img;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rax*4]
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm8; a
          vucomiss xmm2, xmm8
        }
        if ( v82 )
        {
          __asm
          {
            vmovd   xmm4, edi
            vcvtdq2ps xmm4, xmm4
            vmulss  xmm0, xmm4, xmm4
            vmovd   xmm3, esi
            vcvtdq2ps xmm3, xmm3
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm6, xmm1, xmm1
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm1, xmm3, xmm5, xmm0; gy
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm0, xmm4, xmm9, xmm0; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          w = v728;
          __asm { vaddss  xmm6, xmm0, xmm6 }
        }
        else
        {
          __asm { vmovaps xmm6, xmm10 }
        }
        __asm
        {
          vsubss  xmm0, xmm7, xmm11
          vcomiss xmm6, xmm0
        }
        if ( !v81 )
        {
LABEL_34:
          v105 = disty;
        }
        else
        {
          if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
            __debugbreak();
          distx[v42] = _EDI;
          if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
            __debugbreak();
          v105 = disty;
          v19 = 1;
          w = v728;
          disty[v42] = _ESI;
          __asm { vmovss  dword ptr [rbp+rbx*4+0], xmm6 }
        }
        v106 = v42 + 1;
        v107 = (unsigned int)(w - 1) <= 1;
        if ( w - 1 > 1 )
        {
          v108 = (unsigned int)(w - 2);
          _RBP = &dist[v106];
          v110 = &v105[v106 - 1];
          v722 = v712;
          v721 = (char *)distx + v722 * 2 - (_QWORD)v105 + 2;
          v716 = v710;
          v715 = (char *)distx + v716 * 2 - (_QWORD)v105 + 2;
          v719 = v711;
          v111 = (char *)((char *)distx - (char *)v105);
          v107 = distx <= v105;
          v717 = (char *)distx + v719 * 2 - (_QWORD)v105 + 2;
          while ( 1 )
          {
            __asm
            {
              vmovss  xmm7, dword ptr [rbp+0]
              vcomiss xmm7, xmm8
            }
            if ( !v107 )
            {
              v113 = *v110;
              v114 = *(__int16 *)((char *)v110 + (_QWORD)v111);
              _ER8 = *v110;
              _EDI = v114 + 1;
              v117 = v106 - w * _ER8;
              v118 = v117 < v114;
              v119 = v117 - v114;
              v439 = v119 == 0;
              _RAX = (int)v119;
              _RCX = gx;
              __asm { vmovss  xmm9, dword ptr [rcx+rax*4-4] }
              _RCX = gy;
              __asm { vmovss  xmm5, dword ptr [rcx+rax*4-4] }
              _RCX = img;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+rax*4-4]
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
                vucomiss xmm2, xmm8
              }
              if ( v439 )
              {
                __asm { vmovaps xmm6, xmm10 }
              }
              else
              {
                __asm
                {
                  vmovd   xmm4, edi
                  vcvtdq2ps xmm4, xmm4
                  vmulss  xmm0, xmm4, xmm4
                  vmovd   xmm3, r8d
                  vcvtdq2ps xmm3, xmm3
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vsqrtss xmm6, xmm1, xmm1
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vsubss  xmm0, xmm7, xmm11
                vcomiss xmm6, xmm0
              }
              if ( v118 )
              {
                if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
                  __debugbreak();
                *(__int16 *)((char *)v110 + (_QWORD)v111 + 2) = _EDI;
                v19 = 1;
                v110[1] = v113;
                __asm
                {
                  vmovss  dword ptr [rbp+0], xmm6
                  vmovaps xmm7, xmm6
                }
              }
              v143 = *(__int16 *)((char *)v110 + (_QWORD)v721);
              _EDI = v143 + 1;
              v145 = v110[v722 + 1];
              _ESI = v145 + 1;
              v147 = v106 - v728 * v145 - v143;
              v148 = __CFADD__(v712, v147);
              v439 = v712 + v147 == 0;
              _RAX = v712 + v147;
              _RCX = gx;
              __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
              _RCX = gy;
              __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
              _RCX = img;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+rax*4]
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
                vucomiss xmm2, xmm8
              }
              if ( v439 )
              {
                __asm { vmovaps xmm6, xmm10 }
              }
              else
              {
                __asm
                {
                  vmovd   xmm4, edi
                  vcvtdq2ps xmm4, xmm4
                  vmulss  xmm0, xmm4, xmm4
                  vmovd   xmm3, esi
                  vcvtdq2ps xmm3, xmm3
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vsqrtss xmm6, xmm1, xmm1
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vsubss  xmm0, xmm7, xmm11
                vcomiss xmm6, xmm0
              }
              if ( v148 )
              {
                if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
                  __debugbreak();
                *(__int16 *)((char *)v110 + (_QWORD)v111 + 2) = _EDI;
                if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
                  __debugbreak();
                v110[1] = _ESI;
                v19 = 1;
                __asm
                {
                  vmovss  dword ptr [rbp+0], xmm6
                  vmovaps xmm7, xmm6
                }
              }
              v172 = *(__int16 *)((char *)v110 + (_QWORD)v715);
              _EDX = v172;
              v174 = v110[v716 + 1];
              _EDI = v174 + 1;
              v176 = v106 - v728 * v174 - v172;
              v177 = __CFADD__(v710, v176);
              v439 = v710 + v176 == 0;
              _RAX = v710 + v176;
              _RCX = gx;
              __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
              _RCX = gy;
              __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
              _RCX = img;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+rax*4]
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
                vucomiss xmm2, xmm8
              }
              if ( v439 )
              {
                __asm { vmovaps xmm6, xmm10 }
              }
              else
              {
                __asm
                {
                  vmovd   xmm4, edx
                  vcvtdq2ps xmm4, xmm4
                  vmulss  xmm0, xmm4, xmm4
                  vmovd   xmm3, edi
                  vcvtdq2ps xmm3, xmm3
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vsqrtss xmm6, xmm1, xmm1
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vsubss  xmm0, xmm7, xmm11
                vcomiss xmm6, xmm0
              }
              if ( v177 )
              {
                *(__int16 *)((char *)v110 + (_QWORD)v111 + 2) = v172;
                if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
                  __debugbreak();
                v110[1] = _EDI;
                v19 = 1;
                __asm
                {
                  vmovss  dword ptr [rbp+0], xmm6
                  vmovaps xmm7, xmm6
                }
              }
              v201 = *(__int16 *)((char *)v110 + (_QWORD)v717);
              _EDI = v201 - 1;
              v203 = v110[v719 + 1];
              _ESI = v203 + 1;
              v205 = v106 - v728 * v203 - v201;
              v206 = __CFADD__(v711, v205);
              v439 = v711 + v205 == 0;
              _RAX = v711 + v205;
              _RCX = gx;
              __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
              _RCX = gy;
              __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
              _RCX = img;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+rax*4]
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
                vucomiss xmm2, xmm8
              }
              if ( v439 )
              {
                __asm { vmovaps xmm6, xmm10 }
              }
              else
              {
                __asm
                {
                  vmovd   xmm4, edi
                  vcvtdq2ps xmm4, xmm4
                  vmulss  xmm0, xmm4, xmm4
                  vmovd   xmm3, esi
                  vcvtdq2ps xmm3, xmm3
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vsqrtss xmm6, xmm1, xmm1
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vsubss  xmm0, xmm7, xmm11
                vcomiss xmm6, xmm0
              }
              if ( v206 )
              {
                if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
                  __debugbreak();
                *(__int16 *)((char *)v110 + (_QWORD)v111 + 2) = _EDI;
                if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
                  __debugbreak();
                v110[1] = _ESI;
                v19 = 1;
                __asm { vmovss  dword ptr [rbp+0], xmm6 }
              }
            }
            ++v106;
            ++v110;
            ++_RBP;
            v28 = v108-- == 0;
            v107 = v28 || v108 == 0;
            if ( !v108 )
              break;
            w = v728;
          }
          v39 = v708;
          v40 = v713;
          _RBP = dist;
        }
        _RBX = v106;
        __asm
        {
          vmovss  xmm7, dword ptr [rbp+rbx*4+0]
          vcomiss xmm7, xmm8
        }
        if ( v107 )
          goto LABEL_108;
        v232 = disty;
        v233 = distx;
        v234 = disty[v106 - 1];
        _ER8 = v234;
        v236 = distx[v106 - 1];
        _EDI = v236 + 1;
        v238 = v106 - v728 * v234;
        v239 = v238 < v236;
        v240 = v238 - v236;
        v439 = v240 == 0;
        _RAX = (int)v240;
        _RCX = gx;
        __asm { vmovss  xmm9, dword ptr [rcx+rax*4-4] }
        _RCX = gy;
        __asm { vmovss  xmm5, dword ptr [rcx+rax*4-4] }
        _RCX = img;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rax*4-4]
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm8; a
          vucomiss xmm2, xmm8
        }
        if ( v439 )
        {
          __asm { vmovaps xmm6, xmm10 }
        }
        else
        {
          __asm
          {
            vmovd   xmm4, edi
            vcvtdq2ps xmm4, xmm4
            vmulss  xmm0, xmm4, xmm4
            vmovd   xmm3, r8d
            vcvtdq2ps xmm3, xmm3
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm6, xmm1, xmm1
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm1, xmm3, xmm5, xmm0; gy
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm0, xmm4, xmm9, xmm0; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v232 = disty;
          v233 = distx;
          __asm { vaddss  xmm6, xmm0, xmm6 }
        }
        __asm
        {
          vsubss  xmm0, xmm7, xmm11
          vcomiss xmm6, xmm0
        }
        if ( v239 )
        {
          if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
              __debugbreak();
            v232 = disty;
            v233 = distx;
          }
          _RAX = dist;
          v19 = 1;
          v233[v106] = _EDI;
          v232[v106] = v234;
          __asm
          {
            vmovaps xmm7, xmm6
            vmovss  dword ptr [rax+rbx*4], xmm6
          }
        }
        v265 = v106 + v712;
        v266 = v232[v265];
        v267 = v233[v265];
        _ESI = v266 + 1;
        _EDI = v267 + 1;
        v270 = v106 + v712 - v728 * v266;
        _RCX = gx;
        v272 = v270 < v267;
        v273 = v270 - v267;
        _RAX = v273;
        __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
        _RCX = gy;
        __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
        _RCX = img;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rax*4]
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm8; a
          vucomiss xmm2, xmm8
        }
        if ( v273 )
        {
          __asm
          {
            vmovd   xmm4, edi
            vcvtdq2ps xmm4, xmm4
            vmulss  xmm0, xmm4, xmm4
            vmovd   xmm3, esi
            vcvtdq2ps xmm3, xmm3
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm6, xmm1, xmm1
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm1, xmm3, xmm5, xmm0; gy
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm0, xmm4, xmm9, xmm0; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v232 = disty;
          __asm { vaddss  xmm6, xmm0, xmm6 }
        }
        else
        {
          __asm { vmovaps xmm6, xmm10 }
        }
        __asm
        {
          vsubss  xmm0, xmm7, xmm11
          vcomiss xmm6, xmm0
        }
        if ( v272 )
        {
          if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
            __debugbreak();
          distx[v106] = _EDI;
          if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
            __debugbreak();
          v232 = disty;
          v19 = 1;
          _RAX = dist;
          __asm { vmovaps xmm7, xmm6 }
          disty[v106] = _ESI;
          __asm { vmovss  dword ptr [rax+rbx*4], xmm6 }
        }
        v297 = distx;
        v298 = v106 + v710;
        v299 = v232[v298];
        v300 = distx[v298];
        _ER8 = v300;
        _EDI = v299 + 1;
        v303 = v106 + v710 - v728 * v299;
        _RCX = gx;
        v305 = v303 < v300;
        v306 = v303 - v300;
        _RAX = v306;
        __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
        _RCX = gy;
        __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
        _RCX = img;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rax*4]
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm8; a
          vucomiss xmm2, xmm8
        }
        if ( v306 )
        {
          __asm
          {
            vmovd   xmm4, r8d
            vcvtdq2ps xmm4, xmm4
            vmulss  xmm0, xmm4, xmm4
            vmovd   xmm3, edi
            vcvtdq2ps xmm3, xmm3
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm6, xmm1, xmm1
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm1, xmm3, xmm5, xmm0; gy
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm0, xmm4, xmm9, xmm0; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v297 = distx;
          __asm { vaddss  xmm6, xmm0, xmm6 }
        }
        else
        {
          __asm { vmovaps xmm6, xmm10 }
        }
        __asm
        {
          vsubss  xmm0, xmm7, xmm11
          vcomiss xmm6, xmm0
        }
        if ( !v305 )
        {
LABEL_108:
          v329 = disty;
          _RCX = dist;
        }
        else
        {
          v297[v106] = v300;
          if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
            __debugbreak();
          v329 = disty;
          v19 = 1;
          _RCX = dist;
          disty[v106] = _EDI;
          __asm { vmovss  dword ptr [rcx+rbx*4], xmm6 }
        }
        w = v728;
        v708 = ++v39;
        v331 = v728 * v39 - 2;
        if ( v40 >= 0 )
        {
          _R14 = &_RCX[v331];
          v333 = &v329[v331 + 1];
          v334 = v331 + v728 * (1 - v39);
          v336 = (char *)((char *)distx - (char *)v329);
          v335 = distx <= v329;
          do
          {
            __asm
            {
              vmovss  xmm7, dword ptr [r14]
              vcomiss xmm7, xmm8
            }
            if ( !v335 )
            {
              v338 = *v333;
              v339 = *(__int16 *)((char *)v333 + (_QWORD)v336);
              _ER8 = *v333;
              _EDI = v339 - 1;
              v342 = v331 - w * _ER8;
              v343 = v342 < v339;
              v344 = v342 - v339;
              v439 = v344 == 0;
              _RAX = (int)v344;
              _RCX = gx;
              __asm { vmovss  xmm9, dword ptr [rcx+rax*4+4] }
              _RCX = gy;
              __asm { vmovss  xmm5, dword ptr [rcx+rax*4+4] }
              _RCX = img;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+rax*4+4]
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
                vucomiss xmm2, xmm8
              }
              if ( v439 )
              {
                __asm { vmovaps xmm6, xmm10 }
              }
              else
              {
                __asm
                {
                  vmovd   xmm4, edi
                  vcvtdq2ps xmm4, xmm4
                  vmulss  xmm0, xmm4, xmm4
                  vmovd   xmm3, r8d
                  vcvtdq2ps xmm3, xmm3
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vsqrtss xmm6, xmm1, xmm1
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vsubss  xmm0, xmm7, xmm11
                vcomiss xmm6, xmm0
              }
              if ( v343 )
              {
                if ( _EDI + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", (int)_EDI) )
                  __debugbreak();
                *(__int16 *)((char *)v333 + (_QWORD)v336 - 2) = _EDI;
                v19 = 1;
                *(v333 - 1) = v338;
                __asm { vmovss  dword ptr [r14], xmm6 }
              }
            }
            w = v728;
            --v331;
            --v333;
            --_R14;
            v28 = v334-- == 0;
            v335 = v28 || v334 == 0;
          }
          while ( v334 >= 0 );
          v39 = v708;
          v40 = v713;
        }
        v18 = v710;
        if ( v39 >= h )
          break;
        _R10 = gy;
        _R11 = gx;
      }
      v38 = h - 2;
    }
    v709 = v38;
    v368 = v38;
    if ( v38 >= 0 )
    {
      do
      {
        _RDX = dist;
        v370 = disty;
        v371 = w * (v368 + 1);
        _RBX = v371;
        __asm
        {
          vmovss  xmm7, dword ptr [rdx+rbx*4-4]
          vcomiss xmm7, xmm8
        }
        if ( (unsigned __int64)(w * (__int64)(v368 + 1)) >> 32 == 0 && !v439 )
        {
          v374 = distx;
          _R15 = gy;
          v376 = v371 + w;
          v377 = disty[v376 - 1];
          v378 = distx[v376 - 1];
          _ER8 = v378;
          _ESI = v377 - 1;
          v381 = v371 + w - w * v377;
          _RCX = gx;
          v383 = v381 < v378;
          v384 = v381 - v378;
          _RAX = v384;
          __asm { vmovss  xmm9, dword ptr [rcx+rax*4-4] }
          _RCX = img;
          __asm
          {
            vmovss  xmm5, dword ptr [r15+rax*4-4]
            vmovss  xmm0, dword ptr [rcx+rax*4-4]
            vminss  xmm1, xmm0, xmm12
            vmaxss  xmm2, xmm1, xmm8; a
            vucomiss xmm2, xmm8
          }
          if ( v384 )
          {
            __asm
            {
              vmovd   xmm4, r8d
              vcvtdq2ps xmm4, xmm4
              vmulss  xmm0, xmm4, xmm4
              vmovd   xmm3, esi
              vcvtdq2ps xmm3, xmm3
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm6, xmm1, xmm1
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm1, xmm3, xmm5, xmm0; gy
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm0, xmm4, xmm9, xmm0; gx
            }
            *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            w = v728;
            v370 = disty;
            v374 = distx;
            __asm { vaddss  xmm6, xmm0, xmm6 }
          }
          else
          {
            __asm { vmovaps xmm6, xmm10 }
          }
          __asm
          {
            vsubss  xmm0, xmm7, xmm11
            vcomiss xmm6, xmm0
          }
          if ( v383 )
          {
            v374[v371 - 1] = v378;
            if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
                __debugbreak();
              v370 = disty;
              v374 = distx;
            }
            _RAX = dist;
            v19 = 1;
            w = v728;
            v370[v371 - 1] = _ESI;
            __asm
            {
              vmovaps xmm7, xmm6
              vmovss  dword ptr [rax+rbx*4-4], xmm6
            }
          }
          v407 = v371 + w - 1;
          v408 = v370[v407 - 1];
          v409 = v374[v407 - 1];
          _EBP = v408 - 1;
          _ESI = v409 + 1;
          v412 = v407 - w * v408;
          _RCX = gx;
          v414 = v412 < v409;
          v415 = v412 - v409;
          _RAX = (int)v415;
          __asm { vmovss  xmm9, dword ptr [rcx+rax*4-4] }
          _RCX = img;
          __asm
          {
            vmovss  xmm5, dword ptr [r15+rax*4-4]
            vmovss  xmm0, dword ptr [rcx+rax*4-4]
            vminss  xmm1, xmm0, xmm12
            vmaxss  xmm2, xmm1, xmm8; a
            vucomiss xmm2, xmm8
          }
          if ( v415 )
          {
            __asm
            {
              vmovd   xmm4, esi
              vcvtdq2ps xmm4, xmm4
              vmulss  xmm0, xmm4, xmm4
              vmovd   xmm3, ebp
              vcvtdq2ps xmm3, xmm3
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm6, xmm1, xmm1
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm1, xmm3, xmm5, xmm0; gy
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm0, xmm4, xmm9, xmm0; gx
            }
            *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            w = v728;
            __asm { vaddss  xmm6, xmm0, xmm6 }
          }
          else
          {
            __asm { vmovaps xmm6, xmm10 }
          }
          __asm
          {
            vsubss  xmm0, xmm7, xmm11
            vcomiss xmm6, xmm0
          }
          if ( v414 )
          {
            if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
              __debugbreak();
            _RBX = v371;
            distx[v371 - 1] = _ESI;
            if ( (unsigned int)(_EBP + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EBP, "signed", _EBP) )
              __debugbreak();
            v370 = disty;
            v19 = 1;
            _RDX = dist;
            w = v728;
            disty[v371 - 1] = _EBP;
            __asm { vmovss  dword ptr [rdx+rbx*4-4], xmm6 }
          }
          else
          {
            _RDX = dist;
            v370 = disty;
          }
        }
        v438 = v371 - 2;
        v439 = w == 2;
        if ( w - 2 > 0 )
        {
          _RBP = v438;
          v718 = w;
          v441 = &v370[v438 + 1];
          v720 = (char *)distx + v718 * 2 - (_QWORD)v370;
          v442 = v438 + w * -v368;
          v444 = (char *)((char *)distx - (char *)v370);
          v443 = distx <= v370;
          do
          {
            __asm
            {
              vmovss  xmm7, dword ptr [rdx+rbp*4]
              vcomiss xmm7, xmm8
            }
            if ( !v443 )
            {
              v446 = *v441;
              v447 = *(__int16 *)((char *)v441 + (_QWORD)v444);
              _ER8 = *v441;
              _EDI = v447 - 1;
              v450 = v438 - w * _ER8;
              v451 = v450 < v447;
              v452 = v450 - v447;
              v439 = v452 == 0;
              _RAX = (int)v452;
              _RCX = gx;
              __asm { vmovss  xmm9, dword ptr [rcx+rax*4+4] }
              _RCX = gy;
              __asm { vmovss  xmm5, dword ptr [rcx+rax*4+4] }
              _RCX = img;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+rax*4+4]
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
                vucomiss xmm2, xmm8
              }
              if ( v439 )
              {
                __asm { vmovaps xmm6, xmm10 }
              }
              else
              {
                __asm
                {
                  vmovd   xmm4, edi
                  vcvtdq2ps xmm4, xmm4
                  vmulss  xmm0, xmm4, xmm4
                  vmovd   xmm3, r8d
                  vcvtdq2ps xmm3, xmm3
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vsqrtss xmm6, xmm1, xmm1
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vsubss  xmm0, xmm7, xmm11
                vcomiss xmm6, xmm0
              }
              if ( v451 )
              {
                if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
                  __debugbreak();
                _RAX = dist;
                v19 = 1;
                *(_WORD *)&v444[(_QWORD)v441 - 2] = _EDI;
                *(v441 - 1) = v446;
                __asm
                {
                  vmovaps xmm7, xmm6
                  vmovss  dword ptr [rax+rbp*4], xmm6
                }
              }
              v477 = *(__int16 *)((char *)v441 + (_QWORD)v720);
              _EDI = v477 - 1;
              v479 = v441[v718];
              _ESI = v479 - 1;
              v481 = v438 - v728 * v479 - v477;
              v482 = __CFADD__(v714, v481);
              v439 = v714 + v481 == 0;
              _RAX = v714 + v481;
              _RCX = gx;
              __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
              _RCX = gy;
              __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
              _RCX = img;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+rax*4]
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
                vucomiss xmm2, xmm8
              }
              if ( v439 )
              {
                __asm { vmovaps xmm6, xmm10 }
              }
              else
              {
                __asm
                {
                  vmovd   xmm4, edi
                  vcvtdq2ps xmm4, xmm4
                  vmulss  xmm0, xmm4, xmm4
                  vmovd   xmm3, esi
                  vcvtdq2ps xmm3, xmm3
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vsqrtss xmm6, xmm1, xmm1
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vsubss  xmm0, xmm7, xmm11
                vcomiss xmm6, xmm0
              }
              if ( v482 )
              {
                if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
                  __debugbreak();
                *(_WORD *)&v444[(_QWORD)v441 - 2] = _EDI;
                if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
                  __debugbreak();
                _RAX = dist;
                v19 = 1;
                *(v441 - 1) = _ESI;
                __asm
                {
                  vmovaps xmm7, xmm6
                  vmovss  dword ptr [rax+rbp*4], xmm6
                }
              }
              v507 = *(__int16 *)((char *)v441 + (_QWORD)(v720 - 2));
              _EDX = v507;
              v509 = v441[v718 - 1];
              v510 = v728 * (1 - v509);
              _EDI = v509 - 1;
              v512 = v510 < v507;
              v513 = v510 - v507;
              v439 = v513 == 0;
              LODWORD(_RAX) = v438 + v513;
              _RCX = gx;
              _RAX = (int)_RAX;
              __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
              _RCX = gy;
              __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
              _RCX = img;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+rax*4]
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
                vucomiss xmm2, xmm8
              }
              if ( v439 )
              {
                __asm { vmovaps xmm6, xmm10 }
              }
              else
              {
                __asm
                {
                  vmovd   xmm4, edx
                  vcvtdq2ps xmm4, xmm4
                  vmulss  xmm0, xmm4, xmm4
                  vmovd   xmm3, edi
                  vcvtdq2ps xmm3, xmm3
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vsqrtss xmm6, xmm1, xmm1
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vsubss  xmm0, xmm7, xmm11
                vcomiss xmm6, xmm0
              }
              if ( v512 )
              {
                *(_WORD *)&v444[(_QWORD)v441 - 2] = v507;
                if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
                  __debugbreak();
                _RAX = dist;
                v19 = 1;
                *(v441 - 1) = _EDI;
                __asm
                {
                  vmovaps xmm7, xmm6
                  vmovss  dword ptr [rax+rbp*4], xmm6
                }
              }
              w = v728;
              v370 = disty;
              v538 = v728 + _RBP - 1;
              v539 = distx[v538];
              v540 = disty[v538];
              _EDI = v539 + 1;
              _ESI = v540 - 1;
              LODWORD(v538) = v438 - v728 * v540 - v539;
              v543 = __CFADD__(v728 - 1, (_DWORD)v538);
              v439 = v728 - 1 + (_DWORD)v538 == 0;
              _RCX = gx;
              _RAX = v728 - 1 + (int)v538;
              __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
              _RCX = gy;
              __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
              _RCX = img;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+rax*4]
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
                vucomiss xmm2, xmm8
              }
              if ( v439 )
              {
                __asm { vmovaps xmm6, xmm10 }
              }
              else
              {
                __asm
                {
                  vmovd   xmm4, edi
                  vcvtdq2ps xmm4, xmm4
                  vmulss  xmm0, xmm4, xmm4
                  vmovd   xmm3, esi
                  vcvtdq2ps xmm3, xmm3
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vsqrtss xmm6, xmm1, xmm1
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                w = v728;
                v370 = disty;
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vsubss  xmm0, xmm7, xmm11
                vcomiss xmm6, xmm0
              }
              if ( v543 )
              {
                if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
                  __debugbreak();
                *(_WORD *)&v444[(_QWORD)v441 - 2] = _EDI;
                if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
                  __debugbreak();
                _RDX = dist;
                v19 = 1;
                w = v728;
                v370 = disty;
                *(v441 - 1) = _ESI;
                __asm { vmovss  dword ptr [rdx+rbp*4], xmm6 }
              }
              else
              {
                _RDX = dist;
              }
            }
            --v438;
            --v442;
            --_RBP;
            --v441;
            v439 = v442 == 0;
            v443 = v442 == 0;
          }
          while ( v442 > 0 );
          v368 = v709;
        }
        _RBX = v438;
        __asm
        {
          vmovss  xmm7, dword ptr [rdx+rbx*4]
          vcomiss xmm7, xmm8
        }
        if ( v439 )
        {
          v631 = distx;
        }
        else
        {
          v569 = v370[v438 + 1];
          _ER8 = v569;
          v571 = distx[v438 + 1];
          v572 = v438 - w * v569;
          v573 = v572 < v571;
          v574 = v572 - v571;
          v439 = v574 == 0;
          _RAX = (int)v574;
          _EDI = v571 - 1;
          _RCX = gx;
          __asm { vmovss  xmm9, dword ptr [rcx+rax*4+4] }
          _RCX = gy;
          __asm { vmovss  xmm5, dword ptr [rcx+rax*4+4] }
          _RCX = img;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rax*4+4]
            vminss  xmm1, xmm0, xmm12
            vmaxss  xmm2, xmm1, xmm8; a
            vucomiss xmm2, xmm8
          }
          if ( v439 )
          {
            __asm { vmovaps xmm6, xmm10 }
          }
          else
          {
            __asm
            {
              vmovd   xmm4, edi
              vcvtdq2ps xmm4, xmm4
              vmulss  xmm0, xmm4, xmm4
              vmovd   xmm3, r8d
              vcvtdq2ps xmm3, xmm3
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm6, xmm1, xmm1
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm1, xmm3, xmm5, xmm0; gy
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm0, xmm4, xmm9, xmm0; gx
            }
            *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            v370 = disty;
            __asm { vaddss  xmm6, xmm0, xmm6 }
          }
          __asm
          {
            vsubss  xmm0, xmm7, xmm11
            vcomiss xmm6, xmm0
          }
          if ( v573 )
          {
            if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
                __debugbreak();
              v370 = disty;
            }
            _R14 = dist;
            v19 = 1;
            distx[v438] = _EDI;
            v370[v438] = v569;
            __asm
            {
              vmovaps xmm7, xmm6
              vmovss  dword ptr [r14+rbx*4], xmm6
            }
          }
          else
          {
            _R14 = dist;
          }
          v600 = v438 + v714;
          v601 = v370[v600];
          v602 = distx[v600];
          _ESI = v601 - 1;
          _EDI = v602 - 1;
          v605 = v438 + v714 - v728 * v601;
          _RCX = gx;
          v607 = v605 < v602;
          v608 = v605 - v602;
          _RAX = v608;
          __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
          _RCX = gy;
          __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
          _RCX = img;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rax*4]
            vminss  xmm1, xmm0, xmm12
            vmaxss  xmm2, xmm1, xmm8; a
            vucomiss xmm2, xmm8
          }
          if ( v608 )
          {
            __asm
            {
              vmovd   xmm4, edi
              vcvtdq2ps xmm4, xmm4
              vmulss  xmm0, xmm4, xmm4
              vmovd   xmm3, esi
              vcvtdq2ps xmm3, xmm3
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm6, xmm1, xmm1
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm1, xmm3, xmm5, xmm0; gy
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm0, xmm4, xmm9, xmm0; gx
            }
            *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            v370 = disty;
            __asm { vaddss  xmm6, xmm0, xmm6 }
          }
          else
          {
            __asm { vmovaps xmm6, xmm10 }
          }
          __asm
          {
            vsubss  xmm0, xmm7, xmm11
            vcomiss xmm6, xmm0
          }
          if ( v607 )
          {
            if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
              __debugbreak();
            distx[v438] = _EDI;
            if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
              __debugbreak();
            v370 = disty;
            v19 = 1;
            __asm { vmovaps xmm7, xmm6 }
            disty[v438] = _ESI;
            __asm { vmovss  dword ptr [r14+rbx*4], xmm6 }
          }
          v631 = distx;
          v632 = v438 + v728;
          v633 = v370[v632];
          v634 = distx[v632];
          _ER8 = v634;
          _EDI = v633 - 1;
          v637 = v438 + v728 - v728 * v633;
          _RCX = gx;
          v639 = v637 < v634;
          v640 = v637 - v634;
          _RAX = v640;
          __asm { vmovss  xmm9, dword ptr [rcx+rax*4] }
          _RCX = gy;
          __asm { vmovss  xmm5, dword ptr [rcx+rax*4] }
          _RCX = img;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rax*4]
            vminss  xmm1, xmm0, xmm12
            vmaxss  xmm2, xmm1, xmm8; a
            vucomiss xmm2, xmm8
          }
          if ( v640 )
          {
            __asm
            {
              vmovd   xmm4, r8d
              vcvtdq2ps xmm4, xmm4
              vmulss  xmm0, xmm4, xmm4
              vmovd   xmm3, edi
              vcvtdq2ps xmm3, xmm3
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm6, xmm1, xmm1
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm1, xmm3, xmm5, xmm0; gy
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm0, xmm4, xmm9, xmm0; gx
            }
            *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            v370 = disty;
            __asm { vaddss  xmm6, xmm0, xmm6 }
          }
          else
          {
            __asm { vmovaps xmm6, xmm10 }
          }
          __asm
          {
            vsubss  xmm0, xmm7, xmm11
            vcomiss xmm6, xmm0
          }
          if ( v639 )
          {
            distx[v438] = v634;
            if ( (unsigned int)(_EDI + 0x8000) > 0xFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", _EDI) )
                __debugbreak();
              v370 = disty;
            }
            _RDX = dist;
            v19 = 1;
            w = v728;
            v370[v438] = _EDI;
            __asm { vmovss  dword ptr [rdx+rbx*4], xmm6 }
          }
          else
          {
            w = v728;
            _RDX = dist;
          }
        }
        v663 = w * v368 + 1;
        if ( w > 1 )
        {
          v664 = (unsigned int)(w - 1);
          v666 = (char *)v631 - (char *)v370;
          v665 = v631 <= v370;
          _RSI = &_RDX[v663];
          v668 = &v370[v663 - 1];
          do
          {
            __asm
            {
              vmovss  xmm7, dword ptr [rsi]
              vcomiss xmm7, xmm8
            }
            if ( !v665 )
            {
              v670 = *v668;
              v671 = *(__int16 *)((char *)v668 + v666);
              _ER8 = *v668;
              _EDI = v671 + 1;
              v674 = v663 - w * _ER8;
              v675 = v674 < v671;
              v676 = v674 - v671;
              v439 = v676 == 0;
              _RAX = (int)v676;
              _RCX = gx;
              __asm { vmovss  xmm9, dword ptr [rcx+rax*4-4] }
              _RCX = gy;
              __asm { vmovss  xmm5, dword ptr [rcx+rax*4-4] }
              _RCX = img;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+rax*4-4]
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
                vucomiss xmm2, xmm8
              }
              if ( v439 )
              {
                __asm { vmovaps xmm6, xmm10 }
              }
              else
              {
                __asm
                {
                  vmovd   xmm4, edi
                  vcvtdq2ps xmm4, xmm4
                  vmulss  xmm0, xmm4, xmm4
                  vmovd   xmm3, r8d
                  vcvtdq2ps xmm3, xmm3
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vsqrtss xmm6, xmm1, xmm1
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vsubss  xmm0, xmm7, xmm11
                vcomiss xmm6, xmm0
              }
              if ( v675 )
              {
                if ( _EDI + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_EDI, "signed", (int)_EDI) )
                  __debugbreak();
                *(__int16 *)((char *)v668 + v666 + 2) = _EDI;
                v19 = 1;
                v668[1] = v670;
                __asm { vmovss  dword ptr [rsi], xmm6 }
              }
            }
            w = v728;
            ++v663;
            ++v668;
            ++_RSI;
            v28 = v664-- == 0;
            v665 = v28 || v664 == 0;
          }
          while ( v664 );
          v368 = v709;
        }
        v709 = --v368;
      }
      while ( v368 >= 0 );
      v38 = h - 2;
    }
    _R10 = gy;
    v439 = v19 == 0;
    _R11 = gx;
    v19 = 0;
    v18 = v710;
    v35 = h;
  }
  while ( !v439 );
  _R11 = &v723;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
}

