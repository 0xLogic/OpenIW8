/*
==============
Con_InitChannels
==============
*/

void Con_InitChannels(void)
{
  ?Con_InitChannels@@YAXXZ();
}

/*
==============
Con_IsChannelVisible
==============
*/

bool __fastcall Con_IsChannelVisible(print_msg_dest_t dest, int channel, int flags)
{
  return ?Con_IsChannelVisible@@YA_NW4print_msg_dest_t@@HH@Z(dest, channel, flags);
}

/*
==============
Con_ScriptHasPermission
==============
*/

bool __fastcall Con_ScriptHasPermission(int channel)
{
  return ?Con_ScriptHasPermission@@YA_NH@Z(channel);
}

/*
==============
Con_IsChannelOpen
==============
*/

bool __fastcall Con_IsChannelOpen(int channel)
{
  return ?Con_IsChannelOpen@@YA_NH@Z(channel);
}

/*
==============
Con_GetChannel
==============
*/

bool __fastcall Con_GetChannel(const char *name, int *channel_result)
{
  return ?Con_GetChannel@@YA_NPEBDPEAH@Z(name, channel_result);
}

/*
==============
Con_InitGameMsgChannels
==============
*/

void Con_InitGameMsgChannels(void)
{
  ?Con_InitGameMsgChannels@@YAXXZ();
}

/*
==============
Con_SaveChannels
==============
*/

void __fastcall Con_SaveChannels(MemoryFile *memFile)
{
  ?Con_SaveChannels@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Con_ShutdownChannels
==============
*/

void Con_ShutdownChannels(void)
{
  ?Con_ShutdownChannels@@YAXXZ();
}

/*
==============
Con_FilterChannel
==============
*/

void __fastcall Con_FilterChannel(print_msg_dest_t dest, int channel, print_msg_filter_t filter)
{
  ?Con_FilterChannel@@YAXW4print_msg_dest_t@@HW4print_msg_filter_t@@@Z(dest, channel, filter);
}

/*
==============
Con_RestoreChannels
==============
*/

void __fastcall Con_RestoreChannels(MemoryFile *memFile)
{
  ?Con_RestoreChannels@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Con_OpenChannel
==============
*/

bool __fastcall Con_OpenChannel(const char *name, bool allowScript)
{
  return ?Con_OpenChannel@@YA_NPEBD_N@Z(name, allowScript);
}

/*
==============
Con_WriteFilterConfigString
==============
*/

void __fastcall Con_WriteFilterConfigString(fileHandle_t f)
{
  ?Con_WriteFilterConfigString@@YAXUfileHandle_t@@@Z(f);
}

/*
==============
Con_ChannelList_f
==============
*/
void Con_ChannelList_f()
{
  PrintChannelGlob *v0; 
  int v1; 
  PrintChannelGlob *v2; 

  v0 = &pcGlob;
  v1 = 0;
  v2 = &pcGlob;
  do
  {
    if ( v1 )
    {
      if ( v0->openChannels[0].name[0] )
        Com_Printf(0, "%s\n", (const char *)v2);
    }
    ++v1;
    v2 = (PrintChannelGlob *)((char *)v2 + 33);
    v0 = (PrintChannelGlob *)((char *)v0 + 33);
  }
  while ( v1 < 256 );
}

/*
==============
Con_CloseChannelInternal
==============
*/
void Con_CloseChannelInternal(int channel)
{
  __int64 v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  unsigned int *v5; 

  v1 = channel;
  if ( (unsigned int)channel >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\con_channels.cpp", 133, ASSERT_TYPE_ASSERT, "(unsigned)( channel ) < (unsigned)( CON_MAX_CHANNELS )", "channel doesn't index CON_MAX_CHANNELS\n\t%i not in [0, %i)", channel, 256) )
    __debugbreak();
  if ( pcGlob.openChannels[v1].name[0] )
  {
    v2 = 8i64;
    v3 = ~(1 << (v1 & 0x1F));
    pcGlob.openChannels[v1].name[0] = 0;
    v4 = 4 * (v1 >> 5);
    v5 = &pcGlob.verbose[0][(unsigned __int64)v4 / 4];
    do
    {
      if ( !(unsigned int *)((char *)v5 - 256 - v4) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      *(v5 - 64) &= v3;
      if ( v5 == (unsigned int *)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      *v5 &= v3;
      v5 += 8;
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
Con_FilterAdd
==============
*/
void Con_FilterAdd(print_msg_filter_t filter)
{
  int v2; 
  const char *v3; 
  int i; 
  const char *v5; 
  int v6; 
  int v7; 
  scrContext_t *v8; 

  v2 = Cmd_Argc();
  if ( v2 >= 2 )
  {
    for ( i = 1; i < v2; ++i )
    {
      v5 = Cmd_Argv(i);
      Con_FilterChannel(CON_DEST_CONSOLE, v5, filter);
    }
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v6 = strlen_noncrt("updategamerprofile\n");
    v7 = v6;
    if ( s_cmd_textArray[0].cmdsize + v6 < s_cmd_textArray[0].maxsize )
    {
      memcpy_noncrt(&s_cmd_textArray[0].data[s_cmd_textArray[0].cmdsize], "updategamerprofile\n", v6 + 1);
      s_cmd_textArray[0].cmdsize += v7;
      v8 = ScriptContext_Server();
      Scr_MonitorCommand(v8, "updategamerprofile\n");
    }
    else
    {
      Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "updategamerprofile\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
  else
  {
    v3 = Cmd_Argv(0);
    Com_Printf(0, "USAGE: %s <channel>\n<channel> may include wildcards */?\n", v3);
  }
}

/*
==============
Con_FilterAdd_f
==============
*/
void Con_FilterAdd_f()
{
  Con_FilterAdd(CON_FILTER_ENABLED);
}

/*
==============
Con_FilterChannel
==============
*/
void Con_FilterChannel(print_msg_dest_t dest, int channel, print_msg_filter_t filter)
{
  __int64 v3; 
  int v7; 

  v3 = channel;
  if ( (unsigned int)channel >= 0x100 )
  {
    v7 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\con_channels.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( channel ) < (unsigned)( CON_MAX_CHANNELS )", "channel doesn't index CON_MAX_CHANNELS\n\t%i not in [0, %i)", channel, v7) )
      __debugbreak();
  }
  Con_FilterChannel(dest, pcGlob.openChannels[v3].name, filter);
}

/*
==============
Con_FilterChannel
==============
*/
void Con_FilterChannel(print_msg_dest_t dest, const char *channelName, print_msg_filter_t filter)
{
  int v3; 
  PrintChannel *v4; 
  __int64 v5; 
  print_msg_filter_t v6; 
  const char *v7; 
  print_msg_dest_t v8; 
  __int64 v9; 
  PrintChannel *v10; 
  __int64 v11; 
  unsigned int *v12; 
  unsigned __int64 v13; 
  unsigned int *v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned int *v17; 
  __int64 v21; 

  v3 = 2;
  v4 = &pcGlob.openChannels[1];
  v5 = 255i64;
  v6 = filter;
  v21 = 255i64;
  v7 = channelName;
  v8 = dest;
  v9 = 1i64;
  v10 = &pcGlob.openChannels[1];
  do
  {
    if ( !v4->name[0] )
      goto LABEL_30;
    if ( !I_stricmpwild(v7, v10->name) )
    {
      switch ( v6 )
      {
        case CON_FILTER_DISABLED:
          v15 = v8;
          if ( (PrintChannelGlob *)((char *)&pcGlob + v15 * 32) == (PrintChannelGlob *)-8448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v16 = v9 >> 5;
          pcGlob.enabled[v15][v16] &= ~v3;
          v17 = pcGlob.verbose[v15];
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v17[v16] &= ~v3;
          v5 = v21;
          goto LABEL_28;
        case CON_FILTER_ENABLED:
          v13 = 32i64 * (int)v8;
          if ( (PrintChannelGlob *)((char *)&pcGlob + v13) == (PrintChannelGlob *)-8448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", v13 + (unsigned int)&pcGlob + 8468, (AssertType)(v13 + (unsigned int)&pcGlob + 8449), "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          pcGlob.enabled[v13 / 0x20][v9 >> 5] |= v3;
          v14 = pcGlob.verbose[v13 / 0x20];
          if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v14[v9 >> 5] &= ~v3;
          goto LABEL_28;
        case CON_FILTER_VERBOSE:
          v11 = v8;
          if ( (PrintChannelGlob *)((char *)&pcGlob + v11 * 32) == (PrintChannelGlob *)-8448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          pcGlob.enabled[v11][v9 >> 5] |= v3;
          v12 = pcGlob.verbose[v11];
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v12[v9 >> 5] |= v3;
LABEL_28:
          v8 = dest;
          v6 = filter;
          break;
      }
    }
    v7 = channelName;
LABEL_30:
    ++v9;
    v3 = __ROL4__(v3, 1);
    ++v10;
    ++v4;
    v21 = --v5;
  }
  while ( v5 );
}

/*
==============
Con_FilterList_f
==============
*/
void Con_FilterList_f()
{
  int v0; 
  __int64 v1; 
  PrintChannelGlob *v2; 
  PrintChannelGlob *v3; 
  int v4; 
  __int64 v5; 

  v0 = 0;
  v1 = 0i64;
  v2 = &pcGlob;
  v3 = &pcGlob;
  v4 = 1;
  do
  {
    if ( !v0 )
      goto LABEL_11;
    if ( (unsigned int)v0 > 0xFF )
    {
      LODWORD(v5) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\con_channels.cpp", 226, ASSERT_TYPE_ASSERT, "( ( channel >= 0 && channel < CON_MAX_CHANNELS ) )", "( channel ) = %i", v5) )
        __debugbreak();
    }
    if ( v2->openChannels[0].name[0] )
    {
      if ( (v4 & pcGlob.enabled[0][v1 >> 5]) == 0 )
        goto LABEL_11;
    }
    else if ( pcGlob.channelsInited )
    {
      goto LABEL_11;
    }
    Com_Printf(0, "%s\n", (const char *)v3);
LABEL_11:
    ++v0;
    v4 = __ROL4__(v4, 1);
    ++v1;
    v3 = (PrintChannelGlob *)((char *)v3 + 33);
    v2 = (PrintChannelGlob *)((char *)v2 + 33);
  }
  while ( v0 < 256 );
}

/*
==============
Con_FilterRemove_f
==============
*/
void Con_FilterRemove_f()
{
  Con_FilterAdd(CON_FILTER_DISABLED);
}

/*
==============
Con_GetChannel
==============
*/
bool Con_GetChannel(const char *name, int *channel_result)
{
  PrintChannelGlob *v3; 
  int v5; 

  v3 = &pcGlob;
  v5 = 0;
  while ( !v3->openChannels[0].name[0] || I_strnicmp(name, pcGlob.openChannels[v5].name, 0x7FFFFFFFui64) )
  {
    ++v5;
    v3 = (PrintChannelGlob *)((char *)v3 + 33);
    if ( v5 >= 256 )
      return v5 < 256;
  }
  *channel_result = v5;
  return v5 < 256;
}

/*
==============
Con_InitChannels
==============
*/
void Con_InitChannels(void)
{
  const char **v0; 
  const char *v1; 
  int v2; 
  __int64 v3; 
  PrintChannelGlob *v4; 
  __int64 v5; 
  __int64 v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  char v13; 
  const char *String_Internal_DebugName; 
  const char *v15; 
  __int64 v16; 

  memset_0(&pcGlob, 0, 0x2100ui64);
  v16 = 37i64;
  v0 = (const char **)builtinChannels;
  do
  {
    v1 = *v0;
    v2 = 0;
    v3 = 0i64;
    v4 = &pcGlob;
    while ( v4->openChannels[0].name[0] )
    {
      v5 = 32i64;
      v6 = 33i64 * v2;
      v7 = v1;
      if ( !(PrintChannelGlob *)((char *)&pcGlob + v6) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v8 = (unsigned __int8)v7[(_QWORD)&pcGlob + v6 - (_QWORD)v1];
        v9 = v5;
        v10 = *(unsigned __int8 *)v7++;
        --v5;
        if ( !v9 )
        {
LABEL_18:
          v13 = 1;
          goto LABEL_22;
        }
        if ( v8 != v10 )
        {
          v11 = v8 + 32;
          if ( (unsigned int)(v8 - 65) > 0x19 )
            v11 = v8;
          v8 = v11;
          v12 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v12 = v10;
          if ( v8 != v12 )
            break;
        }
        if ( !v8 )
          goto LABEL_18;
      }
      ++v2;
      ++v3;
      v4 = (PrintChannelGlob *)((char *)v4 + 33);
      if ( v2 >= 256 )
        goto LABEL_24;
    }
    v13 = 0;
LABEL_22:
    if ( !v13 )
    {
      Core_strcpy_truncate_or_fill_zero(pcGlob.openChannels[v2].name, 0x20ui64, v1);
      *((_BYTE *)pcGlob.enabled[-263] + 33 * v3) = 0;
    }
LABEL_24:
    ++v0;
    --v16;
  }
  while ( v16 );
  pcGlob.channelsInited = 1;
  pcGlob.openChannels[24].allowScript = 1;
  String_Internal_DebugName = Dvar_GetString_Internal_DebugName(DVARSTR_con_default_console_filter, "con_default_console_filter");
  Con_FilterChannel(CON_DEST_CONSOLE, String_Internal_DebugName, CON_FILTER_ENABLED);
  Con_FilterChannel(CON_DEST_MINICON, "std", CON_FILTER_ENABLED);
  Con_FilterChannel(CON_DEST_MINICON, "error", CON_FILTER_ENABLED);
  Con_FilterChannel(CON_DEST_ERROR, "error", CON_FILTER_ENABLED);
  v15 = Dvar_GetString_Internal_DebugName(DVARSTR_con_default_file_filter, "con_default_file_filter");
  Con_FilterChannel(CON_DEST_FILE, v15, CON_FILTER_ENABLED);
  Con_InitGameMsgChannels();
  Cmd_AddCommandInternal("con_channellist", Con_ChannelList_f, &stru_150BA3CA0);
  Cmd_AddCommandInternal("con_showchannel", Con_FilterAdd_f, &stru_150BA3CD0);
  Cmd_AddCommandInternal("con_hidechannel", Con_FilterRemove_f, &stru_150BA3D00);
  Cmd_AddCommandInternal("con_visiblechannellist", Con_FilterList_f, &stru_150BA3D30);
}

/*
==============
Con_InitGameMsgChannels
==============
*/
void Con_InitGameMsgChannels(void)
{
  unsigned int v0; 
  char *v1; 
  __int64 v2; 
  char *v3; 
  const dvar_t **v4; 
  __int64 v5; 
  __int64 v6; 
  print_msg_dest_t v7; 
  __int64 v8; 
  __int64 integer64; 
  unsigned __int64 v10; 
  char v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int8 v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  char channelName[256]; 

  Dvar_BeginPermanentRegistration();
  v0 = 0;
  v1 = con_gameMsgWindowNFilter_Descs[0];
  v2 = 0i64;
  v3 = con_gameMsgWindowNFilter_Names[0];
  v4 = con_gameMsgWindowNFilter;
  do
  {
    Com_sprintf(v3, 0x19ui64, "con_gameMsgWindow%dFilter", v0);
    v5 = -1i64;
    do
      ++v5;
    while ( v3[v5] );
    if ( v5 != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\con_channels.cpp", 417, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNFilter_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNFilter_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    Com_sprintf(v1, 0x5Bui64, "Space-separated list of console channels that should be displayed in game message window %d", v0);
    v6 = -1i64;
    do
      ++v6;
    while ( v1[v6] );
    if ( v6 != 90 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\con_channels.cpp", 420, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNFilter_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNFilter_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    con_gameMsgWindowNFilter[v2] = Dvar_RegisterString(v3, defaultGameWindowFilters[v2], 2u, v1);
    ++v0;
    ++v2;
    v3 += 25;
    v1 += 91;
  }
  while ( v0 < 4 );
  Dvar_EndPermanentRegistration();
  v7 = CON_DEST_GAME_FIRST;
  v8 = 0x100100000001i64;
  do
  {
    integer64 = (*v4)->current.integer64;
    if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\con_channels.cpp", 364, ASSERT_TYPE_ASSERT, "(channelNames)", (const char *)&queryFormat, "channelNames") )
      __debugbreak();
    v10 = -1i64;
    do
      ++v10;
    while ( *(_BYTE *)(integer64 + v10) );
    v11 = 0;
    v12 = 0i64;
    Con_FilterChannel(v7, "*", CON_FILTER_DISABLED);
    v13 = 0i64;
    do
    {
      v14 = *(_BYTE *)(v13 + integer64);
      if ( v14 <= 0x2Cu && _bittest64(&v8, (char)v14) )
      {
        if ( v11 )
        {
          v15 = v13 - v12;
          if ( v13 - v12 + 1 > 0x100 )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144206608, 952i64, integer64);
          memcpy_0(channelName, (const void *)(v12 + integer64), v13 - v12);
          if ( v15 >= 0x100 )
          {
            j___report_rangecheckfailure(v16);
            JUMPOUT(0x141A57418i64);
          }
          channelName[v15] = 0;
          Con_FilterChannel(v7, channelName, CON_FILTER_ENABLED);
          v11 = 0;
        }
      }
      else if ( !v11 )
      {
        v12 = v13;
        v11 = 1;
      }
      ++v13;
    }
    while ( v13 <= v10 );
    ++v7;
    ++v4;
  }
  while ( (unsigned int)v7 < CON_DEST_COUNT );
}

/*
==============
Con_IsChannelOpen
==============
*/
bool Con_IsChannelOpen(int channel)
{
  return (unsigned int)channel <= 0xFF && pcGlob.openChannels[channel].name[0] != 0;
}

/*
==============
Con_IsChannelVisible
==============
*/
bool Con_IsChannelVisible(print_msg_dest_t dest, int channel, int flags)
{
  __int64 v3; 
  __int64 v7; 
  unsigned int *v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned int v11; 

  v3 = channel;
  if ( (unsigned int)channel > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\con_channels.cpp", 226, ASSERT_TYPE_ASSERT, "( ( channel >= 0 && channel < CON_MAX_CHANNELS ) )", "( channel ) = %i", channel) )
    __debugbreak();
  if ( pcGlob.openChannels[v3].name[0] )
  {
    if ( dest == CON_DEST_MINICON )
    {
      if ( (unsigned int)(v3 - 2) <= 2 )
        return 0;
      dest = CON_DEST_CONSOLE;
    }
    else if ( dest )
    {
      if ( dest == CON_DEST_FILE && !(_DWORD)v3 )
        return 1;
LABEL_15:
      v7 = dest;
      if ( (flags & 0x40000) == 0 )
        goto LABEL_30;
      v8 = pcGlob.verbose[dest];
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v9 = v8[v3 >> 5];
      if ( _bittest((const int *)&v9, v3 & 0x1F) )
      {
LABEL_30:
        v10 = 32 * v7;
        if ( (PrintChannelGlob *)((char *)&pcGlob + v10) == (PrintChannelGlob *)-8448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", v10 + (unsigned int)&pcGlob + 8460, (AssertType)(v10 + (unsigned int)&pcGlob + 8449), "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v11 = pcGlob.enabled[v10 / 0x20][v3 >> 5];
        if ( _bittest((const int *)&v11, v3 & 0x1F) || ((flags & 0xC0) == 0xC0 || (flags & 0xC0) == 0x80) && Com_BitCheckAssert(pcGlob.enabled[v10 / 0x20], 1, 0) )
          return 1;
      }
      return 0;
    }
    if ( !(_DWORD)v3 )
      return 1;
    goto LABEL_15;
  }
  return !pcGlob.channelsInited;
}

/*
==============
Con_OpenChannel
==============
*/
char Con_OpenChannel(const char *name, bool allowScript)
{
  char v3; 
  PrintChannelGlob *v4; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v16; 

  v3 = 0;
  v4 = &pcGlob;
  v6 = 0;
  while ( v4->openChannels[0].name[0] )
  {
    v7 = 32i64;
    v8 = 33i64 * v6;
    v9 = name;
    if ( !(PrintChannelGlob *)((char *)&pcGlob + v8) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    while ( 1 )
    {
      v10 = (unsigned __int8)v9[(_QWORD)&pcGlob + v8 - (_QWORD)name];
      v11 = v7;
      v12 = *(unsigned __int8 *)v9++;
      --v7;
      if ( !v11 )
      {
LABEL_17:
        v3 = 1;
        goto LABEL_22;
      }
      if ( v10 != v12 )
      {
        v13 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v13 = v10;
        v10 = v13;
        v14 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v14 = v12;
        if ( v10 != v14 )
          break;
      }
      if ( !v10 )
        goto LABEL_17;
    }
    ++v6;
    v4 = (PrintChannelGlob *)((char *)v4 + 33);
    if ( v6 >= 256 )
      return 0;
  }
LABEL_22:
  if ( !v3 )
  {
    v16 = v6;
    Core_strcpy_truncate_or_fill_zero((char *)&pcGlob + v16 * 33, 0x20ui64, name);
    pcGlob.openChannels[v16].allowScript = allowScript;
  }
  return 1;
}

/*
==============
Con_RestoreChannels
==============
*/
void Con_RestoreChannels(MemoryFile *memFile)
{
  unsigned int i; 
  __int64 v3; 
  unsigned __int64 v4; 
  __int64 v5; 
  PrintChannel *v6; 
  char *v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int p; 
  int v15; 
  char src[32]; 

  MemFile_ReadData(memFile, 4ui64, &p);
  for ( i = p; i; --i )
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    v3 = (int)p;
    if ( p > 0xFF )
      Sys_Error((const ObfuscateErrorText)&stru_143FEFB68);
    MemFile_ReadData(memFile, 4ui64, &v15);
    v4 = v15;
    if ( !v15 || v15 >= 31 )
      Sys_Error((const ObfuscateErrorText)&stru_143FEFB68);
    MemFile_ReadData(memFile, v4, src);
    if ( v4 >= 0x20 )
    {
      j___report_rangecheckfailure(v5);
      JUMPOUT(0x141A57AF7i64);
    }
    src[v4] = 0;
    v6 = &pcGlob.openChannels[v3];
    if ( v6->name[0] )
    {
      v7 = src;
      v8 = 0x7FFFFFFFi64;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v9 = (unsigned __int8)v7[(char *)v6 - src];
        v10 = v8;
        v11 = (unsigned __int8)*v7++;
        --v8;
        if ( !v10 )
          break;
        if ( v9 != v11 )
        {
          v12 = v9 + 32;
          if ( (unsigned int)(v9 - 65) > 0x19 )
            v12 = v9;
          v9 = v12;
          v13 = v11 + 32;
          if ( (unsigned int)(v11 - 65) > 0x19 )
            v13 = v11;
          if ( v9 != v13 )
          {
            Con_CloseChannelInternal(v3);
            goto LABEL_22;
          }
        }
      }
      while ( v9 );
    }
    else
    {
LABEL_22:
      Core_strcpy_truncate_or_fill_zero(pcGlob.openChannels[v3].name, 0x20ui64, src);
    }
  }
}

/*
==============
Con_SaveChannels
==============
*/
void Con_SaveChannels(MemoryFile *memFile)
{
  int v1; 
  PrintChannel *v2; 
  int v3; 
  int v5; 
  int v6; 
  int v7; 
  PrintChannelGlob *v8; 
  PrintChannelGlob *v9; 
  unsigned __int64 v10; 
  int p; 

  v1 = 0;
  v2 = &pcGlob.openChannels[1];
  v3 = 0;
  do
  {
    v5 = v3 + 1;
    if ( !v2[-1].name[0] )
      v5 = v3;
    v6 = v5 + 1;
    if ( !v2->name[0] )
      v6 = v5;
    v7 = v6 + 1;
    if ( !v2[1].name[0] )
      v7 = v6;
    v3 = v7 + 1;
    if ( !v2[2].name[0] )
      v3 = v7;
    v2 += 4;
  }
  while ( (__int64)v2 < (__int64)&pcGlob.enabled[1][0] + 1 );
  p = v3;
  MemFile_WriteData(memFile, 4ui64, &p);
  v8 = &pcGlob;
  v9 = &pcGlob;
  do
  {
    if ( v8->openChannels[0].name[0] )
    {
      v10 = -1i64;
      do
        ++v10;
      while ( v9->openChannels[0].name[v10] );
      p = v1;
      MemFile_WriteData(memFile, 4ui64, &p);
      if ( (v10 > 0x7FFFFFFFFFFFFFFFi64 || v10 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v10, "unsigned", v10) )
        __debugbreak();
      p = v10;
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, v10, v9);
    }
    ++v1;
    v9 = (PrintChannelGlob *)((char *)v9 + 33);
    v8 = (PrintChannelGlob *)((char *)v8 + 33);
  }
  while ( v1 < 256 );
}

/*
==============
Con_ScriptHasPermission
==============
*/
bool Con_ScriptHasPermission(int channel)
{
  __int64 v1; 

  if ( (unsigned int)channel <= 0xFF && (v1 = channel, pcGlob.openChannels[v1].name[0]) )
    return pcGlob.openChannels[v1].allowScript;
  else
    return 0;
}

/*
==============
Con_ShutdownChannels
==============
*/
void Con_ShutdownChannels(void)
{
  int i; 

  Cmd_RemoveCommand("con_channellist");
  Cmd_RemoveCommand("con_showchannel");
  Cmd_RemoveCommand("con_hidechannel");
  Cmd_RemoveCommand("con_visiblechannellist");
  for ( i = 0; i < 256; ++i )
    Con_CloseChannelInternal(i);
  pcGlob.channelsInited = 0;
}

/*
==============
Con_WriteFilterConfigString
==============
*/
void Con_WriteFilterConfigString(fileHandle_t f)
{
  int v2; 
  PrintChannelGlob *v3; 
  int v4; 
  __int64 v5; 

  FS_Printf(f, "con_hidechannel *; con_showchannel");
  v2 = 0;
  v3 = &pcGlob;
  v4 = 1;
  do
  {
    if ( (unsigned int)v2 > 0xFF )
    {
      LODWORD(v5) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\con_channels.cpp", 226, ASSERT_TYPE_ASSERT, "( ( channel >= 0 && channel < CON_MAX_CHANNELS ) )", "( channel ) = %i", v5) )
        __debugbreak();
    }
    if ( !v3->openChannels[0].name[0] )
    {
      if ( pcGlob.channelsInited )
        goto LABEL_11;
LABEL_10:
      FS_Printf(f, " %s", pcGlob.openChannels[v2].name);
      goto LABEL_11;
    }
    if ( !v2 || (v4 & pcGlob.enabled[0][(__int64)v2 >> 5]) != 0 )
      goto LABEL_10;
LABEL_11:
    ++v2;
    v4 = __ROL4__(v4, 1);
    v3 = (PrintChannelGlob *)((char *)v3 + 33);
  }
  while ( v2 < 256 );
  FS_Printf(f, "\n");
}

