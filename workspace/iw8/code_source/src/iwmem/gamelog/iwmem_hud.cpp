/*
==============
IWMem_HUD_DrawUsageBars
==============
*/

void __fastcall IWMem_HUD_DrawUsageBars(const LocalClientNum_t localClientNum)
{
  ?IWMem_HUD_DrawUsageBars@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
IWMemHUDDraw::DrawBar
==============
*/

double __fastcall IWMemHUDDraw::DrawBar(IWMemHUDDraw *this, const float xPos, const float yPos, const float width, const vec4_t *color, const bool trim)
{
  double result; 

  *(float *)&result = ?DrawBar@IWMemHUDDraw@@QEBAMMMMAEBTvec4_t@@_N@Z(this, xPos, yPos, width, color, trim);
  return result;
}

/*
==============
IWMemHUDDraw::Init
==============
*/

bool __fastcall IWMemHUDDraw::Init(IWMemHUDDraw *this, const LocalClientNum_t localClientNum)
{
  return ?Init@IWMemHUDDraw@@QEAA_NW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
IWMemHUDDraw::DrawLabel
==============
*/

void __fastcall IWMemHUDDraw::DrawLabel(IWMemHUDDraw *this, const float xPos, const float yPos, const char *const caption)
{
  ?DrawLabel@IWMemHUDDraw@@QEBAXMMQEBD@Z(this, xPos, yPos, caption);
}

/*
==============
IWMem_HUD_DrawHierarchy
==============
*/

void __fastcall IWMem_HUD_DrawHierarchy(const LocalClientNum_t localClientNum)
{
  ?IWMem_HUD_DrawHierarchy@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
IWMemHUDDraw::DrawBar
==============
*/
float IWMemHUDDraw::DrawBar(IWMemHUDDraw *this, const float xPos, const float yPos, const float width, const vec4_t *color, const bool trim)
{
  float result; 
  __int64 v9; 
  float charWidth; 
  float v11; 

  result = 0.0;
  if ( width >= 0.0 )
  {
    v9 = -1i64;
    do
      ++v9;
    while ( this->captionName[v9] );
    charWidth = this->charWidth;
    if ( trim )
    {
      v11 = width;
      if ( (int)(float)((float)(width - 8.0) / charWidth) < (int)v9 )
        LODWORD(v9) = (int)(float)((float)(width - 8.0) / charWidth);
    }
    else
    {
      v11 = (float)((float)(int)v9 * charWidth) + 8.0;
    }
    UI_FillRect(this->scrPlace, xPos, yPos, v11, 12.0, 1, 1, &colorBlack);
    UI_FillRect(this->scrPlace, xPos + 1.0, yPos + 1.0, width - 2.0, 10.0, 1, 1, color);
    if ( (int)v9 > 0 )
      UI_DrawText(this->scrPlace, this->captionName, v9, this->font, xPos + 2.0, yPos + 10.0, 1, 1, 0.2, &colorWhite, 3);
    return v11;
  }
  return result;
}

/*
==============
IWMemHUDDraw::DrawLabel
==============
*/
void IWMemHUDDraw::DrawLabel(IWMemHUDDraw *this, const float xPos, const float yPos, const char *const caption)
{
  __int64 v6; 

  if ( !caption && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 150, ASSERT_TYPE_ASSERT, "(caption)", (const char *)&queryFormat, "caption") )
    __debugbreak();
  v6 = -1i64;
  do
    ++v6;
  while ( caption[v6] );
  if ( (int)v6 > 0 )
  {
    UI_FillRect(this->scrPlace, xPos, yPos, (float)((float)(int)v6 * this->charWidth) + 8.0, 12.0, 1, 1, &colorBlack);
    UI_DrawText(this->scrPlace, caption, v6, this->font, xPos + 2.0, yPos + 10.0, 1, 1, 0.2, &colorWhite, 3);
  }
}

/*
==============
IWMem_HUD_DrawHierarchy
==============
*/
void IWMem_HUD_DrawHierarchy(const LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v2; 
  LocalClientNum_t v3; 
  __int128 v4; 
  unsigned int v5; 
  float v6; 
  IWMemAllocator *v7; 
  IWMemAllocatorType m_type; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned int i; 
  unsigned __int64 CommitSize; 
  int v13; 
  IWMemAllocator *j; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  __int128 v20; 
  unsigned int AllocatorIndex; 
  unsigned __int64 v22; 
  const vec4_t *color; 
  const IWMemAllocator *ParentAllocator; 
  unsigned int v25; 
  __int64 v26; 
  __int128 v27; 
  __int128 v32; 
  const char *AllocatorTypeName; 
  float v36; 
  __int128 v38; 
  bool v40; 
  __int128 v41; 
  __int64 v42; 
  __int128 v44; 
  __int128 v48; 
  int IsKeyDown; 
  unsigned int v50; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  unsigned int v53; 
  IWMemHUDDraw v55; 
  int v56[386]; 

  v2 = alloca(v1);
  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808000, "IWMem_HUD_DrawHierarchy");
  if ( IWMemHUDDraw::Init(&v55, v3) )
  {
    memset_0(v56, 0, 0x600ui64);
    v4 = 0i64;
    v5 = 0;
    v53 = 0;
    if ( v55.allocatorCount )
    {
      v6 = FLOAT_11_0;
      do
      {
        if ( !v55.allocators[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 351, ASSERT_TYPE_ASSERT, "(draw.allocators[i])", (const char *)&queryFormat, "draw.allocators[i]") )
          __debugbreak();
        v7 = (IWMemAllocator *)v55.allocators[v5];
        m_type = v7->m_type;
        if ( m_type )
        {
          if ( m_type == Count )
          {
            v9 = 0i64;
          }
          else
          {
            v10 = 0i64;
            for ( i = 0; i < v55.allocatorCount; ++i )
            {
              if ( IWMemAllocator::GetParentAllocator((IWMemAllocator *)v55.allocators[i]) == v7 )
                v10 += IWMemAllocator::GetCommitSize((IWMemAllocator *)v55.allocators[i]);
            }
            CommitSize = IWMemAllocator::GetCommitSize(v7);
            if ( v10 > CommitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 229, ASSERT_TYPE_ASSERT, "(childUsage <= thisUsage)", (const char *)&queryFormat, "childUsage <= thisUsage") )
              __debugbreak();
            v9 = CommitSize - v10;
          }
        }
        else
        {
          v9 = 0i64;
        }
        v13 = 0;
        for ( j = (IWMemAllocator *)IWMemAllocator::GetParentAllocator(v7); j; j = (IWMemAllocator *)IWMemAllocator::GetParentAllocator(j) )
          ++v13;
        v16 = 0i64;
        *(float *)&v16 = (float)v9;
        v15 = v16;
        if ( v9 < 0 )
        {
          *(float *)&v16 = *(float *)&v16 + 1.8446744e19;
          v15 = v16;
        }
        v18 = v15;
        *(float *)&v18 = *(float *)&v15 * 0.0000019073486;
        v17 = v18;
        v20 = 0i64;
        *(float *)&v20 = (float)v13 * 10.0;
        v19 = *(float *)&v20;
        AllocatorIndex = IWMem_AllocatorManager_GetAllocatorIndex(v7);
        v22 = AllocatorIndex;
        if ( AllocatorIndex >= 0x180 )
        {
          LODWORD(vertAlign) = 384;
          LODWORD(horzAlign) = AllocatorIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 362, ASSERT_TYPE_ASSERT, "(unsigned)( fixedIndex ) < (unsigned)( ( sizeof( *array_counter( allocYPos ) ) + 0 ) )", "fixedIndex doesn't index ARRAY_COUNT( allocYPos )\n\t%i not in [0, %i)", horzAlign, vertAlign) )
            __debugbreak();
        }
        v56[v22] = v4;
        if ( v5 >= s_iwMemHUDHierarchyOffset )
        {
          color = &BAR_COLORS[v22 % 9];
          if ( IWMemAllocator::GetParentAllocator(v7) )
          {
            ParentAllocator = IWMemAllocator::GetParentAllocator(v7);
            v25 = IWMem_AllocatorManager_GetAllocatorIndex(ParentAllocator);
            v26 = v25;
            if ( v25 >= 0x180 )
            {
              LODWORD(vertAlign) = 384;
              LODWORD(horzAlign) = v25;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 375, ASSERT_TYPE_ASSERT, "(unsigned)( parentFixedIndex ) < (unsigned)( ( sizeof( *array_counter( allocYPos ) ) + 0 ) )", "parentFixedIndex doesn't index ARRAY_COUNT( allocYPos )\n\t%i not in [0, %i)", horzAlign, vertAlign) )
                __debugbreak();
            }
            v27 = (unsigned int)v56[v26];
            *(float *)&v20 = *(float *)&v20 - 10.0;
            _XMM8 = v20;
            __asm
            {
              vminss  xmm1, xmm8, xmm11; x
              vmaxss  xmm0, xmm8, xmm11
            }
            UI_FillRect(v55.scrPlace, *(float *)&_XMM1, *(float *)&v4 + 5.5, *(float *)&_XMM0 - *(float *)&_XMM1, 1.0, 1, 1, &colorWhite);
            v32 = v27;
            *(float *)&v32 = *(float *)&v27 + 5.5;
            _XMM0 = v32;
            __asm
            {
              vminss  xmm2, xmm0, xmm6; y
              vmaxss  xmm0, xmm0, xmm6
            }
            UI_FillRect(v55.scrPlace, *(float *)&_XMM8, *(float *)&_XMM2, 1.0, *(float *)&_XMM0 - *(float *)&_XMM2, 1, 1, &colorWhite);
            v6 = FLOAT_11_0;
          }
          AllocatorTypeName = IWMem_GetAllocatorTypeName((const IWMemAllocatorType)v7->m_type);
          Com_sprintf(v55.captionName, 0x100ui64, "%s (%s-%.2fmb)", v7->m_name, AllocatorTypeName, (float)(*(float *)&v15 * 0.00000095367432));
          if ( *(float *)&v17 <= 0.001 )
          {
            IWMemHUDDraw::DrawBar(&v55, v19, *(const float *)&v4, 0.0, &colorBlack, 0);
          }
          else
          {
            v36 = FLOAT_720_0;
            v38 = LODWORD(FLOAT_720_0);
            *(float *)&v38 = 720.0 - v19;
            _XMM7 = v38;
            do
            {
              if ( v19 >= v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 391, ASSERT_TYPE_ASSERT, "(rowLeft > 0.0f)", (const char *)&queryFormat, "rowLeft > 0.0f") )
                __debugbreak();
              __asm { vminss  xmm6, xmm7, xmm9 }
              v40 = *(float *)&v17 >= *(float *)&_XMM7;
              v41 = v17;
              *(float *)&v41 = *(float *)&v17 - *(float *)&_XMM6;
              v17 = v41;
              if ( *(float *)&_XMM6 >= 0.0 )
              {
                v42 = -1i64;
                do
                  ++v42;
                while ( v55.captionName[v42] );
                UI_FillRect(v55.scrPlace, v19, *(float *)&v4, (float)((float)(int)v42 * v55.charWidth) + 8.0, 12.0, 1, 1, &colorBlack);
                UI_FillRect(v55.scrPlace, v19 + 1.0, *(float *)&v4 + 1.0, *(float *)&_XMM6 - 2.0, 10.0, 1, 1, color);
                if ( (int)v42 > 0 )
                  UI_DrawText(v55.scrPlace, v55.captionName, v42, v55.font, v19 + 2.0, *(float *)&v4 + 10.0, 1, 1, 0.2, &colorWhite, 3);
              }
              v44 = v4;
              *(float *)&v44 = *(float *)&v4 + v6;
              _XMM3 = v44;
              _XMM0 = v40;
              __asm
              {
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm3, xmm3, xmm12, xmm2
              }
              v4 = _XMM3;
              v36 = FLOAT_720_0;
            }
            while ( *(float *)&v17 > 0.001 );
            v5 = v53;
          }
          v48 = v4;
          *(float *)&v48 = *(float *)&v4 + v6;
          v4 = v48;
        }
        v53 = ++v5;
      }
      while ( v5 < v55.allocatorCount );
      v3 = localClientNum;
    }
    IWMem_DumpUnlock();
    if ( CL_Keys_IsKeyDown(v3, 170) && s_iwMemHUDHierarchyOffset )
      --s_iwMemHUDHierarchyOffset;
    IsKeyDown = CL_Keys_IsKeyDown(v3, 176);
    v50 = s_iwMemHUDHierarchyOffset;
    if ( IsKeyDown )
      v50 = s_iwMemHUDHierarchyOffset + 1;
    if ( v50 > v55.allocatorCount - 1 )
      v50 = v55.allocatorCount - 1;
    s_iwMemHUDHierarchyOffset = v50;
    UI_FillRect(v55.scrPlace, 500.0, -10.0, (float)(v55.charWidth * 40.0) + 8.0, 12.0, 1, 1, &colorBlack);
    UI_DrawText(v55.scrPlace, "iwmem: Use Numpad arrow keys to navigate", 40, v55.font, 502.0, 0.0, 1, 1, 0.2, &colorWhite, 3);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
IWMem_HUD_DrawUsageBars
==============
*/
void IWMem_HUD_DrawUsageBars(const LocalClientNum_t localClientNum)
{
  __int128 v2; 
  __int128 v3; 
  unsigned int i; 
  IWMemAllocator *v5; 
  IWMemAllocatorType m_type; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned int j; 
  unsigned __int64 CommitSize; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  int v14; 
  IWMemAllocator *v15; 
  unsigned __int8 k; 
  const vec4_t *color; 
  __int128 v19; 
  bool v21; 
  __int128 v22; 
  const char *AllocatorTypeName; 
  __int64 v24; 
  __int128 v25; 
  __int128 v27; 
  IWMemHUDDraw v31; 

  Sys_ProfBeginNamedEvent(0xFF808000, "IWMem_HUD_DrawUsageBars");
  if ( IWMemHUDDraw::Init(&v31, localClientNum) )
  {
    v2 = 0i64;
    v3 = 0i64;
    for ( i = 0; i < v31.allocatorCount; ++i )
    {
      if ( !v31.allocators[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 277, ASSERT_TYPE_ASSERT, "(draw.allocators[i])", (const char *)&queryFormat, "draw.allocators[i]") )
        __debugbreak();
      v5 = (IWMemAllocator *)v31.allocators[i];
      m_type = v5->m_type;
      if ( m_type )
      {
        if ( m_type == Count )
        {
          v7 = 0i64;
        }
        else
        {
          v8 = 0i64;
          for ( j = 0; j < v31.allocatorCount; ++j )
          {
            if ( IWMemAllocator::GetParentAllocator((IWMemAllocator *)v31.allocators[j]) == v5 )
              v8 += IWMemAllocator::GetCommitSize((IWMemAllocator *)v31.allocators[j]);
          }
          CommitSize = IWMemAllocator::GetCommitSize(v5);
          if ( v8 > CommitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 229, ASSERT_TYPE_ASSERT, "(childUsage <= thisUsage)", (const char *)&queryFormat, "childUsage <= thisUsage") )
            __debugbreak();
          v7 = CommitSize - v8;
          if ( (unsigned __int64)v7 > 0x200000000i64 )
            continue;
        }
      }
      else
      {
        v7 = 0i64;
      }
      v13 = 0i64;
      v11 = (float)v7;
      *(float *)&v13 = v11 * 0.0000019073486;
      v12 = v13;
      v14 = 0;
      v15 = v5;
      for ( k = v5->m_name[0]; v15->m_name[0]; k = v15->m_name[0] )
      {
        v15 = (IWMemAllocator *)((char *)v15 + 1);
        v14 = k ^ (16777619 * v14);
      }
      color = &BAR_COLORS[(v5->m_type ^ (unsigned int)v14) % 9ui64];
      if ( *(float *)&v13 > 0.001 )
      {
        do
        {
          v19 = LODWORD(FLOAT_720_0);
          *(float *)&v19 = 720.0 - *(float *)&v2;
          _XMM0 = v19;
          if ( *(float *)&v2 >= 720.0 )
          {
            v21 = 1;
          }
          else
          {
            __asm { vminss  xmm6, xmm0, xmm8 }
            v21 = *(float *)&v12 >= *(float *)&v19;
            v22 = v12;
            *(float *)&v22 = *(float *)&v12 - *(float *)&_XMM6;
            v12 = v22;
            AllocatorTypeName = IWMem_GetAllocatorTypeName((const IWMemAllocatorType)v5->m_type);
            Com_sprintf(v31.captionName, 0x100ui64, "%s (%s-%.2fmb)", v5->m_name, AllocatorTypeName, (float)(v11 * 0.00000095367432));
            if ( *(float *)&_XMM6 >= 0.0 )
            {
              v24 = -1i64;
              do
                ++v24;
              while ( v31.captionName[v24] );
              if ( (int)(float)((float)(*(float *)&_XMM6 - 8.0) / v31.charWidth) < (int)v24 )
                LODWORD(v24) = (int)(float)((float)(*(float *)&_XMM6 - 8.0) / v31.charWidth);
              UI_FillRect(v31.scrPlace, *(float *)&v2, *(float *)&v3, *(float *)&_XMM6, 12.0, 1, 1, &colorBlack);
              UI_FillRect(v31.scrPlace, *(float *)&v2 + 1.0, *(float *)&v3 + 1.0, *(float *)&_XMM6 - 2.0, 10.0, 1, 1, color);
              if ( (int)v24 > 0 )
                UI_DrawText(v31.scrPlace, v31.captionName, v24, v31.font, *(float *)&v2 + 2.0, *(float *)&v3 + 10.0, 1, 1, 0.2, &colorWhite, 3);
            }
            else
            {
              LODWORD(_XMM6) = 0;
            }
            v25 = v2;
            *(float *)&v25 = *(float *)&v2 + *(float *)&_XMM6;
            v2 = v25;
            if ( !v21 )
              goto LABEL_34;
          }
          v2 = 0i64;
LABEL_34:
          v27 = v3;
          *(float *)&v27 = *(float *)&v3 + 11.0;
          _XMM3 = v27;
          _XMM0 = v21;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm3, xmm9, xmm2
          }
          v3 = _XMM3;
        }
        while ( *(float *)&v12 > 0.001 );
      }
    }
    IWMem_DumpUnlock();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
IWMemHUDDraw::Init
==============
*/
char IWMemHUDDraw::Init(IWMemHUDDraw *this, const LocalClientNum_t localClientNum)
{
  bool v3; 
  const ScreenPlacement *v4; 
  GfxFont *FontHandle; 
  float v6; 
  double v7; 

  if ( activeScreenPlacementMode == SCRMODE_FULL )
  {
LABEL_7:
    v4 = &scrPlaceFull;
    goto LABEL_8;
  }
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v3 )
      __debugbreak();
    goto LABEL_7;
  }
  v4 = &scrPlaceViewDisplay[localClientNum];
LABEL_8:
  this->scrPlace = v4;
  FontHandle = UI_GetFontHandle(v4, 5, 1.0);
  this->font = FontHandle;
  v6 = (float)R_TextWidth("#", 1, FontHandle);
  v7 = R_NormalizedTextScale(this->font, 0.2);
  this->charWidth = *(float *)&v7 * v6;
  this->allocatorCount = 0;
  if ( IWMem_HasHadInternalError() )
  {
    IWMemHUDDraw::DrawLabel(this, 0.0, 0.0, "IWMem Internal Error");
    return 0;
  }
  else
  {
    IWMem_PollingUpdate();
    IWMem_DumpLock();
    this->allocatorCount = IWMem_AllocatorManager_GetSortedAllocatorList(this->allocators, 0x180u);
    return 1;
  }
}

