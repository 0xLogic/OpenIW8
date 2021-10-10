/*
==============
CG_SND_PlayerBreathsGasp
==============
*/

void __fastcall CG_SND_PlayerBreathsGasp(LocalClientNum_t localClientNum)
{
  ?CG_SND_PlayerBreathsGasp@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SND_PlayerBreathsSetLand
==============
*/

void __fastcall CG_SND_PlayerBreathsSetLand(LocalClientNum_t localClientNum, BreathSoundLandingType landType)
{
  ?CG_SND_PlayerBreathsSetLand@@YAXW4LocalClientNum_t@@W4BreathSoundLandingType@@@Z(localClientNum, landType);
}

/*
==============
CG_SND_PlayerBreathsEnable
==============
*/

void __fastcall CG_SND_PlayerBreathsEnable(const LocalClientNum_t localClientNum, bool enabled)
{
  ?CG_SND_PlayerBreathsEnable@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, enabled);
}

/*
==============
CG_SND_InitPlayerBreathSystem
==============
*/

void CG_SND_InitPlayerBreathSystem(void)
{
  ?CG_SND_InitPlayerBreathSystem@@YAXXZ();
}

/*
==============
CG_SND_PlayerBreathsSetMantle
==============
*/

void __fastcall CG_SND_PlayerBreathsSetMantle(LocalClientNum_t localClientNum)
{
  ?CG_SND_PlayerBreathsSetMantle@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SND_PlayerBreathsSetJump
==============
*/

void __fastcall CG_SND_PlayerBreathsSetJump(LocalClientNum_t localClientNum)
{
  ?CG_SND_PlayerBreathsSetJump@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawPlayerBreathState
==============
*/

void __fastcall CG_DrawPlayerBreathState(const LocalClientNum_t localClientNum)
{
  ?CG_DrawPlayerBreathState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SND_PlayerBreathsSetDoubleJump
==============
*/

void __fastcall CG_SND_PlayerBreathsSetDoubleJump(LocalClientNum_t localClientNum)
{
  ?CG_SND_PlayerBreathsSetDoubleJump@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SND_PlayerBreathsSetShooting
==============
*/

void __fastcall CG_SND_PlayerBreathsSetShooting(LocalClientNum_t localClientNum)
{
  ?CG_SND_PlayerBreathsSetShooting@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SND_PlayerBreathsHold
==============
*/

void __fastcall CG_SND_PlayerBreathsHold(LocalClientNum_t localClientNum)
{
  ?CG_SND_PlayerBreathsHold@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SND_PlayerBreathsSetMelee
==============
*/

void __fastcall CG_SND_PlayerBreathsSetMelee(LocalClientNum_t localClientNum)
{
  ?CG_SND_PlayerBreathsSetMelee@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SND_PlayerBreathsSetOffhand
==============
*/

void __fastcall CG_SND_PlayerBreathsSetOffhand(LocalClientNum_t localClientNum)
{
  ?CG_SND_PlayerBreathsSetOffhand@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SND_UpdatePlayerBreathSystem
==============
*/

void __fastcall CG_SND_UpdatePlayerBreathSystem(LocalClientNum_t localClientNum)
{
  ?CG_SND_UpdatePlayerBreathSystem@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SND_PlayerBreathsSetDamage
==============
*/

void __fastcall CG_SND_PlayerBreathsSetDamage(LocalClientNum_t localClientNum)
{
  ?CG_SND_PlayerBreathsSetDamage@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SND_PlayerBreathsSetDialogueAlias
==============
*/

void __fastcall CG_SND_PlayerBreathsSetDialogueAlias(LocalClientNum_t localClientNum, unsigned int playbackId)
{
  ?CG_SND_PlayerBreathsSetDialogueAlias@@YAXW4LocalClientNum_t@@I@Z(localClientNum, playbackId);
}

/*
==============
CG_DrawPlayerBreathState
==============
*/
void CG_DrawPlayerBreathState(const LocalClientNum_t localClientNum)
{
  bool v2; 
  ScreenPlacement *v3; 
  float v4; 
  float v5; 
  cg_t *LocalClientGlobals; 
  GfxFont *font; 
  int *v8; 
  const char *s; 
  const char *v10; 
  int v11; 
  GfxFont *smallDevFont; 
  float v13; 
  const char *v14; 
  int v15; 
  GfxFont *v16; 
  float v17; 
  const char *v18; 
  int v19; 
  GfxFont *v20; 
  float v21; 
  const char *v22; 
  int v23; 
  GfxFont *v24; 
  float v25; 
  const char *v26; 
  int v27; 
  GfxFont *v28; 
  float v29; 
  const char *v30; 
  int v31; 
  int v32; 
  float v33; 
  int v34; 
  unsigned int *i; 
  GfxFont *v36; 
  const char *v37; 

  if ( activeScreenPlacementMode == SCRMODE_FULL )
  {
LABEL_7:
    v3 = &scrPlaceFull;
    goto LABEL_8;
  }
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v2 )
      __debugbreak();
    goto LABEL_7;
  }
  v3 = &scrPlaceViewDisplay[localClientNum];
LABEL_8:
  v4 = v3->virtualViewableMin.v[0];
  v5 = v3->virtualViewableMin.v[1];
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  font = cls.smallDevFont;
  v8 = (int *)LocalClientGlobals;
  if ( LocalClientGlobals->breathSysDisabled )
  {
    s = j_va("Breath System disabled by script.");
    CG_DrawDevString(v3, v4, v5, 0.55000001, 0.55000001, s, &colorGreen, 5, font);
  }
  else
  {
    v10 = j_va("Main State: %s", s_playerBreathMainStateName[LocalClientGlobals->breathMainState]);
    v11 = CG_DrawDevString(v3, v4, v5, 0.55000001, 0.55000001, v10, &colorGreen, 5, font);
    smallDevFont = cls.smallDevFont;
    v13 = v5 + (float)v11;
    v14 = j_va("Breath Player State: %s", s_playerBreathPlayerStateName[v8[92370]]);
    v15 = CG_DrawDevString(v3, v4, v13, 0.55000001, 0.55000001, v14, &colorGreen, 5, smallDevFont);
    v16 = cls.smallDevFont;
    v17 = v13 + (float)v15;
    v18 = j_va("Breath Sound State: %s", s_playerBreathSoundStateName[v8[92371]]);
    v19 = CG_DrawDevString(v3, v4, v17, 0.55000001, 0.55000001, v18, &colorGreen, 5, v16);
    v20 = cls.smallDevFont;
    v21 = v17 + (float)v19;
    v22 = j_va("Pain State: %s", s_playerBreathPainStateName[v8[92372]]);
    v23 = CG_DrawDevString(v3, v4, v21, 0.55000001, 0.55000001, v22, &colorGreen, 5, v20);
    v24 = cls.smallDevFont;
    v25 = v21 + (float)v23;
    v26 = j_va("Landing Type: %s", s_playerBreathLandingTypeName[v8[92379]]);
    v27 = CG_DrawDevString(v3, v4, v25, 0.55000001, 0.55000001, v26, &colorGreen, 5, v24);
    v28 = cls.smallDevFont;
    v29 = v25 + (float)v27;
    v30 = j_va("Hold State: %s", s_playerBreathHoldStateName[v8[92373]]);
    v31 = CG_DrawDevString(v3, v4, v29, 0.55000001, 0.55000001, v30, &colorGreen, 5, v28);
    v32 = v8[92376];
    v33 = v29 + (float)v31;
    if ( v32 )
    {
      v34 = 0;
      for ( i = &g_snd.voices[0].playbackId; *i != v32; i += 492 )
      {
        if ( (unsigned int)++v34 >= 0x63 )
          return;
      }
      v36 = cls.smallDevFont;
      v37 = j_va("Playing: %s", **(const char ***)&g_snd.chaninfoUnweightedPriority[492 * v34 - 48680]);
      CG_DrawDevString(v3, v4, v33, 0.55000001, 0.55000001, v37, &colorGreen, 5, v36);
    }
  }
}

/*
==============
CG_SND_GetMainDesiredBreathState
==============
*/
__int64 CG_SND_GetMainDesiredBreathState(cg_t *cgameGlob)
{
  __int64 result; 
  unsigned __int32 v3; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
  {
    if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_player_breaths.cpp", 429, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( cgameGlob->predictedPlayerState.stats[0] <= 1 )
      return 3i64;
  }
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_player_breaths.cpp", 417, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( cgameGlob->breathDamageOccurred )
    return 2i64;
  if ( CG_SND_ShouldAutoHoldBreath(cgameGlob) && !cgameGlob->breathJumped && !cgameGlob->breathDoubleJumped && !cgameGlob->breathMantled )
    return 6i64;
  if ( cgameGlob->breathShouldGasp )
  {
    cgameGlob->breathShouldGasp = 0;
    return 8i64;
  }
  if ( cgameGlob->breathHeld )
  {
    cgameGlob->breathHeld = 0;
    return 7i64;
  }
  if ( CG_IsAutoSimFiring(cgameGlob) || cgameGlob->breathShooting )
  {
    result = 10i64;
    cgameGlob->breathShooting = 0;
  }
  else
  {
    if ( cgameGlob->breathMelee )
    {
      cgameGlob->breathMelee = 0;
      return 12i64;
    }
    if ( cgameGlob->breathOffhand )
    {
      cgameGlob->breathOffhand = 0;
      return 14i64;
    }
    if ( cgameGlob->breathJumped )
    {
      v3 = cgameGlob->breathPlayerState - 2;
      cgameGlob->breathJumped = 0;
      if ( v3 <= 2 && cgameGlob->breathLastJumpTime + Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_playerbreath_jump_cooldown_time, "cg_playerbreath_jump_cooldown_time") < cgameGlob->time )
      {
        cgameGlob->breathPlayLandSound = 1;
        return 4i64;
      }
      cgameGlob->breathPlayLandSound = 0;
      return 0i64;
    }
    if ( cgameGlob->breathDoubleJumped )
    {
      cgameGlob->breathDoubleJumped = 0;
      return 16i64;
    }
    else if ( cgameGlob->breathLanded )
    {
      if ( cgameGlob->breathPlayLandSound )
      {
        cgameGlob->breathLastJumpTime = cgameGlob->time;
        result = 5i64;
        cgameGlob->breathPlayLandSound = 0;
      }
      else
      {
        cgameGlob->breathLanded = BREATH_LAND_NONE;
        return 0i64;
      }
    }
    else
    {
      if ( !cgameGlob->breathMantled )
        return 0i64;
      cgameGlob->breathMantled = 0;
      return 9i64;
    }
  }
  return result;
}

/*
==============
CG_SND_InitPlayerBreathSystem
==============
*/
void CG_SND_InitPlayerBreathSystem(void)
{
  int v0; 
  const char *v1; 
  int v2; 
  char v3; 
  char v4; 
  const char *v5; 
  int v6; 
  char v7; 
  char v8; 
  const char *v9; 
  int v10; 
  char v11; 
  char v12; 
  const char *v13; 
  int v14; 
  char v15; 
  char v16; 
  const char *v17; 
  int v18; 
  char v19; 
  char v20; 
  const char *v21; 
  int v22; 
  char v23; 
  char v24; 
  const char *v25; 
  int v26; 
  char v27; 
  char v28; 
  const char *v29; 
  int v30; 
  char v31; 
  char v32; 
  int v33; 
  char v34; 
  const char *v35; 
  char v36; 
  const char *v37; 
  char v38; 
  int v39; 
  char v40; 
  const char *v41; 
  int v42; 
  char v43; 
  char v44; 
  const char *v45; 
  char v46; 
  int v47; 
  char v48; 
  const char *v49; 
  char v50; 
  int v51; 
  char v52; 
  const char *v53; 
  char v54; 
  int v55; 
  char v56; 
  const char *v57; 
  char v58; 
  int v59; 
  char v60; 
  const char *v61; 
  char v62; 
  int v63; 
  char v64; 
  const char *v65; 
  char v66; 
  int v67; 
  char v68; 
  const char *v69; 
  char v70; 
  int v71; 
  char v72; 
  const char *v73; 
  char v74; 
  int v75; 
  char v76; 
  const char *v77; 
  char v78; 
  int v79; 
  char v80; 
  const char *v81; 
  char v82; 
  int v83; 
  char v84; 
  const char *v85; 
  char v86; 
  int v87; 
  char v88; 
  const char *v89; 
  char v90; 
  int v91; 
  char v92; 
  const char *v93; 
  char v94; 
  char v95; 
  unsigned int v96; 
  cg_t **v97; 
  __int64 v98; 
  __int64 v99; 
  unsigned int v100; 

  v0 = 5381;
  v1 = "IDLE";
  v2 = 5381;
  v3 = 73;
  do
  {
    ++v1;
    v4 = v3 | 0x20;
    if ( (unsigned int)(v3 - 65) >= 0x1A )
      v4 = v3;
    v2 = 65599 * v2 + v4;
    v3 = *v1;
  }
  while ( *v1 );
  v5 = "WALK";
  v6 = 5381;
  if ( !v2 )
    v2 = 1;
  v7 = 87;
  s_breathSoundStateHashLookup[0] = v2;
  do
  {
    ++v5;
    v8 = v7 | 0x20;
    if ( (unsigned int)(v7 - 65) >= 0x1A )
      v8 = v7;
    v6 = 65599 * v6 + v8;
    v7 = *v5;
  }
  while ( *v5 );
  v9 = "RUN";
  v10 = 5381;
  v11 = 82;
  if ( !v6 )
    v6 = 1;
  s_breathSoundStateHashLookup[1] = v6;
  do
  {
    ++v9;
    v12 = v11 | 0x20;
    if ( (unsigned int)(v11 - 65) >= 0x1A )
      v12 = v11;
    v10 = 65599 * v10 + v12;
    v11 = *v9;
  }
  while ( *v9 );
  v13 = "RUNRECOVERY";
  v14 = 5381;
  v15 = 82;
  if ( !v10 )
    v10 = 1;
  s_breathSoundStateHashLookup[2] = v10;
  do
  {
    ++v13;
    v16 = v15 | 0x20;
    if ( (unsigned int)(v15 - 65) >= 0x1A )
      v16 = v15;
    v14 = 65599 * v14 + v16;
    v15 = *v13;
  }
  while ( *v13 );
  v17 = "SPRINT";
  v18 = 5381;
  v19 = 83;
  if ( !v14 )
    v14 = 1;
  s_breathSoundStateHashLookup[3] = v14;
  do
  {
    ++v17;
    v20 = v19 | 0x20;
    if ( (unsigned int)(v19 - 65) >= 0x1A )
      v20 = v19;
    v18 = 65599 * v18 + v20;
    v19 = *v17;
  }
  while ( *v17 );
  v21 = "SPRINTRECOVERY";
  v22 = 5381;
  v23 = 83;
  if ( !v18 )
    v18 = 1;
  v100 = v18;
  s_breathSoundStateHashLookup[4] = v18;
  do
  {
    ++v21;
    v24 = v23 | 0x20;
    if ( (unsigned int)(v23 - 65) >= 0x1A )
      v24 = v23;
    v22 = 65599 * v22 + v24;
    v23 = *v21;
  }
  while ( *v21 );
  v25 = "SUPERSPRINT";
  v26 = 5381;
  v27 = 83;
  if ( !v22 )
    v22 = 1;
  s_breathSoundStateHashLookup[5] = v22;
  do
  {
    ++v25;
    v28 = v27 | 0x20;
    if ( (unsigned int)(v27 - 65) >= 0x1A )
      v28 = v27;
    v26 = 65599 * v26 + v28;
    v27 = *v25;
  }
  while ( *v25 );
  v29 = "PAININITIAL";
  v30 = 5381;
  v31 = 80;
  if ( !v26 )
    v26 = 1;
  s_breathSoundStateHashLookup[6] = v26;
  do
  {
    ++v29;
    v32 = v31 | 0x20;
    if ( (unsigned int)(v31 - 65) >= 0x1A )
      v32 = v31;
    v30 = 65599 * v30 + v32;
    v31 = *v29;
  }
  while ( *v29 );
  v33 = 5381;
  v34 = 80;
  if ( !v30 )
    v30 = 1;
  s_breathSoundStateHashLookup[7] = v30;
  v35 = "PAINONGOING";
  do
  {
    ++v35;
    v36 = v34 | 0x20;
    if ( (unsigned int)(v34 - 65) >= 0x1A )
      v36 = v34;
    v33 = 65599 * v33 + v36;
    v34 = *v35;
  }
  while ( *v35 );
  v37 = "PAINRECOVERY";
  v38 = 80;
  if ( !v33 )
    v33 = 1;
  v39 = 5381;
  s_breathSoundStateHashLookup[8] = v33;
  do
  {
    ++v37;
    v40 = v38 | 0x20;
    if ( (unsigned int)(v38 - 65) >= 0x1A )
      v40 = v38;
    v39 = 65599 * v39 + v40;
    v38 = *v37;
  }
  while ( *v37 );
  v41 = "DIALOGPREFIX";
  v42 = 5381;
  if ( !v39 )
    v39 = 1;
  v43 = 68;
  s_breathSoundStateHashLookup[9] = v39;
  do
  {
    ++v41;
    v44 = v43 | 0x20;
    if ( (unsigned int)(v43 - 65) >= 0x1A )
      v44 = v43;
    v42 = 65599 * v42 + v44;
    v43 = *v41;
  }
  while ( *v41 );
  v45 = "JUMP";
  if ( !v42 )
    v42 = 1;
  v46 = 74;
  s_breathSoundStateHashLookup[10] = v42;
  v47 = 5381;
  do
  {
    ++v45;
    v48 = v46 | 0x20;
    if ( (unsigned int)(v46 - 65) >= 0x1A )
      v48 = v46;
    v47 = 65599 * v47 + v48;
    v46 = *v45;
  }
  while ( *v45 );
  v49 = "LANDHIGH";
  if ( !v47 )
    v47 = 1;
  v50 = 76;
  s_breathSoundStateHashLookup[11] = v47;
  v51 = 5381;
  do
  {
    ++v49;
    v52 = v50 | 0x20;
    if ( (unsigned int)(v50 - 65) >= 0x1A )
      v52 = v50;
    v51 = 65599 * v51 + v52;
    v50 = *v49;
  }
  while ( *v49 );
  v53 = "LANDLOW";
  if ( !v51 )
    v51 = 1;
  v54 = 76;
  s_breathSoundStateHashLookup[13] = v51;
  v55 = 5381;
  do
  {
    ++v53;
    v56 = v54 | 0x20;
    if ( (unsigned int)(v54 - 65) >= 0x1A )
      v56 = v54;
    v55 = 65599 * v55 + v56;
    v54 = *v53;
  }
  while ( *v53 );
  v57 = "MANTLE";
  if ( !v55 )
    v55 = 1;
  v58 = 77;
  s_breathSoundStateHashLookup[14] = v55;
  v59 = 5381;
  do
  {
    ++v57;
    v60 = v58 | 0x20;
    if ( (unsigned int)(v58 - 65) >= 0x1A )
      v60 = v58;
    v59 = 65599 * v59 + v60;
    v58 = *v57;
  }
  while ( *v57 );
  v61 = "SHOOTING_EFFORT";
  if ( !v59 )
    v59 = 1;
  v62 = 83;
  s_breathSoundStateHashLookup[15] = v59;
  v63 = 5381;
  do
  {
    ++v61;
    v64 = v62 | 0x20;
    if ( (unsigned int)(v62 - 65) >= 0x1A )
      v64 = v62;
    v63 = 65599 * v63 + v64;
    v62 = *v61;
  }
  while ( *v61 );
  v65 = "MELEE_EFFORT";
  if ( !v63 )
    v63 = 1;
  v66 = 77;
  s_breathSoundStateHashLookup[16] = v63;
  v67 = 5381;
  do
  {
    ++v65;
    v68 = v66 | 0x20;
    if ( (unsigned int)(v66 - 65) >= 0x1A )
      v68 = v66;
    v67 = 65599 * v67 + v68;
    v66 = *v65;
  }
  while ( *v65 );
  v69 = "OFFHAND_EFFORT";
  if ( !v67 )
    v67 = 1;
  v70 = 79;
  s_breathSoundStateHashLookup[17] = v67;
  v71 = 5381;
  do
  {
    ++v69;
    v72 = v70 | 0x20;
    if ( (unsigned int)(v70 - 65) >= 0x1A )
      v72 = v70;
    v71 = 65599 * v71 + v72;
    v70 = *v69;
  }
  while ( *v69 );
  v73 = "DOUBLEJUMP";
  if ( !v71 )
    v71 = 1;
  v74 = 68;
  s_breathSoundStateHashLookup[18] = v71;
  v75 = 5381;
  do
  {
    ++v73;
    v76 = v74 | 0x20;
    if ( (unsigned int)(v74 - 65) >= 0x1A )
      v76 = v74;
    v75 = 65599 * v75 + v76;
    v74 = *v73;
  }
  while ( *v73 );
  v77 = "HOLD";
  if ( !v75 )
    v75 = 1;
  v78 = 72;
  s_breathSoundStateHashLookup[12] = v75;
  v79 = 5381;
  do
  {
    ++v77;
    v80 = v78 | 0x20;
    if ( (unsigned int)(v78 - 65) >= 0x1A )
      v80 = v78;
    v79 = 65599 * v79 + v80;
    v78 = *v77;
  }
  while ( *v77 );
  v81 = "GASP";
  if ( !v79 )
    v79 = 1;
  v82 = 71;
  s_breathSoundStateHashLookup[19] = v79;
  v83 = 5381;
  do
  {
    ++v81;
    v84 = v82 | 0x20;
    if ( (unsigned int)(v82 - 65) >= 0x1A )
      v84 = v82;
    v83 = 65599 * v83 + v84;
    v82 = *v81;
  }
  while ( *v81 );
  v85 = "MANTLERECOVERY";
  if ( !v83 )
    v83 = 1;
  v86 = 77;
  s_breathSoundStateHashLookup[20] = v83;
  v87 = 5381;
  do
  {
    ++v85;
    v88 = v86 | 0x20;
    if ( (unsigned int)(v86 - 65) >= 0x1A )
      v88 = v86;
    v87 = 65599 * v87 + v88;
    v86 = *v85;
  }
  while ( *v85 );
  v89 = "ZEROG_IDLE";
  if ( !v87 )
    v87 = 1;
  v90 = 90;
  s_breathSoundStateHashLookup[21] = v87;
  v91 = 5381;
  do
  {
    ++v89;
    v92 = v90 | 0x20;
    if ( (unsigned int)(v90 - 65) >= 0x1A )
      v92 = v90;
    v91 = 65599 * v91 + v92;
    v90 = *v89;
  }
  while ( *v89 );
  v93 = "ZEROG_WALK";
  if ( !v91 )
    v91 = 1;
  v94 = 90;
  s_breathSoundStateHashLookup[22] = v91;
  do
  {
    ++v93;
    v95 = v94 | 0x20;
    if ( (unsigned int)(v94 - 65) >= 0x1A )
      v95 = v94;
    v0 = 65599 * v0 + v95;
    v94 = *v93;
  }
  while ( *v93 );
  s_painBreathSoundLookup[0] = v39;
  s_painBreathSoundLookup[1] = v33;
  if ( !v0 )
    v0 = 1;
  s_breathSoundLookup[0] = v2;
  v96 = 0;
  s_breathSoundStateHashLookup[23] = v0;
  s_breathSoundLookup[1] = v6;
  s_breathSoundLookup[2] = v14;
  s_breathSoundLookup[3] = v10;
  s_breathSoundLookup[4] = v22;
  s_breathSoundLookup[5] = v100;
  s_breathSoundLookup[6] = v26;
  s_breathZeroGSoundLookup[0] = v91;
  s_breathZeroGSoundLookup[1] = v0;
  s_breathZeroGSoundLookup[2] = v0;
  s_breathZeroGSoundLookup[3] = v0;
  s_breathZeroGSoundLookup[4] = v0;
  s_breathZeroGSoundLookup[5] = v0;
  s_breathZeroGSoundLookup[6] = v0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v97 = cg_t::ms_cgArray;
    do
    {
      if ( v96 >= cg_t::ms_allocatedCount )
      {
        LODWORD(v99) = cg_t::ms_allocatedCount;
        LODWORD(v98) = v96;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v98, v99) )
          __debugbreak();
      }
      if ( !*v97 )
      {
        LODWORD(v99) = v96;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v99) )
          __debugbreak();
      }
      if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
      {
        LODWORD(v99) = v96;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v99) )
          __debugbreak();
      }
      CG_SND_PlayerBreathsReset(*v97);
      ++v96;
      ++v97;
    }
    while ( (int)v96 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
CG_SND_PlayBreathSound
==============
*/
void CG_SND_PlayBreathSound(cg_t *cgameGlob, PlayerBreathStateDef *breath)
{
  unsigned int breathSoundId; 
  const SndAliasList *Alias; 
  const char *exhaleAlias; 
  int breathsLeft; 
  int v8; 

  if ( breath )
  {
    breathSoundId = cgameGlob->breathSoundId;
    if ( !breathSoundId || !SND_IsPlaybackIdPlaying(breathSoundId) )
    {
      Alias = NULL;
      cgameGlob->breathSoundId = 0;
      if ( cgameGlob->breathSoundOut )
        exhaleAlias = breath->exhaleAlias;
      else
        exhaleAlias = breath->inhaleAlias;
      if ( exhaleAlias )
        Alias = SND_FindAlias(exhaleAlias);
      cgameGlob->breathSoundOut = !cgameGlob->breathSoundOut;
      breathsLeft = cgameGlob->breathsLeft;
      v8 = breathsLeft - 1;
      if ( breathsLeft <= 0 )
        v8 = 0;
      cgameGlob->breathsLeft = v8;
      if ( Alias )
        cgameGlob->breathSoundId = SND_PlayScaledSoundAlias(Alias, (const LocalClientNum_t)cgameGlob->localClientNum, cgameGlob->predictedPlayerState.clientNum, 1.0, 1.0, &cgameGlob->predictedPlayerState.origin, 0, SASYS_CGAME);
      else
        *(_QWORD *)&cgameGlob->breathsLeft = 0i64;
    }
  }
}

/*
==============
CG_SND_PlayInitialPainSound
==============
*/
char CG_SND_PlayInitialPainSound(cg_t *cgameGlob)
{
  PlayerBreathStateDef *PlayerBreathState; 
  int clientNum; 
  LocalClientNum_t localClientNum; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_player_breaths.cpp", 694, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  SND_StopSoundAliasById(cgameGlob->breathSoundId);
  PlayerBreathState = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[7]);
  if ( PlayerBreathState && PlayerBreathState->inhaleAlias )
  {
    clientNum = cgameGlob->predictedPlayerState.clientNum;
    localClientNum = cgameGlob->localClientNum;
    cgameGlob->breathSoundOut = 0;
    *(_WORD *)&cgameGlob->breathPlayedSoundAfterPain = 0;
    cgameGlob->breathPlayingInitialPainSound = 1;
    cgameGlob->breathSoundId = SND_PlayScaledSoundAlias(PlayerBreathState->inhaleAlias, localClientNum, clientNum, 1.0, 1.0, &cgameGlob->predictedPlayerState.origin, 0, SASYS_CGAME);
    return 1;
  }
  else
  {
    cgameGlob->breathSoundId = 0;
    return 0;
  }
}

/*
==============
CG_SND_PlayerBreathsEnable
==============
*/
void CG_SND_PlayerBreathsEnable(const LocalClientNum_t localClientNum, bool enabled)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_SND_PlayerBreathsReset(LocalClientGlobals);
  LocalClientGlobals->breathSysDisabled = !enabled;
}

/*
==============
CG_SND_PlayerBreathsGasp
==============
*/
void CG_SND_PlayerBreathsGasp(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum)->breathShouldGasp = 1;
}

/*
==============
CG_SND_PlayerBreathsHold
==============
*/
void CG_SND_PlayerBreathsHold(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum)->breathHeld = 1;
}

/*
==============
CG_SND_PlayerBreathsReset
==============
*/
void CG_SND_PlayerBreathsReset(cg_t *cgameGlob)
{
  unsigned int breathSoundId; 

  breathSoundId = cgameGlob->breathSoundId;
  if ( breathSoundId && cgameGlob->breathMainState != BREATH_MAIN_DIALOGUE )
  {
    SND_StopSoundAliasById(breathSoundId);
    cgameGlob->breathSoundId = 0;
    cgameGlob->breathMainState = BREATH_MAIN_NORMAL;
  }
  cgameGlob->breathSysDisabled = 0;
  *(_QWORD *)&cgameGlob->breathPlayerState = 0i64;
  *(_QWORD *)&cgameGlob->breathPainSoundState = 1i64;
  cgameGlob->breathSoundOut = 0;
  cgameGlob->breathsLeft = 0;
  *(_DWORD *)&cgameGlob->breathJumped = 0;
  *(_QWORD *)&cgameGlob->breathLanded = 0i64;
  cgameGlob->breathOffhand = 0;
  cgameGlob->breathShotStartTime = 0;
  *(_WORD *)&cgameGlob->breathHeld = 0;
  cgameGlob->breathLastJumpTime = 0;
  *(_WORD *)&cgameGlob->breathCompletedSoundAfterPain = 0;
  cgameGlob->breathPlayedRecoverySound = 0;
}

/*
==============
CG_SND_PlayerBreathsSetDamage
==============
*/
void CG_SND_PlayerBreathsSetDamage(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum)->breathDamageOccurred = 1;
}

/*
==============
CG_SND_PlayerBreathsSetDialogueAlias
==============
*/
void CG_SND_PlayerBreathsSetDialogueAlias(LocalClientNum_t localClientNum, unsigned int playbackId)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( clientUIActives[v2].connectionState == CA_ACTIVE )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    if ( SND_IsPlaybackIdPlaying(LocalClientGlobals->breathSoundId) )
      SND_StopSoundAliasById(LocalClientGlobals->breathSoundId);
    LocalClientGlobals->breathSoundId = playbackId;
    LocalClientGlobals->breathMainState = BREATH_MAIN_DIALOGUE;
    LocalClientGlobals->breathsLeft = 0;
    LocalClientGlobals->breathSoundOut = 0;
  }
}

/*
==============
CG_SND_PlayerBreathsSetDoubleJump
==============
*/
void CG_SND_PlayerBreathsSetDoubleJump(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum)->breathDoubleJumped = 1;
}

/*
==============
CG_SND_PlayerBreathsSetJump
==============
*/
void CG_SND_PlayerBreathsSetJump(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum)->breathJumped = 1;
}

/*
==============
CG_SND_PlayerBreathsSetLand
==============
*/
void CG_SND_PlayerBreathsSetLand(LocalClientNum_t localClientNum, BreathSoundLandingType landType)
{
  CG_GetLocalClientGlobals(localClientNum)->breathLanded = landType;
}

/*
==============
CG_SND_PlayerBreathsSetMantle
==============
*/
void CG_SND_PlayerBreathsSetMantle(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum)->breathMantled = 1;
}

/*
==============
CG_SND_PlayerBreathsSetMelee
==============
*/
void CG_SND_PlayerBreathsSetMelee(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum)->breathMelee = 1;
}

/*
==============
CG_SND_PlayerBreathsSetOffhand
==============
*/
void CG_SND_PlayerBreathsSetOffhand(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum)->breathOffhand = 1;
}

/*
==============
CG_SND_PlayerBreathsSetShooting
==============
*/
void CG_SND_PlayerBreathsSetShooting(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum)->breathShooting = 1;
}

/*
==============
CG_SND_ShouldAutoHoldBreath
==============
*/
bool CG_SND_ShouldAutoHoldBreath(cg_t *cgameGlob)
{
  bool result; 

  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.pm_flags, ACTIVE, 0x2Au) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.pm_flags, ACTIVE, 6u) || cgameGlob->predictedPlayerState.groundEntityNum != 2047 || cgameGlob->predictedPlayerState.pm_type == 1 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.otherFlags, ACTIVE, 0xBu) )
    goto LABEL_10;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.pm_flags, GameModeFlagValues::ms_spValue, 0x3Au) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2559, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
      __debugbreak();
LABEL_10:
    result = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.pm_flags, ACTIVE, 0x1Du);
    if ( !result )
      return result;
  }
  return 1;
}

/*
==============
CG_SND_TransitionBreathSoundState
==============
*/
__int64 CG_SND_TransitionBreathSoundState(BreathPlayerState desiredPlrState, cg_t *cgameGlob)
{
  unsigned int v3; 
  BreathSoundState breathSoundState; 
  const dvar_t *v5; 
  int integer; 
  const dvar_t *v8; 
  bool v9; 

  switch ( desiredPlrState )
  {
    case BREATH_PLR_STATE_IDLE:
      goto LABEL_10;
    case BREATH_PLR_STATE_WALK:
      v3 = 1;
      goto LABEL_11;
    case BREATH_PLR_STATE_RUN:
      v3 = 3;
      goto LABEL_11;
    case BREATH_PLR_STATE_SPRINT:
      v3 = 5;
      goto LABEL_11;
  }
  if ( desiredPlrState != BREATH_PLR_STATE_SUPERSPRINT )
  {
LABEL_10:
    v3 = 0;
    goto LABEL_11;
  }
  v3 = 6;
LABEL_11:
  breathSoundState = cgameGlob->breathSoundState;
  if ( v3 != breathSoundState && !cgameGlob->breathsLeft )
  {
    cgameGlob->breathPlayerState = desiredPlrState;
    switch ( breathSoundState )
    {
      case BREATH_STATE_IDLE:
        v5 = DCONST_DVARINT_player_breathCountIdleToWalk;
        if ( !DCONST_DVARINT_player_breathCountIdleToWalk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountIdleToWalk") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v5);
        integer = v5->current.integer;
        cgameGlob->breathSoundOut = 0;
        cgameGlob->breathsLeft = integer;
        return 1i64;
      case BREATH_STATE_WALK:
        if ( v3 > 1 )
        {
          v8 = DCONST_DVARINT_player_breathCountRun;
          if ( !DCONST_DVARINT_player_breathCountRun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountRun") )
            __debugbreak();
          goto LABEL_22;
        }
        v8 = DCONST_DVARINT_player_breathCountWalkToIdle;
        if ( !DCONST_DVARINT_player_breathCountWalkToIdle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountWalkToIdle") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        breathSoundState = BREATH_STATE_IDLE;
        break;
      case BREATH_STATE_RUN_RECOVERY:
        if ( v3 > 3 )
        {
          v8 = DCONST_DVARINT_player_breathCountSprint;
          if ( !DCONST_DVARINT_player_breathCountSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountSprint") )
            __debugbreak();
          goto LABEL_61;
        }
        if ( v3 == 3 )
        {
          v8 = DCONST_DVARINT_player_breathCountRun;
          if ( !DCONST_DVARINT_player_breathCountRun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountRun") )
            __debugbreak();
LABEL_22:
          Dvar_CheckFrontendServerThread(v8);
          breathSoundState = BREATH_STATE_RUN;
        }
        else
        {
          v8 = DCONST_DVARINT_player_breathCountRunToWalk;
          if ( !DCONST_DVARINT_player_breathCountRunToWalk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountRunToWalk") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v8);
          breathSoundState = BREATH_STATE_WALK;
        }
        break;
      case BREATH_STATE_RUN:
        v9 = v3 <= 3;
        goto LABEL_57;
      case BREATH_STATE_SPRINT_RECOVERY:
        v9 = v3 <= 4;
LABEL_57:
        if ( !v9 )
        {
          v8 = DCONST_DVARINT_player_breathCountSprint;
          if ( !DCONST_DVARINT_player_breathCountSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountSprint") )
            __debugbreak();
          goto LABEL_61;
        }
        v8 = DCONST_DVARINT_player_breathCountRunRecovery;
        if ( !DCONST_DVARINT_player_breathCountRunRecovery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountRunRecovery") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        breathSoundState = BREATH_STATE_RUN_RECOVERY;
        break;
      case BREATH_STATE_SPRINT:
        if ( v3 <= 5 )
          goto LABEL_38;
        v8 = DCONST_DVARINT_player_breathCountSupersprint;
        if ( !DCONST_DVARINT_player_breathCountSupersprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountSupersprint") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        breathSoundState = BREATH_STATE_SUPERSPRINT;
        break;
      case BREATH_STATE_SUPERSPRINT:
        if ( v3 == 5 )
        {
          v8 = DCONST_DVARINT_player_breathCountSprint;
          if ( !DCONST_DVARINT_player_breathCountSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountSprint") )
            __debugbreak();
LABEL_61:
          Dvar_CheckFrontendServerThread(v8);
          breathSoundState = BREATH_STATE_SPRINT;
        }
        else
        {
LABEL_38:
          v8 = DCONST_DVARINT_player_breathCountSprintRecovery;
          if ( !DCONST_DVARINT_player_breathCountSprintRecovery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breathCountSprintRecovery") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v8);
          breathSoundState = BREATH_STATE_SPRINT_RECOVERY;
        }
        break;
      default:
        return (unsigned int)breathSoundState;
    }
    cgameGlob->breathsLeft = v8->current.integer;
  }
  return (unsigned int)breathSoundState;
}

/*
==============
CG_SND_UpdatePlayerBreathSystem
==============
*/
void CG_SND_UpdatePlayerBreathSystem(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v2; 
  bool breathDamageOccurred; 
  unsigned int MainDesiredBreathState; 
  unsigned int breathSoundId; 
  unsigned int v6; 
  bool IsPlaybackIdPlaying; 
  int entity; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v10; 
  int v11; 
  unsigned int breathMainState; 
  BreathPlayerState minBreaths; 
  unsigned int v14; 
  PlayerBreathStateDef *PlayerBreathState; 
  unsigned int v16; 
  int breathsLeft; 
  PlayerBreathStateDef *v18; 
  PlayerBreathStateDef *v19; 
  BreathSoundHoldState breathHoldState; 
  PlayerBreathStateDef *v21; 
  bool v22; 
  unsigned int v23; 
  PlayerBreathStateDef *v24; 
  bool v25; 
  __int64 v26; 
  unsigned int v27; 
  PlayerBreathStateDef *v28; 
  PlayerBreathStateDef *v29; 
  PlayerBreathStateDef *v30; 
  PlayerBreathStateDef *v31; 
  PlayerBreathStateDef *v32; 
  PlayerBreathStateDef *v33; 
  PlayerBreathStateDef *v34; 
  PlayerBreathStateDef *v35; 
  unsigned int v36; 
  PlayerBreathStateDef *v37; 
  float v38; 
  const dvar_t *v39; 
  double Float_Internal_DebugName; 
  const dvar_t *v41; 
  bool v42; 
  __int64 breathSoundState; 
  unsigned int v44; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v2 = LocalClientGlobals;
  if ( !LocalClientGlobals || LocalClientGlobals->IsClientGamePaused(LocalClientGlobals) || v2->time < 1000 || v2->breathSysDisabled )
    return;
  breathDamageOccurred = v2->breathDamageOccurred;
  MainDesiredBreathState = CG_SND_GetMainDesiredBreathState(v2);
  breathSoundId = v2->breathSoundId;
  v6 = MainDesiredBreathState;
  v2->breathDamageOccurred = 0;
  IsPlaybackIdPlaying = SND_IsPlaybackIdPlaying(breathSoundId);
  if ( !v2->breathPlayingInitialPainSound )
  {
    if ( v2->predictedPlayerState.pm_type < 7 )
    {
      if ( v2->breathPlayedSoundAfterPain )
      {
        if ( !IsPlaybackIdPlaying )
          v2->breathCompletedSoundAfterPain = 1;
      }
      else if ( IsPlaybackIdPlaying )
      {
        v2->breathPlayedSoundAfterPain = 1;
      }
    }
    else
    {
      *(_DWORD *)&v2->breathPlayedSoundAfterPain = 0;
    }
  }
  entity = v2->predictedPlayerState.vehicleState.entity;
  if ( v2->predictedPlayerState.pm_type >= 7 )
    goto LABEL_170;
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x1Fu);
  v10 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex >= 0 )
  {
    if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", PerkNetworkPriorityIndex, 64) )
      __debugbreak();
    if ( ((0x80000000 >> (v10 & 0x1F)) & v2->predictedPlayerState.perks.array[v10 >> 5]) != 0 && v6 <= 0x10 )
    {
      v11 = 66097;
      if ( _bittest(&v11, v6) )
        goto LABEL_170;
    }
  }
  if ( entity != 2047 )
  {
LABEL_170:
    if ( v2->breathSoundId )
      SND_StopSoundAliasById(IsPlaybackIdPlaying);
    return;
  }
  breathMainState = v2->breathMainState;
  if ( breathMainState == 1 )
    goto LABEL_135;
  minBreaths = BREATH_PLR_STATE_IDLE;
  if ( breathMainState == 3 )
  {
    if ( v6 != 3 )
    {
      if ( IsPlaybackIdPlaying )
        return;
      v16 = s_painBreathSoundLookup[0];
      v2->breathPainSoundState = BREATH_PAIN_RECOVERY;
      PlayerBreathState = CG_GetPlayerBreathState(v16);
      if ( PlayerBreathState )
      {
        if ( v2->breathPlayedRecoverySound )
        {
          breathsLeft = v2->breathsLeft;
        }
        else
        {
          v2->breathPlayedRecoverySound = 1;
          breathsLeft = PlayerBreathState->minBreaths;
          v2->breathsLeft = breathsLeft;
        }
        if ( breathsLeft > 0 )
          goto LABEL_42;
      }
      v2->breathMainState = v6;
      breathMainState = v6;
      goto LABEL_50;
    }
LABEL_33:
    if ( breathMainState == 3 )
    {
      if ( !breathDamageOccurred || v2->breathPlayingInitialPainSound || !v2->breathPlayedSoundAfterPain || !v2->breathCompletedSoundAfterPain )
      {
        if ( IsPlaybackIdPlaying )
          return;
        v14 = s_painBreathSoundLookup[1];
        v2->breathPlayingInitialPainSound = 0;
        v2->breathPainSoundState = BREATH_PAIN_ONGOING;
        PlayerBreathState = CG_GetPlayerBreathState(v14);
        if ( !PlayerBreathState )
          return;
        goto LABEL_42;
      }
    }
    else
    {
      v2->breathPlayedRecoverySound = 0;
      v2->breathMainState = BREATH_MAIN_PAIN_DEATHSDOOR;
    }
    CG_SND_PlayInitialPainSound(v2);
    return;
  }
  if ( v6 == 3 )
    goto LABEL_33;
  if ( breathMainState == 2 )
    goto LABEL_30;
  if ( v6 != 2 )
    goto LABEL_50;
  if ( !v2->breathCompletedSoundAfterPain )
  {
LABEL_30:
    if ( IsPlaybackIdPlaying )
      return;
    *(_WORD *)&v2->breathCompletedSoundAfterPain = 0;
    v2->breathPlayedSoundAfterPain = 0;
  }
  else
  {
    v2->breathMainState = BREATH_MAIN_PAIN_REGULAR;
    if ( CG_SND_PlayInitialPainSound(v2) )
      return;
  }
  v6 = CG_SND_GetMainDesiredBreathState(v2);
  v2->breathMainState = v6;
  breathMainState = v6;
LABEL_50:
  if ( breathMainState == 8 )
    goto LABEL_135;
  if ( v6 == 8 )
  {
    v18 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[20]);
    SND_StopSoundAliasById(v2->breathSoundId);
    *(_QWORD *)&v2->breathsLeft = 0i64;
    if ( v18 )
    {
      v2->breathSoundId = SND_PlayScaledSoundAlias(v18->inhaleAlias, (const LocalClientNum_t)v2->localClientNum, v2->predictedPlayerState.clientNum, 1.0, 1.0, &v2->predictedPlayerState.origin, 0, SASYS_CGAME);
      v2->breathsLeft = v18->minBreaths;
    }
    v2->breathMainState = BREATH_MAIN_GASP;
    v2->breathSoundOut = 0;
    v2->breathHoldState = BREATH_HOLD_EXHALE;
    return;
  }
  if ( breathMainState == 7 )
  {
    if ( v6 != 7 && v2->breathHoldState == BREATH_HOLD_HOLDING && !IsPlaybackIdPlaying )
    {
      v19 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[19]);
      SND_StopSoundAliasById(v2->breathSoundId);
      v2->breathSoundId = 0;
      if ( v19 )
      {
        v2->breathSoundId = SND_PlayScaledSoundAlias(v19->exhaleAlias, (const LocalClientNum_t)v2->localClientNum, v2->predictedPlayerState.clientNum, 1.0, 1.0, &v2->predictedPlayerState.origin, 0, SASYS_CGAME);
        v2->breathsLeft = v19->minBreaths;
      }
      v2->breathMainState = BREATH_MAIN_HOLD;
      v2->breathHoldState = BREATH_HOLD_EXHALE;
      v2->breathSoundOut = 0;
    }
    breathHoldState = v2->breathHoldState;
    if ( breathHoldState )
    {
      if ( breathHoldState == BREATH_HOLD_EXHALE && !IsPlaybackIdPlaying )
      {
        v2->breathMainState = v6;
        v2->breathHoldState = BREATH_HOLD_INHALE;
      }
    }
    else if ( !IsPlaybackIdPlaying )
    {
      v2->breathHoldState = BREATH_HOLD_HOLDING;
    }
    return;
  }
  if ( v6 == 7 )
  {
    v21 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[19]);
    SND_StopSoundAliasById(v2->breathSoundId);
    *(_QWORD *)&v2->breathsLeft = 0i64;
    if ( v21 )
    {
      v2->breathSoundId = SND_PlayScaledSoundAlias(v21->inhaleAlias, (const LocalClientNum_t)v2->localClientNum, v2->predictedPlayerState.clientNum, 1.0, 1.0, &v2->predictedPlayerState.origin, 0, SASYS_CGAME);
      v2->breathsLeft = v21->minBreaths;
    }
    v2->breathMainState = BREATH_MAIN_HOLD;
    v2->breathSoundOut = 0;
    v2->breathHoldState = BREATH_HOLD_INHALE;
    return;
  }
  if ( v6 == 9 )
  {
    v22 = breathMainState == 6;
    v23 = s_breathSoundStateHashLookup[21];
    if ( !v22 )
      v23 = s_breathSoundStateHashLookup[15];
    v24 = CG_GetPlayerBreathState(v23);
    SND_StopSoundAliasById(v2->breathSoundId);
    if ( v24 )
      v2->breathSoundId = SND_PlayScaledSoundAlias(v24->inhaleAlias, (const LocalClientNum_t)v2->localClientNum, v2->predictedPlayerState.clientNum, 1.0, 1.0, &v2->predictedPlayerState.origin, 0, SASYS_CGAME);
    v2->breathSoundOut = 0;
    return;
  }
  if ( v6 != 6 )
  {
    switch ( breathMainState )
    {
      case 6u:
        if ( !CG_SND_ShouldAutoHoldBreath(v2) )
          v2->breathMainState = v6;
        return;
      case 0xAu:
        if ( v6 != 10 )
        {
          v29 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[16]);
          if ( v29 )
          {
            if ( v2->time - v2->breathShotStartTime > Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_playerbreath_shot_recov_time, "cg_playerbreath_shot_recov_time") )
            {
              SND_StopSoundAliasById(v2->breathSoundId);
              v2->breathSoundId = SND_PlayScaledSoundAlias(v29->inhaleAlias, (const LocalClientNum_t)v2->localClientNum, v2->predictedPlayerState.clientNum, 1.0, 1.0, &v2->predictedPlayerState.origin, 0, SASYS_CGAME);
              v6 = 11;
            }
            v2->breathMainState = v6;
          }
          else
          {
            SND_StopSoundAliasById(v2->breathSoundId);
            v2->breathSoundId = 0;
            v2->breathMainState = BREATH_MAIN_SHOOTING_RECOVERY;
          }
          return;
        }
        break;
      case 0xBu:
        if ( !IsPlaybackIdPlaying )
        {
          v2->breathMainState = v6;
          v2->breathSoundOut = 1;
          return;
        }
        break;
      case 0xCu:
        goto LABEL_107;
    }
    if ( v6 == 12 )
    {
      v30 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[17]);
      v2->breathMainState = BREATH_MAIN_MELEE_RECOVERY;
      v31 = v30;
      if ( v30 )
      {
        SND_StopSoundAliasById(v2->breathSoundId);
        v2->breathSoundId = SND_PlayScaledSoundAlias(v31->inhaleAlias, (const LocalClientNum_t)v2->localClientNum, v2->predictedPlayerState.clientNum, 1.0, 1.0, &v2->predictedPlayerState.origin, 0, SASYS_CGAME);
        return;
      }
      goto LABEL_114;
    }
LABEL_107:
    if ( breathMainState == 13 )
    {
      if ( !IsPlaybackIdPlaying )
      {
        v2->breathMainState = v6;
        return;
      }
    }
    else if ( breathMainState == 14 )
    {
LABEL_115:
      if ( breathMainState == 15 && !IsPlaybackIdPlaying )
      {
LABEL_136:
        v2->breathMainState = v6;
        return;
      }
      switch ( v6 )
      {
        case 0xAu:
          if ( breathMainState != 10 )
          {
            v2->breathShotStartTime = v2->time;
            v2->breathMainState = BREATH_MAIN_SHOOTING;
          }
          return;
        case 4u:
          v34 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[11]);
          SND_StopSoundAliasById(v2->breathSoundId);
          v2->breathSoundId = 0;
          if ( v34 )
            v2->breathSoundId = SND_PlayScaledSoundAlias(v34->inhaleAlias, (const LocalClientNum_t)v2->localClientNum, v2->predictedPlayerState.clientNum, 1.0, 1.0, &v2->predictedPlayerState.origin, 0, SASYS_CGAME);
          v2->breathSoundOut = 0;
          v2->breathMainState = BREATH_MAIN_JUMP;
          return;
        case 0x10u:
          v35 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[12]);
          SND_StopSoundAliasById(v2->breathSoundId);
          v2->breathSoundId = 0;
          if ( v35 )
            v2->breathSoundId = SND_PlayScaledSoundAlias(v35->inhaleAlias, (const LocalClientNum_t)v2->localClientNum, v2->predictedPlayerState.clientNum, 1.0, 1.0, &v2->predictedPlayerState.origin, 0, SASYS_CGAME);
          v2->breathSoundOut = 0;
          v2->breathMainState = BREATH_MAIN_DOUBLE_JUMP;
          return;
        case 5u:
          v36 = s_breathSoundStateHashLookup[13];
          if ( v2->breathLanded == BREATH_LAND_LOW )
            v36 = s_breathSoundStateHashLookup[14];
          v37 = CG_GetPlayerBreathState(v36);
          SND_StopSoundAliasById(v2->breathSoundId);
          v2->breathSoundId = 0;
          if ( v37 )
            v2->breathSoundId = SND_PlayScaledSoundAlias(v37->inhaleAlias, (const LocalClientNum_t)v2->localClientNum, v2->predictedPlayerState.clientNum, 1.0, 1.0, &v2->predictedPlayerState.origin, 0, SASYS_CGAME);
          v2->breathSoundOut = 0;
          v2->breathLanded = BREATH_LAND_NONE;
          return;
      }
      if ( ((breathMainState - 4) & 0xFFFFFFFA) == 0 )
      {
LABEL_135:
        if ( IsPlaybackIdPlaying )
          return;
        goto LABEL_136;
      }
      if ( breathMainState || v2->breathSoundId && IsPlaybackIdPlaying )
        return;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v2->predictedPlayerState.pm_flags, ACTIVE, 0x1Eu) )
      {
        minBreaths = BREATH_PLR_STATE_SPRINT;
      }
      else if ( v2->predictedPlayerState.pm_type <= 1u )
      {
        v38 = fsqrt((float)((float)(v2->predictedPlayerState.velocity.v[0] * v2->predictedPlayerState.velocity.v[0]) + (float)(v2->predictedPlayerState.velocity.v[1] * v2->predictedPlayerState.velocity.v[1])) + (float)(v2->predictedPlayerState.velocity.v[2] * v2->predictedPlayerState.velocity.v[2]));
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v2->predictedPlayerState.pm_flags, ACTIVE, 0xBu) && v38 >= 10.0 )
        {
          minBreaths = BREATH_PLR_STATE_WALK;
        }
        else
        {
          if ( !BG_IsSuperSprinting(&v2->predictedPlayerState) )
            goto LABEL_171;
          v39 = DCONST_DVARFLT_player_sprintThreshhold;
          if ( !DCONST_DVARFLT_player_sprintThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintThreshhold") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v39);
          if ( v38 >= v39->current.value )
          {
            minBreaths = BREATH_PLR_STATE_SUPERSPRINT;
          }
          else
          {
LABEL_171:
            if ( PM_IsSprinting(&v2->predictedPlayerState) && (Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_sprintThreshhold, "player_sprintThreshhold"), v38 >= *(float *)&Float_Internal_DebugName) )
            {
              minBreaths = BREATH_PLR_STATE_SPRINT;
            }
            else
            {
              v41 = DCONST_DVARFLT_player_runThreshhold;
              if ( !DCONST_DVARFLT_player_runThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_runThreshhold") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v41);
              if ( v38 < v41->current.value )
                LOBYTE(minBreaths) = v38 >= 10.0;
              else
                minBreaths = BREATH_PLR_STATE_RUN;
            }
          }
        }
      }
      v2->breathSoundState = CG_SND_TransitionBreathSoundState(minBreaths, v2);
      v42 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v2->predictedPlayerState.pm_flags, ACTIVE, 0x2Au);
      breathSoundState = v2->breathSoundState;
      if ( v42 )
        v44 = s_breathZeroGSoundLookup[breathSoundState];
      else
        v44 = s_breathSoundLookup[breathSoundState];
      PlayerBreathState = CG_GetPlayerBreathState(v44);
LABEL_42:
      CG_SND_PlayBreathSound(v2, PlayerBreathState);
      return;
    }
    if ( v6 == 14 )
    {
      v32 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[18]);
      v2->breathMainState = BREATH_MAIN_OFFHAND_RECOVERY;
      v33 = v32;
      if ( v32 )
      {
        SND_StopSoundAliasById(v2->breathSoundId);
        minBreaths = SND_PlayScaledSoundAlias(v33->inhaleAlias, (const LocalClientNum_t)v2->localClientNum, v2->predictedPlayerState.clientNum, 1.0, 1.0, &v2->predictedPlayerState.origin, 0, SASYS_CGAME);
      }
LABEL_114:
      v2->breathSoundId = minBreaths;
      return;
    }
    goto LABEL_115;
  }
  switch ( breathMainState )
  {
    case 4u:
      return;
    case 0x10u:
      if ( IsPlaybackIdPlaying )
        return;
      break;
    case 6u:
      return;
  }
  v25 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v2->predictedPlayerState.pm_flags, ACTIVE, 0x2Au);
  v26 = v2->breathSoundState;
  if ( v25 )
    v27 = s_breathZeroGSoundLookup[v26];
  else
    v27 = s_breathSoundLookup[v26];
  v28 = CG_GetPlayerBreathState(v27);
  v2->breathMainState = BREATH_MAIN_AUTO_HOLD;
  if ( v28 )
    minBreaths = v28->minBreaths;
  v2->breathsLeft = minBreaths;
  v2->breathSoundOut = 0;
}

