/*
==============
DB_HashLookup
==============
*/

const char *__fastcall DB_HashLookup(unsigned __int64 hash)
{
  return ?DB_HashLookup@@YAPEBD_K@Z(hash);
}

/*
==============
DB_GetComSprintfCatStr
==============
*/

void __fastcall DB_GetComSprintfCatStr(char *dest, unsigned __int64 size, XHash *in, const char *str)
{
  ?DB_GetComSprintfCatStr@@YAXPEAD_KUXHash@@PEBD@Z(dest, size, in, str);
}

/*
==============
Load_CacheHashLookup
==============
*/

void __fastcall Load_CacheHashLookup(unsigned __int64 *hash)
{
  ?Load_CacheHashLookup@@YAXPEA_K@Z(hash);
}

/*
==============
DB_InitHashLookupMem
==============
*/

void DB_InitHashLookupMem(void)
{
  ?DB_InitHashLookupMem@@YAXXZ();
}

/*
==============
DB_SetHashDebugName
==============
*/

void __fastcall DB_SetHashDebugName(XHash *xhash, const char *str, bool lookup)
{
  ?DB_SetHashDebugName@@YAXAEAUXHash@@PEBD_N@Z(xhash, str, lookup);
}

/*
==============
DB_UnloadHashLookupData
==============
*/

void __fastcall DB_UnloadHashLookupData(const char *path)
{
  ?DB_UnloadHashLookupData@@YAXPEBD@Z(path);
}

/*
==============
DB_ShutdownHashLookupMem
==============
*/

void DB_ShutdownHashLookupMem(void)
{
  ?DB_ShutdownHashLookupMem@@YAXXZ();
}

/*
==============
DB_LoadHashLookupData
==============
*/

void __fastcall DB_LoadHashLookupData(const char *zoneName)
{
  ?DB_LoadHashLookupData@@YAXPEBD@Z(zoneName);
}

/*
==============
DB_AddHashLookup
==============
*/
const char *DB_AddHashLookup(unsigned __int64 hash, const char *str)
{
  XHashLookupList *v4; 
  _QWORD *v5; 
  const char *name; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  char v10; 
  char v11; 
  const char *v13; 
  unsigned int hashEntryCount; 
  XHashLookupEntry *v15; 
  XHashLookupEntry *v16; 
  unsigned int v17; 
  XHashLookupEntry *hashEntryList; 
  __int64 v19; 
  unsigned __int64 *p_hash; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  char *sourceString; 
  __int64 v25; 
  ScopedCriticalSection v26; 
  unsigned __int64 Key; 

  Key = hash;
  v25 = -2i64;
  if ( !s_hashLookupFullyInitialized )
    return str;
  ScopedCriticalSection::ScopedCriticalSection(&v26, CRITSECT_XHASH, SCOPED_CRITSECT_NORMAL);
  v4 = s_DBHashEnum;
  if ( s_DBHashEnum )
  {
    while ( 1 )
    {
      v5 = bsearch(&Key, v4->hashEntryList, v4->hashEntryCount, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)lambda_222a5c50c13bae6276ddeb25edbb7ab8_::_lambda_invoker_cdecl_);
      if ( v5 )
        break;
      v4 = v4->next;
      if ( !v4 )
      {
        v4 = s_DBHashEnum;
        goto LABEL_7;
      }
    }
    v13 = (const char *)v5[1];
  }
  else
  {
LABEL_7:
    if ( v4 )
    {
LABEL_8:
      name = v4->name;
      v7 = 0x7FFFFFFFi64;
      v8 = "runtime";
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0", v25) )
        __debugbreak();
      v9 = name - "runtime";
      do
      {
        v10 = v8[v9];
        v11 = *v8++;
        if ( !v7-- )
          break;
        if ( v10 != v11 )
        {
          v4 = v4->next;
          if ( v4 )
            goto LABEL_8;
          goto LABEL_18;
        }
      }
      while ( v10 );
    }
    else
    {
LABEL_18:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 420, ASSERT_TYPE_ASSERT, "(scan)", (const char *)&queryFormat, "scan") )
        __debugbreak();
    }
    hashEntryCount = v4->hashEntryCount;
    if ( hashEntryCount + 1 < s_DBHashRuntimeLookupSize )
    {
LABEL_23:
      v13 = NULL;
      v17 = 0;
      hashEntryList = v4->hashEntryList;
      while ( 1 )
      {
        v19 = v17;
        p_hash = &hashEntryList[v17].hash;
        if ( Key < *p_hash || v17 == hashEntryCount )
          break;
        if ( ++v17 > hashEntryCount )
          goto LABEL_34;
      }
      memmove_0(&hashEntryList[v17 + 1], p_hash, 16i64 * (hashEntryCount - v17));
      v21 = v19;
      v4->hashEntryList[v21].hash = Key;
      v22 = -1i64;
      do
        ++v22;
      while ( str[v22] );
      v23 = (unsigned int)(v22 + 1);
      v4->hashEntryList[v21].sourceString = (const char *)ntl::nxheap::allocate(&s_DBHashMapHeap.m_heap, v23, 4ui64, 0);
      sourceString = (char *)v4->hashEntryList[v21].sourceString;
      if ( sourceString )
      {
        Core_strcpy(sourceString, v23, str);
        ++v4->hashEntryCount;
        v13 = v4->hashEntryList[v21].sourceString;
      }
      else
      {
        Com_PrintError(1, "DB_XHash: OOM for Xhash - cannot add %s\n", str);
      }
    }
    else
    {
      while ( 1 )
      {
        v15 = (XHashLookupEntry *)ntl::nxheap::allocate(&s_DBHashMapHeap.m_heap, 16i64 * (hashEntryCount + 1024), 8ui64, 0);
        v16 = v15;
        if ( !v15 )
          break;
        memcpy_0(v15, v4->hashEntryList, 16i64 * v4->hashEntryCount);
        ntl::nxheap::free(&s_DBHashMapHeap.m_heap, v4->hashEntryList);
        v4->hashEntryList = v16;
        hashEntryCount = v4->hashEntryCount;
        s_DBHashRuntimeLookupSize = hashEntryCount + 1024;
        if ( hashEntryCount + 1 < hashEntryCount + 1024 )
          goto LABEL_23;
      }
      Com_PrintError(1, "DB_XHash: OOM for Xhash - cannot add %s\n", str);
      v13 = NULL;
    }
  }
LABEL_34:
  ScopedCriticalSection::~ScopedCriticalSection(&v26);
  return v13;
}

/*
==============
DB_GetComSprintfCatStr
==============
*/
void DB_GetComSprintfCatStr(char *dest, unsigned __int64 size, XHash *in, const char *str)
{
  const char *name; 

  if ( (in->hashPacked & 0x7FFFFFFFFFFFFFFFi64) != 0 )
  {
    name = in->name;
    if ( !in->name )
      name = DB_HashLookup(in->hashPacked & 0x7FFFFFFFFFFFFFFFi64);
  }
  else
  {
    name = (char *)&queryFormat.fmt + 3;
  }
  Com_sprintf(dest, size, "%s%s", name, str);
}

/*
==============
DB_HashLookup
==============
*/
char *DB_HashLookup(unsigned __int64 hash)
{
  XHashLookupList *v1; 
  _QWORD *v2; 
  unsigned __int64 Key; 

  Key = hash;
  v1 = s_DBHashEnum;
  if ( !s_DBHashEnum )
    return j_va("%016llx", hash);
  while ( 1 )
  {
    v2 = bsearch(&Key, v1->hashEntryList, v1->hashEntryCount, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)lambda_c45960c3da83cca908c4991e84cc0c49_::_lambda_invoker_cdecl_);
    if ( v2 )
      break;
    v1 = v1->next;
    if ( !v1 )
    {
      hash = Key;
      return j_va("%016llx", hash);
    }
  }
  return (char *)v2[1];
}

/*
==============
DB_InitHashLookupMem
==============
*/

void __fastcall DB_InitHashLookupMem(double _XMM0_8)
{
  bool v1; 
  void *v2; 
  XHashLookupList *v6; 
  const char *v7; 
  XHashLookupEntry *v8; 
  XHashLookupList *v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 

  if ( !s_hashLookupFullyInitialized )
  {
    if ( s_DBHashMapHeapBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 171, ASSERT_TYPE_ASSERT, "(s_DBHashMapHeapBuffer == nullptr)", (const char *)&queryFormat, "s_DBHashMapHeapBuffer == nullptr") )
      __debugbreak();
    PMem_BeginAlloc("xhashlookup", PMEM_STACK_GAME);
    v1 = PMem_AuxAllocationsEnabled();
    if ( v1 )
      PMem_PopAuxAllocations();
    s_DBHashMapHeapBuffer = PMem_Alloc(0x1000000ui64, 0x1000ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "xhashlookup");
    if ( v1 )
      PMem_PushAuxAllocations();
    PMem_EndAlloc("xhashlookup", PMEM_STACK_GAME);
    v2 = s_DBHashMapHeapBuffer;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu [rsp+48h+var_18], xmm0
    }
    if ( !s_DBHashMapHeapBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", (_DWORD)s_DBHashMapHeapBuffer + 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", v10) )
      __debugbreak();
    *(_QWORD *)&v11 = v2;
    *((_QWORD *)&v11 + 1) = 0x1000000i64;
    ntl::nxheap::shutdown(&s_DBHashMapHeap.m_heap);
    ntl::nxheap_region::shutdown(&s_DBHashMapHeap.m_region);
    if ( s_DBHashMapHeap.m_data.m_buffer )
    {
      if ( s_DBHashMapHeap.m_data.m_buffer != s_DBHashMapHeap.m_allocator.m_data.m_buffer && s_DBHashMapHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
        __debugbreak();
      s_DBHashMapHeap.m_data.m_buffer = NULL;
      s_DBHashMapHeap.m_data.m_size = 0i64;
    }
    __asm
    {
      vmovups xmm0, [rsp+48h+var_18]
      vmovups xmmword ptr cs:s_DBHashMapHeap.m_allocator.m_data.m_buffer, xmm0
    }
    ntl::nxheap::shutdown(&s_DBHashMapHeap.m_heap);
    ntl::nxheap_region::shutdown(&s_DBHashMapHeap.m_region);
    if ( s_DBHashMapHeap.m_data.m_buffer )
    {
      if ( s_DBHashMapHeap.m_data.m_buffer != s_DBHashMapHeap.m_allocator.m_data.m_buffer && s_DBHashMapHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
        __debugbreak();
      s_DBHashMapHeap.m_data.m_buffer = NULL;
      s_DBHashMapHeap.m_data.m_size = 0i64;
    }
    if ( s_DBHashMapHeap.m_allocator.m_data.m_size < 0x1000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
      __debugbreak();
    *(_QWORD *)&v12 = s_DBHashMapHeap.m_allocator.m_data.m_buffer;
    *((_QWORD *)&v12 + 1) = 0x1000000i64;
    __asm
    {
      vmovups xmm0, [rsp+48h+var_18]
      vmovups xmmword ptr cs:s_DBHashMapHeap.baseclass_0.m_data.m_buffer, xmm0
    }
    if ( s_DBHashMapHeap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
      __debugbreak();
    ntl::nxheap_region::init(&s_DBHashMapHeap.m_region, s_DBHashMapHeap.m_data.m_buffer, s_DBHashMapHeap.m_data.m_size);
    if ( s_DBHashMapHeap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
      __debugbreak();
    ntl::nxheap::init(&s_DBHashMapHeap.m_heap, &s_DBHashMapHeap.m_region, DIR_BOTTOM_UP);
    v6 = (XHashLookupList *)ntl::nxheap::allocate(&s_DBHashMapHeap.m_heap, 0x20ui64, 8ui64, 0);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 192, ASSERT_TYPE_ASSERT, "( list != nullptr )", "Failed to allocate memory for XHash list.  DB_XHASH_LOOKUP_SIZE needs to be increased.") )
      __debugbreak();
    v7 = (const char *)ntl::nxheap::allocate(&s_DBHashMapHeap.m_heap, 8ui64, 4ui64, 0);
    v6->name = v7;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 195, ASSERT_TYPE_ASSERT, "( list->name != nullptr )", "Failed to allocate memory for XHash list name.  DB_XHASH_LOOKUP_SIZE needs to be increased.") )
      __debugbreak();
    Core_strcpy((char *)v6->name, 8ui64, "runtime");
    s_DBHashRuntimeLookupSize = 1024;
    v8 = (XHashLookupEntry *)ntl::nxheap::allocate(&s_DBHashMapHeap.m_heap, 0x4000ui64, 8ui64, 0);
    v6->hashEntryList = v8;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 199, ASSERT_TYPE_ASSERT, "( list->hashEntryList != nullptr )", "Failed to allocate memory for XHash entry list.  DB_XHASH_LOOKUP_SIZE needs to be increased.") )
      __debugbreak();
    v9 = s_DBHashEnum;
    v6->hashEntryCount = 0;
    v6->next = v9;
    s_DBHashEnum = v6;
  }
  s_hashLookupFullyInitialized = 1;
}

/*
==============
DB_LoadHashLookupData
==============
*/
void DB_LoadHashLookupData(const char *zoneName)
{
  __int64 v2; 
  Sys_Folder v3; 
  const char *FilenameSubString; 
  XHashLookupList *v5; 
  const char *name; 
  signed __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  FileStreamFileID v11; 
  __int64 v12; 
  __int64 v13; 
  char *v14; 
  char *v15; 
  __int64 v16; 
  XHashLookupList *v17; 
  __int64 v18; 
  char *v19; 
  char *v20; 
  unsigned int *p_hashEntryCount; 
  __int64 hashEntryCount; 
  XHashLookupEntry *v23; 
  const char *v24; 
  char i; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  char *v30; 
  char j; 
  unsigned int v32; 
  XHashLookupList *v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned int v36; 
  ScopedCriticalSection v37; 
  __int64 bytesRead; 
  unsigned __int64 v39; 
  __int64 v40; 
  char *v41; 
  __int64 v42; 
  char path[256]; 
  char v44; 
  char src[4095]; 

  v42 = -2i64;
  ScopedCriticalSection::ScopedCriticalSection(&v37, CRITSECT_XHASH, SCOPED_CRITSECT_NORMAL);
  DB_InitHashLookupMem();
  v2 = 0i64;
  v40 = 0i64;
  if ( DB_Zones_IsLocalizedZoneName(zoneName) )
  {
    v3 = SF_ZONE_LOC;
  }
  else
  {
    v3 = SF_ZONE;
    if ( DB_Zones_IsRegionalZoneName(zoneName) )
      v3 = SF_ZONE_REGION;
  }
  Sys_BuildAbsPath(path, 256, v3, zoneName, ".xhash");
  FilenameSubString = Com_GetFilenameSubString(path);
  v5 = s_DBHashEnum;
  if ( !s_DBHashEnum )
  {
LABEL_11:
    LOBYTE(v10) = FileStream_OpenFile(v3, FilenameSubString, 3);
    v11 = (char)v10;
    if ( v10 == -16777217 )
      goto LABEL_61;
    v12 = FileStream_Easy_FileSize((FileStreamFileID)v10);
    v13 = (v12 + 4095) & 0xFFFFFFFFFFFFF000ui64;
    v14 = (char *)ntl::nxheap::allocate(&s_DBHashMapHeap.m_heap, v13 + 1, 0x1000ui64, 0);
    v15 = v14;
    v41 = v14;
    if ( !v14 )
    {
      Com_PrintError(1, "DB_XHash: OOM for Xhash - cannot add file %s\n", FilenameSubString);
      FileStream_CloseFile(v11);
      goto LABEL_61;
    }
    bytesRead = 0i64;
    v16 = FileStream_Easy_Read(v11, v14, v13, &bytesRead, FILE_STREAM_TRACK_XHASH);
    FileStream_CloseFile(v11);
    if ( v16 != v12 )
    {
      Com_PrintError(1, "DB_XHash: Failed to read Xhash file %s, FileStream_Easy_Read failed.\n", FilenameSubString);
      ntl::nxheap::free(&s_DBHashMapHeap.m_heap, v15);
      goto LABEL_61;
    }
    if ( bytesRead != v12 )
    {
      Com_PrintError(1, "DB_XHash: Failed to read Xhash file %s, size mismatch.\n", FilenameSubString);
      ntl::nxheap::free(&s_DBHashMapHeap.m_heap, v15);
      goto LABEL_61;
    }
    v15[v12] = 0;
    v17 = (XHashLookupList *)ntl::nxheap::allocate(&s_DBHashMapHeap.m_heap, 0x20ui64, 8ui64, 0);
    if ( !v17 )
    {
      Com_PrintError(1, "DB_XHash: OOM for Xhash\n");
      ntl::nxheap::free(&s_DBHashMapHeap.m_heap, v15);
      goto LABEL_61;
    }
    v18 = -1i64;
    do
      ++v18;
    while ( FilenameSubString[v18] );
    v19 = (char *)ntl::nxheap::allocate(&s_DBHashMapHeap.m_heap, v18 + 1, 4ui64, 0);
    v20 = v19;
    if ( v19 )
    {
      Core_strcpy(v19, v18 + 1, FilenameSubString);
      v17->name = v20;
      p_hashEntryCount = &v17->hashEntryCount;
      j_sscanf(v15, "%u %u", &v17->hashEntryCount, &v36);
      hashEntryCount = v17->hashEntryCount;
      if ( (_DWORD)hashEntryCount )
      {
        v23 = (XHashLookupEntry *)ntl::nxheap::allocate(&s_DBHashMapHeap.m_heap, v36 + 16 * hashEntryCount, 8ui64, 0);
        v17->hashEntryList = v23;
        if ( v23 )
        {
          v24 = v15;
          for ( i = *v15; *v24; i = *++v24 )
          {
            if ( i == 10 )
              break;
          }
          v26 = 0x100002600i64;
          while ( *v24 <= 0x20u && _bittest64(&v26, *v24) )
            ++v24;
          if ( j_sscanf(v24, "%016llx %[^\n\r]s", &v39, &v44) == 2 )
          {
            v27 = 0i64;
            do
            {
              v28 = -1i64;
              do
                ++v28;
              while ( src[v28 - 1] );
              v29 = v28 - 1;
              if ( v29 != 1 )
              {
                v17->hashEntryList[(unsigned int)v27].hash = v39;
                v30 = (char *)&v17->hashEntryList[v17->hashEntryCount] + v2;
                Core_strcpy_truncate(v30, v29, src);
                v17->hashEntryList[(unsigned int)v27].sourceString = v30;
                v2 += v29;
                v27 = (unsigned int)(v27 + 1);
                v26 = 0x100002600i64;
              }
              v44 = 0;
              for ( j = *v24; *v24; j = *++v24 )
              {
                if ( j == 10 )
                  break;
              }
              while ( *v24 <= 0x20u && _bittest64(&v26, *v24) )
                ++v24;
            }
            while ( j_sscanf(v24, "%016llx %[^\n\r]s", &v39, &v44) == 2 );
            v40 = v27;
            v15 = v41;
            p_hashEntryCount = &v17->hashEntryCount;
          }
          if ( v2 != v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 358, ASSERT_TYPE_ASSERT, "( offset ) == ( stringSize )", "%s == %s\n\t%u, %u", "offset", "stringSize", v2, v36) )
            __debugbreak();
          v32 = v40;
          if ( (_DWORD)v40 != *p_hashEntryCount )
          {
            LODWORD(v35) = *p_hashEntryCount;
            LODWORD(v34) = v40;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 359, ASSERT_TYPE_ASSERT, "( count ) == ( list->hashEntryCount )", "%s == %s\n\t%u, %u", "count", "list->hashEntryCount", v34, v35) )
              __debugbreak();
          }
          v33 = s_DBHashEnum;
          if ( !s_DBHashEnum )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 360, ASSERT_TYPE_ASSERT, "(s_DBHashEnum)", (const char *)&queryFormat, "s_DBHashEnum") )
              __debugbreak();
            v33 = s_DBHashEnum;
          }
          v17->next = v33->next;
          v33->next = v17;
          ntl::nxheap::free(&s_DBHashMapHeap.m_heap, v15);
          Com_Printf(16, "%s: Loaded %u xhashes from '%s'\n", "DB_LoadHashLookupData", v32, path);
          goto LABEL_61;
        }
        Com_PrintError(1, "DB_XHash: OOM for Xhash data in %s\n", FilenameSubString);
        ntl::nxheap::free(&s_DBHashMapHeap.m_heap, (void *)v17->name);
      }
      else
      {
        ntl::nxheap::free(&s_DBHashMapHeap.m_heap, (void *)v17->name);
      }
    }
    else
    {
      Com_PrintError(1, "DB_XHash: OOM for Xhash\n");
    }
    ntl::nxheap::free(&s_DBHashMapHeap.m_heap, v17);
    ntl::nxheap::free(&s_DBHashMapHeap.m_heap, v15);
    goto LABEL_61;
  }
  while ( 1 )
  {
    name = v5->name;
    v7 = FilenameSubString - name;
    do
    {
      v8 = (unsigned __int8)name[v7];
      v9 = *(unsigned __int8 *)name - v8;
      if ( v9 )
        break;
      ++name;
    }
    while ( v8 );
    if ( !v9 )
      break;
    v5 = v5->next;
    if ( !v5 )
      goto LABEL_11;
  }
LABEL_61:
  ScopedCriticalSection::~ScopedCriticalSection(&v37);
}

/*
==============
DB_SetHashDebugName
==============
*/
void DB_SetHashDebugName(XHash *xhash, const char *str, bool lookup)
{
  if ( I_strempty(str) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 467, ASSERT_TYPE_ASSERT, "(!I_strempty( str ))", (const char *)&queryFormat, "!I_strempty( str )") )
    __debugbreak();
  xhash->name = NULL;
  if ( lookup )
    xhash->name = DB_AddHashLookup(xhash->hashPacked & 0x7FFFFFFFFFFFFFFFi64, str);
}

/*
==============
DB_ShutdownHashLookupMem
==============
*/

void __fastcall DB_ShutdownHashLookupMem(double _XMM0_8)
{
  StreamerMemLoan result; 

  if ( !s_hashLookupFullyInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 211, ASSERT_TYPE_ASSERT, "(s_hashLookupFullyInitialized)", (const char *)&queryFormat, "s_hashLookupFullyInitialized") )
    __debugbreak();
  ntl::nxheap::shutdown(&s_DBHashMapHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_DBHashMapHeap.m_region);
  if ( s_DBHashMapHeap.m_data.m_buffer )
  {
    if ( s_DBHashMapHeap.m_data.m_buffer != s_DBHashMapHeap.m_allocator.m_data.m_buffer && s_DBHashMapHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:s_DBHashMapHeap.baseclass_0.m_data.m_buffer, xmm0
    }
  }
  if ( !s_DBHashMapHeapBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_xhash.cpp", 214, ASSERT_TYPE_ASSERT, "(s_DBHashMapHeapBuffer)", (const char *)&queryFormat, "s_DBHashMapHeapBuffer") )
    __debugbreak();
  PMem_Free(&result, "xhashlookup", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
  s_DBHashEnum = NULL;
  s_hashLookupFullyInitialized = 0;
}

/*
==============
DB_UnloadHashLookupData
==============
*/
void DB_UnloadHashLookupData(const char *path)
{
  const char *FilenameSubString; 
  XHashLookupList *v3; 
  XHashLookupList *v4; 
  const char *name; 
  __int64 v6; 
  const char *v7; 
  signed __int64 v8; 
  char v9; 
  char v10; 
  __int64 v12; 
  ScopedCriticalSection v13; 
  char outPath[256]; 

  v12 = -2i64;
  ScopedCriticalSection::ScopedCriticalSection(&v13, CRITSECT_XHASH, SCOPED_CRITSECT_NORMAL);
  if ( s_hashLookupFullyInitialized )
  {
    Com_CopyAndStripExtension(outPath, 0x100ui64, path);
    I_strcat(outPath, 0x100ui64, ".xhash");
    FilenameSubString = Com_GetFilenameSubString(outPath);
    v3 = s_DBHashEnum;
    v4 = NULL;
    if ( s_DBHashEnum )
    {
LABEL_3:
      name = v3->name;
      v6 = 0x7FFFFFFFi64;
      v7 = FilenameSubString;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0", v12) )
        __debugbreak();
      if ( !FilenameSubString && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v8 = name - FilenameSubString;
      do
      {
        v9 = v7[v8];
        v10 = *v7++;
        if ( !v6-- )
          break;
        if ( v9 != v10 )
        {
          v4 = v3;
          v3 = v3->next;
          if ( !v3 )
            goto LABEL_19;
          goto LABEL_3;
        }
      }
      while ( v9 );
      if ( v4 )
        v4->next = v3->next;
      else
        s_DBHashEnum = v3->next;
      ntl::nxheap::free(&s_DBHashMapHeap.m_heap, (void *)v3->name);
      ntl::nxheap::free(&s_DBHashMapHeap.m_heap, v3->hashEntryList);
      ntl::nxheap::free(&s_DBHashMapHeap.m_heap, v3);
    }
  }
LABEL_19:
  ScopedCriticalSection::~ScopedCriticalSection(&v13);
}

/*
==============
Load_CacheHashLookup
==============
*/
void Load_CacheHashLookup(unsigned __int64 *hash)
{
  const char *v2; 

  v2 = DB_HashLookup(*hash);
  if ( !CanKeepStringPointer(v2) )
    v2 = NULL;
  *(hash - 1) = (unsigned __int64)v2;
}

