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
  UsableList *v5; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  UsableListItem *v10; 
  HintType CursorHintType; 
  unsigned int v12; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 
  unsigned int v15; 
  unsigned int v16; 
  const OmnvarDef *v17; 
  OmnvarData *v18; 
  int CursorHintTag; 
  unsigned int v20; 
  const OmnvarDef *v21; 
  unsigned int *v31; 
  unsigned int v32; 
  const OmnvarDef *v33; 
  OmnvarData *v34; 

  v5 = useList;
  if ( !useList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 80, ASSERT_TYPE_ASSERT, "( useList )", (const char *)&queryFormat, "useList") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 81, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 82, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS )") )
    __debugbreak();
  v7 = 0;
  v8 = 0;
  if ( v5->itemCount )
  {
    __asm
    {
      vmovaps [rsp+78h+var_48], xmm7
      vxorps  xmm7, xmm7, xmm7
      vmovaps [rsp+78h+var_38], xmm6
    }
    do
    {
      if ( v7 >= 8u )
        break;
      v10 = &v5->items[v8];
      if ( UsableRef_GetCursorHintEntIndex(&v10->ref) != ps->cursorHintEntIndex || UsableRef_GetCursorHintClass(&v5->items[v8].ref) != ps->cursorHintClass || UsableRef_GetCursorHintPart(&v5->items[v8].ref) != ps->cursorHintData )
      {
        CursorHintType = UsableRef_GetCursorHintType(&v5->items[v8].ref, ps);
        if ( CursorHintType != HINT_NOICON && CursorHintType != HINT_WEAPON )
        {
          v12 = s_omnvarIndices[v7][0];
          Def = BG_Omnvar_GetDef(v12);
          Data = G_Omnvar_GetData(v12, ps->clientNum, NULL);
          v15 = UsableKeyEncode(v10->ref.useIndex, (const UsableClass)v10->ref.useClass, v10->ref.useData);
          if ( Sys_IsServerClientFrameWorker() && (Def->flags & 6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 119, ASSERT_TYPE_ASSERT, "( !Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (( 1 << 2 ) | ( 1 << 1 ))) != 0) )", (const char *)&queryFormat, "!Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (OMNVAR_FLAG_ARCHIVED | OMNVAR_FLAG_CLIENTSCOPE)) != 0)") )
            __debugbreak();
          G_Omnvar_SetUnsignedInteger(Def, Data, v15);
          G_Omnvar_MarkChanged(Data);
          v16 = s_omnvarIndices[v7][1];
          v17 = BG_Omnvar_GetDef(v16);
          v18 = G_Omnvar_GetData(v16, ps->clientNum, NULL);
          if ( Sys_IsServerClientFrameWorker() && (v17->flags & 6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 127, ASSERT_TYPE_ASSERT, "( !Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (( 1 << 2 ) | ( 1 << 1 ))) != 0) )", (const char *)&queryFormat, "!Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (OMNVAR_FLAG_ARCHIVED | OMNVAR_FLAG_CLIENTSCOPE)) != 0)") )
            __debugbreak();
          CursorHintTag = UsableRef_GetCursorHintTag(&v10->ref);
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 20, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 21, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
            __debugbreak();
          if ( v17->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 22, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
            __debugbreak();
          v18->current.integer = CursorHintTag - v17->minvalue;
          G_Omnvar_MarkChanged(v18);
          v20 = s_omnvarIndices[v7][2];
          v21 = BG_Omnvar_GetDef(v20);
          _RBX = G_Omnvar_GetData(v20, ps->clientNum, NULL);
          if ( Sys_IsServerClientFrameWorker() && (v21->flags & 6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 135, ASSERT_TYPE_ASSERT, "( !Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (( 1 << 2 ) | ( 1 << 1 ))) != 0) )", (const char *)&queryFormat, "!Sys_IsServerClientFrameWorker() || ((omnvarDef->flags & (OMNVAR_FLAG_ARCHIVED | OMNVAR_FLAG_CLIENTSCOPE)) != 0)") )
            __debugbreak();
          *(double *)&_XMM0 = UsableRef_GetDisplayRadius(&v10->ref);
          __asm { vmovaps xmm6, xmm0 }
          if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 38, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 39, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
            __debugbreak();
          if ( v21->type != OMNVAR_TYPE_FLOAT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 40, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_FLOAT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_FLOAT") )
            __debugbreak();
          _EAX = 1;
          __asm { vmovd   xmm1, eax }
          _EAX = v21->type;
          __asm
          {
            vmovd   xmm0, eax
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm7, xmm6, xmm2
            vmovss  dword ptr [rbx+4], xmm0
          }
          G_Omnvar_MarkChanged(_RBX);
          v5 = useList;
          ++v7;
        }
      }
      ++v8;
    }
    while ( v8 < v5->itemCount );
    __asm
    {
      vmovaps xmm6, [rsp+78h+var_38]
      vmovaps xmm7, [rsp+78h+var_48]
    }
  }
  if ( v7 < 8ui64 )
  {
    v31 = s_omnvarIndices[v7];
    do
    {
      v32 = *v31;
      v33 = BG_Omnvar_GetDef(*v31);
      v34 = G_Omnvar_GetData(v32, ps->clientNum, NULL);
      if ( Sys_IsServerClientFrameWorker() && (v33->flags & 6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_minimized_use.cpp", 71, ASSERT_TYPE_ASSERT, "( !Sys_IsServerClientFrameWorker() || ( ( omnvarDef->flags & ( ( 1 << 2 ) | ( 1 << 1 ) ) ) != 0) )", (const char *)&queryFormat, "!Sys_IsServerClientFrameWorker() || ( ( omnvarDef->flags & ( OMNVAR_FLAG_ARCHIVED | OMNVAR_FLAG_CLIENTSCOPE ) ) != 0)") )
        __debugbreak();
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 29, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 30, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( v33->type != OMNVAR_TYPE_UINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 31, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_UINT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_UINT") )
        __debugbreak();
      v34->current.integer = 2047;
      G_Omnvar_MarkChanged(v34);
      v31 += 3;
    }
    while ( (__int64)v31 < (__int64)&unk_1491B6200 );
  }
}

