/*
==============
DB_PendingZones_Cancel
==============
*/

void __fastcall DB_PendingZones_Cancel(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  ?DB_PendingZones_Cancel@@YAXPEBUDB_FastfileInfo@@I@Z(zoneInfo, zoneCount);
}

/*
==============
DB_PendingZones_CheckPendingZonesForPostLoad
==============
*/

bool __fastcall DB_PendingZones_CheckPendingZonesForPostLoad()
{
  return ?DB_PendingZones_CheckPendingZonesForPostLoad@@YA_NXZ();
}

/*
==============
DB_PendingList::TryGetNextByZone
==============
*/

bool __fastcall DB_PendingList::TryGetNextByZone(DB_PendingList *this, DB_PendingZoneInfo *outZoneInfo, const DB_FastfileInfo *const zoneInfo, const unsigned int zoneCount)
{
  return ?TryGetNextByZone@DB_PendingList@@QEAA_NAEAUDB_PendingZoneInfo@@QEBUDB_FastfileInfo@@I@Z(this, outZoneInfo, zoneInfo, zoneCount);
}

/*
==============
DB_PendingZones_TryGetNext
==============
*/

bool __fastcall DB_PendingZones_TryGetNext(DB_PendingZoneInfo *outInfo)
{
  return ?DB_PendingZones_TryGetNext@@YA_NPEAUDB_PendingZoneInfo@@@Z(outInfo);
}

/*
==============
DB_PendingList::TryFastTransientCancel
==============
*/

bool __fastcall DB_PendingList::TryFastTransientCancel(DB_PendingList *this, const char *const zoneName)
{
  return ?TryFastTransientCancel@DB_PendingList@@QEAA_NQEBD@Z(this, zoneName);
}

/*
==============
DB_PendingList::CheckSizeForAdd
==============
*/

void __fastcall DB_PendingList::CheckSizeForAdd(DB_PendingList *this)
{
  ?CheckSizeForAdd@DB_PendingList@@QEAAXXZ(this);
}

/*
==============
DB_PendingZones_TryFastTransientCancel
==============
*/

bool __fastcall DB_PendingZones_TryFastTransientCancel(const char *zoneName)
{
  return ?DB_PendingZones_TryFastTransientCancel@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_PendingList::IsPending
==============
*/

bool __fastcall DB_PendingList::IsPending(DB_PendingList *this, const char *const zoneName, bool parentLookup)
{
  return ?IsPending@DB_PendingList@@QEBA_NQEBD_N@Z(this, zoneName, parentLookup);
}

/*
==============
DB_PendingZones_QueuePaused
==============
*/

void __fastcall DB_PendingZones_QueuePaused(const DB_PendingZoneInfo *zoneInfo)
{
  ?DB_PendingZones_QueuePaused@@YAXAEBUDB_PendingZoneInfo@@@Z(zoneInfo);
}

/*
==============
DB_PendingZones_Pause
==============
*/

void __fastcall DB_PendingZones_Pause(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  ?DB_PendingZones_Pause@@YAXPEBUDB_FastfileInfo@@I@Z(zoneInfo, zoneCount);
}

/*
==============
DB_PendingZones_HasPendingZones
==============
*/

bool __fastcall DB_PendingZones_HasPendingZones()
{
  return ?DB_PendingZones_HasPendingZones@@YA_NXZ();
}

/*
==============
DB_PendingZones_IsZonePendingPaused
==============
*/

bool __fastcall DB_PendingZones_IsZonePendingPaused(const char *zoneName, bool parentLookup)
{
  return ?DB_PendingZones_IsZonePendingPaused@@YA_NPEBD_N@Z(zoneName, parentLookup);
}

/*
==============
DB_PendingList::AddTail
==============
*/

void __fastcall DB_PendingList::AddTail(DB_PendingList *this, const DB_PendingZoneInfo *pendingInfo, const bool wasUnpaused)
{
  ?AddTail@DB_PendingList@@QEAAXAEBUDB_PendingZoneInfo@@_N@Z(this, pendingInfo, wasUnpaused);
}

/*
==============
DB_PendingList::SetInflightTransientPriority
==============
*/

void __fastcall DB_PendingList::SetInflightTransientPriority(DB_PendingList *this, const char *const zoneName, const unsigned int priority)
{
  ?SetInflightTransientPriority@DB_PendingList@@QEAAXQEBDI@Z(this, zoneName, priority);
}

/*
==============
DB_PendingZones_IsZonePending
==============
*/

bool __fastcall DB_PendingZones_IsZonePending(const char *zoneName, bool parentLookup)
{
  return ?DB_PendingZones_IsZonePending@@YA_NPEBD_N@Z(zoneName, parentLookup);
}

/*
==============
DB_PendingList::InsertInPriorityOrder
==============
*/

void __fastcall DB_PendingList::InsertInPriorityOrder(DB_PendingList *this, const DB_PendingZoneInfoQueueEntry *entry)
{
  ?InsertInPriorityOrder@DB_PendingList@@QEAAXAEBUDB_PendingZoneInfoQueueEntry@@@Z(this, entry);
}

/*
==============
DB_PendingZones_Unpause
==============
*/

void __fastcall DB_PendingZones_Unpause(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  ?DB_PendingZones_Unpause@@YAXPEBUDB_FastfileInfo@@I@Z(zoneInfo, zoneCount);
}

/*
==============
DB_PendingList::AddHead
==============
*/

void __fastcall DB_PendingList::AddHead(DB_PendingList *this, const DB_PendingZoneInfo *pendingInfo)
{
  ?AddHead@DB_PendingList@@QEAAXAEBUDB_PendingZoneInfo@@@Z(this, pendingInfo);
}

/*
==============
DB_PendingZones_QueueZoneSet
==============
*/

void __fastcall DB_PendingZones_QueueZoneSet(const char *parentName, unsigned int zoneFlags, bool isBaseMap, bool loadServerZone, const DB_FastFileFailureMode failureMode, const unsigned int priority)
{
  ?DB_PendingZones_QueueZoneSet@@YAXPEBDI_N1W4DB_FastFileFailureMode@@I@Z(parentName, zoneFlags, isBaseMap, loadServerZone, failureMode, priority);
}

/*
==============
DB_PendingZones_GetFlags
==============
*/

unsigned int __fastcall DB_PendingZones_GetFlags()
{
  return ?DB_PendingZones_GetFlags@@YAIXZ();
}

/*
==============
DB_PendingList::Cancel
==============
*/

void __fastcall DB_PendingList::Cancel(DB_PendingList *this, const DB_FastfileInfo *info)
{
  ?Cancel@DB_PendingList@@QEAAXAEBUDB_FastfileInfo@@@Z(this, info);
}

/*
==============
DB_PendingZones_SetInflightTransientPriority
==============
*/

void __fastcall DB_PendingZones_SetInflightTransientPriority(const char *zoneName, unsigned int priority)
{
  ?DB_PendingZones_SetInflightTransientPriority@@YAXPEBDI@Z(zoneName, priority);
}

/*
==============
DB_PendingZones_HasPausedZones
==============
*/

bool __fastcall DB_PendingZones_HasPausedZones()
{
  return ?DB_PendingZones_HasPausedZones@@YA_NXZ();
}

/*
==============
DB_PendingList::AddHead
==============
*/
void DB_PendingList::AddHead(DB_PendingList *this, const DB_PendingZoneInfo *pendingInfo)
{
  __m256i v4; 
  __m256i *v5; 
  char *v6; 
  bool v7; 
  int v8; 
  __int128 v9; 
  __m256i v10; 
  __m256i v11; 
  __m256i v12; 
  char v13[144]; 
  int v14; 

  DB_PendingList::CheckSizeForAdd(this);
  v10 = *(__m256i *)pendingInfo->parentZoneName;
  v11 = *(__m256i *)&pendingInfo->parentZoneName[32];
  v12 = *(__m256i *)pendingInfo->fastfileName;
  v4 = *(__m256i *)&pendingInfo->fastfileName[32];
  LOBYTE(v14) = 0;
  v9 = *(_OWORD *)&pendingInfo->flags;
  if ( 1956 == this->m_list.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
    __debugbreak();
  if ( this > (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  if ( v13 >= (char *)this && v13 < &this->m_list.m_data.m_buffer[148 * this->m_list.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
    __debugbreak();
  v5 = (__m256i *)((char *)this + 148 * this->m_list.m_size);
  if ( this != (DB_PendingList *)v5 )
  {
    v6 = &v5[4].m256i_i8[20];
    if ( this == (DB_PendingList *)((char *)&v5[4].m256i_u64[2] + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
      __debugbreak();
    if ( v5 == (__m256i *)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
      __debugbreak();
    v7 = v5 <= (__m256i *)this;
    if ( v5 < (__m256i *)this )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
        __debugbreak();
      v7 = v5 <= (__m256i *)this;
    }
    if ( !v7 )
    {
      do
      {
        v5 = (__m256i *)((char *)v5 - 148);
        v6 -= 148;
        *(__m256i *)v6 = *v5;
        *((__m256i *)v6 + 1) = v5[1];
        *((__m256i *)v6 + 2) = v5[2];
        *((__m256i *)v6 + 3) = v5[3];
        *((_OWORD *)v6 + 8) = *(_OWORD *)v5[4].m256i_i8;
        *((_DWORD *)v6 + 36) = v5[4].m256i_i32[4];
      }
      while ( v5 > (__m256i *)this );
    }
  }
  ++this->m_list.m_size;
  v8 = v14;
  *(__m256i *)this->m_list.m_data.m_buffer = v10;
  *(__m256i *)&this->m_list.m_data.m_buffer[32] = v11;
  *(__m256i *)&this->m_list.m_data.m_buffer[64] = v12;
  *(__m256i *)&this->m_list.m_data.m_buffer[96] = v4;
  *(_OWORD *)&this->m_list.m_data.m_buffer[128] = v9;
  *(_DWORD *)&this->m_list.m_data.m_buffer[144] = v8;
}

/*
==============
DB_PendingList::AddTail
==============
*/
void DB_PendingList::AddTail(DB_PendingList *this, const DB_PendingZoneInfo *pendingInfo, const bool wasUnpaused)
{
  __m256i v6; 
  __m256i *v7; 
  __int128 v8; 
  __m256i v9; 
  __m256i v10; 
  __m256i v11; 
  __m256i v12; 
  int v13; 

  DB_PendingList::CheckSizeForAdd(this);
  v6 = *(__m256i *)pendingInfo->parentZoneName;
  v10 = *(__m256i *)&pendingInfo->parentZoneName[32];
  v11 = *(__m256i *)pendingInfo->fastfileName;
  v12 = *(__m256i *)&pendingInfo->fastfileName[32];
  v8 = *(_OWORD *)&pendingInfo->flags;
  v9 = *(__m256i *)pendingInfo->parentZoneName;
  LOBYTE(v13) = wasUnpaused;
  if ( this->m_list.m_size >= 0x7A4 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    v6 = v9;
  }
  v7 = (__m256i *)((char *)this + 148 * this->m_list.m_size);
  *v7 = v6;
  v7[1] = v10;
  v7[2] = v11;
  v7[3] = v12;
  *(_OWORD *)v7[4].m256i_i8 = v8;
  v7[4].m256i_i32[4] = v13;
  ++this->m_list.m_size;
}

/*
==============
DB_PendingList::Cancel
==============
*/
void DB_PendingList::Cancel(DB_PendingList *this, const DB_FastfileInfo *info)
{
  DB_PendingList *v4; 
  signed __int64 v5; 
  unsigned __int64 m_size; 
  char *v7; 
  DB_PendingList *v8; 
  bool v9; 
  DB_PendingList *v10; 
  int v11; 

  v4 = this;
  while ( v4 != (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) )
  {
    if ( DB_Zones_FastfileInfoMatches(info, *(_DWORD *)&v4->m_list.m_data.m_buffer[128], v4->m_list.m_data.m_buffer) )
    {
      Com_Printf(16, "DB_PendingZones::Cancel : %s cancelled\n", &v4->m_list.m_data.m_buffer[64]);
      if ( !this->m_list.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v4 < this || v4 > (DB_PendingList *)((char *)this + 148 * this->m_list.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v5 = (char *)v4 - (char *)this;
      if ( (char *)v4 - (char *)this != 148 * (((char *)v4 - (char *)this) / 0x94ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v4 == (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      m_size = this->m_list.m_size;
      v4 = this;
      if ( m_size )
        v4 = (DB_PendingList *)((char *)this + 148 * (v5 / 148));
      v7 = &v4->m_list.m_data.m_buffer[148];
      v8 = (DB_PendingList *)((char *)this + 148 * m_size);
      if ( &v4->m_list.m_data.m_buffer[148] == (char *)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v8 == v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v9 = v7 < (char *)v8;
      if ( v7 > (char *)v8 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v9 = v7 < (char *)v8;
      }
      if ( v9 )
      {
        v10 = v4;
        do
        {
          *(__m256i *)v10->m_list.m_data.m_buffer = *(__m256i *)v7;
          *(__m256i *)&v10->m_list.m_data.m_buffer[32] = *((__m256i *)v7 + 1);
          *(__m256i *)&v10->m_list.m_data.m_buffer[64] = *((__m256i *)v7 + 2);
          *(__m256i *)&v10->m_list.m_data.m_buffer[96] = *((__m256i *)v7 + 3);
          *(_OWORD *)&v10->m_list.m_data.m_buffer[128] = *((_OWORD *)v7 + 8);
          v11 = *((_DWORD *)v7 + 36);
          v7 += 148;
          *(_DWORD *)&v10->m_list.m_data.m_buffer[144] = v11;
          v10 = (DB_PendingList *)((char *)v10 + 148);
        }
        while ( v7 < (char *)v8 );
      }
      --this->m_list.m_size;
    }
    else
    {
      v4 = (DB_PendingList *)((char *)v4 + 148);
    }
  }
}

/*
==============
DB_PendingList::CheckSizeForAdd
==============
*/
void DB_PendingList::CheckSizeForAdd(DB_PendingList *this)
{
  DB_PendingList *p_m_size; 
  DB_PendingList *v3; 

  p_m_size = (DB_PendingList *)&this->m_list.m_size;
  if ( this->m_list.m_size == 1956 )
  {
    v3 = this;
    if ( this != p_m_size )
    {
      do
      {
        Com_Printf(16, "Pending zone:: %s\n", &v3->m_list.m_data.m_buffer[64]);
        v3 = (DB_PendingList *)((char *)v3 + 148);
      }
      while ( v3 != (DB_PendingList *)((char *)this + 148 * *(_QWORD *)p_m_size->m_list.m_data.m_buffer) );
    }
    Sys_Error((const ObfuscateErrorText)&stru_143DFF3D8);
  }
}

/*
==============
DB_PendingZones_Cancel
==============
*/
void DB_PendingZones_Cancel(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  __int64 v2; 

  v2 = zoneCount;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 555, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !zoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 556, ASSERT_TYPE_ASSERT, "(zoneInfo)", (const char *)&queryFormat, "zoneInfo") )
    __debugbreak();
  Sys_LockWrite(&s_pendingZones.lock);
  if ( (_DWORD)v2 )
  {
    do
    {
      DB_PendingList::Cancel(&s_pendingZones.pendingList, zoneInfo);
      DB_PendingList::Cancel(&s_pendingZones.pausedList, zoneInfo++);
      --v2;
    }
    while ( v2 );
  }
  Sys_UnlockWrite(&s_pendingZones.lock);
}

/*
==============
DB_PendingZones_CheckPendingZonesForPostLoad
==============
*/
__int64 DB_PendingZones_CheckPendingZonesForPostLoad()
{
  unsigned __int8 v0; 
  DB_PendingZonesGlob *i; 
  char v2; 
  const char *v3; 

  if ( s_pendingZones.lock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedIncrement(&s_pendingZones.lock.readCount);
  while ( s_pendingZones.lock.writeCount )
    Sys_Sleep(0);
  v0 = 0;
  for ( i = &s_pendingZones; i != (DB_PendingZonesGlob *)((char *)&s_pendingZones + 148 * s_pendingZones.pendingList.m_list.m_size); i = (DB_PendingZonesGlob *)((char *)i + 148) )
  {
    v2 = i->pendingList.m_list.m_data.m_buffer[144];
    v3 = "Pending zone in queue that wasn't unpaused: %s (THIS IS BAD)\n";
    if ( v2 )
      v3 = "Pending zone in queue that was unpaused: %s\n";
    if ( !v2 )
      v0 = 1;
    Com_Printf(16, v3, i);
  }
  if ( s_pendingZones.lock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_pendingZones.lock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedDecrement(&s_pendingZones.lock.readCount);
  return v0;
}

/*
==============
DB_PendingZones_GetFlags
==============
*/
__int64 DB_PendingZones_GetFlags()
{
  DB_PendingZonesGlob *v0; 
  unsigned int v1; 
  DB_PendingZonesGlob *v2; 
  volatile int readCount; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 488, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_pendingZones.lock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedIncrement(&s_pendingZones.lock.readCount);
  while ( s_pendingZones.lock.writeCount )
    Sys_Sleep(0);
  v0 = &s_pendingZones;
  v1 = 0;
  v2 = (DB_PendingZonesGlob *)((char *)&s_pendingZones + 148 * s_pendingZones.pendingList.m_list.m_size);
  if ( &s_pendingZones != v2 )
  {
    do
    {
      v1 |= *(_DWORD *)&v0->pendingList.m_list.m_data.m_buffer[128];
      v0 = (DB_PendingZonesGlob *)((char *)v0 + 148);
    }
    while ( v0 != v2 );
  }
  if ( s_pendingZones.lock.readCount <= 0 )
  {
    readCount = s_pendingZones.lock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedDecrement(&s_pendingZones.lock.readCount);
  return v1;
}

/*
==============
DB_PendingZones_HasPausedZones
==============
*/
_BOOL8 DB_PendingZones_HasPausedZones()
{
  bool v0; 
  volatile int readCount; 

  if ( s_pendingZones.lock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedIncrement(&s_pendingZones.lock.readCount);
  while ( s_pendingZones.lock.writeCount )
    Sys_Sleep(0);
  v0 = s_pendingZones.pausedList.m_list.m_size != 0;
  if ( s_pendingZones.lock.readCount <= 0 )
  {
    readCount = s_pendingZones.lock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedDecrement(&s_pendingZones.lock.readCount);
  return v0;
}

/*
==============
DB_PendingZones_HasPendingZones
==============
*/
_BOOL8 DB_PendingZones_HasPendingZones()
{
  bool v0; 
  volatile int readCount; 

  if ( s_pendingZones.lock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedIncrement(&s_pendingZones.lock.readCount);
  while ( s_pendingZones.lock.writeCount )
    Sys_Sleep(0);
  v0 = s_pendingZones.pendingList.m_list.m_size != 0;
  if ( s_pendingZones.lock.readCount <= 0 )
  {
    readCount = s_pendingZones.lock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedDecrement(&s_pendingZones.lock.readCount);
  return v0;
}

/*
==============
DB_PendingZones_IsZonePending
==============
*/
_BOOL8 DB_PendingZones_IsZonePending(const char *zoneName, bool parentLookup)
{
  bool IsPending; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 508, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 502, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  if ( s_pendingZones.lock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedIncrement(&s_pendingZones.lock.readCount);
  while ( s_pendingZones.lock.writeCount )
    Sys_Sleep(0);
  IsPending = DB_PendingList::IsPending(&s_pendingZones.pendingList, zoneName, parentLookup);
  if ( s_pendingZones.lock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_pendingZones.lock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedDecrement(&s_pendingZones.lock.readCount);
  return IsPending;
}

/*
==============
DB_PendingZones_IsZonePendingPaused
==============
*/
_BOOL8 DB_PendingZones_IsZonePendingPaused(const char *zoneName, bool parentLookup)
{
  bool IsPending; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 524, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 502, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  if ( s_pendingZones.lock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedIncrement(&s_pendingZones.lock.readCount);
  while ( s_pendingZones.lock.writeCount )
    Sys_Sleep(0);
  IsPending = DB_PendingList::IsPending(&s_pendingZones.pausedList, zoneName, parentLookup);
  if ( s_pendingZones.lock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_pendingZones.lock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_pendingZones.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_pendingZones.lock) )
    __debugbreak();
  _InterlockedDecrement(&s_pendingZones.lock.readCount);
  return IsPending;
}

/*
==============
DB_PendingZones_Pause
==============
*/
void DB_PendingZones_Pause(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  DB_PendingZonesGlob *p_pausedList; 
  char *v5; 
  int v6; 
  DB_PendingZoneInfo outZoneInfo; 
  int v8; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 574, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !zoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 575, ASSERT_TYPE_ASSERT, "(zoneInfo)", (const char *)&queryFormat, "zoneInfo") )
    __debugbreak();
  Sys_LockWrite(&s_pendingZones.lock);
  for ( ; DB_PendingList::TryGetNextByZone(&s_pendingZones.pendingList, &outZoneInfo, zoneInfo, zoneCount); ++s_pendingZones.pausedList.m_list.m_size )
  {
    if ( s_pendingZones.pausedList.m_list.m_size == 1956 )
    {
      p_pausedList = (DB_PendingZonesGlob *)&s_pendingZones.pausedList;
      do
      {
        Com_Printf(16, "Pending zone:: %s\n", &p_pausedList->pendingList.m_list.m_data.m_buffer[64]);
        p_pausedList = (DB_PendingZonesGlob *)((char *)p_pausedList + 148);
      }
      while ( p_pausedList != (DB_PendingZonesGlob *)((char *)&s_pendingZones.pausedList + 148 * s_pendingZones.pausedList.m_list.m_size) );
      Sys_Error((const ObfuscateErrorText)&stru_143DFF3D8);
    }
    LOBYTE(v8) = 0;
    if ( s_pendingZones.pausedList.m_list.m_size >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    v5 = &s_pendingZones.pausedList.m_list.m_data.m_buffer[148 * s_pendingZones.pausedList.m_list.m_size];
    v6 = v8;
    *(DB_PendingZoneInfo *)v5 = outZoneInfo;
    *((_DWORD *)v5 + 36) = v6;
  }
  Sys_UnlockWrite(&s_pendingZones.lock);
}

/*
==============
DB_PendingZones_QueuePaused
==============
*/
void DB_PendingZones_QueuePaused(const DB_PendingZoneInfo *zoneInfo)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 608, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_LockWrite(&s_pendingZones.lock);
  DB_PendingList::AddHead(&s_pendingZones.pausedList, zoneInfo);
  Sys_UnlockWrite(&s_pendingZones.lock);
}

/*
==============
DB_PendingZones_QueueZoneSet
==============
*/
void DB_PendingZones_QueueZoneSet(const char *parentName, unsigned int zoneFlags, bool isBaseMap, bool loadServerZone, const DB_FastFileFailureMode failureMode, const unsigned int priority)
{
  bool v10; 
  const char *v11; 
  __int64 v12; 
  bool v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 
  bool v20; 
  bool IsTransientZoneName; 
  bool v22; 
  const char *v23; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  int v30; 
  const char *v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  int v36; 
  int v37; 
  const char *v38; 
  __int64 v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  int v44; 
  const char *v45; 
  __int64 v46; 
  char v47; 
  __int64 v48; 
  char v49; 
  char v50; 
  const char *v51; 
  __int64 v52; 
  char v53; 
  __int64 v54; 
  char v55; 
  const char *v56; 
  char v57; 
  __int64 v58; 
  char v59; 
  const dvar_t *v60; 
  unsigned int flags; 
  const char *CurrentRegionCode; 
  const char *CurrentLanguageCode; 
  int v64; 
  char v65; 
  unsigned int v67; 
  bool v68; 
  int m_size; 
  char dest[64]; 

  v65 = 0;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 308, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_LockWrite(&s_pendingZones.lock);
  if ( ((zoneFlags - 1) & zoneFlags) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 312, ASSERT_TYPE_ASSERT, "(IsPowerOf2( zoneFlags ))", (const char *)&queryFormat, "IsPowerOf2( zoneFlags )") )
    __debugbreak();
  v10 = loadServerZone && isBaseMap;
  v11 = "mp_frontend";
  v12 = 11i64;
  v13 = (zoneFlags & 0x200) == 0;
  if ( !parentName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v14 = (unsigned __int8)v11[parentName - "mp_frontend"];
    v15 = v12;
    v16 = *(unsigned __int8 *)v11++;
    --v12;
    if ( !v15 )
    {
LABEL_18:
      v19 = 0;
      goto LABEL_19;
    }
    if ( v14 != v16 )
    {
      v17 = v14 + 32;
      if ( v14 - 65 > 0x19 )
        v17 = v14;
      v14 = v17;
      v18 = v16 + 32;
      if ( v16 - 65 > 0x19 )
        v18 = v16;
      if ( v14 != v18 )
        break;
    }
    if ( !v14 )
      goto LABEL_18;
  }
  v19 = 1;
  if ( v14 < v18 )
    v19 = -1;
LABEL_19:
  v20 = 0;
  if ( v19 )
    v20 = v10;
  v68 = v20;
  m_size = s_pendingZones.pendingList.m_list.m_size;
  if ( s_pendingZones.pendingList.m_list.m_size > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", LODWORD(s_pendingZones.pendingList.m_list.m_size), "unsigned", s_pendingZones.pendingList.m_list.m_size) )
    __debugbreak();
  v67 = 7;
  if ( (zoneFlags & 0xFF000) != 0 )
  {
    v13 = 0;
    v65 = 1;
    if ( (zoneFlags & 0x5000) != 0 )
    {
      v67 = 1;
    }
    else if ( (zoneFlags & 0xFA000) != 0 )
    {
      v67 = 1;
    }
  }
  else if ( (zoneFlags & 0x3F00000) != 0 )
  {
    IsTransientZoneName = DB_Zones_IsTransientZoneName(parentName);
    v22 = (zoneFlags & 0x200) == 0;
    if ( IsTransientZoneName )
      v22 = 0;
    v13 = v22;
  }
  v23 = "mychanges";
  v24 = 0x7FFFFFFFi64;
  v25 = 0x7FFFFFFFi64;
  if ( !parentName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v26 = (unsigned __int8)v23[parentName - "mychanges"];
    v27 = v25;
    v28 = *(unsigned __int8 *)v23++;
    --v25;
    if ( !v27 )
      break;
    if ( v26 != v28 )
    {
      v29 = v26 + 32;
      if ( (unsigned int)(v26 - 65) > 0x19 )
        v29 = v26;
      v26 = v29;
      v30 = v28 + 32;
      if ( (unsigned int)(v28 - 65) > 0x19 )
        v30 = v28;
      if ( v26 != v30 )
      {
        v31 = "mychanges_original";
        v32 = 0x7FFFFFFFi64;
        if ( !parentName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v33 = (unsigned __int8)v31[parentName - "mychanges_original"];
          v34 = v32;
          v35 = *(unsigned __int8 *)v31++;
          --v32;
          if ( !v34 )
            goto LABEL_71;
          if ( v33 != v35 )
          {
            v36 = v33 + 32;
            if ( (unsigned int)(v33 - 65) > 0x19 )
              v36 = v33;
            v33 = v36;
            v37 = v35 + 32;
            if ( (unsigned int)(v35 - 65) > 0x19 )
              v37 = v35;
            if ( v33 != v37 )
            {
              v38 = "myparticles";
              v39 = 0x7FFFFFFFi64;
              if ( !parentName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              while ( 1 )
              {
                v40 = (unsigned __int8)v38[parentName - "myparticles"];
                v41 = v39;
                v42 = *(unsigned __int8 *)v38++;
                --v39;
                if ( !v41 )
                  goto LABEL_71;
                if ( v40 != v42 )
                {
                  v43 = v40 + 32;
                  if ( (unsigned int)(v40 - 65) > 0x19 )
                    v43 = v40;
                  v40 = v43;
                  v44 = v42 + 32;
                  if ( (unsigned int)(v42 - 65) > 0x19 )
                    v44 = v42;
                  if ( v40 != v44 )
                    goto LABEL_72;
                }
                if ( !v40 )
                  goto LABEL_71;
              }
            }
          }
          if ( !v33 )
            goto LABEL_71;
        }
      }
    }
  }
  while ( v26 );
LABEL_71:
  v13 = 0;
LABEL_72:
  if ( (zoneFlags & 0x3001FE) == 0 )
  {
    v45 = "common";
    v46 = 0x7FFFFFFFi64;
    if ( !parentName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v47 = v45[parentName - "common"];
      v48 = v46;
      v49 = *v45++;
      --v46;
      if ( !v48 )
        break;
      if ( v47 != v49 )
      {
        v56 = "global";
        if ( !parentName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v57 = v56[parentName - "global"];
          v58 = v24;
          v59 = *v56++;
          --v24;
          if ( !v58 )
            goto LABEL_79;
          if ( v57 != v59 )
          {
            v50 = 0;
            goto LABEL_80;
          }
          if ( !v57 )
            goto LABEL_79;
        }
      }
    }
    while ( v47 );
  }
LABEL_79:
  v50 = 1;
LABEL_80:
  v51 = "techsets_";
  v52 = 9i64;
  if ( !parentName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v53 = v51[parentName - "techsets_"];
    v54 = v52;
    v55 = *v51++;
    --v52;
    if ( !v54 )
      break;
    if ( v53 != v55 )
    {
      if ( !DB_Zones_IsTransientZoneName(parentName) )
      {
        if ( v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 384, ASSERT_TYPE_ASSERT, "(!transientLoad)", (const char *)&queryFormat, "!transientLoad") )
          __debugbreak();
        Com_sprintf(dest, 0x40ui64, "dev_%s", parentName);
        DB_Zones_AddPendingZoneInternal(parentName, dest, zoneFlags, 0, failureMode, priority);
        v60 = DVARBOOL_loadDebugShaderFastFiles;
        if ( !DVARBOOL_loadDebugShaderFastFiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loadDebugShaderFastFiles") )
          __debugbreak();
        if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
        {
          flags = v60->flags;
          if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v60->name) )
            __debugbreak();
        }
        if ( v60->current.enabled )
        {
          Com_sprintf(dest, 0x40ui64, "dbgshd_%s", parentName);
          DB_Zones_AddPendingZoneInternal(parentName, dest, zoneFlags, 0, ALLOW_MISSING, priority);
        }
      }
      if ( v50 )
      {
        if ( v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 403, ASSERT_TYPE_ASSERT, "(!transientLoad)", "%s\n\tTransients should not use techsets", "!transientLoad") )
          __debugbreak();
        Com_sprintf(dest, 0x40ui64, "techsets_%s", parentName);
        DB_Zones_AddPendingZoneInternal(parentName, dest, zoneFlags, 0, failureMode, priority);
      }
      if ( v13 )
      {
        if ( v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 412, ASSERT_TYPE_ASSERT, "(!transientLoad)", (const char *)&queryFormat, "!transientLoad") )
          __debugbreak();
        CurrentRegionCode = RG_GetCurrentRegionCode();
        Com_sprintf(dest, 0x40ui64, "%s_%s", CurrentRegionCode, parentName);
        DB_Zones_AddPendingZoneInternal(parentName, dest, zoneFlags, 0, failureMode, priority);
        CurrentLanguageCode = SEH_GetCurrentLanguageCode();
        Com_sprintf(dest, 0x40ui64, "%s_%s", CurrentLanguageCode, parentName);
        DB_Zones_AddPendingZoneInternal(parentName, dest, zoneFlags, 0, failureMode, priority);
      }
      if ( v68 )
      {
        if ( v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 426, ASSERT_TYPE_ASSERT, "(!transientLoad)", (const char *)&queryFormat, "!transientLoad") )
          __debugbreak();
        Com_sprintf(dest, 0x40ui64, "srv_%s", parentName);
        DB_Zones_AddPendingZoneInternal(parentName, dest, zoneFlags, 0, failureMode, priority);
      }
      break;
    }
  }
  while ( v53 );
  DB_Zones_AddPendingZoneInternal(parentName, parentName, zoneFlags, isBaseMap, failureMode, priority);
  v64 = s_pendingZones.pendingList.m_list.m_size;
  if ( s_pendingZones.pendingList.m_list.m_size > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", LODWORD(s_pendingZones.pendingList.m_list.m_size), "unsigned", s_pendingZones.pendingList.m_list.m_size) )
    __debugbreak();
  if ( v64 - m_size > v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 439, ASSERT_TYPE_ASSERT, "(endSize - startSize <= maxZoneMuliplier)", "%s\n\tToo many zones queued, review expected multipliers to ensure buffer limits are correct", "endSize - startSize <= maxZoneMuliplier") )
    __debugbreak();
  DB_Zones_AddInUseFlags(zoneFlags);
  Sys_UnlockWrite(&s_pendingZones.lock);
}

/*
==============
DB_PendingZones_SetInflightTransientPriority
==============
*/
void DB_PendingZones_SetInflightTransientPriority(const char *zoneName, unsigned int priority)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 621, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_LockWrite(&s_pendingZones.lock);
  DB_PendingList::SetInflightTransientPriority(&s_pendingZones.pendingList, zoneName, priority);
  Sys_UnlockWrite(&s_pendingZones.lock);
}

/*
==============
DB_PendingZones_TryFastTransientCancel
==============
*/
_BOOL8 DB_PendingZones_TryFastTransientCancel(const char *zoneName)
{
  bool v2; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 633, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_LockWrite(&s_pendingZones.lock);
  v2 = DB_PendingList::TryFastTransientCancel(&s_pendingZones.pendingList, zoneName);
  Sys_UnlockWrite(&s_pendingZones.lock);
  return v2;
}

/*
==============
DB_PendingZones_TryGetNext
==============
*/
__int64 DB_PendingZones_TryGetNext(DB_PendingZoneInfo *outInfo)
{
  char *v2; 
  DB_PendingZonesGlob *v3; 
  bool v4; 
  unsigned __int8 v5; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 540, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !outInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 541, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  Sys_LockWrite(&s_pendingZones.lock);
  if ( s_pendingZones.pendingList.m_list.m_size )
  {
    *(__m256i *)outInfo->parentZoneName = *(__m256i *)s_pendingZones.pendingList.m_list.m_data.m_buffer;
    *(__m256i *)&outInfo->parentZoneName[32] = *(__m256i *)&s_pendingZones.pendingList.m_list.m_data.m_buffer[32];
    *(__m256i *)outInfo->fastfileName = *(__m256i *)&s_pendingZones.pendingList.m_list.m_data.m_buffer[64];
    *(__m256i *)&outInfo->fastfileName[32] = *(__m256i *)&s_pendingZones.pendingList.m_list.m_data.m_buffer[96];
    *(_OWORD *)&outInfo->flags = *(_OWORD *)&s_pendingZones.pendingList.m_list.m_data.m_buffer[128];
    if ( !s_pendingZones.pendingList.m_list.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
      __debugbreak();
    if ( &s_pendingZones > (DB_PendingZonesGlob *)((char *)&s_pendingZones + 148 * s_pendingZones.pendingList.m_list.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( &s_pendingZones == (DB_PendingZonesGlob *)((char *)&s_pendingZones + 148 * s_pendingZones.pendingList.m_list.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
      __debugbreak();
    v2 = &s_pendingZones.pendingList.m_list.m_data.m_buffer[148];
    v3 = (DB_PendingZonesGlob *)((char *)&s_pendingZones + 148 * s_pendingZones.pendingList.m_list.m_size);
    if ( v3 == &s_pendingZones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
      __debugbreak();
    v4 = &s_pendingZones.pendingList.m_list.m_data.m_buffer[148] < (char *)v3;
    if ( &s_pendingZones.pendingList.m_list.m_data.m_buffer[148] > (char *)v3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
        __debugbreak();
      v4 = &s_pendingZones.pendingList.m_list.m_data.m_buffer[148] < (char *)v3;
    }
    if ( v4 )
    {
      do
      {
        *(__m256i *)(v2 - 148) = *(__m256i *)v2;
        *(__m256i *)(v2 - 116) = *((__m256i *)v2 + 1);
        *(__m256i *)(v2 - 84) = *((__m256i *)v2 + 2);
        *(__m256i *)(v2 - 52) = *((__m256i *)v2 + 3);
        *(_OWORD *)(v2 - 20) = *((_OWORD *)v2 + 8);
        *((_DWORD *)v2 - 1) = *((_DWORD *)v2 + 36);
        v2 += 148;
      }
      while ( v2 < (char *)v3 );
    }
    --s_pendingZones.pendingList.m_list.m_size;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  Sys_UnlockWrite(&s_pendingZones.lock);
  return v5;
}

/*
==============
DB_PendingZones_Unpause
==============
*/
void DB_PendingZones_Unpause(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  DB_PendingZonesGlob *v4; 
  int v5; 
  char *v6; 
  DB_PendingZoneInfo outZoneInfo; 
  int v8; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 592, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !zoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 593, ASSERT_TYPE_ASSERT, "(zoneInfo)", (const char *)&queryFormat, "zoneInfo") )
    __debugbreak();
  Sys_LockWrite(&s_pendingZones.lock);
  for ( ; DB_PendingList::TryGetNextByZone(&s_pendingZones.pausedList, &outZoneInfo, zoneInfo, zoneCount); ++s_pendingZones.pendingList.m_list.m_size )
  {
    if ( s_pendingZones.pendingList.m_list.m_size == 1956 )
    {
      v4 = &s_pendingZones;
      do
      {
        Com_Printf(16, "Pending zone:: %s\n", &v4->pendingList.m_list.m_data.m_buffer[64]);
        v4 = (DB_PendingZonesGlob *)((char *)v4 + 148);
      }
      while ( v4 != (DB_PendingZonesGlob *)((char *)&s_pendingZones + 148 * s_pendingZones.pendingList.m_list.m_size) );
      Sys_Error((const ObfuscateErrorText)&stru_143DFF3D8);
    }
    LOBYTE(v8) = 1;
    if ( s_pendingZones.pendingList.m_list.m_size >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    v5 = v8;
    v6 = &s_pendingZones.pendingList.m_list.m_data.m_buffer[148 * s_pendingZones.pendingList.m_list.m_size];
    *(DB_PendingZoneInfo *)v6 = outZoneInfo;
    *((_DWORD *)v6 + 36) = v5;
  }
  Sys_UnlockWrite(&s_pendingZones.lock);
}

/*
==============
DB_Zones_AddPendingZoneInternal
==============
*/
void DB_Zones_AddPendingZoneInternal(const char *const parentZone, const char *const fastfileName, const unsigned int zoneFlags, const bool isBaseMap, const DB_FastFileFailureMode failureMode, const unsigned int priority)
{
  int LogChannel; 
  char v11; 
  const char *v12; 
  __int64 v13; 
  char v14; 
  char v15; 
  const char *v16; 
  char v17; 
  DB_PendingZoneInfo dest; 

  if ( !parentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 280, ASSERT_TYPE_ASSERT, "(parentZone)", (const char *)&queryFormat, "parentZone") )
    __debugbreak();
  if ( !fastfileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 281, ASSERT_TYPE_ASSERT, "(fastfileName)", (const char *)&queryFormat, "fastfileName") )
    __debugbreak();
  LogChannel = DB_GetLogChannel();
  Com_Printf(LogChannel, "Loading fastfile %s (%s)\n", fastfileName, parentZone);
  if ( !parentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v11 = *parentZone;
  v12 = parentZone;
  v13 = 0x1000000000001001i64;
  if ( *parentZone >= 33 )
  {
    while ( 1 )
    {
      v14 = v11;
      if ( (unsigned __int8)(v11 - 65) <= 0x19u || (unsigned __int8)(v11 - 32) <= 0x3Cu && _bittest64(&v13, (char)(v11 - 32)) )
        break;
      if ( v11 == 124 )
        break;
      v11 = *++v12;
      if ( !v11 )
      {
        if ( v14 > 32 )
          goto LABEL_19;
        break;
      }
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 285, ASSERT_TYPE_ASSERT, "( ( DB_IsAssetNameValid( parentZone ) ) )", "( parentZone ) = %s", parentZone) )
    __debugbreak();
LABEL_19:
  if ( !fastfileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v15 = *fastfileName;
  v16 = fastfileName;
  if ( *fastfileName >= 33 )
  {
    while ( 1 )
    {
      v17 = v15;
      if ( (unsigned __int8)(v15 - 65) <= 0x19u || (unsigned __int8)(v15 - 32) <= 0x3Cu && _bittest64(&v13, (char)(v15 - 32)) )
        break;
      if ( v15 == 124 )
        break;
      v15 = *++v16;
      if ( !v15 )
      {
        if ( v17 > 32 )
          goto LABEL_31;
        break;
      }
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 286, ASSERT_TYPE_ASSERT, "( ( DB_IsAssetNameValid( fastfileName ) ) )", "( fastfileName ) = %s", fastfileName) )
    __debugbreak();
LABEL_31:
  Core_strcpy(dest.parentZoneName, 0x40ui64, parentZone);
  Core_strcpy(dest.fastfileName, 0x40ui64, fastfileName);
  dest.failureMode = failureMode;
  dest.priority = priority;
  dest.flags = zoneFlags;
  dest.isBaseMap = isBaseMap;
  DB_PendingList::AddTail(&s_pendingZones.pendingList, &dest, 0);
}

/*
==============
DB_PendingList::InsertInPriorityOrder
==============
*/
void DB_PendingList::InsertInPriorityOrder(DB_PendingList *this, const DB_PendingZoneInfoQueueEntry *entry)
{
  DB_PendingList *v2; 
  unsigned __int64 m_size; 
  DB_PendingList *v6; 
  __m256i *v7; 
  __m256i *v8; 
  char *v9; 
  bool v10; 

  v2 = this;
  m_size = this->m_list.m_size;
  v6 = (DB_PendingList *)((char *)this + 148 * m_size);
  if ( v2 == v6 )
  {
LABEL_4:
    if ( m_size >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    v7 = (__m256i *)((char *)this + 148 * this->m_list.m_size);
    *v7 = *(__m256i *)entry->info.parentZoneName;
    v7[1] = *(__m256i *)&entry->info.parentZoneName[32];
    v7[2] = *(__m256i *)entry->info.fastfileName;
    v7[3] = *(__m256i *)&entry->info.fastfileName[32];
    *(_OWORD *)v7[4].m256i_i8 = *(_OWORD *)&entry->info.flags;
    v7[4].m256i_i32[4] = *(_DWORD *)&entry->wasUnpaused;
    ++this->m_list.m_size;
  }
  else
  {
    while ( entry->info.priority <= *(_DWORD *)&v2->m_list.m_data.m_buffer[132] )
    {
      v2 = (DB_PendingList *)((char *)v2 + 148);
      if ( v2 == v6 )
        goto LABEL_4;
    }
    if ( 1956 == m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (v2 < this || v2 > (DB_PendingList *)((char *)this + 148 * this->m_list.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( (char *)v2 - (char *)this != 148 * (((char *)v2 - (char *)this) / 0x94ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( entry >= (const DB_PendingZoneInfoQueueEntry *)v2 && entry < (const DB_PendingZoneInfoQueueEntry *)this + this->m_list.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v8 = (__m256i *)((char *)this + 148 * this->m_list.m_size);
    if ( v2 != (DB_PendingList *)v8 )
    {
      v9 = &v8[4].m256i_i8[20];
      if ( v2 == (DB_PendingList *)((char *)&v8[4].m256i_u64[2] + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v8 == (__m256i *)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v10 = v8 <= (__m256i *)v2;
      if ( v8 < (__m256i *)v2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v10 = v8 <= (__m256i *)v2;
      }
      if ( !v10 )
      {
        do
        {
          v8 = (__m256i *)((char *)v8 - 148);
          v9 -= 148;
          *(__m256i *)v9 = *v8;
          *((__m256i *)v9 + 1) = v8[1];
          *((__m256i *)v9 + 2) = v8[2];
          *((__m256i *)v9 + 3) = v8[3];
          *((_OWORD *)v9 + 8) = *(_OWORD *)v8[4].m256i_i8;
          *((_DWORD *)v9 + 36) = v8[4].m256i_i32[4];
        }
        while ( v8 > (__m256i *)v2 );
      }
    }
    ++this->m_list.m_size;
    *(__m256i *)v2->m_list.m_data.m_buffer = *(__m256i *)entry->info.parentZoneName;
    *(__m256i *)&v2->m_list.m_data.m_buffer[32] = *(__m256i *)&entry->info.parentZoneName[32];
    *(__m256i *)&v2->m_list.m_data.m_buffer[64] = *(__m256i *)entry->info.fastfileName;
    *(__m256i *)&v2->m_list.m_data.m_buffer[96] = *(__m256i *)&entry->info.fastfileName[32];
    *(_OWORD *)&v2->m_list.m_data.m_buffer[128] = *(_OWORD *)&entry->info.flags;
    *(_DWORD *)&v2->m_list.m_data.m_buffer[144] = *(_DWORD *)&entry->wasUnpaused;
  }
}

/*
==============
DB_PendingList::IsPending
==============
*/
char DB_PendingList::IsPending(DB_PendingList *this, const char *const zoneName, bool parentLookup)
{
  unsigned __int64 m_size; 
  DB_PendingList *v7; 
  DB_PendingList *v8; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 231, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  m_size = this->m_list.m_size;
  v7 = this;
  if ( this == (DB_PendingList *)((char *)this + 148 * m_size) )
  {
LABEL_7:
    if ( !parentLookup )
      return 0;
    v8 = this;
    if ( this == (DB_PendingList *)((char *)this + 148 * m_size) )
      return 0;
    while ( I_strnicmp(zoneName, v8->m_list.m_data.m_buffer, 0x7FFFFFFFui64) )
    {
      v8 = (DB_PendingList *)((char *)v8 + 148);
      if ( v8 == (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) )
        return 0;
    }
  }
  else
  {
    while ( I_strnicmp(zoneName, &v7->m_list.m_data.m_buffer[64], 0x7FFFFFFFui64) )
    {
      m_size = this->m_list.m_size;
      v7 = (DB_PendingList *)((char *)v7 + 148);
      if ( v7 == (DB_PendingList *)((char *)this + 148 * m_size) )
        goto LABEL_7;
    }
  }
  return 1;
}

/*
==============
DB_PendingList::SetInflightTransientPriority
==============
*/
void DB_PendingList::SetInflightTransientPriority(DB_PendingList *this, const char *const zoneName, const unsigned int priority)
{
  DB_PendingList *v6; 
  unsigned __int64 m_size; 
  __m256i v8; 
  __int128 v9; 
  __m256i v10; 
  unsigned __int64 v11; 
  DB_PendingList *v12; 
  char *v13; 
  DB_PendingList *v14; 
  bool v15; 
  DB_PendingList *v16; 
  int v17; 
  char entry[152]; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 153, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  v6 = this;
  if ( this != (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) )
  {
    while ( (*(_DWORD *)&v6->m_list.m_data.m_buffer[128] & 0x3CFF000) == 0 || I_strnicmp(zoneName, &v6->m_list.m_data.m_buffer[64], 0x7FFFFFFFui64) )
    {
      v6 = (DB_PendingList *)((char *)v6 + 148);
      if ( v6 == (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) )
        return;
    }
    if ( *(_DWORD *)&v6->m_list.m_data.m_buffer[132] != priority )
    {
      *(_DWORD *)&v6->m_list.m_data.m_buffer[132] = priority;
      m_size = this->m_list.m_size;
      if ( m_size > 1 )
      {
        *(_DWORD *)&entry[144] = *(_DWORD *)&v6->m_list.m_data.m_buffer[144];
        v8 = *(__m256i *)&v6->m_list.m_data.m_buffer[32];
        *(__m256i *)entry = *(__m256i *)v6->m_list.m_data.m_buffer;
        *(__m256i *)&entry[64] = *(__m256i *)&v6->m_list.m_data.m_buffer[64];
        v9 = *(_OWORD *)&v6->m_list.m_data.m_buffer[128];
        *(__m256i *)&entry[32] = v8;
        v10 = *(__m256i *)&v6->m_list.m_data.m_buffer[96];
        *(_OWORD *)&entry[128] = v9;
        *(__m256i *)&entry[96] = v10;
        if ( (v6 < this || v6 > (DB_PendingList *)((char *)this + 148 * m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())", *(_QWORD *)entry, *(_QWORD *)&entry[8], *(_QWORD *)&entry[16], *(_QWORD *)&entry[24], *(_QWORD *)&entry[32], *(_QWORD *)&entry[40], *(_QWORD *)&entry[48], *(_QWORD *)&entry[56], *(_QWORD *)&entry[64], *(_QWORD *)&entry[72], *(_QWORD *)&entry[80], *(_QWORD *)&entry[88], *(_QWORD *)&entry[96], *(_QWORD *)&entry[104], *(_QWORD *)&entry[112], *(_QWORD *)&entry[120], *(_QWORD *)&entry[128], *(_QWORD *)&entry[136], *(_QWORD *)&entry[144]) )
          __debugbreak();
        if ( (char *)v6 - (char *)this != 148 * (((char *)v6 - (char *)this) / 0x94ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
          __debugbreak();
        if ( v6 == (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
          __debugbreak();
        v11 = this->m_list.m_size;
        v12 = this;
        if ( v11 )
          v12 = (DB_PendingList *)((char *)this + 148 * (((char *)v6 - (char *)this) / 148));
        v13 = &v12->m_list.m_data.m_buffer[148];
        v14 = (DB_PendingList *)((char *)this + 148 * v11);
        if ( &v12->m_list.m_data.m_buffer[148] == (char *)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( v14 == v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        v15 = v13 < (char *)v14;
        if ( v13 > (char *)v14 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
            __debugbreak();
          v15 = v13 < (char *)v14;
        }
        if ( v15 )
        {
          v16 = v12;
          do
          {
            *(__m256i *)v16->m_list.m_data.m_buffer = *(__m256i *)v13;
            *(__m256i *)&v16->m_list.m_data.m_buffer[32] = *((__m256i *)v13 + 1);
            *(__m256i *)&v16->m_list.m_data.m_buffer[64] = *((__m256i *)v13 + 2);
            *(__m256i *)&v16->m_list.m_data.m_buffer[96] = *((__m256i *)v13 + 3);
            *(_OWORD *)&v16->m_list.m_data.m_buffer[128] = *((_OWORD *)v13 + 8);
            v17 = *((_DWORD *)v13 + 36);
            v13 += 148;
            *(_DWORD *)&v16->m_list.m_data.m_buffer[144] = v17;
            v16 = (DB_PendingList *)((char *)v16 + 148);
          }
          while ( v13 < (char *)v14 );
        }
        --this->m_list.m_size;
        DB_PendingList::InsertInPriorityOrder(this, (const DB_PendingZoneInfoQueueEntry *)entry);
      }
    }
  }
}

/*
==============
DB_PendingList::TryFastTransientCancel
==============
*/
char DB_PendingList::TryFastTransientCancel(DB_PendingList *this, const char *const zoneName)
{
  DB_PendingList *v4; 
  unsigned __int64 m_size; 
  DB_PendingList *v7; 
  char *v8; 
  DB_PendingList *v9; 
  bool v10; 
  DB_PendingList *v11; 
  int v12; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 182, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  v4 = this;
  if ( this == (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) )
    return 0;
  while ( (*(_DWORD *)&v4->m_list.m_data.m_buffer[128] & 0x3CFF000) == 0 || I_strnicmp(zoneName, &v4->m_list.m_data.m_buffer[64], 0x7FFFFFFFui64) )
  {
    v4 = (DB_PendingList *)((char *)v4 + 148);
    if ( v4 == (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) )
      return 0;
  }
  Com_Printf(16, "DB_PendingZones::TryFastTransientCancel : %s cancelled\n", &v4->m_list.m_data.m_buffer[64]);
  if ( !this->m_list.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
    __debugbreak();
  if ( (v4 < this || v4 > (DB_PendingList *)((char *)this + 148 * this->m_list.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  if ( (char *)v4 - (char *)this != 148 * (((char *)v4 - (char *)this) / 0x94ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
    __debugbreak();
  if ( v4 == (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
    __debugbreak();
  m_size = this->m_list.m_size;
  v7 = this;
  if ( m_size )
    v7 = (DB_PendingList *)((char *)this + 148 * (((char *)v4 - (char *)this) / 148));
  v8 = &v7->m_list.m_data.m_buffer[148];
  v9 = (DB_PendingList *)((char *)this + 148 * m_size);
  if ( &v7->m_list.m_data.m_buffer[148] == (char *)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v9 == v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  v10 = v8 < (char *)v9;
  if ( v8 > (char *)v9 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v10 = v8 < (char *)v9;
  }
  if ( v10 )
  {
    v11 = v7;
    do
    {
      *(__m256i *)v11->m_list.m_data.m_buffer = *(__m256i *)v8;
      *(__m256i *)&v11->m_list.m_data.m_buffer[32] = *((__m256i *)v8 + 1);
      *(__m256i *)&v11->m_list.m_data.m_buffer[64] = *((__m256i *)v8 + 2);
      *(__m256i *)&v11->m_list.m_data.m_buffer[96] = *((__m256i *)v8 + 3);
      *(_OWORD *)&v11->m_list.m_data.m_buffer[128] = *((_OWORD *)v8 + 8);
      v12 = *((_DWORD *)v8 + 36);
      v8 += 148;
      *(_DWORD *)&v11->m_list.m_data.m_buffer[144] = v12;
      v11 = (DB_PendingList *)((char *)v11 + 148);
    }
    while ( v8 < (char *)v9 );
  }
  --this->m_list.m_size;
  return 1;
}

/*
==============
DB_PendingList::TryGetNextByZone
==============
*/
char DB_PendingList::TryGetNextByZone(DB_PendingList *this, DB_PendingZoneInfo *outZoneInfo, const DB_FastfileInfo *const zoneInfo, const unsigned int zoneCount)
{
  DB_PendingList *v8; 
  __int64 v9; 
  unsigned __int64 m_size; 
  DB_PendingList *v12; 
  char *v13; 
  DB_PendingList *v14; 
  bool v15; 
  DB_PendingList *v16; 
  int v17; 

  if ( !zoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_pendingzones.cpp", 90, ASSERT_TYPE_ASSERT, "(zoneInfo)", (const char *)&queryFormat, "zoneInfo") )
    __debugbreak();
  v8 = this;
  if ( this == (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) )
    return 0;
  while ( 1 )
  {
    v9 = 0i64;
    if ( zoneCount )
      break;
LABEL_8:
    v8 = (DB_PendingList *)((char *)v8 + 148);
    if ( v8 == (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) )
      return 0;
  }
  while ( !DB_Zones_FastfileInfoMatches(&zoneInfo[v9], *(_DWORD *)&v8->m_list.m_data.m_buffer[128], v8->m_list.m_data.m_buffer) )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= zoneCount )
      goto LABEL_8;
  }
  *(__m256i *)outZoneInfo->parentZoneName = *(__m256i *)v8->m_list.m_data.m_buffer;
  *(__m256i *)&outZoneInfo->parentZoneName[32] = *(__m256i *)&v8->m_list.m_data.m_buffer[32];
  *(__m256i *)outZoneInfo->fastfileName = *(__m256i *)&v8->m_list.m_data.m_buffer[64];
  *(__m256i *)&outZoneInfo->fastfileName[32] = *(__m256i *)&v8->m_list.m_data.m_buffer[96];
  *(_OWORD *)&outZoneInfo->flags = *(_OWORD *)&v8->m_list.m_data.m_buffer[128];
  if ( !this->m_list.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
    __debugbreak();
  if ( (v8 < this || v8 > (DB_PendingList *)((char *)this + 148 * this->m_list.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  if ( (char *)v8 - (char *)this != 148 * (((char *)v8 - (char *)this) / 0x94ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
    __debugbreak();
  if ( v8 == (DB_PendingList *)((char *)this + 148 * this->m_list.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
    __debugbreak();
  m_size = this->m_list.m_size;
  v12 = this;
  if ( m_size )
    v12 = (DB_PendingList *)((char *)this + 148 * (((char *)v8 - (char *)this) / 148));
  v13 = &v12->m_list.m_data.m_buffer[148];
  v14 = (DB_PendingList *)((char *)this + 148 * m_size);
  if ( &v12->m_list.m_data.m_buffer[148] == (char *)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v14 == v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  v15 = v13 < (char *)v14;
  if ( v13 > (char *)v14 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v15 = v13 < (char *)v14;
  }
  if ( v15 )
  {
    v16 = v12;
    do
    {
      *(__m256i *)v16->m_list.m_data.m_buffer = *(__m256i *)v13;
      *(__m256i *)&v16->m_list.m_data.m_buffer[32] = *((__m256i *)v13 + 1);
      *(__m256i *)&v16->m_list.m_data.m_buffer[64] = *((__m256i *)v13 + 2);
      *(__m256i *)&v16->m_list.m_data.m_buffer[96] = *((__m256i *)v13 + 3);
      *(_OWORD *)&v16->m_list.m_data.m_buffer[128] = *((_OWORD *)v13 + 8);
      v17 = *((_DWORD *)v13 + 36);
      v13 += 148;
      *(_DWORD *)&v16->m_list.m_data.m_buffer[144] = v17;
      v16 = (DB_PendingList *)((char *)v16 + 148);
    }
    while ( v13 < (char *)v14 );
  }
  --this->m_list.m_size;
  return 1;
}

