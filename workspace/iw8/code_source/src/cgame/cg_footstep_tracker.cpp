/*
==============
CG_FootstepTracker_SetOrigin
==============
*/

void __fastcall CG_FootstepTracker_SetOrigin(LocalClientNum_t localClientNum, int entNum, int startTime, const vec3_t *origin)
{
  ?CG_FootstepTracker_SetOrigin@@YAXW4LocalClientNum_t@@HHAEBTvec3_t@@@Z(localClientNum, entNum, startTime, origin);
}

/*
==============
CG_FootstepTracker_Add
==============
*/

void __fastcall CG_FootstepTracker_Add(LocalClientNum_t localClientNum, int entNum, int startTime, const vec3_t *origin)
{
  ?CG_FootstepTracker_Add@@YAXW4LocalClientNum_t@@HHAEBTvec3_t@@@Z(localClientNum, entNum, startTime, origin);
}

/*
==============
CG_FootstepTracker_SetStatus_MostRecent
==============
*/

void __fastcall CG_FootstepTracker_SetStatus_MostRecent(LocalClientNum_t localClientNum, int entNum, FootstepStatus status)
{
  ?CG_FootstepTracker_SetStatus_MostRecent@@YAXW4LocalClientNum_t@@HW4FootstepStatus@@@Z(localClientNum, entNum, status);
}

/*
==============
CG_FootstepTracker_Init
==============
*/

void __fastcall CG_FootstepTracker_Init(LocalClientNum_t localClientNum)
{
  ?CG_FootstepTracker_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_FootstepTracker_SetStatus
==============
*/

void __fastcall CG_FootstepTracker_SetStatus(LocalClientNum_t localClientNum, int entNum, int startTime, FootstepStatus status)
{
  ?CG_FootstepTracker_SetStatus@@YAXW4LocalClientNum_t@@HHW4FootstepStatus@@@Z(localClientNum, entNum, startTime, status);
}

/*
==============
CG_FootstepTracker_BeginPlayback_MostRecent
==============
*/

void __fastcall CG_FootstepTracker_BeginPlayback_MostRecent(LocalClientNum_t localClientNum, int entNum, unsigned int playbackId, int playbackStartTime)
{
  ?CG_FootstepTracker_BeginPlayback_MostRecent@@YAXW4LocalClientNum_t@@HIH@Z(localClientNum, entNum, playbackId, playbackStartTime);
}

/*
==============
CG_FootstepTracker_Update
==============
*/

void __fastcall CG_FootstepTracker_Update(LocalClientNum_t localClientNum)
{
  ?CG_FootstepTracker_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_FootstepTracker_Add
==============
*/
void CG_FootstepTracker_Add(LocalClientNum_t localClientNum, int entNum, int startTime, const vec3_t *origin)
{
  const dvar_t *v4; 
  __int64 v6; 
  int v9; 
  FootstepTrackerInfo *v10; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  FootstepTrackerInfo *v15; 
  __int64 v16; 
  __int64 v17; 

  v4 = DCONST_DVARBOOL_snd_footstep_debug;
  v6 = localClientNum;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    Sys_EnterCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
    v9 = 0;
    v10 = s_footstepInfo[v6];
    v11 = 0x7FFFFFFF;
    v12 = -1;
    while ( 1 )
    {
      v13 = v12;
      v14 = v11;
      if ( v10->status == INVALID )
        break;
      v11 = v10->startTime;
      v12 = v9;
      if ( v10->startTime >= v14 )
        v12 = v13;
      ++v9;
      ++v10;
      if ( v11 >= v14 )
        v11 = v14;
      if ( v9 >= 256 )
      {
        if ( v12 >= 0x100 )
        {
          LODWORD(v17) = 256;
          LODWORD(v16) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 104, ASSERT_TYPE_ASSERT, "(unsigned)( oldestIndex ) < (unsigned)( (256) )", "oldestIndex doesn't index MAX_FOOTSTEP_TRACKER_INFO_COUNT\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        goto LABEL_19;
      }
    }
    if ( (unsigned int)v9 >= 0x100 )
    {
      LODWORD(v17) = 256;
      LODWORD(v16) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (256) )", "index doesn't index MAX_FOOTSTEP_TRACKER_INFO_COUNT\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v12 = v9;
LABEL_19:
    v15 = &s_footstepInfo[v6][v12];
    v15->startTime = startTime;
    v15->entNum = entNum;
    *(double *)v15->origin.v = *(double *)origin->v;
    v15->origin.v[2] = origin->v[2];
    v15->status = BOOL_VALUE;
    Sys_LeaveCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
  }
}

/*
==============
CG_FootstepTracker_BeginPlayback_MostRecent
==============
*/
void CG_FootstepTracker_BeginPlayback_MostRecent(LocalClientNum_t localClientNum, int entNum, unsigned int playbackId, int playbackStartTime)
{
  const dvar_t *v4; 
  __int64 v5; 
  int v8; 
  signed int v9; 
  int v10; 
  int *p_entNum; 
  const dvar_t *v12; 
  unsigned int v13; 
  unsigned int *p_playbackId; 
  const dvar_t *v15; 
  cg_t *LocalClientGlobals; 
  const SndAlias *v17; 
  int v18; 
  __int64 v19; 
  int time; 
  __int64 v21; 
  __int64 v22; 

  v4 = DCONST_DVARBOOL_snd_footstep_debug;
  v5 = localClientNum;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    Sys_EnterCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
    v8 = 0;
    v9 = 0x80000000;
    v10 = -1;
    p_entNum = &s_footstepInfo[v5][0].entNum;
    do
    {
      if ( *((_BYTE *)p_entNum + 16) && *p_entNum == entNum && v9 < *(p_entNum - 1) )
      {
        v9 = *(p_entNum - 1);
        v10 = v8;
      }
      ++v8;
      p_entNum += 14;
    }
    while ( v8 < 256 );
    v12 = DCONST_DVARBOOL_snd_footstep_debug_asserts;
    if ( !DCONST_DVARBOOL_snd_footstep_debug_asserts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_asserts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      if ( v10 >= 0 )
        goto LABEL_19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 266, ASSERT_TYPE_ASSERT, "(0 <= index)", "%s\n\tFailed to track playback start for ent's most recent footstep\n", "0 <= index") )
        __debugbreak();
    }
    if ( v10 < 0 )
    {
LABEL_35:
      Sys_LeaveCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
      return;
    }
LABEL_19:
    v13 = 0;
    p_playbackId = &g_snd.voices[1].playbackId;
    while ( *(p_playbackId - 492) != playbackId )
    {
      if ( *p_playbackId == playbackId )
      {
        ++v13;
        break;
      }
      if ( p_playbackId[492] == playbackId )
      {
        v13 += 2;
        break;
      }
      p_playbackId += 1476;
      v13 += 3;
      if ( (__int64)p_playbackId >= (__int64)&g_snd.volmods[50].goalvalue )
        break;
    }
    v15 = DCONST_DVARBOOL_snd_footstep_debug_asserts;
    if ( !DCONST_DVARBOOL_snd_footstep_debug_asserts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_asserts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled && v13 >= 0x63 )
    {
      LODWORD(v22) = 99;
      LODWORD(v21) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 279, ASSERT_TYPE_ASSERT, "(unsigned)( voiceIndex ) < (unsigned)( ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) )", "voiceIndex doesn't index ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
    v17 = *(const SndAlias **)&g_snd.chaninfoUnweightedPriority[492 * v13 - 48680];
    v18 = SND_SV_LookupSoundLength(v17->aliasName, 0, 0);
    v19 = v10 + (v5 << 8);
    s_footstepInfo[0][v19].status = BYTE_POINTER;
    s_footstepInfo[0][v19].playbackId = playbackId;
    s_footstepInfo[0][v19].voiceIndex = v13;
    s_footstepInfo[0][v19].alias = v17;
    time = LocalClientGlobals->time;
    s_footstepInfo[0][v19].playbackStartTime = time;
    s_footstepInfo[0][v19].playbackEndTime = v18 + time;
    *(_QWORD *)&s_footstepInfo[0][v19].minVolume = 2139095039i64;
    goto LABEL_35;
  }
}

/*
==============
CG_FootstepTracker_FindIndexAtTime
==============
*/
__int64 CG_FootstepTracker_FindIndexAtTime(LocalClientNum_t localClientNum, int entNum, int startTime)
{
  unsigned int v3; 
  __int64 v4; 
  int *i; 
  unsigned int v7; 
  int v8; 

  v3 = 0;
  v4 = 0i64;
  for ( i = &s_footstepInfo[localClientNum][0].entNum; !*((_BYTE *)i + 16) || *i != entNum || *(i - 1) != startTime; i += 14 )
  {
    ++v3;
    if ( ++v4 >= 256 )
      return 0xFFFFFFFFi64;
  }
  if ( v3 >= 0x100 )
  {
    v8 = 256;
    v7 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (256) )", "index doesn't index MAX_FOOTSTEP_TRACKER_INFO_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return v3;
}

/*
==============
CG_FootstepTracker_Init
==============
*/
void CG_FootstepTracker_Init(LocalClientNum_t localClientNum)
{
  memset_0(s_footstepInfo[localClientNum], 0, sizeof(FootstepTrackerInfo[256]));
}

/*
==============
CG_FootstepTracker_SetOrigin
==============
*/
void CG_FootstepTracker_SetOrigin(LocalClientNum_t localClientNum, int entNum, int startTime, const vec3_t *origin)
{
  const dvar_t *v4; 
  __int64 v5; 
  int IndexAtTime; 
  const dvar_t *v10; 
  __int64 v11; 
  vec3_t *p_origin; 

  v4 = DCONST_DVARBOOL_snd_footstep_debug;
  v5 = localClientNum;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    Sys_EnterCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
    IndexAtTime = CG_FootstepTracker_FindIndexAtTime((LocalClientNum_t)v5, entNum, startTime);
    v10 = DCONST_DVARBOOL_snd_footstep_debug_asserts;
    v11 = IndexAtTime;
    if ( !DCONST_DVARBOOL_snd_footstep_debug_asserts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_asserts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      if ( (int)v11 >= 0 )
        goto LABEL_13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 203, ASSERT_TYPE_ASSERT, "(0 <= index)", "%s\n\tFailed to update footstep origin\n", "0 <= index") )
        __debugbreak();
    }
    if ( (int)v11 < 0 )
    {
LABEL_14:
      Sys_LeaveCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
      return;
    }
LABEL_13:
    p_origin = &s_footstepInfo[v5][v11].origin;
    *(double *)p_origin->v = *(double *)origin->v;
    p_origin->v[2] = origin->v[2];
    goto LABEL_14;
  }
}

/*
==============
CG_FootstepTracker_SetStatus
==============
*/
void CG_FootstepTracker_SetStatus(LocalClientNum_t localClientNum, int entNum, int startTime, FootstepStatus status)
{
  const dvar_t *v4; 
  __int64 v5; 
  int IndexAtTime; 
  const dvar_t *v10; 
  __int64 v11; 

  v4 = DCONST_DVARBOOL_snd_footstep_debug;
  v5 = localClientNum;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    Sys_EnterCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
    IndexAtTime = CG_FootstepTracker_FindIndexAtTime((LocalClientNum_t)v5, entNum, startTime);
    v10 = DCONST_DVARBOOL_snd_footstep_debug_asserts;
    v11 = IndexAtTime;
    if ( !DCONST_DVARBOOL_snd_footstep_debug_asserts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_asserts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      if ( (int)v11 >= 0 )
        goto LABEL_13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 224, ASSERT_TYPE_ASSERT, "(0 <= index)", "%s\n\tFailed to update footstep status\n", "0 <= index") )
        __debugbreak();
    }
    if ( (int)v11 < 0 )
    {
LABEL_14:
      Sys_LeaveCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
      return;
    }
LABEL_13:
    s_footstepInfo[v5][v11].status = status;
    goto LABEL_14;
  }
}

/*
==============
CG_FootstepTracker_SetStatus_MostRecent
==============
*/
void CG_FootstepTracker_SetStatus_MostRecent(LocalClientNum_t localClientNum, int entNum, FootstepStatus status)
{
  const dvar_t *v3; 
  __int64 v4; 
  int v7; 
  int *p_entNum; 
  int v9; 
  signed int v10; 
  const dvar_t *v11; 

  v3 = DCONST_DVARBOOL_snd_footstep_debug;
  v4 = localClientNum;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    Sys_EnterCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
    v7 = 0;
    p_entNum = &s_footstepInfo[v4][0].entNum;
    v9 = -1;
    v10 = 0x80000000;
    do
    {
      if ( *((_BYTE *)p_entNum + 16) && *p_entNum == entNum && v10 < *(p_entNum - 1) )
      {
        v10 = *(p_entNum - 1);
        v9 = v7;
      }
      ++v7;
      p_entNum += 14;
    }
    while ( v7 < 256 );
    v11 = DCONST_DVARBOOL_snd_footstep_debug_asserts;
    if ( !DCONST_DVARBOOL_snd_footstep_debug_asserts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_asserts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      if ( v9 >= 0 )
        goto LABEL_19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 245, ASSERT_TYPE_ASSERT, "(0 <= index)", "%s\n\tFailed to update footstep status for ent's most recent footstep\n", "0 <= index") )
        __debugbreak();
    }
    if ( v9 < 0 )
    {
LABEL_20:
      Sys_LeaveCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
      return;
    }
LABEL_19:
    s_footstepInfo[v4][v9].status = status;
    goto LABEL_20;
  }
}

/*
==============
CG_FootstepTracker_Update
==============
*/
void CG_FootstepTracker_Update(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v4; 
  int integer; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 
  bool enabled; 
  FootstepStatus *p_status; 
  __int64 v11; 
  float v12; 
  __int64 v13; 
  unsigned __int64 SndEntHandle; 
  float v15; 
  double SndCurveValue; 
  float v17; 
  float v18; 
  int v19; 
  int v20; 
  const dvar_t *v21; 
  __int64 v22; 
  __int64 v23; 
  float v24; 
  const char *v25; 
  const char *v26; 
  float v27; 
  char *v28; 
  const char *v29; 
  float v30; 
  char *v31; 
  const dvar_t *v32; 
  char *fmt; 
  float fmta; 
  __int64 duration; 
  int durationa; 
  __int64 v37; 
  vec3_t to; 

  v1 = localClientNum;
  v2 = DCONST_DVARBOOL_snd_footstep_debug;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    Sys_EnterCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    if ( dword_150E23990 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_150E23990);
      if ( dword_150E23990 == -1 )
      {
        v32 = DCONST_DVARFLT_snd_footstep_debug_fontsize;
        if ( !DCONST_DVARFLT_snd_footstep_debug_fontsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_fontsize") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        fontSize_1 = v32->current.value;
        j__Init_thread_footer(&dword_150E23990);
      }
    }
    v4 = DCONST_DVARINT_snd_footstep_debug_duration;
    if ( !DCONST_DVARINT_snd_footstep_debug_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_duration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    v6 = DCONST_DVARINT_snd_footstep_debug_finish_max_remaining;
    if ( !DCONST_DVARINT_snd_footstep_debug_finish_max_remaining && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_finish_max_remaining") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.integer;
    v8 = DCONST_DVARBOOL_snd_footstep_debug_alias;
    if ( !DCONST_DVARBOOL_snd_footstep_debug_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_alias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    enabled = v8->current.enabled;
    p_status = &s_footstepInfo[v1][0].status;
    v11 = 256i64;
    do
    {
      v12 = 0.0;
      if ( *p_status == BYTE_POINTER )
      {
        v13 = 492i64 * *((int *)p_status + 2);
        SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)v1, *((_DWORD *)p_status - 4));
        if ( *(_QWORD *)&g_snd.chaninfoUnweightedPriority[v13 - 48680] == *(_QWORD *)(p_status + 12) && *(_QWORD *)&g_snd.chaninfoUnweightedPriority[v13 - 48704] == SndEntHandle && LODWORD(g_snd.chaninfoUnweightedPriority[v13 - 48701]) == *((_DWORD *)p_status + 1) )
        {
          GetSecureSndVec3((const vec3_t *)&g_snd.chaninfoUnweightedPriority[v13 - 48673], &to, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
          v15 = fsqrt(COERCE_FLOAT(COERCE_UNSIGNED_INT64(SND_DistSqToNearestListener(&to))));
          SND_GetDistanceCurveFraction(v15, *(float *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[v13 - 48680] + 100i64), *(float *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[v13 - 48680] + 104i64));
          SndCurveValue = SND_GetSndCurveValue(LODWORD(g_snd.chaninfoUnweightedPriority[v13 - 48560]), (const vec2_t *)&g_snd.chaninfoUnweightedPriority[v13 - 48559], v15);
          v17 = (float)(g_snd.scriptSoundFade.value * g_snd.chaninfoUnweightedPriority[v13 - 48697]) * *(float *)&SndCurveValue;
          if ( v17 < *((float *)p_status + 5) )
            *((float *)p_status + 5) = v17;
          v18 = g_snd.chaninfoUnweightedPriority[v13 - 48663];
          if ( v18 > *((float *)p_status + 6) )
            *((float *)p_status + 6) = v18;
        }
        else
        {
          v19 = *((_DWORD *)p_status + 8);
          v20 = v19 - LocalClientGlobals->time;
          if ( v20 >= v7 )
          {
            *p_status = VEC3_POINTER;
            v12 = (float)(v19 - *((_DWORD *)p_status + 7) - v20) / (float)(v19 - *((_DWORD *)p_status + 7));
          }
          else
          {
            *p_status = INT_VALUE;
            v12 = FLOAT_1_0;
          }
        }
      }
      v21 = DCONST_DVARBOOL_snd_footstep_debug_asserts;
      if ( !DCONST_DVARBOOL_snd_footstep_debug_asserts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_asserts") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.enabled && *p_status >= 0x10u )
      {
        LODWORD(v37) = 16;
        LODWORD(duration) = *(char *)p_status;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 365, ASSERT_TYPE_ASSERT, "(unsigned)( info->status ) < (unsigned)( static_cast<int>( FootstepStatus::COUNT ) )", "info->status doesn't index static_cast<int>( FootstepStatus::COUNT )\n\t%i not in [0, %i)", duration, v37) )
          __debugbreak();
      }
      v22 = *(char *)p_status;
      v23 = v22;
      switch ( *p_status )
      {
        case BOOL_VALUE:
        case BYTE_VALUE:
          CG_DebugStarWithText((const vec3_t *)p_status - 1, &s_statusMap[v22].color, &s_statusMap[v22].color, s_statusMap[v22].text, fontSize_1, 0);
          break;
        case BYTE_POINTER:
          v24 = fontSize_1;
          if ( enabled )
            v25 = **(const char ***)(p_status + 12);
          else
            v25 = (char *)&queryFormat.fmt + 3;
          v26 = j_va("%s %s", s_statusMap[v22].text, v25);
          CG_DebugStarWithText((const vec3_t *)p_status - 1, &s_statusMap[v23].color, &s_statusMap[v23].color, v26, v24, 0);
          break;
        case INT_VALUE:
          v30 = fontSize_1;
          if ( enabled )
            v31 = **(char ***)(p_status + 12);
          else
            v31 = (char *)&queryFormat.fmt + 3;
          v29 = j_va("%s v %.2f o %.2f %s", s_statusMap[v23].text, *((float *)p_status + 5), *((float *)p_status + 6), v31);
          durationa = integer;
          fmta = v30;
          goto LABEL_49;
        case FLOAT_VALUE:
        case FLOAT_POINTER:
        case VEC3_VALUE:
        case STRUCT_POINTER:
        case VEC3_POINTER|BYTE_VALUE:
        case STRUCT_POINTER|BYTE_VALUE:
        case VEC3_POINTER|INT_VALUE:
        case STRUCT_POINTER|INT_VALUE:
        case VEC3_POINTER|FLOAT_POINTER:
        case STRUCT_POINTER|FLOAT_POINTER:
          CG_DebugStarWithText((const vec3_t *)p_status - 1, &s_statusMap[v22].color, &s_statusMap[v22].color, s_statusMap[v22].text, fontSize_1, integer);
          goto LABEL_50;
        case VEC3_POINTER:
          v27 = fontSize_1;
          if ( enabled )
            v28 = **(char ***)(p_status + 12);
          else
            v28 = (char *)&queryFormat.fmt + 3;
          LODWORD(fmt) = (int)(float)(v12 * 100.0);
          v29 = j_va("%s v %.2f o %.2f @ %i%% %s", s_statusMap[v23].text, *((float *)p_status + 5), *((float *)p_status + 6), fmt, v28);
          durationa = integer;
          fmta = v27;
LABEL_49:
          CG_DebugStarWithText((const vec3_t *)p_status - 1, &s_statusMap[v23].color, &s_statusMap[v23].color, v29, fmta, durationa);
LABEL_50:
          *(_QWORD *)(p_status - 20) = 0i64;
          *(_QWORD *)(p_status - 12) = 0i64;
          *(_QWORD *)(p_status - 4) = 0i64;
          *(_QWORD *)(p_status + 4) = 0i64;
          *(_QWORD *)(p_status + 12) = 0i64;
          *(_QWORD *)(p_status + 20) = 0i64;
          *(_QWORD *)(p_status + 28) = 0i64;
          break;
        default:
          break;
      }
      p_status += 56;
      --v11;
    }
    while ( v11 );
    Sys_LeaveCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
  }
}

