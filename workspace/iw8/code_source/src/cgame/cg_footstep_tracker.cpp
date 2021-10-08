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
  __int64 v17; 
  __int64 v18; 

  v4 = DCONST_DVARBOOL_snd_footstep_debug;
  _RBP = origin;
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
          LODWORD(v18) = 256;
          LODWORD(v17) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 104, ASSERT_TYPE_ASSERT, "(unsigned)( oldestIndex ) < (unsigned)( (256) )", "oldestIndex doesn't index MAX_FOOTSTEP_TRACKER_INFO_COUNT\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        goto LABEL_19;
      }
    }
    if ( (unsigned int)v9 >= 0x100 )
    {
      LODWORD(v18) = 256;
      LODWORD(v17) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (256) )", "index doesn't index MAX_FOOTSTEP_TRACKER_INFO_COUNT\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v12 = v9;
LABEL_19:
    _RDX = &s_footstepInfo[v6][v12];
    _RDX->startTime = startTime;
    _RDX->entNum = entNum;
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+0]
      vmovsd  qword ptr [rdx+8], xmm0
    }
    _RDX->origin.v[2] = _RBP->v[2];
    _RDX->status = BOOL_VALUE;
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

  v4 = DCONST_DVARBOOL_snd_footstep_debug;
  v5 = localClientNum;
  _RSI = origin;
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
    __asm { vmovsd  xmm0, qword ptr [rsi] }
    _RDX = &s_footstepInfo[v5][v11].origin;
    __asm { vmovsd  qword ptr [rdx], xmm0 }
    _RDX->v[2] = _RSI->v[2];
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

void __fastcall CG_FootstepTracker_Update(LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v7; 
  const dvar_t *v8; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v10; 
  int integer; 
  const dvar_t *v12; 
  int v13; 
  const dvar_t *v14; 
  bool enabled; 
  __int64 v17; 
  unsigned __int64 SndEntHandle; 
  char v26; 
  char v27; 
  const dvar_t *v33; 
  __int64 v34; 
  __int64 v35; 
  const char *v36; 
  const char *v37; 
  char *v39; 
  const char *v47; 
  char *v48; 
  char *fmt; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmta; 
  __int64 duration; 
  int durationa; 
  __int64 v67; 
  vec3_t to; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v7 = localClientNum;
  v8 = DCONST_DVARBOOL_snd_footstep_debug;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    Sys_EnterCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    if ( dword_150E23990 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_150E23990);
      if ( dword_150E23990 == -1 )
      {
        _RBX = DCONST_DVARFLT_snd_footstep_debug_fontsize;
        if ( !DCONST_DVARFLT_snd_footstep_debug_fontsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_fontsize") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmovss  cs:fontSize_1, xmm0
        }
        j__Init_thread_footer(&dword_150E23990);
      }
    }
    v10 = DCONST_DVARINT_snd_footstep_debug_duration;
    if ( !DCONST_DVARINT_snd_footstep_debug_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_duration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    integer = v10->current.integer;
    v12 = DCONST_DVARINT_snd_footstep_debug_finish_max_remaining;
    if ( !DCONST_DVARINT_snd_footstep_debug_finish_max_remaining && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_finish_max_remaining") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v12->current.integer;
    v14 = DCONST_DVARBOOL_snd_footstep_debug_alias;
    if ( !DCONST_DVARBOOL_snd_footstep_debug_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_alias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    enabled = v14->current.enabled;
    _RBX = &s_footstepInfo[v7][0].status;
    v17 = 256i64;
    __asm { vmovss  xmm8, cs:__real@3f800000 }
    do
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
      if ( *_RBX == BYTE_POINTER )
      {
        _RDI = 492i64 * *((int *)_RBX + 2);
        SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)v7, *((_DWORD *)_RBX - 4));
        if ( *(_QWORD *)&g_snd.chaninfoUnweightedPriority[_RDI - 48680] == *(_QWORD *)(_RBX + 12) && *(_QWORD *)&g_snd.chaninfoUnweightedPriority[_RDI - 48704] == SndEntHandle && LODWORD(g_snd.chaninfoUnweightedPriority[_RDI - 48701]) == *((_DWORD *)_RBX + 1) )
        {
          GetSecureSndVec3((const vec3_t *)&g_snd.chaninfoUnweightedPriority[_RDI - 48673], &to, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
          *(double *)&_XMM0 = SND_DistSqToNearestListener(&to);
          _RAX = *(_QWORD *)&g_snd.chaninfoUnweightedPriority[_RDI - 48680];
          __asm
          {
            vsqrtss xmm0, xmm0, xmm0; radius
            vmovss  xmm2, dword ptr [rax+68h]; maxdist
            vmovss  xmm1, dword ptr [rax+64h]; mindist
          }
          *(double *)&_XMM0 = SND_GetDistanceCurveFraction(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm2, xmm0; fraction }
          SND_GetSndCurveValue(LODWORD(g_snd.chaninfoUnweightedPriority[_RDI - 48560]), (const vec2_t *)&g_snd.chaninfoUnweightedPriority[_RDI - 48559], *(const float *)&_XMM2);
          __asm { vmovss  xmm1, cs:?g_snd@@3Usnd_local_t@@A.scriptSoundFade.value; snd_local_t g_snd }
          _R10 = 0x140000000ui64;
          __asm
          {
            vmulss  xmm2, xmm1, dword ptr [rdi+r10+15C6C2DCh]
            vmulss  xmm3, xmm2, xmm0
            vcomiss xmm3, dword ptr [rbx+14h]
          }
          if ( v26 )
            __asm { vmovss  dword ptr [rbx+14h], xmm3 }
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+r10+15C6C364h]
            vcomiss xmm0, dword ptr [rbx+18h]
          }
          if ( !(v26 | v27) )
            __asm { vmovss  dword ptr [rbx+18h], xmm0 }
        }
        else if ( *((_DWORD *)_RBX + 8) - LocalClientGlobals->time >= v13 )
        {
          *_RBX = VEC3_POINTER;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vdivss  xmm6, xmm1, xmm0
          }
        }
        else
        {
          *_RBX = INT_VALUE;
          __asm { vmovaps xmm6, xmm8 }
        }
      }
      v33 = DCONST_DVARBOOL_snd_footstep_debug_asserts;
      if ( !DCONST_DVARBOOL_snd_footstep_debug_asserts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_asserts") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      if ( v33->current.enabled && *_RBX >= 0x10u )
      {
        LODWORD(v67) = 16;
        LODWORD(duration) = *(char *)_RBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_footstep_tracker.cpp", 365, ASSERT_TYPE_ASSERT, "(unsigned)( info->status ) < (unsigned)( static_cast<int>( FootstepStatus::COUNT ) )", "info->status doesn't index static_cast<int>( FootstepStatus::COUNT )\n\t%i not in [0, %i)", duration, v67) )
          __debugbreak();
      }
      v34 = *(char *)_RBX;
      v35 = v34;
      switch ( *_RBX )
      {
        case BOOL_VALUE:
        case BYTE_VALUE:
          __asm
          {
            vmovss  xmm0, cs:fontSize_1
            vmovss  dword ptr [rsp+0B8h+fmt], xmm0
          }
          CG_DebugStarWithText((const vec3_t *)_RBX - 1, &s_statusMap[v34].color, &s_statusMap[v34].color, s_statusMap[v34].text, fmtb, 0);
          break;
        case BYTE_POINTER:
          __asm { vmovss  xmm6, cs:fontSize_1; jumptable 0000000141BD813D case 3 }
          if ( enabled )
            v36 = **(const char ***)(_RBX + 12);
          else
            v36 = (char *)&queryFormat.fmt + 3;
          v37 = j_va("%s %s", s_statusMap[v34].text, v36);
          __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm6 }
          CG_DebugStarWithText((const vec3_t *)_RBX - 1, &s_statusMap[v35].color, &s_statusMap[v35].color, v37, fmtc, 0);
          break;
        case INT_VALUE:
          __asm { vmovss  xmm6, cs:fontSize_1; jumptable 0000000141BD813D case 4 }
          if ( enabled )
            v48 = **(char ***)(_RBX + 12);
          else
            v48 = (char *)&queryFormat.fmt + 3;
          __asm
          {
            vmovss  xmm3, dword ptr [rbx+18h]
            vcvtss2sd xmm3, xmm3, xmm3
            vmovss  xmm2, dword ptr [rbx+14h]
            vcvtss2sd xmm2, xmm2, xmm2
            vmovq   r9, xmm3
            vmovq   r8, xmm2
          }
          v47 = j_va("%s v %.2f o %.2f %s", s_statusMap[v35].text, _R8, _R9, v48);
          durationa = integer;
          __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm6 }
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
          __asm
          {
            vmovss  xmm0, cs:fontSize_1
            vmovss  dword ptr [rsp+0B8h+fmt], xmm0
          }
          CG_DebugStarWithText((const vec3_t *)_RBX - 1, &s_statusMap[v34].color, &s_statusMap[v34].color, s_statusMap[v34].text, fmtd, integer);
          goto LABEL_50;
        case VEC3_POINTER:
          __asm { vmovss  xmm7, cs:fontSize_1; jumptable 0000000141BD813D case 8 }
          if ( enabled )
            v39 = **(char ***)(_RBX + 12);
          else
            v39 = (char *)&queryFormat.fmt + 3;
          __asm
          {
            vmulss  xmm0, xmm6, cs:__real@42c80000
            vcvttss2si eax, xmm0
            vmovss  xmm3, dword ptr [rbx+18h]
            vcvtss2sd xmm3, xmm3, xmm3
            vmovss  xmm2, dword ptr [rbx+14h]
            vcvtss2sd xmm2, xmm2, xmm2
          }
          LODWORD(fmt) = _EAX;
          __asm
          {
            vmovq   r9, xmm3
            vmovq   r8, xmm2
          }
          v47 = j_va("%s v %.2f o %.2f @ %i%% %s", s_statusMap[v35].text, _R8, _R9, fmt, v39);
          durationa = integer;
          __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm7 }
LABEL_49:
          CG_DebugStarWithText((const vec3_t *)_RBX - 1, &s_statusMap[v35].color, &s_statusMap[v35].color, v47, fmta, durationa);
LABEL_50:
          *(_QWORD *)(_RBX - 20) = 0i64;
          *(_QWORD *)(_RBX - 12) = 0i64;
          *(_QWORD *)(_RBX - 4) = 0i64;
          *(_QWORD *)(_RBX + 4) = 0i64;
          *(_QWORD *)(_RBX + 12) = 0i64;
          *(_QWORD *)(_RBX + 20) = 0i64;
          *(_QWORD *)(_RBX + 28) = 0i64;
          break;
        default:
          break;
      }
      _RBX += 56;
      --v17;
    }
    while ( v17 );
    Sys_LeaveCriticalSection(CRITSECT_FOOTSTEP_DEBUG);
  }
  _R11 = &v70;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

