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
  bool v6; 
  cg_t *LocalClientGlobals; 
  GfxFont *font; 
  int *v12; 
  const char *s; 
  const char *v17; 
  GfxFont *smallDevFont; 
  const char *v26; 
  GfxFont *v30; 
  const char *v34; 
  GfxFont *v38; 
  const char *v42; 
  GfxFont *v46; 
  const char *v50; 
  GfxFont *v54; 
  const char *v58; 
  int v62; 
  unsigned int v66; 
  unsigned int *p_playbackId; 
  GfxFont *v68; 
  const char *v69; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
  }
  if ( activeScreenPlacementMode == SCRMODE_FULL )
  {
LABEL_7:
    _RDI = &scrPlaceFull;
    goto LABEL_8;
  }
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v6 )
      __debugbreak();
    goto LABEL_7;
  }
  _RDI = &scrPlaceViewDisplay[localClientNum];
LABEL_8:
  __asm
  {
    vmovss  xmm7, dword ptr [rdi+28h]
    vmovss  xmm6, dword ptr [rdi+2Ch]
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  font = cls.smallDevFont;
  v12 = (int *)LocalClientGlobals;
  if ( LocalClientGlobals->breathSysDisabled )
  {
    s = j_va("Breath System disabled by script.");
    __asm
    {
      vmovss  xmm3, cs:__real@3f0ccccd; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  dword ptr [rsp+88h+fmt], xmm3
    }
    CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, s, &colorGreen, 5, font);
  }
  else
  {
    __asm { vmovaps [rsp+88h+var_38], xmm8 }
    v17 = j_va("Main State: %s", s_playerBreathMainStateName[LocalClientGlobals->breathMainState]);
    __asm
    {
      vmovss  xmm8, cs:__real@3f0ccccd
      vmovaps xmm3, xmm8; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  dword ptr [rsp+88h+fmt], xmm8
    }
    CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v17, &colorGreen, 5, font);
    smallDevFont = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    v26 = j_va("Breath Player State: %s", s_playerBreathPlayerStateName[v12[92370]]);
    __asm
    {
      vmovaps xmm3, xmm8; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  dword ptr [rsp+88h+fmt], xmm8
    }
    CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v26, &colorGreen, 5, smallDevFont);
    v30 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    v34 = j_va("Breath Sound State: %s", s_playerBreathSoundStateName[v12[92371]]);
    __asm
    {
      vmovaps xmm3, xmm8; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  dword ptr [rsp+88h+fmt], xmm8
    }
    CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v34, &colorGreen, 5, v30);
    v38 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    v42 = j_va("Pain State: %s", s_playerBreathPainStateName[v12[92372]]);
    __asm
    {
      vmovaps xmm3, xmm8; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  dword ptr [rsp+88h+fmt], xmm8
    }
    CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v42, &colorGreen, 5, v38);
    v46 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    v50 = j_va("Landing Type: %s", s_playerBreathLandingTypeName[v12[92379]]);
    __asm
    {
      vmovaps xmm3, xmm8; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  dword ptr [rsp+88h+fmt], xmm8
    }
    CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v50, &colorGreen, 5, v46);
    v54 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    v58 = j_va("Hold State: %s", s_playerBreathHoldStateName[v12[92373]]);
    __asm
    {
      vmovaps xmm3, xmm8; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  dword ptr [rsp+88h+fmt], xmm8
    }
    CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v58, &colorGreen, 5, v54);
    v62 = v12[92376];
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    if ( v62 )
    {
      v66 = 0;
      p_playbackId = &g_snd.voices[0].playbackId;
      while ( *p_playbackId != v62 )
      {
        ++v66;
        p_playbackId += 492;
        if ( v66 >= 0x63 )
          goto LABEL_18;
      }
      v68 = cls.smallDevFont;
      v69 = j_va("Playing: %s", **(const char ***)&g_snd.chaninfoUnweightedPriority[492 * v66 - 48680]);
      __asm
      {
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm7; x
        vmovss  dword ptr [rsp+88h+fmt], xmm8
      }
      CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, v69, &colorGreen, 5, v68);
    }
LABEL_18:
    __asm { vmovaps xmm8, [rsp+88h+var_38] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
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
  float v10; 

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
      {
        __asm
        {
          vmovss  xmm3, cs:__real@3f800000; volumeScale
          vmovss  [rsp+48h+var_28], xmm3
        }
        cgameGlob->breathSoundId = SND_PlayScaledSoundAlias(Alias, (const LocalClientNum_t)cgameGlob->localClientNum, cgameGlob->predictedPlayerState.clientNum, *(float *)&_XMM3, v10, &cgameGlob->predictedPlayerState.origin, 0, SASYS_CGAME);
      }
      else
      {
        *(_QWORD *)&cgameGlob->breathsLeft = 0i64;
      }
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
  float fmt; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_player_breaths.cpp", 694, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  SND_StopSoundAliasById(cgameGlob->breathSoundId);
  PlayerBreathState = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[7]);
  if ( PlayerBreathState && PlayerBreathState->inhaleAlias )
  {
    __asm { vmovss  xmm3, cs:__real@3f800000; volumeScale }
    clientNum = cgameGlob->predictedPlayerState.clientNum;
    localClientNum = cgameGlob->localClientNum;
    cgameGlob->breathSoundOut = 0;
    *(_WORD *)&cgameGlob->breathPlayedSoundAfterPain = 0;
    cgameGlob->breathPlayingInitialPainSound = 1;
    __asm { vmovss  dword ptr [rsp+48h+fmt], xmm3 }
    cgameGlob->breathSoundId = SND_PlayScaledSoundAlias(PlayerBreathState->inhaleAlias, localClientNum, clientNum, *(float *)&_XMM3, fmt, &cgameGlob->predictedPlayerState.origin, 0, SASYS_CGAME);
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
  bool breathDamageOccurred; 
  unsigned int MainDesiredBreathState; 
  unsigned int breathSoundId; 
  unsigned int v7; 
  bool IsPlaybackIdPlaying; 
  int entity; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v11; 
  int v12; 
  unsigned int breathMainState; 
  BreathPlayerState minBreaths; 
  unsigned int v15; 
  PlayerBreathStateDef *PlayerBreathState; 
  unsigned int v17; 
  int breathsLeft; 
  PlayerBreathStateDef *v19; 
  PlayerBreathStateDef *v21; 
  BreathSoundHoldState breathHoldState; 
  PlayerBreathStateDef *v24; 
  bool v26; 
  unsigned int v27; 
  PlayerBreathStateDef *v28; 
  bool v30; 
  __int64 v31; 
  unsigned int v32; 
  PlayerBreathStateDef *v33; 
  PlayerBreathStateDef *v34; 
  PlayerBreathStateDef *v36; 
  PlayerBreathStateDef *v37; 
  PlayerBreathStateDef *v39; 
  PlayerBreathStateDef *v40; 
  PlayerBreathStateDef *v42; 
  PlayerBreathStateDef *v44; 
  unsigned int v46; 
  PlayerBreathStateDef *v47; 
  char v60; 
  bool v62; 
  __int64 breathSoundState; 
  unsigned int v64; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RBX = LocalClientGlobals;
  if ( !LocalClientGlobals || LocalClientGlobals->IsClientGamePaused(LocalClientGlobals) || _RBX->time < 1000 || _RBX->breathSysDisabled )
    return;
  breathDamageOccurred = _RBX->breathDamageOccurred;
  MainDesiredBreathState = CG_SND_GetMainDesiredBreathState(_RBX);
  breathSoundId = _RBX->breathSoundId;
  v7 = MainDesiredBreathState;
  _RBX->breathDamageOccurred = 0;
  IsPlaybackIdPlaying = SND_IsPlaybackIdPlaying(breathSoundId);
  if ( !_RBX->breathPlayingInitialPainSound )
  {
    if ( _RBX->predictedPlayerState.pm_type < 7 )
    {
      if ( _RBX->breathPlayedSoundAfterPain )
      {
        if ( !IsPlaybackIdPlaying )
          _RBX->breathCompletedSoundAfterPain = 1;
      }
      else if ( IsPlaybackIdPlaying )
      {
        _RBX->breathPlayedSoundAfterPain = 1;
      }
    }
    else
    {
      *(_DWORD *)&_RBX->breathPlayedSoundAfterPain = 0;
    }
  }
  entity = _RBX->predictedPlayerState.vehicleState.entity;
  if ( _RBX->predictedPlayerState.pm_type >= 7 )
    goto LABEL_170;
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x1Fu);
  v11 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex >= 0 )
  {
    if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", PerkNetworkPriorityIndex, 64) )
      __debugbreak();
    if ( ((0x80000000 >> (v11 & 0x1F)) & _RBX->predictedPlayerState.perks.array[v11 >> 5]) != 0 && v7 <= 0x10 )
    {
      v12 = 66097;
      if ( _bittest(&v12, v7) )
        goto LABEL_170;
    }
  }
  if ( entity != 2047 )
  {
LABEL_170:
    if ( _RBX->breathSoundId )
      SND_StopSoundAliasById(IsPlaybackIdPlaying);
    return;
  }
  breathMainState = _RBX->breathMainState;
  if ( breathMainState == 1 )
    goto LABEL_135;
  minBreaths = BREATH_PLR_STATE_IDLE;
  if ( breathMainState == 3 )
  {
    if ( v7 != 3 )
    {
      if ( IsPlaybackIdPlaying )
        return;
      v17 = s_painBreathSoundLookup[0];
      _RBX->breathPainSoundState = BREATH_PAIN_RECOVERY;
      PlayerBreathState = CG_GetPlayerBreathState(v17);
      if ( PlayerBreathState )
      {
        if ( _RBX->breathPlayedRecoverySound )
        {
          breathsLeft = _RBX->breathsLeft;
        }
        else
        {
          _RBX->breathPlayedRecoverySound = 1;
          breathsLeft = PlayerBreathState->minBreaths;
          _RBX->breathsLeft = breathsLeft;
        }
        if ( breathsLeft > 0 )
          goto LABEL_42;
      }
      _RBX->breathMainState = v7;
      breathMainState = v7;
      goto LABEL_50;
    }
LABEL_33:
    if ( breathMainState == 3 )
    {
      if ( !breathDamageOccurred || _RBX->breathPlayingInitialPainSound || !_RBX->breathPlayedSoundAfterPain || !_RBX->breathCompletedSoundAfterPain )
      {
        if ( IsPlaybackIdPlaying )
          return;
        v15 = s_painBreathSoundLookup[1];
        _RBX->breathPlayingInitialPainSound = 0;
        _RBX->breathPainSoundState = BREATH_PAIN_ONGOING;
        PlayerBreathState = CG_GetPlayerBreathState(v15);
        if ( !PlayerBreathState )
          return;
        goto LABEL_42;
      }
    }
    else
    {
      _RBX->breathPlayedRecoverySound = 0;
      _RBX->breathMainState = BREATH_MAIN_PAIN_DEATHSDOOR;
    }
    CG_SND_PlayInitialPainSound(_RBX);
    return;
  }
  if ( v7 == 3 )
    goto LABEL_33;
  if ( breathMainState == 2 )
    goto LABEL_30;
  if ( v7 != 2 )
    goto LABEL_50;
  if ( !_RBX->breathCompletedSoundAfterPain )
  {
LABEL_30:
    if ( IsPlaybackIdPlaying )
      return;
    *(_WORD *)&_RBX->breathCompletedSoundAfterPain = 0;
    _RBX->breathPlayedSoundAfterPain = 0;
  }
  else
  {
    _RBX->breathMainState = BREATH_MAIN_PAIN_REGULAR;
    if ( CG_SND_PlayInitialPainSound(_RBX) )
      return;
  }
  v7 = CG_SND_GetMainDesiredBreathState(_RBX);
  _RBX->breathMainState = v7;
  breathMainState = v7;
LABEL_50:
  if ( breathMainState == 8 )
    goto LABEL_135;
  if ( v7 == 8 )
  {
    v19 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[20]);
    SND_StopSoundAliasById(_RBX->breathSoundId);
    *(_QWORD *)&_RBX->breathsLeft = 0i64;
    if ( v19 )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@3f800000; volumeScale
        vmovss  dword ptr [rsp+68h+fmt], xmm3
      }
      _RBX->breathSoundId = SND_PlayScaledSoundAlias(v19->inhaleAlias, (const LocalClientNum_t)_RBX->localClientNum, _RBX->predictedPlayerState.clientNum, *(float *)&_XMM3, fmt, &_RBX->predictedPlayerState.origin, 0, SASYS_CGAME);
      _RBX->breathsLeft = v19->minBreaths;
    }
    _RBX->breathMainState = BREATH_MAIN_GASP;
    _RBX->breathSoundOut = 0;
    _RBX->breathHoldState = BREATH_HOLD_EXHALE;
    return;
  }
  if ( breathMainState == 7 )
  {
    if ( v7 != 7 && _RBX->breathHoldState == BREATH_HOLD_HOLDING && !IsPlaybackIdPlaying )
    {
      v21 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[19]);
      SND_StopSoundAliasById(_RBX->breathSoundId);
      _RBX->breathSoundId = 0;
      if ( v21 )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@3f800000; volumeScale
          vmovss  dword ptr [rsp+68h+fmt], xmm3
        }
        _RBX->breathSoundId = SND_PlayScaledSoundAlias(v21->exhaleAlias, (const LocalClientNum_t)_RBX->localClientNum, _RBX->predictedPlayerState.clientNum, *(float *)&_XMM3, fmta, &_RBX->predictedPlayerState.origin, 0, SASYS_CGAME);
        _RBX->breathsLeft = v21->minBreaths;
      }
      _RBX->breathMainState = BREATH_MAIN_HOLD;
      _RBX->breathHoldState = BREATH_HOLD_EXHALE;
      _RBX->breathSoundOut = 0;
    }
    breathHoldState = _RBX->breathHoldState;
    if ( breathHoldState )
    {
      if ( breathHoldState == BREATH_HOLD_EXHALE && !IsPlaybackIdPlaying )
      {
        _RBX->breathMainState = v7;
        _RBX->breathHoldState = BREATH_HOLD_INHALE;
      }
    }
    else if ( !IsPlaybackIdPlaying )
    {
      _RBX->breathHoldState = BREATH_HOLD_HOLDING;
    }
    return;
  }
  if ( v7 == 7 )
  {
    v24 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[19]);
    SND_StopSoundAliasById(_RBX->breathSoundId);
    *(_QWORD *)&_RBX->breathsLeft = 0i64;
    if ( v24 )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@3f800000; volumeScale
        vmovss  dword ptr [rsp+68h+fmt], xmm3
      }
      _RBX->breathSoundId = SND_PlayScaledSoundAlias(v24->inhaleAlias, (const LocalClientNum_t)_RBX->localClientNum, _RBX->predictedPlayerState.clientNum, *(float *)&_XMM3, fmtb, &_RBX->predictedPlayerState.origin, 0, SASYS_CGAME);
      _RBX->breathsLeft = v24->minBreaths;
    }
    _RBX->breathMainState = BREATH_MAIN_HOLD;
    _RBX->breathSoundOut = 0;
    _RBX->breathHoldState = BREATH_HOLD_INHALE;
    return;
  }
  if ( v7 == 9 )
  {
    v26 = breathMainState == 6;
    v27 = s_breathSoundStateHashLookup[21];
    if ( !v26 )
      v27 = s_breathSoundStateHashLookup[15];
    v28 = CG_GetPlayerBreathState(v27);
    SND_StopSoundAliasById(_RBX->breathSoundId);
    if ( v28 )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@3f800000; volumeScale
        vmovss  dword ptr [rsp+68h+fmt], xmm3
      }
      _RBX->breathSoundId = SND_PlayScaledSoundAlias(v28->inhaleAlias, (const LocalClientNum_t)_RBX->localClientNum, _RBX->predictedPlayerState.clientNum, *(float *)&_XMM3, fmtc, &_RBX->predictedPlayerState.origin, 0, SASYS_CGAME);
    }
    _RBX->breathSoundOut = 0;
    return;
  }
  if ( v7 != 6 )
  {
    switch ( breathMainState )
    {
      case 6u:
        if ( !CG_SND_ShouldAutoHoldBreath(_RBX) )
          _RBX->breathMainState = v7;
        return;
      case 0xAu:
        if ( v7 != 10 )
        {
          v34 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[16]);
          if ( v34 )
          {
            if ( _RBX->time - _RBX->breathShotStartTime > Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_playerbreath_shot_recov_time, "cg_playerbreath_shot_recov_time") )
            {
              SND_StopSoundAliasById(_RBX->breathSoundId);
              __asm
              {
                vmovss  xmm3, cs:__real@3f800000; volumeScale
                vmovss  dword ptr [rsp+68h+fmt], xmm3
              }
              _RBX->breathSoundId = SND_PlayScaledSoundAlias(v34->inhaleAlias, (const LocalClientNum_t)_RBX->localClientNum, _RBX->predictedPlayerState.clientNum, *(float *)&_XMM3, fmtd, &_RBX->predictedPlayerState.origin, 0, SASYS_CGAME);
              v7 = 11;
            }
            _RBX->breathMainState = v7;
          }
          else
          {
            SND_StopSoundAliasById(_RBX->breathSoundId);
            _RBX->breathSoundId = 0;
            _RBX->breathMainState = BREATH_MAIN_SHOOTING_RECOVERY;
          }
          return;
        }
        break;
      case 0xBu:
        if ( !IsPlaybackIdPlaying )
        {
          _RBX->breathMainState = v7;
          _RBX->breathSoundOut = 1;
          return;
        }
        break;
      case 0xCu:
        goto LABEL_107;
    }
    if ( v7 == 12 )
    {
      v36 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[17]);
      _RBX->breathMainState = BREATH_MAIN_MELEE_RECOVERY;
      v37 = v36;
      if ( v36 )
      {
        SND_StopSoundAliasById(_RBX->breathSoundId);
        __asm
        {
          vmovss  xmm3, cs:__real@3f800000; volumeScale
          vmovss  dword ptr [rsp+68h+fmt], xmm3
        }
        _RBX->breathSoundId = SND_PlayScaledSoundAlias(v37->inhaleAlias, (const LocalClientNum_t)_RBX->localClientNum, _RBX->predictedPlayerState.clientNum, *(float *)&_XMM3, fmte, &_RBX->predictedPlayerState.origin, 0, SASYS_CGAME);
        return;
      }
      goto LABEL_114;
    }
LABEL_107:
    if ( breathMainState == 13 )
    {
      if ( !IsPlaybackIdPlaying )
      {
        _RBX->breathMainState = v7;
        return;
      }
    }
    else if ( breathMainState == 14 )
    {
LABEL_115:
      if ( breathMainState == 15 && !IsPlaybackIdPlaying )
      {
LABEL_136:
        _RBX->breathMainState = v7;
        return;
      }
      switch ( v7 )
      {
        case 0xAu:
          if ( breathMainState != 10 )
          {
            _RBX->breathShotStartTime = _RBX->time;
            _RBX->breathMainState = BREATH_MAIN_SHOOTING;
          }
          return;
        case 4u:
          v42 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[11]);
          SND_StopSoundAliasById(_RBX->breathSoundId);
          _RBX->breathSoundId = 0;
          if ( v42 )
          {
            __asm
            {
              vmovss  xmm3, cs:__real@3f800000; volumeScale
              vmovss  dword ptr [rsp+68h+fmt], xmm3
            }
            _RBX->breathSoundId = SND_PlayScaledSoundAlias(v42->inhaleAlias, (const LocalClientNum_t)_RBX->localClientNum, _RBX->predictedPlayerState.clientNum, *(float *)&_XMM3, fmtg, &_RBX->predictedPlayerState.origin, 0, SASYS_CGAME);
          }
          _RBX->breathSoundOut = 0;
          _RBX->breathMainState = BREATH_MAIN_JUMP;
          return;
        case 0x10u:
          v44 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[12]);
          SND_StopSoundAliasById(_RBX->breathSoundId);
          _RBX->breathSoundId = 0;
          if ( v44 )
          {
            __asm
            {
              vmovss  xmm3, cs:__real@3f800000; volumeScale
              vmovss  dword ptr [rsp+68h+fmt], xmm3
            }
            _RBX->breathSoundId = SND_PlayScaledSoundAlias(v44->inhaleAlias, (const LocalClientNum_t)_RBX->localClientNum, _RBX->predictedPlayerState.clientNum, *(float *)&_XMM3, fmth, &_RBX->predictedPlayerState.origin, 0, SASYS_CGAME);
          }
          _RBX->breathSoundOut = 0;
          _RBX->breathMainState = BREATH_MAIN_DOUBLE_JUMP;
          return;
        case 5u:
          v46 = s_breathSoundStateHashLookup[13];
          if ( _RBX->breathLanded == BREATH_LAND_LOW )
            v46 = s_breathSoundStateHashLookup[14];
          v47 = CG_GetPlayerBreathState(v46);
          SND_StopSoundAliasById(_RBX->breathSoundId);
          _RBX->breathSoundId = 0;
          if ( v47 )
          {
            __asm
            {
              vmovss  xmm3, cs:__real@3f800000; volumeScale
              vmovss  dword ptr [rsp+68h+fmt], xmm3
            }
            _RBX->breathSoundId = SND_PlayScaledSoundAlias(v47->inhaleAlias, (const LocalClientNum_t)_RBX->localClientNum, _RBX->predictedPlayerState.clientNum, *(float *)&_XMM3, fmti, &_RBX->predictedPlayerState.origin, 0, SASYS_CGAME);
          }
          _RBX->breathSoundOut = 0;
          _RBX->breathLanded = BREATH_LAND_NONE;
          return;
      }
      if ( ((breathMainState - 4) & 0xFFFFFFFA) == 0 )
      {
LABEL_135:
        if ( IsPlaybackIdPlaying )
          return;
        goto LABEL_136;
      }
      if ( breathMainState || _RBX->breathSoundId && IsPlaybackIdPlaying )
        return;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.pm_flags, ACTIVE, 0x1Eu) )
      {
        minBreaths = BREATH_PLR_STATE_SPRINT;
      }
      else if ( _RBX->predictedPlayerState.pm_type <= 1u )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+44h]
          vmovss  xmm2, dword ptr [rbx+48h]
          vmovss  xmm3, dword ptr [rbx+4Ch]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmovaps [rsp+68h+var_28], xmm6
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm6, xmm2, xmm2
        }
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.pm_flags, ACTIVE, 0xBu) )
        {
          __asm { vcomiss xmm6, cs:__real@41200000 }
          minBreaths = BREATH_PLR_STATE_WALK;
        }
        else
        {
          if ( !BG_IsSuperSprinting(&_RBX->predictedPlayerState) )
            goto LABEL_171;
          _RSI = DCONST_DVARFLT_player_sprintThreshhold;
          if ( !DCONST_DVARFLT_player_sprintThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintThreshhold") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm { vcomiss xmm6, dword ptr [rsi+28h] }
          if ( v60 )
          {
LABEL_171:
            if ( !PM_IsSprinting(&_RBX->predictedPlayerState) )
              goto LABEL_154;
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_sprintThreshhold, "player_sprintThreshhold");
            __asm { vcomiss xmm6, xmm0 }
            if ( v60 )
            {
LABEL_154:
              _RSI = DCONST_DVARFLT_player_runThreshhold;
              if ( !DCONST_DVARFLT_player_runThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_runThreshhold") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(_RSI);
              __asm { vcomiss xmm6, dword ptr [rsi+28h] }
              if ( v60 )
              {
                __asm { vcomiss xmm6, cs:__real@41200000 }
                LOBYTE(minBreaths) = !v60;
              }
              else
              {
                minBreaths = BREATH_PLR_STATE_RUN;
              }
            }
            else
            {
              minBreaths = BREATH_PLR_STATE_SPRINT;
            }
          }
          else
          {
            minBreaths = BREATH_PLR_STATE_SUPERSPRINT;
          }
        }
        __asm { vmovaps xmm6, [rsp+68h+var_28] }
      }
      _RBX->breathSoundState = CG_SND_TransitionBreathSoundState(minBreaths, _RBX);
      v62 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.pm_flags, ACTIVE, 0x2Au);
      breathSoundState = _RBX->breathSoundState;
      if ( v62 )
        v64 = s_breathZeroGSoundLookup[breathSoundState];
      else
        v64 = s_breathSoundLookup[breathSoundState];
      PlayerBreathState = CG_GetPlayerBreathState(v64);
LABEL_42:
      CG_SND_PlayBreathSound(_RBX, PlayerBreathState);
      return;
    }
    if ( v7 == 14 )
    {
      v39 = CG_GetPlayerBreathState(s_breathSoundStateHashLookup[18]);
      _RBX->breathMainState = BREATH_MAIN_OFFHAND_RECOVERY;
      v40 = v39;
      if ( v39 )
      {
        SND_StopSoundAliasById(_RBX->breathSoundId);
        __asm
        {
          vmovss  xmm3, cs:__real@3f800000; volumeScale
          vmovss  dword ptr [rsp+68h+fmt], xmm3
        }
        minBreaths = SND_PlayScaledSoundAlias(v40->inhaleAlias, (const LocalClientNum_t)_RBX->localClientNum, _RBX->predictedPlayerState.clientNum, *(float *)&_XMM3, fmtf, &_RBX->predictedPlayerState.origin, 0, SASYS_CGAME);
      }
LABEL_114:
      _RBX->breathSoundId = minBreaths;
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
  v30 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.pm_flags, ACTIVE, 0x2Au);
  v31 = _RBX->breathSoundState;
  if ( v30 )
    v32 = s_breathZeroGSoundLookup[v31];
  else
    v32 = s_breathSoundLookup[v31];
  v33 = CG_GetPlayerBreathState(v32);
  _RBX->breathMainState = BREATH_MAIN_AUTO_HOLD;
  if ( v33 )
    minBreaths = v33->minBreaths;
  _RBX->breathsLeft = minBreaths;
  _RBX->breathSoundOut = 0;
}

