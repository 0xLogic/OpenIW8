/*
==============
RB_IsUsingAnyProfile
==============
*/

bool __fastcall RB_IsUsingAnyProfile()
{
  return ?RB_IsUsingAnyProfile@@YA_NXZ();
}

/*
==============
RB_DrawProfile
==============
*/

void __fastcall RB_DrawProfile(GfxCmdBufContext *gfxContext)
{
  ?RB_DrawProfile@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_ProfileDevGui
==============
*/

void RB_ProfileDevGui(void)
{
  ?RB_ProfileDevGui@@YAXXZ();
}

/*
==============
RB_DrawProfileScript
==============
*/

void __fastcall RB_DrawProfileScript(GfxCmdBufContext *gfxContext)
{
  ?RB_DrawProfileScript@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_GetNextProfileChild
==============
*/

int __fastcall RB_GetNextProfileChild(const scrContext_t *scrContext, int parentIndex, int prevChildIndex, int depth)
{
  return ?RB_GetNextProfileChild@@YAHAEBUscrContext_t@@HHH@Z(scrContext, parentIndex, prevChildIndex, depth);
}

/*
==============
RB_DrawProfileScriptLineAndChildren
==============
*/

void __fastcall RB_DrawProfileScriptLineAndChildren(GfxCmdBufContext *gfxContext, const scrContext_t *scrContext, int profileIndex, float *y, int depth)
{
  ?RB_DrawProfileScriptLineAndChildren@@YAXUGfxCmdBufContext@@AEBUscrContext_t@@HPEAMH@Z(gfxContext, scrContext, profileIndex, y, depth);
}

/*
==============
RB_DrawProfile2
==============
*/

void __fastcall RB_DrawProfile2(GfxCmdBufContext *gfxContext)
{
  ?RB_DrawProfile2@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_DrawProfileScriptLine
==============
*/

void __fastcall RB_DrawProfileScriptLine(GfxCmdBufContext *gfxContext, const scrContext_t *scrContext, int profileIndex, float y, int tab)
{
  ?RB_DrawProfileScriptLine@@YAXUGfxCmdBufContext@@AEBUscrContext_t@@HMH@Z(gfxContext, scrContext, profileIndex, y, tab);
}

/*
==============
RB_ProfileInit
==============
*/

void RB_ProfileInit(void)
{
  ?RB_ProfileInit@@YAXXZ();
}

/*
==============
CompareAvgSelfTimes
==============
*/

__int64 __fastcall CompareAvgSelfTimes(const void *e0, const void *e1, __int64 a3, double _XMM3_8)
{
  __int64 v4; 
  __int64 v5; 
  double v9; 
  double v12; 

  v4 = *(int *)e0;
  v5 = *(int *)e1;
  _XMM0 = 0i64;
  __asm
  {
    vcvtsi2sd xmm0, xmm0, dword ptr [rdx+rax+58C8h]
    vxorpd  xmm3, xmm3, xmm3
  }
  v9 = *(double *)&_XMM0 * drawProfGlob.global[v5].selfClks;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rcx+rax+58C8h] }
  v12 = *(double *)&_XMM0 * drawProfGlob.global[v4].selfClks;
  if ( v9 - v12 < *(double *)&_XMM3 )
    return 0xFFFFFFFFi64;
  if ( v9 - v12 <= *(double *)&_XMM3 )
    return (unsigned int)(v5 - v4);
  return 1i64;
}

/*
==============
CompareAvgTotalTimes
==============
*/

__int64 __fastcall CompareAvgTotalTimes(const void *e0, const void *e1, __int64 a3, double _XMM3_8)
{
  __int64 v4; 
  __int64 v5; 
  double v9; 
  double v12; 

  v4 = *(int *)e0;
  v5 = *(int *)e1;
  _XMM0 = 0i64;
  __asm
  {
    vcvtsi2sd xmm0, xmm0, dword ptr [rdx+rax+58C8h]
    vxorpd  xmm3, xmm3, xmm3
  }
  v9 = *(double *)&_XMM0 * drawProfGlob.global[v5].totalClks;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rcx+rax+58C8h] }
  v12 = *(double *)&_XMM0 * drawProfGlob.global[v4].totalClks;
  if ( v9 - v12 < *(double *)&_XMM3 )
    return 0xFFFFFFFFi64;
  if ( v9 - v12 <= *(double *)&_XMM3 )
    return (unsigned int)(v5 - v4);
  return 1i64;
}

/*
==============
CompareMaxSelfTimes
==============
*/
__int64 CompareMaxSelfTimes(const void *e0, const void *e1)
{
  _XMM0 = 0i64;
  __asm
  {
    vxorpd  xmm1, xmm1, xmm1
    vcvtsi2sd xmm0, xmm0, eax
  }
  if ( *(double *)&_XMM0 < *(double *)&_XMM1 )
    return 0xFFFFFFFFi64;
  if ( *(double *)&_XMM0 <= *(double *)&_XMM1 )
    return (unsigned int)(*(_DWORD *)e1 - *(_DWORD *)e0);
  return 1i64;
}

/*
==============
CompareMaxTimes
==============
*/
__int64 CompareMaxTimes(const void *e0, const void *e1)
{
  _XMM0 = 0i64;
  __asm
  {
    vxorpd  xmm1, xmm1, xmm1
    vcvtsi2sd xmm0, xmm0, eax
  }
  if ( *(double *)&_XMM0 < *(double *)&_XMM1 )
    return 0xFFFFFFFFi64;
  if ( *(double *)&_XMM0 <= *(double *)&_XMM1 )
    return (unsigned int)(*(_DWORD *)e1 - *(_DWORD *)e0);
  return 1i64;
}

/*
==============
CompareSelfTimes
==============
*/
__int64 CompareSelfTimes(const void *e0, const void *e1)
{
  __int64 v2; 
  __int64 v3; 
  __int64 result; 

  v2 = *(int *)e1;
  v3 = *(int *)e0;
  result = drawProfGlob.global[v2].read.self.value[0] - drawProfGlob.global[v3].read.self.value[0];
  if ( !(_DWORD)result )
    return (unsigned int)(v2 - v3);
  return result;
}

/*
==============
CompareTotalTimes
==============
*/
__int64 CompareTotalTimes(const void *e0, const void *e1)
{
  __int64 v2; 
  __int64 v3; 
  __int64 result; 

  v2 = *(int *)e1;
  v3 = *(int *)e0;
  result = drawProfGlob.global[v2].read.total.value[0] - drawProfGlob.global[v3].read.total.value[0];
  if ( !(_DWORD)result )
    return (unsigned int)(v2 - v3);
  return result;
}

/*
==============
RB_AddProfileThread
==============
*/
void RB_AddProfileThread(int threadContext)
{
  ProfileStack *StackForContext; 
  ProfileAtom *p_self; 
  ProfileAtom *p_total; 
  unsigned int v4; 

  StackForContext = Profile_GetStackForContext(threadContext);
  p_self = &drawProfGlob.global[0].read.self;
  p_total = &StackForContext->prof_array[0].read.total;
  do
  {
    v4 = p_total[-1].value[0];
    p_total += 10;
    p_self[-11].value[0] += v4;
    p_self->value[0] += p_total[-9].value[0];
    p_self[-1].value[0] += p_total[-10].value[0];
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    *(double *)p_self[-8].value = *(double *)&_XMM0 + *(double *)p_self[-8].value;
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    *(double *)p_self[-10].value = *(double *)&_XMM0 + *(double *)p_self[-10].value;
    p_self[-2].value[0] += p_total[-11].value[0];
    p_self += 14;
  }
  while ( (__int64)p_self < (__int64)&unk_1544A76E8 );
}

/*
==============
RB_DrawAllProfileBackgrounds
==============
*/
void RB_DrawAllProfileBackgrounds(GfxCmdBufContext *gfxContext, const ProfileSettings *profSettings, int rowCount)
{
  __int128 v6; 
  __int128 fontHeight_low; 
  int v8; 
  float fontHeight; 
  __int64 v10; 
  __int128 v11; 
  int v12; 
  GfxCmdBufContext v13[7]; 

  if ( profSettings && profSettings->infoCount != rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 376, ASSERT_TYPE_ASSERT, "(profSettings == 0 || profSettings->infoCount == rowCount)", (const char *)&queryFormat, "profSettings == NULL || profSettings->infoCount == rowCount") )
    __debugbreak();
  fontHeight_low = LODWORD(drawProfGlob.fontHeight);
  *(float *)&fontHeight_low = drawProfGlob.fontHeight * 5.0;
  v6 = fontHeight_low;
  v13[0] = *gfxContext;
  RB_DrawStretchPic(v13, rgp.whiteMaterial, 14.5 * drawProfGlob.fontWidth, (float)(drawProfGlob.fontHeight * 5.0) + 1.0, 114.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight - 2.0, 0.0, 0.0, 1.0, 1.0, 0xA5000000, GFX_PRIM_STATS_DEBUG);
  v8 = 0;
  if ( rowCount > 0 )
  {
    fontHeight = drawProfGlob.fontHeight;
    v10 = 0i64;
    do
    {
      v11 = v6;
      *(float *)&v11 = *(float *)&v6 + fontHeight;
      v6 = v11;
      if ( !profSettings || profSettings->profDrawInfo[v10].probeIndex )
      {
        v12 = (v8 & 1) != 0 ? 0x28 : 0;
        v13[0] = *gfxContext;
        RB_DrawStretchPic(v13, rgp.whiteMaterial, 14.5 * drawProfGlob.fontWidth, *(float *)&v11 + 1.0, 114.0 * drawProfGlob.fontWidth, fontHeight - 2.0, 0.0, 0.0, 1.0, 1.0, v12 | ((v12 | ((((v8 & 1) != 0 ? 0x28 : 0) | 0xFFFFA500) << 8)) << 8), GFX_PRIM_STATS_DEBUG);
        fontHeight = drawProfGlob.fontHeight;
      }
      ++v8;
      ++v10;
    }
    while ( v8 < rowCount );
  }
}

/*
==============
RB_DrawProfile2
==============
*/
void RB_DrawProfile2(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufContext v1; 

  if ( profile2->current.integer )
  {
    v1 = *gfxContext;
    RB_DrawProfile2Overlay(&v1);
  }
}

/*
==============
RB_DrawProfile2Overlay
==============
*/
void RB_DrawProfile2Overlay(GfxCmdBufContext *gfxContext)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  float v8; 
  __int64 integer; 
  const ProfileSettings *v10; 
  float v11; 
  int v12; 
  __int64 v13; 
  const ProfileDrawInfo *v14; 
  float v15; 
  GfxCmdBufContext v16; 

  v2 = (backEndData->prof_index + 4) % 5u;
  v3 = g_prof2_history_update_times[(v2 + 4) % 5u];
  v4 = g_prof2_history_update_times[v2] - v3;
  if ( v4 )
  {
    if ( v3 )
    {
      v5 = (g_prof2_history_update_server_index[v2] + 4) % 5u;
      v6 = g_prof2_history_server_update_times[(v5 + 4) % 5u];
      v7 = g_prof2_history_server_update_times[v5] - v6;
      if ( v7 )
      {
        if ( v6 )
        {
          v16 = *gfxContext;
          RB_EndSurfaceIfNeeded(&v16);
          v8 = drawProfGlob.fontHeight * 5.0;
          integer = profile2->current.integer;
          v16 = *gfxContext;
          v10 = (const ProfileSettings *)&s_profileArrays[integer + 42].defaultProbeIndex[1];
          RB_DrawStretchPic(&v16, rgp.whiteMaterial, drawProfGlob.fontWidth * 9.5, drawProfGlob.fontHeight * 5.0, drawProfGlob.fontWidth * 42.0, drawProfGlob.fontHeight, 0.0, 0.0, 1.0, 1.0, 0xAF000000, GFX_PRIM_STATS_DEBUG);
          v16 = *gfxContext;
          RB_DrawText(&v16, "Probe Name", drawProfGlob.font, drawProfGlob.fontWidth * 10.0, v8 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
          v16 = *gfxContext;
          RB_DrawText(&v16, " Total", drawProfGlob.font, drawProfGlob.fontWidth * 45.0, v8 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
          v11 = drawProfGlob.fontHeight + v8;
          if ( profile2->current.integer != 2 )
          {
            v12 = 0;
            if ( v10->infoCount > 0 )
            {
              v13 = 0i64;
              do
              {
                v14 = &v10->profDrawInfo[v13];
                v16 = *gfxContext;
                if ( v14->probeIndex <= 100 )
                  v15 = RB_DrawProfile2Row(&v16, v14, v11, v4, NULL, v2);
                else
                  v15 = RB_DrawProfile2Row(&v16, v14, v11, v7, NULL, v5);
                ++v12;
                ++v13;
                v11 = v15;
              }
              while ( v12 < v10->infoCount );
            }
          }
          if ( v10->infoCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 790, ASSERT_TYPE_ASSERT, "(profSettings->infoCount > 0)", (const char *)&queryFormat, "profSettings->infoCount > 0") )
            __debugbreak();
          if ( profile2->current.integer == 2 )
          {
            v16 = *gfxContext;
            RB_DrawProfile2_FX(&v16, v10, v11, v4, v2);
          }
          v16 = *gfxContext;
          RB_EndSurfaceIfNeeded(&v16);
        }
      }
    }
  }
}

/*
==============
RB_DrawProfile2Row
==============
*/
float RB_DrawProfile2Row(GfxCmdBufContext *gfxContext, const ProfileDrawInfo *drawInfo, float y, int time_delta, const float *timeBudgetMS, int history_index)
{
  __int64 probeIndex; 
  float v12; 
  float v13; 
  float v16; 
  int colorIndex; 
  const char *v18; 
  int indentation; 
  const char *v20; 
  int v21; 
  int v22; 
  GfxCmdBufContext v23; 

  probeIndex = drawInfo->probeIndex;
  if ( (_DWORD)probeIndex )
  {
    v12 = (float)g_prof2_history[history_index][probeIndex];
    if ( v12 != 0.0 || *prof2_enumNames[probeIndex] == 95 )
    {
      if ( timeBudgetMS )
      {
        v13 = *timeBudgetMS;
        _XMM1 = *(unsigned __int64 *)&msecPerRawTimerTick;
        __asm { vcvtpd2ps xmm1, xmm1 }
        v16 = (float)(*(float *)&_XMM1 / (float)profile2_frames->current.integer) * v12;
        colorIndex = drawInfo->colorIndex;
        if ( v16 <= *timeBudgetMS )
        {
          if ( v16 > (float)(v13 * 0.80000001) )
            colorIndex = 12;
        }
        else
        {
          colorIndex = 4;
        }
        v18 = j_va("%s (%.2f ms)", prof2_enumNames[probeIndex], v13);
        indentation = drawInfo->indentation;
        v23 = *gfxContext;
        return RB_DrawProfile2Value(&v23, indentation, colorIndex, y, time_delta, v12, v18, 0, 0);
      }
      else
      {
        v20 = prof2_enumNames[probeIndex];
        v21 = drawInfo->colorIndex;
        v22 = drawInfo->indentation;
        v23 = *gfxContext;
        return RB_DrawProfile2Value(&v23, v22, v21, y, time_delta, v12, v20, 0, 0);
      }
    }
    else
    {
      return y;
    }
  }
  else
  {
    v23 = *gfxContext;
    RB_DrawStretchPic(&v23, rgp.whiteMaterial, drawProfGlob.fontWidth * 9.5, y, drawProfGlob.fontWidth * 42.0, drawProfGlob.fontHeight, 0.0, 0.0, 1.0, 1.0, 0xAF000000, GFX_PRIM_STATS_DEBUG);
    return y + drawProfGlob.fontHeight;
  }
}

/*
==============
RB_DrawProfile2Total_FX
==============
*/
float RB_DrawProfile2Total_FX(GfxCmdBufContext *gfxContext, int indentation, float y, int time_delta, int history_index)
{
  __int64 v5; 
  float v9; 
  float v10; 
  const char *v12; 
  float v15; 
  int v16; 
  int v17; 
  float v18; 
  float v19; 
  const char *v20; 
  float v23; 
  int v24; 
  float v25; 
  float v26; 
  const char *v27; 
  float v30; 
  GfxCmdBufContext v31; 

  v5 = history_index;
  v10 = (float)((float)((float)((float)((float)g_prof2_history[v5][71] + (float)g_prof2_history[v5][77]) + (float)g_prof2_history[v5][78]) + (float)g_prof2_history[v5][83]) + (float)g_prof2_history[v5][84]) + (float)g_prof2_history[v5][89];
  v9 = v10;
  if ( v10 == 0.0 )
    return y;
  v12 = j_va("FX UPDATE CPU TOTAL (%.2f ms)", DOUBLE_6_875);
  _XMM1 = *(unsigned __int64 *)&msecPerRawTimerTick;
  __asm { vcvtpd2ps xmm1, xmm1 }
  v15 = (float)(*(float *)&_XMM1 / (float)profile2_frames->current.integer) * v10;
  v16 = 4;
  if ( v15 <= 6.875 )
  {
    v17 = 0;
    if ( v15 > 5.5 )
      v17 = 12;
  }
  else
  {
    v17 = 4;
  }
  v31 = *gfxContext;
  v18 = RB_DrawProfile2Value(&v31, indentation, v17, y, time_delta, v9, v12, 0, 0);
  v19 = (float)g_prof2_history[v5][85] + (float)g_prof2_history[v5][87];
  v20 = j_va("FX DRAW CPU TOTAL (%.2f ms)", DOUBLE_3_125);
  _XMM1 = *(unsigned __int64 *)&msecPerRawTimerTick;
  __asm { vcvtpd2ps xmm1, xmm1 }
  v23 = (float)(*(float *)&_XMM1 / (float)profile2_frames->current.integer) * v19;
  if ( v23 <= 3.125 )
  {
    v24 = 0;
    if ( v23 > 2.5 )
      v24 = 12;
  }
  else
  {
    v24 = 4;
  }
  v31 = *gfxContext;
  v25 = RB_DrawProfile2Value(&v31, indentation, v24, v18, time_delta, v19, v20, 0, 0);
  v26 = v19 + v9;
  v27 = j_va("FX CPU TOTAL (%.2f ms)", DOUBLE_10_0);
  _XMM2 = *(unsigned __int64 *)&msecPerRawTimerTick;
  __asm { vcvtpd2ps xmm2, xmm2 }
  v30 = (float)(*(float *)&_XMM2 / (float)profile2_frames->current.integer) * v26;
  if ( v30 <= 10.0 )
  {
    v16 = 0;
    if ( v30 > 8.0 )
      v16 = 12;
  }
  v31 = *gfxContext;
  return RB_DrawProfile2Value(&v31, indentation, v16, v25, time_delta, v26, v27, 0, 0);
}

/*
==============
RB_DrawProfile2Value
==============
*/
float RB_DrawProfile2Value(GfxCmdBufContext *gfxContext, int indentation, int colorIndex, float y, int time_delta, float value, const char *name, int dmaMax, int stackMin)
{
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  GfxColor v13; 
  const char *v14; 
  float v17; 
  const char *v18; 
  GfxColor v19; 
  const char *v20; 
  GfxColor v21; 
  const char *v22; 
  GfxCmdBufContext v24; 
  char dest[48]; 

  v11 = colorIndex;
  Core_strncpy_truncate(dest, 0x2Fui64, name, 46i64 - indentation);
  v24 = *gfxContext;
  RB_DrawStretchPic(&v24, rgp.whiteMaterial, drawProfGlob.fontWidth * 9.5, y, drawProfGlob.fontWidth * 42.0, drawProfGlob.fontHeight, 0.0, 0.0, 1.0, 1.0, 0xAF000000, GFX_PRIM_STATS_DEBUG);
  v24 = *gfxContext;
  v12 = v11 % 0xE;
  RB_DrawText(&v24, dest, drawProfGlob.font, (float)(indentation + 10) * drawProfGlob.fontWidth, y + drawProfGlob.fontHeight, drawProfGlob.textColorList[v12]);
  if ( value != 0.0 || *name != 95 )
  {
    v13 = drawProfGlob.textColorList[v12];
    if ( profile2_mode->current.integer == 1 )
    {
      v14 = "%5.2f";
      _XMM1 = *(unsigned __int64 *)&msecPerRawTimerTick;
      __asm { vcvtpd2ps xmm1, xmm1 }
      v17 = value * (float)(*(float *)&_XMM1 / (float)profile2_frames->current.integer);
    }
    else
    {
      v17 = (float)(100.0 / (float)time_delta) * value;
      v14 = "%5.2f%%";
    }
    v18 = j_va(v14, v17);
    v24 = *gfxContext;
    RB_DrawText(&v24, v18, drawProfGlob.font, drawProfGlob.fontWidth * 45.0, y + drawProfGlob.fontHeight, v13);
    if ( dmaMax )
    {
      v19 = drawProfGlob.textColorList[v12];
      v20 = j_va("% 5d", (unsigned int)dmaMax);
      v24 = *gfxContext;
      RB_DrawText(&v24, v20, drawProfGlob.font, drawProfGlob.fontWidth * 90.0, y + drawProfGlob.fontHeight, v19);
    }
    if ( stackMin )
    {
      v21 = drawProfGlob.textColorList[v12];
      v22 = j_va("% 5d", (unsigned int)stackMin);
      v24 = *gfxContext;
      RB_DrawText(&v24, v22, drawProfGlob.font, drawProfGlob.fontWidth * 96.0, y + drawProfGlob.fontHeight, v21);
    }
  }
  return y + drawProfGlob.fontHeight;
}

/*
==============
RB_DrawProfile2_FX
==============
*/
float RB_DrawProfile2_FX(GfxCmdBufContext *gfxContext, const ProfileSettings *profSettings, float y, int time_delta, int history_index)
{
  GfxCmdBufContext v5; 
  GfxCmdBufContext v6; 
  GfxCmdBufContext v7; 
  GfxCmdBufContext v8; 
  int infoCount; 
  int v14; 
  int v15; 
  __int64 v16; 
  const ProfileDrawInfo *v17; 
  float v18; 
  const ProfileDrawInfo *profDrawInfo; 
  __int64 v20; 
  int indentation; 
  const float *fmt; 
  int v24; 
  GfxCmdBufContext v25[6]; 
  float v26; 

  if ( !profSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 643, ASSERT_TYPE_ASSERT, "(profSettings)", (const char *)&queryFormat, "profSettings") )
    __debugbreak();
  infoCount = profSettings->infoCount;
  v14 = 0;
  v15 = history_index;
  if ( infoCount > 0 )
  {
    v16 = 0i64;
    v25[4] = v5;
    v25[3] = v6;
    v25[2] = v7;
    v25[1] = v8;
    do
    {
      v17 = &profSettings->profDrawInfo[v16];
      switch ( v17->probeIndex )
      {
        case 'G':
          v24 = v15;
          fmt = &v26;
          v26 = FLOAT_3_75;
          break;
        case 'N':
        case 'Y':
          v24 = v15;
          fmt = &v26;
          v26 = FLOAT_1_25;
          break;
        case 'T':
        case 'U':
          v24 = v15;
          fmt = &v26;
          v26 = FLOAT_0_625;
          break;
        case 'W':
          v24 = v15;
          fmt = &v26;
          v26 = FLOAT_2_5;
          break;
        default:
          v24 = v15;
          fmt = NULL;
          break;
      }
      v25[0] = *gfxContext;
      v18 = RB_DrawProfile2Row(v25, v17, y, time_delta, fmt, v24);
      infoCount = profSettings->infoCount;
      ++v14;
      ++v16;
      y = v18;
    }
    while ( v14 < infoCount );
  }
  profDrawInfo = profSettings->profDrawInfo;
  v20 = infoCount;
  if ( profDrawInfo[infoCount - 1].probeIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 703, ASSERT_TYPE_ASSERT, "(profDrawInfo->probeIndex == PROF2_BLANK)", (const char *)&queryFormat, "profDrawInfo->probeIndex == PROF2_BLANK") )
    __debugbreak();
  indentation = profDrawInfo[v20 - 1].indentation;
  v25[0] = *gfxContext;
  return RB_DrawProfile2Total_FX(v25, indentation, y, time_delta, v15);
}

/*
==============
RB_DrawProfile
==============
*/
void RB_DrawProfile(GfxCmdBufContext *gfxContext)
{
  const dvar_t *v1; 
  GfxCmdBufContext *v2; 
  int integer; 
  int v4; 
  int v5; 
  const dvar_t **i; 
  ProfileReadable *p_read; 
  __int64 v8; 
  ProfileAtom *p_min; 
  __int64 v10; 
  int DisplayThread; 
  int j; 
  ProfileStack *StackForContext; 
  ProfileAtom *p_self; 
  ProfileAtom *p_total; 
  unsigned int v16; 
  unsigned int *p_maxHits; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  int v25; 
  GfxCmdBufContext v26; 
  int *v27; 
  __int128 v28; 
  __int128 fontWidth_low; 
  float v30; 
  __int64 v31; 
  int EnumParity; 
  __int128 v33; 
  int *v34; 
  __int128 v35; 
  __int128 v36; 
  float v37; 
  __int64 v38; 
  __int64 v39; 
  const char *v40; 
  unsigned __int64 v43; 
  __int128 v44; 
  const ProfileSettings *v45; 
  float v46; 
  float v47; 
  __int64 v48; 
  const ProfileDrawInfo *profDrawInfo; 
  float v50; 
  GfxCmdBufContext v52; 
  GfxCmdBufContext v53; 
  GfxCmdBufContext v54; 
  GfxCmdBufContext v55; 
  GfxCmdBufContext v56; 
  GfxCmdBufContext v57; 
  GfxCmdBufContext v58; 
  GfxCmdBufContext v59; 
  GfxCmdBufContext v60; 
  GfxCmdBufContext v61; 
  GfxCmdBufContext v62; 
  GfxCmdBufContext v63; 
  GfxCmdBufContext v64; 
  GfxCmdBufContext v65; 
  GfxCmdBufContext v66; 
  GfxCmdBufContext v67; 
  int v68[16]; 
  char dest[112]; 

  v1 = profile;
  v2 = gfxContext;
  integer = profile->current.integer;
  if ( integer )
  {
    v4 = 0;
    if ( integer == 1 )
    {
      v5 = 0;
      for ( i = prof_probe; !(*i)->current.integer; ++i )
      {
        if ( (unsigned int)++v5 >= 0x10 )
          return;
      }
    }
    if ( profile_thread->modified || profile->modified )
    {
      memset_0(drawProfGlob.global, 0, sizeof(drawProfGlob.global));
      p_min = &drawProfGlob.global[0].min;
      v10 = 826i64;
      do
      {
        p_min->value[0] = -1;
        p_min += 14;
        --v10;
      }
      while ( v10 );
      Dvar_ClearModified(v1);
      Dvar_ClearModified(profile_thread);
    }
    else
    {
      p_read = &drawProfGlob.global[0].read;
      v8 = 826i64;
      do
      {
        *(_QWORD *)&p_read->hits = 0i64;
        p_read->self.value[0] = 0;
        p_read = (ProfileReadable *)((char *)p_read + 56);
        --v8;
      }
      while ( v8 );
    }
    DisplayThread = Profile_GetDisplayThread();
    if ( DisplayThread >= gfxCfg.threadContextCount )
    {
      for ( j = 0; j < gfxCfg.threadContextCount; ++j )
      {
        StackForContext = Profile_GetStackForContext(j);
        p_self = &drawProfGlob.global[0].read.self;
        p_total = &StackForContext->prof_array[0].read.total;
        do
        {
          v16 = p_total[-1].value[0];
          p_total += 10;
          p_self[-11].value[0] += v16;
          p_self->value[0] += p_total[-9].value[0];
          p_self[-1].value[0] += p_total[-10].value[0];
          _XMM0 = 0i64;
          __asm { vcvtsi2sd xmm0, xmm0, rax }
          *(double *)p_self[-8].value = *(double *)&_XMM0 + *(double *)p_self[-8].value;
          _XMM0 = 0i64;
          __asm { vcvtsi2sd xmm0, xmm0, rax }
          *(double *)p_self[-10].value = *(double *)&_XMM0 + *(double *)p_self[-10].value;
          p_self[-2].value[0] += p_total[-11].value[0];
          p_self += 14;
        }
        while ( (__int64)p_self < (__int64)&unk_1544A76E8 );
      }
    }
    else
    {
      RB_AddProfileThread(DisplayThread);
    }
    p_maxHits = &drawProfGlob.global[0].maxHits;
    do
    {
      ++*(p_maxHits - 7);
      v22 = p_maxHits[4];
      if ( p_maxHits[2] < v22 )
        p_maxHits[2] = v22;
      if ( p_maxHits[1] > v22 )
        p_maxHits[1] = v22;
      v23 = p_maxHits[3];
      if ( v23 > *p_maxHits )
        *p_maxHits = v23;
      v24 = p_maxHits[5];
      if ( *(p_maxHits - 1) < v24 )
        *(p_maxHits - 1) = v24;
      p_maxHits += 14;
    }
    while ( (__int64)p_maxHits < (__int64)&unk_1544A76D4 );
    v52 = *v2;
    RB_EndSurfaceIfNeeded(&v52);
    v25 = profile->current.integer;
    switch ( v25 )
    {
      case 1:
        v26 = *v2;
        v59 = *v2;
        RB_EndSurfaceIfNeeded(&v59);
        v27 = v68;
        v68[0] = prof_probe[0]->current.integer;
        fontWidth_low = LODWORD(drawProfGlob.fontWidth);
        *(float *)&fontWidth_low = drawProfGlob.fontWidth * 14.5;
        v28 = fontWidth_low;
        v68[1] = prof_probe[1]->current.integer;
        v68[2] = prof_probe[2]->current.integer;
        v68[3] = prof_probe[3]->current.integer;
        v68[4] = prof_probe[4]->current.integer;
        v68[5] = prof_probe[5]->current.integer;
        v68[6] = prof_probe[6]->current.integer;
        v68[7] = prof_probe[7]->current.integer;
        v68[8] = prof_probe[8]->current.integer;
        v68[9] = prof_probe[9]->current.integer;
        v68[10] = prof_probe[10]->current.integer;
        v68[11] = prof_probe[11]->current.integer;
        v68[12] = prof_probe[12]->current.integer;
        v68[13] = prof_probe[13]->current.integer;
        v68[14] = prof_probe[14]->current.integer;
        v68[15] = prof_probe[15]->current.integer;
        v30 = (float)(vidConfig.displayHeight - 98);
        do
        {
          v31 = *v27;
          if ( (_DWORD)v31 )
          {
            EnumParity = Profile_GetEnumParity(v31);
            v60 = v26;
            RB_DrawProfileHistoryGraph(&v60, &drawProfGlob.global[v31].read, EnumParity, v4, *(float *)&v28, v30);
            v33 = v28;
            *(float *)&v33 = *(float *)&v28 + 104.0;
            v28 = v33;
          }
          ++v4;
          ++v27;
        }
        while ( v4 < 16 );
        v34 = v68;
        v36 = LODWORD(drawProfGlob.fontWidth);
        *(float *)&v36 = drawProfGlob.fontWidth * 14.5;
        v35 = v36;
        v37 = (float)(vidConfig.displayHeight - 98);
        v38 = 16i64;
        do
        {
          v39 = *v34;
          if ( (_DWORD)v39 )
          {
            v40 = prof_enumNames[v39];
            _XMM0 = 0i64;
            __asm { vroundss xmm4, xmm0, xmm3, 1 }
            v43 = (int)*(float *)&_XMM4 + 1;
            if ( v43 > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 312, ASSERT_TYPE_ASSERT, "(charLimit <= ( sizeof( *array_counter( label ) ) + 0 ))", (const char *)&queryFormat, "charLimit <= ARRAY_COUNT( label )") )
              __debugbreak();
            Core_strncpy_truncate(dest, 0x64ui64, v40, v43);
            v61 = v26;
            RB_DrawText(&v61, dest, drawProfGlob.font, *(float *)&v35, v37, drawProfGlob.textColorList[0]);
            v44 = v35;
            *(float *)&v44 = *(float *)&v35 + 104.0;
            v35 = v44;
          }
          ++v34;
          --v38;
        }
        while ( v38 );
        v62 = v26;
        RB_EndSurfaceIfNeeded(&v62);
        v2 = gfxContext;
        break;
      case 2:
        v53 = *v2;
        RB_DrawSlowProfileOverlay(&v53, (int (__fastcall *)(const void *, const void *))CompareSelfTimes);
        break;
      case 3:
        v54 = *v2;
        RB_DrawSlowProfileOverlay(&v54, (int (__fastcall *)(const void *, const void *))CompareTotalTimes);
        break;
      case 4:
        v55 = *v2;
        RB_DrawSlowProfileOverlay(&v55, (int (__fastcall *)(const void *, const void *))CompareAvgSelfTimes);
        break;
      case 5:
        v56 = *v2;
        RB_DrawSlowProfileOverlay(&v56, (int (__fastcall *)(const void *, const void *))CompareAvgTotalTimes);
        break;
      case 6:
        v57 = *v2;
        RB_DrawSlowProfileOverlay(&v57, (int (__fastcall *)(const void *, const void *))CompareMaxTimes);
        break;
      case 7:
        v58 = *v2;
        RB_DrawSlowProfileOverlay(&v58, (int (__fastcall *)(const void *, const void *))CompareMaxSelfTimes);
        break;
      default:
        if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1083, ASSERT_TYPE_ASSERT, "(profile->current.integer != PROFPAGE_DISABLED)", (const char *)&queryFormat, "profile->current.integer != PROFPAGE_DISABLED") )
          __debugbreak();
        v63 = *v2;
        v45 = &s_profileArrays[profile->current.integer - 8];
        RB_DrawAllProfileBackgrounds(&v63, v45, v45->infoCount);
        v64 = *v2;
        RB_DrawProfileHistory(&v64, v45);
        v65 = *v2;
        v46 = RB_DrawProfileLabels(&v65);
        g_tally = 0.0;
        v47 = v46;
        if ( v45->infoCount > 0 )
        {
          v48 = 0i64;
          do
          {
            profDrawInfo = v45->profDrawInfo;
            v66 = *v2;
            v50 = RB_DrawProfileRow(&v66, profDrawInfo[v48].probeIndex, profDrawInfo[v48].indentation, v47);
            ++v4;
            ++v48;
            v47 = v50;
          }
          while ( v4 < v45->infoCount );
        }
        break;
    }
    v67 = *v2;
    RB_EndSurfaceIfNeeded(&v67);
  }
}

/*
==============
RB_DrawProfileGraphData
==============
*/
void RB_DrawProfileGraphData(GfxCmdBufContext *gfxContext, int column, float y, float width, unsigned int min, unsigned int max, float avg, const volatile unsigned int *data, unsigned int numDataEntries, unsigned int dataStartIdx)
{
  const volatile unsigned int *v11; 
  __int128 v12; 
  __int128 largeFontHeight_low; 
  float v14; 
  unsigned int v15; 
  float v16; 
  float v17; 
  float v18; 
  unsigned int v19; 
  float v20; 
  __int64 v22; 
  __int64 v23; 
  __int128 v24; 
  __int64 v26; 
  __int128 v28; 
  float v33; 
  __int128 v34; 
  __int128 v37; 
  float v41; 
  __int128 v42; 
  __int128 v45; 
  float v49; 
  float v50; 
  int v52; 
  int v54; 
  unsigned int v55; 
  int v57; 
  int v59; 
  GfxCmdBufContext v60; 
  float v61; 
  float v62; 
  float v65; 
  GfxCmdBufContext v66; 
  GfxPointVertex v67; 
  float v68; 
  float v69; 
  float v70; 
  unsigned int v71; 

  v11 = data;
  largeFontHeight_low = LODWORD(drawProfGlob.largeFontHeight);
  *(float *)&largeFontHeight_low = drawProfGlob.largeFontHeight - 2.0;
  v12 = largeFontHeight_low;
  v62 = (float)column * drawProfGlob.largeFontWidth;
  v14 = width;
  if ( numDataEntries < 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 201, ASSERT_TYPE_ASSERT, "(numDataEntries >= 2)", (const char *)&queryFormat, "numDataEntries >= 2") )
      __debugbreak();
    v11 = data;
  }
  v15 = 0;
  if ( numDataEntries != 1 )
  {
    v16 = avg;
    v17 = (float)max;
    v18 = (float)numDataEntries;
    v19 = max - min;
    v65 = 1.0 / v18;
    v61 = v17;
    v20 = 1.0 / v17;
    _XMM14 = 0i64;
    do
    {
      v22 = (v15 + dataStartIdx) % numDataEntries;
      v23 = v11[v22];
      v24 = 0i64;
      *(float *)&v24 = (float)v23;
      *(float *)&v24 = (float)(*(float *)&v24 - v16) * v20;
      _XMM2 = v24;
      v26 = v11[((int)v22 + 1) % numDataEntries];
      __asm { vmaxss  xmm0, xmm2, xmm6 }
      v28 = 0i64;
      *(float *)&v28 = (float)v26;
      __asm { vminss  xmm11, xmm0, xmm12 }
      *(float *)&v28 = (float)(*(float *)&v28 - v16) * v20;
      _XMM2 = v28;
      __asm
      {
        vmaxss  xmm1, xmm2, xmm6
        vminss  xmm13, xmm1, xmm12
      }
      if ( v17 <= 0.0 )
      {
        LODWORD(_XMM8) = 0;
      }
      else
      {
        v33 = (float)(((unsigned int)v23 - min) / v19);
        v34 = LODWORD(FLOAT_1_0);
        *(float *)&v34 = (float)(1.0 - v33) * *(float *)&v12;
        _XMM7 = v34;
        if ( *(float *)&v12 < 0.0 )
        {
          *((_QWORD *)&v37 + 1) = *((_QWORD *)&v12 + 1);
          *(double *)&v37 = *(float *)&v12;
          _XMM0 = v37;
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM0, *(float *)&v12) )
            __debugbreak();
          v17 = v61;
        }
        __asm
        {
          vmaxss  xmm0, xmm7, xmm6
          vminss  xmm8, xmm0, xmm9
        }
      }
      if ( v17 <= 0.0 )
      {
        LODWORD(_XMM7) = 0;
      }
      else
      {
        v41 = (float)(((unsigned int)v26 - min) / v19);
        v42 = LODWORD(FLOAT_1_0);
        *(float *)&v42 = (float)(1.0 - v41) * *(float *)&v12;
        _XMM7 = v42;
        if ( *(float *)&v12 < 0.0 )
        {
          *((_QWORD *)&v45 + 1) = *((_QWORD *)&v12 + 1);
          *(double *)&v45 = *(float *)&v12;
          _XMM0 = v45;
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM0, *(float *)&v12) )
            __debugbreak();
        }
        __asm
        {
          vmaxss  xmm0, xmm7, xmm6
          vminss  xmm7, xmm0, xmm9
        }
      }
      v49 = (float)v15;
      v50 = (float)((float)(v49 + 1.0) * v65) * v14;
      v67.xyz.v[0] = (float)((float)(v49 * v65) * width) + v62;
      v67.xyz.v[1] = *(float *)&_XMM8 + y;
      __asm { vroundss xmm1, xmm14, xmm0, 1 }
      v52 = (int)*(float *)&_XMM1;
      v67.xyz.v[2] = 0.0;
      if ( (int)*(float *)&_XMM1 > 255 )
        v52 = 255;
      if ( v52 < 0 )
        LOBYTE(v52) = 0;
      __asm { vroundss xmm0, xmm14, xmm2, 1 }
      v54 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v54 = 255;
      if ( v54 < 0 )
        LOBYTE(v54) = 0;
      v55 = (unsigned __int8)v54 | (((unsigned __int8)v52 | 0xFFFF0000) << 8);
      v68 = v50 + v62;
      v69 = *(float *)&_XMM7 + y;
      __asm { vroundss xmm1, xmm14, xmm0, 1 }
      v57 = (int)*(float *)&_XMM1;
      *(_DWORD *)v67.color = v55;
      v70 = 0.0;
      if ( (int)*(float *)&_XMM1 > 255 )
        v57 = 255;
      if ( v57 < 0 )
        LOBYTE(v57) = 0;
      __asm { vroundss xmm0, xmm14, xmm2, 1 }
      v59 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v59 = 255;
      if ( v59 < 0 )
        LOBYTE(v59) = 0;
      v60 = *gfxContext;
      v71 = (unsigned __int8)v59 | (((unsigned __int8)v57 | 0xFFFF0000) << 8);
      v66 = v60;
      RB_DrawLines2D(&v66, 2, 2, &v67);
      v17 = v61;
      v14 = width;
      v16 = avg;
      v11 = data;
      ++v15;
      v20 = 1.0 / v61;
    }
    while ( v15 < numDataEntries - 1 );
  }
}

/*
==============
RB_DrawProfileHistory
==============
*/
void RB_DrawProfileHistory(GfxCmdBufContext *gfxContext, const ProfileSettings *profSettings)
{
  int v4; 
  int integer; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int *v21; 
  float v22; 
  __int128 v23; 
  __int128 fontWidth_low; 
  __int64 v25; 
  int EnumParity; 
  __int128 v27; 
  int *v28; 
  __int128 v29; 
  __int128 v30; 
  float v31; 
  __int64 v32; 
  __int64 v33; 
  const char *v34; 
  GfxCmdBufContext v35; 
  unsigned __int64 v38; 
  __int128 v39; 
  GfxCmdBufContext v40; 
  int v41[16]; 
  char dest[112]; 

  v40 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v40);
  v4 = 0;
  integer = prof_probe[0]->current.integer;
  if ( !integer )
  {
    if ( profSettings )
      integer = profSettings->defaultProbeIndex[0];
    else
      integer = 0;
  }
  v41[0] = integer;
  v6 = prof_probe[1]->current.integer;
  if ( !v6 )
  {
    if ( profSettings )
      v6 = profSettings->defaultProbeIndex[1];
    else
      v6 = 0;
  }
  v41[1] = v6;
  v7 = prof_probe[2]->current.integer;
  if ( !v7 )
  {
    if ( profSettings )
      v7 = profSettings->defaultProbeIndex[2];
    else
      v7 = 0;
  }
  v41[2] = v7;
  v8 = prof_probe[3]->current.integer;
  if ( !v8 )
  {
    if ( profSettings )
      v8 = profSettings->defaultProbeIndex[3];
    else
      v8 = 0;
  }
  v41[3] = v8;
  v9 = prof_probe[4]->current.integer;
  if ( !v9 )
  {
    if ( profSettings )
      v9 = profSettings->defaultProbeIndex[4];
    else
      v9 = 0;
  }
  v41[4] = v9;
  v10 = prof_probe[5]->current.integer;
  if ( !v10 )
  {
    if ( profSettings )
      v10 = profSettings->defaultProbeIndex[5];
    else
      v10 = 0;
  }
  v41[5] = v10;
  v11 = prof_probe[6]->current.integer;
  if ( !v11 )
  {
    if ( profSettings )
      v11 = profSettings->defaultProbeIndex[6];
    else
      v11 = 0;
  }
  v41[6] = v11;
  v12 = prof_probe[7]->current.integer;
  if ( !v12 )
  {
    if ( profSettings )
      v12 = profSettings->defaultProbeIndex[7];
    else
      v12 = 0;
  }
  v41[7] = v12;
  v13 = prof_probe[8]->current.integer;
  if ( !v13 )
  {
    if ( profSettings )
      v13 = profSettings->defaultProbeIndex[8];
    else
      v13 = 0;
  }
  v41[8] = v13;
  v14 = prof_probe[9]->current.integer;
  if ( !v14 )
  {
    if ( profSettings )
      v14 = profSettings->defaultProbeIndex[9];
    else
      v14 = 0;
  }
  v41[9] = v14;
  v15 = prof_probe[10]->current.integer;
  if ( !v15 )
  {
    if ( profSettings )
      v15 = profSettings->defaultProbeIndex[10];
    else
      v15 = 0;
  }
  v41[10] = v15;
  v16 = prof_probe[11]->current.integer;
  if ( !v16 )
  {
    if ( profSettings )
      v16 = profSettings->defaultProbeIndex[11];
    else
      v16 = 0;
  }
  v41[11] = v16;
  v17 = prof_probe[12]->current.integer;
  if ( !v17 )
  {
    if ( profSettings )
      v17 = profSettings->defaultProbeIndex[12];
    else
      v17 = 0;
  }
  v41[12] = v17;
  v18 = prof_probe[13]->current.integer;
  if ( !v18 )
  {
    if ( profSettings )
      v18 = profSettings->defaultProbeIndex[13];
    else
      v18 = 0;
  }
  v41[13] = v18;
  v19 = prof_probe[14]->current.integer;
  if ( !v19 )
  {
    if ( profSettings )
      v19 = profSettings->defaultProbeIndex[14];
    else
      v19 = 0;
  }
  v41[14] = v19;
  v20 = prof_probe[15]->current.integer;
  if ( !v20 )
  {
    if ( profSettings )
      v20 = profSettings->defaultProbeIndex[15];
    else
      v20 = 0;
  }
  v41[15] = v20;
  v21 = v41;
  v22 = (float)(vidConfig.displayHeight - 98);
  fontWidth_low = LODWORD(drawProfGlob.fontWidth);
  *(float *)&fontWidth_low = drawProfGlob.fontWidth * 14.5;
  v23 = fontWidth_low;
  do
  {
    v25 = *v21;
    if ( (_DWORD)v25 )
    {
      EnumParity = Profile_GetEnumParity(v25);
      v40 = *gfxContext;
      RB_DrawProfileHistoryGraph(&v40, &drawProfGlob.global[v25].read, EnumParity, v4, *(float *)&v23, v22);
      v27 = v23;
      *(float *)&v27 = *(float *)&v23 + 104.0;
      v23 = v27;
    }
    ++v4;
    ++v21;
  }
  while ( v4 < 16 );
  v28 = v41;
  v30 = LODWORD(drawProfGlob.fontWidth);
  *(float *)&v30 = drawProfGlob.fontWidth * 14.5;
  v29 = v30;
  v31 = (float)(vidConfig.displayHeight - 98);
  v32 = 16i64;
  do
  {
    v33 = *v28;
    if ( (_DWORD)v33 )
    {
      v34 = prof_enumNames[v33];
      v35 = *gfxContext;
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm3, 1 }
      v38 = (int)*(float *)&_XMM4 + 1;
      if ( v38 > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 312, ASSERT_TYPE_ASSERT, "(charLimit <= ( sizeof( *array_counter( label ) ) + 0 ))", (const char *)&queryFormat, "charLimit <= ARRAY_COUNT( label )") )
        __debugbreak();
      Core_strncpy_truncate(dest, 0x64ui64, v34, v38);
      v40 = v35;
      RB_DrawText(&v40, dest, drawProfGlob.font, *(float *)&v29, v31, drawProfGlob.textColorList[0]);
      v39 = v29;
      *(float *)&v39 = *(float *)&v29 + 104.0;
      v29 = v39;
    }
    ++v28;
    --v32;
  }
  while ( v32 );
  v40 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v40);
}

/*
==============
RB_DrawProfileHistoryGraph
==============
*/
void RB_DrawProfileHistoryGraph(GfxCmdBufContext *gfxContext, const ProfileReadable *read, int parity, int probeIndex, float x, float y)
{
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 historyCount; 
  unsigned __int64 v12; 
  int integer; 
  float *Value; 
  int v15; 
  float v16; 
  int v17; 
  float v18; 
  int i; 
  __int128 v20; 
  __int128 v23; 
  GfxCmdBufContext v26; 

  v9 = probeIndex;
  if ( !read && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 265, ASSERT_TYPE_ASSERT, "(read)", (const char *)&queryFormat, "read") )
    __debugbreak();
  v10 = 1208 * v9;
  if ( drawProfGlob.log[v10 / 0x4B8].parity != parity )
  {
    historyCount = drawProfGlob.log[v10 / 0x4B8].historyCount;
    drawProfGlob.log[v10 / 0x4B8].historyCount = historyCount + 1;
    v12 = v10 + 12 * (historyCount % 0x64);
    *(double *)((char *)&drawProfGlob.log[0].history[0].hits + v12) = *(double *)&read->hits;
    *(unsigned int *)((char *)drawProfGlob.log[0].history[0].self.value + v12) = read->self.value[0];
    drawProfGlob.log[v10 / 0x4B8].parity = parity;
  }
  v26 = *gfxContext;
  RB_DrawStretchPic(&v26, rgp.whiteMaterial, x, y - drawProfGlob.fontHeight, 100.0, drawProfGlob.fontHeight + 64.0, 0.0, 0.0, 1.0, 1.0, 0x55000000u, GFX_PRIM_STATS_DEBUG);
  integer = prof_probeMaxMsec->current.integer;
  if ( integer < 1 )
    integer = 1;
  Value = (float *)Sys_GetValue(0);
  v15 = drawProfGlob.log[v10 / 0x4B8].historyCount;
  v16 = (float)integer;
  v17 = 0;
  v18 = (float)(64.0 * Value[8915]) / v16;
  if ( v15 - 100 >= 0 )
    v17 = v15 - 100;
  for ( i = v17; i < v15; ++i )
  {
    v20 = 0i64;
    *(float *)&v20 = (float)drawProfGlob.log[0].history[i % 100].total.value[v10 / 4];
    *(float *)&v20 = *(float *)&v20 * v18;
    _XMM1 = v20;
    if ( *(float *)&v20 >= 1.0 )
      __asm { vminss  xmm1, xmm1, xmm8 }
    else
      *(float *)&_XMM1 = FLOAT_1_0;
    v26 = *gfxContext;
    RB_DrawStretchPic(&v26, rgp.whiteMaterial, (float)(x + 99.0) - (float)(v15 - i), (float)(y + 64.0) - *(float *)&_XMM1, 1.0, *(float *)&_XMM1, 0.0, 0.0, 1.0, 1.0, 0xFF00FFFF, GFX_PRIM_STATS_DEBUG);
    v15 = drawProfGlob.log[v10 / 0x4B8].historyCount;
  }
  for ( ; v17 < v15; ++v17 )
  {
    v23 = 0i64;
    *(float *)&v23 = (float)drawProfGlob.log[0].history[v17 % 100].self.value[v10 / 4];
    *(float *)&v23 = *(float *)&v23 * v18;
    _XMM1 = v23;
    if ( *(float *)&v23 >= 1.0 )
      __asm { vminss  xmm1, xmm1, xmm8 }
    else
      *(float *)&_XMM1 = FLOAT_1_0;
    v26 = *gfxContext;
    RB_DrawStretchPic(&v26, rgp.whiteMaterial, (float)(x + 99.0) - (float)(v15 - v17), (float)(y + 64.0) - *(float *)&_XMM1, 1.0, *(float *)&_XMM1, 0.0, 0.0, 1.0, 1.0, 0xFF0000FF, GFX_PRIM_STATS_DEBUG);
    v15 = drawProfGlob.log[v10 / 0x4B8].historyCount;
  }
}

/*
==============
RB_DrawProfileLabels
==============
*/
float RB_DrawProfileLabels(GfxCmdBufContext *gfxContext)
{
  float v2; 
  GfxCmdBufContext v4; 

  v2 = drawProfGlob.fontHeight * 5.0;
  v4 = *gfxContext;
  RB_DrawText(&v4, "Probe Name", drawProfGlob.font, drawProfGlob.fontWidth * 15.0, drawProfGlob.fontHeight + (float)(drawProfGlob.fontHeight * 5.0), drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, "  Self", drawProfGlob.font, drawProfGlob.fontWidth * 55.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, " Total", drawProfGlob.font, drawProfGlob.fontWidth * 61.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, " AvSlf", drawProfGlob.font, drawProfGlob.fontWidth * 67.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, " MaxSlf", drawProfGlob.font, drawProfGlob.fontWidth * 73.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, "  Tally", drawProfGlob.font, drawProfGlob.fontWidth * 80.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, " AvTot", drawProfGlob.font, drawProfGlob.fontWidth * 87.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, "   Min", drawProfGlob.font, drawProfGlob.fontWidth * 93.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, "    Max", drawProfGlob.font, drawProfGlob.fontWidth * 99.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, "  Hit", drawProfGlob.font, drawProfGlob.fontWidth * 106.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, "  AvH", drawProfGlob.font, drawProfGlob.fontWidth * 111.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, "   ApH", drawProfGlob.font, drawProfGlob.fontWidth * 116.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  v4 = *gfxContext;
  RB_DrawText(&v4, "  MaxH", drawProfGlob.font, drawProfGlob.fontWidth * 122.0, v2 + drawProfGlob.fontHeight, drawProfGlob.labelColor);
  return v2 + drawProfGlob.fontHeight;
}

/*
==============
RB_DrawProfileRow
==============
*/
float RB_DrawProfileRow(GfxCmdBufContext *gfxContext, int probeIndex, int indentation, float y)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int64 v8; 
  int v10; 
  __int64 v11; 
  ProfileReadableGlobal *v12; 
  float *Value; 
  float *v18; 
  __int64 v19; 
  float hits; 
  float v24; 
  float v26; 
  int v27; 
  unsigned int v28; 
  float *v29; 
  float v30; 
  const char *v31; 
  float *v32; 
  float v33; 
  const char *v34; 
  const char *v38; 
  float *v39; 
  float v40; 
  const char *v41; 
  const char *v42; 
  const char *v43; 
  float v44; 
  double v45; 
  const char *v46; 
  float *v47; 
  const char *v48; 
  const char *v49; 
  const char *v50; 
  const char *v51; 
  const char *v52; 
  const char *v53; 
  GfxCmdBufContext v55; 
  char dest[48]; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 

  v8 = indentation;
  if ( probeIndex )
  {
    v10 = indentation + 15;
    v60 = v4;
    v59 = v5;
    v11 = probeIndex;
    v58 = v6;
    v57 = v7;
    v12 = &drawProfGlob.global[probeIndex];
    if ( !v12->sequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 449, ASSERT_TYPE_ASSERT, "(global->sequence)", (const char *)&queryFormat, "global->sequence") )
      __debugbreak();
    Value = (float *)Sys_GetValue(0);
    _XMM1 = (unsigned int)v12->sequence;
    __asm { vcvtdq2pd xmm1, xmm1 }
    _XMM2 = COERCE_UNSIGNED_INT64(Value[8915] * v12->selfClks / *(double *)&_XMM1);
    __asm { vcvtsd2ss xmm6, xmm2, xmm2 }
    v18 = (float *)Sys_GetValue(0);
    v19 = v12->min.value[0];
    _XMM1 = (unsigned int)v12->sequence;
    __asm { vcvtdq2pd xmm1, xmm1 }
    _XMM2 = COERCE_UNSIGNED_INT64(v18[8915] * v12->totalClks / *(double *)&_XMM1);
    hits = (float)v12->hits;
    v24 = hits / _mm_cvtepi32_ps((__m128i)(unsigned int)v12->sequence).m128_f32[0];
    __asm { vcvtsd2ss xmm11, xmm2, xmm2 }
    if ( v24 == 0.0 )
      v26 = 0.0;
    else
      v26 = *(float *)&_XMM11 / v24;
    Core_strncpy_truncate(dest, 0x29ui64, prof_enumNames[v11], 40 - v8);
    v27 = 192;
    if ( !(_DWORD)v8 )
      v27 = 255;
    v28 = v27 | ((v27 | ((v27 | 0xFFFFFF00) << 8)) << 8);
    v55 = *gfxContext;
    RB_DrawText(&v55, dest, drawProfGlob.font, (float)v10 * drawProfGlob.fontWidth, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    v29 = (float *)Sys_GetValue(0);
    v30 = (float)v12->read.self.value[0];
    v31 = j_va("%6.2f", (float)(v30 * v29[8915]));
    v55 = *gfxContext;
    RB_DrawText(&v55, v31, drawProfGlob.font, drawProfGlob.fontWidth * 55.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    v32 = (float *)Sys_GetValue(0);
    v33 = (float)v12->read.total.value[0];
    v34 = j_va("%6.2f", (float)(v33 * v32[8915]));
    v55 = *gfxContext;
    RB_DrawText(&v55, v34, drawProfGlob.font, drawProfGlob.fontWidth * 61.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    _XMM0 = LODWORD(FLOAT_30_0);
    __asm
    {
      vcmpltss xmm1, xmm0, xmm6
      vblendvps xmm6, xmm6, xmm9, xmm1
    }
    v38 = j_va("%6.2f", *(float *)&_XMM6);
    v55 = *gfxContext;
    RB_DrawText(&v55, v38, drawProfGlob.font, drawProfGlob.fontWidth * 67.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    v39 = (float *)Sys_GetValue(0);
    v40 = (float)v12->maxSelf.value[0];
    v41 = j_va("%7.2f", (float)(v40 * v39[8915]));
    v55 = *gfxContext;
    RB_DrawText(&v55, v41, drawProfGlob.font, drawProfGlob.fontWidth * 73.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    g_tally = g_tally + *(float *)&_XMM6;
    v42 = j_va("%6.2f", g_tally);
    v55 = *gfxContext;
    RB_DrawText(&v55, v42, drawProfGlob.font, drawProfGlob.fontWidth * 80.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    v43 = j_va("%6.2f", *(float *)&_XMM11);
    v55 = *gfxContext;
    RB_DrawText(&v55, v43, drawProfGlob.font, drawProfGlob.fontWidth * 87.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    v44 = (float)v19;
    v45 = (float)(v44 * *((float *)Sys_GetValue(0) + 8915));
    v46 = j_va("%6.2f", v45);
    v55 = *gfxContext;
    RB_DrawText(&v55, v46, drawProfGlob.font, drawProfGlob.fontWidth * 93.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    v47 = (float *)Sys_GetValue(0);
    *(float *)&v45 = (float)v12->max.value[0];
    v48 = j_va("%7.2f", (float)(*(float *)&v45 * v47[8915]));
    v55 = *gfxContext;
    RB_DrawText(&v55, v48, drawProfGlob.font, drawProfGlob.fontWidth * 99.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    v49 = j_va("%5u", v12->read.hits);
    v55 = *gfxContext;
    RB_DrawText(&v55, v49, drawProfGlob.font, drawProfGlob.fontWidth * 106.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    if ( v24 == 0.0 || (v50 = "%5.1f", v24 >= 10.0) )
      v50 = "%5.0f";
    v51 = j_va(v50, v24);
    v55 = *gfxContext;
    RB_DrawText(&v55, v51, drawProfGlob.font, drawProfGlob.fontWidth * 111.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    if ( v24 == 0.0 )
      v52 = "      ";
    else
      v52 = j_va("%6.2f", v26);
    v55 = *gfxContext;
    RB_DrawText(&v55, v52, drawProfGlob.font, drawProfGlob.fontWidth * 116.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
    v53 = j_va("%5u", v12->maxHits);
    v55 = *gfxContext;
    RB_DrawText(&v55, v53, drawProfGlob.font, drawProfGlob.fontWidth * 122.0, y + drawProfGlob.fontHeight, (const GfxColor)v28);
  }
  return y + drawProfGlob.fontHeight;
}

/*
==============
RB_DrawProfileScript
==============
*/
void RB_DrawProfileScript(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufContext v1; 
  GfxCmdBufContext v2; 
  const scrContext_t *ScriptContext; 
  SourceBufferInfo *SourceBufferLookup; 
  const ProfileScript *v6; 
  GfxCmdBufContext v7; 
  const ProfileScript *v8; 
  float fontHeight; 
  float v10; 
  int *scriptSrcBufferIndex; 
  __int64 v12; 
  SourceBufferInfo *v13; 
  const char *buf; 
  unsigned __int64 v15; 
  GfxColor v16; 
  char *v17; 
  GfxCmdBufContext *v18; 
  GfxColor v19; 
  double v20; 
  const char *v21; 
  GfxColor v22; 
  double v23; 
  const char *v24; 
  GfxColor v25; 
  double v26; 
  const char *v27; 
  GfxColor v28; 
  const char *v29; 
  GfxColor v30; 
  const char *v31; 
  GfxColor v32; 
  const char *v33; 
  GfxColor v34; 
  float *Value; 
  __int64 srcTotal; 
  float v37; 
  float v38; 
  const char *v39; 
  GfxColor v40; 
  float *v41; 
  __int64 srcAvgTime; 
  float v43; 
  float v44; 
  const char *v45; 
  GfxColor v46; 
  float *v47; 
  __int64 srcMaxTime; 
  float v49; 
  float v50; 
  const char *v51; 
  const scrContext_t *v52; 
  const ProfileScript *v53; 
  GfxCmdBufContext v54; 
  const ProfileScript *v55; 
  __int128 v56; 
  int v57; 
  float v58; 
  __int64 integer; 
  __int64 v60; 
  volatile unsigned int *v61; 
  char *v62; 
  float v63; 
  __int128 v64; 
  bool enabled; 
  const ProfileScript *ProfileConst; 
  GfxCmdBufContext v67; 
  __int64 v68; 
  float v69; 
  volatile unsigned int *totalTime; 
  int v71; 
  char *v72; 
  __int64 v73; 
  __int128 v74; 
  float v75; 
  __int128 v76; 
  GfxColor v77; 
  float v78; 
  const char *v79; 
  GfxColor v80; 
  GfxCmdBufContext v81; 
  GfxCmdBufContext v82; 
  GfxCmdBufContext v83; 
  GfxCmdBufContext v84; 
  GfxCmdBufContext v85; 
  GfxCmdBufContext v86; 
  GfxCmdBufContext v87; 
  GfxCmdBufContext v88; 
  GfxCmdBufContext v89; 
  GfxCmdBufContext v90; 
  GfxCmdBufContext v91; 
  GfxCmdBufContext v92; 
  GfxCmdBufContext v93; 
  GfxCmdBufContext v94; 
  GfxCmdBufContext v95; 
  GfxCmdBufContext v96; 
  GfxCmdBufContext v97; 
  GfxCmdBufContext v98; 
  GfxCmdBufContext v99; 
  GfxCmdBufContext v100; 
  GfxCmdBufContext v101; 
  GfxCmdBufContext v102; 
  GfxCmdBufContext v103; 
  GfxCmdBufContext v104; 
  GfxCmdBufContext v105; 
  GfxCmdBufContext v106; 
  GfxCmdBufContext v107; 
  GfxCmdBufContext v108; 
  GfxCmdBufContext v109; 
  GfxCmdBufContext v110; 
  GfxCmdBufContext v111; 
  GfxCmdBufContext v112; 
  GfxCmdBufContext v113; 
  GfxCmdBufContext v114; 
  GfxCmdBufContext v115; 
  GfxCmdBufContext v116; 
  GfxCmdBufContext v117; 
  GfxCmdBufContext v118; 
  GfxCmdBufContext v119; 
  GfxCmdBufContext v120; 
  GfxCmdBufContext v121[11]; 
  float v122; 
  const scrContext_t *v123; 
  const ProfileScript *v124; 

  if ( profile_script->current.enabled || profile_script_hierarchical->current.enabled )
  {
    if ( profile_script_instance->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1232, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "RB_DrawProfileScript_GetScriptContext: Invalid script instance.") )
      __debugbreak();
    v123 = ScriptContext_GetFromInstance(SCRIPTINSTANCE_SERVER);
    enabled = profile_script_hierarchical->current.enabled;
    ProfileConst = ScriptContext_GetProfileConst(v123);
    v67 = *gfxContext;
    v122 = FLOAT_30_0;
    v124 = ProfileConst;
    v110 = v67;
    RB_DrawStretchPic(&v110, rgp.whiteMaterial, 14.5 * drawProfGlob.fontWidth, 31.0, 114.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight - 2.0, 0.0, 0.0, 1.0, 1.0, 0xA5000000, GFX_PRIM_STATS_DEBUG);
    v111 = *gfxContext;
    RB_DrawText(&v111, "Probe Name", drawProfGlob.font, 19.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
    v112 = *gfxContext;
    RB_DrawText(&v112, " Current", drawProfGlob.font, 55.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
    v113 = *gfxContext;
    RB_DrawText(&v113, " Avg", drawProfGlob.font, drawProfGlob.fontWidth * 65.0, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
    v114 = *gfxContext;
    RB_DrawText(&v114, " Max", drawProfGlob.font, drawProfGlob.fontWidth * 75.0, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
    v115 = *gfxContext;
    RB_DrawText(&v115, "  Total", drawProfGlob.font, drawProfGlob.fontWidth * 85.0, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
    v68 = (__int64)v124;
    v69 = v122 + drawProfGlob.fontHeight;
    v122 = v122 + drawProfGlob.fontHeight;
    totalTime = v124->totalTime;
    v71 = 0;
    v72 = v124->profileScriptNames[0];
    v73 = 0i64;
    v74 = 0i64;
    do
    {
      if ( (!enabled || *(_BYTE *)(v73 + v68 + 39428) == 0xFF) && *v72 )
      {
        if ( enabled )
        {
          v116 = *gfxContext;
          RB_DrawProfileScriptLineAndChildren(&v116, v123, v71, &v122, 0);
        }
        else
        {
          v117 = *gfxContext;
          RB_DrawProfileScriptLine(&v117, v123, v71, v69, 0);
        }
        v68 = (__int64)v124;
        v122 = v122 + drawProfGlob.fontHeight;
        v69 = v122;
        v75 = (float)*(unsigned int *)totalTime;
        v76 = v74;
        *(float *)&v76 = *(float *)&v74 + v75;
        v74 = v76;
      }
      ++v71;
      ++v73;
      ++totalTime;
      v72 += 20;
    }
    while ( v71 < 128 );
    v118 = *gfxContext;
    RB_DrawStretchPic(&v118, rgp.whiteMaterial, 14.5 * drawProfGlob.fontWidth, v69 + 1.0, 114.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight - 2.0, 0.0, 0.0, 1.0, 1.0, 0xA5000000, GFX_PRIM_STATS_DEBUG);
    if ( enabled )
    {
      v119 = *gfxContext;
      RB_DrawText(&v119, "TOTAL", drawProfGlob.font, 19.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, drawProfGlob.textColorList[0]);
      v77 = drawProfGlob.textColorList[0];
      v78 = *((float *)Sys_GetValue(0) + 8915);
      v79 = j_va("%6.2f", (float)(v78 * *(float *)&v74));
      v120 = *gfxContext;
      RB_DrawText(&v120, v79, drawProfGlob.font, 55.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, v77);
      v122 = v122 + drawProfGlob.fontHeight;
    }
  }
  else if ( profile_script_by_file->current.enabled )
  {
    ScriptContext = RB_DrawProfileScript_GetScriptContext();
    SourceBufferLookup = Scr_GetSourceBufferLookup(ScriptContext);
    if ( SourceBufferLookup )
    {
      v121[2] = v1;
      v121[1] = v2;
      v6 = ScriptContext_GetProfileConst(ScriptContext);
      v7 = *gfxContext;
      v8 = v6;
      v122 = FLOAT_30_0;
      v81 = v7;
      RB_DrawStretchPic(&v81, rgp.whiteMaterial, 14.5 * drawProfGlob.fontWidth, 31.0, 114.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight - 2.0, 0.0, 0.0, 1.0, 1.0, 0xA5000000, GFX_PRIM_STATS_DEBUG);
      v82 = *gfxContext;
      RB_DrawText(&v82, " File", drawProfGlob.font, 15.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
      v83 = *gfxContext;
      RB_DrawText(&v83, "Current", drawProfGlob.font, 47.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
      v84 = *gfxContext;
      RB_DrawText(&v84, "Avg", drawProfGlob.font, 59.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
      v85 = *gfxContext;
      RB_DrawText(&v85, "Max", drawProfGlob.font, 71.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
      v86 = *gfxContext;
      RB_DrawText(&v86, "BuiltIn", drawProfGlob.font, 83.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
      v87 = *gfxContext;
      RB_DrawText(&v87, "NonBuiltIn", drawProfGlob.font, drawProfGlob.fontWidth * 95.0, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
      v88 = *gfxContext;
      RB_DrawText(&v88, "Total", drawProfGlob.font, drawProfGlob.fontWidth * 107.0, drawProfGlob.fontHeight + v122, drawProfGlob.labelColor);
      fontHeight = drawProfGlob.fontHeight;
      v10 = v122 + drawProfGlob.fontHeight;
      v122 = v122 + drawProfGlob.fontHeight;
      scriptSrcBufferIndex = v8->scriptSrcBufferIndex;
      v12 = 32i64;
      do
      {
        v13 = &SourceBufferLookup[*scriptSrcBufferIndex];
        if ( v13->totalTime != 0.0 )
        {
          v89 = *gfxContext;
          RB_DrawStretchPic(&v89, rgp.whiteMaterial, 14.5 * drawProfGlob.fontWidth, v10 + 1.0, 114.0 * drawProfGlob.fontWidth, fontHeight - 2.0, 0.0, 0.0, 1.0, 1.0, 0xA5000000, GFX_PRIM_STATS_DEBUG);
          buf = v13->buf;
          v15 = -1i64;
          do
            ++v15;
          while ( buf[v15] );
          if ( v15 <= 0x21 )
          {
            v18 = &v91;
            v91 = *gfxContext;
            v80 = drawProfGlob.textColorList[0];
          }
          else
          {
            v16 = drawProfGlob.textColorList[0];
            v17 = j_va("...%s", &buf[v15 - 30]);
            v90 = *gfxContext;
            v80 = v16;
            v18 = &v90;
            buf = v17;
          }
          RB_DrawText(v18, buf, drawProfGlob.font, 15.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, v80);
          v19 = drawProfGlob.textColorList[0];
          v20 = (float)((float)v13->time * *((float *)Sys_GetValue(0) + 8915));
          v21 = j_va("%6.2f", v20);
          v92 = *gfxContext;
          RB_DrawText(&v92, v21, drawProfGlob.font, 47.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, v19);
          v22 = drawProfGlob.textColorList[0];
          v23 = (float)((float)v13->avgTime * *((float *)Sys_GetValue(0) + 8915));
          v24 = j_va("%6.2f", v23);
          v93 = *gfxContext;
          RB_DrawText(&v93, v24, drawProfGlob.font, 59.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, v22);
          v25 = drawProfGlob.textColorList[0];
          v26 = (float)((float)v13->maxTime * *((float *)Sys_GetValue(0) + 8915));
          v27 = j_va("%6.2f", v26);
          v94 = *gfxContext;
          RB_DrawText(&v94, v27, drawProfGlob.font, 71.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, v25);
          v28 = drawProfGlob.textColorList[0];
          v29 = j_va("%8.0f", v13->totalBuiltIn);
          v95 = *gfxContext;
          RB_DrawText(&v95, v29, drawProfGlob.font, 83.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, v28);
          v30 = drawProfGlob.textColorList[0];
          v31 = j_va("%8.0f", (float)(v13->totalTime - v13->totalBuiltIn));
          v96 = *gfxContext;
          RB_DrawText(&v96, v31, drawProfGlob.font, drawProfGlob.fontWidth * 95.0, drawProfGlob.fontHeight + v122, v30);
          v32 = drawProfGlob.textColorList[0];
          v33 = j_va("%8.0f", v13->totalTime);
          v97 = *gfxContext;
          RB_DrawText(&v97, v33, drawProfGlob.font, drawProfGlob.fontWidth * 107.0, drawProfGlob.fontHeight + v122, v32);
          fontHeight = drawProfGlob.fontHeight;
          v10 = v122 + drawProfGlob.fontHeight;
          v122 = v122 + drawProfGlob.fontHeight;
        }
        ++scriptSrcBufferIndex;
        --v12;
      }
      while ( v12 );
      v98 = *gfxContext;
      v122 = v10 + fontHeight;
      RB_DrawStretchPic(&v98, rgp.whiteMaterial, 14.5 * drawProfGlob.fontWidth, (float)(v10 + fontHeight) + 1.0, 114.0 * drawProfGlob.fontWidth, fontHeight - 2.0, 0.0, 0.0, 1.0, 1.0, 0xA5000000, GFX_PRIM_STATS_DEBUG);
      v99 = *gfxContext;
      RB_DrawText(&v99, "Total", drawProfGlob.font, 15.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, drawProfGlob.textColorList[0]);
      v34 = drawProfGlob.textColorList[0];
      Value = (float *)Sys_GetValue(0);
      srcTotal = v8->srcTotal;
      v37 = (float)srcTotal;
      if ( srcTotal < 0 )
      {
        v38 = (float)srcTotal;
        v37 = v38 + 1.8446744e19;
      }
      v39 = j_va("%6.2f", (float)(v37 * Value[8915]));
      v100 = *gfxContext;
      RB_DrawText(&v100, v39, drawProfGlob.font, 47.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, v34);
      v40 = drawProfGlob.textColorList[0];
      v41 = (float *)Sys_GetValue(0);
      srcAvgTime = v8->srcAvgTime;
      v43 = (float)srcAvgTime;
      if ( srcAvgTime < 0 )
      {
        v44 = (float)srcAvgTime;
        v43 = v44 + 1.8446744e19;
      }
      v45 = j_va("%6.2f", (float)(v43 * v41[8915]));
      v101 = *gfxContext;
      RB_DrawText(&v101, v45, drawProfGlob.font, 59.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, v40);
      v46 = drawProfGlob.textColorList[0];
      v47 = (float *)Sys_GetValue(0);
      srcMaxTime = v8->srcMaxTime;
      v49 = (float)srcMaxTime;
      if ( srcMaxTime < 0 )
      {
        v50 = (float)srcMaxTime;
        v49 = v50 + 1.8446744e19;
      }
      v51 = j_va("%6.2f", (float)(v49 * v47[8915]));
      v102 = *gfxContext;
      RB_DrawText(&v102, v51, drawProfGlob.font, 71.0 * drawProfGlob.fontWidth, drawProfGlob.fontHeight + v122, v46);
    }
  }
  else if ( profile_script_graph->current.enabled )
  {
    v52 = RB_DrawProfileScript_GetScriptContext();
    v53 = ScriptContext_GetProfileConst(v52);
    v54 = *gfxContext;
    v55 = v53;
    v122 = FLOAT_40_0;
    v103 = v54;
    v56 = 0i64;
    RB_DrawStretchPic(&v103, rgp.whiteMaterial, drawProfGlob.largeFontWidth * 14.5, 41.0, drawProfGlob.largeFontWidth * 114.0, drawProfGlob.largeFontHeight - 2.0, 0.0, 0.0, 1.0, 1.0, 0xA5000000, GFX_PRIM_STATS_DEBUG);
    v104 = *gfxContext;
    RB_DrawText(&v104, "Probe Name", drawProfGlob.largeFont, drawProfGlob.largeFontWidth * 8.0, drawProfGlob.largeFontHeight + v122, drawProfGlob.labelColor);
    v105 = *gfxContext;
    RB_DrawText(&v105, " Current", drawProfGlob.largeFont, drawProfGlob.largeFontWidth * 44.0, drawProfGlob.largeFontHeight + v122, drawProfGlob.labelColor);
    v106 = *gfxContext;
    RB_DrawText(&v106, " Avg", drawProfGlob.largeFont, drawProfGlob.largeFontWidth * 54.0, drawProfGlob.largeFontHeight + v122, drawProfGlob.labelColor);
    v107 = *gfxContext;
    RB_DrawText(&v107, " Max", drawProfGlob.largeFont, drawProfGlob.largeFontWidth * 64.0, drawProfGlob.largeFontHeight + v122, drawProfGlob.labelColor);
    v108 = *gfxContext;
    RB_DrawText(&v108, "  Total", drawProfGlob.largeFont, drawProfGlob.largeFontWidth * 74.0, drawProfGlob.largeFontHeight + v122, drawProfGlob.labelColor);
    v57 = 128;
    v58 = v122 + drawProfGlob.largeFontHeight;
    v122 = v122 + drawProfGlob.largeFontHeight;
    integer = profile_script_graph_row->current.integer;
    if ( (int)integer + 25 < 128 )
      v57 = integer + 25;
    if ( integer < v57 )
    {
      v60 = v57 - integer;
      v61 = &v55->totalTime[integer];
      v62 = v55->profileScriptNames[integer];
      do
      {
        if ( *v62 )
        {
          v109 = *gfxContext;
          RB_DrawProfileScriptLineWithGraph(&v109, v52, integer, 4, v58, 0);
          v122 = v122 + drawProfGlob.largeFontHeight;
          v58 = v122;
          v63 = (float)*(unsigned int *)v61;
          v64 = v56;
          *(float *)&v64 = *(float *)&v56 + v63;
          v56 = v64;
        }
        LODWORD(integer) = integer + 1;
        ++v61;
        v62 += 20;
        --v60;
      }
      while ( v60 );
    }
  }
  v121[0] = *gfxContext;
  RB_EndSurfaceIfNeeded(v121);
}

/*
==============
RB_DrawProfileScriptLine
==============
*/
void RB_DrawProfileScriptLine(GfxCmdBufContext *gfxContext, const scrContext_t *scrContext, int profileIndex, float y, int tab)
{
  __int64 v6; 
  const ProfileScript *ProfileConst; 
  const char *v8; 
  float v9; 
  float v10; 
  GfxColor v11; 
  const char *v12; 
  GfxColor v13; 
  float *Value; 
  float v15; 
  const char *v16; 
  GfxColor v17; 
  float v18; 
  const char *v19; 
  GfxColor v20; 
  float *v21; 
  float v22; 
  const char *v23; 
  GfxColor v24; 
  double v25; 
  const char *v26; 
  GfxCmdBufContext v27; 
  GfxCmdBufContext v28; 
  GfxCmdBufContext v29; 
  GfxCmdBufContext v30; 
  GfxCmdBufContext v31; 
  GfxCmdBufContext v32; 
  GfxCmdBufContext v33; 

  v6 = profileIndex;
  ProfileConst = ScriptContext_GetProfileConst(scrContext);
  v8 = ProfileConst->profileScriptNames[v6];
  if ( !*v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1120, ASSERT_TYPE_ASSERT, "(name[0])", (const char *)&queryFormat, "name[0]") )
    __debugbreak();
  if ( ProfileConst->cumulative[v6] <= 0.0 )
  {
    v10 = 0.0;
  }
  else
  {
    v9 = (float)ProfileConst->totalCount[v6];
    v10 = (float)ProfileConst->cumulative[v6] / v9;
  }
  v27 = *gfxContext;
  RB_DrawStretchPic(&v27, rgp.whiteMaterial, drawProfGlob.fontWidth * 14.5, y + 1.0, drawProfGlob.fontWidth * 114.0, drawProfGlob.fontHeight - 2.0, 0.0, 0.0, 1.0, 1.0, 0xA5000000, GFX_PRIM_STATS_DEBUG);
  v11 = drawProfGlob.textColorList[0];
  v12 = j_va("%02d", (unsigned int)v6);
  v28 = *gfxContext;
  RB_DrawText(&v28, v12, drawProfGlob.font, drawProfGlob.fontWidth * 15.0, y + drawProfGlob.fontHeight, v11);
  v29 = *gfxContext;
  RB_DrawText(&v29, v8, drawProfGlob.font, (float)(tab + 19) * drawProfGlob.fontWidth, y + drawProfGlob.fontHeight, drawProfGlob.textColorList[0]);
  v13 = drawProfGlob.textColorList[0];
  Value = (float *)Sys_GetValue(0);
  v15 = (float)ProfileConst->totalTime[v6];
  v16 = j_va("%6.2f", (float)(v15 * Value[8915]));
  v30 = *gfxContext;
  RB_DrawText(&v30, v16, drawProfGlob.font, drawProfGlob.fontWidth * 55.0, y + drawProfGlob.fontHeight, v13);
  v17 = drawProfGlob.textColorList[0];
  v18 = *((float *)Sys_GetValue(0) + 8915);
  v19 = j_va("%6.2f", (float)(v18 * v10));
  v31 = *gfxContext;
  RB_DrawText(&v31, v19, drawProfGlob.font, drawProfGlob.fontWidth * 65.0, y + drawProfGlob.fontHeight, v17);
  v20 = drawProfGlob.textColorList[0];
  v21 = (float *)Sys_GetValue(0);
  v22 = (float)ProfileConst->maxTime[v6];
  v23 = j_va("%6.2f", (float)(v22 * v21[8915]));
  v32 = *gfxContext;
  RB_DrawText(&v32, v23, drawProfGlob.font, drawProfGlob.fontWidth * 75.0, y + drawProfGlob.fontHeight, v20);
  v24 = drawProfGlob.textColorList[0];
  v25 = (float)(*((float *)Sys_GetValue(0) + 8915) * (float)ProfileConst->cumulative[v6]);
  v26 = j_va("%8.0f", v25);
  v33 = *gfxContext;
  RB_DrawText(&v33, v26, drawProfGlob.font, drawProfGlob.fontWidth * 85.0, y + drawProfGlob.fontHeight, v24);
}

/*
==============
RB_DrawProfileScriptLineAndChildren
==============
*/
void RB_DrawProfileScriptLineAndChildren(GfxCmdBufContext *gfxContext, const scrContext_t *scrContext, int profileIndex, float *y, int depth)
{
  __int64 v5; 
  float v9; 
  unsigned int v10; 
  const ProfileScript *ProfileConst; 
  unsigned int v12; 
  int v13; 
  __int64 v14; 
  char *i; 
  float v16; 
  GfxCmdBufContext v17[3]; 

  v5 = profileIndex;
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1189, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  v9 = *y;
  v17[0] = *gfxContext;
  RB_DrawProfileScriptLine(v17, scrContext, v5, v9, 2 * depth);
  v10 = -1;
  while ( 2 )
  {
    ProfileConst = ScriptContext_GetProfileConst(scrContext);
    v12 = v10 >> 31;
    v13 = 0;
    v14 = 0i64;
    for ( i = ProfileConst->profileScriptNames[0]; ; i += 20 )
    {
      if ( !*i || v14 == v5 || ProfileConst->parentIndex[v14] != (_DWORD)v5 )
        goto LABEL_11;
      if ( (_BYTE)v12 )
        break;
      LOBYTE(v12) = v14 == v10;
LABEL_11:
      ++v13;
      if ( ++v14 >= 128 )
        return;
    }
    if ( v13 >= 0 )
    {
      v16 = drawProfGlob.fontHeight + *y;
      v17[0] = *gfxContext;
      *y = v16;
      RB_DrawProfileScriptLineAndChildren(v17, scrContext, v13, y, depth + 1);
      v10 = v13;
      continue;
    }
    break;
  }
}

/*
==============
RB_DrawProfileScriptLineWithGraph
==============
*/
void RB_DrawProfileScriptLineWithGraph(GfxCmdBufContext *gfxContext, const scrContext_t *scrContext, int profileIndex, int column, float y, int tab)
{
  __int64 v8; 
  const ProfileScript *ProfileConst; 
  const char *v10; 
  float v11; 
  float v12; 
  GfxColor v13; 
  const char *v14; 
  GfxColor v15; 
  float *Value; 
  float v17; 
  const char *v18; 
  GfxColor v19; 
  float v20; 
  const char *v21; 
  GfxColor v22; 
  float *v23; 
  float v24; 
  const char *v25; 
  GfxColor v26; 
  double v27; 
  const char *v28; 
  unsigned int v29; 
  unsigned int historyIndex; 
  GfxCmdBufContext v31; 
  GfxCmdBufContext v32; 
  GfxCmdBufContext v33; 
  GfxCmdBufContext v34; 
  GfxCmdBufContext v35; 
  GfxCmdBufContext v36; 
  GfxCmdBufContext v37; 
  GfxCmdBufContext v38; 

  v8 = profileIndex;
  ProfileConst = ScriptContext_GetProfileConst(scrContext);
  v10 = ProfileConst->profileScriptNames[v8];
  if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1142, ASSERT_TYPE_ASSERT, "(name[0])", (const char *)&queryFormat, "name[0]") )
    __debugbreak();
  if ( ProfileConst->cumulative[v8] <= 0.0 )
  {
    v12 = 0.0;
  }
  else
  {
    v11 = (float)ProfileConst->totalCount[v8];
    v12 = (float)ProfileConst->cumulative[v8] / v11;
  }
  v31 = *gfxContext;
  RB_DrawStretchPic(&v31, rgp.whiteMaterial, drawProfGlob.largeFontWidth * 14.5, y + 1.0, drawProfGlob.largeFontWidth * 114.0, drawProfGlob.largeFontHeight - 2.0, 0.0, 0.0, 1.0, 1.0, 0xA5000000, GFX_PRIM_STATS_DEBUG);
  v13 = drawProfGlob.textColorList[0];
  v14 = j_va("%02d", (unsigned int)v8);
  v32 = *gfxContext;
  RB_DrawText(&v32, v14, drawProfGlob.largeFont, (float)column * drawProfGlob.largeFontWidth, y + drawProfGlob.largeFontHeight, v13);
  v33 = *gfxContext;
  RB_DrawText(&v33, v10, drawProfGlob.largeFont, (float)(column + tab + 4) * drawProfGlob.largeFontWidth, y + drawProfGlob.largeFontHeight, drawProfGlob.textColorList[0]);
  v15 = drawProfGlob.textColorList[0];
  Value = (float *)Sys_GetValue(0);
  v17 = (float)ProfileConst->totalTime[v8];
  v18 = j_va("%6.2f", (float)(v17 * Value[8915]));
  v34 = *gfxContext;
  RB_DrawText(&v34, v18, drawProfGlob.largeFont, (float)(column + 40) * drawProfGlob.largeFontWidth, y + drawProfGlob.largeFontHeight, v15);
  v19 = drawProfGlob.textColorList[0];
  v20 = *((float *)Sys_GetValue(0) + 8915);
  v21 = j_va("%6.2f", (float)(v20 * v12));
  v35 = *gfxContext;
  RB_DrawText(&v35, v21, drawProfGlob.largeFont, (float)(column + 50) * drawProfGlob.largeFontWidth, y + drawProfGlob.largeFontHeight, v19);
  v22 = drawProfGlob.textColorList[0];
  v23 = (float *)Sys_GetValue(0);
  v24 = (float)ProfileConst->maxTime[v8];
  v25 = j_va("%6.2f", (float)(v24 * v23[8915]));
  v36 = *gfxContext;
  RB_DrawText(&v36, v25, drawProfGlob.largeFont, (float)(column + 60) * drawProfGlob.largeFontWidth, y + drawProfGlob.largeFontHeight, v22);
  v26 = drawProfGlob.textColorList[0];
  v27 = (float)(*((float *)Sys_GetValue(0) + 8915) * (float)ProfileConst->cumulative[v8]);
  v28 = j_va("%8.0f", v27);
  v37 = *gfxContext;
  RB_DrawText(&v37, v28, drawProfGlob.largeFont, (float)(column + 70) * drawProfGlob.largeFontWidth, y + drawProfGlob.largeFontHeight, v26);
  historyIndex = ProfileConst->historyIndex;
  v29 = ProfileConst->maxTime[v8];
  v38 = *gfxContext;
  RB_DrawProfileGraphData(&v38, column + 80, y, 400.0, 0, v29, v12, ProfileConst->history[v8], 0x40u, historyIndex);
}

/*
==============
RB_DrawProfileScript_GetScriptContext
==============
*/
scrContext_t *RB_DrawProfileScript_GetScriptContext()
{
  if ( profile_script_instance->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1232, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "RB_DrawProfileScript_GetScriptContext: Invalid script instance.") )
    __debugbreak();
  return ScriptContext_GetFromInstance(SCRIPTINSTANCE_SERVER);
}

/*
==============
RB_DrawSlowProfileOverlay
==============
*/
void RB_DrawSlowProfileOverlay(GfxCmdBufContext *gfxContext, int (*compare)(const void *, const void *))
{
  int v4; 
  int *v5; 
  int v6; 
  int i; 
  int *v20; 
  GfxCmdBufContext v21; 
  int *v22; 
  int v23; 
  __int128 v24; 
  __int128 fontWidth_low; 
  float v26; 
  __int64 v27; 
  int EnumParity; 
  __int128 v29; 
  int *v30; 
  float v31; 
  __int128 v32; 
  __int128 v33; 
  __int64 v34; 
  __int64 v35; 
  const char *v36; 
  unsigned __int64 v39; 
  __int128 v40; 
  float v41; 
  int *sortedProbeIndices; 
  int j; 
  int v44; 
  GfxCmdBufContext v45; 
  int v46[16]; 
  char dest[112]; 

  v4 = Sys_Milliseconds();
  if ( (float)(v4 - drawProfGlob.lastSortTime) >= (float)(prof_sortTime->current.value * 1000.0) || v4 - drawProfGlob.lastSortTime < 0 )
  {
    drawProfGlob.lastSortTime = v4;
    v5 = &drawProfGlob.sortedProbeIndices[8];
    v6 = 0;
    for ( i = 8; i < 824; i += 16 )
    {
      _XMM0 = (unsigned int)v6;
      __asm
      {
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      *((_OWORD *)v5 - 2) = _XMM1;
      _XMM0 = (unsigned int)(i - 4);
      __asm
      {
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      *((_OWORD *)v5 - 1) = _XMM1;
      _XMM0 = (unsigned int)i;
      __asm
      {
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      *(_OWORD *)v5 = _XMM1;
      v6 += 16;
      _XMM0 = (unsigned int)(i + 4);
      __asm
      {
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      *((_OWORD *)v5 + 1) = _XMM1;
      v5 += 16;
    }
    if ( v6 < 826 )
    {
      v20 = &drawProfGlob.sortedProbeIndices[v6];
      do
        *v20++ = v6++;
      while ( v6 < 826 );
    }
    qsort(drawProfGlob.sortedProbeIndices, 0x33Aui64, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare);
  }
  v45 = *gfxContext;
  RB_DrawAllProfileBackgrounds(&v45, NULL, profile_rowcount->current.integer);
  v21 = *gfxContext;
  v45 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v45);
  v22 = v46;
  v23 = 0;
  v46[0] = prof_probe[0]->current.integer;
  fontWidth_low = LODWORD(drawProfGlob.fontWidth);
  *(float *)&fontWidth_low = drawProfGlob.fontWidth * 14.5;
  v24 = fontWidth_low;
  v46[1] = prof_probe[1]->current.integer;
  v46[2] = prof_probe[2]->current.integer;
  v46[3] = prof_probe[3]->current.integer;
  v46[4] = prof_probe[4]->current.integer;
  v46[5] = prof_probe[5]->current.integer;
  v46[6] = prof_probe[6]->current.integer;
  v46[7] = prof_probe[7]->current.integer;
  v46[8] = prof_probe[8]->current.integer;
  v46[9] = prof_probe[9]->current.integer;
  v46[10] = prof_probe[10]->current.integer;
  v46[11] = prof_probe[11]->current.integer;
  v46[12] = prof_probe[12]->current.integer;
  v46[13] = prof_probe[13]->current.integer;
  v46[14] = prof_probe[14]->current.integer;
  v46[15] = prof_probe[15]->current.integer;
  v26 = (float)(vidConfig.displayHeight - 98);
  do
  {
    v27 = *v22;
    if ( (_DWORD)v27 )
    {
      EnumParity = Profile_GetEnumParity(v27);
      v45 = v21;
      RB_DrawProfileHistoryGraph(&v45, &drawProfGlob.global[v27].read, EnumParity, v23, *(float *)&v24, v26);
      v29 = v24;
      *(float *)&v29 = *(float *)&v24 + 104.0;
      v24 = v29;
    }
    ++v23;
    ++v22;
  }
  while ( v23 < 16 );
  v30 = v46;
  v31 = (float)(vidConfig.displayHeight - 98);
  v33 = LODWORD(drawProfGlob.fontWidth);
  *(float *)&v33 = drawProfGlob.fontWidth * 14.5;
  v32 = v33;
  v34 = 16i64;
  do
  {
    v35 = *v30;
    if ( (_DWORD)v35 )
    {
      v36 = prof_enumNames[v35];
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm3, 1 }
      v39 = (int)*(float *)&_XMM4 + 1;
      if ( v39 > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 312, ASSERT_TYPE_ASSERT, "(charLimit <= ( sizeof( *array_counter( label ) ) + 0 ))", (const char *)&queryFormat, "charLimit <= ARRAY_COUNT( label )") )
        __debugbreak();
      Core_strncpy_truncate(dest, 0x64ui64, v36, v39);
      v45 = v21;
      RB_DrawText(&v45, dest, drawProfGlob.font, *(float *)&v32, v31, drawProfGlob.textColorList[0]);
      v40 = v32;
      *(float *)&v40 = *(float *)&v32 + 104.0;
      v32 = v40;
    }
    ++v30;
    --v34;
  }
  while ( v34 );
  v45 = v21;
  RB_EndSurfaceIfNeeded(&v45);
  v45 = v21;
  v41 = RB_DrawProfileLabels(&v45);
  sortedProbeIndices = drawProfGlob.sortedProbeIndices;
  g_tally = 0.0;
  for ( j = 0; j < profile_rowcount->current.integer; ++j )
  {
    v44 = *sortedProbeIndices;
    v45 = v21;
    v41 = RB_DrawProfileRow(&v45, v44, 0, v41);
    ++sortedProbeIndices;
  }
}

/*
==============
RB_GetNextProfileChild
==============
*/
__int64 RB_GetNextProfileChild(const scrContext_t *scrContext, int parentIndex, int prevChildIndex, int depth)
{
  __int64 v4; 
  __int64 v5; 
  const ProfileScript *ProfileConst; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  char *i; 

  v4 = prevChildIndex;
  v5 = parentIndex;
  ProfileConst = ScriptContext_GetProfileConst(scrContext);
  v7 = (unsigned int)v4 >> 31;
  v8 = 0;
  v9 = 0i64;
  for ( i = ProfileConst->profileScriptNames[0]; ; i += 20 )
  {
    if ( !*i || v9 == v5 || ProfileConst->parentIndex[v9] != (_DWORD)v5 )
      goto LABEL_7;
    if ( (_BYTE)v7 )
      break;
    LOBYTE(v7) = v9 == v4;
LABEL_7:
    ++v8;
    if ( ++v9 >= 128 )
      return 0xFFFFFFFFi64;
  }
  return v8;
}

/*
==============
RB_IsUsingAnyProfile
==============
*/
char RB_IsUsingAnyProfile()
{
  int integer; 
  int v1; 
  const dvar_t **i; 

  integer = profile->current.integer;
  if ( !integer )
    return 0;
  if ( integer == 1 )
  {
    v1 = 0;
    for ( i = prof_probe; !(*i)->current.integer; ++i )
    {
      if ( (unsigned int)++v1 >= 0x10 )
        return 0;
    }
  }
  return 1;
}

/*
==============
RB_ProfileDevGui
==============
*/
void RB_ProfileDevGui(void)
{
  ;
}

/*
==============
RB_ProfileInit
==============
*/
void RB_ProfileInit(void)
{
  float v0; 

  drawProfGlob.font = R_RegisterFont("fonts/fira_mono_regular.ttf", 16);
  drawProfGlob.fontWidth = (float)R_TextWidth("#", 1, drawProfGlob.font);
  drawProfGlob.fontHeight = (float)R_TextHeight(drawProfGlob.font);
  drawProfGlob.largeFont = R_RegisterFont("fonts/fira_mono_regular.ttf", 32);
  drawProfGlob.largeFontWidth = (float)R_TextWidth("#", 1, drawProfGlob.largeFont);
  v0 = (float)R_TextHeight(drawProfGlob.largeFont);
  drawProfGlob.textColorList[0].packed = -1;
  drawProfGlob.textColorList[1].packed = -10053172;
  drawProfGlob.textColorList[2].packed = -39271;
  drawProfGlob.largeFontHeight = v0;
  drawProfGlob.textColorList[3].packed = -6697780;
  drawProfGlob.textColorList[4].packed = -16776961;
  drawProfGlob.textColorList[5].packed = -6697729;
  drawProfGlob.textColorList[6].packed = -16724737;
  drawProfGlob.textColorList[7].packed = -3355393;
  drawProfGlob.textColorList[8].packed = -39220;
  drawProfGlob.textColorList[9].packed = -26113;
  drawProfGlob.textColorList[10].packed = -3342337;
  drawProfGlob.textColorList[11].packed = -6697984;
  drawProfGlob.textColorList[12].packed = -16711681;
  drawProfGlob.textColorList[13].packed = -65536;
  drawProfGlob.labelColor.packed = -16711681;
  memset_0(drawProfGlob.log, 0, sizeof(drawProfGlob.log));
  drawProfGlob.lastSortTime = 0;
}

