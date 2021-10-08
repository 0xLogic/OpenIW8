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
  scrContext_t *v6; 
  unsigned __int16 v7; 
  scr_string_t equip_deploy_failed; 
  __int64 v9; 
  __int64 v12; 
  __int64 v13; 
  vec3_t angles; 
  vec3_t outFxOffset; 

  _RBX = params;
  if ( !attackerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 245, ASSERT_TYPE_ASSERT, "( attackerEnt != nullptr )", (const char *)&queryFormat, "attackerEnt != nullptr") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 246, ASSERT_TYPE_ASSERT, "( params != nullptr )", (const char *)&queryFormat, "params != nullptr") )
    __debugbreak();
  if ( BG_GetWeaponType(&_RBX->wp.weapon, _RBX->wp.isAlternate) != WEAPTYPE_EQUIP_DEPLOY )
  {
    LODWORD(v12) = BG_GetWeaponType(&_RBX->wp.weapon, _RBX->wp.isAlternate);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 249, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( wp->weapon, wp->isAlternate ) ) == ( WEAPTYPE_EQUIP_DEPLOY )", "BG_GetWeaponType( wp->weapon, wp->isAlternate ) == WEAPTYPE_EQUIP_DEPLOY\n\t%i, %i", v12, 10) )
      __debugbreak();
  }
  hitEntId = _RBX->deploy.hitEntId;
  if ( hitEntId >= 0x800u )
  {
    LODWORD(v13) = 2048;
    LODWORD(v12) = hitEntId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 250, ASSERT_TYPE_ASSERT, "(unsigned)( params->deploy.hitEntId ) < (unsigned)( ( 2048 ) )", "params->deploy.hitEntId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  _R14 = _RBX->wp.weapDef;
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 253, ASSERT_TYPE_ASSERT, "( weapDef != nullptr )", (const char *)&queryFormat, "weapDef != nullptr") )
    __debugbreak();
  v6 = ScriptContext_Server();
  AxisToAngles((const tmat33_t<vec3_t> *)&_RBX->136, &angles);
  v7 = _RBX->deploy.hitEntId;
  equip_deploy_failed = scr_const.equip_deploy_failed;
  if ( _RBX->deploy.succeeded )
    equip_deploy_failed = scr_const.equip_deploy_succeeded;
  if ( (unsigned __int16)(_RBX->deploy.hitEntId - 2046) <= 1u )
  {
    Scr_AddUndefined(v6);
  }
  else
  {
    v9 = v7;
    if ( v7 >= 0x800u )
    {
      LODWORD(v13) = 2048;
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    GScr_AddEntity(&g_entities[v9]);
  }
  Scr_AddVector(v6, angles.v);
  Scr_AddVector(v6, _RBX->deploy.deployTransform.m[3].v);
  GScr_Weapon_AddParam(v6, &_RBX->wp.weapon, 0);
  __asm
  {
    vmovss  xmm1, dword ptr [r14+121Ch]; desiredHeightOffset
    vmovss  xmm0, dword ptr [rbx+0B8h]; playerZ
  }
  BG_Deploy_ComputeFXOffset(*(float *)&_XMM0, *(float *)&_XMM1, (const tmat43_t<vec3_t> *)&_RBX->136, &outFxOffset);
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
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  GWeaponMap *Instance; 
  unsigned __int16 weaponIdx; 
  WeaponDef *v9; 
  GHandler *Handler; 
  GHandler *v11; 
  GHandler *v19; 
  bool v20; 
  int v21; 
  bool v22; 
  int hitEntityNum; 
  nav_space_s *DefaultSpace; 
  nav_space_s *SpaceByEntNum; 
  bool v32; 
  scr_string_t String; 
  __int64 v45; 
  __int64 v46; 
  const gentity_s *v47; 
  unsigned int v48; 
  unsigned __int8 v49; 
  int v50; 
  bool v51; 
  __int64 v52; 
  bool v53; 
  char v54; 
  const dvar_t *v55; 
  const vec4_t *v66; 
  unsigned __int16 v68; 
  char *fmt; 
  float fmta; 
  __int64 ignoreArbitraryUp; 
  __int64 ignoreArbitraryUpa; 
  DeployTestResults *outResults; 
  bool v74; 
  bool v75; 
  DeployTestResults v76; 
  __int128 v77; 
  Bounds outClosestPos; 
  tmat33_t<vec3_t> forward; 
  vec3_t outOrigin; 
  bfx::PathSpec pPathSpec; 
  char dest[512]; 

  DeployTestResults::DeployTestResults(&v76);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 149, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  if ( outParams )
  {
    __asm { vmovss  xmm3, cs:__real@3f800000; scale }
    outParams->deploy.succeeded = 0;
    outParams->deploy.playerZ = ps->origin.v[2];
    outParams->deploy.hitEntId = 2047;
    MatrixSet43((tmat43_t<vec3_t> *)&outParams->136, &vec3_origin, &identityMatrix33, *(float *)&_XMM3);
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
    v9 = bg_weaponDefs[weaponIdx];
    if ( v9->weapType == WEAPTYPE_EQUIP_DEPLOY )
    {
      Handler = GHandler::getHandler();
      BG_GetPlayerEyePosition(Instance, ps, &outOrigin, Handler);
      v11 = GHandler::getHandler();
      BG_GetPlayerViewDirection(ps, forward.m, &forward.m[1], &forward.m[2], v11, 0);
      __asm
      {
        vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm0, dword ptr [rbp+2E0h+right]
        vmovss  xmm2, dword ptr [rbp+2E0h+right+4]
        vxorps  xmm1, xmm0, xmm3
        vxorps  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbp+2E0h+right], xmm1
        vmovss  xmm1, dword ptr [rbp+2E0h+right+8]
        vxorps  xmm2, xmm1, xmm3
        vmovss  dword ptr [rbp+2E0h+right+8], xmm2
        vmovss  dword ptr [rbp+2E0h+right+4], xmm0
      }
      v19 = GHandler::getHandler();
      v20 = BG_Deploy_TestLocation(v19, PHYSICS_WORLD_ID_FIRST, ps, &outOrigin, &forward, v9, &v76);
      v21 = 0;
      v75 = v20;
      v22 = v20;
      if ( v20 && v9->deployRequireOnNavmesh )
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
          vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        }
        hitEntityNum = v76.hitEntityNum;
        __asm
        {
          vmovss  dword ptr [rbp+2E0h+var_310], xmm0
          vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
          vmovss  dword ptr [rbp+2E0h+var_310+8], xmm0
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rbp+2E0h+pPathSpec.m_pathSharingPenalty], xmm0
          vmovss  [rbp+2E0h+pPathSpec.m_maxPathSharingPenalty], xmm0
          vmovss  [rbp+2E0h+pPathSpec.m_maxSearchDist], xmm0
          vmovss  dword ptr [rbp+2E0h+var_310+4], xmm1
        }
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
        if ( Nav_GetClosestVerticalPos(&v76.transform.m[3], (const vec3_t *)&v77, 0, &DefaultSpace->hSpace, &pPathSpec, &outClosestPos.midPoint, NULL) )
        {
          __asm { vmovaps [rsp+3E0h+var_40], xmm6 }
          *(double *)&_XMM0 = AINavigator2D::GetAllowanceOffMeshZ();
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = AINavigator2D::GetAllowanceOffMesh();
          __asm
          {
            vmovaps xmm3, xmm0; radius
            vmovss  dword ptr [rsp+3E0h+fmt], xmm6
          }
          v32 = Nav_PointWithinCylinderWithUp(&v76.transform.m[3], &outClosestPos.midPoint, (const vec3_t *)&v77, *(float *)&_XMM3, fmta);
          __asm { vmovaps xmm6, [rsp+3E0h+var_40] }
          v74 = v32;
        }
        else
        {
          v74 = 0;
        }
      }
      else
      {
        v74 = 1;
      }
      if ( v22 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+3E0h+var_370.equipBounds.midPoint]
          vmovsd  xmm1, qword ptr [rbp+2E0h+var_370.equipBounds.halfSize+4]
          vmovups [rbp+2E0h+var_310], xmm0
          vmovsd  [rbp+2E0h+var_300], xmm1
        }
        String = SL_FindString("OutOfBounds");
        if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 97, ASSERT_TYPE_ASSERT, "( outOfBounds != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "outOfBounds != NULL_SCR_STRING") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+2E0h+var_300+4]
          vaddss  xmm3, xmm0, cs:__real@3e000000
          vmulss  xmm2, xmm3, dword ptr [rbp+2E0h+var_370.transform+18h]
          vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+var_370.transform+24h]
          vmulss  xmm2, xmm3, dword ptr [rbp+2E0h+var_370.transform+1Ch]
          vmovss  dword ptr [rbp+2E0h+outClosestPos], xmm0
          vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+var_370.transform+28h]
          vmulss  xmm2, xmm3, dword ptr [rbp+2E0h+var_370.transform+20h]
          vmovss  dword ptr [rbp+2E0h+outClosestPos+4], xmm0
          vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+var_370.transform+2Ch]
          vmovss  dword ptr [rbp+2E0h+outClosestPos+8], xmm0
          vmovss  [rbp+2E0h+var_2E4], xmm3
          vmovss  [rbp+2E0h+var_2E0], xmm3
          vmovss  [rbp+2E0h+var_2DC], xmm3
        }
        if ( level.num_entities <= 0 )
        {
LABEL_48:
          v49 = 1;
        }
        else
        {
          v45 = 0i64;
          v46 = 0i64;
          while ( 1 )
          {
            if ( (unsigned int)v21 >= 0x800 )
            {
              LODWORD(outResults) = 2048;
              LODWORD(ignoreArbitraryUpa) = v21;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreArbitraryUpa, outResults) )
                __debugbreak();
            }
            if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
              __debugbreak();
            if ( g_entities[v46].r.isInUse != g_entityIsInUse[v45] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
              __debugbreak();
            if ( g_entityIsInUse[v45] )
            {
              v47 = &g_entities[v46];
              if ( g_entities[v46].targetname == String )
              {
                v48 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, &g_entities[v46]);
                if ( PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &outClosestPos, v48, v47) )
                  break;
              }
            }
            ++v21;
            ++v45;
            ++v46;
            if ( v21 >= level.num_entities )
              goto LABEL_48;
          }
          v49 = 0;
        }
        v50 = v76.hitEntityNum;
        if ( v76.hitEntityNum >= 0x800u )
        {
          LODWORD(outResults) = 2048;
          LODWORD(ignoreArbitraryUpa) = v76.hitEntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_equip_deploy.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( deployResults.hitEntityNum ) < (unsigned)( ( 2048 ) )", "deployResults.hitEntityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreArbitraryUpa, outResults) )
            __debugbreak();
          v50 = v76.hitEntityNum;
        }
        v51 = v74;
        v52 = v50;
        v53 = (level.gentities[v52].flags.m_flags[0] & 0x8000000) == 0;
        if ( v76.passRangeTest && v76.passWalkableTest && v76.passSkyTest && v76.passCylinderTest && v76.passMaterialTest && v76.passOverhangTest && v74 && v49 && (level.gentities[v52].flags.m_flags[0] & 0x8000000) == 0 )
        {
          v54 = 1;
          GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 0x14u);
          if ( !v76.isSkyVisible )
            GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 0x15u);
          goto LABEL_66;
        }
      }
      else
      {
        v51 = v74;
        v49 = 1;
        v53 = 1;
      }
      v54 = 0;
LABEL_66:
      if ( v75 )
      {
        v55 = DCONST_DVARBOOL_deploy_debug;
        if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v55);
        if ( v55->current.enabled )
        {
          LODWORD(outResults) = v76.passMaterialTest;
          LODWORD(ignoreArbitraryUpa) = v76.passWalkableTest;
          LODWORD(fmt) = v76.passCylinderTest;
          Com_sprintf(dest, 0x200ui64, "rng:%i cyl:%i wlk:%i surf:%i ovrhng:%i sky:%i nav:%i bound:%i nodeploy:%i", v76.passRangeTest, fmt, ignoreArbitraryUpa, outResults, v76.passOverhangTest, v76.passSkyTest, v51, v49, v53);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+2E0h+var_370.equipBounds.halfSize+8]
            vmulss  xmm3, xmm0, cs:__real@40000000
            vmulss  xmm2, xmm3, dword ptr [rbp+2E0h+var_370.transform+18h]
            vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+var_370.transform+24h]
            vmulss  xmm2, xmm3, dword ptr [rbp+2E0h+var_370.transform+1Ch]
            vmovss  dword ptr [rbp+2E0h+var_310], xmm0
            vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+var_370.transform+28h]
            vmulss  xmm2, xmm3, dword ptr [rbp+2E0h+var_370.transform+20h]
            vmovss  dword ptr [rbp+2E0h+var_310+4], xmm0
            vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+var_370.transform+2Ch]
            vmovss  xmm2, cs:__real@42100000; length
            vmovss  dword ptr [rbp+2E0h+var_310+8], xmm0
          }
          G_DebugAxis((const tmat33_t<vec3_t> *)&v76.transform, &v76.transform.m[3], *(float *)&_XMM2, 1, dword_145083BC0);
          __asm { vmovss  xmm2, dword ptr [rsp+3E0h+var_370.equipBounds.halfSize]; radius }
          v66 = &colorRed;
          if ( v54 )
            v66 = &colorGreen;
          G_DebugCylinder(&v76.transform.m[3], (const vec3_t *)&v77, *(float *)&_XMM2, v66, 1, dword_145083BC0);
          __asm { vmovss  xmm2, cs:__real@3e800000; scale }
          G_Main_AddDebugStringWithDuration(&v76.transform.m[3], &colorWhite, *(float *)&_XMM2, dest, dword_145083BC0);
        }
      }
      if ( outParams )
      {
        MatrixCopy43(&v76.transform, (tmat43_t<vec3_t> *)&outParams->136);
        v68 = v76.hitEntityNum;
        if ( (v76.hitEntityNum < 0 || v76.hitEntityNum > 0xFFFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", LOWORD(v76.hitEntityNum), "signed", v76.hitEntityNum) )
          __debugbreak();
        outParams->deploy.hitEntId = v68;
        outParams->deploy.succeeded = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x14u);
      }
    }
  }
}

