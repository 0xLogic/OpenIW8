/*
==============
GConfigStrings::GetModelIndex
==============
*/

unsigned int __fastcall GConfigStrings::GetModelIndex(GConfigStrings *this, const char *name)
{
  return ?GetModelIndex@GConfigStrings@@QEAAIPEBD@Z(this, name);
}

/*
==============
GConfigStrings::GetCompositeModelIndex
==============
*/

unsigned int __fastcall GConfigStrings::GetCompositeModelIndex(GConfigStrings *this, const char *name)
{
  return ?GetCompositeModelIndex@GConfigStrings@@QEAAIPEBD@Z(this, name);
}

/*
==============
G_CString_DumpConfigStrings
==============
*/

void __fastcall G_CString_DumpConfigStrings(const unsigned int start, const unsigned int max)
{
  ?G_CString_DumpConfigStrings@@YAXII@Z(start, max);
}

/*
==============
G_CString_FindConfigstringIndex
==============
*/

unsigned int __fastcall G_CString_FindConfigstringIndex(const char *name, const unsigned int start, const unsigned int max, const int create, const char *errormsg)
{
  return ?G_CString_FindConfigstringIndex@@YAIPEBDIIH0@Z(name, start, max, create, errormsg);
}

/*
==============
G_CString_DumpConfigStrings
==============
*/
void G_CString_DumpConfigStrings(const unsigned int start, const unsigned int max)
{
  unsigned int v4; 
  unsigned int v5; 
  scr_string_t ConfigstringConst; 
  const char *v7; 
  __int64 v8; 

  if ( !s_dumpedStrings )
  {
    s_dumpedStrings = 1;
    if ( max > 1 )
    {
      v4 = start + 1;
      v5 = -start;
      do
      {
        if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
          __debugbreak();
        if ( start >= BgDynamicLimits::ms_data.m_maxConfigStrings )
        {
          LODWORD(v8) = start;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v8) )
            __debugbreak();
        }
        if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
          __debugbreak();
        if ( v4 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
        {
          LODWORD(v8) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v8) )
            __debugbreak();
        }
        ConfigstringConst = SV_GetConfigstringConst(v4);
        v7 = SL_ConvertToString(ConfigstringConst);
        Com_Printf(24, "G_FindConfigstringIndex: overflow (%d) [%d] %s\n", start, v5 + v4++, v7);
      }
      while ( v5 + v4 < max );
    }
  }
}

/*
==============
G_CString_FindConfigstringIndex
==============
*/
__int64 G_CString_FindConfigstringIndex(const char *name, const unsigned int start, const unsigned int max, const int create, const char *errormsg)
{
  const char *v5; 
  char *Value; 
  unsigned int *v10; 
  unsigned int v11; 
  _QWORD *v12; 
  char *v13; 
  int *v14; 
  unsigned __int64 v15; 
  ThreadContext CurrentThreadContext; 
  scr_string_t String; 
  unsigned int v18; 
  scr_string_t v19; 
  unsigned int v20; 
  scr_string_t ConfigstringConst; 
  scrContext_t *v22; 
  const char *v23; 
  unsigned int v24; 
  scr_string_t v25; 
  const char *v26; 
  unsigned int v27; 
  char *fmt; 
  __int64 v30; 
  __int64 v31; 
  int v32; 

  v5 = name;
  Value = (char *)Sys_GetValue(0);
  v10 = (unsigned int *)(Value + 14256);
  if ( (unsigned int)(*((_DWORD *)Value + 3564) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 3564) + 1, 3) )
    __debugbreak();
  v11 = *v10 + 1;
  *v10 = v11;
  if ( v11 >= 3 )
  {
    LODWORD(v31) = 3;
    LODWORD(v30) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v30, v31) )
      __debugbreak();
  }
  v12 = Value + 2088;
  v13 = Value + 40;
  if ( *v12 < (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v12 += 8i64;
  if ( *v12 >= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v12 = v10;
  if ( *v12 <= (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v14 = (int *)&v10[*v10 + 2];
  v15 = __rdtsc();
  *v14 = v15;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 304, NULL, 0);
  if ( !v5 || !*v5 )
  {
    Profile_EndInternal(NULL);
    return 0i64;
  }
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 119, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( start >= BgDynamicLimits::ms_data.m_caseSensitiveConfigStrings )
    String = SL_FindString(v5);
  else
    String = SL_FindLowercaseString(v5);
  v18 = 1;
  v19 = String;
  v32 = 1;
  if ( max > 1 )
  {
    v20 = start + 1;
    do
    {
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( start >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v31) = start;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v31) )
          __debugbreak();
      }
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( v20 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v31) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v31) )
          __debugbreak();
      }
      ConfigstringConst = SV_GetConfigstringConst(v20);
      if ( ConfigstringConst == scr_const._ )
        break;
      if ( ConfigstringConst == v19 )
        goto LABEL_69;
      ++v18;
      ++v20;
      v32 = v18;
    }
    while ( v18 < max );
  }
  if ( !create )
  {
    Profile_EndInternal(NULL);
    if ( errormsg )
    {
      if ( NetConstStrings_IsPrecacheAllowed() )
      {
        v22 = ScriptContext_Server();
        v23 = j_va("%s \"%s\" not precached", errormsg, v5);
        Scr_Error(COM_ERR_1771, v22, v23);
      }
      else
      {
        Com_PrintError(15, "'%s' (%s) is not a valid asset name (net const strings are enforced)\n", v5, errormsg);
      }
    }
    return 0i64;
  }
  if ( v18 == max )
  {
    if ( !s_dumpedStrings )
    {
      s_dumpedStrings = 1;
      if ( max > 1 )
      {
        v24 = start + 1;
        do
        {
          if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
            __debugbreak();
          if ( start >= BgDynamicLimits::ms_data.m_maxConfigStrings )
          {
            LODWORD(v31) = start;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v31) )
              __debugbreak();
          }
          if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
            __debugbreak();
          if ( v24 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
          {
            LODWORD(v31) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v31) )
              __debugbreak();
          }
          v25 = SV_GetConfigstringConst(v24);
          v26 = SL_ConvertToString(v25);
          Com_Printf(24, "G_FindConfigstringIndex: overflow (%d) [%d] %s\n", start, v24 - start, v26);
          ++v24;
        }
        while ( v24 - start < max );
        v18 = v32;
        v5 = name;
      }
    }
    LODWORD(fmt) = max;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EFB670, 68i64, errormsg, fmt, v5);
  }
  v27 = BG_ConfigStrings_ConfigStringOffset(start, v18);
  SV_SetConfigstring(v27, v5);
LABEL_69:
  Profile_EndInternal(NULL);
  return v18;
}

/*
==============
GConfigStrings::GetCompositeModelIndex
==============
*/
__int64 GConfigStrings::GetCompositeModelIndex(GConfigStrings *this, const char *name)
{
  __int64 result; 
  unsigned int v5; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.cpp", 112, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  result = ((__int64 (__fastcall *)(GConfigStrings *, const char *))this->GetModelIndexNoCache)(this, name);
  v5 = result;
  if ( (_DWORD)result )
  {
    if ( !G_Utils_HasCachedCompositeModel(result) )
    {
      if ( !level.initializing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.cpp", 118, ASSERT_TYPE_ASSERT, "(level.initializing)", "%s\n\tModel '%s' is missing. It hasn't been cached.", "level.initializing", name) )
        __debugbreak();
      G_Utils_SetCachedCompositeModel(name, v5);
    }
    return v5;
  }
  return result;
}

/*
==============
GConfigStrings::GetModelIndex
==============
*/
__int64 GConfigStrings::GetModelIndex(GConfigStrings *this, const char *name)
{
  __int64 result; 
  unsigned int v5; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.cpp", 96, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  result = ((__int64 (__fastcall *)(GConfigStrings *, const char *))this->GetModelIndexNoCache)(this, name);
  v5 = result;
  if ( (_DWORD)result )
  {
    if ( !G_Utils_HasCachedModel(result) )
    {
      if ( !level.initializing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.cpp", 102, ASSERT_TYPE_ASSERT, "(level.initializing)", "%s\n\tModel '%s' is missing. It hasn't been cached.", "level.initializing", name) )
        __debugbreak();
      G_Utils_SetCachedModel(name, v5);
    }
    return v5;
  }
  return result;
}

