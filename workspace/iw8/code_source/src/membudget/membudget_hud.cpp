/*
==============
DrawBars::DrawBar
==============
*/

void __fastcall DrawBars::DrawBar(DrawBars *this, const __int64 size, const vec4_t *color)
{
  ?DrawBar@DrawBars@@AEAAX_JAEBTvec4_t@@@Z(this, size, color);
}

/*
==============
MemBudget_HUD_Draw
==============
*/

void __fastcall MemBudget_HUD_Draw(const ScreenPlacement *scrPlace, int overlayType)
{
  ?MemBudget_HUD_Draw@@YAXPEBUScreenPlacement@@H@Z(scrPlace, overlayType);
}

/*
==============
DrawBars::DrawLegend
==============
*/

void __fastcall DrawBars::DrawLegend(DrawBars *this, const float x, const float y, const float width, const float height)
{
  ?DrawLegend@DrawBars@@QEAAXMMMM@Z(this, x, y, width, height);
}

/*
==============
DrawBars::DrawBudgetPollInternal
==============
*/

void __fastcall DrawBars::DrawBudgetPollInternal(DrawBars *this, const MemBudget_PollData *poll, const MemBudget_HardwareType hardware, const MemBudget_BuildType build)
{
  ?DrawBudgetPollInternal@DrawBars@@AEAAXAEBUMemBudget_PollData@@W4MemBudget_HardwareType@@W4MemBudget_BuildType@@@Z(this, poll, hardware, build);
}

/*
==============
DrawBars::GetColor
==============
*/

const vec4_t *__fastcall DrawBars::GetColor(DrawBars *this, const MemBudget_PollType pollType)
{
  return ?GetColor@DrawBars@@AEBAAEBTvec4_t@@W4MemBudget_PollType@@@Z(this, pollType);
}

/*
==============
DrawBars::DrawBudgetPoll
==============
*/

void __fastcall DrawBars::DrawBudgetPoll(DrawBars *this, const MemBudget_PollData *poll, const MemBudget_HardwareType hardware, const MemBudget_BuildType build)
{
  ?DrawBudgetPoll@DrawBars@@QEAAXAEBUMemBudget_PollData@@W4MemBudget_HardwareType@@W4MemBudget_BuildType@@@Z(this, poll, hardware, build);
}

/*
==============
DrawBars::DrawBar
==============
*/
void DrawBars::DrawBar(DrawBars *this, const __int64 size, const vec4_t *color)
{
  char *v16; 
  const char *v17; 
  __int64 v18; 
  float barAreaX; 
  bool v37; 
  char p_destString[32]; 
  _BYTE v50[20]; 
  void *retaddr; 

  if ( size )
  {
    _R11 = &retaddr;
    _RBX = this;
    _R14 = color;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, rdx
      vmulss  xmm0, xmm6, cs:__real@35800000
      vcvtss2sd xmm1, xmm0, xmm0
      vmovq   rdx, xmm1
      vmovaps xmmword ptr [r11-98h], xmm11
    }
    v16 = j_va("%.1fmb", _RDX);
    v17 = v16;
    v18 = -1i64;
    do
      ++v18;
    while ( v16[v18] );
    __asm
    {
      vmulss  xmm1, xmm6, cs:__real@33cccccd
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm6, cs:__real@3f800000
      vmovss  xmm10, cs:__real@41300000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm9, xmm0, dword ptr [rbx+10h]
      vmaxss  xmm8, xmm1, xmm6
      vcomiss xmm9, xmm8
    }
    if ( v16[v18] )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+20h]
        vmovss  xmm3, dword ptr [rbx+1Ch]
        vaddss  xmm0, xmm2, xmm9
        vaddss  xmm1, xmm0, xmm8
        vcomiss xmm1, xmm3
      }
      if ( v16[v18] )
      {
        __asm { vcomiss xmm2, xmm3 }
        if ( v16[v18] )
        {
          __asm { vaddss  xmm1, xmm10, dword ptr [rbx+24h] }
          barAreaX = _RBX->barAreaX;
          __asm { vmovss  dword ptr [rbx+24h], xmm1 }
          _RBX->barCursorX = barAreaX;
        }
      }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+20h]
      vcomiss xmm1, dword ptr [rbx+1Ch]
      vaddss  xmm1, xmm10, dword ptr [rbx+24h]
      vmovss  dword ptr [rbx+24h], xmm1
      vmovss  xmm1, dword ptr [rbx+14h]
      vmovss  dword ptr [rbx+20h], xmm1
      vxorps  xmm11, xmm11, xmm11
      vcomiss xmm8, xmm11
    }
    p_destString[0] = 0;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\string_storage.h", 41, ASSERT_TYPE_ASSERT, "( p_constString != 0 )", (const char *)&queryFormat, "p_constString != NULL") )
      __debugbreak();
    ntl::internal::string_assign(p_destString, 0x40ui64, v17);
    v37 = _RBX->curBarTexts.m_size < 4;
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups [rsp+1B8h+var_108+4], xmm0
      vmovss  dword ptr [rsp+1B8h+var_108], xmm9
    }
    if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    _RCX = 84 * _RBX->curBarTexts.m_size;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+1B8h+p_destString]
      vmovups ymmword ptr [rcx+rbx+0D0h], ymm0
      vmovups ymm1, [rsp+1B8h+var_128]
      vmovups ymmword ptr [rcx+rbx+0F0h], ymm1
      vmovups xmm0, [rsp+1B8h+var_108]
      vmovups xmmword ptr [rcx+rbx+110h], xmm0
    }
    *(_DWORD *)&_RBX->curBarTexts.m_data.m_buffer[_RCX + 80] = *(_DWORD *)&v50[16];
    ++_RBX->curBarTexts.m_size;
    __asm
    {
      vmovaps xmm10, [rsp+1B8h+var_88]
      vmovaps xmm9, [rsp+1B8h+var_78]
      vmovaps xmm8, [rsp+1B8h+var_68]
      vmovaps xmm6, [rsp+1B8h+var_48]
      vmovaps xmm11, [rsp+1B8h+var_98]
    }
  }
}

/*
==============
DrawBars::DrawBudgetPoll
==============
*/
void DrawBars::DrawBudgetPoll(DrawBars *this, const MemBudget_PollData *poll, const MemBudget_HardwareType hardware, const MemBudget_BuildType build)
{
  signed __int64 v4; 
  void *v6; 
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  unsigned __int8 CurrentGameModeType; 
  char *m_activeGameMapName; 
  unsigned __int8 v13; 
  const char *v14; 
  const char *v15; 
  __int64 v18; 
  __int64 v19; 
  const char *GameModeTypeName; 
  const char *BuildTypeName; 
  const char *HardwareTypeName; 
  const char *v27; 
  __int64 v30; 
  const char *v36; 
  MemBudget_BuildType v40; 
  MemBudget_HardwareType v41; 
  const MemBudget_PollData *p_outProject; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  MemBudget_PollData outProject; 

  v6 = alloca(v4);
  __asm { vmovaps [rsp+40A8h+var_58], xmm7 }
  v7 = build;
  v8 = hardware;
  _RSI = this;
  CurrentGameModeType = MemBudget_GetCurrentGameModeType();
  m_activeGameMapName = cls.m_activeGameMapName;
  v13 = CurrentGameModeType;
  v14 = "This Run";
  if ( !cls.m_activeGameMapName[0] )
    m_activeGameMapName = (char *)&queryFormat.fmt + 3;
  if ( _RSI->projectedBudget )
    v14 = "Projected";
  v15 = j_va("%s %s", m_activeGameMapName, v14);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vaddss  xmm1, xmm0, cs:__real@41200000
  }
  v18 = -1i64;
  v19 = -1i64;
  do
    ++v19;
  while ( v15[v19] );
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+20h]
    vmovss  xmm7, cs:__real@3e4ccccd
    vmovss  [rsp+40A8h+var_4068], xmm7
    vmovss  [rsp+40A8h+var_4080], xmm1
    vmovss  [rsp+40A8h+var_4088], xmm0
  }
  UI_DrawText(_RSI->scrPlace, v15, v19, _RSI->font, v44, v47, 1, 1, v50, &colorWhite, 3);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vaddss  xmm0, xmm0, cs:__real@41400000
    vmovss  dword ptr [rsi+24h], xmm0
  }
  GameModeTypeName = MemBudget_GetGameModeTypeName((MemBudget_GameModeType)v13);
  BuildTypeName = MemBudget_GetBuildTypeName((MemBudget_BuildType)v7);
  HardwareTypeName = MemBudget_GetHardwareTypeName((MemBudget_HardwareType)v8);
  v27 = j_va("%s %s %s", HardwareTypeName, BuildTypeName, GameModeTypeName);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vaddss  xmm1, xmm0, cs:__real@41200000
  }
  v30 = -1i64;
  do
    ++v30;
  while ( v27[v30] );
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+20h]
    vmovss  [rsp+40A8h+var_4068], xmm7
    vmovss  [rsp+40A8h+var_4080], xmm1
    vmovss  [rsp+40A8h+var_4088], xmm0
  }
  UI_DrawText(_RSI->scrPlace, v27, v30, _RSI->font, v45, v48, 1, 1, v51, &colorWhite, 3);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vaddss  xmm1, xmm0, cs:__real@41400000
    vmovss  dword ptr [rsi+24h], xmm1
  }
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+24h]
      vaddss  xmm1, xmm0, cs:__real@41200000
    }
    v36 = "UHD";
    if ( _RSI->projectedBudget )
      v36 = "INACCURATE PROJECTION (UHD FFS)";
    do
      ++v18;
    while ( v36[v18] );
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+20h]
      vmovss  [rsp+40A8h+var_4068], xmm7
      vmovss  [rsp+40A8h+var_4080], xmm1
      vmovss  [rsp+40A8h+var_4088], xmm0
    }
    UI_DrawText(_RSI->scrPlace, v36, v18, _RSI->font, v46, v49, 1, 1, v52, &colorRed, 3);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+24h]
      vaddss  xmm1, xmm0, cs:__real@41400000
      vmovss  dword ptr [rsi+24h], xmm1
    }
  }
  v40 = v7;
  v41 = v8;
  if ( _RSI->projectedBudget )
  {
    MemBudget_Project(poll, &outProject, (MemBudget_HardwareType)v8, (MemBudget_BuildType)v7);
    v40 = v7;
    p_outProject = &outProject;
    v41 = v8;
  }
  else
  {
    p_outProject = poll;
  }
  DrawBars::DrawBudgetPollInternal(_RSI, p_outProject, v41, v40);
  __asm { vmovaps xmm7, [rsp+40A8h+var_58] }
}

/*
==============
DrawBars::DrawBudgetPollInternal
==============
*/
void DrawBars::DrawBudgetPollInternal(DrawBars *this, const MemBudget_PollData *poll, const MemBudget_HardwareType hardware, const MemBudget_BuildType build)
{
  ntl::fixed_vector<DrawBars::BarText,4,0> *p_curBarTexts; 
  MemBudget_PollArray *p_readings; 
  unsigned __int8 v19; 
  unsigned __int8 v21; 
  unsigned int v23; 
  __int64 v24; 
  const char *PollTypeName; 
  unsigned int v26; 
  unsigned __int8 ParentPollType; 
  __int64 v29; 
  __int64 v32; 
  const vec4_t *v33; 
  __int64 v34; 
  const MemBudget_PollArray *ProjectedBudgets; 
  __int64 v36; 
  const vec4_t *Color; 
  const vec4_t *v38; 
  unsigned __int64 m_size; 
  ntl::fixed_vector<DrawBars::BarText,4,0> *v40; 
  ntl::fixed_vector<DrawBars::BarText,4,0> *v41; 
  bool v42; 
  __int64 v47; 
  ntl::fixed_vector<DrawBars::BarText,4,0> *v50; 
  unsigned __int64 v51; 
  float fmt; 
  float fmta; 
  float y; 
  float ya; 
  float v64; 
  float v65; 
  char v68; 
  void *retaddr; 
  unsigned __int8 v70; 
  unsigned __int8 v71; 

  _RAX = &retaddr;
  v71 = build;
  v70 = hardware;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  p_curBarTexts = &this->curBarTexts;
  __asm
  {
    vmovss  xmm6, cs:__real@40000000
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  p_readings = &poll->readings;
  __asm
  {
    vmovss  xmm7, cs:__real@41300000
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RDI = this;
  __asm
  {
    vmovss  xmm8, cs:__real@41200000
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovss  xmm9, cs:__real@3f800000
    vmovaps [rsp+0F8h+var_88], xmm10
  }
  v19 = build;
  __asm
  {
    vmovss  xmm10, cs:__real@3e4ccccd
    vmovaps [rsp+0F8h+var_98], xmm11
  }
  v21 = hardware;
  __asm { vmovss  xmm11, cs:__real@c0a00000 }
  v23 = 0;
  do
  {
    v24 = p_readings->pollValues[0];
    if ( _RDI->wroteLabels )
    {
      v32 = (unsigned __int8)v23;
      _RDI->barCursorY = _RDI->labelYPos[(unsigned __int8)v23];
    }
    else
    {
      PollTypeName = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)v23);
      v26 = 0;
      ParentPollType = MemBudget_Poll_GetParentPollType((MemBudget_PollType)(unsigned __int8)v23);
      if ( ParentPollType != 38 )
      {
        do
        {
          ++v26;
          ParentPollType = MemBudget_Poll_GetParentPollType((MemBudget_PollType)ParentPollType);
        }
        while ( ParentPollType != 38 );
        if ( v26 > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_hud.cpp", 164, ASSERT_TYPE_ASSERT, "(depth <= MAX_DEPTH)", (const char *)&queryFormat, "depth <= MAX_DEPTH") )
          __debugbreak();
      }
      __asm { vaddss  xmm1, xmm8, dword ptr [rdi+24h] }
      v29 = -1i64;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm2, xmm0, xmm11
      }
      do
        ++v29;
      while ( PollTypeName[v29] );
      __asm
      {
        vmovss  [rsp+0F8h+var_B8], xmm10
        vmovss  [rsp+0F8h+y], xmm1
        vmovss  dword ptr [rsp+0F8h+fmt], xmm2
      }
      UI_DrawText(_RDI->scrPlace, PollTypeName, v29, _RDI->font, fmt, y, 1, 1, v64, &colorWhite, 3);
      v21 = v70;
      v32 = (unsigned __int8)v23;
      _RDI->labelYPos[(unsigned __int8)v23] = _RDI->barCursorY;
    }
    if ( v24 < 0 )
    {
      v33 = &COLOR_NEGATIVE;
      v34 = v24;
LABEL_27:
      DrawBars::DrawBar(_RDI, v34, v33);
      goto LABEL_28;
    }
    if ( _RDI->projectedBudget )
      ProjectedBudgets = MemBudget_BudgetFile_GetProjectedBudgets((MemBudget_HardwareType)v21, (MemBudget_BuildType)v19);
    else
      ProjectedBudgets = MemBudget_BudgetFile_GetCurrentBudgets();
    v36 = ProjectedBudgets->pollValues[v32];
    if ( v36 && v24 > v36 )
    {
      Color = DrawBars::GetColor(_RDI, (const MemBudget_PollType)(unsigned __int8)v23);
      DrawBars::DrawBar(_RDI, v36, Color);
      v33 = &COLOR_OVERBUDGET;
      v34 = v24 - v36;
      goto LABEL_27;
    }
    switch ( (char)v23 )
    {
      case 0:
      case 1:
      case 2:
      case 37:
        v38 = &COLOR_FREE;
        break;
      case 3:
      case 4:
        v38 = &COLOR_OSEXE;
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        v38 = &COLOR_STREAM;
        break;
      default:
        v38 = &COLOR_COMMIT;
        break;
    }
    DrawBars::DrawBar(_RDI, v24, v38);
    if ( v36 )
    {
      v33 = &COLOR_UNDERBUDGET;
      v34 = v36 - v24;
      goto LABEL_27;
    }
LABEL_28:
    m_size = p_curBarTexts->m_size;
    v40 = p_curBarTexts;
    v41 = (ntl::fixed_vector<DrawBars::BarText,4,0> *)((char *)p_curBarTexts + 84 * m_size);
    v42 = p_curBarTexts <= v41;
    if ( p_curBarTexts != v41 )
    {
      __asm { vmovss  xmm3, dword ptr [rdi+20h] }
      do
      {
        __asm
        {
          vaddss  xmm0, xmm3, dword ptr [rbx+40h]
          vmovss  xmm2, dword ptr [rdi+24h]
          vaddss  xmm1, xmm0, xmm6
          vcomiss xmm1, dword ptr [rdi+1Ch]
        }
        if ( !v42 )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rdi+14h]
            vaddss  xmm2, xmm2, xmm7
            vmovss  dword ptr [rdi+24h], xmm2
            vmovss  dword ptr [rdi+20h], xmm3
          }
        }
        v47 = -1i64;
        __asm
        {
          vaddss  xmm0, xmm2, xmm8
          vaddss  xmm1, xmm3, xmm9
        }
        do
          ++v47;
        while ( v40->m_data.m_buffer[v47] );
        __asm
        {
          vmovss  [rsp+0F8h+var_B8], xmm10
          vmovss  [rsp+0F8h+y], xmm0
          vmovss  dword ptr [rsp+0F8h+fmt], xmm1
        }
        UI_DrawText(_RDI->scrPlace, v40->m_data.m_buffer, v47, _RDI->font, fmta, ya, 1, 1, v65, (const vec4_t *)&v40->m_data.m_buffer[68], 3);
        __asm
        {
          vaddss  xmm1, xmm6, dword ptr [rbx+40h]
          vaddss  xmm3, xmm1, dword ptr [rdi+20h]
          vmovss  dword ptr [rdi+20h], xmm3
        }
        m_size = p_curBarTexts->m_size;
        v40 = (ntl::fixed_vector<DrawBars::BarText,4,0> *)((char *)v40 + 84);
        v50 = (ntl::fixed_vector<DrawBars::BarText,4,0> *)((char *)p_curBarTexts + 84 * m_size);
        v42 = v40 <= v50;
      }
      while ( v40 != v50 );
    }
    v51 = 0i64;
    if ( m_size )
    {
      do
      {
        if ( v51 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        ++v51;
      }
      while ( v51 < _RDI->curBarTexts.m_size );
      v19 = v71;
      p_curBarTexts = &_RDI->curBarTexts;
    }
    v21 = v70;
    _RDI->curBarTexts.m_size = 0i64;
    ++v23;
    __asm { vaddss  xmm1, xmm7, dword ptr [rdi+24h] }
    p_readings = (MemBudget_PollArray *)((char *)p_readings + 8);
    _RDI->barCursorX = _RDI->barAreaX;
    __asm { vmovss  dword ptr [rdi+24h], xmm1 }
  }
  while ( v23 < 0x26 );
  _R11 = &v68;
  _RDI->wroteLabels = 1;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
DrawBars::DrawLegend
==============
*/

void __fastcall DrawBars::DrawLegend(DrawBars *this, double x, double y, const float width, const float height)
{
  const ScreenPlacement *scrPlace; 
  const ScreenPlacement *v16; 
  const ScreenPlacement *v30; 
  const ScreenPlacement *v39; 
  const ScreenPlacement *v48; 
  const ScreenPlacement *v65; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  int horzAlign; 
  int horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  int horzAlignd; 
  int horzAligne; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  char v109; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+height]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = this;
  scrPlace = this->scrPlace;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  [rsp+0A8h+var_88], xmm0
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  UI_FillRect(scrPlace, *(float *)&x, *(float *)&y, width, v78, 1, 1, &colorWhiteMoreFaded);
  __asm { vmovss  xmm9, cs:__real@41400000 }
  v16 = _RBX->scrPlace;
  __asm
  {
    vaddss  xmm1, xmm6, xmm9; x
    vaddss  xmm2, xmm7, xmm9; y
    vmovaps xmm3, xmm9; width
    vmovss  [rsp+0A8h+var_88], xmm9
    vmovss  dword ptr [rbx+0C8h], xmm1
    vmovss  dword ptr [rbx+0C4h], xmm2
  }
  UI_FillRect(v16, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v79, 1, 1, &colorBlack);
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm7, cs:__real@41200000
    vaddss  xmm2, xmm8, dword ptr [rbx+0C4h]; y
    vaddss  xmm1, xmm8, dword ptr [rbx+0C8h]; x
    vmovaps xmm3, xmm7; width
    vmovss  [rsp+0A8h+var_88], xmm7
  }
  UI_FillRect(_RBX->scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v80, 1, 1, &COLOR_FREE);
  __asm
  {
    vaddss  xmm3, xmm9, dword ptr [rbx+0C4h]
    vaddss  xmm2, xmm9, dword ptr [rbx+0C8h]
    vmovss  xmm6, cs:__real@3e4ccccd
    vmovss  [rsp+0A8h+var_68], xmm6
    vmovss  [rsp+0A8h+horzAlign], xmm3
    vmovss  [rsp+0A8h+var_88], xmm2
  }
  UI_DrawText(_RBX->scrPlace, "Free Space", 10, _RBX->font, v81, *(float *)&horzAlign, 1, 1, v103, &colorWhite, 3);
  __asm
  {
    vaddss  xmm2, xmm9, dword ptr [rbx+0C4h]; y
    vmovss  xmm1, dword ptr [rbx+0C8h]; x
  }
  v30 = _RBX->scrPlace;
  __asm
  {
    vmovaps xmm3, xmm9; width
    vmovss  dword ptr [rbx+0C4h], xmm2
    vmovss  [rsp+0A8h+var_88], xmm9
  }
  UI_FillRect(v30, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v82, 1, 1, &colorBlack);
  __asm
  {
    vaddss  xmm2, xmm8, dword ptr [rbx+0C4h]; y
    vaddss  xmm1, xmm8, dword ptr [rbx+0C8h]; x
    vmovaps xmm3, xmm7; width
    vmovss  [rsp+0A8h+var_88], xmm7
  }
  UI_FillRect(_RBX->scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v83, 1, 1, &COLOR_STREAM);
  __asm
  {
    vaddss  xmm3, xmm9, dword ptr [rbx+0C4h]
    vaddss  xmm2, xmm9, dword ptr [rbx+0C8h]
    vmovss  [rsp+0A8h+var_68], xmm6
    vmovss  [rsp+0A8h+horzAlign], xmm3
    vmovss  [rsp+0A8h+var_88], xmm2
  }
  UI_DrawText(_RBX->scrPlace, "Streamer Memory", 15, _RBX->font, v84, *(float *)&horzAligna, 1, 1, v104, &colorWhite, 3);
  __asm
  {
    vaddss  xmm2, xmm9, dword ptr [rbx+0C4h]; y
    vmovss  xmm1, dword ptr [rbx+0C8h]; x
  }
  v39 = _RBX->scrPlace;
  __asm
  {
    vmovaps xmm3, xmm9; width
    vmovss  dword ptr [rbx+0C4h], xmm2
    vmovss  [rsp+0A8h+var_88], xmm9
  }
  UI_FillRect(v39, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v85, 1, 1, &colorBlack);
  __asm
  {
    vaddss  xmm2, xmm8, dword ptr [rbx+0C4h]; y
    vaddss  xmm1, xmm8, dword ptr [rbx+0C8h]; x
    vmovaps xmm3, xmm7; width
    vmovss  [rsp+0A8h+var_88], xmm7
  }
  UI_FillRect(_RBX->scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v86, 1, 1, &COLOR_OSEXE);
  __asm
  {
    vaddss  xmm3, xmm9, dword ptr [rbx+0C4h]
    vaddss  xmm2, xmm9, dword ptr [rbx+0C8h]
    vmovss  [rsp+0A8h+var_68], xmm6
    vmovss  [rsp+0A8h+horzAlign], xmm3
    vmovss  [rsp+0A8h+var_88], xmm2
  }
  UI_DrawText(_RBX->scrPlace, "OS / EXE Memory", 15, _RBX->font, v87, *(float *)&horzAlignb, 1, 1, v105, &colorWhite, 3);
  __asm
  {
    vaddss  xmm2, xmm9, dword ptr [rbx+0C4h]; y
    vmovss  xmm1, dword ptr [rbx+0C8h]; x
  }
  v48 = _RBX->scrPlace;
  __asm
  {
    vmovaps xmm3, xmm9; width
    vmovss  dword ptr [rbx+0C4h], xmm2
    vmovss  [rsp+0A8h+var_88], xmm9
  }
  UI_FillRect(v48, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v88, 1, 1, &colorBlack);
  __asm
  {
    vaddss  xmm2, xmm8, dword ptr [rbx+0C4h]; y
    vaddss  xmm1, xmm8, dword ptr [rbx+0C8h]; x
    vmovaps xmm3, xmm7; width
    vmovss  [rsp+0A8h+var_88], xmm7
  }
  UI_FillRect(_RBX->scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v89, 1, 1, &COLOR_COMMIT);
  __asm
  {
    vaddss  xmm3, xmm9, dword ptr [rbx+0C4h]
    vaddss  xmm2, xmm9, dword ptr [rbx+0C8h]
    vmovss  [rsp+0A8h+var_68], xmm6
    vmovss  [rsp+0A8h+horzAlign], xmm3
    vmovss  [rsp+0A8h+var_88], xmm2
  }
  UI_DrawText(_RBX->scrPlace, "Commit Memory", 13, _RBX->font, v90, *(float *)&horzAlignc, 1, 1, v106, &colorWhite, 3);
  __asm
  {
    vaddss  xmm2, xmm9, dword ptr [rbx+0C4h]; y
    vmovss  dword ptr [rbx+0C4h], xmm2
    vmovss  xmm1, dword ptr [rbx+0C8h]; x
    vmovaps xmm3, xmm9; width
    vmovss  [rsp+0A8h+var_88], xmm9
  }
  UI_FillRect(_RBX->scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v91, 1, 1, &colorBlack);
  __asm
  {
    vaddss  xmm2, xmm8, dword ptr [rbx+0C4h]; y
    vaddss  xmm1, xmm8, dword ptr [rbx+0C8h]; x
    vmovaps xmm3, xmm7; width
    vmovss  [rsp+0A8h+var_88], xmm7
  }
  UI_FillRect(_RBX->scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v92, 1, 1, &COLOR_OVERBUDGET);
  __asm
  {
    vaddss  xmm3, xmm9, dword ptr [rbx+0C4h]
    vaddss  xmm2, xmm9, dword ptr [rbx+0C8h]
    vmovss  [rsp+0A8h+var_68], xmm6
    vmovss  [rsp+0A8h+horzAlign], xmm3
    vmovss  [rsp+0A8h+var_88], xmm2
  }
  UI_DrawText(_RBX->scrPlace, "Overbudget", 10, _RBX->font, v93, *(float *)&horzAlignd, 1, 1, v107, &colorWhite, 3);
  __asm
  {
    vaddss  xmm2, xmm9, dword ptr [rbx+0C4h]; y
    vmovss  xmm1, dword ptr [rbx+0C8h]; x
  }
  v65 = _RBX->scrPlace;
  __asm
  {
    vmovaps xmm3, xmm9; width
    vmovss  dword ptr [rbx+0C4h], xmm2
    vmovss  [rsp+0A8h+var_88], xmm9
  }
  UI_FillRect(v65, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v94, 1, 1, &colorBlack);
  __asm
  {
    vaddss  xmm2, xmm8, dword ptr [rbx+0C4h]; y
    vaddss  xmm1, xmm8, dword ptr [rbx+0C8h]; x
    vmovaps xmm3, xmm7; width
    vmovss  [rsp+0A8h+var_88], xmm7
  }
  UI_FillRect(_RBX->scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v95, 1, 1, &COLOR_UNDERBUDGET);
  __asm
  {
    vaddss  xmm3, xmm9, dword ptr [rbx+0C4h]
    vaddss  xmm2, xmm9, dword ptr [rbx+0C8h]
    vmovss  [rsp+0A8h+var_68], xmm6
    vmovss  [rsp+0A8h+horzAlign], xmm3
    vmovss  [rsp+0A8h+var_88], xmm2
  }
  UI_DrawText(_RBX->scrPlace, "Underbudget", 11, _RBX->font, v96, *(float *)&horzAligne, 1, 1, v108, &colorWhite, 3);
  __asm { vaddss  xmm1, xmm9, dword ptr [rbx+0C4h] }
  _R11 = &v109;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rbx+0C4h], xmm1
  }
}

/*
==============
DrawBars::GetColor
==============
*/
vec4_t *DrawBars::GetColor(DrawBars *this, const MemBudget_PollType pollType)
{
  vec4_t *result; 

  switch ( (char)pollType )
  {
    case 0:
    case 1:
    case 2:
    case 37:
      result = &COLOR_FREE;
      break;
    case 3:
    case 4:
      result = &COLOR_OSEXE;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      result = &COLOR_STREAM;
      break;
    default:
      result = &COLOR_COMMIT;
      break;
  }
  return result;
}

/*
==============
MemBudget_HUD_Draw
==============
*/
void MemBudget_HUD_Draw(const ScreenPlacement *scrPlace, int overlayType)
{
  signed __int64 v2; 
  void *v8; 
  unsigned __int8 CurrentBuildType; 
  unsigned __int8 CurrentHardwareType; 
  MemBudget_BuildType v26; 
  MemBudget_HardwareType v27; 
  unsigned __int8 v35; 
  unsigned __int8 v36; 
  MemBudget_BuildType v42; 
  MemBudget_HardwareType v43; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  DrawBars font; 
  MemBudget_PollData outPoll; 
  char vars0; 

  v8 = alloca(v2);
  __asm
  {
    vmovaps [rsp+42B0h+var_10], xmm6
    vmovaps [rsp+42B0h+var_20], xmm7
    vmovaps [rsp+42B0h+var_30], xmm8
    vmovaps [rsp+42B0h+var_40], xmm9
  }
  font.curBarTexts.m_size = 0i64;
  *(_WORD *)&font.wroteLabels = 0;
  font.scrPlace = scrPlace;
  __asm { vmovss  xmm2, cs:__real@3f800000; scale }
  font.font = UI_GetFontHandle(scrPlace, 5, *(float *)&_XMM2);
  R_TextWidth("#", 1, font.font);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
    vmovss  xmm1, cs:__real@3e4ccccd; scale
  }
  *(double *)&_XMM0 = R_NormalizedTextScale(font.font, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vmovss  [rsp+42B0h+var_4250], xmm1
  }
  MemBudget_Poll_GetLastUpdateForHUD(&outPoll);
  __asm
  {
    vmovss  xmm8, cs:__real@42c80000
    vmovss  xmm9, cs:__real@43160000
  }
  if ( overlayType == 1 )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@42d20000
      vmovss  [rsp+42B0h+var_424C], xmm2
      vmovss  xmm1, cs:__real@40a00000
      vmovss  [rsp+42B0h+var_4248], xmm1
      vmovss  xmm0, cs:__real@43c30000
      vmovss  [rsp+42B0h+var_4244], xmm0
      vmovss  [rsp+42B0h+var_4240], xmm2
      vmovss  [rsp+42B0h+var_423C], xmm1
    }
    font.projectedBudget = 0;
    __asm
    {
      vmovss  xmm0, cs:__real@447a0000
      vmovss  [rsp+42B0h+var_4290], xmm0
      vmovss  xmm3, cs:__real@43960000; width
      vxorps  xmm2, xmm2, xmm2; y
      vmovaps xmm1, xmm8; x
    }
    UI_FillRect(font.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v57, overlayType, overlayType, &colorWhiteMoreFaded);
    CurrentBuildType = MemBudget_GetCurrentBuildType();
    CurrentHardwareType = MemBudget_GetCurrentHardwareType();
    v26 = CurrentBuildType;
    v27 = CurrentHardwareType;
LABEL_5:
    DrawBars::DrawBudgetPoll(&font, &outPoll, v27, v26);
    goto LABEL_6;
  }
  if ( overlayType == 2 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@42d20000
      vmovss  [rsp+42B0h+var_424C], xmm1
      vmovss  xmm7, cs:__real@40a00000
      vmovss  [rsp+42B0h+var_4248], xmm7
      vmovss  xmm0, cs:__real@43700000
      vmovss  [rsp+42B0h+var_4244], xmm0
      vmovss  [rsp+42B0h+var_4240], xmm1
      vmovss  [rsp+42B0h+var_423C], xmm7
    }
    font.projectedBudget = 0;
    __asm
    {
      vmovss  xmm6, cs:__real@447a0000
      vmovss  [rsp+42B0h+var_4290], xmm6
      vmovaps xmm3, xmm9; width
      vxorps  xmm2, xmm2, xmm2; y
      vmovaps xmm1, xmm8; x
    }
    UI_FillRect(font.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v58, 1, 1, &colorWhiteMoreFaded);
    v35 = MemBudget_GetCurrentBuildType();
    v36 = MemBudget_GetCurrentHardwareType();
    DrawBars::DrawBudgetPoll(&font, &outPoll, (const MemBudget_HardwareType)v36, (const MemBudget_BuildType)v35);
    __asm
    {
      vmovss  xmm1, cs:__real@43848000
      vmovss  [rsp+42B0h+var_424C], xmm1
      vmovss  [rsp+42B0h+var_4248], xmm7
      vmovss  xmm0, cs:__real@43c80000
      vmovss  [rsp+42B0h+var_4244], xmm0
      vmovss  [rsp+42B0h+var_4240], xmm1
      vmovss  [rsp+42B0h+var_423C], xmm7
    }
    font.projectedBudget = 1;
    __asm
    {
      vmovss  [rsp+42B0h+var_4290], xmm6
      vmovaps xmm3, xmm9; width
      vxorps  xmm2, xmm2, xmm2; y
      vmovss  xmm1, cs:__real@43820000; x
    }
    UI_FillRect(font.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v59, 1, 1, &colorWhiteMoreFaded);
    LOBYTE(v42) = 1;
    LOBYTE(v43) = 2;
    DrawBars::DrawBudgetPoll(&font, &outPoll, v43, v42);
    __asm
    {
      vmovss  xmm1, cs:__real@43d48000
      vmovss  [rsp+42B0h+var_424C], xmm1
      vmovss  [rsp+42B0h+var_4248], xmm7
      vmovss  xmm0, cs:__real@440c0000
      vmovss  [rsp+42B0h+var_4244], xmm0
      vmovss  [rsp+42B0h+var_4240], xmm1
      vmovss  [rsp+42B0h+var_423C], xmm7
    }
    font.projectedBudget = 1;
    __asm
    {
      vmovss  [rsp+42B0h+var_4290], xmm6
      vmovaps xmm3, xmm9; width
      vxorps  xmm2, xmm2, xmm2; y
      vmovss  xmm1, cs:__real@43d20000; x
    }
    UI_FillRect(font.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v60, 1, 1, &colorWhiteMoreFaded);
    LOBYTE(v26) = 2;
    v27 = PhaseSpace;
    goto LABEL_5;
  }
LABEL_6:
  __asm
  {
    vmovss  [rsp+42B0h+var_4290], xmm8
    vmovaps xmm3, xmm9; width
    vmovss  xmm2, cs:__real@43af0000; y
    vmovss  xmm1, cs:__real@44160000; x
  }
  DrawBars::DrawLegend(&font, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, v61);
  ntl::fixed_vector<DrawBars::BarText,4,0>::~fixed_vector<DrawBars::BarText,4,0>(&font.curBarTexts);
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

