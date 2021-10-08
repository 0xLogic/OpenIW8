/*
==============
CG_WeaponSounds_Update
==============
*/

void __fastcall CG_WeaponSounds_Update(const LocalClientNum_t localClientNum)
{
  ?CG_WeaponSounds_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WeaponSounds_Update
==============
*/

void __fastcall CG_WeaponSounds_Update(const LocalClientNum_t localClientNum)
{
  CG_WeaponSounds_UpdateTriggerDisconnect(localClientNum);
}

/*
==============
CG_WeaponSounds_UpdateTriggerDisconnect
==============
*/
void CG_WeaponSounds_UpdateTriggerDisconnect(const LocalClientNum_t localClientNum)
{
  __int64 v4; 
  cg_t *v5; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v7; 
  __int64 p_weapFlags; 
  char v11; 
  int WeaponHand; 
  __int64 v13; 
  __int64 v14; 
  int *lastTriggerTime; 
  weapFireType_t WeaponFireType; 
  __int64 v17; 
  WeaponSFXPackage *SfxPackage; 
  unsigned int v19; 
  int v20; 
  bool *waitForTriggerRelease; 
  int *v23; 
  int *p_weaponFireTime; 
  int v26; 
  bool v27; 
  bool IsGamepadEnabled; 
  __int64 v30; 
  __int64 v31; 
  kbutton_t *v32; 
  __int64 v33; 
  int v34; 
  bool v35; 
  bool v36; 
  GamepadPhysicalAxis v37; 
  WeaponSFXPackageSounds *sounds; 
  const char *name; 
  __int64 v40; 
  const char *v41; 
  const SndAliasList *Alias; 
  __int64 v43; 
  int v49; 
  __int64 v50; 
  __int64 v51; 
  WeaponSFXPackage *v52; 
  cg_t *v53; 
  ClientTriggerDisconnectSoundState *p_triggerDisconnectState; 
  const Weapon *ViewmodelWeapon; 
  char v58; 
  int *v59; 
  bool *v60; 
  __int64 v61; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 71, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v4 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v51) = cg_t::ms_allocatedCount;
    LODWORD(v50) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v50, v51) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v4] )
  {
    LODWORD(v51) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v51) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v51) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v51) )
      __debugbreak();
  }
  v5 = cg_t::ms_cgArray[v4];
  v53 = v5;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 73, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &v5->predictedPlayerState;
  if ( v5->inKillCam || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v5->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    return;
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v7 = CgWeaponMap::ms_instance[v4];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 85, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  _R13 = &v5->triggerDisconnectState;
  p_triggerDisconnectState = &v5->triggerDisconnectState;
  ViewmodelWeapon = BG_GetViewmodelWeapon(v7, &v5->predictedPlayerState);
  _RSI = ViewmodelWeapon;
  if ( v5 == (cg_t *)-8i64 )
  {
    p_weapFlags = 1832i64;
  }
  else
  {
    p_weapFlags = (__int64)&v5->predictedPlayerState.weapCommon.weapFlags;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x22u) )
      goto LABEL_26;
  }
  if ( p_predictedPlayerState && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x1Bu)) )
  {
    v11 = 1;
    goto LABEL_27;
  }
LABEL_26:
  v11 = 0;
LABEL_27:
  v58 = v11;
  if ( memcmp_0(_R13, ViewmodelWeapon, 0x3Cui64) || _R13->lastAltMode != v11 )
  {
    WeaponHand = BG_PlayerLastWeaponHand(v7, p_predictedPlayerState);
    v13 = WeaponHand;
    if ( WeaponHand >= 0 )
    {
      v14 = 0i64;
      lastTriggerTime = _R13->lastTriggerTime;
      do
      {
        _R13->waitForTriggerRelease[v14++] = 0;
        *lastTriggerTime++ = 0;
      }
      while ( v14 <= v13 );
    }
  }
  WeaponFireType = BG_GetWeaponFireType(ViewmodelWeapon, v11);
  v17 = WeaponFireType;
  if ( (unsigned int)WeaponFireType >= WEAPON_FIRETYPECOUNT )
  {
    LODWORD(v51) = 6;
    LODWORD(v50) = WeaponFireType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 106, ASSERT_TYPE_ASSERT, "(unsigned)( fireType ) < (unsigned)( WEAPON_FIRETYPECOUNT )", "fireType doesn't index WEAPON_FIRETYPECOUNT\n\t%i not in [0, %i)", v50, v51) )
      __debugbreak();
  }
  SfxPackage = BG_GetSfxPackage(ViewmodelWeapon, v11);
  v52 = SfxPackage;
  if ( SfxPackage )
  {
    if ( SfxPackage->sounds->triggerDisconnectSound.name )
    {
      if ( SfxPackage->triggerDisconnectSoundData.enabledForFireType[v17] )
      {
        v19 = 0;
        v20 = BG_PlayerLastWeaponHand(v7, p_predictedPlayerState);
        if ( v20 >= 0 )
        {
          __asm
          {
            vmovaps [rsp+0C8h+var_68], xmm7
            vmovss  xmm7, cs:__real@3f800000
          }
          waitForTriggerRelease = _R13->waitForTriggerRelease;
          v61 = v20 + 1i64;
          v23 = _R13->lastTriggerTime;
          v60 = _R13->waitForTriggerRelease;
          _R13 = v52;
          v59 = v23;
          p_weaponFireTime = &p_predictedPlayerState->weapState[0].weaponFireTime;
          __asm { vmovaps [rsp+0C8h+var_58], xmm6 }
          while ( 1 )
          {
            if ( v19 >= 2 )
            {
              LODWORD(v51) = 2;
              LODWORD(v50) = v19;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 117, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v50, v51) )
                __debugbreak();
            }
            v26 = p_weaponFireTime[6];
            if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            if ( BG_Skydive_IsSkydiving(p_predictedPlayerState) )
            {
              v27 = 0;
            }
            else
            {
              v27 = 0;
              if ( BG_Ladder_IsDualWieldingAllowed(p_predictedPlayerState) )
                v27 = p_predictedPlayerState->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
            }
            if ( !*waitForTriggerRelease )
            {
              if ( v26 == 16 && *p_weaponFireTime > *v59 )
              {
                *waitForTriggerRelease = 1;
                *v59 = *p_weaponFireTime;
              }
              goto LABEL_99;
            }
            __asm { vmovss  xmm6, dword ptr [r13+0A0h] }
            if ( (unsigned int)v4 >= 2 )
            {
              LODWORD(v51) = 2;
              LODWORD(v50) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 13, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v50, v51) )
                __debugbreak();
            }
            if ( v19 >= 2 )
            {
              LODWORD(v51) = 2;
              LODWORD(v50) = v19;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 14, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v50, v51) )
                __debugbreak();
            }
            IsGamepadEnabled = CL_Input_IsGamepadEnabled((LocalClientNum_t)v4);
            if ( !v27 || IsGamepadEnabled )
            {
              v30 = 31i64;
              v31 = 19i64;
            }
            else
            {
              v30 = 19i64;
              v31 = 31i64;
            }
            __asm { vxorps  xmm0, xmm0, xmm0 }
            if ( !v19 )
              v30 = v31;
            v32 = &g_playersKb[v4][v30];
            v33 = 0i64;
            while ( 1 )
            {
              v34 = v32->down[v33];
              if ( !v34 )
                goto LABEL_73;
              if ( (_BYTE)v34 == 19 )
                break;
              if ( (_BYTE)v34 == 18 )
              {
                v37 = GPAD_PHYSAXIS_LTRIGGER;
                goto LABEL_77;
              }
              __asm { vmovaps xmm0, xmm7 }
LABEL_73:
              v35 = (unsigned __int64)++v33 < 2;
              v36 = v33 == 2;
              if ( v33 >= 2 )
                goto LABEL_78;
            }
            v37 = GPAD_PHYSAXIS_RTRIGGER;
LABEL_77:
            *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v4, v37);
LABEL_78:
            __asm { vcomiss xmm0, xmm6 }
            if ( v35 || v36 || (unsigned int)(v26 - 7) <= 5 || v26 == 50 )
            {
              sounds = v52->sounds;
              name = sounds->triggerDisconnectSound.name;
              if ( v27 )
              {
                v40 = 728i64;
                if ( v19 != 1 )
                  v40 = 736i64;
                v41 = *(const char **)((char *)&sounds->name + v40);
                if ( v41 )
                  name = v41;
              }
              Alias = SND_TryFindAlias(name);
              v43 = v53->localClientNum;
              if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
              {
                LODWORD(v51) = v53->localClientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v51) )
                  __debugbreak();
              }
              if ( (unsigned int)v43 >= CgSoundSystem::ms_allocatedCount )
              {
                LODWORD(v51) = CgSoundSystem::ms_allocatedCount;
                LODWORD(v50) = v43;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v50, v51) )
                  __debugbreak();
              }
              if ( !CgSoundSystem::ms_soundSystemArray[v43] )
              {
                LODWORD(v51) = v43;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v51) )
                  __debugbreak();
              }
              CgSoundSystem::PlayClientSoundAlias(CgSoundSystem::ms_soundSystemArray[v43], Alias);
              waitForTriggerRelease = v60;
              *v60 = 0;
            }
LABEL_99:
            ++v59;
            ++waitForTriggerRelease;
            ++v19;
            v60 = waitForTriggerRelease;
            p_weaponFireTime += 20;
            if ( !--v61 )
            {
              _R13 = p_triggerDisconnectState;
              _RSI = ViewmodelWeapon;
              v11 = v58;
              __asm
              {
                vmovaps xmm7, [rsp+0C8h+var_68]
                vmovaps xmm6, [rsp+0C8h+var_58]
              }
              break;
            }
          }
        }
      }
    }
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [r13+0], ymm0
    vmovups xmm1, xmmword ptr [rsi+20h]
    vmovups xmmword ptr [r13+20h], xmm1
    vmovsd  xmm0, qword ptr [rsi+30h]
    vmovsd  qword ptr [r13+30h], xmm0
  }
  v49 = *(_DWORD *)&_RSI->weaponCamo;
  _R13->lastAltMode = v11;
  *(_DWORD *)&_R13->lastWeapon.weaponCamo = v49;
}

