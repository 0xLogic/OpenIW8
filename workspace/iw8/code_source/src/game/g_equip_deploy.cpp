/*
==============
G_Deploy_Fire
==============
*/

void __fastcall G_Deploy_Fire(gentity_s *attackerEnt, const GWeaponFireParms *params)
{
  ?G_Deploy_Fire@@YAXPEAUgentity_s@@PEBUGWeaponFireParms@@@Z(attackerEnt, params);
}

/*
==============
G_Deploy_Update
==============
*/

void __fastcall G_Deploy_Update(playerState_s *ps, GWeaponFireParms *const outParams)
{
  ?G_Deploy_Update@@YAXPEAUplayerState_s@@QEAUGWeaponFireParms@@@Z(ps, outParams);
}

/*
==============
G_Deploy_Clear
==============
*/

void __fastcall G_Deploy_Clear(playerState_s *const ps)
{
  ?G_Deploy_Clear@@YAXQEAUplayerState_s@@@Z(ps);
}

/*
==============
G_Deploy_Clear
==============
*/
void G_Deploy_Clear(playerState_s *const ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 132, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x14u);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x15u);
}

/*
==============
G_Deploy_Fire
==============
*/
void G_Deploy_Fire(gentity_s *attackerEnt, const GWeaponFireParms *params)
{
  unsigned __int16 hitEntId; 
  const WeaponDef *weapDef; 
  scrContext_t *v6; 
  unsigned __int16 v7; 
  scr_string_t equip_deploy_failed; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  vec3_t angles; 
  vec3_t outFxOffset; 

  if ( !attackerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 245, ASSERT_TYPE_ASSERT, "( attackerEnt != nullptr )", (const char *)&queryFormat, "attackerEnt != nullptr") )
    __debugbreak();
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 246, ASSERT_TYPE_ASSERT, "( params != nullptr )", (const char *)&queryFormat, "params != nullptr") )
    __debugbreak();
  if ( BG_GetWeaponType(&params->wp.weapon, params->wp.isAlternate) != WEAPTYPE_EQUIP_DEPLOY )
  {
    LODWORD(v10) = BG_GetWeaponType(&params->wp.weapon, params->wp.isAlternate);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 249, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( wp->weapon, wp->isAlternate ) ) == ( WEAPTYPE_EQUIP_DEPLOY )", "BG_GetWeaponType( wp->weapon, wp->isAlternate ) == WEAPTYPE_EQUIP_DEPLOY\n\t%i, %i", v10, 10) )
      __debugbreak();
  }
  hitEntId = params->deploy.hitEntId;
  if ( hitEntId >= 0x800u )
  {
    LODWORD(v11) = 2048;
    LODWORD(v10) = hitEntId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 250, ASSERT_TYPE_ASSERT, "(unsigned)( params->deploy.hitEntId ) < (unsigned)( ( 2048 ) )", "params->deploy.hitEntId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  weapDef = params->wp.weapDef;
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 253, ASSERT_TYPE_ASSERT, "( weapDef != nullptr )", (const char *)&queryFormat, "weapDef != nullptr") )
    __debugbreak();
  v6 = ScriptContext_Server();
  AxisToAngles((const tmat33_t<vec3_t> *)&params->136, &angles);
  v7 = params->deploy.hitEntId;
  equip_deploy_failed = scr_const.equip_deploy_failed;
  if ( params->deploy.succeeded )
    equip_deploy_failed = scr_const.equip_deploy_succeeded;
  if ( (unsigned __int16)(params->deploy.hitEntId - 2046) <= 1u )
  {
    Scr_AddUndefined(v6);
  }
  else
  {
    v9 = v7;
    if ( v7 >= 0x800u )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    GScr_AddEntity(&g_entities[v9]);
  }
  Scr_AddVector(v6, angles.v);
  Scr_AddVector(v6, params->deploy.deployTransform.m[3].v);
  GScr_Weapon_AddParam(v6, &params->wp.weapon, 0);
  BG_Deploy_ComputeFXOffset(params->deploy.playerZ, weapDef->deployEffectHeightOffset, (const tmat43_t<vec3_t> *)&params->136, &outFxOffset);
  Scr_AddVector(v6, outFxOffset.v);
  GScr_Notify(attackerEnt, equip_deploy_failed, 5u);
}

/*
==============
G_Deploy_Update
==============
*/
void G_Deploy_Update(playerState_s *ps, GWeaponFireParms *const outParams)
{
  __int128 v2; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  GWeaponMap *Instance; 
  unsigned __int16 weaponIdx; 
  WeaponDef *v8; 
  GHandler *Handler; 
  GHandler *v10; 
  GHandler *v11; 
  bool v12; 
  int v13; 
  bool v14; 
  int hitEntityNum; 
  nav_space_s *DefaultSpace; 
  nav_space_s *SpaceByEntNum; 
  double AllowanceOffMeshZ; 
  float v19; 
  double AllowanceOffMesh; 
  scr_string_t String; 
  __int64 v22; 
  __int64 v23; 
  const gentity_s *v24; 
  unsigned int v25; 
  unsigned __int8 v26; 
  int v27; 
  bool v28; 
  __int64 v29; 
  bool v30; 
  char v31; 
  const dvar_t *v32; 
  const vec4_t *v33; 
  unsigned __int16 v34; 
  char *fmt; 
  __int64 ignoreArbitraryUp; 
  __int64 ignoreArbitraryUpa; 
  DeployTestResults *outResults; 
  bool v39; 
  bool v40; 
  DeployTestResults v41; 
  __int128 v42; 
  __int64 v43; 
  Bounds outClosestPos; 
  tmat33_t<vec3_t> forward; 
  vec3_t outOrigin; 
  bfx::PathSpec pPathSpec; 
  char dest[512]; 
  __int128 v49; 

  DeployTestResults::DeployTestResults(&v41);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 149, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  if ( outParams )
  {
    outParams->deploy.succeeded = 0;
    outParams->deploy.playerZ = ps->origin.v[2];
    outParams->deploy.hitEntId = 2047;
    MatrixSet43((tmat43_t<vec3_t> *)&outParams->136, &vec3_origin, &identityMatrix33, 1.0);
  }
  p_otherFlags = &ps->otherFlags;
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x14u);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x15u);
  Instance = GWeaponMap::GetInstance();
  weaponIdx = BG_GetCurrentWeaponForPlayer(Instance, ps)->weaponIdx;
  if ( weaponIdx )
  {
    if ( weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(ignoreArbitraryUp) = weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", ignoreArbitraryUp, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    if ( !bg_weaponDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    v8 = bg_weaponDefs[weaponIdx];
    if ( v8->weapType == WEAPTYPE_EQUIP_DEPLOY )
    {
      Handler = GHandler::getHandler();
      BG_GetPlayerEyePosition(Instance, ps, &outOrigin, Handler);
      v10 = GHandler::getHandler();
      BG_GetPlayerViewDirection(ps, forward.m, &forward.m[1], &forward.m[2], v10, 0);
      LODWORD(forward.m[1].v[0]) ^= _xmm;
      LODWORD(forward.m[1].v[2]) ^= _xmm;
      LODWORD(forward.m[1].v[1]) ^= _xmm;
      v11 = GHandler::getHandler();
      v12 = BG_Deploy_TestLocation(v11, PHYSICS_WORLD_ID_FIRST, ps, &outOrigin, &forward, v8, &v41);
      v13 = 0;
      v40 = v12;
      v14 = v12;
      if ( v12 && v8->deployRequireOnNavmesh )
      {
        hitEntityNum = v41.hitEntityNum;
        *(vec3_t *)&v42 = identityMatrix33.m[2];
        pPathSpec.m_pathSharingPenalty = 0.0;
        pPathSpec.m_maxPathSharingPenalty = 0.0;
        pPathSpec.m_maxSearchDist = 0.0;
        pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
        *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
        *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
        pPathSpec.m_usePathSharingPenalty = 0;
        bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
        pPathSpec.m_snapMode = SNAP_CLOSEST;
        DefaultSpace = Nav_GetDefaultSpace();
        if ( !DefaultSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 66, ASSERT_TYPE_ASSERT, "(space)", "%s\n\tFailed to retrieve default nav space.", "space") )
          __debugbreak();
        if ( hitEntityNum != 2046 )
        {
          if ( BGMovingPlatforms::IsMovingPlatform(hitEntityNum) )
          {
            SpaceByEntNum = Nav_GetSpaceByEntNum(hitEntityNum);
            if ( SpaceByEntNum )
              DefaultSpace = SpaceByEntNum;
          }
        }
        if ( Nav_GetClosestVerticalPos(&v41.transform.m[3], (const vec3_t *)&v42, 0, &DefaultSpace->hSpace, &pPathSpec, &outClosestPos.midPoint, NULL) )
        {
          v49 = v2;
          AllowanceOffMeshZ = AINavigator2D::GetAllowanceOffMeshZ();
          v19 = *(float *)&AllowanceOffMeshZ;
          AllowanceOffMesh = AINavigator2D::GetAllowanceOffMesh();
          v39 = Nav_PointWithinCylinderWithUp(&v41.transform.m[3], &outClosestPos.midPoint, (const vec3_t *)&v42, *(float *)&AllowanceOffMesh, v19);
        }
        else
        {
          v39 = 0;
        }
      }
      else
      {
        v39 = 1;
      }
      if ( v14 )
      {
        v42 = *(_OWORD *)v41.equipBounds.midPoint.v;
        v43 = *(__int64 *)&v41.equipBounds.halfSize.y;
        String = SL_FindString("OutOfBounds");
        if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 97, ASSERT_TYPE_ASSERT, "( outOfBounds != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "outOfBounds != NULL_SCR_STRING") )
          __debugbreak();
        outClosestPos.midPoint.v[0] = (float)((float)(*((float *)&v43 + 1) + 0.125) * v41.transform.m[2].v[0]) + v41.transform.m[3].v[0];
        outClosestPos.midPoint.v[1] = (float)((float)(*((float *)&v43 + 1) + 0.125) * v41.transform.m[2].v[1]) + v41.transform.m[3].v[1];
        outClosestPos.midPoint.v[2] = (float)((float)(*((float *)&v43 + 1) + 0.125) * v41.transform.m[2].v[2]) + v41.transform.m[3].v[2];
        outClosestPos.halfSize.v[0] = *((float *)&v43 + 1) + 0.125;
        outClosestPos.halfSize.v[1] = *((float *)&v43 + 1) + 0.125;
        outClosestPos.halfSize.v[2] = *((float *)&v43 + 1) + 0.125;
        if ( level.num_entities <= 0 )
        {
LABEL_48:
          v26 = 1;
        }
        else
        {
          v22 = 0i64;
          v23 = 0i64;
          while ( 1 )
          {
            if ( (unsigned int)v13 >= 0x800 )
            {
              LODWORD(outResults) = 2048;
              LODWORD(ignoreArbitraryUpa) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreArbitraryUpa, outResults) )
                __debugbreak();
            }
            if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
              __debugbreak();
            if ( g_entities[v23].r.isInUse != g_entityIsInUse[v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
              __debugbreak();
            if ( g_entityIsInUse[v22] )
            {
              v24 = &g_entities[v23];
              if ( g_entities[v23].targetname == String )
              {
                v25 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, &g_entities[v23]);
                if ( PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &outClosestPos, v25, v24) )
                  break;
              }
            }
            ++v13;
            ++v22;
            ++v23;
            if ( v13 >= level.num_entities )
              goto LABEL_48;
          }
          v26 = 0;
        }
        v27 = v41.hitEntityNum;
        if ( v41.hitEntityNum >= 0x800u )
        {
          LODWORD(outResults) = 2048;
          LODWORD(ignoreArbitraryUpa) = v41.hitEntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( deployResults.hitEntityNum ) < (unsigned)( ( 2048 ) )", "deployResults.hitEntityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreArbitraryUpa, outResults) )
            __debugbreak();
          v27 = v41.hitEntityNum;
        }
        v28 = v39;
        v29 = v27;
        v30 = (level.gentities[v29].flags.m_flags[0] & 0x8000000) == 0;
        if ( v41.passRangeTest && v41.passWalkableTest && v41.passSkyTest && v41.passCylinderTest && v41.passMaterialTest && v41.passOverhangTest && v39 && v26 && (level.gentities[v29].flags.m_flags[0] & 0x8000000) == 0 )
        {
          v31 = 1;
          GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 0x14u);
          if ( !v41.isSkyVisible )
            GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 0x15u);
          goto LABEL_66;
        }
      }
      else
      {
        v28 = v39;
        v26 = 1;
        v30 = 1;
      }
      v31 = 0;
LABEL_66:
      if ( v40 )
      {
        v32 = DCONST_DVARBOOL_deploy_debug;
        if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        if ( v32->current.enabled )
        {
          LODWORD(outResults) = v41.passMaterialTest;
          LODWORD(ignoreArbitraryUpa) = v41.passWalkableTest;
          LODWORD(fmt) = v41.passCylinderTest;
          Com_sprintf(dest, 0x200ui64, "rng:%i cyl:%i wlk:%i surf:%i ovrhng:%i sky:%i nav:%i bound:%i nodeploy:%i", v41.passRangeTest, fmt, ignoreArbitraryUpa, outResults, v41.passOverhangTest, v41.passSkyTest, v28, v26, v30);
          *(float *)&v42 = (float)((float)(v41.equipBounds.halfSize.v[2] * 2.0) * v41.transform.m[2].v[0]) + v41.transform.m[3].v[0];
          *((float *)&v42 + 1) = (float)((float)(v41.equipBounds.halfSize.v[2] * 2.0) * v41.transform.m[2].v[1]) + v41.transform.m[3].v[1];
          *((float *)&v42 + 2) = (float)((float)(v41.equipBounds.halfSize.v[2] * 2.0) * v41.transform.m[2].v[2]) + v41.transform.m[3].v[2];
          G_DebugAxis((const tmat33_t<vec3_t> *)&v41.transform, &v41.transform.m[3], 36.0, 1, dword_145083BC0);
          v33 = &colorRed;
          if ( v31 )
            v33 = &colorGreen;
          G_DebugCylinder(&v41.transform.m[3], (const vec3_t *)&v42, v41.equipBounds.halfSize.v[0], v33, 1, dword_145083BC0);
          G_Main_AddDebugStringWithDuration(&v41.transform.m[3], &colorWhite, 0.25, dest, dword_145083BC0);
        }
      }
      if ( outParams )
      {
        MatrixCopy43(&v41.transform, (tmat43_t<vec3_t> *)&outParams->136);
        v34 = v41.hitEntityNum;
        if ( (v41.hitEntityNum < 0 || v41.hitEntityNum > 0xFFFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", LOWORD(v41.hitEntityNum), "signed", v41.hitEntityNum) )
          __debugbreak();
        outParams->deploy.hitEntId = v34;
        outParams->deploy.succeeded = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x14u);
      }
    }
  }
}

