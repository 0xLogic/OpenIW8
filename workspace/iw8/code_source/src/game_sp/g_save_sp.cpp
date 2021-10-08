/*
==============
G_SaveSP_CommitSavedGame
==============
*/

bool __fastcall G_SaveSP_CommitSavedGame(int saveId)
{
  return ?G_SaveSP_CommitSavedGame@@YA_NH@Z(saveId);
}

/*
==============
G_SaveSP_GenerateCodePosMap
==============
*/

int __fastcall G_SaveSP_GenerateCodePosMap()
{
  return ?G_SaveSP_GenerateCodePosMap@@YAHXZ();
}

/*
==============
G_SaveSP_LoadCanonicalStrings
==============
*/

void G_SaveSP_LoadCanonicalStrings(void)
{
  ?G_SaveSP_LoadCanonicalStrings@@YAXXZ();
}

/*
==============
GSaveSP::ScrFreeEntityFields
==============
*/

void __fastcall GSaveSP::ScrFreeEntityFields(GSaveSP *this, gentity_s *ent)
{
  ?ScrFreeEntityFields@GSaveSP@@UEBAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
G_SaveSP_ScrFreeActorFields
==============
*/

void __fastcall G_SaveSP_ScrFreeActorFields(actor_s *pActor)
{
  ?G_SaveSP_ScrFreeActorFields@@YAXPEAUactor_s@@@Z(pActor);
}

/*
==============
G_SaveSP_GetSaveGameGetEntityFields
==============
*/

const saveField_t *__fastcall G_SaveSP_GetSaveGameGetEntityFields(int eType)
{
  return ?G_SaveSP_GetSaveGameGetEntityFields@@YAPEBUsaveField_t@@H@Z(eType);
}

/*
==============
GSaveSP::ScrFreeSentientFields
==============
*/

void __fastcall GSaveSP::ScrFreeSentientFields(GSaveSP *this, sentient_s *sentient)
{
  ?ScrFreeSentientFields@GSaveSP@@UEBAXPEAUsentient_s@@@Z(this, sentient);
}

/*
==============
G_SaveSP_SecondarySaveGameThread
==============
*/

void __fastcall __noreturn G_SaveSP_SecondarySaveGameThread(unsigned int threadContext)
{
  ?G_SaveSP_SecondarySaveGameThread@@YAXI@Z(threadContext);
}

/*
==============
GSaveSP::ScrFreeClientFields
==============
*/

void __fastcall GSaveSP::ScrFreeClientFields(GSaveSP *this, gclient_s *client)
{
  ?ScrFreeClientFields@GSaveSP@@UEBAXPEAUgclient_s@@@Z(this, client);
}

/*
==============
G_LoadErrorCleanup
==============
*/

int __fastcall G_LoadErrorCleanup()
{
  return ?G_LoadErrorCleanup@@YAHXZ();
}

/*
==============
G_SaveSP_LoadGame
==============
*/

void __fastcall G_SaveSP_LoadGame(int checksum, SaveGame *save)
{
  ?G_SaveSP_LoadGame@@YAXHPEAUSaveGame@@@Z(checksum, save);
}

/*
==============
G_LoadGameOmnvars
==============
*/

void __fastcall G_LoadGameOmnvars(SaveGame *save)
{
  ?G_LoadGameOmnvars@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveSP_WriteVehicleStruct
==============
*/

void __fastcall G_SaveSP_WriteVehicleStruct(MemoryFile *memFile, const saveField_t *saveFields, const Vehicle *veh)
{
  ?G_SaveSP_WriteVehicleStruct@@YAXPEAUMemoryFile@@PEBUsaveField_t@@PEBUVehicle@@@Z(memFile, saveFields, veh);
}

/*
==============
G_SaveSP_SaveGame
==============
*/

int __fastcall G_SaveSP_SaveGame(const PendingSave *pendingSave, int checksum)
{
  return ?G_SaveSP_SaveGame@@YAHPEBUPendingSave@@H@Z(pendingSave, checksum);
}

/*
==============
G_SaveSP_SaveState
==============
*/

void __fastcall G_SaveSP_SaveState(bool savegame, MemoryFile *memFile)
{
  ?G_SaveSP_SaveState@@YAX_NPEAUMemoryFile@@@Z(savegame, memFile);
}

/*
==============
SaveGameTrackingInitialize
==============
*/

void __fastcall SaveGameTrackingInitialize(MemoryFile *memoryFile)
{
  ?SaveGameTrackingInitialize@@YAXPEAUMemoryFile@@@Z(memoryFile);
}

/*
==============
G_SaveSP_SetPendingLoadName
==============
*/

void __fastcall G_SaveSP_SetPendingLoadName(const char *filename)
{
  ?G_SaveSP_SetPendingLoadName@@YAXPEBD@Z(filename);
}

/*
==============
G_SaveSP_ReadVehicleStruct
==============
*/

void __fastcall G_SaveSP_ReadVehicleStruct(SaveGame *save, const saveField_t *saveFields, Vehicle *veh)
{
  ?G_SaveSP_ReadVehicleStruct@@YAXPEAUSaveGame@@PEBUsaveField_t@@PEAUVehicle@@@Z(save, saveFields, veh);
}

/*
==============
G_SaveSP_UpdateAllEntities
==============
*/

void G_SaveSP_UpdateAllEntities(void)
{
  ?G_SaveSP_UpdateAllEntities@@YAXXZ();
}

/*
==============
GSaveSP::SetLastSaveName
==============
*/

void __fastcall GSaveSP::SetLastSaveName(GSaveSP *this, const char *fileName)
{
  ?SetLastSaveName@GSaveSP@@UEBAXPEBD@Z(this, fileName);
}

/*
==============
G_Save_DateStr
==============
*/

char *__fastcall G_Save_DateStr()
{
  return ?G_Save_DateStr@@YAPEADXZ();
}

/*
==============
G_ClearConfigstrings
==============
*/

void __fastcall G_ClearConfigstrings(unsigned int iFirst, int iCount)
{
  ?G_ClearConfigstrings@@YAXIH@Z(iFirst, iCount);
}

/*
==============
G_SaveSP_ReadTurretStructs
==============
*/

void __fastcall G_SaveSP_ReadTurretStructs(SaveGame *save, const saveField_t *turretFields, GTurretData *turret, const saveField_t *turretSpFields, GTurretDataSP *turretSp)
{
  ?G_SaveSP_ReadTurretStructs@@YAXPEAUSaveGame@@PEBUsaveField_t@@PEAUGTurretData@@1PEAUGTurretDataSP@@@Z(save, turretFields, turret, turretSpFields, turretSp);
}

/*
==============
SaveGameTrackingMarker
==============
*/

void __fastcall SaveGameTrackingMarker(MemoryFile *memoryFile, const char *identifier)
{
  ?SaveGameTrackingMarker@@YAXPEAUMemoryFile@@PEBD@Z(memoryFile, identifier);
}

/*
==============
G_SaveSP_ClearAllConfigstrings
==============
*/

void G_SaveSP_ClearAllConfigstrings(void)
{
  ?G_SaveSP_ClearAllConfigstrings@@YAXXZ();
}

/*
==============
G_SaveSP_PreLoadGame
==============
*/

int __fastcall G_SaveSP_PreLoadGame(int checksum, int *useLoadedScripts, int useSavedScripts, SaveGame **save)
{
  return ?G_SaveSP_PreLoadGame@@YAHHPEAHHPEAPEAUSaveGame@@@Z(checksum, useLoadedScripts, useSavedScripts, save);
}

/*
==============
G_SaveSP_WriteTurretStructs
==============
*/

void __fastcall G_SaveSP_WriteTurretStructs(MemoryFile *memFile, const saveField_t *turretFields, const GTurretData *turret, const saveField_t *turretSpFields, const GTurretDataSP *turretSp)
{
  ?G_SaveSP_WriteTurretStructs@@YAXPEAUMemoryFile@@PEBUsaveField_t@@PEBUGTurretData@@1PEBUGTurretDataSP@@@Z(memFile, turretFields, turret, turretSpFields, turretSp);
}

/*
==============
ReadCharacterInfo
==============
*/
void ReadCharacterInfo(MemoryFile *memFile, const int clientNum)
{
  __int64 v2; 
  characterInfo_t *v4; 
  XAnimTree *pXAnimTree; 
  int *isWeaponSmoking; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  gentity_s *v10; 
  XAnim_s *Anims; 
  unsigned int Animset; 
  const XAnimTree *v13; 
  XAnimTree *v14; 
  XAnimTree *v15; 

  v2 = clientNum;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1430, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v4 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)v2);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1435, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  pXAnimTree = v4->pXAnimTree;
  memset_0(v4, 0, sizeof(characterInfo_t));
  MemFile_ReadData(memFile, 4ui64, &v4->suitIndex);
  ReadLerpFrame(v4, memFile, &v4->legs);
  ReadLerpFrame(v4, memFile, &v4->torso);
  MemFile_ReadData(memFile, 4ui64, &v4->stanceTransitionTime);
  MemFile_ReadData(memFile, 4ui64, &v4->legsYawTurnTimer);
  MemFile_ReadData(memFile, 4ui64, &v4->legsYawTurnDirection);
  MemFile_ReadData(memFile, 0x7E0ui64, v4->clientConditions);
  MemFile_ReadData(memFile, 4ui64, &v4->fTorsoPitch);
  MemFile_ReadData(memFile, 4ui64, &v4->fWaistPitch);
  MemFile_ReadData(memFile, 4ui64, &v4->offhandShieldDeployed);
  MemFile_ReadData(memFile, 4ui64, &v4->hybridScopeState);
  MemFile_ReadData(memFile, 4ui64, &v4->usingNVG);
  MemFile_ReadData(memFile, 4ui64, &v4->isOnWall);
  MemFile_ReadData(memFile, 4ui64, &v4->animLinkedToType);
  MemFile_ReadData(memFile, 4ui64, &v4->isScriptedSceneAnim);
  MemFile_ReadData(memFile, 4ui64, &v4->enableVehicleOccupancyAnimations);
  MemFile_ReadData(memFile, 4ui64, &v4->isUsingWeaponAltMode);
  MemFile_ReadData(memFile, 4ui64, &v4->linkedEntNum);
  MemFile_ReadData(memFile, 4ui64, &v4->edgeQueryLadderHintNodeCharInfo);
  MemFile_ReadData(memFile, 4ui64, &v4->edgeQueryLadderWidthHintNodeCharInfo);
  isWeaponSmoking = v4->isWeaponSmoking;
  v7 = 2i64;
  do
  {
    MemFile_ReadData(memFile, 4ui64, isWeaponSmoking++);
    --v7;
  }
  while ( v7 );
  G_GameInterface_ReadCharacterInfo(memFile, v4);
  v4->entityNum = v2;
  v4->pXAnimTree = pXAnimTree;
  v4->infoValid = 1;
  v4->nextValid = 1;
  v8 = g_entities[v2].s.animInfo.animData & 1;
  v4->animTreeDirty = 1;
  v4->usingAnimState = v8;
  if ( (int)v2 >= level.maxclients )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 16i64))(*(_QWORD *)&GStatic::ms_gameStatics);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1483, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v10 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v2];
    if ( v10->s.eType == ET_AGENT )
    {
      if ( v4->usingAnimState )
      {
        Anims = BG_AnimationState_GetAnims(&v10->s);
      }
      else if ( PlayerASM_IsEnabled() )
      {
        Animset = BG_PlayerASM_GetAnimset(v4);
        Anims = BG_PlayerASM_GetAnims(Animset);
      }
      else
      {
        Anims = *(XAnim_s **)(v9 + 17712);
      }
      v13 = v4->pXAnimTree;
      if ( !v13 || XAnimGetAnims(v13) != Anims )
      {
        v14 = v4->pXAnimTree;
        if ( v14 )
          Com_XAnimFreeSmallTree(v14);
        v4->pXAnimTree = Com_XAnimCreateSmallTree(Anims, MOVEMENT);
      }
    }
    else
    {
      v15 = v4->pXAnimTree;
      if ( v15 )
      {
        Com_XAnimFreeSmallTree(v15);
        v4->pXAnimTree = NULL;
      }
    }
  }
}

/*
==============
ReadLerpFrame
==============
*/
void ReadLerpFrame(const characterInfo_t *ci, MemoryFile *memFile, lerpFrame_t *lerpFrame)
{
  GStatic *GameStatics; 
  __int64 v7; 
  __int64 suitAnimIndex; 
  __int64 v9; 
  int animation; 
  __int64 v11; 
  __int64 v12; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1364, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 0x58ui64, lerpFrame);
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1367, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    lerpFrame->animation = NULL;
  }
  else if ( lerpFrame->animation )
  {
    GameStatics = GStatic::GetGameStatics();
    v7 = (__int64)GameStatics->GetAnimStatics(GameStatics);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1378, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    suitAnimIndex = lerpFrame->suitAnimIndex;
    if ( (unsigned int)suitAnimIndex >= 4 )
    {
      LODWORD(v11) = lerpFrame->suitAnimIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1381, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v11, 4) )
        __debugbreak();
    }
    v9 = *(_QWORD *)(v7 + 8 * suitAnimIndex);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1384, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
      __debugbreak();
    animation = (int)lerpFrame->animation;
    if ( (unsigned int)(animation - 1) >= 0x1000 )
    {
      LODWORD(v12) = 4096;
      LODWORD(v11) = animation - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1386, ASSERT_TYPE_ASSERT, "(unsigned)( reinterpret_cast<intptr_t> (lerpFrame->animation) - 1 ) < (unsigned)( (1 << (13-1)) )", "reinterpret_cast<intptr_t> (lerpFrame->animation) - 1 doesn't index MAX_MODEL_ANIMATIONS\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    lerpFrame->animation = (const PlayerAnimEntry *)(*(_QWORD *)(v9 + 48) + 104 * (__int64)lerpFrame->animation - 104);
  }
}

/*
==============
WriteCharacterInfo
==============
*/
void WriteCharacterInfo(MemoryFile *memFile, const characterInfo_t *ci)
{
  int *isWeaponSmoking; 
  __int64 v5; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1395, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1396, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  MemFile_WriteData(memFile, 4ui64, &ci->suitIndex);
  WriteLerpFrame(ci, memFile, &ci->legs);
  WriteLerpFrame(ci, memFile, &ci->torso);
  MemFile_WriteData(memFile, 4ui64, &ci->stanceTransitionTime);
  MemFile_WriteData(memFile, 4ui64, &ci->legsYawTurnTimer);
  MemFile_WriteData(memFile, 4ui64, &ci->legsYawTurnDirection);
  MemFile_WriteData(memFile, 0x7E0ui64, ci->clientConditions);
  MemFile_WriteData(memFile, 4ui64, &ci->fTorsoPitch);
  MemFile_WriteData(memFile, 4ui64, &ci->fWaistPitch);
  MemFile_WriteData(memFile, 4ui64, &ci->offhandShieldDeployed);
  MemFile_WriteData(memFile, 4ui64, &ci->hybridScopeState);
  MemFile_WriteData(memFile, 4ui64, &ci->usingNVG);
  MemFile_WriteData(memFile, 4ui64, &ci->isOnWall);
  MemFile_WriteData(memFile, 4ui64, &ci->animLinkedToType);
  MemFile_WriteData(memFile, 4ui64, &ci->isScriptedSceneAnim);
  MemFile_WriteData(memFile, 4ui64, &ci->enableVehicleOccupancyAnimations);
  MemFile_WriteData(memFile, 4ui64, &ci->isUsingWeaponAltMode);
  MemFile_WriteData(memFile, 4ui64, &ci->linkedEntNum);
  MemFile_WriteData(memFile, 4ui64, &ci->edgeQueryLadderHintNodeCharInfo);
  MemFile_WriteData(memFile, 4ui64, &ci->edgeQueryLadderWidthHintNodeCharInfo);
  isWeaponSmoking = ci->isWeaponSmoking;
  v5 = 2i64;
  do
  {
    MemFile_WriteData(memFile, 4ui64, isWeaponSmoking++);
    --v5;
  }
  while ( v5 );
  G_GameInterface_WriteCharacterInfo(memFile, ci);
}

/*
==============
WriteLerpFrame
==============
*/
void WriteLerpFrame(const characterInfo_t *ci, MemoryFile *memFile, const lerpFrame_t *const lerpFrame)
{
  GStatic *GameStatics; 
  __int64 v11; 
  __int64 suitAnimIndex; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  _BYTE p[64]; 

  _RBX = lerpFrame;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1331, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1332, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups [rsp+0C8h+p], ymm0
    vmovups xmm0, xmmword ptr [rbx+40h]
    vmovups [rsp+0C8h+var_68], ymm1
    vmovsd  xmm1, qword ptr [rbx+50h]
    vmovups [rsp+0C8h+var_48], xmm0
    vmovsd  [rsp+0C8h+var_38], xmm1
  }
  if ( PlayerASM_IsEnabled() )
  {
    *(_QWORD *)&p[24] = 0i64;
  }
  else if ( _RBX->animation )
  {
    GameStatics = GStatic::GetGameStatics();
    v11 = (__int64)GameStatics->GetAnimStatics(GameStatics);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1345, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    suitAnimIndex = _RBX->suitAnimIndex;
    if ( (unsigned int)suitAnimIndex >= 4 )
    {
      LODWORD(v14) = _RBX->suitAnimIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1348, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v14, 4) )
        __debugbreak();
    }
    v13 = *(_QWORD *)(v11 + 8 * suitAnimIndex);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1351, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
      __debugbreak();
    if ( (unsigned int)(((__int64)_RBX->animation - *(_QWORD *)(v13 + 48)) / 104) >= 0x1000 )
    {
      LODWORD(v15) = 4096;
      LODWORD(v14) = ((__int64)_RBX->animation - *(_QWORD *)(v13 + 48)) / 104;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1353, ASSERT_TYPE_ASSERT, "(unsigned)( lerpFrame->animation - playerAnim->animations ) < (unsigned)( (1 << (13-1)) )", "lerpFrame->animation - playerAnim->animations doesn't index MAX_MODEL_ANIMATIONS\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    *(_QWORD *)&p[24] = ((__int64)_RBX->animation - *(_QWORD *)(v13 + 48)) / 104 + 1;
  }
  MemFile_WriteData(memFile, 0x58ui64, p);
}

/*
==============
G_ClearConfigstrings
==============
*/
void G_ClearConfigstrings(unsigned int iFirst, int iCount)
{
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 

  if ( iCount > 0 )
  {
    v3 = iFirst;
    v4 = (unsigned int)iCount;
    do
    {
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( iFirst >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v5) = iFirst;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v5) )
          __debugbreak();
      }
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( v3 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v5) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v5) )
          __debugbreak();
      }
      SV_SetConfigstring(v3++, (const char *)&queryFormat.fmt + 3);
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
G_LoadConfigstrings
==============
*/
void G_LoadConfigstrings(unsigned int iFirst, int iCount, SaveGame *save)
{
  __int64 v3; 
  unsigned int v6; 
  MemoryFile *MemoryFile; 
  __int64 v8; 
  char psz[1024]; 

  v3 = (unsigned int)iCount;
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1800, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( SvGameGlobals::GetSvGameGlobalsCommon()->restarting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1806, ASSERT_TYPE_ASSERT, "( !sv->restarting )", (const char *)&queryFormat, "!sv->restarting") )
    __debugbreak();
  if ( (int)v3 > 0 )
  {
    v6 = iFirst;
    do
    {
      MemoryFile = SaveMemory_GetMemoryFile(save);
      G_SaveField_ReadCStyleString(psz, 1024, MemoryFile);
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( iFirst >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v8) = iFirst;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v8) )
          __debugbreak();
      }
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( v6 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v8) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v8) )
          __debugbreak();
      }
      SV_SetConfigstring(v6++, psz);
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
G_LoadErrorCleanup
==============
*/
__int64 G_LoadErrorCleanup()
{
  SaveGame *SaveHandle; 
  SaveGame *v1; 

  SaveHandle = G_SaveMemorySP_GetSaveHandle(SAVE_GAME_HANDLE);
  if ( !G_SaveMemorySP_IsLoading(SaveHandle) )
  {
    v1 = G_SaveMemorySP_GetSaveHandle(SAVE_LAST_COMMITTED);
    if ( !G_SaveMemorySP_IsLoading(v1) )
      return 0i64;
  }
  Com_InitDObj();
  if ( (_BYTE)GSaveMemory::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savememory_sp.h", 131, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
    __debugbreak();
  GSaveMemory::ms_gSaveMemory->CleanupSaveMemory(GSaveMemory::ms_gSaveMemory);
  return 1i64;
}

/*
==============
G_LoadGameOmnvars
==============
*/
void G_LoadGameOmnvars(SaveGame *save)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  char *fmt; 
  unsigned int p; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3716, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( save->saveState != LOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3717, ASSERT_TYPE_ASSERT, "(save->saveState == LOADING)", (const char *)&queryFormat, "save->saveState == LOADING") )
    __debugbreak();
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  v2 = BG_Omnvar_PerGameCount();
  v3 = p;
  if ( p != v2 )
  {
    LODWORD(fmt) = BG_Omnvar_PerGameCount();
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435BD60, 497i64, v3, fmt);
  }
  v4 = BG_Omnvar_PerGameCount();
  SaveMemory_LoadRead(level.gameOmnvars, 8 * v4, save);
}

/*
==============
G_LoadInitConfigstrings
==============
*/
void G_LoadInitConfigstrings(SaveGame *save)
{
  unsigned __int16 *modelMap; 
  MemoryFile *MemoryFile; 
  unsigned __int16 CompositeModelIndex; 
  char psz[1024]; 

  if ( !save )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1927, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1829, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
      __debugbreak();
  }
  modelMap = level.modelMap;
  do
  {
    MemoryFile = SaveMemory_GetMemoryFile(save);
    G_SaveField_ReadCStyleString(psz, 1024, MemoryFile);
    if ( !psz[0] )
    {
LABEL_19:
      CompositeModelIndex = 0;
      goto LABEL_20;
    }
    if ( G_Utils_IsNameCompositeModel(psz) )
    {
      if ( !psz[0] )
        goto LABEL_19;
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      CompositeModelIndex = GConfigStrings::GetCompositeModelIndex(GConfigStrings::ms_gConfigStrings, psz);
    }
    else
    {
      if ( !psz[0] )
        goto LABEL_19;
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      CompositeModelIndex = GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, psz);
    }
LABEL_20:
    *modelMap++ = CompositeModelIndex;
  }
  while ( (__int64)modelMap < (__int64)&level.priorityNodeBias );
  G_LoadConfigstrings(0xB6Eu, 1024, save);
  G_LoadConfigstrings(0x96Eu, 512, save);
  G_LoadConfigstrings(0x810u, 350, save);
  G_LoadConfigstrings(0xFF3u, 2048, save);
  G_LoadConfigstrings(0xFEEu, 1, save);
  G_LoadConfigstrings(0, 1, save);
  G_LoadConfigstrings(0xFF0u, 1, save);
  G_LoadConfigstrings(0xFF1u, 1, save);
  G_LoadConfigstrings(0xFF2u, 1, save);
  G_LoadConfigstrings(9u, 1, save);
  G_LoadConfigstrings(0xAu, 1, save);
  G_LoadConfigstrings(0xBu, 1, save);
  G_LoadConfigstrings(0xFu, 1, save);
  G_LoadConfigstrings(0xEu, 1, save);
  G_LoadConfigstrings(0xCu, 1, save);
  G_LoadConfigstrings(0xFEFu, 1, save);
}

/*
==============
G_LoadMainState
==============
*/
void G_LoadMainState(SaveGame *save)
{
  LocalClientNum_t OnlyLocalClientNum; 
  scrContext_t *v7; 
  MemoryFile *v8; 
  GAntiLagSP *AntiLagSP; 
  MemoryFile *MemoryFile; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  BgWeaponMap *v16; 
  int v17; 
  gentity_s *v18; 
  MemoryFile *v19; 
  const saveField_t *v20; 
  MemoryFile *v21; 
  unsigned int v23; 
  int v24; 
  gclient_s *v25; 
  GHandler *Handler; 
  const playerState_s *EntityPlayerState; 
  GWeaponMap *Instance; 
  const Weapon *v37; 
  int viewmodelIndex; 
  const Weapon *v39; 
  const XModel *Model; 
  int i; 
  actor_s *v46; 
  sentient_info_t *sentientInfo; 
  MemoryFile *v48; 
  MemoryFile *v49; 
  bool *transientLoaded; 
  int v51; 
  int v52; 
  outline_data_t *v53; 
  SaveGame *v54; 
  int v55; 
  int j; 
  int v58; 
  MemoryFile *v60; 
  threat_bias_t *v61; 
  __int64 v62; 
  int (*threatTable)[24]; 
  __int64 v64; 
  __int64 v65; 
  const saveField_t *v66; 
  unsigned int *p_type; 
  const char *Field; 
  Ai_Asm *v69; 
  unsigned int k; 
  unsigned int v71; 
  bool *transientVisibility; 
  int v73; 
  __int64 v74; 
  __int64 v75; 
  gentity_s *v76; 
  unsigned __int16 v77; 
  unsigned int v78; 
  const char *v79; 
  DObj *ServerDObjForEntnum; 
  DObj *v81; 
  DObjPartBits *p_partBits; 
  __int64 v83; 
  entityType_s eType; 
  SaveGame *v85; 
  __int64 v86; 
  gclient_s *v88; 
  GWeaponMap *v89; 
  char *fmt; 
  float fmta; 
  __int64 zoomFactor; 
  float zoomFactora; 
  float zoomFactorb; 
  Weapon *weapon; 
  float weapona; 
  int value; 
  char v101[4]; 
  unsigned int p; 
  char buffer[4]; 
  MemoryFile *memFile; 
  LocalClientNum_t v105; 
  int SpClientNum; 
  BgWeaponMap *src; 
  SaveGame *savea; 
  scrContext_t *scrContext; 
  vec3_t angles; 
  vec3_t v111; 
  vec3_t origin; 
  DObjPartBits partBits; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  savea = save;
  SpClientNum = SvClientSP::GetSpClientNum();
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v105 = OnlyLocalClientNum;
  v7 = ScriptContext_Server();
  scrContext = v7;
  GStatic::SetActiveStatics();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3742, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  G_MainSP_FreeEntities();
  G_FXEntitiesFreeAll();
  GScr_SoundEntity_FreeAll(v7);
  G_HudElem_DestroyAll();
  PIP_DestroyAll();
  G_Spawner_Free();
  G_FreePathnodesScriptInfo();
  G_VehiclePathScr_FreeScriptInfo();
  ScriptableSv_Shutdown();
  GScr_Weapon_Shutdown(v7, 1);
  AICommonInterface::ClearThreatBiasGroups();
  Cmd_UnregisterAllNotifications();
  memset_0(level.outlineData, 0, sizeof(level.outlineData));
  Scr_ShutdownSystem(v7, 1u, 1, 1);
  GStatic::ClearActiveStatics();
  memFile = SaveMemory_GetMemoryFile(save);
  level.initializing = 1;
  v8 = memFile;
  G_SaveMemorySP_MoveToSegment(save, 1);
  SaveMemory_LoadRead(&level.time, 4, save);
  SaveMemory_LoadRead(&level.frameDuration, 4, save);
  level.previousTime = level.time - level.frameDuration;
  SaveMemory_LoadRead(&level.framenum, 4, save);
  SaveMemory_LoadRead(&level.framePos, 4, save);
  SaveMemory_LoadRead(&level.demoSaveGame, 4, save);
  AntiLagSP = GAntiLagSP::GetAntiLagSP();
  GAntiLagSP::ArchiveSaveGame(AntiLagSP, memFile);
  SaveMemory_LoadRead(&g_slowmoCommon, 52, save);
  SaveMemory_LoadRead(&level.soundAliasFirst, 2, save);
  SaveMemory_LoadRead(&level.soundAliasLast, 2, save);
  SaveMemory_LoadRead(&level.changelevel, 4, save);
  SaveMemory_LoadRead(&level.exitTime, 4, save);
  SaveMemory_LoadRead(&level.savepersist, 4, save);
  SaveMemory_LoadRead(&level.bMissionSuccess, 4, save);
  SaveMemory_LoadRead(&level.bMissionFailed, 4, save);
  SaveMemory_LoadRead(&level.scriptPrintChannel, 4, save);
  SaveMemory_LoadRead(g_nextMap, 64, save);
  SaveMemory_LoadRead(&level.compassMapUpperLeft, 8, save);
  SaveMemory_LoadRead(&level.compassMapWorldSize, 8, save);
  SaveMemory_LoadRead(&level.compassNorth, 8, save);
  SaveMemory_LoadRead(&level.hudElemLastAssignedSoundID, 4, save);
  if ( level.bPlayerIgnoreRadiusDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3806, ASSERT_TYPE_ASSERT, "(!level.bPlayerIgnoreRadiusDamage)", (const char *)&queryFormat, "!level.bPlayerIgnoreRadiusDamage") )
    __debugbreak();
  SaveMemory_LoadRead(&level.bPlayerIgnoreRadiusDamageLatched, 4, save);
  SaveMemory_LoadRead(buffer, 1, save);
  SaveMemory_LoadRead(&origin, 12, save);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( buffer[0] )
  {
    __asm
    {
      vmovss  dword ptr [rsp+110h+weapon], xmm7
      vmovss  [rsp+110h+zoomFactor], xmm6
    }
    CL_StreamViews_SetManualView(COUNT|DODGE, OnlyLocalClientNum, &origin, &vec3_origin, &vec3_origin, zoomFactora, weapona, 0);
  }
  G_LoadInitConfigstrings(save);
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1972, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  MemoryFile = SaveMemory_GetMemoryFile(save);
  Dvar_LoadDvars(MemoryFile);
  G_HudElem_Load(v8);
  G_HeadIcons_Load(v8);
  SaveMemory_LoadRead(level.targetMarkerGroups, 88000, save);
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3716, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( save->saveState != LOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3717, ASSERT_TYPE_ASSERT, "(save->saveState == LOADING)", (const char *)&queryFormat, "save->saveState == LOADING") )
    __debugbreak();
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  v13 = BG_Omnvar_PerGameCount();
  v14 = p;
  if ( p != v13 )
  {
    LODWORD(fmt) = BG_Omnvar_PerGameCount();
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435BD60, 497i64, v14, fmt);
  }
  v15 = BG_Omnvar_PerGameCount();
  SaveMemory_LoadRead(level.gameOmnvars, 8 * v15, save);
  SaveMemory_LoadRead(&level.fFogOpaqueDist, 4, save);
  SaveMemory_LoadRead(&level.fFogOpaqueDistSqrd, 4, save);
  SaveMemory_LoadRead(&level.timeAtLastPause, 4, save);
  SaveMemory_LoadRead(&level.bDrawCompassFriendlies, 4, save);
  SaveMemory_LoadRead(&value, 4, save);
  Dvar_SetInt_Internal(DVARINT_g_player_maxhealth, value);
  AimTargetSP_ReadSaveGame(save);
  SaveMemory_LoadRead(level.localizedStringRefCount, 2048, save);
  SaveMemory_LoadRead(level.transientLoaded, 32, save);
  SaveMemory_LoadRead(level.transientVisibility, 32, save);
  SaveMemory_LoadRead(level.preloadedFiles, 512, save);
  SaveMemory_LoadRead(&level.forceStreamSyncSP, 1, save);
  SaveMemory_LoadRead(&level.umbraGateStates, 48, save);
  G_SaveMemorySP_MoveToSegment(save, 3);
  Scr_LoadPre(v7, v8, 1);
  G_SaveMemorySP_MoveToSegment(save, 2);
  src = GWeaponMap::GetInstance();
  v16 = src;
  GWeaponMap::LoadWeapons((GWeaponMap *)src, v8);
  G_GameInterface_OnLoad(v8);
  ReadSpawnedPathNodes(save);
  G_SaveSP_ReadPathNodes(save);
  if ( level.num_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3894, ASSERT_TYPE_ASSERT, "(!level.num_entities)", (const char *)&queryFormat, "!level.num_entities") )
    __debugbreak();
  SaveMemory_LoadRead(&level.num_entities, 4, save);
  SaveMemory_LoadRead(&value, 4, save);
  v17 = value;
  if ( value >= 0 )
  {
    do
    {
      if ( v17 >= 2048 )
      {
        LODWORD(fmt) = 2048;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1443137E0, 498i64, (unsigned int)v17, fmt);
        v17 = value;
      }
      v18 = &g_entities[v17];
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1347, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      v19 = SaveMemory_GetMemoryFile(save);
      MemFile_ReadData(v19, 1ui64, v101);
      switch ( v101[0] )
      {
        case 6:
          v20 = s_saveSP_gentityScriptMoverFields;
          break;
        case 7:
        case 0xA:
        case 0x14:
        case 0x16:
        case 0x19:
        case 0x1A:
        case 0x1C:
          v20 = s_saveSP_gentityMinimalFields;
          break;
        case 0xC:
        case 0xE:
        case 0xF:
        case 0x10:
          v20 = s_saveSP_gentityVehicleFields;
          break;
        default:
          v20 = s_saveSP_gentityGeneralFields;
          break;
      }
      G_SaveSP_ReadTypeFields_gentity_s_1_(save, v20, v18);
      if ( !v18->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3909, ASSERT_TYPE_ASSERT, "(ent->r.isInUse)", (const char *)&queryFormat, "ent->r.isInUse") )
        __debugbreak();
      g_entityIsInUse[value] = 1;
      SaveMemory_LoadRead(&value, 4, save);
      v17 = value;
    }
    while ( value >= 0 );
    v8 = memFile;
    v16 = src;
  }
  G_PIP_Read(save);
  G_Spawner_Read(save);
  G_LoadFXEntities(save);
  G_LoadSoundEntities(save);
  G_SaveSP_ReadBadPlaces(save);
  G_MotionWarp_Load(save);
  SpeedThresholdLoad(save);
  v21 = SaveMemory_GetMemoryFile(save);
  NavData_Read(v21);
  ScriptableSv_Init(0);
  ScriptableSv_ArchiveState(v8);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr cs:?level@@3Ulevel_locals_t@@A.firstFreeEnt, xmm0; level_locals_t level
  }
  value = 1;
  if ( level.num_entities > 1 )
  {
    v23 = 1;
    do
    {
      if ( v23 >= 0x800 )
      {
        LODWORD(weapon) = 2048;
        LODWORD(zoomFactor) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", zoomFactor, weapon) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v23].r.isInUse != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v23] )
      {
        if ( level.lastFreeEnt )
          level.lastFreeEnt->nextFree = &g_entities[value];
        else
          level.firstFreeEnt = &g_entities[value];
        level.lastFreeEnt = &g_entities[value];
        level.lastFreeEnt->nextFree = NULL;
      }
      v23 = ++value;
    }
    while ( value < level.num_entities );
    v8 = memFile;
    v16 = src;
  }
  SaveMemory_LoadRead(&value, 4, save);
  v24 = value;
  if ( value >= 0 )
  {
    while ( 1 )
    {
      if ( v24 > 1 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435BDF0, 499i64);
        v24 = value;
      }
      v25 = &level.clients[v24];
      if ( v25->sess.connected == CON_DISCONNECTED )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435BE30, 500i64);
      G_SaveSP_ReadClient(v25, save);
      Handler = GHandler::getHandler();
      PM_BuildWeaponAnimArrays(v16, &v25->ps, Handler);
      ReadCharacterInfo_0(v8, value);
      EntityPlayerState = G_GetEntityPlayerState(&g_entities[value]);
      _RBX = EntityPlayerState;
      if ( !EntityPlayerState )
        break;
      if ( !BGVehicles::IsRemoteDrivingVehicle(EntityPlayerState) )
        goto LABEL_65;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+12Ch]
        vmovss  dword ptr [rbp+57h+var_88], xmm0
        vmovss  xmm1, dword ptr [rbx+130h]
        vmovss  dword ptr [rbp+57h+var_88+4], xmm1
        vmovss  xmm0, dword ptr [rbx+134h]
        vmovss  dword ptr [rbp+57h+var_88+8], xmm0
        vmovss  xmm1, dword ptr [rbx+138h]
        vmovss  dword ptr [rbp+57h+angles], xmm1
        vmovss  xmm0, dword ptr [rbx+13Ch]
        vmovss  dword ptr [rbp+57h+angles+4], xmm0
        vmovss  xmm1, dword ptr [rbx+140h]
      }
LABEL_66:
      __asm { vmovss  dword ptr [rbp+57h+angles+8], xmm1 }
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      v37 = BgWeaponMap::GetWeapon(Instance, v25->ps.weapCommon.weaponHandle);
      viewmodelIndex = v25->ps.viewmodelIndex;
      v39 = v37;
      if ( viewmodelIndex )
        Model = G_Utils_GetModel(viewmodelIndex);
      else
        Model = NULL;
      __asm
      {
        vmovss  [rsp+110h+zoomFactor], xmm7
        vmovss  dword ptr [rsp+110h+fmt], xmm6
      }
      CL_StreamViewsSP_SetAutoView(EASE_IN_QUAD, value, &v111, &angles, fmta, zoomFactorb, v39, Model);
      CL_StreamViewsSP_CopyAutoView(EASE_IN_QUAD, LINEAR, value);
      G_HudElemSP_UpdateClient(value);
      SaveMemory_LoadRead(&value, 4, save);
      v24 = value;
      if ( value < 0 )
        goto LABEL_75;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3975, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
LABEL_65:
    _RCX = 1456i64 * value;
    _RAX = g_entities;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rax+130h]
      vmovss  dword ptr [rbp+57h+var_88], xmm0
      vmovss  xmm1, dword ptr [rcx+rax+134h]
      vmovss  dword ptr [rbp+57h+var_88+4], xmm1
      vmovss  xmm0, dword ptr [rcx+rax+138h]
      vmovss  dword ptr [rbp+57h+var_88+8], xmm0
      vmovss  xmm1, dword ptr [rcx+rax+13Ch]
      vmovss  dword ptr [rbp+57h+angles], xmm1
      vmovss  xmm0, dword ptr [rcx+rax+140h]
      vmovss  dword ptr [rbp+57h+angles+4], xmm0
      vmovss  xmm1, dword ptr [rcx+rax+144h]
    }
    goto LABEL_66;
  }
LABEL_75:
  if ( level.maxSentients != 71 )
  {
    LODWORD(weapon) = 71;
    LODWORD(zoomFactor) = level.maxSentients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4002, ASSERT_TYPE_ASSERT, "( level.maxSentients ) == ( (1 + (32 + 6) + 32) )", "level.maxSentients == MAX_SENTIENTS_SP\n\t%i, %i", zoomFactor, weapon) )
      __debugbreak();
  }
  value = 0;
  for ( i = 0; i < 38; value = i )
  {
    v46 = &level.actors[i];
    if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1459, ASSERT_TYPE_ASSERT, "( pActor )", (const char *)&queryFormat, "pActor") )
      __debugbreak();
    if ( !v46->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1460, ASSERT_TYPE_ASSERT, "( pActor->sentientInfo )", (const char *)&queryFormat, "pActor->sentientInfo") )
      __debugbreak();
    SaveMemory_LoadRead(&v46->inuse, 1, save);
    if ( v46->inuse )
    {
      sentientInfo = v46->sentientInfo;
      G_SaveSP_ReadTypeFields_actor_s_1_(save, s_saveSP_actorFields, v46);
      if ( !v46->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1472, ASSERT_TYPE_ASSERT, "(pActor->inuse)", (const char *)&queryFormat, "pActor->inuse") )
        __debugbreak();
      v46->pszDebugInfo = (char *)&queryFormat.fmt + 3;
      v46->weapDrops[0].state = ACTOR_WEAP_DROP_NONE;
      v46->weapDrops[1].state = ACTOR_WEAP_DROP_NONE;
      v48 = SaveMemory_GetMemoryFile(save);
      v46->pNavigator = Nav_ReadNavigator(v48, NULL);
      v46->sentientInfo = sentientInfo;
      G_SaveSP_ReadSentientInfoArray(save, v48, sentientInfo);
    }
    i = value + 1;
  }
  SaveMemory_LoadRead(&level.actorCount, 4, save);
  v49 = memFile;
  transientLoaded = level.transientLoaded;
  v51 = 0;
  value = 0;
  do
  {
    G_SaveSP_ReadSentient(&level.sentients[v51], save);
    v51 = value + 1;
    value = v51;
  }
  while ( v51 < 71 );
  NavData_NavigatorLoadComplete();
  TacGraph_Read(v49);
  AIScheduler::Read(v49);
  VelocityObstacle3Manager::Load(v49);
  G_VehicleSP_ReadSaveGame(save);
  G_CoverWall_ReadSaveGame(save);
  G_PlayerUse_Read(save);
  G_Trigger_Read(save);
  GTurretSP::SaveSP_ReadTurrets(v49, save);
  GMovingPlatformsSP::SaveSP_Read(v49, save);
  G_LightSampler_Read(v49);
  v52 = 0;
  value = 0;
  do
  {
    v53 = &level.outlineData[v52];
    if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1572, ASSERT_TYPE_ASSERT, "(outlineData)", (const char *)&queryFormat, "outlineData") )
      __debugbreak();
    if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1573, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    MemFile_ReadData(v49, 1ui64, v101);
    if ( v101[0] )
    {
      MemFile_ReadData(v49, 4ui64, &p);
      v53->refCount = p;
      MemFile_ReadData(v49, 0x1Cui64, &v53->enabledForClientMask);
      v53->lastUsed = 0;
      MemFile_ReadData(v49, 0x320ui64, v53);
    }
    v52 = value + 1;
    value = v52;
  }
  while ( v52 < 63 );
  v54 = savea;
  v55 = 0;
  value = 0;
  do
  {
    MemFile_ReadData(v49, 4ui64, &level.mayhemEnts[v55]);
    v55 = value + 1;
    value = v55;
  }
  while ( v55 < 64 );
  _RSI = GameScriptDataSP::GetGameScriptDataSP();
  value = 0;
  for ( j = 0; j < 28; value = j )
  {
    SaveMemory_LoadRead(&_RSI->actorCorpseInfo[j].entnum, 4, v54);
    v58 = value;
    if ( _RSI->actorCorpseInfo[value].entnum != -1 )
    {
      SaveMemory_LoadRead(&_RSI->actorCorpseInfo[value].proneInfo, 24, v54);
      _RBX = 6i64 * value;
      *(double *)&_XMM0 = MemFile_ReadFloat(v49);
      __asm { vmovss  dword ptr [rsi+rbx*8+3464h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(v49);
      __asm { vmovss  dword ptr [rsi+rbx*8+3468h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(v49);
      __asm { vmovss  dword ptr [rsi+rbx*8+346Ch], xmm0 }
      v58 = value;
    }
    j = v58 + 1;
  }
  level.actorCorpseCount = 28;
  memset_0(&g_threatBias, 0, sizeof(g_threatBias));
  v60 = SaveMemory_GetMemoryFile(v54);
  if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
    __debugbreak();
  v61 = &g_threatBias;
  v62 = 24i64;
  do
  {
    MemFile_ReadData(v60, 4ui64, v61);
    v61 = (threat_bias_t *)((char *)v61 + 4);
    --v62;
  }
  while ( v62 );
  threatTable = g_threatBias.threatTable;
  v64 = 24i64;
  do
  {
    v65 = 24i64;
    do
    {
      MemFile_ReadData(v60, 4ui64, threatTable);
      threatTable = (int (*)[24])((char *)threatTable + 4);
      --v65;
    }
    while ( v65 );
    --v64;
  }
  while ( v64 );
  MemFile_ReadData(v60, 4ui64, &g_threatBias.threatGroupCount);
  v66 = s_saveSP_threatGroupFields;
  p_type = &s_saveSP_threatGroupFields[0].type;
  do
  {
    Field = G_SaveFieldSP_ReadField(v66, (unsigned __int8 *)&g_threatBias, v54);
    if ( Field )
    {
      if ( *p_type )
      {
        do
          G_SaveFieldSP_ClearField(v66++, (unsigned __int8 *)&g_threatBias);
        while ( v66->type );
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435C350, 6104i64, Field);
    }
    ++v66;
    p_type = &v66->type;
  }
  while ( v66->type );
  if ( Actor_EventListener_GetCount() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1739, ASSERT_TYPE_ASSERT, "(Actor_EventListener_GetCount() == 0)", (const char *)&queryFormat, "Actor_EventListener_GetCount() == 0") )
    __debugbreak();
  Actor_EventListener_Init();
  SaveMemory_LoadRead(&p, 4, v54);
  Actor_EventListener_SetCount(p);
  if ( p )
    SaveMemory_LoadRead(g_AIEVlisteners, 8 * p, v54);
  if ( level.currentTriggerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4084, ASSERT_TYPE_ASSERT, "(level.currentTriggerListSize == 0)", (const char *)&queryFormat, "level.currentTriggerListSize == 0") )
    __debugbreak();
  SaveMemory_LoadRead(&level.pendingTriggerListSize, 4, v54);
  SaveMemory_LoadRead(level.pendingTriggerList, 12 * level.pendingTriggerListSize, v54);
  G_LoadWeaponCue(v54);
  G_Objectives_Load(v49);
  G_LoadConfigstrings(0xFAEu, 64, v54);
  G_LoadConfigstrings(0x17F3u, 32, v54);
  G_Targets_Load();
  G_Missile_LoadAttractors(v49);
  Cmd_LoadNotifications(v49);
  G_LoadGlass(v49);
  R_Cinematic_Load(v54, level.time);
  AI_BT_Load(v49);
  v69 = Ai_Asm::Singleton();
  Ai_Asm::ReadInstances(v69, v49);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4111, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4112, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  CL_TransientsSP_QueueUnloadAll();
  for ( k = 0; k < 0x20; ++k )
  {
    if ( *transientLoaded )
      CL_TransientsSP_QueueLoad(k);
    ++transientLoaded;
  }
  v71 = 0;
  transientVisibility = level.transientVisibility;
  do
    CL_TransientsWorld_SetVisibility(LOCAL_CLIENT_0, v71++, *transientVisibility++);
  while ( v71 < 0x20 );
  CL_PreloadSP_SavegameLoad((const char (*)[8][64])level.preloadedFiles);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4135, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4136, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  SV_TransientsSP_SyncForLoadSavegame();
  G_SaveMemorySP_MoveToSegment(v54, 4);
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  memFile = (MemoryFile *)GUtils::ms_gUtils;
  GUtils::DisableCreateEntityPhysicsOnInit(GUtils::ms_gUtils, 1);
  GMissile::ClearMissileRegistry();
  GMissile::ClearMissileEventRegistry();
  ScriptableSv_DisableLinking(1);
  v73 = 0;
  value = 0;
  do
  {
    v74 = v73;
    v75 = v73;
    v76 = &g_entities[v75];
    if ( (unsigned int)v73 >= 0x800 )
    {
      LODWORD(weapon) = 2048;
      LODWORD(zoomFactor) = v73;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", zoomFactor, weapon) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v75].r.isInUse != g_entityIsInUse[v74] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v74] )
    {
      v77 = v76->model;
      if ( v77 && G_Utils_IsModelBad(v77) && ((v76->s.eType - 19) & 0xFFFD) == 0 )
      {
        v78 = v76->model;
        if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
          __debugbreak();
        v79 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v78);
        Com_PrintWarning(10, "WARNING: actor model '%s' couldn't be found! switching to default actor model.\n", v79);
        G_Utils_OverrideModel(v76->model, "defaultactor");
      }
      if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
        __debugbreak();
      GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, v76, 0);
      ServerDObjForEntnum = Com_GetServerDObjForEntnum(value);
      v81 = ServerDObjForEntnum;
      if ( ServerDObjForEntnum )
      {
        XAnimLoadAnimTree(ServerDObjForEntnum, v49);
        p_partBits = &partBits;
        v83 = 8i64;
        do
        {
          MemFile_ReadData(v49, 4ui64, &p);
          p_partBits->array[0] = p;
          p_partBits = (DObjPartBits *)((char *)p_partBits + 4);
          --v83;
        }
        while ( v83 );
        DObjSetHidePartBits(v81, &partBits);
      }
      eType = v76->s.eType;
      if ( eType == ET_MISSILE )
      {
        GMissile::RegisterMissileEntity(v76->s.number);
      }
      else if ( GMissile::IsMissileEventType(eType) )
      {
        GMissile::RegisterMissileEventEntity(v76->s.number);
      }
    }
    v73 = value + 1;
    value = v73;
  }
  while ( v73 < 2048 );
  v85 = savea;
  G_SaveMemorySP_MoveToSegment(savea, 5);
  ScriptableSv_DisableLinking(0);
  GUtils::DisableCreateEntityPhysicsOnInit((GUtils *)memFile, 0);
  WorldCollision_Load(v85);
  StaticModels_Load(v85);
  Physics_Load(v85);
  G_SaveMemorySP_MoveToSegment(v85, 6);
  v86 = v105;
  CgStatic::SetActiveStatics(v105);
  G_ClearConfigstrings(1u, 8);
  SV_ClientSP_SendGameState();
  AimTarget_Load(v49);
  ScriptableClSP_ArchiveState(v49);
  DynEnt_ReadSaveGame(v49);
  Mayhem_ReadSaveGame(v49);
  CG_LoadGlass(v49);
  CG_EntitySP_LoadEntities(v85);
  CL_CGameSP_ArchiveClientState(v49);
  CG_LoadFXEntities(v85);
  CG_LoadSoundEntities(v85);
  __asm { vmovaps xmm1, xmm7; timeStep }
  Ragdoll_UpdateAll((LocalClientNum_t)v86, *(float *)&_XMM1);
  CL_CGameSP_CheckServerCommands();
  SV_SaveSP_LoadServerCommands(v85);
  v88 = &level.clients[SpClientNum];
  if ( !CgWeaponMap::ms_instance[v86] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CgWeaponMap::CopyMap(CgWeaponMap::ms_instance[v86], src);
  CG_LoadViewModelAnimTrees(v85, &v88->ps, (LocalClientNum_t)v86);
  CG_LoadFOVLerp(v49, (LocalClientNum_t)v86);
  CG_LoadSlide(v49, (LocalClientNum_t)v86);
  CG_LoadViewLinkedEntities(v49, (LocalClientNum_t)v86);
  CG_Shake_Load(v49, (LocalClientNum_t)v86);
  CG_LoadCinematicLetterBoxInfo(v49, (LocalClientNum_t)v86);
  CgStatic::ClearActiveStatics((const LocalClientNum_t)v86);
  G_SaveMemorySP_MoveToSegment(v85, -1);
  GScr_Weapon_LoadPost(scrContext);
  Scr_LoadShutdown(scrContext, 1, MAIN);
  SV_Game_LocateGameData(level.gentities, level.num_entities, &level.clients->ps, 64592);
  v89 = GWeaponMap::GetInstance();
  GWeaponMap::ValidateReferences(v89);
  level.initializing = 0;
  _R11 = &v114;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
G_SaveConfigstrings
==============
*/
void G_SaveConfigstrings(unsigned int iFirst, int iCount, MemoryFile *memFile)
{
  __int64 v3; 
  unsigned int v6; 
  scr_string_t ConfigstringConst; 
  const char *v8; 
  __int64 v9; 

  v3 = (unsigned int)iCount;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1784, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( (int)v3 > 0 )
  {
    v6 = iFirst;
    do
    {
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( iFirst >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v9) = iFirst;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v9) )
          __debugbreak();
      }
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( v6 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v9) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v9) )
          __debugbreak();
      }
      ConfigstringConst = SV_GetConfigstringConst(v6);
      v8 = SL_ConvertToString(ConfigstringConst);
      G_SaveField_WriteCStyleString(v8, 1024, memFile);
      ++v6;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
G_SaveMainState
==============
*/
void G_SaveMainState(bool savegame, MemoryFile *memFile)
{
  MemoryFile *v5; 
  __int64 v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  playerState_s *p_ps; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v13; 
  GAntiLagSP *AntiLagSP; 
  LocalClientNum_t OnlyLocalClientNum; 
  OmnvarGameData *gameOmnvars; 
  unsigned int v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  const dvar_t *v22; 
  scrContext_t *v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  int v28; 
  bool v29; 
  gentity_s *v30; 
  __int16 eType; 
  const saveField_t *v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  gclient_s *v46; 
  characterInfo_t *v47; 
  GWeaponMap *v48; 
  const Weapon *v49; 
  int viewmodelIndex; 
  const XModel *handModel; 
  int i; 
  actor_s *v53; 
  int j; 
  sentient_s *v55; 
  int iDamageParts; 
  const DamageParts *v57; 
  int k; 
  outline_data_t *v59; 
  unsigned int v60; 
  ClientBits *p_enabledForClientMask; 
  char v62; 
  int v63; 
  scrContext_t *v64; 
  GameScriptDataSP *GameScriptDataSP; 
  int m; 
  int v67; 
  Ai_Asm *v68; 
  unsigned __int64 v69; 
  unsigned __int64 v70; 
  unsigned __int64 v71; 
  unsigned __int64 v72; 
  int v73; 
  bool v74; 
  DObj *ServerDObjForEntnum; 
  const DObj *v76; 
  const XAnim_s **p_anims; 
  DObjPartBits *p_partBits; 
  __int64 v79; 
  unsigned __int64 v80; 
  bool v81; 
  int v82; 
  int v83; 
  __int64 v84; 
  __int64 v85; 
  unsigned __int64 v86; 
  unsigned __int64 v87; 
  const char *v88; 
  MemoryFile *SecondarySaveThreadMemoryFile; 
  char v90; 
  MemoryFile *ClientMemoryFile; 
  int v92; 
  playerState_s *v93; 
  __int64 v94; 
  __int64 v95; 
  unsigned __int64 v96; 
  unsigned __int64 v97; 
  float fmt; 
  __int64 cosFovLimit; 
  float cosFovLimita; 
  Weapon *weapon; 
  int handle; 
  bool v106; 
  char v107[8]; 
  char v108; 
  char v109; 
  int integer; 
  __int64 p; 
  scrContext_t *scrContext; 
  MemoryFile *v113; 
  __int64 v114; 
  GWeaponMap *Instance; 
  __int64 v116; 
  __int64 v117; 
  float v118; 
  DObjPartBits partBits; 
  Weapon unpredictableEventWeapons[4]; 
  Weapon predictableEventWeapons[4]; 
  char v122; 
  void *retaddr; 

  _RAX = &retaddr;
  v116 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v5 = memFile;
  v113 = memFile;
  v106 = savegame;
  if ( savegame && Sys_IsServerThread() )
  {
    v109 = 1;
    G_SaveMemorySP_SetClientMemoryFileValid(0);
    SV_MainSP_SetClientSaveGameFunction(G_SavePS_ClientSaveHelper);
    SV_MainSP_SignalClientToSaveGame();
  }
  else
  {
    v109 = 0;
  }
  if ( savegame && Sys_IsServerThread() )
  {
    v108 = 1;
    G_SaveMemorySP_SetSecondarySaveInProgress(1);
    Sys_SetSaveGameSecondaryEvent();
  }
  else
  {
    v108 = 0;
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2415, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  SaveGameTrackingInitialize(v5);
  v7 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v114 = *(_QWORD *)(v7 + 272);
  *(_QWORD *)(v7 + 272) = 0i64;
  v8 = 0;
  handle = 0;
  v9 = 0;
  do
  {
    v10 = v9;
    p_ps = &level.clients[v9].ps;
    if ( p_ps[1].serverTime == 2 )
    {
      G_SaveSP_ClearPlayerEventWeapons(p_ps, &predictableEventWeapons[4 * v10], &unpredictableEventWeapons[4 * v10]);
      v8 = handle;
    }
    handle = ++v8;
    v9 = v8;
  }
  while ( v8 < 1 );
  UsedSize = MemFile_GetUsedSize(v5);
  ProfMem_Begin("SaveMainState", UsedSize);
  v13 = MemFile_GetUsedSize(v5);
  ProfMem_Begin("level state, dvars, hudelems", v13);
  MemFile_StartSegment(v5, 1, StreamModeSource_SPSaveMainState);
  MemFile_WriteData(v5, 4ui64, &level.time);
  MemFile_WriteData(v5, 4ui64, &level.frameDuration);
  if ( level.previousTime != level.time - level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2443, ASSERT_TYPE_ASSERT, "(level.previousTime == level.time - level.frameDuration)", (const char *)&queryFormat, "level.previousTime == level.time - level.frameDuration") )
    __debugbreak();
  MemFile_WriteData(v5, 4ui64, &level.framenum);
  MemFile_WriteData(v5, 4ui64, &level.framePos);
  MemFile_WriteData(v5, 4ui64, &level.demoSaveGame);
  AntiLagSP = GAntiLagSP::GetAntiLagSP();
  GAntiLagSP::ArchiveSaveGame(AntiLagSP, v5);
  MemFile_WriteData(v5, 0x34ui64, &g_slowmoCommon);
  MemFile_WriteData(v5, 2ui64, &level.soundAliasFirst);
  MemFile_WriteData(v5, 2ui64, &level.soundAliasLast);
  MemFile_WriteData(v5, 4ui64, &level.changelevel);
  MemFile_WriteData(v5, 4ui64, &level.exitTime);
  MemFile_WriteData(v5, 4ui64, &level.savepersist);
  MemFile_WriteData(v5, 4ui64, &level.bMissionSuccess);
  MemFile_WriteData(v5, 4ui64, &level.bMissionFailed);
  MemFile_WriteData(v5, 4ui64, &level.scriptPrintChannel);
  MemFile_WriteData(v5, 0x40ui64, g_nextMap);
  MemFile_WriteData(v5, 8ui64, &level.compassMapUpperLeft);
  MemFile_WriteData(v5, 8ui64, &level.compassMapWorldSize);
  MemFile_WriteData(v5, 8ui64, &level.compassNorth);
  MemFile_WriteData(v5, 4ui64, &level.hudElemLastAssignedSoundID);
  if ( level.bPlayerIgnoreRadiusDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2479, ASSERT_TYPE_ASSERT, "(!level.bPlayerIgnoreRadiusDamage)", (const char *)&queryFormat, "!level.bPlayerIgnoreRadiusDamage") )
    __debugbreak();
  MemFile_WriteData(v5, 4ui64, &level.bPlayerIgnoreRadiusDamageLatched);
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  LOBYTE(p) = CL_StreamViews_IsManualViewSet(COUNT|DODGE, OnlyLocalClientNum);
  if ( (_BYTE)p )
  {
    _RAX = CL_StreamViews_GetManualViewOrigin(COUNT|DODGE, OnlyLocalClientNum);
    __asm
    {
      vmovsd  xmm0, qword ptr [rax]
      vmovsd  [rbp+210h+var_270], xmm0
    }
    v118 = _RAX->v[2];
  }
  MemFile_WriteData(v5, 1ui64, &p);
  MemFile_WriteData(v5, 0xCui64, &v117);
  SaveGameTrackingMarker(v5, "Level State");
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1896, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  G_SaveConfigstrings(0x10u, 2048, v5);
  G_SaveConfigstrings(0xB6Eu, 1024, v5);
  G_SaveConfigstrings(0x96Eu, 512, v5);
  G_SaveConfigstrings(0x810u, 350, v5);
  G_SaveConfigstrings(0xFF3u, 2048, v5);
  G_SaveConfigstrings(0xFEEu, 1, v5);
  G_SaveConfigstrings(0, 1, v5);
  G_SaveConfigstrings(0xFF0u, 1, v5);
  G_SaveConfigstrings(0xFF1u, 1, v5);
  G_SaveConfigstrings(0xFF2u, 1, v5);
  G_SaveConfigstrings(9u, 1, v5);
  G_SaveConfigstrings(0xAu, 1, v5);
  G_SaveConfigstrings(0xBu, 1, v5);
  G_SaveConfigstrings(0xFu, 1, v5);
  G_SaveConfigstrings(0xEu, 1, v5);
  G_SaveConfigstrings(0xCu, 1, v5);
  G_SaveConfigstrings(0xFEFu, 1, v5);
  SaveGameTrackingMarker(v5, "Config Strings");
  Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveDvars");
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1960, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Dvar_SaveDvars(v5, 0x40u);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(v5, "DVars");
  G_HudElem_Save(v5);
  G_HeadIcons_Save(v5);
  MemFile_WriteData(v5, 0x157C0ui64, level.targetMarkerGroups);
  integer = BG_Omnvar_PerGameCount();
  MemFile_WriteData(v5, 4ui64, &integer);
  gameOmnvars = level.gameOmnvars;
  v19 = BG_Omnvar_PerGameCount();
  MemFile_WriteData(v5, 8i64 * v19, gameOmnvars);
  SaveGameTrackingMarker(v5, "Hud and omnvars");
  v20 = MemFile_GetUsedSize(v5);
  ProfMem_End(v20);
  v21 = MemFile_GetUsedSize(v5);
  ProfMem_Begin("misc", v21);
  MemFile_WriteData(v5, 4ui64, &level.fFogOpaqueDist);
  MemFile_WriteData(v5, 4ui64, &level.fFogOpaqueDistSqrd);
  MemFile_WriteData(v5, 4ui64, &level.timeAtLastPause);
  MemFile_WriteData(v5, 4ui64, &level.bDrawCompassFriendlies);
  v22 = DVARINT_g_player_maxhealth;
  if ( !DVARINT_g_player_maxhealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_player_maxhealth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  integer = v22->current.integer;
  MemFile_WriteData(v5, 4ui64, &integer);
  AimTargetSP_WriteSaveGame(v5);
  MemFile_WriteData(v5, 0x800ui64, level.localizedStringRefCount);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2544, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2545, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  if ( !SV_TransientsSP_IsSafeToSave() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2546, ASSERT_TYPE_ASSERT, "(SV_TransientsSP_IsSafeToSave())", (const char *)&queryFormat, "SV_TransientsSP_IsSafeToSave()") )
    __debugbreak();
  MemFile_WriteData(v5, 0x20ui64, level.transientLoaded);
  MemFile_WriteData(v5, 0x20ui64, level.transientVisibility);
  MemFile_WriteData(v5, 0x200ui64, level.preloadedFiles);
  MemFile_WriteData(v5, 1ui64, &level.forceStreamSyncSP);
  MemFile_WriteData(v5, 0x30ui64, &level.umbraGateStates);
  SaveGameTrackingMarker(v5, "Misc");
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Scripts");
  v23 = ScriptContext_Server();
  scrContext = v23;
  Scr_SavePre(v23, 1);
  SaveGameTrackingMarker(v5, "Script Pre Save");
  Scr_SavePre2(v23, 1);
  SaveGameTrackingMarker(v5, "Script Pre Save 2");
  Sys_ProfEndNamedEvent();
  v24 = MemFile_GetUsedSize(v5);
  ProfMem_End(v24);
  GStatic::SetActiveStatics();
  v25 = MemFile_GetUsedSize(v5);
  ProfMem_Begin("path nodes", v25);
  MemFile_StartSegment(v5, 2, StreamModeSource_SPSaveMainState);
  Instance = GWeaponMap::GetInstance();
  GWeaponMap::SaveWeapons(Instance, v5);
  G_GameInterface_OnSave(savegame, v5);
  WriteSpawnedPathNodes(v5);
  G_SaveSP_WritePathNodes(v5);
  SaveGameTrackingMarker(v5, "Path Nodes");
  v26 = MemFile_GetUsedSize(v5);
  ProfMem_End(v26);
  v27 = MemFile_GetUsedSize(v5);
  ProfMem_Begin("entities", v27);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Entities");
  MemFile_WriteData(v5, 4ui64, &level.num_entities);
  handle = 0;
  v28 = 0;
  v29 = 1;
  do
  {
    if ( !v29 )
    {
      LODWORD(weapon) = 2048;
      LODWORD(cosFovLimit) = v28;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", cosFovLimit, weapon) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v28].r.isInUse != g_entityIsInUse[v28] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v28] )
    {
      v30 = &g_entities[handle];
      MemFile_WriteData(v5, 4ui64, &handle);
      Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteEntity");
      if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1329, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1330, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
        __debugbreak();
      eType = v30->s.eType;
      if ( (eType < 0 || (unsigned __int16)eType > 0xFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum entityType_s>(enum entityType_s)", "unsigned", (unsigned __int8)eType, "signed", eType) )
        __debugbreak();
      v107[0] = eType;
      MemFile_WriteData(v5, 1ui64, v107);
      switch ( v30->s.eType )
      {
        case ET_SCRIPTMOVER:
          v32 = s_saveSP_gentityScriptMoverFields;
          break;
        case ET_SOUND:
        case ET_PRIMARY_LIGHT:
        case ET_ACTOR_SPAWNER:
        case ET_PHYSICS_CHILD:
        case ET_RAGDOLL_CONSTRAINT:
        case ET_PHYSICS_VOLUME:
        case ET_INFO_VOLUME_GRAPPLE:
          v32 = s_saveSP_gentityMinimalFields;
          break;
        case ET_HELICOPTER:
        case ET_VEHICLE:
        case ET_VEHICLE_CORPSE:
        case ET_VEHICLE_SPAWNER:
          v32 = s_saveSP_gentityVehicleFields;
          break;
        default:
          v32 = s_saveSP_gentityGeneralFields;
          break;
      }
      v33 = MemFile_GetUsedSize(v5);
      ProfMem_Begin("WriteEntity", v33);
      G_SaveSP_WriteTypeFields_gentity_s_3_(v5, v32, v30);
      v34 = MemFile_GetUsedSize(v5);
      ProfMem_End(v34);
      Sys_ProfEndNamedEvent();
    }
    v28 = handle + 1;
    handle = v28;
    v29 = (unsigned int)v28 < 0x800;
  }
  while ( v28 < 2048 );
  handle = -1;
  MemFile_WriteData(v5, 4ui64, &handle);
  Sys_ProfEndNamedEvent();
  v35 = MemFile_GetUsedSize(v5);
  ProfMem_End(v35);
  SaveGameTrackingMarker(v5, "Entity State");
  G_PIP_Write(v5);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Spawner");
  G_Spawner_Write(v5);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(v5, "PIP and spawners");
  v36 = MemFile_GetUsedSize(v5);
  ProfMem_Begin("fxEntities", v36);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - FxEntities");
  G_SaveFXEntities(v5);
  Sys_ProfEndNamedEvent();
  v37 = MemFile_GetUsedSize(v5);
  ProfMem_End(v37);
  v38 = MemFile_GetUsedSize(v5);
  ProfMem_Begin("soundEntities", v38);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - SoundEntities");
  G_SaveSoundEntities(v5);
  Sys_ProfEndNamedEvent();
  v39 = MemFile_GetUsedSize(v5);
  ProfMem_End(v39);
  v40 = MemFile_GetUsedSize(v5);
  ProfMem_Begin("misc: clients, actors, vehicles, scriptables", v40);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - BadPlaces");
  G_SaveSP_WriteBadPlaces(v5);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - MotionWarp");
  G_MotionWarp_Save(v5);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - SpeedThresholdSave");
  SpeedThresholdSave(v5);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - NavData_Write");
  NavData_Write(v5);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Scriptables");
  ScriptableSv_ArchiveState(v5);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(v5, "Nav, scriptables, misc");
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v41 = *(_QWORD *)&GStatic::ms_gameStatics;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Clients");
  v42 = 0;
  handle = 0;
  v43 = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm7, cs:__real@3f800000
  }
  do
  {
    v46 = &level.clients[v43];
    if ( v46->sess.connected == CON_CONNECTED )
    {
      MemFile_WriteData(v5, 4ui64, &handle);
      G_SaveSP_WriteClient(v46, v5);
      v47 = (characterInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v41 + 224i64))(v41, (unsigned int)handle);
      if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2685, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      WriteCharacterInfo_0(v5, v47);
      v48 = GWeaponMap::GetInstance();
      if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      v49 = BgWeaponMap::GetWeapon(v48, v46->ps.weapCommon.weaponHandle);
      viewmodelIndex = v46->ps.viewmodelIndex;
      if ( viewmodelIndex )
        handModel = G_Utils_GetModel(viewmodelIndex);
      else
        handModel = NULL;
      __asm
      {
        vmovss  [rsp+310h+cosFovLimit], xmm6
        vmovss  dword ptr [rsp+310h+fmt], xmm7
      }
      CL_StreamViewsSP_SetAutoView(EASE_OUT_QUAD, handle, &g_entities[handle].r.currentOrigin, &g_entities[handle].r.currentAngles, fmt, cosFovLimita, v49, handModel);
      v42 = handle;
    }
    handle = ++v42;
    v43 = v42;
  }
  while ( v42 < 1 );
  handle = -1;
  MemFile_WriteData(v5, 4ui64, &handle);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Actors");
  handle = 0;
  for ( i = 0; i < 38; handle = i )
  {
    v53 = &level.actors[i];
    if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1435, ASSERT_TYPE_ASSERT, "( pActor )", (const char *)&queryFormat, "pActor") )
      __debugbreak();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1436, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    MemFile_WriteData(v5, 1ui64, &v53->inuse);
    if ( v53->inuse )
    {
      Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteActor");
      G_SaveSP_WriteTypeFields_actor_s_3_(v5, s_saveSP_actorFields, v53);
      Nav_WriteNavigator(v5, v53->pNavigator);
      G_SaveSP_WriteSentientInfoArray(v5, v53->sentientInfo, level.maxSentients);
      Sys_ProfEndNamedEvent();
    }
    i = handle + 1;
  }
  MemFile_WriteData(v5, 4ui64, &level.actorCount);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Sentients");
  if ( level.maxSentients != 71 )
  {
    LODWORD(weapon) = 71;
    LODWORD(cosFovLimit) = level.maxSentients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2713, ASSERT_TYPE_ASSERT, "( level.maxSentients ) == ( (1 + (32 + 6) + 32) )", "level.maxSentients == MAX_SENTIENTS_SP\n\t%i, %i", cosFovLimit, weapon) )
      __debugbreak();
  }
  handle = 0;
  for ( j = 0; j < 71; handle = j )
  {
    v55 = &level.sentients[j];
    if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1500, ASSERT_TYPE_ASSERT, "( sentient )", (const char *)&queryFormat, "sentient") )
      __debugbreak();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1501, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    MemFile_WriteData(v5, 1ui64, &v55->inuse);
    if ( v55->inuse )
    {
      Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteSentientInfoArray");
      G_SaveSP_WriteTypeFields_sentient_s_2_(v5, s_saveSP_sentientFields, v55);
      iDamageParts = v55->iDamageParts;
      if ( iDamageParts != -1 )
      {
        v57 = DamageParts_Get(iDamageParts);
        G_SaveSP_WriteTypeFields_DamageParts_2_(v5, g_saveSP_damagePartsField, v57);
      }
      Sys_ProfEndNamedEvent();
    }
    j = handle + 1;
  }
  Sys_ProfEndNamedEvent();
  TacGraph_Write(v5);
  AIScheduler::Write(v5);
  VelocityObstacle3Manager::Save(v5);
  G_VehicleSP_WriteSaveGame(v5);
  G_CoverWall_WriteSaveGame(v5);
  G_PlayerUse_Write(v5);
  G_Trigger_Write(v5);
  GTurretSP::SaveSP_WriteTurrets(v5);
  GMovingPlatformsSP::SaveSP_Write(v5);
  G_LightSampler_Write(v5);
  SaveGameTrackingMarker(v5, "Vehicles");
  handle = 0;
  for ( k = 0; k < 63; handle = k )
  {
    v59 = &level.outlineData[k];
    if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1554, ASSERT_TYPE_ASSERT, "(outlineData)", (const char *)&queryFormat, "outlineData") )
      __debugbreak();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1555, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    v60 = 0;
    p_enabledForClientMask = &v59->enabledForClientMask;
    while ( !p_enabledForClientMask->array[0] )
    {
      ++v60;
      p_enabledForClientMask = (ClientBits *)((char *)p_enabledForClientMask + 4);
      if ( v60 >= 7 )
        goto LABEL_121;
    }
    if ( v59->refCount <= 0 )
    {
LABEL_121:
      v62 = 0;
      goto LABEL_122;
    }
    v62 = 1;
LABEL_122:
    v107[0] = v62;
    MemFile_WriteData(v5, 1ui64, v107);
    if ( v62 )
    {
      integer = v59->refCount;
      MemFile_WriteData(v5, 4ui64, &integer);
      MemFile_WriteData(v5, 0x1Cui64, &v59->enabledForClientMask);
      MemFile_WriteData(v5, 0x320ui64, v59);
    }
    k = handle + 1;
  }
  v63 = 0;
  handle = 0;
  v64 = scrContext;
  do
  {
    MemFile_WriteData(v5, 4ui64, &level.mayhemEnts[v63]);
    v63 = handle + 1;
    handle = v63;
  }
  while ( v63 < 64 );
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  handle = 0;
  for ( m = 0; m < 28; handle = m )
  {
    MemFile_WriteData(v5, 4ui64, &GameScriptDataSP->actorCorpseInfo[m].entnum);
    v67 = handle;
    if ( GameScriptDataSP->actorCorpseInfo[handle].entnum != -1 )
    {
      MemFile_WriteData(v5, 0x18ui64, &GameScriptDataSP->actorCorpseInfo[handle].proneInfo);
      MemFile_WriteData(v5, 0xCui64, &GameScriptDataSP->actorCorpseInfo[handle].physicsOrigin);
      v67 = handle;
    }
    m = v67 + 1;
  }
  G_SaveSP_WriteTypeFields_threat_bias_t_2_(v5, s_saveSP_threatGroupFields, &g_threatBias);
  integer = Actor_EventListener_GetCount();
  MemFile_WriteData(v5, 4ui64, &integer);
  if ( integer )
    MemFile_WriteData(v5, 8i64 * integer, g_AIEVlisteners);
  if ( level.currentTriggerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2781, ASSERT_TYPE_ASSERT, "(level.currentTriggerListSize == 0)", (const char *)&queryFormat, "level.currentTriggerListSize == 0") )
    __debugbreak();
  MemFile_WriteData(v5, 4ui64, &level.pendingTriggerListSize);
  MemFile_WriteData(v5, 12i64 * level.pendingTriggerListSize, level.pendingTriggerList);
  G_SaveWeaponCue(v5);
  G_Objectives_Save(v5);
  G_SaveConfigstrings(0xFAEu, 64, v5);
  G_SaveConfigstrings(0x17F3u, 32, v5);
  G_Missile_SaveAttractors(v5);
  Cmd_SaveNotifications(v5);
  G_SaveGlass(v5);
  R_Cinematic_Save(v5, level.time);
  AI_BT_Save(v5);
  v68 = Ai_Asm::Singleton();
  Ai_Asm::WriteInstances(v68, v5);
  GStatic::ClearActiveStatics();
  SaveGameTrackingMarker(v5, "Misc");
  v69 = MemFile_GetUsedSize(v5);
  ProfMem_End(v69);
  v70 = MemFile_GetUsedSize(v5);
  ProfMem_Begin("Script", v70);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Scr_SavePost");
  MemFile_StartSegment(v5, 3, StreamModeSource_SPSaveMainState);
  Scr_SavePost(v64, v5, 1);
  Sys_ProfEndNamedEvent();
  v71 = MemFile_GetUsedSize(v5);
  ProfMem_End(v71);
  SaveGameTrackingMarker(v5, "Script Save");
  v72 = MemFile_GetUsedSize(v5);
  ProfMem_Begin("Animtree", v72);
  MemFile_StartSegment(v5, 4, StreamModeSource_SPSaveMainState);
  handle = 0;
  v73 = 0;
  v74 = 1;
  do
  {
    if ( !v74 )
    {
      LODWORD(weapon) = 2048;
      LODWORD(cosFovLimit) = v73;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", cosFovLimit, weapon) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v73].r.isInUse != g_entityIsInUse[v73] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v73] )
    {
      ServerDObjForEntnum = Com_GetServerDObjForEntnum(handle);
      v76 = ServerDObjForEntnum;
      if ( ServerDObjForEntnum )
      {
        p_anims = (const XAnim_s **)&ServerDObjForEntnum->tree->anims;
        if ( p_anims && (!*p_anims || Scr_GetAnimsIndex(*p_anims, 1u)) )
          XAnimSaveAnimTree(v76, v5);
        DObjGetHidePartBits(v76, &partBits);
        p_partBits = &partBits;
        v79 = 8i64;
        do
        {
          integer = p_partBits->array[0];
          MemFile_WriteData(v5, 4ui64, &integer);
          p_partBits = (DObjPartBits *)((char *)p_partBits + 4);
          --v79;
        }
        while ( v79 );
      }
    }
    v73 = handle + 1;
    handle = v73;
    v74 = (unsigned int)v73 < 0x800;
  }
  while ( v73 < 2048 );
  v80 = MemFile_GetUsedSize(v5);
  ProfMem_End(v80);
  SaveGameTrackingMarker(v5, "Animation");
  v81 = v106;
  Scr_SaveShutdown(scrContext, v106, 1);
  v82 = 0;
  v83 = 0;
  if ( level.num_entities > 0 )
  {
    v84 = 0i64;
    v85 = 0i64;
    do
    {
      if ( (unsigned int)v83 >= 0x800 )
      {
        LODWORD(weapon) = 2048;
        LODWORD(cosFovLimit) = v83;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", cosFovLimit, weapon) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v85].r.isInUse != g_entityIsInUse[v84] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v84] )
        G_UtilsSP_DObjDevCheckUpdate(&g_entities[v83]);
      ++v83;
      ++v84;
      ++v85;
    }
    while ( v83 < level.num_entities );
    v5 = v113;
    v82 = 0;
    v81 = v106;
  }
  if ( v108 )
  {
    while ( G_SaveMemorySP_IsSecondarySaveThreadInProgress() )
      Sys_Sleep(0);
    SaveGameTrackingMarker(v5, "Wait for 2nd thread");
    SecondarySaveThreadMemoryFile = G_SaveMemorySP_GetSecondarySaveThreadMemoryFile();
    MemFile_Append(v5, SecondarySaveThreadMemoryFile);
    v88 = "Append 2nd thread data";
  }
  else
  {
    v86 = MemFile_GetUsedSize(v5);
    ProfMem_Begin("Physics", v86);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Physics");
    MemFile_StartSegment(v5, 5, StreamModeSource_SPSaveMainState);
    WorldCollision_Write(v5);
    StaticModels_Write(v5);
    Physics_Write(v5);
    Sys_ProfEndNamedEvent();
    v87 = MemFile_GetUsedSize(v5);
    ProfMem_End(v87);
    v88 = "Secondary - Physics";
  }
  SaveGameTrackingMarker(v5, v88);
  v90 = v109;
  if ( v109 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFA500, "SV_MainSP_WaitForClientToSaveGame");
    SV_MainSP_WaitForClientToSaveGame();
    Sys_ProfEndNamedEvent();
    SaveGameTrackingMarker(v5, "Wait for client");
    if ( G_SaveMemorySP_GetClientMemoryFileValid() )
    {
      ClientMemoryFile = G_SaveMemorySP_GetClientMemoryFile();
      MemFile_Append(v5, ClientMemoryFile);
    }
    else
    {
      v5->memoryOverflow = 1;
    }
    SaveGameTrackingMarker(v5, "Append Client");
  }
  else
  {
    SV_MainSP_BeginSaveGame();
    G_SaveSP_SaveStateClient(v5, v81);
  }
  MemFile_StartSegment(v5, 9, StreamModeSource_SPSaveMainState);
  handle = 0;
  v92 = 0;
  do
  {
    v93 = &level.clients[v92].ps;
    if ( v93[1].serverTime == 2 )
    {
      G_SaveSP_RestorePlayerEventWeapons(v93, &predictableEventWeapons[4 * v92], &unpredictableEventWeapons[4 * v92]);
      v82 = handle;
    }
    handle = ++v82;
    v92 = v82;
  }
  while ( v82 < 1 );
  v94 = tls_index;
  v95 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v95 + 272) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 162, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == nullptr ) )", "( ms_activeBgs ) = %p", *(const void **)(v95 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v94) + 272i64) = v114;
  GWeaponMap::ValidateReferences(Instance);
  if ( !v90 )
    SV_MainSP_EndSaveGame();
  SaveGameTrackingMarker(v5, "Final");
  v96 = MemFile_GetUsedSize(v5);
  ProfMem_End(v96);
  v97 = MemFile_GetUsedSize(v5);
  ProfMem_End(v97);
  _R11 = &v122;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
G_SavePS_ClientSaveHelper
==============
*/
void G_SavePS_ClientSaveHelper()
{
  MemoryFile *ClientMemoryFile; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2109, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  ClientMemoryFile = G_SaveMemorySP_GetClientMemoryFile();
  G_SaveMemorySP_InitializeClientMemoryFile(ClientMemoryFile);
  SaveGameTrackingInitialize(ClientMemoryFile);
  G_SaveSP_SaveStateClient(ClientMemoryFile, 1);
}

/*
==============
G_SaveSP_ClearAllConfigstrings
==============
*/
void G_SaveSP_ClearAllConfigstrings(void)
{
  G_ClearConfigstrings(0xB6Eu, 1024);
  G_ClearConfigstrings(0x96Eu, 512);
  G_ClearConfigstrings(0x810u, 350);
  G_ClearConfigstrings(0xFF3u, 2048);
  G_ClearConfigstrings(0xFEEu, 1);
  G_ClearConfigstrings(0, 1);
  G_ClearConfigstrings(0xFF0u, 1);
  G_ClearConfigstrings(0xFF1u, 1);
  G_ClearConfigstrings(0xFF2u, 1);
  G_ClearConfigstrings(9u, 1);
  G_ClearConfigstrings(0xAu, 1);
  G_ClearConfigstrings(0xBu, 1);
  G_ClearConfigstrings(0xFu, 1);
  G_ClearConfigstrings(0xEu, 1);
  G_ClearConfigstrings(0xFAEu, 64);
  G_ClearConfigstrings(0xCu, 1);
  G_ClearConfigstrings(0xFEFu, 1);
  G_ClearConfigstrings(1u, 8);
}

/*
==============
G_SaveSP_ClearPlayerEventWeapons
==============
*/
void G_SaveSP_ClearPlayerEventWeapons(playerState_s *ps, Weapon *predictableEventWeapons, Weapon *unpredictableEventWeapons)
{
  EntityEvent *events; 
  __int64 v7; 
  GWeaponMap *Instance; 
  EntityEvent *v9; 
  EntityEvent *unpredictableEvents; 
  __int64 v16; 
  EntityEvent *v17; 

  _RDI = predictableEventWeapons;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2047, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2048, ASSERT_TYPE_ASSERT, "( predictableEventWeapons )", (const char *)&queryFormat, "predictableEventWeapons") )
    __debugbreak();
  if ( !unpredictableEventWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2049, ASSERT_TYPE_ASSERT, "( unpredictableEventWeapons )", (const char *)&queryFormat, "unpredictableEventWeapons") )
    __debugbreak();
  events = ps->pe.events;
  v7 = 4i64;
  Instance = GWeaponMap::GetInstance();
  v9 = ps->pe.events;
  do
  {
    if ( BG_IsWeaponEvent(events->eventType) )
    {
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 478, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v9->eventParm);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rdi], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rdi+20h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rdi+30h], xmm0
      }
      *(_DWORD *)&_RDI->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      BG_ClearEventParameter(Instance, v9);
    }
    ++v9;
    ++events;
    ++_RDI;
    --v7;
  }
  while ( v7 );
  _RBX = unpredictableEventWeapons;
  unpredictableEvents = ps->unpredictableEvents;
  v16 = 4i64;
  v17 = ps->unpredictableEvents;
  do
  {
    if ( BG_IsWeaponEvent(unpredictableEvents->eventType) )
    {
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 478, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v17->eventParm);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rbx+20h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rbx+30h], xmm0
      }
      *(_DWORD *)&_RBX->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      BG_ClearEventParameter(Instance, v17);
    }
    ++v17;
    ++unpredictableEvents;
    ++_RBX;
    --v16;
  }
  while ( v16 );
}

/*
==============
G_SaveSP_CommitSavedGame
==============
*/
_BOOL8 G_SaveSP_CommitSavedGame(int saveId)
{
  SaveGame *SaveHandle; 
  bool v2; 
  bool v3; 
  const char *v4; 

  SaveHandle = G_SaveMemorySP_GetSaveHandle(SAVE_GAME_HANDLE);
  if ( !SaveHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3451, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !SaveHandle->suppressPlayerNotify )
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "gamesavestart");
  v2 = G_SaveMemorySP_CommitSave(SaveHandle);
  v3 = v2;
  if ( !SaveHandle->suppressPlayerNotify )
  {
    v4 = "gamesaved";
    if ( !v2 )
      v4 = "gamesavefailed";
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  return v3;
}

/*
==============
G_SaveSP_DevOpenDeviceForScriptRead
==============
*/
__int64 G_SaveSP_DevOpenDeviceForScriptRead(MemCardFileHandle *fileHandle)
{
  bool UseDevSaveArea; 
  unsigned int v3; 
  unsigned int v4; 
  char buffer[68]; 

  UseDevSaveArea = MemCard_GetUseDevSaveArea();
  MemCard_PushUseDevDrive(UseDevSaveArea);
  if ( OpenDevice((const char *)&g_pendingLoadName, fileHandle) >= 0 )
  {
    if ( ReadFromDevice((void *)((unsigned __int64)buffer & 0xFFFFFFFFFFFFFF80ui64), 0x380ui64, (MemCardFileHandle)fileHandle->handle) == 896 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)buffer & 0xFFFFFFFFFFFFFF80ui64) + 0x335) )
      {
        CloseDevice((MemCardFileHandle)fileHandle->handle);
        v3 = 0;
        goto LABEL_12;
      }
      v4 = *(_DWORD *)(((unsigned __int64)buffer & 0xFFFFFFFFFFFFFF80ui64) + 0x288);
      if ( v4 && ReadFromDevice(NULL, v4, (MemCardFileHandle)fileHandle->handle) != *(_DWORD *)(((unsigned __int64)buffer & 0xFFFFFFFFFFFFFF80ui64) + 0x288) )
      {
        CloseDevice((MemCardFileHandle)fileHandle->handle);
        Com_PrintError(10, "Bad skipt of scene shot\n");
        v3 = 0;
        goto LABEL_12;
      }
      if ( ReadFromDevice(NULL, *(int *)(((unsigned __int64)buffer & 0xFFFFFFFFFFFFFF80ui64) + 0x44), (MemCardFileHandle)fileHandle->handle) == *(_DWORD *)(((unsigned __int64)buffer & 0xFFFFFFFFFFFFFF80ui64) + 0x44) )
      {
        v3 = 1;
        goto LABEL_12;
      }
    }
    CloseDevice((MemCardFileHandle)fileHandle->handle);
    Com_PrintError(10, "Bad read\n");
    v3 = 0;
  }
  else
  {
    Com_PrintError(10, "Savegame '%s' not found\n", (const char *)&g_pendingLoadName);
    v3 = 0;
  }
LABEL_12:
  MemCard_PopUseDevDrive();
  return v3;
}

/*
==============
G_SaveSP_GenerateCodePosMap
==============
*/
__int64 G_SaveSP_GenerateCodePosMap()
{
  bool UseDevSaveArea; 
  scrContext_t *v1; 
  unsigned int CodePosMap; 
  MemCardFileHandle fileHandle; 

  if ( !(unsigned int)G_SaveSP_DevOpenDeviceForScriptRead(&fileHandle) )
    return 0i64;
  UseDevSaveArea = MemCard_GetUseDevSaveArea();
  MemCard_PushUseDevDrive(UseDevSaveArea);
  v1 = ScriptContext_Server();
  CodePosMap = Scr_GenerateCodePosMap(v1, fileHandle);
  CloseDevice(fileHandle);
  MemCard_PopUseDevDrive();
  return CodePosMap;
}

/*
==============
G_SaveSP_GetSaveGameGetEntityFields
==============
*/
const saveField_t *G_SaveSP_GetSaveGameGetEntityFields(int eType)
{
  const saveField_t *result; 

  switch ( eType )
  {
    case 6:
      result = s_saveSP_gentityScriptMoverFields;
      break;
    case 7:
    case 10:
    case 20:
    case 22:
    case 25:
    case 26:
    case 28:
      result = s_saveSP_gentityMinimalFields;
      break;
    case 12:
    case 14:
    case 15:
    case 16:
      result = s_saveSP_gentityVehicleFields;
      break;
    default:
      result = s_saveSP_gentityGeneralFields;
      break;
  }
  return result;
}

/*
==============
G_SaveSP_LoadCanonicalStrings
==============
*/
void G_SaveSP_LoadCanonicalStrings(void)
{
  bool UseDevSaveArea; 
  const scrContext_t *v1; 
  MemCardFileHandle fileHandle; 

  if ( (unsigned int)G_SaveSP_DevOpenDeviceForScriptRead(&fileHandle) )
  {
    UseDevSaveArea = MemCard_GetUseDevSaveArea();
    MemCard_PushUseDevDrive(UseDevSaveArea);
    v1 = ScriptContext_Server();
    Scr_LoadCanonicalStrings(v1, fileHandle);
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
  }
}

/*
==============
G_SaveSP_LoadGame
==============
*/
void G_SaveSP_LoadGame(int checksum, SaveGame *save)
{
  const SaveHeader *Header; 
  unsigned int *RandomSeed; 
  int SpClientNum; 
  __int64 v6; 

  Com_Printf(10, "=== G_LoadGame ===\n");
  Profile_Begin(301);
  R_Cinematic_UnsetNextPlayback();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4317, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  Header = G_SaveMemorySP_GetHeader(save);
  if ( !Header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4319, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( Header->saveCheckSum != SaveMemory_CalculateChecksum(save) )
    Sys_Error((const ObfuscateErrorText)&stru_14435BE90);
  G_LoadMainState(save);
  G_SaveMemorySP_FinalizeLoad(save);
  R_LightTweak_Init();
  RandomSeed = G_GetRandomSeed();
  SV_DemoSP_Init(RandomSeed);
  if ( !SV_DemoSP_UsingDemoSave() )
  {
    SpClientNum = SvClientSP::GetSpClientNum();
    v6 = SpClientNum;
    SV_Game_GetUsercmd(SpClientNum, &level.clients[v6].sess.cmd);
    G_ClientSP_InitClientDeltaAngles(&level.clients[v6]);
    AIActorInterface::PruneLoadedCorpses();
    G_MainSP_CheckSoundsFinish();
  }
  Profile_EndInternal(NULL);
}

/*
==============
G_SaveSP_PreLoadGame
==============
*/
__int64 G_SaveSP_PreLoadGame(int checksum, int *useLoadedScripts, int useSavedScripts, SaveGame **save)
{
  bool UseDevSaveArea; 
  MemCardFileHandle *LoadFromDevice; 
  SaveGame *LastCommittedSave; 
  int v11; 
  SaveGame **v12; 
  const SaveHeader *Header; 
  MemoryFile *MemoryFile; 
  const scrContext_t *v15; 
  bool hasScriptSource; 
  scrContext_t *i; 
  scrContext_t *j; 
  MemoryFile *v19; 
  const SaveHeader *v20; 
  int checksuma[4]; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3491, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  Profile_Begin(301);
  UseDevSaveArea = MemCard_GetUseDevSaveArea();
  MemCard_PushUseDevDrive(UseDevSaveArea);
  if ( G_SaveMemorySP_IsCommittedSaveAvailable((const char *)&g_pendingLoadName, checksum) )
  {
    Com_Printf(10, "Using last committed save.\n");
    LoadFromDevice = NULL;
    LastCommittedSave = G_SaveMemorySP_GetLastCommittedSave();
    *save = LastCommittedSave;
    if ( LastCommittedSave )
      goto LABEL_11;
    v11 = 3503;
  }
  else
  {
    Com_Printf(10, "Loading save from device.\n");
    LoadFromDevice = G_SaveMemorySP_ReadLoadFromDevice(&g_pendingLoadName, (const char *)(unsigned int)checksum, (int)save, v12);
    if ( *save )
      goto LABEL_11;
    v11 = 3509;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", v11, ASSERT_TYPE_ASSERT, "(*save)", (const char *)&queryFormat, "*save") )
    __debugbreak();
LABEL_11:
  Header = G_SaveMemorySP_GetHeader(*save);
  if ( !Header->demoPlayback )
    SV_SaveSP_SetLastSaveName((const char *)&g_pendingLoadName);
  MemoryFile = SaveMemory_GetMemoryFile(*save);
  MemFile_InitForReading(MemoryFile, Header->bodySize, MemoryFile->buffer, 0, StreamModeSource_SaveSPPreLoadGame);
  G_SaveMemory_InitializeLoad(*save);
  if ( Header->demoPlayback )
  {
    if ( !LoadFromDevice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3526, ASSERT_TYPE_ASSERT, "(fileHandle)", (const char *)&queryFormat, "fileHandle") )
      __debugbreak();
    Dvar_LoadDvars(MemoryFile);
    SV_DemoSP_GetLoadIntelligence(MemoryFile);
  }
  if ( !useSavedScripts )
  {
    if ( *useLoadedScripts )
    {
      if ( LoadFromDevice )
      {
        v15 = ScriptContext_Server();
        Scr_GetChecksum(v15, checksuma);
        if ( checksuma[0] != Header->scrCheckSum[0] || checksuma[1] != Header->scrCheckSum[1] || checksuma[2] != Header->scrCheckSum[2] )
          useSavedScripts = 1;
      }
    }
  }
  hasScriptSource = Header->hasScriptSource;
  if ( useSavedScripts )
  {
    if ( !LoadFromDevice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3545, ASSERT_TYPE_ASSERT, "(fileHandle)", (const char *)&queryFormat, "fileHandle") )
      __debugbreak();
    if ( *useLoadedScripts )
    {
      *useLoadedScripts = 0;
      G_MainSP_ClearLowHunk();
    }
    for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
      Scr_LoadSource(i, MemoryFile, (MemCardFileHandle)LoadFromDevice, hasScriptSource);
  }
  else
  {
    for ( j = ScriptContext_GetFirst(); j; j = ScriptContext_GetNext(j) )
      Scr_SkipSource(j, MemoryFile, (MemCardFileHandle)LoadFromDevice, hasScriptSource);
  }
  MemFile_MoveToSegment(MemoryFile, -1, StreamModeSource_SPPreLoadGame);
  if ( MemoryFile->memoryOverflow )
  {
    if ( LoadFromDevice )
      CloseDevice((MemCardFileHandle)LoadFromDevice);
    MemCard_PopUseDevDrive();
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143FC82E0);
  }
  if ( Header->demoPlayback )
  {
    if ( !LoadFromDevice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3581, ASSERT_TYPE_ASSERT, "(fileHandle)", (const char *)&queryFormat, "fileHandle") )
      __debugbreak();
    v19 = SaveMemory_GetMemoryFile(*save);
    v20 = G_SaveMemorySP_GetHeader(*save);
    SV_DemoSP_LoadDemo(v20, v19, (MemCardFileHandle)LoadFromDevice);
  }
  if ( LoadFromDevice )
    CloseDevice((MemCardFileHandle)LoadFromDevice);
  MemCard_PopUseDevDrive();
  Profile_EndInternal(NULL);
  return 1i64;
}

/*
==============
G_SaveSP_ReadBadPlaces
==============
*/
void G_SaveSP_ReadBadPlaces(SaveGame *save)
{
  unsigned __int8 *p_type; 
  __int64 v3; 
  badplace_t *v4; 
  MemoryFile *MemoryFile; 
  bitarray<224> *p_teamflags; 
  __int64 v7; 
  const saveField_t *v8; 
  unsigned int *v9; 
  const char *Field; 
  __int64 v11; 

  v11 = 16i64;
  p_type = &g_badplaces[0].type;
  v3 = 0i64;
  do
  {
    if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1051, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
      __debugbreak();
    v4 = &g_badplaces[v3];
    if ( !&g_badplaces[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1053, ASSERT_TYPE_ASSERT, "( readData )", (const char *)&queryFormat, "readData") )
      __debugbreak();
    *(_QWORD *)&v4->endtime = 0i64;
    *(_QWORD *)&v4->name = 0i64;
    *(_QWORD *)v4->teamflags.array = 0i64;
    *(_QWORD *)&v4->teamflags.array[2] = 0i64;
    *(_QWORD *)&v4->teamflags.array[4] = 0i64;
    *(_QWORD *)&v4->teamflags.array[6] = 0i64;
    MemoryFile = SaveMemory_GetMemoryFile(save);
    if ( !MemoryFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
      __debugbreak();
    MemFile_ReadData(MemoryFile, 4ui64, v4);
    MemFile_ReadData(MemoryFile, 4ui64, &v4->pingTime);
    MemFile_ReadData(MemoryFile, 4ui64, &v4->name);
    MemFile_ReadData(MemoryFile, 1ui64, &v4->type);
    p_teamflags = &v4->teamflags;
    v7 = 2i64;
    do
    {
      MemFile_ReadData(MemoryFile, 4ui64, p_teamflags);
      p_teamflags = (bitarray<224> *)((char *)p_teamflags + 4);
      --v7;
    }
    while ( v7 );
    MemFile_ReadData(MemoryFile, 1ui64, &v4->flags);
    v8 = s_saveSP_badplaceFields;
    v9 = &s_saveSP_badplaceFields[0].type;
    do
    {
      Field = G_SaveFieldSP_ReadField(v8, (unsigned __int8 *)v4, save);
      if ( Field )
      {
        if ( *v9 )
        {
          do
            G_SaveFieldSP_ClearField(v8++, (unsigned __int8 *)v4);
          while ( v8->type );
        }
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435C350, 6104i64, Field);
      }
      ++v8;
      v9 = &v8->type;
    }
    while ( v8->type );
    if ( *p_type )
      Path_UpdateBadPlaceCount(&g_badplaces[v3], 1);
    ++v3;
    p_type += 48;
    --v11;
  }
  while ( v11 );
}

/*
==============
G_SaveSP_ReadClient
==============
*/
void G_SaveSP_ReadClient(gclient_s *client, SaveGame *save)
{
  MemoryFile *MemoryFile; 
  const saveField_t *v5; 
  unsigned int *p_type; 
  const char *Field; 
  int v9; 
  int v14; 
  GSaveSerialize<0> v18; 
  Weapon result; 
  int p; 

  _RDI = client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1276, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1277, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  memset_0(_RDI, 0, sizeof(gclient_s));
  MemoryFile = SaveMemory_GetMemoryFile(save);
  v18.m_buffer = NULL;
  *(_QWORD *)&v18.m_bufferSize = 0i64;
  if ( !MemoryFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
    __debugbreak();
  v18.m_memFile = MemoryFile;
  GSaveSerialize<0>::SerializeType<gclient_s>(&v18, _RDI);
  v5 = s_saveSP_gclientFields;
  p_type = &s_saveSP_gclientFields[0].type;
  do
  {
    Field = G_SaveFieldSP_ReadField(v5, (unsigned __int8 *)_RDI, save);
    if ( Field )
    {
      if ( *p_type )
      {
        do
          G_SaveFieldSP_ClearField(v5++, (unsigned __int8 *)_RDI);
        while ( v5->type );
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435ADD0, 496i64, Field);
    }
    ++v5;
    p_type = &v5->type;
  }
  while ( v5->type );
  SaveMemory_LoadRead(&_RDI->sess.cmd, 8, save);
  _RAX = G_SaveSP_ReadWeapon(&result, save);
  v9 = *(_DWORD *)&_RAX->weaponCamo;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovups xmm2, xmmword ptr [rax+20h]
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovups ymmword ptr [rdi+53D4h], ymm1
    vmovups xmmword ptr [rdi+53F4h], xmm2
    vmovsd  qword ptr [rdi+5404h], xmm0
  }
  *(_DWORD *)&_RDI->sess.cmd.weapon.weaponCamo = v9;
  _RAX = G_SaveSP_ReadWeapon(&result, save);
  v14 = *(_DWORD *)&_RAX->weaponCamo;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovups xmm2, xmmword ptr [rax+20h]
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovups ymmword ptr [rdi+5410h], ymm1
    vmovups xmmword ptr [rdi+5430h], xmm2
    vmovsd  qword ptr [rdi+5440h], xmm0
  }
  *(_DWORD *)&_RDI->sess.cmd.offHand.weaponCamo = v14;
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  _RDI->sess.cmd.isAlternate = p;
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  _RDI->sess.maxHealth = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(&save->memFile);
  __asm { vmovss  dword ptr [rdi+55C4h], xmm0 }
}

/*
==============
G_SaveSP_ReadPathNodes
==============
*/
void G_SaveSP_ReadPathNodes(SaveGame *save)
{
  pathnode_t *i; 
  int v2; 
  __int64 j; 
  int v4; 
  const char *GameType; 
  int v6; 
  bool v7; 
  const char *v8; 
  int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  const char *v13; 
  int v14; 
  int v15; 
  const char *v16; 
  int v17; 
  unsigned __int16 number; 
  unsigned __int16 v19; 
  gentity_s *ent; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  unsigned int k; 
  unsigned int m; 
  int v26; 
  _DWORD *v28; 
  __int64 v29; 
  _DWORD *p_fDist; 
  unsigned __int64 v31; 
  unsigned __int64 n; 
  unsigned int v33; 
  int v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  int buffer; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1629, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  for ( i = Path_FirstNode(-1); i; i = Path_NextNode(i, -1) )
  {
    v2 = 0;
    for ( j = 0i64; ; ++j )
    {
      if ( BG_BotSystemEnabled() )
      {
        GameType = SV_GameMP_GetGameType();
        v6 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
        if ( !v6 )
        {
          v6 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
          if ( !v6 )
            v6 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
        }
        v4 = (v6 != 0) + 1;
      }
      else
      {
        v4 = 1;
      }
      if ( v2 >= v4 )
        break;
      if ( BG_BotSystemEnabled() )
      {
        v8 = SV_GameMP_GetGameType();
        v9 = *(unsigned __int8 *)v8 - (unsigned __int8)aBr_2[0];
        if ( !v9 )
        {
          v9 = *((unsigned __int8 *)v8 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v9 )
            v9 = *((unsigned __int8 *)v8 + 2) - (unsigned __int8)aBr_2[2];
        }
        v7 = v9 == 0;
      }
      else
      {
        v7 = 1;
      }
      v10 = j;
      v11 = v2;
      if ( v7 )
        v10 = 0i64;
      if ( v7 )
        v11 = 0;
      if ( BG_BotSystemEnabled() )
      {
        v13 = SV_GameMP_GetGameType();
        v14 = *(unsigned __int8 *)v13 - (unsigned __int8)aBr_2[0];
        if ( !v14 )
        {
          v14 = *((unsigned __int8 *)v13 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v14 )
            v14 = *((unsigned __int8 *)v13 + 2) - (unsigned __int8)aBr_2[2];
        }
        v12 = (v14 != 0) + 1;
      }
      else
      {
        v12 = 1;
      }
      if ( v11 >= v12 )
      {
        if ( BG_BotSystemEnabled() )
        {
          v16 = SV_GameMP_GetGameType();
          v17 = *(unsigned __int8 *)v16 - (unsigned __int8)aBr_2[0];
          if ( !v17 )
          {
            v17 = *((unsigned __int8 *)v16 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v17 )
              v17 = *((unsigned __int8 *)v16 + 2) - (unsigned __int8)aBr_2[2];
          }
          v15 = (v17 != 0) + 1;
        }
        else
        {
          v15 = 1;
        }
        LODWORD(v38) = v15;
        LODWORD(v37) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v37, v38) )
          __debugbreak();
      }
      number = i->dynamic.pOwners[v10].number;
      if ( number )
      {
        if ( !level.sentients[number - 1].ent )
        {
          LODWORD(v38) = number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 136, ASSERT_TYPE_ASSERT, "( ( !number || level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( !number || level.sentients[number - 1].ent )", v38) )
            __debugbreak();
        }
        v19 = i->dynamic.pOwners[v10].number;
        if ( v19 )
        {
          ent = level.sentients[v19 - 1].ent;
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v21 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
          v22 = (v21 >> 63) + v21;
          if ( (unsigned int)v22 >= 0x800 )
          {
            LODWORD(v38) = 2048;
            LODWORD(v37) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v37, v38) )
              __debugbreak();
          }
          v22 = (__int16)v22;
          if ( (unsigned int)(__int16)v22 >= 0x800 )
          {
            LODWORD(v38) = 2048;
            LODWORD(v37) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v37, v38) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v22].r.isInUse != g_entityIsInUse[v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v22] )
          {
            LODWORD(v38) = i->dynamic.pOwners[v10].number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 137, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v38) )
              __debugbreak();
          }
          if ( i->dynamic.pOwners[v10].number )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1638, ASSERT_TYPE_ASSERT, "(!Path_NodeOwnerSentHandleConst( node, nodeTeam )->isDefined())", (const char *)&queryFormat, "!Path_NodeOwnerSentHandleConst( node, nodeTeam )->isDefined()") )
              __debugbreak();
          }
        }
      }
      ++v2;
    }
    G_SaveSP_ReadTypeFields_pathnode_dynamic_t_0_(save, s_saveSP_pathnodeDynamicFields, &i->dynamic);
    for ( k = i->constant.totalLinkCount - 1; (int)k >= i->dynamic.wLinkCount; --k )
    {
      SaveMemory_LoadRead(&buffer, 4, save);
      for ( m = 0; ; ++m )
      {
        if ( m > k && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1650, ASSERT_TYPE_ASSERT, "(linkIndex <= (uint)i)", (const char *)&queryFormat, "linkIndex <= (uint)i") )
          __debugbreak();
        _R8 = (__int64)&i->constant.Links[m];
        if ( *(unsigned __int16 *)(_R8 + 4) == buffer )
          break;
      }
      v26 = *(_DWORD *)(_R8 + 8);
      __asm
      {
        vmovsd  xmm1, qword ptr [r8]
        vmovsd  [rsp+88h+var_48], xmm1
      }
      if ( m < k )
      {
        v28 = (_DWORD *)(_R8 + 12);
        v29 = k - m;
        p_fDist = (_DWORD *)&i->constant.Links[m].fDist;
        m = k;
        v31 = 12 * v29;
        for ( n = v31 >> 2; n; --n )
          *p_fDist++ = *v28++;
        _R8 += v31;
      }
      v33 = i->constant.totalLinkCount - 1;
      if ( m < v33 )
      {
        _RCX = _R8 + 12;
        do
        {
          if ( *(_WORD *)(_RCX + 4) > WORD2(v39) )
            break;
          __asm { vmovsd  xmm0, qword ptr [rcx] }
          v36 = *(_DWORD *)(_RCX + 8);
          ++m;
          __asm { vmovsd  qword ptr [r8], xmm0 }
          *(_DWORD *)(_R8 + 8) = v36;
          _RCX += 12i64;
          _R8 += 12i64;
        }
        while ( m < v33 );
      }
      __asm { vmovsd  qword ptr [r8], xmm1 }
      *(_DWORD *)(_R8 + 8) = v26;
    }
  }
}

/*
==============
G_SaveSP_ReadSentient
==============
*/
void G_SaveSP_ReadSentient(sentient_s *sentient, SaveGame *save)
{
  MemoryFile *MemoryFile; 
  const saveField_t *v5; 
  unsigned int *p_type; 
  const char *Field; 
  int iDamageParts; 
  DamageParts *v9; 
  MemoryFile *v10; 
  MemoryFile *v11; 
  const saveField_t *v12; 
  unsigned int *v13; 
  const char *v14; 
  GSaveSerialize<0> v15; 

  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1526, ASSERT_TYPE_ASSERT, "( sentient )", (const char *)&queryFormat, "sentient") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1527, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  SaveMemory_LoadRead(&sentient->inuse, 1, save);
  if ( sentient->inuse )
  {
    if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1051, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
      __debugbreak();
    memset_0(sentient, 0, sizeof(sentient_s));
    MemoryFile = SaveMemory_GetMemoryFile(save);
    v15.m_buffer = NULL;
    *(_QWORD *)&v15.m_bufferSize = 0i64;
    if ( !MemoryFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
      __debugbreak();
    v15.m_memFile = MemoryFile;
    GSaveSerialize<0>::SerializeType<sentient_s>(&v15, sentient);
    v5 = s_saveSP_sentientFields;
    p_type = &s_saveSP_sentientFields[0].type;
    do
    {
      Field = G_SaveFieldSP_ReadField(v5, (unsigned __int8 *)sentient, save);
      if ( Field )
      {
        if ( *p_type )
        {
          do
            G_SaveFieldSP_ClearField(v5++, (unsigned __int8 *)sentient);
          while ( v5->type );
        }
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435C350, 6104i64, Field);
      }
      ++v5;
      p_type = &v5->type;
    }
    while ( v5->type );
    if ( !sentient->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1537, ASSERT_TYPE_ASSERT, "(sentient->inuse)", (const char *)&queryFormat, "sentient->inuse") )
      __debugbreak();
    iDamageParts = sentient->iDamageParts;
    if ( iDamageParts != -1 )
    {
      v9 = DamageParts_Get(iDamageParts);
      if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1051, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
        __debugbreak();
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1053, ASSERT_TYPE_ASSERT, "( readData )", (const char *)&queryFormat, "readData") )
        __debugbreak();
      memset_0(v9, 0, sizeof(DamageParts));
      v10 = SaveMemory_GetMemoryFile(save);
      v15.m_buffer = NULL;
      v11 = v10;
      *(_QWORD *)&v15.m_bufferSize = 0i64;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
        __debugbreak();
      v15.m_memFile = v11;
      GSaveSerialize<0>::SerializeType<DamageParts>(&v15, v9);
      v12 = g_saveSP_damagePartsField;
      v13 = &g_saveSP_damagePartsField[0].type;
      do
      {
        v14 = G_SaveFieldSP_ReadField(v12, (unsigned __int8 *)v9, save);
        if ( v14 )
        {
          if ( *v13 )
          {
            do
              G_SaveFieldSP_ClearField(v12++, (unsigned __int8 *)v9);
            while ( v12->type );
          }
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435C350, 6104i64, v14);
        }
        ++v12;
        v13 = &v12->type;
      }
      while ( v12->type );
    }
  }
}

/*
==============
G_SaveSP_ReadSentientInfoArray
==============
*/
void G_SaveSP_ReadSentientInfoArray(SaveGame *save, MemoryFile *memFile, sentient_info_t *sentientInfoArray)
{
  __int64 v6; 
  bool *p_bPeripherallyVisible; 
  __int64 v8; 
  bool *v9; 
  MemoryFile *MemoryFile; 
  const saveField_t *v11; 
  unsigned int *p_type; 
  const char *Field; 
  unsigned int p; 

  if ( !sentientInfoArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1417, ASSERT_TYPE_ASSERT, "( sentientInfoArray )", (const char *)&queryFormat, "sentientInfoArray") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &p);
  v6 = p;
  if ( p != level.maxSentients )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435AEA0, 1350i64);
  if ( (_DWORD)v6 )
  {
    p_bPeripherallyVisible = &sentientInfoArray->VisCache.bPeripherallyVisible;
    v8 = v6;
    do
    {
      if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1051, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
        __debugbreak();
      v9 = p_bPeripherallyVisible - 2;
      if ( p_bPeripherallyVisible == (bool *)2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1053, ASSERT_TYPE_ASSERT, "( readData )", (const char *)&queryFormat, "readData") )
        __debugbreak();
      *(_QWORD *)v9 = 0i64;
      *((_QWORD *)v9 + 1) = 0i64;
      *((_QWORD *)v9 + 2) = 0i64;
      *((_QWORD *)v9 + 3) = 0i64;
      *((_QWORD *)v9 + 4) = 0i64;
      *((_QWORD *)v9 + 5) = 0i64;
      *((_QWORD *)v9 + 6) = 0i64;
      *((_QWORD *)v9 + 7) = 0i64;
      MemoryFile = SaveMemory_GetMemoryFile(save);
      if ( !MemoryFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
        __debugbreak();
      MemFile_ReadData(MemoryFile, 1ui64, p_bPeripherallyVisible - 2);
      MemFile_ReadData(MemoryFile, 1ui64, p_bPeripherallyVisible - 1);
      MemFile_ReadData(MemoryFile, 1ui64, p_bPeripherallyVisible);
      MemFile_ReadData(MemoryFile, 4ui64, p_bPeripherallyVisible + 2);
      MemFile_ReadData(MemoryFile, 4ui64, p_bPeripherallyVisible + 6);
      MemFile_ReadData(MemoryFile, 4ui64, p_bPeripherallyVisible + 10);
      MemFile_ReadData(MemoryFile, 4ui64, p_bPeripherallyVisible + 14);
      MemFile_ReadData(MemoryFile, 4ui64, p_bPeripherallyVisible + 18);
      MemFile_ReadData(MemoryFile, 4ui64, p_bPeripherallyVisible + 22);
      MemFile_ReadData(MemoryFile, 4ui64, p_bPeripherallyVisible + 26);
      MemFile_ReadData(MemoryFile, 0xCui64, p_bPeripherallyVisible + 30);
      MemFile_ReadData(MemoryFile, 4ui64, p_bPeripherallyVisible + 46);
      MemFile_ReadData(MemoryFile, 2ui64, p_bPeripherallyVisible + 54);
      MemFile_ReadData(MemoryFile, 1ui64, p_bPeripherallyVisible + 56);
      MemFile_ReadData(MemoryFile, 1ui64, p_bPeripherallyVisible + 58);
      MemFile_ReadData(MemoryFile, 1ui64, p_bPeripherallyVisible + 59);
      MemFile_ReadData(MemoryFile, 2ui64, p_bPeripherallyVisible + 60);
      v11 = s_saveSP_sentientInfoFields;
      p_type = &s_saveSP_sentientInfoFields[0].type;
      do
      {
        Field = G_SaveFieldSP_ReadField(v11, (unsigned __int8 *)p_bPeripherallyVisible - 2, save);
        if ( Field )
        {
          if ( *p_type )
          {
            do
              G_SaveFieldSP_ClearField(v11++, (unsigned __int8 *)p_bPeripherallyVisible - 2);
            while ( v11->type );
          }
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435C350, 6104i64, Field);
        }
        ++v11;
        p_type = &v11->type;
      }
      while ( v11->type );
      p_bPeripherallyVisible += 64;
      --v8;
    }
    while ( v8 );
  }
}

/*
==============
G_SaveSP_ReadTurretStructs
==============
*/
void G_SaveSP_ReadTurretStructs(SaveGame *save, const saveField_t *turretFields, GTurretData *turret, const saveField_t *turretSpFields, GTurretDataSP *turretSp)
{
  MemoryFile *MemoryFile; 
  const char *Field; 
  GSaveSerialize<0> v11; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1051, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !turretFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1052, ASSERT_TYPE_ASSERT, "( saveFields )", (const char *)&queryFormat, "saveFields") )
    __debugbreak();
  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1053, ASSERT_TYPE_ASSERT, "( readData )", (const char *)&queryFormat, "readData") )
    __debugbreak();
  memset_0(turret, 0, sizeof(GTurretData));
  MemoryFile = SaveMemory_GetMemoryFile(save);
  v11.m_buffer = NULL;
  *(_QWORD *)&v11.m_bufferSize = 0i64;
  if ( !MemoryFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
    __debugbreak();
  v11.m_memFile = MemoryFile;
  GSaveSerialize<0>::SerializeType<GTurretData>(&v11, turret);
  for ( ; turretFields->type; ++turretFields )
  {
    Field = G_SaveFieldSP_ReadField(turretFields, (unsigned __int8 *)turret, save);
    if ( Field )
    {
      for ( ; turretFields->type; ++turretFields )
        G_SaveFieldSP_ClearField(turretFields, (unsigned __int8 *)turret);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435C350, 6104i64, Field);
    }
  }
  G_SaveSP_ReadTypeFields_GTurretDataSP_0_(save, turretSpFields, turretSp);
}

/*
==============
G_SaveSP_ReadVehicleStruct
==============
*/
void G_SaveSP_ReadVehicleStruct(SaveGame *save, const saveField_t *saveFields, Vehicle *veh)
{
  MemoryFile *MemoryFile; 
  const char *Field; 
  GSaveSerialize<0> v8; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1051, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !saveFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1052, ASSERT_TYPE_ASSERT, "( saveFields )", (const char *)&queryFormat, "saveFields") )
    __debugbreak();
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1053, ASSERT_TYPE_ASSERT, "( readData )", (const char *)&queryFormat, "readData") )
    __debugbreak();
  memset_0(veh, 0, sizeof(Vehicle));
  MemoryFile = SaveMemory_GetMemoryFile(save);
  v8.m_buffer = NULL;
  *(_QWORD *)&v8.m_bufferSize = 0i64;
  if ( !MemoryFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
    __debugbreak();
  v8.m_memFile = MemoryFile;
  GSaveSerialize<0>::SerializeType<Vehicle>(&v8, veh);
  for ( ; saveFields->type; ++saveFields )
  {
    Field = G_SaveFieldSP_ReadField(saveFields, (unsigned __int8 *)veh, save);
    if ( Field )
    {
      for ( ; saveFields->type; ++saveFields )
        G_SaveFieldSP_ClearField(saveFields, (unsigned __int8 *)veh);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435C350, 6104i64, Field);
    }
  }
}

/*
==============
G_SaveSP_ReadWeapon
==============
*/
Weapon *G_SaveSP_ReadWeapon(Weapon *result, SaveGame *save)
{
  MemoryFile *MemoryFile; 
  int v7; 
  Weapon resulta; 
  char psz[512]; 

  _RBX = result;
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1174, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  MemoryFile = SaveMemory_GetMemoryFile(save);
  if ( !GSave::ms_weaponNameSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 79, ASSERT_TYPE_ASSERT, "(ms_weaponNameSize != 0)", (const char *)&queryFormat, "ms_weaponNameSize != 0") )
    __debugbreak();
  G_SaveField_ReadCStyleString(psz, GSave::ms_weaponNameSize, MemoryFile);
  if ( psz[0] )
  {
    _RAX = G_Weapon_GetWeaponForName(&resulta, psz);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups ymmword ptr [rbx], ymm0
      vmovsd  xmm0, qword ptr [rax+30h]
    }
    v7 = *(_DWORD *)&_RAX->weaponCamo;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    }
    v7 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    __asm
    {
      vmovups ymmword ptr [rbx], ymm0
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    }
  }
  __asm
  {
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  *(_DWORD *)&_RBX->weaponCamo = v7;
  return _RBX;
}

/*
==============
G_SaveSP_RestorePlayerEventWeapons
==============
*/
void G_SaveSP_RestorePlayerEventWeapons(playerState_s *ps, Weapon *predictableEventWeapons, Weapon *unpredictableEventWeapons)
{
  EntityEvent *events; 
  unsigned int *p_eventParm; 
  __int64 v8; 
  GWeaponMap *Instance; 
  Weapon *v10; 
  __int64 v11; 
  EntityEvent *unpredictableEvents; 
  unsigned int *v13; 
  __int64 v14; 
  __int64 v15; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2077, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !predictableEventWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2078, ASSERT_TYPE_ASSERT, "( predictableEventWeapons )", (const char *)&queryFormat, "predictableEventWeapons") )
    __debugbreak();
  if ( !unpredictableEventWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2079, ASSERT_TYPE_ASSERT, "( unpredictableEventWeapons )", (const char *)&queryFormat, "unpredictableEventWeapons") )
    __debugbreak();
  events = ps->pe.events;
  p_eventParm = &ps->pe.events[0].eventParm;
  v8 = 4i64;
  Instance = GWeaponMap::GetInstance();
  do
  {
    if ( BG_IsWeaponEvent(events->eventType) )
    {
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 489, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !p_eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 490, ASSERT_TYPE_ASSERT, "(eventParm)", (const char *)&queryFormat, "eventParm") )
        __debugbreak();
      if ( predictableEventWeapons->weaponIdx >= BG_GetNumWeapons() )
      {
        LODWORD(v15) = BG_GetNumWeapons();
        LODWORD(v14) = predictableEventWeapons->weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 491, ASSERT_TYPE_ASSERT, "(unsigned)( r_weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "r_weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      Instance->SetWeapon(Instance, (BgWeaponHandle *)p_eventParm, predictableEventWeapons);
    }
    p_eventParm += 2;
    ++events;
    ++predictableEventWeapons;
    --v8;
  }
  while ( v8 );
  v10 = unpredictableEventWeapons;
  v11 = 4i64;
  unpredictableEvents = ps->unpredictableEvents;
  v13 = &ps->unpredictableEvents[0].eventParm;
  do
  {
    if ( BG_IsWeaponEvent(unpredictableEvents->eventType) )
    {
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 489, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 490, ASSERT_TYPE_ASSERT, "(eventParm)", (const char *)&queryFormat, "eventParm") )
        __debugbreak();
      if ( v10->weaponIdx >= BG_GetNumWeapons() )
      {
        LODWORD(v15) = BG_GetNumWeapons();
        LODWORD(v14) = v10->weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 491, ASSERT_TYPE_ASSERT, "(unsigned)( r_weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "r_weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      Instance->SetWeapon(Instance, (BgWeaponHandle *)v13, v10);
    }
    v13 += 2;
    ++unpredictableEvents;
    ++v10;
    --v11;
  }
  while ( v11 );
}

/*
==============
G_SaveSP_SaveGame
==============
*/
__int64 G_SaveSP_SaveGame(const PendingSave *pendingSave, int checksum)
{
  SaveType saveType; 
  unsigned int v5; 
  unsigned int commitLevel; 
  SaveGame *SaveHandle; 
  int health; 
  SaveGame *v10; 
  bool v11; 

  ProfLoad_Begin("G_SaveGame");
  if ( !pendingSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3403, ASSERT_TYPE_ASSERT, "(pendingSave)", (const char *)&queryFormat, "pendingSave", -2i64) )
    __debugbreak();
  saveType = pendingSave->saveType;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3123, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3124, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  if ( !SV_TransientsSP_IsSafeToSave() || R_IsGPUHung() )
    goto LABEL_26;
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities->r.isInUse != *g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !*g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3137, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
    __debugbreak();
  if ( saveType && g_entities->health <= 0 )
    goto LABEL_26;
  ProfLoad_Begin("SND_ExistsPendingRestore");
  if ( Sys_IsServerThread() && SND_ExistsPendingRestore() )
  {
    ProfLoad_End();
LABEL_26:
    v5 = 0;
    goto LABEL_27;
  }
  ProfLoad_End();
  ProfLoad_Begin("G_PrepareSaveMemoryForWrite");
  commitLevel = pendingSave->commitLevel;
  SaveHandle = G_SaveMemorySP_GetSaveHandle(SAVE_GAME_HANDLE);
  if ( !SaveHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3346, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities->r.isInUse != *g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !*g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3348, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
    __debugbreak();
  health = g_entities->health;
  if ( G_SaveMemorySP_IsWaitingForCommit(SaveHandle) && health > 0 && (commitLevel & 6) != 0 )
    G_SaveMemorySP_ForceCommitSave(SaveHandle);
  ProfLoad_End();
  G_SaveMemorySP_ClearPendingCommit();
  ProfLoad_Begin("SaveMemory_GetSaveHandle");
  v10 = G_SaveMemorySP_GetSaveHandle(SAVE_GAME_HANDLE);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3428, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  ProfLoad_End();
  ProfLoad_Begin("G_WriteGame");
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_WriteGame");
  v11 = G_WriteGame(pendingSave, checksum, v10);
  Sys_ProfEndNamedEvent();
  ProfLoad_End();
  if ( !v11 )
    goto LABEL_26;
  ProfLoad_Begin("G_ProcessCommitActions");
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3369, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  v5 = 0;
  ProfLoad_Begin("SaveMemory_ForceCommitSave");
  if ( (pendingSave->commitLevel & 2) != 0 )
    G_SaveMemorySP_ForceCommitSave(v10);
  ProfLoad_End();
  if ( (pendingSave->commitLevel & 4) != 0 )
  {
    if ( pendingSave->saveType != SAVE_TYPE_AUTOSAVE )
      MemCard_PushUseDevDrive(1);
    ProfLoad_Begin("SaveMemory_WriteSaveToDevice");
    v5 = G_SaveMemorySP_WriteSaveToDevice(v10);
    ProfLoad_End();
    if ( pendingSave->saveType != SAVE_TYPE_AUTOSAVE )
      MemCard_PopUseDevDrive();
  }
  ProfLoad_End();
LABEL_27:
  ProfLoad_End();
  return v5;
}

/*
==============
G_SaveSP_SaveState
==============
*/
void G_SaveSP_SaveState(bool savegame, MemoryFile *memFile)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3104, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveInitState");
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2039, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveMainState");
  G_SaveMainState(savegame, memFile);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_SaveSP_SaveStateClient
==============
*/
void G_SaveSP_SaveStateClient(MemoryFile *memFile, bool savegame)
{
  __int64 OnlyLocalClientNum; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v6; 
  int ControllerFromClient; 
  __int64 v8; 
  unsigned __int64 v9; 
  gclient_s *clients; 
  GWeaponMap *Instance; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP_SaveStateClient");
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  UsedSize = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("client", UsedSize);
  v6 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("clientState", v6);
  if ( savegame )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GamerProfile_UpdateProfileAndSaveIfNeeded");
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)OnlyLocalClientNum);
    GamerProfile_UpdateProfileAndSaveIfNeeded(ControllerFromClient);
    Sys_ProfEndNamedEvent();
  }
  MemFile_StartSegment(memFile, 6, StreamModeSource_SPSaveMainState);
  v8 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
  if ( !v8 )
    CgStatic::SetActiveStatics((const LocalClientNum_t)OnlyLocalClientNum);
  AimTarget_Save(memFile);
  SaveGameTrackingMarker(memFile, "Client - Aim Target");
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Client Scriptable");
  ScriptableClSP_ArchiveState(memFile);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(memFile, "Client - Scriptable");
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Client DynEnt");
  DynEnt_WriteSaveGame(memFile);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(memFile, "Client - DynEnt");
  Mayhem_WriteSaveGame(memFile);
  SaveGameTrackingMarker(memFile, "Client - Mayhem");
  CG_SaveGlass(memFile);
  SaveGameTrackingMarker(memFile, "Client - Glass");
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Client Entities");
  CG_EntitySP_SaveEntities(memFile);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(memFile, "Client - Entities");
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Client Archive");
  CL_CGameSP_ArchiveClientState(memFile);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(memFile, "Client - Archive");
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP Client - FX Entities");
  CG_SaveFXEntities(memFile);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP Client - Sound Entities");
  CG_SaveSoundEntities(memFile);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(memFile, "Client - Fx Entities");
  v9 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v9);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP Client - Server Cmds");
  SV_SaveSP_SaveServerCommands(memFile);
  Sys_ProfEndNamedEvent();
  if ( level.maxclients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3054, ASSERT_TYPE_ASSERT, "(level.maxclients == 1)", "%s\n\tOnly one client is supported in SP", "level.maxclients == 1") )
    __debugbreak();
  clients = level.clients;
  Instance = GWeaponMap::GetInstance();
  if ( !CgWeaponMap::ms_instance[OnlyLocalClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CgWeaponMap::CopyMap(CgWeaponMap::ms_instance[OnlyLocalClientNum], Instance);
  CG_SaveViewModelAnimTrees(memFile, &clients->ps, (LocalClientNum_t)OnlyLocalClientNum);
  CG_SaveFOVLerp(memFile, (LocalClientNum_t)OnlyLocalClientNum);
  CG_SaveSlide(memFile, (LocalClientNum_t)OnlyLocalClientNum);
  CG_SaveViewLinkedEntities(memFile, (LocalClientNum_t)OnlyLocalClientNum);
  CG_Shake_Save(memFile, (LocalClientNum_t)OnlyLocalClientNum);
  CG_SaveCinematicLetterBoxInfo(memFile, (LocalClientNum_t)OnlyLocalClientNum);
  if ( !v8 )
    CgStatic::ClearActiveStatics((const LocalClientNum_t)OnlyLocalClientNum);
  G_SaveMemorySP_SetClientMemoryFileValid(1);
  SaveGameTrackingMarker(memFile, "Client - Misc");
  Sys_ProfEndNamedEvent();
}

/*
==============
G_SaveSP_ScrFreeActorFields
==============
*/
void G_SaveSP_ScrFreeActorFields(actor_s *pActor)
{
  unsigned int i; 

  G_SaveField_FreeFields(s_saveSP_actorFields, (unsigned __int8 *)pActor);
  if ( pActor->sentientInfo )
  {
    for ( i = 0; i < level.maxSentients; ++i )
      G_SaveField_FreeFields(s_saveSP_sentientInfoFields, (unsigned __int8 *)&pActor->sentientInfo[(unsigned __int64)i]);
  }
}

/*
==============
G_SaveSP_SecondarySaveGameThread
==============
*/
void __noreturn G_SaveSP_SecondarySaveGameThread(unsigned int threadContext)
{
  unsigned int SaveGameSecondarySaveStateThreadId; 
  MemoryFile *SecondarySaveThreadMemoryFile; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v4; 

  SaveGameSecondarySaveStateThreadId = Physics_GetSaveGameSecondarySaveStateThreadId();
  Physics_OnThreadInit(SaveGameSecondarySaveStateThreadId);
  while ( 1 )
  {
    do
      Sys_WaitSaveGameSecondaryEvent();
    while ( !Com_IsAnyLocalServerRunning() );
    if ( !G_SaveMemorySP_IsSecondarySaveThreadInProgress() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2360, ASSERT_TYPE_ASSERT, "(G_SaveMemorySP_IsSecondarySaveThreadInProgress())", (const char *)&queryFormat, "G_SaveMemorySP_IsSecondarySaveThreadInProgress()") )
      __debugbreak();
    SecondarySaveThreadMemoryFile = G_SaveMemorySP_GetSecondarySaveThreadMemoryFile();
    G_SaveMemorySP_InitializeSecondarySaveThreadMemoryFile(SecondarySaveThreadMemoryFile);
    SaveGameTrackingInitialize(SecondarySaveThreadMemoryFile);
    UsedSize = MemFile_GetUsedSize(SecondarySaveThreadMemoryFile);
    ProfMem_Begin("Physics", UsedSize);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Physics");
    MemFile_StartSegment(SecondarySaveThreadMemoryFile, 5, StreamModeSource_SPSaveMainState);
    WorldCollision_Write(SecondarySaveThreadMemoryFile);
    StaticModels_Write(SecondarySaveThreadMemoryFile);
    Physics_Write(SecondarySaveThreadMemoryFile);
    Sys_ProfEndNamedEvent();
    v4 = MemFile_GetUsedSize(SecondarySaveThreadMemoryFile);
    ProfMem_End(v4);
    SaveGameTrackingMarker(SecondarySaveThreadMemoryFile, "Secondary - Physics");
    G_SaveMemorySP_SetSecondarySaveInProgress(0);
  }
}

/*
==============
G_SaveSP_SetPendingLoadName
==============
*/
void G_SaveSP_SetPendingLoadName(const char *filename)
{
  Core_strcpy((char *)&g_pendingLoadName, 0x40ui64, filename);
}

/*
==============
G_SaveSP_UpdateAllEntities
==============
*/
void G_SaveSP_UpdateAllEntities(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  v0 = 0;
  if ( level.num_entities > 0 )
  {
    v1 = 0i64;
    v2 = 0i64;
    do
    {
      if ( (unsigned int)v0 >= 0x800 )
      {
        LODWORD(v4) = 2048;
        LODWORD(v3) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v1].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v2] )
      {
        if ( g_entities[v1].r.isLinked )
          SV_LinkEntity(&g_entities[v1]);
      }
      ++v0;
      ++v2;
      ++v1;
    }
    while ( v0 < level.num_entities );
  }
}

/*
==============
G_SaveSP_WriteBadPlaces
==============
*/
void G_SaveSP_WriteBadPlaces(MemoryFile *memFile)
{
  __int64 v3; 
  const saveField_t *v6; 
  unsigned __int8 *v7; 
  __int64 v8; 
  const saveField_t *v9; 
  unsigned __int8 base[32]; 
  __int128 p; 

  _RDI = (const unsigned __int8 *)g_badplaces;
  v3 = 16i64;
  do
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteTypeFields");
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 966, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 968, ASSERT_TYPE_ASSERT, "( writeData )", (const char *)&queryFormat, "writeData") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rsp+0B8h+base], ymm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups [rsp+0B8h+p], xmm1
    }
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fixup");
    v6 = s_saveSP_badplaceFields;
    do
      G_SaveFieldSP_WriteFixupField(v6++, base, _RDI);
    while ( v6->type );
    Sys_ProfEndNamedEvent();
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
      __debugbreak();
    MemFile_WriteData(memFile, 4ui64, base);
    MemFile_WriteData(memFile, 4ui64, &base[4]);
    MemFile_WriteData(memFile, 4ui64, &base[8]);
    MemFile_WriteData(memFile, 1ui64, &base[12]);
    v7 = &base[16];
    v8 = 2i64;
    do
    {
      MemFile_WriteData(memFile, 4ui64, v7);
      v7 += 4;
      --v8;
    }
    while ( v8 );
    MemFile_WriteData(memFile, 1ui64, (char *)&p + 12);
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fields");
    v9 = s_saveSP_badplaceFields;
    do
      G_SaveFieldSP_WriteField(v9++, _RDI, memFile);
    while ( v9->type );
    Sys_ProfEndNamedEvent();
    Sys_ProfEndNamedEvent();
    _RDI += 48;
    --v3;
  }
  while ( v3 );
}

/*
==============
G_SaveSP_WriteClient
==============
*/
void G_SaveSP_WriteClient(gclient_s *cl, MemoryFile *memFile)
{
  char *m_ptr; 
  const saveField_t *v5; 
  const saveField_t *v6; 
  GSaveSerialize<2> v8; 
  Mem_LargeLocal base; 
  int p; 

  _RSI = cl;
  Mem_LargeLocal::Mem_LargeLocal(&base, 0xFC50ui64, "gclient_t saveClient");
  m_ptr = (char *)base.m_ptr;
  Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteClient");
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1189, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile", -2i64) )
    __debugbreak();
  memcpy_0(m_ptr, _RSI, 0xFC50ui64);
  *(_QWORD *)(m_ptr + 380) = 0i64;
  *(_QWORD *)(m_ptr + 388) = 0i64;
  *(_QWORD *)(m_ptr + 396) = 0i64;
  *(_QWORD *)(m_ptr + 404) = 0i64;
  *(_QWORD *)(m_ptr + 412) = 0i64;
  *(_QWORD *)(m_ptr + 428) = 0i64;
  *(_QWORD *)(m_ptr + 436) = 0i64;
  *(_QWORD *)(m_ptr + 444) = 0i64;
  *(_QWORD *)(m_ptr + 452) = 0i64;
  *(_QWORD *)(m_ptr + 420) = 0i64;
  memset_0(m_ptr + 24512, 0, 0x4160ui64);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteClient_Fixup");
  v5 = s_saveSP_gclientFields;
  v6 = s_saveSP_gclientFields;
  do
    G_SaveFieldSP_WriteFixupField(v6++, (unsigned __int8 *)m_ptr, (const unsigned __int8 *)_RSI);
  while ( v6->type );
  Sys_ProfEndNamedEvent();
  v8.m_buffer = NULL;
  *(_QWORD *)&v8.m_bufferSize = 0i64;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
    __debugbreak();
  v8.m_memFile = memFile;
  GSaveSerialize<2>::SerializeType<gclient_s>(&v8, (gclient_s *)m_ptr);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteClient_Fields");
  do
    G_SaveFieldSP_WriteField(v5++, (const unsigned __int8 *)_RSI, memFile);
  while ( v5->type );
  Sys_ProfEndNamedEvent();
  MemFile_WriteData(memFile, 8ui64, &_RSI->sess.cmd);
  G_SaveSP_WriteWeapon(&_RSI->sess.cmd.weapon, memFile);
  G_SaveSP_WriteWeapon(&_RSI->sess.cmd.offHand, memFile);
  LOBYTE(p) = _RSI->sess.cmd.isAlternate;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = _RSI->sess.maxHealth;
  MemFile_WriteData(memFile, 4ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rsi+55C4h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  Sys_ProfEndNamedEvent();
  Mem_LargeLocal::~Mem_LargeLocal(&base);
}

/*
==============
G_SaveSP_WritePathNodes
==============
*/
void G_SaveSP_WritePathNodes(MemoryFile *memFile)
{
  pathnode_t *i; 
  const saveField_t *v6; 
  unsigned __int8 *v7; 
  __int64 v8; 
  unsigned __int8 *v9; 
  __int64 v10; 
  unsigned __int8 *v11; 
  __int64 v12; 
  char *v13; 
  __int64 v14; 
  const saveField_t *v15; 
  __int64 totalLinkCount; 
  int v17; 
  __int64 v18; 
  int v19[8]; 
  __int64 v20; 
  unsigned __int8 base[32]; 
  __int128 p; 
  int inPlayerLOSTime; 

  v20 = -2i64;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1603, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  for ( i = Path_FirstNode(-1); i; i = Path_NextNode(i, -1) )
  {
    _RBP = &i->dynamic;
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteTypeFields");
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 966, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( i == (pathnode_t *)-88i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 968, ASSERT_TYPE_ASSERT, "( writeData )", (const char *)&queryFormat, "writeData") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+0]
      vmovups ymmword ptr [rsp+0C8h+base], ymm0
      vmovups xmm1, xmmword ptr [rbp+20h]
      vmovups [rsp+0C8h+p], xmm1
    }
    inPlayerLOSTime = i->dynamic.actors.inPlayerLOSTime;
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fixup");
    v6 = s_saveSP_pathnodeDynamicFields;
    do
      G_SaveFieldSP_WriteFixupField(v6++, base, (const unsigned __int8 *)&i->dynamic);
    while ( v6->type );
    Sys_ProfEndNamedEvent();
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
      __debugbreak();
    v7 = base;
    v8 = 2i64;
    do
    {
      MemFile_WriteData(memFile, 4ui64, v7);
      v7 += 4;
      --v8;
    }
    while ( v8 );
    v9 = &base[8];
    v10 = 2i64;
    do
    {
      MemFile_WriteData(memFile, 4ui64, v9);
      v9 += 4;
      --v10;
    }
    while ( v10 );
    v11 = &base[16];
    v12 = 3i64;
    do
    {
      MemFile_WriteData(memFile, 4ui64, v11);
      v11 += 4;
      --v12;
    }
    while ( v12 );
    MemFile_WriteData(memFile, 2ui64, &base[28]);
    MemFile_WriteData(memFile, 2ui64, &base[30]);
    MemFile_WriteData(memFile, 1ui64, &p);
    v13 = (char *)&p + 1;
    v14 = 2i64;
    do
    {
      MemFile_WriteData(memFile, 1ui64, v13++);
      --v14;
    }
    while ( v14 );
    MemFile_WriteData(memFile, 0x10ui64, (char *)&p + 4);
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fields");
    v15 = s_saveSP_pathnodeDynamicFields;
    do
      G_SaveFieldSP_WriteField(v15++, (const unsigned __int8 *)&i->dynamic, memFile);
    while ( v15->type );
    Sys_ProfEndNamedEvent();
    Sys_ProfEndNamedEvent();
    totalLinkCount = i->constant.totalLinkCount;
    v17 = totalLinkCount - 1;
    if ( (int)totalLinkCount - 1 >= i->dynamic.wLinkCount )
    {
      v18 = 12 * totalLinkCount - 12;
      do
      {
        v19[0] = *(unsigned __int16 *)((char *)&i->constant.Links->nodeNum + v18);
        MemFile_WriteData(memFile, 4ui64, v19);
        --v17;
        v18 -= 12i64;
      }
      while ( v17 >= i->dynamic.wLinkCount );
    }
  }
}

/*
==============
G_SaveSP_WriteSentientInfoArray
==============
*/
void G_SaveSP_WriteSentientInfoArray(MemoryFile *memFile, sentient_info_t *sentientInfoArray, const unsigned int sentientInfoCount)
{
  __int64 v3; 
  __int64 v6; 
  const saveField_t *v9; 
  const saveField_t *v10; 
  int p[8]; 
  __int64 v12; 
  unsigned __int8 base[32]; 
  __m256i v14; 

  v12 = -2i64;
  v3 = sentientInfoCount;
  _RDI = sentientInfoArray;
  if ( !sentientInfoArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1400, ASSERT_TYPE_ASSERT, "( sentientInfoArray )", (const char *)&queryFormat, "sentientInfoArray") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteSentientInfoArray");
  p[0] = v3;
  MemFile_WriteData(memFile, 4ui64, p);
  if ( (_DWORD)v3 )
  {
    v6 = v3;
    do
    {
      Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteTypeFields");
      if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 966, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
        __debugbreak();
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 968, ASSERT_TYPE_ASSERT, "( writeData )", (const char *)&queryFormat, "writeData") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [rbp+57h+base], ymm0
        vmovups ymm1, ymmword ptr [rdi+20h]
        vmovups ymmword ptr [rbp+57h+var_60], ymm1
      }
      Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fixup");
      v9 = s_saveSP_sentientInfoFields;
      do
        G_SaveFieldSP_WriteFixupField(v9++, base, (const unsigned __int8 *)_RDI);
      while ( v9->type );
      Sys_ProfEndNamedEvent();
      if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
        __debugbreak();
      MemFile_WriteData(memFile, 1ui64, base);
      MemFile_WriteData(memFile, 1ui64, &base[1]);
      MemFile_WriteData(memFile, 1ui64, &base[2]);
      MemFile_WriteData(memFile, 4ui64, &base[4]);
      MemFile_WriteData(memFile, 4ui64, &base[8]);
      MemFile_WriteData(memFile, 4ui64, &base[12]);
      MemFile_WriteData(memFile, 4ui64, &base[16]);
      MemFile_WriteData(memFile, 4ui64, &base[20]);
      MemFile_WriteData(memFile, 4ui64, &base[24]);
      MemFile_WriteData(memFile, 4ui64, &base[28]);
      MemFile_WriteData(memFile, 0xCui64, &v14);
      MemFile_WriteData(memFile, 4ui64, &v14.m256i_u64[2]);
      MemFile_WriteData(memFile, 2ui64, &v14.m256i_u64[3]);
      MemFile_WriteData(memFile, 1ui64, (char *)&v14.m256i_u64[3] + 2);
      MemFile_WriteData(memFile, 1ui64, (char *)&v14.m256i_u64[3] + 4);
      MemFile_WriteData(memFile, 1ui64, (char *)&v14.m256i_u64[3] + 5);
      MemFile_WriteData(memFile, 2ui64, (char *)&v14.m256i_u64[3] + 6);
      Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fields");
      v10 = s_saveSP_sentientInfoFields;
      do
        G_SaveFieldSP_WriteField(v10++, (const unsigned __int8 *)_RDI, memFile);
      while ( v10->type );
      Sys_ProfEndNamedEvent();
      Sys_ProfEndNamedEvent();
      ++_RDI;
      --v6;
    }
    while ( v6 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_SaveSP_WriteTurretStructs
==============
*/
void G_SaveSP_WriteTurretStructs(MemoryFile *memFile, const saveField_t *turretFields, const GTurretData *turret, const saveField_t *turretSpFields, const GTurretDataSP *turretSp)
{
  Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteTurretStructs");
  G_SaveSP_WriteTypeFields_GTurretData_2_(memFile, turretFields, turret);
  G_SaveSP_WriteTypeFields_GTurretDataSP_2_(memFile, turretSpFields, turretSp);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_SaveSP_WriteVehicleStruct
==============
*/
void G_SaveSP_WriteVehicleStruct(MemoryFile *memFile, const saveField_t *saveFields, const Vehicle *veh)
{
  Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteVehicleStruct");
  G_SaveSP_WriteTypeFields_Vehicle_2_(memFile, saveFields, veh);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_SaveSP_WriteWeapon
==============
*/
void G_SaveSP_WriteWeapon(const Weapon *weapon, MemoryFile *memFile)
{
  unsigned int v4; 
  char *WeaponName; 
  int v6; 
  const char *v7; 
  char output[512]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1155, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( weapon->weaponIdx )
  {
    if ( !GSave::ms_weaponNameSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 79, ASSERT_TYPE_ASSERT, "(ms_weaponNameSize != 0)", (const char *)&queryFormat, "ms_weaponNameSize != 0") )
      __debugbreak();
    v4 = GSave::ms_weaponNameSize;
    WeaponName = BG_GetWeaponName(weapon, output, 0x200u);
    v6 = v4;
    v7 = WeaponName;
  }
  else
  {
    if ( !GSave::ms_weaponNameSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 79, ASSERT_TYPE_ASSERT, "(ms_weaponNameSize != 0)", (const char *)&queryFormat, "ms_weaponNameSize != 0") )
      __debugbreak();
    v6 = GSave::ms_weaponNameSize;
    v7 = (char *)&queryFormat.fmt + 3;
  }
  G_SaveField_WriteCStyleString(v7, v6, memFile);
}

/*
==============
G_Save_DateStr
==============
*/
char *G_Save_DateStr()
{
  qtime_s qtime; 

  Com_RealTime(0, &qtime);
  return j_va("%s %i, %i", s_saveSP_monthStr[qtime.tm_mon], (unsigned int)qtime.tm_mday, (unsigned int)(qtime.tm_year + 1900));
}

/*
==============
G_WriteGame
==============
*/
char G_WriteGame(const PendingSave *pendingSave, int checksum, SaveGame *save)
{
  const dvar_t *v6; 
  unsigned __int64 v10; 
  MemoryFile *MemoryFile; 
  unsigned __int64 UsedSize; 
  MemoryFile *v13; 
  scrContext_t *i; 
  MemoryFile *v15; 
  unsigned __int64 v16; 
  MemoryFile *v18; 
  unsigned __int64 v19; 
  signed __int64 bufferSizeOriginal; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  char *fmt; 
  double suppressPlayerNotify; 
  double saveType; 
  double saveId; 
  char cleanSavePath[64]; 

  v6 = DVARBOOL_com_disableSaving;
  if ( !DVARBOOL_com_disableSaving && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_disableSaving") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
    return 0;
  v10 = Sys_Microseconds();
  Profile_Begin(299);
  if ( pendingSave == (const PendingSave *)-64i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3251, ASSERT_TYPE_ASSERT, "(pendingSave->description)", (const char *)&queryFormat, "pendingSave->description") )
    __debugbreak();
  if ( !pendingSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3252, ASSERT_TYPE_ASSERT, "(pendingSave->filename)", (const char *)&queryFormat, "pendingSave->filename") )
    __debugbreak();
  if ( pendingSave == (const PendingSave *)-320i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3253, ASSERT_TYPE_ASSERT, "(pendingSave->screenShotName)", (const char *)&queryFormat, "pendingSave->screenShotName") )
    __debugbreak();
  Com_Printf(10, "G_WriteGame '%s' '%s'\n", pendingSave->filename, pendingSave->description);
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3257, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SaveMemory_InitializeGameSave");
  G_SaveMemorySP_InitializeGameSave(save);
  Sys_ProfEndNamedEvent();
  MemoryFile = SaveMemory_GetMemoryFile(save);
  UsedSize = MemFile_GetUsedSize(MemoryFile);
  ProfMem_Begin("Game Save", UsedSize);
  v13 = SaveMemory_GetMemoryFile(save);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SaveMemory_SaveSource");
  for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
    Scr_SaveSource(i, v13);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveState");
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3104, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveInitState");
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2039, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveMainState");
  G_SaveMainState(1, v13);
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
  MemFile_StartSegment(v13, -1, StreamModeSource_SPWriteGame);
  if ( !v13->memoryOverflow && BuildCleanSavePath(cleanSavePath, 0x40ui64, pendingSave->filename, pendingSave->saveType) )
  {
    __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SaveMemory_CreateHeader");
    G_SaveMemorySP_CreateHeader(cleanSavePath, pendingSave->description, pendingSave->screenShotName, checksum, 0, pendingSave->suppressPlayerNotify, pendingSave->saveType, pendingSave->saveId, save);
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SaveMemory_FinalizeSave");
    G_SaveMemorySP_FinalizeSave(save);
    Sys_ProfEndNamedEvent();
    Profile_EndInternal(NULL);
    v18 = SaveMemory_GetMemoryFile(save);
    v19 = MemFile_GetUsedSize(v18);
    ProfMem_End(v19);
    ProfMem_PrintTree(0);
    if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3164, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
      __debugbreak();
    __asm
    {
      vmovss  xmm2, cs:__real@5f800000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
    }
    if ( (save->memFile.bufferSize & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm1, xmm1, xmm2 }
    bufferSizeOriginal = save->memFile.bufferSizeOriginal;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( bufferSizeOriginal < 0 )
      __asm { vaddss  xmm0, xmm0, xmm2 }
    __asm
    {
      vdivss  xmm6, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
      vcomiss xmm6, cs:__real@3f800000
    }
    if ( bufferSizeOriginal )
    {
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  qword ptr [rsp+0E8h+saveId], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+0E8h+saveType], xmm1
        vcvtss2sd xmm2, xmm6, xmm6
        vmovsd  qword ptr [rsp+0E8h+suppressPlayerNotify], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3167, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( ratio ) && ( ratio ) <= ( 1.f )", "ratio not in [0.f, 1.f]\n\t%g not in [%g, %g]", suppressPlayerNotify, saveType, saveId) )
        __debugbreak();
    }
    __asm { vmulss  xmm0, xmm6, cs:__real@42c80000 }
    v33 = save->memFile.bufferSizeOriginal + 512;
    v34 = (save->memFile.bufferSize + 512) >> 10;
    __asm
    {
      vcomiss xmm6, cs:__real@3f733333
      vcvttss2si r8d, xmm0
    }
    fmt = (char *)(v33 >> 10);
    if ( __CFSHR__(v33, 10) )
    {
      __asm { vcomiss xmm6, cs:__real@3f547ae1 }
      if ( __CFSHR__(v33, 10) )
        Com_Printf(10, "Savegame used %i%% of its buffer (%zu of %zu KB).\n\n", _R8, v34, (size_t)fmt);
      else
        Com_PrintWarning(10, "Savegame used %i%% of its buffer (%zu of %zu KB).\n\n", _R8, v34, (size_t)fmt);
    }
    else
    {
      Com_PrintError(10, "Savegame used %i%% of its buffer (%zu of %zu KB).\n\n", _R8, v34, (size_t)fmt);
    }
    v35 = Sys_Microseconds();
    Sys_Printf("Save Game Total Time = %ld us\n", v35 - v10);
    __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
    return 1;
  }
  else
  {
    G_SaveMemorySP_RollbackSave(save);
    Profile_EndInternal(NULL);
    v15 = SaveMemory_GetMemoryFile(save);
    v16 = MemFile_GetUsedSize(v15);
    ProfMem_End(v16);
    ProfMem_PrintTree(1);
    return 0;
  }
}

/*
==============
SaveGameTrackingInitialize
==============
*/
void SaveGameTrackingInitialize(MemoryFile *memoryFile)
{
  __int64 v2; 
  int v3; 
  _QWORD *v4; 
  __int64 v5; 

  v2 = 8i64 * tls_index;
  if ( !*(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 1688i64) )
  {
    if ( ((unsigned __int8)&s_saveGameTrackingInfoCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_saveGameTrackingInfoCount) )
      __debugbreak();
    v3 = _InterlockedExchangeAdd(&s_saveGameTrackingInfoCount, 1u);
    if ( v3 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 905, ASSERT_TYPE_ASSERT, "(instanceIndex < 3)", (const char *)&queryFormat, "instanceIndex < SAVEGAME_TRACKING_MAX_THREADS") )
      __debugbreak();
    v2 = 8i64 * tls_index;
    *(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 1688i64) = &s_threadSaveGameTrackingInfo[v3];
  }
  **(_QWORD **)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 1688i64) = Sys_Microseconds();
  v4 = *(_QWORD **)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 1688i64);
  v4[2] = *v4;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 1688i64) + 8i64) = MemFile_GetUsedSize(memoryFile);
  v5 = *(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 1688i64);
  *(_QWORD *)(v5 + 24) = *(_QWORD *)(v5 + 8);
}

/*
==============
SaveGameTrackingMarker
==============
*/
void SaveGameTrackingMarker(MemoryFile *memoryFile, const char *identifier)
{
  unsigned __int64 v4; 
  __int64 v5; 
  _QWORD *v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 UsedSize; 
  __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 

  v4 = Sys_Microseconds();
  v5 = 8i64 * tls_index;
  v6 = *(_QWORD **)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v5) + 1688i64);
  v7 = v4 - v6[2];
  v8 = v4 - *v6;
  v6[2] = v4;
  UsedSize = MemFile_GetUsedSize(memoryFile);
  v10 = *(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v5) + 1688i64);
  v11 = UsedSize - *(_QWORD *)(v10 + 24);
  v12 = UsedSize - *(_QWORD *)(v10 + 8);
  *(_QWORD *)(v10 + 24) = UsedSize;
  Sys_Printf("Section: %24s Time = %7zuus Bytes = %7zu, Total Time = %7zuus, Total Bytes = %7zu\n", identifier, v7, v11, v8, v12);
}

/*
==============
GSaveSP::ScrFreeClientFields
==============
*/
void GSaveSP::ScrFreeClientFields(GSaveSP *this, gclient_s *client)
{
  G_SaveField_FreeFields(s_saveSP_gclientFields, (unsigned __int8 *)client);
}

/*
==============
GSaveSP::ScrFreeEntityFields
==============
*/
void GSaveSP::ScrFreeEntityFields(GSaveSP *this, gentity_s *ent)
{
  G_SaveField_FreeFields(s_saveSP_gentityGeneralFields, (unsigned __int8 *)ent);
}

/*
==============
GSaveSP::ScrFreeSentientFields
==============
*/
void GSaveSP::ScrFreeSentientFields(GSaveSP *this, sentient_s *sentient)
{
  G_SaveField_FreeFields(s_saveSP_sentientFields, (unsigned __int8 *)sentient);
}

/*
==============
GSaveSP::SetLastSaveName
==============
*/
void GSaveSP::SetLastSaveName(GSaveSP *this, const char *fileName)
{
  SV_SaveSP_SetLastSaveName(fileName);
}

