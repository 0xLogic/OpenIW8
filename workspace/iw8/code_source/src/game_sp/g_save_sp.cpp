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
  __m256i v6; 
  __int128 v7; 
  double v8; 
  GStatic *GameStatics; 
  __int64 v10; 
  __int64 suitAnimIndex; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  _BYTE p[64]; 
  __int128 v16; 
  double v17; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1331, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1332, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v6 = *(__m256i *)&lerpFrame->animationTime;
  *(__m256i *)p = *(__m256i *)&lerpFrame->yawAngle;
  v7 = *(_OWORD *)&lerpFrame->movingPlatformPlayerAnim.m_prevPlatformOrigin.z;
  *(__m256i *)&p[32] = v6;
  v8 = *(double *)&lerpFrame->movingPlatformPlayerAnim.m_originValid;
  v16 = v7;
  v17 = v8;
  if ( PlayerASM_IsEnabled() )
  {
    *(_QWORD *)&p[24] = 0i64;
  }
  else if ( lerpFrame->animation )
  {
    GameStatics = GStatic::GetGameStatics();
    v10 = (__int64)GameStatics->GetAnimStatics(GameStatics);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1345, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    suitAnimIndex = lerpFrame->suitAnimIndex;
    if ( (unsigned int)suitAnimIndex >= 4 )
    {
      LODWORD(v13) = lerpFrame->suitAnimIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1348, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v13, 4) )
        __debugbreak();
    }
    v12 = *(_QWORD *)(v10 + 8 * suitAnimIndex);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1351, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
      __debugbreak();
    if ( (unsigned int)(((__int64)lerpFrame->animation - *(_QWORD *)(v12 + 48)) / 104) >= 0x1000 )
    {
      LODWORD(v14) = 4096;
      LODWORD(v13) = ((__int64)lerpFrame->animation - *(_QWORD *)(v12 + 48)) / 104;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1353, ASSERT_TYPE_ASSERT, "(unsigned)( lerpFrame->animation - playerAnim->animations ) < (unsigned)( (1 << (13-1)) )", "lerpFrame->animation - playerAnim->animations doesn't index MAX_MODEL_ANIMATIONS\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    *(_QWORD *)&p[24] = ((__int64)lerpFrame->animation - *(_QWORD *)(v12 + 48)) / 104 + 1;
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
  scrContext_t *v4; 
  MemoryFile *v5; 
  GAntiLagSP *AntiLagSP; 
  MemoryFile *MemoryFile; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  BgWeaponMap *v11; 
  int v12; 
  gentity_s *v13; 
  MemoryFile *v14; 
  const saveField_t *v15; 
  MemoryFile *v16; 
  unsigned int v18; 
  int v19; 
  gclient_s *v20; 
  GHandler *Handler; 
  const playerState_s *EntityPlayerState; 
  const playerState_s *v23; 
  __int64 v24; 
  float v25; 
  GWeaponMap *Instance; 
  const Weapon *v27; 
  int viewmodelIndex; 
  const Weapon *v29; 
  const XModel *Model; 
  int i; 
  actor_s *v32; 
  sentient_info_t *sentientInfo; 
  MemoryFile *v34; 
  MemoryFile *v35; 
  bool *transientLoaded; 
  int v37; 
  int v38; 
  outline_data_t *v39; 
  SaveGame *v40; 
  int v41; 
  GameScriptDataSP *GameScriptDataSP; 
  int j; 
  int v44; 
  __int64 v45; 
  double Float; 
  double v47; 
  double v48; 
  MemoryFile *v49; 
  threat_bias_t *v50; 
  __int64 v51; 
  int (*threatTable)[24]; 
  __int64 v53; 
  __int64 v54; 
  const saveField_t *v55; 
  unsigned int *p_type; 
  const char *Field; 
  Ai_Asm *v58; 
  unsigned int k; 
  unsigned int v60; 
  bool *transientVisibility; 
  int v62; 
  __int64 v63; 
  __int64 v64; 
  gentity_s *v65; 
  unsigned __int16 v66; 
  unsigned int v67; 
  const char *v68; 
  DObj *ServerDObjForEntnum; 
  DObj *v70; 
  DObjPartBits *p_partBits; 
  __int64 v72; 
  entityType_s eType; 
  SaveGame *v74; 
  __int64 v75; 
  gclient_s *v76; 
  GWeaponMap *v77; 
  char *fmt; 
  __int64 zoomFactor; 
  Weapon *weapon; 
  int value; 
  char v82[4]; 
  unsigned int p; 
  char buffer[4]; 
  MemoryFile *memFile; 
  LocalClientNum_t v86; 
  int SpClientNum; 
  BgWeaponMap *src; 
  SaveGame *savea; 
  scrContext_t *scrContext; 
  vec3_t angles; 
  vec3_t currentOrigin; 
  vec3_t origin; 
  DObjPartBits partBits; 

  savea = save;
  SpClientNum = SvClientSP::GetSpClientNum();
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v86 = OnlyLocalClientNum;
  v4 = ScriptContext_Server();
  scrContext = v4;
  GStatic::SetActiveStatics();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3742, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  G_MainSP_FreeEntities();
  G_FXEntitiesFreeAll();
  GScr_SoundEntity_FreeAll(v4);
  G_HudElem_DestroyAll();
  PIP_DestroyAll();
  G_Spawner_Free();
  G_FreePathnodesScriptInfo();
  G_VehiclePathScr_FreeScriptInfo();
  ScriptableSv_Shutdown();
  GScr_Weapon_Shutdown(v4, 1);
  AICommonInterface::ClearThreatBiasGroups();
  Cmd_UnregisterAllNotifications();
  memset_0(level.outlineData, 0, sizeof(level.outlineData));
  Scr_ShutdownSystem(v4, 1u, 1, 1);
  GStatic::ClearActiveStatics();
  memFile = SaveMemory_GetMemoryFile(save);
  level.initializing = 1;
  v5 = memFile;
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
  if ( buffer[0] )
    CL_StreamViews_SetManualView(COUNT|DODGE, OnlyLocalClientNum, &origin, &vec3_origin, &vec3_origin, 1.0, 0.0, 0);
  G_LoadInitConfigstrings(save);
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1972, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  MemoryFile = SaveMemory_GetMemoryFile(save);
  Dvar_LoadDvars(MemoryFile);
  G_HudElem_Load(v5);
  G_HeadIcons_Load(v5);
  SaveMemory_LoadRead(level.targetMarkerGroups, 88000, save);
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3716, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( save->saveState != LOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3717, ASSERT_TYPE_ASSERT, "(save->saveState == LOADING)", (const char *)&queryFormat, "save->saveState == LOADING") )
    __debugbreak();
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  v8 = BG_Omnvar_PerGameCount();
  v9 = p;
  if ( p != v8 )
  {
    LODWORD(fmt) = BG_Omnvar_PerGameCount();
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435BD60, 497i64, v9, fmt);
  }
  v10 = BG_Omnvar_PerGameCount();
  SaveMemory_LoadRead(level.gameOmnvars, 8 * v10, save);
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
  Scr_LoadPre(v4, v5, 1);
  G_SaveMemorySP_MoveToSegment(save, 2);
  src = GWeaponMap::GetInstance();
  v11 = src;
  GWeaponMap::LoadWeapons((GWeaponMap *)src, v5);
  G_GameInterface_OnLoad(v5);
  ReadSpawnedPathNodes(save);
  G_SaveSP_ReadPathNodes(save);
  if ( level.num_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3894, ASSERT_TYPE_ASSERT, "(!level.num_entities)", (const char *)&queryFormat, "!level.num_entities") )
    __debugbreak();
  SaveMemory_LoadRead(&level.num_entities, 4, save);
  SaveMemory_LoadRead(&value, 4, save);
  v12 = value;
  if ( value >= 0 )
  {
    do
    {
      if ( v12 >= 2048 )
      {
        LODWORD(fmt) = 2048;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1443137E0, 498i64, (unsigned int)v12, fmt);
        v12 = value;
      }
      v13 = &g_entities[v12];
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1347, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      v14 = SaveMemory_GetMemoryFile(save);
      MemFile_ReadData(v14, 1ui64, v82);
      switch ( v82[0] )
      {
        case 6:
          v15 = s_saveSP_gentityScriptMoverFields;
          break;
        case 7:
        case 0xA:
        case 0x14:
        case 0x16:
        case 0x19:
        case 0x1A:
        case 0x1C:
          v15 = s_saveSP_gentityMinimalFields;
          break;
        case 0xC:
        case 0xE:
        case 0xF:
        case 0x10:
          v15 = s_saveSP_gentityVehicleFields;
          break;
        default:
          v15 = s_saveSP_gentityGeneralFields;
          break;
      }
      G_SaveSP_ReadTypeFields_gentity_s_1_(save, v15, v13);
      if ( !v13->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3909, ASSERT_TYPE_ASSERT, "(ent->r.isInUse)", (const char *)&queryFormat, "ent->r.isInUse") )
        __debugbreak();
      g_entityIsInUse[value] = 1;
      SaveMemory_LoadRead(&value, 4, save);
      v12 = value;
    }
    while ( value >= 0 );
    v5 = memFile;
    v11 = src;
  }
  G_PIP_Read(save);
  G_Spawner_Read(save);
  G_LoadFXEntities(save);
  G_LoadSoundEntities(save);
  G_SaveSP_ReadBadPlaces(save);
  G_MotionWarp_Load(save);
  SpeedThresholdLoad(save);
  v16 = SaveMemory_GetMemoryFile(save);
  NavData_Read(v16);
  ScriptableSv_Init(0);
  ScriptableSv_ArchiveState(v5);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&level.firstFreeEnt = _XMM0;
  value = 1;
  if ( level.num_entities > 1 )
  {
    v18 = 1;
    do
    {
      if ( v18 >= 0x800 )
      {
        LODWORD(weapon) = 2048;
        LODWORD(zoomFactor) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", zoomFactor, weapon) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v18].r.isInUse != g_entityIsInUse[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v18] )
      {
        if ( level.lastFreeEnt )
          level.lastFreeEnt->nextFree = &g_entities[value];
        else
          level.firstFreeEnt = &g_entities[value];
        level.lastFreeEnt = &g_entities[value];
        level.lastFreeEnt->nextFree = NULL;
      }
      v18 = ++value;
    }
    while ( value < level.num_entities );
    v5 = memFile;
    v11 = src;
  }
  SaveMemory_LoadRead(&value, 4, save);
  v19 = value;
  if ( value >= 0 )
  {
    while ( 1 )
    {
      if ( v19 > 1 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435BDF0, 499i64);
        v19 = value;
      }
      v20 = &level.clients[v19];
      if ( v20->sess.connected == CON_DISCONNECTED )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435BE30, 500i64);
      G_SaveSP_ReadClient(v20, save);
      Handler = GHandler::getHandler();
      PM_BuildWeaponAnimArrays(v11, &v20->ps, Handler);
      ReadCharacterInfo_0(v5, value);
      EntityPlayerState = G_GetEntityPlayerState(&g_entities[value]);
      v23 = EntityPlayerState;
      if ( !EntityPlayerState )
        break;
      if ( !BGVehicles::IsRemoteDrivingVehicle(EntityPlayerState) )
        goto LABEL_65;
      currentOrigin = v23->vehicleState.origin;
      *(_QWORD *)angles.v = *(_QWORD *)v23->vehicleState.angles.v;
      v25 = v23->vehicleState.angles.v[2];
LABEL_66:
      angles.v[2] = v25;
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      v27 = BgWeaponMap::GetWeapon(Instance, v20->ps.weapCommon.weaponHandle);
      viewmodelIndex = v20->ps.viewmodelIndex;
      v29 = v27;
      if ( viewmodelIndex )
        Model = G_Utils_GetModel(viewmodelIndex);
      else
        Model = NULL;
      CL_StreamViewsSP_SetAutoView(EASE_IN_QUAD, value, &currentOrigin, &angles, 1.0, 0.0, v29, Model);
      CL_StreamViewsSP_CopyAutoView(EASE_IN_QUAD, LINEAR, value);
      G_HudElemSP_UpdateClient(value);
      SaveMemory_LoadRead(&value, 4, save);
      v19 = value;
      if ( value < 0 )
        goto LABEL_75;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3975, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
LABEL_65:
    v24 = value;
    currentOrigin = g_entities[v24].r.currentOrigin;
    *(_QWORD *)angles.v = *(_QWORD *)g_entities[v24].r.currentAngles.v;
    v25 = g_entities[v24].r.currentAngles.v[2];
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
    v32 = &level.actors[i];
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1459, ASSERT_TYPE_ASSERT, "( pActor )", (const char *)&queryFormat, "pActor") )
      __debugbreak();
    if ( !v32->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1460, ASSERT_TYPE_ASSERT, "( pActor->sentientInfo )", (const char *)&queryFormat, "pActor->sentientInfo") )
      __debugbreak();
    SaveMemory_LoadRead(&v32->inuse, 1, save);
    if ( v32->inuse )
    {
      sentientInfo = v32->sentientInfo;
      G_SaveSP_ReadTypeFields_actor_s_1_(save, s_saveSP_actorFields, v32);
      if ( !v32->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1472, ASSERT_TYPE_ASSERT, "(pActor->inuse)", (const char *)&queryFormat, "pActor->inuse") )
        __debugbreak();
      v32->pszDebugInfo = (char *)&queryFormat.fmt + 3;
      v32->weapDrops[0].state = ACTOR_WEAP_DROP_NONE;
      v32->weapDrops[1].state = ACTOR_WEAP_DROP_NONE;
      v34 = SaveMemory_GetMemoryFile(save);
      v32->pNavigator = Nav_ReadNavigator(v34, NULL);
      v32->sentientInfo = sentientInfo;
      G_SaveSP_ReadSentientInfoArray(save, v34, sentientInfo);
    }
    i = value + 1;
  }
  SaveMemory_LoadRead(&level.actorCount, 4, save);
  v35 = memFile;
  transientLoaded = level.transientLoaded;
  v37 = 0;
  value = 0;
  do
  {
    G_SaveSP_ReadSentient(&level.sentients[v37], save);
    v37 = value + 1;
    value = v37;
  }
  while ( v37 < 71 );
  NavData_NavigatorLoadComplete();
  TacGraph_Read(v35);
  AIScheduler::Read(v35);
  VelocityObstacle3Manager::Load(v35);
  G_VehicleSP_ReadSaveGame(save);
  G_CoverWall_ReadSaveGame(save);
  G_PlayerUse_Read(save);
  G_Trigger_Read(save);
  GTurretSP::SaveSP_ReadTurrets(v35, save);
  GMovingPlatformsSP::SaveSP_Read(v35, save);
  G_LightSampler_Read(v35);
  v38 = 0;
  value = 0;
  do
  {
    v39 = &level.outlineData[v38];
    if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1572, ASSERT_TYPE_ASSERT, "(outlineData)", (const char *)&queryFormat, "outlineData") )
      __debugbreak();
    if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1573, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    MemFile_ReadData(v35, 1ui64, v82);
    if ( v82[0] )
    {
      MemFile_ReadData(v35, 4ui64, &p);
      v39->refCount = p;
      MemFile_ReadData(v35, 0x1Cui64, &v39->enabledForClientMask);
      v39->lastUsed = 0;
      MemFile_ReadData(v35, 0x320ui64, v39);
    }
    v38 = value + 1;
    value = v38;
  }
  while ( v38 < 63 );
  v40 = savea;
  v41 = 0;
  value = 0;
  do
  {
    MemFile_ReadData(v35, 4ui64, &level.mayhemEnts[v41]);
    v41 = value + 1;
    value = v41;
  }
  while ( v41 < 64 );
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  value = 0;
  for ( j = 0; j < 28; value = j )
  {
    SaveMemory_LoadRead(&GameScriptDataSP->actorCorpseInfo[j].entnum, 4, v40);
    v44 = value;
    if ( GameScriptDataSP->actorCorpseInfo[value].entnum != -1 )
    {
      SaveMemory_LoadRead(&GameScriptDataSP->actorCorpseInfo[value].proneInfo, 24, v40);
      v45 = value;
      Float = MemFile_ReadFloat(v35);
      GameScriptDataSP->actorCorpseInfo[v45].physicsOrigin.v[0] = *(float *)&Float;
      v47 = MemFile_ReadFloat(v35);
      GameScriptDataSP->actorCorpseInfo[v45].physicsOrigin.v[1] = *(float *)&v47;
      v48 = MemFile_ReadFloat(v35);
      GameScriptDataSP->actorCorpseInfo[v45].physicsOrigin.v[2] = *(float *)&v48;
      v44 = value;
    }
    j = v44 + 1;
  }
  level.actorCorpseCount = 28;
  memset_0(&g_threatBias, 0, sizeof(g_threatBias));
  v49 = SaveMemory_GetMemoryFile(v40);
  if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
    __debugbreak();
  v50 = &g_threatBias;
  v51 = 24i64;
  do
  {
    MemFile_ReadData(v49, 4ui64, v50);
    v50 = (threat_bias_t *)((char *)v50 + 4);
    --v51;
  }
  while ( v51 );
  threatTable = g_threatBias.threatTable;
  v53 = 24i64;
  do
  {
    v54 = 24i64;
    do
    {
      MemFile_ReadData(v49, 4ui64, threatTable);
      threatTable = (int (*)[24])((char *)threatTable + 4);
      --v54;
    }
    while ( v54 );
    --v53;
  }
  while ( v53 );
  MemFile_ReadData(v49, 4ui64, &g_threatBias.threatGroupCount);
  v55 = s_saveSP_threatGroupFields;
  p_type = &s_saveSP_threatGroupFields[0].type;
  do
  {
    Field = G_SaveFieldSP_ReadField(v55, (unsigned __int8 *)&g_threatBias, v40);
    if ( Field )
    {
      if ( *p_type )
      {
        do
          G_SaveFieldSP_ClearField(v55++, (unsigned __int8 *)&g_threatBias);
        while ( v55->type );
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435C350, 6104i64, Field);
    }
    ++v55;
    p_type = &v55->type;
  }
  while ( v55->type );
  if ( Actor_EventListener_GetCount() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1739, ASSERT_TYPE_ASSERT, "(Actor_EventListener_GetCount() == 0)", (const char *)&queryFormat, "Actor_EventListener_GetCount() == 0") )
    __debugbreak();
  Actor_EventListener_Init();
  SaveMemory_LoadRead(&p, 4, v40);
  Actor_EventListener_SetCount(p);
  if ( p )
    SaveMemory_LoadRead(g_AIEVlisteners, 8 * p, v40);
  if ( level.currentTriggerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4084, ASSERT_TYPE_ASSERT, "(level.currentTriggerListSize == 0)", (const char *)&queryFormat, "level.currentTriggerListSize == 0") )
    __debugbreak();
  SaveMemory_LoadRead(&level.pendingTriggerListSize, 4, v40);
  SaveMemory_LoadRead(level.pendingTriggerList, 12 * level.pendingTriggerListSize, v40);
  G_LoadWeaponCue(v40);
  G_Objectives_Load(v35);
  G_LoadConfigstrings(0xFAEu, 64, v40);
  G_LoadConfigstrings(0x17F3u, 32, v40);
  G_Targets_Load();
  G_Missile_LoadAttractors(v35);
  Cmd_LoadNotifications(v35);
  G_LoadGlass(v35);
  R_Cinematic_Load(v40, level.time);
  AI_BT_Load(v35);
  v58 = Ai_Asm::Singleton();
  Ai_Asm::ReadInstances(v58, v35);
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
  v60 = 0;
  transientVisibility = level.transientVisibility;
  do
    CL_TransientsWorld_SetVisibility(LOCAL_CLIENT_0, v60++, *transientVisibility++);
  while ( v60 < 0x20 );
  CL_PreloadSP_SavegameLoad((const char (*)[8][64])level.preloadedFiles);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4135, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 4136, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  SV_TransientsSP_SyncForLoadSavegame();
  G_SaveMemorySP_MoveToSegment(v40, 4);
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  memFile = (MemoryFile *)GUtils::ms_gUtils;
  GUtils::DisableCreateEntityPhysicsOnInit(GUtils::ms_gUtils, 1);
  GMissile::ClearMissileRegistry();
  GMissile::ClearMissileEventRegistry();
  ScriptableSv_DisableLinking(1);
  v62 = 0;
  value = 0;
  do
  {
    v63 = v62;
    v64 = v62;
    v65 = &g_entities[v64];
    if ( (unsigned int)v62 >= 0x800 )
    {
      LODWORD(weapon) = 2048;
      LODWORD(zoomFactor) = v62;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", zoomFactor, weapon) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v64].r.isInUse != g_entityIsInUse[v63] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v63] )
    {
      v66 = v65->model;
      if ( v66 && G_Utils_IsModelBad(v66) && ((v65->s.eType - 19) & 0xFFFD) == 0 )
      {
        v67 = v65->model;
        if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
          __debugbreak();
        v68 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v67);
        Com_PrintWarning(10, "WARNING: actor model '%s' couldn't be found! switching to default actor model.\n", v68);
        G_Utils_OverrideModel(v65->model, "defaultactor");
      }
      if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
        __debugbreak();
      GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, v65, 0);
      ServerDObjForEntnum = Com_GetServerDObjForEntnum(value);
      v70 = ServerDObjForEntnum;
      if ( ServerDObjForEntnum )
      {
        XAnimLoadAnimTree(ServerDObjForEntnum, v35);
        p_partBits = &partBits;
        v72 = 8i64;
        do
        {
          MemFile_ReadData(v35, 4ui64, &p);
          p_partBits->array[0] = p;
          p_partBits = (DObjPartBits *)((char *)p_partBits + 4);
          --v72;
        }
        while ( v72 );
        DObjSetHidePartBits(v70, &partBits);
      }
      eType = v65->s.eType;
      if ( eType == ET_MISSILE )
      {
        GMissile::RegisterMissileEntity(v65->s.number);
      }
      else if ( GMissile::IsMissileEventType(eType) )
      {
        GMissile::RegisterMissileEventEntity(v65->s.number);
      }
    }
    v62 = value + 1;
    value = v62;
  }
  while ( v62 < 2048 );
  v74 = savea;
  G_SaveMemorySP_MoveToSegment(savea, 5);
  ScriptableSv_DisableLinking(0);
  GUtils::DisableCreateEntityPhysicsOnInit((GUtils *)memFile, 0);
  WorldCollision_Load(v74);
  StaticModels_Load(v74);
  Physics_Load(v74);
  G_SaveMemorySP_MoveToSegment(v74, 6);
  v75 = v86;
  CgStatic::SetActiveStatics(v86);
  G_ClearConfigstrings(1u, 8);
  SV_ClientSP_SendGameState();
  AimTarget_Load(v35);
  ScriptableClSP_ArchiveState(v35);
  DynEnt_ReadSaveGame(v35);
  Mayhem_ReadSaveGame(v35);
  CG_LoadGlass(v35);
  CG_EntitySP_LoadEntities(v74);
  CL_CGameSP_ArchiveClientState(v35);
  CG_LoadFXEntities(v74);
  CG_LoadSoundEntities(v74);
  Ragdoll_UpdateAll((LocalClientNum_t)v75, 0.0);
  CL_CGameSP_CheckServerCommands();
  SV_SaveSP_LoadServerCommands(v74);
  v76 = &level.clients[SpClientNum];
  if ( !CgWeaponMap::ms_instance[v75] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CgWeaponMap::CopyMap(CgWeaponMap::ms_instance[v75], src);
  CG_LoadViewModelAnimTrees(v74, &v76->ps, (LocalClientNum_t)v75);
  CG_LoadFOVLerp(v35, (LocalClientNum_t)v75);
  CG_LoadSlide(v35, (LocalClientNum_t)v75);
  CG_LoadViewLinkedEntities(v35, (LocalClientNum_t)v75);
  CG_Shake_Load(v35, (LocalClientNum_t)v75);
  CG_LoadCinematicLetterBoxInfo(v35, (LocalClientNum_t)v75);
  CgStatic::ClearActiveStatics((const LocalClientNum_t)v75);
  G_SaveMemorySP_MoveToSegment(v74, -1);
  GScr_Weapon_LoadPost(scrContext);
  Scr_LoadShutdown(scrContext, 1, MAIN);
  SV_Game_LocateGameData(level.gentities, level.num_entities, &level.clients->ps, 64592);
  v77 = GWeaponMap::GetInstance();
  GWeaponMap::ValidateReferences(v77);
  level.initializing = 0;
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
  MemoryFile *v2; 
  __int64 v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  playerState_s *p_ps; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v10; 
  GAntiLagSP *AntiLagSP; 
  LocalClientNum_t OnlyLocalClientNum; 
  OmnvarGameData *gameOmnvars; 
  unsigned int v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  const dvar_t *v17; 
  scrContext_t *v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  int v23; 
  bool v24; 
  gentity_s *v25; 
  __int16 eType; 
  const saveField_t *v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  __int64 v36; 
  int v37; 
  int v38; 
  gclient_s *v39; 
  characterInfo_t *v40; 
  GWeaponMap *v41; 
  const Weapon *v42; 
  int viewmodelIndex; 
  const XModel *handModel; 
  int i; 
  actor_s *v46; 
  int j; 
  sentient_s *v48; 
  int iDamageParts; 
  const DamageParts *v50; 
  int k; 
  outline_data_t *v52; 
  unsigned int v53; 
  ClientBits *p_enabledForClientMask; 
  char v55; 
  int v56; 
  scrContext_t *v57; 
  GameScriptDataSP *GameScriptDataSP; 
  int m; 
  int v60; 
  Ai_Asm *v61; 
  unsigned __int64 v62; 
  unsigned __int64 v63; 
  unsigned __int64 v64; 
  unsigned __int64 v65; 
  int v66; 
  bool v67; 
  DObj *ServerDObjForEntnum; 
  const DObj *v69; 
  const XAnim_s **p_anims; 
  DObjPartBits *p_partBits; 
  __int64 v72; 
  unsigned __int64 v73; 
  bool v74; 
  int v75; 
  int v76; 
  __int64 v77; 
  __int64 v78; 
  unsigned __int64 v79; 
  unsigned __int64 v80; 
  const char *v81; 
  MemoryFile *SecondarySaveThreadMemoryFile; 
  char v83; 
  MemoryFile *ClientMemoryFile; 
  int v85; 
  playerState_s *v86; 
  __int64 v87; 
  __int64 v88; 
  unsigned __int64 v89; 
  unsigned __int64 v90; 
  __int64 cosFovLimit; 
  Weapon *weapon; 
  int handle; 
  bool v94; 
  char v95[8]; 
  char v96; 
  char v97; 
  int integer; 
  __int64 p; 
  scrContext_t *scrContext; 
  MemoryFile *v101; 
  __int64 v102; 
  GWeaponMap *Instance; 
  __int64 v104; 
  vec3_t v105; 
  DObjPartBits partBits; 
  Weapon unpredictableEventWeapons[4]; 
  Weapon predictableEventWeapons[4]; 

  v104 = -2i64;
  v2 = memFile;
  v101 = memFile;
  v94 = savegame;
  if ( savegame && Sys_IsServerThread() )
  {
    v97 = 1;
    G_SaveMemorySP_SetClientMemoryFileValid(0);
    SV_MainSP_SetClientSaveGameFunction(G_SavePS_ClientSaveHelper);
    SV_MainSP_SignalClientToSaveGame();
  }
  else
  {
    v97 = 0;
  }
  if ( savegame && Sys_IsServerThread() )
  {
    v96 = 1;
    G_SaveMemorySP_SetSecondarySaveInProgress(1);
    Sys_SetSaveGameSecondaryEvent();
  }
  else
  {
    v96 = 0;
  }
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2415, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  SaveGameTrackingInitialize(v2);
  v4 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v102 = *(_QWORD *)(v4 + 272);
  *(_QWORD *)(v4 + 272) = 0i64;
  v5 = 0;
  handle = 0;
  v6 = 0;
  do
  {
    v7 = v6;
    p_ps = &level.clients[v6].ps;
    if ( p_ps[1].serverTime == 2 )
    {
      G_SaveSP_ClearPlayerEventWeapons(p_ps, &predictableEventWeapons[4 * v7], &unpredictableEventWeapons[4 * v7]);
      v5 = handle;
    }
    handle = ++v5;
    v6 = v5;
  }
  while ( v5 < 1 );
  UsedSize = MemFile_GetUsedSize(v2);
  ProfMem_Begin("SaveMainState", UsedSize);
  v10 = MemFile_GetUsedSize(v2);
  ProfMem_Begin("level state, dvars, hudelems", v10);
  MemFile_StartSegment(v2, 1, StreamModeSource_SPSaveMainState);
  MemFile_WriteData(v2, 4ui64, &level.time);
  MemFile_WriteData(v2, 4ui64, &level.frameDuration);
  if ( level.previousTime != level.time - level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2443, ASSERT_TYPE_ASSERT, "(level.previousTime == level.time - level.frameDuration)", (const char *)&queryFormat, "level.previousTime == level.time - level.frameDuration") )
    __debugbreak();
  MemFile_WriteData(v2, 4ui64, &level.framenum);
  MemFile_WriteData(v2, 4ui64, &level.framePos);
  MemFile_WriteData(v2, 4ui64, &level.demoSaveGame);
  AntiLagSP = GAntiLagSP::GetAntiLagSP();
  GAntiLagSP::ArchiveSaveGame(AntiLagSP, v2);
  MemFile_WriteData(v2, 0x34ui64, &g_slowmoCommon);
  MemFile_WriteData(v2, 2ui64, &level.soundAliasFirst);
  MemFile_WriteData(v2, 2ui64, &level.soundAliasLast);
  MemFile_WriteData(v2, 4ui64, &level.changelevel);
  MemFile_WriteData(v2, 4ui64, &level.exitTime);
  MemFile_WriteData(v2, 4ui64, &level.savepersist);
  MemFile_WriteData(v2, 4ui64, &level.bMissionSuccess);
  MemFile_WriteData(v2, 4ui64, &level.bMissionFailed);
  MemFile_WriteData(v2, 4ui64, &level.scriptPrintChannel);
  MemFile_WriteData(v2, 0x40ui64, g_nextMap);
  MemFile_WriteData(v2, 8ui64, &level.compassMapUpperLeft);
  MemFile_WriteData(v2, 8ui64, &level.compassMapWorldSize);
  MemFile_WriteData(v2, 8ui64, &level.compassNorth);
  MemFile_WriteData(v2, 4ui64, &level.hudElemLastAssignedSoundID);
  if ( level.bPlayerIgnoreRadiusDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2479, ASSERT_TYPE_ASSERT, "(!level.bPlayerIgnoreRadiusDamage)", (const char *)&queryFormat, "!level.bPlayerIgnoreRadiusDamage") )
    __debugbreak();
  MemFile_WriteData(v2, 4ui64, &level.bPlayerIgnoreRadiusDamageLatched);
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  LOBYTE(p) = CL_StreamViews_IsManualViewSet(COUNT|DODGE, OnlyLocalClientNum);
  if ( (_BYTE)p )
    v105 = *CL_StreamViews_GetManualViewOrigin(COUNT|DODGE, OnlyLocalClientNum);
  MemFile_WriteData(v2, 1ui64, &p);
  MemFile_WriteData(v2, 0xCui64, &v105);
  SaveGameTrackingMarker(v2, "Level State");
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1896, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  G_SaveConfigstrings(0x10u, 2048, v2);
  G_SaveConfigstrings(0xB6Eu, 1024, v2);
  G_SaveConfigstrings(0x96Eu, 512, v2);
  G_SaveConfigstrings(0x810u, 350, v2);
  G_SaveConfigstrings(0xFF3u, 2048, v2);
  G_SaveConfigstrings(0xFEEu, 1, v2);
  G_SaveConfigstrings(0, 1, v2);
  G_SaveConfigstrings(0xFF0u, 1, v2);
  G_SaveConfigstrings(0xFF1u, 1, v2);
  G_SaveConfigstrings(0xFF2u, 1, v2);
  G_SaveConfigstrings(9u, 1, v2);
  G_SaveConfigstrings(0xAu, 1, v2);
  G_SaveConfigstrings(0xBu, 1, v2);
  G_SaveConfigstrings(0xFu, 1, v2);
  G_SaveConfigstrings(0xEu, 1, v2);
  G_SaveConfigstrings(0xCu, 1, v2);
  G_SaveConfigstrings(0xFEFu, 1, v2);
  SaveGameTrackingMarker(v2, "Config Strings");
  Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveDvars");
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1960, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Dvar_SaveDvars(v2, 0x40u);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(v2, "DVars");
  G_HudElem_Save(v2);
  G_HeadIcons_Save(v2);
  MemFile_WriteData(v2, 0x157C0ui64, level.targetMarkerGroups);
  integer = BG_Omnvar_PerGameCount();
  MemFile_WriteData(v2, 4ui64, &integer);
  gameOmnvars = level.gameOmnvars;
  v14 = BG_Omnvar_PerGameCount();
  MemFile_WriteData(v2, 8i64 * v14, gameOmnvars);
  SaveGameTrackingMarker(v2, "Hud and omnvars");
  v15 = MemFile_GetUsedSize(v2);
  ProfMem_End(v15);
  v16 = MemFile_GetUsedSize(v2);
  ProfMem_Begin("misc", v16);
  MemFile_WriteData(v2, 4ui64, &level.fFogOpaqueDist);
  MemFile_WriteData(v2, 4ui64, &level.fFogOpaqueDistSqrd);
  MemFile_WriteData(v2, 4ui64, &level.timeAtLastPause);
  MemFile_WriteData(v2, 4ui64, &level.bDrawCompassFriendlies);
  v17 = DVARINT_g_player_maxhealth;
  if ( !DVARINT_g_player_maxhealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_player_maxhealth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  integer = v17->current.integer;
  MemFile_WriteData(v2, 4ui64, &integer);
  AimTargetSP_WriteSaveGame(v2);
  MemFile_WriteData(v2, 0x800ui64, level.localizedStringRefCount);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2544, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2545, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  if ( !SV_TransientsSP_IsSafeToSave() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2546, ASSERT_TYPE_ASSERT, "(SV_TransientsSP_IsSafeToSave())", (const char *)&queryFormat, "SV_TransientsSP_IsSafeToSave()") )
    __debugbreak();
  MemFile_WriteData(v2, 0x20ui64, level.transientLoaded);
  MemFile_WriteData(v2, 0x20ui64, level.transientVisibility);
  MemFile_WriteData(v2, 0x200ui64, level.preloadedFiles);
  MemFile_WriteData(v2, 1ui64, &level.forceStreamSyncSP);
  MemFile_WriteData(v2, 0x30ui64, &level.umbraGateStates);
  SaveGameTrackingMarker(v2, "Misc");
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Scripts");
  v18 = ScriptContext_Server();
  scrContext = v18;
  Scr_SavePre(v18, 1);
  SaveGameTrackingMarker(v2, "Script Pre Save");
  Scr_SavePre2(v18, 1);
  SaveGameTrackingMarker(v2, "Script Pre Save 2");
  Sys_ProfEndNamedEvent();
  v19 = MemFile_GetUsedSize(v2);
  ProfMem_End(v19);
  GStatic::SetActiveStatics();
  v20 = MemFile_GetUsedSize(v2);
  ProfMem_Begin("path nodes", v20);
  MemFile_StartSegment(v2, 2, StreamModeSource_SPSaveMainState);
  Instance = GWeaponMap::GetInstance();
  GWeaponMap::SaveWeapons(Instance, v2);
  G_GameInterface_OnSave(savegame, v2);
  WriteSpawnedPathNodes(v2);
  G_SaveSP_WritePathNodes(v2);
  SaveGameTrackingMarker(v2, "Path Nodes");
  v21 = MemFile_GetUsedSize(v2);
  ProfMem_End(v21);
  v22 = MemFile_GetUsedSize(v2);
  ProfMem_Begin("entities", v22);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Entities");
  MemFile_WriteData(v2, 4ui64, &level.num_entities);
  handle = 0;
  v23 = 0;
  v24 = 1;
  do
  {
    if ( !v24 )
    {
      LODWORD(weapon) = 2048;
      LODWORD(cosFovLimit) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", cosFovLimit, weapon) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v23].r.isInUse != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v23] )
    {
      v25 = &g_entities[handle];
      MemFile_WriteData(v2, 4ui64, &handle);
      Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteEntity");
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1329, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1330, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
        __debugbreak();
      eType = v25->s.eType;
      if ( (eType < 0 || (unsigned __int16)eType > 0xFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum entityType_s>(enum entityType_s)", "unsigned", (unsigned __int8)eType, "signed", eType) )
        __debugbreak();
      v95[0] = eType;
      MemFile_WriteData(v2, 1ui64, v95);
      switch ( v25->s.eType )
      {
        case ET_SCRIPTMOVER:
          v27 = s_saveSP_gentityScriptMoverFields;
          break;
        case ET_SOUND:
        case ET_PRIMARY_LIGHT:
        case ET_ACTOR_SPAWNER:
        case ET_PHYSICS_CHILD:
        case ET_RAGDOLL_CONSTRAINT:
        case ET_PHYSICS_VOLUME:
        case ET_INFO_VOLUME_GRAPPLE:
          v27 = s_saveSP_gentityMinimalFields;
          break;
        case ET_HELICOPTER:
        case ET_VEHICLE:
        case ET_VEHICLE_CORPSE:
        case ET_VEHICLE_SPAWNER:
          v27 = s_saveSP_gentityVehicleFields;
          break;
        default:
          v27 = s_saveSP_gentityGeneralFields;
          break;
      }
      v28 = MemFile_GetUsedSize(v2);
      ProfMem_Begin("WriteEntity", v28);
      G_SaveSP_WriteTypeFields_gentity_s_3_(v2, v27, v25);
      v29 = MemFile_GetUsedSize(v2);
      ProfMem_End(v29);
      Sys_ProfEndNamedEvent();
    }
    v23 = handle + 1;
    handle = v23;
    v24 = (unsigned int)v23 < 0x800;
  }
  while ( v23 < 2048 );
  handle = -1;
  MemFile_WriteData(v2, 4ui64, &handle);
  Sys_ProfEndNamedEvent();
  v30 = MemFile_GetUsedSize(v2);
  ProfMem_End(v30);
  SaveGameTrackingMarker(v2, "Entity State");
  G_PIP_Write(v2);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Spawner");
  G_Spawner_Write(v2);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(v2, "PIP and spawners");
  v31 = MemFile_GetUsedSize(v2);
  ProfMem_Begin("fxEntities", v31);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - FxEntities");
  G_SaveFXEntities(v2);
  Sys_ProfEndNamedEvent();
  v32 = MemFile_GetUsedSize(v2);
  ProfMem_End(v32);
  v33 = MemFile_GetUsedSize(v2);
  ProfMem_Begin("soundEntities", v33);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - SoundEntities");
  G_SaveSoundEntities(v2);
  Sys_ProfEndNamedEvent();
  v34 = MemFile_GetUsedSize(v2);
  ProfMem_End(v34);
  v35 = MemFile_GetUsedSize(v2);
  ProfMem_Begin("misc: clients, actors, vehicles, scriptables", v35);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - BadPlaces");
  G_SaveSP_WriteBadPlaces(v2);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - MotionWarp");
  G_MotionWarp_Save(v2);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - SpeedThresholdSave");
  SpeedThresholdSave(v2);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - NavData_Write");
  NavData_Write(v2);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Scriptables");
  ScriptableSv_ArchiveState(v2);
  Sys_ProfEndNamedEvent();
  SaveGameTrackingMarker(v2, "Nav, scriptables, misc");
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v36 = *(_QWORD *)&GStatic::ms_gameStatics;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Clients");
  v37 = 0;
  handle = 0;
  v38 = 0;
  do
  {
    v39 = &level.clients[v38];
    if ( v39->sess.connected == CON_CONNECTED )
    {
      MemFile_WriteData(v2, 4ui64, &handle);
      G_SaveSP_WriteClient(v39, v2);
      v40 = (characterInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 224i64))(v36, (unsigned int)handle);
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2685, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      WriteCharacterInfo_0(v2, v40);
      v41 = GWeaponMap::GetInstance();
      if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      v42 = BgWeaponMap::GetWeapon(v41, v39->ps.weapCommon.weaponHandle);
      viewmodelIndex = v39->ps.viewmodelIndex;
      if ( viewmodelIndex )
        handModel = G_Utils_GetModel(viewmodelIndex);
      else
        handModel = NULL;
      CL_StreamViewsSP_SetAutoView(EASE_OUT_QUAD, handle, &g_entities[handle].r.currentOrigin, &g_entities[handle].r.currentAngles, 1.0, 0.0, v42, handModel);
      v37 = handle;
    }
    handle = ++v37;
    v38 = v37;
  }
  while ( v37 < 1 );
  handle = -1;
  MemFile_WriteData(v2, 4ui64, &handle);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Actors");
  handle = 0;
  for ( i = 0; i < 38; handle = i )
  {
    v46 = &level.actors[i];
    if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1435, ASSERT_TYPE_ASSERT, "( pActor )", (const char *)&queryFormat, "pActor") )
      __debugbreak();
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1436, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    MemFile_WriteData(v2, 1ui64, &v46->inuse);
    if ( v46->inuse )
    {
      Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteActor");
      G_SaveSP_WriteTypeFields_actor_s_3_(v2, s_saveSP_actorFields, v46);
      Nav_WriteNavigator(v2, v46->pNavigator);
      G_SaveSP_WriteSentientInfoArray(v2, v46->sentientInfo, level.maxSentients);
      Sys_ProfEndNamedEvent();
    }
    i = handle + 1;
  }
  MemFile_WriteData(v2, 4ui64, &level.actorCount);
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
    v48 = &level.sentients[j];
    if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1500, ASSERT_TYPE_ASSERT, "( sentient )", (const char *)&queryFormat, "sentient") )
      __debugbreak();
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1501, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    MemFile_WriteData(v2, 1ui64, &v48->inuse);
    if ( v48->inuse )
    {
      Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteSentientInfoArray");
      G_SaveSP_WriteTypeFields_sentient_s_2_(v2, s_saveSP_sentientFields, v48);
      iDamageParts = v48->iDamageParts;
      if ( iDamageParts != -1 )
      {
        v50 = DamageParts_Get(iDamageParts);
        G_SaveSP_WriteTypeFields_DamageParts_2_(v2, g_saveSP_damagePartsField, v50);
      }
      Sys_ProfEndNamedEvent();
    }
    j = handle + 1;
  }
  Sys_ProfEndNamedEvent();
  TacGraph_Write(v2);
  AIScheduler::Write(v2);
  VelocityObstacle3Manager::Save(v2);
  G_VehicleSP_WriteSaveGame(v2);
  G_CoverWall_WriteSaveGame(v2);
  G_PlayerUse_Write(v2);
  G_Trigger_Write(v2);
  GTurretSP::SaveSP_WriteTurrets(v2);
  GMovingPlatformsSP::SaveSP_Write(v2);
  G_LightSampler_Write(v2);
  SaveGameTrackingMarker(v2, "Vehicles");
  handle = 0;
  for ( k = 0; k < 63; handle = k )
  {
    v52 = &level.outlineData[k];
    if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1554, ASSERT_TYPE_ASSERT, "(outlineData)", (const char *)&queryFormat, "outlineData") )
      __debugbreak();
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1555, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    v53 = 0;
    p_enabledForClientMask = &v52->enabledForClientMask;
    while ( !p_enabledForClientMask->array[0] )
    {
      ++v53;
      p_enabledForClientMask = (ClientBits *)((char *)p_enabledForClientMask + 4);
      if ( v53 >= 7 )
        goto LABEL_121;
    }
    if ( v52->refCount <= 0 )
    {
LABEL_121:
      v55 = 0;
      goto LABEL_122;
    }
    v55 = 1;
LABEL_122:
    v95[0] = v55;
    MemFile_WriteData(v2, 1ui64, v95);
    if ( v55 )
    {
      integer = v52->refCount;
      MemFile_WriteData(v2, 4ui64, &integer);
      MemFile_WriteData(v2, 0x1Cui64, &v52->enabledForClientMask);
      MemFile_WriteData(v2, 0x320ui64, v52);
    }
    k = handle + 1;
  }
  v56 = 0;
  handle = 0;
  v57 = scrContext;
  do
  {
    MemFile_WriteData(v2, 4ui64, &level.mayhemEnts[v56]);
    v56 = handle + 1;
    handle = v56;
  }
  while ( v56 < 64 );
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  handle = 0;
  for ( m = 0; m < 28; handle = m )
  {
    MemFile_WriteData(v2, 4ui64, &GameScriptDataSP->actorCorpseInfo[m].entnum);
    v60 = handle;
    if ( GameScriptDataSP->actorCorpseInfo[handle].entnum != -1 )
    {
      MemFile_WriteData(v2, 0x18ui64, &GameScriptDataSP->actorCorpseInfo[handle].proneInfo);
      MemFile_WriteData(v2, 0xCui64, &GameScriptDataSP->actorCorpseInfo[handle].physicsOrigin);
      v60 = handle;
    }
    m = v60 + 1;
  }
  G_SaveSP_WriteTypeFields_threat_bias_t_2_(v2, s_saveSP_threatGroupFields, &g_threatBias);
  integer = Actor_EventListener_GetCount();
  MemFile_WriteData(v2, 4ui64, &integer);
  if ( integer )
    MemFile_WriteData(v2, 8i64 * integer, g_AIEVlisteners);
  if ( level.currentTriggerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2781, ASSERT_TYPE_ASSERT, "(level.currentTriggerListSize == 0)", (const char *)&queryFormat, "level.currentTriggerListSize == 0") )
    __debugbreak();
  MemFile_WriteData(v2, 4ui64, &level.pendingTriggerListSize);
  MemFile_WriteData(v2, 12i64 * level.pendingTriggerListSize, level.pendingTriggerList);
  G_SaveWeaponCue(v2);
  G_Objectives_Save(v2);
  G_SaveConfigstrings(0xFAEu, 64, v2);
  G_SaveConfigstrings(0x17F3u, 32, v2);
  G_Missile_SaveAttractors(v2);
  Cmd_SaveNotifications(v2);
  G_SaveGlass(v2);
  R_Cinematic_Save(v2, level.time);
  AI_BT_Save(v2);
  v61 = Ai_Asm::Singleton();
  Ai_Asm::WriteInstances(v61, v2);
  GStatic::ClearActiveStatics();
  SaveGameTrackingMarker(v2, "Misc");
  v62 = MemFile_GetUsedSize(v2);
  ProfMem_End(v62);
  v63 = MemFile_GetUsedSize(v2);
  ProfMem_Begin("Script", v63);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Scr_SavePost");
  MemFile_StartSegment(v2, 3, StreamModeSource_SPSaveMainState);
  Scr_SavePost(v57, v2, 1);
  Sys_ProfEndNamedEvent();
  v64 = MemFile_GetUsedSize(v2);
  ProfMem_End(v64);
  SaveGameTrackingMarker(v2, "Script Save");
  v65 = MemFile_GetUsedSize(v2);
  ProfMem_Begin("Animtree", v65);
  MemFile_StartSegment(v2, 4, StreamModeSource_SPSaveMainState);
  handle = 0;
  v66 = 0;
  v67 = 1;
  do
  {
    if ( !v67 )
    {
      LODWORD(weapon) = 2048;
      LODWORD(cosFovLimit) = v66;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", cosFovLimit, weapon) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v66].r.isInUse != g_entityIsInUse[v66] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v66] )
    {
      ServerDObjForEntnum = Com_GetServerDObjForEntnum(handle);
      v69 = ServerDObjForEntnum;
      if ( ServerDObjForEntnum )
      {
        p_anims = (const XAnim_s **)&ServerDObjForEntnum->tree->anims;
        if ( p_anims && (!*p_anims || Scr_GetAnimsIndex(*p_anims, 1u)) )
          XAnimSaveAnimTree(v69, v2);
        DObjGetHidePartBits(v69, &partBits);
        p_partBits = &partBits;
        v72 = 8i64;
        do
        {
          integer = p_partBits->array[0];
          MemFile_WriteData(v2, 4ui64, &integer);
          p_partBits = (DObjPartBits *)((char *)p_partBits + 4);
          --v72;
        }
        while ( v72 );
      }
    }
    v66 = handle + 1;
    handle = v66;
    v67 = (unsigned int)v66 < 0x800;
  }
  while ( v66 < 2048 );
  v73 = MemFile_GetUsedSize(v2);
  ProfMem_End(v73);
  SaveGameTrackingMarker(v2, "Animation");
  v74 = v94;
  Scr_SaveShutdown(scrContext, v94, 1);
  v75 = 0;
  v76 = 0;
  if ( level.num_entities > 0 )
  {
    v77 = 0i64;
    v78 = 0i64;
    do
    {
      if ( (unsigned int)v76 >= 0x800 )
      {
        LODWORD(weapon) = 2048;
        LODWORD(cosFovLimit) = v76;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", cosFovLimit, weapon) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v78].r.isInUse != g_entityIsInUse[v77] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v77] )
        G_UtilsSP_DObjDevCheckUpdate(&g_entities[v76]);
      ++v76;
      ++v77;
      ++v78;
    }
    while ( v76 < level.num_entities );
    v2 = v101;
    v75 = 0;
    v74 = v94;
  }
  if ( v96 )
  {
    while ( G_SaveMemorySP_IsSecondarySaveThreadInProgress() )
      Sys_Sleep(0);
    SaveGameTrackingMarker(v2, "Wait for 2nd thread");
    SecondarySaveThreadMemoryFile = G_SaveMemorySP_GetSecondarySaveThreadMemoryFile();
    MemFile_Append(v2, SecondarySaveThreadMemoryFile);
    v81 = "Append 2nd thread data";
  }
  else
  {
    v79 = MemFile_GetUsedSize(v2);
    ProfMem_Begin("Physics", v79);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveSP - Physics");
    MemFile_StartSegment(v2, 5, StreamModeSource_SPSaveMainState);
    WorldCollision_Write(v2);
    StaticModels_Write(v2);
    Physics_Write(v2);
    Sys_ProfEndNamedEvent();
    v80 = MemFile_GetUsedSize(v2);
    ProfMem_End(v80);
    v81 = "Secondary - Physics";
  }
  SaveGameTrackingMarker(v2, v81);
  v83 = v97;
  if ( v97 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFA500, "SV_MainSP_WaitForClientToSaveGame");
    SV_MainSP_WaitForClientToSaveGame();
    Sys_ProfEndNamedEvent();
    SaveGameTrackingMarker(v2, "Wait for client");
    if ( G_SaveMemorySP_GetClientMemoryFileValid() )
    {
      ClientMemoryFile = G_SaveMemorySP_GetClientMemoryFile();
      MemFile_Append(v2, ClientMemoryFile);
    }
    else
    {
      v2->memoryOverflow = 1;
    }
    SaveGameTrackingMarker(v2, "Append Client");
  }
  else
  {
    SV_MainSP_BeginSaveGame();
    G_SaveSP_SaveStateClient(v2, v74);
  }
  MemFile_StartSegment(v2, 9, StreamModeSource_SPSaveMainState);
  handle = 0;
  v85 = 0;
  do
  {
    v86 = &level.clients[v85].ps;
    if ( v86[1].serverTime == 2 )
    {
      G_SaveSP_RestorePlayerEventWeapons(v86, &predictableEventWeapons[4 * v85], &unpredictableEventWeapons[4 * v85]);
      v75 = handle;
    }
    handle = ++v75;
    v85 = v75;
  }
  while ( v75 < 1 );
  v87 = tls_index;
  v88 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v88 + 272) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 162, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == nullptr ) )", "( ms_activeBgs ) = %p", *(const void **)(v88 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v87) + 272i64) = v102;
  GWeaponMap::ValidateReferences(Instance);
  if ( !v83 )
    SV_MainSP_EndSaveGame();
  SaveGameTrackingMarker(v2, "Final");
  v89 = MemFile_GetUsedSize(v2);
  ProfMem_End(v89);
  v90 = MemFile_GetUsedSize(v2);
  ProfMem_End(v90);
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
  Weapon *v10; 
  EntityEvent *unpredictableEvents; 
  __int64 v12; 
  EntityEvent *v13; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2047, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !predictableEventWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2048, ASSERT_TYPE_ASSERT, "( predictableEventWeapons )", (const char *)&queryFormat, "predictableEventWeapons") )
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
      *predictableEventWeapons = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v9->eventParm);
      BG_ClearEventParameter(Instance, v9);
    }
    ++v9;
    ++events;
    ++predictableEventWeapons;
    --v7;
  }
  while ( v7 );
  v10 = unpredictableEventWeapons;
  unpredictableEvents = ps->unpredictableEvents;
  v12 = 4i64;
  v13 = ps->unpredictableEvents;
  do
  {
    if ( BG_IsWeaponEvent(unpredictableEvents->eventType) )
    {
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 478, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      *v10 = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v13->eventParm);
      BG_ClearEventParameter(Instance, v13);
    }
    ++v13;
    ++unpredictableEvents;
    ++v10;
    --v12;
  }
  while ( v12 );
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
  Weapon *v8; 
  int v9; 
  __int128 v10; 
  double v11; 
  Weapon *v12; 
  int v13; 
  __int128 v14; 
  double v15; 
  double Float; 
  GSaveSerialize<0> v17; 
  Weapon result; 
  int p; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1276, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1277, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  memset_0(client, 0, sizeof(gclient_s));
  MemoryFile = SaveMemory_GetMemoryFile(save);
  v17.m_buffer = NULL;
  *(_QWORD *)&v17.m_bufferSize = 0i64;
  if ( !MemoryFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
    __debugbreak();
  v17.m_memFile = MemoryFile;
  GSaveSerialize<0>::SerializeType<gclient_s>(&v17, client);
  v5 = s_saveSP_gclientFields;
  p_type = &s_saveSP_gclientFields[0].type;
  do
  {
    Field = G_SaveFieldSP_ReadField(v5, (unsigned __int8 *)client, save);
    if ( Field )
    {
      if ( *p_type )
      {
        do
          G_SaveFieldSP_ClearField(v5++, (unsigned __int8 *)client);
        while ( v5->type );
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435ADD0, 496i64, Field);
    }
    ++v5;
    p_type = &v5->type;
  }
  while ( v5->type );
  SaveMemory_LoadRead(&client->sess.cmd, 8, save);
  v8 = G_SaveSP_ReadWeapon(&result, save);
  v9 = *(_DWORD *)&v8->weaponCamo;
  v10 = *(_OWORD *)&v8->attachmentVariationIndices[5];
  v11 = *(double *)&v8->attachmentVariationIndices[21];
  *(__m256i *)&client->sess.cmd.weapon.weaponIdx = *(__m256i *)&v8->weaponIdx;
  *(_OWORD *)&client->sess.cmd.weapon.attachmentVariationIndices[5] = v10;
  *(double *)&client->sess.cmd.weapon.attachmentVariationIndices[21] = v11;
  *(_DWORD *)&client->sess.cmd.weapon.weaponCamo = v9;
  v12 = G_SaveSP_ReadWeapon(&result, save);
  v13 = *(_DWORD *)&v12->weaponCamo;
  v14 = *(_OWORD *)&v12->attachmentVariationIndices[5];
  v15 = *(double *)&v12->attachmentVariationIndices[21];
  *(__m256i *)&client->sess.cmd.offHand.weaponIdx = *(__m256i *)&v12->weaponIdx;
  *(_OWORD *)&client->sess.cmd.offHand.attachmentVariationIndices[5] = v14;
  *(double *)&client->sess.cmd.offHand.attachmentVariationIndices[21] = v15;
  *(_DWORD *)&client->sess.cmd.offHand.weaponCamo = v13;
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  client->sess.cmd.isAlternate = p;
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  client->sess.maxHealth = p;
  Float = MemFile_ReadFloat(&save->memFile);
  client->sess.moveSpeedScaleMultiplier = *(float *)&Float;
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
  __int64 v25; 
  int v26; 
  double v27; 
  _DWORD *v28; 
  __int64 v29; 
  _DWORD *p_fDist; 
  unsigned __int64 v31; 
  unsigned __int64 n; 
  unsigned int v33; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  __int64 v37; 
  double v38; 
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
        LODWORD(v37) = v15;
        LODWORD(v36) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      number = i->dynamic.pOwners[v10].number;
      if ( number )
      {
        if ( !level.sentients[number - 1].ent )
        {
          LODWORD(v37) = number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 136, ASSERT_TYPE_ASSERT, "( ( !number || level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( !number || level.sentients[number - 1].ent )", v37) )
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
            LODWORD(v37) = 2048;
            LODWORD(v36) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v36, v37) )
              __debugbreak();
          }
          v22 = (__int16)v22;
          if ( (unsigned int)(__int16)v22 >= 0x800 )
          {
            LODWORD(v37) = 2048;
            LODWORD(v36) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v36, v37) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v22].r.isInUse != g_entityIsInUse[v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v22] )
          {
            LODWORD(v37) = i->dynamic.pOwners[v10].number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 137, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v37) )
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
        v25 = (__int64)&i->constant.Links[m];
        if ( *(unsigned __int16 *)(v25 + 4) == buffer )
          break;
      }
      v26 = *(_DWORD *)(v25 + 8);
      v27 = *(double *)v25;
      v38 = *(double *)v25;
      if ( m < k )
      {
        v28 = (_DWORD *)(v25 + 12);
        v29 = k - m;
        p_fDist = (_DWORD *)&i->constant.Links[m].fDist;
        m = k;
        v31 = 12 * v29;
        for ( n = v31 >> 2; n; --n )
          *p_fDist++ = *v28++;
        v25 += v31;
      }
      v33 = i->constant.totalLinkCount - 1;
      if ( m < v33 )
      {
        v34 = v25 + 12;
        do
        {
          if ( *(_WORD *)(v34 + 4) > WORD2(v38) )
            break;
          v35 = *(_DWORD *)(v34 + 8);
          ++m;
          *(double *)v25 = *(double *)v34;
          *(_DWORD *)(v25 + 8) = v35;
          v34 += 12i64;
          v25 += 12i64;
        }
        while ( m < v33 );
      }
      *(double *)v25 = v27;
      *(_DWORD *)(v25 + 8) = v26;
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
  __int128 v5; 
  int v6; 
  double v7; 
  Weapon *WeaponForName; 
  Weapon resulta; 
  char psz[512]; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1174, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  MemoryFile = SaveMemory_GetMemoryFile(save);
  if ( !GSave::ms_weaponNameSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 79, ASSERT_TYPE_ASSERT, "(ms_weaponNameSize != 0)", (const char *)&queryFormat, "ms_weaponNameSize != 0") )
    __debugbreak();
  G_SaveField_ReadCStyleString(psz, GSave::ms_weaponNameSize, MemoryFile);
  if ( psz[0] )
  {
    WeaponForName = G_Weapon_GetWeaponForName(&resulta, psz);
    v5 = *(_OWORD *)&WeaponForName->attachmentVariationIndices[5];
    *(__m256i *)&result->weaponIdx = *(__m256i *)&WeaponForName->weaponIdx;
    v7 = *(double *)&WeaponForName->attachmentVariationIndices[21];
    v6 = *(_DWORD *)&WeaponForName->weaponCamo;
  }
  else
  {
    v5 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
    v6 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    *(__m256i *)&result->weaponIdx = *(__m256i *)&NULL_WEAPON.weaponIdx;
    v7 = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  }
  *(_OWORD *)&result->attachmentVariationIndices[5] = v5;
  *(double *)&result->attachmentVariationIndices[21] = v7;
  *(_DWORD *)&result->weaponCamo = v6;
  return result;
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
  badplace_t *v2; 
  __int64 v3; 
  const saveField_t *v4; 
  unsigned __int8 *v5; 
  __int64 v6; 
  const saveField_t *v7; 
  unsigned __int8 base[32]; 
  __int128 p; 

  v2 = g_badplaces;
  v3 = 16i64;
  do
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteTypeFields");
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 966, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 968, ASSERT_TYPE_ASSERT, "( writeData )", (const char *)&queryFormat, "writeData") )
      __debugbreak();
    *(__m256i *)base = *(__m256i *)&v2->endtime;
    p = *(_OWORD *)&v2->teamflags.array[4];
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fixup");
    v4 = s_saveSP_badplaceFields;
    do
      G_SaveFieldSP_WriteFixupField(v4++, base, (const unsigned __int8 *)v2);
    while ( v4->type );
    Sys_ProfEndNamedEvent();
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
      __debugbreak();
    MemFile_WriteData(memFile, 4ui64, base);
    MemFile_WriteData(memFile, 4ui64, &base[4]);
    MemFile_WriteData(memFile, 4ui64, &base[8]);
    MemFile_WriteData(memFile, 1ui64, &base[12]);
    v5 = &base[16];
    v6 = 2i64;
    do
    {
      MemFile_WriteData(memFile, 4ui64, v5);
      v5 += 4;
      --v6;
    }
    while ( v6 );
    MemFile_WriteData(memFile, 1ui64, (char *)&p + 12);
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fields");
    v7 = s_saveSP_badplaceFields;
    do
      G_SaveFieldSP_WriteField(v7++, (const unsigned __int8 *)v2, memFile);
    while ( v7->type );
    Sys_ProfEndNamedEvent();
    Sys_ProfEndNamedEvent();
    ++v2;
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
  GSaveSerialize<2> v7; 
  Mem_LargeLocal base; 
  int p; 

  Mem_LargeLocal::Mem_LargeLocal(&base, 0xFC50ui64, "gclient_t saveClient");
  m_ptr = (char *)base.m_ptr;
  Sys_ProfBeginNamedEvent(0xFFFFA500, "G_SaveSP_WriteClient");
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1189, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile", -2i64) )
    __debugbreak();
  memcpy_0(m_ptr, cl, 0xFC50ui64);
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
    G_SaveFieldSP_WriteFixupField(v6++, (unsigned __int8 *)m_ptr, (const unsigned __int8 *)cl);
  while ( v6->type );
  Sys_ProfEndNamedEvent();
  v7.m_buffer = NULL;
  *(_QWORD *)&v7.m_bufferSize = 0i64;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
    __debugbreak();
  v7.m_memFile = memFile;
  GSaveSerialize<2>::SerializeType<gclient_s>(&v7, (gclient_s *)m_ptr);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteClient_Fields");
  do
    G_SaveFieldSP_WriteField(v5++, (const unsigned __int8 *)cl, memFile);
  while ( v5->type );
  Sys_ProfEndNamedEvent();
  MemFile_WriteData(memFile, 8ui64, &cl->sess.cmd);
  G_SaveSP_WriteWeapon(&cl->sess.cmd.weapon, memFile);
  G_SaveSP_WriteWeapon(&cl->sess.cmd.offHand, memFile);
  LOBYTE(p) = cl->sess.cmd.isAlternate;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = cl->sess.maxHealth;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteFloat(memFile, cl->sess.moveSpeedScaleMultiplier);
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
  const saveField_t *v3; 
  unsigned __int8 *v4; 
  __int64 v5; 
  unsigned __int8 *v6; 
  __int64 v7; 
  unsigned __int8 *v8; 
  __int64 v9; 
  char *v10; 
  __int64 v11; 
  const saveField_t *v12; 
  __int64 totalLinkCount; 
  int v14; 
  __int64 v15; 
  int v16[8]; 
  __int64 v17; 
  unsigned __int8 base[32]; 
  __int128 p; 
  int inPlayerLOSTime; 

  v17 = -2i64;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 1603, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  for ( i = Path_FirstNode(-1); i; i = Path_NextNode(i, -1) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteTypeFields");
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 966, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( i == (pathnode_t *)-88i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 968, ASSERT_TYPE_ASSERT, "( writeData )", (const char *)&queryFormat, "writeData") )
      __debugbreak();
    *(__m256i *)base = *(__m256i *)&i->dynamic.pOwners[0].number;
    p = *(_OWORD *)&i->dynamic.bInactive;
    inPlayerLOSTime = i->dynamic.actors.inPlayerLOSTime;
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fixup");
    v3 = s_saveSP_pathnodeDynamicFields;
    do
      G_SaveFieldSP_WriteFixupField(v3++, base, (const unsigned __int8 *)&i->dynamic);
    while ( v3->type );
    Sys_ProfEndNamedEvent();
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 58, ASSERT_TYPE_ASSERT, "( memFile != nullptr )", (const char *)&queryFormat, "memFile != nullptr") )
      __debugbreak();
    v4 = base;
    v5 = 2i64;
    do
    {
      MemFile_WriteData(memFile, 4ui64, v4);
      v4 += 4;
      --v5;
    }
    while ( v5 );
    v6 = &base[8];
    v7 = 2i64;
    do
    {
      MemFile_WriteData(memFile, 4ui64, v6);
      v6 += 4;
      --v7;
    }
    while ( v7 );
    v8 = &base[16];
    v9 = 3i64;
    do
    {
      MemFile_WriteData(memFile, 4ui64, v8);
      v8 += 4;
      --v9;
    }
    while ( v9 );
    MemFile_WriteData(memFile, 2ui64, &base[28]);
    MemFile_WriteData(memFile, 2ui64, &base[30]);
    MemFile_WriteData(memFile, 1ui64, &p);
    v10 = (char *)&p + 1;
    v11 = 2i64;
    do
    {
      MemFile_WriteData(memFile, 1ui64, v10++);
      --v11;
    }
    while ( v11 );
    MemFile_WriteData(memFile, 0x10ui64, (char *)&p + 4);
    Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fields");
    v12 = s_saveSP_pathnodeDynamicFields;
    do
      G_SaveFieldSP_WriteField(v12++, (const unsigned __int8 *)&i->dynamic, memFile);
    while ( v12->type );
    Sys_ProfEndNamedEvent();
    Sys_ProfEndNamedEvent();
    totalLinkCount = i->constant.totalLinkCount;
    v14 = totalLinkCount - 1;
    if ( (int)totalLinkCount - 1 >= i->dynamic.wLinkCount )
    {
      v15 = 12 * totalLinkCount - 12;
      do
      {
        v16[0] = *(unsigned __int16 *)((char *)&i->constant.Links->nodeNum + v15);
        MemFile_WriteData(memFile, 4ui64, v16);
        --v14;
        v15 -= 12i64;
      }
      while ( v14 >= i->dynamic.wLinkCount );
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
  __m256i *v4; 
  __int64 v6; 
  const saveField_t *v7; 
  const saveField_t *v8; 
  int p[8]; 
  __int64 v10; 
  unsigned __int8 base[32]; 
  __m256i v12; 

  v10 = -2i64;
  v3 = sentientInfoCount;
  v4 = (__m256i *)sentientInfoArray;
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
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 968, ASSERT_TYPE_ASSERT, "( writeData )", (const char *)&queryFormat, "writeData") )
        __debugbreak();
      *(__m256i *)base = *v4;
      v12 = v4[1];
      Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fixup");
      v7 = s_saveSP_sentientInfoFields;
      do
        G_SaveFieldSP_WriteFixupField(v7++, base, (const unsigned __int8 *)v4);
      while ( v7->type );
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
      MemFile_WriteData(memFile, 0xCui64, &v12);
      MemFile_WriteData(memFile, 4ui64, &v12.m256i_u64[2]);
      MemFile_WriteData(memFile, 2ui64, &v12.m256i_u64[3]);
      MemFile_WriteData(memFile, 1ui64, (char *)&v12.m256i_u64[3] + 2);
      MemFile_WriteData(memFile, 1ui64, (char *)&v12.m256i_u64[3] + 4);
      MemFile_WriteData(memFile, 1ui64, (char *)&v12.m256i_u64[3] + 5);
      MemFile_WriteData(memFile, 2ui64, (char *)&v12.m256i_u64[3] + 6);
      Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SaveSP_WriteSerialize Fields");
      v8 = s_saveSP_sentientInfoFields;
      do
        G_SaveFieldSP_WriteField(v8++, (const unsigned __int8 *)v4, memFile);
      while ( v8->type );
      Sys_ProfEndNamedEvent();
      Sys_ProfEndNamedEvent();
      v4 += 2;
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
  const dvar_t *v3; 
  unsigned __int64 v7; 
  MemoryFile *MemoryFile; 
  unsigned __int64 UsedSize; 
  MemoryFile *v10; 
  scrContext_t *i; 
  MemoryFile *v12; 
  unsigned __int64 v13; 
  MemoryFile *v15; 
  unsigned __int64 v16; 
  signed __int64 bufferSize; 
  __int128 v19; 
  signed __int64 bufferSizeOriginal; 
  float v21; 
  float v22; 
  float v23; 
  unsigned __int64 v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  char *fmt; 
  char cleanSavePath[64]; 

  v3 = DVARBOOL_com_disableSaving;
  if ( !DVARBOOL_com_disableSaving && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_disableSaving") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    return 0;
  v7 = Sys_Microseconds();
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
  v10 = SaveMemory_GetMemoryFile(save);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SaveMemory_SaveSource");
  for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
    Scr_SaveSource(i, v10);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveState");
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3104, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveInitState");
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 2039, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveMainState");
  G_SaveMainState(1, v10);
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
  MemFile_StartSegment(v10, -1, StreamModeSource_SPWriteGame);
  if ( !v10->memoryOverflow && BuildCleanSavePath(cleanSavePath, 0x40ui64, pendingSave->filename, pendingSave->saveType) )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SaveMemory_CreateHeader");
    G_SaveMemorySP_CreateHeader(cleanSavePath, pendingSave->description, pendingSave->screenShotName, checksum, 0, pendingSave->suppressPlayerNotify, pendingSave->saveType, pendingSave->saveId, save);
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SaveMemory_FinalizeSave");
    G_SaveMemorySP_FinalizeSave(save);
    Sys_ProfEndNamedEvent();
    Profile_EndInternal(NULL);
    v15 = SaveMemory_GetMemoryFile(save);
    v16 = MemFile_GetUsedSize(v15);
    ProfMem_End(v16);
    ProfMem_PrintTree(0);
    if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3164, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
      __debugbreak();
    bufferSize = save->memFile.bufferSize;
    v19 = 0i64;
    *(float *)&v19 = (float)bufferSize;
    _XMM1 = v19;
    if ( bufferSize < 0 )
    {
      *(float *)&v19 = *(float *)&v19 + 1.8446744e19;
      _XMM1 = v19;
    }
    bufferSizeOriginal = save->memFile.bufferSizeOriginal;
    v21 = (float)bufferSizeOriginal;
    if ( bufferSizeOriginal < 0 )
    {
      v22 = (float)bufferSizeOriginal;
      v21 = v22 + 1.8446744e19;
    }
    v23 = *(float *)&_XMM1 / v21;
    if ( (float)(*(float *)&_XMM1 / v21) < 0.0 || v23 > 1.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_save_sp.cpp", 3167, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( ratio ) && ( ratio ) <= ( 1.f )", "ratio not in [0.f, 1.f]\n\t%g not in [%g, %g]", v23, *(double *)&_XMM1, DOUBLE_1_0) )
        __debugbreak();
    }
    v25 = (save->memFile.bufferSize + 512) >> 10;
    v26 = (unsigned int)(int)(float)(v23 * 100.0);
    fmt = (char *)((save->memFile.bufferSizeOriginal + 512) >> 10);
    if ( v23 < 0.94999999 )
    {
      if ( v23 < 0.82999998 )
        Com_Printf(10, "Savegame used %i%% of its buffer (%zu of %zu KB).\n\n", v26, v25, (size_t)fmt);
      else
        Com_PrintWarning(10, "Savegame used %i%% of its buffer (%zu of %zu KB).\n\n", v26, v25, (size_t)fmt);
    }
    else
    {
      Com_PrintError(10, "Savegame used %i%% of its buffer (%zu of %zu KB).\n\n", v26, v25, (size_t)fmt);
    }
    v27 = Sys_Microseconds();
    Sys_Printf("Save Game Total Time = %ld us\n", v27 - v7);
    return 1;
  }
  else
  {
    G_SaveMemorySP_RollbackSave(save);
    Profile_EndInternal(NULL);
    v12 = SaveMemory_GetMemoryFile(save);
    v13 = MemFile_GetUsedSize(v12);
    ProfMem_End(v13);
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

