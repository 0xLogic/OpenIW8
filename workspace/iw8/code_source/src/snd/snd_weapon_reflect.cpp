/*
==============
CG_SND_WeapReflectUpdate
==============
*/

void CG_SND_WeapReflectUpdate(void)
{
  ?CG_SND_WeapReflectUpdate@@YAXXZ();
}

/*
==============
SND_WeaponReflectionWorker
==============
*/

void __fastcall SND_WeaponReflectionWorker(const void *const cmdInfo)
{
  ?SND_WeaponReflectionWorker@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SND_InitWeaponRelection
==============
*/

void SND_InitWeaponRelection(void)
{
  ?SND_InitWeaponRelection@@YAXXZ();
}

/*
==============
SND_WeapReflectPlayPlayerSound
==============
*/

void __fastcall SND_WeapReflectPlayPlayerSound(const unsigned __int64 sndEnt, const vec3_t *org, const WeaponSFXPackage *sfxPackage, const SndWeapShotCountId shotCount, const int autoSimId, const __int64 autoSimTimeStamp)
{
  ?SND_WeapReflectPlayPlayerSound@@YAX_KAEBTvec3_t@@PEBUWeaponSFXPackage@@W4SndWeapShotCountId@@H_J@Z(sndEnt, org, sfxPackage, shotCount, autoSimId, autoSimTimeStamp);
}

/*
==============
SND_WeapReflectPlayNPCSound
==============
*/

void __fastcall SND_WeapReflectPlayNPCSound(const unsigned __int64 sndEnt, const vec3_t *org, const WeaponSFXPackage *sfxPackage, const SndWeapShotCountId shotCount, const int autoSimId, const __int64 autoSimTimeStamp)
{
  ?SND_WeapReflectPlayNPCSound@@YAX_KAEBTvec3_t@@PEBUWeaponSFXPackage@@W4SndWeapShotCountId@@H_J@Z(sndEnt, org, sfxPackage, shotCount, autoSimId, autoSimTimeStamp);
}

/*
==============
SND_DrawWeapReflOverlay
==============
*/

void __fastcall SND_DrawWeapReflOverlay(LocalClientNum_t localClientNum)
{
  ?SND_DrawWeapReflOverlay@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
SND_WeapReflectPlayExplosionSound
==============
*/

void __fastcall SND_WeapReflectPlayExplosionSound(const vec3_t *org, const unsigned int reflectionClass)
{
  ?SND_WeapReflectPlayExplosionSound@@YAXAEBTvec3_t@@I@Z(org, reflectionClass);
}

/*
==============
CG_SND_WeapReflectUpdate
==============
*/
void CG_SND_WeapReflectUpdate(void)
{
  const dvar_t *v0; 
  SndWeapReflectCastResultUpdate *v1; 
  SndWeapReflectCastResult *soundClipResults; 
  __int64 raycastIndex; 
  NPCResolvedWeapReflRequest *v4; 
  __int64 autoSimId; 
  __int64 autoSimTimeStamp; 
  LocalClientNum_t data; 
  __int128 v8; 
  float v9; 
  float v10; 
  snd_listener outListener; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 1239, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_SOUND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 1240, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_SOUND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_SOUND_UPDATE )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "CG_SND_WeapReflectUpdate");
  SND_GetListener(LOCAL_CLIENT_0, &outListener);
  if ( outListener.active && !CL_IsRenderingSplitScreen() && Physics_AreClientWorldsCreated() )
  {
    v0 = DCONST_DVARBOOL_snd_weapReflect_enabled;
    if ( !DCONST_DVARBOOL_snd_weapReflect_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    s_sndWeapReflect.reflectionsEnabled = v0->current.enabled;
    while ( s_sndWeapReflect.raycastUpdates.bufcount >= 1 )
    {
      if ( s_sndWeapReflect.raycastUpdates.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 63, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
        __debugbreak();
      v1 = &s_sndWeapReflect.raycastUpdates.buffer[s_sndWeapReflect.raycastUpdates.readPos];
      if ( v1->raycastIndex >= 8 )
      {
        LODWORD(autoSimTimeStamp) = 8;
        LODWORD(autoSimId) = v1->raycastIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 1263, ASSERT_TYPE_ASSERT, "(unsigned)( castUpdate->raycastIndex ) < (unsigned)( SndWeapReflect::MAX_RAYCASTS )", "castUpdate->raycastIndex doesn't index SndWeapReflect::MAX_RAYCASTS\n\t%i not in [0, %i)", autoSimId, autoSimTimeStamp) )
          __debugbreak();
      }
      soundClipResults = s_sndWeapReflect.soundClipResults;
      if ( !v1->isSoundClip )
        soundClipResults = s_sndWeapReflect.results;
      raycastIndex = v1->raycastIndex;
      *(__m256i *)soundClipResults[raycastIndex].position.v = *(__m256i *)v1->castResult.position.v;
      *(_OWORD *)&soundClipResults[raycastIndex].normal.z = *(_OWORD *)&v1->castResult.normal.z;
      if ( s_sndWeapReflect.raycastUpdates.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 70, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
        __debugbreak();
      s_sndWeapReflect.raycastUpdates.readPos = 0;
      if ( ((unsigned __int8)&s_sndWeapReflect.raycastUpdates.bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_sndWeapReflect.raycastUpdates.bufcount) )
        __debugbreak();
      _InterlockedDecrement(&s_sndWeapReflect.raycastUpdates.bufcount);
    }
    if ( !Sys_ExistsWorkerCmdsOfType(WRKCMD_SOUND_WEAPON_REFLECT) )
    {
      v8 = *(_OWORD *)outListener.orient.origin.v;
      data = outListener.localClientNum;
      v9 = outListener.orient.axis.m[0].v[1];
      v10 = outListener.orient.axis.m[0].v[2];
      Sys_AddWorkerCmd(WRKCMD_SOUND_WEAPON_REFLECT, &data);
    }
    while ( s_npcResolvedPlayRequest.bufcount >= 1 )
    {
      if ( s_npcResolvedPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 63, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
        __debugbreak();
      v4 = &s_npcResolvedPlayRequest.buffer[s_npcResolvedPlayRequest.readPos];
      SND_WeapReflectPlayQueuedNPCSound(&v4->org, &v4->orientation, &outListener.orient.origin, v4->sfxPackage, (const SndWeapShotCountId)v4->shotCount, v4->autoSimId, v4->autoSimTimeStamp, &v4->castResult);
      if ( s_npcResolvedPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 70, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
        __debugbreak();
      s_npcResolvedPlayRequest.readPos = 0;
      if ( ((unsigned __int64)&s_npcResolvedPlayRequest.bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_npcResolvedPlayRequest.bufcount) )
        __debugbreak();
      _InterlockedDecrement(&s_npcResolvedPlayRequest.bufcount);
    }
    SND_WeapReflectUpdatePlaySound();
  }
  else
  {
    s_sndWeapReflect.reflectionsEnabled = 0;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_AddTrackedWeapReflSound
==============
*/
void SND_AddTrackedWeapReflSound(unsigned int id, const SndAliasList *aliasList, const SndWeapReflDelayedSound *delayedSound, const vec3_t *position)
{
  unsigned int v4; 
  int *p_timestamp; 
  int *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  bool v45; 
  int v46; 
  int v47; 
  unsigned int v48; 
  __int64 v49; 
  float v50; 
  int v51; 
  int v52; 
  int v53; 
  int *v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 

  v4 = 0;
  v51 = 0;
  p_timestamp = &s_debugInfo[0].timestamp;
  do
  {
    if ( *p_timestamp < g_snd.time )
    {
      v49 = (__int64)(int)v4 << 8;
      *(_DWORD *)&s_debugInfo[0].aliasName[v49 + 128] = id;
      *(SndWeapReflDelayedSound *)((char *)&s_debugInfo[0].delayedInfo + v49) = *delayedSound;
      Core_strcpy(&s_debugInfo[0].aliasName[v49], 0x80ui64, aliasList->aliasName);
      *(int *)((char *)&s_debugInfo[0].timestamp + v49) = g_snd.time + 5000;
      *(float *)((char *)s_debugInfo[0].position.v + v49) = position->v[0];
      *(float *)((char *)&s_debugInfo[0].position.v[1] + v49) = position->v[1];
      v50 = position->v[2];
      goto LABEL_73;
    }
    ++v4;
    p_timestamp += 64;
  }
  while ( v4 < 0x10 );
  v7 = &s_debugInfo[2].timestamp;
  v8 = 0x7FFFFFFF;
  v52 = -1;
  v53 = 0x7FFFFFFF;
  v54 = &s_debugInfo[2].timestamp;
  do
  {
    v9 = v7[512];
    v10 = v9;
    v11 = *(v7 - 128);
    v12 = v7[448];
    v13 = v12;
    if ( v11 >= v8 )
      v11 = v8;
    v14 = v7[576];
    v15 = v7[640];
    v16 = v7[704];
    v17 = *(v7 - 64);
    if ( v17 >= v11 )
      v17 = v11;
    v55 = v11;
    v18 = v7[576];
    v19 = *v7;
    v20 = v7[640];
    v56 = v17;
    v63 = v7[448];
    v21 = v7[704];
    if ( *v7 >= v17 )
      v19 = v17;
    v65 = v7[512];
    v57 = v19;
    v22 = v7[64];
    if ( v22 >= v19 )
      v22 = v19;
    v23 = v7[128];
    v58 = v22;
    if ( v23 >= v22 )
      v23 = v22;
    v24 = v7[192];
    v59 = v23;
    if ( v24 >= v23 )
      v24 = v23;
    v25 = v7[256];
    v60 = v24;
    if ( v25 >= v24 )
      v25 = v24;
    v26 = v7[320];
    v61 = v25;
    if ( v26 >= v25 )
      v26 = v25;
    v27 = v7[384];
    v62 = v26;
    if ( v27 >= v26 )
      v27 = v26;
    v28 = v7[768];
    v29 = v7[832];
    v30 = v28;
    if ( v12 >= v27 )
      v13 = v27;
    v64 = v27;
    v31 = v51;
    if ( v9 >= v13 )
      v10 = v13;
    if ( v14 >= v10 )
      v18 = v10;
    if ( v15 >= v18 )
      v20 = v18;
    if ( v16 >= v20 )
      v21 = v20;
    if ( v28 >= v21 )
      v30 = v21;
    if ( *(v54 - 128) >= v53 )
      v31 = v52;
    v32 = v51 + 1;
    if ( *(v54 - 64) >= v55 )
      v32 = v31;
    v33 = v51 + 2;
    if ( *v54 >= v56 )
      v33 = v32;
    v34 = v51 + 3;
    if ( v54[64] >= v57 )
      v34 = v33;
    v35 = v51 + 4;
    if ( v54[128] >= v58 )
      v35 = v34;
    v36 = v51 + 5;
    if ( v54[192] >= v59 )
      v36 = v35;
    v37 = v51 + 6;
    if ( v54[256] >= v60 )
      v37 = v36;
    v38 = v51 + 7;
    if ( v54[320] >= v61 )
      v38 = v37;
    v39 = v51 + 8;
    if ( v54[384] >= v62 )
      v39 = v38;
    v40 = v51 + 9;
    if ( v63 >= v64 )
      v40 = v39;
    v41 = v51 + 10;
    if ( v65 >= v13 )
      v41 = v40;
    v42 = v51 + 11;
    if ( v14 >= v10 )
      v42 = v41;
    v43 = v51 + 12;
    if ( v15 >= v18 )
      v43 = v42;
    v44 = v51 + 13;
    if ( v16 >= v20 )
      v44 = v43;
    v45 = v28 < v21;
    v46 = v51 + 14;
    v8 = v29;
    if ( !v45 )
      v46 = v44;
    v47 = v51 + 15;
    if ( v29 >= v30 )
      v47 = v46;
    v54 += 1024;
    v48 = v51 + 16;
    v52 = v47;
    v45 = v29 < v30;
    v51 += 16;
    v7 = v54;
    if ( !v45 )
      v8 = v30;
    v53 = v8;
  }
  while ( v48 < 0x10 );
  if ( v47 > -1 )
  {
    v49 = (__int64)v47 << 8;
    *(_DWORD *)&s_debugInfo[0].aliasName[v49 + 128] = id;
    *(__m256i *)((char *)&s_debugInfo[0].delayedInfo.distanceType + v49) = *(__m256i *)&delayedSound->distanceType;
    *(__m256i *)(&s_debugInfo[0].delayedInfo.isPlayer + v49) = *(__m256i *)&delayedSound->isPlayer;
    *(__m256i *)((char *)&s_debugInfo[0].delayedInfo.soundPosition.z + v49) = *(__m256i *)&delayedSound->soundPosition.z;
    *(double *)((char *)&s_debugInfo[0].delayedInfo.shotCount + v49) = *(double *)&delayedSound->shotCount;
    Core_strcpy(&s_debugInfo[0].aliasName[v49], 0x80ui64, aliasList->aliasName);
    *(int *)((char *)&s_debugInfo[0].timestamp + v49) = g_snd.time + 5000;
    *(float *)((char *)s_debugInfo[0].position.v + v49) = position->v[0];
    *(float *)((char *)&s_debugInfo[0].position.v[1] + v49) = position->v[1];
    v50 = position->v[2];
LABEL_73:
    *(float *)((char *)&s_debugInfo[0].position.v[2] + v49) = v50;
  }
}

/*
==============
SND_DrawWeapReflOverlay
==============
*/
void SND_DrawWeapReflOverlay(LocalClientNum_t localClientNum)
{
  bool v1; 
  ScreenPlacement *v2; 
  float v3; 
  float *v4; 
  unsigned int i; 
  float v6; 
  float v7; 
  float v8; 
  bool v9; 
  const vec4_t *color; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  double v14; 
  const char *v15; 
  float v16; 
  float v17; 
  const char *v18; 
  double v21; 
  const char *v22; 
  const char *v23; 
  float v24; 
  __int128 v25; 
  float v26; 
  __int128 v27; 
  __int128 v29; 
  GfxFont *font; 
  double v36; 
  double v37; 
  const char *s; 
  float v41; 
  float v42; 
  vec3_t point; 
  snd_listener outListener; 

  if ( !s_sndWeapReflect.reflectionsEnabled )
    return;
  if ( localClientNum )
    return;
  SND_GetListener(LOCAL_CLIENT_0, &outListener);
  if ( !outListener.active )
    return;
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_10;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v1 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v1 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v1 )
      __debugbreak();
LABEL_10:
    v2 = &scrPlaceFull;
    goto LABEL_11;
  }
  v2 = scrPlaceViewDisplay;
LABEL_11:
  v3 = v2->virtualViewableMin.v[1];
  v42 = v2->virtualViewableMin.v[0];
  v4 = &s_debugInfo[0].position.v[2];
  v41 = (float)CG_DrawDevString(v2, v42, v3, 0.69999999, 0.69999999, "Weapon Reflection Overlay Enabled", &colorCyan, 5, cls.smallDevFont) + v3;
  for ( i = 0; i < 0x10; ++i )
  {
    if ( g_snd.time < *((_DWORD *)v4 - 3) )
    {
      v6 = *(v4 - 2);
      v7 = *v4;
      v8 = *v4 - outListener.orient.origin.v[2];
      v9 = *((_DWORD *)v4 - 4) == 0;
      color = &colorRedHeat;
      point.v[1] = *(v4 - 1);
      point.v[0] = v6;
      point.v[2] = v7;
      v11 = fsqrt((float)((float)((float)(v6 - outListener.orient.origin.v[0]) * (float)(v6 - outListener.orient.origin.v[0])) + (float)((float)(point.v[1] - outListener.orient.origin.v[1]) * (float)(point.v[1] - outListener.orient.origin.v[1]))) + (float)(v8 * v8));
      if ( !v9 )
        color = &colorWhite;
      if ( v11 >= 10.0 )
      {
        v13 = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
        if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        v12 = (float)(7.0 / v13->current.value) * v11;
      }
      else
      {
        v12 = FLOAT_0_050000001;
      }
      CL_AddDebugStarWithText(&point, &colorCyan, color, (const char *)v4 - 144, v12, 0, 1, 0);
      point.v[2] = point.v[2] - (float)(v12 * 12.0);
      v14 = v11;
      v15 = j_va("Distance: %.0f", v11);
      CL_AddDebugString(&point, color, v12, v15, 0, 1);
      v16 = *(v4 - 52);
      point.v[2] = point.v[2] - (float)(v12 * 12.0);
      v17 = log2f(v16);
      v18 = j_va("Pitch: %.2fst", (float)(v17 * 12.0));
      CL_AddDebugString(&point, color, v12, v18, 0, 1);
      _XMM0 = *((unsigned int *)v4 - 51);
      __asm { vmaxss  xmm0, xmm0, cs:__real@37803e84; X }
      point.v[2] = point.v[2] - (float)(v12 * 12.0);
      v21 = (float)(log10f_0(*(float *)&_XMM0) * 20.0);
      v22 = j_va("Vol: %.2fdB", v21);
      CL_AddDebugString(&point, color, v12, v22, 0, 1);
      point.v[2] = point.v[2] - (float)(v12 * 12.0);
      v23 = j_va("LPF: %.2f", *(v4 - 50));
      CL_AddDebugString(&point, color, v12, v23, 0, 1);
      if ( !*((_DWORD *)v4 - 4) )
      {
        point.v[2] = point.v[2] - (float)(v12 * 12.0);
        CL_AddDebugString(&point, color, v12, "Stopped", 0, 1);
      }
      v25 = *((unsigned int *)v4 - 1);
      v24 = *(v4 - 1) - outListener.orient.origin.v[1];
      v26 = *(v4 - 2) - outListener.orient.origin.v[0];
      *(float *)&v25 = (float)((float)(v24 * outListener.orient.axis.m[1].v[1]) + (float)(v26 * outListener.orient.axis.m[1].v[0])) + (float)((float)(*v4 - outListener.orient.origin.v[2]) * outListener.orient.axis.m[1].v[2]);
      v27 = v25 ^ _xmm;
      *(float *)&v27 = atan2f_0(COERCE_FLOAT(v25 ^ _xmm), (float)((float)(v24 * outListener.orient.axis.m[0].v[1]) + (float)(v26 * outListener.orient.axis.m[0].v[0])) + (float)((float)(*v4 - outListener.orient.origin.v[2]) * outListener.orient.axis.m[0].v[2]));
      v29 = v27;
      *(float *)&v29 = *(float *)&v27 * 57.295776;
      _XMM2 = v29;
      _XMM0 = LODWORD(FLOAT_360_0);
      font = cls.smallDevFont;
      __asm
      {
        vcmpltss xmm0, xmm0, xmm2
        vblendvps xmm9, xmm2, xmm1, xmm0
      }
      _XMM0 = *((unsigned int *)v4 - 51);
      __asm { vmaxss  xmm6, xmm0, cs:__real@37803e84 }
      v36 = *(v4 - 50);
      v37 = (float)(log2f(*(v4 - 52)) * 12.0);
      *(double *)&_XMM2 = (float)(log10f_0(*(float *)&_XMM6) * 20.0);
      __asm
      {
        vcmpltss xmm0, xmm9, xmm0
        vblendvps xmm0, xmm9, xmm1, xmm0
      }
      s = j_va("%.0f %s Dist: %.0f Pitch %.2fst Vol %.2fdB LPF %.0f", *(float *)&_XMM0, v4 - 36, v14, v37, (_QWORD)_XMM2, v36);
      v41 = (float)CG_DrawDevString(v2, v42, v41, 0.69999999, 0.69999999, s, color, 5, font) + v41;
    }
    v4 += 64;
  }
}

/*
==============
SND_InitWeaponRelection
==============
*/
void SND_InitWeaponRelection(void)
{
  SndWeapReflDelayedSound *v0; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int *p_id; 

  v0 = &s_sndDelayed[1];
  v1 = 0;
  do
  {
    v1 += 64;
    v0[-1].distanceType = SND_WEAP_REFL_NONE;
    v0->distanceType = SND_WEAP_REFL_NONE;
    v0[1].distanceType = SND_WEAP_REFL_NONE;
    v0[2].distanceType = SND_WEAP_REFL_NONE;
    v0[3].distanceType = SND_WEAP_REFL_NONE;
    v0[4].distanceType = SND_WEAP_REFL_NONE;
    v0[5].distanceType = SND_WEAP_REFL_NONE;
    v0[6].distanceType = SND_WEAP_REFL_NONE;
    v0[7].distanceType = SND_WEAP_REFL_NONE;
    v0[8].distanceType = SND_WEAP_REFL_NONE;
    v0[9].distanceType = SND_WEAP_REFL_NONE;
    v0[10].distanceType = SND_WEAP_REFL_NONE;
    v0[11].distanceType = SND_WEAP_REFL_NONE;
    v0[12].distanceType = SND_WEAP_REFL_NONE;
    v0[13].distanceType = SND_WEAP_REFL_NONE;
    v0[14].distanceType = SND_WEAP_REFL_NONE;
    v0[15].distanceType = SND_WEAP_REFL_NONE;
    v0[16].distanceType = SND_WEAP_REFL_NONE;
    v0[17].distanceType = SND_WEAP_REFL_NONE;
    v0[18].distanceType = SND_WEAP_REFL_NONE;
    v0[19].distanceType = SND_WEAP_REFL_NONE;
    v0[20].distanceType = SND_WEAP_REFL_NONE;
    v0[21].distanceType = SND_WEAP_REFL_NONE;
    v0[22].distanceType = SND_WEAP_REFL_NONE;
    v0[23].distanceType = SND_WEAP_REFL_NONE;
    v0[24].distanceType = SND_WEAP_REFL_NONE;
    v0[25].distanceType = SND_WEAP_REFL_NONE;
    v0[26].distanceType = SND_WEAP_REFL_NONE;
    v0[27].distanceType = SND_WEAP_REFL_NONE;
    v0[28].distanceType = SND_WEAP_REFL_NONE;
    v0[29].distanceType = SND_WEAP_REFL_NONE;
    v0[30].distanceType = SND_WEAP_REFL_NONE;
    v0[31].distanceType = SND_WEAP_REFL_NONE;
    v0[32].distanceType = SND_WEAP_REFL_NONE;
    v0[33].distanceType = SND_WEAP_REFL_NONE;
    v0[34].distanceType = SND_WEAP_REFL_NONE;
    v0[35].distanceType = SND_WEAP_REFL_NONE;
    v0[36].distanceType = SND_WEAP_REFL_NONE;
    v0[37].distanceType = SND_WEAP_REFL_NONE;
    v0[38].distanceType = SND_WEAP_REFL_NONE;
    v0[39].distanceType = SND_WEAP_REFL_NONE;
    v0[40].distanceType = SND_WEAP_REFL_NONE;
    v0[41].distanceType = SND_WEAP_REFL_NONE;
    v0[42].distanceType = SND_WEAP_REFL_NONE;
    v0[43].distanceType = SND_WEAP_REFL_NONE;
    v0[44].distanceType = SND_WEAP_REFL_NONE;
    v0[45].distanceType = SND_WEAP_REFL_NONE;
    v0[46].distanceType = SND_WEAP_REFL_NONE;
    v0[47].distanceType = SND_WEAP_REFL_NONE;
    v0[48].distanceType = SND_WEAP_REFL_NONE;
    v0[49].distanceType = SND_WEAP_REFL_NONE;
    v0[50].distanceType = SND_WEAP_REFL_NONE;
    v0[51].distanceType = SND_WEAP_REFL_NONE;
    v0[52].distanceType = SND_WEAP_REFL_NONE;
    v0[53].distanceType = SND_WEAP_REFL_NONE;
    v0[54].distanceType = SND_WEAP_REFL_NONE;
    v0[55].distanceType = SND_WEAP_REFL_NONE;
    v0[56].distanceType = SND_WEAP_REFL_NONE;
    v0[57].distanceType = SND_WEAP_REFL_NONE;
    v0[58].distanceType = SND_WEAP_REFL_NONE;
    v0[59].distanceType = SND_WEAP_REFL_NONE;
    v0[60].distanceType = SND_WEAP_REFL_NONE;
    v0[61].distanceType = SND_WEAP_REFL_NONE;
    v0[62].distanceType = SND_WEAP_REFL_NONE;
    v0 += 64;
  }
  while ( v1 < 0x40 );
  v2 = 0;
  p_id = &s_debugInfo[1].id;
  do
  {
    v2 += 16;
    *(p_id - 64) = 0;
    *p_id = 0;
    p_id[64] = 0;
    p_id[128] = 0;
    p_id[192] = 0;
    p_id[256] = 0;
    p_id[320] = 0;
    p_id[384] = 0;
    p_id[448] = 0;
    p_id[512] = 0;
    p_id[576] = 0;
    p_id[640] = 0;
    p_id[704] = 0;
    p_id[768] = 0;
    p_id[832] = 0;
    p_id[896] = 0;
    p_id += 1024;
  }
  while ( v2 < 0x10 );
  *(_QWORD *)&s_sndWeapReflect.raycastUpdates.readPos = 0i64;
  s_sndWeapReflect.raycastUpdates.bufcount = 0;
  *(_QWORD *)&s_npcNewPlayRequest.readPos = 0i64;
  s_npcNewPlayRequest.bufcount = 0;
  *(_QWORD *)&s_npcResolvedPlayRequest.readPos = 0i64;
  s_npcResolvedPlayRequest.bufcount = 0;
}

/*
==============
SND_UpdateTrackedWeapReflSound
==============
*/
void SND_UpdateTrackedWeapReflSound()
{
  int time; 
  unsigned int *p_id; 
  unsigned int i; 
  int v3; 
  unsigned int *p_playbackId; 
  unsigned int *v5; 
  unsigned int v6; 
  unsigned int *v7; 
  unsigned int v8; 
  unsigned int *v9; 
  unsigned int v10; 
  unsigned int *v11; 
  unsigned int v12; 
  unsigned int *v13; 
  unsigned int v14; 
  unsigned int *v15; 
  unsigned int v16; 
  unsigned int *v17; 

  time = g_snd.time;
  p_id = &s_debugInfo[1].id;
  for ( i = 0; i < 0x10; i += 8 )
  {
    v3 = *(p_id - 64);
    if ( v3 )
    {
      p_playbackId = &g_snd.voices[0].playbackId;
      while ( *p_playbackId != v3 )
      {
        p_playbackId += 492;
        if ( (__int64)p_playbackId >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
        {
          *(p_id - 64) = 0;
          goto LABEL_8;
        }
      }
      *(p_id - 63) = time + 5000;
    }
LABEL_8:
    if ( *p_id )
    {
      v5 = &g_snd.voices[0].playbackId;
      while ( *v5 != *p_id )
      {
        v5 += 492;
        if ( (__int64)v5 >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
        {
          *p_id = 0;
          goto LABEL_14;
        }
      }
      p_id[1] = time + 5000;
    }
LABEL_14:
    v6 = p_id[64];
    if ( v6 )
    {
      v7 = &g_snd.voices[0].playbackId;
      while ( *v7 != v6 )
      {
        v7 += 492;
        if ( (__int64)v7 >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
        {
          p_id[64] = 0;
          goto LABEL_20;
        }
      }
      p_id[65] = time + 5000;
    }
LABEL_20:
    v8 = p_id[128];
    if ( v8 )
    {
      v9 = &g_snd.voices[0].playbackId;
      while ( *v9 != v8 )
      {
        v9 += 492;
        if ( (__int64)v9 >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
        {
          p_id[128] = 0;
          goto LABEL_26;
        }
      }
      p_id[129] = time + 5000;
    }
LABEL_26:
    v10 = p_id[192];
    if ( v10 )
    {
      v11 = &g_snd.voices[0].playbackId;
      while ( *v11 != v10 )
      {
        v11 += 492;
        if ( (__int64)v11 >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
        {
          p_id[192] = 0;
          goto LABEL_32;
        }
      }
      p_id[193] = time + 5000;
    }
LABEL_32:
    v12 = p_id[256];
    if ( v12 )
    {
      v13 = &g_snd.voices[0].playbackId;
      while ( *v13 != v12 )
      {
        v13 += 492;
        if ( (__int64)v13 >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
        {
          p_id[256] = 0;
          goto LABEL_38;
        }
      }
      p_id[257] = time + 5000;
    }
LABEL_38:
    v14 = p_id[320];
    if ( v14 )
    {
      v15 = &g_snd.voices[0].playbackId;
      while ( *v15 != v14 )
      {
        v15 += 492;
        if ( (__int64)v15 >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
        {
          p_id[320] = 0;
          goto LABEL_44;
        }
      }
      p_id[321] = time + 5000;
    }
LABEL_44:
    v16 = p_id[384];
    if ( v16 )
    {
      v17 = &g_snd.voices[0].playbackId;
      while ( *v17 != v16 )
      {
        v17 += 492;
        if ( (__int64)v17 >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
        {
          p_id[384] = 0;
          goto LABEL_50;
        }
      }
      p_id[385] = time + 5000;
    }
LABEL_50:
    p_id += 512;
  }
}

/*
==============
SND_WeapReflPerformNPCTrace
==============
*/
__int64 SND_WeapReflPerformNPCTrace(SndWeapReflectCastResult *castResult, const vec3_t *org, const vec3_t *direction, const vec3_t *listenerPos)
{
  const dvar_t *v8; 
  float value; 
  float v10; 
  float v11; 
  float v12; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  double RaycastHitFraction; 
  const dvar_t *v15; 
  float distance; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  vec3_t *p_normal; 
  unsigned __int8 v27; 
  hkMemoryAllocator *v28; 
  hkMemoryAllocator *v29; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v32; 
  __int64 v33; 
  vec3_t end; 

  v33 = -2i64;
  castResult->weapReflDefId = 0;
  v8 = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
  if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  v10 = direction->v[0];
  v11 = value * direction->v[1];
  v12 = value * direction->v[2];
  end.v[0] = (float)(value * direction->v[0]) + org->v[0];
  end.v[1] = v11 + org->v[1];
  end.v[2] = v12 + org->v[2];
  castResult->direction.v[0] = v10;
  castResult->direction.v[1] = direction->v[1];
  castResult->direction.v[2] = direction->v[2];
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v32, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v32, 0, 0, 1, 1, 0, 1, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 2097169;
  extendedData.ignoreBodies = &v32;
  ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_CLIENT_FIRST);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 1205, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  Physics_Raycast(PHYSICS_WORLD_ID_CLIENT_FIRST, org, &end, &extendedData, ClosestResult);
  if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
    goto LABEL_13;
  RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
  v15 = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
  if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  castResult->distance = *(float *)&RaycastHitFraction * v15->current.value;
  castResult->surfaceIndex = (HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
  distance = castResult->distance;
  v17 = distance * castResult->direction.v[0];
  v18 = distance * castResult->direction.v[1];
  v19 = distance * castResult->direction.v[2];
  v20 = v17 + org->v[0];
  castResult->position.v[0] = v20;
  v21 = v18 + org->v[1];
  castResult->position.v[1] = v21;
  v22 = v19 + org->v[2];
  castResult->position.v[2] = v22;
  v23 = listenerPos->v[0] - v20;
  v24 = listenerPos->v[1] - v21;
  v25 = listenerPos->v[2] - v22;
  p_normal = &castResult->normal;
  HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, p_normal);
  if ( (float)((float)((float)(v24 * p_normal->v[1]) + (float)(v23 * p_normal->v[0])) + (float)(v25 * p_normal->v[2])) > 0.0 )
    v27 = 1;
  else
LABEL_13:
    v27 = 0;
  v28 = hkMemHeapAllocator();
  v32.m_ignoreBodies.m_size = 0;
  if ( v32.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v28, v32.m_ignoreBodies.m_data, 4, v32.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v32.m_ignoreBodies.m_data = NULL;
  v32.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v29 = hkMemHeapAllocator();
  v32.m_ignoreEntities.m_size = 0;
  if ( v32.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v29, v32.m_ignoreEntities.m_data, 8, v32.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return v27;
}

/*
==============
SND_WeapReflPlaySoundAliasImmediate
==============
*/
void SND_WeapReflPlaySoundAliasImmediate(const WeapReflectDistance distanceType, const SndWeapReflectPlaySound *params, const float pitch, const WeapReflDir direction, const int startDelayUs, const vec3_t *soundPosition, const vec3_t *reflectionPosition, const bool enableOcclusion)
{
  const SndAliasList *v10; 
  unsigned __int64 v11; 
  const WeaponReflectionDef *weapReflDef; 
  __int32 v13; 
  float rearVol; 
  float rearEq; 
  int autoSimId; 
  __int64 autoSimTimeStamp; 
  float v18; 
  unsigned int v19; 
  const WeaponReflectionDef *v20; 
  SndAlias *outAliasA; 
  SndWeapReflDelayedSound delayedSound; 
  SndPlayParams inParams; 
  SndAliasGroupTracking inOutTracking; 

  v10 = SND_WeapReflectGenAlias(distanceType, direction, params->weapReflDef, params->sfxPackage, params->isPlayer, params->surfaceIndex);
  SND_PickSoundAliasFromList(v10, LOCAL_CLIENT_0, 2046, reflectionPosition, (const SndAlias **)&outAliasA, NULL, NULL);
  v11 = ((unsigned __int64)enableOcclusion << 36) | CG_GenerateSndEntHandle(LOCAL_CLIENT_0, 2046) & 0xFFFFFFEFFFFFFFFFui64;
  if ( outAliasA )
  {
    weapReflDef = params->weapReflDef;
    if ( direction )
    {
      v13 = direction - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          rearVol = weapReflDef->rearVol;
          rearEq = weapReflDef->rearEq;
        }
        else
        {
          rearVol = FLOAT_1_0;
          rearEq = FLOAT_N1_0;
        }
      }
      else
      {
        rearVol = weapReflDef->sideVol;
        rearEq = weapReflDef->sideEq;
      }
    }
    else
    {
      rearVol = weapReflDef->frontVol;
      rearEq = weapReflDef->frontEq;
    }
    if ( params->playerDef->zoneType != weapReflDef->zoneType )
      rearVol = rearVol * weapReflDef->zoneTypeScalar;
    autoSimId = params->autoSimId;
    inParams.hpfCutoff = FLOAT_N1_0;
    inParams.startOffsetFraction = 0.0;
    inParams.autoSimId = autoSimId;
    autoSimTimeStamp = params->autoSimTimeStamp;
    *(_QWORD *)&inParams.aliasId = 0i64;
    inParams.timeshift = 0;
    inParams.fadeTime = 0;
    inParams.startPaused = 0;
    inParams.reflectionClass = 0;
    inParams.autoSimTimeStamp = autoSimTimeStamp;
    LODWORD(autoSimTimeStamp) = params->shotCount;
    inParams.distanceScale = FLOAT_1_0;
    v18 = soundPosition->v[1];
    inParams.org.v[0] = soundPosition->v[0];
    inParams.org.v[2] = soundPosition->v[2];
    inParams.lfeScale = FLOAT_1_0;
    inParams.volumeScale = rearVol;
    inParams.pitch = pitch;
    inParams.org.v[1] = v18;
    inParams.lpfCutoff = rearEq;
    inParams.adsrIndex = -1;
    inParams.system = SASYS_CGAME;
    *(_QWORD *)&inParams.surfaceType = -1i64;
    inParams.contextIndex2 = -1;
    *(_WORD *)&inParams.isADS = 256;
    inParams.aliasList = v10;
    inParams.sndEnt = v11;
    inParams.autoSimShotCount = autoSimTimeStamp;
    inParams.additionalStartDelayUs = startDelayUs;
    SND_InitAliasGroupTracking(&inOutTracking);
    v19 = SND_PlaySoundAliasCore(outAliasA, 1.0, &inParams, &inOutTracking);
    SND_FinalizeAliasGroupTracking(&inOutTracking);
    delayedSound.isPlayer = params->isPlayer;
    delayedSound.sfxPackage = params->sfxPackage;
    v20 = params->weapReflDef;
    delayedSound.distanceType = SND_WEAP_REFL_CLOSE;
    delayedSound.timeMStoStart = startDelayUs / 1000;
    delayedSound.weapReflDef = v20;
    delayedSound.pitch = pitch;
    delayedSound.vol = rearVol;
    delayedSound.lpfCutoff = rearEq;
    SND_AddTrackedWeapReflSound(v19, v10, &delayedSound, soundPosition);
  }
}

/*
==============
SND_WeapReflectGenAlias
==============
*/
SndAliasList *SND_WeapReflectGenAlias(WeapReflectDistance distanceType, WeapReflDir direction, const WeaponReflectionDef *weapReflDef, const WeaponSFXPackage *sfxPackage, bool isPlayer, int surfaceIndex)
{
  const char *type; 
  const char *v7; 
  const char *szWeapSndReflectionClass; 
  const char *weaponClass; 
  __int32 v13; 
  __int32 v14; 
  __int32 v15; 
  __int32 v16; 
  __int32 v17; 
  __int32 v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  SndAliasList *result; 
  char dest[128]; 

  type = (char *)&queryFormat.fmt + 3;
  v7 = (char *)&queryFormat.fmt + 3;
  if ( sfxPackage )
  {
    szWeapSndReflectionClass = sfxPackage->szWeapSndReflectionClass;
    if ( !szWeapSndReflectionClass || !*szWeapSndReflectionClass )
      szWeapSndReflectionClass = "default";
    if ( direction )
    {
      if ( (unsigned int)(direction - 3) <= 1 && sfxPackage->szWeapSndReflDistantOverride )
        szWeapSndReflectionClass = sfxPackage->szWeapSndReflDistantOverride;
    }
    else if ( sfxPackage->szWeapSndReflFrontOverride )
    {
      szWeapSndReflectionClass = sfxPackage->szWeapSndReflFrontOverride;
    }
  }
  else
  {
    weaponClass = weapReflDef->weaponClass;
    if ( (!weaponClass || !*weaponClass) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 411, ASSERT_TYPE_ASSERT, "(weapReflDef->weaponClass && weapReflDef->weaponClass[0])", (const char *)&queryFormat, "weapReflDef->weaponClass && weapReflDef->weaponClass[0]") )
      __debugbreak();
    szWeapSndReflectionClass = weapReflDef->weaponClass;
  }
  if ( direction )
  {
    v13 = direction - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            v7 = "lsrs";
        }
        else
        {
          v7 = "lr";
        }
      }
      else
      {
        v7 = "rear";
      }
    }
    else
    {
      v7 = "side";
    }
  }
  else
  {
    v7 = "front";
  }
  v16 = distanceType - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
          v19 = "dist";
        else
          v19 = "error";
      }
      else
      {
        v19 = "far";
      }
    }
    else
    {
      v19 = "med";
    }
  }
  else
  {
    v19 = "close";
  }
  v20 = "npc";
  if ( weapReflDef->type )
    type = weapReflDef->type;
  if ( isPlayer )
    v20 = "plr";
  v21 = Com_SurfaceTypeToName(surfaceIndex);
  Com_sprintf(dest, 0x80ui64, "wex_%s_%s_%s_%s_%s_%s", szWeapSndReflectionClass, type, v19, v7, v20, v21);
  result = SND_TryFindAlias(dest);
  if ( !result )
  {
    Com_sprintf(dest, 0x80ui64, "wex_%s_%s_%s_%s_%s_default", szWeapSndReflectionClass, type, v19, v7, v20);
    return SND_FindAlias(dest);
  }
  return result;
}

/*
==============
SND_WeapReflectGetPitch
==============
*/
float SND_WeapReflectGetPitch(const WeaponReflectionDef *weapDef, const float distance, const WeapReflectDistance distanceType, bool isNPC)
{
  float npcCloseMedThreshold; 
  float npcMedFarThreshold; 
  float npcPitchDistMed; 
  float npcMaxPitchMed; 
  double v8; 
  float result; 

  if ( isNPC )
  {
    switch ( distanceType )
    {
      case SND_WEAP_REFL_MEDIUM:
        npcCloseMedThreshold = weapDef->npcCloseMedThreshold;
        npcMedFarThreshold = weapDef->npcMedFarThreshold;
        npcPitchDistMed = weapDef->npcPitchDistMed;
        npcMaxPitchMed = weapDef->npcMaxPitchMed;
        goto LABEL_9;
      case SND_WEAP_REFL_FAR:
        npcCloseMedThreshold = weapDef->npcMedFarThreshold;
        npcMedFarThreshold = weapDef->npcFarThreshold;
        npcPitchDistMed = weapDef->npcPitchDistFar;
        npcMaxPitchMed = weapDef->npcMaxPitchFar;
        goto LABEL_9;
      default:
        goto $LN36_64;
    }
  }
  switch ( distanceType )
  {
    case SND_WEAP_REFL_CLOSE:
      npcMedFarThreshold = weapDef->closeMedThreshold;
      npcPitchDistMed = weapDef->pitchDistClose;
      npcMaxPitchMed = weapDef->maxPitchClose;
      npcCloseMedThreshold = 0.0;
      goto LABEL_9;
    case SND_WEAP_REFL_MEDIUM:
      npcCloseMedThreshold = weapDef->closeMedThreshold;
      npcMedFarThreshold = weapDef->medFarThreshold;
      npcPitchDistMed = weapDef->pitchDistMed;
      npcMaxPitchMed = weapDef->maxPitchMed;
      goto LABEL_9;
    case SND_WEAP_REFL_FAR:
      npcCloseMedThreshold = weapDef->medFarThreshold;
      npcMedFarThreshold = weapDef->farThreshold;
      npcPitchDistMed = weapDef->pitchDistFar;
      npcMaxPitchMed = weapDef->maxPitchFar;
LABEL_9:
      if ( npcCloseMedThreshold >= npcMedFarThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 569, ASSERT_TYPE_ASSERT, "(minDist < maxDist)", (const char *)&queryFormat, "minDist < maxDist") )
        __debugbreak();
      if ( npcPitchDistMed < npcCloseMedThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 570, ASSERT_TYPE_ASSERT, "(pitchDist >= minDist)", (const char *)&queryFormat, "pitchDist >= minDist") )
        __debugbreak();
      if ( npcPitchDistMed > npcMedFarThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 571, ASSERT_TYPE_ASSERT, "(pitchDist <= maxDist)", (const char *)&queryFormat, "pitchDist <= maxDist") )
        __debugbreak();
      if ( distance < npcCloseMedThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 572, ASSERT_TYPE_ASSERT, "(distance >= minDist)", (const char *)&queryFormat, "distance >= minDist") )
        __debugbreak();
      if ( distance >= npcMedFarThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 573, ASSERT_TYPE_ASSERT, "(distance < maxDist)", (const char *)&queryFormat, "distance < maxDist") )
        __debugbreak();
      v8 = I_fclamp((float)(distance - npcCloseMedThreshold) / (float)(npcPitchDistMed - npcCloseMedThreshold), 0.0, 1.0);
      result = (float)(*(float *)&v8 * npcMaxPitchMed) + (float)(1.0 - *(float *)&v8);
      break;
    default:
$LN36_64:
      result = FLOAT_1_0;
      break;
  }
  return result;
}

/*
==============
SND_WeapReflectPlayDist
==============
*/
void SND_WeapReflectPlayDist(SndWeapReflectPlaySound *params, const vec3_t *originPosition, const vec3_t *listenerPos, const vec3_t *listenerDir, unsigned int reflectionClassHash)
{
  __int128 v5; 
  __int128 v6; 
  const WeaponReflectionDef *WeapReflDefWithClass; 
  ZoneDef *v10; 
  unsigned int WeapReflDefId; 
  const WeaponReflectionDef *v12; 
  unsigned int v13; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  float value; 
  float v18; 
  const dvar_t *v19; 
  float v20; 
  float v21; 
  float v22; 
  ZoneDef *outZoneFront; 
  ZoneDef *zone; 
  vec3_t soundPosition; 
  __int128 v26; 
  __int128 v27; 

  WeapReflDefWithClass = NULL;
  CG_ChooseWeapReflDistantZones(LOCAL_CLIENT_0, listenerPos, listenerDir, (const ZoneDef **)&outZoneFront, (const ZoneDef **)&zone);
  v10 = outZoneFront;
  if ( outZoneFront )
  {
    WeapReflDefId = CG_GetWeapReflDefId(outZoneFront);
    WeapReflDefWithClass = SND_FindWeapReflDefWithClass(WeapReflDefId, reflectionClassHash);
    v10 = outZoneFront;
  }
  v12 = WeapReflDefWithClass;
  if ( zone && v10 != zone )
  {
    v13 = CG_GetWeapReflDefId(zone);
    v12 = SND_FindWeapReflDefWithClass(v13, reflectionClassHash);
  }
  params->surfaceIndex = 0;
  if ( WeapReflDefWithClass )
  {
    params->weapReflDef = WeapReflDefWithClass;
    v14 = DCONST_DVARFLT_snd_weapReflect_distantVoiceDistance;
    v27 = v5;
    v26 = v6;
    v15 = s_sndWeapReflect.results[0].direction.v[0];
    v16 = s_sndWeapReflect.results[0].direction.v[1];
    if ( !DCONST_DVARFLT_snd_weapReflect_distantVoiceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_distantVoiceDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    value = v14->current.value;
    v18 = (float)(v16 * value) + originPosition->v[1];
    soundPosition.v[0] = (float)(v15 * value) + originPosition->v[0];
    soundPosition.v[2] = originPosition->v[2];
    soundPosition.v[1] = v18;
    SND_WeapReflPlaySoundAliasImmediate(SND_WEAP_REFL_DIST, params, 1.0, SND_WEAP_REFL_DIR_DIST_FRONT, 0, &soundPosition, &soundPosition, 0);
  }
  if ( v12 )
  {
    params->weapReflDef = v12;
    v19 = DCONST_DVARFLT_snd_weapReflect_distantVoiceDistance;
    if ( !DCONST_DVARFLT_snd_weapReflect_distantVoiceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_distantVoiceDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = v19->current.value;
    v21 = (float)(v20 * s_sndWeapReflect.results[4].direction.v[0]) + originPosition->v[0];
    soundPosition.v[1] = (float)(v20 * s_sndWeapReflect.results[4].direction.v[1]) + originPosition->v[1];
    v22 = (float)(v20 * s_sndWeapReflect.results[4].direction.v[2]) + originPosition->v[2];
    soundPosition.v[0] = v21;
    soundPosition.v[2] = v22;
    SND_WeapReflPlaySoundAliasImmediate(SND_WEAP_REFL_DIST, params, 1.0, SND_WEAP_REFL_DIR_DIST_REAR, 0, &soundPosition, &soundPosition, 0);
  }
}

/*
==============
SND_WeapReflectPlayExplosionSound
==============
*/
void SND_WeapReflectPlayExplosionSound(const vec3_t *org, const unsigned int reflectionClass)
{
  unsigned int CurrentWeapReflDefId; 
  int v5; 
  __int128 v6; 
  __int128 v7; 
  float v8; 
  __int128 v9; 
  float v10; 
  int v12; 
  __int128 v14; 
  __int128 v17; 
  __int128 v20; 
  __int128 v23; 
  __int128 v26; 
  __int128 v29; 
  int *i; 
  __int64 v33; 
  __int64 v34; 
  SndWeapReflectCastResult *v35; 
  const WeaponReflectionDef *WeapReflDefWithClass; 
  float v37; 
  float v38; 
  float v39; 
  float distance; 
  float v41; 
  float Pitch; 
  WeapReflectDistance v43; 
  vec3_t *reflectionPosition; 
  SndWeapReflectPlaySound params; 
  __int64 v46; 
  ScopedCriticalSection v47; 
  vec3_t soundPosition; 
  snd_listener outListener; 
  int v50[4]; 

  v46 = -2i64;
  if ( s_sndWeapReflect.reflectionsEnabled )
  {
    SND_GetListener(LOCAL_CLIENT_0, &outListener);
    if ( outListener.active )
    {
      CurrentWeapReflDefId = CG_GetCurrentWeapReflDefId();
      params.playerDef = SND_FindWeapReflDefWithClass(CurrentWeapReflDefId, reflectionClass);
      if ( params.playerDef )
      {
        ScopedCriticalSection::ScopedCriticalSection(&v47, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
        params.isPlayer = 1;
        v5 = 0;
        params.sfxPackage = NULL;
        params.shotCount = SND_WEAP_SHOT_UNCOUNTED;
        params.autoSimId = -1;
        params.autoSimTimeStamp = 0i64;
        v7 = LODWORD(org->v[1]);
        *(float *)&v7 = org->v[1] - outListener.orient.origin.v[1];
        v6 = v7;
        v9 = LODWORD(org->v[0]);
        v8 = org->v[0] - outListener.orient.origin.v[0];
        v10 = org->v[2] - outListener.orient.origin.v[2];
        *(float *)&v9 = (float)((float)(v8 * s_sndWeapReflect.results[0].direction.v[0]) + (float)(*(float *)&v6 * s_sndWeapReflect.results[0].direction.v[1])) + (float)(v10 * s_sndWeapReflect.results[0].direction.v[2]);
        _XMM4 = v9;
        v12 = -1;
        if ( *(float *)&v9 < 3.4028235e38 )
          v12 = 0;
        __asm { vminss  xmm5, xmm4, cs:__real@7f7fffff }
        v14 = v6;
        *(float *)&v14 = (float)((float)(*(float *)&v6 * s_sndWeapReflect.results[1].direction.v[1]) + (float)(v8 * s_sndWeapReflect.results[1].direction.v[0])) + (float)(v10 * s_sndWeapReflect.results[1].direction.v[2]);
        _XMM3 = v14;
        if ( *(float *)&_XMM5 > *(float *)&v14 )
          v12 = 1;
        __asm { vminss  xmm4, xmm3, xmm5 }
        v17 = v6;
        *(float *)&v17 = (float)((float)(*(float *)&v6 * s_sndWeapReflect.results[2].direction.v[1]) + (float)(v8 * s_sndWeapReflect.results[2].direction.v[0])) + (float)(v10 * s_sndWeapReflect.results[2].direction.v[2]);
        _XMM3 = v17;
        if ( *(float *)&_XMM4 > *(float *)&v17 )
          v12 = 2;
        __asm { vminss  xmm5, xmm3, xmm4 }
        v20 = v6;
        *(float *)&v20 = (float)((float)(*(float *)&v6 * s_sndWeapReflect.results[3].direction.v[1]) + (float)(v8 * s_sndWeapReflect.results[3].direction.v[0])) + (float)(v10 * s_sndWeapReflect.results[3].direction.v[2]);
        _XMM3 = v20;
        if ( *(float *)&_XMM5 > *(float *)&v20 )
          v12 = 3;
        __asm { vminss  xmm4, xmm3, xmm5 }
        v23 = v6;
        *(float *)&v23 = (float)((float)(*(float *)&v6 * s_sndWeapReflect.results[4].direction.v[1]) + (float)(v8 * s_sndWeapReflect.results[4].direction.v[0])) + (float)(v10 * s_sndWeapReflect.results[4].direction.v[2]);
        _XMM3 = v23;
        if ( *(float *)&_XMM4 > *(float *)&v23 )
          v12 = 4;
        __asm { vminss  xmm4, xmm3, xmm4 }
        v26 = v6;
        *(float *)&v26 = (float)((float)(*(float *)&v6 * s_sndWeapReflect.results[5].direction.v[1]) + (float)(v8 * s_sndWeapReflect.results[5].direction.v[0])) + (float)(v10 * s_sndWeapReflect.results[5].direction.v[2]);
        _XMM3 = v26;
        if ( *(float *)&_XMM4 > *(float *)&v26 )
          v12 = 5;
        __asm { vminss  xmm5, xmm3, xmm4 }
        v29 = v6;
        *(float *)&v29 = (float)((float)(*(float *)&v6 * s_sndWeapReflect.results[6].direction.v[1]) + (float)(v8 * s_sndWeapReflect.results[6].direction.v[0])) + (float)(v10 * s_sndWeapReflect.results[6].direction.v[2]);
        _XMM4 = v29;
        if ( *(float *)&_XMM5 > *(float *)&v29 )
          v12 = 6;
        v50[0] = v12;
        __asm { vminss  xmm0, xmm4, xmm5 }
        if ( (float)((float)((float)(*(float *)&v6 * s_sndWeapReflect.results[7].direction.v[1]) + (float)(v8 * s_sndWeapReflect.results[7].direction.v[0])) + (float)(v10 * s_sndWeapReflect.results[7].direction.v[2])) >= *(float *)&_XMM0 )
        {
          if ( v12 == -1 )
          {
LABEL_24:
            v50[1] = 0;
            v50[2] = 4;
            for ( i = v50; ; ++i )
            {
              v33 = *i;
              if ( (_DWORD)v33 != -1 )
              {
                v34 = *i;
                v35 = &s_sndWeapReflect.results[v33];
                WeapReflDefWithClass = SND_FindWeapReflDefWithClass(v35->weapReflDefId, reflectionClass);
                if ( !WeapReflDefWithClass )
                  WeapReflDefWithClass = params.playerDef;
                params.weapReflDef = WeapReflDefWithClass;
                v37 = org->v[1] - v35->position.v[1];
                v38 = org->v[2] - v35->position.v[2];
                v39 = fsqrt((float)((float)(v37 * v37) + (float)((float)(org->v[0] - v35->position.v[0]) * (float)(org->v[0] - v35->position.v[0]))) + (float)(v38 * v38));
                distance = v35->distance;
                v41 = distance + v39;
                soundPosition.v[0] = (float)((float)(distance + v39) * v35->direction.v[0]) + outListener.orient.origin.v[0];
                soundPosition.v[1] = (float)((float)(distance + v39) * v35->direction.v[1]) + outListener.orient.origin.v[1];
                soundPosition.v[2] = (float)((float)(distance + v39) * v35->direction.v[2]) + outListener.orient.origin.v[2];
                params.surfaceIndex = v35->surfaceIndex;
                if ( distance < WeapReflDefWithClass->closeMedThreshold )
                {
                  Pitch = SND_WeapReflectGetPitch(WeapReflDefWithClass, distance, SND_WEAP_REFL_CLOSE, 0);
                  reflectionPosition = &v35->position;
                  v43 = SND_WEAP_REFL_CLOSE;
LABEL_34:
                  SND_WeapReflectQueueSound(v43, &params, (int)(float)((float)(69.444443 / WeapReflDefWithClass->speedOfSound) * v41), Pitch, s_weapReflectDirNames[v34], &soundPosition, reflectionPosition, 0);
                  goto LABEL_35;
                }
                if ( distance < WeapReflDefWithClass->medFarThreshold )
                {
                  Pitch = SND_WeapReflectGetPitch(WeapReflDefWithClass, distance, SND_WEAP_REFL_MEDIUM, 0);
                  reflectionPosition = &v35->position;
                  v43 = SND_WEAP_REFL_MEDIUM;
                  goto LABEL_34;
                }
                if ( distance < WeapReflDefWithClass->farThreshold )
                {
                  Pitch = SND_WeapReflectGetPitch(WeapReflDefWithClass, distance, SND_WEAP_REFL_FAR, 0);
                  reflectionPosition = &v35->position;
                  v43 = SND_WEAP_REFL_FAR;
                  goto LABEL_34;
                }
              }
LABEL_35:
              if ( (unsigned int)++v5 >= 3 )
              {
                SND_WeapReflectPlayDist(&params, org, &outListener.orient.origin, outListener.orient.axis.m, reflectionClass);
                ScopedCriticalSection::~ScopedCriticalSection(&v47);
                return;
              }
            }
          }
        }
        else
        {
          v12 = 7;
        }
        if ( !s_weapReflectAngleDoExplosionReflection[v12] )
          v12 = -1;
        v50[0] = v12;
        goto LABEL_24;
      }
    }
  }
}

/*
==============
SND_WeapReflectPlayNPCSound
==============
*/
void SND_WeapReflectPlayNPCSound(const unsigned __int64 sndEnt, const vec3_t *org, const WeaponSFXPackage *sfxPackage, const SndWeapShotCountId shotCount, const int autoSimId, const __int64 autoSimTimeStamp)
{
  NPCNewWeapReflRequest *v10; 
  SndEntState *EntState; 
  const tmat33_t<vec3_t> *v12; 
  float v13; 
  float v14; 
  int v15; 
  unsigned int v16; 
  __int64 v17[2]; 
  ScopedCriticalSection v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  tmat33_t<vec3_t> out; 

  v17[1] = -2i64;
  if ( s_sndWeapReflect.reflectionsEnabled )
  {
    ScopedCriticalSection::ScopedCriticalSection(&v18, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
    if ( 64 - s_npcNewPlayRequest.bufcount >= 1 )
    {
      v10 = &s_npcNewPlayRequest.buffer[s_npcNewPlayRequest.writePos];
      v10->sfxPackage = sfxPackage;
      v10->shotCount = shotCount;
      v10->autoSimId = autoSimId;
      v10->autoSimTimeStamp = autoSimTimeStamp;
      v10->org.v[0] = org->v[0];
      v10->org.v[1] = org->v[1];
      v10->org.v[2] = org->v[2];
      EntState = SND_FindEntState(sndEnt, 0);
      v12 = (const tmat33_t<vec3_t> *)EntState;
      if ( EntState )
      {
        if ( EntState->hasPosition )
        {
          v17[0] = (__int64)&v19;
          v13 = EntState->origin.origin.v[0];
          v14 = EntState->origin.origin.v[2];
          LOBYTE(v15) = (unsigned int)((_DWORD)EntState + 108) >> 24;
          *(_WORD *)((char *)&v15 + 1) = (_WORD)EntState + 108;
          HIBYTE(v15) = (unsigned int)((_DWORD)EntState + 108) >> 16;
          v21 = LODWORD(v14) ^ LODWORD(EntState->origin.origin.v[1]) ^ v15 ^ s_soundorg_aab_Z;
          v20 = LODWORD(v13) ^ v15 ^ ~s_soundorg_aab_Y;
          memset(v17, 0, 8ui64);
          v16 = s_soundorg_aab_X ^ LODWORD(v13) ^ LODWORD(v14) ^ v15;
          v19 = v16;
          if ( (v16 & 0x7F800000) == 2139095040 || (v16 = v20, (v20 & 0x7F800000) == 2139095040) || (v16 = v21, (v21 & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 868, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )", v16, &EntState->origin) )
              __debugbreak();
          }
          AxisCopy(v12 + 2, &out);
          v10->orientation.v[0] = out.m[0].v[0];
          v10->orientation.v[1] = out.m[0].v[1];
          v10->orientation.v[2] = out.m[0].v[2];
          if ( 64 - s_npcNewPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 90, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
            __debugbreak();
          s_npcNewPlayRequest.writePos = (LOBYTE(s_npcNewPlayRequest.writePos) + 1) & 0x3F;
          if ( ((unsigned __int8)&s_npcNewPlayRequest.bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_npcNewPlayRequest.bufcount) )
            __debugbreak();
          _InterlockedIncrement(&s_npcNewPlayRequest.bufcount);
        }
      }
    }
    ScopedCriticalSection::~ScopedCriticalSection(&v18);
  }
}

/*
==============
SND_WeapReflectPlayPlayerSound
==============
*/
void SND_WeapReflectPlayPlayerSound(const unsigned __int64 sndEnt, const vec3_t *org, const WeaponSFXPackage *sfxPackage, const SndWeapShotCountId shotCount, const int autoSimId, const __int64 autoSimTimeStamp)
{
  unsigned int v8; 
  unsigned int CurrentWeapReflDefId; 
  __int64 v10; 
  float *p_distance; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  const WeaponReflectionDef *WeapReflDefWithClass; 
  float Pitch; 
  SndWeapReflectCastResult *soundPosition; 
  const WeaponReflectionDef *playerDef; 
  float distance; 
  float v20; 
  WeapReflectDistance v21; 
  SndWeapReflectPlaySound params; 
  vec3_t *originPosition; 
  __int64 v24; 
  ScopedCriticalSection v25; 
  snd_listener outListener; 
  __int64 v27; 

  v24 = -2i64;
  originPosition = (vec3_t *)org;
  if ( s_sndWeapReflect.reflectionsEnabled )
  {
    SND_GetListener(LOCAL_CLIENT_0, &outListener);
    if ( outListener.active )
    {
      v8 = SND_HashName(sfxPackage->szWeapSndReflectionClass);
      CurrentWeapReflDefId = CG_GetCurrentWeapReflDefId();
      params.playerDef = SND_FindWeapReflDefWithClass(CurrentWeapReflDefId, v8);
      if ( params.playerDef )
      {
        ScopedCriticalSection::ScopedCriticalSection(&v25, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
        params.isPlayer = 1;
        params.sfxPackage = sfxPackage;
        params.shotCount = shotCount;
        params.autoSimId = autoSimId;
        params.autoSimTimeStamp = autoSimTimeStamp;
        v10 = 0i64;
        v27 = 0i64;
        p_distance = &s_sndWeapReflect.soundClipResults[0].distance;
        v12 = 0i64;
        v13 = 8i64;
        v14 = 8i64;
        do
        {
          if ( s_weapReflectAngleDoSoundClip[v12] )
          {
            WeapReflDefWithClass = SND_FindWeapReflDefWithClass(*((_DWORD *)p_distance + 2), v8);
            if ( !WeapReflDefWithClass )
              WeapReflDefWithClass = params.playerDef;
            params.weapReflDef = WeapReflDefWithClass;
            params.surfaceIndex = (int)p_distance[1];
            if ( *p_distance < WeapReflDefWithClass->closeMedThreshold )
            {
              Pitch = SND_WeapReflectGetPitch(WeapReflDefWithClass, *p_distance, SND_WEAP_REFL_CLOSE, 0);
              SND_WeapReflectQueueSound(SND_WEAP_REFL_CLOSE, &params, (int)(float)((float)(69.444443 / WeapReflDefWithClass->speedOfSound) * (float)(2.0 * *p_distance)), Pitch, s_weapReflectDirNames[v12], (const vec3_t *)p_distance - 3, (const vec3_t *)p_distance - 3, 0);
              *((_BYTE *)&v27 + v12) = 1;
            }
          }
          ++v12;
          p_distance += 12;
          --v14;
        }
        while ( v14 );
        for ( soundPosition = s_sndWeapReflect.results; ; ++soundPosition )
        {
          if ( *((_BYTE *)&v27 + v10) || !s_weapReflectAngleDoWeaponReflection[v10] )
            goto LABEL_23;
          playerDef = SND_FindWeapReflDefWithClass(soundPosition->weapReflDefId, v8);
          if ( !playerDef )
            playerDef = params.playerDef;
          params.weapReflDef = playerDef;
          params.surfaceIndex = soundPosition->surfaceIndex;
          distance = soundPosition->distance;
          if ( distance < playerDef->closeMedThreshold )
            break;
          if ( distance < playerDef->medFarThreshold )
          {
            v20 = SND_WeapReflectGetPitch(playerDef, distance, SND_WEAP_REFL_MEDIUM, 0);
            v21 = SND_WEAP_REFL_MEDIUM;
            goto LABEL_22;
          }
          if ( distance < playerDef->farThreshold )
          {
            v20 = SND_WeapReflectGetPitch(playerDef, distance, SND_WEAP_REFL_FAR, 0);
            v21 = SND_WEAP_REFL_FAR;
            goto LABEL_22;
          }
LABEL_23:
          ++v10;
          if ( !--v13 )
          {
            SND_WeapReflectPlayDist(&params, originPosition, &outListener.orient.origin, outListener.orient.axis.m, v8);
            ScopedCriticalSection::~ScopedCriticalSection(&v25);
            return;
          }
        }
        v20 = SND_WeapReflectGetPitch(playerDef, distance, SND_WEAP_REFL_CLOSE, 0);
        v21 = SND_WEAP_REFL_CLOSE;
LABEL_22:
        SND_WeapReflectQueueSound(v21, &params, (int)(float)((float)(69.444443 / playerDef->speedOfSound) * (float)(2.0 * soundPosition->distance)), v20, s_weapReflectDirNames[v10], &soundPosition->position, &soundPosition->position, 0);
        goto LABEL_23;
      }
    }
  }
}

/*
==============
SND_WeapReflectPlayQueuedNPCSound
==============
*/
void SND_WeapReflectPlayQueuedNPCSound(const vec3_t *org, const vec3_t *orientation, const vec3_t *listenerPos, const WeaponSFXPackage *sfxPackage, const SndWeapShotCountId shotCount, const int autoSimId, const __int64 autoSimTimeStamp, const SndWeapReflectCastResult *castResult)
{
  const char *szWeapSndReflectionClass; 
  int v9; 
  int v13; 
  char v14; 
  unsigned int v15; 
  char v16; 
  unsigned int CurrentWeapReflDefId; 
  __int128 v18; 
  __int128 v19; 
  float v20; 
  float v21; 
  __int128 v24; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v31; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v50; 
  __int128 v53; 
  int v55; 
  int v58; 
  int v61; 
  int v62; 
  int v64; 
  int v65; 
  int v66; 
  const WeaponReflectionDef *WeapReflDefWithClass; 
  float v68; 
  float v69; 
  float v70; 
  const WeaponReflectionDef *playerDef; 
  float v72; 
  bool v73; 
  float v74; 
  float Pitch; 
  WeapReflectDistance v76; 
  float v77; 
  SndWeapReflectPlaySound params; 

  szWeapSndReflectionClass = sfxPackage->szWeapSndReflectionClass;
  v9 = 0;
  v13 = 1;
  if ( szWeapSndReflectionClass && (v14 = *szWeapSndReflectionClass) != 0 )
  {
    v15 = 5381;
    do
    {
      ++szWeapSndReflectionClass;
      v16 = v14 | 0x20;
      if ( (unsigned int)(v14 - 65) >= 0x1A )
        v16 = v14;
      v15 = 65599 * v15 + v16;
      v14 = *szWeapSndReflectionClass;
    }
    while ( *szWeapSndReflectionClass );
    if ( !v15 )
      v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  CurrentWeapReflDefId = CG_GetCurrentWeapReflDefId();
  params.playerDef = SND_FindWeapReflDefWithClass(CurrentWeapReflDefId, v15);
  if ( params.playerDef )
  {
    v18 = LODWORD(orientation->v[1]);
    v19 = v18;
    v20 = orientation->v[0];
    v21 = orientation->v[2];
    *(float *)&v19 = (float)((float)(*(float *)&v18 * s_sndWeapReflect.results[0].direction.v[1]) + (float)(orientation->v[0] * s_sndWeapReflect.results[0].direction.v[0])) + (float)(v21 * s_sndWeapReflect.results[0].direction.v[2]);
    _XMM1 = v19;
    __asm { vmaxss  xmm3, xmm1, xmm0 }
    v24 = v18;
    *(float *)&v24 = (float)((float)(*(float *)&v18 * s_sndWeapReflect.results[1].direction.v[1]) + (float)(orientation->v[0] * s_sndWeapReflect.results[1].direction.v[0])) + (float)(v21 * s_sndWeapReflect.results[1].direction.v[2]);
    _XMM0 = v24;
    __asm { vmaxss  xmm4, xmm0, xmm3 }
    v77 = *(float *)&_XMM3;
    v26 = v18;
    *(float *)&v26 = (float)(*(float *)&v18 * s_sndWeapReflect.results[2].direction.v[1]) + (float)(orientation->v[0] * s_sndWeapReflect.results[2].direction.v[0]);
    v27 = v26;
    v29 = v18;
    *(float *)&v29 = *(float *)&v18 * s_sndWeapReflect.results[3].direction.v[1];
    v28 = v29;
    params.shotCount = shotCount;
    params.isPlayer = 0;
    params.autoSimId = autoSimId;
    v31 = v27;
    *(float *)&v31 = *(float *)&v27 + (float)(v21 * s_sndWeapReflect.results[2].direction.v[2]);
    _XMM15 = v31;
    __asm { vmaxss  xmm5, xmm15, xmm4 }
    v34 = v28;
    *(float *)&v34 = *(float *)&v28 + (float)(v20 * s_sndWeapReflect.results[3].direction.v[0]);
    v33 = v34;
    v36 = v18;
    *(float *)&v36 = *(float *)&v18 * s_sndWeapReflect.results[4].direction.v[1];
    v35 = v36;
    v38 = v33;
    *(float *)&v38 = *(float *)&v33 + (float)(v21 * s_sndWeapReflect.results[3].direction.v[2]);
    _XMM13 = v38;
    v40 = v35;
    *(float *)&v40 = *(float *)&v35 + (float)(v20 * s_sndWeapReflect.results[4].direction.v[0]);
    v39 = v40;
    v42 = v18;
    *(float *)&v42 = *(float *)&v18 * s_sndWeapReflect.results[5].direction.v[1];
    v41 = v42;
    v44 = v39;
    *(float *)&v44 = *(float *)&v39 + (float)(v21 * s_sndWeapReflect.results[4].direction.v[2]);
    _XMM9 = v44;
    v46 = v41;
    *(float *)&v46 = *(float *)&v41 + (float)(v20 * s_sndWeapReflect.results[5].direction.v[0]);
    v45 = v46;
    v48 = v18;
    *(float *)&v48 = *(float *)&v18 * s_sndWeapReflect.results[6].direction.v[1];
    v47 = v48;
    v50 = v45;
    *(float *)&v50 = *(float *)&v45 + (float)(v21 * s_sndWeapReflect.results[5].direction.v[2]);
    _XMM6 = v50;
    v53 = v47;
    __asm { vmaxss  xmm14, xmm13, xmm5 }
    *(float *)&v53 = (float)(*(float *)&v47 + (float)(v20 * s_sndWeapReflect.results[6].direction.v[0])) + (float)(v21 * s_sndWeapReflect.results[6].direction.v[2]);
    _XMM5 = v53;
    _XMM0 = (unsigned int)_XMM0;
    LOBYTE(v9) = (float)((float)((float)(*(float *)&v18 * s_sndWeapReflect.results[0].direction.v[1]) + (float)(v20 * s_sndWeapReflect.results[0].direction.v[0])) + (float)(v21 * s_sndWeapReflect.results[0].direction.v[2])) > 0.0;
    params.autoSimTimeStamp = autoSimTimeStamp;
    v55 = v9 - 1;
    params.sfxPackage = sfxPackage;
    __asm
    {
      vmaxss  xmm11, xmm9, xmm14
      vmaxss  xmm7, xmm6, xmm11
    }
    if ( *(float *)&_XMM0 <= v77 )
      v13 = v55;
    v58 = 2;
    __asm
    {
      vmaxss  xmm1, xmm5, xmm7
      vmaxss  xmm2, xmm0, [rsp+148h+var_100]
    }
    v61 = 3;
    v62 = 7;
    __asm { vmaxss  xmm0, xmm15, xmm2 }
    if ( *(float *)&_XMM15 <= *(float *)&_XMM2 )
      v58 = v13;
    if ( *(float *)&_XMM13 <= *(float *)&_XMM0 )
      v61 = v58;
    v64 = 4;
    if ( *(float *)&_XMM9 <= *(float *)&_XMM14 )
      v64 = v61;
    v65 = 5;
    if ( *(float *)&_XMM6 <= *(float *)&_XMM11 )
      v65 = v64;
    v66 = 6;
    if ( *(float *)&v53 <= *(float *)&_XMM7 )
      v66 = v65;
    if ( (float)((float)((float)(*(float *)&v18 * s_sndWeapReflect.results[7].direction.v[1]) + (float)(v20 * s_sndWeapReflect.results[7].direction.v[0])) + (float)(v21 * s_sndWeapReflect.results[7].direction.v[2])) <= *(float *)&_XMM1 )
      v62 = v66;
    if ( v62 >= 0 )
    {
      WeapReflDefWithClass = SND_FindWeapReflDefWithClass(castResult->weapReflDefId, v15);
      v68 = castResult->position.v[1] - listenerPos->v[1];
      v69 = castResult->position.v[2] - listenerPos->v[2];
      v70 = (float)(v68 * v68) + (float)((float)(castResult->position.v[0] - listenerPos->v[0]) * (float)(castResult->position.v[0] - listenerPos->v[0]));
      playerDef = WeapReflDefWithClass;
      params.surfaceIndex = castResult->surfaceIndex;
      if ( !WeapReflDefWithClass )
        playerDef = params.playerDef;
      v72 = fsqrt(v70 + (float)(v69 * v69));
      v73 = v72 < playerDef->npcCloseMedThreshold;
      v74 = v72 + castResult->distance;
      params.weapReflDef = playerDef;
      if ( !v73 )
      {
        if ( v72 >= playerDef->npcMedFarThreshold )
        {
          if ( v72 >= playerDef->npcFarThreshold )
            return;
          Pitch = SND_WeapReflectGetPitch(playerDef, v72, SND_WEAP_REFL_FAR, 1);
          v76 = SND_WEAP_REFL_FAR;
        }
        else
        {
          Pitch = SND_WeapReflectGetPitch(playerDef, v72, SND_WEAP_REFL_MEDIUM, 1);
          v76 = SND_WEAP_REFL_MEDIUM;
        }
        SND_WeapReflectQueueSound(v76, &params, (int)(float)((float)(69.444443 / playerDef->speedOfSound) * v74), Pitch, s_weapReflectDirNames[v62], &castResult->position, &castResult->position, 1);
      }
    }
  }
}

/*
==============
SND_WeapReflectQueueSound
==============
*/
void SND_WeapReflectQueueSound(const WeapReflectDistance distanceType, const SndWeapReflectPlaySound *params, const int timeUS, const float pitch, const WeapReflDir direction, const vec3_t *soundPosition, const vec3_t *reflectionPosition, const bool enableOcclusion)
{
  const dvar_t *v8; 
  __int64 v11; 
  int value; 
  int v13; 
  int v14; 
  int v15; 
  SndWeapReflDelayedSound *v16; 
  float sideVol; 
  float sideEq; 
  const WeaponReflectionDef *v19; 
  const WeaponReflectionDef *weapReflDef; 
  const WeaponReflectionDef *v21; 
  __int64 v22; 

  v8 = DCONST_DVARFLT_snd_autoSim_predictWindowMs;
  v11 = timeUS;
  if ( !DCONST_DVARFLT_snd_autoSim_predictWindowMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_autoSim_predictWindowMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = (int)v8->current.value;
  if ( (unsigned int)(distanceType - 1) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 692, ASSERT_TYPE_ASSERT, "(distanceType > SND_WEAP_REFL_NONE && distanceType < SND_WEAP_REFL_MAX)", (const char *)&queryFormat, "distanceType > SND_WEAP_REFL_NONE && distanceType < SND_WEAP_REFL_MAX") )
    __debugbreak();
  if ( (int)v11 >= 1000 * value || params->autoSimId == -1 )
  {
    v13 = 0;
    v14 = g_snd.time + (int)v11 / 1000;
    if ( params->autoSimId != -1 )
    {
      v15 = v14 - value;
      v14 = 0;
      if ( v15 > 0 )
        v14 = v15;
    }
    v16 = s_sndDelayed;
    while ( v16->distanceType )
    {
      ++v13;
      if ( (__int64)++v16 >= (__int64)s_debugInfo )
      {
        Com_PrintWarning(9, "Ran out of weapon reflection queued sounds\n", s_debugInfo);
        return;
      }
    }
    if ( direction )
    {
      if ( direction == SND_WEAP_REFL_DIR_SIDE )
      {
        weapReflDef = params->weapReflDef;
        sideVol = weapReflDef->sideVol;
        sideEq = weapReflDef->sideEq;
      }
      else if ( direction == SND_WEAP_REFL_DIR_REAR )
      {
        v19 = params->weapReflDef;
        sideVol = v19->rearVol;
        sideEq = v19->rearEq;
      }
      else
      {
        sideVol = FLOAT_1_0;
        sideEq = FLOAT_N1_0;
      }
    }
    else
    {
      v21 = params->weapReflDef;
      sideVol = v21->frontVol;
      sideEq = v21->frontEq;
    }
    v22 = v13;
    s_sndDelayed[v22].timeMStoStart = v14;
    s_sndDelayed[v22].distanceType = distanceType;
    s_sndDelayed[v22].isPlayer = params->isPlayer;
    s_sndDelayed[v22].surfaceIndex = params->surfaceIndex;
    s_sndDelayed[v22].sfxPackage = params->sfxPackage;
    s_sndDelayed[v22].weapReflDef = params->weapReflDef;
    s_sndDelayed[v22].playerDef = params->playerDef;
    s_sndDelayed[v22].enableOcclusion = enableOcclusion;
    s_sndDelayed[v22].pitch = pitch;
    s_sndDelayed[v22].vol = sideVol;
    s_sndDelayed[v22].lpfCutoff = sideEq;
    s_sndDelayed[v22].direction = direction;
    s_sndDelayed[v22].soundPosition = *soundPosition;
    s_sndDelayed[v22].reflectionPosition = *reflectionPosition;
    s_sndDelayed[v22].autoSimId = params->autoSimId;
    s_sndDelayed[v22].autoSimTimeStamp = params->autoSimTimeStamp + v11;
    s_sndDelayed[v22].shotCount = params->shotCount;
  }
  else
  {
    SND_WeapReflPlaySoundAliasImmediate(distanceType, params, pitch, direction, v11, soundPosition, reflectionPosition, enableOcclusion);
  }
}

/*
==============
SND_WeapReflectUpdatePlaySound
==============
*/
void SND_WeapReflectUpdatePlaySound()
{
  float *v0; 
  WeapReflectDistance v1; 
  const SndAliasList *v2; 
  unsigned __int64 SndEntHandle; 
  __int64 v4; 
  float v5; 
  unsigned __int64 v6; 
  int v7; 
  float v8; 
  float v9; 
  __int64 v10; 
  float v11; 
  unsigned int v12; 
  SndAlias *outAliasA; 
  SndPlayParams inParams; 
  SndAliasGroupTracking inOutTracking; 

  v0 = &s_sndDelayed[0].soundPosition.v[2];
  do
  {
    v1 = *((_DWORD *)v0 - 16);
    if ( v1 && *((_DWORD *)v0 - 15) <= g_snd.time )
    {
      v2 = SND_WeapReflectGenAlias(v1, (WeapReflDir)*((_DWORD *)v0 - 3), *((const WeaponReflectionDef **)v0 - 7), *((const WeaponSFXPackage **)v0 - 5), *((_BYTE *)v0 - 32), *((_DWORD *)v0 - 7));
      if ( v2 )
      {
        SND_PickSoundAliasFromList(v2, LOCAL_CLIENT_0, 2046, (const vec3_t *)(v0 + 1), (const SndAlias **)&outAliasA, NULL, NULL);
        SndEntHandle = CG_GenerateSndEntHandle(LOCAL_CLIENT_0, 2046);
        v4 = *((_QWORD *)v0 - 7);
        v5 = *(v0 - 5);
        v6 = SndEntHandle & 0xFFFFFFEFFFFFFFFFui64 | -(__int64)(*((_BYTE *)v0 + 16) != 0) & 0x1000000000i64;
        if ( *(_DWORD *)(*((_QWORD *)v0 - 6) + 40i64) != *(_DWORD *)(v4 + 40) )
          v5 = v5 * *(float *)(v4 + 44);
        v7 = *((_DWORD *)v0 + 5);
        v8 = *(v0 - 1);
        inParams.volumeScale = v5;
        inParams.pitch = *(v0 - 6);
        inParams.org.v[0] = *(v0 - 2);
        v9 = *v0;
        inParams.autoSimId = v7;
        v10 = *((_QWORD *)v0 + 3);
        inParams.org.v[2] = v9;
        v11 = *(v0 - 4);
        inParams.autoSimTimeStamp = v10;
        *(float *)&v10 = v0[8];
        inParams.lpfCutoff = v11;
        inParams.distanceScale = FLOAT_1_0;
        inParams.lfeScale = FLOAT_1_0;
        inParams.hpfCutoff = FLOAT_N1_0;
        inParams.startOffsetFraction = 0.0;
        inParams.org.v[1] = v8;
        *(_QWORD *)&inParams.aliasId = 0i64;
        inParams.timeshift = 0;
        inParams.adsrIndex = -1;
        inParams.fadeTime = 0;
        inParams.system = SASYS_CGAME;
        inParams.startPaused = 0;
        inParams.additionalStartDelayUs = 0;
        *(_QWORD *)&inParams.surfaceType = -1i64;
        inParams.contextIndex2 = -1;
        inParams.reflectionClass = 0;
        *(_WORD *)&inParams.isADS = 256;
        inParams.aliasList = v2;
        inParams.sndEnt = v6;
        inParams.autoSimShotCount = v10;
        SND_InitAliasGroupTracking(&inOutTracking);
        v12 = SND_PlaySoundAliasCore(outAliasA, 1.0, &inParams, &inOutTracking);
        SND_FinalizeAliasGroupTracking(&inOutTracking);
        if ( v12 )
          SND_AddTrackedWeapReflSound(v12, v2, (const SndWeapReflDelayedSound *)(v0 - 16), (const vec3_t *)(v0 - 2));
      }
      *(v0 - 16) = 0.0;
    }
    v0 += 26;
  }
  while ( (__int64)v0 < (__int64)&s_debugInfo[0].delayedInfo.soundPosition.z );
  SND_UpdateTrackedWeapReflSound();
}

/*
==============
SND_WeaponReflectionWorker
==============
*/
void SND_WeaponReflectionWorker(const void *const cmdInfo)
{
  char *v1; 
  const vec2_t *v2; 
  float *v3; 
  __int64 writePos; 
  SndWeapReflectCastResultUpdate *v5; 
  bool doSoundClipCastNext; 
  __int64 currentSoundClipRaycastIndex; 
  int v8; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  const dvar_t *v15; 
  float value; 
  float v17; 
  float v18; 
  int v19; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  double RaycastHitFraction; 
  float v22; 
  const dvar_t *v23; 
  float v24; 
  float *p_distance; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  float v29; 
  hkMemoryAllocator *v30; 
  hkMemoryAllocator *v31; 
  NPCNewWeapReflRequest *v32; 
  NPCResolvedWeapReflRequest *v33; 
  float outLerp[2]; 
  float *v35; 
  ZoneDef *outZoneB; 
  ZoneDef *outZoneA; 
  unsigned __int64 v38; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v40; 
  __int64 v41; 
  vec3_t end; 

  v41 = -2i64;
  v1 = (char *)cmdInfo;
  v35 = (float *)cmdInfo;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_WeaponReflectionWorker");
  if ( 1 - s_sndWeapReflect.raycastUpdates.bufcount >= 1 )
  {
    v2 = (const vec2_t *)(v1 + 16);
    v3 = (float *)(v1 + 4);
    v38 = (unsigned __int64)&s_sndWeapReflect.raycastUpdates.bufcount & 3;
    do
    {
      if ( 1 - s_sndWeapReflect.raycastUpdates.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 83, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
        __debugbreak();
      writePos = s_sndWeapReflect.raycastUpdates.writePos;
      v5 = &s_sndWeapReflect.raycastUpdates.buffer[writePos];
      doSoundClipCastNext = s_sndWeapReflect.doSoundClipCastNext;
      if ( s_sndWeapReflect.doSoundClipCastNext )
      {
        currentSoundClipRaycastIndex = s_sndWeapReflect.currentSoundClipRaycastIndex;
        s_sndWeapReflect.currentSoundClipRaycastIndex = (LOBYTE(s_sndWeapReflect.currentSoundClipRaycastIndex) + 1) & 7;
        if ( s_weapReflectAngleDoSoundClip[currentSoundClipRaycastIndex] )
        {
          v8 = 0x4000000;
          goto LABEL_10;
        }
        doSoundClipCastNext = 0;
        s_sndWeapReflect.doSoundClipCastNext = 0;
      }
      LODWORD(currentSoundClipRaycastIndex) = s_sndWeapReflect.currentRaycastIndex;
      s_sndWeapReflect.currentRaycastIndex = (LOBYTE(s_sndWeapReflect.currentRaycastIndex) + 1) & 7;
      v8 = 2097169;
LABEL_10:
      s_sndWeapReflect.raycastUpdates.buffer[writePos].isSoundClip = doSoundClipCastNext;
      s_sndWeapReflect.raycastUpdates.buffer[writePos].raycastIndex = currentSoundClipRaycastIndex;
      s_sndWeapReflect.doSoundClipCastNext = !s_sndWeapReflect.doSoundClipCastNext;
      if ( s_weapReflectAngles[(unsigned int)currentSoundClipRaycastIndex] == 0.0 )
      {
        _RDI = &v5->castResult.direction;
        v5->castResult.direction.v[0] = v2->v[0];
        v5->castResult.direction.v[1] = v2->v[1];
        v5->castResult.direction.v[2] = v2[1].v[0];
      }
      else
      {
        vectoyaw(v2);
        _RDI = &s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.direction;
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v12, v11, v13, v14);
        __asm { vextractps dword ptr [rdi], xmm0, 1 }
        s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.direction.v[1] = *(float *)&_XMM0;
        s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.direction.v[2] = 0.0;
      }
      v15 = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
      if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      value = v15->current.value;
      v17 = value * _RDI->v[1];
      v18 = value * _RDI->v[2];
      end.v[0] = (float)(value * _RDI->v[0]) + *v3;
      end.v[1] = v17 + v3[1];
      end.v[2] = v18 + v3[2];
      v19 = 3 * *(_DWORD *)v35 + 2;
      HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v40, 1, 0);
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v40, 0, 0, 1, 1, 0, 1, 1);
      extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      extendedData.collisionBuffer = 0.0;
      extendedData.phaseSelection = All;
      extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
      *(_WORD *)&extendedData.collectInsideHits = 256;
      extendedData.contents = v8;
      extendedData.ignoreBodies = &v40;
      ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v19);
      if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 1366, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
        __debugbreak();
      HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
      Physics_Raycast((Physics_WorldId)v19, (const vec3_t *)(v35 + 1), &end, &extendedData, ClosestResult);
      if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
      {
        RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
        v22 = *(float *)&RaycastHitFraction;
        v23 = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
        if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        v24 = v23->current.value;
        p_distance = &s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.distance;
        s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.distance = v22 * v24;
        s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.surfaceIndex = (HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
        HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, &s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.normal);
      }
      else
      {
        v26 = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
        if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        p_distance = &s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.distance;
        s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.distance = v26->current.value;
        s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.surfaceIndex = 0;
        s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.normal.v[0] = _RDI->v[0];
        s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.normal.v[1] = _RDI->v[1];
        s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.normal.v[2] = _RDI->v[2];
      }
      v27 = *p_distance;
      v28 = *p_distance * _RDI->v[1];
      v29 = *p_distance * _RDI->v[2];
      v1 = (char *)v35;
      v3 = v35 + 1;
      v5->castResult.position.v[0] = (float)(v27 * _RDI->v[0]) + v35[1];
      s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.position.v[1] = v28 + v3[1];
      s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.position.v[2] = v29 + v3[2];
      if ( CG_FindAudioZoneAtPoint(*(LocalClientNum_t *)v1, &v5->castResult.position, (const ZoneDef **)&outZoneA, (const ZoneDef **)&outZoneB, outLerp) )
      {
        if ( outLerp[0] <= 0.5 )
          s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.weapReflDefId = CG_GetWeapReflDefId(outZoneA);
        else
          s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.weapReflDefId = CG_GetWeapReflDefId(outZoneB);
      }
      else
      {
        s_sndWeapReflect.raycastUpdates.buffer[writePos].castResult.weapReflDefId = 0;
      }
      if ( 1 - s_sndWeapReflect.raycastUpdates.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 90, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
        __debugbreak();
      s_sndWeapReflect.raycastUpdates.writePos = 0;
      if ( v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_sndWeapReflect.raycastUpdates.bufcount) )
        __debugbreak();
      _InterlockedIncrement(&s_sndWeapReflect.raycastUpdates.bufcount);
      v30 = hkMemHeapAllocator();
      v40.m_ignoreBodies.m_size = 0;
      if ( v40.m_ignoreBodies.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v30, v40.m_ignoreBodies.m_data, 4, v40.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
      v40.m_ignoreBodies.m_data = NULL;
      v40.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
      v31 = hkMemHeapAllocator();
      v40.m_ignoreEntities.m_size = 0;
      if ( v40.m_ignoreEntities.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v31, v40.m_ignoreEntities.m_data, 8, v40.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    }
    while ( 1 - s_sndWeapReflect.raycastUpdates.bufcount >= 1 );
  }
  while ( s_npcNewPlayRequest.bufcount >= 1 )
  {
    if ( 1 - s_npcResolvedPlayRequest.bufcount < 1 )
      break;
    if ( s_npcNewPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 63, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
      __debugbreak();
    v32 = &s_npcNewPlayRequest.buffer[s_npcNewPlayRequest.readPos];
    if ( 1 - s_npcResolvedPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 83, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
      __debugbreak();
    v33 = &s_npcResolvedPlayRequest.buffer[s_npcResolvedPlayRequest.writePos];
    if ( (unsigned __int8)SND_WeapReflPerformNPCTrace(&v33->castResult, &v32->org, &v32->orientation, (const vec3_t *)(v1 + 4)) )
    {
      v33->org.v[0] = v32->org.v[0];
      v33->org.v[1] = v32->org.v[1];
      v33->org.v[2] = v32->org.v[2];
      v33->orientation.v[0] = v32->orientation.v[0];
      v33->orientation.v[1] = v32->orientation.v[1];
      v33->orientation.v[2] = v32->orientation.v[2];
      v33->sfxPackage = v32->sfxPackage;
      v33->shotCount = v32->shotCount;
      v33->autoSimId = v32->autoSimId;
      v33->autoSimTimeStamp = v32->autoSimTimeStamp;
      if ( 1 - s_npcResolvedPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 90, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
        __debugbreak();
      s_npcResolvedPlayRequest.writePos = 0;
      if ( ((unsigned __int8)&s_npcResolvedPlayRequest.bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_npcResolvedPlayRequest.bufcount) )
        __debugbreak();
      _InterlockedIncrement(&s_npcResolvedPlayRequest.bufcount);
    }
    if ( s_npcNewPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 70, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
      __debugbreak();
    s_npcNewPlayRequest.readPos = (LOBYTE(s_npcNewPlayRequest.readPos) + 1) & 0x3F;
    if ( ((unsigned __int8)&s_npcNewPlayRequest.bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_npcNewPlayRequest.bufcount) )
      __debugbreak();
    _InterlockedDecrement(&s_npcNewPlayRequest.bufcount);
  }
  Sys_ProfEndNamedEvent();
}

