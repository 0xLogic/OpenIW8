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
  __int64 v1; 
  cg_t *v2; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v4; 
  __m256i *p_triggerDisconnectState; 
  const Weapon *v6; 
  __int64 p_weapFlags; 
  char v8; 
  int WeaponHand; 
  __int64 v10; 
  __int64 v11; 
  __m256i *v12; 
  weapFireType_t WeaponFireType; 
  __int64 v14; 
  WeaponSFXPackage *SfxPackage; 
  unsigned int v16; 
  int v17; 
  char *v18; 
  int *p_weaponFireTime; 
  int v20; 
  bool v21; 
  float analogTriggerValue; 
  bool IsGamepadEnabled; 
  __int64 v24; 
  __int64 v25; 
  double v26; 
  kbutton_t *v27; 
  __int64 v28; 
  int v29; 
  GamepadPhysicalAxis v30; 
  WeaponSFXPackageSounds *sounds; 
  const char *name; 
  __int64 v33; 
  const char *v34; 
  const SndAliasList *Alias; 
  __int64 v36; 
  int v37; 
  __int64 v38; 
  __int64 v39; 
  WeaponSFXPackage *v40; 
  cg_t *v41; 
  ClientTriggerDisconnectSoundState *v42; 
  const Weapon *ViewmodelWeapon; 
  char v44; 
  __m256i *v45; 
  char *v46; 
  __int64 v47; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 71, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v1 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v39) = cg_t::ms_allocatedCount;
    LODWORD(v38) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v38, v39) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v39) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v39) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v39) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v39) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[v1];
  v41 = v2;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 73, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &v2->predictedPlayerState;
  if ( v2->inKillCam || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v2->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    return;
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v1];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 85, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  p_triggerDisconnectState = (__m256i *)&v2->triggerDisconnectState;
  v42 = &v2->triggerDisconnectState;
  ViewmodelWeapon = BG_GetViewmodelWeapon(v4, &v2->predictedPlayerState);
  v6 = ViewmodelWeapon;
  if ( v2 == (cg_t *)-8i64 )
  {
    p_weapFlags = 1832i64;
  }
  else
  {
    p_weapFlags = (__int64)&v2->predictedPlayerState.weapCommon.weapFlags;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x22u) )
      goto LABEL_26;
  }
  if ( p_predictedPlayerState && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x1Bu)) )
  {
    v8 = 1;
    goto LABEL_27;
  }
LABEL_26:
  v8 = 0;
LABEL_27:
  v44 = v8;
  if ( memcmp_0(p_triggerDisconnectState, ViewmodelWeapon, 0x3Cui64) || p_triggerDisconnectState[1].m256i_i8[28] != v8 )
  {
    WeaponHand = BG_PlayerLastWeaponHand(v4, p_predictedPlayerState);
    v10 = WeaponHand;
    if ( WeaponHand >= 0 )
    {
      v11 = 0i64;
      v12 = p_triggerDisconnectState + 2;
      do
      {
        p_triggerDisconnectState[1].m256i_i8[v11 + 29] = 0;
        ++v11;
        v12->m256i_i32[0] = 0;
        v12 = (__m256i *)((char *)v12 + 4);
      }
      while ( v11 <= v10 );
    }
  }
  WeaponFireType = BG_GetWeaponFireType(ViewmodelWeapon, v8);
  v14 = WeaponFireType;
  if ( (unsigned int)WeaponFireType >= WEAPON_FIRETYPECOUNT )
  {
    LODWORD(v39) = 6;
    LODWORD(v38) = WeaponFireType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 106, ASSERT_TYPE_ASSERT, "(unsigned)( fireType ) < (unsigned)( WEAPON_FIRETYPECOUNT )", "fireType doesn't index WEAPON_FIRETYPECOUNT\n\t%i not in [0, %i)", v38, v39) )
      __debugbreak();
  }
  SfxPackage = BG_GetSfxPackage(ViewmodelWeapon, v8);
  v40 = SfxPackage;
  if ( SfxPackage )
  {
    if ( SfxPackage->sounds->triggerDisconnectSound.name )
    {
      if ( SfxPackage->triggerDisconnectSoundData.enabledForFireType[v14] )
      {
        v16 = 0;
        v17 = BG_PlayerLastWeaponHand(v4, p_predictedPlayerState);
        if ( v17 >= 0 )
        {
          v18 = &p_triggerDisconnectState[1].m256i_i8[29];
          v47 = v17 + 1i64;
          v46 = &p_triggerDisconnectState[1].m256i_i8[29];
          v45 = p_triggerDisconnectState + 2;
          p_weaponFireTime = &p_predictedPlayerState->weapState[0].weaponFireTime;
          while ( 1 )
          {
            if ( v16 >= 2 )
            {
              LODWORD(v39) = 2;
              LODWORD(v38) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 117, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v38, v39) )
                __debugbreak();
            }
            v20 = p_weaponFireTime[6];
            if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            if ( BG_Skydive_IsSkydiving(p_predictedPlayerState) )
            {
              v21 = 0;
            }
            else
            {
              v21 = 0;
              if ( BG_Ladder_IsDualWieldingAllowed(p_predictedPlayerState) )
                v21 = p_predictedPlayerState->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
            }
            if ( !*v18 )
            {
              if ( v20 == 16 && *p_weaponFireTime > v45->m256i_i32[0] )
              {
                *v18 = 1;
                v45->m256i_i32[0] = *p_weaponFireTime;
              }
              goto LABEL_99;
            }
            analogTriggerValue = v40->triggerDisconnectSoundData.analogTriggerValue;
            if ( (unsigned int)v1 >= 2 )
            {
              LODWORD(v39) = 2;
              LODWORD(v38) = v1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 13, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v38, v39) )
                __debugbreak();
            }
            if ( v16 >= 2 )
            {
              LODWORD(v39) = 2;
              LODWORD(v38) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_sounds.cpp", 14, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v38, v39) )
                __debugbreak();
            }
            IsGamepadEnabled = CL_Input_IsGamepadEnabled((LocalClientNum_t)v1);
            if ( !v21 || IsGamepadEnabled )
            {
              v24 = 31i64;
              v25 = 19i64;
            }
            else
            {
              v24 = 19i64;
              v25 = 31i64;
            }
            LODWORD(v26) = 0;
            if ( !v16 )
              v24 = v25;
            v27 = &g_playersKb[v1][v24];
            v28 = 0i64;
            while ( 1 )
            {
              v29 = v27->down[v28];
              if ( !v29 )
                goto LABEL_73;
              if ( (_BYTE)v29 == 19 )
                break;
              if ( (_BYTE)v29 == 18 )
              {
                v30 = GPAD_PHYSAXIS_LTRIGGER;
                goto LABEL_77;
              }
              *(float *)&v26 = FLOAT_1_0;
LABEL_73:
              if ( ++v28 >= 2 )
                goto LABEL_78;
            }
            v30 = GPAD_PHYSAXIS_RTRIGGER;
LABEL_77:
            v26 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v1, v30);
LABEL_78:
            if ( *(float *)&v26 <= analogTriggerValue || (unsigned int)(v20 - 7) <= 5 || v20 == 50 )
            {
              sounds = v40->sounds;
              name = sounds->triggerDisconnectSound.name;
              if ( v21 )
              {
                v33 = 728i64;
                if ( v16 != 1 )
                  v33 = 736i64;
                v34 = *(const char **)((char *)&sounds->name + v33);
                if ( v34 )
                  name = v34;
              }
              Alias = SND_TryFindAlias(name);
              v36 = v41->localClientNum;
              if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
              {
                LODWORD(v39) = v41->localClientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v39) )
                  __debugbreak();
              }
              if ( (unsigned int)v36 >= CgSoundSystem::ms_allocatedCount )
              {
                LODWORD(v39) = CgSoundSystem::ms_allocatedCount;
                LODWORD(v38) = v36;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v38, v39) )
                  __debugbreak();
              }
              if ( !CgSoundSystem::ms_soundSystemArray[v36] )
              {
                LODWORD(v39) = v36;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v39) )
                  __debugbreak();
              }
              CgSoundSystem::PlayClientSoundAlias(CgSoundSystem::ms_soundSystemArray[v36], Alias);
              v18 = v46;
              *v46 = 0;
            }
LABEL_99:
            v45 = (__m256i *)((char *)v45 + 4);
            ++v18;
            ++v16;
            v46 = v18;
            p_weaponFireTime += 20;
            if ( !--v47 )
            {
              p_triggerDisconnectState = (__m256i *)v42;
              v6 = ViewmodelWeapon;
              v8 = v44;
              break;
            }
          }
        }
      }
    }
  }
  *p_triggerDisconnectState = *(__m256i *)&v6->weaponIdx;
  *(_OWORD *)p_triggerDisconnectState[1].m256i_i8 = *(_OWORD *)&v6->attachmentVariationIndices[5];
  p_triggerDisconnectState[1].m256i_i64[2] = *(__int64 *)&v6->attachmentVariationIndices[21];
  v37 = *(_DWORD *)&v6->weaponCamo;
  p_triggerDisconnectState[1].m256i_i8[28] = v8;
  p_triggerDisconnectState[1].m256i_i32[6] = v37;
}

