/*
==============
G_GameInterface_PostLoadMapStabilityChecks
==============
*/

void G_GameInterface_PostLoadMapStabilityChecks(void)
{
  ?G_GameInterface_PostLoadMapStabilityChecks@@YAXXZ();
}

/*
==============
G_GameInterface_OnLoad
==============
*/

void __fastcall G_GameInterface_OnLoad(MemoryFile *memFile)
{
  ?G_GameInterface_OnLoad@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_GameInterface_Turret_CanTarget
==============
*/

bool __fastcall G_GameInterface_Turret_CanTarget(const playerState_s *ps)
{
  return ?G_GameInterface_Turret_CanTarget@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
G_GameInterface_Physics_IsWorldBodyCountCloseToCapacity
==============
*/

bool __fastcall G_GameInterface_Physics_IsWorldBodyCountCloseToCapacity(Physics_WorldId worldId, float capacityPercent)
{
  return ?G_GameInterface_Physics_IsWorldBodyCountCloseToCapacity@@YA_NW4Physics_WorldId@@M@Z(worldId, capacityPercent);
}

/*
==============
G_GameInterface_OnSave
==============
*/

void __fastcall G_GameInterface_OnSave(bool savegame, MemoryFile *memFile)
{
  ?G_GameInterface_OnSave@@YAX_NPEAUMemoryFile@@@Z(savegame, memFile);
}

/*
==============
G_GameInterface_OnShutdownGameMemory
==============
*/

void G_GameInterface_OnShutdownGameMemory(void)
{
  ?G_GameInterface_OnShutdownGameMemory@@YAXXZ();
}

/*
==============
G_GameInterface_OnAllocationSize
==============
*/

void __fastcall G_GameInterface_OnAllocationSize(unsigned int *size)
{
  ?G_GameInterface_OnAllocationSize@@YAXPEAI@Z(size);
}

/*
==============
G_GameInterface_PlayingBR
==============
*/

bool __fastcall G_GameInterface_PlayingBR()
{
  return ?G_GameInterface_PlayingBR@@YA_NXZ();
}

/*
==============
G_GameInterface_PhysicsBodyCapacityChecks
==============
*/

void G_GameInterface_PhysicsBodyCapacityChecks(void)
{
  ?G_GameInterface_PhysicsBodyCapacityChecks@@YAXXZ();
}

/*
==============
G_GameInterface_Physics_GetWorldBodyCount
==============
*/

void __fastcall G_GameInterface_Physics_GetWorldBodyCount(Physics_WorldId worldId, unsigned int *retBodyCnt, unsigned int *retMaxCnt)
{
  ?G_GameInterface_Physics_GetWorldBodyCount@@YAXW4Physics_WorldId@@AEAI1@Z(worldId, retBodyCnt, retMaxCnt);
}

/*
==============
G_GameInterface_OnAllocateGameMemory
==============
*/

void __fastcall G_GameInterface_OnAllocateGameMemory(HunkUser *hunkUser)
{
  ?G_GameInterface_OnAllocateGameMemory@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
G_GameInterface_OnAllocateGameMemory
==============
*/
void G_GameInterface_OnAllocateGameMemory(HunkUser *hunkUser)
{
  GExampleSystemClass::AllocateMemory(hunkUser);
  G_ExampleSystemFunctions_OnAllocate(hunkUser);
}

/*
==============
G_GameInterface_OnAllocationSize
==============
*/
void G_GameInterface_OnAllocationSize(unsigned int *size)
{
  *size += GExampleSystemClass::GetMemorySize();
  *size += G_ExampleSystemFunctions_GetAllocationSize();
}

/*
==============
G_GameInterface_OnLoad
==============
*/
void G_GameInterface_OnLoad(MemoryFile *memFile)
{
  GExampleSystemClass *Instance; 

  Instance = GExampleSystemClass::GetInstance();
  GExampleSystemClass::Load(Instance, memFile);
  G_ExampleSystemFunctions_OnLoad(memFile);
}

/*
==============
G_GameInterface_OnSave
==============
*/
void G_GameInterface_OnSave(bool savegame, MemoryFile *memFile)
{
  GExampleSystemClass *Instance; 

  Instance = GExampleSystemClass::GetInstance();
  GExampleSystemClass::Save(Instance, memFile);
  G_ExampleSystemFunctions_OnSave(savegame, memFile);
}

/*
==============
G_GameInterface_OnShutdownGameMemory
==============
*/
void G_GameInterface_OnShutdownGameMemory(void)
{
  G_ExampleSystemFunctions_OnShutdownGameMemory();
  GExampleSystemClass::FreeMemory();
}

/*
==============
G_GameInterface_PhysicsBodyCapacityChecks
==============
*/
void G_GameInterface_PhysicsBodyCapacityChecks(void)
{
  ;
}

/*
==============
G_GameInterface_Physics_GetWorldBodyCount
==============
*/
void G_GameInterface_Physics_GetWorldBodyCount(Physics_WorldId worldId, unsigned int *retBodyCnt, unsigned int *retMaxCnt)
{
  ;
}

/*
==============
G_GameInterface_Physics_IsWorldBodyCountCloseToCapacity
==============
*/
bool G_GameInterface_Physics_IsWorldBodyCountCloseToCapacity(Physics_WorldId worldId, float capacityPercent)
{
  return 0;
}

/*
==============
G_GameInterface_PlayingBR
==============
*/
bool G_GameInterface_PlayingBR()
{
  return level.gameTypeQuick[0] == 1;
}

/*
==============
G_GameInterface_PostLoadMapStabilityChecks
==============
*/
void G_GameInterface_PostLoadMapStabilityChecks(void)
{
  ;
}

/*
==============
G_GameInterface_Turret_CanTarget
==============
*/
bool G_GameInterface_Turret_CanTarget(const playerState_s *ps)
{
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v3; 

  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x25u);
  v3 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex < 0 )
    return 1;
  if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", PerkNetworkPriorityIndex, 64) )
    __debugbreak();
  return ((0x80000000 >> (v3 & 0x1F)) & ps->perks.array[v3 >> 5]) == 0;
}

