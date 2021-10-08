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

void __fastcall Physics_DebugDrawGraphAxes(const ScreenPlacement *scrPlace, double x, double y, float width, float height, float yMin, float yMax)
{
  float v29; 
  float v30; 
  float v31; 
  float v32; 

  __asm
  {
    vmovss  xmm0, [rsp+88h+yMax]
    vsubss  xmm5, xmm0, [rsp+88h+yMin]
    vmovss  xmm4, cs:__real@bf800000
    vmovaps [rsp+88h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vdivss  xmm5, xmm4, xmm5
    vmulss  xmm0, xmm5, [rsp+88h+yMin]
    vmulss  xmm0, xmm0, [rsp+88h+height]
    vmovaps [rsp+88h+var_28], xmm8
    vmovaps xmm8, xmm2
    vsubss  xmm2, xmm2, xmm0; p1y
    vmovss  [rsp+88h+var_60], xmm6
    vmovaps [rsp+88h+var_38], xmm9
    vaddss  xmm3, xmm1, xmm3; p2x
    vmovss  [rsp+88h+var_68], xmm2
    vmovaps xmm9, xmm1
  }
  CG_Draw2DLine(scrPlace, *(float *)&x, *(float *)&_XMM2, *(float *)&_XMM3, v29, v31, 1, 1, &colorWhite, cgMedia.whiteMaterial);
  __asm
  {
    vsubss  xmm0, xmm8, [rsp+88h+height]
    vmovss  [rsp+88h+var_60], xmm6
    vmovaps xmm3, xmm9; p2x
    vmovaps xmm2, xmm8; p1y
    vmovaps xmm1, xmm9; p1x
    vmovss  [rsp+88h+var_68], xmm0
  }
  CG_Draw2DLine(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v30, v32, 1, 1, &colorWhite, cgMedia.whiteMaterial);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm8, [rsp+88h+var_28]
    vmovaps xmm9, [rsp+88h+var_38]
  }
}

/*
==============
Physics_DebugDrawGraphLine
==============
*/

void __fastcall Physics_DebugDrawGraphLine(const ScreenPlacement *scrPlace, double x, double y, double width, float height, float yMin, float yMax, float *data, int dataSize, int dataBufferStart)
{
  signed __int64 v10; 
  void *v21; 
  int v27; 
  __int16 v28; 
  bool v68; 
  unsigned __int8 v69; 
  unsigned __int8 v73; 
  unsigned __int8 v78; 
  unsigned __int8 v81; 
  unsigned __int8 v91; 
  unsigned __int8 v95; 
  unsigned __int8 v100; 
  unsigned __int8 v103; 
  GfxPointVertex verts[1024]; 

  v21 = alloca(v10);
  __asm
  {
    vmovaps [rsp+4138h+var_B8], xmm12
    vmovaps [rsp+4138h+var_C8], xmm13
    vmovaps [rsp+4138h+var_D8], xmm14
  }
  _R12 = data;
  __asm
  {
    vmovaps xmm14, xmm3
    vmovaps xmm13, xmm2
    vmovaps xmm12, xmm1
  }
  if ( 2 * dataSize - 2 > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsutilities.cpp", 70, ASSERT_TYPE_ASSERT, "(maxLineVerts >= ( ( dataSize - 1 ) * 2 ))", (const char *)&queryFormat, "maxLineVerts >= ( ( dataSize - 1 ) * 2 )") )
    __debugbreak();
  v27 = 0;
  v28 = 0;
  if ( dataSize > 0 )
  {
    _ER14 = dataSize - 1;
    __asm
    {
      vmovaps [rsp+4138h+var_58], xmm6
      vmovaps [rsp+4138h+var_68], xmm7
      vmovaps [rsp+4138h+var_78], xmm8
      vmovss  xmm8, cs:__real@3f800000
      vmovaps [rsp+4138h+var_88], xmm9
      vmovss  xmm9, [rsp+4138h+arg_28]
      vmovaps [rsp+4138h+var_98], xmm10
      vmovss  xmm10, cs:__real@437f0000
      vmovaps [rsp+4138h+var_A8], xmm11
      vmovss  xmm11, cs:__real@3f000000
      vmovd   xmm0, r14d
      vcvtdq2ps xmm0, xmm0
      vmovaps [rsp+4138h+var_E8], xmm15
      vdivss  xmm15, xmm8, xmm0
      vmovss  xmm0, [rsp+4138h+arg_30]
      vsubss  xmm1, xmm0, xmm9
      vdivss  xmm3, xmm8, xmm1
      vmovss  [rsp+4138h+var_4108], xmm3
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vmulss  xmm1, xmm0, xmm14
        vmulss  xmm2, xmm1, xmm15
      }
      _RAX = (dataBufferStart + v27) % dataSize;
      __asm
      {
        vaddss  xmm1, xmm2, xmm12; x
        vmovss  xmm0, dword ptr [r12+rax*4]
        vsubss  xmm2, xmm0, xmm9
        vmulss  xmm6, xmm2, xmm3
      }
      *(double *)&_XMM0 = ScrPlace_ApplyXWithoutSplitScreenScaling(scrPlace, *(float *)&_XMM1, 1);
      __asm
      {
        vmovaps xmm7, xmm0
        vxorps  xmm0, xmm0, xmm0
        vmaxss  xmm1, xmm6, xmm0
        vminss  xmm2, xmm1, xmm8
        vmulss  xmm3, xmm2, [rsp+4138h+arg_20]
        vsubss  xmm1, xmm13, xmm3; y
      }
      *(double *)&_XMM0 = ScrPlace_ApplyYWithoutSplitScreenScaling(scrPlace, *(float *)&_XMM1, 1);
      if ( v28 <= 0 )
        goto LABEL_9;
      _RDX = 2i64 * v28;
      __asm
      {
        vcvttss2si eax, xmm7
        vcvttss2si ecx, [rsp+rdx*8+4138h+var_4108]
      }
      if ( _EAX != _ECX )
        goto LABEL_9;
      __asm
      {
        vcvttss2si ecx, [rsp+rdx*8+4138h+var_4104]
        vcvttss2si eax, xmm0
      }
      if ( _EAX != _ECX )
      {
LABEL_9:
        if ( v27 )
        {
          __asm
          {
            vmulss  xmm1, xmm10, dword ptr [r15]
            vaddss  xmm3, xmm1, xmm11
            vxorps  xmm4, xmm4, xmm4
            vroundss xmm1, xmm4, xmm3, 1
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm10, dword ptr [r15+4]
            vaddss  xmm3, xmm1, xmm11
            vroundss xmm1, xmm4, xmm3, 1
          }
          _RDX = v28;
          if ( _ECX > 255 )
            _ECX = 255;
          v68 = _ECX < 0;
          v69 = _ECX;
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm10, dword ptr [r15+8]
          }
          if ( v68 )
            v69 = 0;
          verts[v28].xyz.v[2] = 0.0;
          __asm { vaddss  xmm3, xmm1, xmm11 }
          if ( _ECX > 255 )
            _ECX = 255;
          __asm
          {
            vmovss  dword ptr [rsp+rdx*8+4138h+verts.xyz], xmm7
            vmovss  dword ptr [rsp+rdx*8+4138h+verts.xyz+4], xmm0
          }
          verts[v28].color[0] = v69;
          v73 = _ECX;
          if ( _ECX < 0 )
            v73 = 0;
          verts[v28].color[1] = v73;
          __asm
          {
            vroundss xmm1, xmm4, xmm3, 1
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm10, dword ptr [r15+0Ch]
            vaddss  xmm3, xmm1, xmm11
          }
          if ( _ECX > 255 )
            _ECX = 255;
          v78 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v78 = 0;
          __asm { vcvttss2si ecx, xmm1 }
          verts[v28].color[2] = v78;
          if ( _ECX > 255 )
            _ECX = 255;
          v81 = _ECX;
          if ( _ECX < 0 )
            v81 = 0;
          ++v28;
          verts[_RDX].color[3] = v81;
        }
        if ( v27 != _ER14 )
        {
          __asm
          {
            vmulss  xmm1, xmm10, dword ptr [r15]
            vaddss  xmm3, xmm1, xmm11
            vxorps  xmm4, xmm4, xmm4
            vroundss xmm1, xmm4, xmm3, 1
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm10, dword ptr [r15+4]
            vaddss  xmm3, xmm1, xmm11
            vroundss xmm1, xmm4, xmm3, 1
          }
          _RDX = v28;
          if ( _ECX > 255 )
            _ECX = 255;
          v68 = _ECX < 0;
          v91 = _ECX;
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm10, dword ptr [r15+8]
          }
          if ( v68 )
            v91 = 0;
          verts[v28].xyz.v[2] = 0.0;
          __asm { vaddss  xmm3, xmm1, xmm11 }
          if ( _ECX > 255 )
            _ECX = 255;
          __asm
          {
            vmovss  dword ptr [rsp+rdx*8+4138h+verts.xyz], xmm7
            vmovss  dword ptr [rsp+rdx*8+4138h+verts.xyz+4], xmm0
          }
          verts[v28].color[0] = v91;
          v95 = _ECX;
          if ( _ECX < 0 )
            v95 = 0;
          verts[v28].color[1] = v95;
          __asm
          {
            vroundss xmm1, xmm4, xmm3, 1
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm10, dword ptr [r15+0Ch]
            vaddss  xmm3, xmm1, xmm11
          }
          if ( _ECX > 255 )
            _ECX = 255;
          v100 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v100 = 0;
          __asm { vcvttss2si ecx, xmm1 }
          verts[v28].color[2] = v100;
          if ( _ECX > 255 )
            _ECX = 255;
          v103 = _ECX;
          if ( _ECX < 0 )
            v103 = 0;
          ++v28;
          verts[_RDX].color[3] = v103;
        }
      }
      __asm { vmovss  xmm3, [rsp+4138h+var_4108] }
      ++v27;
    }
    while ( v27 < dataSize );
    __asm
    {
      vmovaps xmm15, [rsp+4138h+var_E8]
      vmovaps xmm11, [rsp+4138h+var_A8]
      vmovaps xmm10, [rsp+4138h+var_98]
      vmovaps xmm9, [rsp+4138h+var_88]
      vmovaps xmm8, [rsp+4138h+var_78]
      vmovaps xmm7, [rsp+4138h+var_68]
      vmovaps xmm6, [rsp+4138h+var_58]
    }
    if ( v28 > 1 )
      R_AddCmdDrawLines2D(v28 / 2, 1u, verts);
  }
  __asm
  {
    vmovaps xmm12, [rsp+4138h+var_B8]
    vmovaps xmm13, [rsp+4138h+var_C8]
    vmovaps xmm14, [rsp+4138h+var_D8]
  }
}

/*
==============
Physics_DebugDrawGraphXLine
==============
*/

void __fastcall Physics_DebugDrawGraphXLine(const ScreenPlacement *scrPlace, float x, double y, double width, float height, float yMin, float yMax, float xValue, const vec4_t *color)
{
  float v14; 
  float v15; 

  __asm
  {
    vmulss  xmm0, xmm3, [rsp+58h+xValue]
    vsubss  xmm4, xmm2, [rsp+58h+height]
    vaddss  xmm1, xmm0, xmm1; p1x
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+58h+var_30], xmm0
    vmovaps xmm3, xmm1; p2x
    vmovss  [rsp+58h+var_38], xmm4
  }
  CG_Draw2DLine(scrPlace, *(float *)&_XMM1, *(float *)&y, *(float *)&_XMM3, v14, v15, 1, 1, color, cgMedia.whiteMaterial);
}

/*
==============
Physics_DebugDrawGraphYLine
==============
*/

void __fastcall Physics_DebugDrawGraphYLine(const ScreenPlacement *scrPlace, double x, double y, float width, float height, float yMin, float yMax, float yValue, const vec4_t *color)
{
  float v18; 
  float v19; 

  __asm
  {
    vmovss  xmm0, [rsp+58h+yValue]
    vmovss  xmm4, [rsp+58h+yMax]
    vsubss  xmm0, xmm0, [rsp+58h+yMin]
    vsubss  xmm5, xmm4, [rsp+58h+yMin]
    vdivss  xmm0, xmm0, xmm5
    vmulss  xmm4, xmm0, [rsp+58h+height]
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm2, xmm2, xmm4; p1y
    vmovss  [rsp+58h+var_30], xmm0
    vaddss  xmm3, xmm1, xmm3; p2x
    vmovss  [rsp+58h+var_38], xmm2
  }
  CG_Draw2DLine(scrPlace, *(float *)&x, *(float *)&_XMM2, *(float *)&_XMM3, v18, v19, 1, 1, color, cgMedia.whiteMaterial);
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

