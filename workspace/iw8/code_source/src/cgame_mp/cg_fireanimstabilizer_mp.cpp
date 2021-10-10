/*
==============
CG_FireAnimStabilizer_InterpolatePlayerState
==============
*/

void __fastcall CG_FireAnimStabilizer_InterpolatePlayerState(LocalClientNum_t localClientNum, const CgSnapshotMP *prevSnap, const CgSnapshotMP *nextSnap, playerState_s *out)
{
  ?CG_FireAnimStabilizer_InterpolatePlayerState@@YAXW4LocalClientNum_t@@PEBUCgSnapshotMP@@1PEAUplayerState_s@@@Z(localClientNum, prevSnap, nextSnap, out);
}

/*
==============
CG_FireAnimStabilizer_GetFireAnimRemainingTime
==============
*/
__int64 CG_FireAnimStabilizer_GetFireAnimRemainingTime(const LocalClientNum_t localClientNum, const playerState_s *ps, const FireAnimStabilizerState *fireAnimStabilizerState, const PlayerHandIndex hand)
{
  __int64 v4; 
  __int64 v6; 
  CgGlobalsMP *LocalClientGlobals; 
  bool v9; 
  const BgWeaponMap **v10; 
  const BgWeaponMap *v11; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v13; 
  __int64 shotCount; 
  bool v16; 
  int fireDelay; 
  int fireTime; 

  v4 = hand;
  v6 = localClientNum;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 96, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !fireAnimStabilizerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 97, ASSERT_TYPE_ASSERT, "(fireAnimStabilizerState)", (const char *)&queryFormat, "fireAnimStabilizerState") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(shotCount) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 98, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", shotCount, 2) )
      __debugbreak();
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v6);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 101, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v9 = CgWeaponMap::ms_instance[v6] == NULL;
  v10 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v6];
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v11 = *v10;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(*v10, ps);
  v13 = BG_UsingAlternate(ps);
  v16 = BG_PlayerDualWieldingWeapon(v11, ps, CurrentWeaponForPlayer) == 1;
  if ( BG_GetWeaponFireType(CurrentWeaponForPlayer, v13) == WEAPON_FIRETYPE_BURST && fireAnimStabilizerState->handStates[v4].numFireAnimsPlayed >= BG_GetWeaponBurstCount(CurrentWeaponForPlayer, v13) )
    return 1i64;
  BG_GetFireTime(v11, ps, CurrentWeaponForPlayer, v13, v16, ps->weapState[v4].weaponShotCount, &fireTime, &fireDelay);
  return (unsigned int)(fireDelay + fireTime + fireAnimStabilizerState->handStates[v4].lastFireAnimTime - LocalClientGlobals->time - fireAnimStabilizerState->handStates[v4].lastFireAnimExtraTimeSpent);
}

/*
==============
CG_FireAnimStabilizer_InterpolatePlayerState
==============
*/
void CG_FireAnimStabilizer_InterpolatePlayerState(LocalClientNum_t localClientNum, const CgSnapshotMP *prevSnap, const CgSnapshotMP *nextSnap, playerState_s *out)
{
  playerState_s *v4; 
  __int64 v5; 
  FireAnimStabilizerState *p_m_fireAnimStabilizerState; 
  const playerState_s *v9; 
  const BgWeaponMap **v10; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v12; 
  bool v13; 
  bool v14; 
  bool v15; 
  PlayerHandIndex v16; 
  int *p_numFireAnimsPlayed; 
  __int64 v18; 
  int FireAnimRemainingTime; 
  int v20; 
  int v21; 
  int v22; 
  int time; 
  const dvar_t *v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 
  BgWeaponMap *weaponMap; 
  CgGlobalsMP *LocalClientGlobals; 

  v4 = out;
  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !prevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 137, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
    __debugbreak();
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 138, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(out)", (const char *)&queryFormat, "out") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 142, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_m_fireAnimStabilizerState = &LocalClientGlobals->m_fireAnimStabilizerState;
  v9 = nextSnap->GetPlayerState(nextSnap, (unsigned int)v5);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 147, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  v10 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v5];
  if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  weaponMap = (BgWeaponMap *)*v10;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(*v10, v9);
  v12 = BG_UsingAlternate(v9);
  v13 = memcmp_0(&LocalClientGlobals->m_fireAnimStabilizerState.lastWeapon, CurrentWeaponForPlayer, 0x3Cui64) || v12 != LocalClientGlobals->m_fireAnimStabilizerState.lastWasAlternate;
  v14 = prevSnap->serverTime != p_m_fireAnimStabilizerState->lastPrevSnapTime || nextSnap->serverTime != LocalClientGlobals->m_fireAnimStabilizerState.lastNextSnapTime;
  if ( v13 || v9->clientNum != LocalClientGlobals->m_fireAnimStabilizerState.lastClientNum )
  {
    v15 = 1;
  }
  else
  {
    if ( !v14 )
      goto LABEL_36;
    v15 = 0;
  }
  CG_FireAnimStabilizer_OnNewSnapshot((const LocalClientNum_t)v5, prevSnap, nextSnap, p_m_fireAnimStabilizerState, v15);
LABEL_36:
  v16 = WEAPON_HAND_DEFAULT;
  if ( BG_PlayerLastWeaponHand(weaponMap, v9) >= WEAPON_HAND_DEFAULT )
  {
    p_numFireAnimsPlayed = &LocalClientGlobals->m_fireAnimStabilizerState.handStates[0].numFireAnimsPlayed;
    v18 = 0i64;
    v27 = (char *)v4 - (char *)v9 - 48;
    do
    {
      if ( *((_BYTE *)p_numFireAnimsPlayed + 5) )
      {
        FireAnimRemainingTime = CG_FireAnimStabilizer_GetFireAnimRemainingTime((const LocalClientNum_t)v5, v9, p_m_fireAnimStabilizerState, v16);
        v20 = *(p_numFireAnimsPlayed - 1);
        if ( FireAnimRemainingTime > 0 )
        {
          v4->weapState[v18].weapAnim = v20;
        }
        else
        {
          v21 = v9->weapState[v18].weapAnim ^ ((unsigned __int8)~(_BYTE)v20 ^ (unsigned __int8)v9->weapState[v18].weapAnim) & 0x80;
          v22 = -FireAnimRemainingTime;
          *(p_numFireAnimsPlayed - 1) = v21;
          time = LocalClientGlobals->time;
          ++*p_numFireAnimsPlayed;
          *(p_numFireAnimsPlayed - 3) = time;
          *(p_numFireAnimsPlayed - 2) = v22;
          *(unsigned int *)((char *)&v9->weapState[v18].weaponShotCount + v27) = v21;
          v24 = DCONST_DVARBOOL_cg_debugFireAnimStabilizer;
          if ( !DCONST_DVARBOOL_cg_debugFireAnimStabilizer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugFireAnimStabilizer") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v24);
          if ( v24->current.enabled )
          {
            LODWORD(v26) = v22;
            LODWORD(fmt) = *(p_numFireAnimsPlayed - 1);
            Com_Printf(17, "Restarted firing weapon Time: %d Shot count: %d Anim: %d Time wasted: %d\n", (unsigned int)*(p_numFireAnimsPlayed - 3), v9->weapState[v18].weaponShotCount, fmt, v26);
          }
          v4 = out;
        }
      }
      ++v16;
      ++v18;
      p_numFireAnimsPlayed += 5;
    }
    while ( v16 <= BG_PlayerLastWeaponHand(weaponMap, v9) );
  }
}

/*
==============
CG_FireAnimStabilizer_OnNewSnapshot
==============
*/
void CG_FireAnimStabilizer_OnNewSnapshot(const LocalClientNum_t localClientNum, const CgSnapshotMP *prevSnap, const CgSnapshotMP *nextSnap, FireAnimStabilizerState *fireAnimStabilizerState, bool ignorePrevState)
{
  __int64 v6; 
  const playerState_s *v9; 
  const playerState_s *v10; 
  bool v11; 
  const BgWeaponMap **v12; 
  weapFireType_t WeaponFireType; 
  const BgWeaponMap *v14; 
  int *p_lastFireAnimExtraTimeSpent; 
  FireAnimStabilizerHandState *handStates; 
  int *p_weaponState; 
  int v18; 
  signed __int64 v19; 
  bool v20; 
  int v21; 
  const dvar_t *v22; 
  char *fmt; 
  __int64 shotCount; 
  BgWeaponMap *weaponMap; 
  CgGlobalsMP *LocalClientGlobals; 
  Weapon *r_weapon; 
  bool v28; 
  bool v29; 
  int fireTime; 
  int fireDelay; 

  v6 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 14, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !prevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 15, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
    __debugbreak();
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 16, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  if ( !fireAnimStabilizerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 17, ASSERT_TYPE_ASSERT, "(fireAnimStabilizerState)", (const char *)&queryFormat, "fireAnimStabilizerState") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v6);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 20, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v9 = prevSnap->GetPlayerState(prevSnap, (unsigned int)v6);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 23, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
    __debugbreak();
  v10 = nextSnap->GetPlayerState(nextSnap, (unsigned int)v6);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_fireanimstabilizer_mp.cpp", 26, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  v11 = CgWeaponMap::ms_instance[v6] == NULL;
  v12 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v6];
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  weaponMap = (BgWeaponMap *)*v12;
  r_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(*v12, v10);
  v29 = BG_UsingAlternate(v10);
  v28 = BG_PlayerDualWieldingWeapon(weaponMap, v10, r_weapon) == 1;
  WeaponFireType = BG_GetWeaponFireType(r_weapon, v29);
  fireAnimStabilizerState->lastPrevSnapTime = prevSnap->serverTime;
  fireAnimStabilizerState->lastNextSnapTime = nextSnap->serverTime;
  fireAnimStabilizerState->lastClientNum = v10->clientNum;
  fireAnimStabilizerState->lastWeapon = *r_weapon;
  fireAnimStabilizerState->lastWasAlternate = v29;
  if ( (WeaponFireType & 0xFFFFFFFD) != 0 )
  {
    *(_QWORD *)&fireAnimStabilizerState->handStates[0].lastFireAnimTime = 0i64;
    *(_QWORD *)&fireAnimStabilizerState->handStates[0].lastWeaponAnim = 0i64;
    *(_QWORD *)&fireAnimStabilizerState->handStates[0].wasFiring = 0i64;
    *(_QWORD *)&fireAnimStabilizerState->handStates[1].lastFireAnimExtraTimeSpent = 0i64;
    *(_QWORD *)&fireAnimStabilizerState->handStates[1].numFireAnimsPlayed = 0i64;
  }
  else
  {
    v14 = weaponMap;
    p_lastFireAnimExtraTimeSpent = &fireAnimStabilizerState->handStates[0].lastFireAnimExtraTimeSpent;
    handStates = fireAnimStabilizerState->handStates;
    p_weaponState = &v9->weapState[0].weaponState;
    v18 = 0;
    v19 = (char *)v10 - (char *)v9;
    v20 = ignorePrevState;
    do
    {
      if ( v18 <= BG_PlayerLastWeaponHand(v14, v10) && *(int *)((char *)p_weaponState + v19) == 16 )
      {
        *((_BYTE *)p_lastFireAnimExtraTimeSpent + 13) = 1;
        if ( *p_weaponState != 16 || v20 )
        {
          *(p_lastFireAnimExtraTimeSpent - 1) = LocalClientGlobals->time;
          p_lastFireAnimExtraTimeSpent[1] = *(int *)((char *)p_weaponState + v19 - 32);
          p_lastFireAnimExtraTimeSpent[2] = 1;
          BG_GetFireTime(v14, v10, r_weapon, v29, v28, *(int *)((char *)p_weaponState + v19 + 16), &fireTime, &fireDelay);
          v21 = 0;
          if ( fireDelay + fireTime - *(int *)((char *)p_weaponState + v19 - 16) > 0 )
            v21 = fireDelay + fireTime - *(int *)((char *)p_weaponState + v19 - 16);
          *p_lastFireAnimExtraTimeSpent = v21;
          v22 = DCONST_DVARBOOL_cg_debugFireAnimStabilizer;
          if ( !DCONST_DVARBOOL_cg_debugFireAnimStabilizer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugFireAnimStabilizer") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v22);
          if ( v22->current.enabled )
          {
            LODWORD(shotCount) = *p_lastFireAnimExtraTimeSpent;
            LODWORD(fmt) = p_lastFireAnimExtraTimeSpent[1];
            Com_Printf(17, "Started firing weapon Time: %d Shot count: %d Anim: %d Time wasted: %d\n", (unsigned int)*(p_lastFireAnimExtraTimeSpent - 1), *(unsigned int *)((char *)p_weaponState + v19 + 16), fmt, shotCount);
          }
          v14 = weaponMap;
        }
      }
      else
      {
        *(_QWORD *)&handStates->lastFireAnimTime = 0i64;
        *(_QWORD *)&handStates->lastWeaponAnim = 0i64;
        *(_DWORD *)&handStates->wasFiring = 0;
      }
      ++v18;
      ++handStates;
      p_weaponState += 20;
      p_lastFireAnimExtraTimeSpent += 5;
    }
    while ( v18 < 2 );
  }
}

