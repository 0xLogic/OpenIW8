/*
==============
PM_AllowCameraInputForAxis
==============
*/

bool __fastcall PM_AllowCameraInputForAxis(playerState_s *ps, int axis, float delta)
{
  return ?PM_AllowCameraInputForAxis@@YA_NPEAUplayerState_s@@HM@Z(ps, axis, delta);
}

/*
==============
PM_StartViewAngleTransition
==============
*/

void __fastcall PM_StartViewAngleTransition(pmove_t *pm, int duration, EViewAngleEaseMode easeInMode, EViewAngleEaseMode eastOutMode, const vec2_t *goalAngles, int flags)
{
  ?PM_StartViewAngleTransition@@YAXPEAVpmove_t@@HW4EViewAngleEaseMode@@1AEBTvec2_t@@H@Z(pm, duration, easeInMode, eastOutMode, goalAngles, flags);
}

/*
==============
PM_UpdateViewAnglesOverride
==============
*/

void __fastcall PM_UpdateViewAnglesOverride(pmove_t *pm, usercmd_s *cmd)
{
  ?PM_UpdateViewAnglesOverride@@YAXPEAVpmove_t@@PEAUusercmd_s@@@Z(pm, cmd);
}

/*
==============
PM_EndViewAngleTransition
==============
*/

void __fastcall PM_EndViewAngleTransition(playerState_s *ps)
{
  ?PM_EndViewAngleTransition@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
PM_GetViewAngleTransitionDuration
==============
*/

int __fastcall PM_GetViewAngleTransitionDuration(const playerViewAngleState_s *p_viewAngleState)
{
  return ?PM_GetViewAngleTransitionDuration@@YAHPEBUplayerViewAngleState_s@@@Z(p_viewAngleState);
}

/*
==============
GetViewAngleForTime
==============
*/
float GetViewAngleForTime(playerViewAngleState_s *p_viewAngleState, int time, int axis)
{
  EViewAngleEaseMode easeMode; 
  __int32 v14; 
  __int32 v15; 
  int v16; 
  char v39; 
  __int64 v68; 
  __int64 v69; 
  int v70; 

  _RBX = axis;
  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RDI = p_viewAngleState;
  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  if ( (unsigned int)axis > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 119, ASSERT_TYPE_ASSERT, "(( axis == PITCH ) || ( axis == YAW ))", (const char *)&queryFormat, "( axis == PITCH ) || ( axis == YAW )") )
    __debugbreak();
  if ( (unsigned int)_RBX >= 2 )
  {
    v70 = 2;
    LODWORD(v68) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v68, v70) )
      __debugbreak();
  }
  __asm { vmovss  xmm6, dword ptr [rdi+rbx*4+20h] }
  if ( (unsigned int)_RBX >= 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v68) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v68, v69) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+rbx*4+18h]; angle1
    vmovaps xmm1, xmm6; angle2
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  easeMode = _RDI->easeMode;
  __asm
  {
    vxorps  xmm7, xmm0, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, ebp
  }
  if ( easeMode == VAEM_LINEAR )
    goto LABEL_23;
  v14 = easeMode - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        PM_GetViewAngleTransitionDuration(_RDI);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm6, xmm6, xmm0
        }
        vec2_t::operator[](&_RDI->startAngles, _RBX);
        __asm
        {
          vmulss  xmm0, xmm6, xmm7
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm0, xmm1, dword ptr [rax]
        }
        goto LABEL_24;
      }
      if ( v16 == 1 )
      {
        __asm { vmulss  xmm6, xmm6, cs:__real@40490fdb }
        _RBX = vec2_t::operator[](&_RDI->startAngles, _RBX);
        PM_GetViewAngleTransitionDuration(_RDI);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm0, xmm6, xmm0; X
        }
        *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
        __asm
        {
          vsubss  xmm1, xmm0, cs:__real@3f800000
          vmovss  xmm0, dword ptr [rbx]
          vmulss  xmm2, xmm1, xmm7
          vmulss  xmm3, xmm2, cs:__real@3f000000
          vsubss  xmm0, xmm0, xmm3
        }
        goto LABEL_24;
      }
LABEL_23:
      __asm { vmulss  xmm6, xmm6, xmm7 }
      PM_GetViewAngleTransitionDuration(_RDI);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm6, xmm6, xmm0
      }
      vec2_t::operator[](&_RDI->startAngles, _RBX);
      __asm { vaddss  xmm0, xmm6, dword ptr [rax] }
      goto LABEL_24;
    }
    PM_GetViewAngleTransitionDuration(_RDI);
    __asm
    {
      vmulss  xmm7, xmm7, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm6, xmm6, xmm0
    }
    _RAX = vec2_t::operator[](&_RDI->startAngles, _RBX);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vcomiss xmm6, xmm2
      vmovss  xmm4, dword ptr [rax]
    }
    if ( v39 )
    {
      __asm
      {
        vmulss  xmm0, xmm7, xmm6
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm0, xmm1, xmm4
      }
    }
    else
    {
      __asm
      {
        vaddss  xmm1, xmm6, cs:__real@bf800000
        vsubss  xmm0, xmm1, cs:__real@40000000
        vmulss  xmm1, xmm0, xmm1
        vsubss  xmm2, xmm1, xmm2
        vmulss  xmm3, xmm2, xmm7
        vsubss  xmm0, xmm4, xmm3
      }
    }
  }
  else
  {
    PM_GetViewAngleTransitionDuration(_RDI);
    __asm
    {
      vmulss  xmm7, xmm7, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm6, xmm6, xmm0
    }
    _RAX = vec2_t::operator[](&_RDI->startAngles, _RBX);
    __asm
    {
      vcomiss xmm6, cs:__real@3f800000
      vmovss  xmm4, dword ptr [rax]
    }
    if ( v39 )
    {
      __asm
      {
        vmulss  xmm0, xmm7, xmm6
        vmulss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm0, xmm2, xmm4
      }
    }
    else
    {
      __asm
      {
        vaddss  xmm1, xmm6, cs:__real@c0000000
        vmulss  xmm0, xmm1, xmm1
        vmulss  xmm1, xmm0, xmm1
        vaddss  xmm2, xmm1, cs:__real@40000000
        vmulss  xmm3, xmm2, xmm7
        vaddss  xmm0, xmm3, xmm4
      }
    }
  }
LABEL_24:
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
GetViewAngleFromCurrentAngle
==============
*/

float __fastcall GetViewAngleFromCurrentAngle(playerViewAngleState_s *p_viewAngleState, double currentAngle, int time, int axis)
{
  EViewAngleEaseMode easeMode; 
  int ViewAngleTransitionDuration; 
  __int32 v17; 
  __int32 v18; 
  int v19; 
  __int64 v65; 
  char v69; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RDI = axis;
  _RSI = p_viewAngleState;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm6, xmm1
  }
  if ( (unsigned int)axis > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 61, ASSERT_TYPE_ASSERT, "(( axis == PITCH ) || ( axis == YAW ))", (const char *)&queryFormat, "( axis == PITCH ) || ( axis == YAW )") )
    __debugbreak();
  if ( (unsigned int)_RDI >= 2 )
  {
    LODWORD(v65) = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v65, 2) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+rdi*4+20h]; angle2
    vmovaps xmm0, xmm6; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm { vxorps  xmm7, xmm0, cs:__xmm@80000000800000008000000080000000 }
  easeMode = _RSI->easeMode;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, ebp
  }
  ViewAngleTransitionDuration = PM_GetViewAngleTransitionDuration(_RSI);
  if ( easeMode == VAEM_LINEAR )
    goto LABEL_20;
  v17 = easeMode - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( !v18 )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000
        vmulss  xmm3, xmm7, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm8, xmm0
        vcomiss xmm1, xmm2
      }
      if ( !(((_BYTE)ViewAngleTransitionDuration - (unsigned __int8)(ViewAngleTransitionDuration >> 31)) & 1) )
      {
        __asm
        {
          vaddss  xmm1, xmm1, cs:__real@bf800000
          vsubss  xmm0, xmm1, cs:__real@40000000
          vmulss  xmm1, xmm0, xmm1
          vsubss  xmm2, xmm1, xmm2
          vmulss  xmm3, xmm2, xmm3
          vsubss  xmm0, xmm6, xmm3
        }
        goto LABEL_22;
      }
      __asm
      {
        vmulss  xmm0, xmm3, xmm1
        vmulss  xmm1, xmm0, xmm1
      }
LABEL_21:
      __asm { vaddss  xmm0, xmm1, xmm6 }
      goto LABEL_22;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm6, xmm8, xmm0
      }
      vec2_t::operator[](&_RSI->startAngles, _RDI);
      __asm
      {
        vmulss  xmm0, xmm6, xmm7
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm0, xmm1, dword ptr [rax]
      }
      goto LABEL_22;
    }
    if ( v19 == 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm8, cs:__real@40490fdb
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm0, xmm1, xmm0; X
      }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm
      {
        vsubss  xmm1, xmm0, cs:__real@3f800000
        vmulss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm2, cs:__real@3f000000
        vsubss  xmm0, xmm6, xmm3
      }
      goto LABEL_22;
    }
LABEL_20:
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm8, xmm7
      vdivss  xmm1, xmm1, xmm0
    }
    goto LABEL_21;
  }
  __asm
  {
    vmulss  xmm3, xmm7, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm2, xmm8, xmm0
    vcomiss xmm2, cs:__real@3f800000
  }
  if ( ((_BYTE)ViewAngleTransitionDuration - (unsigned __int8)(ViewAngleTransitionDuration >> 31)) & 1 )
  {
    __asm
    {
      vmulss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm0, xmm2
      vmulss  xmm2, xmm1, xmm2
      vaddss  xmm0, xmm2, xmm6
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm1, xmm2, cs:__real@c0000000
      vmulss  xmm0, xmm1, xmm1
      vmulss  xmm1, xmm0, xmm1
      vaddss  xmm2, xmm1, cs:__real@40000000
      vmulss  xmm3, xmm2, xmm3
      vaddss  xmm0, xmm3, xmm6
    }
  }
LABEL_22:
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v69;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
PM_AllowCameraInputForAxis
==============
*/

bool __fastcall PM_AllowCameraInputForAxis(playerState_s *ps, int axis, double delta)
{
  unsigned int flags; 
  bool v13; 
  bool result; 

  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  _RDI = ps;
  __asm { vmovaps xmm7, xmm2 }
  if ( (unsigned int)axis > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 305, ASSERT_TYPE_ASSERT, "(( axis == PITCH ) || ( axis == YAW ))", (const char *)&queryFormat, "( axis == PITCH ) || ( axis == YAW )") )
    __debugbreak();
  __asm { vmovaps xmm2, xmm7; delta }
  if ( !BG_SkydiveAllowCameraInputForAxis(_RDI, axis, *(float *)&_XMM2) )
    goto LABEL_16;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0x10u) )
    goto LABEL_21;
  flags = _RDI->viewAngleState.flags;
  if ( (flags & 4) != 0 )
    goto LABEL_21;
  if ( (flags & 8) != 0 )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm0, xmm0, xmm0
    }
    if ( axis )
    {
      v13 = axis == 0;
      if ( axis != 1 || (v13 = 0, (flags & 2) == 0) )
      {
LABEL_15:
        __asm
        {
          vmulss  xmm0, xmm0, xmm7
          vcomiss xmm0, xmm6
          vmovaps xmm6, [rsp+58h+var_18]
        }
        if ( v13 )
        {
LABEL_16:
          result = 0;
          __asm { vmovaps xmm7, [rsp+58h+var_28] }
          return result;
        }
        goto LABEL_21;
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+234h]; angle2
        vmovss  xmm0, dword ptr [rdi+23Ch]; angle1
      }
    }
    else
    {
      v13 = 0;
      if ( (flags & 1) == 0 )
        goto LABEL_15;
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+230h]
        vmovss  xmm0, dword ptr [rdi+238h]
      }
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    goto LABEL_15;
  }
  if ( !axis )
  {
LABEL_20:
    result = (flags & 1) == 0;
    __asm { vmovaps xmm7, [rsp+58h+var_28] }
    return result;
  }
  if ( axis == 1 )
  {
    flags >>= 1;
    goto LABEL_20;
  }
LABEL_21:
  result = 1;
  __asm { vmovaps xmm7, [rsp+58h+var_28] }
  return result;
}

/*
==============
PM_CalcViewAnglesOverride
==============
*/
void PM_CalcViewAnglesOverride(playerState_s *ps, usercmd_s *cmd, playerViewAngleState_s *viewAngleState, int time)
{
  int flags; 

  flags = viewAngleState->flags;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RDI = ps;
  __asm
  {
    vmovaps [rsp+58h+var_38], xmm8
    vmovss  xmm8, cs:__real@43b40000
    vmovss  xmm7, cs:__real@3f000000
  }
  if ( (viewAngleState->flags & 1) != 0 )
  {
    *(float *)&_XMM0 = GetViewAngleForTime(viewAngleState, time, 0);
    __asm { vmovss  xmm1, dword ptr [rdi+1D8h]; angle2 }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vaddss  xmm1, xmm0, dword ptr [rdi+0B4h]
      vmulss  xmm2, xmm1, cs:__real@43360b61
      vaddss  xmm4, xmm2, xmm7
      vmovaps xmm5, xmm0
      vxorps  xmm3, xmm3, xmm3
      vmovss  xmm1, xmm3, xmm4
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm2, xmm6, xmm1, 1
      vcvttss2si eax, xmm2
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm1, ecx
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm4, xmm1, cs:__real@37800000
      vaddss  xmm2, xmm4, xmm7
      vroundss xmm3, xmm6, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rdi+0B4h], xmm1
      vaddss  xmm0, xmm5, dword ptr [rdi+1D8h]
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vxorps  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm4, xmm7
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm3, xmm6, xmm0, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm8
      vmovss  dword ptr [rdi+1D8h], xmm0
    }
    flags = viewAngleState->flags;
  }
  if ( (flags & 2) != 0 )
  {
    *(float *)&_XMM0 = GetViewAngleForTime(viewAngleState, time, 1);
    __asm { vmovss  xmm1, dword ptr [rdi+1DCh]; angle2 }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vaddss  xmm1, xmm0, dword ptr [rdi+0B8h]
      vmulss  xmm2, xmm1, cs:__real@43360b61
      vaddss  xmm4, xmm2, xmm7
      vmovaps xmm5, xmm0
      vxorps  xmm3, xmm3, xmm3
      vmovss  xmm1, xmm3, xmm4
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm2, xmm6, xmm1, 1
      vcvttss2si eax, xmm2
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm1, ecx
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm4, xmm1, cs:__real@37800000
      vaddss  xmm2, xmm4, xmm7
      vroundss xmm3, xmm6, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rdi+0B8h], xmm1
      vaddss  xmm2, xmm5, dword ptr [rdi+1DCh]
      vmulss  xmm3, xmm2, cs:__real@3b360b61
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm1, xmm3, xmm7
      vmovss  xmm1, xmm0, xmm1
      vroundss xmm2, xmm6, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rdi+1DCh], xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
PM_CalcViewAnglesOverrideActive
==============
*/
void PM_CalcViewAnglesOverrideActive(playerState_s *ps, usercmd_s *cmd, playerViewAngleState_s *viewAngleState, int time)
{
  int flags; 

  flags = viewAngleState->flags;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RBX = ps;
  __asm
  {
    vmovaps [rsp+58h+var_38], xmm8
    vmovss  xmm8, cs:__real@43b40000
    vmovss  xmm7, cs:__real@3f000000
  }
  if ( (viewAngleState->flags & 1) != 0 )
  {
    __asm { vmovss  xmm1, dword ptr [rcx+1D8h]; currentAngle }
    *(float *)&_XMM0 = GetViewAngleFromCurrentAngle(viewAngleState, *(double *)&_XMM1, time, 0);
    __asm { vmovss  xmm1, dword ptr [rbx+1D8h]; angle2 }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vaddss  xmm1, xmm0, dword ptr [rbx+0B4h]
      vmulss  xmm2, xmm1, cs:__real@43360b61
      vaddss  xmm4, xmm2, xmm7
      vmovaps xmm5, xmm0
      vxorps  xmm3, xmm3, xmm3
      vmovss  xmm1, xmm3, xmm4
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm2, xmm6, xmm1, 1
      vcvttss2si eax, xmm2
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm1, ecx
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm4, xmm1, cs:__real@37800000
      vaddss  xmm2, xmm4, xmm7
      vroundss xmm3, xmm6, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rbx+0B4h], xmm1
      vaddss  xmm0, xmm5, dword ptr [rbx+1D8h]
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vxorps  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm4, xmm7
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm3, xmm6, xmm0, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm8
      vmovss  dword ptr [rbx+1D8h], xmm0
    }
    flags = viewAngleState->flags;
  }
  if ( (flags & 2) != 0 )
  {
    __asm { vmovss  xmm1, dword ptr [rbx+1DCh]; currentAngle }
    *(float *)&_XMM0 = GetViewAngleFromCurrentAngle(viewAngleState, *(double *)&_XMM1, time, 1);
    __asm { vmovss  xmm1, dword ptr [rbx+1DCh]; angle2 }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vaddss  xmm1, xmm0, dword ptr [rbx+0B8h]
      vmulss  xmm2, xmm1, cs:__real@43360b61
      vaddss  xmm4, xmm2, xmm7
      vmovaps xmm5, xmm0
      vxorps  xmm3, xmm3, xmm3
      vmovss  xmm1, xmm3, xmm4
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm2, xmm6, xmm1, 1
      vcvttss2si eax, xmm2
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm1, ecx
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm4, xmm1, cs:__real@37800000
      vaddss  xmm2, xmm4, xmm7
      vroundss xmm3, xmm6, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rbx+0B8h], xmm1
      vaddss  xmm2, xmm5, dword ptr [rbx+1DCh]
      vmulss  xmm3, xmm2, cs:__real@3b360b61
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm1, xmm3, xmm7
      vmovss  xmm1, xmm0, xmm1
      vroundss xmm2, xmm6, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rbx+1DCh], xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
PM_EndViewAngleTransition
==============
*/
void PM_EndViewAngleTransition(playerState_s *ps)
{
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x10u);
}

/*
==============
PM_GetViewAngleTransitionDuration
==============
*/
__int64 PM_GetViewAngleTransitionDuration(const playerViewAngleState_s *p_viewAngleState)
{
  if ( !p_viewAngleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 54, ASSERT_TYPE_ASSERT, "(p_viewAngleState)", (const char *)&queryFormat, "p_viewAngleState") )
    __debugbreak();
  return (unsigned int)(p_viewAngleState->endTimeMs - p_viewAngleState->startTimeMs);
}

/*
==============
PM_StartViewAngleTransition
==============
*/
void PM_StartViewAngleTransition(pmove_t *pm, int duration, EViewAngleEaseMode easeInMode, EViewAngleEaseMode eastOutMode, const vec2_t *goalAngles, int flags)
{
  int v12; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 17, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 17, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( duration > 0 )
  {
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&_RBX->otherFlags, ACTIVE, 0x10u);
    __asm { vmovss  xmm5, cs:__real@43360b61 }
    _RBX->viewAngleState.time = pm->cmd.serverTime;
    _RBX->viewAngleState.startTimeMs = pm->cmd.serverTime;
    v12 = duration + pm->cmd.serverTime;
    _RBX->viewAngleState.easeMode = easeInMode;
    _RBX->viewAngleState.endTimeMs = v12;
    _RBX->viewAngleState.flags = flags;
    if ( (flags & 1) != 0 )
    {
      _RBX->viewAngleState.startAngles.v[0] = _RBX->viewangles.v[0];
      __asm
      {
        vmulss  xmm1, xmm5, dword ptr [r8]
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm1, xmm0, xmm3, 1
        vcvttss2si eax, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm1, xmm0, cs:__real@3bb40000
        vmovss  dword ptr [rbx+238h], xmm1
      }
    }
    if ( (flags & 2) != 0 )
    {
      _RBX->viewAngleState.startAngles.v[1] = _RBX->viewangles.v[1];
      __asm
      {
        vmulss  xmm1, xmm5, dword ptr [r8+4]
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm1, xmm0, xmm3, 1
        vcvttss2si eax, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm1, xmm0, cs:__real@3bb40000
        vmovss  dword ptr [rbx+23Ch], xmm1
      }
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 19, ASSERT_TYPE_ASSERT, "(duration > 0)", (const char *)&queryFormat, "duration > 0") )
  {
    __debugbreak();
  }
}

/*
==============
PM_UpdateViewAnglesOverride
==============
*/
void PM_UpdateViewAnglesOverride(pmove_t *pm, usercmd_s *cmd)
{
  const dvar_t *v7; 
  const dvar_t *v8; 
  char v9; 
  __int16 groundRefEnt; 
  int flags; 
  int v12; 
  int ViewAngleTransitionDuration; 
  bool v14; 
  char v20; 
  char v21; 
  char v27; 
  char v28; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 263, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 263, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (_RDI->viewAngleState.flags & 3) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 266, ASSERT_TYPE_ASSERT, "(viewAngleState->flags & ( (1<<0)|(1<<1) ))", (const char *)&queryFormat, "viewAngleState->flags & ( VAF_PITCH|VAF_YAW )") )
    __debugbreak();
  v7 = DCONST_DVARINT_ViewAngleOverride_cameraInputThreshold;
  if ( !DCONST_DVARINT_ViewAngleOverride_cameraInputThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ViewAngleOverride_cameraInputThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( abs8(cmd->yawmove) > v7->current.integer )
    goto LABEL_19;
  v8 = DCONST_DVARINT_ViewAngleOverride_cameraInputThreshold;
  if ( !DCONST_DVARINT_ViewAngleOverride_cameraInputThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ViewAngleOverride_cameraInputThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( abs8(cmd->pitchmove) > v8->current.integer )
LABEL_19:
    v9 = 1;
  else
    v9 = 0;
  if ( !_RDI )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x2Au) )
  {
    groundRefEnt = _RDI->groundRefEnt;
    if ( groundRefEnt == 2047 || !groundRefEnt )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
        __debugbreak();
      if ( !BG_IsPlayerZeroGWalking(_RDI) )
        goto LABEL_51;
    }
  }
  flags = _RDI->viewAngleState.flags;
  if ( (flags & 4) != 0 )
  {
    if ( v9 )
      goto LABEL_51;
  }
  v12 = cmd->serverTime - _RDI->viewAngleState.startTimeMs;
  if ( v12 > _RDI->viewAngleState.endTimeMs - _RDI->viewAngleState.startTimeMs )
  {
    ViewAngleTransitionDuration = PM_GetViewAngleTransitionDuration(&_RDI->viewAngleState);
    flags = _RDI->viewAngleState.flags;
    v12 = ViewAngleTransitionDuration;
  }
  if ( (flags & 8) != 0 )
  {
    v14 = 0;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    if ( (flags & 2) != 0 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+234h]; angle2
        vmovss  xmm0, dword ptr [rdi+23Ch]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+1DCh]; angle2
        vmovaps xmm6, xmm0
        vmovss  xmm0, dword ptr [rdi+23Ch]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm { vcomiss xmm6, xmm7 }
      if ( v20 | v21 )
      {
        __asm { vcomiss xmm0, xmm7 }
        v14 = !(v20 | v21);
      }
      else
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v20 )
          v14 = 1;
      }
    }
    if ( (_RDI->viewAngleState.flags & 1) != 0 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+230h]; angle2
        vmovss  xmm0, dword ptr [rdi+238h]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+1D8h]; angle2
        vmovaps xmm6, xmm0
        vmovss  xmm0, dword ptr [rdi+238h]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm { vcomiss xmm6, xmm7 }
      if ( v27 | v28 )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( !(v27 | v28) )
          goto LABEL_51;
      }
      else
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v27 )
          goto LABEL_51;
      }
    }
    if ( !v14 )
    {
      PM_CalcViewAnglesOverrideActive(_RDI, cmd, &_RDI->viewAngleState, v12);
      goto LABEL_50;
    }
LABEL_51:
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&_RDI->otherFlags, ACTIVE, 0x10u);
    goto LABEL_52;
  }
  PM_CalcViewAnglesOverride(_RDI, cmd, &_RDI->viewAngleState, v12);
LABEL_50:
  if ( v12 == PM_GetViewAngleTransitionDuration(&_RDI->viewAngleState) )
    goto LABEL_51;
LABEL_52:
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_48]
    vmovaps xmm6, [rsp+88h+var_38]
  }
}

