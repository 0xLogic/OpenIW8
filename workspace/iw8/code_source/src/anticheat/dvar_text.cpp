/*
==============
dvarTextToHash_s::dvarTextToHash_s
==============
*/

void __fastcall dvarTextToHash_s::dvarTextToHash_s(dvarTextToHash_s *this)
{
  ??0dvarTextToHash_s@@QEAA@XZ(this);
}

/*
==============
Dvar_DevGetObfuscatedName
==============
*/

const char *__fastcall Dvar_DevGetObfuscatedName(const char *inputName)
{
  return ?Dvar_DevGetObfuscatedName@@YAPEBDPEBD@Z(inputName);
}

/*
==============
getDvarTextToHash
==============
*/

dvarTextToHash_s *__fastcall getDvarTextToHash()
{
  return ?getDvarTextToHash@@YAAEAUdvarTextToHash_s@@XZ();
}

/*
==============
dvarHashToText_s::dvarHashToText_s
==============
*/

void __fastcall dvarHashToText_s::dvarHashToText_s(dvarHashToText_s *this)
{
  ??0dvarHashToText_s@@QEAA@XZ(this);
}

/*
==============
Dvar_DevGetUnobfuscatedName
==============
*/

const char *__fastcall Dvar_DevGetUnobfuscatedName(const char *inputName)
{
  return ?Dvar_DevGetUnobfuscatedName@@YAPEBDPEBD@Z(inputName);
}

/*
==============
getDvarHashToText
==============
*/

dvarHashToText_s *__fastcall getDvarHashToText()
{
  return ?getDvarHashToText@@YAAEAUdvarHashToText_s@@XZ();
}

/*
==============
dvarHashToText_s::dvarHashToText_s
==============
*/
void dvarHashToText_s::dvarHashToText_s(void)
{
	//Failed decompiling
}

/*
==============
dvarTextToHash_s::dvarTextToHash_s
==============
*/
void dvarTextToHash_s::dvarTextToHash_s(void)
{
	//Failed decompiling
}

/*
==============
Dvar_DevGetObfuscatedName
==============
*/
const char *Dvar_DevGetObfuscatedName(const char *inputName)
{
  const char *DvarValue; 

  if ( dword_1489817E0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_1489817E0);
    if ( dword_1489817E0 == -1 )
    {
      dvarTextToHash_s::dvarTextToHash_s(&theOneAndOnlyInstance);
      j__Init_thread_footer(&dword_1489817E0);
    }
  }
  DvarValue = findDvarValue(&theOneAndOnlyInstance.dvarTextToHash, inputName);
  if ( DvarValue )
    return DvarValue;
  return inputName;
}

/*
==============
Dvar_DevGetUnobfuscatedName
==============
*/
const char *Dvar_DevGetUnobfuscatedName(const char *inputName)
{
  const char *DvarValue; 

  if ( dword_1489B05F0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_1489B05F0);
    if ( dword_1489B05F0 == -1 )
    {
      dvarHashToText_s::dvarHashToText_s(&theOneAndOnlyInstance_0);
      j__Init_thread_footer(&dword_1489B05F0);
    }
  }
  DvarValue = findDvarValue(&theOneAndOnlyInstance_0.dvarHashToText, inputName);
  if ( DvarValue )
    return DvarValue;
  return inputName;
}

/*
==============
addDvarEntry
==============
*/
bool addDvarEntry(DvarMap *map, const char *key, const char *value)
{
  unsigned __int64 v3; 
  unsigned int v5; 
  char v6; 
  const char *v7; 
  char v8; 
  bool result; 

  v3 = 0i64;
  v5 = 0;
  if ( key )
  {
    v6 = *key;
    if ( *key )
    {
      v7 = key;
      do
      {
        ++v7;
        v8 = v6 | 0x20;
        if ( (unsigned int)(v6 - 65) >= 0x1A )
          v8 = v6;
        v5 = 31 * v5 + v8;
        v6 = *v7;
      }
      while ( *v7 );
    }
  }
  do
  {
    if ( !map->m_pairs[(v3 + v5) % 0x2710].m_key )
    {
      map->m_pairs[(v3 + v5) % 0x2710].m_key = key;
      result = 1;
      map->m_pairs[(v3 + v5) % 0x2710].m_value = value;
      return result;
    }
    ++v3;
  }
  while ( v3 < 0x2710 );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\dvar_text.cpp", 7220, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  return 0;
}

/*
==============
findDvarValue
==============
*/
const char *findDvarValue(DvarMap *map, const char *key)
{
  unsigned int v2; 
  char v5; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  unsigned __int64 i; 
  const char *m_key; 
  __int64 v11; 
  const char *v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 

  v2 = 0;
  if ( key )
  {
    v5 = *key;
    if ( *key )
    {
      v6 = key;
      do
      {
        ++v6;
        v7 = v5 | 0x20;
        if ( (unsigned int)(v5 - 65) >= 0x1A )
          v7 = v5;
        v2 = 31 * v2 + v7;
        v5 = *v6;
      }
      while ( *v6 );
    }
  }
  v8 = v2;
  for ( i = 0i64; i < 0x2710; ++i )
  {
    m_key = map->m_pairs[(i + v8) % 0x2710].m_key;
    if ( !m_key )
      break;
    v11 = 0x7FFFFFFFi64;
    if ( !key && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v12 = (const char *)(key - m_key);
    while ( 1 )
    {
      v13 = (unsigned __int8)m_key[(_QWORD)v12];
      v14 = v11;
      v15 = *(unsigned __int8 *)m_key++;
      --v11;
      if ( !v14 )
        return map->m_pairs[(i + v8) % 0x2710].m_value;
      if ( v13 != v15 )
      {
        v16 = v13 + 32;
        if ( (unsigned int)(v13 - 65) > 0x19 )
          v16 = v13;
        v13 = v16;
        v17 = v15 + 32;
        if ( (unsigned int)(v15 - 65) > 0x19 )
          v17 = v15;
        if ( v13 != v17 )
          break;
      }
      if ( !v13 )
        return map->m_pairs[(i + v8) % 0x2710].m_value;
    }
  }
  return 0i64;
}

/*
==============
getDvarHashToText
==============
*/
dvarHashToText_s *getDvarHashToText()
{
  if ( dword_1489B05F0 <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    return &theOneAndOnlyInstance_0;
  j__Init_thread_header(&dword_1489B05F0);
  if ( dword_1489B05F0 != -1 )
    return &theOneAndOnlyInstance_0;
  dvarHashToText_s::dvarHashToText_s(&theOneAndOnlyInstance_0);
  j__Init_thread_footer(&dword_1489B05F0);
  return &theOneAndOnlyInstance_0;
}

/*
==============
getDvarTextToHash
==============
*/
dvarTextToHash_s *getDvarTextToHash()
{
  if ( dword_1489817E0 <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    return &theOneAndOnlyInstance;
  j__Init_thread_header(&dword_1489817E0);
  if ( dword_1489817E0 != -1 )
    return &theOneAndOnlyInstance;
  dvarTextToHash_s::dvarTextToHash_s(&theOneAndOnlyInstance);
  j__Init_thread_footer(&dword_1489817E0);
  return &theOneAndOnlyInstance;
}

