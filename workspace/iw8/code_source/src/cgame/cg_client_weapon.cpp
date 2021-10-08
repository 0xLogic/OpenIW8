/*
==============
CG_ClientWeapon_ProcessVFX
==============
*/

void __fastcall CG_ClientWeapon_ProcessVFX(const LocalClientNum_t localClientNum, centity_t *cent, const CgClientWeaponState *weaponState)
{
  ?CG_ClientWeapon_ProcessVFX@@YAXW4LocalClientNum_t@@PEAUcentity_t@@AEBUCgClientWeaponState@@@Z(localClientNum, cent, weaponState);
}

/*
==============
CG_ClientWeapon_ProcessEntity
==============
*/

void __fastcall CG_ClientWeapon_ProcessEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_ClientWeapon_ProcessEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_ClientWeapon_Init
==============
*/

void __fastcall CG_ClientWeapon_Init(LocalClientNum_t localClientNum)
{
  ?CG_ClientWeapon_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientWeapon_FindAnims
==============
*/

void CG_ClientWeapon_FindAnims(void)
{
  ?CG_ClientWeapon_FindAnims@@YAXXZ();
}

/*
==============
CG_ClientWeapon_Shutdown
==============
*/

void CG_ClientWeapon_Shutdown(void)
{
  ?CG_ClientWeapon_Shutdown@@YAXXZ();
}

/*
==============
CG_ClientWeapon_BuildDObj
==============
*/
void CG_ClientWeapon_BuildDObj(const LocalClientNum_t localClientNum, centity_t *cent, const CgClientWeaponState *weaponState, const bool refreshOverridesOnly)
{
  __int64 v7; 
  centity_t::PerTypeData v8; 
  unsigned int number; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v15; 
  char *v16; 
  bool isViewModel; 
  const WeaponDef *v18; 
  bool v19; 
  DObj *ClientDObj; 
  unsigned __int16 v21; 
  DObjPartBits *p_hidePartBits; 
  __int64 m_mapEntryId; 
  __int64 useDualWielding; 
  __int64 attachBoneName; 
  __int64 maxDObjModels; 
  DObjModel *outDObjModels; 
  unsigned __int16 outModelIndex[2]; 
  bool isDefaultModel; 
  DObjStickerSlotList result; 
  DObjStickerSlotList stickerSlots; 
  DObjModel dobjModels; 

  _RSI = weaponState;
  v7 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 497, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 498, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(useDualWielding) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 499, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", useDualWielding, 2) )
      __debugbreak();
  }
  if ( !refreshOverridesOnly )
  {
    CG_ClientWeapon_ClearVFXState((const LocalClientNum_t)v7, cent);
    CG_ClientWeapon_FreeTree((const LocalClientNum_t)v7, cent);
    Com_SafeClientDObjFree(cent->nextState.number, (LocalClientNum_t)v7);
  }
  v8.flightDurationMs = 0;
  if ( _RSI->isWeaponLoaded || _RSI->isDefaultModel )
  {
    isViewModel = _RSI->isViewModel;
    isDefaultModel = _RSI->isDefaultModel;
    v18 = BG_WeaponDef(&_RSI->weapon, 0);
    v19 = BG_WeaponIsDualWield(&_RSI->weapon) && v18->dualWieldType != DUAL_WIELD_TYPE_ALT_MODE;
    ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v7);
    outModelIndex[0] = 0;
    CG_Weapons_BuildDObj(WEAPON_HAND_DEFAULT, &_RSI->weapon, isViewModel, 0, isDefaultModel, v19, (scr_string_t)0, 0x20u, &dobjModels, outModelIndex, NULL);
    v21 = outModelIndex[0];
    if ( (unsigned __int16)(outModelIndex[0] - 1) > 0x1Fu )
    {
      LODWORD(maxDObjModels) = 32;
      LODWORD(attachBoneName) = 1;
      LODWORD(useDualWielding) = outModelIndex[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 522, ASSERT_TYPE_ASSERT, "( 1 ) <= ( dobjModelCount ) && ( dobjModelCount ) <= ( ( 32 ) )", "dobjModelCount not in [1, DOBJ_MAX_CHARACTER_SUBMODELS]\n\t%i not in [%i, %i]", useDualWielding, attachBoneName, maxDObjModels) )
        __debugbreak();
      v21 = outModelIndex[0];
    }
    if ( refreshOverridesOnly && ClientDObj )
    {
      DObjFreeMaterialOverrides(ClientDObj);
      DObjFreeMaterialData(ClientDObj);
    }
    else
    {
      ClientDObj = Com_ClientDObjCreate(&dobjModels, v21, NULL, cent->nextState.number, (LocalClientNum_t)v7, 0, cent->nextState.number);
    }
    if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 535, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    if ( ClientDObj->numModels != outModelIndex[0] )
    {
      LODWORD(outDObjModels) = outModelIndex[0];
      LODWORD(maxDObjModels) = ClientDObj->numModels;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 536, ASSERT_TYPE_ASSERT, "( obj->numModels ) == ( dobjModelCount )", "%s == %s\n\t%i, %i", "obj->numModels", "dobjModelCount", maxDObjModels, outDObjModels) )
        __debugbreak();
    }
    if ( ClientDObj->tree != cent->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 537, ASSERT_TYPE_ASSERT, "( obj->tree ) == ( cent->tree )", "%s == %s\n\t%p, %p", "obj->tree", "cent->tree", ClientDObj->tree, cent->tree) )
      __debugbreak();
    DObjSetCamoMaterialOverride(ClientDObj, &dobjModels, outModelIndex[0]);
    _RAX = CG_Weapons_BuildStickerSlotList(&result, (const LocalClientNum_t)v7, NULL, 0, &_RSI->weapon);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0BF8h+stickerSlots.modelTypeToApply], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rsp+0BF8h+stickerSlots.modelTypeToApply+20h], ymm1
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rsp+0BF8h+stickerSlots.modelTypeToApply+40h], ymm0
      vmovups ymm1, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rsp+0BF8h+stickerSlots.slots.overrideMaterial], ymm1
      vmovups xmm0, xmmword ptr [rax+80h]
      vmovups xmmword ptr [rsp+0BF8h+stickerSlots.slots.overrideMaterial+20h], xmm0
      vmovsd  xmm1, qword ptr [rax+90h]
      vmovsd  [rsp+0BF8h+stickerSlots.slots.overrideMaterial+30h], xmm1
    }
    DObjSetStickerMaterialOverrides(ClientDObj, NULL, &stickerSlots);
    BG_UpdateWeaponHidePartBitsForDObj(ClientDObj, &_RSI->weapon, 0, 0);
    BG_UpdatedWeaponBones(&_RSI->weapon, ClientDObj, 0);
    p_hidePartBits = &ClientDObj->hidePartBits;
    if ( _RSI->showDanglyBits )
    {
      BG_ShowBone((const scr_string_t)scr_const.tag_zerog_off, ClientDObj, p_hidePartBits, 0);
      BG_ShowBone((const scr_string_t)scr_const.tag_zerog_off2, ClientDObj, &ClientDObj->hidePartBits, 0);
      BG_ShowBone((const scr_string_t)scr_const.j_loose_round, ClientDObj, &ClientDObj->hidePartBits, 0);
      BG_ShowBone((const scr_string_t)scr_const.tag_mag_spring_hide, ClientDObj, &ClientDObj->hidePartBits, 0);
      BG_ShowBone((const scr_string_t)scr_const.j_mag_spring, ClientDObj, &ClientDObj->hidePartBits, 0);
    }
    else
    {
      BG_HideBone((const scr_string_t)scr_const.tag_zerog_off, ClientDObj, p_hidePartBits, 0);
      BG_HideBone((const scr_string_t)scr_const.tag_zerog_off2, ClientDObj, &ClientDObj->hidePartBits, 0);
      BG_HideBone((const scr_string_t)scr_const.j_loose_round, ClientDObj, &ClientDObj->hidePartBits, 0);
      BG_HideBone((const scr_string_t)scr_const.tag_mag_spring_hide, ClientDObj, &ClientDObj->hidePartBits, 0);
      BG_HideBone((const scr_string_t)scr_const.j_mag_spring, ClientDObj, &ClientDObj->hidePartBits, 0);
    }
    goto LABEL_69;
  }
  number = cent->nextState.number;
  if ( number > 0x9E4 )
  {
    LODWORD(attachBoneName) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", attachBoneName) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(attachBoneName) = 2;
    LODWORD(useDualWielding) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", useDualWielding, attachBoneName) )
      __debugbreak();
  }
  v10 = 2533 * v7 + number;
  if ( v10 >= 0x13CA )
  {
    LODWORD(attachBoneName) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", attachBoneName) )
      __debugbreak();
  }
  v11 = clientObjMap[v10];
  if ( !v11 )
    goto LABEL_69;
  if ( v11 >= (unsigned int)s_objCount )
  {
    LODWORD(attachBoneName) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", attachBoneName) )
      __debugbreak();
  }
  if ( !s_objBuf[v11] )
  {
LABEL_69:
    _R14 = 0x140000000ui64;
    goto LABEL_70;
  }
  v12 = cent->nextState.number;
  if ( v12 > 0x9E4 )
  {
    LODWORD(attachBoneName) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", attachBoneName) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(attachBoneName) = 2;
    LODWORD(useDualWielding) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", useDualWielding, attachBoneName) )
      __debugbreak();
  }
  v13 = 2533 * v7 + v12;
  if ( v13 >= 0x13CA )
  {
    LODWORD(attachBoneName) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", attachBoneName) )
      __debugbreak();
  }
  _R14 = 0x140000000ui64;
  v15 = clientObjMap[v13];
  if ( v15 )
  {
    if ( v15 >= (unsigned int)s_objCount )
    {
      LODWORD(attachBoneName) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", attachBoneName) )
        __debugbreak();
    }
    v16 = s_objBuf[v15];
  }
  else
  {
    v16 = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 561, ASSERT_TYPE_ASSERT, "( Com_GetClientDObj( cent->nextState.number, localClientNum ) ) == ( nullptr )", "%s == %s\n\t%p, %p", "Com_GetClientDObj( cent->nextState.number, localClientNum )", "nullptr", v16, NULL) )
    __debugbreak();
LABEL_70:
  if ( _RSI->isWeaponLoaded )
    v8.flightDurationMs = _RSI->weapon.weaponCamo;
  cent->typeData = v8;
  m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
  if ( (unsigned int)m_mapEntryId >= 0x32 )
  {
    LODWORD(attachBoneName) = 50;
    LODWORD(useDualWielding) = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 181, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", useDualWielding, attachBoneName) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(attachBoneName) = 2;
    LODWORD(useDualWielding) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 183, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clientWeaponState ) ) + 0 ) )", "localClientNum doesn't index s_clientWeaponState\n\t%i not in [0, %i)", useDualWielding, attachBoneName) )
      __debugbreak();
  }
  if ( (unsigned int)m_mapEntryId >= 0x32 )
  {
    LODWORD(attachBoneName) = 50;
    LODWORD(useDualWielding) = m_mapEntryId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 184, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientWeaponState[localClientNum] ) ) + 0 ) )", "weaponIndex doesn't index s_clientWeaponState[localClientNum]\n\t%i not in [0, %i)", useDualWielding, attachBoneName) )
      __debugbreak();
  }
  __asm { vmovups ymm0, ymmword ptr [rsi] }
  _RAX = 60 * (m_mapEntryId + 50 * v7);
  __asm
  {
    vmovups ymmword ptr [rax+r14+10ECC7A0h], ymm0
    vmovups xmm1, xmmword ptr [rsi+20h]
  }
  _RCX = (char *)s_clientWeaponState + _RAX;
  __asm
  {
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  xmm0, qword ptr [rsi+30h]
    vmovsd  qword ptr [rcx+30h], xmm0
  }
  *((_DWORD *)_RCX + 14) = *(_DWORD *)&_RSI->weapon.weaponCamo;
}

/*
==============
CG_ClientWeapon_ClearVFXState
==============
*/
void CG_ClientWeapon_ClearVFXState(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 m_mapEntryId; 
  __int64 v3; 
  ParticleSystemHandle handle; 
  ClientWeaponVFXState *v5; 
  scr_string_t vfxName; 
  scr_string_t tagName; 

  m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
  v3 = localClientNum;
  if ( (unsigned int)m_mapEntryId >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId, 50) )
    __debugbreak();
  handle = s_clientWeaponVFX[v3][m_mapEntryId].handle;
  v5 = &s_clientWeaponVFX[v3][m_mapEntryId];
  if ( handle )
  {
    FX_KillEffect((LocalClientNum_t)v3, handle);
    v5->handle = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
  vfxName = v5->vfxName;
  if ( vfxName )
  {
    SL_RemoveRefToString(vfxName);
    v5->vfxName = 0;
  }
  tagName = v5->tagName;
  if ( tagName )
  {
    SL_RemoveRefToString(tagName);
    v5->tagName = 0;
  }
}

/*
==============
CG_ClientWeapon_FindAnims
==============
*/
void CG_ClientWeapon_FindAnims(void)
{
  unsigned int v0; 
  char **v1; 
  __int64 v2; 
  int maxPublicNodes; 

  if ( !s_clientWeaponAnims.initialized )
  {
    v0 = 0;
    XAnimCreateAnimsInPlaceWithParameters(XANIM_SUBTREE_DEFAULT, &s_clientWeaponAnims.xanim, 4, 4, NULL, 160, s_clientWeaponAnims.bindings, 0, NULL);
    XAnimSetNumGameParameters(&s_clientWeaponAnims.xanim, 4u);
    s_clientWeaponAnims.xanim.debugName = s_clientWeaponAnims.debugName;
    v1 = &s_clientWeaponAnims.debugAnimNames[1];
    do
    {
      v1 += 3;
      *(v1 - 4) = s_clientWeaponAnims.debugNames[v0];
      *(v1 - 3) = s_clientWeaponAnims.debugNames[v0 + 1];
      v2 = (int)(v0 + 2);
      v0 += 3;
      *(v1 - 2) = s_clientWeaponAnims.debugNames[v2];
    }
    while ( v0 < 3 );
    __asm { vmovsd  xmm0, qword ptr cs:aClientWeapon; "CLIENT_WEAPON" }
    s_clientWeaponAnims.xanim.debugAnimNames = s_clientWeaponAnims.debugAnimNames;
    LOBYTE(maxPublicNodes) = 4;
    strcpy(&s_clientWeaponAnims.debugName[8], "EAPON");
    __asm { vmovsd  qword ptr cs:s_clientWeaponAnims.debugName, xmm0 }
    XAnimCustomNode(scr_const.xanimAnalogClock, &s_clientWeaponAnims.xanim, 1u, "analog_clock", 2u, 1u, 0x40u, (const XAnimSyncGroupID)maxPublicNodes, 0);
    XAnimBindGameParameterToNodeParameterByIndex(&s_clientWeaponAnims.xanim, 1u, 0, scr_const.clockHourAngle);
    XAnimBindGameParameterToNodeParameterByIndex(&s_clientWeaponAnims.xanim, 1u, 1u, scr_const.clockMinuteAngle);
    XAnimBindGameParameterToNodeParameterByIndex(&s_clientWeaponAnims.xanim, 1u, 2u, scr_const.clockSecondAngle);
    XAnimBindGameParameterToNodeParameterByIndex(&s_clientWeaponAnims.xanim, 1u, 3u, scr_const.clockOscillationFraction);
    XAnimSetupBindingIndexes(&s_clientWeaponAnims.xanim);
    s_clientWeaponAnims.initialized = 1;
  }
}

/*
==============
CG_ClientWeapon_FreeTree
==============
*/
void CG_ClientWeapon_FreeTree(const LocalClientNum_t localClientNum, centity_t *cent)
{
  DObj *ClientDObj; 
  DObj *v5; 
  XAnimTree *tree; 
  XAnimTree *v7; 
  __int64 v8; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 465, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 466, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v8) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 467, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, 2) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  v5 = ClientDObj;
  if ( ClientDObj )
  {
    tree = ClientDObj->tree;
    if ( tree != cent->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 478, ASSERT_TYPE_ASSERT, "( obj->tree ) == ( cent->tree )", "%s == %s\n\t%p, %p", "obj->tree", "cent->tree", tree, cent->tree) )
      __debugbreak();
    v7 = v5->tree;
    if ( v5->tree )
    {
      DObjSetTree(v5, NULL);
      cent->tree = NULL;
      XAnimFreeAnimTreeByType(v7);
    }
  }
  else if ( cent->tree )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 472, ASSERT_TYPE_ASSERT, "( nullptr ) == ( cent->tree )", "%s == %s\n\t%p, %p", "nullptr", "cent->tree", NULL, cent->tree) )
      __debugbreak();
  }
}

/*
==============
CG_ClientWeapon_GetWeaponState
==============
*/
void CG_ClientWeapon_GetWeaponState(const LocalClientNum_t localClientNum, const centity_t *cent, CgClientWeaponState *outWeaponState)
{
  unsigned int m_mapEntryId; 
  const char *v8; 
  bool IsViewModel; 
  bool AllowDefault; 
  bool ShowDanglyBits; 
  bool v16; 
  bool IsWristwatch; 
  bool WeaponLoaded; 
  int v22; 
  bool v23; 
  bool v25; 
  __int64 v26; 
  __int64 v27; 
  Weapon result; 
  Weapon weapon; 

  _RSI = outWeaponState;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 221, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 222, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 223, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  if ( cent->nextState.un.scriptMoverType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 224, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ClientWeapon)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ClientWeapon") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v26) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, 2) )
      __debugbreak();
  }
  m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
  if ( m_mapEntryId >= 0x32 )
  {
    LODWORD(v27) = 50;
    LODWORD(v26) = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  v8 = CL_UIWeapon_GetWeapon(localClientNum, m_mapEntryId);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 231, ASSERT_TYPE_ASSERT, "(weaponName)", (const char *)&queryFormat, "weaponName") )
    __debugbreak();
  _RAX = CG_Weapons_GetWeaponForName(&result, v8);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+108h+weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+108h+weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+108h+weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  IsViewModel = CL_UIWeapon_GetIsViewModel(localClientNum, m_mapEntryId);
  AllowDefault = CL_UIWeapon_GetAllowDefault(localClientNum, m_mapEntryId);
  ShowDanglyBits = CL_UIWeapon_GetShowDanglyBits(localClientNum, m_mapEntryId);
  v16 = CL_UIWeapon_GetVisible(localClientNum, m_mapEntryId) && !CG_Entity_IsNoDraw(localClientNum, &cent->nextState, NULL) && weapon.weaponIdx;
  IsWristwatch = CL_UIWeapon_GetIsWristwatch(localClientNum, m_mapEntryId);
  WeaponLoaded = CL_UIWeapon_GetWeaponLoaded(localClientNum, m_mapEntryId, &weapon);
  __asm
  {
    vmovups ymm2, ymmword ptr [rsp+108h+weapon.weaponIdx]
    vmovups xmm0, xmmword ptr [rsp+108h+weapon.attachmentVariationIndices+5]
    vmovsd  xmm1, qword ptr [rsp+108h+weapon.attachmentVariationIndices+15h]
  }
  v22 = *(_DWORD *)&weapon.weaponCamo;
  v23 = WeaponLoaded;
  __asm
  {
    vmovups ymmword ptr [rsi], ymm2
    vmovups xmmword ptr [rsi+20h], xmm0
  }
  _RSI->isWeaponLoaded = WeaponLoaded;
  __asm { vmovd   eax, xmm2 }
  _RSI->isViewModel = IsViewModel;
  _RSI->isWristwatch = IsWristwatch;
  _RSI->showDanglyBits = ShowDanglyBits;
  _RSI->isVisible = v16;
  __asm { vmovsd  qword ptr [rsi+30h], xmm1 }
  *(_DWORD *)&_RSI->weapon.weaponCamo = v22;
  if ( (_WORD)_EAX )
  {
    v25 = !v23 && AllowDefault;
    _RSI->isDefaultModel = v25;
  }
  else
  {
    _RSI->isDefaultModel = 0;
  }
}

/*
==============
CG_ClientWeapon_Init
==============
*/
void CG_ClientWeapon_Init(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  scr_string_t *p_vfxName; 

  v1 = localClientNum;
  memset_0(s_clientWeaponState, 0, sizeof(s_clientWeaponState));
  v2 = 0;
  p_vfxName = &s_clientWeaponVFX[v1][1].vfxName;
  do
  {
    v2 += 25;
    *((_QWORD *)p_vfxName - 2) = 0i64;
    *((_QWORD *)p_vfxName - 1) = 0i64;
    *(_QWORD *)p_vfxName = 0i64;
    *((_QWORD *)p_vfxName + 1) = 0i64;
    *((_QWORD *)p_vfxName + 2) = 0i64;
    *((_QWORD *)p_vfxName + 3) = 0i64;
    *((_QWORD *)p_vfxName + 4) = 0i64;
    *((_QWORD *)p_vfxName + 5) = 0i64;
    *((_QWORD *)p_vfxName + 6) = 0i64;
    *((_QWORD *)p_vfxName + 7) = 0i64;
    *((_QWORD *)p_vfxName + 8) = 0i64;
    *((_QWORD *)p_vfxName + 9) = 0i64;
    *((_QWORD *)p_vfxName + 10) = 0i64;
    *((_QWORD *)p_vfxName + 11) = 0i64;
    *((_QWORD *)p_vfxName + 12) = 0i64;
    *((_QWORD *)p_vfxName + 13) = 0i64;
    *((_QWORD *)p_vfxName + 14) = 0i64;
    *((_QWORD *)p_vfxName + 15) = 0i64;
    *((_QWORD *)p_vfxName + 16) = 0i64;
    *((_QWORD *)p_vfxName + 17) = 0i64;
    *((_QWORD *)p_vfxName + 18) = 0i64;
    *((_QWORD *)p_vfxName + 19) = 0i64;
    *((_QWORD *)p_vfxName + 20) = 0i64;
    *((_QWORD *)p_vfxName + 21) = 0i64;
    *((_QWORD *)p_vfxName + 22) = 0i64;
    *((_QWORD *)p_vfxName + 23) = 0i64;
    *((_QWORD *)p_vfxName + 24) = 0i64;
    *((_QWORD *)p_vfxName + 25) = 0i64;
    *((_QWORD *)p_vfxName + 26) = 0i64;
    *((_QWORD *)p_vfxName + 27) = 0i64;
    *((_QWORD *)p_vfxName + 28) = 0i64;
    *((_QWORD *)p_vfxName + 29) = 0i64;
    *((_QWORD *)p_vfxName + 30) = 0i64;
    *((_QWORD *)p_vfxName + 31) = 0i64;
    *((_QWORD *)p_vfxName + 32) = 0i64;
    *((_QWORD *)p_vfxName + 33) = 0i64;
    *((_QWORD *)p_vfxName + 34) = 0i64;
    *((_DWORD *)p_vfxName + 70) = 0;
    p_vfxName += 75;
  }
  while ( v2 < 0x32 );
}

/*
==============
CG_ClientWeapon_IsDObjDirty
==============
*/
char CG_ClientWeapon_IsDObjDirty(const LocalClientNum_t localClientNum, const centity_t *cent, const CgClientWeaponState *weaponState, bool *outResetDynamicBonesHint, const bool validate)
{
  __int64 v7; 
  DObj *ClientDObj; 
  const DObj *v10; 
  int numModels; 
  bool v12; 
  __int64 m_mapEntryId; 
  const WeaponDef *v14; 
  bool v15; 
  const XModel *WeaponModels; 
  const char **p_name; 
  int v18; 
  unsigned int v19; 
  unsigned int AllWeaponAttachmentsWithIds; 
  unsigned __int8 *v21; 
  WeaponAttachment **v22; 
  const XModel *AttachmentModel; 
  const XModel *v24; 
  XAnimDynamicBones *dynamicBones; 
  bool v26; 
  __int64 v27; 
  unsigned __int8 *v28; 
  const WeaponAttachment **v29; 
  const XModel *v30; 
  const XModel *v31; 
  XAnimDynamicBones *v32; 
  __int64 isUsingDetonator; 
  __int64 isUsingCensorshipWorldModel; 
  WeaponAttachment *attachments[30]; 
  unsigned __int8 attachmentIds[32]; 

  v7 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 265, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 266, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !weaponState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 267, ASSERT_TYPE_ASSERT, "(weaponState)", (const char *)&queryFormat, "weaponState") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(isUsingDetonator) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 268, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", isUsingDetonator, 2) )
      __debugbreak();
  }
  if ( !outResetDynamicBonesHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 269, ASSERT_TYPE_ASSERT, "(outResetDynamicBonesHint != nullptr)", (const char *)&queryFormat, "outResetDynamicBonesHint != nullptr") )
    __debugbreak();
  *outResetDynamicBonesHint = 0;
  ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v7);
  v10 = ClientDObj;
  if ( !ClientDObj )
  {
    if ( validate )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 385, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tCG_ClientWeapon_IsDObjDirty: CG_ClientWeapon has no dobj.", "!validate");
      goto LABEL_76;
    }
    return 1;
  }
  numModels = ClientDObj->numModels;
  if ( !weaponState->isWeaponLoaded && !weaponState->isDefaultModel )
  {
    if ( !validate )
      return 1;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 377, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tCG_ClientWeapon_IsDObjDirty: The cached weapon says no weapon model is available, but we have a dobj built with one that needs to be freed", "!validate");
    goto LABEL_76;
  }
  m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
  if ( (unsigned int)m_mapEntryId >= 0x32 )
  {
    LODWORD(isUsingCensorshipWorldModel) = 50;
    LODWORD(isUsingDetonator) = m_mapEntryId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 170, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(isUsingCensorshipWorldModel) = 2;
    LODWORD(isUsingDetonator) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 172, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clientWeaponState ) ) + 0 ) )", "localClientNum doesn't index s_clientWeaponState\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  if ( (unsigned int)m_mapEntryId >= 0x32 )
  {
    LODWORD(isUsingCensorshipWorldModel) = 50;
    LODWORD(isUsingDetonator) = m_mapEntryId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 173, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientWeaponState[localClientNum] ) ) + 0 ) )", "weaponIndex doesn't index s_clientWeaponState[localClientNum]\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  if ( memcmp_0(&s_clientWeaponState[v7][m_mapEntryId], weaponState, 0x3Cui64) )
  {
    if ( !validate )
      return 1;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 284, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tCG_ClientWeapon_IsDObjDirty: Weapon structs do not match!", "!validate");
    goto LABEL_76;
  }
  v14 = BG_WeaponDef(&weaponState->weapon, 0);
  v15 = BG_WeaponIsDualWield(&weaponState->weapon) && v14->dualWieldType != DUAL_WIELD_TYPE_ALT_MODE;
  WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, &weaponState->weapon, weaponState->isViewModel, weaponState->isDefaultModel, v15, 0, 0);
  p_name = &WeaponModels->name;
  if ( !WeaponModels )
  {
    if ( !validate )
      return 1;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 295, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tCG_ClientWeapon_IsDObjDirty: No weapon model is available, dobj needs to be freed", "!validate");
    goto LABEL_76;
  }
  if ( DObjGetModelIndex(v10, WeaponModels) < 0 )
  {
    if ( !validate )
      return 1;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 301, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tCG_ClientWeapon_IsDObjDirty: The current object does not contain the correct weapon model '%s'", "!validate", *p_name);
    goto LABEL_76;
  }
  if ( !numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 305, ASSERT_TYPE_ASSERT, "(modelCount > 0)", (const char *)&queryFormat, "modelCount > 0") )
    __debugbreak();
  v18 = numModels - 1;
  v19 = 0;
  AllWeaponAttachmentsWithIds = BG_GetAllWeaponAttachmentsWithIds(&weaponState->weapon, (const WeaponAttachment **)attachments, attachmentIds);
  if ( !AllWeaponAttachmentsWithIds )
  {
LABEL_55:
    if ( !v18 )
      return 0;
    if ( !validate )
      return 1;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 371, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tCG_ClientWeapon_IsDObjDirty: DObj contains extra models", "!validate");
LABEL_76:
    if ( v12 )
      __debugbreak();
    return 1;
  }
  v21 = attachmentIds;
  v22 = attachments;
  while ( 1 )
  {
    AttachmentModel = BG_GetAttachmentModel(*v22, weaponState->weapon.attachmentVariationIndices[*v21], weaponState->isViewModel);
    v24 = AttachmentModel;
    if ( AttachmentModel )
      break;
LABEL_54:
    ++v19;
    ++v21;
    ++v22;
    if ( v19 >= AllWeaponAttachmentsWithIds )
      goto LABEL_55;
  }
  if ( DObjGetModelIndex(v10, AttachmentModel) >= 0 )
  {
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 365, ASSERT_TYPE_ASSERT, "(modelCount > 0)", (const char *)&queryFormat, "modelCount > 0") )
      __debugbreak();
    --v18;
    goto LABEL_54;
  }
  if ( DObjHasProceduralBones(v10) )
  {
    dynamicBones = v24->dynamicBones;
    if ( dynamicBones )
    {
      v26 = dynamicBones->numCollidableBoneCollisionShapes == 0;
      if ( dynamicBones->numCollidableBoneCollisionShapes )
        goto LABEL_69;
    }
    v27 = v19 + 1;
    if ( (unsigned int)v27 < AllWeaponAttachmentsWithIds )
    {
      v28 = &attachmentIds[v27];
      v29 = (const WeaponAttachment **)&attachments[v27];
      while ( 1 )
      {
        v30 = BG_GetAttachmentModel(*v29, weaponState->weapon.attachmentVariationIndices[*v28], weaponState->isViewModel);
        v31 = v30;
        if ( v30 )
        {
          if ( DObjGetModelIndex(v10, v30) < 0 )
          {
            v32 = v31->dynamicBones;
            if ( v32 )
            {
              v26 = v32->numCollidableBoneCollisionShapes == 0;
              if ( v32->numCollidableBoneCollisionShapes )
                break;
            }
          }
        }
        LODWORD(v27) = v27 + 1;
        ++v28;
        ++v29;
        if ( (unsigned int)v27 >= AllWeaponAttachmentsWithIds )
          goto LABEL_71;
      }
LABEL_69:
      _RAX = cent;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+50h]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@42340000
      }
      if ( !v26 )
        *outResetDynamicBonesHint = 1;
    }
  }
LABEL_71:
  if ( validate )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 361, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tCG_ClientWeapon_IsDObjDirty: The current object does not have the attachment model '%s'", "!validate", v24->name);
    goto LABEL_76;
  }
  return 1;
}

/*
==============
CG_ClientWeapon_IsDObjMaterialDirty
==============
*/
char CG_ClientWeapon_IsDObjMaterialDirty(const LocalClientNum_t localClientNum, const centity_t *cent, const CgClientWeaponState *weaponState, const bool validate)
{
  DObj *ClientDObj; 
  bool v9; 
  int v17; 
  _QWORD *v18; 
  __int64 v20; 
  __int64 v21; 
  DObjStickerSlotList result; 
  _BYTE v25[64]; 
  DObjStickerSlot _Last; 
  _OWORD v29[4]; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 396, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 397, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !weaponState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 398, ASSERT_TYPE_ASSERT, "(weaponState)", (const char *)&queryFormat, "weaponState") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v20) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 399, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v20, 2) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( !ClientDObj || !weaponState->isWeaponLoaded && !weaponState->isDefaultModel )
    return 0;
  if ( weaponState->weapon.weaponCamo == cent->typeData.flightDurationMs )
  {
    if ( ClientDObj->modelMaterialOverrides )
    {
      _RAX = CG_Weapons_BuildStickerSlotList(&result, localClientNum, NULL, 0, &weaponState->weapon);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rsp+258h+var_178], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups [rsp+258h+var_158], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rsp+120h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rsp+258h+_First.overrideMaterial], ymm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups [rsp+258h+var_F8], xmm0
        vmovsd  xmm1, qword ptr [rax+90h]
        vmovsd  [rsp+258h+var_E8], xmm1
      }
      std::_Sort_unchecked<DObjStickerSlot *,bool (*)(DObjStickerSlot const &,DObjStickerSlot const &)>((DObjStickerSlot *)&v25[24], &_Last, 4i64, DObjStickerSlotGreaterThan);
      DObjGetStickerMaterialOverrides(ClientDObj, NULL, (DObjStickerSlotList *)&_Last.overrideMaterial);
      v17 = 0;
      while ( 1 )
      {
        v18 = &v29[v17];
        if ( *(_QWORD *)&v25[16 * v17 + 24] != *v18 || *(_QWORD *)&v25[16 * v17 + 32] != v18[1] )
          break;
        if ( (unsigned int)++v17 >= 4 )
          return 0;
      }
      if ( !validate )
        return 1;
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 430, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tSticker does not match!", "!validate");
      goto LABEL_29;
    }
    if ( validate )
    {
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 416, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tThis dobj has not allocated material overrides as should have been done in DObjSetCamoMaterialOverride.", "!validate");
LABEL_29:
      if ( v9 )
        __debugbreak();
    }
  }
  else if ( validate )
  {
    LODWORD(v21) = weaponState->weapon.weaponCamo;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 408, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tCamo does not match! Expected %u, detected %u.", "!validate", v21, cent->typeData.flightDurationMs);
    goto LABEL_29;
  }
  return 1;
}

/*
==============
CG_ClientWeapon_ProcessDObj
==============
*/
void CG_ClientWeapon_ProcessDObj(const LocalClientNum_t localClientNum, centity_t *cent, const CgClientWeaponState *weaponState)
{
  __int64 v4; 
  char IsDObjDirty; 
  char IsDObjMaterialDirty; 
  bool v9; 
  const DObj *ClientDObj; 
  bool v11; 
  const DObj *v12; 
  const DObj *v13; 
  const DObj *v14; 
  DObj *v15; 
  int v19; 
  const char *Weapon; 
  __int64 v21; 
  __int64 v22; 
  bool outResetDynamicBonesHint[16]; 
  XAnimBonePhysicsStateBuffer outStateBuffer; 

  v4 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 656, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 657, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v21) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 658, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, 2) )
      __debugbreak();
  }
  if ( weaponState->weapon.weaponIdx && (weaponState->isDefaultModel || weaponState->isWeaponLoaded) )
  {
    IsDObjDirty = CG_ClientWeapon_IsDObjDirty((const LocalClientNum_t)v4, cent, weaponState, outResetDynamicBonesHint, 0);
    IsDObjMaterialDirty = CG_ClientWeapon_IsDObjMaterialDirty((const LocalClientNum_t)v4, cent, weaponState, 0);
    if ( (unsigned __int8)IsDObjDirty | (unsigned __int8)IsDObjMaterialDirty )
    {
      v9 = outResetDynamicBonesHint[0];
      if ( !outResetDynamicBonesHint[0] )
      {
        ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v4);
        XAnimBonePhysicsSaveState(ClientDObj, &outStateBuffer);
      }
      v11 = IsDObjMaterialDirty && !IsDObjDirty;
      CG_ClientWeapon_BuildDObj((const LocalClientNum_t)v4, cent, weaponState, v11);
      if ( !v9 )
      {
        v12 = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v4);
        XAnimBonePhysicsRestoreState(v12, &outStateBuffer);
      }
    }
    if ( CG_ClientWeapon_IsDObjDirty((const LocalClientNum_t)v4, cent, weaponState, outResetDynamicBonesHint, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 723, ASSERT_TYPE_ASSERT, "(!CG_ClientWeapon_IsDObjDirty( localClientNum, cent, &weaponState, &resetDynamicBonesCheck, true ))", (const char *)&queryFormat, "!CG_ClientWeapon_IsDObjDirty( localClientNum, cent, &weaponState, &resetDynamicBonesCheck, true )") )
      __debugbreak();
    if ( CG_ClientWeapon_IsDObjMaterialDirty((const LocalClientNum_t)v4, cent, weaponState, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 724, ASSERT_TYPE_ASSERT, "(!CG_ClientWeapon_IsDObjMaterialDirty( localClientNum, cent, &weaponState, true ))", (const char *)&queryFormat, "!CG_ClientWeapon_IsDObjMaterialDirty( localClientNum, cent, &weaponState, true )") )
      __debugbreak();
    if ( CL_UIWeapon_GetResetDynBones((const LocalClientNum_t)v4, cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId) )
    {
      v13 = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v4);
      if ( v13 )
        XAnimBonePhysicsReset(v13);
      CL_UIWeapon_SetResetDynBones((const LocalClientNum_t)v4, cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId, 0);
    }
    CG_ClientWeapon_UpdateAnims((const LocalClientNum_t)v4, weaponState, cent);
    v14 = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v4);
    v15 = (DObj *)v14;
    if ( v14 )
    {
      if ( DObjHasProceduralBones(v14) )
      {
        CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
          vmulss  xmm1, xmm0, cs:__real@3a83126f; deltaTime
        }
        XAnimBonePhysicsUpdateTime(v15, *(float *)&_XMM1);
      }
    }
    CG_Ents_TouchModelFrontEndScene((const LocalClientNum_t)v4, cent);
  }
  else
  {
    if ( weaponState->isVisible )
    {
      v19 = Sys_Milliseconds();
      if ( (unsigned int)v4 >= 2 )
      {
        LODWORD(v22) = 2;
        LODWORD(v21) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 669, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_lastPrintTime ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_lastPrintTime )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      if ( (unsigned int)(v19 - s_lastPrintTime_1[v4]) > 0x1F4 )
      {
        Weapon = CL_UIWeapon_GetWeapon((const LocalClientNum_t)v4, cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId);
        Com_PrintWarning(14, "WARNING: CG_ClientWeapon aborting DObj update due to missing models. Attempted to build DObj for weapon '%s' without loaded models and defaults disabled. This likely indicates that the client weapon was set before the models completed loading, or there is a content issue. Try using 'cl_uistreaming_verbose 1' and 'cl_streaming_devVerbose 1' for more details.\n", Weapon);
        s_lastPrintTime_1[v4] = v19;
      }
    }
    CG_ClientWeapon_ClearVFXState((const LocalClientNum_t)v4, cent);
    CG_ClientWeapon_FreeTree((const LocalClientNum_t)v4, cent);
    Com_SafeClientDObjFree(cent->nextState.number, (LocalClientNum_t)v4);
  }
}

/*
==============
CG_ClientWeapon_ProcessEntity
==============
*/
void CG_ClientWeapon_ProcessEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v3; 
  unsigned int m_mapEntryId; 
  __int16 EntityNum; 
  __int16 number; 
  const DObj *ClientDObj; 
  const cg_t *LocalClientGlobals; 
  float characterEVOffset; 
  __int16 otherEntityNum; 
  __int64 v15; 
  CgEntitySystem *v16; 
  __int64 v17; 
  float atlasTime; 
  unsigned int v21; 
  const dvar_t *v25; 
  __int64 v26; 
  __int64 v27; 
  float v28; 
  vec3_t outOrigin; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v31; 
  __int64 v32; 
  CgClientWeaponState outWeaponState; 
  shaderOverride_t v34; 

  v32 = -2i64;
  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 921, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 922, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v26) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 923, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, 2) )
      __debugbreak();
  }
  if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 924, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  if ( cent->nextState.un.scriptMoverType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 925, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ClientWeapon)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ClientWeapon") )
    __debugbreak();
  CG_ClientWeapon_GetWeaponState((const LocalClientNum_t)v3, cent, &outWeaponState);
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 594, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v27) = 2;
    LODWORD(v26) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 595, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
  EntityNum = CL_UIWeapon_GetEntityNum((const LocalClientNum_t)v3, m_mapEntryId);
  number = cent->nextState.number;
  if ( EntityNum != number )
    CL_UIWeapon_SetEntityNum((const LocalClientNum_t)v3, m_mapEntryId, number);
  CG_ClientWeapon_ProcessDObj((const LocalClientNum_t)v3, cent, &outWeaponState);
  CG_ClientWeapon_ProcessPose((const LocalClientNum_t)v3, cent);
  CG_ClientWeapon_ProcessVFX((const LocalClientNum_t)v3, cent, &outWeaponState);
  if ( outWeaponState.isVisible )
  {
    ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
    if ( ClientDObj )
    {
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+188h+outOrigin+8]
        vaddss  xmm1, xmm0, cs:__real@40800000
        vmovss  dword ptr [rsp+188h+outOrigin+8], xmm1
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      _RAX = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rsp+188h+var_F8], ymm0
      }
      characterEVOffset = _RAX->characterEVOffset;
      otherEntityNum = cent->nextState.otherEntityNum;
      if ( otherEntityNum == 2047 )
      {
        __asm { vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_0.scrollRateX }
        atlasTime = NULL_SHADER_OVERRIDE_0.atlasTime;
      }
      else
      {
        v15 = otherEntityNum;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v27) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v27) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v27) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v26) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v3] )
        {
          LODWORD(v27) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v27) )
            __debugbreak();
        }
        v16 = CgEntitySystem::ms_entitySystemArray[v3];
        if ( (unsigned int)v15 >= 0x800 )
        {
          LODWORD(v27) = 2048;
          LODWORD(v26) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        v17 = (__int64)&v16->m_entities[v15];
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 961, ASSERT_TYPE_ASSERT, "(parentEnt)", (const char *)&queryFormat, "parentEnt") )
          __debugbreak();
        if ( (*(_BYTE *)(v17 + 648) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 962, ASSERT_TYPE_ASSERT, "(CENextValid( parentEnt ))", (const char *)&queryFormat, "CENextValid( parentEnt )") )
          __debugbreak();
        _RAX = (__int64)LocalClientGlobals->GetShaderOverrideData(LocalClientGlobals, &v34, *(_DWORD *)(v17 + 544), &outWeaponState.weapon);
        __asm { vmovups ymm0, ymmword ptr [rax] }
        atlasTime = *(float *)(_RAX + 32);
      }
      __asm { vmovups ymmword ptr [rsp+188h+result.color], ymm0 }
      if ( !DObjVerifyNumBones(ClientDObj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 970, ASSERT_TYPE_ASSERT, "(DObjVerifyNumBones( obj ))", (const char *)&queryFormat, "DObjVerifyNumBones( obj )") )
        __debugbreak();
      v21 = cent->nextState.number;
      __asm
      {
        vmovups ymm0, [rsp+188h+var_F8]
        vmovups [rsp+188h+var_F8], ymm0
      }
      v31.characterEVOffset = characterEVOffset;
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+188h+result.color]
        vmovups ymmword ptr [rsp+188h+result.color], ymm0
      }
      result.characterEVOffset = atlasTime;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+188h+var_148], xmm0
      }
      CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, ClientDObj, &cent->pose, v21, 0, (shaderOverride_t *)&result, &v31, &outOrigin, v28, 0);
      v25 = DCONST_DVARBOOL_xanim_drawViewModelDynamicBones;
      if ( !DCONST_DVARBOOL_xanim_drawViewModelDynamicBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawViewModelDynamicBones") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v25->current.enabled )
        XAnimDebugDrawDynamicBones(ClientDObj, &cent->pose);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
}

/*
==============
CG_ClientWeapon_ProcessPose
==============
*/
void CG_ClientWeapon_ProcessPose(const LocalClientNum_t localClientNum, centity_t *cent)
{
  unsigned int m_mapEntryId; 
  const dvar_t *v72; 
  const DObj *ClientDObj; 
  DObj *v81; 
  bool CollisionPlaneEnabled; 
  __int64 v94; 
  __int64 v95; 
  vec3_t outOrigin; 
  __int64 v97; 
  vec3_t offset; 
  vec3_t outOffset; 
  vec3_t outGoal; 
  vec3_t v101; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  char v105; 
  void *retaddr; 

  _RAX = &retaddr;
  v97 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
  }
  CG_GetLocalClientGlobals(localClientNum);
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 767, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 768, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v94) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 769, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v94, 2) )
      __debugbreak();
  }
  if ( cent->nextState.un.scriptMoverType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 770, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ClientWeapon)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ClientWeapon") )
    __debugbreak();
  m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
  if ( m_mapEntryId >= 0x32 )
  {
    LODWORD(v95) = 50;
    LODWORD(v94) = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 773, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v94, v95) )
      __debugbreak();
  }
  CL_UIWeapon_GetOriginOffset(localClientNum, m_mapEntryId, &outOffset);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  __asm
  {
    vmovss  xmm14, dword ptr [rsp+1C0h+outOrigin+8]
    vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin]
    vaddss  xmm1, xmm0, dword ptr [rsp+1C0h+outOffset]
    vmovss  dword ptr [rsp+1C0h+outOrigin], xmm1
    vmovss  xmm2, dword ptr [rsp+1C0h+outOrigin+4]
    vaddss  xmm0, xmm2, dword ptr [rsp+1C0h+outOffset+4]
    vmovss  dword ptr [rsp+1C0h+outOrigin+4], xmm0
    vaddss  xmm1, xmm14, dword ptr [rsp+1C0h+outOffset+8]
    vmovss  dword ptr [rsp+1C0h+outOrigin+8], xmm1
  }
  CL_UIWeapon_GetAngleOffset(localClientNum, m_mapEntryId, &offset);
  CL_UIWeapon_GetAngleOffsetGoal(localClientNum, m_mapEntryId, &outGoal);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1C0h+outGoal]
    vsubss  xmm5, xmm0, dword ptr [rsp+1C0h+offset]
    vmovss  xmm1, dword ptr [rsp+1C0h+outGoal+4]
    vsubss  xmm3, xmm1, dword ptr [rsp+1C0h+offset+4]
    vmovss  xmm0, dword ptr [rbp+0C0h+outGoal+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+1C0h+offset+8]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rdi+65E4h]
    vmulss  xmm2, xmm1, cs:__real@3c23d70a
    vminss  xmm0, xmm2, cs:__real@3f800000
    vmulss  xmm1, xmm5, xmm0
    vmulss  xmm3, xmm3, xmm0
    vmulss  xmm2, xmm4, xmm0
    vaddss  xmm0, xmm1, dword ptr [rsp+1C0h+offset]
    vmovss  dword ptr [rsp+1C0h+offset], xmm0
    vaddss  xmm1, xmm3, dword ptr [rsp+1C0h+offset+4]
    vmovss  dword ptr [rsp+1C0h+offset+4], xmm1
    vaddss  xmm0, xmm2, dword ptr [rsp+1C0h+offset+8]
    vmovss  dword ptr [rsp+1C0h+offset+8], xmm0
  }
  CL_UIWeapon_SetAngleOffset(localClientNum, m_mapEntryId, &offset);
  AnglesToAxis(&offset, &axis);
  AnglesToAxis(&cent->pose.angles, &in2);
  MatrixMultiply(&axis, &in2, &out);
  AxisToAngles(&out, &cent->pose.angles);
  CL_UIWeapon_GetRotationCenter(localClientNum, m_mapEntryId, &v101);
  __asm
  {
    vmovss  xmm10, dword ptr [rbp+0C0h+var_138+4]
    vmulss  xmm2, xmm10, dword ptr [rbp+0C0h+in2+0Ch]
    vmovss  xmm7, dword ptr [rbp+0C0h+var_138]
    vmulss  xmm1, xmm7, dword ptr [rbp+0C0h+in2]
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm8, dword ptr [rbp+0C0h+var_138+8]
    vmulss  xmm1, xmm8, dword ptr [rbp+0C0h+in2+18h]
    vaddss  xmm9, xmm3, xmm1
    vmulss  xmm3, xmm10, dword ptr [rbp+0C0h+in2+10h]
    vmulss  xmm0, xmm7, dword ptr [rbp+0C0h+in2+4]
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm2, xmm8, dword ptr [rbp+0C0h+in2+1Ch]
    vaddss  xmm6, xmm4, xmm2
    vmulss  xmm3, xmm10, dword ptr [rbp+0C0h+in2+14h]
    vmulss  xmm1, xmm7, dword ptr [rbp+0C0h+in2+8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm2, xmm8, dword ptr [rbp+0C0h+in2+20h]
    vaddss  xmm5, xmm4, xmm2
    vmulss  xmm3, xmm10, dword ptr [rbp+0C0h+out+0Ch]
    vmulss  xmm0, xmm7, dword ptr [rbp+0C0h+out]
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm2, xmm8, dword ptr [rbp+0C0h+out+18h]
    vaddss  xmm12, xmm4, xmm2
    vmulss  xmm3, xmm10, dword ptr [rbp+0C0h+out+10h]
    vmulss  xmm1, xmm7, dword ptr [rbp+0C0h+out+4]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm2, xmm8, dword ptr [rbp+0C0h+out+1Ch]
    vaddss  xmm13, xmm4, xmm2
    vmulss  xmm3, xmm10, dword ptr [rbp+0C0h+out+14h]
    vmulss  xmm0, xmm7, dword ptr [rbp+0C0h+out+8]
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm2, xmm8, dword ptr [rbp+0C0h+out+20h]
    vaddss  xmm7, xmm4, xmm2
    vaddss  xmm1, xmm9, dword ptr [rsp+1C0h+outOrigin]
    vmovss  dword ptr [rsp+1C0h+outOrigin], xmm1
    vaddss  xmm0, xmm6, dword ptr [rsp+1C0h+outOrigin+4]
    vmovss  dword ptr [rsp+1C0h+outOrigin+4], xmm0
    vaddss  xmm2, xmm5, dword ptr [rsp+1C0h+outOrigin+8]
    vmovss  dword ptr [rsp+1C0h+outOrigin+8], xmm2
  }
  v72 = DCONST_DVARBOOL_cg_clientWeaponDrawRotationCenter;
  if ( !DCONST_DVARBOOL_cg_clientWeaponDrawRotationCenter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_clientWeaponDrawRotationCenter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v72);
  if ( v72->current.enabled )
  {
    __asm { vmovss  xmm1, cs:__real@3f800000; radius }
    CG_DebugSphere(&outOrigin, *(float *)&_XMM1, &colorRed, 1, 1);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin]
    vsubss  xmm1, xmm0, xmm12
    vmovss  dword ptr [rsp+1C0h+outOrigin], xmm1
    vmovss  xmm2, dword ptr [rsp+1C0h+outOrigin+4]
    vsubss  xmm0, xmm2, xmm13
    vmovss  dword ptr [rsp+1C0h+outOrigin+4], xmm0
    vmovss  xmm1, dword ptr [rsp+1C0h+outOrigin+8]
    vsubss  xmm2, xmm1, xmm7
    vmovss  dword ptr [rsp+1C0h+outOrigin+8], xmm2
  }
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  v81 = (DObj *)ClientDObj;
  if ( ClientDObj && DObjHasProceduralBones(ClientDObj) )
  {
    DObjTouchProceduralBones(v81);
    XAnimBonePhysicsSetDObjMatrix(v81, &outOrigin, &cent->pose.angles);
    *(double *)&_XMM0 = CL_UIWeapon_GetCollisionPlaneHeightOffset(localClientNum, m_mapEntryId);
    __asm { vaddss  xmm6, xmm0, xmm14 }
    CollisionPlaneEnabled = CL_UIWeapon_GetCollisionPlaneEnabled(localClientNum, m_mapEntryId);
    XAnimBonePhysicsSetGroundPlaneEnabled(v81, CollisionPlaneEnabled);
    __asm { vmovaps xmm1, xmm6; height }
    XAnimBonePhysicsSetGroundPlaneHeight(v81, *(float *)&_XMM1);
    XAnimBonePhysicsClearLinearVelocity(v81);
  }
  CG_SetPoseOrigin(&cent->pose, &outOrigin);
  memset(&outOrigin, 0, sizeof(outOrigin));
  _R11 = &v105;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
}

/*
==============
CG_ClientWeapon_ProcessVFX
==============
*/
void CG_ClientWeapon_ProcessVFX(const LocalClientNum_t localClientNum, centity_t *cent, const CgClientWeaponState *weaponState)
{
  __int64 v3; 
  __int64 m_mapEntryId; 
  __int64 v7; 
  ParticleSystemHandle handle; 
  scr_string_t vfxName; 
  scr_string_t tagName; 
  scr_string_t v11; 
  ParticleSystemHandle v12; 
  scr_string_t v13; 
  scr_string_t v14; 
  scr_string_t m_particleSystemDef; 
  scr_string_t v16; 
  bool isVisible; 
  bool v18; 
  bool v19; 
  const char *v20; 
  int number; 
  scr_string_t v22; 
  bool v23; 
  cg_t *LocalClientGlobals; 
  __int64 spawnFlags; 
  __int64 spawnFlagsa; 
  __int64 v27; 
  __int64 v28; 
  scr_string_t outVfxName; 
  FXRegisteredDef outTagName; 

  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 835, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 836, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(spawnFlags) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 837, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", spawnFlags, 2) )
      __debugbreak();
  }
  if ( cent->nextState.un.scriptMoverType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 838, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ClientWeapon)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ClientWeapon") )
    __debugbreak();
  m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
  if ( (unsigned int)m_mapEntryId >= 0x32 )
  {
    LODWORD(v27) = 50;
    LODWORD(spawnFlags) = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 841, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", spawnFlags, v27) )
      __debugbreak();
    LODWORD(v28) = 50;
    LODWORD(spawnFlagsa) = m_mapEntryId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 843, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientWeaponVFX[localClientNum] ) ) + 0 ) )", "weaponIndex doesn't index ARRAY_COUNT( s_clientWeaponVFX[localClientNum] )\n\t%i not in [0, %i)", spawnFlagsa, v28) )
      __debugbreak();
  }
  v7 = m_mapEntryId + 50 * v3;
  if ( !s_clientWeaponVFX[0][v7].vfxName )
  {
    handle = s_clientWeaponVFX[0][v7].handle;
    if ( handle )
    {
      FX_KillEffect((LocalClientNum_t)v3, handle);
      vfxName = s_clientWeaponVFX[0][v7].vfxName;
      s_clientWeaponVFX[0][v7].handle = PARTICLE_SYSTEM_INVALID_HANDLE;
      if ( vfxName )
      {
        SL_RemoveRefToString(vfxName);
        s_clientWeaponVFX[0][v7].vfxName = 0;
      }
      tagName = s_clientWeaponVFX[0][v7].tagName;
      if ( tagName )
      {
        SL_RemoveRefToString(tagName);
        s_clientWeaponVFX[0][v7].tagName = 0;
      }
      if ( s_clientWeaponVFX[0][v7].handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 852, ASSERT_TYPE_ASSERT, "(state.handle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "state.handle == PARTICLE_SYSTEM_INVALID_HANDLE") )
        __debugbreak();
    }
    if ( s_clientWeaponVFX[0][v7].vfxName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 853, ASSERT_TYPE_ASSERT, "(state.vfxName == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "state.vfxName == NULL_SCR_STRING") )
      __debugbreak();
    if ( s_clientWeaponVFX[0][v7].tagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 854, ASSERT_TYPE_ASSERT, "(state.tagName == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "state.tagName == NULL_SCR_STRING") )
      __debugbreak();
  }
  outVfxName = 0;
  LODWORD(outTagName.m_particleSystemDef) = 0;
  CL_UIWeapon_GetPlayVFX((const LocalClientNum_t)v3, m_mapEntryId, &outVfxName, (scr_string_t *)&outTagName);
  if ( outVfxName )
  {
    if ( !LODWORD(outTagName.m_particleSystemDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 864, ASSERT_TYPE_ASSERT, "(newTagName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "newTagName != NULL_SCR_STRING") )
      __debugbreak();
    v11 = s_clientWeaponVFX[0][v7].vfxName;
    if ( v11 != outVfxName || s_clientWeaponVFX[0][v7].tagName != LODWORD(outTagName.m_particleSystemDef) )
    {
      v12 = s_clientWeaponVFX[0][v7].handle;
      if ( v12 )
      {
        FX_KillEffect((LocalClientNum_t)v3, v12);
        v11 = s_clientWeaponVFX[0][v7].vfxName;
        s_clientWeaponVFX[0][v7].handle = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
      if ( v11 )
      {
        SL_RemoveRefToString(v11);
        v11 = 0;
        s_clientWeaponVFX[0][v7].vfxName = 0;
      }
      v13 = s_clientWeaponVFX[0][v7].tagName;
      if ( v13 )
      {
        SL_RemoveRefToString(v13);
        v11 = s_clientWeaponVFX[0][v7].vfxName;
        s_clientWeaponVFX[0][v7].tagName = 0;
      }
      if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 871, ASSERT_TYPE_ASSERT, "(state.vfxName == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "state.vfxName == NULL_SCR_STRING") )
        __debugbreak();
      v14 = outVfxName;
      s_clientWeaponVFX[0][v7].vfxName = outVfxName;
      SL_AddRefToString(v14);
      if ( s_clientWeaponVFX[0][v7].tagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 875, ASSERT_TYPE_ASSERT, "(state.tagName == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "state.tagName == NULL_SCR_STRING") )
        __debugbreak();
      m_particleSystemDef = (scr_string_t)outTagName.m_particleSystemDef;
      s_clientWeaponVFX[0][v7].tagName = (scr_string_t)outTagName.m_particleSystemDef;
      SL_AddRefToString(m_particleSystemDef);
    }
  }
  CL_UIWeapon_ClearPlayVFX((const LocalClientNum_t)v3, m_mapEntryId);
  v16 = s_clientWeaponVFX[0][v7].vfxName;
  if ( v16 )
  {
    isVisible = weaponState->isVisible;
    v18 = isVisible && s_clientWeaponVFX[0][v7].handle == PARTICLE_SYSTEM_INVALID_HANDLE;
    v19 = !isVisible && s_clientWeaponVFX[0][v7].handle;
    if ( v18 )
    {
      outTagName.m_particleSystemDef = NULL;
      v20 = SL_ConvertToString(v16);
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 894, ASSERT_TYPE_ASSERT, "(vfxNameStr != nullptr)", (const char *)&queryFormat, "vfxNameStr != nullptr") )
        __debugbreak();
      FX_LoadEffect(v20, &outTagName);
      number = cent->nextState.number;
      v22 = s_clientWeaponVFX[0][v7].tagName;
      LOWORD(outVfxName) = 254;
      v23 = CG_GetBoneIndex((LocalClientNum_t)v3, number, v22, (unsigned __int16 *)&outVfxName) != 0;
      if ( outTagName.m_particleSystemDef && v23 )
      {
        if ( (_WORD)outVfxName == 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 902, ASSERT_TYPE_ASSERT, "(boneIndex != 254)", (const char *)&queryFormat, "boneIndex != UNDEFINED_BONEINDEX") )
          __debugbreak();
        if ( (_WORD)outVfxName == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 903, ASSERT_TYPE_ASSERT, "(boneIndex != 255)", (const char *)&queryFormat, "boneIndex != NO_BONEINDEX") )
          __debugbreak();
        if ( s_clientWeaponVFX[0][v7].handle )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 905, ASSERT_TYPE_ASSERT, "(state.handle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "state.handle == PARTICLE_SYSTEM_INVALID_HANDLE") )
            __debugbreak();
        }
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
        s_clientWeaponVFX[0][v7].handle = FX_PlayBoltedEffect((LocalClientNum_t)v3, &outTagName, LocalClientGlobals->time, cent->nextState.number, (unsigned __int16)outVfxName, 0);
      }
    }
    else if ( v19 )
    {
      FX_KillEffect((LocalClientNum_t)v3, s_clientWeaponVFX[0][v7].handle);
      s_clientWeaponVFX[0][v7].handle = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
  }
}

/*
==============
CG_ClientWeapon_Shutdown
==============
*/
void CG_ClientWeapon_Shutdown(void)
{
  scr_string_t *p_tagName; 
  int i; 
  unsigned int v2; 
  scr_string_t *v3; 
  ParticleSystemHandle v4; 
  scr_string_t v5; 

  s_clientWeaponAnims.initialized = 0;
  DebugWipe(s_clientWeaponState, 0x1770ui64);
  p_tagName = &s_clientWeaponVFX[0][0].tagName;
  for ( i = 0; i < 2; ++i )
  {
    v2 = 0;
    v3 = p_tagName;
    do
    {
      v4 = *((_DWORD *)v3 - 2);
      if ( v4 )
      {
        FX_KillEffect((LocalClientNum_t)i, v4);
        *((_DWORD *)v3 - 2) = 0;
      }
      v5 = *((_DWORD *)v3 - 1);
      if ( v5 )
      {
        SL_RemoveRefToString(v5);
        *((_DWORD *)v3 - 1) = 0;
      }
      if ( *v3 )
      {
        SL_RemoveRefToString(*v3);
        *v3 = 0;
      }
      ++v2;
      v3 += 3;
    }
    while ( v2 < 0x32 );
    p_tagName += 150;
  }
}

/*
==============
CG_ClientWeapon_UpdateAnims
==============
*/
void CG_ClientWeapon_UpdateAnims(const LocalClientNum_t localClientNum, const CgClientWeaponState *weaponState, centity_t *cent)
{
  XAnimOwner v7; 
  DObj *ClientDObj; 
  __int16 scriptMoverType; 
  bool v10; 
  XAnimTree *SmallTree; 
  float fmt; 
  __int64 goalTime; 
  float goalTimea; 
  float rate; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 609, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 610, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(goalTime) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 611, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", goalTime, 2) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( ClientDObj )
  {
    scriptMoverType = cent->nextState.un.scriptMoverType;
    if ( scriptMoverType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 622, ASSERT_TYPE_ASSERT, "( cent->nextState.un.scriptMoverType ) == ( ScriptMoverType_ClientWeapon )", "%s == %s\n\t%i, %i", "cent->nextState.un.scriptMoverType", "ScriptMoverType_ClientWeapon", scriptMoverType, 5) )
      __debugbreak();
    if ( ClientDObj->tree != cent->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 626, ASSERT_TYPE_ASSERT, "( obj->tree ) == ( cent->tree )", "%s == %s\n\t%p, %p", "obj->tree", "cent->tree", ClientDObj->tree, cent->tree) )
      __debugbreak();
    v10 = weaponState->isWristwatch && s_clientWeaponAnims.initialized;
    if ( ClientDObj->tree )
    {
      if ( !v10 )
        CG_ClientWeapon_FreeTree(localClientNum, cent);
    }
    else if ( v10 )
    {
      LOBYTE(v7) = 1;
      SmallTree = Com_XAnimCreateSmallTree(&s_clientWeaponAnims.xanim, v7);
      if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 637, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
        __debugbreak();
      DObjSetTree(ClientDObj, SmallTree);
      cent->tree = SmallTree;
    }
    if ( ClientDObj->tree )
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vmovss  [rsp+78h+rate], xmm1
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+78h+goalTime], xmm0
        vmovss  dword ptr [rsp+78h+fmt], xmm1
      }
      XAnimSetGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, 1u, fmt, goalTimea, rate, (scr_string_t)0, 1u, 0, LINEAR, NULL);
      CG_WristWatch_CalcXAnimParameters(ClientDObj, localClientNum, NULL, 0, 1u, 2u, 3u);
    }
  }
  else if ( cent->tree )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 616, ASSERT_TYPE_ASSERT, "( nullptr ) == ( cent->tree )", "%s == %s\n\t%p, %p", "nullptr", "cent->tree", NULL, cent->tree) )
      __debugbreak();
  }
}

