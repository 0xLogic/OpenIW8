/*
==============
ProfLoad_Activate
==============
*/

void ProfLoad_Activate(void)
{
  ?ProfLoad_Activate@@YAXXZ();
}

/*
==============
ProfLoad_Begin
==============
*/

void __fastcall ProfLoad_Begin(const char *label)
{
  ?ProfLoad_Begin@@YAXPEBD@Z(label);
}

/*
==============
ProfLoad_End
==============
*/

void ProfLoad_End(void)
{
  ?ProfLoad_End@@YAXXZ();
}

/*
==============
ProfLoad_IsActive
==============
*/

bool __fastcall ProfLoad_IsActive()
{
  return ?ProfLoad_IsActive@@YA_NXZ();
}

/*
==============
ProfLoad_Deactivate
==============
*/

void ProfLoad_Deactivate(void)
{
  ?ProfLoad_Deactivate@@YAXXZ();
}

/*
==============
ProfLoad_Init
==============
*/

void ProfLoad_Init(void)
{
  ?ProfLoad_Init@@YAXXZ();
}

/*
==============
ProfLoad_DrawOverlay
==============
*/

void __fastcall ProfLoad_DrawOverlay(const ScreenPlacement *scrPlace, rectDef_s *rect)
{
  ?ProfLoad_DrawOverlay@@YAXPEBUScreenPlacement@@PEAUrectDef_s@@@Z(scrPlace, rect);
}

/*
==============
ProfLoad_DB_End
==============
*/

void ProfLoad_DB_End(void)
{
  ?ProfLoad_DB_End@@YAXXZ();
}

/*
==============
ProfLoad_DB_Begin
==============
*/

void __fastcall ProfLoad_DB_Begin(const char *label)
{
  ?ProfLoad_DB_Begin@@YAXPEBD@Z(label);
}

/*
==============
ProfLoad_DB_CheckStarted
==============
*/

void ProfLoad_DB_CheckStarted(void)
{
  ?ProfLoad_DB_CheckStarted@@YAXXZ();
}

/*
==============
ProfLoad_DB_LoadCompleted
==============
*/

void ProfLoad_DB_LoadCompleted(void)
{
  ?ProfLoad_DB_LoadCompleted@@YAXXZ();
}

/*
==============
Com_GetEntryForNewLabel
==============
*/
MapProfileEntry *Com_GetEntryForNewLabel(MapProfileThread *thread, const char *label)
{
  MapProfileEntry *currentEntry; 
  signed __int64 v5; 
  int v6; 
  unsigned int profileEntryCount; 
  __int64 v8; 
  MapProfileEntry *v9; 
  __int64 v10; 
  __int64 v12; 
  __int64 v13; 

  currentEntry = thread->currentEntry;
  if ( currentEntry )
  {
    v5 = currentEntry - thread->profileEntries;
    if ( (unsigned __int64)(v5 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v5, "signed", v5) )
      __debugbreak();
    v6 = v5 + 1;
  }
  else
  {
    v6 = 0;
  }
  profileEntryCount = thread->profileEntryCount;
  if ( v6 >= thread->profileEntryCount )
  {
LABEL_15:
    if ( profileEntryCount >= thread->profileEntryMax )
    {
      LODWORD(v13) = thread->profileEntryMax;
      LODWORD(v12) = profileEntryCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_profilemapload.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( thread->profileEntryCount ) < (unsigned)( thread->profileEntryMax )", "thread->profileEntryCount doesn't index thread->profileEntryMax\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v10 = thread->profileEntryCount;
    thread->profileEntryCount = v10 + 1;
    return &thread->profileEntries[v10];
  }
  else
  {
    v8 = v6;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= thread->profileEntryMax )
      {
        LODWORD(v13) = thread->profileEntryMax;
        LODWORD(v12) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_profilemapload.cpp", 277, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( thread->profileEntryMax )", "entryIndex doesn't index thread->profileEntryMax\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v9 = &thread->profileEntries[v8];
      if ( v9->parent == thread->currentEntry && v9->label == label )
        return &thread->profileEntries[v8];
      profileEntryCount = thread->profileEntryCount;
      ++v6;
      ++v8;
      if ( v6 >= thread->profileEntryCount )
        goto LABEL_15;
    }
  }
}

/*
==============
ProfLoad_Activate
==============
*/
void ProfLoad_Activate(void)
{
  MapProfileEntry *EntryForNewLabel; 
  int v1; 
  ScopedCriticalSection v2; 

  ScopedCriticalSection::ScopedCriticalSection(&v2, CRITSECT_DB_PROFILE, SCOPED_CRITSECT_NORMAL);
  if ( mapLoadProfile.isLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_profilemapload.cpp", 202, ASSERT_TYPE_ASSERT, "(mapLoadProfile.isLoading == false)", (const char *)&queryFormat, "mapLoadProfile.isLoading == false", -2i64) )
    __debugbreak();
  memset_0(&mapLoadProfile, 0, sizeof(mapLoadProfile));
  mapLoadProfile.mainThread.profileEntries = mapLoadProfile.mainThreadEntries;
  mapLoadProfile.mainThread.profileEntryMax = 256;
  mapLoadProfile.mainThread.ticksStart = __rdtsc();
  mapLoadProfile.mainThread.ticksFinish = mapLoadProfile.mainThread.ticksStart;
  mapLoadProfile.dbThread.profileEntries = mapLoadProfile.dbThreadEntries;
  mapLoadProfile.dbThread.profileEntryMax = 2048;
  mapLoadProfile.dbThread.ticksStart = mapLoadProfile.mainThread.ticksStart;
  mapLoadProfile.dbThread.ticksFinish = mapLoadProfile.mainThread.ticksStart;
  mapLoadProfile.isLoading = 1;
  EntryForNewLabel = Com_GetEntryForNewLabel(&mapLoadProfile.dbThread, "Wait for DB Thread to start");
  ++EntryForNewLabel->accessCount;
  EntryForNewLabel->parent = mapLoadProfile.dbThread.currentEntry;
  if ( mapLoadProfile.dbThread.currentEntry )
    v1 = mapLoadProfile.dbThread.currentEntry->indent + 1;
  else
    v1 = 0;
  EntryForNewLabel->indent = v1;
  mapLoadProfile.dbThread.currentEntry = EntryForNewLabel;
  EntryForNewLabel->ticksStart = __rdtsc();
  EntryForNewLabel->label = "Wait for DB Thread to start";
  Com_Printf(26, "^6Activating map load profiler\n");
  ScopedCriticalSection::~ScopedCriticalSection(&v2);
}

/*
==============
ProfLoad_Begin
==============
*/
void ProfLoad_Begin(const char *label)
{
  int v2; 
  MapProfileEntry *EntryForNewLabel; 
  int v4; 
  MapProfileEntry *v5; 

  if ( mapLoadProfile.isLoading && Sys_IsMainThread() )
  {
    v2 = 0;
    if ( !mapLoadProfile.mainThreadSawDBFinished && mapLoadProfile.dbThreadState == DB_THREAD_FF_LOADED )
    {
      mapLoadProfile.mainThreadSawDBFinished = 1;
      if ( mapLoadProfile.isLoading )
      {
        EntryForNewLabel = Com_GetEntryForNewLabel(&mapLoadProfile.mainThread, "DB Thread has completed load");
        ++EntryForNewLabel->accessCount;
        EntryForNewLabel->parent = mapLoadProfile.mainThread.currentEntry;
        if ( mapLoadProfile.mainThread.currentEntry )
          v4 = mapLoadProfile.mainThread.currentEntry->indent + 1;
        else
          v4 = 0;
        EntryForNewLabel->indent = v4;
        mapLoadProfile.mainThread.currentEntry = EntryForNewLabel;
        EntryForNewLabel->label = "DB Thread has completed load";
        EntryForNewLabel->ticksStart = __rdtsc();
      }
      ProfLoad_EndThread(&mapLoadProfile.mainThread);
    }
    if ( mapLoadProfile.isLoading )
    {
      v5 = Com_GetEntryForNewLabel(&mapLoadProfile.mainThread, label);
      ++v5->accessCount;
      v5->parent = mapLoadProfile.mainThread.currentEntry;
      if ( mapLoadProfile.mainThread.currentEntry )
        v2 = mapLoadProfile.mainThread.currentEntry->indent + 1;
      v5->indent = v2;
      mapLoadProfile.mainThread.currentEntry = v5;
      v5->label = label;
      v5->ticksStart = __rdtsc();
    }
  }
}

/*
==============
ProfLoad_CalculateSelfTicks
==============
*/
void ProfLoad_CalculateSelfTicks(MapProfileThread *thread)
{
  int v1; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  MapProfileEntry *profileEntries; 
  MapProfileEntry *parent; 

  v1 = 0;
  v3 = 0;
  if ( thread->profileEntryCount > 0 )
  {
    v4 = 0i64;
    do
    {
      ++v4;
      ++v3;
      thread->profileEntries[v4 - 1].ticksSelf = thread->profileEntries[v4 - 1].ticksTotal;
    }
    while ( v3 < thread->profileEntryCount );
    if ( thread->profileEntryCount > 0 )
    {
      v5 = 0i64;
      do
      {
        profileEntries = thread->profileEntries;
        parent = profileEntries[v5].parent;
        if ( parent )
          parent->ticksSelf -= profileEntries[v5].ticksTotal;
        ++v1;
        ++v5;
      }
      while ( v1 < thread->profileEntryCount );
    }
  }
}

/*
==============
ProfLoad_CompareHotSpotNames
==============
*/
bool ProfLoad_CompareHotSpotNames(const MapProfileHotSpot *hotSpot0, const MapProfileHotSpot *hotSpot1)
{
  return hotSpot0->label > hotSpot1->label;
}

/*
==============
ProfLoad_CompareHotSpotTicks
==============
*/
bool ProfLoad_CompareHotSpotTicks(const MapProfileHotSpot *hotSpot0, const MapProfileHotSpot *hotSpot1)
{
  return hotSpot0->ticksSelf > hotSpot1->ticksSelf;
}

/*
==============
ProfLoad_DB_Begin
==============
*/
void ProfLoad_DB_Begin(const char *label)
{
  MapProfileEntry *EntryForNewLabel; 
  int currentEntry; 

  if ( Sys_IsDatabaseThread() && mapLoadProfile.isLoading && (unsigned int)(mapLoadProfile.dbThreadState - 1) <= 1 )
  {
    EntryForNewLabel = Com_GetEntryForNewLabel(&mapLoadProfile.dbThread, label);
    ++EntryForNewLabel->accessCount;
    EntryForNewLabel->parent = mapLoadProfile.dbThread.currentEntry;
    currentEntry = (int)mapLoadProfile.dbThread.currentEntry;
    if ( mapLoadProfile.dbThread.currentEntry )
      currentEntry = mapLoadProfile.dbThread.currentEntry->indent + 1;
    EntryForNewLabel->indent = currentEntry;
    mapLoadProfile.dbThread.currentEntry = EntryForNewLabel;
    EntryForNewLabel->label = label;
    EntryForNewLabel->ticksStart = __rdtsc();
  }
}

/*
==============
ProfLoad_DB_CheckStarted
==============
*/
void ProfLoad_DB_CheckStarted(void)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_profilemapload.cpp", 663, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( mapLoadProfile.isLoading && mapLoadProfile.dbThreadState == DB_THREAD_NOT_STARTED )
  {
    mapLoadProfile.dbThreadState = DB_THREAD_STARTED;
    ProfLoad_DB_End();
    ProfLoad_DB_Begin("Reading FF");
  }
}

/*
==============
ProfLoad_DB_End
==============
*/
void ProfLoad_DB_End(void)
{
  MapProfileEntry *currentEntry; 
  unsigned __int64 v1; 
  MapProfileEntry *parent; 

  if ( Sys_IsDatabaseThread() && mapLoadProfile.isLoading && (unsigned int)(mapLoadProfile.dbThreadState - 1) <= 1 )
  {
    currentEntry = mapLoadProfile.dbThread.currentEntry;
    if ( mapLoadProfile.dbThread.currentEntry )
    {
      if ( !mapLoadProfile.dbThread.currentEntry->label && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_profilemapload.cpp", 517, ASSERT_TYPE_ASSERT, "(entry->label)", (const char *)&queryFormat, "entry->label") )
        __debugbreak();
      mapLoadProfile.dbThread.ticksFinish = __rdtsc();
      v1 = mapLoadProfile.dbThread.ticksFinish - currentEntry->ticksStart;
      currentEntry->ticksTotal += v1;
      parent = currentEntry->parent;
      if ( !parent )
      {
        mapLoadProfile.dbThread.ticksProfiled += v1;
        parent = currentEntry->parent;
      }
      mapLoadProfile.dbThread.currentEntry = parent;
    }
  }
}

/*
==============
ProfLoad_DB_LoadCompleted
==============
*/
void ProfLoad_DB_LoadCompleted(void)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_profilemapload.cpp", 679, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( mapLoadProfile.isLoading && mapLoadProfile.dbThreadState == DB_THREAD_STARTED )
  {
    mapLoadProfile.dbThreadState = DB_THREAD_FF_LOADED;
    ProfLoad_DB_End();
    ProfLoad_DB_Begin("Done, Now Streaming");
  }
}

/*
==============
ProfLoad_Deactivate
==============
*/
void ProfLoad_Deactivate(void)
{
  unsigned __int64 v0; 
  ScopedCriticalSection v1; 

  ScopedCriticalSection::ScopedCriticalSection(&v1, CRITSECT_DB_PROFILE, SCOPED_CRITSECT_NORMAL);
  if ( !mapLoadProfile.isLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_profilemapload.cpp", 245, ASSERT_TYPE_ASSERT, "(mapLoadProfile.isLoading)", (const char *)&queryFormat, "mapLoadProfile.isLoading", -2i64) )
    __debugbreak();
  mapLoadProfile.dbThreadState = DB_THREAD_FINISHED;
  mapLoadProfile.isLoading = 0;
  v0 = __rdtsc();
  while ( mapLoadProfile.mainThread.currentEntry )
    ProfLoad_EndThread(&mapLoadProfile.mainThread);
  mapLoadProfile.mainThread.ticksFinish = v0;
  while ( mapLoadProfile.dbThread.currentEntry )
    ProfLoad_EndThread(&mapLoadProfile.dbThread);
  mapLoadProfile.dbThread.ticksFinish = v0;
  ProfLoad_PrintThread(&mapLoadProfile.mainThread, "Main");
  ProfLoad_PrintThread(&mapLoadProfile.dbThread, "DB");
  ScopedCriticalSection::~ScopedCriticalSection(&v1);
}

/*
==============
ProfLoad_DrawOverlay
==============
*/
void ProfLoad_DrawOverlay(const ScreenPlacement *scrPlace, rectDef_s *rect)
{
  GfxFont *FontHandle; 
  GfxFont *v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  float v10; 
  double v14; 
  __int64 vertAlign; 
  char _Buffer[256]; 
  char dest[256]; 

  if ( com_profileLoading->current.enabled )
  {
    FontHandle = UI_GetFontHandle(scrPlace, 0, 0.36000001);
    UI_FillRect(scrPlace, rect->x, rect->y, rect->w, rect->h, rect->horzAlign, rect->vertAlign, &PROFLOAD_BACKGROUND_COLOR);
    ProfLoad_CalculateSelfTicks(&mapLoadProfile.mainThread);
    v5 = UI_GetFontHandle(scrPlace, 0, 0.36000001);
    v6 = mapLoadProfile.mainThread.profileEntryCount - 16;
    if ( mapLoadProfile.mainThread.profileEntryCount - 16 < 0 )
      v6 = 0;
    if ( v6 < mapLoadProfile.mainThread.profileEntryCount )
    {
      v7 = 70;
      v8 = v6;
      do
      {
        _XMM0 = 0i64;
        v10 = (float)(5 * mapLoadProfile.mainThread.profileEntries[v8].indent + 60);
        __asm { vcvtsi2sd xmm0, xmm0, rax }
        if ( (__int64)(mapLoadProfile.mainThread.profileEntries[v8].ticksStart - mapLoadProfile.mainThread.ticksStart) < 0 )
          *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, rax }
        if ( (mapLoadProfile.mainThread.profileEntries[v8].ticksSelf & 0x8000000000000000ui64) != 0i64 )
          *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
        v14 = *(double *)&_XMM1 * msecPerRawTimerTick;
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, rax }
        if ( (mapLoadProfile.mainThread.profileEntries[v8].ticksTotal & 0x8000000000000000ui64) != 0i64 )
          *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
        LODWORD(vertAlign) = mapLoadProfile.mainThread.profileEntries[v8].accessCount;
        Com_sprintf(dest, 0x100ui64, "%s - %5.3f total, %5.3f self, %i hits. Last Hit @ %5.3f", mapLoadProfile.mainThread.profileEntries[v8].label, (double)(*(double *)&_XMM1 * msecPerRawTimerTick * 0.001), v14 * 0.001, vertAlign, (double)(*(double *)&_XMM0 * msecPerRawTimerTick * 0.001));
        UI_DrawText(scrPlace, dest, 256, v5, v10, (float)v7, 0, 0, 0.36000001, &PROFLOAD_TEXT_COLOR, 0);
        v7 += 16;
        ++v6;
        ++v8;
      }
      while ( v6 < mapLoadProfile.mainThread.profileEntryCount );
    }
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(mapLoadProfile.mainThread.ticksFinish - mapLoadProfile.mainThread.ticksStart) < 0 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    j_sprintf(_Buffer, "Total Load Time: %5.4f", (double)(*(double *)&_XMM0 * msecPerRawTimerTick * 0.001));
    UI_DrawText(scrPlace, _Buffer, 256, FontHandle, 60.0, 395.0, rect->horzAlign, rect->vertAlign, 0.36000001, &PROFLOAD_TEXT_COLOR, 0);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (mapLoadProfile.mainThread.ticksProfiled & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    j_sprintf(_Buffer, "Profiled Time: %5.4f", (double)(*(double *)&_XMM0 * msecPerRawTimerTick * 0.001));
    UI_DrawText(scrPlace, _Buffer, 256, FontHandle, 60.0, 410.0, rect->horzAlign, rect->vertAlign, 0.36000001, &PROFLOAD_TEXT_COLOR, 0);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(mapLoadProfile.mainThread.ticksFinish - mapLoadProfile.mainThread.ticksProfiled - mapLoadProfile.mainThread.ticksStart) < 0 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    j_sprintf(_Buffer, "Unprofiled Time: %5.4f", (double)(*(double *)&_XMM0 * msecPerRawTimerTick * 0.001));
    UI_DrawText(scrPlace, _Buffer, 256, FontHandle, 60.0, 425.0, rect->horzAlign, rect->vertAlign, 0.36000001, &PROFLOAD_TEXT_COLOR, 0);
  }
}

/*
==============
ProfLoad_End
==============
*/
void ProfLoad_End(void)
{
  MapProfileEntry *currentEntry; 
  unsigned __int64 v1; 
  MapProfileEntry *parent; 

  if ( mapLoadProfile.isLoading && Sys_IsMainThread() )
  {
    currentEntry = mapLoadProfile.mainThread.currentEntry;
    if ( mapLoadProfile.mainThread.currentEntry )
    {
      if ( !mapLoadProfile.mainThread.currentEntry->label && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_profilemapload.cpp", 517, ASSERT_TYPE_ASSERT, "(entry->label)", (const char *)&queryFormat, "entry->label") )
        __debugbreak();
      mapLoadProfile.mainThread.ticksFinish = __rdtsc();
      v1 = mapLoadProfile.mainThread.ticksFinish - currentEntry->ticksStart;
      currentEntry->ticksTotal += v1;
      parent = currentEntry->parent;
      if ( !parent )
      {
        mapLoadProfile.mainThread.ticksProfiled += v1;
        parent = currentEntry->parent;
      }
      mapLoadProfile.mainThread.currentEntry = parent;
    }
  }
}

/*
==============
ProfLoad_EndThread
==============
*/
void ProfLoad_EndThread(MapProfileThread *thread)
{
  MapProfileEntry *currentEntry; 
  unsigned __int64 v3; 
  __int64 v4; 
  MapProfileEntry *parent; 

  if ( !thread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_profilemapload.cpp", 511, ASSERT_TYPE_ASSERT, "(thread)", (const char *)&queryFormat, "thread") )
    __debugbreak();
  currentEntry = thread->currentEntry;
  if ( currentEntry )
  {
    if ( !currentEntry->label && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_profilemapload.cpp", 517, ASSERT_TYPE_ASSERT, "(entry->label)", (const char *)&queryFormat, "entry->label") )
      __debugbreak();
    v3 = __rdtsc();
    thread->ticksFinish = v3;
    v4 = v3 - currentEntry->ticksStart;
    currentEntry->ticksTotal += v4;
    parent = currentEntry->parent;
    if ( !parent )
    {
      thread->ticksProfiled += v4;
      parent = currentEntry->parent;
    }
    thread->currentEntry = parent;
  }
}

/*
==============
ProfLoad_GetEntryRowText
==============
*/
void ProfLoad_GetEntryRowText(const MapProfileThread *thread, const MapProfileEntry *entry, char *rowText, int sizeofRowText)
{
  double v8; 
  int accessCount; 

  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(entry->ticksStart - thread->ticksStart) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  _XMM2 = 0i64;
  __asm { vcvtsi2sd xmm2, xmm2, rax }
  if ( (entry->ticksSelf & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
  v8 = *(double *)&_XMM2 * msecPerRawTimerTick;
  _XMM2 = 0i64;
  __asm { vcvtsi2sd xmm2, xmm2, rax }
  if ( (entry->ticksTotal & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
  accessCount = entry->accessCount;
  Com_sprintf(rowText, sizeofRowText, "%s - %5.3f total, %5.3f self, %i hits. Last Hit @ %5.3f", entry->label, (double)(*(double *)&_XMM2 * msecPerRawTimerTick * 0.001), v8 * 0.001, accessCount, (double)(*(double *)&_XMM0 * msecPerRawTimerTick * 0.001));
}

/*
==============
ProfLoad_Init
==============
*/
void ProfLoad_Init(void)
{
  Dvar_BeginPermanentRegistration();
  com_profileLoading = Dvar_RegisterBool("MKOQNNTNON", 0, 0, "Show map load profiler");
  Dvar_EndPermanentRegistration();
  mapLoadProfile.isLoading = 0;
}

/*
==============
ProfLoad_IsActive
==============
*/
_BOOL8 ProfLoad_IsActive()
{
  return mapLoadProfile.isLoading;
}

/*
==============
ProfLoad_PrintHotSpots
==============
*/
void ProfLoad_PrintHotSpots(const MapProfileThread *thread)
{
  signed __int64 v1; 
  __int128 v2; 
  __int128 v4; 
  void *v5; 
  __int64 profileEntryCount; 
  MapProfileEntry *profileEntries; 
  int *p_accessCount; 
  __int64 v10; 
  const char *label; 
  __int64 v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  int *v16; 
  __int64 v17; 
  __int64 v18; 
  int *v19; 
  __int64 v20; 
  int v21; 
  __int64 v23; 
  int *v24; 
  long double v27; 
  __int128 v28; 
  __int64 v29; 
  MapProfileHotSpot _Last[2048]; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 

  v5 = alloca(v1);
  v32 = _XMM7;
  profileEntryCount = thread->profileEntryCount;
  if ( profileEntryCount > 0 )
  {
    profileEntries = thread->profileEntries;
    p_accessCount = &_Last[0].accessCount;
    v10 = thread->profileEntryCount;
    do
    {
      label = profileEntries->label;
      ++profileEntries;
      *((_QWORD *)p_accessCount - 1) = label;
      p_accessCount += 8;
      *(p_accessCount - 8) = profileEntries[-1].accessCount;
      *((_QWORD *)p_accessCount - 3) = profileEntries[-1].ticksSelf;
      --v10;
    }
    while ( v10 );
  }
  std::_Sort_unchecked<MapProfileHotSpot *,bool (*)(MapProfileHotSpot const &,MapProfileHotSpot const &)>(_Last, &_Last[profileEntryCount], profileEntryCount, ProfLoad_CompareHotSpotNames);
  v12 = thread->profileEntryCount;
  v13 = 0;
  v14 = 0;
  if ( (_DWORD)v12 )
  {
    v15 = 0i64;
    v16 = &_Last[0].accessCount;
    do
    {
      ++v14;
      v17 = v15++;
      *(MapProfileHotSpot *)(v16 - 2) = _Last[v17];
      if ( v14 != (_DWORD)v12 )
      {
        v18 = *((_QWORD *)v16 - 1);
        v19 = &_Last[v15].accessCount;
        do
        {
          if ( *((_QWORD *)v19 - 1) != v18 )
            break;
          ++v14;
          *v16 += *v19;
          ++v15;
          v20 = *((_QWORD *)v19 + 1);
          v19 += 8;
          *((_QWORD *)v16 + 1) += v20;
        }
        while ( v15 != v12 );
      }
      ++v13;
      v16 += 8;
    }
    while ( v15 != v12 );
  }
  std::_Sort_unchecked<MapProfileHotSpot *,bool (*)(MapProfileHotSpot const &,MapProfileHotSpot const &)>(_Last, &_Last[v13], v13, ProfLoad_CompareHotSpotTicks);
  Com_Printf(26, "^6\n\n---------- Load time hot spots ----------\n");
  v21 = 16;
  __asm { vxorpd  xmm7, xmm7, xmm7 }
  if ( v13 < 16 )
    v21 = v13;
  v23 = v21;
  if ( v21 > 0 )
  {
    v33 = v2;
    v24 = &_Last[0].accessCount;
    v31 = v4;
    do
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      if ( *((__int64 *)v24 + 1) < 0 )
        *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
      v27 = *(double *)&_XMM0 * msecPerRawTimerTick * 0.001;
      *((_QWORD *)&v28 + 1) = *((_QWORD *)&_XMM7 + 1);
      *(double *)&v28 = *(double *)&_XMM7 + v27;
      _XMM7 = v28;
      LODWORD(v29) = *v24;
      Com_Printf(26, "^6%s: %5.3f self, %i hits\n", *((const char **)v24 - 1), (double)v27, v29);
      v24 += 8;
      --v23;
    }
    while ( v23 );
  }
  Com_Printf(26, "^6\nHot spot total time: %5.3f self\n\n", *(double *)&_XMM7);
}

/*
==============
ProfLoad_PrintThread
==============
*/
void ProfLoad_PrintThread(MapProfileThread *thread, const char *name)
{
  int v3; 
  __int64 v4; 
  MapProfileEntry *profileEntries; 
  char rowText[256]; 

  Com_Printf(26, "^6Profiling Thread: %s\n\n", name);
  ProfLoad_CalculateSelfTicks(thread);
  v3 = 0;
  if ( thread->profileEntryCount > 0 )
  {
    v4 = 0i64;
    do
    {
      profileEntries = thread->profileEntries;
      if ( !profileEntries[v4].parent )
        ProfLoad_PrintTreeRecurse(thread, &profileEntries[v3], rowText, 256, v3 + 1, 1);
      ++v3;
      ++v4;
    }
    while ( v3 < thread->profileEntryCount );
  }
  ProfLoad_PrintHotSpots(thread);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(thread->ticksFinish - thread->ticksStart) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_Printf(26, "^6Total Load Time: %5.4f\n", (double)(*(double *)&_XMM0 * msecPerRawTimerTick * 0.001));
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (thread->ticksProfiled & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_Printf(26, "^6Profiled Time: %5.4f\n", (double)(*(double *)&_XMM0 * msecPerRawTimerTick * 0.001));
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(thread->ticksFinish - thread->ticksStart - thread->ticksProfiled) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_Printf(26, "^6Unprofiled Time: %5.4f\n", (double)(*(double *)&_XMM0 * msecPerRawTimerTick * 0.001));
  Com_Printf(26, "^6\n\n");
}

/*
==============
ProfLoad_PrintTreeRecurse
==============
*/
void ProfLoad_PrintTreeRecurse(MapProfileThread *thread, MapProfileEntry *entry, char *rowText, int sizeofRowText, int startIndex, int level)
{
  int v10; 
  __int64 v11; 
  MapProfileEntry *profileEntries; 

  if ( level <= 16 )
  {
    if ( entry )
    {
      ProfLoad_GetEntryRowText(thread, entry, rowText, sizeofRowText);
      Com_Printf(26, "^6%*c %s\n", 2 * entry->indent + 1, 32i64, rowText);
    }
    v10 = startIndex;
    if ( startIndex < thread->profileEntryCount )
    {
      v11 = startIndex;
      do
      {
        profileEntries = thread->profileEntries;
        if ( profileEntries[v11].parent == entry )
          ProfLoad_PrintTreeRecurse(thread, &profileEntries[v10], rowText, sizeofRowText, v10 + 1, level + 1);
        ++v10;
        ++v11;
      }
      while ( v10 < thread->profileEntryCount );
    }
  }
  else
  {
    Com_Printf(26, "^6%*c Recursion is too deep\n", 2 * entry->indent + 1, 32i64);
  }
}

