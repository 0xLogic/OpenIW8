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

float __fastcall LUI_AutoScroll_ComputeLineXPosition(double x, float textWidth, float boxWidth, LUIHorizontalAlignment alignment, AutoScrollStyle *autoScrollStyle)
{
  __int128 v8; 
  AutoScrollState AutoScrollState; 
  int AutoScrollDuration; 
  unsigned __int16 AutoScrollAnimationDuration; 
  double v15; 
  float v16; 

  _XMM6 = *(_OWORD *)&x;
  if ( !autoScrollStyle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 181, ASSERT_TYPE_ASSERT, "(autoScrollStyle)", (const char *)&queryFormat, "autoScrollStyle") )
    __debugbreak();
  if ( alignment == RIGHT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 182, ASSERT_TYPE_ASSERT, "(alignment != LUIHorizontalAlignment::CENTER)", (const char *)&queryFormat, "alignment != LUIHorizontalAlignment::CENTER") )
    __debugbreak();
  v8 = *(_OWORD *)&x;
  *(float *)&v8 = (float)(*(float *)&x + boxWidth) - textWidth;
  _XMM7 = v8;
  AutoScrollState = LUI_AutoScroll_GetAutoScrollState(autoScrollStyle, 1, textWidth);
  if ( AutoScrollState )
  {
    if ( AutoScrollState == TRIANGLE )
    {
      AutoScrollDuration = LUI_AutoScroll_GetAutoScrollDuration(autoScrollStyle, 1, textWidth);
      AutoScrollAnimationDuration = LUI_AutoScroll_GetAutoScrollAnimationDuration(autoScrollStyle, textWidth);
      v15 = I_fclamp((float)(autoScrollStyle->elapsedTime % AutoScrollDuration - autoScrollStyle->options.startupDelay) / (float)AutoScrollAnimationDuration, 0.0, 1.0);
      v16 = *(float *)&v15;
      if ( alignment == 2 )
        v16 = 1.0 - *(float *)&v15;
      *(float *)&_XMM0 = (float)((float)(1.0 - v16) * *(float *)&_XMM6) + (float)(v16 * *(float *)&v8);
    }
    else if ( (unsigned int)(AutoScrollState - 2) > 1 )
    {
      LODWORD(_XMM0) = 0;
    }
    else
    {
      _XMM0 = (unsigned int)alignment;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm7, xmm6, xmm2
      }
    }
  }
  else
  {
    _XMM0 = (unsigned int)alignment;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm6, xmm7, xmm2
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
LUI_AutoScroll_ComputeLineYOffset
==============
*/
float LUI_AutoScroll_ComputeLineYOffset(float lineHeight, int numLines, AutoScrollStyle *autoScrollStyle, LUIVerticalAlignment verticalAlignment)
{
  int maxVisibleLines; 
  float v9; 
  float v10; 
  float v11; 
  AutoScrollState AutoScrollState; 
  int v13; 
  unsigned __int16 AutoScrollAnimationDuration; 
  int v15; 
  float v16; 
  int v17; 
  double v18; 

  if ( !autoScrollStyle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 217, ASSERT_TYPE_ASSERT, "(autoScrollStyle)", (const char *)&queryFormat, "autoScrollStyle") )
    __debugbreak();
  if ( autoScrollStyle->options.direction[0] != 2 )
    return 0.0;
  maxVisibleLines = autoScrollStyle->options.maxVisibleLines;
  if ( numLines <= maxVisibleLines )
    return 0.0;
  v9 = (float)numLines * lineHeight;
  v10 = 0.0;
  if ( verticalAlignment == CENTER )
  {
    v11 = (float)(v9 - (float)((float)maxVisibleLines * lineHeight)) * 0.5;
  }
  else if ( verticalAlignment == BOTTOM )
  {
    v11 = v9 - (float)((float)maxVisibleLines * lineHeight);
  }
  else
  {
    v11 = 0.0;
  }
  AutoScrollState = LUI_AutoScroll_GetAutoScrollState(autoScrollStyle, numLines, 0.0);
  if ( AutoScrollState )
  {
    if ( AutoScrollState == TRIANGLE )
    {
      v13 = autoScrollStyle->elapsedTime % LUI_AutoScroll_GetAutoScrollDuration(autoScrollStyle, numLines, 0.0) - autoScrollStyle->options.startupDelay;
      AutoScrollAnimationDuration = LUI_AutoScroll_GetAutoScrollAnimationDuration(autoScrollStyle, 0.0);
      v15 = AutoScrollAnimationDuration + autoScrollStyle->options.lineHoldTime;
      v16 = (float)(v13 % v15) / (float)AutoScrollAnimationDuration;
      v17 = v13 / v15;
      v18 = I_fclamp(v16, 0.0, 1.0);
      LODWORD(v10) = COERCE_UNSIGNED_INT((float)(*(float *)&v18 + (float)v17) * lineHeight) ^ _xmm;
    }
    else
    {
      v10 = (float)(autoScrollStyle->options.maxVisibleLines - numLines) * lineHeight;
    }
  }
  return v10 + v11;
}

/*
==============
LUI_AutoScroll_GetAutoScrollAnimationDuration
==============
*/
__int64 LUI_AutoScroll_GetAutoScrollAnimationDuration(AutoScrollStyle *autoScrollStyle, float textWidth)
{
  __int64 result; 

  if ( autoScrollStyle->options.direction[0] == 1 )
  {
    result = autoScrollStyle->options.animationDuration;
    if ( !(_WORD)result )
      return 1000 * (unsigned int)(unsigned __int16)(int)textWidth / autoScrollStyle->options.animationSpeed;
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
__int64 LUI_AutoScroll_GetAutoScrollDuration(AutoScrollStyle *autoScrollStyle, int numLines, float textWidth)
{
  unsigned __int16 AutoScrollAnimationDuration; 
  unsigned __int16 AutoScrollTransitionDuration; 
  int v8; 

  AutoScrollAnimationDuration = LUI_AutoScroll_GetAutoScrollAnimationDuration(autoScrollStyle, textWidth);
  AutoScrollTransitionDuration = LUI_AutoScroll_GetAutoScrollTransitionDuration(autoScrollStyle);
  if ( autoScrollStyle->options.direction[0] == 1 )
    return AutoScrollAnimationDuration + AutoScrollTransitionDuration + autoScrollStyle->options.startupDelay + (unsigned int)autoScrollStyle->options.endDelay;
  if ( autoScrollStyle->options.direction[0] == 2 )
  {
    v8 = AutoScrollTransitionDuration + autoScrollStyle->options.startupDelay + autoScrollStyle->options.endDelay;
    if ( numLines <= autoScrollStyle->options.maxVisibleLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 77, ASSERT_TYPE_ASSERT, "(numLines > autoScrollStyle->options.maxVisibleLines)", (const char *)&queryFormat, "numLines > autoScrollStyle->options.maxVisibleLines") )
      __debugbreak();
    return v8 + (numLines - autoScrollStyle->options.maxVisibleLines) * (AutoScrollAnimationDuration + (unsigned int)autoScrollStyle->options.lineHoldTime);
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
__int64 LUI_AutoScroll_GetAutoScrollState(AutoScrollStyle *autoScrollStyle, int numLines, float textWidth)
{
  int AutoScrollDuration; 
  int v5; 

  AutoScrollDuration = LUI_AutoScroll_GetAutoScrollDuration(autoScrollStyle, numLines, textWidth);
  if ( AutoScrollDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_text_autoscroll.cpp", 91, ASSERT_TYPE_ASSERT, "(cycleDuration > 0)", (const char *)&queryFormat, "cycleDuration > 0") )
    __debugbreak();
  v5 = autoScrollStyle->elapsedTime % AutoScrollDuration;
  if ( v5 <= autoScrollStyle->options.startupDelay )
    return 0i64;
  if ( v5 > AutoScrollDuration - autoScrollStyle->options.endDelay - LUI_AutoScroll_GetAutoScrollTransitionDuration(autoScrollStyle) )
    return (unsigned int)(v5 > (unsigned __int16)LUI_AutoScroll_GetAutoScrollAnimationDuration(autoScrollStyle, textWidth) + autoScrollStyle->options.startupDelay + autoScrollStyle->options.endDelay) + 2;
  return 1i64;
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
void LUI_AutoScroll_GetLoopTransitionStep(AutoScrollStyle *autoScrollStyle, int numLines, float textWidth, float *autoScrollTransitionInStep, float *autoScrollTransitionOutStep)
{
  int AutoScrollDuration; 
  int AutoScrollTransitionDuration; 
  float v10; 
  float loopTransitionOutDuration; 
  float v12; 
  double v13; 
  float v14; 
  double v15; 
  double v16; 

  if ( autoScrollStyle && autoScrollStyle->options.direction[0] && (unsigned int)LUI_AutoScroll_GetAutoScrollState(autoScrollStyle, numLines, textWidth) == 3 )
  {
    AutoScrollDuration = LUI_AutoScroll_GetAutoScrollDuration(autoScrollStyle, numLines, textWidth);
    AutoScrollTransitionDuration = LUI_AutoScroll_GetAutoScrollTransitionDuration(autoScrollStyle);
    v10 = (float)(AutoScrollTransitionDuration + autoScrollStyle->elapsedTime % AutoScrollDuration - AutoScrollDuration);
    if ( autoScrollStyle->options.direction[0] != 1 || autoScrollStyle->options.loopTransitionCrossDuration )
    {
      v16 = I_fclamp(v10 / (float)AutoScrollTransitionDuration, 0.0, 1.0);
      v12 = *(float *)&v16;
      v14 = 1.0 - *(float *)&v16;
    }
    else
    {
      loopTransitionOutDuration = (float)autoScrollStyle->options.loopTransitionOutDuration;
      if ( v10 > loopTransitionOutDuration )
      {
        v14 = 0.0;
        v15 = I_fclamp((float)(v10 - loopTransitionOutDuration) / (float)autoScrollStyle->options.loopTransitionInDuration, 0.0, 1.0);
        v12 = *(float *)&v15;
      }
      else
      {
        v12 = 0.0;
        v13 = I_fclamp(v10 / loopTransitionOutDuration, 0.0, 1.0);
        v14 = 1.0 - *(float *)&v13;
      }
    }
  }
  else
  {
    v14 = FLOAT_1_0;
    v12 = 0.0;
  }
  *autoScrollTransitionInStep = v12;
  *autoScrollTransitionOutStep = v14;
}

