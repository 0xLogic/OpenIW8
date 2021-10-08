/*
==============
CG_FrontEndScene_Init
==============
*/

void CG_FrontEndScene_Init(void)
{
  ?CG_FrontEndScene_Init@@YAXXZ();
}

/*
==============
CG_FrontEndScene_GetCinematicState
==============
*/

void __fastcall CG_FrontEndScene_GetCinematicState(CinematicState *frontendSceneRequest)
{
  ?CG_FrontEndScene_GetCinematicState@@YAXPEAUCinematicState@@@Z(frontendSceneRequest);
}

/*
==============
CG_FrontEndScene_ShouldBlockNewTransientRequests
==============
*/

bool __fastcall CG_FrontEndScene_ShouldBlockNewTransientRequests()
{
  return ?CG_FrontEndScene_ShouldBlockNewTransientRequests@@YA_NXZ();
}

/*
==============
CG_FrontEndScene_GetActiveSectionNameAndParam
==============
*/

void __fastcall CG_FrontEndScene_GetActiveSectionNameAndParam(char *outSectionName, unsigned __int64 outNameSize, unsigned int *outSectionParam)
{
  ?CG_FrontEndScene_GetActiveSectionNameAndParam@@YAXPEAD_KPEAI@Z(outSectionName, outNameSize, outSectionParam);
}

/*
==============
CG_FrontEndScene_FrameUpdate
==============
*/

void __fastcall CG_FrontEndScene_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?CG_FrontEndScene_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_FrontEndScene_SetScriptedCameraState
==============
*/

void __fastcall CG_FrontEndScene_SetScriptedCameraState(const BgScriptedCameraState *r_scriptedCameraState)
{
  ?CG_FrontEndScene_SetScriptedCameraState@@YAXAEBUBgScriptedCameraState@@@Z(r_scriptedCameraState);
}

/*
==============
CG_FrontEndScene_HasActiveCinematicPlayback
==============
*/

bool __fastcall CG_FrontEndScene_HasActiveCinematicPlayback()
{
  return ?CG_FrontEndScene_HasActiveCinematicPlayback@@YA_NXZ();
}

/*
==============
CG_FrontEndScene_GetCameraFOV
==============
*/

double __fastcall CG_FrontEndScene_GetCameraFOV()
{
  double result; 

  *(float *)&result = ?CG_FrontEndScene_GetCameraFOV@@YAMXZ();
  return result;
}

/*
==============
CG_FrontendScene_AreRequiredTransientsLoaded
==============
*/

bool __fastcall CG_FrontendScene_AreRequiredTransientsLoaded()
{
  return ?CG_FrontendScene_AreRequiredTransientsLoaded@@YA_NXZ();
}

/*
==============
CG_FrontEndScene_Shutdown
==============
*/

void CG_FrontEndScene_Shutdown(void)
{
  ?CG_FrontEndScene_Shutdown@@YAXXZ();
}

/*
==============
CG_FrontEndScene_SetActiveSection
==============
*/

void __fastcall CG_FrontEndScene_SetActiveSection(const char *sectionName, unsigned int sectionParam)
{
  ?CG_FrontEndScene_SetActiveSection@@YAXPEBDI@Z(sectionName, sectionParam);
}

/*
==============
CG_FrontEndScene_FrameUpdate
==============
*/

void __fastcall CG_FrontEndScene_FrameUpdate(LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v4; 
  cg_t *v5; 
  int time; 
  int v16; 
  unsigned int v37; 
  __int64 v38; 

  v4 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v4] )
  {
    LODWORD(v38) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v38) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v38) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v38) )
      __debugbreak();
  }
  v5 = cg_t::ms_cgArray[v4];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_frontend_scene.cpp", 320, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( v5->m_frontEndScene )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    CG_FrontEndScene_UpdateRequiredTransients((LocalClientNum_t)v4, v5->time, &s_cgFrontEndSceneState.m_activeScriptedCameraState);
    time = v5->time;
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    if ( s_cgFrontEndSceneState.m_requiredTransientsLoaded && s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeTarget == VISIBLE )
    {
      if ( s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeStartTime <= time )
      {
        Com_FrontEndScene_SetOpacityChangeTime(s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeEndTime - s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeStartTime);
        Com_FrontEndScene_ClearOpacityOverride();
      }
    }
    else
    {
      if ( s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeStartTime == s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeEndTime || s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeEndTime <= time )
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      else
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, ecx
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm1, xmm1, xmm0
          vsubss  xmm0, xmm6, xmm1; val
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps xmm2, xmm6; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      }
      __asm
      {
        vmovaps xmm1, xmm0; renderOpacity
        vxorps  xmm0, xmm0, xmm0; targetOpacity
      }
      Com_FrontEndScene_SetOpacityTargetOverride(*(const float *)&_XMM0, *(const float *)&_XMM1_8);
    }
    if ( s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovStartTime == s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovEndTime || (v16 = v5->time, s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovEndTime <= v16) )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, cs:s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovTarget
        vmovss  cs:s_cgFrontEndSceneState.m_currentFov, xmm0
      }
    }
    else
    {
      _ECX = v16 - s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovStartTime;
      _EAX = s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovEndTime - s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovStartTime;
      __asm
      {
        vmovd   xmm2, ecx
        vcvtdq2ps xmm2, xmm2
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vdivss  xmm0, xmm2, xmm0; val
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovd   xmm1, cs:s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovSource
        vsubss  xmm2, xmm6, xmm0
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm3, xmm2, xmm1
        vmovd   xmm2, cs:s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovTarget
        vcvtdq2ps xmm2, xmm2
        vmulss  xmm0, xmm2, xmm0
        vaddss  xmm1, xmm3, xmm0
        vmovss  cs:s_cgFrontEndSceneState.m_currentFov, xmm1
      }
    }
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
    if ( v5->time >= s_cgFrontEndSceneState.m_activeScriptedCameraState.m_cinematicPlaybackTime )
    {
      v37 = s_cgFrontEndSceneState.m_activeScriptedCameraState.m_cinematicPlaybackLooping ? 2 : 0;
      Core_strcpy(s_cgFrontEndSceneState.m_activeCinematic, 0x40ui64, s_cgFrontEndSceneState.m_activeScriptedCameraState.m_cinematicPlaybackName);
      s_cgFrontEndSceneState.m_activeCinematicFlags = v37;
    }
  }
}

/*
==============
CG_FrontEndScene_GetActiveSectionNameAndParam
==============
*/
void CG_FrontEndScene_GetActiveSectionNameAndParam(char *outSectionName, unsigned __int64 outNameSize, unsigned int *outSectionParam)
{
  if ( !outSectionParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_frontend_scene.cpp", 298, ASSERT_TYPE_ASSERT, "(outSectionParam)", (const char *)&queryFormat, "outSectionParam") )
    __debugbreak();
  if ( !outSectionName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_frontend_scene.cpp", 299, ASSERT_TYPE_ASSERT, "(outSectionName)", (const char *)&queryFormat, "outSectionName") )
    __debugbreak();
  if ( !outNameSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_frontend_scene.cpp", 300, ASSERT_TYPE_ASSERT, "(outNameSize)", (const char *)&queryFormat, "outNameSize") )
    __debugbreak();
  if ( s_cgFrontEndSceneActiveSectionLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_cgFrontEndSceneActiveSectionLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_cgFrontEndSceneActiveSectionLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_cgFrontEndSceneActiveSectionLock);
  while ( s_cgFrontEndSceneActiveSectionLock.writeCount )
    Sys_Sleep(0);
  Core_strcpy(outSectionName, outNameSize, s_cgFrontEndSceneState.m_activeSectionName);
  *outSectionParam = s_cgFrontEndSceneState.m_activeSectionParam;
  if ( s_cgFrontEndSceneActiveSectionLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_cgFrontEndSceneActiveSectionLock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_cgFrontEndSceneActiveSectionLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_cgFrontEndSceneActiveSectionLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_cgFrontEndSceneActiveSectionLock);
}

/*
==============
CG_FrontEndScene_GetCameraFOV
==============
*/
float CG_FrontEndScene_GetCameraFOV()
{
  __asm { vmovss  xmm0, cs:s_cgFrontEndSceneState.m_currentFov }
  return *(float *)&_XMM0;
}

/*
==============
CG_FrontEndScene_GetCinematicState
==============
*/
void CG_FrontEndScene_GetCinematicState(CinematicState *frontendSceneRequest)
{
  if ( !frontendSceneRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_frontend_scene.cpp", 118, ASSERT_TYPE_ASSERT, "(frontendSceneRequest)", (const char *)&queryFormat, "frontendSceneRequest") )
    __debugbreak();
  frontendSceneRequest->playbackFlags = s_cgFrontEndSceneState.m_activeCinematicFlags;
  Core_strcpy(frontendSceneRequest->name, 0x40ui64, s_cgFrontEndSceneState.m_activeCinematic);
  frontendSceneRequest->startOffsetMSec = 0;
}

/*
==============
CG_FrontEndScene_HasActiveCinematicPlayback
==============
*/
bool CG_FrontEndScene_HasActiveCinematicPlayback()
{
  return s_cgFrontEndSceneState.m_activeCinematic[0] != 0;
}

/*
==============
CG_FrontEndScene_Init
==============
*/
void CG_FrontEndScene_Init(void)
{
  memset_0(&s_cgFrontEndSceneState, 0, 0x80ui64);
  __asm
  {
    vmovss  xmm0, cs:__real@42820000
    vmovss  cs:s_cgFrontEndSceneState.m_currentFov, xmm0
  }
  *(_QWORD *)s_cgFrontEndSceneState.m_activeCinematic = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[8] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[16] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[24] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[32] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[40] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[48] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[56] = 0i64;
  s_cgFrontEndSceneState.m_activeCinematicFlags = 0;
  s_cgFrontEndSceneState.m_requiredTransientsLoaded = 0;
  s_cgFrontEndSceneState.m_requiredTransientsTimeout = 0;
}

/*
==============
CG_FrontEndScene_SetActiveSection
==============
*/
void CG_FrontEndScene_SetActiveSection(const char *sectionName, unsigned int sectionParam)
{
  volatile int writeCount; 
  int v6; 
  TempThreadPriority tempPriority; 

  Sys_LockWrite(&s_cgFrontEndSceneActiveSectionLock);
  if ( strcmp(sectionName, s_cgFrontEndSceneState.m_activeSectionName) )
    Dvar_SetString_Internal(DVARSTR_lui_fe_transitioning_scene, sectionName);
  Core_strcpy(s_cgFrontEndSceneState.m_activeSectionName, 0x40ui64, sectionName);
  s_cgFrontEndSceneState.m_activeSectionParam = sectionParam;
  if ( s_cgFrontEndSceneActiveSectionLock.writeCount != 1 )
  {
    v6 = 1;
    writeCount = s_cgFrontEndSceneActiveSectionLock.writeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", writeCount, v6) )
      __debugbreak();
  }
  if ( s_cgFrontEndSceneActiveSectionLock.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr cs:s_cgFrontEndSceneActiveSectionLock.tempPriority.threadHandle }
  s_cgFrontEndSceneActiveSectionLock.writeThreadId = 0;
  __asm { vmovups xmmword ptr [rsp+68h+tempPriority.threadHandle], xmm0 }
  if ( ((unsigned __int8)&s_cgFrontEndSceneActiveSectionLock.writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_cgFrontEndSceneActiveSectionLock.writeCount) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_cgFrontEndSceneActiveSectionLock.writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
    __debugbreak();
  Sys_TempThreadPriorityEnd(&tempPriority);
}

/*
==============
CG_FrontEndScene_SetScriptedCameraState
==============
*/
void CG_FrontEndScene_SetScriptedCameraState(const BgScriptedCameraState *r_scriptedCameraState)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr cs:s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeTarget, ymm0
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovups ymmword ptr cs:s_cgFrontEndSceneState.m_activeScriptedCameraState.m_requiredCharacters+4, ymm1
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups ymmword ptr cs:s_cgFrontEndSceneState.m_activeScriptedCameraState.m_cinematicPlaybackName+8, ymm0
    vmovups ymm1, ymmword ptr [rcx+60h]
    vmovups ymmword ptr cs:s_cgFrontEndSceneState.m_activeScriptedCameraState.m_cinematicPlaybackName+28h, ymm1
  }
}

/*
==============
CG_FrontEndScene_ShouldBlockNewTransientRequests
==============
*/
bool CG_FrontEndScene_ShouldBlockNewTransientRequests()
{
  return s_cgFrontEndSceneState.m_requiredTransientsLoaded && Com_FrontEndScene_NeedsDatabaseAccess();
}

/*
==============
CG_FrontEndScene_Shutdown
==============
*/
void CG_FrontEndScene_Shutdown(void)
{
  s_cgFrontEndSceneState.m_activeCinematic[0] = 0;
  s_cgFrontEndSceneState.m_activeCinematicFlags = 0;
}

/*
==============
CG_FrontEndScene_UpdateRequiredTransients
==============
*/
void CG_FrontEndScene_UpdateRequiredTransients(LocalClientNum_t localClientNum, const int cgameTime, const BgScriptedCameraState *r_scriptedCameraState)
{
  bool *m_requiredCharacters; 
  unsigned int v6; 
  unsigned int v7; 
  bool *v8; 
  char v9; 
  const dvar_t *v10; 
  int integer; 
  const dvar_t *v12; 

  if ( cgameTime < r_scriptedCameraState->m_requiredCharacersTime )
  {
    if ( s_cgFrontEndSceneState.m_requiredTransientsLoaded )
      return;
    goto LABEL_30;
  }
  m_requiredCharacters = r_scriptedCameraState->m_requiredCharacters;
  v6 = 0;
  v7 = 0;
  v8 = r_scriptedCameraState->m_requiredCharacters;
  v9 = 1;
  while ( !*v8 || CG_ClientCharacter_HasCharacterModels(localClientNum, v7) && CG_ClientCharacter_GetCharacterLoaded(localClientNum, v7) )
  {
    ++v7;
    ++v8;
    if ( v7 >= 0x18 )
      goto LABEL_9;
  }
  v9 = 0;
LABEL_9:
  if ( !CG_ClientModel_AreSubAssetsLoadingForAnyModel(localClientNum) && v9 )
  {
    s_cgFrontEndSceneState.m_requiredTransientsTimeout = 0;
    s_cgFrontEndSceneState.m_requiredTransientsLoaded = 1;
    return;
  }
  if ( !s_cgFrontEndSceneState.m_requiredTransientsTimeout )
  {
    v10 = DCONST_DVARINT_cg_frontEndSceneTransientTimeout;
    if ( !DCONST_DVARINT_cg_frontEndSceneTransientTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_frontEndSceneTransientTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    integer = v10->current.integer;
    s_cgFrontEndSceneState.m_requiredTransientsLoaded = 0;
    s_cgFrontEndSceneState.m_requiredTransientsTimeout = cgameTime + integer;
    goto LABEL_30;
  }
  if ( s_cgFrontEndSceneState.m_requiredTransientsTimeout >= cgameTime )
  {
    s_cgFrontEndSceneState.m_requiredTransientsLoaded = 0;
LABEL_30:
    v12 = DCONST_DVARINT_cg_frontEndSceneTransientStreamingTime;
    if ( !DCONST_DVARINT_cg_frontEndSceneTransientStreamingTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_frontEndSceneTransientStreamingTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    Com_FrontEndScene_SetForceStreamingDuration(v12->current.unsignedInt);
    return;
  }
  if ( !s_cgFrontEndSceneState.m_requiredTransientsLoaded )
  {
    Com_PrintError(16, "CG_FrontEndScene_UpdateRequiredTransients: Timed out monitoring required transients, have requests been made correclty?\n");
    do
    {
      if ( *m_requiredCharacters )
      {
        if ( CG_ClientCharacter_HasCharacterModels(localClientNum, v6) )
        {
          Com_Printf(14, "CG_FrontEndScene_UpdateRequiredTransients: Transients were not loaded in time for character %i (DB Problem)\n", v6);
          CG_ClientCharacter_PrintCharacterNotLoadedModels(localClientNum, v6);
        }
        else
        {
          Com_Printf(14, "CG_FrontEndScene_UpdateRequiredTransients: No character models have been set for required index %i (LUI Problem)\n", v6);
        }
      }
      ++v6;
      ++m_requiredCharacters;
    }
    while ( v6 < 0x18 );
    if ( CG_ClientModel_AreSubAssetsLoadingForAnyModel(localClientNum) )
    {
      Com_Printf(14, "CG_FrontEndScene_UpdateRequiredTransients: Transients were not loaded in time for some client models (DB Problem)\n");
      CG_ClientModel_Debug_PrintLoadingSubAssets(localClientNum);
    }
  }
  s_cgFrontEndSceneState.m_requiredTransientsLoaded = 1;
}

/*
==============
CG_FrontendScene_AreRequiredTransientsLoaded
==============
*/
_BOOL8 CG_FrontendScene_AreRequiredTransientsLoaded()
{
  return s_cgFrontEndSceneState.m_requiredTransientsLoaded;
}

