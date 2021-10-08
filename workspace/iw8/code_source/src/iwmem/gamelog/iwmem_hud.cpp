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

float __fastcall IWMemHUDDraw::DrawBar(IWMemHUDDraw *this, double xPos, double yPos, double width, const vec4_t *color, const bool trim)
{
  IWMemHUDDraw *v12; 
  __int64 v17; 
  float v44; 
  float v45; 
  float v46; 
  int horzAlign; 
  float v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  v12 = this;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm9, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm8, xmm2
  }
  v17 = -1i64;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  do
    ++v17;
  while ( this->captionName[v17] );
  __asm
  {
    vmovss  xmm3, cs:__real@41000000
    vmovss  xmm2, dword ptr [rcx+10h]
    vsubss  xmm0, xmm6, xmm3
    vdivss  xmm1, xmm0, xmm2
    vcvttss2si eax, xmm1
  }
  if ( trim )
  {
    __asm { vmovaps xmm7, xmm6 }
    if ( _EAX < (int)v17 )
      LODWORD(v17) = _EAX;
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm1, xmm0, xmm2
      vaddss  xmm7, xmm1, xmm3
    }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@41400000
    vmovaps xmm3, xmm7; width
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm9; x
    vmovss  [rsp+0A8h+var_88], xmm0
  }
  UI_FillRect(this->scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v44, 1, 1, &colorBlack);
  __asm
  {
    vsubss  xmm3, xmm6, cs:__real@40000000; width
    vmovss  xmm6, cs:__real@41200000
    vaddss  xmm2, xmm8, cs:__real@3f800000; y
    vaddss  xmm1, xmm9, cs:__real@3f800000; x
    vmovss  [rsp+0A8h+var_88], xmm6
  }
  UI_FillRect(v12->scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v45, 1, 1, color);
  if ( (int)v17 > 0 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3e4ccccd
      vaddss  xmm3, xmm9, cs:__real@40000000
      vmovss  [rsp+0A8h+var_68], xmm1
      vaddss  xmm2, xmm8, xmm6
      vmovss  [rsp+0A8h+horzAlign], xmm2
      vmovss  [rsp+0A8h+var_88], xmm3
    }
    UI_DrawText(v12->scrPlace, v12->captionName, v17, v12->font, v46, *(float *)&horzAlign, 1, 1, v48, &colorWhite, 3);
  }
  __asm
  {
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+0A8h+var_28]
    vmovaps xmm6, [rsp+0A8h+var_18]
    vmovaps xmm8, [rsp+0A8h+var_38]
    vmovaps xmm9, [rsp+0A8h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
IWMemHUDDraw::DrawLabel
==============
*/

void __fastcall IWMemHUDDraw::DrawLabel(IWMemHUDDraw *this, double xPos, double yPos, const char *const caption)
{
  __int64 v11; 
  float fmt; 
  float fmta; 
  int horzAlign; 
  float v27; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm2
  }
  if ( !caption && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 150, ASSERT_TYPE_ASSERT, "(caption)", (const char *)&queryFormat, "caption") )
    __debugbreak();
  v11 = -1i64;
  do
    ++v11;
  while ( caption[v11] );
  if ( (int)v11 > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm0, xmm0, dword ptr [rsi+10h]
      vaddss  xmm3, xmm0, cs:__real@41000000; width
      vmovss  xmm0, cs:__real@41400000
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  dword ptr [rsp+88h+fmt], xmm0
    }
    UI_FillRect(this->scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 1, 1, &colorBlack);
    __asm
    {
      vmovss  xmm0, cs:__real@3e4ccccd
      vaddss  xmm1, xmm6, cs:__real@41200000
      vaddss  xmm2, xmm7, cs:__real@40000000
      vmovss  [rsp+88h+var_48], xmm0
      vmovss  [rsp+88h+horzAlign], xmm1
      vmovss  dword ptr [rsp+88h+fmt], xmm2
    }
    UI_DrawText(this->scrPlace, caption, v11, this->font, fmta, *(float *)&horzAlign, 1, 1, v27, &colorWhite, 3);
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
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
  void *v13; 
  LocalClientNum_t v14; 
  unsigned int v18; 
  IWMemAllocator *v22; 
  IWMemAllocatorType m_type; 
  __int64 v24; 
  unsigned __int64 v25; 
  unsigned int i; 
  unsigned __int64 CommitSize; 
  int v28; 
  IWMemAllocator *j; 
  unsigned int AllocatorIndex; 
  const vec4_t *color; 
  const IWMemAllocator *ParentAllocator; 
  unsigned int v38; 
  const char *AllocatorTypeName; 
  char v57; 
  bool v58; 
  bool v60; 
  bool v62; 
  __int64 v63; 
  int IsKeyDown; 
  unsigned int v87; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  __int64 horzAlign; 
  double horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  __int64 vertAlign; 
  float v119; 
  float v120; 
  unsigned int v121; 
  IWMemHUDDraw v124; 
  int v125[386]; 
  char v136; 

  v13 = alloca(v1);
  __asm
  {
    vmovaps [rsp+1470h+var_30], xmm6
    vmovaps [rsp+1470h+var_40], xmm7
    vmovaps [rsp+1470h+var_50], xmm8
    vmovaps [rsp+1470h+var_60], xmm9
    vmovaps [rsp+1470h+var_70], xmm10
    vmovaps [rsp+1470h+var_80], xmm11
    vmovaps [rsp+1470h+var_90], xmm12
    vmovaps [rsp+1470h+var_A0], xmm13
    vmovaps [rsp+1470h+var_B0], xmm14
    vmovaps [rsp+1470h+var_C0], xmm15
  }
  v14 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808000, "IWMem_HUD_DrawHierarchy");
  if ( IWMemHUDDraw::Init(&v124, v14) )
  {
    memset_0(v125, 0, 0x600ui64);
    __asm
    {
      vxorps  xmm14, xmm14, xmm14
      vxorps  xmm12, xmm12, xmm12
    }
    _ER13 = 0;
    v18 = 0;
    v121 = 0;
    if ( v124.allocatorCount )
    {
      __asm
      {
        vmovss  xmm13, cs:__real@41200000
        vmovss  xmm15, cs:__real@40000000
        vmovss  xmm8, cs:__real@41300000
      }
      do
      {
        if ( !v124.allocators[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 351, ASSERT_TYPE_ASSERT, "(draw.allocators[i])", (const char *)&queryFormat, "draw.allocators[i]") )
          __debugbreak();
        v22 = (IWMemAllocator *)v124.allocators[v18];
        m_type = v22->m_type;
        if ( m_type )
        {
          if ( m_type == Count )
          {
            v24 = 0i64;
          }
          else
          {
            v25 = 0i64;
            for ( i = 0; i < v124.allocatorCount; ++i )
            {
              if ( IWMemAllocator::GetParentAllocator((IWMemAllocator *)v124.allocators[i]) == v22 )
                v25 += IWMemAllocator::GetCommitSize((IWMemAllocator *)v124.allocators[i]);
            }
            CommitSize = IWMemAllocator::GetCommitSize(v22);
            if ( v25 > CommitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 229, ASSERT_TYPE_ASSERT, "(childUsage <= thisUsage)", (const char *)&queryFormat, "childUsage <= thisUsage") )
              __debugbreak();
            v24 = CommitSize - v25;
          }
        }
        else
        {
          v24 = 0i64;
        }
        v28 = 0;
        for ( j = (IWMemAllocator *)IWMemAllocator::GetParentAllocator(v22); j; j = (IWMemAllocator *)IWMemAllocator::GetParentAllocator(j) )
          ++v28;
        __asm
        {
          vxorps  xmm10, xmm10, xmm10
          vcvtsi2ss xmm10, xmm10, rdi
        }
        if ( v24 < 0 )
          __asm { vaddss  xmm10, xmm10, cs:__real@5f800000 }
        __asm
        {
          vmulss  xmm9, xmm10, cs:__real@36000000
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vmulss  xmm11, xmm0, xmm13
        }
        AllocatorIndex = IWMem_AllocatorManager_GetAllocatorIndex(v22);
        _RBX = AllocatorIndex;
        if ( AllocatorIndex >= 0x180 )
        {
          LODWORD(vertAlign) = 384;
          LODWORD(horzAlign) = AllocatorIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 362, ASSERT_TYPE_ASSERT, "(unsigned)( fixedIndex ) < (unsigned)( ( sizeof( *array_counter( allocYPos ) ) + 0 ) )", "fixedIndex doesn't index ARRAY_COUNT( allocYPos )\n\t%i not in [0, %i)", horzAlign, vertAlign) )
            __debugbreak();
        }
        __asm { vmovss  [rbp+rbx*4+1370h+var_6D0], xmm12 }
        if ( v18 >= s_iwMemHUDHierarchyOffset )
        {
          color = &BAR_COLORS[_RBX % 9];
          if ( IWMemAllocator::GetParentAllocator(v22) )
          {
            ParentAllocator = IWMemAllocator::GetParentAllocator(v22);
            v38 = IWMem_AllocatorManager_GetAllocatorIndex(ParentAllocator);
            _RBX = v38;
            if ( v38 >= 0x180 )
            {
              LODWORD(vertAlign) = 384;
              LODWORD(horzAlign) = v38;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 375, ASSERT_TYPE_ASSERT, "(unsigned)( parentFixedIndex ) < (unsigned)( ( sizeof( *array_counter( allocYPos ) ) + 0 ) )", "parentFixedIndex doesn't index ARRAY_COUNT( allocYPos )\n\t%i not in [0, %i)", horzAlign, vertAlign) )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm7, [rbp+rbx*4+1370h+var_6D0]
              vsubss  xmm8, xmm11, xmm13
              vminss  xmm1, xmm8, xmm11; x
              vmaxss  xmm0, xmm8, xmm11
              vaddss  xmm6, xmm12, cs:__real@40b00000
              vsubss  xmm3, xmm0, xmm1; width
              vmovss  xmm0, cs:__real@3f800000
              vmovss  dword ptr [rsp+1470h+fmt], xmm0
              vmovaps xmm2, xmm6; y
            }
            UI_FillRect(v124.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 1, 1, &colorWhite);
            __asm
            {
              vaddss  xmm0, xmm7, cs:__real@40b00000
              vminss  xmm2, xmm0, xmm6; y
              vmaxss  xmm0, xmm0, xmm6
              vsubss  xmm1, xmm0, xmm2
              vmovss  dword ptr [rsp+1470h+fmt], xmm1
              vmovss  xmm3, cs:__real@3f800000; width
              vmovaps xmm1, xmm8; x
            }
            UI_FillRect(v124.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 1, 1, &colorWhite);
            __asm { vmovss  xmm8, cs:__real@41300000 }
          }
          AllocatorTypeName = IWMem_GetAllocatorTypeName((const IWMemAllocatorType)v22->m_type);
          __asm
          {
            vmulss  xmm0, xmm10, cs:__real@35800000
            vcvtss2sd xmm1, xmm0, xmm0
            vmovsd  qword ptr [rsp+1470h+horzAlign], xmm1
          }
          Com_sprintf(v124.captionName, 0x100ui64, "%s (%s-%.2fmb)", v22->m_name, AllocatorTypeName, horzAligna);
          __asm
          {
            vmovss  xmm10, cs:__real@3a83126f
            vcomiss xmm9, xmm10
          }
          if ( v57 | v58 )
          {
            __asm
            {
              vmovaps xmm3, xmm14; width
              vmovaps xmm2, xmm12; yPos
              vmovaps xmm1, xmm11; xPos
            }
            *(double *)&_XMM0 = IWMemHUDDraw::DrawBar(&v124, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, &colorBlack, 0);
          }
          else
          {
            __asm
            {
              vmovss  xmm0, cs:__real@44340000
              vsubss  xmm7, xmm0, xmm11
            }
            do
            {
              __asm { vcomiss xmm11, xmm0 }
              if ( !v57 )
              {
                v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 391, ASSERT_TYPE_ASSERT, "(rowLeft > 0.0f)", (const char *)&queryFormat, "rowLeft > 0.0f");
                v57 = 0;
                v58 = !v60;
                if ( v60 )
                  __debugbreak();
              }
              __asm
              {
                vminss  xmm6, xmm7, xmm9
                vcomiss xmm9, xmm7
              }
              v62 = !v57;
              __asm
              {
                vsubss  xmm9, xmm9, xmm6
                vcomiss xmm6, xmm14
              }
              if ( !v57 )
              {
                v63 = -1i64;
                do
                  ++v63;
                while ( v124.captionName[v63] );
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, ebx
                  vmulss  xmm1, xmm0, [rbp+1370h+var_13F0.charWidth]
                  vaddss  xmm3, xmm1, cs:__real@41000000; width
                  vmovss  xmm0, cs:__real@41400000
                  vmovss  dword ptr [rsp+1470h+fmt], xmm0
                  vmovaps xmm2, xmm12; y
                  vmovaps xmm1, xmm11; x
                }
                UI_FillRect(v124.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, 1, 1, &colorBlack);
                __asm
                {
                  vsubss  xmm3, xmm6, xmm15; width
                  vaddss  xmm2, xmm12, cs:__real@3f800000; y
                  vaddss  xmm1, xmm11, cs:__real@3f800000; x
                  vmovss  dword ptr [rsp+1470h+fmt], xmm13
                }
                UI_FillRect(v124.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, 1, 1, color);
                v57 = 0;
                v58 = (_DWORD)v63 == 0;
                if ( (int)v63 > 0 )
                {
                  __asm
                  {
                    vaddss  xmm0, xmm12, xmm13
                    vaddss  xmm1, xmm11, xmm15
                    vmovss  xmm2, cs:__real@3e4ccccd
                    vmovss  [rsp+1470h+var_1430], xmm2
                    vmovss  [rsp+1470h+horzAlign], xmm0
                    vmovss  dword ptr [rsp+1470h+fmt], xmm1
                  }
                  UI_DrawText(v124.scrPlace, v124.captionName, v63, v124.font, fmtd, *(float *)&horzAlignb, 1, 1, v119, &colorWhite, 3);
                }
              }
              _EAX = v62;
              __asm
              {
                vaddss  xmm3, xmm12, xmm8
                vmovd   xmm1, r13d
                vmovd   xmm0, eax
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm3, xmm3, xmm12, xmm2
                vmovaps xmm12, xmm3
                vmovss  [rsp+1470h+var_1408], xmm3
                vcomiss xmm9, xmm10
                vmovss  xmm0, cs:__real@44340000
              }
            }
            while ( !(v57 | v58) );
            v18 = v121;
          }
          __asm { vaddss  xmm12, xmm12, xmm8 }
        }
        v121 = ++v18;
      }
      while ( v18 < v124.allocatorCount );
      v14 = localClientNum;
    }
    IWMem_DumpUnlock();
    if ( CL_Keys_IsKeyDown(v14, 170) && s_iwMemHUDHierarchyOffset )
      --s_iwMemHUDHierarchyOffset;
    IsKeyDown = CL_Keys_IsKeyDown(v14, 176);
    v87 = s_iwMemHUDHierarchyOffset;
    if ( IsKeyDown )
      v87 = s_iwMemHUDHierarchyOffset + 1;
    if ( v87 > v124.allocatorCount - 1 )
      v87 = v124.allocatorCount - 1;
    s_iwMemHUDHierarchyOffset = v87;
    __asm
    {
      vmovss  xmm0, [rbp+1370h+var_13F0.charWidth]
      vmulss  xmm1, xmm0, cs:__real@42200000
      vaddss  xmm3, xmm1, cs:__real@41000000; width
      vmovss  xmm0, cs:__real@41400000
      vmovss  dword ptr [rsp+1470h+fmt], xmm0
      vmovss  xmm2, cs:__real@c1200000; y
      vmovss  xmm1, cs:__real@43fa0000; x
    }
    UI_FillRect(v124.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, 1, 1, &colorBlack);
    __asm
    {
      vmovss  xmm0, cs:__real@3e4ccccd
      vmovss  [rsp+1470h+var_1430], xmm0
      vmovss  [rsp+1470h+horzAlign], xmm14
      vmovss  xmm0, cs:__real@43fb0000
      vmovss  dword ptr [rsp+1470h+fmt], xmm0
    }
    UI_DrawText(v124.scrPlace, "iwmem: Use Numpad arrow keys to navigate", 40, v124.font, fmtf, *(float *)&horzAlignc, 1, 1, v120, &colorWhite, 3);
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v136;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
IWMem_HUD_DrawUsageBars
==============
*/
void IWMem_HUD_DrawUsageBars(const LocalClientNum_t localClientNum)
{
  int v17; 
  IWMemAllocator *v22; 
  IWMemAllocatorType m_type; 
  unsigned __int64 v24; 
  unsigned int i; 
  unsigned __int64 CommitSize; 
  int v29; 
  IWMemAllocator *v30; 
  unsigned __int8 j; 
  unsigned __int64 v32; 
  bool v33; 
  bool v34; 
  const vec4_t *color; 
  bool v38; 
  const char *AllocatorTypeName; 
  __int64 v43; 
  float fmt; 
  float fmta; 
  float fmtb; 
  double horzAlign; 
  int horzAligna; 
  float v79; 
  IWMemHUDDraw v81; 
  char v82; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  Sys_ProfBeginNamedEvent(0xFF808000, "IWMem_HUD_DrawUsageBars");
  if ( IWMemHUDDraw::Init(&v81, localClientNum) )
  {
    __asm
    {
      vxorps  xmm10, xmm10, xmm10
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm9, xmm9, xmm9
    }
    _ER15 = 0;
    v17 = 0;
    if ( v81.allocatorCount )
    {
      __asm
      {
        vmovss  xmm15, cs:__real@3a83126f
        vmovss  xmm12, cs:__real@44340000
        vmovss  xmm13, cs:__real@40000000
        vmovss  xmm14, cs:__real@41200000
      }
      while ( 1 )
      {
        if ( !v81.allocators[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 277, ASSERT_TYPE_ASSERT, "(draw.allocators[i])", (const char *)&queryFormat, "draw.allocators[i]") )
          __debugbreak();
        v22 = (IWMemAllocator *)v81.allocators[v17];
        m_type = v22->m_type;
        if ( m_type == All || m_type == Count )
          goto LABEL_39;
        v24 = 0i64;
        for ( i = 0; i < v81.allocatorCount; ++i )
        {
          if ( IWMemAllocator::GetParentAllocator((IWMemAllocator *)v81.allocators[i]) == v22 )
            v24 += IWMemAllocator::GetCommitSize((IWMemAllocator *)v81.allocators[i]);
        }
        CommitSize = IWMemAllocator::GetCommitSize(v22);
        if ( v24 > CommitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_hud.cpp", 229, ASSERT_TYPE_ASSERT, "(childUsage <= thisUsage)", (const char *)&queryFormat, "childUsage <= thisUsage") )
          __debugbreak();
        if ( CommitSize - v24 <= 0x200000000i64 )
        {
LABEL_39:
          __asm
          {
            vxorps  xmm11, xmm11, xmm11
            vcvtsi2ss xmm11, xmm11, rbx
            vmulss  xmm8, xmm11, cs:__real@36000000
          }
          v29 = 0;
          v30 = v22;
          for ( j = v22->m_name[0]; v30->m_name[0]; j = v30->m_name[0] )
          {
            v30 = (IWMemAllocator *)((char *)v30 + 1);
            v29 = j ^ (16777619 * v29);
          }
          v32 = (v22->m_type ^ (unsigned int)v29) % 9ui64;
          v33 = __CFADD__(BAR_COLORS, v32 * 16);
          v34 = __CFADD__(BAR_COLORS, v32 * 16) || &BAR_COLORS[v32] == NULL;
          color = &BAR_COLORS[v32];
          __asm { vcomiss xmm8, xmm15 }
          if ( !v34 )
            break;
        }
LABEL_34:
        if ( ++v17 >= v81.allocatorCount )
          goto LABEL_35;
      }
      while ( 1 )
      {
        __asm
        {
          vsubss  xmm0, xmm12, xmm7
          vcomiss xmm7, xmm12
        }
        if ( v33 )
        {
          __asm
          {
            vminss  xmm6, xmm0, xmm8
            vcomiss xmm8, xmm0
          }
          v38 = !v33;
          __asm { vsubss  xmm8, xmm8, xmm6 }
          AllocatorTypeName = IWMem_GetAllocatorTypeName((const IWMemAllocatorType)v22->m_type);
          __asm
          {
            vmulss  xmm0, xmm11, cs:__real@35800000
            vcvtss2sd xmm1, xmm0, xmm0
            vmovsd  qword ptr [rsp+0E68h+horzAlign], xmm1
          }
          Com_sprintf(v81.captionName, 0x100ui64, "%s (%s-%.2fmb)", v22->m_name, AllocatorTypeName, horzAlign);
          __asm { vcomiss xmm6, xmm10 }
          if ( v33 )
          {
            __asm { vmovaps xmm6, xmm10 }
          }
          else
          {
            v43 = -1i64;
            do
              ++v43;
            while ( v81.captionName[v43] );
            __asm
            {
              vsubss  xmm0, xmm6, cs:__real@41000000
              vdivss  xmm1, xmm0, [rsp+0E68h+var_DF8.charWidth]
              vcvttss2si eax, xmm1
            }
            if ( _EAX < (int)v43 )
              LODWORD(v43) = _EAX;
            __asm
            {
              vmovss  xmm0, cs:__real@41400000
              vmovss  dword ptr [rsp+0E68h+fmt], xmm0
              vmovaps xmm3, xmm6; width
              vmovaps xmm2, xmm9; y
              vmovaps xmm1, xmm7; x
            }
            UI_FillRect(v81.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 1, 1, &colorBlack);
            __asm
            {
              vsubss  xmm3, xmm6, xmm13; width
              vaddss  xmm2, xmm9, cs:__real@3f800000; y
              vaddss  xmm1, xmm7, cs:__real@3f800000; x
              vmovss  dword ptr [rsp+0E68h+fmt], xmm14
            }
            UI_FillRect(v81.scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 1, 1, color);
            if ( (int)v43 > 0 )
            {
              __asm
              {
                vaddss  xmm0, xmm9, xmm14
                vaddss  xmm1, xmm7, xmm13
                vmovss  xmm2, cs:__real@3e4ccccd
                vmovss  [rsp+0E68h+var_E28], xmm2
                vmovss  [rsp+0E68h+horzAlign], xmm0
                vmovss  dword ptr [rsp+0E68h+fmt], xmm1
              }
              UI_DrawText(v81.scrPlace, v81.captionName, v43, v81.font, fmtb, *(float *)&horzAligna, 1, 1, v79, &colorWhite, 3);
            }
          }
          __asm { vaddss  xmm7, xmm7, xmm6 }
          v33 = 0;
          v34 = !v38;
          if ( !v38 )
            goto LABEL_33;
        }
        else
        {
          v38 = 1;
        }
        __asm { vmovaps xmm7, xmm10 }
LABEL_33:
        _EAX = v38;
        __asm
        {
          vaddss  xmm3, xmm9, cs:__real@41300000
          vmovd   xmm1, r15d
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm3, xmm3, xmm9, xmm2
          vmovaps xmm9, xmm3
          vmovss  [rsp+0E68h+var_E08], xmm3
          vcomiss xmm8, xmm15
        }
        if ( v34 )
          goto LABEL_34;
      }
    }
LABEL_35:
    IWMem_DumpUnlock();
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v82;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
IWMemHUDDraw::Init
==============
*/
char IWMemHUDDraw::Init(IWMemHUDDraw *this, const LocalClientNum_t localClientNum)
{
  bool v5; 
  const ScreenPlacement *v6; 
  GfxFont *FontHandle; 
  char result; 

  _RBX = this;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( activeScreenPlacementMode == SCRMODE_FULL )
  {
LABEL_7:
    v6 = &scrPlaceFull;
    goto LABEL_8;
  }
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v5 )
      __debugbreak();
    goto LABEL_7;
  }
  v6 = &scrPlaceViewDisplay[localClientNum];
LABEL_8:
  __asm { vmovss  xmm2, cs:__real@3f800000; scale }
  _RBX->scrPlace = v6;
  FontHandle = UI_GetFontHandle(v6, 5, *(float *)&_XMM2);
  _RBX->font = FontHandle;
  R_TextWidth("#", 1, FontHandle);
  __asm
  {
    vmovss  xmm1, cs:__real@3e4ccccd; scale
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
  }
  *(double *)&_XMM0 = R_NormalizedTextScale(_RBX->font, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+10h], xmm1
  }
  _RBX->allocatorCount = 0;
  if ( IWMem_HasHadInternalError() )
  {
    __asm
    {
      vxorps  xmm2, xmm2, xmm2; yPos
      vxorps  xmm1, xmm1, xmm1; xPos
    }
    IWMemHUDDraw::DrawLabel(_RBX, *(const float *)&_XMM1, *(const float *)&_XMM2, "IWMem Internal Error");
    result = 0;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
  else
  {
    IWMem_PollingUpdate();
    IWMem_DumpLock();
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
    _RBX->allocatorCount = IWMem_AllocatorManager_GetSortedAllocatorList(_RBX->allocators, 0x180u);
    return 1;
  }
  return result;
}

