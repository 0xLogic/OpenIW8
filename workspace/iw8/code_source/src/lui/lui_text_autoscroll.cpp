/*
==============
LUI_AutoScroll_ComputeLineXPosition
==============
*/

double __fastcall LUI_AutoScroll_ComputeLineXPosition(float x, float textWidth, float boxWidth, LUIHorizontalAlignment alignment, AutoScrollStyle *autoScrollStyle)
{
  double result; 

  *(float *)&result = ?LUI_AutoScroll_ComputeLineXPosition@@YAMMMMW4LUIHorizontalAlignment@@PEAUAutoScrollStyle@@@Z(x, textWidth, boxWidth, alignment, autoScrollStyle);
  return result;
}

/*
==============
LUI_AutoScroll_ComputeLineYOffset
==============
*/

double __fastcall LUI_AutoScroll_ComputeLineYOffset(float lineHeight, int numLines, AutoScrollStyle *autoScrollStyle, LUIVerticalAlignment verticalAlignment)
{
  double result; 

  *(float *)&result = ?LUI_AutoScroll_ComputeLineYOffset@@YAMMHPEAUAutoScrollStyle@@W4LUIVerticalAlignment@@@Z(lineHeight, numLines, autoScrollStyle, verticalAlignment);
  return result;
}

/*
==============
LUI_AutoScroll_GetLoopTransitionStep
==============
*/

void __fastcall LUI_AutoScroll_GetLoopTransitionStep(AutoScrollStyle *autoScrollStyle, int numLines, float textWidth, float *autoScrollTransitionInStep, float *autoScrollTransitionOutStep)
{
  ?LUI_AutoScroll_GetLoopTransitionStep@@YAXPEAUAutoScrollStyle@@HMPEAM1@Z(autoScrollStyle, numLines, textWidth, autoScrollTransitionInStep, autoScrollTransitionOutStep);
}

/*
==============
LUI_AutoScroll_ComputeLineXPosition
==============
*/

float __fastcall LUI_AutoScroll_ComputeLineXPosition(double x, double textWidth, double boxWidth, LUIHorizontalAlignment alignment, AutoScrollStyle *autoScrollStyle)
{
  AutoScrollState AutoScrollState; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm0
  }
  if ( !autoScrollStyle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 181, ASSERT_TYPE_ASSERT, "(autoScrollStyle)", (const char *)&queryFormat, "autoScrollStyle") )
    __debugbreak();
  if ( alignment == RIGHT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 182, ASSERT_TYPE_ASSERT, "(alignment != LUIHorizontalAlignment::CENTER)", (const char *)&queryFormat, "alignment != LUIHorizontalAlignment::CENTER") )
    __debugbreak();
  __asm
  {
    vaddss  xmm0, xmm6, xmm7
    vmovaps xmm2, xmm8; textWidth
    vsubss  xmm7, xmm0, xmm8
  }
  AutoScrollState = LUI_AutoScroll_GetAutoScrollState(autoScrollStyle, 1, *(float *)&_XMM2);
  if ( AutoScrollState )
  {
    if ( AutoScrollState == TRIANGLE )
    {
      __asm { vmovaps xmm2, xmm8; textWidth }
      LUI_AutoScroll_GetAutoScrollDuration(autoScrollStyle, 1, *(float *)&_XMM2);
      __asm { vmovaps xmm1, xmm8; textWidth }
      LUI_AutoScroll_GetAutoScrollAnimationDuration(autoScrollStyle, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, edx
        vcvtsi2ss xmm0, xmm0, r8d
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm8; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm1, xmm0 }
      if ( alignment == 2 )
        __asm { vsubss  xmm1, xmm8, xmm0 }
      __asm
      {
        vsubss  xmm0, xmm8, xmm1
        vmulss  xmm2, xmm0, xmm6
        vmulss  xmm1, xmm1, xmm7
        vaddss  xmm0, xmm2, xmm1
      }
    }
    else if ( (unsigned int)(AutoScrollState - 2) > 1 )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    else
    {
      _EAX = 2;
      __asm { vmovd   xmm1, eax }
      _EAX = alignment;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm7, xmm6, xmm2
      }
    }
  }
  else
  {
    _EAX = 2;
    __asm { vmovd   xmm1, eax }
    _EAX = alignment;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm6, xmm7, xmm2
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
LUI_AutoScroll_ComputeLineYOffset
==============
*/

float __fastcall LUI_AutoScroll_ComputeLineYOffset(double lineHeight, int numLines, AutoScrollStyle *autoScrollStyle, LUIVerticalAlignment verticalAlignment)
{
  AutoScrollState AutoScrollState; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm0
  }
  if ( !autoScrollStyle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 217, ASSERT_TYPE_ASSERT, "(autoScrollStyle)", (const char *)&queryFormat, "autoScrollStyle") )
    __debugbreak();
  if ( autoScrollStyle->options.direction[0] == 2 && numLines > autoScrollStyle->options.maxVisibleLines )
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vxorps  xmm0, xmm0, xmm0
      vmovaps [rsp+68h+var_38], xmm8
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm2, xmm0, xmm7
      vxorps  xmm6, xmm6, xmm6
    }
    if ( verticalAlignment == CENTER )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vmulss  xmm1, xmm0, xmm7
        vsubss  xmm2, xmm2, xmm1
        vmulss  xmm8, xmm2, cs:__real@3f000000
      }
    }
    else if ( verticalAlignment == BOTTOM )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vmulss  xmm1, xmm0, xmm7
        vsubss  xmm8, xmm2, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm8, xmm8, xmm8 }
    }
    __asm { vxorps  xmm2, xmm2, xmm2; textWidth }
    AutoScrollState = LUI_AutoScroll_GetAutoScrollState(autoScrollStyle, numLines, *(float *)&_XMM2);
    if ( AutoScrollState )
    {
      if ( AutoScrollState == TRIANGLE )
      {
        __asm { vxorps  xmm2, xmm2, xmm2; textWidth }
        LUI_AutoScroll_GetAutoScrollDuration(autoScrollStyle, numLines, *(float *)&_XMM2);
        __asm { vxorps  xmm1, xmm1, xmm1; textWidth }
        LUI_AutoScroll_GetAutoScrollAnimationDuration(autoScrollStyle, *(float *)&_XMM1);
        __asm
        {
          vxorps  xmm2, xmm2, xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm2, xmm2, edx
          vcvtsi2ss xmm0, xmm0, r8d
          vdivss  xmm0, xmm2, xmm0; val
          vmovss  xmm2, cs:__real@3f800000; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ebx
          vaddss  xmm0, xmm0, xmm1
          vmulss  xmm2, xmm0, xmm7
          vxorps  xmm6, xmm2, cs:__xmm@80000000800000008000000080000000
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm6, xmm0, xmm7
        }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm6, xmm8
      vmovaps xmm8, [rsp+68h+var_38]
      vmovaps xmm6, [rsp+68h+var_18]
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovaps xmm7, [rsp+68h+var_28] }
  return *(float *)&_XMM0;
}

/*
==============
LUI_AutoScroll_GetAutoScrollAnimationDuration
==============
*/

__int64 __fastcall LUI_AutoScroll_GetAutoScrollAnimationDuration(AutoScrollStyle *autoScrollStyle, double textWidth)
{
  __int64 result; 

  if ( autoScrollStyle->options.direction[0] == 1 )
  {
    result = autoScrollStyle->options.animationDuration;
    if ( !(_WORD)result )
    {
      __asm { vcvttss2si eax, xmm1 }
      return 1000 * (unsigned int)(unsigned __int16)_EAX / autoScrollStyle->options.animationSpeed;
    }
  }
  else if ( autoScrollStyle->options.direction[0] == 2 )
  {
    return autoScrollStyle->options.animationDuration;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 29, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected scroll direction") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
LUI_AutoScroll_GetAutoScrollDuration
==============
*/

__int64 __fastcall LUI_AutoScroll_GetAutoScrollDuration(AutoScrollStyle *autoScrollStyle, int numLines, double textWidth)
{
  unsigned __int16 AutoScrollAnimationDuration; 
  unsigned __int16 AutoScrollTransitionDuration; 
  int v9; 

  __asm { vmovaps xmm1, xmm2; textWidth }
  AutoScrollAnimationDuration = LUI_AutoScroll_GetAutoScrollAnimationDuration(autoScrollStyle, *(double *)&_XMM1);
  AutoScrollTransitionDuration = LUI_AutoScroll_GetAutoScrollTransitionDuration(autoScrollStyle);
  if ( autoScrollStyle->options.direction[0] == 1 )
    return AutoScrollAnimationDuration + AutoScrollTransitionDuration + autoScrollStyle->options.startupDelay + (unsigned int)autoScrollStyle->options.endDelay;
  if ( autoScrollStyle->options.direction[0] == 2 )
  {
    v9 = AutoScrollTransitionDuration + autoScrollStyle->options.startupDelay + autoScrollStyle->options.endDelay;
    if ( numLines <= autoScrollStyle->options.maxVisibleLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 77, ASSERT_TYPE_ASSERT, "(numLines > autoScrollStyle->options.maxVisibleLines)", (const char *)&queryFormat, "numLines > autoScrollStyle->options.maxVisibleLines") )
      __debugbreak();
    return v9 + (numLines - autoScrollStyle->options.maxVisibleLines) * (AutoScrollAnimationDuration + (unsigned int)autoScrollStyle->options.lineHoldTime);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 82, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected scroll direction") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
LUI_AutoScroll_GetAutoScrollState
==============
*/

__int64 __fastcall LUI_AutoScroll_GetAutoScrollState(AutoScrollStyle *autoScrollStyle, int numLines, double textWidth)
{
  int AutoScrollDuration; 
  int v7; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  AutoScrollDuration = LUI_AutoScroll_GetAutoScrollDuration(autoScrollStyle, numLines, textWidth);
  if ( AutoScrollDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 91, ASSERT_TYPE_ASSERT, "(cycleDuration > 0)", (const char *)&queryFormat, "cycleDuration > 0") )
    __debugbreak();
  v7 = autoScrollStyle->elapsedTime % AutoScrollDuration;
  if ( v7 > autoScrollStyle->options.startupDelay )
  {
    if ( v7 > AutoScrollDuration - autoScrollStyle->options.endDelay - LUI_AutoScroll_GetAutoScrollTransitionDuration(autoScrollStyle) )
    {
      __asm { vmovaps xmm1, xmm6; textWidth }
      result = (unsigned int)(v7 > (unsigned __int16)LUI_AutoScroll_GetAutoScrollAnimationDuration(autoScrollStyle, *(double *)&_XMM1) + autoScrollStyle->options.startupDelay + autoScrollStyle->options.endDelay) + 2;
    }
    else
    {
      result = 1i64;
    }
  }
  else
  {
    result = 0i64;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
LUI_AutoScroll_GetAutoScrollTransitionDuration
==============
*/
unsigned __int16 LUI_AutoScroll_GetAutoScrollTransitionDuration(AutoScrollStyle *autoScrollStyle)
{
  unsigned __int16 result; 

  if ( autoScrollStyle->options.direction[0] == 1 )
  {
    result = autoScrollStyle->options.loopTransitionCrossDuration;
    if ( !result )
      return autoScrollStyle->options.loopTransitionInDuration + autoScrollStyle->options.loopTransitionOutDuration;
  }
  else if ( autoScrollStyle->options.direction[0] == 2 )
  {
    return autoScrollStyle->options.loopTransitionCrossDuration;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 50, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected scroll direction") )
      __debugbreak();
    return 0;
  }
  return result;
}

/*
==============
LUI_AutoScroll_GetLoopTransitionStep
==============
*/

void __fastcall LUI_AutoScroll_GetLoopTransitionStep(AutoScrollStyle *autoScrollStyle, int numLines, double textWidth, float *autoScrollTransitionInStep, float *autoScrollTransitionOutStep)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = autoScrollTransitionInStep;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm6, xmm2
  }
  if ( autoScrollStyle && autoScrollStyle->options.direction[0] && (unsigned int)LUI_AutoScroll_GetAutoScrollState(autoScrollStyle, numLines, textWidth) == 3 )
  {
    __asm { vmovaps xmm2, xmm6; textWidth }
    LUI_AutoScroll_GetAutoScrollDuration(autoScrollStyle, numLines, *(double *)&_XMM2);
    LUI_AutoScroll_GetAutoScrollTransitionDuration(autoScrollStyle);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edx
    }
    if ( autoScrollStyle->options.direction[0] != 1 || autoScrollStyle->options.loopTransitionCrossDuration )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm6; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm7, xmm0
        vsubss  xmm6, xmm6, xmm0
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcomiss xmm1, xmm0
      }
      if ( autoScrollStyle->options.loopTransitionCrossDuration )
      {
        __asm
        {
          vmovss  xmm2, cs:__real@3f800000; max
          vsubss  xmm1, xmm1, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm0, xmm1, xmm0; val
          vxorps  xmm1, xmm1, xmm1; min
          vxorps  xmm6, xmm6, xmm6
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm7, xmm0 }
      }
      else
      {
        __asm
        {
          vmovss  xmm6, cs:__real@3f800000
          vdivss  xmm0, xmm1, xmm0; val
          vmovaps xmm2, xmm6; max
          vxorps  xmm1, xmm1, xmm1; min
          vxorps  xmm7, xmm7, xmm7
        }
        I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vsubss  xmm6, xmm6, xmm0 }
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm7, xmm7, xmm7
    }
  }
  _RAX = autoScrollTransitionOutStep;
  __asm
  {
    vmovss  dword ptr [rsi], xmm7
    vmovss  dword ptr [rax], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
}

