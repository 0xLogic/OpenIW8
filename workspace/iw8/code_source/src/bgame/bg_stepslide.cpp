/*
==============
BgStepSlideMove::StepSlideMove
==============
*/

void __fastcall BgStepSlideMove::StepSlideMove(BgStepSlideMove *this)
{
  ?StepSlideMove@BgStepSlideMove@@QEAAXXZ(this);
}

/*
==============
BgStepSlideMove::SlideMove
==============
*/

bool __fastcall BgStepSlideMove::SlideMove(BgStepSlideMove *this)
{
  return ?SlideMove@BgStepSlideMove@@QEAA_NXZ(this);
}

/*
==============
BgStepSlideMove::~BgStepSlideMove
==============
*/

void __fastcall BgStepSlideMove::~BgStepSlideMove(BgStepSlideMove *this)
{
  ??1BgStepSlideMove@@UEAA@XZ(this);
}

/*
==============
BgStepSlideMove::~BgStepSlideMove
==============
*/
void BgStepSlideMove::~BgStepSlideMove(BgStepSlideMove *this)
{
  this->__vftable = (BgStepSlideMove_vtbl *)&BgStepSlideMove::`vftable';
}

/*
==============
BgStepSlideMove::SlideMove
==============
*/
bool BgStepSlideMove::SlideMove(BgStepSlideMove *this)
{
  bool v13; 
  vec3_t *origin; 
  BgStepSlideMove_vtbl *v55; 
  bool result; 
  bool *inSolid; 
  int v77[6]; 
  trace_t trace; 
  int v79[3]; 
  char v80; 
  char v81; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _R15 = this;
  if ( !this->velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_stepslide.cpp", 27, ASSERT_TYPE_ASSERT, "(this->velocity)", (const char *)&queryFormat, "this->velocity") )
    __debugbreak();
  if ( !_R15->origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_stepslide.cpp", 28, ASSERT_TYPE_ASSERT, "(this->origin)", (const char *)&queryFormat, "this->origin") )
    __debugbreak();
  if ( _R15->hasGround && !_R15->groundNormal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_stepslide.cpp", 29, ASSERT_TYPE_ASSERT, "(!this->hasGround || this->groundNormal)", (const char *)&queryFormat, "!this->hasGround || this->groundNormal") )
    __debugbreak();
  v13 = !_R15->gravity;
  _RAX = _R15->velocity;
  __asm { vmovss  xmm12, dword ptr [r15+8] }
  _R15->bumpEntityNum = 2047;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rsp+210h+var_1B8], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  [rsp+210h+var_1B4], xmm1
    vmovss  xmm2, dword ptr [rax+8]
    vmovss  dword ptr [rsp+210h+var_1B0], xmm2
  }
  if ( !v13 )
  {
    __asm
    {
      vmulss  xmm0, xmm12, cs:__real@44480000
      vsubss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rsp+210h+var_1B0], xmm1
      vaddss  xmm0, xmm1, dword ptr [rax+8]
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vmovss  dword ptr [rax+8], xmm1
    }
    if ( !_R15->hasGround )
      goto LABEL_16;
    _R15->ClipVelocity(_R15, _R15->velocity, _R15->groundNormal, _R15->velocity);
  }
  if ( _R15->hasGround )
  {
    _RAX = _R15->groundNormal;
    _RCX = (int *)&v80;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  [rbp+110h+var_110], xmm0
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  [rbp+110h+var_10C], xmm1
      vmovss  xmm0, dword ptr [rax+8]
      vmovss  [rbp+110h+var_108], xmm0
    }
    goto LABEL_17;
  }
LABEL_16:
  _RCX = v79;
LABEL_17:
  __asm
  {
    vmovss  xmm15, cs:__real@3f800000
    vmovss  xmm14, cs:__real@3f7d70a4
    vmovss  xmm11, cs:__real@3dcccccd
  }
  _RAX = _R15->velocity;
  __asm
  {
    vxorps  xmm13, xmm13, xmm13
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  xmm5, dword ptr [rax]
    vmovss  xmm3, dword ptr [rax+8]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm15, xmm0
    vdivss  xmm2, xmm15, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rcx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rax+4]
    vmovss  dword ptr [rcx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rax+8]
    vmovss  dword ptr [rcx+8], xmm0
  }
  origin = _R15->origin;
  __asm
  {
    vmulss  xmm0, xmm12, dword ptr [rax]
    vaddss  xmm1, xmm0, dword ptr [r8]
    vmovss  [rsp+210h+var_198], xmm1
    vmulss  xmm0, xmm12, dword ptr [rax+4]
    vaddss  xmm1, xmm0, dword ptr [r8+4]
    vmovss  [rsp+210h+var_194], xmm1
    vmulss  xmm0, xmm12, dword ptr [rax+8]
    vaddss  xmm1, xmm0, dword ptr [r8+8]
  }
  v55 = _R15->__vftable;
  __asm { vmovss  [rbp+110h+var_190], xmm1 }
  v55->TraceCapsule(_R15, &trace, origin, (const vec3_t *)v77);
  if ( trace.allsolid )
  {
    if ( !_R15->zerog )
      _R15->velocity->v[2] = 0.0;
    inSolid = _R15->inSolid;
    if ( inSolid )
      *inSolid = 1;
    result = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm6, [rbp+110h+trace.fraction]
      vcomiss xmm6, xmm13
      vucomiss xmm6, xmm15
    }
    if ( _R15->gravity )
    {
      __asm { vmovss  xmm0, [rsp+210h+var_1B8] }
      _RAX = _R15->velocity;
      __asm
      {
        vmovss  dword ptr [rax], xmm0
        vmovss  xmm1, [rsp+210h+var_1B4]
        vmovss  dword ptr [rax+4], xmm1
        vmovss  xmm0, dword ptr [rsp+210h+var_1B0]
        vmovss  dword ptr [rax+8], xmm0
      }
    }
    result = 0;
  }
  _R11 = &v81;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
BgStepSlideMove::StepSlideMove
==============
*/
void BgStepSlideMove::StepSlideMove(BgStepSlideMove *this)
{
  BgStepSlideMove_vtbl *v18; 
  char v22; 
  char v23; 
  BgStepSlideMove_vtbl *v30; 
  BgStepSlideMove_vtbl *v47; 
  int v74; 
  int v77; 
  int v80; 
  int v83[16]; 
  char v84; 
  char vars0; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm9
    vmovaps xmmword ptr [r11-48h], xmm10
    vmovaps xmmword ptr [r11-58h], xmm11
  }
  if ( !this->velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_stepslide.cpp", 195, ASSERT_TYPE_ASSERT, "(this->velocity)", (const char *)&queryFormat, "this->velocity") )
    __debugbreak();
  if ( !this->origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_stepslide.cpp", 196, ASSERT_TYPE_ASSERT, "(this->origin)", (const char *)&queryFormat, "this->origin") )
    __debugbreak();
  _RAX = this->origin;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rsp+120h+var_F0], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  [rsp+120h+var_EC], xmm1
    vmovss  xmm0, dword ptr [rax+8]
  }
  _RAX = this->velocity;
  __asm
  {
    vmovss  [rsp+120h+var_E8], xmm0
    vmovss  xmm10, dword ptr [rax]
    vmovss  xmm11, dword ptr [rax+4]
    vmovss  xmm9, dword ptr [rax+8]
  }
  if ( BgStepSlideMove::SlideMove(this) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+120h+var_F0]
      vmovss  xmm1, [rsp+120h+var_EC]
    }
    v18 = this->__vftable;
    __asm
    {
      vmovss  [rsp+120h+var_E0], xmm0
      vmovss  xmm0, [rsp+120h+var_E8]
      vmovss  [rsp+120h+var_DC], xmm1
      vmovaps xmmword ptr [rsp+120h+var_18+8], xmm6
      vmovss  xmm6, cs:__real@41900000
      vsubss  xmm1, xmm0, xmm6
      vmovss  [rsp+120h+var_D8], xmm1
    }
    *(double *)&_XMM0 = ((double (__fastcall *)(BgStepSlideMove *, int *, int *, int *))v18->TraceCapsule)(this, v83, &v74, &v77);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm9, xmm0
    }
    if ( v22 | v23 )
      goto LABEL_19;
    __asm
    {
      vmovss  xmm0, [rsp+120h+var_C0]
      vucomiss xmm0, cs:__real@3f800000
    }
    if ( !v23 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+120h+var_A8]
        vcomiss xmm0, cs:__real@3f333333
      }
      if ( !v22 )
      {
LABEL_19:
        __asm
        {
          vmovss  xmm0, [rsp+120h+var_F0]
          vmovss  xmm1, [rsp+120h+var_EC]
          vaddss  xmm2, xmm6, [rsp+120h+var_E8]
        }
        v30 = this->__vftable;
        __asm
        {
          vmovss  [rsp+120h+var_D0], xmm0
          vmovss  [rsp+120h+var_CC], xmm1
          vmovss  [rsp+120h+var_C8], xmm2
        }
        v30->TraceCapsule(this, (trace_t *)v83, (const vec3_t *)&v74, (const vec3_t *)&v80);
        if ( !v84 )
        {
          __asm
          {
            vmovss  xmm6, [rsp+120h+var_C0]
            vmovss  xmm0, [rsp+120h+var_D0]
            vsubss  xmm1, xmm0, [rsp+120h+var_F0]
            vmovss  xmm0, [rsp+120h+var_CC]
          }
          _RAX = this->origin;
          __asm
          {
            vmulss  xmm1, xmm1, xmm6
            vmovaps [rsp+120h+var_28+8], xmm7
            vaddss  xmm7, xmm1, [rsp+120h+var_F0]
            vsubss  xmm1, xmm0, [rsp+120h+var_EC]
            vmovss  xmm0, [rsp+120h+var_C8]
            vmulss  xmm2, xmm1, xmm6
            vsubss  xmm1, xmm0, [rsp+120h+var_E8]
            vaddss  xmm5, xmm2, [rsp+120h+var_EC]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm6, xmm2, [rsp+120h+var_E8]
            vmovss  dword ptr [rax+8], xmm6
            vmovss  dword ptr [rax], xmm7
            vmovss  dword ptr [rax+4], xmm5
          }
          _RAX = this->velocity;
          __asm
          {
            vmovss  dword ptr [rax], xmm10
            vmovss  dword ptr [rax+4], xmm11
            vmovss  dword ptr [rax+8], xmm9
          }
          BgStepSlideMove::SlideMove(this);
          _R8 = this->origin;
          v47 = this->__vftable;
          __asm
          {
            vmovss  xmm0, dword ptr [r8]
            vmovss  [rsp+120h+var_E0], xmm0
            vmovss  xmm1, dword ptr [r8+4]
            vmovss  xmm0, [rsp+120h+var_E8]
            vsubss  xmm2, xmm0, xmm6
            vmovss  [rsp+120h+var_DC], xmm1
            vaddss  xmm1, xmm2, dword ptr [r8+8]
            vmovss  [rsp+120h+var_D8], xmm1
          }
          v47->TraceCapsule(this, (trace_t *)v83, _R8, (const vec3_t *)&v77);
          __asm { vmovaps xmm7, [rsp+120h+var_28+8] }
          if ( !v84 )
          {
            _RAX = this->origin;
            __asm
            {
              vmovss  xmm6, [rsp+120h+var_C0]
              vmovss  xmm0, [rsp+120h+var_E0]
              vsubss  xmm1, xmm0, dword ptr [rax]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rax]
              vmovss  dword ptr [rax], xmm3
              vmovss  xmm0, [rsp+120h+var_DC]
              vsubss  xmm1, xmm0, dword ptr [rax+4]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rax+4]
              vmovss  dword ptr [rax+4], xmm3
              vmovss  xmm0, [rsp+120h+var_D8]
              vsubss  xmm1, xmm0, dword ptr [rax+8]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rax+8]
              vmovss  dword ptr [rax+8], xmm3
            }
          }
          __asm
          {
            vmovss  xmm0, [rsp+120h+var_C0]
            vcomiss xmm0, cs:__real@3f800000
          }
        }
      }
    }
    __asm { vmovaps xmm6, xmmword ptr [rsp+120h+var_18+8] }
  }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
}

