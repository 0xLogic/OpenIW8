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
  unsigned int v14; 
  char *v15; 
  bool isViewModel; 
  const WeaponDef *v17; 
  bool v18; 
  DObj *ClientDObj; 
  unsigned __int16 v20; 
  DObjPartBits *p_hidePartBits; 
  __int64 m_mapEntryId; 
  __int64 v23; 
  char *v24; 
  __int64 useDualWielding; 
  __int64 attachBoneName; 
  __int64 maxDObjModels; 
  DObjModel *outDObjModels; 
  unsigned __int16 outModelIndex[2]; 
  bool isDefaultModel; 
  DObjStickerSlotList result; 
  DObjStickerSlotList stickerSlots; 
  DObjModel dobjModels; 

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
  if ( weaponState->isWeaponLoaded || weaponState->isDefaultModel )
  {
    isViewModel = weaponState->isViewModel;
    isDefaultModel = weaponState->isDefaultModel;
    v17 = BG_WeaponDef(&weaponState->weapon, 0);
    v18 = BG_WeaponIsDualWield(&weaponState->weapon) && v17->dualWieldType != DUAL_WIELD_TYPE_ALT_MODE;
    ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v7);
    outModelIndex[0] = 0;
    CG_Weapons_BuildDObj(WEAPON_HAND_DEFAULT, &weaponState->weapon, isViewModel, 0, isDefaultModel, v18, (scr_string_t)0, 0x20u, &dobjModels, outModelIndex, NULL);
    v20 = outModelIndex[0];
    if ( (unsigned __int16)(outModelIndex[0] - 1) > 0x1Fu )
    {
      LODWORD(maxDObjModels) = 32;
      LODWORD(attachBoneName) = 1;
      LODWORD(useDualWielding) = outModelIndex[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 522, ASSERT_TYPE_ASSERT, "( 1 ) <= ( dobjModelCount ) && ( dobjModelCount ) <= ( ( 32 ) )", "dobjModelCount not in [1, DOBJ_MAX_CHARACTER_SUBMODELS]\n\t%i not in [%i, %i]", useDualWielding, attachBoneName, maxDObjModels) )
        __debugbreak();
      v20 = outModelIndex[0];
    }
    if ( refreshOverridesOnly && ClientDObj )
    {
      DObjFreeMaterialOverrides(ClientDObj);
      DObjFreeMaterialData(ClientDObj);
    }
    else
    {
      ClientDObj = Com_ClientDObjCreate(&dobjModels, v20, NULL, cent->nextState.number, (LocalClientNum_t)v7, 0, cent->nextState.number);
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
    stickerSlots = *CG_Weapons_BuildStickerSlotList(&result, (const LocalClientNum_t)v7, NULL, 0, &weaponState->weapon);
    DObjSetStickerMaterialOverrides(ClientDObj, NULL, &stickerSlots);
    BG_UpdateWeaponHidePartBitsForDObj(ClientDObj, &weaponState->weapon, 0, 0);
    BG_UpdatedWeaponBones(&weaponState->weapon, ClientDObj, 0);
    p_hidePartBits = &ClientDObj->hidePartBits;
    if ( weaponState->showDanglyBits )
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
  }
  else
  {
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
    if ( v11 )
    {
      if ( v11 >= (unsigned int)s_objCount )
      {
        LODWORD(attachBoneName) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", attachBoneName) )
          __debugbreak();
      }
      if ( s_objBuf[v11] )
      {
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
        v14 = clientObjMap[v13];
        if ( v14 )
        {
          if ( v14 >= (unsigned int)s_objCount )
          {
            LODWORD(attachBoneName) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", attachBoneName) )
              __debugbreak();
          }
          v15 = s_objBuf[v14];
        }
        else
        {
          v15 = NULL;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 561, ASSERT_TYPE_ASSERT, "( Com_GetClientDObj( cent->nextState.number, localClientNum ) ) == ( nullptr )", "%s == %s\n\t%p, %p", "Com_GetClientDObj( cent->nextState.number, localClientNum )", "nullptr", v15, NULL) )
          __debugbreak();
      }
    }
  }
  if ( weaponState->isWeaponLoaded )
    v8.flightDurationMs = weaponState->weapon.weaponCamo;
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
  v23 = m_mapEntryId + 50 * v7;
  *(__m256i *)&s_clientWeaponState[0][v23].weapon.weaponIdx = *(__m256i *)&weaponState->weapon.weaponIdx;
  v24 = (char *)s_clientWeaponState + v23 * 60;
  *((_OWORD *)v24 + 2) = *(_OWORD *)&weaponState->weapon.attachmentVariationIndices[5];
  *((double *)v24 + 6) = *(double *)&weaponState->weapon.attachmentVariationIndices[21];
  *((_DWORD *)v24 + 14) = *(_DWORD *)&weaponState->weapon.weaponCamo;
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
    s_clientWeaponAnims.xanim.debugAnimNames = s_clientWeaponAnims.debugAnimNames;
    LOBYTE(maxPublicNodes) = 4;
    strcpy(&s_clientWeaponAnims.debugName[8], "EAPON");
    *(double *)s_clientWeaponAnims.debugName = *(double *)"CLIENT_WEAPON";
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
  __int16 v3; 
  unsigned int m_mapEntryId; 
  const char *v8; 
  bool IsViewModel; 
  bool AllowDefault; 
  bool ShowDanglyBits; 
  bool v12; 
  bool IsWristwatch; 
  bool WeaponLoaded; 
  __int128 v15; 
  double v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  __int64 v20; 
  Weapon result; 
  Weapon weapon; 

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
    LODWORD(v19) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v19, 2) )
      __debugbreak();
  }
  m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
  if ( m_mapEntryId >= 0x32 )
  {
    LODWORD(v20) = 50;
    LODWORD(v19) = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  v8 = CL_UIWeapon_GetWeapon(localClientNum, m_mapEntryId);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 231, ASSERT_TYPE_ASSERT, "(weaponName)", (const char *)&queryFormat, "weaponName") )
    __debugbreak();
  weapon = *CG_Weapons_GetWeaponForName(&result, v8);
  IsViewModel = CL_UIWeapon_GetIsViewModel(localClientNum, m_mapEntryId);
  AllowDefault = CL_UIWeapon_GetAllowDefault(localClientNum, m_mapEntryId);
  ShowDanglyBits = CL_UIWeapon_GetShowDanglyBits(localClientNum, m_mapEntryId);
  v12 = CL_UIWeapon_GetVisible(localClientNum, m_mapEntryId) && !CG_Entity_IsNoDraw(localClientNum, &cent->nextState, NULL) && weapon.weaponIdx;
  IsWristwatch = CL_UIWeapon_GetIsWristwatch(localClientNum, m_mapEntryId);
  WeaponLoaded = CL_UIWeapon_GetWeaponLoaded(localClientNum, m_mapEntryId, &weapon);
  v15 = *(_OWORD *)&weapon.attachmentVariationIndices[5];
  v16 = *(double *)&weapon.attachmentVariationIndices[21];
  v17 = *(_DWORD *)&weapon.weaponCamo;
  *(__m256i *)&outWeaponState->weapon.weaponIdx = *(__m256i *)&weapon.weaponIdx;
  *(_OWORD *)&outWeaponState->weapon.attachmentVariationIndices[5] = v15;
  outWeaponState->isWeaponLoaded = WeaponLoaded;
  outWeaponState->isViewModel = IsViewModel;
  outWeaponState->isWristwatch = IsWristwatch;
  outWeaponState->showDanglyBits = ShowDanglyBits;
  outWeaponState->isVisible = v12;
  *(double *)&outWeaponState->weapon.attachmentVariationIndices[21] = v16;
  *(_DWORD *)&outWeaponState->weapon.weaponCamo = v17;
  if ( v3 )
  {
    v18 = !WeaponLoaded && AllowDefault;
    outWeaponState->isDefaultModel = v18;
  }
  else
  {
    outWeaponState->isDefaultModel = 0;
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
  __int64 v26; 
  unsigned __int8 *v27; 
  const WeaponAttachment **v28; 
  const XModel *v29; 
  const XModel *v30; 
  XAnimDynamicBones *v31; 
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
    if ( dynamicBones && dynamicBones->numCollidableBoneCollisionShapes )
      goto LABEL_69;
    v26 = v19 + 1;
    if ( (unsigned int)v26 < AllWeaponAttachmentsWithIds )
    {
      v27 = &attachmentIds[v26];
      v28 = (const WeaponAttachment **)&attachments[v26];
      while ( 1 )
      {
        v29 = BG_GetAttachmentModel(*v28, weaponState->weapon.attachmentVariationIndices[*v27], weaponState->isViewModel);
        v30 = v29;
        if ( v29 )
        {
          if ( DObjGetModelIndex(v10, v29) < 0 )
          {
            v31 = v30->dynamicBones;
            if ( v31 )
            {
              if ( v31->numCollidableBoneCollisionShapes )
                break;
            }
          }
        }
        LODWORD(v26) = v26 + 1;
        ++v27;
        ++v28;
        if ( (unsigned int)v26 >= AllWeaponAttachmentsWithIds )
          goto LABEL_71;
      }
LABEL_69:
      if ( COERCE_FLOAT(LODWORD(cent->pose.angles.v[2]) & _xmm) > 45.0 )
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
  DObjStickerSlotList *v10; 
  int v11; 
  _QWORD *v12; 
  __int64 v14; 
  __int64 v15; 
  DObjStickerSlotList result; 
  __m256i v17; 
  __m256i v18; 
  _BYTE v19[64]; 
  __int128 v20; 
  Material *overrideMaterial; 
  DObjStickerSlot _Last; 
  _OWORD v23[4]; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 396, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 397, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !weaponState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 398, ASSERT_TYPE_ASSERT, "(weaponState)", (const char *)&queryFormat, "weaponState") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v14) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 399, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, 2) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( !ClientDObj || !weaponState->isWeaponLoaded && !weaponState->isDefaultModel )
    return 0;
  if ( weaponState->weapon.weaponCamo == cent->typeData.flightDurationMs )
  {
    if ( ClientDObj->modelMaterialOverrides )
    {
      v10 = CG_Weapons_BuildStickerSlotList(&result, localClientNum, NULL, 0, &weaponState->weapon);
      v17 = *(__m256i *)v10->modelTypeToApply;
      v18 = *(__m256i *)&v10->modelTypeToApply[8];
      *(__m256i *)v19 = *(__m256i *)&v10->modelTypeToApply[16];
      *(__m256i *)&v19[32] = *(__m256i *)&v10->slots[0].overrideMaterial;
      v20 = *(_OWORD *)&v10->slots[2].overrideMaterial;
      overrideMaterial = v10->slots[3].overrideMaterial;
      std::_Sort_unchecked<DObjStickerSlot *,bool (*)(DObjStickerSlot const &,DObjStickerSlot const &)>((DObjStickerSlot *)&v19[24], &_Last, 4i64, DObjStickerSlotGreaterThan);
      DObjGetStickerMaterialOverrides(ClientDObj, NULL, (DObjStickerSlotList *)&_Last.overrideMaterial);
      v11 = 0;
      while ( 1 )
      {
        v12 = &v23[v11];
        if ( *(_QWORD *)&v19[16 * v11 + 24] != *v12 || *(_QWORD *)&v19[16 * v11 + 32] != v12[1] )
          break;
        if ( (unsigned int)++v11 >= 4 )
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
    LODWORD(v15) = weaponState->weapon.weaponCamo;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 408, ASSERT_TYPE_ASSERT, "(!validate)", "%s\n\tCamo does not match! Expected %u, detected %u.", "!validate", v15, cent->typeData.flightDurationMs);
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
  __int64 v3; 
  char IsDObjDirty; 
  char IsDObjMaterialDirty; 
  bool v8; 
  const DObj *ClientDObj; 
  bool v10; 
  const DObj *v11; 
  const DObj *v12; 
  const DObj *v13; 
  DObj *v14; 
  float frametime; 
  int v16; 
  const char *Weapon; 
  __int64 v18; 
  __int64 v19; 
  bool outResetDynamicBonesHint[16]; 
  XAnimBonePhysicsStateBuffer outStateBuffer; 

  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 656, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 657, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v18) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 658, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, 2) )
      __debugbreak();
  }
  if ( weaponState->weapon.weaponIdx && (weaponState->isDefaultModel || weaponState->isWeaponLoaded) )
  {
    IsDObjDirty = CG_ClientWeapon_IsDObjDirty((const LocalClientNum_t)v3, cent, weaponState, outResetDynamicBonesHint, 0);
    IsDObjMaterialDirty = CG_ClientWeapon_IsDObjMaterialDirty((const LocalClientNum_t)v3, cent, weaponState, 0);
    if ( (unsigned __int8)IsDObjDirty | (unsigned __int8)IsDObjMaterialDirty )
    {
      v8 = outResetDynamicBonesHint[0];
      if ( !outResetDynamicBonesHint[0] )
      {
        ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
        XAnimBonePhysicsSaveState(ClientDObj, &outStateBuffer);
      }
      v10 = IsDObjMaterialDirty && !IsDObjDirty;
      CG_ClientWeapon_BuildDObj((const LocalClientNum_t)v3, cent, weaponState, v10);
      if ( !v8 )
      {
        v11 = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
        XAnimBonePhysicsRestoreState(v11, &outStateBuffer);
      }
    }
    if ( CG_ClientWeapon_IsDObjDirty((const LocalClientNum_t)v3, cent, weaponState, outResetDynamicBonesHint, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 723, ASSERT_TYPE_ASSERT, "(!CG_ClientWeapon_IsDObjDirty( localClientNum, cent, &weaponState, &resetDynamicBonesCheck, true ))", (const char *)&queryFormat, "!CG_ClientWeapon_IsDObjDirty( localClientNum, cent, &weaponState, &resetDynamicBonesCheck, true )") )
      __debugbreak();
    if ( CG_ClientWeapon_IsDObjMaterialDirty((const LocalClientNum_t)v3, cent, weaponState, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 724, ASSERT_TYPE_ASSERT, "(!CG_ClientWeapon_IsDObjMaterialDirty( localClientNum, cent, &weaponState, true ))", (const char *)&queryFormat, "!CG_ClientWeapon_IsDObjMaterialDirty( localClientNum, cent, &weaponState, true )") )
      __debugbreak();
    if ( CL_UIWeapon_GetResetDynBones((const LocalClientNum_t)v3, cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId) )
    {
      v12 = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
      if ( v12 )
        XAnimBonePhysicsReset(v12);
      CL_UIWeapon_SetResetDynBones((const LocalClientNum_t)v3, cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId, 0);
    }
    CG_ClientWeapon_UpdateAnims((const LocalClientNum_t)v3, weaponState, cent);
    v13 = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
    v14 = (DObj *)v13;
    if ( v13 )
    {
      if ( DObjHasProceduralBones(v13) )
      {
        frametime = (float)CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->frametime;
        XAnimBonePhysicsUpdateTime(v14, frametime * 0.001);
      }
    }
    CG_Ents_TouchModelFrontEndScene((const LocalClientNum_t)v3, cent);
  }
  else
  {
    if ( weaponState->isVisible )
    {
      v16 = Sys_Milliseconds();
      if ( (unsigned int)v3 >= 2 )
      {
        LODWORD(v19) = 2;
        LODWORD(v18) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 669, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_lastPrintTime ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_lastPrintTime )\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( (unsigned int)(v16 - s_lastPrintTime_1[v3]) > 0x1F4 )
      {
        Weapon = CL_UIWeapon_GetWeapon((const LocalClientNum_t)v3, cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId);
        Com_PrintWarning(14, "WARNING: CG_ClientWeapon aborting DObj update due to missing models. Attempted to build DObj for weapon '%s' without loaded models and defaults disabled. This likely indicates that the client weapon was set before the models completed loading, or there is a content issue. Try using 'cl_uistreaming_verbose 1' and 'cl_streaming_devVerbose 1' for more details.\n", Weapon);
        s_lastPrintTime_1[v3] = v16;
      }
    }
    CG_ClientWeapon_ClearVFXState((const LocalClientNum_t)v3, cent);
    CG_ClientWeapon_FreeTree((const LocalClientNum_t)v3, cent);
    Com_SafeClientDObjFree(cent->nextState.number, (LocalClientNum_t)v3);
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
  __m256i *HudOutlineInfo; 
  float v10; 
  __int16 otherEntityNum; 
  __int64 v12; 
  CgEntitySystem *v13; 
  __int64 v14; 
  __m256i *v15; 
  __m256i v16; 
  float atlasTime; 
  unsigned int v18; 
  const dvar_t *v19; 
  __int64 v20; 
  __int64 v21; 
  vec3_t outOrigin; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v24; 
  __int64 v25; 
  CgClientWeaponState outWeaponState; 
  shaderOverride_t v27; 

  v25 = -2i64;
  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 921, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 922, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v20) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 923, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v20, 2) )
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
    LODWORD(v21) = 2;
    LODWORD(v20) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 595, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v20, v21) )
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
      outOrigin.v[2] = outOrigin.v[2] + 4.0;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
      *(__m256i *)&v24.color = *HudOutlineInfo;
      v10 = *(float *)HudOutlineInfo[1].m256i_i32;
      otherEntityNum = cent->nextState.otherEntityNum;
      if ( otherEntityNum == 2047 )
      {
        v16 = *(__m256i *)&NULL_SHADER_OVERRIDE_0.scrollRateX;
        atlasTime = NULL_SHADER_OVERRIDE_0.atlasTime;
      }
      else
      {
        v12 = otherEntityNum;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v21) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v21) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v21) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v20) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v3] )
        {
          LODWORD(v21) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v21) )
            __debugbreak();
        }
        v13 = CgEntitySystem::ms_entitySystemArray[v3];
        if ( (unsigned int)v12 >= 0x800 )
        {
          LODWORD(v21) = 2048;
          LODWORD(v20) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v14 = (__int64)&v13->m_entities[v12];
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 961, ASSERT_TYPE_ASSERT, "(parentEnt)", (const char *)&queryFormat, "parentEnt") )
          __debugbreak();
        if ( (*(_BYTE *)(v14 + 648) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 962, ASSERT_TYPE_ASSERT, "(CENextValid( parentEnt ))", (const char *)&queryFormat, "CENextValid( parentEnt )") )
          __debugbreak();
        v15 = (__m256i *)LocalClientGlobals->GetShaderOverrideData(LocalClientGlobals, &v27, *(_DWORD *)(v14 + 544), &outWeaponState.weapon);
        v16 = *v15;
        atlasTime = *(float *)v15[1].m256i_i32;
      }
      *(__m256i *)&result.color = v16;
      if ( !DObjVerifyNumBones(ClientDObj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 970, ASSERT_TYPE_ASSERT, "(DObjVerifyNumBones( obj ))", (const char *)&queryFormat, "DObjVerifyNumBones( obj )") )
        __debugbreak();
      v18 = cent->nextState.number;
      v24.characterEVOffset = v10;
      result.characterEVOffset = atlasTime;
      CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, ClientDObj, &cent->pose, v18, 0, (shaderOverride_t *)&result, &v24, &outOrigin, 0.0, 0);
      v19 = DCONST_DVARBOOL_xanim_drawViewModelDynamicBones;
      if ( !DCONST_DVARBOOL_xanim_drawViewModelDynamicBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawViewModelDynamicBones") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.enabled )
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
  cg_t *LocalClientGlobals; 
  unsigned int m_mapEntryId; 
  float v6; 
  __int128 v7; 
  float v10; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  const DObj *ClientDObj; 
  DObj *v15; 
  double CollisionPlaneHeightOffset; 
  bool CollisionPlaneEnabled; 
  __int64 v18; 
  __int64 v19; 
  vec3_t outOrigin; 
  __int64 v21; 
  vec3_t offset; 
  vec3_t outOffset; 
  vec3_t outGoal; 
  vec3_t v25; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  v21 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 767, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 768, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v18) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 769, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, 2) )
      __debugbreak();
  }
  if ( cent->nextState.un.scriptMoverType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 770, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ClientWeapon)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ClientWeapon") )
    __debugbreak();
  m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
  if ( m_mapEntryId >= 0x32 )
  {
    LODWORD(v19) = 50;
    LODWORD(v18) = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 773, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  CL_UIWeapon_GetOriginOffset(localClientNum, m_mapEntryId, &outOffset);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  v6 = outOrigin.v[2];
  outOrigin.v[0] = outOrigin.v[0] + outOffset.v[0];
  outOrigin.v[1] = outOrigin.v[1] + outOffset.v[1];
  outOrigin.v[2] = outOrigin.v[2] + outOffset.v[2];
  CL_UIWeapon_GetAngleOffset(localClientNum, m_mapEntryId, &offset);
  CL_UIWeapon_GetAngleOffsetGoal(localClientNum, m_mapEntryId, &outGoal);
  v7 = 0i64;
  *(float *)&v7 = (float)LocalClientGlobals->frametime * 0.0099999998;
  _XMM2 = v7;
  __asm { vminss  xmm0, xmm2, cs:__real@3f800000 }
  offset.v[0] = (float)((float)(outGoal.v[0] - offset.v[0]) * *(float *)&_XMM0) + offset.v[0];
  offset.v[1] = (float)((float)(outGoal.v[1] - offset.v[1]) * *(float *)&_XMM0) + offset.v[1];
  offset.v[2] = (float)((float)(outGoal.v[2] - offset.v[2]) * *(float *)&_XMM0) + offset.v[2];
  CL_UIWeapon_SetAngleOffset(localClientNum, m_mapEntryId, &offset);
  AnglesToAxis(&offset, &axis);
  AnglesToAxis(&cent->pose.angles, &in2);
  MatrixMultiply(&axis, &in2, &out);
  AxisToAngles(&out, &cent->pose.angles);
  CL_UIWeapon_GetRotationCenter(localClientNum, m_mapEntryId, &v25);
  v10 = (float)((float)(v25.v[1] * out.m[1].v[0]) + (float)(v25.v[0] * out.m[0].v[0])) + (float)(v25.v[2] * out.m[2].v[0]);
  v11 = (float)((float)(v25.v[1] * out.m[1].v[1]) + (float)(v25.v[0] * out.m[0].v[1])) + (float)(v25.v[2] * out.m[2].v[1]);
  v12 = (float)((float)(v25.v[1] * out.m[1].v[2]) + (float)(v25.v[0] * out.m[0].v[2])) + (float)(v25.v[2] * out.m[2].v[2]);
  outOrigin.v[0] = (float)((float)((float)(v25.v[1] * in2.m[1].v[0]) + (float)(v25.v[0] * in2.m[0].v[0])) + (float)(v25.v[2] * in2.m[2].v[0])) + outOrigin.v[0];
  outOrigin.v[1] = (float)((float)((float)(v25.v[1] * in2.m[1].v[1]) + (float)(v25.v[0] * in2.m[0].v[1])) + (float)(v25.v[2] * in2.m[2].v[1])) + outOrigin.v[1];
  outOrigin.v[2] = (float)((float)((float)(v25.v[1] * in2.m[1].v[2]) + (float)(v25.v[0] * in2.m[0].v[2])) + (float)(v25.v[2] * in2.m[2].v[2])) + outOrigin.v[2];
  v13 = DCONST_DVARBOOL_cg_clientWeaponDrawRotationCenter;
  if ( !DCONST_DVARBOOL_cg_clientWeaponDrawRotationCenter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_clientWeaponDrawRotationCenter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
    CG_DebugSphere(&outOrigin, 1.0, &colorRed, 1, 1);
  outOrigin.v[0] = outOrigin.v[0] - v10;
  outOrigin.v[1] = outOrigin.v[1] - v11;
  outOrigin.v[2] = outOrigin.v[2] - v12;
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  v15 = (DObj *)ClientDObj;
  if ( ClientDObj && DObjHasProceduralBones(ClientDObj) )
  {
    DObjTouchProceduralBones(v15);
    XAnimBonePhysicsSetDObjMatrix(v15, &outOrigin, &cent->pose.angles);
    CollisionPlaneHeightOffset = CL_UIWeapon_GetCollisionPlaneHeightOffset(localClientNum, m_mapEntryId);
    CollisionPlaneEnabled = CL_UIWeapon_GetCollisionPlaneEnabled(localClientNum, m_mapEntryId);
    XAnimBonePhysicsSetGroundPlaneEnabled(v15, CollisionPlaneEnabled);
    XAnimBonePhysicsSetGroundPlaneHeight(v15, *(float *)&CollisionPlaneHeightOffset + v6);
    XAnimBonePhysicsClearLinearVelocity(v15);
  }
  CG_SetPoseOrigin(&cent->pose, &outOrigin);
  memset(&outOrigin, 0, sizeof(outOrigin));
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
  XAnimOwner v6; 
  DObj *ClientDObj; 
  __int16 scriptMoverType; 
  bool v9; 
  XAnimTree *SmallTree; 
  __int64 goalTime; 

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
    v9 = weaponState->isWristwatch && s_clientWeaponAnims.initialized;
    if ( ClientDObj->tree )
    {
      if ( !v9 )
        CG_ClientWeapon_FreeTree(localClientNum, cent);
    }
    else if ( v9 )
    {
      LOBYTE(v6) = 1;
      SmallTree = Com_XAnimCreateSmallTree(&s_clientWeaponAnims.xanim, v6);
      if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 637, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
        __debugbreak();
      DObjSetTree(ClientDObj, SmallTree);
      cent->tree = SmallTree;
    }
    if ( ClientDObj->tree )
    {
      XAnimSetGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, 1u, 1.0, 0.0, 1.0, (scr_string_t)0, 1u, 0, LINEAR, NULL);
      CG_WristWatch_CalcXAnimParameters(ClientDObj, localClientNum, NULL, 0, 1u, 2u, 3u);
    }
  }
  else if ( cent->tree )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_weapon.cpp", 616, ASSERT_TYPE_ASSERT, "( nullptr ) == ( cent->tree )", "%s == %s\n\t%p, %p", "nullptr", "cent->tree", NULL, cent->tree) )
      __debugbreak();
  }
}

