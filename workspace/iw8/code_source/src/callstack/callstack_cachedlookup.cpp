/*
==============
Callstack_CachedLookup_PrintCurrentCallstack
==============
*/

void Callstack_CachedLookup_PrintCurrentCallstack(void)
{
  ?Callstack_CachedLookup_PrintCurrentCallstack@@YAXXZ();
}

/*
==============
Callstack_CachedLookup_GetFunctionName
==============
*/

const char *__fastcall Callstack_CachedLookup_GetFunctionName(const unsigned __int64 address)
{
  return ?Callstack_CachedLookup_GetFunctionName@@YAPEBD_K@Z(address);
}

/*
==============
Callstack_CachedLookup_Pop
==============
*/

void Callstack_CachedLookup_Pop(void)
{
  ?Callstack_CachedLookup_Pop@@YAXXZ();
}

/*
==============
Callstack_CachedLookup_Push
==============
*/

void Callstack_CachedLookup_Push(void)
{
  ?Callstack_CachedLookup_Push@@YAXXZ();
}

/*
==============
Callstack_CachedLookup_GetFunctionName
==============
*/
const char *Callstack_CachedLookup_GetFunctionName(const unsigned __int64 address)
{
  CachedLookup *lookup; 
  unsigned int m_numEntries; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v8; 
  __int64 v9; 

  lookup = s_cachedLookupGlob.lookup;
  if ( !s_cachedLookupGlob.lookup )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 248, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.lookup)", (const char *)&queryFormat, "s_cachedLookupGlob.lookup") )
      __debugbreak();
    lookup = s_cachedLookupGlob.lookup;
  }
  m_numEntries = lookup->m_numEntries;
  if ( !m_numEntries )
    return "<callstack entry not found>";
  v4 = m_numEntries - 1;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5 + ((v4 - v5) >> 1);
    if ( v6 >= lookup->m_numEntries )
    {
      LODWORD(v9) = lookup->m_numEntries;
      LODWORD(v8) = v5 + ((v4 - v5) >> 1);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( halfIndex ) < (unsigned)( m_numEntries )", "halfIndex doesn't index m_numEntries\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( address < lookup->m_entries[v6].address )
    {
      if ( !v6 )
        return "<callstack entry not found>";
      v4 = v6 - 1;
      goto LABEL_15;
    }
    if ( v6 >= lookup->m_numEntries - 1 )
      break;
    v5 = v6 + 1;
    if ( address < lookup->m_entries[v6 + 1].address )
      break;
LABEL_15:
    if ( v4 < v5 )
      return "<callstack entry not found>";
  }
  return lookup->m_entries[v6].p_function;
}

/*
==============
Callstack_CachedLookup_Pop
==============
*/

void __fastcall Callstack_CachedLookup_Pop(double _XMM0_8)
{
  StreamerMemLoan result; 

  if ( s_cachedLookupGlob.pushDepth <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 228, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.pushDepth > 0)", (const char *)&queryFormat, "s_cachedLookupGlob.pushDepth > 0") )
    __debugbreak();
  if ( --s_cachedLookupGlob.pushDepth )
  {
    if ( !s_cachedLookupGlob.lookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 239, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.lookup != nullptr)", (const char *)&queryFormat, "s_cachedLookupGlob.lookup != nullptr") )
      __debugbreak();
    if ( !s_cachedLookupGlob.stringBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 240, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.stringBuffer != nullptr)", (const char *)&queryFormat, "s_cachedLookupGlob.stringBuffer != nullptr") )
      __debugbreak();
  }
  else
  {
    PMem_Free(&result, "Callstack_CachedLookup", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&s_cachedLookupGlob.lookup = _XMM0;
  }
}

/*
==============
Callstack_CachedLookup_PrintCurrentCallstack
==============
*/
void Callstack_CachedLookup_PrintCurrentCallstack(void)
{
  unsigned int v0; 
  __int64 v1; 
  __int64 v2; 
  unsigned __int64 *v3; 
  CachedLookup *lookup; 
  unsigned __int64 v5; 
  unsigned int m_numEntries; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  const char *p_function; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int64 dest[32]; 

  if ( !s_cachedLookupGlob.lookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 257, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.lookup)", (const char *)&queryFormat, "s_cachedLookupGlob.lookup") )
    __debugbreak();
  v0 = Callstack_StackTrace(dest, 0x20u, 2u);
  v1 = v0;
  if ( v0 > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 265, ASSERT_TYPE_ASSERT, "(depth <= MAX_DEPTH)", (const char *)&queryFormat, "depth <= MAX_DEPTH") )
    __debugbreak();
  if ( !(_DWORD)v1 )
    return;
  v2 = v1;
  v3 = dest;
  do
  {
    lookup = s_cachedLookupGlob.lookup;
    v5 = *v3;
    if ( !s_cachedLookupGlob.lookup )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 248, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.lookup)", (const char *)&queryFormat, "s_cachedLookupGlob.lookup") )
        __debugbreak();
      lookup = s_cachedLookupGlob.lookup;
    }
    m_numEntries = lookup->m_numEntries;
    if ( !m_numEntries )
    {
LABEL_24:
      p_function = "<callstack entry not found>";
      goto LABEL_25;
    }
    v7 = m_numEntries - 1;
    v8 = 0;
    while ( 1 )
    {
      v9 = v8 + ((v7 - v8) >> 1);
      if ( v9 >= lookup->m_numEntries )
      {
        LODWORD(v12) = lookup->m_numEntries;
        LODWORD(v11) = v8 + ((v7 - v8) >> 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( halfIndex ) < (unsigned)( m_numEntries )", "halfIndex doesn't index m_numEntries\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( v5 < lookup->m_entries[v9].address )
      {
        if ( !v9 )
          goto LABEL_24;
        v7 = v9 - 1;
        goto LABEL_23;
      }
      if ( v9 >= lookup->m_numEntries - 1 )
        break;
      v8 = v9 + 1;
      if ( v5 < lookup->m_entries[v9 + 1].address )
        break;
LABEL_23:
      if ( v7 < v8 )
        goto LABEL_24;
    }
    p_function = lookup->m_entries[v9].p_function;
LABEL_25:
    Com_Printf(0, "0x%016zx: %s\n", *v3++, p_function);
    --v2;
  }
  while ( v2 );
}

/*
==============
Callstack_CachedLookup_Push
==============
*/
void Callstack_CachedLookup_Push(void)
{
  ntl::random_access_iterator_tag v0; 

  if ( s_cachedLookupGlob.pushDepth )
  {
    if ( !s_cachedLookupGlob.lookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 217, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.lookup != nullptr)", (const char *)&queryFormat, "s_cachedLookupGlob.lookup != nullptr") )
      __debugbreak();
    if ( !s_cachedLookupGlob.stringBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 218, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.stringBuffer != nullptr)", (const char *)&queryFormat, "s_cachedLookupGlob.stringBuffer != nullptr") )
      __debugbreak();
    ++s_cachedLookupGlob.pushDepth;
  }
  else
  {
    if ( s_cachedLookupGlob.lookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 200, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.lookup == nullptr)", (const char *)&queryFormat, "s_cachedLookupGlob.lookup == nullptr") )
      __debugbreak();
    if ( s_cachedLookupGlob.stringBuffer )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 201, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.stringBuffer == nullptr)", (const char *)&queryFormat, "s_cachedLookupGlob.stringBuffer == nullptr") )
        __debugbreak();
    }
    PMem_BeginAlloc("Callstack_CachedLookup", PMEM_STACK_GAME);
    s_cachedLookupGlob.lookup = (CachedLookup *)PMem_Alloc(0x480008ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "CachedLookup");
    s_cachedLookupGlob.stringBuffer = (StringBuffer<10485760> *)PMem_Alloc(0xA00004ui64, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "StringBuffer");
    PMem_EndAlloc("Callstack_CachedLookup", PMEM_STACK_GAME);
    memset_0(s_cachedLookupGlob.lookup, 0, sizeof(CachedLookup));
    memset_0(s_cachedLookupGlob.stringBuffer, 0, sizeof(StringBuffer<10485760>));
    Callstack_ForEachSymbol((void (__fastcall *)(unsigned __int64, const char *))Callstack_CachedLookup_SymbolCallback);
    ntl::sort<CachedLookup::Entry *,CachedLookup::SortFunc>(s_cachedLookupGlob.lookup->m_entries, &s_cachedLookupGlob.lookup->m_entries[s_cachedLookupGlob.lookup->m_numEntries], (CachedLookup::SortFunc)v0.ntl::input_iterator_tag, v0);
    ++s_cachedLookupGlob.pushDepth;
  }
}

/*
==============
Callstack_CachedLookup_SymbolCallback
==============
*/
void Callstack_CachedLookup_SymbolCallback(const unsigned __int64 address, const char *p_funcName)
{
  StringBuffer<10485760> *stringBuffer; 
  __int64 v5; 
  __int64 m_bufferInsertOffset; 
  const char *v7; 
  CachedLookup *lookup; 
  __int64 m_numEntries; 

  if ( !s_cachedLookupGlob.lookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 188, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.lookup)", (const char *)&queryFormat, "s_cachedLookupGlob.lookup") )
    __debugbreak();
  stringBuffer = s_cachedLookupGlob.stringBuffer;
  if ( !s_cachedLookupGlob.stringBuffer )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_cachedlookup.cpp", 189, ASSERT_TYPE_ASSERT, "(s_cachedLookupGlob.stringBuffer)", (const char *)&queryFormat, "s_cachedLookupGlob.stringBuffer") )
      __debugbreak();
    stringBuffer = s_cachedLookupGlob.stringBuffer;
  }
  v5 = -1i64;
  do
    ++v5;
  while ( p_funcName[v5] );
  m_bufferInsertOffset = stringBuffer->m_bufferInsertOffset;
  if ( 10485759 - (int)m_bufferInsertOffset <= (int)v5 )
  {
    Sys_Error((const ObfuscateErrorText)&stru_143CEA150, 10485760i64);
    v7 = NULL;
  }
  else
  {
    v7 = &stringBuffer->m_buffer[m_bufferInsertOffset];
    Core_strcpy(&stringBuffer->m_buffer[m_bufferInsertOffset], 10485759 - (int)m_bufferInsertOffset, p_funcName);
    stringBuffer->m_bufferInsertOffset += v5 + 1;
  }
  lookup = s_cachedLookupGlob.lookup;
  m_numEntries = s_cachedLookupGlob.lookup->m_numEntries;
  if ( (unsigned int)m_numEntries >= 0x48000 )
  {
    Sys_Error((const ObfuscateErrorText)&stru_143CE9E10, 294912i64);
  }
  else
  {
    s_cachedLookupGlob.lookup->m_entries[m_numEntries].address = address;
    lookup->m_entries[lookup->m_numEntries++].p_function = v7;
  }
}

