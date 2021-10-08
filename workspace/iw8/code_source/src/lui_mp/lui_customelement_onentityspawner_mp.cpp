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
  __int64 v13; 
  const dvar_t *v14; 
  const dvar_t *v16; 
  bool enabled; 
  CgWeaponMap *v18; 
  char v19; 
  const Weapon *CurrentWeaponForPlayer; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v22; 
  unsigned int WeaponAttachments; 
  unsigned int v24; 
  WeaponAttachment **v25; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v27; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  bool v34; 
  __int64 v62; 
  __int64 v63; 
  int v64[4]; 
  __int64 v65; 
  bitarray<64> outPerks; 
  WeaponAttachment *attachments[30]; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  v65 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  v13 = localClientNum;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 21, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 22, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 23, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  v14 = DCONST_DVARMPBOOL_thermalVisionLuiUse;
  if ( !DCONST_DVARMPBOOL_thermalVisionLuiUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thermalVisionLuiUse") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    _RSI = &cgameGlob->predictedPlayerState;
    v16 = DVARBOOL_thermalVisionLuiDebugAlwaysActive;
    if ( !DVARBOOL_thermalVisionLuiDebugAlwaysActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thermalVisionLuiDebugAlwaysActive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    enabled = v16->current.enabled;
    if ( !CgWeaponMap::ms_instance[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v18 = CgWeaponMap::ms_instance[v13];
    *(double *)&_XMM0 = BG_WeaponADSFractionAffectedByReload(v18, &cgameGlob->predictedPlayerState);
    __asm { vcomiss xmm0, cs:__real@3f000000 }
    if ( v19 | v34 )
      goto LABEL_31;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v18, &cgameGlob->predictedPlayerState);
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
      v22 = 1;
LABEL_24:
      WeaponAttachments = BG_GetWeaponAttachments(CurrentWeaponForPlayer, v22, (const WeaponAttachment **)attachments);
      v24 = 0;
      if ( WeaponAttachments )
      {
        v25 = attachments;
        while ( 1 )
        {
          if ( !*v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_onentityspawner_mp.cpp", 52, ASSERT_TYPE_ASSERT, "(attachments[attachmentIndex])", (const char *)&queryFormat, "attachments[attachmentIndex]") )
            __debugbreak();
          if ( (*v25)->internalName == scr_const.vrlscope )
            break;
          ++v24;
          ++v25;
          if ( v24 >= WeaponAttachments )
            goto LABEL_31;
        }
LABEL_33:
        if ( !CG_GetPerks(cgameGlob->localClientNum, entity->nextState.number, &outPerks) )
          goto LABEL_40;
        if ( isFriendly )
          goto LABEL_40;
        PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x31u);
        v27 = (unsigned int)PerkNetworkPriorityIndex;
        if ( PerkNetworkPriorityIndex < 0 )
          goto LABEL_40;
        if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
        {
          LODWORD(v63) = 64;
          LODWORD(v62) = PerkNetworkPriorityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v62, v63) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v27 & 0x1F)) & outPerks.array[v27 >> 5]) == 0 )
        {
LABEL_40:
          _RDI = DCONST_DVARFLT_thermalVisionLuiDefaultDistance;
          if ( !DCONST_DVARFLT_thermalVisionLuiDefaultDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thermalVisionLuiDefaultDistance") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm
          {
            vmovss  xmm6, dword ptr [rdi+28h]
            vmovss  xmm7, dword ptr [rsi+30h]
            vmovss  xmm8, dword ptr [rsi+34h]
            vmovss  xmm9, dword ptr [rsi+38h]
          }
          if ( !entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(entity->pose.origin.Get_origin, &entity->pose);
          FunctionPointer_origin(&entity->pose.origin.origin.origin, (vec3_t *)v64);
          v34 = entity->pose.isPosePrecise == 0;
          if ( entity->pose.isPosePrecise )
          {
            __asm
            {
              vmovd   xmm0, [rsp+1D8h+var_198]
              vcvtdq2pd xmm0, xmm0
              vmovsd  xmm2, cs:__real@3f30000000000000
              vmulsd  xmm0, xmm0, xmm2
              vcvtsd2ss xmm3, xmm0, xmm0
              vmovss  [rsp+1D8h+var_198], xmm3
              vmovd   xmm1, [rsp+1D8h+var_194]
              vcvtdq2pd xmm1, xmm1
              vmulsd  xmm0, xmm1, xmm2
              vcvtsd2ss xmm4, xmm0, xmm0
              vmovss  [rsp+1D8h+var_194], xmm4
              vmovd   xmm1, [rsp+1D8h+var_190]
              vcvtdq2pd xmm1, xmm1
              vmulsd  xmm0, xmm1, xmm2
              vcvtsd2ss xmm5, xmm0, xmm0
              vmovss  [rsp+1D8h+var_190], xmm5
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm5, [rsp+1D8h+var_190]
              vmovss  xmm4, [rsp+1D8h+var_194]
              vmovss  xmm3, [rsp+1D8h+var_198]
            }
          }
          __asm
          {
            vsubss  xmm2, xmm3, xmm7
            vsubss  xmm0, xmm4, xmm8
            vsubss  xmm3, xmm5, xmm9
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vcomiss xmm3, xmm0
          }
          if ( v34 )
            LUIOnEntityElementSpawner::InsertFilteredEntity((const EntityFilter)21, entity->nextState.number);
          memset(v64, 0, 0xCui64);
        }
        goto LABEL_57;
      }
LABEL_31:
      if ( !enabled && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.otherFlags, ACTIVE, 4u) )
        goto LABEL_57;
      goto LABEL_33;
    }
LABEL_23:
    v22 = 0;
    goto LABEL_24;
  }
LABEL_57:
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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

