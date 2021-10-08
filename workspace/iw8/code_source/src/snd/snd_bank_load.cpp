/*
==============
SND_IsBankInUse
==============
*/

bool __fastcall SND_IsBankInUse(const SndBankInfo *info)
{
  return ?SND_IsBankInUse@@YA_NPEBUSndBankInfo@@@Z(info);
}

/*
==============
SND_HasLoadingBanks
==============
*/

bool __fastcall SND_HasLoadingBanks(bool codePostGfxOnly)
{
  return ?SND_HasLoadingBanks@@YA_N_N@Z(codePostGfxOnly);
}

/*
==============
SND_StopBankSoundsWithBankInfo
==============
*/

bool __fastcall SND_StopBankSoundsWithBankInfo(SndBankInfo *info)
{
  return ?SND_StopBankSoundsWithBankInfo@@YA_NPEAUSndBankInfo@@@Z(info);
}

/*
==============
SND_StopBankSounds
==============
*/

bool __fastcall SND_StopBankSounds(const SndBank *bank)
{
  return ?SND_StopBankSounds@@YA_NPEBUSndBank@@@Z(bank);
}

/*
==============
SNDL_LoadBank
==============
*/

void __fastcall SNDL_LoadBank(const StreamKey *streamKey)
{
  ?SNDL_LoadBank@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
SND_BankLoadUpdate
==============
*/

bool __fastcall SND_BankLoadUpdate()
{
  return ?SND_BankLoadUpdate@@YA_NXZ();
}

/*
==============
SND_BankFileExists
==============
*/

bool __fastcall SND_BankFileExists(const char *filename)
{
  return ?SND_BankFileExists@@YA_NPEBD@Z(filename);
}

/*
==============
SND_HeaderCheck
==============
*/

bool __fastcall SND_HeaderCheck(const SndBank *bank, SndAssetBankLoad *assetBank, const SndAssetBankHeader *header, bool stream)
{
  return ?SND_HeaderCheck@@YA_NPEBUSndBank@@PEAUSndAssetBankLoad@@PEBUSndAssetBankHeader@@_N@Z(bank, assetBank, header, stream);
}

/*
==============
SND_AssetBankFindEntry
==============
*/

bool __fastcall SND_AssetBankFindEntry(unsigned int id, const SndAssetBankEntry **entry, FileStreamFileID *fid, bool streamed)
{
  return ?SND_AssetBankFindEntry@@YA_NIPEAPEBUSndAssetBankEntry@@PEAW4FileStreamFileID@@_N@Z(id, entry, fid, streamed);
}

/*
==============
SD_GetCommitSizeCurrentTransientBanks
==============
*/

unsigned __int64 __fastcall SD_GetCommitSizeCurrentTransientBanks()
{
  return ?SD_GetCommitSizeCurrentTransientBanks@@YA_KXZ();
}

/*
==============
SND_AssetBankFindStreamed
==============
*/

bool __fastcall SND_AssetBankFindStreamed(unsigned int id, const SndAssetBankEntry **entry, FileStreamFileID *fid)
{
  return ?SND_AssetBankFindStreamed@@YA_NIPEAPEBUSndAssetBankEntry@@PEAW4FileStreamFileID@@@Z(id, entry, fid);
}

/*
==============
SND_AssetBankFindLoaded
==============
*/

bool __fastcall SND_AssetBankFindLoaded(unsigned int id, const SndAssetBankEntry **entry, const void **data, unsigned int *size)
{
  return ?SND_AssetBankFindLoaded@@YA_NIPEAPEBUSndAssetBankEntry@@PEAPEBXPEAI@Z(id, entry, data, size);
}

/*
==============
SND_UnloadAssetBank
==============
*/

void __fastcall SND_UnloadAssetBank(const int bankIndex)
{
  ?SND_UnloadAssetBank@@YAXH@Z(bankIndex);
}

/*
==============
SND_AssetBankFindEntry
==============
*/

bool __fastcall SND_AssetBankFindEntry(unsigned int id, SndAssetBankEntry *entries, unsigned int entryCount, const SndAssetBankEntry **entry)
{
  return ?SND_AssetBankFindEntry@@YA_NIPEAUSndAssetBankEntry@@IPEAPEBU1@@Z(id, entries, entryCount, entry);
}

/*
==============
SND_GetRuntimeAssetBankFileName
==============
*/

void __fastcall SND_GetRuntimeAssetBankFileName(bool stream, bool isPatch, const char *zone, const char *language, const char *languagePrefix, int length, char *path)
{
  ?SND_GetRuntimeAssetBankFileName@@YAX_N0PEBD11HPEAD@Z(stream, isPatch, zone, language, languagePrefix, length, path);
}

/*
==============
SD_GetCommitSizeAlwaysLoadedBanks
==============
*/

unsigned __int64 __fastcall SD_GetCommitSizeAlwaysLoadedBanks()
{
  return ?SD_GetCommitSizeAlwaysLoadedBanks@@YA_KXZ();
}

/*
==============
SNDL_FixupBankPointers
==============
*/

void __fastcall SNDL_FixupBankPointers(const StreamKey *streamKey)
{
  ?SNDL_FixupBankPointers@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
SND_GetLoadProgress
==============
*/

double __fastcall SND_GetLoadProgress()
{
  double result; 

  *(float *)&result = ?SND_GetLoadProgress@@YAMXZ();
  return result;
}

/*
==============
SND_GetPlaybackTime
==============
*/

int __fastcall SND_GetPlaybackTime(const char *name)
{
  return ?SND_GetPlaybackTime@@YAHPEBD@Z(name);
}

/*
==============
SND_BankEnableLoading
==============
*/

void SND_BankEnableLoading(void)
{
  ?SND_BankEnableLoading@@YAXXZ();
}

/*
==============
SND_LoadSoundsWait
==============
*/

void __fastcall SND_LoadSoundsWait(bool codePostGfxOnly)
{
  ?SND_LoadSoundsWait@@YAX_N@Z(codePostGfxOnly);
}

/*
==============
SNDL_BankLoadUpdate
==============
*/

void __fastcall SNDL_BankLoadUpdate(SndBank *bank)
{
  ?SNDL_BankLoadUpdate@@YAXPEAUSndBank@@@Z(bank);
}

/*
==============
SNDL_UnloadBank
==============
*/

void __fastcall SNDL_UnloadBank(const StreamKey *streamKey)
{
  ?SNDL_UnloadBank@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
SND_AssetBankFindEntry
==============
*/
char SND_AssetBankFindEntry(unsigned int id, SndAssetBankEntry *entries, unsigned int entryCount, const SndAssetBankEntry **entry)
{
  signed int v8; 
  signed int v9; 
  int v10; 
  __int64 v11; 
  SndAssetBankEntry *v12; 

  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_asset_bank.cpp", 192, ASSERT_TYPE_ASSERT, "(id)", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v8 = entryCount - 1;
  v9 = 0;
  if ( (int)(entryCount - 1) < 0 )
    return 0;
  while ( 1 )
  {
    v10 = (v9 + v8) / 2;
    v11 = v10;
    if ( v10 >= (int)entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_asset_bank.cpp", 199, ASSERT_TYPE_ASSERT, "(index < (int)entryCount)", (const char *)&queryFormat, "index < (int)entryCount") )
      __debugbreak();
    v12 = &entries[v11];
    if ( v12->id >= id )
      break;
    v9 = v11 + 1;
LABEL_12:
    if ( v8 < v9 )
      return 0;
  }
  if ( v12->id > id )
  {
    v8 = v11 - 1;
    goto LABEL_12;
  }
  *entry = v12;
  return 1;
}

/*
==============
SD_GetCommitSizeAlwaysLoadedBanks
==============
*/
unsigned __int64 SD_GetCommitSizeAlwaysLoadedBanks()
{
  return s_streamKeyLoadedSize;
}

/*
==============
SD_GetCommitSizeCurrentTransientBanks
==============
*/
unsigned __int64 SD_GetCommitSizeCurrentTransientBanks()
{
  return s_streamKeyLoadedTransientSize;
}

/*
==============
SNDL_BankLoadUpdate
==============
*/
void SNDL_BankLoadUpdate(SndBank *bank)
{
  ;
}

/*
==============
SNDL_FixupBankPointers
==============
*/
void SNDL_FixupBankPointers(const StreamKey *streamKey)
{
  SndBankInfo *behaviorUserPtr; 
  bool v3; 
  StreamKeyData *p_data; 
  unsigned __int8 *data; 
  SndAssetBankEntry *v6; 

  behaviorUserPtr = (SndBankInfo *)streamKey->behaviorUserPtr;
  if ( behaviorUserPtr )
  {
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
    v3 = SND_StopBankSounds_Internal(behaviorUserPtr);
    Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
    if ( v3 || g_sd.buffersSubmitted <= behaviorUserPtr->mixerStopTime + 2 )
      SD_Sync();
    p_data = &streamKey->data;
    if ( (streamKey->flags & 2) != 0 )
      data = (unsigned __int8 *)p_data->dataHandle.data;
    else
      data = Stream_AddressSpace_ResolveHandle(&p_data->dataHandle);
    if ( SND_IsBankInUse(behaviorUserPtr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1869, ASSERT_TYPE_ASSERT, "(!SND_IsBankInUse( bankInfo ))", (const char *)&queryFormat, "!SND_IsBankInUse( bankInfo )") )
      __debugbreak();
    if ( !behaviorUserPtr->bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1870, ASSERT_TYPE_ASSERT, "(bankInfo->bank)", (const char *)&queryFormat, "bankInfo->bank") )
      __debugbreak();
    if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1871, ASSERT_TYPE_ASSERT, "(bankData)", (const char *)&queryFormat, "bankData") )
      __debugbreak();
    if ( behaviorUserPtr->bank->streamInfo.loadedStreamKey != streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1872, ASSERT_TYPE_ASSERT, "(bankInfo->bank->streamInfo.loadedStreamKey == streamKey)", (const char *)&queryFormat, "bankInfo->bank->streamInfo.loadedStreamKey == streamKey") )
      __debugbreak();
    v6 = (SndAssetBankEntry *)&data[(unsigned __int64)((char *)behaviorUserPtr->load.loadAssetBank.entries - (char *)behaviorUserPtr->load.loadedData)];
    behaviorUserPtr->load.loadedData = data;
    behaviorUserPtr->load.loadAssetBank.entries = v6;
  }
  else
  {
    Com_PrintWarning(9, "SNDL_FixupBankPointers(): %s has no associated SndBankInfo\n", streamKey->name);
    SNDL_VerifyStreamKeyNotUsedInBankStack(streamKey);
  }
}

/*
==============
SNDL_LoadBank
==============
*/
void SNDL_LoadBank(const StreamKey *streamKey)
{
  char *behaviorUserPtr; 
  StreamKeyData *p_data; 
  const SndAssetBankHeader *data; 
  volatile int *v5; 
  unsigned int dataSize; 

  behaviorUserPtr = (char *)streamKey->behaviorUserPtr;
  if ( behaviorUserPtr )
  {
    if ( !*(_QWORD *)behaviorUserPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1743, ASSERT_TYPE_ASSERT, "(bankInfo->bank)", (const char *)&queryFormat, "bankInfo->bank") )
      __debugbreak();
    if ( behaviorUserPtr[912] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1744, ASSERT_TYPE_ASSERT, "(!bankInfo->bankActive)", (const char *)&queryFormat, "!bankInfo->bankActive") )
      __debugbreak();
    if ( *(const StreamKey **)(*(_QWORD *)behaviorUserPtr + 496i64) != streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1745, ASSERT_TYPE_ASSERT, "(bankInfo->bank->streamInfo.loadedStreamKey == streamKey)", (const char *)&queryFormat, "bankInfo->bank->streamInfo.loadedStreamKey == streamKey") )
      __debugbreak();
    p_data = &streamKey->data;
    if ( (streamKey->flags & 2) != 0 )
      data = (const SndAssetBankHeader *)p_data->dataHandle.data;
    else
      data = (const SndAssetBankHeader *)Stream_AddressSpace_ResolveHandle(&p_data->dataHandle);
    SND_GetRuntimeAssetBankFileName(0, 0, *(const char **)(*(_QWORD *)behaviorUserPtr + 8i64), *(const char **)(*(_QWORD *)behaviorUserPtr + 24i64), *(const char **)(*(_QWORD *)behaviorUserPtr + 16i64), 256, behaviorUserPtr + 312);
    SND_HeaderCheck(*(const SndBank **)behaviorUserPtr, (SndAssetBankLoad *)(behaviorUserPtr + 312), data, 0);
    SND_InitToc((SndBankLoad *)(behaviorUserPtr + 16), (SndAssetBankLoad *)(behaviorUserPtr + 312), data, 0, (unsigned __int8 *)data + data->entryOffset);
    SND_TocCheck(*(const SndBank **)behaviorUserPtr, (SndAssetBankLoad *)(behaviorUserPtr + 312), data->fileSize);
    *((_QWORD *)behaviorUserPtr + 110) = data;
    *((_DWORD *)behaviorUserPtr + 145) = -16777217;
    v5 = &s_streamKeyLoadedSize;
    dataSize = streamKey->dataSize;
    if ( !*(_BYTE *)(*(_QWORD *)behaviorUserPtr + 504i64) )
      v5 = &s_streamKeyLoadedTransientSize;
    if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v5) )
      __debugbreak();
    _InterlockedExchangeAdd(v5, dataSize);
    if ( behaviorUserPtr[908] == 9 )
    {
      if ( *(_BYTE *)(*(_QWORD *)behaviorUserPtr + 504i64) )
      {
        if ( !behaviorUserPtr[913] )
          behaviorUserPtr[912] = 1;
      }
      behaviorUserPtr[908] = 10;
    }
  }
  else
  {
    Com_PrintWarning(9, "SNDL_LoadBank(): %s has no associated SndBankInfo\n", streamKey->name);
    SNDL_VerifyStreamKeyNotUsedInBankStack(streamKey);
  }
}

/*
==============
SNDL_UnloadBank
==============
*/
void SNDL_UnloadBank(const StreamKey *streamKey)
{
  SndBankInfo *behaviorUserPtr; 
  bool v3; 
  bool v4; 
  bool v5; 
  volatile int *v6; 
  unsigned int dataSize; 
  SndAssetBankHeader *streamHeader; 
  __int64 v9; 
  __int64 v10; 

  behaviorUserPtr = (SndBankInfo *)streamKey->behaviorUserPtr;
  if ( behaviorUserPtr )
  {
    if ( !behaviorUserPtr->bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1806, ASSERT_TYPE_ASSERT, "(bankInfo->bank)", (const char *)&queryFormat, "bankInfo->bank") )
      __debugbreak();
    if ( behaviorUserPtr->bank->streamInfo.loadedStreamKey != streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1807, ASSERT_TYPE_ASSERT, "(bankInfo->bank->streamInfo.loadedStreamKey == streamKey)", (const char *)&queryFormat, "bankInfo->bank->streamInfo.loadedStreamKey == streamKey") )
      __debugbreak();
    if ( behaviorUserPtr->load.loadAssetBank.indicesLoaded )
    {
      Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
      Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
      Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
      Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
      v3 = SND_StopBankSounds_Internal(behaviorUserPtr);
      Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
      Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
      v4 = v3 || g_sd.buffersSubmitted <= behaviorUserPtr->mixerStopTime + 2;
      v5 = !behaviorUserPtr->bankActive;
      behaviorUserPtr->load.state = SND_BANK_STATE_UNLOADED;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1818, ASSERT_TYPE_ASSERT, "(!bankInfo->bankActive)", (const char *)&queryFormat, "!bankInfo->bankActive") )
        __debugbreak();
      v5 = *(_DWORD *)behaviorUserPtr->load.loadAssetBank.fileHandle == -16777217;
      *(_WORD *)&behaviorUserPtr->load.loadAssetBank.indicesLoaded = 0;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1821, ASSERT_TYPE_ASSERT, "(assetBankLoad->fileHandle == FileStreamFileID::INVALID)", (const char *)&queryFormat, "assetBankLoad->fileHandle == FileStreamFileID::INVALID") )
        __debugbreak();
      v6 = &s_streamKeyLoadedSize;
      dataSize = streamKey->dataSize;
      if ( !behaviorUserPtr->bank->streamInfo.alwaysLoaded )
        v6 = &s_streamKeyLoadedTransientSize;
      if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v6) )
        __debugbreak();
      _InterlockedExchangeAdd(v6, -dataSize);
      streamHeader = behaviorUserPtr->load.streamHeader;
      if ( streamHeader )
      {
        v9 = (char *)streamHeader - (char *)g_sb.streamHeaderPool;
        v10 = v9 / 688;
        if ( v9 >= 5504 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1838, ASSERT_TYPE_ASSERT, "(poolIndex < 8)", (const char *)&queryFormat, "poolIndex < SND_BANK_HEADER_POOL_COUNT") )
          __debugbreak();
        g_sb.streamHeadersInUse &= ~(1 << v10);
        behaviorUserPtr->load.streamHeader = NULL;
      }
      Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
      Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
      if ( v4 )
        SD_Sync();
    }
  }
}

/*
==============
SNDL_VerifyStreamKeyNotUsedInBankStack
==============
*/
void SNDL_VerifyStreamKeyNotUsedInBankStack(const StreamKey *streamKey)
{
  SndBankInfo **bankStack; 
  __int64 v3; 
  SndBankInfo *v4; 
  const SndBank *bank; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  bankStack = g_sb.bankStack;
  v3 = 800i64;
  do
  {
    v4 = *bankStack;
    if ( !*bankStack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1725, ASSERT_TYPE_ASSERT, "(bankInfo)", (const char *)&queryFormat, "bankInfo") )
      __debugbreak();
    bank = v4->bank;
    if ( v4->bank && bank->streamInfo.loadedStreamKey == streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1729, ASSERT_TYPE_ASSERT, "(bank->streamInfo.loadedStreamKey != streamKey)", "%s\n\tStream Key %s is used by sound bank %s but has no behaviorUserPtr", "bank->streamInfo.loadedStreamKey != streamKey", streamKey->name, bank->name) )
      __debugbreak();
    ++bankStack;
    --v3;
  }
  while ( v3 );
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
}

/*
==============
SND_AssetBankFindEntry
==============
*/
char SND_AssetBankFindEntry(unsigned int id, const SndAssetBankEntry **entry, FileStreamFileID *fid, bool streamed)
{
  unsigned int i; 
  SndBankInfo *v9; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  for ( i = 0; i < 0x320; ++i )
  {
    v9 = g_sb.bankStack[799 - i];
    if ( v9->bank && v9->bankActive )
    {
      if ( streamed )
      {
        if ( v9->load.streamAssetPatchBank.indicesLoaded && SND_AssetBankFindEntry(id, v9->load.streamAssetPatchBank.entries, v9->load.streamAssetPatchBank.entryCount, entry) )
        {
          if ( fid )
          {
            *(_DWORD *)fid = *(_DWORD *)v9->load.streamAssetPatchBank.fileHandle;
            Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
            return 1;
          }
          goto LABEL_21;
        }
        if ( v9->load.streamAssetBank.indicesLoaded && SND_AssetBankFindEntry(id, v9->load.streamAssetBank.entries, v9->load.streamAssetBank.entryCount, entry) )
        {
          if ( fid )
          {
            *(_DWORD *)fid = *(_DWORD *)v9->load.streamAssetBank.fileHandle;
            Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
            return 1;
          }
          goto LABEL_21;
        }
      }
      else if ( v9->load.loadAssetBank.indicesLoaded && SND_AssetBankFindEntry(id, v9->load.loadAssetBank.entries, v9->load.loadAssetBank.entryCount, entry) )
      {
        if ( fid )
          *(_DWORD *)fid = *(_DWORD *)v9->load.loadAssetBank.fileHandle;
LABEL_21:
        Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
        return 1;
      }
    }
  }
  if ( fid )
    *(_DWORD *)fid = -16777217;
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return 0;
}

/*
==============
SND_AssetBankFindLoaded
==============
*/
char SND_AssetBankFindLoaded(unsigned int id, const SndAssetBankEntry **entry, const void **data, unsigned int *size)
{
  int v8; 
  SndBankInfo *v9; 
  unsigned __int8 *v11; 
  const char *v12; 
  int v13; 
  const char *v14; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v8 = 0;
  while ( 1 )
  {
    v9 = g_sb.bankStack[799 - v8];
    if ( v9->bank )
    {
      if ( v9->bankActive && v9->load.state == SND_BANK_STATE_READY_TO_USE && SND_AssetBankFindEntry(id, v9->load.loadAssetBank.entries, v9->load.loadAssetBank.entryCount, entry) )
        break;
    }
    if ( (unsigned int)++v8 >= 0x320 )
    {
      Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
      return 0;
    }
  }
  if ( (*entry)->offset == 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 193, ASSERT_TYPE_ASSERT, "((*entry)->offset != 0xFFFFFFFF)", (const char *)&queryFormat, "(*entry)->offset != SND_ASSET_BANK_INVALID_OFFSET") )
    __debugbreak();
  if ( data )
  {
    v11 = &v9->load.loadedData[(*entry)->offset];
    *data = v11;
    if ( size )
    {
      *size = (*entry)->size;
      v11 = (unsigned __int8 *)*data;
    }
    if ( *(_DWORD *)v11 == 858993459 )
    {
      v12 = "x != 0x33333333";
      v13 = 204;
      v14 = "(x != 0x33333333)";
      goto LABEL_18;
    }
    if ( *(_DWORD *)v11 == 1145324612 )
    {
      v12 = "x != 0x44444444";
      v13 = 205;
      v14 = "(x != 0x44444444)";
LABEL_18:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", v13, ASSERT_TYPE_ASSERT, v14, (const char *)&queryFormat, v12) )
        __debugbreak();
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return 1;
}

/*
==============
SND_AssetBankFindStreamed
==============
*/
__int64 SND_AssetBankFindStreamed(unsigned int id, const SndAssetBankEntry **entry, FileStreamFileID *fid)
{
  int v6; 
  SndBankInfo *v7; 
  unsigned __int8 v8; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v6 = 0;
  while ( 1 )
  {
    v7 = g_sb.bankStack[799 - v6];
    if ( !v7->bank || !v7->bankActive )
      goto LABEL_8;
    if ( v7->load.streamAssetPatchBank.indicesLoaded && SND_AssetBankFindEntry(id, v7->load.streamAssetPatchBank.entries, v7->load.streamAssetPatchBank.entryCount, entry) )
      break;
    if ( v7->load.streamAssetBank.indicesLoaded && SND_AssetBankFindEntry(id, v7->load.streamAssetBank.entries, v7->load.streamAssetBank.entryCount, entry) )
    {
      if ( fid )
        *(_DWORD *)fid = *(_DWORD *)v7->load.streamAssetBank.fileHandle;
      v8 = 1;
      goto LABEL_12;
    }
LABEL_8:
    if ( (unsigned int)++v6 >= 0x320 )
    {
      if ( fid )
        *(_DWORD *)fid = -16777217;
      v8 = 0;
      goto LABEL_12;
    }
  }
  if ( fid )
    *(_DWORD *)fid = *(_DWORD *)v7->load.streamAssetPatchBank.fileHandle;
  v8 = 1;
LABEL_12:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v8;
}

/*
==============
SND_BankEnableLoading
==============
*/
void SND_BankEnableLoading(void)
{
  g_sb.loadGate = 0;
}

/*
==============
SND_BankFileExists
==============
*/
bool SND_BankFileExists(const char *filename)
{
  return FileStream_Exists(SF_ZONE, filename);
}

/*
==============
SND_BankLoadDealloc
==============
*/
void SND_BankLoadDealloc(SndBankLoad *load)
{
  SndAssetBankHeader *streamHeader; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  if ( !load && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 876, ASSERT_TYPE_ASSERT, "(load)", (const char *)&queryFormat, "load") )
    __debugbreak();
  streamHeader = load->streamHeader;
  load->state = SND_BANK_STATE_ERROR;
  if ( streamHeader )
  {
    v3 = (char *)streamHeader - (char *)g_sb.streamHeaderPool;
    v4 = v3 / 688;
    if ( v3 >= 5504 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 884, ASSERT_TYPE_ASSERT, "(poolIndex < 8)", (const char *)&queryFormat, "poolIndex < SND_BANK_HEADER_POOL_COUNT") )
      __debugbreak();
    g_sb.streamHeadersInUse &= ~(1 << v4);
    load->streamHeader = NULL;
  }
  v5 = *(_DWORD *)load->streamAssetPatchBank.fileHandle;
  if ( v5 != -16777217 )
  {
    FileStream_CloseFile((FileStreamFileID)v5);
    *(_DWORD *)load->streamAssetPatchBank.fileHandle = -16777217;
  }
  v6 = *(_DWORD *)load->streamAssetBank.fileHandle;
  if ( v6 != -16777217 )
  {
    FileStream_CloseFile((FileStreamFileID)v6);
    *(_DWORD *)load->streamAssetBank.fileHandle = -16777217;
  }
  SND_BankLoadedNotify();
}

/*
==============
SND_BankLoadError
==============
*/
void SND_BankLoadError(SndBankLoad *load)
{
  SND_BankLoadDealloc(load);
  Com_PrintError(9, "ERROR: sound bank failed to load %s\n", load->bank->name);
}

/*
==============
SND_BankLoadUpdate
==============
*/
char SND_BankLoadUpdate()
{
  int v1; 
  char *v2; 
  char v3; 
  __int64 v4; 
  int v5; 
  __int64 *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  const char *v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  bool codePostGfxReady; 
  char *v18; 
  int i; 
  SndBankInfo *v20; 
  SndBankLoad *p_load; 
  SndBankState state; 
  SndBankState v23; 
  __int64 v24; 
  char v25[6400]; 

  if ( !g_sb.bankCount )
    return 1;
  if ( g_sb.loadGate )
    return 0;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  memcpy_0(v25, g_sb.bankStack, sizeof(v25));
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  v1 = 0;
  v2 = v25;
  v3 = 1;
  v4 = 800i64;
  v5 = 0;
  v24 = 800i64;
  do
  {
    v6 = *(__int64 **)v2;
    v7 = **(_QWORD **)v2;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      v9 = 0x7FFFFFFFi64;
      v10 = "code_post_gfx";
      if ( !v8 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v4 = v24;
      }
      v11 = v8 - (_QWORD)"code_post_gfx";
      do
      {
        v12 = (unsigned __int8)v10[v11];
        v13 = v9;
        v14 = *(unsigned __int8 *)v10++;
        --v9;
        if ( !v13 )
          break;
        if ( v12 != v14 )
        {
          v15 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v15 = v12;
          v12 = v15;
          v16 = v14 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v16 = v14;
          if ( v12 != v16 )
            goto LABEL_21;
        }
      }
      while ( v12 );
      ++v1;
      if ( (unsigned __int8)(*((_BYTE *)v6 + 908) - 10) <= 1u )
        ++v5;
    }
LABEL_21:
    v2 += 8;
    v24 = --v4;
  }
  while ( v4 );
  codePostGfxReady = g_snd.codePostGfxReady;
  v18 = v25;
  if ( v1 == v5 )
    codePostGfxReady = 1;
  g_snd.codePostGfxReady = codePostGfxReady;
  for ( i = 0; i < 800; ++i )
  {
    v20 = *(SndBankInfo **)v18;
    if ( **(_QWORD **)v18 )
    {
      p_load = &v20->load;
      state = v20->load.state;
      SND_BankLoadUpdateState(&v20->load, v20);
      v23 = p_load->state;
      if ( state != v23 )
        return 0;
      if ( (unsigned __int8)(v23 - 9) > 2u )
        v3 = 0;
    }
    v18 += 8;
  }
  return v3;
}

/*
==============
SND_BankLoadUpdateState
==============
*/
void SND_BankLoadUpdateState(SndBankLoad *load, SndBankInfo *bankInfo)
{
  SndBankState state; 
  const SndBank *bank; 
  const SndBank *v6; 
  const dvar_t *v7; 
  SndBankState v8; 
  bool v11; 
  SndAssetBankHeader *streamHeader; 
  signed int v13; 
  unsigned __int64 v14; 
  signed __int64 v15; 
  __int64 v16; 
  const char *v17; 
  unsigned __int8 *v18; 
  bool v19; 
  SndBankLoad *v20; 
  signed __int64 v21; 
  SndAssetBankHeader *v24; 
  signed int v25; 
  SndBankState v26; 
  signed __int64 v27; 
  const char *v28; 
  unsigned __int8 *v29; 
  bool v30; 
  signed __int64 v31; 

  if ( !load && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1014, ASSERT_TYPE_ASSERT, "(load)", (const char *)&queryFormat, "load") )
    __debugbreak();
  state = load->state;
  if ( (unsigned __int8)(state - 10) <= 1u )
  {
    if ( (unsigned __int8)(state - 9) > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1018, ASSERT_TYPE_ASSERT, "(SND_IsStableLoadState( load ))", (const char *)&queryFormat, "SND_IsStableLoadState( load )") )
LABEL_104:
      __debugbreak();
  }
  else
  {
    if ( load->ioError )
    {
      SND_BankLoadDealloc(load);
      Com_PrintError(9, "ERROR: sound bank failed to load %s\n", load->bank->name);
      return;
    }
    if ( load->ioCancelled )
    {
      SND_BankLoadDealloc(load);
      return;
    }
    bank = load->bank;
    if ( !bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1035, ASSERT_TYPE_ASSERT, "(bank)", (const char *)&queryFormat, "bank") )
      __debugbreak();
    switch ( load->state )
    {
      case SND_BANK_STATE_NEW:
        Com_Printf(9, "SOUND: Starting load of soundbank: %s\n", bank->name);
        v6 = load->bank;
        *(_WORD *)&load->streamAssetBank.indicesLoaded = 0;
        *(_WORD *)&load->streamAssetPatchBank.indicesLoaded = 0;
        *(_DWORD *)load->streamAssetBank.fileHandle = -16777217;
        *(_DWORD *)load->loadAssetBank.fileHandle = -16777217;
        *(_DWORD *)load->streamAssetPatchBank.fileHandle = -16777217;
        SND_GetRuntimeAssetBankFileName(1, 1, v6->zone, v6->soundLanguage, v6->gameLanguage, 256, load->streamAssetPatchBank.filename);
        if ( !FileStream_Exists(SF_ZONE, load->streamAssetPatchBank.filename) )
          goto LABEL_18;
        v7 = DCONST_DVARBOOL_snd_loadPatchBanks;
        if ( !DCONST_DVARBOOL_snd_loadPatchBanks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_loadPatchBanks") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        v8 = SND_BANK_STATE_READ_PATCH_HEADER;
        if ( !v7->current.enabled )
LABEL_18:
          v8 = SND_BANK_STATE_STREAM_PATCH_READY;
        load->state = v8;
        return;
      case SND_BANK_STATE_READ_PATCH_HEADER:
        if ( load->streamHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1103, ASSERT_TYPE_ASSERT, "(load->streamHeader == nullptr)", (const char *)&queryFormat, "load->streamHeader == nullptr") )
          __debugbreak();
        _EAX = ~g_sb.streamHeadersInUse;
        __asm { tzcnt   ecx, eax }
        if ( _ECX < 8 )
        {
          load->streamHeader = &g_sb.streamHeaderPool[_ECX];
          g_sb.streamHeadersInUse |= 1 << _ECX;
          if ( !SND_StartHeaderRead(1, &load->streamAssetPatchBank, load, load->streamHeader) )
            goto LABEL_72;
          load->state = SND_BANK_STATE_STREAM_PATCH_HEADER;
        }
        return;
      case SND_BANK_STATE_STREAM_PATCH_HEADER:
        if ( !load->streamHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1145, ASSERT_TYPE_ASSERT, "(load->streamHeader)", (const char *)&queryFormat, "load->streamHeader") )
          __debugbreak();
        v11 = !load->pendingIo;
        streamHeader = load->streamHeader;
        load->fileSize = load->streamHeader->fileSize;
        if ( v11 )
        {
          v13 = AlignUp<unsigned int>(streamHeader->entrySize * streamHeader->entryCount, 0x1000ui64);
          v14 = v13;
          if ( !v13 )
          {
            v15 = (char *)load->streamHeader - (char *)g_sb.streamHeaderPool;
            load->state = SND_BANK_STATE_STREAM_PATCH_READY;
            v16 = v15 / 688;
            if ( v15 < 5504 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1160, ASSERT_TYPE_ASSERT, "(poolIndex < 8)", (const char *)&queryFormat, "poolIndex < SND_BANK_HEADER_POOL_COUNT") )
              goto LABEL_82;
            goto LABEL_66;
          }
          if ( load->streamPatchToc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1167, ASSERT_TYPE_ASSERT, "(!load->streamPatchToc)", (const char *)&queryFormat, "!load->streamPatchToc") )
            __debugbreak();
          v17 = j_va("bank      %s", load->bank->name);
          v18 = SD_Alloc(v17, v14, 0x1000u);
          load->streamPatchToc = v18;
          if ( !v18 )
            goto LABEL_71;
          v19 = SND_HeaderCheck(bank, &load->streamAssetPatchBank, load->streamHeader, 1);
          v20 = load;
          if ( !v19 )
            goto LABEL_73;
          if ( SND_InitToc(load, &load->streamAssetPatchBank, load->streamHeader, 1, load->streamPatchToc) )
            SND_StartTocRead(load, &load->streamAssetPatchBank, load->streamHeader, 1, load->streamPatchToc, v14);
          if ( load->state != SND_BANK_STATE_ERROR )
            load->state = SND_BANK_STATE_STREAM_PATCH_TOC;
          v21 = (char *)load->streamHeader - (char *)g_sb.streamHeaderPool;
          v16 = v21 / 688;
          if ( v21 < 5504 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1191, ASSERT_TYPE_ASSERT, "(poolIndex < 8)", (const char *)&queryFormat, "poolIndex < SND_BANK_HEADER_POOL_COUNT") )
            goto LABEL_82;
          goto LABEL_66;
        }
        return;
      case SND_BANK_STATE_STREAM_PATCH_TOC:
        if ( !load->pendingIo )
        {
          if ( !SND_TocCheck(bank, &load->streamAssetPatchBank, load->fileSize) )
            goto LABEL_72;
          load->state = SND_BANK_STATE_STREAM_PATCH_READY;
        }
        return;
      case SND_BANK_STATE_STREAM_PATCH_READY:
        SND_GetRuntimeAssetBankFileName(1, 0, load->bank->zone, load->bank->soundLanguage, load->bank->gameLanguage, 256, load->streamAssetBank.filename);
        load->state = SND_BANK_STATE_READ_STREAM_HEADER;
        return;
      case SND_BANK_STATE_READ_STREAM_HEADER:
        if ( load->streamHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1237, ASSERT_TYPE_ASSERT, "(load->streamHeader == nullptr)", (const char *)&queryFormat, "load->streamHeader == nullptr") )
          __debugbreak();
        _EAX = ~g_sb.streamHeadersInUse;
        __asm { tzcnt   ecx, eax }
        if ( _ECX < 8 )
        {
          load->streamHeader = &g_sb.streamHeaderPool[_ECX];
          g_sb.streamHeadersInUse |= 1 << _ECX;
          if ( !SND_StartHeaderRead(1, &load->streamAssetBank, load, load->streamHeader) )
            goto LABEL_72;
          load->state = SND_BANK_STATE_STREAM_HEADER;
        }
        return;
      case SND_BANK_STATE_STREAM_HEADER:
        if ( !load->pendingIo )
        {
          if ( !load->streamHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1262, ASSERT_TYPE_ASSERT, "(load->streamHeader)", (const char *)&queryFormat, "load->streamHeader") )
            __debugbreak();
          v24 = load->streamHeader;
          load->fileSize = load->streamHeader->fileSize;
          v25 = AlignUp<unsigned int>(v24->entrySize * v24->entryCount, 0x1000ui64);
          v14 = v25;
          if ( v25 )
          {
            if ( load->streamToc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1291, ASSERT_TYPE_ASSERT, "(!load->streamToc)", (const char *)&queryFormat, "!load->streamToc") )
              __debugbreak();
            v28 = j_va("bank      %s", load->bank->name);
            v29 = SD_Alloc(v28, v14, 0x1000u);
            load->streamToc = v29;
            if ( !v29 )
            {
LABEL_71:
              Com_PrintError(9, "Failed to allocate %d bytes for sound bank %s", (unsigned int)v14, load->bank->name);
              goto LABEL_72;
            }
            v30 = SND_HeaderCheck(bank, &load->streamAssetBank, load->streamHeader, 1);
            v20 = load;
            if ( !v30 )
              goto LABEL_73;
            if ( SND_InitToc(load, &load->streamAssetBank, load->streamHeader, 1, load->streamToc) )
              SND_StartTocRead(load, &load->streamAssetBank, load->streamHeader, 1, load->streamToc, v14);
            if ( load->state != SND_BANK_STATE_ERROR )
              load->state = SND_BANK_STATE_STREAM_TOC;
            v31 = (char *)load->streamHeader - (char *)g_sb.streamHeaderPool;
            v16 = v31 / 688;
            if ( v31 >= 5504 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1315, ASSERT_TYPE_ASSERT, "(poolIndex < 8)", (const char *)&queryFormat, "poolIndex < SND_BANK_HEADER_POOL_COUNT") )
              __debugbreak();
          }
          else
          {
            if ( load->bank->streamInfo.loadedStreamKey->dataSize )
            {
              v26 = SND_BANK_STATE_STREAM_READY;
            }
            else
            {
              Com_Printf(9, "SOUND: Finished loading soundbank: %s (empty bank)\n", bank->name);
              v26 = SND_BANK_STATE_READY_TO_USE;
            }
            load->state = v26;
            v27 = (char *)load->streamHeader - (char *)g_sb.streamHeaderPool;
            v16 = v27 / 688;
            if ( v27 >= 5504 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1283, ASSERT_TYPE_ASSERT, "(poolIndex < 8)", (const char *)&queryFormat, "poolIndex < SND_BANK_HEADER_POOL_COUNT") )
            {
LABEL_66:
              __debugbreak();
              g_sb.streamHeadersInUse &= ~(1 << v16);
              load->streamHeader = NULL;
              return;
            }
          }
LABEL_82:
          g_sb.streamHeadersInUse &= ~(1 << v16);
          load->streamHeader = NULL;
        }
        return;
      case SND_BANK_STATE_STREAM_TOC:
        if ( !load->pendingIo )
        {
          if ( SND_TocCheck(bank, &load->streamAssetBank, load->fileSize) )
          {
            load->state = SND_BANK_STATE_STREAM_READY;
          }
          else
          {
LABEL_72:
            v20 = load;
LABEL_73:
            SND_BankLoadError(v20);
          }
        }
        return;
      case SND_BANK_STATE_STREAM_READY:
        if ( load->streamHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1345, ASSERT_TYPE_ASSERT, "(load->streamHeader == nullptr)", (const char *)&queryFormat, "load->streamHeader == nullptr") )
          __debugbreak();
        if ( !bankInfo->bank->streamInfo.alwaysLoaded && !bankInfo->streamIsActive )
        {
          if ( load->loadAssetBank.indicesLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1358, ASSERT_TYPE_ASSERT, "(!load->loadAssetBank.indicesLoaded)", (const char *)&queryFormat, "!load->loadAssetBank.indicesLoaded") )
            __debugbreak();
          load->state = SND_BANK_STATE_UNLOADED;
          goto LABEL_95;
        }
        if ( load->loadAssetBank.indicesLoaded )
        {
          load->state = SND_BANK_STATE_READY_TO_USE;
          bankInfo->bankActive = !bankInfo->bankPreloading;
LABEL_95:
          SND_BankLoadedNotify();
          return;
        }
        break;
      case SND_BANK_STATE_READY_TO_USE:
        if ( load->streamHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1547, ASSERT_TYPE_ASSERT, "(load->streamHeader == nullptr)", (const char *)&queryFormat, "load->streamHeader == nullptr") )
          goto LABEL_104;
        return;
      default:
        return;
    }
  }
}

/*
==============
SND_BankReadCallback
==============
*/
void SND_BankReadCallback(FileStreamRequestID id, unsigned int result, __int64 numBytesRead, void *inBank)
{
  if ( !inBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 734, ASSERT_TYPE_ASSERT, "(bankLoad)", (const char *)&queryFormat, "bankLoad") )
    __debugbreak();
  if ( !*((_QWORD *)inBank + 107) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 735, ASSERT_TYPE_ASSERT, "(bankLoad->bank)", (const char *)&queryFormat, "bankLoad->bank") )
    __debugbreak();
  switch ( result )
  {
    case 1u:
    case 2u:
    case 6u:
      Com_PrintError(9, "SOUND: Sound read failed with status %d for %s\n", result, **((const char ***)inBank + 107));
      *((_BYTE *)inBank + 894) = 1;
      break;
    case 3u:
    case 4u:
      Com_Printf(9, "SOUND: Sound read cancelled for %s\n", **((const char ***)inBank + 107));
      *((_BYTE *)inBank + 895) = 1;
      break;
    case 7u:
    case 8u:
      *((_BYTE *)inBank + 893) = 0;
      break;
    default:
      Com_Printf(9, "SOUND: Sound read completed with status %d for %s\n", result, **((const char ***)inBank + 107));
      break;
  }
  if ( g_sb.bankMagic != 304297029 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 759, ASSERT_TYPE_ASSERT, "(g_sb.bankMagic == 0x12233445)", (const char *)&queryFormat, "g_sb.bankMagic == SND_BANK_ENTRY_MAGIC") )
    __debugbreak();
}

/*
==============
SND_Bank_AddStreamReadRequest
==============
*/
char SND_Bank_AddStreamReadRequest(SndBankLoad *load, int fileHandle, __int64 offset, unsigned __int64 readSize, unsigned __int8 *data)
{
  if ( !load && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 765, ASSERT_TYPE_ASSERT, "(load)", (const char *)&queryFormat, "load") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 766, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( load->pendingIo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 767, ASSERT_TYPE_ASSERT, "(!load->pendingIo)", (const char *)&queryFormat, "!load->pendingIo") )
    __debugbreak();
  if ( load->ioError && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 768, ASSERT_TYPE_ASSERT, "(!load->ioError)", (const char *)&queryFormat, "!load->ioError") )
    __debugbreak();
  if ( fileHandle == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 769, ASSERT_TYPE_ASSERT, "(fileHandle != FileStreamFileID::INVALID)", (const char *)&queryFormat, "fileHandle != FileStreamFileID::INVALID") )
    __debugbreak();
  *(_WORD *)&load->ioError = 0;
  load->pendingIo = 1;
  if ( FileStream_AddRequest((FileStreamFileID)fileHandle, offset, readSize, data, 1000, FLAT_TIRE, (void (__fastcall *)(FileStreamRequestID, FileStreamStatus, __int64, void *))SND_BankReadCallback, load, (FileStreamRequestID *)load->streamRequestId, FILE_STREAM_TRACK_SOUND) )
  {
    if ( g_sb.bankMagic != 304297029 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 791, ASSERT_TYPE_ASSERT, "(g_sb.bankMagic == 0x12233445)", (const char *)&queryFormat, "g_sb.bankMagic == SND_BANK_ENTRY_MAGIC") )
      __debugbreak();
    return 1;
  }
  else
  {
    if ( g_sb.bankMagic != 304297029 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 786, ASSERT_TYPE_ASSERT, "(g_sb.bankMagic == 0x12233445)", (const char *)&queryFormat, "g_sb.bankMagic == SND_BANK_ENTRY_MAGIC") )
      __debugbreak();
    load->pendingIo = 0;
    return 0;
  }
}

/*
==============
SND_CloseAssetBank
==============
*/
void SND_CloseAssetBank(SndAssetBankLoad *bank)
{
  int v2; 

  if ( !bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 46, ASSERT_TYPE_ASSERT, "(bank)", (const char *)&queryFormat, "bank") )
    __debugbreak();
  v2 = *(_DWORD *)bank->fileHandle;
  if ( v2 != -16777217 )
  {
    FileStream_CloseFile((FileStreamFileID)v2);
    bank->indicesLoaded = 0;
  }
}

/*
==============
SND_GetLoadProgress
==============
*/
float SND_GetLoadProgress()
{
  __asm { vmovss  xmm0, cs:?g_sb@@3USndBankGlobals@@A.assetLoadPercent; SndBankGlobals g_sb }
  return *(float *)&_XMM0;
}

/*
==============
SND_GetPlaybackTime
==============
*/
__int64 SND_GetPlaybackTime(const char *name)
{
  const char *v1; 
  int v2; 
  char v3; 
  unsigned int v4; 
  char v5; 
  SndAliasList *v6; 
  SndAliasList *v7; 
  int count; 
  unsigned int v9; 
  __int64 v10; 
  SndAlias *v11; 
  unsigned int assetId; 
  int v13; 
  SndBankInfo *v14; 
  char v15; 
  signed int v16; 
  unsigned int v17; 
  int v18; 
  SndBankInfo *v19; 
  char v20; 
  signed int v21; 
  int v23; 
  const char *v24; 
  int v25; 
  const char *v26; 
  unsigned int v27; 
  SndAssetBankEntry *entry; 

  v1 = name;
  v2 = -1;
  if ( name )
  {
    v3 = *name;
    if ( *name )
    {
      v4 = 5381;
      do
      {
        ++v1;
        v5 = v3 | 0x20;
        if ( (unsigned int)(v3 - 65) >= 0x1A )
          v5 = v3;
        v4 = 65599 * v4 + v5;
        v3 = *v1;
      }
      while ( *v1 );
      if ( !v4 )
        v4 = 1;
      v6 = SND_BankAliasLookup(v4);
      v7 = v6;
      if ( v6 )
      {
        if ( v6->count >= 0x40u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 1670, ASSERT_TYPE_ASSERT, "(list->count < MAX_VARIANTS)", (const char *)&queryFormat, "list->count < MAX_VARIANTS") )
          __debugbreak();
        count = 64;
        if ( v7->count < 0x40u )
          count = v7->count;
        v9 = 0;
        v27 = count;
        if ( count )
        {
          v10 = 0i64;
          do
          {
            if ( v9 >= 0x40 )
              return (unsigned int)v2;
            v11 = &v7->head[v10];
            if ( v11 )
            {
              assetId = v11->assetId;
              entry = NULL;
              if ( !assetId )
                return 0i64;
              Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
              v13 = 0;
              while ( 1 )
              {
                v14 = g_sb.bankStack[799 - v13];
                if ( v14->bank && v14->bankActive && (v14->load.streamAssetPatchBank.indicesLoaded && SND_AssetBankFindEntry(assetId, v14->load.streamAssetPatchBank.entries, v14->load.streamAssetPatchBank.entryCount, (const SndAssetBankEntry **)&entry) || v14->load.streamAssetBank.indicesLoaded && SND_AssetBankFindEntry(assetId, v14->load.streamAssetBank.entries, v14->load.streamAssetBank.entryCount, (const SndAssetBankEntry **)&entry)) )
                  break;
                if ( (unsigned int)++v13 >= 0x320 )
                {
                  v15 = 0;
                  goto LABEL_29;
                }
              }
              v15 = 1;
LABEL_29:
              Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
              if ( !v15 )
              {
                v17 = v11->assetId;
                Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
                v18 = 0;
                while ( 1 )
                {
                  v19 = g_sb.bankStack[799 - v18];
                  if ( v19->bank )
                  {
                    if ( v19->bankActive && v19->load.state == SND_BANK_STATE_READY_TO_USE && SND_AssetBankFindEntry(v17, v19->load.loadAssetBank.entries, v19->load.loadAssetBank.entryCount, (const SndAssetBankEntry **)&entry) )
                      break;
                  }
                  if ( (unsigned int)++v18 >= 0x320 )
                  {
                    v20 = 0;
                    goto LABEL_41;
                  }
                }
                if ( entry->offset == 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 193, ASSERT_TYPE_ASSERT, "((*entry)->offset != 0xFFFFFFFF)", (const char *)&queryFormat, "(*entry)->offset != SND_ASSET_BANK_INVALID_OFFSET") )
                  __debugbreak();
                v23 = *(_DWORD *)&v19->load.loadedData[entry->offset];
                if ( v23 == 858993459 )
                {
                  v24 = "x != 0x33333333";
                  v25 = 204;
                  v26 = "(x != 0x33333333)";
LABEL_53:
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", v25, ASSERT_TYPE_ASSERT, v26, (const char *)&queryFormat, v24) )
                    __debugbreak();
                }
                else if ( v23 == 1145324612 )
                {
                  v24 = "x != 0x44444444";
                  v25 = 205;
                  v26 = "(x != 0x44444444)";
                  goto LABEL_53;
                }
                v20 = 1;
LABEL_41:
                Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
                if ( v20 )
                {
                  v21 = SND_AssetBankGetLengthMs(entry) + 250;
                  if ( v21 > v2 )
                    v2 = v21;
                }
                goto LABEL_44;
              }
              v16 = SND_AssetBankGetLengthMs(entry) + 500;
              if ( v16 <= v2 )
                v16 = v2;
              v2 = v16;
            }
LABEL_44:
            ++v9;
            ++v10;
          }
          while ( v9 < v27 );
        }
      }
    }
  }
  return (unsigned int)v2;
}

/*
==============
SND_GetRuntimeAssetBankFileName
==============
*/
void SND_GetRuntimeAssetBankFileName(bool stream, bool isPatch, const char *zone, const char *language, const char *languagePrefix, int length, char *path)
{
  bool v10; 
  const char *v11; 
  __int64 v12; 
  const char *v13; 
  const char *v14; 
  int v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  unsigned __int64 v19; 

  if ( !zone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 67, ASSERT_TYPE_ASSERT, "(zone)", (const char *)&queryFormat, "zone") )
    __debugbreak();
  if ( !language && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 68, ASSERT_TYPE_ASSERT, "(language)", (const char *)&queryFormat, "language") )
    __debugbreak();
  if ( length <= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 69, ASSERT_TYPE_ASSERT, "(length > 4)", (const char *)&queryFormat, "length > 4") )
    __debugbreak();
  if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 70, ASSERT_TYPE_ASSERT, "(path)", (const char *)&queryFormat, "path") )
    __debugbreak();
  if ( isPatch && !stream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 71, ASSERT_TYPE_ASSERT, "(!isPatch || stream)", (const char *)&queryFormat, "!isPatch || stream") )
    __debugbreak();
  v10 = !stream;
  v11 = ".sabl";
  v12 = 0x7FFFFFFFi64;
  if ( !v10 )
    v11 = ".sabs";
  v13 = (char *)&queryFormat.fmt + 3;
  v10 = !isPatch;
  v14 = "all";
  v15 = 1;
  if ( !v10 )
    v13 = "patch_";
  if ( !language && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v16 = v14[language - "all"];
    v17 = v12;
    v18 = *v14++;
    --v12;
    if ( !v17 )
    {
      v19 = length;
      goto LABEL_33;
    }
    if ( v16 != v18 )
      break;
    if ( !v16 )
    {
      v15 = 0;
      goto LABEL_30;
    }
  }
  if ( v16 < v18 )
    v15 = -1;
LABEL_30:
  v19 = length;
  if ( v15 )
  {
    Com_sprintf(path, length, "%s\\%s_%s%s%s", language, languagePrefix, v13, zone, v11);
    return;
  }
LABEL_33:
  Com_sprintf(path, v19, "%s%s%s", v13, zone, v11);
}

/*
==============
SND_HasLoadingBanks
==============
*/
bool SND_HasLoadingBanks(bool codePostGfxOnly)
{
  return SND_Active() && !cls.quit && (!codePostGfxOnly || !g_snd.codePostGfxReady) && !g_snd.bankUpdateStatus;
}

/*
==============
SND_HeaderCheck
==============
*/
char SND_HeaderCheck(const SndBank *bank, SndAssetBankLoad *assetBank, const SndAssetBankHeader *header, bool stream)
{
  __int64 v7; 

  if ( !assetBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 846, ASSERT_TYPE_ASSERT, "(assetBank)", (const char *)&queryFormat, "assetBank") )
    __debugbreak();
  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 847, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( g_sb.bankMagic != 304297029 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 848, ASSERT_TYPE_ASSERT, "(g_sb.bankMagic == 0x12233445)", (const char *)&queryFormat, "g_sb.bankMagic == SND_BANK_ENTRY_MAGIC") )
    __debugbreak();
  if ( !assetBank->filename[0] )
    return 1;
  SND_AssetBankHeaderSwap(header);
  v7 = stream ? FileStream_Easy_FileSize((FileStreamFileID)*(_DWORD *)assetBank->fileHandle) : 0i64;
  if ( SND_AssetBankValidateHeader(assetBank->filename, header, v7, NULL) )
    return 1;
  Com_PrintError(9, "SOUND ERROR: invalid header for sound bank \"%s\", sound data not loaded\n", assetBank->filename);
  return 0;
}

/*
==============
SND_InitToc
==============
*/
char SND_InitToc(SndBankLoad *load, SndAssetBankLoad *assetBank, const SndAssetBankHeader *header, bool streamed, unsigned __int8 *memory)
{
  char result; 
  unsigned int entryCount; 

  if ( !load && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 922, ASSERT_TYPE_ASSERT, "(load)", (const char *)&queryFormat, "load") )
    __debugbreak();
  if ( !assetBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 923, ASSERT_TYPE_ASSERT, "(assetBank)", (const char *)&queryFormat, "assetBank") )
    __debugbreak();
  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 924, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( !memory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 925, ASSERT_TYPE_ASSERT, "(memory)", (const char *)&queryFormat, "memory") )
    __debugbreak();
  result = 0;
  assetBank->entries = NULL;
  assetBank->entryCount = 0;
  if ( (!streamed || assetBank->filename[0]) && header->entryCount )
  {
    assetBank->entries = (SndAssetBankEntry *)memory;
    if ( !memory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 946, ASSERT_TYPE_ASSERT, "(assetBank->entries)", (const char *)&queryFormat, "assetBank->entries") )
      __debugbreak();
    entryCount = header->entryCount;
    assetBank->entryCount = entryCount;
    if ( !entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 949, ASSERT_TYPE_ASSERT, "(assetBank->entryCount)", (const char *)&queryFormat, "assetBank->entryCount") )
      __debugbreak();
    assetBank->indicesAllocated = 1;
    return 1;
  }
  return result;
}

/*
==============
SND_IsBankAssetInUse
==============
*/
bool SND_IsBankAssetInUse(const SndBankInfo *info, const SndAlias *alias, const SndAssetBankEntry *entry)
{
  const SndBank *bank; 
  unsigned __int64 v5; 
  SndAliasList *v6; 
  __int64 v7; 
  bool v8; 
  SndAliasList *v9; 
  unsigned __int64 head; 
  SndAssetBankEntry *entries; 
  SndAssetBankEntry *v12; 
  SndAssetBankEntry *v14; 

  bank = info->bank;
  v5 = 0i64;
  v6 = bank->alias;
  if ( v6 )
  {
    v7 = bank->aliasCount - 1;
    v8 = &v6[v7] == NULL;
    v9 = &v6[v7];
    head = (unsigned __int64)v6->head;
    if ( !v8 )
      v5 = (unsigned __int64)&v9->head[v9->count - 1];
  }
  else
  {
    head = 0i64;
  }
  if ( alias && (unsigned __int64)alias >= head && (unsigned __int64)alias <= v5 )
    return 1;
  entries = info->load.streamAssetBank.entries;
  if ( entry >= entries && entry < &entries[info->load.streamAssetBank.entryCount] )
    return 1;
  v12 = info->load.loadAssetBank.entries;
  if ( entry >= v12 && entry < &v12[info->load.loadAssetBank.entryCount] )
    return 1;
  v14 = info->load.streamAssetPatchBank.entries;
  return entry >= v14 && entry < &v14[info->load.streamAssetPatchBank.entryCount];
}

/*
==============
SND_IsBankInUse
==============
*/
char SND_IsBankInUse(const SndBankInfo *info)
{
  char v1; 
  int v4; 
  const SndAliasList **p_aliasList; 
  unsigned int i; 
  SndAliasList *alias; 
  const SndAssetBankEntry **p_assetEntry; 
  sd_source *p_source; 
  const SndAlias **p_alias; 

  v1 = 0;
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 434, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !info->bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 435, ASSERT_TYPE_ASSERT, "(info->bank)", (const char *)&queryFormat, "info->bank") )
    __debugbreak();
  if ( !info->bankActive )
    return 0;
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v4 = 0;
  p_aliasList = &g_snd.virtualLoops[0].aliasList;
  for ( i = 0; i < 0xC6; ++i )
  {
    if ( *((_DWORD *)p_aliasList - 2) != -1 )
    {
      alias = info->bank->alias;
      if ( *p_aliasList >= alias && *p_aliasList < &alias[info->bank->aliasCount] )
      {
        v1 = 1;
        goto LABEL_33;
      }
    }
    p_aliasList += 6;
  }
  p_assetEntry = &g_snd.voices[0].assetEntry;
  while ( 1 )
  {
    if ( !SND_IsVoiceFree(v4) )
    {
      if ( !*p_assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 487, ASSERT_TYPE_ASSERT, "(g_snd.voices[i].assetEntry)", (const char *)&queryFormat, "g_snd.voices[i].assetEntry") )
        __debugbreak();
      if ( SND_IsBankAssetInUse(info, (const SndAlias *)*(p_assetEntry - 1), *p_assetEntry) )
        break;
    }
    ++v4;
    p_assetEntry += 246;
    if ( v4 >= 99 )
    {
      p_source = &g_sd.voicePool[0].source;
      while ( !LODWORD(p_source[-1].stream) || !SND_IsBankAssetInUse(info, p_source->alias, p_source->entry) )
      {
        p_source = (sd_source *)((char *)p_source + 1064);
        if ( (__int64)p_source >= (__int64)&g_sd.voiceYearnsToBeFree[32] )
        {
          p_alias = &g_sd.futzSource[0].in.alias;
          while ( !SND_IsBankAssetInUse(info, *p_alias, (const SndAssetBankEntry *)*(p_alias - 10)) && !SND_IsBankAssetInUse(info, p_alias[11], (const SndAssetBankEntry *)p_alias[1]) && !SND_IsBankAssetInUse(info, p_alias[22], (const SndAssetBankEntry *)p_alias[12]) )
          {
            p_alias += 34;
            if ( (__int64)p_alias >= (__int64)&unk_15595A920 )
              goto LABEL_33;
          }
          goto LABEL_32;
        }
      }
      break;
    }
  }
LABEL_32:
  v1 = 1;
LABEL_33:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  return v1;
}

/*
==============
SND_LoadSoundsWait
==============
*/
void SND_LoadSoundsWait(bool codePostGfxOnly)
{
  bool codePostGfxReady; 

  codePostGfxReady = g_snd.codePostGfxReady;
  if ( codePostGfxOnly )
    codePostGfxReady = 0;
  g_snd.codePostGfxReady = codePostGfxReady;
  if ( SND_Active() )
  {
    while ( 1 )
    {
      g_sb.loadGate = 0;
      SND_UpdateWait();
      if ( !SND_Active() || cls.quit || codePostGfxOnly && g_snd.codePostGfxReady )
        break;
      if ( g_snd.bankUpdateStatus )
        break;
      Sys_Sleep(1);
    }
  }
}

/*
==============
SND_StartHeaderRead
==============
*/
bool SND_StartHeaderRead(bool streamed, SndAssetBankLoad *assetBank, SndBankLoad *load, SndAssetBankHeader *header)
{
  int v8; 
  bool result; 

  if ( !assetBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 799, ASSERT_TYPE_ASSERT, "(assetBank)", (const char *)&queryFormat, "assetBank") )
    __debugbreak();
  if ( !load && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 800, ASSERT_TYPE_ASSERT, "(load)", (const char *)&queryFormat, "load") )
    __debugbreak();
  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 801, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( !streamed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 804, ASSERT_TYPE_ASSERT, "(streamed)", "%s\n\tSND_StartHeaderRead() should only be used for streamed banks when STREAM_SOUND_BANKS is enabled.", "streamed") )
    __debugbreak();
  if ( !assetBank->filename[0] )
    return 0;
  LOBYTE(v8) = FileStream_OpenFile(SF_ZONE, assetBank->filename, 9);
  *(_DWORD *)assetBank->fileHandle = v8;
  if ( v8 == -16777217 )
    return 0;
  if ( FileStream_Easy_FileSize((FileStreamFileID)v8) == 4096 )
  {
    memset_0(header, 0, sizeof(SndAssetBankHeader));
    FileStream_CloseFile((FileStreamFileID)*(_DWORD *)assetBank->fileHandle);
    result = 1;
    *(_DWORD *)assetBank->fileHandle = -16777217;
  }
  else
  {
    DebugWipe(header, 0x2B0ui64);
    while ( !SND_Bank_AddStreamReadRequest(load, *(_DWORD *)assetBank->fileHandle, 0i64, 0x2B0ui64, (unsigned __int8 *)header) )
      Sys_Sleep(1);
    return 1;
  }
  return result;
}

/*
==============
SND_StartTocRead
==============
*/
char SND_StartTocRead(SndBankLoad *load, SndAssetBankLoad *assetBank, const SndAssetBankHeader *header, bool streamed, unsigned __int8 *memory, unsigned __int64 readSize)
{
  if ( !load && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 959, ASSERT_TYPE_ASSERT, "(load)", (const char *)&queryFormat, "load") )
    __debugbreak();
  if ( !assetBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 960, ASSERT_TYPE_ASSERT, "(assetBank)", (const char *)&queryFormat, "assetBank") )
    __debugbreak();
  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 961, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( !memory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 962, ASSERT_TYPE_ASSERT, "(memory)", (const char *)&queryFormat, "memory") )
    __debugbreak();
  if ( !streamed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 965, ASSERT_TYPE_ASSERT, "(streamed)", "%s\n\tSND_StartTocRead() should only be used for streamed banks when STREAM_SOUND_BANKS is enabled.", "streamed") )
    __debugbreak();
  DebugWipe(assetBank->entries, readSize);
  SND_Bank_AddStreamReadRequest(load, *(_DWORD *)assetBank->fileHandle, header->entryOffset, readSize, (unsigned __int8 *)assetBank->entries);
  return 1;
}

/*
==============
SND_StopBankSounds
==============
*/
__int64 SND_StopBankSounds(const SndBank *bank)
{
  int v2; 
  SndBankInfo **bankStack; 
  const SndBankInfo *v4; 
  unsigned int v5; 
  unsigned __int8 v6; 
  const SndBank *v7; 
  int v8; 
  const SndAssetBankEntry **p_assetEntry; 
  SndVirtualLoop *virtualLoops; 
  unsigned int i; 
  const SndAliasList *aliasList; 
  SndAliasList *alias; 
  sd_source *p_source; 
  const SndAlias **p_alias; 

  if ( !bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 702, ASSERT_TYPE_ASSERT, "(bank)", (const char *)&queryFormat, "bank") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = 0;
  bankStack = g_sb.bankStack;
  v4 = NULL;
  v5 = 0;
  while ( (*bankStack)->bank != bank )
  {
    ++v5;
    ++bankStack;
    if ( v5 >= 0x320 )
      goto LABEL_9;
  }
  v4 = *bankStack;
LABEL_9:
  v6 = 0;
  if ( v4 )
  {
    if ( !v4->bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 556, ASSERT_TYPE_ASSERT, "(info->bank)", (const char *)&queryFormat, "info->bank") )
      __debugbreak();
    if ( v4->bankActive )
    {
      v7 = v4->bank;
      v4->bankActive = 0;
      SND_SubmixStopAllByBank(v7->ducks, v7->duckCount);
      v8 = 0;
      p_assetEntry = &g_snd.voices[0].assetEntry;
      do
      {
        if ( !SND_IsVoiceFree(v8) )
        {
          if ( !*p_assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 594, ASSERT_TYPE_ASSERT, "(g_snd.voices[i].assetEntry)", (const char *)&queryFormat, "g_snd.voices[i].assetEntry") )
            __debugbreak();
          if ( SND_IsBankAssetInUse(v4, (const SndAlias *)*(p_assetEntry - 1), *p_assetEntry) )
          {
            v6 = 1;
            SD_InvalidateStreamBuffers(v8);
            SD_ClearAutoSim(v8);
            SND_StopVoice(v8);
          }
        }
        ++v8;
        p_assetEntry += 246;
      }
      while ( v8 < 99 );
      virtualLoops = g_snd.virtualLoops;
      for ( i = 0; i < 0xC6; ++i )
      {
        if ( virtualLoops->handle != -1 )
        {
          aliasList = virtualLoops->aliasList;
          alias = v4->bank->alias;
          if ( aliasList >= alias && aliasList < &alias[v4->bank->aliasCount] )
            virtualLoops->handle = -1;
        }
        ++virtualLoops;
      }
      p_source = &g_sd.voicePool[0].source;
      do
      {
        if ( LODWORD(p_source[-1].stream) && SND_IsBankAssetInUse(v4, p_source->alias, p_source->entry) )
        {
          v6 = 1;
          SD_StopHeldAutoSimVoice(v2);
        }
        ++v2;
        p_source = (sd_source *)((char *)p_source + 1064);
      }
      while ( v2 < 198 );
      p_alias = &g_sd.futzSource[0].in.alias;
      do
      {
        if ( SND_IsBankAssetInUse(v4, *p_alias, (const SndAssetBankEntry *)*(p_alias - 10)) || SND_IsBankAssetInUse(v4, p_alias[11], (const SndAssetBankEntry *)p_alias[1]) || SND_IsBankAssetInUse(v4, p_alias[22], (const SndAssetBankEntry *)p_alias[12]) )
        {
          v6 = 1;
          VoiceDecode_FutzDelete(*((_DWORD *)p_alias + 46));
        }
        p_alias += 34;
      }
      while ( (__int64)p_alias < (__int64)&unk_15595A920 );
      if ( v6 && !v4->mixerStopTime )
        v4->mixerStopTime = g_sd.buffersSubmitted;
    }
    else
    {
      v6 = 0;
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  return v6;
}

/*
==============
SND_StopBankSoundsWithBankInfo
==============
*/
__int64 SND_StopBankSoundsWithBankInfo(SndBankInfo *info)
{
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  LOBYTE(info) = SND_StopBankSounds_Internal(info);
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  return (unsigned __int8)info;
}

/*
==============
SND_StopBankSounds_Internal
==============
*/
char SND_StopBankSounds_Internal(SndBankInfo *info)
{
  char v1; 
  const SndBank *bank; 
  int v5; 
  const SndAssetBankEntry **p_assetEntry; 
  int i; 
  SndVirtualLoop *virtualLoops; 
  unsigned int j; 
  const SndAliasList *aliasList; 
  SndAliasList *alias; 
  sd_source *p_source; 
  const SndAlias **p_alias; 

  v1 = 0;
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 555, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !info->bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 556, ASSERT_TYPE_ASSERT, "(info->bank)", (const char *)&queryFormat, "info->bank") )
    __debugbreak();
  if ( !info->bankActive )
    return 0;
  bank = info->bank;
  info->bankActive = 0;
  SND_SubmixStopAllByBank(bank->ducks, bank->duckCount);
  v5 = 0;
  p_assetEntry = &g_snd.voices[0].assetEntry;
  for ( i = 0; i < 99; ++i )
  {
    if ( !SND_IsVoiceFree(i) )
    {
      if ( !*p_assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 594, ASSERT_TYPE_ASSERT, "(g_snd.voices[i].assetEntry)", (const char *)&queryFormat, "g_snd.voices[i].assetEntry") )
        __debugbreak();
      if ( SND_IsBankAssetInUse(info, (const SndAlias *)*(p_assetEntry - 1), *p_assetEntry) )
      {
        v1 = 1;
        SD_InvalidateStreamBuffers(i);
        SD_ClearAutoSim(i);
        SND_StopVoice(i);
      }
    }
    p_assetEntry += 246;
  }
  virtualLoops = g_snd.virtualLoops;
  for ( j = 0; j < 0xC6; ++j )
  {
    if ( virtualLoops->handle != -1 )
    {
      aliasList = virtualLoops->aliasList;
      alias = info->bank->alias;
      if ( aliasList >= alias && aliasList < &alias[info->bank->aliasCount] )
        virtualLoops->handle = -1;
    }
    ++virtualLoops;
  }
  p_source = &g_sd.voicePool[0].source;
  do
  {
    if ( LODWORD(p_source[-1].stream) && SND_IsBankAssetInUse(info, p_source->alias, p_source->entry) )
    {
      v1 = 1;
      SD_StopHeldAutoSimVoice(v5);
    }
    ++v5;
    p_source = (sd_source *)((char *)p_source + 1064);
  }
  while ( v5 < 198 );
  p_alias = &g_sd.futzSource[0].in.alias;
  do
  {
    if ( SND_IsBankAssetInUse(info, *p_alias, (const SndAssetBankEntry *)*(p_alias - 10)) || SND_IsBankAssetInUse(info, p_alias[11], (const SndAssetBankEntry *)p_alias[1]) || SND_IsBankAssetInUse(info, p_alias[22], (const SndAssetBankEntry *)p_alias[12]) )
    {
      v1 = 1;
      VoiceDecode_FutzDelete(*((_DWORD *)p_alias + 46));
    }
    p_alias += 34;
  }
  while ( (__int64)p_alias < (__int64)&unk_15595A920 );
  if ( v1 )
  {
    if ( !info->mixerStopTime )
      info->mixerStopTime = g_sd.buffersSubmitted;
  }
  return v1;
}

/*
==============
SND_TocCheck
==============
*/
bool SND_TocCheck(const SndBank *bank, SndAssetBankLoad *assetBank, __int64 fileSize)
{
  bool result; 
  unsigned int entryCount; 
  unsigned int v7; 
  __int64 v8; 

  if ( !assetBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 982, ASSERT_TYPE_ASSERT, "(assetBank)", (const char *)&queryFormat, "assetBank") )
    __debugbreak();
  if ( !assetBank->filename[0] )
    return 1;
  entryCount = assetBank->entryCount;
  v7 = 0;
  if ( entryCount )
  {
    while ( 1 )
    {
      v8 = v7;
      SND_AssetBankEntrySwap(&assetBank->entries[v8]);
      if ( !SND_AssetBankValidateEntry(assetBank->filename, fileSize, &assetBank->entries[v8]) )
        break;
      entryCount = assetBank->entryCount;
      if ( ++v7 >= entryCount )
        goto LABEL_9;
    }
    Com_PrintError(9, "SOUND ERROR: invalid entry in sound bank %s\n", assetBank->filename);
    return 0;
  }
  else
  {
LABEL_9:
    qsort(assetBank->entries, entryCount, 0x2Cui64, (_CoreCrtNonSecureSearchSortCompareFunction)SND_EntryCompare);
    result = 1;
    assetBank->indicesLoaded = 1;
  }
  return result;
}

/*
==============
SND_UnloadAssetBank
==============
*/
void SND_UnloadAssetBank(const int bankIndex)
{
  SndBankInfo *v1; 
  const SndBank *bank; 
  unsigned int dataSize; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned __int8 *streamToc; 
  unsigned __int8 *streamPatchToc; 

  v1 = g_sb.bankStack[bankIndex];
  if ( !g_sb.bankCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 270, ASSERT_TYPE_ASSERT, "(g_sb.bankCount)", (const char *)&queryFormat, "g_sb.bankCount") )
    __debugbreak();
  if ( g_sb.bankCount > 0x320 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank_load.cpp", 271, ASSERT_TYPE_ASSERT, "(g_sb.bankCount <= ( 32 + 768 ))", (const char *)&queryFormat, "g_sb.bankCount <= SND_MAX_BANKS") )
    __debugbreak();
  v1->load.bank->streamInfo.loadedStreamKey->assetHash = 0i64;
  bank = v1->load.bank;
  if ( v1->load.loadAssetBank.indicesLoaded )
  {
    dataSize = bank->streamInfo.loadedStreamKey->dataSize;
    if ( bank->streamInfo.alwaysLoaded )
    {
      v4 = -dataSize;
      if ( ((unsigned __int8)&s_streamKeyLoadedSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_streamKeyLoadedSize) )
        __debugbreak();
      _InterlockedExchangeAdd(&s_streamKeyLoadedSize, v4);
    }
    else
    {
      v5 = -dataSize;
      if ( ((unsigned __int8)&s_streamKeyLoadedTransientSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_streamKeyLoadedTransientSize) )
        __debugbreak();
      _InterlockedExchangeAdd(&s_streamKeyLoadedTransientSize, v5);
    }
  }
  while ( (unsigned __int8)(v1->load.state - 9) > 2u )
  {
    g_sb.loadGate = 0;
    g_snd.bankUpdateStatus = SND_BankLoadUpdate();
    Sys_Sleep(1);
  }
  SND_CloseAssetBank(&v1->load.streamAssetBank);
  SND_CloseAssetBank(&v1->load.streamAssetPatchBank);
  while ( v1->load.pendingIo )
  {
    if ( v1->load.ioCancelled )
      break;
    if ( v1->load.ioError )
      break;
    Sys_Sleep(1);
  }
  streamToc = v1->load.streamToc;
  if ( streamToc )
  {
    SD_Free(streamToc);
    v1->load.streamToc = NULL;
  }
  streamPatchToc = v1->load.streamPatchToc;
  if ( streamPatchToc )
  {
    SD_Free(streamPatchToc);
    v1->load.streamPatchToc = NULL;
  }
  memset_0(&v1->load, 222, sizeof(v1->load));
}

