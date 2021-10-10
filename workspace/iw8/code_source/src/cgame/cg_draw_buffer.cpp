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
void CG_AddDebugBufferData(DebugBufferGraph *debugBufferGraph, float data, float dTime)
{
  int v4; 
  __int64 v5; 

  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 104, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  if ( !debugBufferGraph->dataInfo.normalizeData && (data < 0.0 || data > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 107, ASSERT_TYPE_ASSERT, "( ( data >= 0.0f && data <= 1.0f ) )", "( data ) = %g", data) )
    __debugbreak();
  if ( debugBufferGraph->dataInfo.currentIndex >= (unsigned int)debugBufferGraph->dataInfo.dataSize )
  {
    LODWORD(v5) = debugBufferGraph->dataInfo.currentIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 109, ASSERT_TYPE_ASSERT, "(unsigned)( debugBufferGraph->dataInfo.currentIndex ) < (unsigned)( debugBufferGraph->dataInfo.dataSize )", "debugBufferGraph->dataInfo.currentIndex doesn't index debugBufferGraph->dataInfo.dataSize\n\t%i not in [0, %i)", v5, debugBufferGraph->dataInfo.dataSize) )
      __debugbreak();
  }
  debugBufferGraph->dataInfo.data[debugBufferGraph->dataInfo.currentIndex] = data;
  debugBufferGraph->dataInfo.dTime[debugBufferGraph->dataInfo.currentIndex] = dTime;
  v4 = (debugBufferGraph->dataInfo.currentIndex + 1) % debugBufferGraph->dataInfo.dataSize;
  ++debugBufferGraph->dataInfo.numPointsAdded;
  debugBufferGraph->dataInfo.currentIndex = v4;
}

/*
==============
CG_AddDebugBufferDataAndColor
==============
*/
void CG_AddDebugBufferDataAndColor(DebugBufferGraph *debugBufferGraph, float data, GfxColor color, float dTime)
{
  int v6; 
  __int64 v7; 

  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 120, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  if ( !debugBufferGraph->dataInfo.normalizeData && (data < 0.0 || data > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 123, ASSERT_TYPE_ASSERT, "( ( data >= 0.0f && data <= 1.0f ) )", "( data ) = %g", data) )
    __debugbreak();
  if ( debugBufferGraph->dataInfo.currentIndex >= (unsigned int)debugBufferGraph->dataInfo.dataSize )
  {
    LODWORD(v7) = debugBufferGraph->dataInfo.currentIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( debugBufferGraph->dataInfo.currentIndex ) < (unsigned)( debugBufferGraph->dataInfo.dataSize )", "debugBufferGraph->dataInfo.currentIndex doesn't index debugBufferGraph->dataInfo.dataSize\n\t%i not in [0, %i)", v7, debugBufferGraph->dataInfo.dataSize) )
      __debugbreak();
  }
  debugBufferGraph->dataInfo.data[debugBufferGraph->dataInfo.currentIndex] = data;
  debugBufferGraph->dataInfo.dTime[debugBufferGraph->dataInfo.currentIndex] = dTime;
  v6 = (debugBufferGraph->dataInfo.currentIndex + 1) % debugBufferGraph->dataInfo.dataSize;
  debugBufferGraph->dataInfo.currentIndex = v6;
  debugBufferGraph->dataInfo.pointColor[v6] = color;
  ++debugBufferGraph->dataInfo.numPointsAdded;
}

/*
==============
CG_AddDebugBufferRandomWalkData
==============
*/
void CG_AddDebugBufferRandomWalkData(DebugBufferGraph *debugBufferGraph, float scale, float dTime)
{
  float v4; 
  float v5; 
  int v6; 
  float v7; 
  float v8; 
  int v9; 
  __int64 v10; 

  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 158, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  if ( (scale < 0.0 || scale > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 159, ASSERT_TYPE_ASSERT, "( ( scale >= 0.0f && scale <= 1.0f ) )", "( scale ) = %g", scale) )
    __debugbreak();
  if ( debugBufferGraph->dataInfo.numPointsAdded )
  {
    v5 = (float)rand() * 0.000061037019;
    v6 = debugBufferGraph->dataInfo.currentIndex - 1;
    v7 = (float)(v5 - 1.0) * scale;
    if ( v6 < 0 )
      v6 = debugBufferGraph->dataInfo.dataSize - 1;
    v8 = debugBufferGraph->dataInfo.data[v6];
    v4 = v8 + v7;
    if ( (float)(v8 + v7) < 0.0 || (float)(v8 + v7) > 1.0 )
      v4 = v8 - v7;
  }
  else
  {
    v4 = (float)rand() * 0.000030518509;
  }
  if ( !debugBufferGraph->dataInfo.normalizeData && (v4 < 0.0 || v4 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 107, ASSERT_TYPE_ASSERT, "( ( data >= 0.0f && data <= 1.0f ) )", "( data ) = %g", v4) )
    __debugbreak();
  if ( debugBufferGraph->dataInfo.currentIndex >= (unsigned int)debugBufferGraph->dataInfo.dataSize )
  {
    LODWORD(v10) = debugBufferGraph->dataInfo.currentIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 109, ASSERT_TYPE_ASSERT, "(unsigned)( debugBufferGraph->dataInfo.currentIndex ) < (unsigned)( debugBufferGraph->dataInfo.dataSize )", "debugBufferGraph->dataInfo.currentIndex doesn't index debugBufferGraph->dataInfo.dataSize\n\t%i not in [0, %i)", v10, debugBufferGraph->dataInfo.dataSize) )
      __debugbreak();
  }
  debugBufferGraph->dataInfo.data[debugBufferGraph->dataInfo.currentIndex] = v4;
  debugBufferGraph->dataInfo.dTime[debugBufferGraph->dataInfo.currentIndex] = dTime;
  v9 = (debugBufferGraph->dataInfo.currentIndex + 1) % debugBufferGraph->dataInfo.dataSize;
  ++debugBufferGraph->dataInfo.numPointsAdded;
  debugBufferGraph->dataInfo.currentIndex = v9;
}

/*
==============
CG_ClearDebugBufferData
==============
*/
void CG_ClearDebugBufferData(DebugBufferGraph *debugBufferGraph, bool initBuffer, float initValue, float initDTime)
{
  DebugBufferGraph *v5; 
  int v6; 
  int *p_dataSize; 

  v5 = debugBufferGraph;
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 137, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  v6 = 0;
  *(_QWORD *)&v5->dataInfo.numPointsAdded = 0i64;
  v5->dataInfo.currentPeak = 0.0;
  if ( initBuffer )
  {
    p_dataSize = &v5->dataInfo.dataSize;
    if ( v5->dataInfo.dataSize > 0 )
    {
      do
      {
        v5->dataInfo.data[0] = initValue;
        v5->dataInfo.dTime[0] = initDTime;
        ++v6;
        v5 = (DebugBufferGraph *)((char *)v5 + 4);
      }
      while ( v6 < *p_dataSize );
    }
  }
}

/*
==============
CG_DebugBufferDraw
==============
*/
void CG_DebugBufferDraw(DebugBufferGraph *debugBufferGraph)
{
  float v2; 
  int borderLineThickness; 
  float v4; 
  float v5; 
  int dataSize; 
  int currentIndex; 
  float width; 
  float v9; 
  float v10; 
  int v11; 
  int numPointsAdded; 
  int v13; 
  int v14; 
  __int128 v15; 
  __int128 v16; 
  int v17; 
  float duration; 
  bool v19; 
  float v20; 
  __int64 v21; 
  float v23; 
  GfxColor v24; 
  unsigned int v25; 
  float v26; 
  __int128 v27; 
  float v28; 
  int height; 
  float v30; 
  float v31; 
  float v32; 
  __int128 v33; 
  int v34; 
  const char *v35; 
  bool v36; 
  unsigned __int8 *graphColor; 
  float v49; 
  __int128 v51; 
  int graphLineThickness; 
  float v53; 
  float v54; 
  __int64 v55; 
  __int64 v56; 
  unsigned __int8 color[4]; 
  vec2_t v58; 
  vec2_t v59; 
  vec2_t end; 
  vec2_t start; 
  vec2_t v62; 

  *(_DWORD *)color = 0;
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 224, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  if ( debugBufferGraph->dataInfo.dataSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 225, ASSERT_TYPE_ASSERT, "(debugBufferGraph->dataInfo.dataSize > 0)", (const char *)&queryFormat, "debugBufferGraph->dataInfo.dataSize > 0") )
    __debugbreak();
  if ( debugBufferGraph->drawInfo.drawBorder )
  {
    v2 = debugBufferGraph->drawInfo.origin.v[1];
    borderLineThickness = debugBufferGraph->drawInfo.borderLineThickness;
    v4 = debugBufferGraph->drawInfo.origin.v[0];
    v5 = v2 - (float)debugBufferGraph->drawInfo.height;
    start.v[0] = (float)debugBufferGraph->drawInfo.width + v4;
    end.v[0] = start.v[0];
    v62.v[0] = v4;
    v62.v[1] = v5;
    start.v[1] = v5;
    end.v[1] = v2;
    DevGui_DrawLine(&debugBufferGraph->drawInfo.origin, &end, borderLineThickness, debugBufferGraph->drawInfo.borderColor);
    DevGui_DrawLine(&end, &start, debugBufferGraph->drawInfo.borderLineThickness, debugBufferGraph->drawInfo.borderColor);
    DevGui_DrawLine(&start, &v62, debugBufferGraph->drawInfo.borderLineThickness, debugBufferGraph->drawInfo.borderColor);
    DevGui_DrawLine(&v62, &debugBufferGraph->drawInfo.origin, debugBufferGraph->drawInfo.borderLineThickness, debugBufferGraph->drawInfo.borderColor);
  }
  DevGui_DrawFont((int)debugBufferGraph->drawInfo.labelPosition.v[0], (int)debugBufferGraph->drawInfo.labelPosition.v[1], debugBufferGraph->drawInfo.graphColor, debugBufferGraph->drawInfo.graphLabel);
  dataSize = debugBufferGraph->dataInfo.dataSize;
  currentIndex = dataSize;
  width = (float)debugBufferGraph->drawInfo.width;
  v9 = width / (float)dataSize;
  v10 = width + debugBufferGraph->drawInfo.origin.v[0];
  if ( debugBufferGraph->dataInfo.currentIndex - 1 >= 0 )
    currentIndex = debugBufferGraph->dataInfo.currentIndex;
  v11 = 0;
  numPointsAdded = debugBufferGraph->dataInfo.numPointsAdded;
  v13 = currentIndex - 1;
  debugBufferGraph->dataInfo.currentPeak = 0.0;
  v58.v[0] = v10;
  if ( numPointsAdded <= dataSize - 1 )
    dataSize = numPointsAdded;
  v14 = dataSize - 1;
  v15 = 0i64;
  v16 = 0i64;
  if ( v14 > 0 )
  {
    v17 = 0;
    do
    {
      duration = debugBufferGraph->dataInfo.duration;
      if ( duration != 0.0 && *(float *)&v15 >= duration )
        break;
      v19 = 0;
      v20 = 0.0;
      if ( (unsigned int)v13 >= debugBufferGraph->dataInfo.dataSize )
      {
        LODWORD(v56) = debugBufferGraph->dataInfo.dataSize;
        LODWORD(v55) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 253, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( debugBufferGraph->dataInfo.dataSize )", "dataIndex doesn't index debugBufferGraph->dataInfo.dataSize\n\t%i not in [0, %i)", v55, v56) )
          __debugbreak();
      }
      v21 = v13--;
      _XMM7 = LODWORD(debugBufferGraph->dataInfo.data[v21]);
      v23 = debugBufferGraph->dataInfo.dTime[v21];
      v24 = debugBufferGraph->dataInfo.pointColor[v21];
      v25 = debugBufferGraph->dataInfo.dataSize;
      if ( v13 < 0 )
        v13 = v25 - 1;
      if ( v13 >= v25 )
      {
        LODWORD(v56) = debugBufferGraph->dataInfo.dataSize;
        LODWORD(v55) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 262, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( debugBufferGraph->dataInfo.dataSize )", "dataIndex doesn't index debugBufferGraph->dataInfo.dataSize\n\t%i not in [0, %i)", v55, v56) )
          __debugbreak();
      }
      v26 = debugBufferGraph->dataInfo.data[v13];
      if ( debugBufferGraph->dataInfo.normalizeData )
      {
        v28 = *(float *)&_XMM7 / debugBufferGraph->dataInfo.normalizationScale;
        *((_QWORD *)&v27 + 1) = *((_QWORD *)&_XMM7 + 1);
        v19 = v28 >= 1.0;
        v20 = *(float *)&_XMM7;
        *(double *)&v27 = I_fclamp(v28, 0.0, 1.0);
        _XMM7 = v27;
        *(double *)&v27 = I_fclamp(v26 / debugBufferGraph->dataInfo.normalizationScale, 0.0, 1.0);
        v26 = *(float *)&v27;
      }
      height = debugBufferGraph->drawInfo.height;
      v30 = debugBufferGraph->drawInfo.origin.v[1];
      v31 = v30 - (float)((float)height * *(float *)&_XMM7);
      v32 = debugBufferGraph->dataInfo.duration;
      v58.v[1] = v31;
      if ( v32 != 0.0 )
      {
        v33 = v15;
        *(float *)&v33 = *(float *)&v15 + v23;
        v15 = v33;
        v9 = (float)(v23 / v32) * (float)debugBufferGraph->drawInfo.width;
        if ( *(float *)&v33 > v32 )
        {
          v9 = v58.v[0] - debugBufferGraph->drawInfo.origin.v[0];
          v26 = v26 - (float)((float)((float)(*(float *)&v33 - v32) / v23) * (float)(v26 - *(float *)&_XMM7));
        }
      }
      if ( v19 )
      {
        if ( v17 + 4 <= height )
        {
          v34 = (int)(float)(v58.v[0] + 4.0);
          v35 = j_va("%.0f", v20);
          DevGui_DrawFont(v34, (int)(float)((float)((float)v17 + v31) + 4.0), color, v35);
          v30 = debugBufferGraph->drawInfo.origin.v[1];
          height = debugBufferGraph->drawInfo.height;
        }
        v17 += 14;
      }
      v36 = !debugBufferGraph->drawInfo.usePointColors;
      v59.v[0] = v58.v[0] - v9;
      v59.v[1] = v30 - (float)((float)height * v26);
      if ( v36 )
      {
        graphColor = debugBufferGraph->drawInfo.graphColor;
      }
      else
      {
        _XMM0 = *(unsigned int *)color;
        __asm { vpmovzxbd xmm2, xmm0 }
        _XMM1 = v24.packed;
        __asm
        {
          vpmovzxbd xmm0, xmm1
          vpaddd  xmm3, xmm2, xmm0
          vpxor   xmm1, xmm1, xmm1
          vpcmpgtd xmm2, xmm1, xmm3
          vpand   xmm2, xmm2, cs:__xmm@00000001000000010000000100000001
          vpaddd  xmm1, xmm2, xmm3
        }
        graphColor = color;
        __asm
        {
          vpsrad  xmm2, xmm1, xmm0
          vpshufb xmm2, xmm2, cs:__xmm@000000000c080400000000000c080400
        }
        *(_DWORD *)color = _XMM2;
      }
      DevGui_DrawLine(&v58, &v59, debugBufferGraph->drawInfo.graphLineThickness, graphColor);
      v49 = v58.v[0] - v9;
      __asm { vmaxss  xmm0, xmm7, dword ptr [rsi+1780h] }
      ++v11;
      debugBufferGraph->dataInfo.currentPeak = *(float *)&_XMM0;
      v58.v[0] = v49;
      v51 = v16;
      *(float *)&v51 = *(float *)&v16 + *(float *)&_XMM7;
      v16 = v51;
    }
    while ( v11 < v14 );
  }
  if ( debugBufferGraph->drawInfo.drawRMS )
  {
    graphLineThickness = debugBufferGraph->drawInfo.graphLineThickness;
    v53 = (float)debugBufferGraph->drawInfo.width;
    v58.v[0] = debugBufferGraph->drawInfo.origin.v[0];
    v54 = *(float *)&v16 / (float)debugBufferGraph->dataInfo.dataSize;
    v59.v[0] = v53 + v58.v[0];
    v58.v[1] = debugBufferGraph->drawInfo.origin.v[1] - (float)(fsqrt(v54) * (float)debugBufferGraph->drawInfo.height);
    v59.v[1] = v58.v[1];
    DevGui_DrawLine(&v58, &v59, graphLineThickness, debugBufferGraph->drawInfo.borderColor);
  }
}

/*
==============
CG_InitDebugBufferData
==============
*/
void CG_InitDebugBufferData(DebugBufferGraph *debugBufferGraph, const vec2_t *origin, int width, int height, const char *label, int dataSize, bool drawBorder, float duration)
{
  DebugBufferGraph *v11; 
  int v12; 
  int v13; 
  int *p_dataSize; 
  int v15; 
  __int64 v16; 

  v11 = debugBufferGraph;
  if ( !debugBufferGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 12, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  if ( dataSize > 500 )
  {
    LODWORD(v16) = dataSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 13, ASSERT_TYPE_ASSERT, "( ( dataSize <= 500 ) )", "( dataSize ) = %i", v16) )
      __debugbreak();
  }
  v11->drawInfo.drawRMS = 0;
  v12 = 10;
  v11->drawInfo.origin.v[0] = origin->v[0];
  v11->drawInfo.origin.v[1] = origin->v[1];
  v13 = 10;
  if ( width > 10 )
    v13 = width;
  v11->drawInfo.borderPadding = 20;
  v11->drawInfo.width = v13;
  v11->drawInfo.drawBorder = drawBorder;
  if ( height > 10 )
    v12 = height;
  v11->drawInfo.graphLabel = label;
  v11->drawInfo.height = v12;
  p_dataSize = &v11->dataInfo.dataSize;
  v11->drawInfo.borderLineThickness = 3;
  v11->drawInfo.graphLineThickness = 1;
  v11->drawInfo.labelPosition.v[0] = origin->v[0];
  v15 = 0;
  v11->drawInfo.labelPosition.v[1] = origin->v[1] + 5.0;
  *(_QWORD *)v11->drawInfo.graphColor = -1i64;
  v11->dataInfo.dataSize = dataSize;
  *(_QWORD *)&v11->dataInfo.numPointsAdded = 0i64;
  v11->dataInfo.currentPeak = 0.0;
  v11->dataInfo.duration = duration;
  if ( dataSize > 0 )
  {
    do
    {
      v11->dataInfo.data[0] = 0.0;
      ++v15;
      v11->dataInfo.dTime[0] = 0.0;
      v11 = (DebugBufferGraph *)((char *)v11 + 4);
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
  if ( debugBufferGraph )
    return debugBufferGraph->dataInfo.currentPeak;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_buffer.cpp", 340, ASSERT_TYPE_ASSERT, "(debugBufferGraph)", (const char *)&queryFormat, "debugBufferGraph") )
    __debugbreak();
  return MEMORY[0x1780];
}

