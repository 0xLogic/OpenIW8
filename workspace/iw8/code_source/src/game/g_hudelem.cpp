/*
==============
G_HudElem_Load
==============
*/

void __fastcall G_HudElem_Load(MemoryFile *memFile)
{
  ?G_HudElem_Load@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_HudElem_ScrSetHudElemField
==============
*/

void __fastcall G_HudElem_ScrSetHudElemField(scrContext_t *scrContext, int entnum, int offset)
{
  ?G_HudElem_ScrSetHudElemField@@YAXAEAUscrContext_t@@HH@Z(scrContext, entnum, offset);
}

/*
==============
G_HudElem_ScrNewClientHudElem
==============
*/

void __fastcall G_HudElem_ScrNewClientHudElem(scrContext_t *scrContext)
{
  ?G_HudElem_ScrNewClientHudElem@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_HudElem_DumpHudElems
==============
*/

void G_HudElem_DumpHudElems(void)
{
  ?G_HudElem_DumpHudElems@@YAXXZ();
}

/*
==============
G_HudElem_ClientDisconnect
==============
*/

void __fastcall G_HudElem_ClientDisconnect(gentity_s *ent)
{
  ?G_HudElem_ClientDisconnect@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_HudElem_ScrGetHudElemField
==============
*/

void __fastcall G_HudElem_ScrGetHudElemField(scrContext_t *scrContext, int entnum, int offset)
{
  ?G_HudElem_ScrGetHudElemField@@YAXAEAUscrContext_t@@HH@Z(scrContext, entnum, offset);
}

/*
==============
G_HudElem_ScrAddFieldsForHudElems
==============
*/

void __fastcall G_HudElem_ScrAddFieldsForHudElems(scrContext_t *scrContext)
{
  ?G_HudElem_ScrAddFieldsForHudElems@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_HudElem_Save
==============
*/

void __fastcall G_HudElem_Save(MemoryFile *memFile)
{
  ?G_HudElem_Save@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_HudElem_DestroyAll
==============
*/

void G_HudElem_DestroyAll(void)
{
  ?G_HudElem_DestroyAll@@YAXXZ();
}

/*
==============
G_HudElem_ScrNewHudElem
==============
*/

void __fastcall G_HudElem_ScrNewHudElem(scrContext_t *scrContext)
{
  ?G_HudElem_ScrNewHudElem@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_HudElem_ScrCreate
==============
*/

void __fastcall G_HudElem_ScrCreate(scrContext_t *scrContext, int clientNum, int teamNum)
{
  ?G_HudElem_ScrCreate@@YAXAEAUscrContext_t@@HH@Z(scrContext, clientNum, teamNum);
}

/*
==============
G_HudElem_SetColor
==============
*/
void G_HudElem_SetColor(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  vec3_t vectorValue; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm8
  }
  if ( s_hudElemFields[offset].ofs != 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 880, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.color) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.color )") )
    __debugbreak();
  Scr_GetVector(scrContext, 0, &vectorValue);
  __asm
  {
    vmovss  xmm5, cs:__real@437f0000
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rsp+78h+vectorValue]
    vminss  xmm1, xmm0, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vmaxss  xmm0, xmm1, xmm6
    vmulss  xmm1, xmm0, xmm5
    vmovss  xmm0, dword ptr [rsp+78h+vectorValue+4]
    vaddss  xmm2, xmm1, xmm4
    vminss  xmm1, xmm0, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
    vmaxss  xmm1, xmm1, xmm6
    vmulss  xmm0, xmm1, xmm5
    vroundss xmm3, xmm8, xmm2, 1
    vcvttss2si eax, xmm3
    vaddss  xmm3, xmm0, xmm4
    vroundss xmm0, xmm8, xmm3, 1
  }
  hud->elem.color.r = _EAX;
  __asm
  {
    vcvttss2si eax, xmm0
    vmovss  xmm0, dword ptr [rsp+78h+vectorValue+8]
    vminss  xmm1, xmm0, cs:__real@3f800000
    vmaxss  xmm1, xmm1, xmm6
    vmulss  xmm0, xmm1, xmm5
    vaddss  xmm3, xmm0, xmm4
    vroundss xmm0, xmm8, xmm3, 1
  }
  hud->elem.color.g = _EAX;
  __asm { vcvttss2si eax, xmm0 }
  hud->elem.color.b = _EAX;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm8, [rsp+78h+var_28]
  }
}

/*
==============
G_HudElem_GetColor
==============
*/
void G_HudElem_GetColor(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  float value[4]; 

  if ( s_hudElemFields[offset].ofs != 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 893, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.color) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.color )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3b808081
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm0, xmm2
    vmovss  [rsp+58h+value], xmm0
    vmulss  xmm0, xmm1, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  [rsp+58h+var_24], xmm0
    vmulss  xmm0, xmm1, xmm2
    vmovss  [rsp+58h+var_20], xmm0
  }
  Scr_AddVector(scrContext, value);
}

/*
==============
G_HudElem_SetAlpha
==============
*/
void G_HudElem_SetAlpha(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  if ( s_hudElemFields[offset].ofs != 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 933, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.color) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.color )") )
    __debugbreak();
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vminss  xmm2, xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vmaxss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, cs:__real@437f0000
    vaddss  xmm3, xmm0, cs:__real@3f000000
    vmovss  xmm2, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si eax, xmm4
  }
  hud->elem.color.a = _EAX;
}

/*
==============
G_HudElem_GetAlpha
==============
*/
void G_HudElem_GetAlpha(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  if ( s_hudElemFields[offset].ofs != 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 942, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.color) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.color )") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3b808081; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
G_HudElem_SetGlowColor
==============
*/
void G_HudElem_SetGlowColor(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  vec3_t vectorValue; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm8
  }
  if ( s_hudElemFields[offset].ofs != 156 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 952, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.glowColor) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.glowColor )") )
    __debugbreak();
  Scr_GetVector(scrContext, 0, &vectorValue);
  __asm
  {
    vmovss  xmm5, cs:__real@437f0000
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rsp+78h+vectorValue]
    vminss  xmm1, xmm0, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vmaxss  xmm0, xmm1, xmm6
    vmulss  xmm1, xmm0, xmm5
    vmovss  xmm0, dword ptr [rsp+78h+vectorValue+4]
    vaddss  xmm2, xmm1, xmm4
    vminss  xmm1, xmm0, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
    vmaxss  xmm1, xmm1, xmm6
    vmulss  xmm0, xmm1, xmm5
    vroundss xmm3, xmm8, xmm2, 1
    vcvttss2si eax, xmm3
    vaddss  xmm3, xmm0, xmm4
    vroundss xmm0, xmm8, xmm3, 1
  }
  hud->elem.glowColor.r = _EAX;
  __asm
  {
    vcvttss2si eax, xmm0
    vmovss  xmm0, dword ptr [rsp+78h+vectorValue+8]
    vminss  xmm1, xmm0, cs:__real@3f800000
    vmaxss  xmm1, xmm1, xmm6
    vmulss  xmm0, xmm1, xmm5
    vaddss  xmm3, xmm0, xmm4
    vroundss xmm0, xmm8, xmm3, 1
  }
  hud->elem.glowColor.g = _EAX;
  __asm { vcvttss2si eax, xmm0 }
  hud->elem.glowColor.b = _EAX;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm8, [rsp+78h+var_28]
  }
}

/*
==============
G_HudElem_GetGlowColor
==============
*/
void G_HudElem_GetGlowColor(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  float value[4]; 

  if ( s_hudElemFields[offset].ofs != 156 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 965, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.glowColor) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.glowColor )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3b808081
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm0, xmm2
    vmovss  [rsp+58h+value], xmm0
    vmulss  xmm0, xmm1, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  [rsp+58h+var_24], xmm0
    vmulss  xmm0, xmm1, xmm2
    vmovss  [rsp+58h+var_20], xmm0
  }
  Scr_AddVector(scrContext, value);
}

/*
==============
G_HudElem_SetGlowAlpha
==============
*/
void G_HudElem_SetGlowAlpha(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  if ( s_hudElemFields[offset].ofs != 156 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 978, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.glowColor) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.glowColor )") )
    __debugbreak();
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vminss  xmm2, xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vmaxss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, cs:__real@437f0000
    vaddss  xmm3, xmm0, cs:__real@3f000000
    vmovss  xmm2, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si eax, xmm4
  }
  hud->elem.glowColor.a = _EAX;
}

/*
==============
G_HudElem_GetGlowAlpha
==============
*/
void G_HudElem_GetGlowAlpha(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  if ( s_hudElemFields[offset].ofs != 156 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 987, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.glowColor) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.glowColor )") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3b808081; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
G_HudElem_SetFontScale
==============
*/
void G_HudElem_SetFontScale(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  char v10; 
  char v11; 
  const char *v14; 

  _RDI = hud;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( s_hudElemFields[offset].ofs != 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 997, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.fontScale) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.fontScale )") )
    __debugbreak();
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( v10 | v11 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm0
      vmovq   rdx, xmm1
    }
    v14 = j_va("font scale was %g; should be > 0", _RDX);
    Scr_Error(COM_ERR_3549, scrContext, v14);
  }
  __asm { vmovaps xmm0, xmm6; fontScale }
  if ( !SV_Game_CheckFontScaleRange(*(const float *)&_XMM0) )
    Scr_ParamError(COM_ERR_3550, scrContext, 0, "Font scale is not within the appropriate range");
  __asm
  {
    vmovss  dword ptr [rdi+24h], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
G_HudElem_SetFont
==============
*/
void G_HudElem_SetFont(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_SetEnumString(scrContext, hud, &s_hudElemFields[offset], g_he_font, 8);
}

/*
==============
G_HudElem_GetFont
==============
*/
void G_HudElem_GetFont(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  const game_hudelem_field_t *v4; 
  unsigned int v6; 
  __int64 v7; 

  v4 = &s_hudElemFields[offset];
  if ( !hud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 728, ASSERT_TYPE_ASSERT, "(hud)", (const char *)&queryFormat, "hud") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 729, ASSERT_TYPE_ASSERT, "(f)", (const char *)&queryFormat, "f") )
    __debugbreak();
  v6 = v4->mask & (*(int *)((char *)&hud->elem.type + v4->ofs) >> v4->shift);
  if ( v6 > 7 )
  {
    LODWORD(v7) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 735, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < nameCount ) )", "( index ) = %i", v7) )
      __debugbreak();
  }
  Scr_AddString(scrContext, g_he_font[v6]);
}

/*
==============
G_HudElem_SetAlignX
==============
*/
void G_HudElem_SetAlignX(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_SetEnumString(scrContext, hud, &s_hudElemFields[offset], g_he_alignx, 3);
}

/*
==============
G_HudElem_GetAlignX
==============
*/
void G_HudElem_GetAlignX(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  const game_hudelem_field_t *v4; 
  unsigned int v6; 
  __int64 v7; 

  v4 = &s_hudElemFields[offset];
  if ( !hud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 728, ASSERT_TYPE_ASSERT, "(hud)", (const char *)&queryFormat, "hud") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 729, ASSERT_TYPE_ASSERT, "(f)", (const char *)&queryFormat, "f") )
    __debugbreak();
  v6 = v4->mask & (*(int *)((char *)&hud->elem.type + v4->ofs) >> v4->shift);
  if ( v6 > 2 )
  {
    LODWORD(v7) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 735, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < nameCount ) )", "( index ) = %i", v7) )
      __debugbreak();
  }
  Scr_AddString(scrContext, g_he_alignx[v6]);
}

/*
==============
G_HudElem_SetAlignY
==============
*/
void G_HudElem_SetAlignY(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_SetEnumString(scrContext, hud, &s_hudElemFields[offset], g_he_aligny, 3);
}

/*
==============
G_HudElem_GetAlignY
==============
*/
void G_HudElem_GetAlignY(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  const game_hudelem_field_t *v4; 
  unsigned int v6; 
  __int64 v7; 

  v4 = &s_hudElemFields[offset];
  if ( !hud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 728, ASSERT_TYPE_ASSERT, "(hud)", (const char *)&queryFormat, "hud") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 729, ASSERT_TYPE_ASSERT, "(f)", (const char *)&queryFormat, "f") )
    __debugbreak();
  v6 = v4->mask & (*(int *)((char *)&hud->elem.type + v4->ofs) >> v4->shift);
  if ( v6 > 2 )
  {
    LODWORD(v7) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 735, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < nameCount ) )", "( index ) = %i", v7) )
      __debugbreak();
  }
  Scr_AddString(scrContext, g_he_aligny[v6]);
}

/*
==============
G_HudElem_SetHorzAlign
==============
*/
void G_HudElem_SetHorzAlign(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_SetEnumString(scrContext, hud, &s_hudElemFields[offset], g_he_horzalign, 12);
}

/*
==============
G_HudElem_GetHorzAlign
==============
*/
void G_HudElem_GetHorzAlign(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  const game_hudelem_field_t *v4; 
  unsigned int v6; 
  __int64 v7; 

  v4 = &s_hudElemFields[offset];
  if ( !hud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 728, ASSERT_TYPE_ASSERT, "(hud)", (const char *)&queryFormat, "hud") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 729, ASSERT_TYPE_ASSERT, "(f)", (const char *)&queryFormat, "f") )
    __debugbreak();
  v6 = v4->mask & (*(int *)((char *)&hud->elem.type + v4->ofs) >> v4->shift);
  if ( v6 > 0xB )
  {
    LODWORD(v7) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 735, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < nameCount ) )", "( index ) = %i", v7) )
      __debugbreak();
  }
  Scr_AddString(scrContext, g_he_horzalign[v6]);
}

/*
==============
G_HudElem_SetVertAlign
==============
*/
void G_HudElem_SetVertAlign(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_SetEnumString(scrContext, hud, &s_hudElemFields[offset], g_he_vertalign, 12);
}

/*
==============
G_HudElem_GetVertAlign
==============
*/
void G_HudElem_GetVertAlign(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  const game_hudelem_field_t *v4; 
  unsigned int v6; 
  __int64 v7; 

  v4 = &s_hudElemFields[offset];
  if ( !hud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 728, ASSERT_TYPE_ASSERT, "(hud)", (const char *)&queryFormat, "hud") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 729, ASSERT_TYPE_ASSERT, "(f)", (const char *)&queryFormat, "f") )
    __debugbreak();
  v6 = v4->mask & (*(int *)((char *)&hud->elem.type + v4->ofs) >> v4->shift);
  if ( v6 > 0xB )
  {
    LODWORD(v7) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 735, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < nameCount ) )", "( index ) = %i", v7) )
      __debugbreak();
  }
  Scr_AddString(scrContext, g_he_vertalign[v6]);
}

/*
==============
G_HudElem_SetLocalizedString
==============
*/
void G_HudElem_SetLocalizedString(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  __int64 v3; 
  char v6[1024]; 

  v3 = offset;
  if ( !GScript::ms_gScriptSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 183, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem )", (const char *)&queryFormat, "ms_gScriptSystem") )
    __debugbreak();
  GScript::ms_gScriptSystem->ConstructMessageString(GScript::ms_gScriptSystem, scrContext, 0, 0, "Hud Elem String", v6, 1024u);
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  GConfigStrings::ms_gConfigStrings->SetLocalizedString(GConfigStrings::ms_gConfigStrings, v6, (unsigned int *)((char *)hud + s_hudElemFields[v3].ofs));
}

/*
==============
G_HudElem_GetLocalizedString
==============
*/
void G_HudElem_GetLocalizedString(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  Scr_Error(COM_ERR_3548, scrContext, "cannot read label");
}

/*
==============
G_HudElem_SetFlagLowresBackground
==============
*/
void G_HudElem_SetFlagLowresBackground(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  unsigned int *v3; 
  int Int; 
  unsigned int v5; 

  v3 = (unsigned int *)((char *)hud + s_hudElemFields[offset].ofs);
  Int = Scr_GetInt(scrContext, 0);
  v5 = *v3 & 0xFFFFFEFF;
  if ( Int )
    v5 = *v3 | 0x100;
  *v3 = v5;
}

/*
==============
G_HudElem_GetFlagLowresBackground
==============
*/
void G_HudElem_GetFlagLowresBackground(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_GetFlag(scrContext, hud, offset, 256);
}

/*
==============
G_HudElem_SetFlagForeground
==============
*/
void G_HudElem_SetFlagForeground(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  unsigned int *v3; 
  int Int; 
  unsigned int v5; 

  v3 = (unsigned int *)((char *)hud + s_hudElemFields[offset].ofs);
  Int = Scr_GetInt(scrContext, 0);
  v5 = *v3 & 0xFFFFFFFE;
  if ( Int )
    v5 = *v3 | 1;
  *v3 = v5;
}

/*
==============
G_HudElem_GetFlagForeground
==============
*/
void G_HudElem_GetFlagForeground(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_GetFlag(scrContext, hud, offset, 1);
}

/*
==============
G_HudElem_SetFlagHideWhenDead
==============
*/
void G_HudElem_SetFlagHideWhenDead(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  unsigned int *v3; 
  int Int; 
  unsigned int v5; 

  v3 = (unsigned int *)((char *)hud + s_hudElemFields[offset].ofs);
  Int = Scr_GetInt(scrContext, 0);
  v5 = *v3 & 0xFFFFFFFD;
  if ( Int )
    v5 = *v3 | 2;
  *v3 = v5;
}

/*
==============
G_HudElem_GetFlagHideWhenDead
==============
*/
void G_HudElem_GetFlagHideWhenDead(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_GetFlag(scrContext, hud, offset, 2);
}

/*
==============
G_HudElem_SetFlagHideWhenInMenu
==============
*/
void G_HudElem_SetFlagHideWhenInMenu(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  unsigned int *v3; 
  int Int; 
  unsigned int v5; 

  v3 = (unsigned int *)((char *)hud + s_hudElemFields[offset].ofs);
  Int = Scr_GetInt(scrContext, 0);
  v5 = *v3 & 0xFFFFFFFB;
  if ( Int )
    v5 = *v3 | 4;
  *v3 = v5;
}

/*
==============
G_HudElem_GetFlagHideWhenInMenu
==============
*/
void G_HudElem_GetFlagHideWhenInMenu(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_GetFlag(scrContext, hud, offset, 4);
}

/*
==============
G_HudElem_SetRotation
==============
*/
void G_HudElem_SetRotation(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  __int64 v5; 

  v5 = offset;
  _RDI = hud;
  if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_FIRE|0x80) )
  {
    if ( s_hudElemFields[v5].ofs != 20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 910, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.rotation) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.rotation )") )
      __debugbreak();
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm { vmovss  dword ptr [rdi+14h], xmm0 }
  }
}

/*
==============
G_HudElem_GetRotation
==============
*/
void G_HudElem_GetRotation(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  __int64 v4; 

  v4 = offset;
  _RSI = hud;
  if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_FIRE|0x80) )
  {
    if ( s_hudElemFields[v4].ofs != 20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 923, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.rotation) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.rotation )") )
      __debugbreak();
    __asm { vmovss  xmm1, dword ptr [rsi+14h]; value }
    Scr_AddFloat(scrContext, *(float *)&_XMM1);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
G_HudElem_SetFlagHideIn3rdPerson
==============
*/
void G_HudElem_SetFlagHideIn3rdPerson(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  unsigned int *v3; 
  int Int; 
  unsigned int v5; 

  v3 = (unsigned int *)((char *)hud + s_hudElemFields[offset].ofs);
  Int = Scr_GetInt(scrContext, 0);
  v5 = *v3 & 0xFFFFF7FF;
  if ( Int )
    v5 = *v3 | 0x800;
  *v3 = v5;
}

/*
==============
G_HudElem_GetFlagHideIn3rdPerson
==============
*/
void G_HudElem_GetFlagHideIn3rdPerson(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_GetFlag(scrContext, hud, offset, 2048);
}

/*
==============
G_HudElem_SetFlagEnableHudLighting
==============
*/
void G_HudElem_SetFlagEnableHudLighting(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  unsigned int *v3; 
  int Int; 
  unsigned int v5; 

  v3 = (unsigned int *)((char *)hud + s_hudElemFields[offset].ofs);
  Int = Scr_GetInt(scrContext, 0);
  v5 = *v3 & 0xFFFFBFFF;
  if ( Int )
    v5 = *v3 | 0x4000;
  *v3 = v5;
}

/*
==============
G_HudElem_GetFlagEnableHudLighting
==============
*/
void G_HudElem_GetFlagEnableHudLighting(scrContext_t *scrContext, game_hudelem_t *hud, int offset)
{
  G_HudElem_GetFlag(scrContext, hud, offset, 0x4000);
}

/*
==============
HECmd_SetText
==============
*/
void HECmd_SetText(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  char v4[1024]; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  G_HudElem_ClearTypeSettings(HudElem);
  if ( !GScript::ms_gScriptSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 183, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem )", (const char *)&queryFormat, "ms_gScriptSystem") )
    __debugbreak();
  GScript::ms_gScriptSystem->ConstructMessageString(GScript::ms_gScriptSystem, scrContext, 0, 0, "Hud Elem String", v4, 1024u);
  HudElem->elem.type = HE_TYPE_TEXT;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  GConfigStrings::ms_gConfigStrings->SetLocalizedString(GConfigStrings::ms_gConfigStrings, v4, (unsigned int *)&HudElem->elem.148);
  HudElem->elem.flags |= 1u;
}

/*
==============
HECmd_SetDevText
==============
*/
void HECmd_SetDevText(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  GConfigStrings *v4; 
  char v5[1024]; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  G_HudElem_ClearTypeSettings(HudElem);
  HudElem->elem.type = HE_TYPE_TEXT_DEV;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v4 = GConfigStrings::ms_gConfigStrings;
  if ( !GScript::ms_gScriptSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 183, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem )", (const char *)&queryFormat, "ms_gScriptSystem") )
    __debugbreak();
  GScript::ms_gScriptSystem->ConstructMessageString(GScript::ms_gScriptSystem, scrContext, 0, 0, "Hud Elem Dev String", v5, 1024u);
  v4->SetDevString(v4, v5, &HudElem->elem.text);
  HudElem->elem.flags |= 1u;
}

/*
==============
HECmd_ClearAllTextAfterHudElem
==============
*/
void HECmd_ClearAllTextAfterHudElem(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( HudElem->elem.type != HE_TYPE_TEXT_DEV )
    Scr_Error(COM_ERR_3553, scrContext, "This must be called on a DEV string hud elem");
  if ( !HudElem->elem.text )
    Scr_Error(COM_ERR_3554, scrContext, "Hud elem doesn't reference any text.  Make sure to call setDevText before using clearAllTextAfterHudElem.");
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  GConfigStrings::ms_gConfigStrings->ClearDevStringAfterIndex(GConfigStrings::ms_gConfigStrings, HudElem->elem.text);
}

/*
==============
HECmd_SetMaterial
==============
*/
void HECmd_SetMaterial(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  unsigned int NumParam; 
  int v5; 
  const char *String; 
  unsigned int v7; 
  int v8; 
  int Int; 
  const char *v10; 
  int v11; 
  const char *v12; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  NumParam = Scr_GetNumParam(scrContext);
  if ( ((NumParam - 1) & 0xFFFFFFFD) != 0 )
    Scr_Error(COM_ERR_3555, scrContext, "USAGE: <hudelem> setShader(\"materialname\"[, optional_width, optional_height]);");
  v5 = 0;
  String = Scr_GetString(scrContext, 0);
  if ( *String )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v7 = GConfigStrings::ms_gConfigStrings->GetMaterialIndex(GConfigStrings::ms_gConfigStrings, String);
  }
  else
  {
    Scr_ParamError(COM_ERR_3556, scrContext, 0, "Trying to set the material to an empty string");
    v7 = 0;
  }
  if ( NumParam == 1 )
  {
    v8 = 0;
  }
  else
  {
    Int = Scr_GetInt(scrContext, 1u);
    v5 = Int;
    if ( Int < 0 )
    {
      v10 = j_va("width %i < 0", (unsigned int)Int);
      Scr_ParamError(COM_ERR_3557, scrContext, 1u, v10);
    }
    v11 = Scr_GetInt(scrContext, 2u);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = j_va("height %i < 0", (unsigned int)v11);
      Scr_ParamError(COM_ERR_3558, scrContext, 2u, v12);
    }
  }
  G_HudElem_ClearTypeSettings(HudElem);
  HudElem->elem.height = v8;
  HudElem->elem.type = HE_TYPE_MATERIAL;
  HudElem->elem.materialIndex = v7;
  HudElem->elem.width = v5;
}

/*
==============
HECmd_SetTargetEnt
==============
*/
void HECmd_SetTargetEnt(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  gentity_s *Entity; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  Entity = GScr_GetEntity(0);
  HudElem->elem.targetEntNum = Entity->s.number;
  Entity->r.svFlags &= ~1u;
}

/*
==============
HECmd_LinkWaypointToTargetWithOffset
==============
*/
void HECmd_LinkWaypointToTargetWithOffset(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  int number; 
  vec3_t vectorValue; 

  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    _RSI = HECmd_GetHudElem(scrContext, entref);
    if ( _RSI->elem.type == HE_TYPE_WAYPOINT )
    {
      Entity = GScr_GetEntity(0);
      Scr_GetVector(scrContext, 1u, &vectorValue);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+48h+vectorValue]
        vmovss  dword ptr [rsi+4], xmm0
        vmovss  xmm1, dword ptr [rsp+48h+vectorValue+4]
        vmovss  dword ptr [rsi+8], xmm1
        vmovss  xmm0, dword ptr [rsp+48h+vectorValue+8]
        vmovss  dword ptr [rsi+0Ch], xmm0
      }
      number = Entity->s.number;
      _RSI->elem.flags |= 0x2000u;
      _RSI->elem.targetEntNum = number;
      Entity->r.svFlags &= ~1u;
    }
    else
    {
      Scr_Error(COM_ERR_3560, scrContext, "LinkWaypointToTargetWithOffset can only be used on hud elements of type WAYPOINT.\n");
    }
  }
  else
  {
    Scr_Error(COM_ERR_3559, scrContext, "LinkWaypointToTargetWithOffset requires 2 parameters.\n");
  }
}

/*
==============
HECmd_ClearTargetEnt
==============
*/
void HECmd_ClearTargetEnt(scrContext_t *scrContext, scr_entref_t entref)
{
  HECmd_GetHudElem(scrContext, entref)->elem.targetEntNum = 2047;
}

/*
==============
HECmd_SetTimer
==============
*/
void HECmd_SetTimer(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  const char *v6; 
  const char *v18; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( Scr_GetNumParam(scrContext) != 1 )
  {
    v6 = j_va("USAGE: <hudelem> %s(time_in_seconds);\n", "setTimer");
    Scr_Error(COM_ERR_3561, scrContext, v6);
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 2
    vcvttss2si esi, xmm4
  }
  if ( _ESI <= 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v18 = j_va("time %g should be > 0", _RDX);
    Scr_ParamError(COM_ERR_3562, scrContext, 0, v18);
  }
  G_HudElem_ClearTypeSettings(HudElem);
  HudElem->elem.type = HE_TYPE_TIMER_DOWN;
  HudElem->elem.time = _ESI + level.time;
}

/*
==============
HECmd_SetTimerUp
==============
*/
void HECmd_SetTimerUp(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  const char *v7; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( Scr_GetNumParam(scrContext) != 1 )
  {
    v7 = j_va("USAGE: <hudelem> %s(time_in_seconds);\n", "setTimerUp");
    Scr_Error(COM_ERR_3561, scrContext, v7);
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm6, xmm0, xmm3, 2
  }
  G_HudElem_ClearTypeSettings(HudElem);
  __asm
  {
    vcvttss2si eax, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  HudElem->elem.type = HE_TYPE_TIMER_UP;
  HudElem->elem.time = level.time - _EAX;
}

/*
==============
HECmd_SetTimerStatic
==============
*/
void HECmd_SetTimerStatic(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  const char *v6; 
  const char *v18; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( Scr_GetNumParam(scrContext) != 1 )
  {
    v6 = j_va("USAGE: <hudelem> %s(time_in_seconds);\n", "setTimerStatic");
    Scr_Error(COM_ERR_3561, scrContext, v6);
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 2
    vcvttss2si esi, xmm4
  }
  if ( _ESI <= 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v18 = j_va("time %g should be > 0", _RDX);
    Scr_ParamError(COM_ERR_3562, scrContext, 0, v18);
  }
  G_HudElem_ClearTypeSettings(HudElem);
  HudElem->elem.time = _ESI;
  HudElem->elem.type = HE_TYPE_TIMER_STATIC;
}

/*
==============
HECmd_SetTenthsTimer
==============
*/
void HECmd_SetTenthsTimer(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  const char *v6; 
  const char *v18; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( Scr_GetNumParam(scrContext) != 1 )
  {
    v6 = j_va("USAGE: <hudelem> %s(time_in_seconds);\n", "setTenthsTimer");
    Scr_Error(COM_ERR_3561, scrContext, v6);
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 2
    vcvttss2si esi, xmm4
  }
  if ( _ESI <= 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v18 = j_va("time %g should be > 0", _RDX);
    Scr_ParamError(COM_ERR_3562, scrContext, 0, v18);
  }
  G_HudElem_ClearTypeSettings(HudElem);
  HudElem->elem.type = HE_TYPE_TENTHS_TIMER_DOWN;
  HudElem->elem.time = _ESI + level.time;
}

/*
==============
HECmd_SetTenthsTimerUp
==============
*/
void HECmd_SetTenthsTimerUp(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  const char *v7; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( Scr_GetNumParam(scrContext) != 1 )
  {
    v7 = j_va("USAGE: <hudelem> %s(time_in_seconds);\n", "setTenthsTimerUp");
    Scr_Error(COM_ERR_3561, scrContext, v7);
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm6, xmm0, xmm3, 2
  }
  G_HudElem_ClearTypeSettings(HudElem);
  __asm
  {
    vcvttss2si eax, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  HudElem->elem.type = HE_TYPE_TENTHS_TIMER_UP;
  HudElem->elem.time = level.time - _EAX;
}

/*
==============
HECmd_SetTenthsTimerStatic
==============
*/
void HECmd_SetTenthsTimerStatic(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  const char *v6; 
  const char *v18; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( Scr_GetNumParam(scrContext) != 1 )
  {
    v6 = j_va("USAGE: <hudelem> %s(time_in_seconds);\n", "setTimerStatic");
    Scr_Error(COM_ERR_3561, scrContext, v6);
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 2
    vcvttss2si esi, xmm4
  }
  if ( _ESI <= 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v18 = j_va("time %g should be > 0", _RDX);
    Scr_ParamError(COM_ERR_3562, scrContext, 0, v18);
  }
  G_HudElem_ClearTypeSettings(HudElem);
  HudElem->elem.time = _ESI;
  HudElem->elem.type = HE_TYPE_TENTHS_TIMER_STATIC;
}

/*
==============
HECmd_SetClock
==============
*/
void HECmd_SetClock(scrContext_t *scrContext, scr_entref_t entref)
{
  HECmd_SetClock_Internal(scrContext, entref, HE_TYPE_CLOCK_DOWN, "setClock");
}

/*
==============
HECmd_SetClockUp
==============
*/
void HECmd_SetClockUp(scrContext_t *scrContext, scr_entref_t entref)
{
  HECmd_SetClock_Internal(scrContext, entref, HE_TYPE_CLOCK_UP, "setClockUp");
}

/*
==============
HECmd_SetValue
==============
*/
void HECmd_SetValue(scrContext_t *scrContext, scr_entref_t entref)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RDI = HECmd_GetHudElem(scrContext, entref);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmovaps xmm6, xmm0 }
  G_HudElem_ClearTypeSettings(_RDI);
  __asm
  {
    vmovss  dword ptr [rdi+90h], xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  _RDI->elem.type = HE_TYPE_VALUE;
}

/*
==============
HECmd_SetWaypointBackground
==============
*/
void HECmd_SetWaypointBackground(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  int v4; 
  int v5; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( HudElem->elem.type != HE_TYPE_WAYPOINT )
    Scr_Error(COM_ERR_3568, scrContext, "SetWaypointBackground: Hudelem needs to be of 'waypoint' type.\n");
  if ( (int)Scr_GetNumParam(scrContext) > 0 )
  {
    v4 = Scr_GetInt(scrContext, 0) - 1;
    if ( !v4 )
    {
      HudElem->elem.text = 1;
      return;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      HudElem->elem.text = 2;
      return;
    }
    if ( v5 == 1 )
    {
      HudElem->elem.text = 3;
      return;
    }
  }
  HudElem->elem.text = 0;
}

/*
==============
HECmd_SetMLGDraw
==============
*/
void HECmd_SetMLGDraw(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  int NumParam; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam > 0 && Scr_GetInt(scrContext, 0) )
    HudElem->elem.flags |= 0x8000u;
  else
    HudElem->elem.flags &= ~0x8000u;
  if ( NumParam > 1 && Scr_GetInt(scrContext, 1u) )
    HudElem->elem.flags |= 0x10000u;
  else
    HudElem->elem.flags &= ~0x10000u;
}

/*
==============
HECmd_SetWaypoint
==============
*/
void HECmd_SetWaypoint(scrContext_t *scrContext, scr_entref_t entref)
{
  int NumParam; 
  int Int; 
  unsigned int flags; 
  int v8; 
  unsigned int v9; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 

  _RBX = HECmd_GetHudElem(scrContext, entref);
  NumParam = Scr_GetNumParam(scrContext);
  Int = Scr_GetInt(scrContext, 0);
  flags = _RBX->elem.flags;
  v8 = flags | 0x200;
  _RBX->elem.type = HE_TYPE_WAYPOINT;
  v9 = flags & 0xFFFFFDFF;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( Int > 0 )
    v9 = v8;
  _RBX->elem.flags = v9;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rbx+90h], xmm0
  }
  if ( NumParam > 2 )
  {
    v12 = Scr_GetInt(scrContext, 2u);
    v13 = _RBX->elem.flags;
    if ( v12 )
      v14 = v13 | 0x10;
    else
      v14 = v13 & 0xFFFFFFEF;
    _RBX->elem.flags = v14;
  }
  if ( NumParam > 1 )
  {
    v15 = Scr_GetInt(scrContext, 1u);
    v16 = _RBX->elem.flags;
    if ( v15 )
      v17 = v16 | 8;
    else
      v17 = v16 & 0xFFFFFFF7;
    _RBX->elem.flags = v17;
  }
  if ( NumParam > 3 )
  {
    v18 = Scr_GetInt(scrContext, 3u);
    v19 = _RBX->elem.flags;
    if ( v18 )
      v20 = v19 | 0x400;
    else
      v20 = v19 & 0xFFFFFBFF;
    _RBX->elem.flags = v20;
  }
}

/*
==============
HECmd_SetWaypointEdgeStyle_RotatingIcon
==============
*/
void HECmd_SetWaypointEdgeStyle_RotatingIcon(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  game_hudelem_t *v4; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  v4 = HudElem;
  if ( HudElem->elem.type == HE_TYPE_WAYPOINT )
  {
    HudElem->elem.flags |= 0x20u;
  }
  else
  {
    Scr_Error(COM_ERR_3569, scrContext, "Hudelem needs to be of 'waypoint' type.\n");
    v4->elem.flags |= 0x20u;
  }
}

/*
==============
HECmd_SetWaypointEdgeStyle_SecondaryArrow
==============
*/
void HECmd_SetWaypointEdgeStyle_SecondaryArrow(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  game_hudelem_t *v4; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  v4 = HudElem;
  if ( HudElem->elem.type == HE_TYPE_WAYPOINT )
  {
    HudElem->elem.flags &= ~0x20u;
  }
  else
  {
    Scr_Error(COM_ERR_3570, scrContext, "Hudelem needs to be of 'waypoint' type.\n");
    v4->elem.flags &= ~0x20u;
  }
}

/*
==============
HECmd_SetWaypointIconOffscreenOnly
==============
*/
void HECmd_SetWaypointIconOffscreenOnly(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  game_hudelem_t *v4; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  v4 = HudElem;
  if ( HudElem->elem.type == HE_TYPE_WAYPOINT )
  {
    HudElem->elem.flags |= 0x40u;
  }
  else
  {
    Scr_Error(COM_ERR_3571, scrContext, "Hudelem needs to be of 'waypoint' type.\n");
    v4->elem.flags |= 0x40u;
  }
}

/*
==============
HECmd_FadeOverTime
==============
*/
void HECmd_FadeOverTime(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  char v7; 
  char v8; 
  const char *v12; 
  ComErrorCode v13; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  HudElem = HECmd_GetHudElem(scrContext, entref);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( v7 | v8 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm0
      vmovq   rdx, xmm1
    }
    v12 = j_va("fade time %g <= 0", _RDX);
    v13 = COM_ERR_3572;
LABEL_5:
    Scr_ParamError(v13, scrContext, 0, v12);
    goto LABEL_6;
  }
  __asm { vcomiss xmm6, cs:__real@42700000 }
  if ( !(v7 | v8) )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v12 = j_va("fade time %g > 60", _RDX);
    v13 = COM_ERR_3573;
    goto LABEL_5;
  }
LABEL_6:
  BG_LerpHudColors(&HudElem->elem, level.time, &HudElem->elem.fromColor);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vmovaps xmm6, [rsp+38h+var_18]
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
  }
  HudElem->elem.fadeStartTime = level.time;
  __asm { vcvttss2si eax, xmm4 }
  HudElem->elem.fadeTime = _EAX;
}

/*
==============
HECmd_ChangeFontScaleOverTime
==============
*/
void HECmd_ChangeFontScaleOverTime(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  char v7; 
  char v8; 
  const char *v12; 
  ComErrorCode v13; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  HudElem = HECmd_GetHudElem(scrContext, entref);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( v7 | v8 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm0
      vmovq   rdx, xmm1
    }
    v12 = j_va("scale time %g <= 0", _RDX);
    v13 = COM_ERR_3574;
LABEL_5:
    Scr_ParamError(v13, scrContext, 0, v12);
    goto LABEL_6;
  }
  __asm { vcomiss xmm6, cs:__real@42700000 }
  if ( !(v7 | v8) )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v12 = j_va("scale time %g > 60", _RDX);
    v13 = COM_ERR_3575;
    goto LABEL_5;
  }
LABEL_6:
  BG_LerpFontScale(&HudElem->elem, level.time, &HudElem->elem.fromFontScale);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vmovaps xmm6, [rsp+38h+var_18]
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
  }
  HudElem->elem.fontScaleStartTime = level.time;
  __asm { vcvttss2si eax, xmm4 }
  HudElem->elem.fontScaleTime = _EAX;
}

/*
==============
HECmd_ScaleOverTime
==============
*/
void HECmd_ScaleOverTime(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  char v7; 
  char v8; 
  const char *v12; 
  ComErrorCode v13; 
  int Int; 
  int v16; 
  int height; 
  int width; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_3576, scrContext, "hudelem scaleOverTime(time_in_seconds, new_width, new_height)");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( v7 | v8 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm0
      vmovq   rdx, xmm1
    }
    v12 = j_va("scale time %g <= 0", _RDX);
    v13 = COM_ERR_3577;
LABEL_7:
    Scr_ParamError(v13, scrContext, 0, v12);
    goto LABEL_8;
  }
  __asm { vcomiss xmm6, cs:__real@42700000 }
  if ( !(v7 | v8) )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v12 = j_va("scale time %g > 60", _RDX);
    v13 = COM_ERR_3578;
    goto LABEL_7;
  }
LABEL_8:
  Int = Scr_GetInt(scrContext, 1u);
  v16 = Scr_GetInt(scrContext, 2u);
  __asm { vmulss  xmm0, xmm6, cs:__real@447a0000 }
  height = HudElem->elem.height;
  __asm
  {
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vmovaps xmm6, [rsp+38h+var_18]
  }
  HudElem->elem.scaleStartTime = level.time;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si ecx, xmm4
  }
  HudElem->elem.scaleTime = _ECX;
  width = HudElem->elem.width;
  HudElem->elem.width = Int;
  HudElem->elem.fromWidth = width;
  HudElem->elem.fromHeight = height;
  HudElem->elem.height = v16;
}

/*
==============
HECmd_MoveOverTime
==============
*/
void HECmd_MoveOverTime(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  char v7; 
  char v8; 
  const char *v12; 
  ComErrorCode v13; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  HudElem = HECmd_GetHudElem(scrContext, entref);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( v7 | v8 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm0
      vmovq   rdx, xmm1
    }
    v12 = j_va("move time %g <= 0", _RDX);
    v13 = COM_ERR_3579;
LABEL_5:
    Scr_ParamError(v13, scrContext, 0, v12);
    goto LABEL_6;
  }
  __asm { vcomiss xmm6, cs:__real@42700000 }
  if ( !(v7 | v8) )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v12 = j_va("move time %g > 60", _RDX);
    v13 = COM_ERR_3580;
    goto LABEL_5;
  }
LABEL_6:
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vmovaps xmm6, [rsp+38h+var_18]
  }
  HudElem->elem.moveStartTime = level.time;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si eax, xmm4
  }
  HudElem->elem.moveTime = _EAX;
  HudElem->elem.fromX = HudElem->elem.x;
  HudElem->elem.fromY = HudElem->elem.y;
  HudElem->elem.fromAlignOrg = HudElem->elem.alignOrg;
  HudElem->elem.fromAlignScreen = HudElem->elem.alignScreen;
}

/*
==============
HECmd_RotateOverTime
==============
*/
void HECmd_RotateOverTime(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  char v8; 
  char v9; 
  const char *v13; 
  ComErrorCode v14; 

  if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_FIRE|0x80) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    HudElem = HECmd_GetHudElem(scrContext, entref);
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovaps xmm6, xmm0
    }
    if ( v8 | v9 )
    {
      __asm
      {
        vcvtss2sd xmm1, xmm6, xmm0
        vmovq   rdx, xmm1
      }
      v13 = j_va("rotate time %g <= 0", _RDX);
      v14 = COM_ERR_3581;
    }
    else
    {
      __asm { vcomiss xmm6, cs:__real@42700000 }
      if ( v8 | v9 )
      {
LABEL_7:
        __asm
        {
          vmulss  xmm0, xmm6, cs:__real@447a0000
          vaddss  xmm2, xmm0, cs:__real@3f000000
          vmovaps xmm6, [rsp+38h+var_18]
        }
        HudElem->elem.rotationStartTime = level.time;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vmovss  xmm3, xmm1, xmm2
          vxorps  xmm0, xmm0, xmm0
          vroundss xmm4, xmm0, xmm3, 1
          vcvttss2si eax, xmm4
        }
        HudElem->elem.rotationTime = _EAX;
        HudElem->elem.fromRotation = HudElem->elem.rotation;
        return;
      }
      __asm
      {
        vcvtss2sd xmm1, xmm6, xmm6
        vmovq   rdx, xmm1
      }
      v13 = j_va("rotate time %g > 60", _RDX);
      v14 = COM_ERR_3582;
    }
    Scr_ParamError(v14, scrContext, 0, v13);
    goto LABEL_7;
  }
  Scr_Error(COM_ERR_3583, scrContext, "RotateOverTime() not supported in this game mode");
}

/*
==============
HECmd_Reset
==============
*/
void HECmd_Reset(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  G_HudElem_SetDefaults(HudElem);
}

/*
==============
HECmd_Destroy
==============
*/
void HECmd_Destroy(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  G_HudElem_Free(HudElem);
}

/*
==============
HECmd_SetPlayerNameString
==============
*/
void HECmd_SetPlayerNameString(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 

  _RBX = HECmd_GetHudElem(scrContext, entref);
  Entity = GScr_GetEntity(0);
  if ( Entity )
  {
    if ( Entity->client )
    {
      G_HudElem_ClearTypeSettings(_RBX);
      _RBX->elem.type = HE_TYPE_PLAYERNAME;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rbx+90h], xmm0
      }
    }
    else
    {
      Com_Printf(23, "Invalid entity passed to hudelem setplayernamestring(), entity is not a client\n");
    }
  }
  else
  {
    Com_Printf(23, "Invalid entity passed to hudelem setplayernamestring()\n");
  }
}

/*
==============
HECmd_SetPulseFX
==============
*/
void HECmd_SetPulseFX(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 
  int Int; 
  int v6; 
  const char *v7; 
  int v8; 
  int v9; 
  const char *v10; 
  int v11; 
  int v12; 
  const char *v13; 
  __int64 clientNum; 
  gclient_s *v15; 
  int v16; 

  if ( Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_3586, scrContext, "USAGE: <hudelem> SetPulseFX( <speed>, <decayStart>, <decayDuration> );\n");
  HudElem = HECmd_GetHudElem(scrContext, entref);
  HudElem->elem.fxBirthTime = level.time;
  Int = Scr_GetInt(scrContext, 0);
  v6 = Int;
  if ( Int < 0 )
  {
    v7 = j_va("Time (%i) must be greater than zero.", (unsigned int)Int);
    Scr_ParamError(COM_ERR_3585, scrContext, 0, v7);
  }
  HudElem->elem.fxLetterTime = v6;
  v8 = Scr_GetInt(scrContext, 1u);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = j_va("Time (%i) must be greater than zero.", (unsigned int)v8);
    Scr_ParamError(COM_ERR_3585, scrContext, 1u, v10);
  }
  HudElem->elem.fxDecayStartTime = v9;
  v11 = Scr_GetInt(scrContext, 2u);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = j_va("Time (%i) must be greater than zero.", (unsigned int)v11);
    Scr_ParamError(COM_ERR_3585, scrContext, 2u, v13);
  }
  clientNum = HudElem->clientNum;
  HudElem->elem.fxDecayDuration = v12;
  if ( (_DWORD)clientNum == 2047 )
  {
    level.hudElemLastAssignedSoundID = (level.hudElemLastAssignedSoundID + 1) % 16;
    v16 = level.hudElemLastAssignedSoundID + 16;
  }
  else
  {
    v15 = &level.clients[clientNum];
    v16 = (v15->hudElemLastAssignedSoundID + 1) % 16;
    v15->hudElemLastAssignedSoundID = v16;
    if ( !v16 )
    {
      v15->hudElemLastAssignedSoundID = 1;
      v16 = 1;
    }
  }
  HudElem->elem.soundID = v16;
}

/*
==============
HECmd_SetShowInRealism
==============
*/
void HECmd_SetShowInRealism(scrContext_t *scrContext, scr_entref_t entref)
{
  game_hudelem_t *HudElem; 

  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( (int)Scr_GetNumParam(scrContext) > 0 && Scr_GetInt(scrContext, 0) )
    HudElem->elem.flags |= 0x20000u;
  else
    HudElem->elem.flags &= ~0x20000u;
}

/*
==============
G_HudElem_ClearTypeSettings
==============
*/
void G_HudElem_ClearTypeSettings(game_hudelem_t *hud)
{
  *(_QWORD *)&hud->elem.width = 0i64;
  *(_QWORD *)&hud->elem.materialIndex = 0i64;
  *(_QWORD *)&hud->elem.fromX = 0i64;
  *(_QWORD *)&hud->elem.fromAlignOrg = 0i64;
  *(_QWORD *)&hud->elem.fromHeight = 0i64;
  hud->elem.scaleTime = 0;
  *(_QWORD *)&hud->elem.time = 0i64;
  hud->elem.value = 0.0;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  GConfigStrings::ms_gConfigStrings->SetLocalizedString(GConfigStrings::ms_gConfigStrings, (char *)&queryFormat.fmt + 3, (unsigned int *)&hud->elem.148);
}

/*
==============
G_HudElem_ClientDisconnect
==============
*/
void G_HudElem_ClientDisconnect(gentity_s *ent)
{
  signed __int64 v1; 
  __int64 v3; 
  game_hudelem_t *v4; 
  __int64 v5; 
  GConfigStrings *v6; 
  scrContext_t *v7; 
  __int64 *p_ofs; 
  __int64 localClientNum; 
  __int64 v10; 

  v1 = 0i64;
  v3 = 1080i64;
  do
  {
    v4 = &g_hudelems[(unsigned __int64)v1 / 0xC0];
    if ( g_hudelems[(unsigned __int64)v1 / 0xC0].elem.type && v4->clientNum == ent->s.number )
    {
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 628, ASSERT_TYPE_ASSERT, "(hud)", (const char *)&queryFormat, "hud") )
        __debugbreak();
      v5 = v1 / 192;
      if ( (unsigned int)(v1 / 192) >= 0x438 )
      {
        LODWORD(v10) = 1080;
        LODWORD(localClientNum) = v1 / 192;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 629, ASSERT_TYPE_ASSERT, "(unsigned)( hud - g_hudelems ) < (unsigned)( ( sizeof( *array_counter( g_hudelems ) ) + 0 ) )", "hud - g_hudelems doesn't index ARRAY_COUNT( g_hudelems )\n\t%i not in [0, %i)", localClientNum, v10) )
          __debugbreak();
      }
      if ( (unsigned int)(v4->elem.type - 1) > 0xD )
      {
        LODWORD(localClientNum) = v4->elem.type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 630, ASSERT_TYPE_ASSERT, "( ( hud->elem.type > HE_TYPE_FREE && hud->elem.type < HE_TYPE_COUNT ) )", "( hud->elem.type ) = %i", localClientNum) )
          __debugbreak();
      }
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      v6 = GConfigStrings::ms_gConfigStrings;
      GConfigStrings::ms_gConfigStrings->SetLocalizedString(GConfigStrings::ms_gConfigStrings, (char *)&queryFormat.fmt + 3, &v4->elem.label);
      v6->SetLocalizedString(v6, (const char *)&queryFormat.fmt + 3, &v4->elem.text);
      if ( (unsigned int)v5 >= 0x438 )
      {
        LODWORD(v10) = 1080;
        LODWORD(localClientNum) = v1 / 192;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 600, ASSERT_TYPE_ASSERT, "(unsigned)( hud - g_hudelems ) < (unsigned)( ((((30 + 15) * 24) > 256) ? ((30 + 15) * 24) : 256) )", "hud - g_hudelems doesn't index MAX_HUDELEMS_TOTAL\n\t%i not in [0, %i)", localClientNum, v10) )
          __debugbreak();
      }
      if ( v4->elem.type == HE_TYPE_FREE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 601, ASSERT_TYPE_ASSERT, "(hud->elem.type != HE_TYPE_FREE)", (const char *)&queryFormat, "hud->elem.type != HE_TYPE_FREE") )
        __debugbreak();
      v7 = ScriptContext_Server();
      Scr_NotifyNum(v7, v5, ENTITY_CLASS_HUDELEM, scr_const.death, 0, LOCAL_CLIENT_0);
      Scr_NotifyNum(v7, v5, ENTITY_CLASS_HUDELEM, scr_const.death_or_disconnect, 0, LOCAL_CLIENT_0);
      p_ofs = &s_hudElemFields[0].ofs;
      do
      {
        if ( *((_DWORD *)p_ofs + 2) == 5 )
          Scr_SetString((scr_string_t *)((char *)v4 + *p_ofs), (scr_string_t)0);
        p_ofs += 7;
      }
      while ( *(p_ofs - 2) );
      Scr_FreeEntityNum(v7, v5, ENTITY_CLASS_HUDELEM);
      v4->elem.type = HE_TYPE_FREE;
    }
    v1 += 192i64;
    --v3;
  }
  while ( v3 );
}

/*
==============
G_HudElem_DestroyAll
==============
*/
void G_HudElem_DestroyAll(void)
{
  signed __int64 v0; 
  __int64 v1; 
  game_hudelem_t *v2; 
  __int64 v3; 
  GConfigStrings *v4; 
  scrContext_t *v5; 
  __int64 *p_ofs; 
  __int64 localClientNum; 
  __int64 v8; 

  v0 = 0i64;
  v1 = 1080i64;
  do
  {
    v2 = &g_hudelems[(unsigned __int64)v0 / 0xC0];
    if ( g_hudelems[(unsigned __int64)v0 / 0xC0].elem.type )
    {
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 628, ASSERT_TYPE_ASSERT, "(hud)", (const char *)&queryFormat, "hud") )
        __debugbreak();
      v3 = v0 / 192;
      if ( (unsigned int)(v0 / 192) >= 0x438 )
      {
        LODWORD(v8) = 1080;
        LODWORD(localClientNum) = (int)v0 / 192;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 629, ASSERT_TYPE_ASSERT, "(unsigned)( hud - g_hudelems ) < (unsigned)( ( sizeof( *array_counter( g_hudelems ) ) + 0 ) )", "hud - g_hudelems doesn't index ARRAY_COUNT( g_hudelems )\n\t%i not in [0, %i)", localClientNum, v8) )
          __debugbreak();
      }
      if ( (unsigned int)(v2->elem.type - 1) > 0xD )
      {
        LODWORD(localClientNum) = v2->elem.type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 630, ASSERT_TYPE_ASSERT, "( ( hud->elem.type > HE_TYPE_FREE && hud->elem.type < HE_TYPE_COUNT ) )", "( hud->elem.type ) = %i", localClientNum) )
          __debugbreak();
      }
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      v4 = GConfigStrings::ms_gConfigStrings;
      GConfigStrings::ms_gConfigStrings->SetLocalizedString(GConfigStrings::ms_gConfigStrings, (char *)&queryFormat.fmt + 3, &v2->elem.label);
      v4->SetLocalizedString(v4, (const char *)&queryFormat.fmt + 3, &v2->elem.text);
      if ( (unsigned int)v3 >= 0x438 )
      {
        LODWORD(v8) = 1080;
        LODWORD(localClientNum) = v0 / 192;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 600, ASSERT_TYPE_ASSERT, "(unsigned)( hud - g_hudelems ) < (unsigned)( ((((30 + 15) * 24) > 256) ? ((30 + 15) * 24) : 256) )", "hud - g_hudelems doesn't index MAX_HUDELEMS_TOTAL\n\t%i not in [0, %i)", localClientNum, v8) )
          __debugbreak();
      }
      if ( v2->elem.type == HE_TYPE_FREE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 601, ASSERT_TYPE_ASSERT, "(hud->elem.type != HE_TYPE_FREE)", (const char *)&queryFormat, "hud->elem.type != HE_TYPE_FREE") )
        __debugbreak();
      v5 = ScriptContext_Server();
      Scr_NotifyNum(v5, v3, ENTITY_CLASS_HUDELEM, scr_const.death, 0, LOCAL_CLIENT_0);
      Scr_NotifyNum(v5, v3, ENTITY_CLASS_HUDELEM, scr_const.death_or_disconnect, 0, LOCAL_CLIENT_0);
      p_ofs = &s_hudElemFields[0].ofs;
      do
      {
        if ( *((_DWORD *)p_ofs + 2) == 5 )
          Scr_SetString((scr_string_t *)((char *)v2 + *p_ofs), (scr_string_t)0);
        p_ofs += 7;
      }
      while ( *(p_ofs - 2) );
      Scr_FreeEntityNum(v5, v3, ENTITY_CLASS_HUDELEM);
      v2->elem.type = HE_TYPE_FREE;
    }
    v0 += 192i64;
    --v1;
  }
  while ( v1 );
  memset_0(g_hudelems, 0, sizeof(g_hudelems));
}

/*
==============
G_HudElem_DumpHudElems
==============
*/
void G_HudElem_DumpHudElems(void)
{
  unsigned int v0; 
  int *p_clientNum; 
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned __int8 v5; 
  __int64 v6; 
  const char *v7; 
  unsigned int v8; 
  GConfigStrings *v9; 
  char *fmt; 
  char v11[1024]; 

  v0 = 0;
  p_clientNum = &g_hudelems[0].clientNum;
  v2 = 0;
  v3 = 1080i64;
  do
  {
    v4 = *(p_clientNum - 46);
    if ( (_DWORD)v4 )
    {
      Com_Printf(23, "%12s", g_hudElemDebugTypeNames[v4]);
      v5 = *((_BYTE *)p_clientNum + 4);
      if ( v5 )
        Com_Printf(23, "\t%i", v5);
      v6 = (unsigned int)*p_clientNum;
      if ( (_DWORD)v6 != 2047 )
        Com_Printf(23, "\tcl %i", v6);
      v7 = "\tarchived";
      if ( !*((_BYTE *)p_clientNum + 5) )
      {
        ++v2;
        if ( !*((_BYTE *)p_clientNum + 5) )
          v7 = "\tcurrent";
      }
      v8 = v0 + 1;
      if ( !*((_BYTE *)p_clientNum + 5) )
        v8 = v0;
      v0 = v8;
      Com_Printf(23, v7);
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      v9 = GConfigStrings::ms_gConfigStrings;
      GConfigStrings::ms_gConfigStrings->GetLocalizedStringName(GConfigStrings::ms_gConfigStrings, *(p_clientNum - 9), v11, 1024);
      Com_Printf(23, "\ttext \"%s\"", v11);
      v9->GetMaterialName(v9, *(p_clientNum - 23), v11, 1024);
      Com_Printf(23, "\tmaterial \"%s\"", v11);
      Com_Printf(23, "\n");
    }
    p_clientNum += 48;
    --v3;
  }
  while ( v3 );
  LODWORD(fmt) = v2 + v0;
  Com_Printf(23, "\n%i archived + %i current = %i hud elems\n", v0, v2, fmt);
}

/*
==============
G_HudElem_Free
==============
*/
void G_HudElem_Free(game_hudelem_t *hud)
{
  signed __int64 v2; 
  GConfigStrings *v3; 
  scrContext_t *v4; 
  __int64 *p_ofs; 
  __int64 localClientNum; 
  __int64 v7; 

  if ( !hud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 628, ASSERT_TYPE_ASSERT, "(hud)", (const char *)&queryFormat, "hud") )
    __debugbreak();
  v2 = hud - g_hudelems;
  if ( (unsigned int)v2 >= 0x438 )
  {
    LODWORD(localClientNum) = hud - g_hudelems;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 629, ASSERT_TYPE_ASSERT, "(unsigned)( hud - g_hudelems ) < (unsigned)( ( sizeof( *array_counter( g_hudelems ) ) + 0 ) )", "hud - g_hudelems doesn't index ARRAY_COUNT( g_hudelems )\n\t%i not in [0, %i)", localClientNum, 1080) )
      __debugbreak();
  }
  if ( (unsigned int)(hud->elem.type - 1) > 0xD )
  {
    LODWORD(localClientNum) = hud->elem.type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 630, ASSERT_TYPE_ASSERT, "( ( hud->elem.type > HE_TYPE_FREE && hud->elem.type < HE_TYPE_COUNT ) )", "( hud->elem.type ) = %i", localClientNum) )
      __debugbreak();
  }
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v3 = GConfigStrings::ms_gConfigStrings;
  GConfigStrings::ms_gConfigStrings->SetLocalizedString(GConfigStrings::ms_gConfigStrings, (char *)&queryFormat.fmt + 3, &hud->elem.label);
  v3->SetLocalizedString(v3, (const char *)&queryFormat.fmt + 3, &hud->elem.text);
  if ( (unsigned int)v2 >= 0x438 )
  {
    LODWORD(v7) = 1080;
    LODWORD(localClientNum) = hud - g_hudelems;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 600, ASSERT_TYPE_ASSERT, "(unsigned)( hud - g_hudelems ) < (unsigned)( ((((30 + 15) * 24) > 256) ? ((30 + 15) * 24) : 256) )", "hud - g_hudelems doesn't index MAX_HUDELEMS_TOTAL\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  if ( hud->elem.type == HE_TYPE_FREE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 601, ASSERT_TYPE_ASSERT, "(hud->elem.type != HE_TYPE_FREE)", (const char *)&queryFormat, "hud->elem.type != HE_TYPE_FREE") )
    __debugbreak();
  v4 = ScriptContext_Server();
  Scr_NotifyNum(v4, v2, ENTITY_CLASS_HUDELEM, scr_const.death, 0, LOCAL_CLIENT_0);
  Scr_NotifyNum(v4, v2, ENTITY_CLASS_HUDELEM, scr_const.death_or_disconnect, 0, LOCAL_CLIENT_0);
  p_ofs = &s_hudElemFields[0].ofs;
  do
  {
    if ( *((_DWORD *)p_ofs + 2) == 5 )
      Scr_SetString((scr_string_t *)((char *)hud + *p_ofs), (scr_string_t)0);
    p_ofs += 7;
  }
  while ( *(p_ofs - 2) );
  Scr_FreeEntityNum(v4, v2, ENTITY_CLASS_HUDELEM);
  hud->elem.type = HE_TYPE_FREE;
}

/*
==============
G_HudElem_GetFlag
==============
*/
void G_HudElem_GetFlag(scrContext_t *scrContext, game_hudelem_t *hud, int offset, int flag)
{
  if ( s_hudElemFields[offset].ofs != 180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 781, ASSERT_TYPE_ASSERT, "(s_hudElemFields[offset].ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(game_hudelem_t,elem.flags) ) ) ))", (const char *)&queryFormat, "s_hudElemFields[offset].ofs == HEOFS( elem.flags )") )
    __debugbreak();
  Scr_AddBool(scrContext, (flag & hud->elem.flags) != 0);
}

/*
==============
G_HudElem_Load
==============
*/
void G_HudElem_Load(MemoryFile *memFile)
{
  int i; 
  int p; 

  memset_0(g_hudelems, 0, sizeof(g_hudelems));
  MemFile_ReadData(memFile, 4ui64, &p);
  for ( i = p; p != -1; i = p )
  {
    MemFile_ReadData(memFile, 0xC0ui64, &g_hudelems[i]);
    MemFile_ReadData(memFile, 4ui64, &p);
  }
}

/*
==============
G_HudElem_Save
==============
*/
void G_HudElem_Save(MemoryFile *memFile)
{
  game_hudelem_t *v2; 
  int i; 
  int p; 

  v2 = g_hudelems;
  for ( i = 0; i < 1080; ++i )
  {
    if ( v2->elem.type )
    {
      p = i;
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 0xC0ui64, v2);
    }
    ++v2;
  }
  p = -1;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
G_HudElem_ScrAddFieldsForHudElems
==============
*/
void G_HudElem_ScrAddFieldsForHudElems(scrContext_t *scrContext)
{
  const game_hudelem_field_t *i; 
  __int64 v3; 

  for ( i = s_hudElemFields; i->name; ++i )
  {
    v3 = ((char *)&i->canonicalString - (char *)&s_hudElemFields[0].canonicalString) / 56;
    if ( (v3 & 0xE000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 1274, ASSERT_TYPE_ASSERT, "(((f - s_hudElemFields) & ENTFIELD_MASK) == ENTFIELD_ENTITY)", (const char *)&queryFormat, "((f - s_hudElemFields) & ENTFIELD_MASK) == ENTFIELD_ENTITY") )
      __debugbreak();
    if ( v3 != (unsigned __int16)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 1275, ASSERT_TYPE_ASSERT, "((f - s_hudElemFields) == (unsigned short)( f - s_hudElemFields ))", (const char *)&queryFormat, "(f - s_hudElemFields) == (unsigned short)( f - s_hudElemFields )") )
      __debugbreak();
    Scr_AddClassField(scrContext, ENTITY_CLASS_HUDELEM, *i->name, i->canonicalString, (unsigned __int16)v3);
  }
}

/*
==============
G_HudElem_ScrCreate
==============
*/
void G_HudElem_ScrCreate(scrContext_t *scrContext, int clientNum, int teamNum)
{
  game_hudelem_t *v3; 
  __int64 v7; 
  unsigned __int64 v8; 
  game_hudelem_t *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  scrContext_t *v12; 
  __int64 v13; 
  __int64 v14; 

  v3 = g_hudelems;
  v7 = 0i64;
  while ( v3->elem.type )
  {
    v7 = (unsigned int)(v7 + 1);
    ++v3;
    if ( (unsigned int)v7 >= 0x438 )
      goto LABEL_4;
  }
  v8 = 192 * v7;
  if ( g_hudelems[v7].elem.label && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 566, ASSERT_TYPE_ASSERT, "( !g_hudelems[i].elem.label )", (const char *)&queryFormat, "!g_hudelems[i].elem.label") )
    __debugbreak();
  if ( g_hudelems[v8 / 0xC0].elem.text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 567, ASSERT_TYPE_ASSERT, "( !g_hudelems[i].elem.text )", (const char *)&queryFormat, "!g_hudelems[i].elem.text") )
    __debugbreak();
  v9 = &g_hudelems[v8 / 0xC0];
  G_HudElem_SetDefaults(&g_hudelems[v8 / 0xC0]);
  g_hudelems[v8 / 0xC0].clientNum = clientNum;
  if ( (teamNum < 0 || (unsigned int)teamNum > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)teamNum, "signed", teamNum) )
    __debugbreak();
  g_hudelems[v8 / 0xC0].team = teamNum;
  if ( !v9 )
  {
LABEL_4:
    Scr_Error(COM_ERR_3546, scrContext, "out of hudelems");
    return;
  }
  v10 = (__int64)((unsigned __int128)((__int64)v8 * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 5;
  v11 = (v10 >> 63) + v10;
  if ( (unsigned int)v11 >= 0x438 )
  {
    LODWORD(v14) = 1080;
    LODWORD(v13) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 618, ASSERT_TYPE_ASSERT, "(unsigned)( hud - g_hudelems ) < (unsigned)( ((((30 + 15) * 24) > 256) ? ((30 + 15) * 24) : 256) )", "hud - g_hudelems doesn't index MAX_HUDELEMS_TOTAL\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( v9->elem.type == HE_TYPE_FREE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 619, ASSERT_TYPE_ASSERT, "(hud->elem.type != HE_TYPE_FREE)", (const char *)&queryFormat, "hud->elem.type != HE_TYPE_FREE") )
    __debugbreak();
  v12 = ScriptContext_Server();
  Scr_AddEntityNum(v12, v11, ENTITY_CLASS_HUDELEM);
}

/*
==============
G_HudElem_ScrGetHudElemField
==============
*/
void G_HudElem_ScrGetHudElemField(scrContext_t *scrContext, int entnum, int offset)
{
  __int64 v3; 
  __int64 v4; 
  unsigned __int8 *v6; 
  void (__fastcall *getter)(scrContext_t *, game_hudelem_t *, int); 

  v3 = offset;
  v4 = entnum;
  if ( (unsigned int)offset >= 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 1193, ASSERT_TYPE_ASSERT, "((unsigned)offset < ( sizeof( *array_counter( s_hudElemFields ) ) + 0 ) - 1)", (const char *)&queryFormat, "(unsigned)offset < ARRAY_COUNT( s_hudElemFields ) - 1") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x438 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 1194, ASSERT_TYPE_ASSERT, "((unsigned)entnum < ( sizeof( *array_counter( g_hudelems ) ) + 0 ))", (const char *)&queryFormat, "(unsigned)entnum < ARRAY_COUNT( g_hudelems )") )
    __debugbreak();
  v6 = (unsigned __int8 *)&g_hudelems[v4];
  getter = s_hudElemFields[v3].getter;
  if ( getter )
    getter(scrContext, (game_hudelem_t *)v6, v3);
  else
    Scr_GetGenericField(scrContext, v6, s_hudElemFields[v3].type, s_hudElemFields[v3].ofs);
}

/*
==============
G_HudElem_ScrNewClientHudElem
==============
*/
void G_HudElem_ScrNewClientHudElem(scrContext_t *scrContext)
{
  gentity_s *Entity; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  Entity = GScr_GetEntity(0);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 1257, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v3 = Entity - g_entities;
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v4) = Entity - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
  }
  v3 = (__int16)v3;
  if ( (unsigned int)(__int16)v3 >= 0x800 )
  {
    LODWORD(v5) = 2048;
    LODWORD(v4) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 1258, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( ent ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  if ( !Entity->client )
    Scr_ParamError(COM_ERR_3551, scrContext, 0, "not a client");
  G_HudElem_ScrCreate(scrContext, Entity->s.number, 0);
}

/*
==============
G_HudElem_ScrNewHudElem
==============
*/
void G_HudElem_ScrNewHudElem(scrContext_t *scrContext)
{
  G_HudElem_ScrCreate(scrContext, 2047, 0);
}

/*
==============
G_HudElem_ScrSetHudElemField
==============
*/
void G_HudElem_ScrSetHudElemField(scrContext_t *scrContext, int entnum, int offset)
{
  __int64 v3; 
  __int64 v4; 
  unsigned __int8 *v6; 
  void (__fastcall *setter)(scrContext_t *, game_hudelem_t *, int); 

  v3 = offset;
  v4 = entnum;
  if ( (unsigned int)offset >= 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 1211, ASSERT_TYPE_ASSERT, "((unsigned)offset < ( sizeof( *array_counter( s_hudElemFields ) ) + 0 ) - 1)", (const char *)&queryFormat, "(unsigned)offset < ARRAY_COUNT( s_hudElemFields ) - 1") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x438 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 1212, ASSERT_TYPE_ASSERT, "((unsigned)entnum < ( sizeof( *array_counter( g_hudelems ) ) + 0 ))", (const char *)&queryFormat, "(unsigned)entnum < ARRAY_COUNT( g_hudelems )") )
    __debugbreak();
  v6 = (unsigned __int8 *)&g_hudelems[v4];
  setter = s_hudElemFields[v3].setter;
  if ( setter )
    setter(scrContext, (game_hudelem_t *)v6, v3);
  else
    Scr_SetGenericField(scrContext, v6, s_hudElemFields[v3].type, s_hudElemFields[v3].ofs);
}

/*
==============
G_HudElem_SetDefaults
==============
*/
void G_HudElem_SetDefaults(game_hudelem_t *hud)
{
  char v4; 
  __int64 v5; 

  _RBX = hud;
  if ( !hud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 503, ASSERT_TYPE_ASSERT, "(hud)", (const char *)&queryFormat, "hud") )
    __debugbreak();
  if ( (unsigned int)(_RBX - g_hudelems) >= 0x438 )
  {
    LODWORD(v5) = _RBX - g_hudelems;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 504, ASSERT_TYPE_ASSERT, "(unsigned)( hud - g_hudelems ) < (unsigned)( ( sizeof( *array_counter( g_hudelems ) ) + 0 ) )", "hud - g_hudelems doesn't index ARRAY_COUNT( g_hudelems )\n\t%i not in [0, %i)", v5, 1080) )
      __debugbreak();
  }
  *(_QWORD *)&_RBX->elem.type = 1i64;
  *(_QWORD *)&_RBX->elem.y = 0i64;
  *(_QWORD *)&_RBX->elem.rotationStartTime = 0i64;
  *(_QWORD *)&_RBX->elem.font = 0i64;
  _RBX->elem.alignScreen = 0;
  *(_QWORD *)&_RBX->elem.sort = 0i64;
  *(_QWORD *)&_RBX->elem.fromColor.r = 0i64;
  _RBX->elem.fadeTime = 0;
  *(_QWORD *)&_RBX->elem.soundID = 0i64;
  *(_QWORD *)&_RBX->elem.fxBirthTime = 0i64;
  *(_QWORD *)&_RBX->elem.fxDecayStartTime = 0i64;
  *(_QWORD *)&_RBX->elem.moveStartTime = 0i64;
  *(_QWORD *)&_RBX->elem.targetEntNum = 2047i64;
  _RBX->elem.color.rgba = -1;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|0x80) )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    v4 = 0;
  }
  else
  {
    v4 = 1;
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovss  dword ptr [rbx+24h], xmm0 }
  _RBX->isArchived = v4;
  _RBX->currentShowInKillcam = v4;
  *(_QWORD *)&_RBX->elem.fromFontScale = 0i64;
  _RBX->elem.fontScaleTime = 0;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  GConfigStrings::ms_gConfigStrings->SetLocalizedString(GConfigStrings::ms_gConfigStrings, (char *)&queryFormat.fmt + 3, &_RBX->elem.label);
  G_HudElem_ClearTypeSettings(_RBX);
}

/*
==============
G_HudElem_SetEnumString
==============
*/
void G_HudElem_SetEnumString(scrContext_t *scrContext, game_hudelem_t *hud, const game_hudelem_field_t *f, const char **names, int nameCount)
{
  scrContext_t *v8; 
  __int64 v9; 
  const char *String; 
  int v11; 
  __int64 i; 
  const char *v13; 
  __int64 v14; 
  signed __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  const char *v21; 
  const char *v22; 
  __int64 v23; 
  _DWORD *v25; 
  char _Buffer[2048]; 

  v8 = scrContext;
  if ( !hud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 694, ASSERT_TYPE_ASSERT, "(hud)", (const char *)&queryFormat, "hud") )
    __debugbreak();
  if ( !f && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 695, ASSERT_TYPE_ASSERT, "(f)", (const char *)&queryFormat, "f") )
    __debugbreak();
  if ( !names && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 696, ASSERT_TYPE_ASSERT, "(names)", (const char *)&queryFormat, "names") )
    __debugbreak();
  if ( nameCount <= 0 )
  {
    LODWORD(v23) = nameCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 697, ASSERT_TYPE_ASSERT, "( ( nameCount > 0 ) )", "( nameCount ) = %i", v23) )
      __debugbreak();
  }
  v25 = (_DWORD *)((char *)hud + f->ofs);
  v9 = 0i64;
  String = Scr_GetString(v8, 0);
  v11 = 0;
  if ( nameCount > 0 )
  {
    for ( i = 0i64; i < nameCount; ++i )
    {
      v13 = names[i];
      v14 = 0x7FFFFFFFi64;
      if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v15 = String - v13;
      while ( 1 )
      {
        v16 = (unsigned __int8)v13[v15];
        v17 = v14;
        v18 = *(unsigned __int8 *)v13++;
        --v14;
        if ( !v17 )
        {
LABEL_30:
          *v25 &= ~(f->mask << f->shift);
          *v25 |= v11 << f->shift;
          return;
        }
        if ( v16 != v18 )
        {
          v19 = v16 + 32;
          if ( (unsigned int)(v16 - 65) > 0x19 )
            v19 = v16;
          v16 = v19;
          v20 = v18 + 32;
          if ( (unsigned int)(v18 - 65) > 0x19 )
            v20 = v18;
          if ( v16 != v20 )
            break;
        }
        if ( !v16 )
          goto LABEL_30;
      }
      ++v11;
    }
    v8 = scrContext;
  }
  v21 = SL_ConvertToString(*f->name);
  j_sprintf(_Buffer, "\"%s\" is not a valid value for hudelem field \"%s\"\nShould be one of:", String, v21);
  if ( nameCount > 0i64 )
  {
    do
    {
      v22 = j_va(" %s", names[v9]);
      strncat(_Buffer, v22, 0x7FFui64);
      ++v9;
      _Buffer[2047] = 0;
    }
    while ( v9 < nameCount );
  }
  Scr_Error(COM_ERR_3547, v8, _Buffer);
}

/*
==============
HECmd_GetHudElem
==============
*/
game_hudelem_t *HECmd_GetHudElem(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 

  entnum = entref.entnum;
  if ( entref.entclass == ENTITY_CLASS_HUDELEM )
  {
    if ( entref.entnum >= 0x438 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 1285, ASSERT_TYPE_ASSERT, "(entref.entnum < ( sizeof( *array_counter( g_hudelems ) ) + 0 ))", (const char *)&queryFormat, "entref.entnum < ARRAY_COUNT( g_hudelems )") )
      __debugbreak();
    return &g_hudelems[entnum];
  }
  else
  {
    Scr_ObjectError(COM_ERR_3552, scrContext, "not a hud element");
    return 0i64;
  }
}

/*
==============
HECmd_SetClock_Internal
==============
*/
void HECmd_SetClock_Internal(scrContext_t *scrContext, scr_entref_t entref, he_type_t type, const char *cmdName)
{
  game_hudelem_t *HudElem; 
  unsigned int NumParam; 
  const char *v11; 
  const char *v21; 
  const char *v32; 
  GConfigStrings *v33; 
  unsigned int (__fastcall *GetMaterialIndex)(GConfigStrings *, const char *); 
  const char *String; 
  int v36; 
  int v37; 
  int v38; 
  int Int; 
  const char *v40; 
  int v41; 
  const char *v42; 
  int v44; 
  int v46; 

  __asm { vmovaps [rsp+68h+var_38], xmm7 }
  HudElem = HECmd_GetHudElem(scrContext, entref);
  if ( (unsigned int)(type - 11) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudelem.cpp", 1583, ASSERT_TYPE_ASSERT, "( ( type == HE_TYPE_CLOCK_DOWN || type == HE_TYPE_CLOCK_UP ) )", "( type ) = %i", type) )
    __debugbreak();
  NumParam = Scr_GetNumParam(scrContext);
  if ( ((NumParam - 3) & 0xFFFFFFFD) != 0 )
  {
    v11 = j_va("USAGE: <hudelem> %s(time_in_seconds, total_clock_time_in_seconds, shadername[, width, height]);\n", cmdName);
    Scr_Error(COM_ERR_3563, scrContext, v11);
  }
  __asm { vxorps  xmm7, xmm7, xmm7 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm7, xmm1, 2
    vcvttss2si eax, xmm2
  }
  v46 = _EAX;
  if ( _EAX <= 0 && type != HE_TYPE_CLOCK_UP )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v21 = j_va("time %g should be > 0", _RDX);
    Scr_ParamError(COM_ERR_3564, scrContext, 0, v21);
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm2, xmm1, xmm2
    vroundss xmm0, xmm7, xmm2, 2
    vcvttss2si r12d, xmm0
  }
  if ( _ER12 <= 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r12d
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v32 = j_va("duration %g should be > 0", _RDX);
    Scr_ParamError(COM_ERR_3565, scrContext, 1u, v32);
  }
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v33 = GConfigStrings::ms_gConfigStrings;
  GetMaterialIndex = GConfigStrings::ms_gConfigStrings->GetMaterialIndex;
  String = Scr_GetString(scrContext, 2u);
  v36 = GetMaterialIndex(v33, String);
  if ( NumParam == 3 )
  {
    v37 = 0;
    v38 = 0;
  }
  else
  {
    Int = Scr_GetInt(scrContext, 3u);
    v37 = Int;
    if ( Int < 0 )
    {
      v40 = j_va("width %i < 0", (unsigned int)Int);
      Scr_ParamError(COM_ERR_3566, scrContext, 3u, v40);
    }
    v41 = Scr_GetInt(scrContext, 4u);
    v38 = v41;
    if ( v41 < 0 )
    {
      v42 = j_va("height %i < 0", (unsigned int)v41);
      Scr_ParamError(COM_ERR_3567, scrContext, 4u, v42);
    }
  }
  G_HudElem_ClearTypeSettings(HudElem);
  __asm { vmovaps xmm7, [rsp+68h+var_38] }
  HudElem->elem.type = type;
  v44 = level.time + v46;
  HudElem->elem.width = v37;
  HudElem->elem.time = v44;
  HudElem->elem.duration = _ER12;
  HudElem->elem.materialIndex = v36;
  HudElem->elem.height = v38;
}

