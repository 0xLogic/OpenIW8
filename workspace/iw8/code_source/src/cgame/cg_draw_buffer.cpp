/*
==============
CG_SetDebugBufferBorderColor
==============
*/

void __fastcall CG_SetDebugBufferBorderColor(DebugBufferGraph *debugBufferGraph, unsigned __int8 r, unsigned __int8 g, unsigned __int8 b, unsigned __int8 a)
{
  ?CG_SetDebugBufferBorderColor@@YAXPEAUDebugBufferGraph@@EEEE@Z(debugBufferGraph, r, g, b, a);
}

/*
==============
CG_SetDebugBufferGraphColor
==============
*/

void __fastcall CG_SetDebugBufferGraphColor(DebugBufferGraph *debugBufferGraph, unsigned __int8 r, unsigned __int8 g, unsigned __int8 b, unsigned __int8 a)
{
  ?CG_SetDebugBufferGraphColor@@YAXPEAUDebugBufferGraph@@EEEE@Z(debugBufferGraph, r, g, b, a);
}

/*
==============
CG_SetDebugBufferBounds
==============
*/

void __fastcall CG_SetDebugBufferBounds(DebugBufferGraph *debugBufferGraph, const vec2_t *origin, int width, int height)
{
  ?CG_SetDebugBufferBounds@@YAXPEAUDebugBufferGraph@@AEBTvec2_t@@HH@Z(debugBufferGraph, origin, width, height);
}

/*
==============
CG_SetDebugBufferLabel
==============
*/

void __fastcall CG_SetDebugBufferLabel(DebugBufferGraph *debugBufferGraph, const char *label)
{
  ?CG_SetDebugBufferLabel@@YAXPEAUDebugBufferGraph@@PEBD@Z(debugBufferGraph, label);
}

/*
==============
CG_SetDebugBufferLabelPosition
==============
*/

void __fastcall CG_SetDebugBufferLabelPosition(DebugBufferGraph *debugBufferGraph, const vec2_t *pos)
{
  ?CG_SetDebugBufferLabelPosition@@YAXPEAUDebugBufferGraph@@AEBTvec2_t@@@Z(debugBufferGraph, pos);
}

/*
==============
CG_InitDebugBufferData
==============
*/

void __fastcall CG_InitDebugBufferData(DebugBufferGraph *debugBufferGraph, const vec2_t *origin, int width, int height, const char *label, int dataSize, bool drawBorder, float duration)
{
  ?CG_InitDebugBufferData@@YAXPEAUDebugBufferGraph@@AEBTvec2_t@@HHPEBDH_NM@Z(debugBufferGraph, origin, width, height, label, dataSize, drawBorder, duration);
}

/*
==============
CG_AddDebugBufferDataAndColor
==============
*/

void __fastcall CG_AddDebugBufferDataAndColor(DebugBufferGraph *debugBufferGraph, float data, GfxColor color, float dTime)
{
  ?CG_AddDebugBufferDataAndColor@@YAXPEAUDebugBufferGraph@@MTGfxColor@@M@Z(debugBufferGraph, data, color, dTime);
}

/*
==============
CG_AddDebugBufferData
==============
*/

void __fastcall CG_AddDebugBufferData(DebugBufferGraph *debugBufferGraph, float data, float dTime)
{
  ?CG_AddDebugBufferData@@YAXPEAUDebugBufferGraph@@MM@Z(debugBufferGraph, data, dTime);
}

/*
==============
CG_ClearDebugBufferData
==============
*/

void __fastcall CG_ClearDebugBufferData(DebugBufferGraph *debugBufferGraph, bool initBuffer, float initValue, float initDTime)
{
  ?CG_ClearDebugBufferData@@YAXPEAUDebugBufferGraph@@_NMM@Z(debugBufferGraph, initBuffer, initValue, initDTime);
}

/*
==============
CG_SetDebugBufferDrawRMS
==============
*/

void __fastcall CG_SetDebugBufferDrawRMS(DebugBufferGraph *debugBufferGraph, bool val)
{
  ?CG_SetDebugBufferDrawRMS@@YAXPEAUDebugBufferGraph@@_N@Z(debugBufferGraph, val);
}

/*
==============
CG_DebugBufferDraw
==============
*/

void __fastcall CG_DebugBufferDraw(DebugBufferGraph *debugBufferGraph)
{
  ?CG_DebugBufferDraw@@YAXPEAUDebugBufferGraph@@@Z(debugBufferGraph);
}

/*
==============
CG_AddDebugBufferRandomWalkData
==============
*/

void __fastcall CG_AddDebugBufferRandomWalkData(DebugBufferGraph *debugBufferGraph, float scale, float dTime)
{
  ?CG_AddDebugBufferRandomWalkData@@YAXPEAUDebugBufferGraph@@MM@Z(debugBufferGraph, scale, dTime);
}

/*
==============
G_GetDebugBufferPeak
==============
*/

double __fastcall G_GetDebugBufferPeak(DebugBufferGraph *debugBufferGraph)
{
  double result; 

  *(float *)&result = ?G_GetDebugBufferPeak@@YAMPEAUDebugBufferGraph@@@Z(debugBufferGraph);
  return result;
}

/*
==============
CG_AddDebugBufferData
==============
*/

void __fastcall CG_AddDebugBufferData(DebugBufferGraph *debugBufferGraph, double data, double dTime)
{
  int v15; 
  __int64 v16; 
  double v17; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = debugBufferGraph;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 104, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  if ( !_RBX->dataInfo.normalizeData )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
      vcomiss xmm6, cs:__real@3f800000
    }
    if ( _RBX->dataInfo.normalizeData )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+68h+var_40], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 107, ASSERT_TYPE_ASSERT, "( ( data >= 0.0f && data <= 1.0f ) )", "( data ) = %g", v17) )
        __debugbreak();
    }
  }
  if ( _RBX->dataInfo.currentIndex >= (unsigned int)_RBX->dataInfo.dataSize )
  {
    LODWORD(v16) = _RBX->dataInfo.currentIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 109, ASSERT_TYPE_ASSERT, "(unsigned)( debugBufferGraph->dataInfo.currentIndex ) < (unsigned)( debugBufferGraph->dataInfo.dataSize )", "debugBufferGraph->dataInfo.currentIndex doesn't index debugBufferGraph->dataInfo.dataSize\n\t%i not in [0, %i)", v16, _RBX->dataInfo.dataSize) )
      __debugbreak();
  }
  _RAX = _RBX->dataInfo.currentIndex;
  __asm { vmovss  dword ptr [rbx+rax*4], xmm6 }
  _RAX = _RBX->dataInfo.currentIndex;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rbx+rax*4+7D0h], xmm7
    vmovaps xmm7, [rsp+68h+var_28]
  }
  v15 = (_RBX->dataInfo.currentIndex + 1) % _RBX->dataInfo.dataSize;
  ++_RBX->dataInfo.numPointsAdded;
  _RBX->dataInfo.currentIndex = v15;
}

/*
==============
CG_AddDebugBufferDataAndColor
==============
*/

void __fastcall CG_AddDebugBufferDataAndColor(DebugBufferGraph *debugBufferGraph, double data, GfxColor color, double dTime)
{
  int v17; 
  __int64 v18; 
  double v19; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RDI = debugBufferGraph;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm1
  }
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 120, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  if ( !_RDI->dataInfo.normalizeData )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
      vcomiss xmm6, cs:__real@3f800000
    }
    if ( _RDI->dataInfo.normalizeData )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+68h+var_40], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 123, ASSERT_TYPE_ASSERT, "( ( data >= 0.0f && data <= 1.0f ) )", "( data ) = %g", v19) )
        __debugbreak();
    }
  }
  if ( _RDI->dataInfo.currentIndex >= (unsigned int)_RDI->dataInfo.dataSize )
  {
    LODWORD(v18) = _RDI->dataInfo.currentIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( debugBufferGraph->dataInfo.currentIndex ) < (unsigned)( debugBufferGraph->dataInfo.dataSize )", "debugBufferGraph->dataInfo.currentIndex doesn't index debugBufferGraph->dataInfo.dataSize\n\t%i not in [0, %i)", v18, _RDI->dataInfo.dataSize) )
      __debugbreak();
  }
  _RAX = _RDI->dataInfo.currentIndex;
  __asm { vmovss  dword ptr [rdi+rax*4], xmm6 }
  _RAX = _RDI->dataInfo.currentIndex;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rdi+rax*4+7D0h], xmm7
    vmovaps xmm7, [rsp+68h+var_28]
  }
  v17 = (_RDI->dataInfo.currentIndex + 1) % _RDI->dataInfo.dataSize;
  _RDI->dataInfo.currentIndex = v17;
  _RDI->dataInfo.pointColor[v17] = color;
  ++_RDI->dataInfo.numPointsAdded;
}

/*
==============
CG_AddDebugBufferRandomWalkData
==============
*/

void __fastcall CG_AddDebugBufferRandomWalkData(DebugBufferGraph *debugBufferGraph, double scale, double dTime)
{
  bool v11; 
  bool v12; 
  bool v21; 
  bool v22; 
  int v34; 
  __int64 v35; 
  double v36; 
  double v37; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RBX = debugBufferGraph;
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps xmm9, xmm2
    vmovaps xmm6, xmm1
  }
  v11 = debugBufferGraph == NULL;
  if ( !debugBufferGraph )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 158, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph");
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
    vcomiss xmm6, xmm7
  }
  if ( !v11 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+88h+var_60], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 159, ASSERT_TYPE_ASSERT, "( ( scale >= 0.0f && scale <= 1.0f ) )", "( scale ) = %g", v36) )
      __debugbreak();
  }
  if ( _RBX->dataInfo.numPointsAdded )
  {
    rand();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@38800100
    }
    LODWORD(_RAX) = _RBX->dataInfo.currentIndex;
    v21 = (_DWORD)_RAX == 0;
    LODWORD(_RAX) = _RAX - 1;
    v22 = v21 || (_DWORD)_RAX == 0;
    __asm
    {
      vsubss  xmm2, xmm1, xmm7
      vmulss  xmm3, xmm2, xmm6
    }
    if ( (int)_RAX < 0 )
    {
      LODWORD(_RAX) = _RBX->dataInfo.dataSize - 1;
      v22 = v21 || _RBX->dataInfo.dataSize == 1;
    }
    _RAX = (int)_RAX;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+rax*4]
      vaddss  xmm6, xmm0, xmm3
      vcomiss xmm6, xmm8
    }
    if ( v21 )
      goto LABEL_13;
    __asm { vcomiss xmm6, xmm7 }
    if ( !v22 )
LABEL_13:
      __asm { vsubss  xmm6, xmm0, xmm3 }
  }
  else
  {
    rand();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, cs:__real@38000100
    }
  }
  if ( !_RBX->dataInfo.normalizeData )
  {
    __asm
    {
      vcomiss xmm6, xmm8
      vcomiss xmm6, xmm7
    }
    if ( _RBX->dataInfo.normalizeData )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+88h+var_60], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 107, ASSERT_TYPE_ASSERT, "( ( data >= 0.0f && data <= 1.0f ) )", "( data ) = %g", v37) )
        __debugbreak();
    }
  }
  if ( _RBX->dataInfo.currentIndex >= (unsigned int)_RBX->dataInfo.dataSize )
  {
    LODWORD(v35) = _RBX->dataInfo.currentIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 109, ASSERT_TYPE_ASSERT, "(unsigned)( debugBufferGraph->dataInfo.currentIndex ) < (unsigned)( debugBufferGraph->dataInfo.dataSize )", "debugBufferGraph->dataInfo.currentIndex doesn't index debugBufferGraph->dataInfo.dataSize\n\t%i not in [0, %i)", v35, _RBX->dataInfo.dataSize) )
      __debugbreak();
  }
  _RAX = _RBX->dataInfo.currentIndex;
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovss  dword ptr [rbx+rax*4], xmm6
  }
  _RAX = _RBX->dataInfo.currentIndex;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovss  dword ptr [rbx+rax*4+7D0h], xmm9
    vmovaps xmm9, [rsp+88h+var_48]
  }
  v34 = (_RBX->dataInfo.currentIndex + 1) % _RBX->dataInfo.dataSize;
  ++_RBX->dataInfo.numPointsAdded;
  _RBX->dataInfo.currentIndex = v34;
}

/*
==============
CG_ClearDebugBufferData
==============
*/

void __fastcall CG_ClearDebugBufferData(DebugBufferGraph *debugBufferGraph, bool initBuffer, double initValue, double initDTime)
{
  int v10; 
  int *p_dataSize; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RBX = debugBufferGraph;
  __asm
  {
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 137, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  v10 = 0;
  *(_QWORD *)&_RBX->dataInfo.numPointsAdded = 0i64;
  _RBX->dataInfo.currentPeak = 0.0;
  if ( initBuffer )
  {
    p_dataSize = &_RBX->dataInfo.dataSize;
    if ( _RBX->dataInfo.dataSize > 0 )
    {
      do
      {
        __asm
        {
          vmovss  dword ptr [rbx], xmm7
          vmovss  dword ptr [rbx+7D0h], xmm6
        }
        ++v10;
        _RBX = (DebugBufferGraph *)((char *)_RBX + 4);
      }
      while ( v10 < *p_dataSize );
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

/*
==============
CG_DebugBufferDraw
==============
*/

void __fastcall CG_DebugBufferDraw(DebugBufferGraph *debugBufferGraph, double _XMM1_8, double _XMM2_8)
{
  int borderLineThickness; 
  int dataSize; 
  int currentIndex; 
  int v33; 
  int numPointsAdded; 
  int v35; 
  int v36; 
  bool v40; 
  bool v41; 
  int v42; 
  char v44; 
  unsigned int v50; 
  char v51; 
  bool v52; 
  int height; 
  const char *v81; 
  unsigned __int8 *graphColor; 
  int graphLineThickness; 
  __int64 v129; 
  __int64 v130; 
  unsigned __int8 color[4]; 
  vec2_t v132; 
  vec2_t v133; 
  vec2_t end; 
  vec2_t start; 
  vec2_t v136; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-0B8h], xmm14 }
  _RSI = debugBufferGraph;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
  }
  *(_DWORD *)color = 0;
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 224, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  if ( _RSI->dataInfo.dataSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 225, ASSERT_TYPE_ASSERT, "(debugBufferGraph->dataInfo.dataSize > 0)", (const char *)&queryFormat, "debugBufferGraph->dataInfo.dataSize > 0") )
    __debugbreak();
  if ( _RSI->drawInfo.drawBorder )
  {
    __asm { vmovss  xmm4, dword ptr [rsi+17A0h] }
    borderLineThickness = _RSI->drawInfo.borderLineThickness;
    _RDI = &_RSI->drawInfo.origin;
    __asm
    {
      vmovss  xmm3, dword ptr [rdi]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+1798h]
      vsubss  xmm2, xmm4, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rsi+1794h]
      vaddss  xmm0, xmm1, xmm3
      vmovss  dword ptr [rsp+140h+start], xmm0
      vmovss  dword ptr [rsp+140h+end], xmm0
      vmovss  dword ptr [rsp+140h+var_D8], xmm3
      vmovss  dword ptr [rsp+140h+var_D8+4], xmm2
      vmovss  dword ptr [rsp+140h+start+4], xmm2
      vmovss  dword ptr [rsp+140h+end+4], xmm4
    }
    DevGui_DrawLine(&_RSI->drawInfo.origin, &end, borderLineThickness, _RSI->drawInfo.borderColor);
    DevGui_DrawLine(&end, &start, _RSI->drawInfo.borderLineThickness, _RSI->drawInfo.borderColor);
    DevGui_DrawLine(&start, &v136, _RSI->drawInfo.borderLineThickness, _RSI->drawInfo.borderColor);
    DevGui_DrawLine(&v136, &_RSI->drawInfo.origin, _RSI->drawInfo.borderLineThickness, _RSI->drawInfo.borderColor);
  }
  __asm
  {
    vcvttss2si edx, dword ptr [rsi+17A8h]; y
    vcvttss2si ecx, dword ptr [rsi+17A4h]; x
  }
  DevGui_DrawFont(_ECX, _EDX, _RSI->drawInfo.graphColor, _RSI->drawInfo.graphLabel);
  dataSize = _RSI->dataInfo.dataSize;
  currentIndex = dataSize;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r13d
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rsi+1794h]
    vdivss  xmm12, xmm1, xmm0
    vaddss  xmm0, xmm1, dword ptr [rsi+179Ch]
  }
  if ( _RSI->dataInfo.currentIndex - 1 >= 0 )
    currentIndex = _RSI->dataInfo.currentIndex;
  v33 = 0;
  numPointsAdded = _RSI->dataInfo.numPointsAdded;
  v35 = currentIndex - 1;
  _RSI->dataInfo.currentPeak = 0.0;
  __asm { vmovss  dword ptr [rsp+140h+var_F8], xmm0 }
  if ( numPointsAdded <= dataSize - 1 )
    dataSize = numPointsAdded;
  v36 = dataSize - 1;
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm11, xmm11, xmm11
    vxorps  xmm14, xmm14, xmm14
  }
  v40 = 0;
  v41 = v36 == 0;
  if ( v36 > 0 )
  {
    __asm { vmovaps [rsp+140h+var_C8+8], xmm15 }
    v42 = 0;
    __asm
    {
      vmovss  xmm15, cs:__real@3f800000
      vmovaps [rsp+140h+var_38+8], xmm6
      vmovaps [rsp+140h+var_48+8], xmm7
      vmovaps [rsp+140h+var_58+8], xmm8
      vmovaps [rsp+140h+var_68+8], xmm9
      vmovaps [rsp+140h+var_A8+8], xmm13
    }
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+1774h]
        vucomiss xmm0, xmm10
      }
      if ( !v41 )
      {
        __asm { vcomiss xmm11, xmm0 }
        if ( !v40 )
          break;
      }
      v44 = 0;
      __asm { vmovaps xmm13, xmm10 }
      if ( (unsigned int)v35 >= _RSI->dataInfo.dataSize )
      {
        LODWORD(v130) = _RSI->dataInfo.dataSize;
        LODWORD(v129) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 253, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( debugBufferGraph->dataInfo.dataSize )", "dataIndex doesn't index debugBufferGraph->dataInfo.dataSize\n\t%i not in [0, %i)", v129, v130) )
          __debugbreak();
      }
      _RAX = v35--;
      __asm
      {
        vmovss  xmm7, dword ptr [rsi+rax*4]
        vmovss  xmm8, dword ptr [rsi+rax*4+7D0h]
      }
      _EBX = _RSI->dataInfo.pointColor[_RAX];
      v50 = _RSI->dataInfo.dataSize;
      if ( v35 < 0 )
        v35 = v50 - 1;
      if ( v35 >= v50 )
      {
        LODWORD(v130) = _RSI->dataInfo.dataSize;
        LODWORD(v129) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 262, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( debugBufferGraph->dataInfo.dataSize )", "dataIndex doesn't index debugBufferGraph->dataInfo.dataSize\n\t%i not in [0, %i)", v129, v130) )
          __debugbreak();
      }
      v51 = 0;
      v52 = !_RSI->dataInfo.normalizeData;
      _RAX = v35;
      __asm { vmovss  xmm6, dword ptr [rsi+rax*4] }
      if ( _RSI->dataInfo.normalizeData )
      {
        __asm
        {
          vdivss  xmm0, xmm7, dword ptr [rsi+1788h]; val
          vcomiss xmm0, xmm15
          vmovaps xmm2, xmm15; max
          vmovaps xmm1, xmm10; min
        }
        v44 = 1;
        __asm { vmovaps xmm13, xmm7 }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovaps xmm7, xmm0
          vdivss  xmm0, xmm6, dword ptr [rsi+1788h]; val
          vmovaps xmm2, xmm15; max
          vmovaps xmm1, xmm10; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
      }
      height = _RSI->drawInfo.height;
      __asm
      {
        vmovss  xmm3, dword ptr [rsi+17A0h]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ecx
        vmulss  xmm2, xmm1, xmm7
        vsubss  xmm9, xmm3, xmm2
        vmovss  xmm2, dword ptr [rsi+1774h]
        vucomiss xmm2, xmm10
        vmovss  dword ptr [rsp+140h+var_F8+4], xmm9
      }
      if ( !v52 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rsi+1794h]
          vaddss  xmm11, xmm11, xmm8
          vcomiss xmm11, xmm2
          vdivss  xmm1, xmm8, xmm2
          vmulss  xmm12, xmm1, xmm0
        }
        if ( !(v51 | v52) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+140h+var_F8]
            vsubss  xmm12, xmm0, dword ptr [rsi+179Ch]
            vsubss  xmm1, xmm11, xmm2
            vsubss  xmm0, xmm6, xmm7
            vdivss  xmm2, xmm1, xmm8
            vmulss  xmm2, xmm2, xmm0
            vsubss  xmm6, xmm6, xmm2
          }
        }
      }
      if ( v44 )
      {
        if ( v42 + 4 <= height )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+140h+var_F8]
            vaddss  xmm1, xmm0, cs:__real@40800000
            vcvttss2si edi, xmm1
            vcvtss2sd xmm1, xmm13, xmm13
            vmovq   rdx, xmm1
          }
          v81 = j_va("%.0f", _RDX);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r15d
            vaddss  xmm1, xmm0, xmm9
            vaddss  xmm2, xmm1, cs:__real@40800000
            vcvttss2si edx, xmm2; y
          }
          DevGui_DrawFont(_EDI, _EDX, color, v81);
          __asm { vmovss  xmm3, dword ptr [rsi+17A0h] }
        }
        v42 += 14;
      }
      v41 = !_RSI->drawInfo.usePointColors;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+var_F8]
        vsubss  xmm1, xmm0, xmm12
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, ecx
        vmulss  xmm0, xmm2, xmm6
        vmovss  dword ptr [rsp+140h+var_F0], xmm1
        vsubss  xmm1, xmm3, xmm0
        vmovss  dword ptr [rsp+140h+var_F0+4], xmm1
      }
      if ( v41 )
      {
        graphColor = _RSI->drawInfo.graphColor;
      }
      else
      {
        __asm
        {
          vmovd   xmm0, dword ptr [rsp+140h+color]
          vpmovzxbd xmm2, xmm0
          vmovd   xmm1, ebx
          vpmovzxbd xmm0, xmm1
          vpaddd  xmm3, xmm2, xmm0
          vpxor   xmm1, xmm1, xmm1
          vpcmpgtd xmm2, xmm1, xmm3
          vpand   xmm2, xmm2, cs:__xmm@00000001000000010000000100000001
          vpaddd  xmm1, xmm2, xmm3
        }
        _EAX = 1;
        graphColor = color;
        __asm
        {
          vmovd   xmm0, eax
          vpsrad  xmm2, xmm1, xmm0
          vpshufb xmm2, xmm2, cs:__xmm@000000000c080400000000000c080400
          vmovd   dword ptr [rsp+140h+color], xmm2
        }
      }
      DevGui_DrawLine(&v132, &v133, _RSI->drawInfo.graphLineThickness, graphColor);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+var_F8]
        vsubss  xmm1, xmm0, xmm12
        vmaxss  xmm0, xmm7, dword ptr [rsi+1780h]
      }
      ++v33;
      __asm
      {
        vmovss  dword ptr [rsi+1780h], xmm0
        vmovss  dword ptr [rsp+140h+var_F8], xmm1
        vaddss  xmm14, xmm14, xmm7
      }
      v40 = v33 < (unsigned int)v36;
      v41 = v33 == v36;
    }
    while ( v33 < v36 );
    __asm
    {
      vmovaps xmm13, [rsp+140h+var_A8+8]
      vmovaps xmm9, [rsp+140h+var_68+8]
      vmovaps xmm8, [rsp+140h+var_58+8]
      vmovaps xmm7, [rsp+140h+var_48+8]
      vmovaps xmm6, [rsp+140h+var_38+8]
      vmovaps xmm15, [rsp+140h+var_C8+8]
    }
  }
  __asm
  {
    vmovaps xmm12, [rsp+140h+var_98+8]
    vmovaps xmm11, [rsp+140h+var_88+8]
    vmovaps xmm10, [rsp+140h+var_78+8]
  }
  if ( _RSI->drawInfo.drawRMS )
  {
    __asm { vmovss  xmm1, dword ptr [rsi+179Ch] }
    graphLineThickness = _RSI->drawInfo.graphLineThickness;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+1794h]
      vmovss  dword ptr [rsp+140h+var_F8], xmm1
      vaddss  xmm1, xmm0, xmm1
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [rsi+1770h]
      vdivss  xmm0, xmm14, xmm2
      vmovss  dword ptr [rsp+140h+var_F0], xmm1
      vsqrtss xmm3, xmm0, xmm0
      vmovss  xmm0, dword ptr [rsi+17A0h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rsi+1798h]
      vmulss  xmm2, xmm3, xmm1
      vsubss  xmm4, xmm0, xmm2
      vmovss  dword ptr [rsp+140h+var_F8+4], xmm4
      vmovss  dword ptr [rsp+140h+var_F0+4], xmm4
    }
    DevGui_DrawLine(&v132, &v133, graphLineThickness, _RSI->drawInfo.borderColor);
  }
  __asm { vmovaps xmm14, [rsp+140h+var_B8+8] }
}

/*
==============
CG_InitDebugBufferData
==============
*/
void CG_InitDebugBufferData(DebugBufferGraph *debugBufferGraph, const vec2_t *origin, int width, int height, const char *label, int dataSize, bool drawBorder, float duration)
{
  int v12; 
  int v13; 
  int *p_dataSize; 
  int v15; 
  __int64 v19; 

  _RSI = origin;
  _RBX = debugBufferGraph;
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 12, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  if ( dataSize > 500 )
  {
    LODWORD(v19) = dataSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 13, ASSERT_TYPE_ASSERT, "( ( dataSize <= 500 ) )", "( dataSize ) = %i", v19) )
      __debugbreak();
  }
  _RBX->drawInfo.drawRMS = 0;
  v12 = 10;
  _RBX->drawInfo.origin.v[0] = _RSI->v[0];
  _RBX->drawInfo.origin.v[1] = _RSI->v[1];
  v13 = 10;
  if ( width > 10 )
    v13 = width;
  _RBX->drawInfo.borderPadding = 20;
  _RBX->drawInfo.width = v13;
  _RBX->drawInfo.drawBorder = drawBorder;
  if ( height > 10 )
    v12 = height;
  _RBX->drawInfo.graphLabel = label;
  _RBX->drawInfo.height = v12;
  p_dataSize = &_RBX->dataInfo.dataSize;
  _RBX->drawInfo.borderLineThickness = 3;
  _RBX->drawInfo.graphLineThickness = 1;
  _RBX->drawInfo.labelPosition.v[0] = _RSI->v[0];
  v15 = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vaddss  xmm1, xmm0, cs:__real@40a00000
    vmovss  xmm0, [rsp+38h+duration]
    vmovss  dword ptr [rbx+17A8h], xmm1
  }
  *(_QWORD *)_RBX->drawInfo.graphColor = -1i64;
  _RBX->dataInfo.dataSize = dataSize;
  *(_QWORD *)&_RBX->dataInfo.numPointsAdded = 0i64;
  _RBX->dataInfo.currentPeak = 0.0;
  __asm { vmovss  dword ptr [rbx+1774h], xmm0 }
  if ( dataSize > 0 )
  {
    do
    {
      _RBX->dataInfo.data[0] = 0.0;
      ++v15;
      _RBX->dataInfo.dTime[0] = 0.0;
      _RBX = (DebugBufferGraph *)((char *)_RBX + 4);
    }
    while ( v15 < *p_dataSize );
  }
}

/*
==============
CG_SetDebugBufferBorderColor
==============
*/
void CG_SetDebugBufferBorderColor(DebugBufferGraph *debugBufferGraph, unsigned __int8 r, unsigned __int8 g, unsigned __int8 b, unsigned __int8 a)
{
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 48, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  debugBufferGraph->drawInfo.borderColor[0] = r;
  debugBufferGraph->drawInfo.borderColor[1] = g;
  debugBufferGraph->drawInfo.borderColor[3] = a;
  debugBufferGraph->drawInfo.borderColor[2] = b;
}

/*
==============
CG_SetDebugBufferBounds
==============
*/
void CG_SetDebugBufferBounds(DebugBufferGraph *debugBufferGraph, const vec2_t *origin, int width, int height)
{
  int v8; 
  int v9; 

  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 78, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  v8 = 10;
  debugBufferGraph->drawInfo.origin.v[0] = origin->v[0];
  debugBufferGraph->drawInfo.origin.v[1] = origin->v[1];
  v9 = 10;
  if ( width > 10 )
    v9 = width;
  debugBufferGraph->drawInfo.width = v9;
  if ( height > 10 )
    v8 = height;
  debugBufferGraph->drawInfo.height = v8;
}

/*
==============
CG_SetDebugBufferDrawRMS
==============
*/
void CG_SetDebugBufferDrawRMS(DebugBufferGraph *debugBufferGraph, bool val)
{
  if ( debugBufferGraph )
  {
    debugBufferGraph->drawInfo.drawRMS = val;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 96, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
      __debugbreak();
    MEMORY[0x17C9] = val;
  }
}

/*
==============
CG_SetDebugBufferGraphColor
==============
*/
void CG_SetDebugBufferGraphColor(DebugBufferGraph *debugBufferGraph, unsigned __int8 r, unsigned __int8 g, unsigned __int8 b, unsigned __int8 a)
{
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 59, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  debugBufferGraph->drawInfo.graphColor[0] = r;
  debugBufferGraph->drawInfo.graphColor[1] = g;
  debugBufferGraph->drawInfo.graphColor[3] = a;
  debugBufferGraph->drawInfo.graphColor[2] = b;
}

/*
==============
CG_SetDebugBufferLabel
==============
*/
void CG_SetDebugBufferLabel(DebugBufferGraph *debugBufferGraph, const char *label)
{
  if ( debugBufferGraph )
  {
    debugBufferGraph->drawInfo.graphLabel = label;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 88, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
      __debugbreak();
    MEMORY[0x17C0] = label;
  }
}

/*
==============
CG_SetDebugBufferLabelPosition
==============
*/
void CG_SetDebugBufferLabelPosition(DebugBufferGraph *debugBufferGraph, const vec2_t *pos)
{
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 70, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  debugBufferGraph->drawInfo.labelPosition.v[0] = pos->v[0];
  debugBufferGraph->drawInfo.labelPosition.v[1] = pos->v[1];
}

/*
==============
G_GetDebugBufferPeak
==============
*/
float G_GetDebugBufferPeak(DebugBufferGraph *debugBufferGraph)
{
  _RBX = debugBufferGraph;
  if ( debugBufferGraph )
  {
    __asm { vmovss  xmm0, dword ptr [rcx+1780h] }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 340, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+1780h] }
  }
  return *(float *)&_XMM0;
}

