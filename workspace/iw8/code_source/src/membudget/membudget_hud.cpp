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
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v10; 
  char *v11; 
  const char *v12; 
  __int64 v13; 
  float v15; 
  float barCursorX; 
  float barAreaEndX; 
  float barAreaX; 
  float v20; 
  char v21; 
  __int128 barAreaEndX_low; 
  __int128 v24; 
  __int128 v27; 
  bool v28; 
  unsigned __int64 v29; 
  char p_destString[32]; 
  __m256i v31; 
  _BYTE v32[20]; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 

  if ( size )
  {
    v10 = 0i64;
    *(float *)&v10 = (float)size;
    v11 = j_va("%.1fmb", (float)(*(float *)&v10 * 0.00000095367432));
    v12 = v11;
    v13 = -1i64;
    do
      ++v13;
    while ( v11[v13] );
    *(float *)&v10 = *(float *)&v10 * 0.000000095367433;
    _XMM1 = v10 & _xmm;
    v15 = (float)(int)v13 * this->charWidth;
    __asm { vmaxss  xmm8, xmm1, xmm6 }
    if ( v15 > *(float *)&_XMM8 )
    {
      barCursorX = this->barCursorX;
      barAreaEndX = this->barAreaEndX;
      if ( (float)((float)(barCursorX + v15) + *(float *)&_XMM8) > barAreaEndX && barCursorX > barAreaEndX )
      {
        barAreaX = this->barAreaX;
        this->barCursorY = this->barCursorY + 11.0;
        this->barCursorX = barAreaX;
      }
    }
    v20 = this->barCursorX;
    if ( v20 >= this->barAreaEndX )
    {
      this->barCursorY = this->barCursorY + 11.0;
      v20 = this->barAreaX;
      this->barCursorX = v20;
    }
    v21 = 0;
    if ( *(float *)&_XMM8 <= 0.0 )
      goto LABEL_23;
    v37 = v3;
    v36 = v4;
    v35 = v5;
    v34 = v6;
    v33 = v7;
    do
    {
      barAreaEndX_low = LODWORD(this->barAreaEndX);
      if ( (float)(v20 + 1.0) >= *(float *)&barAreaEndX_low )
      {
        this->barCursorY = this->barCursorY + 11.0;
        v20 = this->barAreaX;
        this->barCursorX = v20;
      }
      v24 = barAreaEndX_low;
      *(float *)&v24 = *(float *)&barAreaEndX_low - v20;
      _XMM7 = v24;
      if ( (float)(*(float *)&barAreaEndX_low - v20) < 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
        __debugbreak();
      __asm
      {
        vminss  xmm0, xmm7, xmm8
        vmaxss  xmm7, xmm0, xmm6
      }
      v27 = _XMM8;
      *(float *)&v27 = *(float *)&_XMM8 - *(float *)&_XMM7;
      _XMM8 = v27;
      UI_FillRect(this->scrPlace, this->barCursorX, this->barCursorY, *(float *)&_XMM7, 12.0, 1, 1, &colorBlack);
      if ( *(float *)&_XMM7 > 2.0 )
      {
        UI_FillRect(this->scrPlace, this->barCursorX + 1.0, this->barCursorY + 1.0, *(float *)&_XMM7 - 2.0, 10.0, 1, 1, color);
        if ( !v21 && *(float *)&_XMM7 >= v15 )
        {
          UI_DrawText(this->scrPlace, v12, v13, this->font, this->barCursorX + 1.0, this->barCursorY + 10.0, 1, 1, 0.2, color, 3);
          v21 = 1;
        }
      }
      v20 = (float)(*(float *)&_XMM7 - 1.0) + this->barCursorX;
      this->barCursorX = v20;
    }
    while ( *(float *)&v27 > 0.0 );
    if ( !v21 )
    {
LABEL_23:
      p_destString[0] = 0;
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\string_storage.h", 41, ASSERT_TYPE_ASSERT, "( p_constString != 0 )", (const char *)&queryFormat, "p_constString != NULL") )
        __debugbreak();
      ntl::internal::string_assign(p_destString, 0x40ui64, v12);
      v28 = this->curBarTexts.m_size < 4;
      *(vec4_t *)&v32[4] = *color;
      *(float *)v32 = v15;
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
        __debugbreak();
      v29 = 84 * this->curBarTexts.m_size;
      *(__m256i *)&this->curBarTexts.m_data.m_buffer[v29] = *(__m256i *)p_destString;
      *(__m256i *)&this->curBarTexts.m_data.m_buffer[v29 + 32] = v31;
      *(_OWORD *)&this->curBarTexts.m_data.m_buffer[v29 + 64] = *(_OWORD *)v32;
      *(_DWORD *)&this->curBarTexts.m_data.m_buffer[v29 + 80] = *(_DWORD *)&v32[16];
      ++this->curBarTexts.m_size;
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
  void *v5; 
  unsigned __int8 v6; 
  unsigned __int8 v7; 
  unsigned __int8 CurrentGameModeType; 
  char *m_activeGameMapName; 
  unsigned __int8 v12; 
  const char *v13; 
  const char *v14; 
  __int64 v15; 
  __int64 v16; 
  const char *GameModeTypeName; 
  const char *BuildTypeName; 
  const char *HardwareTypeName; 
  const char *v20; 
  __int64 v21; 
  const char *v22; 
  MemBudget_BuildType v23; 
  MemBudget_HardwareType v24; 
  const MemBudget_PollData *p_outProject; 
  MemBudget_PollData outProject; 

  v5 = alloca(v4);
  v6 = build;
  v7 = hardware;
  CurrentGameModeType = MemBudget_GetCurrentGameModeType();
  m_activeGameMapName = cls.m_activeGameMapName;
  v12 = CurrentGameModeType;
  v13 = "This Run";
  if ( !cls.m_activeGameMapName[0] )
    m_activeGameMapName = (char *)&queryFormat.fmt + 3;
  if ( this->projectedBudget )
    v13 = "Projected";
  v14 = j_va("%s %s", m_activeGameMapName, v13);
  v15 = -1i64;
  v16 = -1i64;
  do
    ++v16;
  while ( v14[v16] );
  UI_DrawText(this->scrPlace, v14, v16, this->font, this->barCursorX, this->barCursorY + 10.0, 1, 1, 0.2, &colorWhite, 3);
  this->barCursorY = this->barCursorY + 12.0;
  GameModeTypeName = MemBudget_GetGameModeTypeName((MemBudget_GameModeType)v12);
  BuildTypeName = MemBudget_GetBuildTypeName((MemBudget_BuildType)v6);
  HardwareTypeName = MemBudget_GetHardwareTypeName((MemBudget_HardwareType)v7);
  v20 = j_va("%s %s %s", HardwareTypeName, BuildTypeName, GameModeTypeName);
  v21 = -1i64;
  do
    ++v21;
  while ( v20[v21] );
  UI_DrawText(this->scrPlace, v20, v21, this->font, this->barCursorX, this->barCursorY + 10.0, 1, 1, 0.2, &colorWhite, 3);
  this->barCursorY = this->barCursorY + 12.0;
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
  {
    v22 = "UHD";
    if ( this->projectedBudget )
      v22 = "INACCURATE PROJECTION (UHD FFS)";
    do
      ++v15;
    while ( v22[v15] );
    UI_DrawText(this->scrPlace, v22, v15, this->font, this->barCursorX, this->barCursorY + 10.0, 1, 1, 0.2, &colorRed, 3);
    this->barCursorY = this->barCursorY + 12.0;
  }
  v23 = v6;
  v24 = v7;
  if ( this->projectedBudget )
  {
    MemBudget_Project(poll, &outProject, (MemBudget_HardwareType)v7, (MemBudget_BuildType)v6);
    v23 = v6;
    p_outProject = &outProject;
    v24 = v7;
  }
  else
  {
    p_outProject = poll;
  }
  DrawBars::DrawBudgetPollInternal(this, p_outProject, v24, v23);
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
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  unsigned int v9; 
  __int64 v10; 
  const char *PollTypeName; 
  unsigned int v12; 
  unsigned __int8 ParentPollType; 
  __int64 v14; 
  float v15; 
  float v16; 
  __int64 v17; 
  const vec4_t *v18; 
  __int64 v19; 
  const MemBudget_PollArray *ProjectedBudgets; 
  __int64 v21; 
  const vec4_t *Color; 
  const vec4_t *v23; 
  unsigned __int64 m_size; 
  ntl::fixed_vector<DrawBars::BarText,4,0> *v25; 
  float barCursorX; 
  float barCursorY; 
  __int64 v28; 
  unsigned __int64 v29; 
  float v30; 
  unsigned __int8 v31; 
  unsigned __int8 v32; 

  v32 = build;
  v31 = hardware;
  p_curBarTexts = &this->curBarTexts;
  p_readings = &poll->readings;
  v7 = build;
  v8 = hardware;
  v9 = 0;
  do
  {
    v10 = p_readings->pollValues[0];
    if ( this->wroteLabels )
    {
      v17 = (unsigned __int8)v9;
      this->barCursorY = this->labelYPos[(unsigned __int8)v9];
    }
    else
    {
      PollTypeName = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)v9);
      v12 = 0;
      ParentPollType = MemBudget_Poll_GetParentPollType((MemBudget_PollType)(unsigned __int8)v9);
      if ( ParentPollType != 38 )
      {
        do
        {
          ++v12;
          ParentPollType = MemBudget_Poll_GetParentPollType((MemBudget_PollType)ParentPollType);
        }
        while ( ParentPollType != 38 );
        if ( v12 > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_hud.cpp", 164, ASSERT_TYPE_ASSERT, "(depth <= MAX_DEPTH)", (const char *)&queryFormat, "depth <= MAX_DEPTH") )
          __debugbreak();
      }
      v14 = -1i64;
      v15 = (float)(2 - v12);
      v16 = v15 * -5.0;
      do
        ++v14;
      while ( PollTypeName[v14] );
      UI_DrawText(this->scrPlace, PollTypeName, v14, this->font, v16, this->barCursorY + 10.0, 1, 1, 0.2, &colorWhite, 3);
      v8 = v31;
      v17 = (unsigned __int8)v9;
      this->labelYPos[(unsigned __int8)v9] = this->barCursorY;
    }
    if ( v10 < 0 )
    {
      v18 = &COLOR_NEGATIVE;
      v19 = v10;
LABEL_27:
      DrawBars::DrawBar(this, v19, v18);
      goto LABEL_28;
    }
    if ( this->projectedBudget )
      ProjectedBudgets = MemBudget_BudgetFile_GetProjectedBudgets((MemBudget_HardwareType)v8, (MemBudget_BuildType)v7);
    else
      ProjectedBudgets = MemBudget_BudgetFile_GetCurrentBudgets();
    v21 = ProjectedBudgets->pollValues[v17];
    if ( v21 && v10 > v21 )
    {
      Color = DrawBars::GetColor(this, (const MemBudget_PollType)(unsigned __int8)v9);
      DrawBars::DrawBar(this, v21, Color);
      v18 = &COLOR_OVERBUDGET;
      v19 = v10 - v21;
      goto LABEL_27;
    }
    switch ( (char)v9 )
    {
      case 0:
      case 1:
      case 2:
      case 37:
        v23 = &COLOR_FREE;
        break;
      case 3:
      case 4:
        v23 = &COLOR_OSEXE;
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        v23 = &COLOR_STREAM;
        break;
      default:
        v23 = &COLOR_COMMIT;
        break;
    }
    DrawBars::DrawBar(this, v10, v23);
    if ( v21 )
    {
      v18 = &COLOR_UNDERBUDGET;
      v19 = v21 - v10;
      goto LABEL_27;
    }
LABEL_28:
    m_size = p_curBarTexts->m_size;
    v25 = p_curBarTexts;
    if ( p_curBarTexts != (ntl::fixed_vector<DrawBars::BarText,4,0> *)((char *)p_curBarTexts + 84 * m_size) )
    {
      barCursorX = this->barCursorX;
      do
      {
        barCursorY = this->barCursorY;
        if ( (float)((float)(barCursorX + *(float *)&v25->m_data.m_buffer[64]) + 2.0) > this->barAreaEndX )
        {
          barCursorX = this->barAreaX;
          barCursorY = barCursorY + 11.0;
          this->barCursorY = barCursorY;
          this->barCursorX = barCursorX;
        }
        v28 = -1i64;
        do
          ++v28;
        while ( v25->m_data.m_buffer[v28] );
        UI_DrawText(this->scrPlace, v25->m_data.m_buffer, v28, this->font, barCursorX + 1.0, barCursorY + 10.0, 1, 1, 0.2, (const vec4_t *)&v25->m_data.m_buffer[68], 3);
        barCursorX = (float)(*(float *)&v25->m_data.m_buffer[64] + 2.0) + this->barCursorX;
        this->barCursorX = barCursorX;
        m_size = p_curBarTexts->m_size;
        v25 = (ntl::fixed_vector<DrawBars::BarText,4,0> *)((char *)v25 + 84);
      }
      while ( v25 != (ntl::fixed_vector<DrawBars::BarText,4,0> *)((char *)p_curBarTexts + 84 * m_size) );
    }
    v29 = 0i64;
    if ( m_size )
    {
      do
      {
        if ( v29 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        ++v29;
      }
      while ( v29 < this->curBarTexts.m_size );
      v7 = v32;
      p_curBarTexts = &this->curBarTexts;
    }
    v8 = v31;
    this->curBarTexts.m_size = 0i64;
    ++v9;
    v30 = this->barCursorY + 11.0;
    p_readings = (MemBudget_PollArray *)((char *)p_readings + 8);
    this->barCursorX = this->barAreaX;
    this->barCursorY = v30;
  }
  while ( v9 < 0x26 );
  this->wroteLabels = 1;
}

/*
==============
DrawBars::DrawLegend
==============
*/
void DrawBars::DrawLegend(DrawBars *this, const float x, const float y, const float width, const float height)
{
  const ScreenPlacement *scrPlace; 
  float v7; 
  float v8; 
  float legendX; 
  const ScreenPlacement *v10; 
  float v11; 
  float v12; 
  const ScreenPlacement *v13; 
  float v14; 
  float v15; 
  const ScreenPlacement *v16; 
  float v17; 
  float v18; 
  float v19; 
  const ScreenPlacement *v20; 

  UI_FillRect(this->scrPlace, x, y, width, height, 1, 1, &colorWhiteMoreFaded);
  scrPlace = this->scrPlace;
  v7 = x + 12.0;
  this->legendX = v7;
  this->legendY = y + 12.0;
  UI_FillRect(scrPlace, v7, y + 12.0, 12.0, 12.0, 1, 1, &colorBlack);
  UI_FillRect(this->scrPlace, this->legendX + 1.0, this->legendY + 1.0, 10.0, 10.0, 1, 1, &COLOR_FREE);
  UI_DrawText(this->scrPlace, "Free Space", 10, this->font, this->legendX + 12.0, this->legendY + 12.0, 1, 1, 0.2, &colorWhite, 3);
  v8 = this->legendY + 12.0;
  legendX = this->legendX;
  v10 = this->scrPlace;
  this->legendY = v8;
  UI_FillRect(v10, legendX, v8, 12.0, 12.0, 1, 1, &colorBlack);
  UI_FillRect(this->scrPlace, this->legendX + 1.0, this->legendY + 1.0, 10.0, 10.0, 1, 1, &COLOR_STREAM);
  UI_DrawText(this->scrPlace, "Streamer Memory", 15, this->font, this->legendX + 12.0, this->legendY + 12.0, 1, 1, 0.2, &colorWhite, 3);
  v11 = this->legendY + 12.0;
  v12 = this->legendX;
  v13 = this->scrPlace;
  this->legendY = v11;
  UI_FillRect(v13, v12, v11, 12.0, 12.0, 1, 1, &colorBlack);
  UI_FillRect(this->scrPlace, this->legendX + 1.0, this->legendY + 1.0, 10.0, 10.0, 1, 1, &COLOR_OSEXE);
  UI_DrawText(this->scrPlace, "OS / EXE Memory", 15, this->font, this->legendX + 12.0, this->legendY + 12.0, 1, 1, 0.2, &colorWhite, 3);
  v14 = this->legendY + 12.0;
  v15 = this->legendX;
  v16 = this->scrPlace;
  this->legendY = v14;
  UI_FillRect(v16, v15, v14, 12.0, 12.0, 1, 1, &colorBlack);
  UI_FillRect(this->scrPlace, this->legendX + 1.0, this->legendY + 1.0, 10.0, 10.0, 1, 1, &COLOR_COMMIT);
  UI_DrawText(this->scrPlace, "Commit Memory", 13, this->font, this->legendX + 12.0, this->legendY + 12.0, 1, 1, 0.2, &colorWhite, 3);
  v17 = this->legendY + 12.0;
  this->legendY = v17;
  UI_FillRect(this->scrPlace, this->legendX, v17, 12.0, 12.0, 1, 1, &colorBlack);
  UI_FillRect(this->scrPlace, this->legendX + 1.0, this->legendY + 1.0, 10.0, 10.0, 1, 1, &COLOR_OVERBUDGET);
  UI_DrawText(this->scrPlace, "Overbudget", 10, this->font, this->legendX + 12.0, this->legendY + 12.0, 1, 1, 0.2, &colorWhite, 3);
  v18 = this->legendY + 12.0;
  v19 = this->legendX;
  v20 = this->scrPlace;
  this->legendY = v18;
  UI_FillRect(v20, v19, v18, 12.0, 12.0, 1, 1, &colorBlack);
  UI_FillRect(this->scrPlace, this->legendX + 1.0, this->legendY + 1.0, 10.0, 10.0, 1, 1, &COLOR_UNDERBUDGET);
  UI_DrawText(this->scrPlace, "Underbudget", 11, this->font, this->legendX + 12.0, this->legendY + 12.0, 1, 1, 0.2, &colorWhite, 3);
  this->legendY = this->legendY + 12.0;
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
  void *v3; 
  float v5; 
  double v6; 
  unsigned __int8 CurrentBuildType; 
  unsigned __int8 CurrentHardwareType; 
  MemBudget_BuildType v9; 
  MemBudget_HardwareType v10; 
  unsigned __int8 v11; 
  unsigned __int8 v12; 
  MemBudget_BuildType v13; 
  MemBudget_HardwareType v14; 
  DrawBars font; 
  MemBudget_PollData outPoll; 

  v3 = alloca(v2);
  font.curBarTexts.m_size = 0i64;
  *(_WORD *)&font.wroteLabels = 0;
  font.scrPlace = scrPlace;
  font.font = UI_GetFontHandle(scrPlace, 5, 1.0);
  v5 = (float)R_TextWidth("#", 1, font.font);
  v6 = R_NormalizedTextScale(font.font, 0.2);
  font.charWidth = *(float *)&v6 * v5;
  MemBudget_Poll_GetLastUpdateForHUD(&outPoll);
  if ( overlayType == 1 )
  {
    font.barAreaX = FLOAT_105_0;
    font.barAreaY = FLOAT_5_0;
    font.barAreaEndX = FLOAT_390_0;
    font.barCursorX = FLOAT_105_0;
    font.barCursorY = FLOAT_5_0;
    font.projectedBudget = 0;
    UI_FillRect(font.scrPlace, 100.0, 0.0, 300.0, 1000.0, 1, 1, &colorWhiteMoreFaded);
    CurrentBuildType = MemBudget_GetCurrentBuildType();
    CurrentHardwareType = MemBudget_GetCurrentHardwareType();
    v9 = CurrentBuildType;
    v10 = CurrentHardwareType;
LABEL_5:
    DrawBars::DrawBudgetPoll(&font, &outPoll, v10, v9);
    goto LABEL_6;
  }
  if ( overlayType == 2 )
  {
    font.barAreaX = FLOAT_105_0;
    font.barAreaY = FLOAT_5_0;
    font.barAreaEndX = FLOAT_240_0;
    font.barCursorX = FLOAT_105_0;
    font.barCursorY = FLOAT_5_0;
    font.projectedBudget = 0;
    UI_FillRect(font.scrPlace, 100.0, 0.0, 150.0, 1000.0, 1, 1, &colorWhiteMoreFaded);
    v11 = MemBudget_GetCurrentBuildType();
    v12 = MemBudget_GetCurrentHardwareType();
    DrawBars::DrawBudgetPoll(&font, &outPoll, (const MemBudget_HardwareType)v12, (const MemBudget_BuildType)v11);
    font.barAreaX = FLOAT_265_0;
    font.barAreaY = FLOAT_5_0;
    font.barAreaEndX = FLOAT_400_0;
    font.barCursorX = FLOAT_265_0;
    font.barCursorY = FLOAT_5_0;
    font.projectedBudget = 1;
    UI_FillRect(font.scrPlace, 260.0, 0.0, 150.0, 1000.0, 1, 1, &colorWhiteMoreFaded);
    LOBYTE(v13) = 1;
    LOBYTE(v14) = 2;
    DrawBars::DrawBudgetPoll(&font, &outPoll, v14, v13);
    font.barAreaX = FLOAT_425_0;
    font.barAreaY = FLOAT_5_0;
    font.barAreaEndX = FLOAT_560_0;
    font.barCursorX = FLOAT_425_0;
    font.barCursorY = FLOAT_5_0;
    font.projectedBudget = 1;
    UI_FillRect(font.scrPlace, 420.0, 0.0, 150.0, 1000.0, 1, 1, &colorWhiteMoreFaded);
    LOBYTE(v9) = 2;
    v10 = PhaseSpace;
    goto LABEL_5;
  }
LABEL_6:
  DrawBars::DrawLegend(&font, 600.0, 350.0, 150.0, 100.0);
  ntl::fixed_vector<DrawBars::BarText,4,0>::~fixed_vector<DrawBars::BarText,4,0>(&font.curBarTexts);
}

