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
  GfxFont *v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  float v60; 
  double v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  double horzAlign; 
  int horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  int horzAlignd; 
  __int64 vertAlign; 
  vec4_t *color; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  char _Buffer[256]; 
  char dest[256]; 
  void *retaddr; 

  _R11 = &retaddr;
  _RDI = rect;
  if ( com_profileLoading->current.enabled )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovss  xmm9, cs:__real@3eb851ec
      vmovaps xmm2, xmm9; scale
    }
    FontHandle = UI_GetFontHandle(scrPlace, 0, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0Ch]
      vmovss  xmm3, dword ptr [rdi+8]; width
      vmovss  xmm2, dword ptr [rdi+4]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  dword ptr [rsp+2F8h+var_2D8], xmm0
    }
    UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v60, _RDI->horzAlign, _RDI->vertAlign, &PROFLOAD_BACKGROUND_COLOR);
    ProfLoad_CalculateSelfTicks(&mapLoadProfile.mainThread);
    __asm
    {
      vmovaps xmm2, xmm9; scale
      vmovsd  xmm6, cs:__real@43f0000000000000
      vmovsd  xmm7, cs:__real@3f50624dd2f1a9fc
    }
    v19 = UI_GetFontHandle(scrPlace, 0, *(float *)&_XMM2);
    v20 = mapLoadProfile.mainThread.profileEntryCount - 16;
    if ( mapLoadProfile.mainThread.profileEntryCount - 16 < 0 )
      v20 = 0;
    if ( v20 < mapLoadProfile.mainThread.profileEntryCount )
    {
      v21 = 70;
      v22 = v20;
      do
      {
        __asm
        {
          vxorps  xmm8, xmm8, xmm8
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm8, xmm8, eax
          vcvtsi2sd xmm0, xmm0, rax
        }
        if ( (__int64)(mapLoadProfile.mainThread.profileEntries[v22].ticksStart - mapLoadProfile.mainThread.ticksStart) < 0 )
          __asm { vaddsd  xmm0, xmm0, xmm6 }
        __asm
        {
          vmovsd  xmm2, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
          vmulsd  xmm0, xmm0, xmm2
          vxorps  xmm1, xmm1, xmm1
          vmulsd  xmm4, xmm0, xmm7
          vcvtsi2sd xmm1, xmm1, rax
        }
        if ( (mapLoadProfile.mainThread.profileEntries[v22].ticksSelf & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddsd  xmm1, xmm1, xmm6 }
        __asm
        {
          vmulsd  xmm0, xmm1, xmm2
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, rax
          vmulsd  xmm3, xmm0, xmm7
        }
        if ( (mapLoadProfile.mainThread.profileEntries[v22].ticksTotal & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddsd  xmm1, xmm1, xmm6 }
        __asm { vmovsd  [rsp+2F8h+color], xmm4 }
        LODWORD(vertAlign) = mapLoadProfile.mainThread.profileEntries[v22].accessCount;
        __asm
        {
          vmulsd  xmm0, xmm1, xmm2
          vmulsd  xmm1, xmm0, xmm7
          vmovsd  qword ptr [rsp+2F8h+horzAlign], xmm3
          vmovsd  [rsp+2F8h+var_2D8], xmm1
        }
        Com_sprintf(dest, 0x100ui64, "%s - %5.3f total, %5.3f self, %i hits. Last Hit @ %5.3f", mapLoadProfile.mainThread.profileEntries[v22].label, v61, horzAlign, vertAlign, *(double *)&color);
        __asm
        {
          vmovss  [rsp+2F8h+var_2B8], xmm9
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r14d
          vmovss  [rsp+2F8h+horzAlign], xmm0
          vmovss  dword ptr [rsp+2F8h+var_2D8], xmm8
        }
        UI_DrawText(scrPlace, dest, 256, v19, v62, *(float *)&horzAligna, 0, 0, v73, &PROFLOAD_TEXT_COLOR, 0);
        v21 += 16;
        ++v20;
        ++v22;
      }
      while ( v20 < mapLoadProfile.mainThread.profileEntryCount );
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(mapLoadProfile.mainThread.ticksFinish - mapLoadProfile.mainThread.ticksStart) < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm6 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vmulsd  xmm2, xmm0, xmm7
      vmovq   r8, xmm2
    }
    j_sprintf(_Buffer, "Total Load Time: %5.4f", *(double *)&_XMM2);
    __asm
    {
      vmovss  xmm0, cs:__real@43c58000
      vmovss  xmm8, cs:__real@42700000
      vmovss  [rsp+2F8h+var_2B8], xmm9
      vmovss  [rsp+2F8h+horzAlign], xmm0
      vmovss  dword ptr [rsp+2F8h+var_2D8], xmm8
    }
    UI_DrawText(scrPlace, _Buffer, 256, FontHandle, v63, *(float *)&horzAlignb, _RDI->horzAlign, _RDI->vertAlign, v74, &PROFLOAD_TEXT_COLOR, 0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (mapLoadProfile.mainThread.ticksProfiled & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm0, xmm0, xmm6 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vmulsd  xmm2, xmm0, xmm7
      vmovq   r8, xmm2
    }
    j_sprintf(_Buffer, "Profiled Time: %5.4f", *(double *)&_XMM2);
    __asm
    {
      vmovss  xmm0, cs:__real@43cd0000
      vmovss  [rsp+2F8h+var_2B8], xmm9
      vmovss  [rsp+2F8h+horzAlign], xmm0
      vmovss  dword ptr [rsp+2F8h+var_2D8], xmm8
    }
    UI_DrawText(scrPlace, _Buffer, 256, FontHandle, v64, *(float *)&horzAlignc, _RDI->horzAlign, _RDI->vertAlign, v75, &PROFLOAD_TEXT_COLOR, 0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(mapLoadProfile.mainThread.ticksFinish - mapLoadProfile.mainThread.ticksProfiled - mapLoadProfile.mainThread.ticksStart) < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm6 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vmulsd  xmm2, xmm0, xmm7
      vmovq   r8, xmm2
    }
    j_sprintf(_Buffer, "Unprofiled Time: %5.4f", *(double *)&_XMM2);
    __asm
    {
      vmovss  xmm0, cs:__real@43d48000
      vmovss  [rsp+2F8h+var_2B8], xmm9
      vmovss  [rsp+2F8h+horzAlign], xmm0
      vmovss  dword ptr [rsp+2F8h+var_2D8], xmm8
    }
    UI_DrawText(scrPlace, _Buffer, 256, FontHandle, v65, *(float *)&horzAlignd, _RDI->horzAlign, _RDI->vertAlign, v76, &PROFLOAD_TEXT_COLOR, 0);
    __asm
    {
      vmovaps xmm9, [rsp+2F8h+var_78]
      vmovaps xmm8, [rsp+2F8h+var_68]
      vmovaps xmm7, [rsp+2F8h+var_58]
      vmovaps xmm6, [rsp+2F8h+var_48]
    }
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
  double v23; 
  double v24; 
  int accessCount; 
  double v26; 

  __asm
  {
    vmovsd  xmm1, cs:__real@43f0000000000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmovaps [rsp+58h+var_18], xmm6
  }
  if ( (__int64)(entry->ticksStart - thread->ticksStart) < 0 )
    __asm { vaddsd  xmm0, xmm0, xmm1 }
  __asm
  {
    vmovsd  xmm3, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovsd  xmm4, cs:__real@3f50624dd2f1a9fc
    vmulsd  xmm0, xmm0, xmm3
    vxorps  xmm2, xmm2, xmm2
    vmulsd  xmm6, xmm0, xmm4
    vcvtsi2sd xmm2, xmm2, rax
  }
  if ( (entry->ticksSelf & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm2, xmm2, xmm1 }
  __asm
  {
    vmulsd  xmm0, xmm2, xmm3
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2sd xmm2, xmm2, rax
    vmulsd  xmm5, xmm0, xmm4
  }
  if ( (entry->ticksTotal & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm2, xmm2, xmm1 }
  __asm { vmovsd  [rsp+58h+var_20], xmm6 }
  accessCount = entry->accessCount;
  __asm
  {
    vmulsd  xmm0, xmm2, xmm3
    vmulsd  xmm1, xmm0, xmm4
    vmovsd  [rsp+58h+var_30], xmm5
    vmovsd  [rsp+58h+var_38], xmm1
  }
  Com_sprintf(rowText, sizeofRowText, "%s - %5.3f total, %5.3f self, %i hits. Last Hit @ %5.3f", entry->label, v23, v24, accessCount, v26);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  void *v6; 
  __int64 profileEntryCount; 
  MapProfileEntry *profileEntries; 
  int *p_accessCount; 
  __int64 v11; 
  const char *label; 
  __int64 v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  __int64 v20; 
  int *v21; 
  __int64 v22; 
  int v23; 
  __int64 v25; 
  int *v26; 
  __int64 v38; 
  MapProfileHotSpot _Last[2048]; 

  v6 = alloca(v1);
  __asm { vmovaps [rsp+10078h+var_28], xmm7 }
  profileEntryCount = thread->profileEntryCount;
  if ( profileEntryCount > 0 )
  {
    profileEntries = thread->profileEntries;
    p_accessCount = &_Last[0].accessCount;
    v11 = thread->profileEntryCount;
    do
    {
      label = profileEntries->label;
      ++profileEntries;
      *((_QWORD *)p_accessCount - 1) = label;
      p_accessCount += 8;
      *(p_accessCount - 8) = profileEntries[-1].accessCount;
      *((_QWORD *)p_accessCount - 3) = profileEntries[-1].ticksSelf;
      --v11;
    }
    while ( v11 );
  }
  std::_Sort_unchecked<MapProfileHotSpot *,bool (*)(MapProfileHotSpot const &,MapProfileHotSpot const &)>(_Last, &_Last[profileEntryCount], profileEntryCount, ProfLoad_CompareHotSpotNames);
  v13 = thread->profileEntryCount;
  v14 = 0;
  v15 = 0;
  if ( (_DWORD)v13 )
  {
    v16 = 0i64;
    _RDX = &_Last[0].accessCount;
    do
    {
      ++v15;
      _RAX = 32 * v16++;
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+rax+10078h+_Last.label]
        vmovups ymmword ptr [rdx-8], ymm0
      }
      if ( v15 != (_DWORD)v13 )
      {
        v20 = *((_QWORD *)_RDX - 1);
        v21 = &_Last[v16].accessCount;
        do
        {
          if ( *((_QWORD *)v21 - 1) != v20 )
            break;
          ++v15;
          *_RDX += *v21;
          ++v16;
          v22 = *((_QWORD *)v21 + 1);
          v21 += 8;
          *((_QWORD *)_RDX + 1) += v22;
        }
        while ( v16 != v13 );
      }
      ++v14;
      _RDX += 8;
    }
    while ( v16 != v13 );
  }
  std::_Sort_unchecked<MapProfileHotSpot *,bool (*)(MapProfileHotSpot const &,MapProfileHotSpot const &)>(_Last, &_Last[v14], v14, ProfLoad_CompareHotSpotTicks);
  Com_Printf(26, "^6\n\n---------- Load time hot spots ----------\n");
  v23 = 16;
  __asm { vxorpd  xmm7, xmm7, xmm7 }
  if ( v14 < 16 )
    v23 = v14;
  v25 = v23;
  if ( v23 > 0 )
  {
    __asm { vmovaps [rsp+10078h+var_18], xmm6 }
    v26 = &_Last[0].accessCount;
    __asm
    {
      vmovsd  xmm6, cs:__real@43f0000000000000
      vmovaps [rsp+10078h+var_38], xmm8
      vmovsd  xmm8, cs:__real@3f50624dd2f1a9fc
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( *((__int64 *)v26 + 1) < 0 )
        __asm { vaddsd  xmm0, xmm0, xmm6 }
      __asm
      {
        vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vmulsd  xmm3, xmm0, xmm8
        vmovq   r9, xmm3
        vaddsd  xmm7, xmm7, xmm3
      }
      LODWORD(v38) = *v26;
      Com_Printf(26, "^6%s: %5.3f self, %i hits\n", *((const char **)v26 - 1), *(double *)&_XMM3, v38);
      v26 += 8;
      --v25;
    }
    while ( v25 );
    __asm
    {
      vmovaps xmm8, [rsp+10078h+var_38]
      vmovaps xmm6, [rsp+10078h+var_18]
    }
  }
  __asm
  {
    vmovaps xmm2, xmm7
    vmovq   r8, xmm2
  }
  Com_Printf(26, "^6\nHot spot total time: %5.3f self\n\n", *(double *)&_XMM2);
  __asm { vmovaps xmm7, [rsp+10078h+var_28] }
}

/*
==============
ProfLoad_PrintThread
==============
*/
void ProfLoad_PrintThread(MapProfileThread *thread, const char *name)
{
  int v4; 
  __int64 v5; 
  MapProfileEntry *profileEntries; 
  char rowText[256]; 

  Com_Printf(26, "^6Profiling Thread: %s\n\n", name);
  ProfLoad_CalculateSelfTicks(thread);
  v4 = 0;
  if ( thread->profileEntryCount > 0 )
  {
    v5 = 0i64;
    do
    {
      profileEntries = thread->profileEntries;
      if ( !profileEntries[v5].parent )
        ProfLoad_PrintTreeRecurse(thread, &profileEntries[v4], rowText, 256, v4 + 1, 1);
      ++v4;
      ++v5;
    }
    while ( v4 < thread->profileEntryCount );
  }
  ProfLoad_PrintHotSpots(thread);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(thread->ticksFinish - thread->ticksStart) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmulsd  xmm2, xmm0, cs:__real@3f50624dd2f1a9fc
    vmovq   r8, xmm2
  }
  Com_Printf(26, "^6Total Load Time: %5.4f\n", *(double *)&_XMM2);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (thread->ticksProfiled & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmulsd  xmm2, xmm0, cs:__real@3f50624dd2f1a9fc
    vmovq   r8, xmm2
  }
  Com_Printf(26, "^6Profiled Time: %5.4f\n", *(double *)&_XMM2);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(thread->ticksFinish - thread->ticksStart - thread->ticksProfiled) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmulsd  xmm2, xmm0, cs:__real@3f50624dd2f1a9fc
    vmovq   r8, xmm2
  }
  Com_Printf(26, "^6Unprofiled Time: %5.4f\n", *(double *)&_XMM2);
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

