/*
==============
G_SaveMemoryMP_GetBuffer
==============
*/

unsigned __int8 *__fastcall G_SaveMemoryMP_GetBuffer(GSaveMPHandleType type)
{
  return ?G_SaveMemoryMP_GetBuffer@@YAPEAEW4GSaveMPHandleType@@@Z(type);
}

/*
==============
GSaveMemoryMP::ShutdownSaveSystem
==============
*/

void __fastcall GSaveMemoryMP::ShutdownSaveSystem(GSaveMemoryMP *this)
{
  ?ShutdownSaveSystem@GSaveMemoryMP@@UEAAXXZ(this);
}

/*
==============
G_SaveMemoryMP_FinalizeLoad
==============
*/

void __fastcall G_SaveMemoryMP_FinalizeLoad(SaveGame *save)
{
  ?G_SaveMemoryMP_FinalizeLoad@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemoryMP_ReadLoadFromDevice
==============
*/

MemCardFileHandle *__fastcall G_SaveMemoryMP_ReadLoadFromDevice(MemCardFileHandle *result, const char *filename, int checksum, unsigned __int8 *buffer, int bufferSize, SaveHeader *header)
{
  return ?G_SaveMemoryMP_ReadLoadFromDevice@@YA?AUMemCardFileHandle@@PEBDHPEAEHPEAUSaveHeader@@@Z(result, filename, checksum, buffer, bufferSize, header);
}

/*
==============
G_SaveMemoryMP_GetHeader
==============
*/

const SaveHeader *__fastcall G_SaveMemoryMP_GetHeader(SaveGame *save)
{
  return ?G_SaveMemoryMP_GetHeader@@YAPEBUSaveHeader@@PEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemoryMP_GetBufferSize
==============
*/

unsigned int __fastcall G_SaveMemoryMP_GetBufferSize(GSaveMPHandleType type)
{
  return ?G_SaveMemoryMP_GetBufferSize@@YAIW4GSaveMPHandleType@@@Z(type);
}

/*
==============
G_SaveMemoryMP_ReadHeader
==============
*/

bool __fastcall G_SaveMemoryMP_ReadHeader(const char *filename, SaveHeader *header)
{
  return ?G_SaveMemoryMP_ReadHeader@@YA_NPEBDPEAUSaveHeader@@@Z(filename, header);
}

/*
==============
G_SaveMemoryMP_GetSaveHandle
==============
*/

SaveGame *__fastcall G_SaveMemoryMP_GetSaveHandle(GSaveMPHandleType type)
{
  return ?G_SaveMemoryMP_GetSaveHandle@@YAPEAUSaveGame@@W4GSaveMPHandleType@@@Z(type);
}

/*
==============
G_SaveMemoryMP_CreateHeaderInternal
==============
*/

void __fastcall G_SaveMemoryMP_CreateHeaderInternal(const char *cleanUserName, const char *description, const char *screenshot, int checksum, bool demoPlayback, SaveType saveType, int saveId, SaveHeader *header, MemoryFile *memFile)
{
  ?G_SaveMemoryMP_CreateHeaderInternal@@YAXPEBD00H_NW4SaveType@@HPEAUSaveHeader@@PEAUMemoryFile@@@Z(cleanUserName, description, screenshot, checksum, demoPlayback, saveType, saveId, header, memFile);
}

/*
==============
G_SaveMemoryMP_CreateHeader
==============
*/

void __fastcall G_SaveMemoryMP_CreateHeader(const char *cleanUserName, const char *description, const char *screenshot, int checksum, bool demoPlayback, SaveType saveType, int saveId, SaveGame *save)
{
  ?G_SaveMemoryMP_CreateHeader@@YAXPEBD00H_NW4SaveType@@HPEAUSaveGame@@@Z(cleanUserName, description, screenshot, checksum, demoPlayback, saveType, saveId, save);
}

/*
==============
GSaveMemoryMP::CleanupSaveMemory
==============
*/

void __fastcall GSaveMemoryMP::CleanupSaveMemory(GSaveMemoryMP *this)
{
  ?CleanupSaveMemory@GSaveMemoryMP@@UEAAXXZ(this);
}

/*
==============
GSaveMemoryMP::CleanupSaveMemory
==============
*/
void GSaveMemoryMP::CleanupSaveMemory(GSaveMemoryMP *this)
{
  ;
}

/*
==============
G_SaveMemoryMP_CreateHeader
==============
*/
void G_SaveMemoryMP_CreateHeader(const char *cleanUserName, const char *description, const char *screenshot, int checksum, bool demoPlayback, SaveType saveType, int saveId, SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 154, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  G_SaveMemoryMP_CreateHeaderInternal(cleanUserName, description, screenshot, checksum, demoPlayback, saveType, saveId, &save->header, &save->memFile);
}

/*
==============
G_SaveMemoryMP_CreateHeaderInternal
==============
*/
void G_SaveMemoryMP_CreateHeaderInternal(const char *cleanUserName, const char *description, const char *screenshot, int checksum, bool demoPlayback, SaveType saveType, int saveId, SaveHeader *header, MemoryFile *memFile)
{
  unsigned int v13; 
  unsigned int v14; 
  const char *GameType; 
  int ClientCount; 
  unsigned int AgentCount; 
  unsigned __int8 v18; 

  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 115, ASSERT_TYPE_ASSERT, "( header )", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 116, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  G_SaveMemory_CreateHeaderCommon(cleanUserName, description, screenshot, checksum, demoPlayback, saveType, saveId, header, memFile);
  v13 = BG_Omnvar_PerClientCount();
  header->mp.omnvarPerClientCount = truncate_cast<unsigned short,unsigned int>(v13);
  v14 = BG_Omnvar_PerGameCount();
  header->mp.omnvarPerGameCount = truncate_cast<unsigned short,unsigned int>(v14);
  GameType = SV_GameMP_GetGameType();
  Core_strcpy(header->mp.gametype, 0x80ui64, GameType);
  header->mp.hardcoreMode = SV_GameMP_IsHardcoreMode();
  Core_strcpy(header->mp.buildVersionSuffix, 0x10ui64, "_DEV");
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  header->mp.frameDuration = truncate_cast<unsigned char,int>(level.frameDuration);
  ClientCount = SV_Game_GetClientCount();
  header->mp.clientCount = truncate_cast<unsigned char,int>(ClientCount);
  AgentCount = SV_GameMP_GetAgentCount();
  v18 = AgentCount;
  if ( AgentCount > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)AgentCount, "unsigned", AgentCount) )
    __debugbreak();
  header->mp.agentCount = v18;
  header->sp.health = Sys_GetSaveProtocolVersion();
  header->sp.transientLoaded.array[0] = ScriptableSv_GetLootSeed();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  header->mpExtra.weaponMapMaxCount = BgWeaponMap::ms_runtimeSize;
}

/*
==============
G_SaveMemoryMP_FinalizeLoad
==============
*/
void G_SaveMemoryMP_FinalizeLoad(SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 38, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( save->saveState != LOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 39, ASSERT_TYPE_ASSERT, "( save->saveState == LOADING )", (const char *)&queryFormat, "save->saveState == LOADING") )
    __debugbreak();
  save->saveState = COMMITTED;
}

/*
==============
G_SaveMemoryMP_GetBuffer
==============
*/
unsigned __int8 *G_SaveMemoryMP_GetBuffer(GSaveMPHandleType type)
{
  GSaveMemoryMP *SaveMemoryMP; 

  SaveMemoryMP = GSaveMemoryMP::GetSaveMemoryMP();
  if ( type == SAVE_DEMO_HANDLE )
    return SaveMemoryMP->demoBuffer;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 59, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported handle") )
    __debugbreak();
  return 0i64;
}

/*
==============
G_SaveMemoryMP_GetBufferSize
==============
*/
__int64 G_SaveMemoryMP_GetBufferSize(GSaveMPHandleType type)
{
  if ( type == SAVE_DEMO_HANDLE )
    return 0x200000i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 76, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported handle") )
    __debugbreak();
  return 0i64;
}

/*
==============
G_SaveMemoryMP_GetHeader
==============
*/
SaveGame *G_SaveMemoryMP_GetHeader(SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 108, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  return save;
}

/*
==============
G_SaveMemoryMP_GetSaveHandle
==============
*/
SaveGame *G_SaveMemoryMP_GetSaveHandle(GSaveMPHandleType type)
{
  if ( type == SAVE_MIGRATION_HANDLE )
    return &s_migrationSave;
  if ( type == SAVE_DEMO_HANDLE )
    return &GSaveMemoryMP::GetSaveMemoryMP()->demo;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 101, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported handle") )
    __debugbreak();
  return 0i64;
}

/*
==============
G_SaveMemoryMP_ReadHeader
==============
*/
char G_SaveMemoryMP_ReadHeader(const char *filename, SaveHeader *header)
{
  __int64 v4; 
  const char *v5; 
  char *buildVersionSuffix; 
  char v7; 
  __int64 v8; 
  char v9; 

  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 181, ASSERT_TYPE_ASSERT, "( header )", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( !SaveDevice_ReadSaveHeader(filename, header) || !G_SaveMemory_ValidateHeaderCommon(header) )
    return 0;
  if ( header->demoPlayback )
  {
    v4 = 0x7FFFFFFFi64;
    v5 = "_DEV";
    buildVersionSuffix = header->mp.buildVersionSuffix;
    if ( !buildVersionSuffix && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v7 = v5[buildVersionSuffix - "_DEV"];
      v8 = v4;
      v9 = *v5++;
      --v4;
      if ( !v8 )
        break;
      if ( v7 != v9 )
      {
        Com_Printf(15, "Wrong build %s, expecting %s\n", buildVersionSuffix, "_DEV");
        return 0;
      }
    }
    while ( v7 );
  }
  return 1;
}

/*
==============
G_SaveMemoryMP_ReadLoadFromDevice
==============
*/
MemCardFileHandle *G_SaveMemoryMP_ReadLoadFromDevice(MemCardFileHandle *result, const char *filename, int checksum, unsigned __int8 *buffer, __int64 bufferSize)
{
  int v5; 
  unsigned int v7; 
  MemCardFileHandle *LoadFromDeviceCommon; 
  unsigned int v10; 
  unsigned __int16 SaveProtocolVersion; 
  unsigned int v12; 
  char *fmt; 
  char *fmta; 
  const char *saveBufferSize; 
  __int64 saveBufferSizea; 

  v5 = (int)buffer;
  v7 = (unsigned int)filename;
  if ( !bufferSize )
  {
    saveBufferSize = "header";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\savememory_mp.cpp", 162, ASSERT_TYPE_ASSERT, "( header )", (const char *)&queryFormat) )
      __debugbreak();
  }
  LODWORD(fmt) = v5;
  LoadFromDeviceCommon = G_SaveMemory_ReadLoadFromDeviceCommon(result, (const char *)v7, checksum, (unsigned __int8 *)bufferSize, (SaveHeader *)fmt, (int)saveBufferSize);
  if ( *(_DWORD *)(bufferSize + 656) != Sys_GetSaveProtocolVersion() )
  {
    CloseDevice((MemCardFileHandle)LoadFromDeviceCommon);
    MemCard_PopUseDevDrive();
    v10 = Sys_GetSaveProtocolVersion() >> 16;
    SaveProtocolVersion = Sys_GetSaveProtocolVersion();
    v12 = *(_DWORD *)(bufferSize + 656);
    LODWORD(saveBufferSizea) = SaveProtocolVersion;
    LODWORD(fmta) = HIWORD(v12);
    G_SaveError(SAVE_ERROR_CORRUPT_SAVE, &byte_143FF0060, bufferSize + 584, (unsigned __int16)v12, fmta, saveBufferSizea, v10, bufferSize + 136);
  }
  Com_Printf(10, "Save game build suffix: %s\n", (const char *)(bufferSize + 799));
  return LoadFromDeviceCommon;
}

/*
==============
GSaveMemoryMP::ShutdownSaveSystem
==============
*/
void GSaveMemoryMP::ShutdownSaveSystem(GSaveMemoryMP *this)
{
  ;
}

