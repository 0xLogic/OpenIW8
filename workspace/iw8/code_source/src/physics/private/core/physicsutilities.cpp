/*
==============
Physics_DebugDrawGraphXLine
==============
*/

void __fastcall Physics_DebugDrawGraphXLine(const ScreenPlacement *scrPlace, float x, float y, float width, float height, float yMin, float yMax, float xValue, const vec4_t *color)
{
  ?Physics_DebugDrawGraphXLine@@YAXPEBUScreenPlacement@@MMMMMMMAEBTvec4_t@@@Z(scrPlace, x, y, width, height, yMin, yMax, xValue, color);
}

/*
==============
Physics_DebugDrawGraphAxes
==============
*/

void __fastcall Physics_DebugDrawGraphAxes(const ScreenPlacement *scrPlace, float x, float y, float width, float height, float yMin, float yMax)
{
  ?Physics_DebugDrawGraphAxes@@YAXPEBUScreenPlacement@@MMMMMM@Z(scrPlace, x, y, width, height, yMin, yMax);
}

/*
==============
Physics_DebugDrawGraphYLine
==============
*/

void __fastcall Physics_DebugDrawGraphYLine(const ScreenPlacement *scrPlace, float x, float y, float width, float height, float yMin, float yMax, float yValue, const vec4_t *color)
{
  ?Physics_DebugDrawGraphYLine@@YAXPEBUScreenPlacement@@MMMMMMMAEBTvec4_t@@@Z(scrPlace, x, y, width, height, yMin, yMax, yValue, color);
}

/*
==============
Physics_DebugDrawGraphLine
==============
*/

void __fastcall Physics_DebugDrawGraphLine(const ScreenPlacement *scrPlace, float x, float y, float width, float height, float yMin, float yMax, float *data, int dataSize, int dataBufferStart, const vec4_t *color)
{
  ?Physics_DebugDrawGraphLine@@YAXPEBUScreenPlacement@@MMMMMMPEAMHHAEBTvec4_t@@@Z(scrPlace, x, y, width, height, yMin, yMax, data, dataSize, dataBufferStart, color);
}

/*
==============
Physics_DebugIntToString
==============
*/

void __fastcall Physics_DebugIntToString(char *buffer, int bufferSize, unsigned int amount)
{
  ?Physics_DebugIntToString@@YAXPEADHI@Z(buffer, bufferSize, amount);
}

/*
==============
Physics_DebugDrawGraphAxes
==============
*/
void Physics_DebugDrawGraphAxes(const ScreenPlacement *scrPlace, float x, float y, float width, float height, float yMin, float yMax)
{
  float v9; 

  v9 = y - (float)((float)((float)(-1.0 / (float)(yMax - yMin)) * yMin) * height);
  CG_Draw2DLine(scrPlace, x, v9, x + width, v9, 1.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
  CG_Draw2DLine(scrPlace, x, y, x, y - height, 1.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
}

/*
==============
Physics_DebugDrawGraphLine
==============
*/
void Physics_DebugDrawGraphLine(const ScreenPlacement *scrPlace, float x, float y, float width, float height, float yMin, float yMax, float *data, int dataSize, int dataBufferStart)
{
  signed __int64 v10; 
  void *v11; 
  int v16; 
  __int16 v17; 
  float v18; 
  int v19; 
  __int128 v20; 
  double v22; 
  float v23; 
  double v26; 
  int v29; 
  __int64 v31; 
  bool v32; 
  unsigned __int8 v33; 
  int v34; 
  unsigned __int8 v35; 
  int v37; 
  unsigned __int8 v38; 
  int v40; 
  unsigned __int8 v41; 
  int v44; 
  __int64 v46; 
  unsigned __int8 v47; 
  int v48; 
  unsigned __int8 v49; 
  int v51; 
  unsigned __int8 v52; 
  int v54; 
  unsigned __int8 v55; 
  int v56[4]; 
  GfxPointVertex verts[1024]; 

  v11 = alloca(v10);
  if ( 2 * dataSize - 2 > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsutilities.cpp", 70, ASSERT_TYPE_ASSERT, "(maxLineVerts >= ( ( dataSize - 1 ) * 2 ))", (const char *)&queryFormat, "maxLineVerts >= ( ( dataSize - 1 ) * 2 )") )
    __debugbreak();
  v16 = 0;
  v17 = 0;
  if ( dataSize > 0 )
  {
    v18 = 1.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)(dataSize - 1)).m128_f32[0];
    *(float *)&v19 = 1.0 / (float)(yMax - yMin);
    v56[0] = v19;
    do
    {
      v20 = LODWORD(data[(dataBufferStart + v16) % dataSize]);
      *(float *)&v20 = (float)(*(float *)&v20 - yMin) * *(float *)&v19;
      _XMM6 = v20;
      v22 = ScrPlace_ApplyXWithoutSplitScreenScaling(scrPlace, (float)((float)((float)v16 * width) * v18) + x, 1);
      v23 = *(float *)&v22;
      __asm
      {
        vmaxss  xmm1, xmm6, xmm0
        vminss  xmm2, xmm1, xmm8
      }
      v26 = ScrPlace_ApplyYWithoutSplitScreenScaling(scrPlace, y - (float)(*(float *)&_XMM2 * height), 1);
      if ( v17 <= 0 || SLODWORD(v23) != v56[4 * v17] || SLODWORD(v26) != v56[4 * v17 + 1] )
      {
        if ( v16 )
        {
          _XMM4 = 0i64;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          v29 = (int)*(float *)&_XMM1;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          v31 = v17;
          if ( v29 > 255 )
            v29 = 255;
          v32 = v29 < 0;
          v33 = v29;
          v34 = (int)*(float *)&_XMM1;
          if ( v32 )
            v33 = 0;
          verts[v17].xyz.v[2] = 0.0;
          if ( v34 > 255 )
            v34 = 255;
          verts[v17].xyz.v[0] = v23;
          verts[v17].xyz.v[1] = *(float *)&v26;
          verts[v17].color[0] = v33;
          v35 = v34;
          if ( v34 < 0 )
            v35 = 0;
          verts[v17].color[1] = v35;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          v37 = (int)*(float *)&_XMM1;
          if ( (int)*(float *)&_XMM1 > 255 )
            v37 = 255;
          v38 = v37;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v37 < 0 )
            v38 = 0;
          v40 = (int)*(float *)&_XMM1;
          verts[v17].color[2] = v38;
          if ( (int)*(float *)&_XMM1 > 255 )
            v40 = 255;
          v41 = v40;
          if ( v40 < 0 )
            v41 = 0;
          ++v17;
          verts[v31].color[3] = v41;
        }
        if ( v16 != dataSize - 1 )
        {
          _XMM4 = 0i64;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          v44 = (int)*(float *)&_XMM1;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          v46 = v17;
          if ( v44 > 255 )
            v44 = 255;
          v32 = v44 < 0;
          v47 = v44;
          v48 = (int)*(float *)&_XMM1;
          if ( v32 )
            v47 = 0;
          verts[v17].xyz.v[2] = 0.0;
          if ( v48 > 255 )
            v48 = 255;
          verts[v17].xyz.v[0] = v23;
          verts[v17].xyz.v[1] = *(float *)&v26;
          verts[v17].color[0] = v47;
          v49 = v48;
          if ( v48 < 0 )
            v49 = 0;
          verts[v17].color[1] = v49;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          v51 = (int)*(float *)&_XMM1;
          if ( (int)*(float *)&_XMM1 > 255 )
            v51 = 255;
          v52 = v51;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v51 < 0 )
            v52 = 0;
          v54 = (int)*(float *)&_XMM1;
          verts[v17].color[2] = v52;
          if ( (int)*(float *)&_XMM1 > 255 )
            v54 = 255;
          v55 = v54;
          if ( v54 < 0 )
            v55 = 0;
          ++v17;
          verts[v46].color[3] = v55;
        }
      }
      v19 = v56[0];
      ++v16;
    }
    while ( v16 < dataSize );
    if ( v17 > 1 )
      R_AddCmdDrawLines2D(v17 / 2, 1u, verts);
  }
}

/*
==============
Physics_DebugDrawGraphXLine
==============
*/
void Physics_DebugDrawGraphXLine(const ScreenPlacement *scrPlace, float x, float y, float width, float height, float yMin, float yMax, float xValue, const vec4_t *color)
{
  CG_Draw2DLine(scrPlace, (float)(width * xValue) + x, y, (float)(width * xValue) + x, y - height, 1.0, 1, 1, color, cgMedia.whiteMaterial);
}

/*
==============
Physics_DebugDrawGraphYLine
==============
*/
void Physics_DebugDrawGraphYLine(const ScreenPlacement *scrPlace, float x, float y, float width, float height, float yMin, float yMax, float yValue, const vec4_t *color)
{
  float v9; 

  v9 = y - (float)((float)((float)(yValue - yMin) / (float)(yMax - yMin)) * height);
  CG_Draw2DLine(scrPlace, x, v9, x + width, v9, 1.0, 1, 1, color, cgMedia.whiteMaterial);
}

/*
==============
Physics_DebugIntToString
==============
*/
void Physics_DebugIntToString(char *buffer, int bufferSize, unsigned int amount)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 

  if ( amount >= 0x3E8 )
  {
    v4 = amount / 0x3E8;
    if ( amount >= 0xF4240 )
    {
      v5 = v4 % 0x3E8;
      v6 = amount / 0xF4240;
      if ( amount >= 0x3B9ACA00 )
      {
        v12 = amount % 0x3E8;
        v11 = v5;
        v9 = v6 % 0x3E8;
        Com_sprintf(buffer, bufferSize, "%i,%.3i,%.3i,%.3i", amount / 0x3B9ACA00, v9, v11, v12);
      }
      else
      {
        v10 = amount % 0x3E8;
        v8 = v5;
        Com_sprintf(buffer, bufferSize, "%i,%.3i,%.3i", v6, v8, v10);
      }
    }
    else
    {
      v7 = amount % 0x3E8;
      Com_sprintf(buffer, bufferSize, "%i,%.3i", v4, v7);
    }
  }
  else
  {
    Com_sprintf(buffer, bufferSize, "%i", amount);
  }
}

