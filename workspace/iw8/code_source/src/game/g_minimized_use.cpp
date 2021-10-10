/*
==============
G_UpdateMinimizedUseOmnvars
==============
*/

void __fastcall G_UpdateMinimizedUseOmnvars(const playerState_s *ps, UsableList *useList)
{
  ?G_UpdateMinimizedUseOmnvars@@YAXPEBUplayerState_s@@PEAUUsableList@@@Z(ps, useList);
}

/*
==============
G_MinimizedUsePrompts_Init
==============
*/

void G_MinimizedUsePrompts_Init(void)
{
  ?G_MinimizedUsePrompts_Init@@YAXXZ();
}

/*
==============
G_MinimizedUsePrompts_Shutdown
==============
*/

void G_MinimizedUsePrompts_Shutdown(void)
{
  ?G_MinimizedUsePrompts_Shutdown@@YAXXZ();
}

/*
==============
G_MinimizedUsePrompts_MarkOmnvarsUnused
==============
*/

void __fastcall G_MinimizedUsePrompts_MarkOmnvarsUnused(const playerState_s *ps, const int startIndex)
{
  ?G_MinimizedUsePrompts_MarkOmnvarsUnused@@YAXPEBUplayerState_s@@H@Z(ps, startIndex);
}

/*
==============
G_MinimizedUsePrompts_Init
==============
*/
void G_MinimizedUsePrompts_Init(void)
{
  unsigned int (*v0)[3]; 
  int i; 
  const char **v2; 
  unsigned int IndexByName; 
  char *fmt; 
  char dest[256]; 

  v0 = s_omnvarIndices;
  memset_0(s_omnvarIndices, 0, sizeof(s_omnvarIndices));
  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 25, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS )") )
    __debugbreak();
  for ( i = 0; i < 8; ++i )
  {
    v2 = s_minimizedUseOmnvarName;
    do
    {
      LODWORD(fmt) = i;
      Com_sprintf(dest, 0x100ui64, "%s%02d", *v2, fmt);
      IndexByName = BG_Omnvar_GetIndexByName(dest);
      if ( IndexByName == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 34, ASSERT_TYPE_ASSERT, "(index != ((uint)-1))", "%s\n\tFailed to find omnvar: %s", "index != OMNVAR_NONE", dest) )
        __debugbreak();
      *(_DWORD *)v0 = IndexByName;
      ++v2;
      v0 = (unsigned int (*)[3])((char *)v0 + 4);
    }
    while ( (__int64)v2 < (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_300 );
  }
}

/*
==============
G_MinimizedUsePrompts_MarkOmnvarsUnused
==============
*/
void G_MinimizedUsePrompts_MarkOmnvarsUnused(const playerState_s *ps, const int startIndex)
{
  __int64 v3; 
  unsigned int *v4; 
  unsigned int v5; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 

  if ( startIndex < 8 )
  {
    v3 = (unsigned int)(8 - startIndex);
    v4 = s_omnvarIndices[startIndex];
    do
    {
      v5 = *v4;
      Def = BG_Omnvar_GetDef(*v4);
      Data = G_Omnvar_GetData(v5, ps->clientNum, NULL);
      if ( Sys_IsServerClientFrameWorker() && (Def->flags & 6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 71, ASSERT_TYPE_ASSERT, "( !Sys_IsServerClientFrameWorker() || ( ( omnvarDef->flags & ( ( 1 << 2 ) | ( 1 << 1 ) ) ) != 0) )", (const char *)&queryFormat, "!Sys_IsServerClientFrameWorker() || ( ( omnvarDef->flags & ( OMNVAR_FLAG_ARCHIVED | OMNVAR_FLAG_CLIENTSCOPE ) ) != 0)") )
        __debugbreak();
      if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 29, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 30, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( Def->type != OMNVAR_TYPE_UINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 31, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_UINT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_UINT") )
        __debugbreak();
      Data->current.integer = 2047;
      G_Omnvar_MarkChanged(Data);
      v4 += 3;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
G_MinimizedUsePrompts_Shutdown
==============
*/
void G_MinimizedUsePrompts_Shutdown(void)
{
  memset_0(s_omnvarIndices, 0, sizeof(s_omnvarIndices));
}

/*
==============
G_UpdateMinimizedUseOmnvars
==============
*/
void G_UpdateMinimizedUseOmnvars(const playerState_s *ps, UsableList *useList)
{
  UsableList *v2; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  UsableListItem *v7; 
  HintType CursorHintType; 
  unsigned int v9; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 
  unsigned int v12; 
  unsigned int v13; 
  const OmnvarDef *v14; 
  OmnvarData *v15; 
  int CursorHintTag; 
  unsigned int v17; 
  const OmnvarDef *v18; 
  OmnvarData *v19; 
  unsigned int *v23; 
  unsigned int v24; 
  const OmnvarDef *v25; 
  OmnvarData *v26; 

  v2 = useList;
  if ( !useList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 80, ASSERT_TYPE_ASSERT, "( useList )", (const char *)&queryFormat, "useList") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 81, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 82, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS )") )
    __debugbreak();
  v4 = 0;
  v5 = 0;
  if ( v2->itemCount )
  {
    _XMM7 = 0i64;
    do
    {
      if ( v4 >= 8u )
        break;
      v7 = &v2->items[v5];
      if ( UsableRef_GetCursorHintEntIndex(&v7->ref) != ps->cursorHintEntIndex || UsableRef_GetCursorHintClass(&v2->items[v5].ref) != ps->cursorHintClass || UsableRef_GetCursorHintPart(&v2->items[v5].ref) != ps->cursorHintData )
      {
        CursorHintType = UsableRef_GetCursorHintType(&v2->items[v5].ref, ps);
        if ( CursorHintType != HINT_NOICON && CursorHintType != HINT_WEAPON )
        {
          v9 = s_omnvarIndices[v4][0];
          Def = BG_Omnvar_GetDef(v9);
          Data = G_Omnvar_GetData(v9, ps->clientNum, NULL);
          v12 = UsableKeyEncode(v7->ref.useIndex, (const UsableClass)v7->ref.useClass, v7->ref.useData);
          if ( Sys_IsServerClientFrameWorker() && (Def->flags & 6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 119, ASSERT_TYPE_ASSERT, "( !Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (( 1 << 2 ) | ( 1 << 1 ))) != 0) )", (const char *)&queryFormat, "!Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (OMNVAR_FLAG_ARCHIVED | OMNVAR_FLAG_CLIENTSCOPE)) != 0)") )
            __debugbreak();
          G_Omnvar_SetUnsignedInteger(Def, Data, v12);
          G_Omnvar_MarkChanged(Data);
          v13 = s_omnvarIndices[v4][1];
          v14 = BG_Omnvar_GetDef(v13);
          v15 = G_Omnvar_GetData(v13, ps->clientNum, NULL);
          if ( Sys_IsServerClientFrameWorker() && (v14->flags & 6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 127, ASSERT_TYPE_ASSERT, "( !Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (( 1 << 2 ) | ( 1 << 1 ))) != 0) )", (const char *)&queryFormat, "!Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (OMNVAR_FLAG_ARCHIVED | OMNVAR_FLAG_CLIENTSCOPE)) != 0)") )
            __debugbreak();
          CursorHintTag = UsableRef_GetCursorHintTag(&v7->ref);
          if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 20, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
          if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 21, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
            __debugbreak();
          if ( v14->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 22, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
            __debugbreak();
          v15->current.integer = CursorHintTag - v14->minvalue;
          G_Omnvar_MarkChanged(v15);
          v17 = s_omnvarIndices[v4][2];
          v18 = BG_Omnvar_GetDef(v17);
          v19 = G_Omnvar_GetData(v17, ps->clientNum, NULL);
          if ( Sys_IsServerClientFrameWorker() && (v18->flags & 6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 135, ASSERT_TYPE_ASSERT, "( !Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (( 1 << 2 ) | ( 1 << 1 ))) != 0) )", (const char *)&queryFormat, "!Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (OMNVAR_FLAG_ARCHIVED | OMNVAR_FLAG_CLIENTSCOPE)) != 0)") )
            __debugbreak();
          UsableRef_GetDisplayRadius(&v7->ref);
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 38, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
          if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 39, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
            __debugbreak();
          if ( v18->type != OMNVAR_TYPE_FLOAT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 40, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_FLOAT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_FLOAT") )
            __debugbreak();
          _XMM0 = (unsigned int)v18->type;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm7, xmm6, xmm2
          }
          v19->current.value = *(float *)&_XMM0;
          G_Omnvar_MarkChanged(v19);
          v2 = useList;
          ++v4;
        }
      }
      ++v5;
    }
    while ( v5 < v2->itemCount );
  }
  if ( v4 < 8ui64 )
  {
    v23 = s_omnvarIndices[v4];
    do
    {
      v24 = *v23;
      v25 = BG_Omnvar_GetDef(*v23);
      v26 = G_Omnvar_GetData(v24, ps->clientNum, NULL);
      if ( Sys_IsServerClientFrameWorker() && (v25->flags & 6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 71, ASSERT_TYPE_ASSERT, "( !Sys_IsServerClientFrameWorker() || ( ( omnvarDef->flags & ( ( 1 << 2 ) | ( 1 << 1 ) ) ) != 0) )", (const char *)&queryFormat, "!Sys_IsServerClientFrameWorker() || ( ( omnvarDef->flags & ( OMNVAR_FLAG_ARCHIVED | OMNVAR_FLAG_CLIENTSCOPE ) ) != 0)") )
        __debugbreak();
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 29, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 30, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( v25->type != OMNVAR_TYPE_UINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 31, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_UINT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_UINT") )
        __debugbreak();
      v26->current.integer = 2047;
      G_Omnvar_MarkChanged(v26);
      v23 += 3;
    }
    while ( (__int64)v23 < (__int64)&unk_1491B6200 );
  }
}

