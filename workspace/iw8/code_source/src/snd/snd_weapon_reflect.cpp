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
  NPCResolvedWeapReflRequest *v9; 
  __int64 autoSimId; 
  __int64 autoSimTimeStamp; 
  LocalClientNum_t data; 
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
      _RBX = &s_sndWeapReflect.raycastUpdates.buffer[s_sndWeapReflect.raycastUpdates.readPos];
      if ( _RBX->raycastIndex >= 8 )
      {
        LODWORD(autoSimTimeStamp) = 8;
        LODWORD(autoSimId) = _RBX->raycastIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 1263, ASSERT_TYPE_ASSERT, "(unsigned)( castUpdate->raycastIndex ) < (unsigned)( SndWeapReflect::MAX_RAYCASTS )", "castUpdate->raycastIndex doesn't index SndWeapReflect::MAX_RAYCASTS\n\t%i not in [0, %i)", autoSimId, autoSimTimeStamp) )
          __debugbreak();
      }
      __asm { vmovups ymm0, ymmword ptr [rbx] }
      _RDX = s_sndWeapReflect.soundClipResults;
      if ( !_RBX->isSoundClip )
        _RDX = s_sndWeapReflect.results;
      _RCX = 6i64 * _RBX->raycastIndex;
      __asm
      {
        vmovups ymmword ptr [rdx+rcx*8], ymm0
        vmovups xmm1, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rdx+rcx*8+20h], xmm1
      }
      if ( s_sndWeapReflect.raycastUpdates.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 70, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
        __debugbreak();
      s_sndWeapReflect.raycastUpdates.readPos = 0;
      if ( ((unsigned __int8)&s_sndWeapReflect.raycastUpdates.bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_sndWeapReflect.raycastUpdates.bufcount) )
        __debugbreak();
      _InterlockedDecrement(&s_sndWeapReflect.raycastUpdates.bufcount);
    }
    if ( !Sys_ExistsWorkerCmdsOfType(WRKCMD_SOUND_WEAPON_REFLECT) )
    {
      __asm
      {
        vmovaps xmm0, xmmword ptr [rsp+118h+outListener.orient.origin]
        vmovss  xmm1, dword ptr [rsp+118h+outListener.orient.axis+8]
        vmovups [rsp+118h+var_D4], xmm0
        vmovss  xmm0, dword ptr [rsp+118h+outListener.orient.axis+4]
      }
      data = outListener.localClientNum;
      __asm
      {
        vmovss  [rsp+118h+var_C4], xmm0
        vmovss  [rsp+118h+var_C0], xmm1
      }
      Sys_AddWorkerCmd(WRKCMD_SOUND_WEAPON_REFLECT, &data);
    }
    while ( s_npcResolvedPlayRequest.bufcount >= 1 )
    {
      if ( s_npcResolvedPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 63, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
        __debugbreak();
      v9 = &s_npcResolvedPlayRequest.buffer[s_npcResolvedPlayRequest.readPos];
      SND_WeapReflectPlayQueuedNPCSound(&v9->org, &v9->orientation, &outListener.orient.origin, v9->sfxPackage, (const SndWeapShotCountId)v9->shotCount, v9->autoSimId, v9->autoSimTimeStamp, &v9->castResult);
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
  float v56; 
  int v62; 
  int v63; 
  int v64; 
  int *v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  const SndWeapReflDelayedSound *v79; 

  v79 = delayedSound;
  v4 = 0;
  v62 = 0;
  p_timestamp = &s_debugInfo[0].timestamp;
  do
  {
    if ( *p_timestamp < g_snd.time )
    {
      _RDI = s_debugInfo;
      _RBX = (__int64)(int)v4 << 8;
      *(_DWORD *)&s_debugInfo[0].aliasName[_RBX + 128] = id;
      __asm
      {
        vmovups ymm0, ymmword ptr [r8]
        vmovups ymmword ptr [rbx+rdi], ymm0
        vmovups ymm1, ymmword ptr [r8+20h]
        vmovups ymmword ptr [rbx+rdi+20h], ymm1
        vmovups ymm0, ymmword ptr [r8+40h]
        vmovups ymmword ptr [rbx+rdi+40h], ymm0
        vmovsd  xmm1, qword ptr [r8+60h]
        vmovsd  qword ptr [rbx+rdi+60h], xmm1
      }
      Core_strcpy(&s_debugInfo[0].aliasName[_RBX], 0x80ui64, aliasList->aliasName);
      *(int *)((char *)&s_debugInfo[0].timestamp + _RBX) = g_snd.time + 5000;
      *(float *)((char *)s_debugInfo[0].position.v + _RBX) = position->v[0];
      *(float *)((char *)&s_debugInfo[0].position.v[1] + _RBX) = position->v[1];
      v56 = position->v[2];
      goto LABEL_73;
    }
    ++v4;
    p_timestamp += 64;
  }
  while ( v4 < 0x10 );
  v7 = &s_debugInfo[2].timestamp;
  v8 = 0x7FFFFFFF;
  v63 = -1;
  v64 = 0x7FFFFFFF;
  v65 = &s_debugInfo[2].timestamp;
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
    v66 = v11;
    v18 = v7[576];
    v19 = *v7;
    v20 = v7[640];
    v67 = v17;
    v74 = v7[448];
    v21 = v7[704];
    if ( *v7 >= v17 )
      v19 = v17;
    v76 = v7[512];
    v68 = v19;
    v22 = v7[64];
    if ( v22 >= v19 )
      v22 = v19;
    v23 = v7[128];
    v69 = v22;
    if ( v23 >= v22 )
      v23 = v22;
    v24 = v7[192];
    v70 = v23;
    if ( v24 >= v23 )
      v24 = v23;
    v25 = v7[256];
    v71 = v24;
    if ( v25 >= v24 )
      v25 = v24;
    v26 = v7[320];
    v72 = v25;
    if ( v26 >= v25 )
      v26 = v25;
    v27 = v7[384];
    v73 = v26;
    if ( v27 >= v26 )
      v27 = v26;
    v28 = v7[768];
    v29 = v7[832];
    v30 = v28;
    if ( v12 >= v27 )
      v13 = v27;
    v75 = v27;
    v31 = v62;
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
    if ( *(v65 - 128) >= v64 )
      v31 = v63;
    v32 = v62 + 1;
    if ( *(v65 - 64) >= v66 )
      v32 = v31;
    v33 = v62 + 2;
    if ( *v65 >= v67 )
      v33 = v32;
    v34 = v62 + 3;
    if ( v65[64] >= v68 )
      v34 = v33;
    v35 = v62 + 4;
    if ( v65[128] >= v69 )
      v35 = v34;
    v36 = v62 + 5;
    if ( v65[192] >= v70 )
      v36 = v35;
    v37 = v62 + 6;
    if ( v65[256] >= v71 )
      v37 = v36;
    v38 = v62 + 7;
    if ( v65[320] >= v72 )
      v38 = v37;
    v39 = v62 + 8;
    if ( v65[384] >= v73 )
      v39 = v38;
    v40 = v62 + 9;
    if ( v74 >= v75 )
      v40 = v39;
    v41 = v62 + 10;
    if ( v76 >= v13 )
      v41 = v40;
    v42 = v62 + 11;
    if ( v14 >= v10 )
      v42 = v41;
    v43 = v62 + 12;
    if ( v15 >= v18 )
      v43 = v42;
    v44 = v62 + 13;
    if ( v16 >= v20 )
      v44 = v43;
    v45 = v28 < v21;
    v46 = v62 + 14;
    v8 = v29;
    if ( !v45 )
      v46 = v44;
    v47 = v62 + 15;
    if ( v29 >= v30 )
      v47 = v46;
    v65 += 1024;
    v48 = v62 + 16;
    v63 = v47;
    v45 = v29 < v30;
    v62 += 16;
    v7 = v65;
    if ( !v45 )
      v8 = v30;
    v64 = v8;
  }
  while ( v48 < 0x10 );
  if ( v47 > -1 )
  {
    _RDI = s_debugInfo;
    _RBX = (__int64)v47 << 8;
    *(_DWORD *)&s_debugInfo[0].aliasName[_RBX + 128] = id;
    _RAX = v79;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx+rdi], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+rdi+20h], ymm1
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rbx+rdi+40h], ymm0
      vmovsd  xmm1, qword ptr [rax+60h]
      vmovsd  qword ptr [rbx+rdi+60h], xmm1
    }
    Core_strcpy(&s_debugInfo[0].aliasName[_RBX], 0x80ui64, aliasList->aliasName);
    *(int *)((char *)&s_debugInfo[0].timestamp + _RBX) = g_snd.time + 5000;
    *(float *)((char *)s_debugInfo[0].position.v + _RBX) = position->v[0];
    *(float *)((char *)&s_debugInfo[0].position.v[1] + _RBX) = position->v[1];
    v56 = position->v[2];
LABEL_73:
    *(float *)((char *)&s_debugInfo[0].position.v[2] + _RBX) = v56;
  }
}

/*
==============
SND_DrawWeapReflOverlay
==============
*/
void SND_DrawWeapReflOverlay(LocalClientNum_t localClientNum)
{
  bool v11; 
  unsigned int v27; 
  bool v32; 
  const vec4_t *v33; 
  const dvar_t *v42; 
  const char *v51; 
  const char *v59; 
  const char *v68; 
  const char *v75; 
  GfxFont *font; 
  const char *v121; 
  float fmt; 
  float fmta; 
  char *fmtb; 
  float fmtc; 
  char *s; 
  vec4_t *color; 
  vec3_t point; 
  snd_listener outListener; 

  if ( !s_sndWeapReflect.reflectionsEnabled )
    return;
  if ( localClientNum )
    return;
  SND_GetListener(LOCAL_CLIENT_0, &outListener);
  if ( !outListener.active )
    return;
  __asm
  {
    vmovaps [rsp+1C0h+var_30], xmm6
    vmovaps [rsp+1C0h+var_70], xmm10
    vmovaps [rsp+1C0h+var_90], xmm12
    vmovaps [rsp+1C0h+var_A0], xmm13
    vmovaps [rsp+1C0h+var_B0], xmm14
    vmovaps [rsp+1C0h+var_C0], xmm15
  }
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_10;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v11 )
      __debugbreak();
LABEL_10:
    _R14 = &scrPlaceFull;
    goto LABEL_11;
  }
  _R14 = scrPlaceViewDisplay;
LABEL_11:
  __asm
  {
    vmovss  xmm0, dword ptr [r14+28h]
    vmovss  xmm6, dword ptr [r14+2Ch]
    vmovss  xmm14, cs:__real@3f333333
    vmovaps xmm3, xmm14; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm0; x
    vmovss  dword ptr [rsp+1C0h+fmt], xmm14
    vmovss  [rsp+1C0h+var_16C], xmm0
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, "Weapon Reflection Overlay Enabled", &colorCyan, 5, cls.smallDevFont);
  __asm
  {
    vmovss  xmm13, cs:__real@41200000
    vmovss  xmm10, cs:__real@3d4ccccd
    vmovss  xmm12, cs:__real@40e00000
    vmovss  xmm15, cs:__real@41400000
  }
  _RDI = &s_debugInfo[0].position.v[2];
  __asm
  {
    vmovaps [rsp+1C0h+var_40], xmm7
    vmovaps [rsp+1C0h+var_50], xmm8
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm1, xmm0, xmm6
    vmovaps [rsp+1C0h+var_60], xmm9
    vmovss  [rsp+1C0h+var_170], xmm1
  }
  v27 = 0;
  __asm { vmovaps [rsp+1C0h+var_80], xmm11 }
  do
  {
    if ( g_snd.time < *((_DWORD *)_RDI - 3) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi-8]
        vmovss  xmm2, dword ptr [rdi-4]
        vmovss  xmm1, dword ptr [rdi]
        vsubss  xmm3, xmm1, dword ptr [rsp+1C0h+outListener.orient.origin+8]
      }
      v32 = *((_DWORD *)_RDI - 4) == 0;
      v33 = &colorRedHeat;
      __asm
      {
        vmovss  dword ptr [rsp+1C0h+point+4], xmm2
        vsubss  xmm2, xmm2, dword ptr [rsp+1C0h+outListener.orient.origin+4]
        vmovss  dword ptr [rsp+1C0h+point], xmm0
        vsubss  xmm0, xmm0, dword ptr [rsp+1C0h+outListener.orient.origin]
        vmovss  dword ptr [rsp+1C0h+point+8], xmm1
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm7, xmm2, xmm2
      }
      if ( !v32 )
        v33 = &colorWhite;
      __asm { vcomiss xmm7, xmm13 }
      v42 = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
      if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v42);
      __asm
      {
        vdivss  xmm0, xmm12, dword ptr [rbx+28h]
        vmulss  xmm6, xmm0, xmm7
        vmovss  dword ptr [rsp+1C0h+fmt], xmm6
      }
      CL_AddDebugStarWithText(&point, &colorCyan, v33, (const char *)_RDI - 144, fmta, 0, 1, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1C0h+point+8]
        vmulss  xmm8, xmm6, xmm15
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [rsp+1C0h+point+8], xmm1
        vcvtss2sd xmm11, xmm7, xmm7
        vmovaps xmm1, xmm11
        vmovq   rdx, xmm1
      }
      v51 = j_va("Distance: %.0f", _RDX);
      __asm { vmovaps xmm2, xmm6; scale }
      CL_AddDebugString(&point, v33, *(float *)&_XMM2, v51, 0, 1);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1C0h+point+8]
        vsubss  xmm1, xmm0, xmm8
        vmovss  xmm0, dword ptr [rdi-0D0h]; X
        vmovss  dword ptr [rsp+1C0h+point+8], xmm1
      }
      *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, xmm15
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v59 = j_va("Pitch: %.2fst", _RDX);
      __asm { vmovaps xmm2, xmm6; scale }
      CL_AddDebugString(&point, v33, *(float *)&_XMM2, v59, 0, 1);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1C0h+point+8]
        vsubss  xmm1, xmm0, xmm8
        vmovss  xmm0, dword ptr [rdi-0CCh]
        vmaxss  xmm0, xmm0, cs:__real@37803e84; X
        vmovss  dword ptr [rsp+1C0h+point+8], xmm1
      }
      *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@41a00000
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v68 = j_va("Vol: %.2fdB", _RDX);
      __asm { vmovaps xmm2, xmm6; scale }
      CL_AddDebugString(&point, v33, *(float *)&_XMM2, v68, 0, 1);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1C0h+point+8]
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [rsp+1C0h+point+8], xmm1
        vmovss  xmm1, dword ptr [rdi-0C8h]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v75 = j_va("LPF: %.2f", _RDX);
      __asm { vmovaps xmm2, xmm6; scale }
      CL_AddDebugString(&point, v33, *(float *)&_XMM2, v75, 0, 1);
      if ( !*((_DWORD *)_RDI - 4) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1C0h+point+8]
          vsubss  xmm1, xmm0, xmm8
          vmovaps xmm2, xmm6; scale
          vmovss  dword ptr [rsp+1C0h+point+8], xmm1
        }
        CL_AddDebugString(&point, v33, *(float *)&_XMM2, "Stopped", 0, 1);
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rdi-4]
        vsubss  xmm5, xmm1, dword ptr [rsp+1C0h+outListener.orient.origin+4]
        vmulss  xmm3, xmm5, dword ptr [rbp+0C0h+outListener.orient.axis+10h]
        vmovss  xmm0, dword ptr [rdi-8]
        vsubss  xmm7, xmm0, dword ptr [rsp+1C0h+outListener.orient.origin]
        vmulss  xmm2, xmm7, dword ptr [rbp+0C0h+outListener.orient.axis+0Ch]
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm6, xmm0, dword ptr [rsp+1C0h+outListener.orient.origin+8]
        vmulss  xmm0, xmm6, dword ptr [rbp+0C0h+outListener.orient.axis+14h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm3, xmm7, dword ptr [rsp+1C0h+outListener.orient.axis]
        vaddss  xmm2, xmm4, xmm0
        vmulss  xmm4, xmm5, dword ptr [rbp+0C0h+outListener.orient.axis+4]
        vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000; Y
        vmulss  xmm2, xmm6, dword ptr [rbp+0C0h+outListener.orient.axis+8]
        vaddss  xmm5, xmm4, xmm3
        vaddss  xmm1, xmm5, xmm2; X
      }
      *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm2, xmm0, cs:__real@42652ee0
        vmovss  xmm0, cs:__real@43b40000
        vmovss  xmm8, dword ptr [rdi-0C8h]
      }
      font = cls.smallDevFont;
      __asm
      {
        vsubss  xmm1, xmm2, xmm0
        vcmpltss xmm0, xmm0, xmm2
        vblendvps xmm9, xmm2, xmm1, xmm0
        vmovss  xmm0, dword ptr [rdi-0CCh]
        vmaxss  xmm6, xmm0, cs:__real@37803e84
        vmovss  xmm0, dword ptr [rdi-0D0h]; X
        vcvtss2sd xmm8, xmm8, xmm8
      }
      *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, xmm15
        vmovaps xmm0, xmm6; X
        vcvtss2sd xmm7, xmm1, xmm1
      }
      *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@41a00000
        vxorps  xmm0, xmm0, xmm0
        vcvtss2sd xmm2, xmm1, xmm1
        vaddss  xmm1, xmm9, cs:__real@43b40000
        vcmpltss xmm0, xmm9, xmm0
        vblendvps xmm0, xmm9, xmm1, xmm0
        vcvtss2sd xmm1, xmm0, xmm0
        vmovaps xmm3, xmm11
        vmovsd  [rsp+1C0h+color], xmm8
        vmovsd  [rsp+1C0h+s], xmm2
        vmovq   rdx, xmm1
        vmovq   r9, xmm3
        vmovsd  [rsp+1C0h+fmt], xmm7
        vmovss  [rsp+1C0h+var_168], xmm9
      }
      v121 = j_va("%.0f %s Dist: %.0f Pitch %.2fst Vol %.2fdB LPF %.0f", _RDX, _RDI - 36, _R9, fmtb, s, color);
      __asm
      {
        vmovss  xmm2, [rsp+1C0h+var_170]; y
        vmovss  xmm1, [rsp+1C0h+var_16C]; x
        vmovaps xmm3, xmm14; xScale
        vmovss  dword ptr [rsp+1C0h+fmt], xmm14
      }
      CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v121, v33, 5, font);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm6, xmm0, [rsp+1C0h+var_170]
        vmovss  [rsp+1C0h+var_170], xmm6
      }
    }
    ++v27;
    _RDI += 64;
  }
  while ( v27 < 0x10 );
  __asm
  {
    vmovaps xmm15, [rsp+1C0h+var_C0]
    vmovaps xmm14, [rsp+1C0h+var_B0]
    vmovaps xmm13, [rsp+1C0h+var_A0]
    vmovaps xmm12, [rsp+1C0h+var_90]
    vmovaps xmm11, [rsp+1C0h+var_80]
    vmovaps xmm10, [rsp+1C0h+var_70]
    vmovaps xmm9, [rsp+1C0h+var_60]
    vmovaps xmm8, [rsp+1C0h+var_50]
    vmovaps xmm7, [rsp+1C0h+var_40]
    vmovaps xmm6, [rsp+1C0h+var_30]
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
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  const dvar_t *v27; 
  char v47; 
  char v48; 
  unsigned __int8 v49; 
  hkMemoryAllocator *v50; 
  hkMemoryAllocator *v51; 
  __int64 result; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v59; 
  __int64 v60; 
  vec3_t end; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  v60 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _R15 = listenerPos;
  _R14 = direction;
  _RBX = castResult;
  castResult->weapReflDefId = 0;
  _RDI = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
  if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  xmm4, dword ptr [r14]
    vmulss  xmm1, xmm0, xmm4
    vmulss  xmm2, xmm0, dword ptr [r14+4]
    vmulss  xmm3, xmm0, dword ptr [r14+8]
    vaddss  xmm0, xmm1, dword ptr [rsi]
    vmovss  dword ptr [rbp+57h+end], xmm0
    vaddss  xmm0, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+57h+end+4], xmm0
    vaddss  xmm0, xmm3, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+57h+end+8], xmm0
    vmovss  dword ptr [rbx+0Ch], xmm4
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  dword ptr [rbx+10h], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [rbx+14h], xmm1
  }
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v59, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v59, 0, 0, 1, 1, 0, 1, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmovss  [rsp+130h+extendedData.collisionBuffer], xmm9
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 2097169;
  extendedData.ignoreBodies = &v59;
  ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_CLIENT_FIRST);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 1205, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  Physics_Raycast(PHYSICS_WORLD_ID_CLIENT_FIRST, org, &end, &extendedData, ClosestResult);
  if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
    goto LABEL_13;
  *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
  __asm { vmovaps xmm6, xmm0 }
  v27 = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
  if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [r14+28h]
    vmovss  dword ptr [rbx+24h], xmm0
  }
  _RBX->surfaceIndex = (HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+24h]
    vmulss  xmm0, xmm2, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm2, dword ptr [rbx+10h]
    vmulss  xmm2, xmm2, dword ptr [rbx+14h]
    vaddss  xmm3, xmm0, dword ptr [rsi]
    vmovss  dword ptr [rbx], xmm3
    vaddss  xmm4, xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rbx+4], xmm4
    vaddss  xmm5, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rbx+8], xmm5
    vmovss  xmm0, dword ptr [r15]
    vsubss  xmm8, xmm0, xmm3
    vmovss  xmm1, dword ptr [r15+4]
    vsubss  xmm6, xmm1, xmm4
    vmovss  xmm0, dword ptr [r15+8]
    vsubss  xmm7, xmm0, xmm5
  }
  HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, &_RBX->normal);
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rbx+4]
    vmulss  xmm0, xmm8, dword ptr [rbx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [rbx+8]
    vaddss  xmm0, xmm2, xmm1
    vcomiss xmm0, xmm9
  }
  if ( v47 | v48 )
LABEL_13:
    v49 = 0;
  else
    v49 = 1;
  v50 = hkMemHeapAllocator();
  v59.m_ignoreBodies.m_size = 0;
  if ( v59.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v50, v59.m_ignoreBodies.m_data, 4, v59.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v59.m_ignoreBodies.m_data = NULL;
  v59.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v51 = hkMemHeapAllocator();
  v59.m_ignoreEntities.m_size = 0;
  if ( v59.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v51, v59.m_ignoreEntities.m_data, 8, v59.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  result = v49;
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
SND_WeapReflPlaySoundAliasImmediate
==============
*/

void __fastcall SND_WeapReflPlaySoundAliasImmediate(const WeapReflectDistance distanceType, const SndWeapReflectPlaySound *params, double pitch, const WeapReflDir direction, const int startDelayUs, const vec3_t *soundPosition, const vec3_t *reflectionPosition, const bool enableOcclusion)
{
  const SndAliasList *v15; 
  unsigned __int64 v16; 
  __int32 v20; 
  int autoSimId; 
  __int64 autoSimTimeStamp; 
  unsigned int v31; 
  const WeaponReflectionDef *weapReflDef; 
  SndAlias *outAliasA; 
  SndWeapReflDelayedSound delayedSound; 
  SndPlayParams inParams; 
  SndAliasGroupTracking inOutTracking; 

  __asm
  {
    vmovaps [rsp+270h+var_70], xmm9
    vmovaps xmm9, xmm2
  }
  v15 = SND_WeapReflectGenAlias(distanceType, direction, params->weapReflDef, params->sfxPackage, params->isPlayer, params->surfaceIndex);
  SND_PickSoundAliasFromList(v15, LOCAL_CLIENT_0, 2046, reflectionPosition, (const SndAlias **)&outAliasA, NULL, NULL);
  v16 = ((unsigned __int64)enableOcclusion << 36) | CG_GenerateSndEntHandle(LOCAL_CLIENT_0, 2046) & 0xFFFFFFEFFFFFFFFFui64;
  if ( outAliasA )
  {
    _RDX = params->weapReflDef;
    __asm
    {
      vmovaps [rsp+270h+var_40], xmm6
      vmovaps [rsp+270h+var_50], xmm7
      vmovaps [rsp+270h+var_60], xmm8
      vmovss  xmm8, cs:__real@3f800000
      vmovss  xmm0, cs:__real@bf800000
    }
    if ( direction )
    {
      v20 = direction - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rdx+84h]
            vmovss  xmm7, dword ptr [rdx+88h]
          }
        }
        else
        {
          __asm
          {
            vmovaps xmm6, xmm8
            vmovaps xmm7, xmm0
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rdx+7Ch]
          vmovss  xmm7, dword ptr [rdx+80h]
        }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rdx+74h]
        vmovss  xmm7, dword ptr [rdx+78h]
      }
    }
    if ( params->playerDef->zoneType != _RDX->zoneType )
      __asm { vmulss  xmm6, xmm6, dword ptr [rdx+2Ch] }
    autoSimId = params->autoSimId;
    __asm
    {
      vmovss  [rbp+170h+inParams.hpfCutoff], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rbp+170h+inParams.startOffsetFraction], xmm0
    }
    inParams.autoSimId = autoSimId;
    autoSimTimeStamp = params->autoSimTimeStamp;
    *(_QWORD *)&inParams.aliasId = 0i64;
    inParams.timeshift = 0;
    inParams.fadeTime = 0;
    inParams.startPaused = 0;
    inParams.reflectionClass = 0;
    _RSI = soundPosition;
    inParams.autoSimTimeStamp = autoSimTimeStamp;
    LODWORD(autoSimTimeStamp) = params->shotCount;
    __asm
    {
      vmovss  [rbp+170h+inParams.distanceScale], xmm8
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rbp+170h+inParams.org], xmm0
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  dword ptr [rbp+170h+inParams.org+8], xmm0
      vmovss  [rbp+170h+inParams.lfeScale], xmm8
      vmovss  [rbp+170h+inParams.volumeScale], xmm6
      vmovss  [rbp+170h+inParams.pitch], xmm9
      vmovss  dword ptr [rbp+170h+inParams.org+4], xmm1
      vmovss  [rbp+170h+inParams.lpfCutoff], xmm7
    }
    inParams.adsrIndex = -1;
    inParams.system = SASYS_CGAME;
    *(_QWORD *)&inParams.surfaceType = -1i64;
    inParams.contextIndex2 = -1;
    *(_WORD *)&inParams.isADS = 256;
    inParams.aliasList = v15;
    inParams.sndEnt = v16;
    inParams.autoSimShotCount = autoSimTimeStamp;
    inParams.additionalStartDelayUs = startDelayUs;
    SND_InitAliasGroupTracking(&inOutTracking);
    __asm { vmovaps xmm1, xmm8; contextLerp }
    v31 = SND_PlaySoundAliasCore(outAliasA, *(float *)&_XMM1, &inParams, &inOutTracking);
    SND_FinalizeAliasGroupTracking(&inOutTracking);
    delayedSound.isPlayer = params->isPlayer;
    delayedSound.sfxPackage = params->sfxPackage;
    weapReflDef = params->weapReflDef;
    delayedSound.distanceType = SND_WEAP_REFL_CLOSE;
    delayedSound.timeMStoStart = startDelayUs / 1000;
    delayedSound.weapReflDef = weapReflDef;
    __asm
    {
      vmovss  [rsp+270h+delayedSound.pitch], xmm9
      vmovss  [rsp+270h+delayedSound.vol], xmm6
      vmovss  [rbp+170h+delayedSound.lpfCutoff], xmm7
    }
    SND_AddTrackedWeapReflSound(v31, v15, &delayedSound, soundPosition);
    __asm
    {
      vmovaps xmm8, [rsp+270h+var_60]
      vmovaps xmm7, [rsp+270h+var_50]
      vmovaps xmm6, [rsp+270h+var_40]
    }
  }
  __asm { vmovaps xmm9, [rsp+270h+var_70] }
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

float __fastcall SND_WeapReflectGetPitch(const WeaponReflectionDef *weapDef, double distance, const WeapReflectDistance distanceType, bool isNPC)
{
  bool v18; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps [rsp+88h+var_58], xmm10
    vmovaps xmm10, xmm1
  }
  if ( isNPC )
  {
    switch ( distanceType )
    {
      case SND_WEAP_REFL_MEDIUM:
        __asm
        {
          vmovss  xmm6, dword ptr [rcx+3Ch]; jumptable 000000014276AEAC case 2
          vmovss  xmm7, dword ptr [rcx+40h]
          vmovss  xmm8, dword ptr [rcx+68h]
          vmovss  xmm9, dword ptr [rcx+64h]
        }
        goto LABEL_9;
      case SND_WEAP_REFL_FAR:
        __asm
        {
          vmovss  xmm6, dword ptr [rcx+40h]; jumptable 000000014276AEAC case 3
          vmovss  xmm7, dword ptr [rcx+44h]
          vmovss  xmm8, dword ptr [rcx+70h]
          vmovss  xmm9, dword ptr [rcx+6Ch]
        }
        goto LABEL_9;
      default:
        goto $LN36_64;
    }
  }
  switch ( distanceType )
  {
    case SND_WEAP_REFL_CLOSE:
      __asm
      {
        vmovss  xmm7, dword ptr [rcx+30h]; jumptable 000000014276AEE4 case 1
        vmovss  xmm8, dword ptr [rcx+50h]
        vmovss  xmm9, dword ptr [rcx+4Ch]
        vxorps  xmm6, xmm6, xmm6
      }
      goto LABEL_9;
    case SND_WEAP_REFL_MEDIUM:
      __asm
      {
        vmovss  xmm6, dword ptr [rcx+30h]; jumptable 000000014276AEE4 case 2
        vmovss  xmm7, dword ptr [rcx+34h]
        vmovss  xmm8, dword ptr [rcx+58h]
        vmovss  xmm9, dword ptr [rcx+54h]
      }
      goto LABEL_9;
    case SND_WEAP_REFL_FAR:
      __asm
      {
        vmovss  xmm6, dword ptr [rcx+34h]; jumptable 000000014276AEE4 case 3
        vmovss  xmm7, dword ptr [rcx+38h]
        vmovss  xmm8, dword ptr [rcx+60h]
        vmovss  xmm9, dword ptr [rcx+5Ch]
      }
LABEL_9:
      __asm { vcomiss xmm6, xmm7 }
      v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 569, ASSERT_TYPE_ASSERT, "(minDist < maxDist)", (const char *)&queryFormat, "minDist < maxDist");
      if ( v18 )
        __debugbreak();
      __asm
      {
        vcomiss xmm8, xmm6
        vcomiss xmm8, xmm7
      }
      if ( v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 571, ASSERT_TYPE_ASSERT, "(pitchDist <= maxDist)", (const char *)&queryFormat, "pitchDist <= maxDist") )
        __debugbreak();
      __asm
      {
        vcomiss xmm10, xmm6
        vcomiss xmm10, xmm7
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 573, ASSERT_TYPE_ASSERT, "(distance < maxDist)", (const char *)&queryFormat, "distance < maxDist") )
        __debugbreak();
      __asm
      {
        vsubss  xmm2, xmm10, xmm6
        vsubss  xmm0, xmm8, xmm6
        vmovss  xmm6, cs:__real@3f800000
        vdivss  xmm0, xmm2, xmm0; val
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, xmm9
        vsubss  xmm0, xmm6, xmm0
        vaddss  xmm0, xmm1, xmm0
      }
      break;
    default:
$LN36_64:
      __asm { vmovss  xmm0, cs:__real@3f800000; jumptable 000000014276AEAC default case, cases 0,1,4,5 }
      break;
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
  }
  return *(float *)&_XMM0;
}

/*
==============
SND_WeapReflectPlayDist
==============
*/
void SND_WeapReflectPlayDist(SndWeapReflectPlaySound *params, const vec3_t *originPosition, const vec3_t *listenerPos, const vec3_t *listenerDir, unsigned int reflectionClassHash)
{
  const WeaponReflectionDef *WeapReflDefWithClass; 
  ZoneDef *v10; 
  unsigned int WeapReflDefId; 
  const WeaponReflectionDef *v12; 
  unsigned int v13; 
  ZoneDef *outZoneFront; 
  ZoneDef *zone; 
  vec3_t soundPosition; 

  _R14 = originPosition;
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
    _RBX = DCONST_DVARFLT_snd_weapReflect_distantVoiceDistance;
    __asm
    {
      vmovaps [rsp+0C8h+var_48], xmm7
      vmovaps [rsp+0C8h+var_58], xmm8
      vmovss  xmm7, dword ptr cs:s_sndWeapReflect.results.direction
      vmovss  xmm8, dword ptr cs:s_sndWeapReflect.results.direction+4
    }
    if ( !DCONST_DVARFLT_snd_weapReflect_distantVoiceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_distantVoiceDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+28h]
      vmulss  xmm0, xmm7, xmm2
      vaddss  xmm1, xmm0, dword ptr [r14]
      vmulss  xmm2, xmm8, xmm2
      vaddss  xmm0, xmm2, dword ptr [r14+4]
      vmovss  xmm2, cs:__real@3f800000; pitch
      vmovss  dword ptr [rsp+0C8h+var_78], xmm1
      vmovss  xmm1, dword ptr [r14+8]
      vmovss  dword ptr [rsp+0C8h+var_78+8], xmm1
      vmovss  dword ptr [rsp+0C8h+var_78+4], xmm0
    }
    SND_WeapReflPlaySoundAliasImmediate(SND_WEAP_REFL_DIST, params, *(double *)&_XMM2, SND_WEAP_REFL_DIR_DIST_FRONT, 0, &soundPosition, &soundPosition, 0);
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_58]
      vmovaps xmm7, [rsp+0C8h+var_48]
    }
  }
  if ( v12 )
  {
    params->weapReflDef = v12;
    _RBX = DCONST_DVARFLT_snd_weapReflect_distantVoiceDistance;
    if ( !DCONST_DVARFLT_snd_weapReflect_distantVoiceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_distantVoiceDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+28h]
      vmulss  xmm1, xmm4, dword ptr cs:s_sndWeapReflect.results.direction+0C0h
      vaddss  xmm2, xmm1, dword ptr [r14]
      vmulss  xmm1, xmm4, dword ptr cs:s_sndWeapReflect.results.direction+0C4h
      vaddss  xmm3, xmm1, dword ptr [r14+4]
      vmulss  xmm1, xmm4, dword ptr cs:s_sndWeapReflect.results.direction+0C8h
      vmovss  dword ptr [rsp+0C8h+var_78+4], xmm3
      vaddss  xmm3, xmm1, dword ptr [r14+8]
      vmovss  dword ptr [rsp+0C8h+var_78], xmm2
      vmovss  xmm2, cs:__real@3f800000; pitch
      vmovss  dword ptr [rsp+0C8h+var_78+8], xmm3
    }
    SND_WeapReflPlaySoundAliasImmediate(SND_WEAP_REFL_DIST, params, *(double *)&_XMM2, SND_WEAP_REFL_DIR_DIST_REAR, 0, &soundPosition, &soundPosition, 0);
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
  unsigned int v9; 
  int *v63; 
  __int64 v65; 
  SndWeapReflectPlaySound params; 
  __int64 v93; 
  ScopedCriticalSection v94; 
  snd_listener outListener; 
  int v97[4]; 
  char v98; 
  void *retaddr; 

  _RAX = &retaddr;
  v93 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _R12 = org;
  if ( s_sndWeapReflect.reflectionsEnabled )
  {
    SND_GetListener(LOCAL_CLIENT_0, &outListener);
    if ( outListener.active )
    {
      CurrentWeapReflDefId = CG_GetCurrentWeapReflDefId();
      params.playerDef = SND_FindWeapReflDefWithClass(CurrentWeapReflDefId, reflectionClass);
      if ( params.playerDef )
      {
        ScopedCriticalSection::ScopedCriticalSection(&v94, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
        params.isPlayer = 1;
        v9 = 0;
        params.sfxPackage = NULL;
        params.shotCount = SND_WEAP_SHOT_UNCOUNTED;
        params.autoSimId = -1;
        params.autoSimTimeStamp = 0i64;
        __asm
        {
          vmovss  xmm0, dword ptr [r12+4]
          vsubss  xmm8, xmm0, dword ptr [rbp+0A0h+outListener.orient.origin+4]
          vmovss  xmm1, dword ptr [r12]
          vsubss  xmm6, xmm1, dword ptr [rbp+0A0h+outListener.orient.origin]
          vmovss  xmm0, dword ptr [r12+8]
          vsubss  xmm7, xmm0, dword ptr [rbp+0A0h+outListener.orient.origin+8]
          vmulss  xmm2, xmm6, dword ptr cs:s_sndWeapReflect.results.direction
          vmulss  xmm1, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+4
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm7, dword ptr cs:s_sndWeapReflect.results.direction+8
          vaddss  xmm4, xmm3, xmm0
          vcomiss xmm4, cs:__real@7f7fffff
          vminss  xmm5, xmm4, cs:__real@7f7fffff
          vmulss  xmm1, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+34h
          vmulss  xmm0, xmm6, dword ptr cs:s_sndWeapReflect.results.direction+30h
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr cs:s_sndWeapReflect.results.direction+38h
          vaddss  xmm3, xmm2, xmm1
          vcomiss xmm5, xmm3
          vminss  xmm4, xmm3, xmm5
          vmulss  xmm1, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+64h
          vmulss  xmm0, xmm6, dword ptr cs:s_sndWeapReflect.results.direction+60h
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr cs:s_sndWeapReflect.results.direction+68h
          vaddss  xmm3, xmm2, xmm1
          vcomiss xmm4, xmm3
          vminss  xmm5, xmm3, xmm4
          vmulss  xmm1, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+94h
          vmulss  xmm0, xmm6, dword ptr cs:s_sndWeapReflect.results.direction+90h
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr cs:s_sndWeapReflect.results.direction+98h
          vaddss  xmm3, xmm2, xmm1
          vcomiss xmm5, xmm3
          vminss  xmm4, xmm3, xmm5
          vmulss  xmm1, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+0C4h
          vmulss  xmm0, xmm6, dword ptr cs:s_sndWeapReflect.results.direction+0C0h
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr cs:s_sndWeapReflect.results.direction+0C8h
          vaddss  xmm3, xmm2, xmm1
          vcomiss xmm4, xmm3
          vminss  xmm4, xmm3, xmm4
          vmulss  xmm1, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+0F4h
          vmulss  xmm0, xmm6, dword ptr cs:s_sndWeapReflect.results.direction+0F0h
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr cs:s_sndWeapReflect.results.direction+0F8h
          vaddss  xmm3, xmm2, xmm1
          vcomiss xmm4, xmm3
          vminss  xmm5, xmm3, xmm4
          vmulss  xmm1, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+124h
          vmulss  xmm0, xmm6, dword ptr cs:s_sndWeapReflect.results.direction+120h
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr cs:s_sndWeapReflect.results.direction+128h
          vaddss  xmm4, xmm2, xmm1
          vcomiss xmm5, xmm4
        }
        v97[0] = -1;
        __asm
        {
          vmulss  xmm1, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+154h
          vmulss  xmm0, xmm6, dword ptr cs:s_sndWeapReflect.results.direction+150h
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr cs:s_sndWeapReflect.results.direction+158h
          vaddss  xmm3, xmm2, xmm1
          vminss  xmm0, xmm4, xmm5
          vcomiss xmm3, xmm0
        }
        v97[1] = 0;
        v97[2] = 4;
        v63 = v97;
        __asm { vmovss  xmm7, cs:__real@428ae38e }
        do
        {
          v65 = *v63;
          if ( (_DWORD)v65 != -1 )
          {
            _RBX = &s_sndWeapReflect.results[v65];
            _RDI = SND_FindWeapReflDefWithClass(_RBX->weapReflDefId, reflectionClass);
            if ( !_RDI )
              _RDI = params.playerDef;
            params.weapReflDef = _RDI;
            __asm
            {
              vmovss  xmm0, dword ptr [r12]
              vsubss  xmm3, xmm0, dword ptr [rbx]
              vmovss  xmm1, dword ptr [r12+4]
              vsubss  xmm2, xmm1, dword ptr [rbx+4]
              vmovss  xmm0, dword ptr [r12+8]
              vsubss  xmm4, xmm0, dword ptr [rbx+8]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm1, xmm2, xmm2
              vmovss  xmm4, dword ptr [rbx+24h]
              vaddss  xmm6, xmm4, xmm1
              vmulss  xmm0, xmm6, dword ptr [rbx+0Ch]
              vaddss  xmm1, xmm0, dword ptr [rbp+0A0h+outListener.orient.origin]
              vmovss  dword ptr [rbp+0A0h+var_118], xmm1
              vmulss  xmm0, xmm6, dword ptr [rbx+10h]
              vaddss  xmm2, xmm0, dword ptr [rbp+0A0h+outListener.orient.origin+4]
              vmovss  dword ptr [rbp+0A0h+var_118+4], xmm2
              vmulss  xmm0, xmm6, dword ptr [rbx+14h]
              vaddss  xmm2, xmm0, dword ptr [rbp+0A0h+outListener.orient.origin+8]
              vmovss  dword ptr [rbp+0A0h+var_118+8], xmm2
            }
            params.surfaceIndex = _RBX->surfaceIndex;
            __asm
            {
              vcomiss xmm4, dword ptr [rdi+30h]
              vcomiss xmm4, dword ptr [rdi+34h]
              vcomiss xmm4, dword ptr [rdi+38h]
            }
          }
          ++v9;
          ++v63;
        }
        while ( v9 < 3 );
        SND_WeapReflectPlayDist(&params, _R12, &outListener.orient.origin, outListener.orient.axis.m, reflectionClass);
        ScopedCriticalSection::~ScopedCriticalSection(&v94);
      }
    }
  }
  _R11 = &v98;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
SND_WeapReflectPlayNPCSound
==============
*/
void SND_WeapReflectPlayNPCSound(const unsigned __int64 sndEnt, const vec3_t *org, const WeaponSFXPackage *sfxPackage, const SndWeapShotCountId shotCount, const int autoSimId, const __int64 autoSimTimeStamp)
{
  SndEntState *EntState; 
  const tmat33_t<vec3_t> *v14; 
  float v15; 
  float v16; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  __int64 v27[2]; 
  ScopedCriticalSection v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  tmat33_t<vec3_t> out; 

  v27[1] = -2i64;
  _RDI = org;
  if ( s_sndWeapReflect.reflectionsEnabled )
  {
    ScopedCriticalSection::ScopedCriticalSection(&v28, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
    if ( 64 - s_npcNewPlayRequest.bufcount >= 1 )
    {
      _RBX = &s_npcNewPlayRequest.buffer[s_npcNewPlayRequest.writePos];
      _RBX->sfxPackage = sfxPackage;
      _RBX->shotCount = shotCount;
      _RBX->autoSimId = autoSimId;
      _RBX->autoSimTimeStamp = autoSimTimeStamp;
      _RBX->org.v[0] = _RDI->v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vmovss  dword ptr [rbx+4], xmm0
        vmovss  xmm1, dword ptr [rdi+8]
        vmovss  dword ptr [rbx+8], xmm1
      }
      EntState = SND_FindEntState(sndEnt, 0);
      v14 = (const tmat33_t<vec3_t> *)EntState;
      if ( EntState )
      {
        if ( EntState->hasPosition )
        {
          v27[0] = (__int64)&v29;
          v15 = EntState->origin.origin.v[0];
          v16 = EntState->origin.origin.v[2];
          LOBYTE(v23) = (unsigned int)((_DWORD)EntState + 108) >> 24;
          *(_WORD *)((char *)&v23 + 1) = (_WORD)EntState + 108;
          HIBYTE(v23) = (unsigned int)((_DWORD)EntState + 108) >> 16;
          v31 = LODWORD(v16) ^ LODWORD(EntState->origin.origin.v[1]) ^ v23 ^ s_soundorg_aab_Z;
          v29 = s_soundorg_aab_X ^ LODWORD(v15) ^ LODWORD(v16) ^ v23;
          v30 = LODWORD(v15) ^ v23 ^ ~s_soundorg_aab_Y;
          memset(v27, 0, 8ui64);
          __asm
          {
            vmovss  xmm0, [rsp+0C8h+var_68]
            vmovss  [rsp+0C8h+var_98], xmm0
          }
          if ( (v24 & 0x7F800000) == 2139095040 )
            goto LABEL_20;
          __asm
          {
            vmovss  xmm0, [rsp+0C8h+var_64]
            vmovss  [rsp+0C8h+var_98], xmm0
          }
          if ( (v25 & 0x7F800000) == 2139095040 )
            goto LABEL_20;
          __asm
          {
            vmovss  xmm0, [rsp+0C8h+var_60]
            vmovss  [rsp+0C8h+var_98], xmm0
          }
          if ( (v26 & 0x7F800000) == 2139095040 )
          {
LABEL_20:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 868, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
          AxisCopy(v14 + 2, &out);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0C8h+out]
            vmovss  dword ptr [rbx+0Ch], xmm0
            vmovss  xmm1, dword ptr [rsp+0C8h+out+4]
            vmovss  dword ptr [rbx+10h], xmm1
            vmovss  xmm0, dword ptr [rsp+0C8h+out+8]
            vmovss  dword ptr [rbx+14h], xmm0
          }
          if ( 64 - s_npcNewPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 90, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
            __debugbreak();
          s_npcNewPlayRequest.writePos = (LOBYTE(s_npcNewPlayRequest.writePos) + 1) & 0x3F;
          if ( ((unsigned __int8)&s_npcNewPlayRequest.bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_npcNewPlayRequest.bufcount) )
            __debugbreak();
          _InterlockedIncrement(&s_npcNewPlayRequest.bufcount);
        }
      }
    }
    ScopedCriticalSection::~ScopedCriticalSection(&v28);
  }
}

/*
==============
SND_WeapReflectPlayPlayerSound
==============
*/
void SND_WeapReflectPlayPlayerSound(const unsigned __int64 sndEnt, const vec3_t *org, const WeaponSFXPackage *sfxPackage, const SndWeapShotCountId shotCount, const int autoSimId, const __int64 autoSimTimeStamp)
{
  unsigned int v11; 
  unsigned int CurrentWeapReflDefId; 
  __int64 v13; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  SndWeapReflectPlaySound params; 
  vec3_t *originPosition; 
  __int64 v30; 
  ScopedCriticalSection v31; 
  snd_listener outListener; 
  __int64 v33; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  v30 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  originPosition = (vec3_t *)org;
  if ( s_sndWeapReflect.reflectionsEnabled )
  {
    SND_GetListener(LOCAL_CLIENT_0, &outListener);
    if ( outListener.active )
    {
      v11 = SND_HashName(sfxPackage->szWeapSndReflectionClass);
      CurrentWeapReflDefId = CG_GetCurrentWeapReflDefId();
      params.playerDef = SND_FindWeapReflDefWithClass(CurrentWeapReflDefId, v11);
      if ( params.playerDef )
      {
        ScopedCriticalSection::ScopedCriticalSection(&v31, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
        params.isPlayer = 1;
        params.sfxPackage = sfxPackage;
        params.shotCount = shotCount;
        params.autoSimId = autoSimId;
        params.autoSimTimeStamp = autoSimTimeStamp;
        v13 = 0i64;
        v33 = 0i64;
        _RBX = &s_sndWeapReflect.soundClipResults[0].distance;
        v15 = 0i64;
        v16 = 8i64;
        v17 = 8i64;
        __asm
        {
          vmovss  xmm6, cs:__real@40000000
          vmovss  xmm7, cs:__real@428ae38e
        }
        do
        {
          if ( s_weapReflectAngleDoSoundClip[v15] )
          {
            _RDI = SND_FindWeapReflDefWithClass(*((_DWORD *)_RBX + 2), v11);
            if ( !_RDI )
              _RDI = params.playerDef;
            params.weapReflDef = _RDI;
            params.surfaceIndex = (int)_RBX[1];
            __asm
            {
              vmovss  xmm1, dword ptr [rbx]; distance
              vcomiss xmm1, dword ptr [rdi+30h]
            }
          }
          ++v15;
          _RBX += 12;
          --v17;
        }
        while ( v17 );
        _RDI = s_sndWeapReflect.results;
        do
        {
          if ( !*((_BYTE *)&v33 + v13) && s_weapReflectAngleDoWeaponReflection[v13] )
          {
            _RBX = SND_FindWeapReflDefWithClass(_RDI->weapReflDefId, v11);
            if ( !_RBX )
              _RBX = params.playerDef;
            params.weapReflDef = _RBX;
            params.surfaceIndex = _RDI->surfaceIndex;
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+24h]; distance
              vcomiss xmm1, dword ptr [rbx+30h]
              vcomiss xmm1, dword ptr [rbx+34h]
              vcomiss xmm1, dword ptr [rbx+38h]
            }
          }
          ++v13;
          ++_RDI;
          --v16;
        }
        while ( v16 );
        SND_WeapReflectPlayDist(&params, originPosition, &outListener.orient.origin, outListener.orient.axis.m, v11);
        ScopedCriticalSection::~ScopedCriticalSection(&v31);
      }
    }
  }
  _R11 = &v34;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
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
  int v19; 
  int v22; 
  char v23; 
  unsigned int v24; 
  char v25; 
  unsigned int CurrentWeapReflDefId; 
  const WeaponReflectionDef *WeapReflDefWithClass; 
  const WeaponReflectionDef *v28; 
  bool v80; 
  int v81; 
  int v84; 
  int v88; 
  int v90; 
  int v95; 
  int v99; 
  int v100; 
  const WeaponReflectionDef *v102; 

  szWeapSndReflectionClass = sfxPackage->szWeapSndReflectionClass;
  v19 = 0;
  _RDI = castResult;
  _R12 = orientation;
  v22 = 1;
  if ( szWeapSndReflectionClass && (v23 = *szWeapSndReflectionClass) != 0 )
  {
    v24 = 5381;
    do
    {
      ++szWeapSndReflectionClass;
      v25 = v23 | 0x20;
      if ( (unsigned int)(v23 - 65) >= 0x1A )
        v25 = v23;
      v24 = 65599 * v24 + v25;
      v23 = *szWeapSndReflectionClass;
    }
    while ( *szWeapSndReflectionClass );
    if ( !v24 )
      v24 = 1;
  }
  else
  {
    v24 = 0;
  }
  CurrentWeapReflDefId = CG_GetCurrentWeapReflDefId();
  WeapReflDefWithClass = SND_FindWeapReflDefWithClass(CurrentWeapReflDefId, v24);
  v28 = WeapReflDefWithClass;
  if ( WeapReflDefWithClass )
  {
    __asm
    {
      vmovaps [rsp+148h+var_38], xmm6
      vmovaps [rsp+148h+var_48], xmm7
      vmovaps [rsp+148h+var_58], xmm8
      vmovss  xmm8, dword ptr [r12+4]
      vmulss  xmm1, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+4
      vmovaps [rsp+148h+var_68], xmm9
      vmovaps [rsp+148h+var_78], xmm10
      vmovss  xmm10, dword ptr [r12]
      vmulss  xmm0, xmm10, dword ptr cs:s_sndWeapReflect.results.direction
      vaddss  xmm2, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovaps [rsp+148h+var_88], xmm11
      vmovaps [rsp+148h+var_98], xmm12
      vmovss  xmm12, dword ptr [r12+8]
      vmulss  xmm1, xmm12, dword ptr cs:s_sndWeapReflect.results.direction+8
      vaddss  xmm1, xmm2, xmm1
      vmaxss  xmm3, xmm1, xmm0
      vmulss  xmm0, xmm10, dword ptr cs:s_sndWeapReflect.results.direction+30h
      vmovss  [rsp+148h+var_108], xmm1
      vmulss  xmm1, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+34h
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm12, dword ptr cs:s_sndWeapReflect.results.direction+38h
      vaddss  xmm0, xmm2, xmm1
      vmulss  xmm1, xmm12, dword ptr cs:s_sndWeapReflect.results.direction+68h
      vmaxss  xmm4, xmm0, xmm3
      vmovss  [rsp+148h+var_100], xmm3
      vmulss  xmm3, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+64h
      vmovss  [rsp+148h+var_104], xmm0
      vmulss  xmm0, xmm10, dword ptr cs:s_sndWeapReflect.results.direction+60h
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm3, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+94h
      vmulss  xmm0, xmm10, dword ptr cs:s_sndWeapReflect.results.direction+90h
      vmovaps [rsp+148h+var_A8], xmm13
      vmovaps [rsp+148h+var_B8], xmm14
      vmovaps [rsp+148h+var_C8], xmm15
      vaddss  xmm15, xmm2, xmm1
      vmulss  xmm2, xmm12, dword ptr cs:s_sndWeapReflect.results.direction+98h
      vmulss  xmm1, xmm12, dword ptr cs:s_sndWeapReflect.results.direction+0C8h
      vmaxss  xmm5, xmm15, xmm4
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm3, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+0C4h
      vmulss  xmm0, xmm12, dword ptr cs:s_sndWeapReflect.results.direction+158h
      vaddss  xmm13, xmm4, xmm2
      vmulss  xmm2, xmm10, dword ptr cs:s_sndWeapReflect.results.direction+0C0h
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+0F4h
      vmulss  xmm2, xmm10, dword ptr cs:s_sndWeapReflect.results.direction+0F0h
      vaddss  xmm9, xmm4, xmm1
      vmulss  xmm1, xmm12, dword ptr cs:s_sndWeapReflect.results.direction+0F8h
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+124h
      vmulss  xmm2, xmm10, dword ptr cs:s_sndWeapReflect.results.direction+120h
      vaddss  xmm6, xmm4, xmm1
      vmulss  xmm1, xmm12, dword ptr cs:s_sndWeapReflect.results.direction+128h
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm8, dword ptr cs:s_sndWeapReflect.results.direction+154h
      vmovss  xmm2, [rsp+148h+var_108]
      vmaxss  xmm14, xmm13, xmm5
      vaddss  xmm5, xmm4, xmm1
      vmulss  xmm1, xmm10, dword ptr cs:s_sndWeapReflect.results.direction+150h
      vaddss  xmm4, xmm3, xmm1
      vaddss  xmm3, xmm4, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
      vmovss  xmm0, [rsp+148h+var_104]
    }
    LOBYTE(v19) = WeapReflDefWithClass != NULL;
    v80 = v19 == 1;
    v81 = v19 - 1;
    __asm
    {
      vcomiss xmm0, [rsp+148h+var_100]
      vmaxss  xmm11, xmm9, xmm14
      vmaxss  xmm7, xmm6, xmm11
    }
    if ( v80 )
      v22 = v81;
    v84 = 2;
    __asm
    {
      vmaxss  xmm1, xmm5, xmm7
      vmaxss  xmm2, xmm0, [rsp+148h+var_100]
      vmovaps xmm12, [rsp+148h+var_98]
    }
    v88 = 3;
    __asm { vmovaps xmm10, [rsp+148h+var_78] }
    v90 = 7;
    __asm
    {
      vmovaps xmm8, [rsp+148h+var_58]
      vcomiss xmm15, xmm2
      vmaxss  xmm0, xmm15, xmm2
      vmovaps xmm15, [rsp+148h+var_C8]
    }
    if ( v80 )
      v84 = v22;
    __asm
    {
      vcomiss xmm13, xmm0
      vmovaps xmm13, [rsp+148h+var_A8]
    }
    if ( v80 )
      v88 = v84;
    v95 = 4;
    __asm
    {
      vcomiss xmm9, xmm14
      vmovaps xmm14, [rsp+148h+var_B8]
      vmovaps xmm9, [rsp+148h+var_68]
    }
    if ( v80 )
      v95 = v88;
    __asm
    {
      vcomiss xmm6, xmm11
      vmovaps xmm11, [rsp+148h+var_88]
    }
    v99 = 5;
    if ( v80 )
      v99 = v95;
    v100 = 6;
    __asm
    {
      vcomiss xmm5, xmm7
      vmovaps xmm7, [rsp+148h+var_48]
    }
    if ( v80 )
      v100 = v99;
    __asm { vcomiss xmm3, xmm1 }
    if ( v80 )
      v90 = v100;
    if ( v90 >= 0 )
    {
      v102 = SND_FindWeapReflDefWithClass(castResult->weapReflDefId, v24);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm3, xmm0, dword ptr [rbp+0]
        vmovss  xmm1, dword ptr [rdi+4]
        vsubss  xmm2, xmm1, dword ptr [rbp+4]
        vmovss  xmm0, dword ptr [rdi+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
      }
      _RBX = v102;
      if ( !v102 )
        _RBX = v28;
      __asm
      {
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2; distance
        vcomiss xmm1, dword ptr [rbx+3Ch]
        vaddss  xmm6, xmm1, dword ptr [rdi+24h]
        vcomiss xmm1, dword ptr [rbx+40h]
        vcomiss xmm1, dword ptr [rbx+44h]
      }
    }
    __asm { vmovaps xmm6, [rsp+148h+var_38] }
  }
}

/*
==============
SND_WeapReflectQueueSound
==============
*/

void __fastcall SND_WeapReflectQueueSound(const WeapReflectDistance distanceType, const SndWeapReflectPlaySound *params, const int timeUS, double pitch, const WeapReflDir direction, const vec3_t *soundPosition, const vec3_t *reflectionPosition, const bool enableOcclusion)
{
  __int64 v12; 
  int v16; 
  int v17; 
  int v18; 
  SndWeapReflDelayedSound *v20; 

  _RDI = DCONST_DVARFLT_snd_autoSim_predictWindowMs;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v12 = timeUS;
  __asm { vmovaps xmm6, xmm3 }
  if ( !DCONST_DVARFLT_snd_autoSim_predictWindowMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_autoSim_predictWindowMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vcvttss2si edi, dword ptr [rdi+28h] }
  if ( (unsigned int)(distanceType - 1) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 692, ASSERT_TYPE_ASSERT, "(distanceType > SND_WEAP_REFL_NONE && distanceType < SND_WEAP_REFL_MAX)", (const char *)&queryFormat, "distanceType > SND_WEAP_REFL_NONE && distanceType < SND_WEAP_REFL_MAX") )
    __debugbreak();
  if ( (int)v12 >= 1000 * _EDI || params->autoSimId == -1 )
  {
    v16 = 0;
    v17 = g_snd.time + (int)v12 / 1000;
    if ( params->autoSimId != -1 )
    {
      v18 = v17 - _EDI;
      v17 = 0;
      if ( v18 > 0 )
        v17 = v18;
    }
    _R10 = s_sndDelayed;
    v20 = s_sndDelayed;
    while ( v20->distanceType )
    {
      ++v16;
      if ( (__int64)++v20 >= (__int64)s_debugInfo )
      {
        Com_PrintWarning(9, "Ran out of weapon reflection queued sounds\n", s_debugInfo);
        goto LABEL_25;
      }
    }
    if ( direction )
    {
      if ( direction == SND_WEAP_REFL_DIR_SIDE )
      {
        _RAX = params->weapReflDef;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+7Ch]
          vmovss  xmm1, dword ptr [rax+80h]
        }
      }
      else if ( direction == SND_WEAP_REFL_DIR_REAR )
      {
        _RAX = params->weapReflDef;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+84h]
          vmovss  xmm1, dword ptr [rax+88h]
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vmovss  xmm1, cs:__real@bf800000
        }
      }
    }
    else
    {
      _RAX = params->weapReflDef;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+74h]
        vmovss  xmm1, dword ptr [rax+78h]
      }
    }
    _RDX = v16;
    s_sndDelayed[_RDX].timeMStoStart = v17;
    s_sndDelayed[_RDX].distanceType = distanceType;
    s_sndDelayed[_RDX].isPlayer = params->isPlayer;
    s_sndDelayed[_RDX].surfaceIndex = params->surfaceIndex;
    s_sndDelayed[_RDX].sfxPackage = params->sfxPackage;
    s_sndDelayed[_RDX].weapReflDef = params->weapReflDef;
    s_sndDelayed[_RDX].playerDef = params->playerDef;
    s_sndDelayed[_RDX].enableOcclusion = enableOcclusion;
    __asm
    {
      vmovss  dword ptr [rdx+r10+28h], xmm6
      vmovss  dword ptr [rdx+r10+2Ch], xmm0
      vmovss  dword ptr [rdx+r10+30h], xmm1
    }
    s_sndDelayed[_RDX].direction = direction;
    s_sndDelayed[_RDX].soundPosition = *soundPosition;
    s_sndDelayed[_RDX].reflectionPosition = *reflectionPosition;
    s_sndDelayed[_RDX].autoSimId = params->autoSimId;
    s_sndDelayed[_RDX].autoSimTimeStamp = params->autoSimTimeStamp + v12;
    s_sndDelayed[_RDX].shotCount = params->shotCount;
  }
  else
  {
    __asm { vmovaps xmm2, xmm6; pitch }
    SND_WeapReflPlaySoundAliasImmediate(distanceType, params, *(double *)&_XMM2, direction, v12, soundPosition, reflectionPosition, enableOcclusion);
  }
LABEL_25:
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
SND_WeapReflectUpdatePlaySound
==============
*/
void SND_WeapReflectUpdatePlaySound()
{
  WeapReflectDistance v8; 
  const SndAliasList *v9; 
  unsigned __int64 SndEntHandle; 
  unsigned __int64 v12; 
  int v13; 
  __int64 v18; 
  unsigned int v21; 
  SndAlias *outAliasA; 
  SndPlayParams inParams; 
  SndAliasGroupTracking inOutTracking; 
  char v29; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm7, cs:__real@bf800000
  }
  _RBX = &s_sndDelayed[0].soundPosition.v[2];
  __asm { vxorps  xmm8, xmm8, xmm8 }
  do
  {
    v8 = *((_DWORD *)_RBX - 16);
    if ( v8 && *((_DWORD *)_RBX - 15) <= g_snd.time )
    {
      v9 = SND_WeapReflectGenAlias(v8, (WeapReflDir)*((_DWORD *)_RBX - 3), *((const WeaponReflectionDef **)_RBX - 7), *((const WeaponSFXPackage **)_RBX - 5), *((_BYTE *)_RBX - 32), *((_DWORD *)_RBX - 7));
      if ( v9 )
      {
        SND_PickSoundAliasFromList(v9, LOCAL_CLIENT_0, 2046, (const vec3_t *)(_RBX + 1), (const SndAlias **)&outAliasA, NULL, NULL);
        SndEntHandle = CG_GenerateSndEntHandle(LOCAL_CLIENT_0, 2046);
        __asm { vmovss  xmm0, dword ptr [rbx-14h] }
        v12 = SndEntHandle & 0xFFFFFFEFFFFFFFFFui64 | -(__int64)(*((_BYTE *)_RBX + 16) != 0) & 0x1000000000i64;
        if ( *(_DWORD *)(*((_QWORD *)_RBX - 6) + 40i64) != *(_DWORD *)(*((_QWORD *)_RBX - 7) + 40i64) )
          __asm { vmulss  xmm0, xmm0, dword ptr [rdx+2Ch] }
        v13 = *((_DWORD *)_RBX + 5);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx-4]
          vmovss  [rsp+1E0h+inParams.volumeScale], xmm0
          vmovss  xmm0, dword ptr [rbx-18h]
          vmovss  [rsp+1E0h+inParams.pitch], xmm0
          vmovss  xmm0, dword ptr [rbx-8]
          vmovss  dword ptr [rsp+1E0h+inParams.org], xmm0
          vmovss  xmm0, dword ptr [rbx]
        }
        inParams.autoSimId = v13;
        v18 = *((_QWORD *)_RBX + 3);
        __asm
        {
          vmovss  dword ptr [rbp+0E0h+inParams.org+8], xmm0
          vmovss  xmm0, dword ptr [rbx-10h]
        }
        inParams.autoSimTimeStamp = v18;
        *(float *)&v18 = _RBX[8];
        __asm
        {
          vmovss  [rbp+0E0h+inParams.lpfCutoff], xmm0
          vmovss  [rsp+1E0h+inParams.distanceScale], xmm6
          vmovss  [rsp+1E0h+inParams.lfeScale], xmm6
          vmovss  [rbp+0E0h+inParams.hpfCutoff], xmm7
          vmovss  [rbp+0E0h+inParams.startOffsetFraction], xmm8
          vmovss  dword ptr [rsp+1E0h+inParams.org+4], xmm1
        }
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
        inParams.aliasList = v9;
        inParams.sndEnt = v12;
        inParams.autoSimShotCount = v18;
        SND_InitAliasGroupTracking(&inOutTracking);
        __asm { vmovaps xmm1, xmm6; contextLerp }
        v21 = SND_PlaySoundAliasCore(outAliasA, *(float *)&_XMM1, &inParams, &inOutTracking);
        SND_FinalizeAliasGroupTracking(&inOutTracking);
        if ( v21 )
          SND_AddTrackedWeapReflSound(v21, v9, (const SndWeapReflDelayedSound *)(_RBX - 16), (const vec3_t *)(_RBX - 2));
      }
      *(_RBX - 16) = 0.0;
    }
    _RBX += 26;
  }
  while ( (__int64)_RBX < (__int64)&s_debugInfo[0].delayedInfo.soundPosition.z );
  SND_UpdateTrackedWeapReflSound();
  _R11 = &v29;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
SND_WeaponReflectionWorker
==============
*/

void __fastcall SND_WeaponReflectionWorker(const void *const cmdInfo, double _XMM1_8)
{
  char *v8; 
  bool doSoundClipCastNext; 
  __int64 currentSoundClipRaycastIndex; 
  int v17; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  int v40; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hkMemoryAllocator *v57; 
  hkMemoryAllocator *v58; 
  NPCNewWeapReflRequest *v59; 
  NPCResolvedWeapReflRequest *v60; 
  float outLerp[2]; 
  char *v67; 
  ZoneDef *outZoneB; 
  ZoneDef *outZoneA; 
  unsigned __int64 v70; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v72; 
  __int64 v73; 
  vec3_t end; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  v73 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  v8 = (char *)cmdInfo;
  v67 = (char *)cmdInfo;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_WeaponReflectionWorker");
  if ( 1 - s_sndWeapReflect.raycastUpdates.bufcount >= 1 )
  {
    _R12 = (const vec2_t *)(v8 + 16);
    v70 = (unsigned __int64)&s_sndWeapReflect.raycastUpdates.bufcount & 3;
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vmovss  xmm9, cs:__real@3c8efa35
      vmovss  xmm8, cs:__real@3f000000
    }
    do
    {
      if ( 1 - s_sndWeapReflect.raycastUpdates.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 83, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
        __debugbreak();
      _RBX = s_sndWeapReflect.raycastUpdates.writePos;
      _R13 = &s_sndWeapReflect.raycastUpdates.buffer[_RBX];
      doSoundClipCastNext = s_sndWeapReflect.doSoundClipCastNext;
      if ( s_sndWeapReflect.doSoundClipCastNext )
      {
        currentSoundClipRaycastIndex = s_sndWeapReflect.currentSoundClipRaycastIndex;
        s_sndWeapReflect.currentSoundClipRaycastIndex = (LOBYTE(s_sndWeapReflect.currentSoundClipRaycastIndex) + 1) & 7;
        if ( s_weapReflectAngleDoSoundClip[currentSoundClipRaycastIndex] )
        {
          v17 = 0x4000000;
          goto LABEL_10;
        }
        doSoundClipCastNext = 0;
        s_sndWeapReflect.doSoundClipCastNext = 0;
      }
      LODWORD(currentSoundClipRaycastIndex) = s_sndWeapReflect.currentRaycastIndex;
      s_sndWeapReflect.currentRaycastIndex = (LOBYTE(s_sndWeapReflect.currentRaycastIndex) + 1) & 7;
      v17 = 2097169;
LABEL_10:
      s_sndWeapReflect.raycastUpdates.buffer[_RBX].isSoundClip = doSoundClipCastNext;
      s_sndWeapReflect.raycastUpdates.buffer[_RBX].raycastIndex = currentSoundClipRaycastIndex;
      s_sndWeapReflect.doSoundClipCastNext = !s_sndWeapReflect.doSoundClipCastNext;
      _RSI = (unsigned int)currentSoundClipRaycastIndex;
      _RAX = 0x140000000ui64;
      __asm { vucomiss xmm7, rva s_weapReflectAngles[rax+rsi*4] }
      if ( s_sndWeapReflect.doSoundClipCastNext )
      {
        _RDI = &_R13->castResult.direction;
        _R13->castResult.direction.v[0] = _R12->v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [r12+4]
          vmovss  dword ptr [rdi+4], xmm0
          vmovss  xmm1, dword ptr [r12+8]
          vmovss  dword ptr [rdi+8], xmm1
        }
      }
      else
      {
        *(double *)&_XMM0 = vectoyaw(_R12);
        _RDI = &s_sndWeapReflect.raycastUpdates.buffer[_RBX].castResult.direction;
        __asm
        {
          vaddss  xmm0, xmm0, rva s_weapReflectAngles[rax+rsi*4]
          vmulss  xmm2, xmm0, xmm9
          vxorps  xmm1, xmm1, xmm1
          vmovss  xmm0, xmm1, xmm2
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v28, v27, v29, v30);
        __asm { vextractps dword ptr [rdi], xmm0, 1 }
        _RAX = 0x140000000ui64;
        __asm { vmovss  dword ptr [rbx+rax+15E057D8h], xmm0 }
        s_sndWeapReflect.raycastUpdates.buffer[_RBX].castResult.direction.v[2] = 0.0;
      }
      _RSI = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
      if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+28h]
        vmulss  xmm0, xmm1, dword ptr [rdi]
        vmulss  xmm2, xmm1, dword ptr [rdi+4]
        vmulss  xmm3, xmm1, dword ptr [rdi+8]
        vaddss  xmm0, xmm0, dword ptr [r15]
        vmovss  dword ptr [rbp+50h+end], xmm0
        vaddss  xmm1, xmm2, dword ptr [r15+4]
        vmovss  dword ptr [rbp+50h+end+4], xmm1
        vaddss  xmm0, xmm3, dword ptr [r15+8]
        vmovss  dword ptr [rbp+50h+end+8], xmm0
      }
      v40 = 3 * *(_DWORD *)v67 + 2;
      HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v72, 1, 0);
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v72, 0, 0, 1, 1, 0, 1, 1);
      extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      __asm { vmovss  [rsp+150h+extendedData.collisionBuffer], xmm7 }
      extendedData.phaseSelection = All;
      extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
      *(_WORD *)&extendedData.collectInsideHits = 256;
      extendedData.contents = v17;
      extendedData.ignoreBodies = &v72;
      ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v40);
      if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 1366, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
        __debugbreak();
      HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
      Physics_Raycast((Physics_WorldId)v40, (const vec3_t *)(v67 + 4), &end, &extendedData, ClosestResult);
      if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
      {
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
        __asm { vmovaps xmm6, xmm0 }
        _R14 = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
        if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_R14);
        __asm { vmovss  xmm0, dword ptr [r14+28h] }
        _R14 = &s_sndWeapReflect.raycastUpdates.buffer[_RBX].castResult.distance;
        __asm
        {
          vmulss  xmm0, xmm6, xmm0
          vmovss  dword ptr [r14], xmm0
        }
        s_sndWeapReflect.raycastUpdates.buffer[_RBX].castResult.surfaceIndex = (HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
        HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, &s_sndWeapReflect.raycastUpdates.buffer[_RBX].castResult.normal);
        _RSI = 0x140000000ui64;
      }
      else
      {
        _RSI = DCONST_DVARFLT_snd_weapReflect_maxTraceDistance;
        if ( !DCONST_DVARFLT_snd_weapReflect_maxTraceDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_weapReflect_maxTraceDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm { vmovss  xmm0, dword ptr [rsi+28h] }
        _RSI = 0x140000000ui64;
        _R14 = &s_sndWeapReflect.raycastUpdates.buffer[_RBX].castResult.distance;
        __asm { vmovss  dword ptr [r14], xmm0 }
        s_sndWeapReflect.raycastUpdates.buffer[_RBX].castResult.surfaceIndex = 0;
        s_sndWeapReflect.raycastUpdates.buffer[_RBX].castResult.normal.v[0] = _RDI->v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vmovss  dword ptr [rbx+rsi+15E057E4h], xmm0
          vmovss  xmm1, dword ptr [rdi+8]
          vmovss  dword ptr [rbx+rsi+15E057E8h], xmm1
        }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [r14]
        vmulss  xmm0, xmm1, dword ptr [rdi]
        vmulss  xmm2, xmm1, dword ptr [rdi+4]
        vmulss  xmm3, xmm1, dword ptr [rdi+8]
      }
      v8 = v67;
      __asm
      {
        vaddss  xmm0, xmm0, dword ptr [r15]
        vmovss  dword ptr [r13+0], xmm0
        vaddss  xmm1, xmm2, dword ptr [r15+4]
        vmovss  dword ptr [rbx+rsi+15E057CCh], xmm1
        vaddss  xmm0, xmm3, dword ptr [r15+8]
        vmovss  dword ptr [rbx+rsi+15E057D0h], xmm0
      }
      if ( CG_FindAudioZoneAtPoint(*(LocalClientNum_t *)v8, &_R13->castResult.position, (const ZoneDef **)&outZoneA, (const ZoneDef **)&outZoneB, outLerp) )
      {
        __asm
        {
          vmovss  xmm0, [rsp+150h+outLerp]
          vcomiss xmm0, xmm8
        }
        s_sndWeapReflect.raycastUpdates.buffer[_RBX].castResult.weapReflDefId = CG_GetWeapReflDefId(outZoneB);
      }
      else
      {
        s_sndWeapReflect.raycastUpdates.buffer[_RBX].castResult.weapReflDefId = 0;
      }
      if ( 1 - s_sndWeapReflect.raycastUpdates.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 90, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
        __debugbreak();
      s_sndWeapReflect.raycastUpdates.writePos = 0;
      if ( v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_sndWeapReflect.raycastUpdates.bufcount) )
        __debugbreak();
      _InterlockedIncrement(&s_sndWeapReflect.raycastUpdates.bufcount);
      v57 = hkMemHeapAllocator();
      v72.m_ignoreBodies.m_size = 0;
      if ( v72.m_ignoreBodies.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v57, v72.m_ignoreBodies.m_data, 4, v72.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
      v72.m_ignoreBodies.m_data = NULL;
      v72.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
      v58 = hkMemHeapAllocator();
      v72.m_ignoreEntities.m_size = 0;
      if ( v72.m_ignoreEntities.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v58, v72.m_ignoreEntities.m_data, 8, v72.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    }
    while ( 1 - s_sndWeapReflect.raycastUpdates.bufcount >= 1 );
  }
  while ( s_npcNewPlayRequest.bufcount >= 1 )
  {
    if ( 1 - s_npcResolvedPlayRequest.bufcount < 1 )
      break;
    if ( s_npcNewPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 63, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
      __debugbreak();
    v59 = &s_npcNewPlayRequest.buffer[s_npcNewPlayRequest.readPos];
    if ( 1 - s_npcResolvedPlayRequest.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_weapon_reflect.cpp", 83, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
      __debugbreak();
    v60 = &s_npcResolvedPlayRequest.buffer[s_npcResolvedPlayRequest.writePos];
    if ( (unsigned __int8)SND_WeapReflPerformNPCTrace(&v60->castResult, &v59->org, &v59->orientation, (const vec3_t *)(v8 + 4)) )
    {
      v60->org.v[0] = v59->org.v[0];
      v60->org.v[1] = v59->org.v[1];
      v60->org.v[2] = v59->org.v[2];
      v60->orientation.v[0] = v59->orientation.v[0];
      v60->orientation.v[1] = v59->orientation.v[1];
      v60->orientation.v[2] = v59->orientation.v[2];
      v60->sfxPackage = v59->sfxPackage;
      v60->shotCount = v59->shotCount;
      v60->autoSimId = v59->autoSimId;
      v60->autoSimTimeStamp = v59->autoSimTimeStamp;
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
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

