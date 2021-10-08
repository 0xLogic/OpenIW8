/*
==============
CG_WorldStreaming_HasNextStreamPosition
==============
*/

bool __fastcall CG_WorldStreaming_HasNextStreamPosition(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  return ?CG_WorldStreaming_HasNextStreamPosition@@YA_NW4LocalClientNum_t@@W4BgWorldStreamingViewType@@@Z(localClientNum, viewType);
}

/*
==============
CG_WorldStreaming_Shutdown
==============
*/

void __fastcall CG_WorldStreaming_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_WorldStreaming_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WorldStreaming_GetCurrentStateFrameDelta
==============
*/

int __fastcall CG_WorldStreaming_GetCurrentStateFrameDelta(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  return ?CG_WorldStreaming_GetCurrentStateFrameDelta@@YAHW4LocalClientNum_t@@W4BgWorldStreamingViewType@@@Z(localClientNum, viewType);
}

/*
==============
CG_WorldStreaming_Init
==============
*/

void __fastcall CG_WorldStreaming_Init(const LocalClientNum_t localClientNum)
{
  ?CG_WorldStreaming_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WorldStreaming_ClearNextStreamPosition
==============
*/

void __fastcall CG_WorldStreaming_ClearNextStreamPosition(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  ?CG_WorldStreaming_ClearNextStreamPosition@@YAXW4LocalClientNum_t@@W4BgWorldStreamingViewType@@@Z(localClientNum, viewType);
}

/*
==============
CG_WorldStreaming_GetLoadDist
==============
*/

double __fastcall CG_WorldStreaming_GetLoadDist(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType type)
{
  double result; 

  *(float *)&result = ?CG_WorldStreaming_GetLoadDist@@YAMW4LocalClientNum_t@@W4BgWorldStreamingViewType@@@Z(localClientNum, type);
  return result;
}

/*
==============
CG_WorldStreaming_GetNextStreamViewMode
==============
*/

BgWorldStreamingViewMode __fastcall CG_WorldStreaming_GetNextStreamViewMode(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  return ?CG_WorldStreaming_GetNextStreamViewMode@@YA?AW4BgWorldStreamingViewMode@@W4LocalClientNum_t@@W4BgWorldStreamingViewType@@@Z(localClientNum, viewType);
}

/*
==============
CG_WorldStreaming_GetNextStreamVelocity
==============
*/

const vec3_t *__fastcall CG_WorldStreaming_GetNextStreamVelocity(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  return ?CG_WorldStreaming_GetNextStreamVelocity@@YAAEBTvec3_t@@W4LocalClientNum_t@@W4BgWorldStreamingViewType@@@Z(localClientNum, viewType);
}

/*
==============
CG_WorldStreaming_TouchClientStreamManualViews
==============
*/

void __fastcall CG_WorldStreaming_TouchClientStreamManualViews(const LocalClientNum_t localClientNum)
{
  ?CG_WorldStreaming_TouchClientStreamManualViews@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WorldStreaming_ManualStreamPosCommand
==============
*/

void __fastcall CG_WorldStreaming_ManualStreamPosCommand(const LocalClientNum_t localClientNum, msg_t *msg)
{
  ?CG_WorldStreaming_ManualStreamPosCommand@@YAXW4LocalClientNum_t@@PEAUmsg_t@@@Z(localClientNum, msg);
}

/*
==============
CG_WorldStreaming_GetNextStreamPosition
==============
*/

const vec3_t *__fastcall CG_WorldStreaming_GetNextStreamPosition(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  return ?CG_WorldStreaming_GetNextStreamPosition@@YAAEBTvec3_t@@W4LocalClientNum_t@@W4BgWorldStreamingViewType@@@Z(localClientNum, viewType);
}

/*
==============
CG_WorldStreaming_SetLoadDist
==============
*/

void __fastcall CG_WorldStreaming_SetLoadDist(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType type, const float dist)
{
  ?CG_WorldStreaming_SetLoadDist@@YAXW4LocalClientNum_t@@W4BgWorldStreamingViewType@@M@Z(localClientNum, type, dist);
}

/*
==============
CG_WorldStreaming_Update
==============
*/

void __fastcall CG_WorldStreaming_Update(const LocalClientNum_t localClientNum)
{
  ?CG_WorldStreaming_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WorldStreaming_IsNextStreamPositionLoading
==============
*/

bool __fastcall CG_WorldStreaming_IsNextStreamPositionLoading(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  return ?CG_WorldStreaming_IsNextStreamPositionLoading@@YA_NW4LocalClientNum_t@@W4BgWorldStreamingViewType@@@Z(localClientNum, viewType);
}

/*
==============
CG_WorldStreaming_GetCurrentStateName
==============
*/

const char *__fastcall CG_WorldStreaming_GetCurrentStateName(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  return ?CG_WorldStreaming_GetCurrentStateName@@YAPEBDW4LocalClientNum_t@@W4BgWorldStreamingViewType@@@Z(localClientNum, viewType);
}

/*
==============
CG_WorldStreaming_ConvertManualViewTypeToViewType
==============
*/

BgWorldStreamingViewType __fastcall CG_WorldStreaming_ConvertManualViewTypeToViewType(const StreamManualViewType viewType)
{
  return ?CG_WorldStreaming_ConvertManualViewTypeToViewType@@YA?AW4BgWorldStreamingViewType@@W4StreamManualViewType@@@Z(viewType);
}

/*
==============
CG_WorldStreaming_CheckRequestForCompletion
==============
*/
void CG_WorldStreaming_CheckRequestForCompletion(const LocalClientNum_t localClientNum, CGWorldStreamingRequest *request)
{
  __int64 v5; 
  unsigned __int8 v6; 
  unsigned __int8 stateIndex; 
  unsigned __int8 v10; 
  unsigned int v11; 
  bool v12; 
  bool v13; 
  char v15; 
  bool HasGridSetupForPosition; 
  const dvar_t *v17; 
  int v18; 
  __int64 v21; 
  __int64 v22; 
  double v23; 
  double v24; 
  char buffer[128]; 

  _RBX = request;
  v5 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 285, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !_RBX->stateIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 286, ASSERT_TYPE_ASSERT, "(request.stateIndex != 0)", (const char *)&queryFormat, "request.stateIndex != 0") )
    __debugbreak();
  if ( !_RBX->stateIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 289, ASSERT_TYPE_ASSERT, "(request.stateIndex != static_cast<uint8_t>(CGWorldStreamingRequestState::EMPTY))", (const char *)&queryFormat, "request.stateIndex != static_cast<uint8_t>(CGWorldStreamingRequestState::EMPTY)") )
    __debugbreak();
  if ( _RBX->stateIndex == 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 290, ASSERT_TYPE_ASSERT, "(request.stateIndex != static_cast<uint8_t>(CGWorldStreamingRequestState::COUNT))", (const char *)&queryFormat, "request.stateIndex != static_cast<uint8_t>(CGWorldStreamingRequestState::COUNT)") )
    __debugbreak();
  v6 = _RBX->viewType[0];
  if ( v6 >= 3u )
  {
    LODWORD(v21) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( request.viewType ) < (unsigned)( BgWorldStreamingViewType::COUNT )", "request.viewType doesn't index BgWorldStreamingViewType::COUNT\n\t%i not in [0, %i)", v21, 3) )
      __debugbreak();
  }
  stateIndex = _RBX->stateIndex;
  __asm
  {
    vmovaps [rsp+138h+var_48], xmm6
    vmovaps [rsp+138h+var_58], xmm7
  }
  if ( stateIndex )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorpd  xmm7, xmm7, xmm7
    }
    do
    {
      if ( stateIndex == 5 )
        goto LABEL_62;
      v10 = stateIndex;
      if ( stateIndex >= 6u )
      {
        LODWORD(v22) = 6;
        LODWORD(v21) = stateIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 301, ASSERT_TYPE_ASSERT, "(unsigned)( lastStateIndex ) < (unsigned)( static_cast<uint8_t>(CGWorldStreamingRequestState::COUNT) )", "lastStateIndex doesn't index static_cast<uint8_t>(CGWorldStreamingRequestState::COUNT)\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      if ( stateIndex == 1 )
      {
        HasGridSetupForPosition = CL_TransientsCollisionMP_HasGridSetupForPosition((const LocalClientNum_t)v5, &_RBX->streamPosition);
      }
      else
      {
        if ( stateIndex != 2 )
        {
          if ( stateIndex == 3 )
          {
            if ( !_RBX->streamViewIsSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 208, ASSERT_TYPE_ASSERT, "(request.streamViewIsSet)", (const char *)&queryFormat, "request.streamViewIsSet") )
              __debugbreak();
            if ( Stream_CurrentFrameIndex() < _RBX->streamerReadyFrameIndex )
              goto LABEL_51;
          }
          else
          {
            if ( stateIndex != 4 )
              goto LABEL_51;
            if ( !_RBX->streamViewIsSet )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 215, ASSERT_TYPE_ASSERT, "(request.streamViewIsSet)", (const char *)&queryFormat, "request.streamViewIsSet") )
                __debugbreak();
              if ( !_RBX->streamViewIsSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 208, ASSERT_TYPE_ASSERT, "(request.streamViewIsSet)", (const char *)&queryFormat, "request.streamViewIsSet") )
                __debugbreak();
            }
            v11 = Stream_CurrentFrameIndex();
            v12 = v11 <= _RBX->streamerReadyFrameIndex;
            if ( v11 < _RBX->streamerReadyFrameIndex )
            {
              v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 216, ASSERT_TYPE_ASSERT, "(CG_WorldStreaming_IsStreamerUpdateDone( request ))", (const char *)&queryFormat, "CG_WorldStreaming_IsStreamerUpdateDone( request )");
              v12 = !v13;
              if ( v13 )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+30h]
              vcomiss xmm0, xmm6
            }
            if ( v12 )
            {
              __asm
              {
                vmovsd  [rsp+138h+var_F8], xmm7
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+138h+var_100], xmm0
              }
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 217, ASSERT_TYPE_ASSERT, "( request.imageQualityThreshold ) > ( 0.f )", "%s > %s\n\t%g, %g", "request.imageQualityThreshold", "0.f", v23, v24) )
                __debugbreak();
            }
            if ( Stream_CanStreamMore() )
            {
              *(double *)&_XMM0 = Stream_LoadQuality_Image();
              __asm { vcomiss xmm0, dword ptr [rbx+30h] }
              if ( v15 )
                goto LABEL_51;
            }
          }
LABEL_50:
          ++_RBX->stateIndex;
          goto LABEL_51;
        }
        if ( !CL_TransientsWorldMP_IsActive() )
          goto LABEL_50;
        HasGridSetupForPosition = CL_TransientsWorldMP_HasGridStreamingCompletedForPosition((const LocalClientNum_t)v5, &_RBX->streamPosition);
      }
      if ( HasGridSetupForPosition )
        goto LABEL_50;
LABEL_51:
      stateIndex = _RBX->stateIndex;
    }
    while ( v10 != stateIndex );
  }
  if ( stateIndex != 5 )
  {
    v17 = DCONST_DVARBOOL_cg_worldStreaming_verbose;
    if ( !DCONST_DVARBOOL_cg_worldStreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreaming_verbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      if ( (unsigned int)v5 >= 2 )
      {
        LODWORD(v22) = 2;
        LODWORD(v21) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 265, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_lastSpectateDebugPrint ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_lastSpectateDebugPrint )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      v18 = Sys_Milliseconds();
      if ( v18 - dword_148C506F8[v5] > 250 )
      {
        CG_WorldStreaming_DebugSPrintfRequest(buffer, 0x78ui64, _RBX);
        Com_PrintWarning(14, "Stream request %s has been loading for %dms.\n", buffer, (unsigned int)(v18 - _RBX->loadStartTime));
        dword_148C506F8[v5] = v18;
      }
    }
  }
LABEL_62:
  __asm
  {
    vmovaps xmm7, [rsp+138h+var_58]
    vmovaps xmm6, [rsp+138h+var_48]
  }
  if ( !_RBX->stateIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 351, ASSERT_TYPE_ASSERT, "(request.stateIndex != static_cast<uint8_t>(CGWorldStreamingRequestState::EMPTY))", (const char *)&queryFormat, "request.stateIndex != static_cast<uint8_t>(CGWorldStreamingRequestState::EMPTY)") )
    __debugbreak();
  if ( _RBX->stateIndex == 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 352, ASSERT_TYPE_ASSERT, "(request.stateIndex != static_cast<uint8_t>(CGWorldStreamingRequestState::COUNT))", (const char *)&queryFormat, "request.stateIndex != static_cast<uint8_t>(CGWorldStreamingRequestState::COUNT)") )
    __debugbreak();
}

/*
==============
CG_WorldStreaming_CheckRequestForTimeout
==============
*/
void CG_WorldStreaming_CheckRequestForTimeout(const LocalClientNum_t localClientNum, CGWorldStreamingRequest *request)
{
  const dvar_t *v2; 
  int integer; 
  const dvar_t *v5; 
  int v6; 
  const dvar_t *v7; 
  int v8; 
  const dvar_t *v9; 
  int v10; 
  const dvar_t *v11; 
  int v12; 
  int v13; 
  unsigned __int8 stateIndex; 
  unsigned int v15; 
  const char *NameForViewType; 
  const char *v17; 
  const dvar_t *v18; 
  const char *v19; 
  const char *v20; 
  StatMon_Type v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  char buffer[128]; 

  v2 = DVARINT_cg_worldStreamingLoadingTimeout;
  if ( !DVARINT_cg_worldStreamingLoadingTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreamingLoadingTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  v5 = DVARINT_cg_worldStreamingLoadedTimeout;
  if ( !DVARINT_cg_worldStreamingLoadedTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreamingLoadedTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.integer;
  v7 = DVARINT_cg_worldStreamingKeepAliveTimeout;
  if ( !DVARINT_cg_worldStreamingKeepAliveTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreamingKeepAliveTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.integer;
  v9 = DCONST_DVARINT_cg_worldStreamingLoadingWarnTimeout;
  if ( !DCONST_DVARINT_cg_worldStreamingLoadingWarnTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreamingLoadingWarnTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.integer;
  v11 = DCONST_DVARINT_cg_worldStreamingKeepAliveWarnTimeout;
  if ( !DCONST_DVARINT_cg_worldStreamingKeepAliveWarnTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreamingKeepAliveWarnTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.integer;
  v13 = Sys_Milliseconds();
  stateIndex = request->stateIndex;
  if ( request->streamViewIsSet && stateIndex && stateIndex <= 4u )
  {
    v15 = v13 - request->loadStartTime;
    if ( (int)v15 >= integer )
    {
      NameForViewType = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)request->viewType[0]);
      v17 = j_va("Stream position '%s' loading for %dms, cancelling.\n", NameForViewType, v15);
      StatMon_Warning(STATMON_CLASS_WARNING, STATMON_TYPE_WORLD_STREAMING_LOADTIME, 3000, v17, v15);
      v18 = DCONST_DVARBOOL_cg_worldStreaming_verbose;
      if ( !DCONST_DVARBOOL_cg_worldStreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreaming_verbose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( v18->current.enabled )
      {
        CG_WorldStreaming_DebugSPrintfRequest(buffer, 0x78ui64, request);
        Com_PrintWarning(14, "WARNING: Stream request %s has been loading for %dms, cancelling.\n", buffer, v15);
        request->stateIndex = 0;
        return;
      }
      goto LABEL_34;
    }
    if ( (int)v15 < v10 )
      return;
    v19 = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)request->viewType[0]);
    v20 = j_va("Stream position '%s' has been loading for %dms.\n", v19, v15);
    v21 = STATMON_TYPE_WORLD_STREAMING_LOADTIME;
    goto LABEL_37;
  }
  if ( stateIndex != 5 )
    return;
  v15 = v13 - request->loadEndTime;
  if ( request->keepAlive )
  {
    if ( (int)v15 >= v8 )
    {
      v22 = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)request->viewType[0]);
      v23 = j_va("Stream position '%s' loaded and marked keepAlive, left alive for %dms. Forcibly clearing.\n", v22, v15);
      StatMon_Warning(STATMON_CLASS_WARNING, STATMON_TYPE_WORLD_STREAMING_KEEPALIVETIME, 3000, v23, v15);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_worldStreaming_verbose, "cg_worldStreaming_verbose") )
      {
        CG_WorldStreaming_DebugSPrintfRequest(buffer, 0x78ui64, request);
        Com_PrintWarning(14, "WARNING: Stream request %s loaded and marked keepAlive, has been left alive for %dms. Forcibly clearing.\n", buffer, v15);
      }
LABEL_34:
      request->stateIndex = 0;
      return;
    }
    if ( (int)v15 >= v12 )
    {
      v24 = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)request->viewType[0]);
      v20 = j_va("Stream position '%s' loaded and marked keepAlive, left alive for %dms.\n", v24, v15);
      v21 = STATMON_TYPE_WORLD_STREAMING_KEEPALIVETIME;
LABEL_37:
      StatMon_Warning(STATMON_CLASS_WARNING, v21, 3000, v20, v15);
    }
  }
  else if ( (int)v15 >= v6 )
  {
    request->stateIndex = 0;
  }
}

/*
==============
CG_WorldStreaming_ClearNextStreamPosition
==============
*/
void CG_WorldStreaming_ClearNextStreamPosition(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  unsigned __int8 v2; 
  CGWorldStreamingRequest *RequestForLocalClient; 
  const CGWorldStreamingRequest *v5; 
  const dvar_t *v6; 
  int v8; 
  char buffer[128]; 

  v2 = viewType;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 725, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  RequestForLocalClient = CG_WorldStreaming_GetRequestForLocalClient(localClientNum, (const BgWorldStreamingViewType)v2);
  v5 = RequestForLocalClient;
  if ( RequestForLocalClient->stateIndex )
  {
    if ( v2 != RequestForLocalClient->viewType[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 731, ASSERT_TYPE_ASSERT, "(viewType == request.viewType)", (const char *)&queryFormat, "viewType == request.viewType") )
      __debugbreak();
    v6 = DCONST_DVARBOOL_cg_worldStreaming_verbose;
    if ( !DCONST_DVARBOOL_cg_worldStreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreaming_verbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      CG_WorldStreaming_DebugSPrintfRequest(buffer, 0x78ui64, v5);
      Com_Printf(14, "CG_WorldStreaming: local client %u clearing streaming request %s\n", (unsigned int)localClientNum, buffer);
    }
    v5->stateIndex = 0;
  }
  else
  {
    RequestForLocalClient->stateIndex = 0;
  }
}

/*
==============
CG_WorldStreaming_ClearRequestsForLocalClient
==============
*/
void CG_WorldStreaming_ClearRequestsForLocalClient(const LocalClientNum_t localClientNum)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 

  v2 = 0;
  v3 = localClientNum;
  do
  {
    CG_WorldStreaming_ClearNextStreamPosition(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)v2);
    if ( (unsigned __int8)v2 >= 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 789, ASSERT_TYPE_ASSERT, "(static_cast<uint>( type ) < static_cast<uint>( BgWorldStreamingViewType::COUNT ))", (const char *)&queryFormat, "static_cast<uint>( type ) < static_cast<uint>( BgWorldStreamingViewType::COUNT )") )
      __debugbreak();
    v4 = (unsigned __int8)v2++;
    s_cgWorldStreaming.clientData[v3].loadDists[v4] = 0.0;
  }
  while ( v2 < 3 );
}

/*
==============
CG_WorldStreaming_ConvertManualViewTypeToViewType
==============
*/
char CG_WorldStreaming_ConvertManualViewTypeToViewType(const StreamManualViewType viewType)
{
  __int32 v1; 

  v1 = viewType - 3;
  if ( !v1 )
    return 1;
  if ( v1 == 1 )
    return 2;
  return 0;
}

/*
==============
CG_WorldStreaming_DebugSPrintfRequest
==============
*/
int CG_WorldStreaming_DebugSPrintfRequest(char *buffer, unsigned __int64 len, const CGWorldStreamingRequest *request)
{
  const char *NameForViewType; 
  unsigned __int8 stateIndex; 
  const char *v8; 
  char *fmt; 
  int v23; 
  double v24; 
  int v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 

  _RBX = request;
  NameForViewType = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)request->viewType[0]);
  stateIndex = _RBX->stateIndex;
  v8 = NameForViewType;
  if ( stateIndex >= 6u )
  {
    v25 = 6;
    v23 = stateIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( ( sizeof( *array_counter( STATE_NAMES ) ) + 0 ) )", "stateIndex doesn't index ARRAY_COUNT( STATE_NAMES )\n\t%i not in [0, %i)", v23, v25) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  xmm1, dword ptr [rbx+14h]
    vmovss  xmm2, dword ptr [rbx+10h]
    vmovss  xmm3, dword ptr [rbx+0Ch]
    vmovss  xmm4, dword ptr [rbx+8]
    vmovss  xmm5, dword ptr [rbx+4]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+68h+var_20], xmm0
    vmovsd  [rsp+68h+var_28], xmm1
    vmovsd  [rsp+68h+var_30], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+68h+var_38], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+68h+var_40], xmm4
    vmovsd  [rsp+68h+fmt], xmm5
  }
  return Com_sprintf(buffer, len, "{ #%u, [ %.0f, %.0f, %.0f ], [ %.0f, %.0f, %.0f ], '%s', '%s' }", _RBX->sequence, *(double *)&fmt, v24, v26, v27, v28, v29, STATE_NAMES[stateIndex], v8);
}

/*
==============
CG_WorldStreaming_GetCurrentStateFrameDelta
==============
*/
__int64 CG_WorldStreaming_GetCurrentStateFrameDelta(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  CGWorldStreamingRequest *RequestForLocalClient; 

  RequestForLocalClient = CG_WorldStreaming_GetRequestForLocalClient(localClientNum, viewType);
  return Stream_CurrentFrameIndex() - RequestForLocalClient->streamerReadyFrameIndex;
}

/*
==============
CG_WorldStreaming_GetCurrentStateName
==============
*/
const char *CG_WorldStreaming_GetCurrentStateName(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  unsigned __int8 stateIndex; 
  int v4; 
  int v5; 

  stateIndex = CG_WorldStreaming_GetRequestForLocalClient(localClientNum, viewType)->stateIndex;
  if ( stateIndex >= 6u )
  {
    v5 = 6;
    v4 = stateIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( ( sizeof( *array_counter( STATE_NAMES ) ) + 0 ) )", "stateIndex doesn't index ARRAY_COUNT( STATE_NAMES )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return STATE_NAMES[stateIndex];
}

/*
==============
CG_WorldStreaming_GetLoadDist
==============
*/
float CG_WorldStreaming_GetLoadDist(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType type)
{
  __int64 v2; 
  unsigned __int8 v3; 

  v2 = localClientNum;
  v3 = type;
  if ( (unsigned __int8)type >= (unsigned int)(COUNT|DODGE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 796, ASSERT_TYPE_ASSERT, "(static_cast<uint>( type ) < static_cast<uint>( BgWorldStreamingViewType::COUNT ))", (const char *)&queryFormat, "static_cast<uint>( type ) < static_cast<uint>( BgWorldStreamingViewType::COUNT )") )
    __debugbreak();
  _RCX = v3 + 45 * v2;
  _RAX = s_cgWorldStreaming.clientData[0].loadDists;
  __asm { vmovss  xmm0, dword ptr [rax+rcx*4] }
  return *(float *)&_XMM0;
}

/*
==============
CG_WorldStreaming_GetNextStreamPosition
==============
*/
vec3_t *CG_WorldStreaming_GetNextStreamPosition(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  unsigned __int8 v2; 
  CGWorldStreamingRequest *RequestForLocalClient; 
  unsigned __int8 stateIndex; 
  int v7; 
  int v8; 

  v2 = viewType;
  if ( !BG_WorldStreaming_IsEnabled() )
    return &vec3_origin;
  if ( !BG_WorldStreaming_IsEnabled() )
    goto LABEL_13;
  RequestForLocalClient = CG_WorldStreaming_GetRequestForLocalClient(localClientNum, (const BgWorldStreamingViewType)v2);
  stateIndex = RequestForLocalClient->stateIndex;
  if ( stateIndex >= 6u )
  {
    v8 = 6;
    v7 = stateIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 676, ASSERT_TYPE_ASSERT, "(unsigned)( request.stateIndex ) < (unsigned)( CGWorldStreamingRequestState::COUNT )", "request.stateIndex doesn't index CGWorldStreamingRequestState::COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !RequestForLocalClient->stateIndex )
  {
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 689, ASSERT_TYPE_ASSERT, "(CG_WorldStreaming_HasNextStreamPosition( localClientNum, viewType ))", (const char *)&queryFormat, "CG_WorldStreaming_HasNextStreamPosition( localClientNum, viewType )") )
      __debugbreak();
  }
  return &CG_WorldStreaming_GetRequestForLocalClient(localClientNum, (const BgWorldStreamingViewType)v2)->streamPosition;
}

/*
==============
CG_WorldStreaming_GetNextStreamVelocity
==============
*/
vec3_t *CG_WorldStreaming_GetNextStreamVelocity(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  unsigned __int8 v2; 
  CGWorldStreamingRequest *RequestForLocalClient; 
  unsigned __int8 stateIndex; 
  int v7; 
  int v8; 

  v2 = viewType;
  if ( !BG_WorldStreaming_IsEnabled() )
    return &vec3_origin;
  if ( !BG_WorldStreaming_IsEnabled() )
    goto LABEL_13;
  RequestForLocalClient = CG_WorldStreaming_GetRequestForLocalClient(localClientNum, (const BgWorldStreamingViewType)v2);
  stateIndex = RequestForLocalClient->stateIndex;
  if ( stateIndex >= 6u )
  {
    v8 = 6;
    v7 = stateIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 676, ASSERT_TYPE_ASSERT, "(unsigned)( request.stateIndex ) < (unsigned)( CGWorldStreamingRequestState::COUNT )", "request.stateIndex doesn't index CGWorldStreamingRequestState::COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !RequestForLocalClient->stateIndex )
  {
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 702, ASSERT_TYPE_ASSERT, "(CG_WorldStreaming_HasNextStreamPosition( localClientNum, viewType ))", (const char *)&queryFormat, "CG_WorldStreaming_HasNextStreamPosition( localClientNum, viewType )") )
      __debugbreak();
  }
  return &CG_WorldStreaming_GetRequestForLocalClient(localClientNum, (const BgWorldStreamingViewType)v2)->streamVelocity;
}

/*
==============
CG_WorldStreaming_GetNextStreamViewMode
==============
*/
BgWorldStreamingViewMode CG_WorldStreaming_GetNextStreamViewMode(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  unsigned __int8 v2; 
  BgWorldStreamingViewMode result; 
  CGWorldStreamingRequest *RequestForLocalClient; 
  unsigned __int8 stateIndex; 
  int v7; 
  int v8; 

  v2 = viewType;
  result = BG_WorldStreaming_IsEnabled();
  if ( result )
  {
    if ( !BG_WorldStreaming_IsEnabled() )
      goto LABEL_12;
    RequestForLocalClient = CG_WorldStreaming_GetRequestForLocalClient(localClientNum, (const BgWorldStreamingViewType)v2);
    stateIndex = RequestForLocalClient->stateIndex;
    if ( stateIndex >= 6u )
    {
      v8 = 6;
      v7 = stateIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 676, ASSERT_TYPE_ASSERT, "(unsigned)( request.stateIndex ) < (unsigned)( CGWorldStreamingRequestState::COUNT )", "request.stateIndex doesn't index CGWorldStreamingRequestState::COUNT\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( !RequestForLocalClient->stateIndex )
    {
LABEL_12:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 715, ASSERT_TYPE_ASSERT, "(CG_WorldStreaming_HasNextStreamPosition( localClientNum, viewType ))", (const char *)&queryFormat, "CG_WorldStreaming_HasNextStreamPosition( localClientNum, viewType )") )
        __debugbreak();
    }
    return CG_WorldStreaming_GetRequestForLocalClient(localClientNum, (const BgWorldStreamingViewType)v2)->viewMode;
  }
  return result;
}

/*
==============
CG_WorldStreaming_GetRequestForLocalClient
==============
*/
CGWorldStreamingRequest *CG_WorldStreaming_GetRequestForLocalClient(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 

  v2 = localClientNum;
  LOBYTE(v3) = viewType;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 118, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
    LODWORD(v10) = 2;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWorldStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWorldStreaming.clientData )\n\t%i not in [0, %i)", v7, v10) )
      __debugbreak();
  }
  v3 = (unsigned __int8)v3;
  if ( (unsigned __int8)v3 >= 3u )
  {
    LODWORD(v8) = 3;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( viewTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_cgWorldStreaming.clientData[localClientNum].requests ) ) + 0 ) )", "viewTypeIndex doesn't index ARRAY_COUNT( s_cgWorldStreaming.clientData[localClientNum].requests )\n\t%i not in [0, %i)", v5, v8) )
      __debugbreak();
  }
  return (CGWorldStreamingRequest *)((char *)&s_cgWorldStreaming + 180 * v2 + 56 * v3);
}

/*
==============
CG_WorldStreaming_HasNextStreamPosition
==============
*/
bool CG_WorldStreaming_HasNextStreamPosition(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  unsigned __int8 v2; 
  bool result; 
  CGWorldStreamingRequest *RequestForLocalClient; 
  unsigned __int8 stateIndex; 
  int v7; 
  int v8; 

  v2 = viewType;
  result = BG_WorldStreaming_IsEnabled();
  if ( result )
  {
    RequestForLocalClient = CG_WorldStreaming_GetRequestForLocalClient(localClientNum, (const BgWorldStreamingViewType)v2);
    stateIndex = RequestForLocalClient->stateIndex;
    if ( stateIndex >= 6u )
    {
      v8 = 6;
      v7 = stateIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 676, ASSERT_TYPE_ASSERT, "(unsigned)( request.stateIndex ) < (unsigned)( CGWorldStreamingRequestState::COUNT )", "request.stateIndex doesn't index CGWorldStreamingRequestState::COUNT\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    return RequestForLocalClient->stateIndex != 0;
  }
  return result;
}

/*
==============
CG_WorldStreaming_Init
==============
*/

void __fastcall CG_WorldStreaming_Init(const LocalClientNum_t localClientNum)
{
  CG_WorldStreaming_ClearRequestsForLocalClient(localClientNum);
}

/*
==============
CG_WorldStreaming_InitRequest
==============
*/
void CG_WorldStreaming_InitRequest(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType, const BgWorldStreamingViewMode viewMode, const unsigned __int8 sequence, const vec3_t *streamPos, const vec3_t *streamVel, const int keepAlive)
{
  unsigned __int8 v12; 
  char v27; 
  char v28; 
  const dvar_t *v31; 
  char *fmt; 
  __int64 v38; 
  int v39; 
  double v40; 
  double v41; 
  char buffer[128]; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  v12 = viewType;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 166, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( v12 >= 3u )
  {
    v39 = 3;
    LODWORD(v38) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( viewType ) < (unsigned)( BgWorldStreamingViewType::COUNT )", "viewType doesn't index BgWorldStreamingViewType::COUNT\n\t%i not in [0, %i)", v38, v39) )
      __debugbreak();
  }
  _RAX = CG_WorldStreaming_GetRequestForLocalClient(localClientNum, (const BgWorldStreamingViewType)v12);
  _RCX = streamPos;
  _RBX = _RAX;
  _RAX->stateIndex = 1;
  _RAX->sequence = sequence;
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  qword ptr [rax+4], xmm0
  }
  _RAX->streamPosition.v[2] = streamPos->v[2];
  _RCX = streamVel;
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  qword ptr [rax+10h], xmm0
  }
  _RAX->streamVelocity.v[2] = streamVel->v[2];
  _RAX->viewType[0] = v12;
  _RAX->viewMode = viewMode;
  _RAX->loadStartTime = Sys_Milliseconds();
  _RBX->keepAlive = keepAlive;
  _RDI = DVARFLT_cg_worldStreamingMaxImageQuality;
  if ( !DVARFLT_cg_worldStreamingMaxImageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreamingMaxImageQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm7, dword ptr [rdi+28h] }
  _RDI = DVARFLT_cg_worldStreamingMinImageQuality;
  if ( !DVARFLT_cg_worldStreamingMinImageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreamingMinImageQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  *(double *)&_XMM0 = Stream_LoadQuality_Image();
  __asm
  {
    vmovaps xmm2, xmm7; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovss  dword ptr [rbx+30h], xmm0
  }
  if ( v27 | v28 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vxorpd  xmm0, xmm0, xmm0
      vmovsd  [rsp+118h+var_D8], xmm0
      vmovsd  [rsp+118h+var_E0], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 181, ASSERT_TYPE_ASSERT, "( request.imageQualityThreshold ) > ( 0.f )", "%s > %s\n\t%g, %g", "request.imageQualityThreshold", "0.f", v40, v41) )
      __debugbreak();
  }
  _RBX->streamViewIsSet = 0;
  v31 = DCONST_DVARBOOL_cg_worldStreaming_verbose;
  if ( !DCONST_DVARBOOL_cg_worldStreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreaming_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  if ( v31->current.enabled )
  {
    CG_WorldStreaming_DebugSPrintfRequest(buffer, 0x78ui64, _RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+118h+fmt], xmm0
    }
    Com_Printf(14, "CG_WorldStreaming: local client %u received new stream request %s. IQ %.2f.\n", (unsigned int)localClientNum, buffer, *(double *)&fmt);
  }
  _R11 = &v43;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_WorldStreaming_IsNextStreamPositionLoading
==============
*/
bool CG_WorldStreaming_IsNextStreamPositionLoading(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType viewType)
{
  CGWorldStreamingRequest *RequestForLocalClient; 
  unsigned __int8 stateIndex; 

  RequestForLocalClient = CG_WorldStreaming_GetRequestForLocalClient(localClientNum, viewType);
  if ( !RequestForLocalClient->streamViewIsSet )
    return 0;
  stateIndex = RequestForLocalClient->stateIndex;
  return stateIndex && stateIndex <= 4u;
}

/*
==============
CG_WorldStreaming_ManualStreamPosCommand
==============
*/
void CG_WorldStreaming_ManualStreamPosCommand(const LocalClientNum_t localClientNum, msg_t *msg)
{
  unsigned int v6; 
  unsigned __int8 Bits; 
  unsigned __int8 v8; 
  __int64 v9; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int8 Byte; 
  bool v18; 
  BgWorldStreamingViewType outViewType; 
  vec3_t outVelocity; 
  vec3_t v; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 568, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v6 = 0;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 569, ASSERT_TYPE_ASSERT, "( ( msg != nullptr ) )", "( msg ) = %p", NULL) )
    __debugbreak();
  if ( BG_WorldStreaming_IsEnabled() && !msg->overflowed )
  {
    Bits = MSG_ReadBits(msg, 2u);
    v8 = Bits;
    if ( Bits > 1u )
    {
      if ( Bits == 2 )
      {
        v14 = MSG_ReadBits(msg, 2u);
        if ( BG_WorldStreaming_DecodeViewType(v14, &outViewType) )
        {
          CG_WorldStreaming_ClearNextStreamPosition(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)outViewType);
          return;
        }
      }
      else
      {
        if ( Bits != 3 )
        {
          Com_PrintWarning(14, "CG_WorldStreaming received malformed SVSCMD_MANUAL_STREAM_POS message with subcmd %u, ignoring.\n", Bits);
          return;
        }
        v9 = MSG_ReadBits(msg, 2u);
        if ( v9 <= 3 )
        {
          __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
          *(double *)&_XMM0 = MSG_ReadFloat(msg);
          __asm { vmovaps xmm6, xmm0 }
          if ( (_BYTE)v9 == 3 )
          {
            do
            {
              __asm { vmovaps xmm2, xmm6; dist }
              CG_WorldStreaming_SetLoadDist(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)v6++, *(const float *)&_XMM2);
            }
            while ( v6 < 3 );
          }
          else
          {
            __asm { vmovaps xmm2, xmm6; dist }
            CG_WorldStreaming_SetLoadDist(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)v9, *(const float *)&_XMM2);
          }
          __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
          return;
        }
      }
      Com_PrintWarning(14, "CG_WorldStreaming received unexpected viewType via SVSCMD_MANUAL_STREAM_POS message, ignoring.\n");
      return;
    }
    v15 = MSG_ReadBits(msg, 2u);
    v16 = MSG_ReadBits(msg, 2u);
    Byte = MSG_ReadByte(msg);
    MSG_ReadVec3(msg, &v);
    v18 = MSG_ReadBit(msg) != 0;
    if ( v8 == 1 )
    {
      BG_WorldStreaming_DecodeVelocity(msg, &outVelocity);
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+0A8h+outVelocity], xmm0
        vmovss  dword ptr [rsp+0A8h+outVelocity+4], xmm0
        vmovss  dword ptr [rsp+0A8h+outVelocity+8], xmm0
      }
    }
    if ( msg->overflowed )
    {
      Com_PrintWarning(14, "CG_WorldStreaming received malformed SVSCMD_MANUAL_STREAM_POS message, ignoring.\n");
    }
    else if ( BG_WorldStreaming_DecodeViewType(v15, (BgWorldStreamingViewType *)((char *)&outViewType + 1)) )
    {
      if ( BG_WorldStreaming_DecodeViewMode(v16, (BgWorldStreamingViewMode *)&outViewType) )
        CG_WorldStreaming_InitRequest(localClientNum, (const BgWorldStreamingViewType)BYTE1(outViewType), (const BgWorldStreamingViewMode)outViewType, Byte, &v, &outVelocity, v18);
      else
        Com_PrintWarning(14, "CG_WorldStreaming received unexpected viewMode via SVSCMD_MANUAL_STREAM_POS message, ignoring.\n");
    }
    else
    {
      Com_PrintWarning(14, "CG_WorldStreaming received unexpected viewType via SVSCMD_MANUAL_STREAM_POS message, ignoring.\n");
    }
  }
}

/*
==============
CG_WorldStreaming_SendCompletionNotification
==============
*/
void CG_WorldStreaming_SendCompletionNotification(const LocalClientNum_t localClientNum, const CGWorldStreamingRequest *request)
{
  __int64 v3; 
  const dvar_t *v4; 
  unsigned int cursize; 
  unsigned __int8 *v6; 
  ClConnection **v7; 
  char *fmt; 
  __int64 v9; 
  __int64 v10; 
  __int64 outEncodedViewType; 
  msg_t buf; 
  char buffer[128]; 
  unsigned __int8 data[1024]; 

  v3 = localClientNum;
  if ( !BG_WorldStreaming_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 229, ASSERT_TYPE_ASSERT, "(BG_WorldStreaming_IsEnabled())", (const char *)&queryFormat, "BG_WorldStreaming_IsEnabled()") )
    __debugbreak();
  if ( request->stateIndex != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 230, ASSERT_TYPE_ASSERT, "(request.stateIndex == static_cast<uint8_t>(CGWorldStreamingRequestState::LOADED))", (const char *)&queryFormat, "request.stateIndex == static_cast<uint8_t>(CGWorldStreamingRequestState::LOADED)") )
    __debugbreak();
  v4 = DCONST_DVARBOOL_cg_worldStreaming_verbose;
  if ( !DCONST_DVARBOOL_cg_worldStreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_worldStreaming_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    CG_WorldStreaming_DebugSPrintfRequest(buffer, 0x78ui64, request);
    LODWORD(fmt) = request->loadEndTime - request->loadStartTime;
    Com_Printf(14, "CG_WorldStreaming: local client %u notifying server of stream request completion %s -- took %d ms\n", (unsigned int)v3, buffer, fmt);
  }
  if ( !BG_WorldStreaming_EncodeViewType((const BgWorldStreamingViewType *)request->viewType, &outEncodedViewType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 241, ASSERT_TYPE_ASSERT, "(BG_WorldStreaming_EncodeViewType( request.viewType, encodedViewType ))", (const char *)&queryFormat, "BG_WorldStreaming_EncodeViewType( request.viewType, encodedViewType )") )
    __debugbreak();
  MSG_Init(&buf, data, 1020);
  MSG_WriteByte(&buf, 81i64);
  MSG_WriteBits(&buf, outEncodedViewType, 2u);
  MSG_WriteByte(&buf, request->sequence);
  cursize = buf.cursize;
  v6 = buf.data;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v7 = &ClConnection::ms_connections[v3];
  if ( !*v7 )
  {
    if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
      __debugbreak();
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api_inline.h", 31, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to send a reliable binary command but we are not connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
      __debugbreak();
  }
  if ( !CL_Demo_IsPlayingServer((LocalClientNum_t)v3) )
  {
    if ( (unsigned int)v3 >= LODWORD(cl_maxLocalClients) )
    {
      *(float *)&v10 = cl_maxLocalClients;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
      __debugbreak();
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
      __debugbreak();
    (*v7)->AddReliableBinaryCommand(*v7, v6, cursize);
  }
}

/*
==============
CG_WorldStreaming_SetLoadDist
==============
*/

void __fastcall CG_WorldStreaming_SetLoadDist(const LocalClientNum_t localClientNum, const BgWorldStreamingViewType type, double dist)
{
  unsigned __int8 v4; 
  __int64 v5; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  v4 = type;
  v5 = localClientNum;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned __int8)type >= (unsigned int)(COUNT|DODGE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 789, ASSERT_TYPE_ASSERT, "(static_cast<uint>( type ) < static_cast<uint>( BgWorldStreamingViewType::COUNT ))", (const char *)&queryFormat, "static_cast<uint>( type ) < static_cast<uint>( BgWorldStreamingViewType::COUNT )") )
    __debugbreak();
  _RCX = v4 + 45 * v5;
  _RAX = s_cgWorldStreaming.clientData[0].loadDists;
  __asm
  {
    vmovss  dword ptr [rax+rcx*4], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
CG_WorldStreaming_Shutdown
==============
*/

void __fastcall CG_WorldStreaming_Shutdown(const LocalClientNum_t localClientNum)
{
  CG_WorldStreaming_ClearRequestsForLocalClient(localClientNum);
}

/*
==============
CG_WorldStreaming_TouchClientStreamManualViews
==============
*/
void CG_WorldStreaming_TouchClientStreamManualViews(const LocalClientNum_t localClientNum)
{
  __int64 v3; 
  int v4; 
  __int64 v7; 
  StreamManualViewType StreamManualViewTypeForWorldViewType; 
  vec3_t *velocity; 
  vec3_t *velocitya; 
  __int64 zoomFactor; 
  __int64 zoomFactora; 
  float zoomFactorb; 
  float v16; 

  v3 = localClientNum;
  if ( BG_WorldStreaming_IsEnabled() )
  {
    v4 = 0;
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vmovaps [rsp+98h+var_48], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      if ( CG_WorldStreaming_HasNextStreamPosition((const LocalClientNum_t)v3, (const BgWorldStreamingViewType)(unsigned __int8)v4) )
      {
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(zoomFactor) = 2;
          LODWORD(velocity) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 118, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", velocity, zoomFactor) )
            __debugbreak();
          LODWORD(zoomFactora) = 2;
          LODWORD(velocitya) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWorldStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWorldStreaming.clientData )\n\t%i not in [0, %i)", velocitya, zoomFactora) )
            __debugbreak();
        }
        if ( (unsigned __int8)v4 >= 3u )
        {
          LODWORD(zoomFactor) = 3;
          LODWORD(velocity) = (unsigned __int8)v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( viewTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_cgWorldStreaming.clientData[localClientNum].requests ) ) + 0 ) )", "viewTypeIndex doesn't index ARRAY_COUNT( s_cgWorldStreaming.clientData[localClientNum].requests )\n\t%i not in [0, %i)", velocity, zoomFactor) )
            __debugbreak();
        }
        v7 = 180 * v3 + 56i64 * (unsigned __int8)v4;
        StreamManualViewTypeForWorldViewType = BG_WorldStreaming_GetStreamManualViewTypeForWorldViewType((const BgWorldStreamingViewType)(unsigned __int8)s_cgWorldStreaming.clientData[0].requests[0].viewType[v7]);
        __asm
        {
          vmovss  [rsp+98h+var_60], xmm6
          vmovss  [rsp+98h+zoomFactor], xmm7
        }
        CL_StreamViews_SetManualViewAndMode(StreamManualViewTypeForWorldViewType, (LocalClientNum_t)v3, (const BgWorldStreamingViewMode)s_cgWorldStreaming.clientData[0].requests[0].viewType[v7 + 1], (const vec3_t *)((char *)&s_cgWorldStreaming.clientData[0].requests[0].streamPosition + v7), &vec3_origin, (const vec3_t *)((char *)&s_cgWorldStreaming.clientData[0].requests[0].streamVelocity + v7), zoomFactorb, v16, 0);
        if ( !*(&s_cgWorldStreaming.clientData[0].requests[0].streamViewIsSet + v7) )
        {
          *(&s_cgWorldStreaming.clientData[0].requests[0].streamViewIsSet + v7) = 1;
          *(unsigned int *)((char *)&s_cgWorldStreaming.clientData[0].requests[0].streamerReadyFrameIndex + v7) = Stream_CurrentFrameIndex() + 2;
          Stream_ResetImageQualitySmoothing();
        }
      }
      ++v4;
    }
    while ( v4 < 3 );
    __asm
    {
      vmovaps xmm7, [rsp+98h+var_48]
      vmovaps xmm6, [rsp+98h+var_38]
    }
  }
}

/*
==============
CG_WorldStreaming_Update
==============
*/
void CG_WorldStreaming_Update(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int i; 
  CGWorldStreamingRequest *v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_WorldStreaming_Update");
  if ( BG_WorldStreaming_IsEnabled() )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v6) = 2;
        LODWORD(v4) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 118, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v6) )
          __debugbreak();
        LODWORD(v7) = 2;
        LODWORD(v5) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWorldStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWorldStreaming.clientData )\n\t%i not in [0, %i)", v5, v7) )
          __debugbreak();
      }
      if ( (unsigned __int8)i >= 3u )
      {
        LODWORD(v6) = 3;
        LODWORD(v4) = (unsigned __int8)i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world_streaming.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( viewTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_cgWorldStreaming.clientData[localClientNum].requests ) ) + 0 ) )", "viewTypeIndex doesn't index ARRAY_COUNT( s_cgWorldStreaming.clientData[localClientNum].requests )\n\t%i not in [0, %i)", v4, v6) )
          __debugbreak();
      }
      v3 = &s_cgWorldStreaming.clientData[v1].requests[(unsigned __int8)i];
      if ( v3->streamViewIsSet && (unsigned __int8)(v3->stateIndex - 1) <= 3u )
      {
        CG_WorldStreaming_CheckRequestForCompletion((const LocalClientNum_t)v1, v3);
        if ( !v3->streamViewIsSet || (unsigned __int8)(v3->stateIndex - 1) > 3u )
        {
          v3->loadEndTime = Sys_Milliseconds();
          CG_WorldStreaming_SendCompletionNotification((const LocalClientNum_t)v1, v3);
        }
      }
      CG_WorldStreaming_CheckRequestForTimeout((const LocalClientNum_t)v1, v3);
    }
  }
  Sys_ProfEndNamedEvent();
}

