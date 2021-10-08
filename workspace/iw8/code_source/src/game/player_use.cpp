/*
==============
G_PlayerUse_GetUseButtonMask
==============
*/

unsigned __int64 __fastcall G_PlayerUse_GetUseButtonMask(const playerState_s *ps)
{
  return ?G_PlayerUse_GetUseButtonMask@@YA_KPEBUplayerState_s@@@Z(ps);
}

/*
==============
G_PlayerUse_ProcessAutoUseEntities
==============
*/

void __fastcall G_PlayerUse_ProcessAutoUseEntities(gentity_s *const player)
{
  ?G_PlayerUse_ProcessAutoUseEntities@@YAXQEAUgentity_s@@@Z(player);
}

/*
==============
G_PlayerUse_UpdateCursorControlLock
==============
*/

void __fastcall G_PlayerUse_UpdateCursorControlLock(gentity_s *player)
{
  ?G_PlayerUse_UpdateCursorControlLock@@YAXPEAUgentity_s@@@Z(player);
}

/*
==============
G_PlayerUse_GetUseList_Scriptables
==============
*/

void __fastcall G_PlayerUse_GetUseList_Scriptables(UsableList *useList, const gentity_s *playerEnt, const vec3_t *viewOrigin, const vec3_t *viewForward, const playerState_s *ps, const Bounds *playerAbsBox)
{
  ?G_PlayerUse_GetUseList_Scriptables@@YAXPEAUUsableList@@PEBUgentity_s@@AEBTvec3_t@@2PEBUplayerState_s@@AEBUBounds@@@Z(useList, playerEnt, viewOrigin, viewForward, ps, playerAbsBox);
}

/*
==============
G_PlayerUse_DrawDebug
==============
*/

void G_PlayerUse_DrawDebug(void)
{
  ?G_PlayerUse_DrawDebug@@YAXXZ();
}

/*
==============
G_PlayerUse_SetObjectUsableForClient
==============
*/

void __fastcall G_PlayerUse_SetObjectUsableForClient(unsigned int useIndex, UsableClass useClass, unsigned __int8 useData, bool usable, const unsigned int clientNum)
{
  ?G_PlayerUse_SetObjectUsableForClient@@YAXIW4UsableClass@@E_NI@Z(useIndex, useClass, useData, usable, clientNum);
}

/*
==============
G_PlayerUse_UseScriptable
==============
*/

void __fastcall G_PlayerUse_UseScriptable(const gentity_s *playerEnt, const unsigned int useIndex, const unsigned __int8 useData, const unsigned int usableUseCount, const bool bAutoUse)
{
  ?G_PlayerUse_UseScriptable@@YAXPEBUgentity_s@@IEI_N@Z(playerEnt, useIndex, useData, usableUseCount, bAutoUse);
}

/*
==============
G_PlayerUse_CursorHintEntUsable
==============
*/

gentity_s *__fastcall G_PlayerUse_CursorHintEntUsable(const playerState_s *const ps)
{
  return ?G_PlayerUse_CursorHintEntUsable@@YAPEAUgentity_s@@QEBUplayerState_s@@@Z(ps);
}

/*
==============
G_PlayerUse_GetAllocationSize
==============
*/

unsigned int __fastcall G_PlayerUse_GetAllocationSize()
{
  return ?G_PlayerUse_GetAllocationSize@@YAIXZ();
}

/*
==============
G_PlayerUse_Read
==============
*/

void __fastcall G_PlayerUse_Read(SaveGame *save)
{
  ?G_PlayerUse_Read@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_PlayerUse_UpdateScriptableVehiclesNotify
==============
*/

void __fastcall G_PlayerUse_UpdateScriptableVehiclesNotify(const gentity_s *const player, const unsigned __int16 *entityList, const unsigned __int8 entityCount)
{
  ?G_PlayerUse_UpdateScriptableVehiclesNotify@@YAXQEBUgentity_s@@PEBGE@Z(player, entityList, entityCount);
}

/*
==============
G_PlayerUse_DisableAllScriptableVehicles
==============
*/

void G_PlayerUse_DisableAllScriptableVehicles(void)
{
  ?G_PlayerUse_DisableAllScriptableVehicles@@YAXXZ();
}

/*
==============
G_PlayerUse_Write
==============
*/

void __fastcall G_PlayerUse_Write(MemoryFile *memFile)
{
  ?G_PlayerUse_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_PlayerUse_UpdateCursorHints
==============
*/

void __fastcall G_PlayerUse_UpdateCursorHints(gentity_s *player)
{
  ?G_PlayerUse_UpdateCursorHints@@YAXPEAUgentity_s@@@Z(player);
}

/*
==============
G_PlayerUse_InitSystem
==============
*/

void G_PlayerUse_InitSystem(void)
{
  ?G_PlayerUse_InitSystem@@YAXXZ();
}

/*
==============
G_PlayerUse_CacheGatherDataForFrame
==============
*/

void G_PlayerUse_CacheGatherDataForFrame(void)
{
  ?G_PlayerUse_CacheGatherDataForFrame@@YAXXZ();
}

/*
==============
G_PlayerUse_SetUseRadius
==============
*/

bool __fastcall G_PlayerUse_SetUseRadius(unsigned int useIndex, UsableClass useClass, unsigned __int8 useData, const float useRadius)
{
  return ?G_PlayerUse_SetUseRadius@@YA_NIW4UsableClass@@EM@Z(useIndex, useClass, useData, useRadius);
}

/*
==============
G_PlayerUse_CheckUseState
==============
*/

bool __fastcall G_PlayerUse_CheckUseState(gentity_s *const player)
{
  return ?G_PlayerUse_CheckUseState@@YA_NQEAUgentity_s@@@Z(player);
}

/*
==============
G_PlayerUse_Free
==============
*/

void G_PlayerUse_Free(void)
{
  ?G_PlayerUse_Free@@YAXXZ();
}

/*
==============
G_PlayerUse_Allocate
==============
*/

void __fastcall G_PlayerUse_Allocate(HunkUser *hunkUser)
{
  ?G_PlayerUse_Allocate@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
G_PlayerUse_SetObjectUsableForClientMask
==============
*/

void __fastcall G_PlayerUse_SetObjectUsableForClientMask(unsigned int useIndex, UsableClass useClass, unsigned __int8 useData, bool usable, const ClientBits *clientMask)
{
  ?G_PlayerUse_SetObjectUsableForClientMask@@YAXIW4UsableClass@@E_NAEBUClientBits@@@Z(useIndex, useClass, useData, usable, clientMask);
}

/*
==============
G_PlayerUse_UpdateScriptableVehiclesCollect
==============
*/

unsigned __int8 __fastcall G_PlayerUse_UpdateScriptableVehiclesCollect(const gentity_s *const player, unsigned __int16 *vehicleList, const unsigned __int8 vehicleListCapacitiy)
{
  return ?G_PlayerUse_UpdateScriptableVehiclesCollect@@YAEQEBUgentity_s@@PEAGE@Z(player, vehicleList, vehicleListCapacitiy);
}

/*
==============
G_PlayerUse_ProcessUseList
==============
*/

bool __fastcall G_PlayerUse_ProcessUseList(gentity_s *const player)
{
  return ?G_PlayerUse_ProcessUseList@@YA_NQEAUgentity_s@@@Z(player);
}

/*
==============
G_PlayerUse_BindingToButtonBit
==============
*/

unsigned __int64 __fastcall G_PlayerUse_BindingToButtonBit(__int16 binding)
{
  return ?G_PlayerUse_BindingToButtonBit@@YA_KF@Z(binding);
}

/*
==============
G_PlayerUse_IsPlayerUsingKBMPress
==============
*/

bool __fastcall G_PlayerUse_IsPlayerUsingKBMPress(const gentity_s *player)
{
  return ?G_PlayerUse_IsPlayerUsingKBMPress@@YA_NPEBUgentity_s@@@Z(player);
}

/*
==============
G_PlayerUse_UpdateActivate
==============
*/

void __fastcall G_PlayerUse_UpdateActivate(GClientTaskQueue *outTaskQueue, gentity_s *playerEnt)
{
  ?G_PlayerUse_UpdateActivate@@YAXAEAVGClientTaskQueue@@PEAUgentity_s@@@Z(outTaskQueue, playerEnt);
}

/*
==============
G_PlayerUse_SetEntityUsable
==============
*/

void __fastcall G_PlayerUse_SetEntityUsable(gentity_s *ent, bool usable)
{
  ?G_PlayerUse_SetEntityUsable@@YAXPEAUgentity_s@@_N@Z(ent, usable);
}

/*
==============
G_PlayerUse_ProcessHintEntity
==============
*/

void __fastcall G_PlayerUse_ProcessHintEntity(gentity_s *const player)
{
  ?G_PlayerUse_ProcessHintEntity@@YAXQEAUgentity_s@@@Z(player);
}

/*
==============
G_PlayerUse_SetObjectUsable
==============
*/

bool __fastcall G_PlayerUse_SetObjectUsable(unsigned int useIndex, UsableClass useClass, unsigned __int8 useData, bool usable)
{
  return ?G_PlayerUse_SetObjectUsable@@YA_NIW4UsableClass@@E_N@Z(useIndex, useClass, useData, usable);
}

/*
==============
G_PlayerUse_SetObjectMoved
==============
*/

void __fastcall G_PlayerUse_SetObjectMoved(unsigned int useIndex, UsableClass useClass, unsigned __int8 useData, const vec3_t *origin)
{
  ?G_PlayerUse_SetObjectMoved@@YAXIW4UsableClass@@EAEBTvec3_t@@@Z(useIndex, useClass, useData, origin);
}

/*
==============
G_PlayerUse_ActivateCmd
==============
*/
char G_PlayerUse_ActivateCmd(const gentity_s *player, GClientTaskQueue *outTaskQueue, ButtonData *outButtonData)
{
  signed __int64 v6; 
  const playerState_s *EntityPlayerStateConst; 
  const scrContext_t *v8; 
  gentity_s *v9; 
  UsableClass cursorHintClass; 
  __int16 cursorHintFlags; 
  bool IsTurretActive; 
  const gentity_s *v14; 
  const gentity_s *v15; 
  char *debugTaskName; 
  __int64 v17; 
  int taskData; 
  int useCount; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 556, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = player - g_entities;
  if ( (unsigned int)v6 >= 0x800 )
  {
    LODWORD(debugTaskName) = player - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", debugTaskName, 2048) )
      __debugbreak();
  }
  v6 = (__int16)v6;
  if ( (unsigned int)(__int16)v6 >= 0x800 )
  {
    LODWORD(v17) = 2048;
    LODWORD(debugTaskName) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", debugTaskName, v17) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 557, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( player ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( player ) )") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(player);
  v8 = ScriptContext_Server();
  if ( !Scr_IsSystemActive(v8, 1u) )
    return 0;
  UsableHandle::setUsableFromWorker(outButtonData->useHoldEntity, USE_CLASS_COUNT, 0, 0);
  v9 = G_Vehicle_IsUnusable(player);
  if ( v9 )
  {
    if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 459, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
      __debugbreak();
    if ( !G_Vehicle_IsUnusable(player) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 460, ASSERT_TYPE_ASSERT, "( G_Vehicle_IsUnusable( player ) )", (const char *)&queryFormat, "G_Vehicle_IsUnusable( player )") )
      __debugbreak();
    taskData = v9->s.number;
    useCount = v9->useCount;
    if ( !GClientTaskQueue::ValidateOwner(outTaskQueue, player) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 465, ASSERT_TYPE_ASSERT, "( outTaskQueue.ValidateOwner( player ) )", (const char *)&queryFormat, "outTaskQueue.ValidateOwner( player )") )
      __debugbreak();
    GClientTaskQueue::AddTaskInternal(outTaskQueue, G_PlayerUse_VehicleExitCallback, &taskData, 8u, 4u, "PlayerUseVehicleExit");
    return 1;
  }
  if ( !player->active )
  {
LABEL_47:
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->pm_flags, ACTIVE, 5u) && (EntityPlayerStateConst->cursorHintClass == USE_CLASS_SCRIPTABLE && G_Door_ScriptableIsDoor(EntityPlayerStateConst->cursorHintEntIndex) || (unsigned int)(EntityPlayerStateConst->weapState[0].weaponState - 26) > 5) )
    {
      if ( EntityPlayerStateConst->cursorHint )
      {
        cursorHintClass = EntityPlayerStateConst->cursorHintClass;
        if ( cursorHintClass || EntityPlayerStateConst->cursorHintEntIndex != 2047 )
        {
          if ( cursorHintClass == USE_CLASS_SCRIPTABLE )
          {
            cursorHintFlags = EntityPlayerStateConst->cursorHintFlags;
            if ( (cursorHintFlags & 1) == 0 && (cursorHintFlags & 8) == 0 && EntityPlayerStateConst->cursorHintRange == USE_RANGE )
            {
              UsableHandle::setUsableFromWorker(outButtonData->useHoldEntity, USE_CLASS_SCRIPTABLE, EntityPlayerStateConst->cursorHintEntIndex, EntityPlayerStateConst->cursorHintData);
              *outButtonData->useHoldTime = level.time;
              UsableHandle::setUsableFromWorker(outButtonData->lastHoldEntity, (const UsableClass)EntityPlayerStateConst->cursorHintClass, EntityPlayerStateConst->cursorHintEntIndex, EntityPlayerStateConst->cursorHintData);
              return 1;
            }
          }
          else if ( cursorHintClass == USE_CLASS_GENTITY )
          {
            v14 = G_PlayerUse_CursorHintEntUsable(EntityPlayerStateConst);
            v15 = v14;
            if ( v14 )
            {
              UsableHandle::setEntFromWorker(outButtonData->useHoldEntity, v14);
              *outButtonData->useHoldTime = level.time;
              UsableHandle::setEntFromWorker(outButtonData->lastHoldEntity, v15);
              return 1;
            }
          }
        }
      }
      return 0;
    }
    return 1;
  }
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( EntityPlayerStateConst == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&EntityPlayerStateConst->eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
LABEL_46:
    if ( !G_PlayerUse_TurretHints(EntityPlayerStateConst) )
      return 1;
    goto LABEL_47;
  }
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->weapCommon.weapFlags, ACTIVE, 0x2Bu) )
    goto LABEL_46;
  IsTurretActive = BG_IsTurretActive(EntityPlayerStateConst);
  LOBYTE(taskData) = player->active;
  BYTE1(taskData) = IsTurretActive ? 2 : 0;
  if ( !GClientTaskQueue::ValidateOwner(outTaskQueue, player) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 507, ASSERT_TYPE_ASSERT, "( outTaskQueue.ValidateOwner( player ) )", (const char *)&queryFormat, "outTaskQueue.ValidateOwner( player )") )
    __debugbreak();
  GClientTaskQueue::AddTaskInternal(outTaskQueue, G_PlayerUse_ChangeActiveValue, &taskData, 2u, 1u, "PlayerUseChangeActive");
  return 1;
}

/*
==============
G_PlayerUse_ActivateHoldCmd
==============
*/
void G_PlayerUse_ActivateHoldCmd(const gentity_s *player, const unsigned __int64 useButtonMask, GClientTaskQueue *outTaskQueue, ButtonData *outButtonData, bool instantUse)
{
  const scrContext_t *v8; 
  GUtils *Utils; 
  unsigned int UseIndex; 
  UsableHandle *useHoldEntity; 
  int UseCount; 
  UsableHandle *v13; 
  HintHoldDuration HoldDuration; 
  int UseHoldTime; 
  bool v16; 
  __int64 taskData; 
  __int64 v18; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 827, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  v8 = ScriptContext_Server();
  if ( Scr_IsSystemActive(v8, 1u) )
  {
    if ( !outButtonData->useHoldEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 836, ASSERT_TYPE_ASSERT, "( outButtonData.useHoldEntity )", (const char *)&queryFormat, "outButtonData.useHoldEntity") )
      __debugbreak();
    if ( UsableHandle::isDefined(outButtonData->useHoldEntity) )
    {
      Utils = GUtils::GetUtils();
      if ( Utils->MayActivateHoldEntity(Utils, player) )
      {
        UseIndex = UsableHandle::getUseIndex(outButtonData->useHoldEntity);
        useHoldEntity = outButtonData->useHoldEntity;
        LODWORD(taskData) = UseIndex;
        WORD2(taskData) = *(_WORD *)&useHoldEntity->m_useClass;
        UseCount = UsableHandle::getUseCount(useHoldEntity);
        v13 = outButtonData->useHoldEntity;
        BYTE4(v18) = BYTE4(taskData) == 0;
        LODWORD(v18) = UseCount;
        BYTE6(v18) = 0;
        HoldDuration = G_PlayerUse_GetHoldDuration(player, v13);
        UseHoldTime = BG_PlayerUse_GetUseHoldTime(HoldDuration);
        v16 = instantUse || level.time - *outButtonData->useHoldTime >= UseHoldTime;
        BYTE5(v18) = v16;
        if ( __PAIR16__(v16, BYTE4(v18)) )
        {
          if ( !GClientTaskQueue::ValidateOwner(outTaskQueue, player) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 866, ASSERT_TYPE_ASSERT, "( outTaskQueue.ValidateOwner( player ) )", (const char *)&queryFormat, "outTaskQueue.ValidateOwner( player )", taskData, v18) )
            __debugbreak();
          GClientTaskQueue::AddTaskInternal(outTaskQueue, G_PlayerUse_ActivateHoldCmdCallback, &taskData, 0x10u, 4u, "PlayerUseActivateHold");
          if ( BYTE5(v18) )
            UsableHandle::setUsableFromWorker(outButtonData->useHoldEntity, USE_CLASS_COUNT, 0, 0);
        }
      }
    }
  }
}

/*
==============
G_PlayerUse_ActivateHoldCmdCallback
==============
*/
void G_PlayerUse_ActivateHoldCmdCallback(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  unsigned int *ParameterInternal; 
  unsigned int *v5; 
  gentity_s *GEntity; 

  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 791, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (unsigned int *)GClientTaskQueue::GetParameterInternal(outputQueue, 0x10u, 4u);
  v5 = ParameterInternal;
  if ( !*((_BYTE *)ParameterInternal + 12) && !*((_BYTE *)ParameterInternal + 13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 794, ASSERT_TYPE_ASSERT, "( parameters->doNotify || parameters->doUse )", (const char *)&queryFormat, "parameters->doNotify || parameters->doUse") )
    __debugbreak();
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  if ( GUtils::ms_gUtils->MayActivateHoldEntity(GUtils::ms_gUtils, playerEnt) )
  {
    if ( *((_BYTE *)v5 + 4) )
    {
      if ( *((_BYTE *)v5 + 4) == 1 )
      {
        if ( *((_BYTE *)v5 + 12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 813, ASSERT_TYPE_ASSERT, "( !parameters->doNotify )", (const char *)&queryFormat, "!parameters->doNotify") )
          __debugbreak();
        if ( !*((_BYTE *)v5 + 13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 814, ASSERT_TYPE_ASSERT, "( parameters->doUse )", (const char *)&queryFormat, "parameters->doUse") )
          __debugbreak();
        G_PlayerUse_UseScriptable(playerEnt, *v5, *((_BYTE *)v5 + 5), v5[2], *((_BYTE *)v5 + 14));
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 819, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled usable handle type") )
      {
        __debugbreak();
      }
    }
    else if ( G_IsEntityInUse(*v5) )
    {
      GEntity = G_GetGEntity(*v5);
      if ( GEntity->useCount == v5[2] )
      {
        if ( *((_BYTE *)v5 + 12) )
        {
          GScr_AddEntity(playerEnt);
          GScr_Notify(GEntity, scr_const.trigger_progress, 1u);
        }
        if ( *((_BYTE *)v5 + 13) )
          G_PlayerUse_UseEntity(playerEnt, GEntity);
      }
      else
      {
        Com_PrintWarning(34, "G_PlayerUse_ActivateHoldCmdCallback: Player %i: Usable entity %i has been re-used and is no longer valid.\n", (unsigned int)playerEnt->s.number, *v5);
      }
    }
    else
    {
      Com_PrintWarning(34, "G_PlayerUse_ActivateHoldCmdCallback: Player %i: Usable entity %i is no longer valid.\n", (unsigned int)playerEnt->s.number, *v5);
    }
  }
  else
  {
    Com_PrintWarning(34, "G_PlayerUse_ActivateHoldCmdCallback: Player (%i) can no longer activate usable object even though the callback was queued.\n", (unsigned int)playerEnt->s.number);
  }
}

/*
==============
G_PlayerUse_Allocate
==============
*/

void __fastcall G_PlayerUse_Allocate(HunkUser *hunkUser)
{
  UsableWorld_Allocate(hunkUser);
}

/*
==============
G_PlayerUse_BindingToButtonBit
==============
*/
unsigned __int64 G_PlayerUse_BindingToButtonBit(__int16 binding)
{
  if ( binding == 1 )
    return 1i64;
  if ( binding == 93 )
    return 0x40000000000i64;
  return 32i64;
}

/*
==============
G_PlayerUse_CacheGatherDataForFrame
==============
*/
void G_PlayerUse_CacheGatherDataForFrame(void)
{
  DenseGrid *v0; 
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v1; 
  PlayerUseDataMap *v2; 
  bool enabled; 
  unsigned int IndexByName; 
  unsigned int v5; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 
  ntl::pair<unsigned int,UsableRef> *m_buffer; 
  __int64 v9; 
  const char *v10; 
  __int64 v11; 
  UsableRef *p_second; 
  const unsigned int *p_first; 
  const UsableRef *v14; 
  const vec2_t *Entity; 

  v0 = UsableEntityDenseGrid_Get();
  v1 = UsableWorldCollection_Get();
  v2 = PlayerUseDataMap_Get();
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1151, ASSERT_TYPE_ASSERT, "( ( usableWorld != nullptr ) )", "%s\n\t( usableWorld ) = %p", "( usableWorld != nullptr )", NULL) )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1152, ASSERT_TYPE_ASSERT, "( ( playerUseDataMap != nullptr ) )", "%s\n\t( playerUseDataMap ) = %p", "( playerUseDataMap != nullptr )", NULL) )
    __debugbreak();
  PlayerUseDataMap_Clear(v2);
  enabled = 0;
  IndexByName = BG_Omnvar_GetIndexByName("scriptable_loot_hide");
  v5 = IndexByName;
  if ( IndexByName != -1 )
  {
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = G_Omnvar_GetData(v5, -1, NULL);
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( Def->type == OMNVAR_TYPE_BOOL )
      goto LABEL_18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
      __debugbreak();
    if ( Def->type )
      enabled = 0;
    else
LABEL_18:
      enabled = Data->current.enabled;
  }
  UsableWorld_SetLootHidden(enabled);
  m_buffer = v1->m_data.m_buffer;
  v9 = UsableWorld_CountEntities();
  v10 = j_va("G_PlayerUse_CacheGatherDataForFrame - %d Entities", v9);
  Sys_ProfBeginNamedEvent(0xFFFF0000, v10);
  if ( (_DWORD)v9 )
  {
    v11 = (unsigned int)v9;
    do
    {
      p_second = &m_buffer->second;
      p_first = &m_buffer->first;
      v14 = &m_buffer->second;
      ++m_buffer;
      Entity = (const vec2_t *)UsableRef_GetEntity(v14);
      p_second->usePartitionIndex = DenseGrid::Update(v0, *p_first, p_second->usePartitionIndex, Entity + 38);
      --v11;
    }
    while ( v11 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerUse_ChangeActiveValue
==============
*/
void G_PlayerUse_ChangeActiveValue(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  unsigned __int8 *ParameterInternal; 
  unsigned __int8 active; 
  char *fmt; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 483, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 484, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (unsigned __int8 *)GClientTaskQueue::GetParameterInternal(outputQueue, 2u, 1u);
  active = playerEnt->active;
  if ( *ParameterInternal == active )
  {
    playerEnt->active = ParameterInternal[1];
  }
  else
  {
    LODWORD(fmt) = active;
    Com_PrintWarning(34, "G_PlayerUse_ChangeActiveValue: Player %i: Active value changed between the time it was queued (%i) and executed (%i).\n", (unsigned int)playerEnt->s.number, *ParameterInternal, fmt);
  }
}

/*
==============
G_PlayerUse_CheckAutoUse
==============
*/
bool G_PlayerUse_CheckAutoUse(const gentity_s *const player, const UsableRef *ref)
{
  unsigned int useData; 
  unsigned int useIndex; 
  unsigned int v8; 
  bool v10; 
  bool v11; 
  char v27; 
  char v28; 
  bool result; 
  vec3_t out_usePosition; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _RSI = player;
  if ( !player->client || ref->useClass != USE_CLASS_SCRIPTABLE || !ScriptableSv_GetInstanceInUse(ref->useIndex) )
    goto LABEL_14;
  useData = ref->useData;
  useIndex = ref->useIndex;
  v8 = ref->useIndex;
  __asm { vmovaps [rsp+98h+var_38], xmm7 }
  if ( ScriptableSv_GetPartStateType(v8, useData) != Scriptable_StateType_Usable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2274, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetPartStateType( scriptableIndex, useData ) == Scriptable_StateType_Usable )", (const char *)&queryFormat, "ScriptableSv_GetPartStateType( scriptableIndex, useData ) == Scriptable_StateType_Usable") )
    __debugbreak();
  _RBX = ScriptableSv_GetPartStateUsableDef(useIndex, useData);
  v10 = _RBX == NULL;
  if ( !_RBX )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2276, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL);
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+20h]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
    vmovaps xmm7, [rsp+98h+var_38]
  }
  if ( v10 )
    goto LABEL_14;
  ScriptableSv_GetPartUsePosition(useIndex, useData, &out_usePosition);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+130h]
    vsubss  xmm3, xmm0, dword ptr [rsp+98h+out_usePosition]
    vmovss  xmm1, dword ptr [rsi+134h]
    vsubss  xmm2, xmm1, dword ptr [rsp+98h+out_usePosition+4]
    vmovss  xmm0, dword ptr [rsi+138h]
    vsubss  xmm4, xmm0, dword ptr [rsp+98h+out_usePosition+8]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm6, xmm6
    vcomiss xmm4, xmm1
  }
  if ( !(v27 | v28) )
    goto LABEL_14;
  if ( !G_CalloutMarkerPing_IsScriptablePingedByPlayer(_RSI->s.number, useIndex) )
    result = 1;
  else
LABEL_14:
    result = 0;
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  return result;
}

/*
==============
G_PlayerUse_CheckDisplayFOV
==============
*/
bool G_PlayerUse_CheckDisplayFOV(const UsableRef *ref, const vec3_t *useDir, const vec3_t *viewForward, const playerState_s *const ps, const float displayFOV, float *outDot)
{
  char v42; 
  char v43; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [rdx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, xmm6
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RBX = viewForward;
  _RDI = useDir;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1255, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( useDir ) )", (const char *)&queryFormat, "Vec3IsNormalized( useDir )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm6
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1256, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( viewForward ) )", (const char *)&queryFormat, "Vec3IsNormalized( viewForward )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4]
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
  }
  _RAX = outDot;
  __asm
  {
    vmovss  xmm0, [rsp+48h+displayFOV]
    vmulss  xmm0, xmm0, cs:__real@3c0efa35; X
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
    vmovss  dword ptr [rax], xmm6
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return v42 | v43;
}

/*
==============
G_PlayerUse_CheckDistance
==============
*/
char G_PlayerUse_CheckDistance(const UsableRef *ref, const vec3_t *usePos, const vec3_t *viewOrigin, const playerState_s *const ps, const float displayRadius, const float minimizedDisplayDistFrac, vec3_t *outUseDir, float *outDistSq)
{
  bool v17; 
  bool v18; 
  bool v19; 
  int outUseDira; 
  int outUseDirb; 
  int outUseDirc; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, dword ptr [r8]
  }
  _RBX = outUseDir;
  __asm
  {
    vmovss  dword ptr [rsp+38h+outUseDir], xmm1
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm2, xmm0, dword ptr [r8+4]
    vmovss  dword ptr [rbx+4], xmm2
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm3, xmm0, dword ptr [r8+8]
    vmovss  dword ptr [rbx+8], xmm3
  }
  if ( (outUseDira & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  dword ptr [rsp+38h+outUseDir], xmm2 }
  if ( (outUseDirb & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  dword ptr [rsp+38h+outUseDir], xmm3 }
  v17 = (outUseDirc & 0x7F800000u) < 0x7F800000;
  v18 = (outUseDirc & 0x7F800000u) <= 0x7F800000;
  if ( (outUseDirc & 0x7F800000) == 2139095040 )
  {
LABEL_12:
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1232, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outUseDir )[0] ) && !IS_NAN( ( outUseDir )[1] ) && !IS_NAN( ( outUseDir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outUseDir )[0] ) && !IS_NAN( ( outUseDir )[1] ) && !IS_NAN( ( outUseDir )[2] )");
    v17 = 0;
    v18 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
  }
  _RAX = outDistSq;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, [rsp+38h+displayRadius]
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm0, [rsp+38h+minimizedDisplayDistFrac]
    vmulss  xmm2, xmm1, xmm1
    vcomiss xmm4, xmm2
    vmovss  dword ptr [rax], xmm4
  }
  if ( v18 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm4, xmm4
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( !v17 )
      return 1;
  }
  UsableRef_DebugDraw(ps->clientNum, ref, 0, 0, (PlayerUseDebugMessage)5);
  return 0;
}

/*
==============
G_PlayerUse_CheckEntity
==============
*/
bool G_PlayerUse_CheckEntity(UsableList *useList, const gentity_s *playerEnt, int prevHintEntIndex, const vec3_t *viewOrigin, const vec3_t *viewForward, const playerState_s *ps, const Bounds *playerAbsBox, const PlayerUseDvarFeatures *dvars, const unsigned int *key)
{
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v16; 
  PlayerUseDataMap *v17; 
  unsigned __int64 m_size; 
  ntl::pair<unsigned int,UsableRef> *m_buffer; 
  ntl::pair<unsigned int,UsableRef> *v20; 
  __int64 v21; 
  __int64 v22; 
  ntl::pair<unsigned int,UsableRef> *v23; 
  ntl::pair<unsigned int,UsableRef> *v24; 
  const UsableRef *p_second; 
  gentity_s *Entity; 
  bool result; 
  int priority; 
  UsableListItem *v30; 
  const PlayerUseData *EntityData; 
  char flags; 
  char v63; 
  char v65; 
  bool v66; 
  bool ignored; 
  UsableListItem *v73; 
  float fmt; 
  float fmta; 
  float inDisplayFov; 
  int prevHintEntIndexa; 
  int outPriority; 
  float outScore; 
  UsableList *list; 
  vec3_t bounds; 

  *(_QWORD *)bounds.v = playerAbsBox;
  prevHintEntIndexa = prevHintEntIndex;
  list = useList;
  v16 = UsableWorldCollection_Get();
  v17 = PlayerUseDataMap_Get();
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1289, ASSERT_TYPE_ASSERT, "( ( usableWorld != nullptr ) )", "%s\n\t( usableWorld ) = %p", "( usableWorld != nullptr )", NULL) )
    __debugbreak();
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1290, ASSERT_TYPE_ASSERT, "( ( playerUseDataMap != nullptr ) )", "%s\n\t( playerUseDataMap ) = %p", "( playerUseDataMap != nullptr )", NULL) )
    __debugbreak();
  m_size = v16->m_size;
  m_buffer = v16->m_data.m_buffer;
  v20 = v16->m_data.m_buffer;
  v21 = m_size;
  v22 = (__int64)(12 * m_size) / 12;
  if ( v22 > 0 )
  {
    do
    {
      if ( v20[v22 >> 1].first >= *key )
      {
        v22 >>= 1;
      }
      else
      {
        v20 += (v22 >> 1) + 1;
        v22 += -1 - (v22 >> 1);
      }
    }
    while ( v22 > 0 );
    m_size = v16->m_size;
  }
  v23 = &m_buffer[m_size];
  if ( v20 == v23 )
    goto LABEL_60;
  v24 = &m_buffer[v21];
  if ( *key >= v20->first )
    v24 = v20;
  v20 = v24;
  if ( v24 == v23 )
  {
LABEL_60:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1293, ASSERT_TYPE_ASSERT, "( usableWorldIter != usableWorld->end() )", (const char *)&queryFormat, "usableWorldIter != usableWorld->end()") )
      __debugbreak();
  }
  p_second = &v20->second;
  Entity = UsableRef_GetEntity(p_second);
  if ( !UsableEntity_IsUsableBy(Entity, playerEnt, prevHintEntIndexa) )
  {
    UsableRef_DebugDraw(ps->clientNum, p_second, 0, 0, (PlayerUseDebugMessage)4);
    return 0;
  }
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.h", 159, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  if ( Entity->classname == scr_const.trigger_use_touch )
  {
    UsableRef_DebugDraw(ps->clientNum, p_second, 0, 0, SUCCESS);
    if ( !UsableEntity_IsTouching(Entity, *(const Bounds **)bounds.v) || UsableEntity_IsLookAtNeeded(Entity) && !UsableRef_IsLookingAt(p_second, viewOrigin, viewForward) )
      return 0;
    priority = Entity->hint.priority;
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_useRadius, "player_useRadius");
    __asm { vmulss  xmm2, xmm0, cs:__real@c0000000; score }
    if ( priority > -100 )
      priority = -100;
    v30 = UsableList_Add(list, p_second, *(float *)&_XMM2, priority, 1, 1, 0);
    if ( !v30 )
      return 0;
    v30->flags |= 1u;
    return 0;
  }
  else
  {
    if ( UsableEntity_IsLookAtNeeded(Entity) && !UsableRef_IsLookingAt(p_second, viewOrigin, viewForward) )
    {
      UsableRef_DebugDraw(ps->clientNum, p_second, 0, 0, SUCCESS);
      return 0;
    }
    EntityData = PlayerUseDataMap_GetEntityData(v17, key, Entity);
    _RBP = EntityData;
    if ( EntityData )
    {
      __asm { vmovss  xmm1, dword ptr [rbp+0Ch] }
      _RSI = dvars;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+10h]
        vmovss  dword ptr [rsp+0F8h+inDisplayFov], xmm0
        vmovss  dword ptr [rsp+0F8h+fmt], xmm1
      }
      if ( !G_PlayerUse_CheckDistance(p_second, &EntityData->m_usePos, viewOrigin, ps, fmt, inDisplayFov, &bounds, (float *)&prevHintEntIndexa) )
      {
        UsableRef_DebugDraw(ps->clientNum, p_second, 0, 0, TASK_CREATE_FAIL|TASK_LOGIC_FAIL);
        return 0;
      }
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+0F8h+bounds]
        vmovss  xmm5, dword ptr [rsp+0F8h+bounds+4]
        vmovss  xmm3, [rsp+0F8h+var_98]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm0, xmm2, xmm1
        vmovaps [rsp+0F8h+var_58], xmm6
        vsqrtss xmm6, xmm0, xmm0
        vcmpless xmm0, xmm6, cs:__real@80000000
        vmovaps [rsp+0F8h+var_88], xmm9
        vmovss  xmm9, cs:__real@3f800000
        vblendvps xmm0, xmm6, xmm9, xmm0
        vdivss  xmm2, xmm9, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rsp+0F8h+bounds], xmm0
        vmulss  xmm0, xmm3, xmm2
        vmovss  [rsp+0F8h+var_98], xmm0
        vmovss  xmm0, dword ptr [rbp+10h]
        vmulss  xmm1, xmm5, xmm2
        vmovss  dword ptr [rsp+0F8h+fmt], xmm0
        vmovss  dword ptr [rsp+0F8h+bounds+4], xmm1
      }
      if ( G_PlayerUse_CheckDisplayFOV(p_second, &bounds, viewForward, ps, fmta, (float *)&prevHintEntIndexa) )
      {
        __asm { vmovss  xmm1, dword ptr [rsi+14h] }
        flags = Entity->hint.flags;
        __asm
        {
          vsubss  xmm0, xmm9, xmm1
          vmulss  xmm2, xmm0, dword ptr [rbp+0]
          vmovss  xmm0, dword ptr [rsi+4]
          vcomiss xmm0, dword ptr [rsi+8]
          vmulss  xmm1, xmm1, dword ptr [rbp+0Ch]
          vmovaps [rsp+0F8h+var_68], xmm7
          vmovaps [rsp+0F8h+var_78], xmm8
          vaddss  xmm8, xmm2, xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1363, ASSERT_TYPE_ASSERT, "( dvars.minDirectLookInnerDot > dvars.minDirectLookOuterDot )", (const char *)&queryFormat, "dvars.minDirectLookInnerDot > dvars.minDirectLookOuterDot") )
          __debugbreak();
        __asm { vmovss  xmm7, [rsp+0F8h+prevHintEntIndex] }
        if ( flags >= 0 )
        {
          __asm
          {
            vcomiss xmm7, dword ptr [rsi+4]
            vcomiss xmm6, dword ptr [rsi]
          }
        }
        if ( flags >= 0 )
        {
          __asm
          {
            vcomiss xmm7, dword ptr [rsi+8]
            vcomiss xmm6, dword ptr [rsi+0Ch]
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+4]
          vmulss  xmm0, xmm0, cs:__real@3c0efa35; X
          vcomiss xmm8, xmm6
        }
        *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
        __asm
        {
          vcomiss xmm7, xmm0
          vmovaps xmm8, [rsp+0F8h+var_78]
        }
        if ( v63 | v65 )
          goto LABEL_52;
        __asm { vcomiss xmm6, dword ptr [rbp+0] }
        if ( !v63 )
LABEL_52:
          v66 = 0;
        else
          v66 = 1;
        __asm
        {
          vmovss  xmm1, cs:__real@bf800000; min
          vmovaps xmm2, xmm9; max
          vmovaps xmm0, xmm7; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm3, xmm0; dot }
        ignored = UsableRef_GetUseScoreAndPriority(p_second, &outScore, &outPriority, *(float *)&_XMM3, 0, 0, v66, ps);
        __asm
        {
          vcomiss xmm6, dword ptr [rbp+0Ch]
          vmovss  xmm2, [rsp+0F8h+outScore]; score
        }
        v73 = UsableList_Add(list, p_second, *(float *)&_XMM2, outPriority, v63 | v65, 1, ignored);
        __asm { vmovaps xmm7, [rsp+0F8h+var_68] }
        if ( v73 && v66 )
          v73->flags |= 1u;
        UsableRef_DebugDraw(ps->clientNum, p_second, 0, 0, TASK_LOGIC_FAIL);
        result = 1;
      }
      else
      {
        UsableRef_DebugDraw(ps->clientNum, p_second, 0, 0, (PlayerUseDebugMessage)6);
        result = 0;
      }
      __asm
      {
        vmovaps xmm6, [rsp+0F8h+var_58]
        vmovaps xmm9, [rsp+0F8h+var_88]
      }
    }
    else
    {
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1339, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "PlayerUse failed to cache data -- a usable may have been processed in duplicate") )
        return 0;
      __debugbreak();
      return 0;
    }
  }
  return result;
}

/*
==============
G_PlayerUse_CheckScriptable
==============
*/
bool G_PlayerUse_CheckScriptable(UsableList *useList, const gentity_s *playerEnt, const vec3_t *viewOrigin, const vec3_t *viewForward, const playerState_s *ps, const Bounds *playerAbsBox, const PlayerUseDvarFeatures *dvars, const unsigned int *key)
{
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v15; 
  PlayerUseDataMap *v17; 
  unsigned __int64 m_size; 
  ntl::pair<unsigned int,UsableRef> *m_buffer; 
  ntl::pair<unsigned int,UsableRef> *v20; 
  __int64 v21; 
  __int64 v22; 
  ntl::pair<unsigned int,UsableRef> *v23; 
  ntl::pair<unsigned int,UsableRef> *v24; 
  unsigned int useIndex; 
  UsableRef *p_second; 
  bool IsDoor; 
  const PlayerUseData *ScriptableData; 
  bool result; 
  const ClientBits *m_clientMask; 
  unsigned __int64 clientNum; 
  bool v59; 
  bool v61; 
  char v72; 
  bool v73; 
  char v74; 
  bool v79; 
  bool v80; 
  bool UseScoreAndPriority; 
  float fmt; 
  float fmta; 
  __int64 minimizedDisplayDistFrac; 
  float minimizedDisplayDistFraca; 
  vec3_t *outUseDir; 
  float outScore; 
  float outDot; 
  int outPriority; 
  vec3_t *viewForwarda; 
  gentity_s *player; 
  UsableList *list; 
  vec3_t useDir; 

  viewForwarda = (vec3_t *)viewForward;
  player = (gentity_s *)playerEnt;
  list = useList;
  v15 = UsableWorldCollection_Get();
  _ER13 = 0;
  v17 = PlayerUseDataMap_Get();
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1407, ASSERT_TYPE_ASSERT, "( ( usableWorld != nullptr ) )", "%s\n\t( usableWorld ) = %p", "( usableWorld != nullptr )", NULL) )
    __debugbreak();
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1408, ASSERT_TYPE_ASSERT, "( ( playerUseDataMap != nullptr ) )", "%s\n\t( playerUseDataMap ) = %p", "( playerUseDataMap != nullptr )", NULL) )
    __debugbreak();
  m_size = v15->m_size;
  m_buffer = v15->m_data.m_buffer;
  v20 = v15->m_data.m_buffer;
  v21 = m_size;
  v22 = (__int64)(12 * m_size) / 12;
  if ( v22 > 0 )
  {
    do
    {
      if ( v20[v22 >> 1].first >= *key )
      {
        v22 >>= 1;
      }
      else
      {
        v20 += (v22 >> 1) + 1;
        v22 += -1 - (v22 >> 1);
      }
    }
    while ( v22 > 0 );
    m_size = v15->m_size;
  }
  v23 = &m_buffer[m_size];
  if ( v20 == v23 )
    goto LABEL_54;
  v24 = &m_buffer[v21];
  if ( *key >= v20->first )
    v24 = v20;
  v20 = v24;
  if ( v24 == v23 )
  {
LABEL_54:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1411, ASSERT_TYPE_ASSERT, "( usableWorldIter != usableWorld->end() )", (const char *)&queryFormat, "usableWorldIter != usableWorld->end()") )
      __debugbreak();
  }
  useIndex = v20->second.useIndex;
  p_second = &v20->second;
  IsDoor = G_Door_ScriptableIsDoor(useIndex);
  if ( p_second->useClass != USE_CLASS_SCRIPTABLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1415, ASSERT_TYPE_ASSERT, "( ref.useClass == USE_CLASS_SCRIPTABLE )", (const char *)&queryFormat, "ref.useClass == USE_CLASS_SCRIPTABLE") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+118h+var_48], xmm6
    vmovaps [rsp+118h+var_58], xmm7
    vmovaps [rsp+118h+var_68], xmm9
    vmovaps [rsp+118h+var_78], xmm10
    vmovaps [rsp+118h+var_88], xmm11
    vmovaps [rsp+118h+var_98], xmm12
  }
  ScriptableData = PlayerUseDataMap_GetScriptableData(v17, key, p_second);
  _RDI = ScriptableData;
  if ( !ScriptableData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1421, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "PlayerUse failed to cache data -- a usable may have been processed in duplicate") )
    {
      __debugbreak();
      result = 0;
      goto LABEL_51;
    }
LABEL_27:
    result = 0;
    goto LABEL_51;
  }
  if ( ScriptableData->m_disabled )
  {
    UsableRef_DebugDraw(ps->clientNum, p_second, 0, 0, TASK_CREATE_FAIL|TASK_LOGIC_FAIL);
    goto LABEL_27;
  }
  m_clientMask = ScriptableData->m_clientMask;
  if ( m_clientMask )
  {
    clientNum = (unsigned int)ps->clientNum;
    if ( (unsigned int)clientNum >= 0xE0 )
    {
      LODWORD(outUseDir) = 224;
      LODWORD(minimizedDisplayDistFrac) = ps->clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", minimizedDisplayDistFrac, outUseDir) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (clientNum & 0x1F)) & m_clientMask->array[clientNum >> 5]) == 0 )
    {
      UsableRef_DebugDraw(ps->clientNum, p_second, 0, 0, (PlayerUseDebugMessage)4);
      result = 0;
      goto LABEL_51;
    }
  }
  __asm { vmovss  xmm1, dword ptr [rdi+0Ch] }
  _RBP = dvars;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vmovss  [rsp+118h+minimizedDisplayDistFrac], xmm0
    vmovss  dword ptr [rsp+118h+fmt], xmm1
  }
  if ( !G_PlayerUse_CheckDistance(p_second, &_RDI->m_usePos, viewOrigin, ps, fmt, minimizedDisplayDistFraca, &useDir, &outDot) )
  {
    UsableRef_DebugDraw(ps->clientNum, p_second, 0, 0, (PlayerUseDebugMessage)5);
    if ( !IsDoor )
      goto LABEL_27;
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+118h+useDir+8]
    vmovss  xmm4, dword ptr [rsp+118h+useDir]
    vmovss  xmm9, cs:__real@3f800000
  }
  _EAX = _RDI->m_use2DFOV;
  __asm
  {
    vmovd   xmm1, r13d
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmulss  xmm1, xmm4, xmm4
    vxorps  xmm6, xmm6, xmm6
    vblendvps xmm5, xmm6, xmm2, xmm3
    vmovss  xmm3, dword ptr [rsp+118h+useDir+4]
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm7, xmm1, xmm1
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm9, xmm0
    vdivss  xmm1, xmm9, xmm0
    vcvtss2sd xmm0, xmm7, xmm7
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vmulss  xmm10, xmm4, xmm1
    vmulss  xmm11, xmm3, xmm1
    vmulss  xmm12, xmm5, xmm1
    vmovss  dword ptr [rsp+118h+useDir], xmm10
    vmovss  dword ptr [rsp+118h+useDir+4], xmm11
    vmovss  dword ptr [rsp+118h+useDir+8], xmm12
  }
  v59 = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vmovss  dword ptr [rsp+118h+fmt], xmm0
  }
  if ( !G_PlayerUse_CheckDisplayFOV(p_second, &useDir, viewForwarda, ps, fmta, &outDot) )
  {
    UsableRef_DebugDraw(ps->clientNum, p_second, 0, 0, (PlayerUseDebugMessage)6);
    v59 = 0;
    v61 = G_PlayerUse_CheckAutoUse(player, p_second);
    if ( !IsDoor && !v61 )
      goto LABEL_27;
  }
  __asm
  {
    vcomiss xmm6, dword ptr [rdi+8]
    vmovss  xmm1, dword ptr [rbp+14h]
    vsubss  xmm0, xmm9, xmm1
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm1, xmm1, dword ptr [rdi+0Ch]
    vmulss  xmm0, xmm0, cs:__real@3c0efa35; X
    vaddss  xmm6, xmm3, xmm1
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm3, [rsp+118h+outDot]
    vmovss  xmm1, cs:__real@bf800000; min
    vcomiss xmm3, xmm0
    vmovaps xmm2, xmm9; max
    vmovaps xmm0, xmm3; val
  }
  v73 = !(v74 | v72);
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm0, dword ptr [rbp+4]
    vmovss  xmm2, cs:__real@3f000000
    vmulss  xmm1, xmm0, xmm2
    vsubss  xmm1, xmm2, xmm1
    vmovss  [rsp+118h+outScore], xmm1
  }
  if ( v74 )
    goto LABEL_42;
  __asm { vcomiss xmm7, dword ptr [rbp+0] }
  if ( !v74 )
  {
LABEL_42:
    v79 = 0;
    v74 = 0;
  }
  else
  {
    v79 = 1;
  }
  __asm
  {
    vcomiss xmm0, dword ptr [rbp+8]
    vcomiss xmm7, dword ptr [rbp+0Ch]
  }
  if ( v74 )
    v80 = 1;
  else
    v80 = 0;
  if ( v73 )
    __asm { vcomiss xmm7, dword ptr [rdi] }
  __asm { vmovaps xmm3, xmm0; dot }
  UseScoreAndPriority = UsableRef_GetUseScoreAndPriority(p_second, &outScore, &outPriority, *(float *)&_XMM3, v79, v80, 0, ps);
  __asm
  {
    vcomiss xmm7, dword ptr [rdi+0Ch]
    vmovss  xmm2, [rsp+118h+outScore]; score
  }
  if ( UsableList_Add(list, p_second, *(float *)&_XMM2, outPriority, v74 | v72, v59, UseScoreAndPriority) )
    __asm { vcomiss xmm7, xmm6 }
  UsableRef_DebugDraw(ps->clientNum, p_second, v79, v80, TASK_LOGIC_FAIL);
  result = 1;
LABEL_51:
  __asm
  {
    vmovaps xmm12, [rsp+118h+var_98]
    vmovaps xmm11, [rsp+118h+var_88]
    vmovaps xmm10, [rsp+118h+var_78]
    vmovaps xmm9, [rsp+118h+var_68]
    vmovaps xmm7, [rsp+118h+var_58]
    vmovaps xmm6, [rsp+118h+var_48]
  }
  return result;
}

/*
==============
G_PlayerUse_CheckUseState
==============
*/
char G_PlayerUse_CheckUseState(gentity_s *const player)
{
  playerState_s *EntityPlayerState; 
  int cursorHintEntIndex; 
  GWeaponMap *Instance; 
  const dvar_t *v5; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  GWeaponMap *v8; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  gclient_s *client; 
  HintType hintForcedType; 
  UsableList list; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1889, ASSERT_TYPE_ASSERT, "( player != nullptr )", (const char *)&queryFormat, "player != nullptr") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(player);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1892, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  cursorHintEntIndex = EntityPlayerState->cursorHintEntIndex;
  G_PlayerUse_SetClientHintFlags(player, CLIENT_HINT_FLAG_NONE);
  EntityPlayerState->cursorHint = HINT_NONE;
  *(_QWORD *)&EntityPlayerState->cursorHintProgressStartTime = 0i64;
  *(_WORD *)&EntityPlayerState->cursorHintData = 0;
  EntityPlayerState->cursorHintEntIndex = 2047;
  if ( G_PlayerUse_IsPlayerUsingKBMPress(player) )
    EntityPlayerState->cursorHintProgressDuration = HINT_HOLD_DURATION_NONE;
  if ( !BG_ThrowingBackGrenade(EntityPlayerState) )
  {
    EntityPlayerState->throwbackGrenadeTimeLeft = 0;
    Instance = GWeaponMap::GetInstance();
    BG_SetThrowbackWeaponForPlayer(Instance, EntityPlayerState, &NULL_WEAPON);
  }
  *(_WORD *)EntityPlayerState->cursorHintParams.types = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|0x80) )
  {
    EntityPlayerState->cursorHintString = 0;
    v5 = DVARINT_reloading;
    if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer )
      return 0;
  }
  if ( !GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 423, ASSERT_TYPE_ASSERT, "( ms_gClientSystem )", (const char *)&queryFormat, "ms_gClientSystem") )
    __debugbreak();
  GClientSystem::ms_gClientSystem->UpdateFriendlyOverlay(GClientSystem::ms_gClientSystem, player);
  if ( player->health <= 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 1u) )
    return 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|0x80) )
  {
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&EntityPlayerState->eFlags, ACTIVE, 0xBu) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, GameModeFlagValues::ms_spValue, 0x23u) )
      return 0;
    p_pm_flags = &EntityPlayerState->pm_flags;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerState->pm_flags, ACTIVE, 0x1Cu) )
      return 0;
  }
  else
  {
    p_pm_flags = &EntityPlayerState->pm_flags;
  }
  if ( player->active )
  {
    if ( BG_IsTurretActive(EntityPlayerState) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerState->weapCommon.weapFlags, ACTIVE, 0x2Bu) )
    {
      G_PlayerUse_SetTurretDropHint(player);
      return 0;
    }
    if ( !G_PlayerUse_TurretHints(EntityPlayerState) )
      return 0;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 5u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 6u) )
  {
    v8 = GWeaponMap::GetInstance();
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v8, EntityPlayerState);
    v10 = BG_UsingAlternate(EntityPlayerState);
    if ( BG_GetWeaponType(CurrentWeaponForPlayer, v10) != WEAPTYPE_EQUIP_DEPLOY )
    {
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
          __debugbreak();
        return 0;
      }
      if ( !G_Utils_IsAgent(player) || !SV_AgentEntityIsFrozen(player) )
      {
        client = player->client;
        if ( client )
        {
          if ( (client->flags & 4) != 0 )
            return 0;
          hintForcedType = client->hintForcedType;
          if ( hintForcedType )
          {
            EntityPlayerState->cursorHint = hintForcedType;
            EntityPlayerState->cursorHintString = player->client->hintForcedString;
            BG_CursorHintEntityClear(EntityPlayerState);
            BG_CursorHintProgressEntityClear(EntityPlayerState);
            *(_WORD *)EntityPlayerState->cursorHintParams.types = 0;
            if ( Dvar_GetInt_Internal_DebugName(DVARINT_g_debugUse, "g_debugUse") == EntityPlayerState->clientNum )
            {
              UsableList_Init(&list);
              G_PlayerUse_GetUseList(player, &list, cursorHintEntIndex);
              UsableList_Debug(&list, EntityPlayerState->clientNum, EntityPlayerState->cursorHintEntIndex, 1);
            }
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
G_PlayerUse_CollectNearbyUsableVehicles
==============
*/
__int64 G_PlayerUse_CollectNearbyUsableVehicles(const gentity_s *player, unsigned __int16 *vehEntList, const unsigned __int8 vehEntListCapacity, const vec3_t *searchMin, const vec3_t *searchMax)
{
  unsigned __int8 v9; 
  unsigned int i; 
  unsigned int HitBodyId; 
  int Ref; 
  unsigned __int16 RefId; 
  __int64 v14; 
  hkMemoryAllocator *v15; 
  __int64 v17; 
  __int64 v18; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  HavokPhysics_BroadphaseCollisionQueryResult v20; 

  Sys_ProfBeginNamedEvent(0xFFFFFF00, "G_PlayerUse_CollectNearbyVehicles");
  extendedData.ignoreBodies = NULL;
  extendedData.phaseSelection = All;
  extendedData.contents = 0x800000;
  v20.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&v20.m_memSizeAndFlags = 0x1FFFF;
  v20.__vftable = (HavokPhysics_BroadphaseCollisionQueryResult_vtbl *)&HavokPhysics_BroadphaseCollisionQueryResult::`vftable';
  v20.m_hits.m_data = NULL;
  v20.m_hits.m_size = 0;
  v20.m_hits.m_capacityAndFlags = 0x80000000;
  HavokPhysics_BroadphaseCollisionQueryResult::Reset(&v20);
  Physics_AABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, searchMin, searchMax, &extendedData, &v20);
  v9 = 0;
  for ( i = 0; i < HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&v20); ++i )
  {
    HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&v20, i);
    Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, HitBodyId);
    if ( Physics_GetRefSystem(Ref) == Physics_RefSystem_GEntities )
    {
      RefId = Physics_GetRefId(Ref);
      v14 = RefId;
      if ( RefId >= 0x800u )
      {
        LODWORD(v18) = 2048;
        LODWORD(v17) = RefId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( G_PlayerUse_IsVehicleUsable(player, &g_entities[v14]) )
      {
        if ( v9 >= vehEntListCapacity )
        {
          LODWORD(v18) = vehEntListCapacity;
          LODWORD(v17) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2217, ASSERT_TYPE_ASSERT, "(unsigned)( vehCount ) < (unsigned)( vehEntListCapacity )", "vehCount doesn't index vehEntListCapacity\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        vehEntList[v9++] = v14;
      }
    }
  }
  v15 = hkMemHeapAllocator();
  v20.m_hits.m_size = 0;
  if ( v20.m_hits.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v15, v20.m_hits.m_data, 4, v20.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
  v20.m_hits.m_data = NULL;
  v20.m_hits.m_capacityAndFlags = 0x80000000;
  hkReferencedObject::~hkReferencedObject(&v20);
  Sys_ProfEndNamedEvent();
  return v9;
}

/*
==============
G_PlayerUse_CursorHintEntUsable
==============
*/
gentity_s *G_PlayerUse_CursorHintEntUsable(const playerState_s *const ps)
{
  __int64 cursorHintEntIndex; 
  gentity_s *GEntity; 
  gentity_s *v4; 
  gentity_s *v5; 
  gclient_s *client; 
  ClientHintFlags hintFlags; 
  unsigned __int8 flags; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  __int64 v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 521, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->cursorHintEntIndex == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 523, ASSERT_TYPE_ASSERT, "( ps->cursorHintEntIndex != ENTITYNUM_NONE )", (const char *)&queryFormat, "ps->cursorHintEntIndex != ENTITYNUM_NONE") )
    __debugbreak();
  cursorHintEntIndex = (int)ps->cursorHintEntIndex;
  if ( (unsigned int)cursorHintEntIndex >= 0x800 )
  {
    LODWORD(v12) = ps->cursorHintEntIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[cursorHintEntIndex].r.isInUse != g_entityIsInUse[cursorHintEntIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[cursorHintEntIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 524, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( ps->cursorHintEntIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( ps->cursorHintEntIndex )") )
    __debugbreak();
  GEntity = G_GetGEntity(ps->cursorHintEntIndex);
  v4 = G_GetGEntity(ps->clientNum);
  v5 = v4;
  if ( !v4->client && !v4->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 529, ASSERT_TYPE_ASSERT, "( playerEnt->client || playerEnt->agent )", (const char *)&queryFormat, "playerEnt->client || playerEnt->agent") )
    __debugbreak();
  client = v5->client;
  if ( client )
    hintFlags = client->hintFlags;
  else
    hintFlags = v5->agent->hintFlags;
  flags = GEntity->hint.flags;
  if ( ((hintFlags & 4) == 0 || GEntity->hint.onObstruction == SHOW) && (flags & 1) == 0 && (hintFlags & 1) != 0 && (GEntity->s.eType != ET_MISSILE || (flags & 0x10) != 0 || (Instance = GWeaponMap::GetInstance(), WeaponForEntity = BG_GetWeaponForEntity(Instance, &GEntity->s), BG_GetWeaponClass(WeaponForEntity, 0) == WEAPCLASS_THROWINGKNIFE)) )
    return GEntity;
  else
    return 0i64;
}

/*
==============
G_PlayerUse_DisableAllScriptableVehicles
==============
*/
void G_PlayerUse_DisableAllScriptableVehicles(void)
{
  unsigned int v0; 
  Vehicle *v1; 
  unsigned int ScriptableIndexForEntity; 
  __int64 v3; 
  unsigned __int8 *p_usableScriptablePartCount; 
  unsigned __int16 v5; 
  unsigned int ScriptableIndexForEntityNum; 
  __int64 playerMask; 
  __int64 playerMask_8; 
  __int64 playerMask_16; 
  __int64 playerMask_24; 

  Sys_ProfBeginNamedEvent(0xFF0000FF, "G_PlayerUse_DisableAllScriptableVehicles");
  v0 = 0;
  playerMask = -1i64;
  playerMask_8 = -1i64;
  playerMask_16 = -1i64;
  LODWORD(playerMask_24) = -1;
  do
  {
    v1 = G_Vehicle_Get(v0);
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2087, ASSERT_TYPE_ASSERT, "( vehicle )", (const char *)&queryFormat, "vehicle", playerMask, playerMask_8, playerMask_16, playerMask_24) )
      __debugbreak();
    if ( v1->ent && v1->usableScriptablePartCount )
    {
      ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(v1->ent);
      G_PlayerUse_DisableScriptableVehicle(ScriptableIndexForEntity, v1->usableScriptablePartCount, v1->usableScriptableParts, (const ClientBits *)&playerMask);
    }
    ++v0;
  }
  while ( v0 < 0x80 );
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v3 = 256i64;
  p_usableScriptablePartCount = &GVehicles::GetSuspendManager(GVehicles::ms_gVehiclesSystem)->m_infos[0].usableScriptablePartCount;
  do
  {
    v5 = *((_WORD *)p_usableScriptablePartCount - 1);
    if ( v5 != 2047 && *p_usableScriptablePartCount )
    {
      ScriptableIndexForEntityNum = ScriptableSv_GetScriptableIndexForEntityNum(v5);
      G_PlayerUse_DisableScriptableVehicle(ScriptableIndexForEntityNum, *p_usableScriptablePartCount, (const VehicleUsableParts *)(p_usableScriptablePartCount - 90), (const ClientBits *)&playerMask);
    }
    p_usableScriptablePartCount += 92;
    --v3;
  }
  while ( v3 );
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerUse_DisableScriptableVehicle
==============
*/
void G_PlayerUse_DisableScriptableVehicle(const unsigned int scriptableIndex, const unsigned __int8 scriptablePartCount, const VehicleUsableParts *scriptableUsablkePart, const ClientBits *playerMask)
{
  __int64 v8; 
  unsigned __int16 serverInstanceFlatId; 
  UsableRef ref; 

  if ( scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2041, ASSERT_TYPE_ASSERT, "( scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX )", "Shouldn't have disabled the scriptable without clearing the part count") )
    __debugbreak();
  if ( !scriptableUsablkePart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2042, ASSERT_TYPE_ASSERT, "( scriptableUsablkePart )", (const char *)&queryFormat, "scriptableUsablkePart") )
    __debugbreak();
  if ( scriptablePartCount )
  {
    v8 = scriptablePartCount;
    do
    {
      serverInstanceFlatId = scriptableUsablkePart->serverInstanceFlatId;
      if ( scriptableUsablkePart->serverInstanceFlatId > 0xFFu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned short>(unsigned short)", "unsigned", (unsigned __int8)serverInstanceFlatId, "unsigned", serverInstanceFlatId) )
        __debugbreak();
      if ( scriptableIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 98, ASSERT_TYPE_ASSERT, "(useIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "useIndex <= USABLEKEY_INDEX_MASK") )
        __debugbreak();
      ref.useIndex = scriptableIndex;
      ref.useClass = USE_CLASS_SCRIPTABLE;
      ref.useData = serverInstanceFlatId;
      UsableWorld_SetScriptableUseForClientMask(&ref, 0, playerMask);
      ++scriptableUsablkePart;
      --v8;
    }
    while ( v8 );
  }
}

/*
==============
G_PlayerUse_DrawDebug
==============
*/
void G_PlayerUse_DrawDebug(void)
{
  const dvar_t *v0; 
  const DenseGrid *v1; 
  const dvar_t *v2; 
  const DenseGrid *v3; 

  v0 = DCONST_DVARBOOL_g_drawPlayerUseEntitiesOverlay;
  if ( !DCONST_DVARBOOL_g_drawPlayerUseEntitiesOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawPlayerUseEntitiesOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    v1 = UsableEntityDenseGrid_Get();
    G_DebugDrawDenseGrid(v1);
  }
  v2 = DCONST_DVARBOOL_g_drawPlayerUseScriptablesOverlay;
  if ( !DCONST_DVARBOOL_g_drawPlayerUseScriptablesOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawPlayerUseScriptablesOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v3 = UsableScriptableDenseGrid_Get();
    G_DebugDrawDenseGrid(v3);
  }
}

/*
==============
G_PlayerUse_Free
==============
*/

void G_PlayerUse_Free(void)
{
  UsableWorld_Free();
}

/*
==============
G_PlayerUse_GetAllocationSize
==============
*/
__int64 G_PlayerUse_GetAllocationSize()
{
  unsigned int AllocationSize; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 

  AllocationSize = UsableWorldCollection_GetAllocationSize();
  v1 = UsableClientMaskCollection_GetAllocationSize() + AllocationSize;
  v2 = UsableEntityDenseGrid_GetAllocationSize() + v1;
  v3 = UsableScriptableDenseGrid_GetAllocationSize() + v2;
  return v3 + PlayerUseDataMap_GetAllocationSize();
}

/*
==============
G_PlayerUse_GetButtonData
==============
*/
void G_PlayerUse_GetButtonData(const gentity_s *ent, ButtonData *buttonData)
{
  int *p_useButtonDone; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 216, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( G_Utils_IsAgent(ent) )
  {
    if ( !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 220, ASSERT_TYPE_ASSERT, "( ent->agent )", (const char *)&queryFormat, "ent->agent") )
      __debugbreak();
    buttonData->buttons = &ent->agent->buttons;
    buttonData->oldbuttons = &ent->agent->oldbuttons;
    buttonData->latched_buttons = &ent->agent->latched_buttons;
    buttonData->useHoldEntity = &ent->agent->useHoldEntity;
    buttonData->useHoldTime = &ent->agent->useHoldTime;
    buttonData->lastHoldEntity = &ent->agent->lastHoldEntity;
    p_useButtonDone = &ent->agent->useButtonDone;
  }
  else
  {
    if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 233, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    buttonData->buttons = &ent->client->buttons;
    buttonData->oldbuttons = &ent->client->oldbuttons;
    buttonData->latched_buttons = &ent->client->latched_buttons;
    buttonData->useHoldEntity = &ent->client->useHoldEntity;
    buttonData->useHoldTime = &ent->client->useHoldTime;
    buttonData->lastHoldEntity = &ent->client->lastHoldEntity;
    p_useButtonDone = &ent->client->useButtonDone;
  }
  buttonData->useButtonDone = p_useButtonDone;
  if ( !buttonData->buttons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 245, ASSERT_TYPE_ASSERT, "( buttonData->buttons )", (const char *)&queryFormat, "buttonData->buttons") )
    __debugbreak();
  if ( !buttonData->oldbuttons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 246, ASSERT_TYPE_ASSERT, "( buttonData->oldbuttons )", (const char *)&queryFormat, "buttonData->oldbuttons") )
    __debugbreak();
  if ( !buttonData->latched_buttons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 247, ASSERT_TYPE_ASSERT, "( buttonData->latched_buttons )", (const char *)&queryFormat, "buttonData->latched_buttons") )
    __debugbreak();
  if ( !buttonData->useHoldEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 248, ASSERT_TYPE_ASSERT, "( buttonData->useHoldEntity )", (const char *)&queryFormat, "buttonData->useHoldEntity") )
    __debugbreak();
  if ( !buttonData->useHoldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 249, ASSERT_TYPE_ASSERT, "( buttonData->useHoldTime )", (const char *)&queryFormat, "buttonData->useHoldTime") )
    __debugbreak();
  if ( !buttonData->useButtonDone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 250, ASSERT_TYPE_ASSERT, "( buttonData->useButtonDone )", (const char *)&queryFormat, "buttonData->useButtonDone") )
    __debugbreak();
}

/*
==============
G_PlayerUse_GetHoldDuration
==============
*/
__int64 G_PlayerUse_GetHoldDuration(const gentity_s *player, const UsableHandle *const useHandle)
{
  unsigned __int8 m_useData; 
  HintHoldDuration HoldDurationForScriptable; 
  gentity_s *v6; 
  __int64 v8; 

  if ( !useHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 694, ASSERT_TYPE_ASSERT, "( useHandle )", (const char *)&queryFormat, "useHandle") )
    __debugbreak();
  if ( useHandle->m_useClass == USE_CLASS_SCRIPTABLE )
  {
    m_useData = useHandle->m_useData;
    if ( !useHandle->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
      __debugbreak();
    HoldDurationForScriptable = G_PlayerUse_GetHoldDurationForScriptable(useHandle->m_info.number - 1, m_useData);
  }
  else
  {
    v6 = UsableHandle::ent((UsableHandle *)useHandle);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 703, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    HoldDurationForScriptable = v6->hint.useHoldDuration;
  }
  if ( G_PlayerUse_IsPlayerUsingKBMPress(player) && HoldDurationForScriptable == HINT_HOLD_DURATION_SHORT )
    return 3i64;
  if ( (unsigned int)HoldDurationForScriptable >= HINT_HOLD_DURATION_COUNT )
  {
    LODWORD(v8) = HoldDurationForScriptable;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 712, ASSERT_TYPE_ASSERT, "(unsigned)( holdDuration ) < (unsigned)( HINT_HOLD_DURATION_COUNT )", "holdDuration doesn't index HINT_HOLD_DURATION_COUNT\n\t%i not in [0, %i)", v8, 4) )
      __debugbreak();
  }
  return (unsigned int)HoldDurationForScriptable;
}

/*
==============
G_PlayerUse_GetHoldDurationForScriptable
==============
*/
__int64 G_PlayerUse_GetHoldDurationForScriptable(const unsigned int useIndex, const unsigned __int8 useData)
{
  unsigned int v2; 
  const ScriptableStateUsableDef *PartStateUsableDef; 

  v2 = useData;
  if ( !ScriptableSv_GetPartIsUsable(useIndex, useData) )
    return 3i64;
  PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(useIndex, v2);
  if ( !PartStateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 684, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
    __debugbreak();
  if ( PartStateUsableDef->hintHoldDuration >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 685, ASSERT_TYPE_ASSERT, "( stateUsableDef->hintHoldDuration < HINT_HOLD_DURATION_COUNT )", (const char *)&queryFormat, "stateUsableDef->hintHoldDuration < HINT_HOLD_DURATION_COUNT") )
    __debugbreak();
  return PartStateUsableDef->hintHoldDuration;
}

/*
==============
G_PlayerUse_GetUseButtonMask
==============
*/
unsigned __int64 G_PlayerUse_GetUseButtonMask(const playerState_s *ps)
{
  unsigned __int64 result; 

  if ( !ps )
    return 40i64;
  if ( ps->cursorHint == HINT_NONE )
    return 40i64;
  result = 0x40000000i64;
  if ( !ps->cursorHintBinding )
    return 40i64;
  return result;
}

/*
==============
G_PlayerUse_GetUseList
==============
*/
__int64 G_PlayerUse_GetUseList(gentity_s *ent, UsableList *useList, int prevHintEntIndex)
{
  UsableList *v7; 
  const dvar_t *v9; 
  playerState_s *EntityPlayerState; 
  EffectiveStance EffectiveStance; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  unsigned int NumRigidBodys; 
  __int16 v31; 
  unsigned __int16 v32; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  UsableClass useClass; 
  hkMemoryAllocator *v38; 
  hkMemoryAllocator *v39; 
  __int64 useIndex; 
  unsigned int scriptableCollisionMain; 
  ScriptableLinkType linkedObjectType; 
  ScriptableInstanceContext *InstanceCommonContext; 
  unsigned int v44; 
  hknpBodyId *RigidBodyID; 
  hkMemoryAllocator *v46; 
  hkMemoryAllocator *v47; 
  __int64 itemCount; 
  __int64 ignoreArbitraryUp; 
  Bounds *playerAbsBox; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  unsigned __int16 v61; 
  __int16 v62; 
  HavokPhysics_IgnoreBodies v63; 
  Physics_RaycastExtendedData extendedData; 
  hknpBodyId result; 
  UsableListItem *v66; 
  playerState_s *v67; 
  UsableList *v68; 
  HavokPhysics_CollisionQueryResult *v69; 
  __int64 v70; 
  vec3_t outOrigin; 
  vec3_t forward; 
  Bounds v73; 
  vec3_t outUsePos; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  v70 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v7 = useList;
  v68 = useList;
  v9 = DVARBOOL_g_debugUsables;
  if ( !DVARBOOL_g_debugUsables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugUsables") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
    UsableWorld_DebugDrawAll();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  v67 = EntityPlayerState;
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1703, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EffectiveStance = PM_GetEffectiveStance(EntityPlayerState);
  _RAX = BG_Suit_GetBounds(EntityPlayerState->suitIndex, EffectiveStance);
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vaddss  xmm1, xmm0, dword ptr [r15+30h]
    vmovss  dword ptr [rbp+80h+var_88.midPoint], xmm1
    vmovss  xmm2, dword ptr [rax+4]
    vaddss  xmm0, xmm2, dword ptr [r15+34h]
    vmovss  dword ptr [rbp+80h+var_88.midPoint+4], xmm0
    vmovss  xmm1, dword ptr [rax+8]
    vaddss  xmm2, xmm1, dword ptr [r15+38h]
    vmovss  dword ptr [rbp+80h+var_88.midPoint+8], xmm2
    vmovss  xmm0, dword ptr [rax+0Ch]
    vmovss  dword ptr [rbp+80h+var_88.halfSize], xmm0
    vmovss  xmm1, dword ptr [rax+10h]
    vmovss  dword ptr [rbp+80h+var_88.halfSize+4], xmm1
    vmovss  xmm0, dword ptr [rax+14h]
    vmovss  dword ptr [rbp+80h+var_88.halfSize+8], xmm0
  }
  Instance = GWeaponMap::GetInstance();
  if ( BG_IsThirdPersonMode(Instance, EntityPlayerState) )
    G_Client_GetEyePosition(EntityPlayerState, &outOrigin);
  else
    G_Client_GetViewOrigin(EntityPlayerState, &outOrigin);
  Handler = GHandler::getHandler();
  BG_GetPlayerViewDirection(EntityPlayerState, &forward, NULL, NULL, Handler, 0);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+outOrigin]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v55 & 0x7F800000) == 2139095040 )
    goto LABEL_72;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+outOrigin+4]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v56 & 0x7F800000) == 2139095040 )
    goto LABEL_72;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+outOrigin+8]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v57 & 0x7F800000) == 2139095040 )
  {
LABEL_72:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1720, ASSERT_TYPE_SANITY, "( !IS_NAN( ( viewOrigin )[0] ) && !IS_NAN( ( viewOrigin )[1] ) && !IS_NAN( ( viewOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( viewOrigin )[0] ) && !IS_NAN( ( viewOrigin )[1] ) && !IS_NAN( ( viewOrigin )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+forward]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v58 & 0x7F800000) == 2139095040 )
    goto LABEL_73;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+forward+4]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v59 & 0x7F800000) == 2139095040 )
    goto LABEL_73;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+forward+8]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v60 & 0x7F800000) == 2139095040 )
  {
LABEL_73:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1721, ASSERT_TYPE_SANITY, "( !IS_NAN( ( viewForward )[0] ) && !IS_NAN( ( viewForward )[1] ) && !IS_NAN( ( viewForward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( viewForward )[0] ) && !IS_NAN( ( viewForward )[1] ) && !IS_NAN( ( viewForward )[2] )") )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_PlayerUse_GetUseList - Phase 1");
  G_PlayerUse_GetUseList_Entities(v7, ent, prevHintEntIndex, &outOrigin, &forward, EntityPlayerState, &v73);
  G_PlayerUse_GetUseList_Scriptables(v7, ent, &outOrigin, &forward, EntityPlayerState, &v73);
  G_PlayerUse_GetUseList_LargeRadiusUsables(v7, ent, prevHintEntIndex, &outOrigin, &forward, EntityPlayerState, &v73);
  UsableList_Sort(v7);
  Sys_ProfEndNamedEvent();
  NumRigidBodys = 0;
  v31 = 0;
  v62 = 0;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_PlayerUse_GetUseList - Phase 2");
  v32 = 0;
  v61 = 0;
  if ( v7->itemCount )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  xmm7, cs:__real@461c4000
    }
    do
    {
      _RDI = &v7->items[v32];
      v66 = _RDI;
      if ( UsableRef_IsTraceNeeded(&_RDI->ref) )
      {
        UsableRef_GetUseTracePos(&v7->items[v32].ref, &outUsePos);
        AnyResult = PhysicsQuery_GetAnyResult(PHYSICS_WORLD_ID_FIRST);
        v69 = AnyResult;
        HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
        extendedData.contents = -1;
        extendedData.ignoreBodies = NULL;
        extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
        __asm { vmovss  [rbp+80h+extendedData.collisionBuffer], xmm6 }
        extendedData.phaseSelection = All;
        extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
        *(_WORD *)&extendedData.collectInsideHits = 256;
        useClass = _RDI->ref.useClass;
        if ( useClass )
        {
          if ( useClass != USE_CLASS_SCRIPTABLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1776, ASSERT_TYPE_ASSERT, "(ref.useClass == USE_CLASS_SCRIPTABLE)", (const char *)&queryFormat, "ref.useClass == USE_CLASS_SCRIPTABLE") )
            __debugbreak();
          useIndex = _RDI->ref.useIndex;
          if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          if ( (unsigned int)useIndex >= g_scriptableWorldCounts.serverInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(playerAbsBox) = g_scriptableWorldCounts.serverInstanceCount;
            LODWORD(ignoreArbitraryUp) = useIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", ignoreArbitraryUp, playerAbsBox) )
              __debugbreak();
          }
          scriptableCollisionMain = g_scriptableSv_instanceContexts[useIndex].collisionContext.scriptableCollisionMain;
          if ( scriptableCollisionMain != -1 )
            NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, scriptableCollisionMain);
          linkedObjectType = ScriptableSv_GetInstanceCommonContext(_RDI->ref.useIndex)->linkedObjectType;
          HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v63, (linkedObjectType == SCRIPTABLE_LINK_ENTITY) + 1, NumRigidBodys);
          HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v63, 0, EntityPlayerState->clientNum, 1, 1, 0, 1, 1);
          if ( linkedObjectType == SCRIPTABLE_LINK_ENTITY )
          {
            InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(_RDI->ref.useIndex);
            HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v63, 1, InstanceCommonContext->linkedObjectIndex, 1, 1, 0, 1, 1);
          }
          v44 = 0;
          if ( NumRigidBodys )
          {
            do
            {
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( scriptableCollisionMain == -1 )
              {
                LODWORD(playerAbsBox) = 0;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", playerAbsBox) )
                  __debugbreak();
              }
              if ( !g_physicsServerWorldsCreated )
              {
                LODWORD(playerAbsBox) = 0;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", playerAbsBox) )
                  __debugbreak();
              }
              RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, scriptableCollisionMain, v44);
              HavokPhysics_IgnoreBodies::SetIgnoreBody(&v63, v44++, RigidBodyID->m_serialAndIndex);
            }
            while ( v44 < NumRigidBodys );
            _RDI = v66;
            EntityPlayerState = v67;
            v7 = v68;
            AnyResult = v69;
          }
          extendedData.ignoreBodies = &v63;
          extendedData.contents = 536905745;
          Physics_Raycast(PHYSICS_WORLD_ID_FIRST, &outOrigin, &outUsePos, &extendedData, AnyResult);
          v46 = hkMemHeapAllocator();
          NumRigidBodys = 0;
          v63.m_ignoreBodies.m_size = 0;
          if ( v63.m_ignoreBodies.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v46, v63.m_ignoreBodies.m_data, 4, v63.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
          v63.m_ignoreBodies.m_data = NULL;
          v63.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
          v47 = hkMemHeapAllocator();
          v63.m_ignoreEntities.m_size = 0;
          if ( v63.m_ignoreEntities.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v47, v63.m_ignoreEntities.m_data, 8, v63.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
          v32 = v61;
          v31 = v62;
        }
        else
        {
          HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v63, 2, 0);
          HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v63, 0, _RDI->ref.useIndex, 1, 1, 0, 1, 1);
          HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v63, 1, EntityPlayerState->clientNum, 1, 1, 0, 1, 1);
          extendedData.ignoreBodies = &v63;
          extendedData.contents = 536905745;
          Physics_Raycast(PHYSICS_WORLD_ID_FIRST, &outOrigin, &outUsePos, &extendedData, AnyResult);
          v38 = hkMemHeapAllocator();
          v63.m_ignoreBodies.m_size = 0;
          if ( v63.m_ignoreBodies.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v38, v63.m_ignoreBodies.m_data, 4, v63.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
          v63.m_ignoreBodies.m_data = NULL;
          v63.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
          v39 = hkMemHeapAllocator();
          v63.m_ignoreEntities.m_size = 0;
          if ( v63.m_ignoreEntities.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v39, v63.m_ignoreEntities.m_data, 8, v63.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
        }
        if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
          _RDI->flags |= 4u;
        else
          _RDI->flags &= ~4u;
        if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) && UsableRef_ShouldHideOnObstruction(&_RDI->ref) )
        {
          __asm
          {
            vaddss  xmm1, xmm7, dword ptr [rdi+0Ch]
            vmovss  dword ptr [rdi+0Ch], xmm1
          }
          _RDI->priority = 0x7FFFFFFF;
          v62 = ++v31;
          UsableRef_DebugDraw(EntityPlayerState->clientNum, &_RDI->ref, 0, 0, TASK_CREATE_FAIL);
        }
      }
      else
      {
        _RDI->flags &= ~4u;
      }
      v61 = ++v32;
    }
    while ( v32 < v7->itemCount );
  }
  UsableList_Sort(v7);
  v7->itemCount -= v31;
  Sys_ProfEndNamedEvent();
  itemCount = v7->itemCount;
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return itemCount;
}

/*
==============
G_PlayerUse_GetUseList_Entities
==============
*/
void G_PlayerUse_GetUseList_Entities(UsableList *useList, const gentity_s *playerEnt, int prevHintEntIndex, const vec3_t *viewOrigin, const vec3_t *viewForward, const playerState_s *ps, const Bounds *playerAbsBox)
{
  DenseGrid *v25; 
  DenseGrid *v36; 
  unsigned int Keys; 
  unsigned int *key; 
  __int64 v39; 
  PlayerUseDvarFeatures dvars; 
  Bounds *v41; 
  playerState_s *v42; 
  DenseGrid *v43; 
  DenseGrid::PageIterator iter; 
  DenseGrid::CellIterator outIter; 
  vec2_t max; 
  vec2_t min; 
  unsigned int outKeys[32]; 

  _RBX = DCONST_DVARMPFLT_g_useDirectLookOuterDistance;
  _RSI = viewOrigin;
  v42 = (playerState_s *)ps;
  v41 = (Bounds *)playerAbsBox;
  if ( !DCONST_DVARMPFLT_g_useDirectLookOuterDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookOuterDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARMPFLT_g_useDirectLookOuterAngle;
  __asm { vmovss  [rsp+1A0h+var_150.minDirectLookOuterDist], xmm0 }
  if ( !DCONST_DVARMPFLT_g_useDirectLookOuterAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookOuterAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  _RBX = DCONST_DVARMPFLT_g_useDirectLookInnerAngle;
  __asm { vmovss  [rsp+1A0h+var_150.minDirectLookOuterDot], xmm0 }
  if ( !DCONST_DVARMPFLT_g_useDirectLookInnerAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookInnerAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  _RBX = DCONST_DVARMPFLT_g_useDirectLookInnerDistance;
  __asm { vmovss  [rsp+1A0h+var_150.minDirectLookInnerDot], xmm0 }
  if ( !DCONST_DVARMPFLT_g_useDirectLookInnerDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookInnerDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARMPFLT_bg_minimizedPromptFadeInDistanceMult;
  __asm { vmovss  [rsp+1A0h+var_150.minDirectLookInnerDist], xmm0 }
  if ( !DCONST_DVARMPFLT_bg_minimizedPromptFadeInDistanceMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_minimizedPromptFadeInDistanceMult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DVARFLT_player_buttonHintShortRadius;
  __asm { vmovss  [rsp+1A0h+var_150.minimizedDisplayDistFrac], xmm0 }
  if ( !DVARFLT_player_buttonHintShortRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_buttonHintShortRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+1A0h+var_150.buttonHintShortRadius], xmm0
  }
  v25 = UsableEntityDenseGrid_Get();
  __asm
  {
    vmovss  xmm5, cs:__real@43700000
    vmovss  xmm4, dword ptr [rsi]
    vmovss  xmm3, dword ptr [rsi+4]
    vmovss  xmm2, dword ptr [rsi+8]
    vsubss  xmm0, xmm4, xmm5
    vsubss  xmm1, xmm3, xmm5
    vmovss  dword ptr [rbp+0A0h+min], xmm0
    vmovss  dword ptr [rbp+0A0h+min+4], xmm1
    vsubss  xmm0, xmm2, xmm5
    vaddss  xmm1, xmm4, xmm5
    vmovss  [rbp+0A0h+var_D8], xmm0
    vmovss  dword ptr [rbp+0A0h+max], xmm1
    vaddss  xmm0, xmm3, xmm5
    vaddss  xmm1, xmm2, xmm5
  }
  v43 = v25;
  v36 = v25;
  __asm
  {
    vmovss  dword ptr [rbp+0A0h+max+4], xmm0
    vmovss  [rbp+0A0h+var_E8], xmm1
  }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_PlayerUse_GetUseList_Entities");
  DenseGrid::FindInAABB(v36, &min, &max, &outIter);
  while ( DenseGrid::CellIterator::Advance(&outIter) )
  {
    DenseGrid::PageIterator::Init(&iter, v36, outIter.m_currentCellIndex);
    if ( DenseGrid::PageIterator::Advance(&iter) )
    {
      do
      {
        Keys = DenseGrid::PageIterator::GetKeys(&iter, 0x20u, outKeys);
        if ( Keys )
        {
          key = outKeys;
          v39 = Keys;
          do
          {
            G_PlayerUse_CheckEntity(useList, playerEnt, prevHintEntIndex, _RSI, viewForward, v42, v41, &dvars, key++);
            --v39;
          }
          while ( v39 );
        }
      }
      while ( DenseGrid::PageIterator::Advance(&iter) );
      v36 = v43;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerUse_GetUseList_LargeRadiusUsables
==============
*/
void G_PlayerUse_GetUseList_LargeRadiusUsables(UsableList *useList, const gentity_s *playerEnt, int prevHintEntIndex, const vec3_t *viewOrigin, const vec3_t *viewForward, const playerState_s *ps, const Bounds *playerAbsBox)
{
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v9; 
  const ntl::fixed_vector<unsigned int,2048,0> *key; 
  unsigned __int64 m_size; 
  const char *v26; 
  const ntl::fixed_vector<unsigned int,2048,0> *i; 
  unsigned __int64 v28; 
  ntl::pair<unsigned int,UsableRef> *m_buffer; 
  ntl::pair<unsigned int,UsableRef> *v30; 
  __int64 v31; 
  __int64 v32; 
  ntl::pair<unsigned int,UsableRef> *v33; 
  ntl::pair<unsigned int,UsableRef> *v34; 
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v35; 
  PlayerUseDvarFeatures dvars; 

  v9 = UsableWorldCollection_Get();
  _RBX = DCONST_DVARMPFLT_g_useDirectLookOuterDistance;
  v35 = v9;
  if ( !DCONST_DVARMPFLT_g_useDirectLookOuterDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookOuterDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARMPFLT_g_useDirectLookOuterAngle;
  __asm { vmovss  [rsp+0A8h+var_50.minDirectLookOuterDist], xmm0 }
  if ( !DCONST_DVARMPFLT_g_useDirectLookOuterAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookOuterAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  _RBX = DCONST_DVARMPFLT_g_useDirectLookInnerAngle;
  __asm { vmovss  [rsp+0A8h+var_50.minDirectLookOuterDot], xmm0 }
  if ( !DCONST_DVARMPFLT_g_useDirectLookInnerAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookInnerAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  _RBX = DCONST_DVARMPFLT_g_useDirectLookInnerDistance;
  __asm { vmovss  [rsp+0A8h+var_50.minDirectLookInnerDot], xmm0 }
  if ( !DCONST_DVARMPFLT_g_useDirectLookInnerDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookInnerDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARMPFLT_bg_minimizedPromptFadeInDistanceMult;
  __asm { vmovss  [rsp+0A8h+var_50.minDirectLookInnerDist], xmm0 }
  if ( !DCONST_DVARMPFLT_bg_minimizedPromptFadeInDistanceMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_minimizedPromptFadeInDistanceMult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DVARFLT_player_buttonHintShortRadius;
  __asm { vmovss  [rsp+0A8h+var_50.minimizedDisplayDistFrac], xmm0 }
  if ( !DVARFLT_player_buttonHintShortRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_buttonHintShortRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+0A8h+var_50.buttonHintShortRadius], xmm0
  }
  key = UsableWorld_GetLargeRadiusList();
  m_size = key->m_size;
  if ( m_size > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)m_size, "unsigned", m_size) )
    __debugbreak();
  v26 = j_va("G_PlayerUse_GetUseList_LargeRadiusUsables - %u", (unsigned int)m_size);
  Sys_ProfBeginNamedEvent(0xFFFF0000, v26);
  for ( i = (const ntl::fixed_vector<unsigned int,2048,0> *)((char *)key + 4 * key->m_size); key != i; key = (const ntl::fixed_vector<unsigned int,2048,0> *)((char *)key + 4) )
  {
    if ( !key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1664, ASSERT_TYPE_ASSERT, "( ( key != nullptr ) )", "%s\n\t( key ) = %p", "( key != nullptr )", NULL) )
      __debugbreak();
    v28 = v35->m_size;
    m_buffer = v35->m_data.m_buffer;
    v30 = v35->m_data.m_buffer;
    v31 = v28;
    v32 = (__int64)(12 * v28) / 12;
    if ( v32 > 0 )
    {
      do
      {
        if ( v30[v32 >> 1].first >= *(_DWORD *)key->m_data.m_buffer )
        {
          v32 >>= 1;
        }
        else
        {
          v30 += (v32 >> 1) + 1;
          v32 += -1 - (v32 >> 1);
        }
      }
      while ( v32 > 0 );
      v28 = v35->m_size;
    }
    v33 = &m_buffer[v28];
    if ( v30 == v33 )
      goto LABEL_46;
    v34 = &m_buffer[v31];
    if ( *(_DWORD *)key->m_data.m_buffer >= v30->first )
      v34 = v30;
    v30 = v34;
    if ( v34 == v33 )
    {
LABEL_46:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1666, ASSERT_TYPE_ASSERT, "( usableWorldIter != usableWorld->end() )", (const char *)&queryFormat, "usableWorldIter != usableWorld->end()") )
        __debugbreak();
    }
    if ( v30->second.useClass )
    {
      if ( v30->second.useClass == USE_CLASS_SCRIPTABLE )
        G_PlayerUse_CheckScriptable(useList, playerEnt, viewOrigin, viewForward, ps, playerAbsBox, &dvars, (const unsigned int *)key);
    }
    else
    {
      G_PlayerUse_CheckEntity(useList, playerEnt, prevHintEntIndex, viewOrigin, viewForward, ps, playerAbsBox, &dvars, (const unsigned int *)key);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerUse_GetUseList_Scriptables
==============
*/
void G_PlayerUse_GetUseList_Scriptables(UsableList *useList, const gentity_s *playerEnt, const vec3_t *viewOrigin, const vec3_t *viewForward, const playerState_s *ps, const Bounds *playerAbsBox)
{
  unsigned int v7; 
  DenseGrid *v25; 
  DenseGrid *v36; 
  unsigned int Keys; 
  __int64 v38; 
  unsigned int *key; 
  const char *v40; 
  unsigned int v41; 
  PlayerUseDvarFeatures dvars; 
  playerState_s *v43; 
  DenseGrid *v44; 
  DenseGrid::PageIterator iter; 
  DenseGrid::CellIterator outIter; 
  vec2_t max; 
  vec2_t min; 
  unsigned int outKeys[32]; 

  _RDI = DCONST_DVARMPFLT_g_useDirectLookOuterDistance;
  v7 = 0;
  v43 = (playerState_s *)ps;
  v41 = 0;
  _R14 = viewOrigin;
  if ( !DCONST_DVARMPFLT_g_useDirectLookOuterDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookOuterDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARMPFLT_g_useDirectLookOuterAngle;
  __asm { vmovss  [rsp+180h+var_138.minDirectLookOuterDist], xmm0 }
  if ( !DCONST_DVARMPFLT_g_useDirectLookOuterAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookOuterAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  _RDI = DCONST_DVARMPFLT_g_useDirectLookInnerAngle;
  __asm { vmovss  [rsp+180h+var_138.minDirectLookOuterDot], xmm0 }
  if ( !DCONST_DVARMPFLT_g_useDirectLookInnerAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookInnerAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  _RDI = DCONST_DVARMPFLT_g_useDirectLookInnerDistance;
  __asm { vmovss  [rsp+180h+var_138.minDirectLookInnerDot], xmm0 }
  if ( !DCONST_DVARMPFLT_g_useDirectLookInnerDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useDirectLookInnerDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARMPFLT_bg_minimizedPromptFadeInDistanceMult;
  __asm { vmovss  [rsp+180h+var_138.minDirectLookInnerDist], xmm0 }
  if ( !DCONST_DVARMPFLT_bg_minimizedPromptFadeInDistanceMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_minimizedPromptFadeInDistanceMult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  _RDI = DVARFLT_player_buttonHintShortRadius;
  __asm { vmovss  [rsp+180h+var_138.minimizedDisplayDistFrac], xmm0 }
  if ( !DVARFLT_player_buttonHintShortRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_buttonHintShortRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rsp+180h+var_138.buttonHintShortRadius], xmm0
  }
  v25 = UsableScriptableDenseGrid_Get();
  __asm
  {
    vmovss  xmm5, cs:__real@43700000
    vmovss  xmm4, dword ptr [r14]
    vmovss  xmm3, dword ptr [r14+4]
    vmovss  xmm2, dword ptr [r14+8]
    vsubss  xmm0, xmm4, xmm5
    vsubss  xmm1, xmm3, xmm5
    vmovss  dword ptr [rbp+80h+min], xmm0
    vmovss  dword ptr [rbp+80h+min+4], xmm1
    vsubss  xmm0, xmm2, xmm5
    vaddss  xmm1, xmm4, xmm5
    vmovss  [rbp+80h+var_C8], xmm0
    vmovss  dword ptr [rbp+80h+max], xmm1
    vaddss  xmm0, xmm3, xmm5
    vaddss  xmm1, xmm2, xmm5
  }
  v44 = v25;
  v36 = v25;
  __asm
  {
    vmovss  dword ptr [rbp+80h+max+4], xmm0
    vmovss  [rbp+80h+var_D8], xmm1
  }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_PlayerUse_GetUseList_Scriptables");
  DenseGrid::FindInAABB(v36, &min, &max, &outIter);
  if ( DenseGrid::CellIterator::Advance(&outIter) )
  {
    do
    {
      DenseGrid::PageIterator::Init(&iter, v36, outIter.m_currentCellIndex);
      if ( DenseGrid::PageIterator::Advance(&iter) )
      {
        do
        {
          Keys = DenseGrid::PageIterator::GetKeys(&iter, 0x20u, outKeys);
          if ( Keys )
          {
            v38 = Keys;
            key = outKeys;
            v41 += Keys;
            do
            {
              G_PlayerUse_CheckScriptable(useList, playerEnt, _R14, viewForward, v43, playerAbsBox, &dvars, key++);
              --v38;
            }
            while ( v38 );
          }
        }
        while ( DenseGrid::PageIterator::Advance(&iter) );
        v36 = v44;
      }
    }
    while ( DenseGrid::CellIterator::Advance(&outIter) );
    v7 = v41;
  }
  v40 = j_va("G_PlayerUse_GetUseList_Scriptables Count %i", v7);
  Sys_ProfSetMarker(0xFFFF0000, v40);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerUse_InitSystem
==============
*/

void G_PlayerUse_InitSystem(void)
{
  UsableWorld_Init();
}

/*
==============
G_PlayerUse_IsPlayerUsingKBMPress
==============
*/
char G_PlayerUse_IsPlayerUsingKBMPress(const gentity_s *player)
{
  const dvar_t *v2; 
  ButtonData buttonData; 

  if ( (player->client->buttons & 0x8000000000000i64) != 0 )
    return 0;
  v2 = DVARBOOL_useHoldKBMProfile_enabled;
  if ( !DVARBOOL_useHoldKBMProfile_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useHoldKBMProfile_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && (!player->client || (G_PlayerUse_GetButtonData(player, &buttonData), (*buttonData.buttons & 0x2000000000000000i64) != 0)) )
    return 0;
  else
    return 1;
}

/*
==============
G_PlayerUse_IsVehicleUsable
==============
*/
bool G_PlayerUse_IsVehicleUsable(const gentity_s *player, const gentity_s *vehEnt)
{
  GVehicles *v3; 
  bool result; 
  unsigned __int8 v5; 
  VehicleUsableParts *v6; 
  __int64 v7; 
  scr_string_t partName; 
  const char *v9; 
  scr_string_t v10; 
  const char *v11; 
  unsigned __int8 outUsableScriptablePartCount; 
  unsigned int scriptableIndex; 
  VehicleUsableParts *outUsableScriptableParts; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2161, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v3 = GVehicles::ms_gVehiclesSystem;
  if ( vehEnt->vehicle || (result = GVehicles::IsSuspended(GVehicles::ms_gVehiclesSystem, vehEnt)) )
  {
    GVehicles::GetUsableInfo(v3, vehEnt, &outUsableScriptablePartCount, (const VehicleUsableParts **)&outUsableScriptableParts);
    v5 = outUsableScriptablePartCount;
    if ( !outUsableScriptablePartCount )
      return 0;
    v6 = outUsableScriptableParts;
    if ( !outUsableScriptableParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2134, ASSERT_TYPE_ASSERT, "(usableScriptableParts)", (const char *)&queryFormat, "usableScriptableParts") )
      __debugbreak();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2136, ASSERT_TYPE_ASSERT, "( usableScriptablePartCount != 0 )", (const char *)&queryFormat, "usableScriptablePartCount != 0") )
      __debugbreak();
    if ( !ScriptableSv_TryGetIndexForEntity(vehEnt, &scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2138, ASSERT_TYPE_ASSERT, "(ScriptableSv_TryGetIndexForEntity( vehEnt, &scriptableIndex ))", (const char *)&queryFormat, "ScriptableSv_TryGetIndexForEntity( vehEnt, &scriptableIndex )") )
      __debugbreak();
    v7 = 0i64;
    if ( v5 )
    {
      while ( 1 )
      {
        partName = v6[v7].partName;
        if ( ScriptableSv_GetPartName(scriptableIndex, v6[v7].serverInstanceFlatId) != partName )
        {
          v9 = SL_ConvertToString(partName);
          v10 = ScriptableSv_GetPartName(scriptableIndex, v6[v7].serverInstanceFlatId);
          v11 = SL_ConvertToString(v10);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2145, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetPartName( scriptableIndex, updateCache.serverInstanceFlatId ) == updateCache.partName )", "%s vs %s", v11, v9) )
            __debugbreak();
        }
        if ( ScriptableSv_GetPartIsUsable(scriptableIndex, v6[v7].serverInstanceFlatId) )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v5 )
          return 0;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

/*
==============
G_PlayerUse_ProcessAutoUseEntities
==============
*/
void G_PlayerUse_ProcessAutoUseEntities(gentity_s *const player)
{
  gclient_s *client; 
  __int64 toggleIndex; 
  gclient_s *v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v10; 
  char v12; 
  int v13; 
  int v15; 
  __int64 v16; 
  _DWORD *v17; 
  unsigned int v18; 
  unsigned __int8 v19; 
  unsigned int InstanceUseCount; 
  unsigned int v21; 
  unsigned __int8 v22; 
  unsigned int v23; 
  gclient_s *v24; 
  _BOOL8 v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  int *p_count; 
  gclient_s *v30; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2605, ASSERT_TYPE_ASSERT, "(player)", (const char *)&queryFormat, rowName) )
    __debugbreak();
  client = player->client;
  if ( client )
  {
    toggleIndex = client->autoUseDelayInfo.toggleIndex;
    if ( (unsigned int)toggleIndex >= 2 )
    {
      LODWORD(v26) = client->autoUseDelayInfo.toggleIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2613, ASSERT_TYPE_ASSERT, "(unsigned)( currentIndex ) < (unsigned)( 2 )", "currentIndex doesn't index 2\n\t%i not in [0, %i)", v26, 2) )
        __debugbreak();
    }
    v4 = player->client;
    v5 = 0i64;
    v6 = toggleIndex;
    v30 = v4;
    if ( !(_DWORD)toggleIndex )
      v5 = 1i64;
    v7 = (__int64)&v4->autoUseDelayInfo + v6 * 196;
    p_count = &v4->autoUseDelayInfo.arrays[v6].count;
    if ( (unsigned int)*p_count >= 0x10 )
    {
      LODWORD(v27) = 16;
      LODWORD(v26) = *p_count;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2618, ASSERT_TYPE_ASSERT, "(unsigned)( currentArray->count ) < (unsigned)( 16 )", "currentArray->count doesn't index MAX_SIMULTANEOUS_AUTOUSE_ELEMENTS\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    if ( v4->autoUseDelayInfo.arrays[v5].count >= 0x10u )
    {
      LODWORD(v27) = 16;
      LODWORD(v26) = v4->autoUseDelayInfo.arrays[v5].count;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2619, ASSERT_TYPE_ASSERT, "(unsigned)( prevArray->count ) < (unsigned)( 16 )", "prevArray->count doesn't index MAX_SIMULTANEOUS_AUTOUSE_ELEMENTS\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    _RBX = DCONST_DVARMPFLT_player_itemAutoUseDelaySeconds;
    if ( !DCONST_DVARMPFLT_player_itemAutoUseDelaySeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemAutoUseDelaySeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v10 = 0i64;
    __asm { vmulss  xmm1, xmm0, cs:__real@447a0000 }
    v12 = 0;
    v13 = 0;
    __asm { vcvttss2si r10d, xmm1 }
    v15 = -1;
    v28 = _ER10;
    if ( *p_count <= 0 )
      goto LABEL_36;
    do
    {
      v16 = 0i64;
      if ( v4->autoUseDelayInfo.arrays[v5].count > 0 )
      {
        v17 = (_DWORD *)((char *)&v4->autoUseDelayInfo + v5 * 196);
        while ( *(_DWORD *)v7 != *v17 )
        {
          ++v16;
          v17 += 3;
          if ( v16 >= v4->autoUseDelayInfo.arrays[v5].count )
            goto LABEL_26;
        }
        *(_DWORD *)(v7 + 8) += v17[2];
      }
LABEL_26:
      if ( *(_DWORD *)(v7 + 8) > _ER10 )
      {
        if ( ++v15 == player->client->autoUseDelayInfo.useIndex )
        {
          v18 = *(_DWORD *)v7;
          v19 = *(_BYTE *)(v7 + 4);
          InstanceUseCount = ScriptableSv_GetInstanceUseCount(*(_DWORD *)v7);
          G_PlayerUse_UseScriptable(player, v18, v19, InstanceUseCount, 1);
          _ER10 = v28;
          v12 = 1;
          v4 = v30;
          *(_DWORD *)(v7 + 8) = 0;
        }
        else if ( !v12 && !v10 )
        {
          v10 = v7;
        }
      }
      ++v13;
      v7 += 12i64;
    }
    while ( v13 < *p_count );
    if ( v12 )
      goto LABEL_37;
    if ( v10 )
    {
      v21 = *(_DWORD *)v10;
      v22 = *(_BYTE *)(v10 + 4);
      v23 = ScriptableSv_GetInstanceUseCount(*(_DWORD *)v10);
      G_PlayerUse_UseScriptable(player, v21, v22, v23, 1);
      *(_DWORD *)(v10 + 8) = 0;
      player->client->autoUseDelayInfo.useIndex = 0;
    }
    else
    {
LABEL_36:
      player->client->autoUseDelayInfo.useIndex = -1;
    }
LABEL_37:
    v24 = player->client;
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2582, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
      __debugbreak();
    v25 = v24->autoUseDelayInfo.toggleIndex == 0;
    v24->autoUseDelayInfo.toggleIndex = v25;
    v24->autoUseDelayInfo.arrays[v25].count = 0;
    ++player->client->autoUseDelayInfo.useIndex;
  }
}

/*
==============
G_PlayerUse_ProcessHintEntity
==============
*/
void G_PlayerUse_ProcessHintEntity(gentity_s *const player)
{
  playerState_s *EntityPlayerState; 
  __int64 cursorHintEntIndex; 
  gentity_s *v4; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  int v7; 
  const dvar_t *v8; 
  int EquippedWeaponIndex; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2549, ASSERT_TYPE_ASSERT, "( player != nullptr )", (const char *)&queryFormat, "player != nullptr") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(player);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2552, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  if ( BG_IsCursorHintAnEntity(EntityPlayerState) )
  {
    if ( EntityPlayerState->cursorHintEntIndex >= 0x800 )
    {
      LODWORD(v11) = EntityPlayerState->cursorHintEntIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2556, ASSERT_TYPE_ASSERT, "(unsigned)( ps->cursorHintEntIndex ) < (unsigned)( ( 2048 ) )", "ps->cursorHintEntIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, 2048) )
        __debugbreak();
    }
    cursorHintEntIndex = (int)EntityPlayerState->cursorHintEntIndex;
    if ( (unsigned int)cursorHintEntIndex >= 0x800 )
    {
      LODWORD(v12) = 2048;
      LODWORD(v11) = EntityPlayerState->cursorHintEntIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[cursorHintEntIndex].r.isInUse != g_entityIsInUse[cursorHintEntIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[cursorHintEntIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2557, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( ps->cursorHintEntIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( ps->cursorHintEntIndex )") )
      __debugbreak();
    v4 = &g_entities[EntityPlayerState->cursorHintEntIndex];
    v4->flags.m_flags[0] |= 0x1000000u;
    if ( v4->s.eType == ET_MISSILE && (v4->hint.flags & 0x10) == 0 )
    {
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &v4->s);
      v7 = 0;
      if ( BG_GetWeaponClass(WeaponForEntity, 0) == WEAPCLASS_GRENADE )
      {
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        v8 = DVARBOOL_bg_giveAll;
        if ( !DVARBOOL_bg_giveAll || (Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll), !v8->current.enabled) )
        {
          if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          if ( WeaponForEntity->weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, EntityPlayerState, WeaponForEntity), EquippedWeaponIndex >= 0) )
            v10 = (__int64)&EntityPlayerState->weapEquippedData[EquippedWeaponIndex];
          else
            v10 = 0i64;
          if ( !v10 && !BG_EquipWeapon(Instance, EntityPlayerState, WeaponForEntity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2570, ASSERT_TYPE_ASSERT, "(BG_EquipWeapon( weaponMap, ps, weapon ))", (const char *)&queryFormat, "BG_EquipWeapon( weaponMap, ps, weapon )") )
            __debugbreak();
        }
      }
      if ( v4->nextthink - level.time > 0 )
        v7 = v4->nextthink - level.time;
      EntityPlayerState->throwbackGrenadeTimeLeft = v7;
      BG_SetThrowbackWeaponForPlayer(Instance, EntityPlayerState, WeaponForEntity);
    }
  }
}

/*
==============
G_PlayerUse_ProcessUseList
==============
*/
char G_PlayerUse_ProcessUseList(gentity_s *const player)
{
  playerState_s *EntityPlayerState; 
  gclient_s *client; 
  int cursorHintEntIndex; 
  bool v5; 
  bool v6; 
  unsigned int v7; 
  bool v8; 
  bool v9; 
  bool HasActiveOffhand; 
  char v11; 
  char v12; 
  int v13; 
  UsableList *p_list; 
  gclient_s *v15; 
  __int64 toggleIndex; 
  char *v17; 
  __int64 v18; 
  _DWORD *v19; 
  int v20; 
  char *v21; 
  __int64 useIndex; 
  gentity_s *v23; 
  unsigned int v24; 
  unsigned int v25; 
  const playerState_s *v26; 
  HintType CursorHintType; 
  unsigned __int16 CursorHintTag; 
  int clientNum; 
  UsableClass useClass; 
  unsigned int HoldDurationForScriptable; 
  __int16 cursorHintFlags; 
  __int16 v33; 
  __int16 v34; 
  gclient_s *v35; 
  int v36; 
  UsableHandle *lastHoldEntity; 
  int isDefined; 
  int *useHoldTime; 
  UsableClass m_useClass; 
  bool v41; 
  int v42; 
  bool v43; 
  bool v44; 
  unsigned int m_useData; 
  unsigned int v46; 
  bool v47; 
  HintHoldDuration HoldDuration; 
  int time; 
  __int64 v51; 
  __int64 v52; 
  char v53; 
  ButtonData buttonData; 
  UsableList list; 

  EntityPlayerState = G_GetEntityPlayerState(player);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2343, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  client = player->client;
  cursorHintEntIndex = EntityPlayerState->cursorHintEntIndex;
  v5 = client && (client->flags & 8) != 0 || BG_ContextMount_IsActive(EntityPlayerState);
  v6 = G_PlayerUse_CheckUseState(player);
  v7 = EntityPlayerState->weapState[0].weaponState - 26;
  v8 = v6;
  v9 = v7 <= 5;
  if ( v7 <= 5 )
    v9 = 1;
  HasActiveOffhand = BG_Offhand_HasActiveOffhand(EntityPlayerState);
  v11 = v9;
  if ( HasActiveOffhand )
    v11 = 1;
  v53 = v11;
  UsableList_Init(&list);
  G_PlayerUse_GetUseList(player, &list, cursorHintEntIndex);
  G_Door_ProcessUseList(&list, EntityPlayerState);
  if ( Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && v5 )
    G_MinimizedUsePrompts_MarkOmnvarsUnused(EntityPlayerState, 0);
  if ( !v8 || v5 )
    return 0;
  v12 = 0;
  v13 = 0;
  if ( list.itemCount )
  {
    p_list = &list;
    do
    {
      if ( !G_PlayerUse_CheckAutoUse(player, &list.items[v13].ref) )
        goto LABEL_54;
      v15 = player->client;
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 921, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
        __debugbreak();
      toggleIndex = v15->autoUseDelayInfo.toggleIndex;
      if ( (unsigned int)toggleIndex >= 2 )
      {
        LODWORD(v52) = 2;
        LODWORD(v51) = v15->autoUseDelayInfo.toggleIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 924, ASSERT_TYPE_ASSERT, "(unsigned)( currentIndex ) < (unsigned)( 2 )", "currentIndex doesn't index 2\n\t%i not in [0, %i)", v51, v52) )
          __debugbreak();
      }
      v17 = (char *)v15 + 196 * toggleIndex;
      v18 = *((int *)v17 + 15954);
      v19 = v17 + 63624;
      if ( (int)v18 < 15 )
      {
        v20 = 0;
        if ( (int)v18 <= 0 )
        {
LABEL_32:
          v21 = &v17[12 * v18 + 63624];
          *((_DWORD *)v17 + 15954) = v18 + 1;
          *(_DWORD *)v21 = p_list->items[0].ref.useIndex;
          v21[4] = p_list->items[0].ref.useData;
          if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
            __debugbreak();
          *((_DWORD *)v21 + 2) = level.frameDuration;
        }
        else
        {
          while ( *v19 != p_list->items[0].ref.useIndex )
          {
            ++v20;
            v19 += 3;
            if ( v20 >= (int)v18 )
              goto LABEL_32;
          }
        }
      }
      else
      {
        Com_PrintWarning(15, "G_PlayerUse_AddAutoUseElement cannot add auto-use entity.  Increase MAX_SIMULTANEOUS_AUTOUSE_ELEMENTS.\n");
      }
      if ( p_list->items[0].inDisplayFov )
      {
LABEL_54:
        if ( !v12 && p_list->items[0].inDisplayDistance )
        {
          if ( p_list->items[0].ref.useClass )
            goto LABEL_127;
          useIndex = (int)p_list->items[0].ref.useIndex;
          if ( (unsigned int)useIndex >= 0x800 )
          {
            LODWORD(v52) = 2048;
            LODWORD(v51) = p_list->items[0].ref.useIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v51, v52) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[useIndex].r.isInUse != g_entityIsInUse[useIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[useIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2419, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( ref.useIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( ref.useIndex )") )
            __debugbreak();
          if ( (v23 = &g_entities[p_list->items[0].ref.useIndex], !v53) && !BG_HandsOccupied(EntityPlayerState) || (v23->hint.flags & 0x40) != 0 )
          {
LABEL_127:
            if ( p_list->items[0].ref.useClass != USE_CLASS_SCRIPTABLE || (v24 = UsableRef_GetCursorHintEntIndex((const UsableRef *)p_list), !G_Door_ScriptableIsDoor(v24)) || p_list->items[0].inDisplayDistance && p_list->items[0].inDisplayFov && (v25 = UsableRef_GetCursorHintEntIndex((const UsableRef *)p_list), G_Door_ShowHint(EntityPlayerState, v25)) )
            {
              v26 = G_GetEntityPlayerState(player);
              CursorHintType = UsableRef_GetCursorHintType((const UsableRef *)p_list, v26);
              if ( CursorHintType )
              {
                EntityPlayerState->cursorHint = CursorHintType;
                EntityPlayerState->cursorHintEntIndex = UsableRef_GetCursorHintEntIndex((const UsableRef *)p_list);
                EntityPlayerState->cursorHintData = UsableRef_GetCursorHintPart((const UsableRef *)p_list);
                EntityPlayerState->cursorHintClass = UsableRef_GetCursorHintClass((const UsableRef *)p_list);
                EntityPlayerState->cursorHintString = UsableRef_GetCursorHintString((const UsableRef *)p_list, player);
                EntityPlayerState->cursorHintBinding = UsableRef_GetCursorHintBinding((const UsableRef *)p_list);
                CursorHintTag = UsableRef_GetCursorHintTag((const UsableRef *)p_list);
                clientNum = EntityPlayerState->clientNum;
                EntityPlayerState->cursorHintTag = CursorHintTag;
                EntityPlayerState->cursorHintRange = UsableRef_GetCursorHintRange((const ClientHintFlags)p_list->items[0].flags, clientNum);
                UsableRef_GetCursorHintParms((const UsableRef *)p_list, EntityPlayerState);
                if ( p_list->items[0].ref.useClass )
                {
                  if ( p_list->items[0].ref.useClass == USE_CLASS_SCRIPTABLE )
                  {
                    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_useHoldKBMProfile_enabled, "useHoldKBMProfile_enabled") )
                      EntityPlayerState->cursorHintProgressDuration = G_PlayerUse_GetHoldDurationForScriptable(p_list->items[0].ref.useIndex, p_list->items[0].ref.useData);
                    useClass = p_list->items[0].ref.useClass;
                    if ( useClass != USE_CLASS_SCRIPTABLE )
                    {
                      LODWORD(v52) = 1;
                      LODWORD(v51) = (unsigned __int8)useClass;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 727, ASSERT_TYPE_ASSERT, "( usableRef.useClass ) == ( USE_CLASS_SCRIPTABLE )", "usableRef.useClass == USE_CLASS_SCRIPTABLE\n\t%i, %i", v51, v52) )
                        __debugbreak();
                    }
                    HoldDurationForScriptable = G_PlayerUse_GetHoldDurationForScriptable(p_list->items[0].ref.useIndex, p_list->items[0].ref.useData);
                    if ( !G_PlayerUse_IsPlayerUsingKBMPress(player) || HoldDurationForScriptable )
                    {
                      if ( HoldDurationForScriptable >= 4 )
                      {
                        LODWORD(v52) = 4;
                        LODWORD(v51) = HoldDurationForScriptable;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 736, ASSERT_TYPE_ASSERT, "(unsigned)( holdDuration ) < (unsigned)( HINT_HOLD_DURATION_COUNT )", "holdDuration doesn't index HINT_HOLD_DURATION_COUNT\n\t%i not in [0, %i)", v51, v52) )
                          __debugbreak();
                      }
                    }
                    else
                    {
                      HoldDurationForScriptable = 3;
                    }
                    cursorHintFlags = EntityPlayerState->cursorHintFlags;
                    v33 = cursorHintFlags | 4;
                    v34 = cursorHintFlags & 0xFFFB;
                    if ( HoldDurationForScriptable == 3 )
                      v33 = v34;
                    EntityPlayerState->cursorHintFlags = v33;
                  }
                }
                else
                {
                  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_useHoldKBMProfile_enabled, "useHoldKBMProfile_enabled") )
                    EntityPlayerState->cursorHintProgressDuration = UsableRef_GetEntityCursorHintHoldDuration((const UsableRef *)p_list, player);
                  UsableRef_SetCursorHintFlagFromEntityHintFlags((const UsableRef *)p_list, 2u, CURSOR_HINT_REQUIRESMASHING, &EntityPlayerState->cursorHintFlags);
                  UsableRef_SetCursorHintFlagFromEntityHintFlags((const UsableRef *)p_list, 4u, CURSOR_HINT_REQUIRESHOLDING, &EntityPlayerState->cursorHintFlags);
                  UsableRef_SetCursorHintFlagFromEntityHintFlags((const UsableRef *)p_list, 1u, CURSOR_HINT_INOPERABLE, &EntityPlayerState->cursorHintFlags);
                  UsableRef_SetCursorHintFlagFromEntityHintFlags((const UsableRef *)p_list, 8u, CURSOR_HINT_LOCK_CONTROLS, &EntityPlayerState->cursorHintFlags);
                  UsableRef_SetCursorHintFlagFromEntityHintFlags((const UsableRef *)p_list, 0x20u, CURSOR_HINT_HIDE_PROGRESS_BAR, &EntityPlayerState->cursorHintFlags);
                }
                if ( UsableRef_ShouldHideOnObstruction((const UsableRef *)p_list) )
                  UsableRef_SetCursorHintFlagFromClientHintFlags(p_list->items[0].flags, CLIENT_HINT_FLAG_OBSTRUCTED, CURSOR_HINT_OBSTRUCTED, &EntityPlayerState->cursorHintFlags);
                G_PlayerUse_SetClientHintFlags(player, (const ClientHintFlags)p_list->items[0].flags);
                if ( EntityPlayerState->cursorHintRange == USE_RANGE )
                {
                  v35 = player->client;
                  if ( v35 )
                    v35->lastTimeInUseRange = level.time;
                }
              }
              else
              {
                BG_CursorHintEntityClear(EntityPlayerState);
              }
              if ( EntityPlayerState->cursorHintClass == USE_CLASS_GENTITY )
              {
                v36 = EntityPlayerState->cursorHintEntIndex;
                if ( v36 != 2047 && !G_IsEntityInUse(v36) )
                {
                  LODWORD(v51) = EntityPlayerState->cursorHintEntIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2490, ASSERT_TYPE_SANITY, "( ( !BG_IsCursorHintAnEntity( ps ) || G_IsEntityInUse( ps->cursorHintEntIndex ) ) )", "( ps->cursorHintEntIndex ) = %i", v51) )
                    __debugbreak();
                }
              }
              v12 = 1;
            }
          }
        }
      }
      ++v13;
      p_list = (UsableList *)((char *)p_list + 20);
    }
    while ( v13 < list.itemCount );
  }
  UsableList_Debug(&list, EntityPlayerState->clientNum, EntityPlayerState->cursorHintEntIndex, 0);
  if ( Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) )
    G_UpdateMinimizedUseOmnvars(EntityPlayerState, &list);
  G_PlayerUse_GetButtonData(player, &buttonData);
  lastHoldEntity = buttonData.lastHoldEntity;
  isDefined = UsableHandle::isDefined(buttonData.lastHoldEntity);
  useHoldTime = buttonData.useHoldTime;
  m_useClass = lastHoldEntity->m_useClass;
  v41 = isDefined != 0;
  v42 = *buttonData.useHoldTime;
  v43 = isDefined && m_useClass == USE_CLASS_GENTITY && (UsableHandle::ent(lastHoldEntity)->hint.flags & 2) != 0;
  v44 = v41 && m_useClass == USE_CLASS_GENTITY && (UsableHandle::ent(lastHoldEntity)->hint.flags & 1) != 0;
  v47 = 0;
  if ( v41 )
  {
    if ( m_useClass == USE_CLASS_GENTITY || lastHoldEntity->m_useClass == USE_CLASS_SCRIPTABLE && (m_useData = lastHoldEntity->m_useData, v46 = UsableHandle::getUseIndex(lastHoldEntity), ScriptableSv_GetPartIsUsable(v46, m_useData)) )
      v47 = 1;
  }
  if ( !v41 || v42 <= 0 || !v47 || v44 || v43 )
  {
    time = 0;
    EntityPlayerState->cursorHintProgressEntIndex = 2047;
    *(_WORD *)&EntityPlayerState->cursorHintProgressData = 0;
  }
  else
  {
    EntityPlayerState->cursorHintProgressClass = lastHoldEntity->m_useClass;
    EntityPlayerState->cursorHintProgressEntIndex = UsableHandle::getUseIndex(lastHoldEntity);
    EntityPlayerState->cursorHintProgressData = lastHoldEntity->m_useData;
    HoldDuration = (unsigned int)G_PlayerUse_GetHoldDuration(player, lastHoldEntity);
    EntityPlayerState->cursorHintProgressDuration = HoldDuration;
    if ( BG_PlayerUse_GetUseHoldTime(HoldDuration) <= 0 )
    {
      time = level.time;
    }
    else if ( (*buttonData.buttons & 0x1000000000000000i64) == 0 || EntityPlayerState->cursorHintProgressDuration )
    {
      time = *useHoldTime;
    }
    else
    {
      time = 0;
    }
  }
  EntityPlayerState->cursorHintProgressStartTime = time;
  return 1;
}

/*
==============
G_PlayerUse_Read
==============
*/

void __fastcall G_PlayerUse_Read(SaveGame *save)
{
  UsableWorld_Read(save);
}

/*
==============
G_PlayerUse_SetClientHintFlags
==============
*/
void G_PlayerUse_SetClientHintFlags(gentity_s *const player, const ClientHintFlags flags)
{
  gclient_s *client; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1873, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && !player->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1874, ASSERT_TYPE_ASSERT, "( player->client || player->agent )", (const char *)&queryFormat, "player->client || player->agent") )
    __debugbreak();
  client = player->client;
  if ( client )
    client->hintFlags = flags;
  else
    player->agent->hintFlags = flags;
}

/*
==============
G_PlayerUse_SetEntityUsable
==============
*/
void G_PlayerUse_SetEntityUsable(gentity_s *ent, bool usable)
{
  unsigned int number; 
  bool v5; 
  bool v6; 
  unsigned int v7; 
  int v8; 
  UsableRef ref; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 130, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType < ET_EVENTS )
  {
    number = ent->s.number;
    if ( number > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 80, ASSERT_TYPE_ASSERT, "(useIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "useIndex <= USABLEKEY_INDEX_MASK") )
      __debugbreak();
    ref.useIndex = number;
    *(_WORD *)&ref.useClass = 0;
    if ( usable )
      v5 = UsableWorld_Add(&ref);
    else
      v5 = UsableWorld_Remove(&ref);
    v6 = v5;
    v7 = ent->flags.m_flags[0];
    if ( usable )
    {
      if ( v6 )
      {
        ent->flags.m_flags[0] = v7 | 0x20000000;
        return;
      }
      if ( (v7 & 0x20000000) != 0 )
      {
        v8 = 148;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v6 )
      {
        ent->flags.m_flags[0] = v7 & 0xDFFFFFFF;
        return;
      }
      if ( (v7 & 0x20000000) != 0 )
      {
        v8 = 159;
LABEL_20:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", v8, ASSERT_TYPE_ASSERT, "( !ent->flags.TestFlag( BgEntityFlagsCommon::USABLE ) )", (const char *)&queryFormat, "!ent->flags.TestFlag( BgEntityFlagsCommon::USABLE )") )
          __debugbreak();
      }
    }
  }
}

/*
==============
G_PlayerUse_SetObjectMoved
==============
*/
void G_PlayerUse_SetObjectMoved(unsigned int useIndex, UsableClass useClass, unsigned __int8 useData, const vec3_t *origin)
{
  UsableRef ref; 

  if ( useIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 181, ASSERT_TYPE_ASSERT, "(useIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "useIndex <= USABLEKEY_INDEX_MASK") )
    __debugbreak();
  ref.useIndex = useIndex;
  ref.useClass = useClass;
  ref.useData = useData;
  UsableWorld_UpdateOrigin(&ref, origin);
}

/*
==============
G_PlayerUse_SetObjectUsable
==============
*/
bool G_PlayerUse_SetObjectUsable(unsigned int useIndex, UsableClass useClass, unsigned __int8 useData, bool usable)
{
  UsableRef ref; 

  if ( useIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 80, ASSERT_TYPE_ASSERT, "(useIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "useIndex <= USABLEKEY_INDEX_MASK") )
    __debugbreak();
  ref.useIndex = useIndex;
  ref.useClass = useClass;
  ref.useData = useData;
  if ( usable )
    return UsableWorld_Add(&ref);
  else
    return UsableWorld_Remove(&ref);
}

/*
==============
G_PlayerUse_SetObjectUsableForClient
==============
*/
void G_PlayerUse_SetObjectUsableForClient(unsigned int useIndex, UsableClass useClass, unsigned __int8 useData, bool usable, const unsigned int clientNum)
{
  UsableRef ref; 

  if ( useIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 114, ASSERT_TYPE_ASSERT, "(useIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "useIndex <= USABLEKEY_INDEX_MASK") )
    __debugbreak();
  if ( useClass == USE_CLASS_SCRIPTABLE )
  {
    ref.useIndex = useIndex;
    ref.useClass = USE_CLASS_SCRIPTABLE;
    ref.useData = useData;
    UsableWorld_SetScriptableUseForClient(&ref, usable, clientNum);
  }
}

/*
==============
G_PlayerUse_SetObjectUsableForClientMask
==============
*/
void G_PlayerUse_SetObjectUsableForClientMask(unsigned int useIndex, UsableClass useClass, unsigned __int8 useData, bool usable, const ClientBits *clientMask)
{
  UsableRef ref; 

  if ( useIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 98, ASSERT_TYPE_ASSERT, "(useIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "useIndex <= USABLEKEY_INDEX_MASK") )
    __debugbreak();
  if ( useClass == USE_CLASS_SCRIPTABLE )
  {
    ref.useIndex = useIndex;
    ref.useClass = USE_CLASS_SCRIPTABLE;
    ref.useData = useData;
    UsableWorld_SetScriptableUseForClientMask(&ref, usable, clientMask);
  }
}

/*
==============
G_PlayerUse_SetTurretDropHint
==============
*/
void G_PlayerUse_SetTurretDropHint(gentity_s *ent)
{
  gclient_s *client; 
  const char *v3; 
  int v4; 
  const char *v5; 
  const char *v6; 
  gentity_s *v7; 
  GWeaponMap *Instance; 
  unsigned int weaponIdx; 
  bool v10; 
  WeaponDef **v11; 
  WeaponDef *v12; 
  __int64 v13; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1847, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1848, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( !ent->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1849, ASSERT_TYPE_ASSERT, "( ent->active )", (const char *)&queryFormat, "ent->active") )
    __debugbreak();
  client = ent->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( client == (gclient_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 6u) )
  {
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 7u) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) )
        goto LABEL_24;
      v3 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )";
      v4 = 2052;
      v5 = "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))";
      v6 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h";
    }
    else
    {
      v3 = "BG_IsTurretActive( ps )";
      v4 = 1853;
      v5 = "( BG_IsTurretActive( ps ) )";
      v6 = "c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp";
    }
    if ( CoreAssert_Handler(v6, v4, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v3) )
      __debugbreak();
  }
LABEL_24:
  if ( client->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1854, ASSERT_TYPE_ASSERT, "( ps->viewlocked_entNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
    __debugbreak();
  v7 = &level.gentities[client->ps.viewlocked_entNum];
  if ( v7->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 1857, ASSERT_TYPE_ASSERT, "( turret->s.eType == ET_TURRET )", (const char *)&queryFormat, "turret->s.eType == ET_TURRET") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  weaponIdx = BG_GetWeaponForEntity(Instance, &v7->s)->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v13) = weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v13, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v10 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
  v11 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v12 = *v11;
  if ( *v12->dropHintString )
  {
    BG_CursorHintEntityClear(&client->ps);
    client->ps.cursorHintEntIndex = client->ps.viewlocked_entNum;
    client->ps.cursorHint = HINT_WEAPON;
    client->ps.cursorHintString = v12->dropHintStringIndex;
  }
}

/*
==============
G_PlayerUse_SetUseRadius
==============
*/

bool __fastcall G_PlayerUse_SetUseRadius(unsigned int useIndex, UsableClass useClass, unsigned __int8 useData, double useRadius)
{
  bool result; 
  UsableRef ref; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( useIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 167, ASSERT_TYPE_ASSERT, "(useIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "useIndex <= USABLEKEY_INDEX_MASK") )
    __debugbreak();
  __asm { vmovaps xmm1, xmm6; useRadius }
  ref.useIndex = useIndex;
  ref.useClass = useClass;
  ref.useData = useData;
  result = UsableWorld_SetUseRadius(&ref, *(float *)&_XMM1);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
G_PlayerUse_TurretHints
==============
*/
bool G_PlayerUse_TurretHints(const playerState_s *const ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 514, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|0x80) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_spValue, 0x32u);
}

/*
==============
G_PlayerUse_UpdateActivate
==============
*/
void G_PlayerUse_UpdateActivate(GClientTaskQueue *outTaskQueue, gentity_s *playerEnt)
{
  playerState_s *EntityPlayerState; 
  playerState_s *v4; 
  unsigned __int64 v5; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  gclient_s *client; 
  bool v8; 
  __int64 v9; 
  GWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v12; 
  bool HasActiveOffhand; 
  bool v14; 
  UsableHandle *useHoldEntity; 
  unsigned int UseIndex; 
  bool v17; 
  unsigned __int64 *buttons; 
  bool v19; 
  int UseHoldTime; 
  unsigned __int64 v21; 
  int *v22; 
  int v23; 
  bool v24; 
  char v25; 
  int HoldDuration; 
  char v27; 
  ButtonData buttonData; 
  char v30; 
  char v31; 
  weapType_t WeaponType; 
  int v33; 
  __int64 v34; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 951, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  G_PlayerUse_GetButtonData(playerEnt, &buttonData);
  EntityPlayerState = G_GetEntityPlayerState(playerEnt);
  v4 = EntityPlayerState;
  if ( !EntityPlayerState || EntityPlayerState->cursorHint == HINT_NONE || (v5 = 0x40000000i64, !EntityPlayerState->cursorHintBinding) )
    v5 = 40i64;
  p_weapFlags = &EntityPlayerState->weapCommon.weapFlags;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&EntityPlayerState->weapCommon.weapFlags, ACTIVE, 0);
  client = playerEnt->client;
  v8 = client && (client->flags & 8) != 0 || BG_ContextMount_IsActive(v4) || BG_Ladder_IsActive(v4);
  if ( v4->cursorHintBinding == 1 )
  {
    v9 = 1i64;
  }
  else if ( v4->cursorHintBinding == 93 )
  {
    v9 = 0x40000000000i64;
  }
  else
  {
    v9 = 32i64;
  }
  v34 = v9;
  if ( (v9 & v5) == 0 || v8 )
  {
    v30 = 0;
    if ( (*(_BYTE *)buttonData.latched_buttons & 0x20) != 0 )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0);
  }
  else
  {
    v30 = 1;
  }
  Instance = GWeaponMap::GetInstance();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, v4);
  v12 = BG_UsingAlternate(v4);
  WeaponType = BG_GetWeaponType(CurrentWeaponForPlayer, v12);
  HasActiveOffhand = BG_Offhand_HasActiveOffhand(v4);
  v14 = BG_HandsOccupied(v4);
  useHoldEntity = buttonData.useHoldEntity;
  v17 = 0;
  if ( v14 || HasActiveOffhand )
  {
    if ( UsableHandle::isDefined(buttonData.useHoldEntity) )
    {
      if ( !UsableHandle::isDefined(useHoldEntity) || (useHoldEntity->m_useClass != USE_CLASS_SCRIPTABLE || (UseIndex = UsableHandle::getUseIndex(useHoldEntity), !G_Door_ScriptableIsDoor(UseIndex))) && (useHoldEntity->m_useClass || (UsableHandle::ent(useHoldEntity)->hint.flags & 0x40) == 0) )
        v17 = 1;
    }
  }
  if ( v8 || v17 || WeaponType == WEAPTYPE_EQUIP_DEPLOY )
    goto LABEL_100;
  buttons = buttonData.buttons;
  v19 = 0;
  if ( (v5 & *buttonData.buttons) != 0 )
    v19 = v4->cursorHintRange != USE_RANGE;
  UseHoldTime = BG_PlayerUse_GetUseHoldTime(HINT_HOLD_DURATION_SHORT);
  v21 = *buttons;
  v33 = UseHoldTime;
  if ( (*buttons & 0x1000000000000000i64) != 0 )
  {
    if ( !v30 )
    {
      if ( (v21 & v34) == 0 )
        goto LABEL_99;
      goto LABEL_85;
    }
    if ( (*(_BYTE *)buttonData.oldbuttons & 0x20) == 0 || (v21 & 0x20) != 0 )
    {
      v22 = buttonData.useHoldTime;
LABEL_64:
      if ( (*buttonData.oldbuttons & 0x20) != 0 || (*(_BYTE *)buttons & 0x20) == 0 )
      {
        if ( (*buttonData.oldbuttons & 0x20) != 0 && (*(_BYTE *)buttons & 0x20) != 0 )
        {
          if ( UsableHandle::isDefined(useHoldEntity) )
          {
            if ( (unsigned int)G_PlayerUse_GetHoldDuration(playerEnt, useHoldEntity) )
            {
              G_PlayerUse_ActivateHoldCmd(playerEnt, v5, outTaskQueue, &buttonData, 0);
              useHoldEntity = buttonData.useHoldEntity;
              goto LABEL_99;
            }
          }
          else if ( (*(_DWORD *)buttons & 0x10000000) != 0 )
          {
            goto LABEL_99;
          }
          if ( level.time - *v22 >= v33 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x34u) )
          {
            GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0);
            return;
          }
        }
LABEL_99:
        if ( v19 )
LABEL_100:
          UsableHandle::setEntFromWorker(useHoldEntity, NULL);
LABEL_101:
        *buttonData.useButtonDone = 1;
        return;
      }
      v25 = G_PlayerUse_ActivateCmd(playerEnt, outTaskQueue, &buttonData);
      if ( UsableHandle::isDefined(useHoldEntity) )
      {
        HoldDuration = G_PlayerUse_GetHoldDuration(playerEnt, useHoldEntity);
        if ( v25 && HoldDuration == 3 )
          G_PlayerUse_ActivateHoldCmd(playerEnt, v5, outTaskQueue, &buttonData, 1);
      }
      else
      {
        *v22 = level.time;
      }
      return;
    }
    if ( UsableHandle::isDefined(useHoldEntity) && (unsigned int)G_PlayerUse_GetHoldDuration(playerEnt, useHoldEntity) )
    {
      G_PlayerUse_ActivateHoldCmd(playerEnt, v5, outTaskQueue, &buttonData, 0);
      v22 = buttonData.useHoldTime;
      useHoldEntity = buttonData.useHoldEntity;
      buttons = buttonData.buttons;
      *buttonData.useHoldTime = 0;
      goto LABEL_64;
    }
    v22 = buttonData.useHoldTime;
    if ( level.time - *buttonData.useHoldTime >= v33 )
    {
      if ( (*(_DWORD *)buttonData.oldbuttons & 0x10000000) == 0 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x34u) )
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0);
      goto LABEL_64;
    }
    v31 = G_PlayerUse_ActivateCmd(playerEnt, outTaskQueue, &buttonData);
    if ( UsableHandle::isDefined(useHoldEntity) )
    {
      v23 = G_PlayerUse_GetHoldDuration(playerEnt, useHoldEntity);
      if ( v31 && !v23 )
      {
        G_PlayerUse_ActivateHoldCmd(playerEnt, v5, outTaskQueue, &buttonData, 1);
        v22 = buttonData.useHoldTime;
        useHoldEntity = buttonData.useHoldEntity;
        buttons = buttonData.buttons;
        *buttonData.useHoldTime = 0;
        goto LABEL_64;
      }
      if ( (*buttons & 0x2000000000000000i64) == 0 )
        goto LABEL_59;
      v24 = v23 == 3;
    }
    else
    {
      v24 = (*buttons & 0x2000000000000000i64) == 0;
    }
    if ( !v24 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x34u) )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0);
LABEL_59:
    *v22 = 0;
    goto LABEL_64;
  }
  if ( !v30 || !UsableHandle::isDefined(useHoldEntity) || (*(_BYTE *)buttonData.oldbuttons & 0x20) == 0 || (*(_BYTE *)buttons & 0x20) != 0 || (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0), v19) )
  {
LABEL_85:
    v27 = 0;
    if ( !v19 && (v5 & *buttonData.latched_buttons) != 0 )
      v27 = G_PlayerUse_ActivateCmd(playerEnt, outTaskQueue, &buttonData);
    if ( UsableHandle::isDefined(useHoldEntity) || v27 )
    {
      if ( !v19 && (v5 & *buttons) != 0 )
      {
        G_PlayerUse_ActivateHoldCmd(playerEnt, v5, outTaskQueue, &buttonData, 0);
        goto LABEL_101;
      }
    }
    else
    {
      if ( (*(_BYTE *)buttonData.latched_buttons & 0x20) != 0 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x34u) )
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0);
      if ( !v19 )
      {
        *buttonData.useHoldTime = 0;
        return;
      }
    }
    *buttonData.useHoldTime = 0;
    goto LABEL_99;
  }
}

/*
==============
G_PlayerUse_UpdateCursorControlLock
==============
*/
void G_PlayerUse_UpdateCursorControlLock(gentity_s *player)
{
  gclient_s *client; 
  int pm_type; 
  char v10; 
  char v11; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2701, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  client = player->client;
  if ( client )
  {
    pm_type = client->ps.pm_type;
    if ( pm_type != 1 && pm_type != 8 )
    {
      _RSI = DCONST_DVARMPFLT_cursorHintControlLockExitTimeout;
      __asm
      {
        vmovaps [rsp+58h+var_18], xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm6, xmm0, cs:__real@3a83126f
      }
      if ( !DCONST_DVARMPFLT_cursorHintControlLockExitTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cursorHintControlLockExitTimeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm
      {
        vcomiss xmm6, dword ptr [rsi+28h]
        vmovaps xmm6, [rsp+58h+var_18]
      }
      if ( client->ps.cursorHintRange || client->ps.cursorHint == HINT_NONE )
      {
        if ( v10 | v11 )
          return;
      }
      else if ( (player->client->sess.cmd.buttons & 0x40000028) != 0 )
      {
        return;
      }
      if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
        __debugbreak();
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Eu);
    }
  }
}

/*
==============
G_PlayerUse_UpdateCursorHints
==============
*/
void G_PlayerUse_UpdateCursorHints(gentity_s *player)
{
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2676, ASSERT_TYPE_ASSERT, "( player != nullptr )", (const char *)&queryFormat, "player != nullptr") )
    __debugbreak();
  if ( G_PlayerUse_ProcessUseList(player) )
  {
    G_PlayerUse_ProcessHintEntity(player);
    G_PlayerUse_ProcessAutoUseEntities(player);
  }
}

/*
==============
G_PlayerUse_UpdateScriptableVehiclesCollect
==============
*/
__int64 G_PlayerUse_UpdateScriptableVehiclesCollect(const gentity_s *const player, unsigned __int16 *vehicleList, const unsigned __int8 vehicleListCapacitiy)
{
  unsigned __int8 v6; 
  vec3_t searchMax; 
  vec3_t searchMin; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2232, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName, -2i64) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2233, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( !vehicleList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2234, ASSERT_TYPE_ASSERT, "( vehicleList )", (const char *)&queryFormat, "vehicleList") )
    __debugbreak();
  DebugWipe(vehicleList, 2i64 * vehicleListCapacitiy);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_PlayerUse_UpdateVehicles");
  if ( G_Vehicle_CanPlayerEnterVehicle(player) )
  {
    _RAX = player->client;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+30h]
      vmovss  xmm3, cs:__real@43960000
      vsubss  xmm0, xmm0, xmm3
      vmovss  dword ptr [rsp+88h+searchMin], xmm0
      vmovss  xmm1, dword ptr [rax+34h]
      vsubss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rsp+88h+searchMin+4], xmm2
      vmovss  xmm0, dword ptr [rax+38h]
      vsubss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rsp+88h+searchMin+8], xmm1
      vaddss  xmm1, xmm3, dword ptr [rax+30h]
      vmovss  dword ptr [rsp+88h+searchMax], xmm1
      vaddss  xmm0, xmm3, dword ptr [rax+34h]
      vmovss  dword ptr [rsp+88h+searchMax+4], xmm0
      vaddss  xmm2, xmm3, dword ptr [rax+38h]
      vmovss  dword ptr [rsp+88h+searchMax+8], xmm2
    }
    v6 = G_PlayerUse_CollectNearbyUsableVehicles(player, vehicleList, vehicleListCapacitiy, &searchMin, &searchMax);
  }
  else
  {
    v6 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v6;
}

/*
==============
G_PlayerUse_UpdateScriptableVehiclesNotify
==============
*/
void G_PlayerUse_UpdateScriptableVehiclesNotify(const gentity_s *const player, const unsigned __int16 *entityList, const unsigned __int8 entityCount)
{
  __int64 v3; 
  scrContext_t *v6; 

  LOBYTE(v3) = entityCount;
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2107, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !entityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2108, ASSERT_TYPE_ASSERT, "( entityList )", (const char *)&queryFormat, "entityList") )
    __debugbreak();
  if ( !(_BYTE)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 2109, ASSERT_TYPE_ASSERT, "( entityCount > 0 )", (const char *)&queryFormat, "entityCount > 0") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_PlayerUse_UpdateVehiclesNotify");
  v6 = ScriptContext_Server();
  Scr_MakeArray(v6);
  if ( (_BYTE)v3 )
  {
    v3 = (unsigned __int8)v3;
    do
    {
      Scr_AddEntityNum(v6, *entityList, ENTITY_CLASS_GENTITY);
      Scr_AddArray(v6);
      ++entityList;
      --v3;
    }
    while ( v3 );
  }
  GScr_Notify(player, scr_const.update_vehicle_usability, 1u);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerUse_UseEntity
==============
*/
void G_PlayerUse_UseEntity(gentity_s *playerEnt, gentity_s *useEnt)
{
  signed __int64 v5; 
  GameScriptData *GameScriptDataCommon; 
  entityType_s eType; 
  void (__fastcall *use)(gentity_s *, gentity_s *, gentity_s *); 
  void (__fastcall *touch)(gentity_s *, gentity_s *, int); 
  __int16 EntityIndex; 
  scrContext_t *v11; 
  unsigned int v12; 
  playerState_s *EntityPlayerState; 
  gentity_s *v15; 
  unsigned __int64 clientNum; 
  __int64 v17; 
  __int64 v18; 
  vec3_t origin; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 342, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !useEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 343, ASSERT_TYPE_ASSERT, "( useEnt )", (const char *)&queryFormat, "useEnt") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v5 = useEnt - g_entities;
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v17) = useEnt - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, 2048) )
      __debugbreak();
  }
  v5 = (__int16)v5;
  if ( (unsigned int)(__int16)v5 >= 0x800 )
  {
    LODWORD(v18) = 2048;
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 344, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( useEnt ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( useEnt ) )") )
    __debugbreak();
  GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
  if ( !GameScriptDataCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 347, ASSERT_TYPE_ASSERT, "( gScrData )", (const char *)&queryFormat, "gScrData") )
    __debugbreak();
  eType = useEnt->s.eType;
  if ( (useEnt->hint.flags & 0x10) == 0 && eType == ET_MISSILE || eType == ET_ITEM || (useEnt->flags.m_flags[0] & 0x2000000) != 0 )
  {
    GScr_AddEntity(playerEnt);
    GScr_Notify(useEnt, scr_const.touch, 1u);
    useEnt->active = 1;
    touch = G_Main_GetEntHandlerList(useEnt)->touch;
    if ( touch )
      touch(useEnt, playerEnt, 0);
  }
  else
  {
    if ( eType == ET_ACTOR )
    {
      Sentient_StealClaimNode(playerEnt->sentient, useEnt->sentient);
      eType = useEnt->s.eType;
    }
    if ( eType != ET_TURRET || G_Turret_IsUsable(useEnt, playerEnt) )
    {
      GScr_AddEntity(playerEnt);
      GScr_Notify(useEnt, scr_const.trigger, 1u);
      use = G_Main_GetEntHandlerList(useEnt)->use;
      if ( use )
        use(useEnt, playerEnt, playerEnt);
    }
  }
  EntityIndex = G_GetEntityIndex(useEnt);
  if ( G_IsEntityInUse(EntityIndex) )
  {
    v11 = ScriptContext_Server();
    GScr_AddEntity(playerEnt);
    GScr_AddEntity(useEnt);
    v12 = Scr_ExecThread(v11, GameScriptDataCommon->entity_used, 2u);
    if ( Scr_IsThreadAlive(v11, v12) )
      Com_PrintError(1, "entity_used failed to terminate. No waits allowed in this callback tree.\n");
    Scr_FreeThread(v11, v12);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+88h+origin], xmm0
    vmovss  dword ptr [rsp+88h+origin+4], xmm0
    vmovss  dword ptr [rsp+88h+origin+8], xmm0
  }
  EntityPlayerState = G_GetEntityPlayerState(playerEnt);
  v15 = G_Utils_SpawnEventEntity(&origin, 218);
  *(_QWORD *)v15->clientMask.array = -1i64;
  *(_QWORD *)&v15->clientMask.array[2] = -1i64;
  *(_QWORD *)&v15->clientMask.array[4] = -1i64;
  v15->clientMask.array[6] = -1;
  clientNum = (unsigned int)EntityPlayerState->clientNum;
  if ( (unsigned int)clientNum >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", clientNum, 224) )
    __debugbreak();
  v15->clientMask.array[clientNum >> 5] &= ~(0x80000000 >> (clientNum & 0x1F));
}

/*
==============
G_PlayerUse_UseScriptable
==============
*/
void G_PlayerUse_UseScriptable(const gentity_s *playerEnt, const unsigned int useIndex, const unsigned __int8 useData, const unsigned int usableUseCount, const bool bAutoUse)
{
  unsigned int v9; 
  const ScriptableStateUsableDef *PartStateUsableDef; 
  GameScriptData *GameScriptDataCommon; 
  scr_string_t PartName; 
  scr_string_t v13; 
  scrContext_t *v14; 
  unsigned int v15; 
  scr_string_t out_stateName; 
  __int64 v17; 
  int v18; 
  __int64 v19; 

  v17 = -2i64;
  v18 = 42;
  v19 = 0i64;
  SV_Profile_BeginEvent(SVPROF_CLIENT_USE_SCRIPT);
  if ( ScriptableSv_GetInstanceInUse(useIndex) )
  {
    if ( ScriptableSv_GetInstanceUseCount(useIndex) == usableUseCount )
    {
      v9 = useData;
      if ( ScriptableSv_GetPartIsUsable(useIndex, useData) )
      {
        if ( G_Door_ScriptableIsDoor(useIndex) )
        {
          G_Door_Interact(playerEnt->client, useIndex, useData);
        }
        else
        {
          PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(useIndex, useData);
          if ( !PartStateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 285, ASSERT_TYPE_ASSERT, "( ( usablePartDef != nullptr ) )", "%s\n\t( usablePartDef ) = %p", "( usablePartDef != nullptr )", NULL) )
            __debugbreak();
          if ( PartStateUsableDef->gotoNextStateOnUse )
          {
            ScriptableSv_AdvanceToNextState(useIndex, v9);
          }
          else
          {
            GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
            if ( !GameScriptDataCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 293, ASSERT_TYPE_ASSERT, "( gScrData )", (const char *)&queryFormat, "gScrData") )
              __debugbreak();
            PartName = ScriptableSv_GetPartName(useIndex, v9);
            v13 = PartName;
            out_stateName = 0;
            if ( PartName )
              ScriptableSv_GetPartScriptedState(useIndex, PartName, &out_stateName);
            v14 = ScriptContext_Server();
            Scr_AddBool(v14, bAutoUse);
            GScr_AddEntity(playerEnt);
            if ( out_stateName )
              Scr_AddConstString(v14, out_stateName);
            else
              Scr_AddUndefined(v14);
            if ( v13 )
              Scr_AddConstString(v14, v13);
            else
              Scr_AddUndefined(v14);
            Scr_AddEntityNum(v14, useIndex, ENTITY_CLASS_SCRIPTABLE);
            v15 = Scr_ExecThread(v14, GameScriptDataCommon->scriptable_used, 5u);
            if ( Scr_IsThreadAlive(v14, v15) )
              Com_PrintError(1, "scriptable_used failed to terminate. No waits allowed in this callback tree.\n");
            Scr_FreeThread(v14, v15);
          }
        }
      }
      else
      {
        Com_PrintWarning(34, "G_PlayerUse_UseScriptable: Player %i: Usable scriptable %i is no longer in a usable state.\n", (unsigned int)playerEnt->s.number, useIndex);
      }
    }
    else
    {
      Com_PrintWarning(34, "G_PlayerUse_UseScriptable: Player %i: Usable scriptable %i has been re-used and is no longer valid.\n", (unsigned int)playerEnt->s.number, useIndex);
    }
  }
  else
  {
    Com_PrintWarning(34, "G_PlayerUse_UseScriptable: Player %i: Usable scriptable %i has been deleted and is no longer valid.\n", (unsigned int)playerEnt->s.number, useIndex);
  }
  SV_Profile_EndEvent(SVPROF_CLIENT_USE_SCRIPT);
}

/*
==============
G_PlayerUse_VehicleExitCallback
==============
*/
void G_PlayerUse_VehicleExitCallback(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  unsigned int *ParameterInternal; 
  gentity_s *v5; 
  __int64 v6; 
  __int64 v7; 
  char *fmt; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 427, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use.cpp", 428, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (unsigned int *)GClientTaskQueue::GetParameterInternal(outputQueue, 8u, 4u);
  v5 = G_Vehicle_IsUnusable(playerEnt);
  v6 = *ParameterInternal;
  if ( v5 )
  {
    if ( v5->s.number == (_DWORD)v6 )
    {
      v7 = ParameterInternal[1];
      if ( v5->useCount == (_DWORD)v7 )
      {
        G_PlayerUse_UseEntity(playerEnt, v5);
      }
      else
      {
        LODWORD(fmt) = v5->useCount;
        Com_PrintWarning(34, "G_PlayerUse_VehicleExitCallback: Player %i:Vehicle entity was re-used between the time it was queued (%i) and executed (%i).\n", (unsigned int)playerEnt->s.number, v7, fmt);
      }
    }
    else
    {
      LODWORD(fmt) = v5->s.number;
      Com_PrintWarning(34, "G_PlayerUse_VehicleExitCallback: Player %i:Vehicle entity changed between the time it was queued (%i) and executed (%i).\n", (unsigned int)playerEnt->s.number, v6, fmt);
    }
  }
  else
  {
    Com_PrintWarning(34, "G_PlayerUse_VehicleExitCallback: Player %i: Vehicle entity changed between the time it was queued (%i) and executed (null).\n", (unsigned int)playerEnt->s.number, v6);
  }
}

/*
==============
G_PlayerUse_Write
==============
*/
void G_PlayerUse_Write(MemoryFile *memFile)
{
  Sys_ProfBeginNamedEvent(0xFFFFA500, "G_PlayerUse_Write");
  UsableWorld_Write(memFile);
  Sys_ProfEndNamedEvent();
}

