/*
==============
LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayerThermalSettings
==============
*/

void __fastcall LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayerThermalSettings(const LocalClientNum_t localClientNum, const CgGlobalsMP *const cgameGlob, const centity_t *const entity, bool isFriendly)
{
  ?UpdateFiltersForPlayerThermalSettings@LUIOnEntityElementSpawnerMP@@CAXW4LocalClientNum_t@@QEBVCgGlobalsMP@@QEBUcentity_t@@_N@Z(localClientNum, cgameGlob, entity, isFriendly);
}

/*
==============
LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayer
==============
*/

void __fastcall LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayer(const LocalClientNum_t localClientNum, const int entityNum)
{
  ?UpdateFiltersForPlayer@LUIOnEntityElementSpawnerMP@@SAXW4LocalClientNum_t@@H@Z(localClientNum, entityNum);
}

/*
==============
LUIOnEntityElementSpawnerMP::UpdateFiltersForScriptMover
==============
*/

void __fastcall LUIOnEntityElementSpawnerMP::UpdateFiltersForScriptMover(const LocalClientNum_t localClientNum, const int entityNum)
{
  ?UpdateFiltersForScriptMover@LUIOnEntityElementSpawnerMP@@SAXW4LocalClientNum_t@@H@Z(localClientNum, entityNum);
}

/*
==============
LUIOnEntityElementSpawnerMP::UpdateFiltersForAgent
==============
*/

void __fastcall LUIOnEntityElementSpawnerMP::UpdateFiltersForAgent(const LocalClientNum_t localClientNum, const int entityNum)
{
  ?UpdateFiltersForAgent@LUIOnEntityElementSpawnerMP@@SAXW4LocalClientNum_t@@H@Z(localClientNum, entityNum);
}

/*
==============
LUIOnEntityElementSpawnerMP::UpdateFiltersForAgent
==============
*/
void LUIOnEntityElementSpawnerMP::UpdateFiltersForAgent(const LocalClientNum_t localClientNum, const int entityNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  centity_t *Entity; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v8; 
  bool v9; 
  EntityFilter v10; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  Entity = CG_GetEntity(localClientNum, entityNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 162, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_AGENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 163, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_AGENT)", (const char *)&queryFormat, "entity->nextState.eType == ET_AGENT") )
    __debugbreak();
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  v8 = CgStatic::GetCharacterInfo(LocalClientStatics, entityNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 170, ASSERT_TYPE_ASSERT, "(myCharacterInfo)", (const char *)&queryFormat, "myCharacterInfo") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 171, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
    __debugbreak();
  if ( CharacterInfo != v8 )
  {
    v9 = Com_Teams_OnSameTeam(&LocalClientGlobals->predictedPlayerState, (const team_t)CharacterInfo->team, &Entity->nextState, (const team_t)v8->team);
    LUIOnEntityElementSpawner::InsertFilteredEntity(NEUTRAL, entityNum);
    if ( LocalClientGlobals->crosshairClientNum == entityNum )
      LUIOnEntityElementSpawner::InsertFilteredEntity((const EntityFilter)4, entityNum);
    v10 = ENEMY;
    if ( !v9 )
      v10 = IN_FLUX;
    LUIOnEntityElementSpawner::InsertFilteredEntity(v10, entityNum);
  }
}

/*
==============
LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayer
==============
*/
void LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayer(const LocalClientNum_t localClientNum, const int entityNum)
{
  centity_t *Entity; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v9; 
  bool v10; 
  bool v11; 
  EntityFilter v12; 

  Entity = CG_GetEntity(localClientNum, entityNum);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 103, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 104, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_PLAYER)", (const char *)&queryFormat, "entity->nextState.eType == ET_PLAYER") )
    __debugbreak();
  clientNum = Entity->nextState.clientNum;
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  v9 = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 119, ASSERT_TYPE_ASSERT, "(myCharacterInfo)", (const char *)&queryFormat, "myCharacterInfo") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 120, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
    __debugbreak();
  v10 = CharacterInfo == v9;
  v11 = Com_Teams_OnSameTeam(&LocalClientGlobals->predictedPlayerState, (const team_t)CharacterInfo->team, &Entity->nextState, (const team_t)v9->team);
  LUIOnEntityElementSpawner::InsertFilteredEntity(NEUTRAL, entityNum);
  LUIOnEntityElementSpawner::InsertFilteredEntity(FRIENDLY, entityNum);
  if ( LocalClientGlobals->crosshairClientNum == clientNum )
    LUIOnEntityElementSpawner::InsertFilteredEntity((const EntityFilter)4, entityNum);
  if ( v10 )
    v12 = 23;
  else
    v12 = 3 - v11;
  LUIOnEntityElementSpawner::InsertFilteredEntity(v12, entityNum);
  if ( !BG_HasPerk(&v9->perks, 0x2Au) )
    LUIOnEntityElementSpawner::InsertFilteredEntity((const EntityFilter)6, entityNum);
  LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayerThermalSettings(localClientNum, LocalClientGlobals, Entity, v11);
}

/*
==============
LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayerThermalSettings
==============
*/
void LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayerThermalSettings(const LocalClientNum_t localClientNum, const CgGlobalsMP *const cgameGlob, const centity_t *const entity, bool isFriendly)
{
  __int64 v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  bool enabled; 
  CgWeaponMap *v11; 
  double v12; 
  const Weapon *CurrentWeaponForPlayer; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v15; 
  unsigned int WeaponAttachments; 
  unsigned int v17; 
  WeaponAttachment **v18; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v20; 
  const dvar_t *v21; 
  float value; 
  float v23; 
  float v24; 
  float v25; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v30; 
  __int64 v40; 
  __int64 v41; 
  int v42[4]; 
  __int64 v43; 
  bitarray<64> outPerks; 
  WeaponAttachment *attachments[30]; 

  v43 = -2i64;
  v7 = localClientNum;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 21, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 22, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 23, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  v8 = DCONST_DVARMPBOOL_thermalVisionLuiUse;
  if ( !DCONST_DVARMPBOOL_thermalVisionLuiUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thermalVisionLuiUse") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    v9 = DVARBOOL_thermalVisionLuiDebugAlwaysActive;
    if ( !DVARBOOL_thermalVisionLuiDebugAlwaysActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thermalVisionLuiDebugAlwaysActive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    enabled = v9->current.enabled;
    if ( !CgWeaponMap::ms_instance[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v11 = CgWeaponMap::ms_instance[v7];
    v12 = BG_WeaponADSFractionAffectedByReload(v11, &cgameGlob->predictedPlayerState);
    if ( *(float *)&v12 <= 0.5 )
      goto LABEL_31;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v11, &cgameGlob->predictedPlayerState);
    if ( cgameGlob == (const CgGlobalsMP *const)-8i64 )
    {
      p_weapFlags = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)1832;
    }
    else
    {
      p_weapFlags = &cgameGlob->predictedPlayerState.weapCommon.weapFlags;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) )
        goto LABEL_23;
    }
    if ( cgameGlob != (const CgGlobalsMP *const)-8i64 && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu)) )
    {
      v15 = 1;
LABEL_24:
      WeaponAttachments = BG_GetWeaponAttachments(CurrentWeaponForPlayer, v15, (const WeaponAttachment **)attachments);
      v17 = 0;
      if ( WeaponAttachments )
      {
        v18 = attachments;
        while ( 1 )
        {
          if ( !*v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 52, ASSERT_TYPE_ASSERT, "(attachments[attachmentIndex])", (const char *)&queryFormat, "attachments[attachmentIndex]") )
            __debugbreak();
          if ( (*v18)->internalName == scr_const.vrlscope )
            break;
          ++v17;
          ++v18;
          if ( v17 >= WeaponAttachments )
            goto LABEL_31;
        }
LABEL_33:
        if ( !CG_GetPerks(cgameGlob->localClientNum, entity->nextState.number, &outPerks) )
          goto LABEL_40;
        if ( isFriendly )
          goto LABEL_40;
        PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x31u);
        v20 = (unsigned int)PerkNetworkPriorityIndex;
        if ( PerkNetworkPriorityIndex < 0 )
          goto LABEL_40;
        if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
        {
          LODWORD(v41) = 64;
          LODWORD(v40) = PerkNetworkPriorityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v40, v41) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v20 & 0x1F)) & outPerks.array[v20 >> 5]) == 0 )
        {
LABEL_40:
          v21 = DCONST_DVARFLT_thermalVisionLuiDefaultDistance;
          if ( !DCONST_DVARFLT_thermalVisionLuiDefaultDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thermalVisionLuiDefaultDistance") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v21);
          value = v21->current.value;
          v23 = cgameGlob->predictedPlayerState.origin.v[0];
          v24 = cgameGlob->predictedPlayerState.origin.v[1];
          v25 = cgameGlob->predictedPlayerState.origin.v[2];
          if ( !entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(entity->pose.origin.Get_origin, &entity->pose);
          FunctionPointer_origin(&entity->pose.origin.origin.origin, (vec3_t *)v42);
          if ( entity->pose.isPosePrecise )
          {
            _XMM0 = (unsigned int)v42[0];
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v30 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v30 = *(double *)&_XMM0 * 0.000244140625;
            _XMM0 = v30;
            __asm { vcvtsd2ss xmm3, xmm0, xmm0 }
            v42[0] = _XMM3;
            _XMM1 = (unsigned int)v42[1];
            __asm { vcvtdq2pd xmm1, xmm1 }
            *((_QWORD *)&v30 + 1) = *((_QWORD *)&_XMM1 + 1);
            *(double *)&v30 = *(double *)&_XMM1 * 0.000244140625;
            _XMM0 = v30;
            __asm { vcvtsd2ss xmm4, xmm0, xmm0 }
            v42[1] = _XMM4;
            _XMM1 = (unsigned int)v42[2];
            __asm { vcvtdq2pd xmm1, xmm1 }
            *((_QWORD *)&v30 + 1) = *((_QWORD *)&_XMM1 + 1);
            *(double *)&v30 = *(double *)&_XMM1 * 0.000244140625;
            _XMM0 = v30;
            __asm { vcvtsd2ss xmm5, xmm0, xmm0 }
            v42[2] = _XMM5;
          }
          else
          {
            LODWORD(_XMM5) = v42[2];
            LODWORD(_XMM4) = v42[1];
            LODWORD(_XMM3) = v42[0];
          }
          if ( (float)((float)((float)((float)(*(float *)&_XMM4 - v24) * (float)(*(float *)&_XMM4 - v24)) + (float)((float)(*(float *)&_XMM3 - v23) * (float)(*(float *)&_XMM3 - v23))) + (float)((float)(*(float *)&_XMM5 - v25) * (float)(*(float *)&_XMM5 - v25))) <= (float)(value * value) )
            LUIOnEntityElementSpawner::InsertFilteredEntity((const EntityFilter)21, entity->nextState.number);
          memset(v42, 0, 0xCui64);
        }
        return;
      }
LABEL_31:
      if ( !enabled && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.otherFlags, ACTIVE, 4u) )
        return;
      goto LABEL_33;
    }
LABEL_23:
    v15 = 0;
    goto LABEL_24;
  }
}

/*
==============
LUIOnEntityElementSpawnerMP::UpdateFiltersForScriptMover
==============
*/
void LUIOnEntityElementSpawnerMP::UpdateFiltersForScriptMover(const LocalClientNum_t localClientNum, const int entityNum)
{
  centity_t *Entity; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const entityState_t *p_nextState; 
  int clientNum; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v10; 
  bool v11; 
  EntityFilter v12; 

  Entity = CG_GetEntity(localClientNum, entityNum);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 204, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 205, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "entity->nextState.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  if ( Entity->nextState.clientNum )
  {
    p_nextState = &Entity->nextState;
    if ( !CG_Entity_IsNoDraw(localClientNum, &Entity->nextState, NULL) )
    {
      clientNum = Entity->nextState.clientNum;
      LUIOnEntityElementSpawner::InsertFilteredEntity((const EntityFilter)5, entityNum);
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
      v10 = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum - 1);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 223, ASSERT_TYPE_ASSERT, "(myCharacterInfo)", (const char *)&queryFormat, "myCharacterInfo") )
        __debugbreak();
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 224, ASSERT_TYPE_ASSERT, "(dogtagOwnerCharacterInfo)", (const char *)&queryFormat, "dogtagOwnerCharacterInfo") )
        __debugbreak();
      v11 = Com_Teams_OnSameTeam(&LocalClientGlobals->predictedPlayerState, (const team_t)CharacterInfo->team, p_nextState, (const team_t)v10->team);
      v12 = ENEMY;
      if ( !v11 )
        v12 = IN_FLUX;
      LUIOnEntityElementSpawner::InsertFilteredEntity(v12, entityNum);
    }
  }
}

