/*
==============
Mem_HunkUser_Destroy
==============
*/

void __fastcall Mem_HunkUser_Destroy(HunkUser *user)
{
  ?Mem_HunkUser_Destroy@@YAXPEAUHunkUser@@@Z(user);
}

/*
==============
Mem_HunkUser_Create
==============
*/

HunkUser *__fastcall Mem_HunkUser_Create(unsigned __int64 reserveSize, const char *name, const MemTrackType type, const Mem_AllocFlags flags)
{
  return ?Mem_HunkUser_Create@@YAPEAUHunkUser@@_KPEBDW4MemTrackType@@W4Mem_AllocFlags@@@Z(reserveSize, name, type, flags);
}

/*
==============
Mem_HunkUser_AllocInternal
==============
*/

void *__fastcall Mem_HunkUser_AllocInternal(HunkUser *user, unsigned __int64 size, unsigned __int64 alignment, const char *name)
{
  return ?Mem_HunkUser_AllocInternal@@YAPEAXPEAUHunkUser@@_K1PEBD@Z(user, size, alignment, name);
}

/*
==============
Mem_HunkUser_GetReserveEnd
==============
*/

void *__fastcall Mem_HunkUser_GetReserveEnd(const HunkUser *user)
{
  return ?Mem_HunkUser_GetReserveEnd@@YAPEAXPEBUHunkUser@@@Z(user);
}

/*
==============
Mem_HunkUser_DumpStats
==============
*/

void Mem_HunkUser_DumpStats(void)
{
  ?Mem_HunkUser_DumpStats@@YAXXZ();
}

/*
==============
Mem_HunkUser_SetPos
==============
*/

void __fastcall Mem_HunkUser_SetPos(HunkUser *user, void *pos)
{
  ?Mem_HunkUser_SetPos@@YAXPEAUHunkUser@@PEAX@Z(user, pos);
}

/*
==============
Mem_HunkUser_CopyStringInternal
==============
*/

char *__fastcall Mem_HunkUser_CopyStringInternal(HunkUser *user, const char *in, const char *name)
{
  return ?Mem_HunkUser_CopyStringInternal@@YAPEADPEAUHunkUser@@PEBD1@Z(user, in, name);
}

/*
==============
Mem_HunkUser_GetUsedSize
==============
*/

unsigned __int64 __fastcall Mem_HunkUser_GetUsedSize(const HunkUser *user)
{
  return ?Mem_HunkUser_GetUsedSize@@YA_KPEBUHunkUser@@@Z(user);
}

/*
==============
Mem_HunkUser_GetFreeReserveAmount
==============
*/

unsigned __int64 __fastcall Mem_HunkUser_GetFreeReserveAmount(const HunkUser *user)
{
  return ?Mem_HunkUser_GetFreeReserveAmount@@YA_KPEBUHunkUser@@@Z(user);
}

/*
==============
Mem_HunkUser_CopyNStringInternal
==============
*/

char *__fastcall Mem_HunkUser_CopyNStringInternal(HunkUser *user, const char *in, int len, const char *name)
{
  return ?Mem_HunkUser_CopyNStringInternal@@YAPEADPEAUHunkUser@@PEBDH1@Z(user, in, len, name);
}

/*
==============
Mem_HunkUser_GetPos
==============
*/

void *__fastcall Mem_HunkUser_GetPos(HunkUser *user)
{
  return ?Mem_HunkUser_GetPos@@YAPEAXPEAUHunkUser@@@Z(user);
}

/*
==============
Mem_HunkUser_IsPtrInHunk
==============
*/

bool __fastcall Mem_HunkUser_IsPtrInHunk(const HunkUser *user, const void *data)
{
  return ?Mem_HunkUser_IsPtrInHunk@@YA_NPEBUHunkUser@@PEBX@Z(user, data);
}

/*
==============
Mem_HunkUser_Reset
==============
*/

void __fastcall Mem_HunkUser_Reset(HunkUser *user)
{
  ?Mem_HunkUser_Reset@@YAXPEAUHunkUser@@@Z(user);
}

/*
==============
Mem_HunkUser_CommitReserve
==============
*/

void __fastcall Mem_HunkUser_CommitReserve(HunkUser *user)
{
  ?Mem_HunkUser_CommitReserve@@YAXPEAUHunkUser@@@Z(user);
}

/*
==============
Mem_HunkUser_DecommitUnused
==============
*/

void __fastcall Mem_HunkUser_DecommitUnused(HunkUser *user)
{
  ?Mem_HunkUser_DecommitUnused@@YAXPEAUHunkUser@@@Z(user);
}

/*
==============
Mem_HunkUser_AllocInternal
==============
*/
unsigned __int64 Mem_HunkUser_AllocInternal(HunkUser *user, unsigned __int64 size, unsigned __int64 alignment, const char *name)
{
  unsigned __int64 pos; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  void *commitEnd; 
  unsigned __int64 v12; 

  Mem_HunkUser_CheckIsValid(user);
  if ( !alignment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 175, ASSERT_TYPE_ASSERT, "(alignment)", (const char *)&queryFormat, "alignment") )
    __debugbreak();
  if ( (alignment & (alignment - 1)) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 176, ASSERT_TYPE_ASSERT, "(IsPowerOf2( alignment ))", (const char *)&queryFormat, "IsPowerOf2( alignment )") )
    __debugbreak();
  if ( alignment > 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 177, ASSERT_TYPE_ASSERT, "(alignment <= MAX_ALIGNMENT)", (const char *)&queryFormat, "alignment <= MAX_ALIGNMENT") )
    __debugbreak();
  pos = user->pos;
  if ( (!alignment || (alignment & (alignment - 1)) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 679, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  v9 = ~(alignment - 1) & (pos + alignment - 1);
  v10 = v9 + size;
  if ( v9 + size > user->commitEnd )
  {
    if ( v10 > user->reserveEnd )
      Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)6, "Mem_HunkUser_AllocInternal", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 190, "size=%zu alignment=%zu name=%s usedSize=%zu reservesize=%zu", size, alignment, user->name, user->pos - (_QWORD)user, user->reserveEnd - (_QWORD)user);
    if ( (user->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 193, ASSERT_TYPE_ASSERT, "(( user->flags & MEM_ALLOC_FLAG_PRECOMMITED ) == 0)", (const char *)&queryFormat, "( user->flags & MEM_ALLOC_FLAG_PRECOMMITED ) == 0") )
      __debugbreak();
    commitEnd = (void *)user->commitEnd;
    v12 = (v10 - (_QWORD)commitEnd + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
    if ( (_WORD)commitEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 207, ASSERT_TYPE_ASSERT, "(IsAligned( commitBase, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( commitBase, MEM_VIRTUAL_PAGE_SIZE )") )
      __debugbreak();
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 209, ASSERT_TYPE_ASSERT, "(commitSize > 0)", (const char *)&queryFormat, "commitSize > 0") )
      __debugbreak();
    Mem_Virtual_Commit(commitEnd, (v10 - (_QWORD)commitEnd + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64, user->flags, user->name, (const MemTrackType)user->type);
    user->commitEnd += v12;
  }
  if ( v10 != user->pos )
  {
    IWMem_Profile_Push(name);
    IWMem_Alloc(user->iwMemID, (const void *)user->pos, v10 - user->pos);
    IWMem_Profile_Pop();
  }
  user->pos = v10;
  return v9;
}

/*
==============
Mem_HunkUser_CheckIsValid
==============
*/
void Mem_HunkUser_CheckIsValid(const HunkUser *user)
{
  if ( !user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 58, ASSERT_TYPE_ASSERT, "(user)", (const char *)&queryFormat, "user") )
    __debugbreak();
  if ( (_WORD)user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 59, ASSERT_TYPE_ASSERT, "(IsAligned( user, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( user, MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  if ( user->magic != -559034355 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 60, ASSERT_TYPE_ASSERT, "(user->magic == HUNK_USER_MAGIC)", (const char *)&queryFormat, "user->magic == HUNK_USER_MAGIC") )
    __debugbreak();
}

/*
==============
Mem_HunkUser_CommitReserve
==============
*/
void Mem_HunkUser_CommitReserve(HunkUser *user)
{
  unsigned __int64 reserveEnd; 
  void *commitEnd; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 126, ASSERT_TYPE_ASSERT, "(user)", (const char *)&queryFormat, "user") )
    __debugbreak();
  Mem_HunkUser_CheckIsValid(user);
  reserveEnd = user->reserveEnd;
  user->flags |= 2u;
  commitEnd = (void *)user->commitEnd;
  if ( reserveEnd > (unsigned __int64)commitEnd )
  {
    v4 = (reserveEnd - (_QWORD)commitEnd + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
    if ( v4 != reserveEnd - (_QWORD)commitEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 138, ASSERT_TYPE_ASSERT, "( commitSize ) == ( user->reserveEnd - user->commitEnd )", "%s == %s\n\t%i, %i", "commitSize", "user->reserveEnd - user->commitEnd", (reserveEnd - (_DWORD)commitEnd + 0xFFFF) & 0xFFFF0000, reserveEnd - (_DWORD)commitEnd) )
      __debugbreak();
    if ( (_WORD)commitEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 151, ASSERT_TYPE_ASSERT, "(IsAligned( commitBase, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( commitBase, MEM_VIRTUAL_PAGE_SIZE )") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 153, ASSERT_TYPE_ASSERT, "(commitSize > 0)", (const char *)&queryFormat, "commitSize > 0") )
      __debugbreak();
    Mem_Virtual_Commit(commitEnd, v4, user->flags, user->name, (const MemTrackType)user->type);
    v5 = user->reserveEnd;
    v6 = v4 + user->commitEnd;
    user->commitEnd = v6;
    if ( v6 != v5 )
    {
      LODWORD(v8) = v5;
      LODWORD(v7) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 158, ASSERT_TYPE_ASSERT, "( user->commitEnd ) == ( user->reserveEnd )", "%s == %s\n\t%i, %i", "user->commitEnd", "user->reserveEnd", v7, v8) )
        __debugbreak();
    }
  }
}

/*
==============
Mem_HunkUser_CopyNStringInternal
==============
*/
char *Mem_HunkUser_CopyNStringInternal(HunkUser *user, const char *in, int len, const char *name)
{
  size_t v4; 
  char *v6; 

  v4 = len;
  v6 = (char *)Mem_HunkUser_AllocInternal(user, len + 1i64, 1ui64, name);
  strncpy(v6, in, v4);
  v6[v4] = 0;
  return v6;
}

/*
==============
Mem_HunkUser_CopyStringInternal
==============
*/
char *Mem_HunkUser_CopyStringInternal(HunkUser *user, const char *in, const char *name)
{
  char *v3; 
  __int64 v4; 
  char *result; 
  char *v7; 
  char v8; 

  v3 = (char *)in;
  v4 = -1i64;
  while ( in[++v4] != 0 )
    ;
  result = (char *)Mem_HunkUser_AllocInternal(user, (unsigned int)(v4 + 1), 1ui64, name);
  v7 = (char *)(result - v3);
  do
  {
    v8 = *v3;
    v3[(_QWORD)v7] = *v3;
    ++v3;
  }
  while ( v8 );
  return result;
}

/*
==============
Mem_HunkUser_Create
==============
*/
IWMemID *Mem_HunkUser_Create(unsigned __int64 reserveSize, const char *name, const MemTrackType type, const Mem_AllocFlags flags)
{
  unsigned __int64 v5; 
  IWMemID *v8; 
  ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *v9; 
  signed __int64 v10; 
  __int64 v11; 
  ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *v12; 
  char *v13; 
  bool v14; 
  signed __int64 v15; 
  __int64 v16; 
  char v18; 

  v5 = (reserveSize + 65599) & 0xFFFFFFFFFFFF0000ui64;
  v8 = (IWMemID *)Mem_Virtual_Reserve(v5, name, type);
  Mem_Virtual_Commit(v8, 0x10000ui64, flags, name, type);
  if ( (_WORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 82, ASSERT_TYPE_ASSERT, "(IsAligned( reinterpret_cast<uintptr_t>( user ), MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( reinterpret_cast<uintptr_t>( user ), MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  v8[2] = (IWMemID)&v8[8];
  Sys_LockWrite(&s_hunkUserTrackLock);
  v9 = &s_hunkUserTrack;
  v10 = (signed __int64)(8 * s_hunkUserTrack.m_size) >> 3;
  while ( v10 > 0 )
  {
    v11 = v10 >> 1;
    if ( *(_QWORD *)&v9->m_data.m_buffer[8 * (v10 >> 1)] >= (unsigned __int64)v8 )
    {
      v10 >>= 1;
    }
    else
    {
      v9 = (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)v9 + 8 * v11 + 8);
      v10 += -1 - v11;
    }
  }
  if ( v9 == (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + 8 * s_hunkUserTrack.m_size) || (unsigned __int64)v8 < *(_QWORD *)v9->m_data.m_buffer )
  {
    if ( s_hunkUserTrack.m_size == 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (v9 < &s_hunkUserTrack || v9 > (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + 8 * s_hunkUserTrack.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( (((_BYTE)v9 - (unsigned __int8)&s_hunkUserTrack) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( &v18 >= (char *)v9 && &v18 < &s_hunkUserTrack.m_data.m_buffer[8 * s_hunkUserTrack.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v12 = (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + 8 * s_hunkUserTrack.m_size);
    if ( v9 != v12 )
    {
      v13 = &s_hunkUserTrack.m_data.m_buffer[8 * s_hunkUserTrack.m_size + 8];
      if ( v9 == (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v12 == (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v14 = v12 <= v9;
      if ( v12 < v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v14 = v12 <= v9;
      }
      if ( !v14 )
      {
        v15 = v13 - (char *)v12;
        do
        {
          v16 = *(_QWORD *)&v12[-1].m_keyAccessor.ntl::unary_function<HunkUser const *,HunkUser const *>;
          v12 = (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)v12 - 8);
          *(_QWORD *)&v12->m_data.m_buffer[v15] = v16;
        }
        while ( v12 > v9 );
      }
    }
    ++s_hunkUserTrack.m_size;
    *(_QWORD *)v9->m_data.m_buffer = v8;
  }
  Sys_UnlockWrite(&s_hunkUserTrackLock);
  IWMem_Allocator_CreateFixed(v8 + 6, name, (IWMemAllocatorType)8, v8, v5);
  if ( (*(_QWORD *)&v8[2] & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 96, ASSERT_TYPE_ASSERT, "( ( !( user->pos & 31 ) ) )", "( user->pos ) = 0x%llx", *(_QWORD *)&v8[2]) )
    __debugbreak();
  *v8 = (IWMemID)((char *)v8 + v5);
  v8[1] = (IWMemID)&v8[0x2000];
  if ( *(_QWORD *)v8 < (unsigned __int64)&v8[0x2000] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 99, ASSERT_TYPE_ASSERT, "(user->reserveEnd >= user->commitEnd)", (const char *)&queryFormat, "user->reserveEnd >= user->commitEnd") )
    __debugbreak();
  if ( *(_WORD *)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 100, ASSERT_TYPE_ASSERT, "(IsAligned( user->reserveEnd, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( user->reserveEnd, MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  if ( *(_WORD *)&v8[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 101, ASSERT_TYPE_ASSERT, "(IsAligned( user->commitEnd, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( user->commitEnd, MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  v8[3] = (IWMemID)name;
  *(_DWORD *)&v8[4] = type;
  *((_DWORD *)&v8[4] + 1) = flags;
  *(_DWORD *)&v8[5] = -559034355;
  if ( (flags & 4) != 0 )
  {
    IWMem_Allocator_SetFlag(v8[6], ForceNoCallstacks);
    IWMem_Allocator_SetFlag(v8[6], MinimalTracking);
    Mem_Virtual_SetMinimalTracking(v8);
  }
  IWMem_Profile_Push("Hunkuser Header");
  IWMem_Alloc(v8[6], v8, 0x40ui64);
  IWMem_Profile_Pop();
  return v8;
}

/*
==============
Mem_HunkUser_DecommitUnused
==============
*/
void Mem_HunkUser_DecommitUnused(HunkUser *user)
{
  void *v2; 
  unsigned __int64 v3; 

  Mem_HunkUser_CheckIsValid(user);
  v2 = (void *)((user->pos + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
  if ( LOWORD(user->commitEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 337, ASSERT_TYPE_ASSERT, "(IsAligned( user->commitEnd, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( user->commitEnd, MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  if ( user->commitEnd < (unsigned __int64)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 339, ASSERT_TYPE_ASSERT, "(user->commitEnd >= alignedPos)", (const char *)&queryFormat, "user->commitEnd >= alignedPos") )
    __debugbreak();
  v3 = user->commitEnd - (_QWORD)v2;
  if ( v3 )
  {
    Mem_Virtual_Decommit(v2, v3);
    user->commitEnd = (unsigned __int64)v2;
  }
  user->flags &= ~2u;
}

/*
==============
Mem_HunkUser_Destroy
==============
*/
void Mem_HunkUser_Destroy(HunkUser *user)
{
  ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *v2; 
  unsigned __int64 v3; 
  signed __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *v7; 
  char *v8; 
  ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 

  Mem_HunkUser_CheckIsValid(user);
  Sys_LockWrite(&s_hunkUserTrackLock);
  v2 = &s_hunkUserTrack;
  v3 = 8 * s_hunkUserTrack.m_size;
  v4 = (signed __int64)(8 * s_hunkUserTrack.m_size) >> 3;
  while ( v4 > 0 )
  {
    v5 = v4 >> 1;
    if ( *(_QWORD *)&v2->m_data.m_buffer[8 * (v4 >> 1)] >= (unsigned __int64)user )
    {
      v4 >>= 1;
    }
    else
    {
      v2 = (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)v2 + 8 * v5 + 8);
      v4 += -1 - v5;
    }
  }
  if ( v2 == (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + v3) )
    goto LABEL_43;
  if ( (unsigned __int64)user < *(_QWORD *)v2->m_data.m_buffer )
    v2 = (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + v3);
  if ( v2 == (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + v3) )
  {
LABEL_43:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 292, ASSERT_TYPE_ASSERT, "(findIt != s_hunkUserTrack.end())", "%s\n\tCouldn't find hunkuser (%p). Double destroy, or incorrect pointer?", "findIt != s_hunkUserTrack.end()", user) )
      __debugbreak();
  }
  if ( !s_hunkUserTrack.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
    __debugbreak();
  if ( (v2 < &s_hunkUserTrack || v2 > (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + 8 * s_hunkUserTrack.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  v6 = (char *)v2 - (char *)&s_hunkUserTrack;
  if ( (((_BYTE)v2 - (unsigned __int8)&s_hunkUserTrack) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
    __debugbreak();
  if ( v2 == (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + 8 * s_hunkUserTrack.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
    __debugbreak();
  v7 = &s_hunkUserTrack;
  if ( s_hunkUserTrack.m_size )
    v7 = (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + 8 * (v6 >> 3));
  v8 = &v7->m_data.m_buffer[8];
  v9 = (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + 8 * s_hunkUserTrack.m_size);
  if ( &v7->m_data.m_buffer[8] == (char *)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v9 == v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  if ( v9 < (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
    __debugbreak();
  v10 = 0i64;
  v11 = (unsigned __int64)((char *)v9 - v8 + 7) >> 3;
  if ( v8 > (char *)v9 )
    v11 = 0i64;
  if ( v11 )
  {
    do
    {
      ++v10;
      *(_QWORD *)v7->m_data.m_buffer = *(_QWORD *)v8;
      v7 = (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)v7 + 8);
      v8 += 8;
    }
    while ( v10 < v11 );
  }
  --s_hunkUserTrack.m_size;
  Sys_UnlockWrite(&s_hunkUserTrackLock);
  IWMem_Allocator_Destroy(user->iwMemID);
  Mem_Virtual_Free(user);
}

/*
==============
Mem_HunkUser_DumpStats
==============
*/
void Mem_HunkUser_DumpStats(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  const HunkUser **v3; 
  const HunkUser *v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *i; 
  volatile int readCount; 

  if ( s_hunkUserTrackLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  v0 = (unsigned __int64)&s_hunkUserTrackLock & 3;
  if ( ((unsigned __int8)&s_hunkUserTrackLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_hunkUserTrackLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_hunkUserTrackLock);
  while ( s_hunkUserTrackLock.writeCount )
    Sys_Sleep(0);
  if ( s_hunkUserTrack.m_size )
  {
    v1 = 0i64;
    v2 = 0i64;
    Com_Printf(16, "\n\nHunk Users: %zu\n", s_hunkUserTrack.m_size);
    v3 = (const HunkUser **)&s_hunkUserTrack;
    if ( &s_hunkUserTrack != (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + 8 * s_hunkUserTrack.m_size) )
    {
      do
      {
        v4 = *v3;
        Mem_HunkUser_CheckIsValid(*v3);
        if ( v4->reserveEnd < (unsigned __int64)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 412, ASSERT_TYPE_ASSERT, "(user.reserveEnd >= reinterpret_cast<uintptr_t>( &user ))", (const char *)&queryFormat, "user.reserveEnd >= reinterpret_cast<uintptr_t>( &user )") )
          __debugbreak();
        if ( v4->commitEnd < (unsigned __int64)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 413, ASSERT_TYPE_ASSERT, "(user.commitEnd >= reinterpret_cast<uintptr_t>( &user ))", (const char *)&queryFormat, "user.commitEnd >= reinterpret_cast<uintptr_t>( &user )") )
          __debugbreak();
        if ( v4->pos < (unsigned __int64)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 414, ASSERT_TYPE_ASSERT, "(user.pos >= reinterpret_cast<uintptr_t>( &user ))", (const char *)&queryFormat, "user.pos >= reinterpret_cast<uintptr_t>( &user )") )
          __debugbreak();
        v5 = v4->reserveEnd - (_QWORD)v4;
        v6 = v4->commitEnd - (_QWORD)v4;
        Com_Printf(16, "\t%7zu/%7zu KB committed : 0x%p : %s\n", v6 >> 10, v5 >> 10, v4, v4->name);
        v1 += v5;
        v2 += v6;
        ++v3;
      }
      while ( v3 != (const HunkUser **)((char *)&s_hunkUserTrack + 8 * s_hunkUserTrack.m_size) );
      v0 = (unsigned __int64)&s_hunkUserTrackLock & 3;
    }
    Com_Printf(16, "\nTotal committed: %7zu/%7zu KB\n\n", v2 >> 10, v1 >> 10);
    if ( Sys_IsMainThread() )
    {
      for ( i = &s_hunkUserTrack; i != (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)&s_hunkUserTrack + 8 * s_hunkUserTrack.m_size); i = (ntl::fixed_vector_set<HunkUser const *,128,ntl::less<HunkUser const *,HunkUser const *> > *)((char *)i + 8) )
        IWMem_DumpAllocatorProfile(*(IWMemID *)(*(_QWORD *)i->m_data.m_buffer + 48i64));
    }
  }
  if ( s_hunkUserTrackLock.readCount <= 0 )
  {
    readCount = s_hunkUserTrackLock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_hunkUserTrackLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_hunkUserTrackLock);
}

/*
==============
Mem_HunkUser_GetFreeReserveAmount
==============
*/
unsigned __int64 Mem_HunkUser_GetFreeReserveAmount(const HunkUser *user)
{
  Mem_HunkUser_CheckIsValid(user);
  if ( user->reserveEnd < user->pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 308, ASSERT_TYPE_ASSERT, "(user->reserveEnd >= user->pos)", (const char *)&queryFormat, "user->reserveEnd >= user->pos") )
    __debugbreak();
  return user->reserveEnd - user->pos;
}

/*
==============
Mem_HunkUser_GetPos
==============
*/
unsigned __int64 Mem_HunkUser_GetPos(HunkUser *user)
{
  Mem_HunkUser_CheckIsValid(user);
  return user->pos;
}

/*
==============
Mem_HunkUser_GetReserveEnd
==============
*/
unsigned __int64 Mem_HunkUser_GetReserveEnd(const HunkUser *user)
{
  Mem_HunkUser_CheckIsValid(user);
  return user->reserveEnd;
}

/*
==============
Mem_HunkUser_GetUsedSize
==============
*/
unsigned __int64 Mem_HunkUser_GetUsedSize(const HunkUser *user)
{
  Mem_HunkUser_CheckIsValid(user);
  return user->pos - (_QWORD)user - 64;
}

/*
==============
Mem_HunkUser_IsPtrInHunk
==============
*/
bool Mem_HunkUser_IsPtrInHunk(const HunkUser *user, const void *data)
{
  Mem_HunkUser_CheckIsValid(user);
  return data >= user->buf && (unsigned __int64)data < user->reserveEnd;
}

/*
==============
Mem_HunkUser_Reset
==============
*/
void Mem_HunkUser_Reset(HunkUser *user)
{
  unsigned __int64 v2; 
  unsigned __int64 pos; 
  unsigned __int8 *buf; 
  char v5; 

  Mem_HunkUser_CheckIsValid(user);
  v2 = user->commitEnd - (_QWORD)user;
  if ( LOWORD(user->commitEnd) != (_WORD)user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 254, ASSERT_TYPE_ASSERT, "(IsAligned( commitSize, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( commitSize, MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  pos = user->pos;
  if ( pos > (unsigned __int64)user->buf )
    IWMem_FreeRange(user->iwMemID, user->buf, pos - (_QWORD)user - 64);
  if ( v2 > 0x10000 && (user->flags & 2) == 0 )
  {
    Mem_Virtual_Decommit(&user[910].pos, v2 - 0x10000);
    user->commitEnd = (unsigned __int64)&user[910].pos;
  }
  buf = user->buf;
  v5 = ~LOBYTE(user->flags);
  user->pos = (unsigned __int64)user->buf;
  if ( (v5 & 1) != 0 )
    memset_0(buf, 0, 0xFFC0ui64);
  else
    DebugWipe(buf, 0xFFC0ui64);
}

/*
==============
Mem_HunkUser_SetPos
==============
*/
void Mem_HunkUser_SetPos(HunkUser *user, void *pos)
{
  Mem_HunkUser_CheckIsValid(user);
  if ( pos < user->buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 232, ASSERT_TYPE_ASSERT, "(pos >= user->buf)", (const char *)&queryFormat, "pos >= user->buf") )
    __debugbreak();
  if ( (unsigned __int64)pos > user->pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkuser.cpp", 233, ASSERT_TYPE_ASSERT, "(reinterpret_cast<uintptr_t>( pos ) <= user->pos)", (const char *)&queryFormat, "reinterpret_cast<uintptr_t>( pos ) <= user->pos") )
    __debugbreak();
  IWMem_FreeRange(user->iwMemID, pos, user->pos - (_QWORD)pos);
  user->pos = (unsigned __int64)pos;
}

