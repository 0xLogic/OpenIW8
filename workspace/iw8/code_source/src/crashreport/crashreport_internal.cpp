/*
==============
CrashReport_Internal_Init
==============
*/

void CrashReport_Internal_Init(void)
{
  ?CrashReport_Internal_Init@@YAXXZ();
}

/*
==============
CrashReport_AddKVP
==============
*/

void __fastcall CrashReport_AddKVP(const char *key, unsigned __int64 value)
{
  ?CrashReport_AddKVP@@YAXPEBD_K@Z(key, value);
}

/*
==============
CrashReport_Internal_ReleaseReadLock
==============
*/

void CrashReport_Internal_ReleaseReadLock(void)
{
  ?CrashReport_Internal_ReleaseReadLock@@YAXXZ();
}

/*
==============
CrashReport_Internal_BeginHandler
==============
*/

void CrashReport_Internal_BeginHandler(void)
{
  ?CrashReport_Internal_BeginHandler@@YAXXZ();
}

/*
==============
CrashReport_AddKVP
==============
*/

void __fastcall CrashReport_AddKVP(const char *key, const char *value)
{
  ?CrashReport_AddKVP@@YAXPEBD0@Z(key, value);
}

/*
==============
CrashReport_AddKVP
==============
*/

void __fastcall CrashReport_AddKVP(const char *key, __int64 value)
{
  ?CrashReport_AddKVP@@YAXPEBD_J@Z(key, value);
}

/*
==============
CrashReport_Internal_EndHandler
==============
*/

void CrashReport_Internal_EndHandler(void)
{
  ?CrashReport_Internal_EndHandler@@YAXXZ();
}

/*
==============
CrashReport_AddMemRegion
==============
*/

void __fastcall CrashReport_AddMemRegion(const char *name, const void *data, unsigned __int64 dataLen)
{
  ?CrashReport_AddMemRegion@@YAXPEBDPEBX_K@Z(name, data, dataLen);
}

/*
==============
CrashReport_Internal_AddCommonKVPs
==============
*/

void CrashReport_Internal_AddCommonKVPs(void)
{
  ?CrashReport_Internal_AddCommonKVPs@@YAXXZ();
}

/*
==============
CrashReport_Internal_GetMemRegions
==============
*/

const ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *__fastcall CrashReport_Internal_GetMemRegions()
{
  return ?CrashReport_Internal_GetMemRegions@@YAAEBV?$fixed_vector_map@PEBDUCrashReport_MemRegion@@$0BA@UCrashReport_KeyCompare@@@ntl@@XZ();
}

/*
==============
CrashReport_Internal_AcquireReadLock
==============
*/

void CrashReport_Internal_AcquireReadLock(void)
{
  ?CrashReport_Internal_AcquireReadLock@@YAXXZ();
}

/*
==============
CrashReport_Internal_GetKVPList
==============
*/

const ntl::fixed_vector_map<char const *,char const *,64,CrashReport_KeyCompare> *__fastcall CrashReport_Internal_GetKVPList()
{
  return ?CrashReport_Internal_GetKVPList@@YAAEBV?$fixed_vector_map@PEBDPEBD$0EA@UCrashReport_KeyCompare@@@ntl@@XZ();
}

/*
==============
CrashReport_AddKVP
==============
*/
void CrashReport_AddKVP(const char *key, const char *value)
{
  const char *v2; 
  unsigned __int64 m_size; 
  signed __int64 v5; 
  ntl::fixed_vector_map<char const *,char const *,64,CrashReport_KeyCompare> *p_kvps; 
  const char *v7; 
  bool v8; 
  char *StringCopy; 
  const char *v10; 
  const char *v11; 
  CrashReportGlob *v12; 
  signed __int64 v13; 
  const char *v14; 
  CrashReportGlob *v15; 
  char *v16; 
  bool v17; 
  __int128 v18; 
  char *v19; 
  __int64 v20; 
  const char *v21; 
  char v22; 
  char v23; 
  __int128 v25; 

  v2 = value;
  if ( !key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 601, ASSERT_TYPE_ASSERT, "(key)", (const char *)&queryFormat, "key") )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 602, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  if ( Sys_HasValidCurrentThreadContext() )
  {
    Sys_CheckAcquireLock(&s_crashReportGlob.lock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_crashReportGlob.lock);
    s_crashReportGlob.lock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_crashReportGlob.lock.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", 0, 0i64) )
      __debugbreak();
  }
  m_size = s_crashReportGlob.kvps.m_size;
  v5 = (signed __int64)(16 * s_crashReportGlob.kvps.m_size) >> 4;
  p_kvps = &s_crashReportGlob.kvps;
  if ( v5 > 0 )
  {
    do
    {
      v7 = *(const char **)&p_kvps->m_data.m_buffer[16 * (v5 >> 1)];
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.h", 23, ASSERT_TYPE_ASSERT, "(first)", (const char *)&queryFormat, "first") )
        __debugbreak();
      if ( !key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.h", 24, ASSERT_TYPE_ASSERT, "(second)", (const char *)&queryFormat, "second") )
        __debugbreak();
      if ( I_stricmp(v7, key) >= 0 )
      {
        v5 >>= 1;
      }
      else
      {
        p_kvps = (ntl::fixed_vector_map<char const *,char const *,64,CrashReport_KeyCompare> *)((char *)p_kvps + 16 * (v5 >> 1) + 16);
        v5 += -1 - (v5 >> 1);
      }
    }
    while ( v5 > 0 );
    m_size = s_crashReportGlob.kvps.m_size;
    v2 = value;
  }
  if ( p_kvps != (ntl::fixed_vector_map<char const *,char const *,64,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.kvps + 16 * m_size) )
  {
    v8 = CrashReport_KeyCompare::operator()(&s_crashReportGlob.kvps.m_keyCompare, key, *(const char *const *)p_kvps->m_data.m_buffer);
    m_size = s_crashReportGlob.kvps.m_size;
    if ( v8 )
      p_kvps = (ntl::fixed_vector_map<char const *,char const *,64,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.kvps + 16 * s_crashReportGlob.kvps.m_size);
  }
  if ( p_kvps == (ntl::fixed_vector_map<char const *,char const *,64,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.kvps + 16 * m_size) )
  {
    if ( m_size == 64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 616, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CrashReport KVP entry limit hit (%zu)", 0x40ui64) )
        __debugbreak();
    }
    else
    {
      StringCopy = (char *)CrashReport_Internal_AllocateStringCopy(key, 0x80u, 0);
      v10 = StringCopy;
      if ( StringCopy != "_invalidstring_" )
      {
        *(_QWORD *)&v25 = StringCopy;
        v11 = CrashReport_Internal_AllocateStringCopy(v2, 0x100u, 1);
        v12 = (CrashReportGlob *)&s_crashReportGlob.kvps;
        v13 = (signed __int64)(16 * s_crashReportGlob.kvps.m_size) >> 4;
        *((_QWORD *)&v25 + 1) = v11;
        while ( v13 > 0 )
        {
          v14 = *(const char **)&v12->heap.m_data.m_buffer[16 * (v13 >> 1)];
          if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.h", 23, ASSERT_TYPE_ASSERT, "(first)", (const char *)&queryFormat, "first") )
            __debugbreak();
          if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.h", 24, ASSERT_TYPE_ASSERT, "(second)", (const char *)&queryFormat, "second") )
            __debugbreak();
          if ( I_stricmp(v14, v10) >= 0 )
          {
            v13 >>= 1;
          }
          else
          {
            v12 = (CrashReportGlob *)((char *)v12 + 16 * (v13 >> 1) + 16);
            v13 += -1 - (v13 >> 1);
          }
        }
        if ( v12 == (CrashReportGlob *)((char *)&s_crashReportGlob.kvps + 16 * s_crashReportGlob.kvps.m_size) || CrashReport_KeyCompare::operator()(&s_crashReportGlob.kvps.m_keyCompare, v10, *(const char *const *)v12->heap.m_data.m_buffer) )
        {
          if ( s_crashReportGlob.kvps.m_size == 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
            __debugbreak();
          if ( (v12 < (CrashReportGlob *)&s_crashReportGlob.kvps || v12 > (CrashReportGlob *)((char *)&s_crashReportGlob.kvps + 16 * s_crashReportGlob.kvps.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
            __debugbreak();
          if ( (((_BYTE)v12 - (unsigned __int8)&s_crashReportGlob.kvps) & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
            __debugbreak();
          if ( &v25 >= (__int128 *)v12 && &v25 < (__int128 *)&s_crashReportGlob.kvps.m_data.m_buffer[16 * s_crashReportGlob.kvps.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
            __debugbreak();
          v15 = (CrashReportGlob *)((char *)&s_crashReportGlob.kvps + 16 * s_crashReportGlob.kvps.m_size);
          if ( v12 != v15 )
          {
            v16 = &s_crashReportGlob.kvps.m_data.m_buffer[16 * s_crashReportGlob.kvps.m_size + 16];
            if ( v12 == (CrashReportGlob *)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( v15 == (CrashReportGlob *)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v17 = v15 <= v12;
            if ( v15 < v12 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v17 = v15 <= v12;
            }
            if ( !v17 )
            {
              do
              {
                v18 = *(_OWORD *)&v15[-1].lock.initialized;
                v15 = (CrashReportGlob *)((char *)v15 - 16);
                v16 -= 16;
                *(_OWORD *)v16 = v18;
              }
              while ( v15 > v12 );
            }
          }
          ++s_crashReportGlob.kvps.m_size;
          *(_OWORD *)v12->heap.m_data.m_buffer = v25;
        }
      }
    }
  }
  else
  {
    v19 = *(char **)&p_kvps->m_data.m_buffer[8];
    if ( v19 == "_invalidstring_" )
    {
LABEL_84:
      *(_QWORD *)&p_kvps->m_data.m_buffer[8] = CrashReport_Internal_AllocateStringCopy(v2, 0x100u, 1);
    }
    else
    {
      v20 = 0x7FFFFFFFi64;
      v21 = v2;
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v22 = *v19++;
        v23 = *v21++;
        if ( !v20-- )
          break;
        if ( v22 != v23 )
        {
          ntl::nxheap::free((ntl::nxheap *)&s_crashReportGlob, *(void **)&p_kvps->m_data.m_buffer[8]);
          *(_QWORD *)&p_kvps->m_data.m_buffer[8] = "_invalidstring_";
          goto LABEL_84;
        }
      }
      while ( v22 );
    }
  }
  if ( Sys_HasValidCurrentThreadContext() )
  {
    s_crashReportGlob.lock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_crashReportGlob.lock);
    Sys_CheckReleaseLock(&s_crashReportGlob.lock);
  }
}

/*
==============
CrashReport_AddKVP
==============
*/
void CrashReport_AddKVP(const char *key, __int64 value)
{
  char dest[64]; 

  Com_sprintf(dest, 0x40ui64, "%lli", value);
  CrashReport_AddKVP(key, dest);
}

/*
==============
CrashReport_AddKVP
==============
*/
void CrashReport_AddKVP(const char *key, unsigned __int64 value)
{
  char dest[64]; 

  Com_sprintf(dest, 0x40ui64, "%zu", value);
  CrashReport_AddKVP(key, dest);
}

/*
==============
CrashReport_AddMemRegion
==============
*/
void CrashReport_AddMemRegion(const char *name, const void *data, unsigned __int64 dataLen)
{
  unsigned __int64 m_size; 
  ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *p_memRegions; 
  signed __int64 v8; 
  const char *v9; 
  bool v10; 
  const char *StringCopy; 
  ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *v12; 
  signed __int64 v13; 
  const char *v14; 
  signed __int64 v15; 
  __int64 v16; 
  const char *v17; 
  ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *v18; 
  char *v19; 
  bool v20; 
  __int128 v21; 
  double v22; 
  __int128 v23; 
  _BYTE v24[24]; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 666, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !data )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 670, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Nullptr memory region used, name='%s'", name) )
      return;
LABEL_12:
    __debugbreak();
    return;
  }
  if ( !dataLen )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 676, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Empty memory region given, name='%s'", name) )
      return;
    goto LABEL_12;
  }
  if ( dataLen > 0x100000 )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 682, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Excessively sized memory region given (%zu), name='%s'", dataLen, name) )
      return;
    goto LABEL_12;
  }
  *(_QWORD *)&v23 = data;
  *((_QWORD *)&v23 + 1) = dataLen;
  if ( Sys_HasValidCurrentThreadContext() )
  {
    Sys_CheckAcquireLock(&s_crashReportGlob.lock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_crashReportGlob.lock);
    s_crashReportGlob.lock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_crashReportGlob.lock.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", 0, 0i64) )
      __debugbreak();
  }
  m_size = s_crashReportGlob.memRegions.m_size;
  p_memRegions = &s_crashReportGlob.memRegions;
  v8 = (signed __int64)(24 * s_crashReportGlob.memRegions.m_size) / 24;
  if ( v8 > 0 )
  {
    do
    {
      v9 = *(const char **)&p_memRegions->m_data.m_buffer[24 * (v8 >> 1)];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.h", 23, ASSERT_TYPE_ASSERT, "(first)", (const char *)&queryFormat, "first") )
        __debugbreak();
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.h", 24, ASSERT_TYPE_ASSERT, "(second)", (const char *)&queryFormat, "second") )
        __debugbreak();
      if ( I_stricmp(v9, name) >= 0 )
      {
        v8 >>= 1;
      }
      else
      {
        p_memRegions = (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)p_memRegions + 24 * (v8 >> 1) + 24);
        v8 += -1 - (v8 >> 1);
      }
    }
    while ( v8 > 0 );
    m_size = s_crashReportGlob.memRegions.m_size;
  }
  if ( p_memRegions != (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.memRegions + 24 * m_size) )
  {
    v10 = CrashReport_KeyCompare::operator()(&s_crashReportGlob.memRegions.m_keyCompare, name, *(const char *const *)p_memRegions->m_data.m_buffer);
    m_size = s_crashReportGlob.memRegions.m_size;
    if ( v10 )
      p_memRegions = (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.memRegions + 24 * s_crashReportGlob.memRegions.m_size);
  }
  if ( p_memRegions == (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.memRegions + 24 * m_size) )
  {
    if ( m_size == 16 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 701, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CrashReport MemRegion entry limit hit (%zu)", 0x10ui64) )
        __debugbreak();
      goto LABEL_97;
    }
    StringCopy = CrashReport_Internal_AllocateStringCopy(name, 0x80u, 0);
    if ( StringCopy != "_invalidstring_" )
    {
      v12 = &s_crashReportGlob.memRegions;
      v13 = (signed __int64)(24 * s_crashReportGlob.memRegions.m_size) / 24;
      while ( v13 > 0 )
      {
        v14 = *(const char **)&v12->m_data.m_buffer[24 * (v13 >> 1)];
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.h", 23, ASSERT_TYPE_ASSERT, "(first)", (const char *)&queryFormat, "first") )
          __debugbreak();
        if ( !StringCopy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.h", 24, ASSERT_TYPE_ASSERT, "(second)", (const char *)&queryFormat, "second") )
          __debugbreak();
        if ( I_stricmp(v14, StringCopy) >= 0 )
        {
          v13 >>= 1;
        }
        else
        {
          v12 = (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)v12 + 24 * (v13 >> 1) + 24);
          v13 += -1 - (v13 >> 1);
        }
      }
      if ( v12 != (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.memRegions + 24 * s_crashReportGlob.memRegions.m_size) && CrashReport_KeyCompare::operator()(&s_crashReportGlob.memRegions.m_keyCompare, StringCopy, *(const char *const *)v12->m_data.m_buffer) )
        v12 = (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.memRegions + 24 * s_crashReportGlob.memRegions.m_size);
      v15 = 24 * s_crashReportGlob.memRegions.m_size;
      if ( v12 == (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.memRegions + 24 * s_crashReportGlob.memRegions.m_size) )
      {
        *(_QWORD *)v24 = StringCopy;
        v12 = &s_crashReportGlob.memRegions;
        *(_OWORD *)&v24[8] = 0ui64;
        v16 = v15 / 24;
        while ( v16 > 0 )
        {
          v17 = *(const char **)&v12->m_data.m_buffer[24 * (v16 >> 1)];
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.h", 23, ASSERT_TYPE_ASSERT, "(first)", (const char *)&queryFormat, "first") )
            __debugbreak();
          if ( !StringCopy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.h", 24, ASSERT_TYPE_ASSERT, "(second)", (const char *)&queryFormat, "second") )
            __debugbreak();
          if ( I_stricmp(v17, StringCopy) >= 0 )
          {
            v16 >>= 1;
          }
          else
          {
            v12 = (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)v12 + 24 * (v16 >> 1) + 24);
            v16 += -1 - (v16 >> 1);
          }
        }
        if ( v12 == (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.memRegions + 24 * s_crashReportGlob.memRegions.m_size) || CrashReport_KeyCompare::operator()(&s_crashReportGlob.memRegions.m_keyCompare, StringCopy, *(const char *const *)v12->m_data.m_buffer) )
        {
          if ( s_crashReportGlob.memRegions.m_size == 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
            __debugbreak();
          if ( (v12 < &s_crashReportGlob.memRegions || v12 > (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.memRegions + 24 * s_crashReportGlob.memRegions.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
            __debugbreak();
          if ( (char *)v12 - (char *)&s_crashReportGlob.memRegions != 24 * (((char *)v12 - (char *)&s_crashReportGlob.memRegions) / 0x18ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
            __debugbreak();
          if ( v24 >= (_BYTE *)v12 && v24 < &s_crashReportGlob.memRegions.m_data.m_buffer[24 * s_crashReportGlob.memRegions.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
            __debugbreak();
          v18 = (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)&s_crashReportGlob.memRegions + 24 * s_crashReportGlob.memRegions.m_size);
          if ( v12 != v18 )
          {
            v19 = &s_crashReportGlob.memRegions.m_data.m_buffer[24 * s_crashReportGlob.memRegions.m_size + 24];
            if ( v12 == (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( v18 == (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v20 = v18 <= v12;
            if ( v18 < v12 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v20 = v18 <= v12;
            }
            if ( !v20 )
            {
              do
              {
                v21 = *(_OWORD *)&v18[-1].m_data.m_buffer[376];
                v18 = (ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)v18 - 24);
                v19 -= 24;
                *(_OWORD *)v19 = v21;
                *((double *)v19 + 2) = *(double *)&v18->m_data.m_buffer[16];
              }
              while ( v18 > v12 );
            }
          }
          ++s_crashReportGlob.memRegions.m_size;
          v22 = *(double *)&v24[16];
          *(_OWORD *)v12->m_data.m_buffer = *(_OWORD *)v24;
          *(double *)&v12->m_data.m_buffer[16] = v22;
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector_map\\fixed_vector_map.h", 84, ASSERT_TYPE_ASSERT, "( retVal.second )", (const char *)&queryFormat, "retVal.second") )
        {
          __debugbreak();
          *(_OWORD *)&v12->m_data.m_buffer[8] = v23;
          goto LABEL_97;
        }
      }
      *(_OWORD *)&v12->m_data.m_buffer[8] = v23;
    }
  }
  else
  {
    *(_OWORD *)&p_memRegions->m_data.m_buffer[8] = v23;
  }
LABEL_97:
  if ( Sys_HasValidCurrentThreadContext() )
  {
    s_crashReportGlob.lock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_crashReportGlob.lock);
    Sys_CheckReleaseLock(&s_crashReportGlob.lock);
  }
}

/*
==============
CrashReport_Internal_AcquireReadLock
==============
*/
void CrashReport_Internal_AcquireReadLock(void)
{
  if ( Sys_HasValidCurrentThreadContext() )
  {
    Sys_CheckAcquireLock(&s_crashReportGlob.lock);
    AcquireSRWLockShared((PSRWLOCK)&s_crashReportGlob.lock);
  }
}

/*
==============
CrashReport_Internal_AddCommonKVPs
==============
*/
void CrashReport_Internal_AddCommonKVPs(void)
{
  const dvar_t *v0; 
  const char *string; 
  bool IsAnyLocalServerRunning; 
  const char *v3; 
  bool v4; 
  const char *v5; 
  unsigned int VersionNumber; 
  PublisherVariableManager *Instance; 
  unsigned int i; 
  const char *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  char v12; 
  Online_Commerce *v13; 
  Online_Commerce *v14; 
  bool v15; 
  Online_Commerce *v16; 
  bool HavePaidEntitlement; 
  const char *v18; 
  bool IsControllerActive; 
  CLIENT_MANAGER_MODE Mode; 
  int v21; 
  const char *v22; 
  unsigned int ControllerFromClient; 
  int outMinor; 
  int outMajor; 
  int v26; 
  int v27; 
  char clientNum[2][8]; 
  char dest[64]; 

  v0 = DVARSTR_ui_gametype;
  if ( DVARSTR_ui_gametype )
  {
    Dvar_CheckFrontendServerThread(DVARSTR_ui_gametype);
    string = v0->current.string;
    if ( string )
      CrashReport_AddKVP("GameType", string);
  }
  IsAnyLocalServerRunning = Com_IsAnyLocalServerRunning();
  v3 = "0";
  if ( IsAnyLocalServerRunning )
    v3 = "1";
  CrashReport_AddKVP("LocalServerRunning", v3);
  v4 = Com_FrontEnd_IsInFrontEnd();
  v5 = "0";
  if ( v4 )
    v5 = "1";
  CrashReport_AddKVP("IsInFrontEnd", v5);
  if ( LODWORD(cl_maxLocalClients) )
  {
    Com_sprintf_truncate<64>((char (*)[64])dest, "%d", (unsigned int)cls.m_localClientsActive.activeCount);
    CrashReport_AddKVP("LocalClientCount", dest);
  }
  VersionNumber = Playlist_GetVersionNumber();
  Com_sprintf_truncate<64>((char (*)[64])dest, "%u", VersionNumber);
  CrashReport_AddKVP("PlaylistVersion", dest);
  *(_DWORD *)&clientNum[0][0] = 0;
  outMajor = 0;
  outMinor = 0;
  Instance = PublisherVariableManager::GetInstance();
  if ( PublisherVariableManager::GetVariablesVersion(Instance, "general", &outMajor, &outMinor) )
  {
    Com_sprintf_truncate<64>((char (*)[64])dest, "%d.%d", (unsigned int)outMajor, (unsigned int)outMinor);
    CrashReport_AddKVP("PubVarsGeneralVersion", dest);
  }
  v27 = 0;
  v26 = 0;
  if ( PublisherVariableManager::GetVariablesVersion(Instance, "xb3", &v27, &v26) )
  {
    Com_sprintf_truncate<64>((char (*)[64])dest, "%d.%d", (unsigned int)v27, (unsigned int)v26);
    CrashReport_AddKVP("PubVarsPlatformVersion", dest);
  }
  for ( i = 0; (int)i < 8; ++i )
  {
    Com_sprintf_truncate<64>((char (*)[64])dest, "SignedIn[%d]", i);
    if ( !Live_IsUserSignedIn(i) )
    {
      v9 = "0";
      goto LABEL_42;
    }
    CrashReport_AddKVP(dest, "1");
    v10 = DVARBOOL_com_force_free_to_play;
    if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
LABEL_37:
      v12 = 0;
      goto LABEL_38;
    }
    v11 = DVARBOOL_com_force_premium;
    if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      v12 = 1;
    }
    else if ( Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
    {
      v12 = 1;
    }
    else
    {
      v13 = Online_Commerce::GetInstance();
      v15 = 1;
      if ( Online_Commerce::GetPaidEntitlementTaskState(v13, i) != ENTITLEMENT_STATE_COMPLETE )
      {
        v14 = Online_Commerce::GetInstance();
        if ( Online_Commerce::GetPaidEntitlementTaskState(v14, i) != ENTITLEMENT_STATE_ERROR )
          v15 = 0;
      }
      v16 = Online_Commerce::GetInstance();
      HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v16, i);
      if ( !Live_IsUserSignedInToLive(i) || !v15 || !HavePaidEntitlement )
        goto LABEL_37;
      v12 = 1;
    }
LABEL_38:
    Com_sprintf_truncate<64>((char (*)[64])dest, "PaidUser[%d]", i);
    v18 = "0";
    if ( v12 )
      v18 = "1";
    CrashReport_AddKVP(dest, v18);
    IsControllerActive = CL_Mgr_IsControllerActive(i);
    Com_sprintf_truncate<64>((char (*)[64])dest, "ControllerActive[%d]", i);
    v9 = "0";
    if ( IsControllerActive )
      v9 = "1";
LABEL_42:
    CrashReport_AddKVP(dest, v9);
  }
  Mode = CL_Mgr_GetMode();
  Com_sprintf_truncate<64>((char (*)[64])dest, "%d", (unsigned int)Mode);
  CrashReport_AddKVP("ClientManagerMode", dest);
  v21 = *(_DWORD *)&clientNum[0][0];
  do
  {
    Com_sprintf_truncate<64>((char (*)[64])dest, "ControllerForClient[%d]", (unsigned int)v21);
    if ( CL_Mgr_IsClientActive((LocalClientNum_t)v21) )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v21);
      Com_sprintf_truncate<8>(clientNum, "%d", ControllerFromClient);
      v22 = clientNum[0];
    }
    else
    {
      v22 = "Inactive";
    }
    CrashReport_AddKVP(dest, v22);
    ++v21;
  }
  while ( v21 < 2 );
}

/*
==============
CrashReport_Internal_AllocateStringCopy
==============
*/
char *CrashReport_Internal_AllocateStringCopy(const char *const str, const unsigned int maxStrBufSize, const bool allowTruncation)
{
  bool v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  const char *fmt; 
  int v11; 
  char *v12; 
  char *v13; 
  __int64 v15; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 524, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( maxStrBufSize <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 525, ASSERT_TYPE_ASSERT, "(maxStrBufSize > 1)", (const char *)&queryFormat, "maxStrBufSize > 1") )
    __debugbreak();
  if ( str )
  {
    v7 = -1i64;
    do
      ++v7;
    while ( str[v7] );
    v8 = maxStrBufSize - 1;
    if ( v8 > (unsigned int)v7 )
      v8 = (unsigned int)v7;
    v9 = v8 + 1;
    if ( (unsigned int)v7 <= v8 || allowTruncation )
    {
      v12 = (char *)ntl::nxheap::allocate((ntl::nxheap *)&s_crashReportGlob, v9, 4ui64, 1);
      v13 = v12;
      if ( v12 )
      {
        Core_strcpy_truncate(v12, v9, str);
        return v13;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 546, ASSERT_TYPE_ASSERT, "(newAlloc)", (const char *)&queryFormat, "newAlloc") )
        __debugbreak();
      fmt = "Failed allocating copy of string '%s' (maxStrBufSize=%u)";
      v11 = 550;
    }
    else
    {
      fmt = "String '%s' is too long (maxStrBufSize=%u)";
      v11 = 540;
    }
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", v11, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt, str, maxStrBufSize);
  }
  else
  {
    LODWORD(v15) = maxStrBufSize;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_internal.cpp", 529, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "nullptr string used (maxStrBufSize=%u)", v15);
  }
  if ( v6 )
    __debugbreak();
  return "_invalidstring_";
}

/*
==============
CrashReport_Internal_BeginHandler
==============
*/
void CrashReport_Internal_BeginHandler(void)
{
  s_crashReportGlob.inHandler = 1;
}

/*
==============
CrashReport_Internal_EndHandler
==============
*/
void CrashReport_Internal_EndHandler(void)
{
  s_crashReportGlob.inHandler = 0;
}

/*
==============
CrashReport_Internal_GetKVPList
==============
*/
ntl::fixed_vector_map<char const *,char const *,64,CrashReport_KeyCompare> *CrashReport_Internal_GetKVPList()
{
  return &s_crashReportGlob.kvps;
}

/*
==============
CrashReport_Internal_GetMemRegions
==============
*/
ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *CrashReport_Internal_GetMemRegions()
{
  return &s_crashReportGlob.memRegions;
}

/*
==============
CrashReport_Internal_Init
==============
*/
void CrashReport_Internal_Init(void)
{
  const char *BuildNumber; 

  InitializeSRWLock((PSRWLOCK)&s_crashReportGlob.lock);
  s_crashReportGlob.lock.initialized = -1412623820;
  s_crashReportGlob.lock.acquireLock = 0;
  s_crashReportGlob.lock.writeThreadId = 0;
  ntl::nxheap::nxheap((ntl::nxheap *)&s_crashReportGlob);
  ntl::nxheap_region::nxheap_region((ntl::nxheap_region *)&s_crashReportGlob.heap.m_data.m_buffer[65616]);
  if ( *(_QWORD *)&s_crashReportGlob.heap.m_data.m_buffer[65616] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()", -2i64) )
    __debugbreak();
  ntl::nxheap_region::init((ntl::nxheap_region *)&s_crashReportGlob.heap.m_data.m_buffer[65616], &s_crashReportGlob.heap.m_data.m_buffer[80], 0x10000ui64);
  if ( *(_QWORD *)s_crashReportGlob.heap.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
    __debugbreak();
  ntl::nxheap::init((ntl::nxheap *)&s_crashReportGlob, (ntl::nxheap_region *)&s_crashReportGlob.heap.m_data.m_buffer[65616], DIR_BOTTOM_UP);
  CrashReport_AddKVP("_ExeName", "1-game_test.exe");
  BuildNumber = j_getBuildNumber();
  CrashReport_AddKVP("BuildNumber", BuildNumber);
}

/*
==============
CrashReport_Internal_ReleaseReadLock
==============
*/
void CrashReport_Internal_ReleaseReadLock(void)
{
  if ( Sys_HasValidCurrentThreadContext() )
  {
    ReleaseSRWLockShared((PSRWLOCK)&s_crashReportGlob.lock);
    Sys_CheckReleaseLock(&s_crashReportGlob.lock);
  }
}

/*
==============
CrashReport_TriggerNowC
==============
*/

void CrashReport_TriggerNowC(void)
{
  CrashReport_TriggerNow();
}

