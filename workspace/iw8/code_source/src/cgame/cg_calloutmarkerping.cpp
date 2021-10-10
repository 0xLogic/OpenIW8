/*
==============
CG_CalloutMarkerPing_ViewIndexToPool
==============
*/

CalloutMarkerPingPool __fastcall CG_CalloutMarkerPing_ViewIndexToPool(LocalClientNum_t localClientNum, unsigned __int8 viewIndex)
{
  return ?CG_CalloutMarkerPing_ViewIndexToPool@@YA?AW4CalloutMarkerPingPool@@W4LocalClientNum_t@@E@Z(localClientNum, viewIndex);
}

/*
==============
CG_CalloutMarkerPing_QueueMarkAction
==============
*/

void __fastcall CG_CalloutMarkerPing_QueueMarkAction(LocalClientNum_t localClientNum, const bool isTentative, const bool queueForNextFrame)
{
  ?CG_CalloutMarkerPing_QueueMarkAction@@YAXW4LocalClientNum_t@@_N1@Z(localClientNum, isTentative, queueForNextFrame);
}

/*
==============
CG_CalloutMarkerPing_ExecuteQueuedMarkAction
==============
*/

void __fastcall CG_CalloutMarkerPing_ExecuteQueuedMarkAction(LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_ExecuteQueuedMarkAction@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_GetTacmapLookAtScale
==============
*/

double __fastcall CG_CalloutMarkerPing_GetTacmapLookAtScale(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_CalloutMarkerPing_GetTacmapLookAtScale@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_CalloutMarkerPing_Predicted_Commit
==============
*/

void __fastcall CG_CalloutMarkerPing_Predicted_Commit(LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_Predicted_Commit@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_CheckPrevPredictedForTarget
==============
*/

unsigned __int8 __fastcall CG_CalloutMarkerPing_CheckPrevPredictedForTarget(LocalClientNum_t localClientNum, int targetEntNum, unsigned int scriptableIndex, int targetGSCObjectiveIndex)
{
  return ?CG_CalloutMarkerPing_CheckPrevPredictedForTarget@@YAEW4LocalClientNum_t@@HIH@Z(localClientNum, targetEntNum, scriptableIndex, targetGSCObjectiveIndex);
}

/*
==============
CG_CalloutMarkerPing_GetTeammateIndex
==============
*/

int __fastcall CG_CalloutMarkerPing_GetTeammateIndex(LocalClientNum_t localClientNum, int clientNum)
{
  return ?CG_CalloutMarkerPing_GetTeammateIndex@@YAHW4LocalClientNum_t@@H@Z(localClientNum, clientNum);
}

/*
==============
CG_CalloutMarkerPing_TacmapGetLookingAtEntity
==============
*/

__int16 __fastcall CG_CalloutMarkerPing_TacmapGetLookingAtEntity(LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_TacmapGetLookingAtEntity@@YAFW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_TacmapIsLookingAtPing
==============
*/

bool __fastcall CG_CalloutMarkerPing_TacmapIsLookingAtPing(LocalClientNum_t localClientNum, unsigned __int8 pingIndex)
{
  return ?CG_CalloutMarkerPing_TacmapIsLookingAtPing@@YA_NW4LocalClientNum_t@@E@Z(localClientNum, pingIndex);
}

/*
==============
CG_CalloutMarkerPing_GetLastTimeChanged
==============
*/

int __fastcall CG_CalloutMarkerPing_GetLastTimeChanged(LocalClientNum_t localClientNum, unsigned __int8 viewIndex)
{
  return ?CG_CalloutMarkerPing_GetLastTimeChanged@@YAHW4LocalClientNum_t@@E@Z(localClientNum, viewIndex);
}

/*
==============
CG_CalloutMarkerPing_GetIcon
==============
*/

const GfxImage *__fastcall CG_CalloutMarkerPing_GetIcon(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum, CompassType compassType)
{
  return ?CG_CalloutMarkerPing_GetIcon@@YAPEBUGfxImage@@W4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@W4LocalClientNum_t@@W4CompassType@@@Z(pool, view, localClientNum, compassType);
}

/*
==============
CG_CalloutMarkerPing_ResetLastPredicted
==============
*/

void __fastcall CG_CalloutMarkerPing_ResetLastPredicted(const LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_ResetLastPredicted@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_GetTeammateConfirmed
==============
*/

bool __fastcall CG_CalloutMarkerPing_GetTeammateConfirmed(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, int teammateIndex)
{
  return ?CG_CalloutMarkerPing_GetTeammateConfirmed@@YA_NW4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@H@Z(pool, view, teammateIndex);
}

/*
==============
CG_CalloutMarkerPing_GetZOffset
==============
*/

double __fastcall CG_CalloutMarkerPing_GetZOffset(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_CalloutMarkerPing_GetZOffset@@YAMW4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@W4LocalClientNum_t@@@Z(pool, view, localClientNum);
  return result;
}

/*
==============
CG_CalloutMarkerPing_DebugDraw
==============
*/

void __fastcall CG_CalloutMarkerPing_DebugDraw(const LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_DebugDraw@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_TacmapIsLookingAtObjective
==============
*/

bool __fastcall CG_CalloutMarkerPing_TacmapIsLookingAtObjective(LocalClientNum_t localClientNum, int objectiveIndex)
{
  return ?CG_CalloutMarkerPing_TacmapIsLookingAtObjective@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, objectiveIndex);
}

/*
==============
CG_CalloutMarkerPing_WaitForContextualPingWorkerThread
==============
*/

void __fastcall CG_CalloutMarkerPing_WaitForContextualPingWorkerThread(const LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_WaitForContextualPingWorkerThread@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_GetDrawPos
==============
*/

bool __fastcall CG_CalloutMarkerPing_GetDrawPos(const LocalClientNum_t localClientNum, const ContextualPingTarget *contextualPingTarget, vec3_t *outDrawPos)
{
  return ?CG_CalloutMarkerPing_GetDrawPos@@YA_NW4LocalClientNum_t@@AEBUContextualPingTarget@@AEATvec3_t@@@Z(localClientNum, contextualPingTarget, outDrawPos);
}

/*
==============
CG_CalloutMarkerPing_GetContextualPingData
==============
*/

const CG_CalloutMarkerPingData *__fastcall CG_CalloutMarkerPing_GetContextualPingData(const LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_GetContextualPingData@@YAAEBUCG_CalloutMarkerPingData@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_CheckSquadPingsForReviveByClient
==============
*/

unsigned __int8 __fastcall CG_CalloutMarkerPing_CheckSquadPingsForReviveByClient(LocalClientNum_t localClientNum, int clientNum)
{
  return ?CG_CalloutMarkerPing_CheckSquadPingsForReviveByClient@@YAEW4LocalClientNum_t@@H@Z(localClientNum, clientNum);
}

/*
==============
CG_CalloutMarkerPing_Init
==============
*/

void __fastcall CG_CalloutMarkerPing_Init(LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_HasOvalBackgroundOnMap
==============
*/

bool __fastcall CG_CalloutMarkerPing_HasOvalBackgroundOnMap(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_HasOvalBackgroundOnMap@@YA_NW4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@W4LocalClientNum_t@@@Z(pool, view, localClientNum);
}

/*
==============
CG_CalloutMarkerPing_ClassifyPing
==============
*/

CalloutMarkerPingType __fastcall CG_CalloutMarkerPing_ClassifyPing(LocalClientNum_t localClientNum, const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view)
{
  return ?CG_CalloutMarkerPing_ClassifyPing@@YA?AW4CalloutMarkerPingType@@W4LocalClientNum_t@@W4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@@Z(localClientNum, pool, view);
}

/*
==============
CG_CalloutMarkerPing_CheckChanged
==============
*/

bool __fastcall CG_CalloutMarkerPing_CheckChanged(LocalClientNum_t localClientNum, const playerState_s *const prevSnapPS, const playerState_s *const nextSnapPS)
{
  return ?CG_CalloutMarkerPing_CheckChanged@@YA_NW4LocalClientNum_t@@QEBUplayerState_s@@1@Z(localClientNum, prevSnapPS, nextSnapPS);
}

/*
==============
CG_CalloutMarkerPing_CheckSquadmateHasRequestedInventory
==============
*/

CalloutMarkerPingInventorySlot __fastcall CG_CalloutMarkerPing_CheckSquadmateHasRequestedInventory(LocalClientNum_t localClientNum, int clientNum)
{
  return ?CG_CalloutMarkerPing_CheckSquadmateHasRequestedInventory@@YA?AW4CalloutMarkerPingInventorySlot@@W4LocalClientNum_t@@H@Z(localClientNum, clientNum);
}

/*
==============
CG_CalloutMarkerPing_TacmapGetLookingAtScriptable
==============
*/

unsigned int __fastcall CG_CalloutMarkerPing_TacmapGetLookingAtScriptable(LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_TacmapGetLookingAtScriptable@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_TacmapGetLookingAtPing
==============
*/

unsigned __int8 __fastcall CG_CalloutMarkerPing_TacmapGetLookingAtPing(LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_TacmapGetLookingAtPing@@YAEW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_TacmapGetLookingAtObjective
==============
*/

int __fastcall CG_CalloutMarkerPing_TacmapGetLookingAtObjective(LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_TacmapGetLookingAtObjective@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_ExecuteContextualPingWorkerThread
==============
*/

void __fastcall CG_CalloutMarkerPing_ExecuteContextualPingWorkerThread(const void *const cmdInfo)
{
  ?CG_CalloutMarkerPing_ExecuteContextualPingWorkerThread@@YAXQEBX@Z(cmdInfo);
}

/*
==============
CG_CalloutMarkerPing_SystemActive
==============
*/

bool __fastcall CG_CalloutMarkerPing_SystemActive()
{
  return ?CG_CalloutMarkerPing_SystemActive@@YA_NXZ();
}

/*
==============
CG_CalloutMarkerPing_GetLookAtIndex
==============
*/

unsigned __int8 __fastcall CG_CalloutMarkerPing_GetLookAtIndex(LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_GetLookAtIndex@@YAEW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_Predicted_HandleButtonPress
==============
*/

void __fastcall CG_CalloutMarkerPing_Predicted_HandleButtonPress(LocalClientNum_t localClientNum, const bool isTentativeAction)
{
  ?CG_CalloutMarkerPing_Predicted_HandleButtonPress@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, isTentativeAction);
}

/*
==============
CG_CalloutMarkerPing_GetAspectRatio
==============
*/

double __fastcall CG_CalloutMarkerPing_GetAspectRatio(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_CalloutMarkerPing_GetAspectRatio@@YAMW4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@W4LocalClientNum_t@@@Z(pool, view, localClientNum);
  return result;
}

/*
==============
CG_CalloutMarkerPing_GetTacmapIconSize
==============
*/

ObjectiveIconSize __fastcall CG_CalloutMarkerPing_GetTacmapIconSize(LocalClientNum_t localClientNum, const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view)
{
  return ?CG_CalloutMarkerPing_GetTacmapIconSize@@YA?AW4ObjectiveIconSize@@W4LocalClientNum_t@@W4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@@Z(localClientNum, pool, view);
}

/*
==============
CG_CalloutMarkerPing_Predicted_Cancel
==============
*/

void __fastcall CG_CalloutMarkerPing_Predicted_Cancel(LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_Predicted_Cancel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_GetBackgroundType
==============
*/

CalloutMarkerPingBackgroundType __fastcall CG_CalloutMarkerPing_GetBackgroundType(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_GetBackgroundType@@YA?AW4CalloutMarkerPingBackgroundType@@W4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@W4LocalClientNum_t@@@Z(pool, view, localClientNum);
}

/*
==============
CG_CalloutMarkerPing_UpdateTacmapLookAt
==============
*/

void __fastcall CG_CalloutMarkerPing_UpdateTacmapLookAt(LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_UpdateTacmapLookAt@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_TacmapIsLookingAtScriptable
==============
*/

bool __fastcall CG_CalloutMarkerPing_TacmapIsLookingAtScriptable(LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  return ?CG_CalloutMarkerPing_TacmapIsLookingAtScriptable@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
CG_CalloutMarkerPing_GetContextualPingTarget
==============
*/

const ContextualPingTarget *__fastcall CG_CalloutMarkerPing_GetContextualPingTarget(const LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_GetContextualPingTarget@@YAAEBUContextualPingTarget@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_ClassifyEntity
==============
*/

CalloutMarkerPingType __fastcall CG_CalloutMarkerPing_ClassifyEntity(LocalClientNum_t localClientNum, __int16 entNum)
{
  return ?CG_CalloutMarkerPing_ClassifyEntity@@YA?AW4CalloutMarkerPingType@@W4LocalClientNum_t@@F@Z(localClientNum, entNum);
}

/*
==============
CG_CalloutMarkerPing_TacmapIsLookingAtEntity
==============
*/

bool __fastcall CG_CalloutMarkerPing_TacmapIsLookingAtEntity(LocalClientNum_t localClientNum, __int16 entityIndex)
{
  return ?CG_CalloutMarkerPing_TacmapIsLookingAtEntity@@YA_NW4LocalClientNum_t@@F@Z(localClientNum, entityIndex);
}

/*
==============
CG_CalloutMarkerPing_GetColor
==============
*/

void __fastcall CG_CalloutMarkerPing_GetColor(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum, vec4_t *out_color)
{
  ?CG_CalloutMarkerPing_GetColor@@YAXW4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@W4LocalClientNum_t@@AEATvec4_t@@@Z(pool, view, localClientNum, out_color);
}

/*
==============
CG_CalloutMarkerPing_MarkDataConsumed
==============
*/

void __fastcall CG_CalloutMarkerPing_MarkDataConsumed(const LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_MarkDataConsumed@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_OnBeginDrawActiveFrame
==============
*/

void __fastcall CG_CalloutMarkerPing_OnBeginDrawActiveFrame(LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_OnBeginDrawActiveFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_GetColorForLoot
==============
*/

void __fastcall CG_CalloutMarkerPing_GetColorForLoot(LocalClientNum_t localClientNum, unsigned int scriptableIndex, vec4_t *out_color)
{
  ?CG_CalloutMarkerPing_GetColorForLoot@@YAXW4LocalClientNum_t@@IAEATvec4_t@@@Z(localClientNum, scriptableIndex, out_color);
}

/*
==============
CG_CalloutMarkerPing_GetFriendliness
==============
*/

team_t __fastcall CG_CalloutMarkerPing_GetFriendliness(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_GetFriendliness@@YA?AW4team_t@@W4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@W4LocalClientNum_t@@@Z(pool, view, localClientNum);
}

/*
==============
CG_CalloutMarkerPing_GetView
==============
*/

const CalloutMarkerPingView *__fastcall CG_CalloutMarkerPing_GetView(LocalClientNum_t localClientNum, unsigned __int8 viewIndex, const playerState_s *const ps)
{
  return ?CG_CalloutMarkerPing_GetView@@YAAEBTCalloutMarkerPingView@@W4LocalClientNum_t@@EQEBUplayerState_s@@@Z(localClientNum, viewIndex, ps);
}

/*
==============
CG_CalloutMarkerPing_StartContextualPingWorkerThread
==============
*/

void __fastcall CG_CalloutMarkerPing_StartContextualPingWorkerThread(const LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_StartContextualPingWorkerThread@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_Predicted_Update
==============
*/

void __fastcall CG_CalloutMarkerPing_Predicted_Update(LocalClientNum_t localClientNum)
{
  ?CG_CalloutMarkerPing_Predicted_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_CheckSquadPingsForTarget
==============
*/

unsigned __int8 __fastcall CG_CalloutMarkerPing_CheckSquadPingsForTarget(LocalClientNum_t localClientNum, int targetEntNum, unsigned int scriptableIndex, int targetGSCObjectiveIndex)
{
  return ?CG_CalloutMarkerPing_CheckSquadPingsForTarget@@YAEW4LocalClientNum_t@@HIH@Z(localClientNum, targetEntNum, scriptableIndex, targetGSCObjectiveIndex);
}

/*
==============
CG_CalloutMarkerPing_GetLastPredictedViewIndex
==============
*/

unsigned __int8 __fastcall CG_CalloutMarkerPing_GetLastPredictedViewIndex(const LocalClientNum_t localClientNum)
{
  return ?CG_CalloutMarkerPing_GetLastPredictedViewIndex@@YAEW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalloutMarkerPing_CanPing
==============
*/
bool CG_CalloutMarkerPing_CanPing(const LocalClientNum_t localClientNum, const bool isTentativeAction)
{
  cg_t *LocalClientGlobals; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4428, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !CG_CalloutMarkerPing_SystemActive() )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4436, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return !CG_Players_IsPlayerInGulag(localClientNum, LocalClientGlobals->clientNum) && !CG_Players_IsPlayerInGulag(localClientNum, LocalClientGlobals->predictedPlayerState.clientNum) && LocalClientGlobals->predictedPlayerState.pm_type != 6;
}

/*
==============
CG_CalloutMarkerPing_CheckChanged
==============
*/
__int64 CG_CalloutMarkerPing_CheckChanged(LocalClientNum_t localClientNum, const playerState_s *const prevSnapPS, const playerState_s *const nextSnapPS)
{
  __int64 v3; 
  CalloutMarkerPingView *calloutMarkerPings; 
  int clientNum; 
  bool clientChanged; 
  unsigned __int8 v9; 
  signed __int64 v10; 
  unsigned __int8 v11; 
  cg_t *LocalClientGlobals; 
  CalloutMarkerPingPool pool; 
  CG_CalloutMarkerPingPredicted *p_predicted; 
  char *v15; 
  unsigned __int8 v16; 
  const CalloutMarkerPingView *View; 
  bool v18; 
  __int64 result; 
  __int64 v20; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1959, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !prevSnapPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1960, ASSERT_TYPE_ASSERT, "(prevSnapPS)", (const char *)&queryFormat, "prevSnapPS") )
    __debugbreak();
  if ( !nextSnapPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1961, ASSERT_TYPE_ASSERT, "(nextSnapPS)", (const char *)&queryFormat, "nextSnapPS") )
    __debugbreak();
  v20 = v3;
  calloutMarkerPings = prevSnapPS->calloutMarkerPings;
  clientNum = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->predictedPlayerState.clientNum;
  clientChanged = nextSnapPS->clientNum != prevSnapPS->clientNum;
  v9 = 0;
  v10 = (char *)nextSnapPS - (char *)prevSnapPS;
  v11 = 0;
  do
  {
    v11 |= CG_CalloutMarkerPing_CheckMarkerChanged((LocalClientNum_t)v3, clientNum, v9++, calloutMarkerPings, (CalloutMarkerPingView *)((char *)calloutMarkerPings + v10), clientChanged);
    ++calloutMarkerPings;
  }
  while ( v9 < 0x34u );
  if ( v11 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    if ( s_calloutMarkerPingData[v20].predicted.view.origin.owner )
    {
      pool = s_calloutMarkerPingData[v20].predicted.pool;
      p_predicted = &s_calloutMarkerPingData[0].predicted;
    }
    else
    {
      pool = s_calloutMarkerPingData[v20].lastPredictedPool;
      if ( pool == CONST_CALLOUT_POOL_SIZE )
        goto LABEL_39;
      p_predicted = (CG_CalloutMarkerPingPredicted *)&s_calloutMarkerPingData[0].lastPredictedView;
    }
    v15 = (char *)p_predicted + v20 * 1056;
    if ( pool != CONST_CALLOUT_POOL_SIZE )
    {
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1943, ASSERT_TYPE_ASSERT, "(predictedView)", (const char *)&queryFormat, "predictedView") )
        __debugbreak();
      v16 = 0;
      while ( 1 )
      {
        View = CG_CalloutMarkerPing_GetView((LocalClientNum_t)v3, v16, &LocalClientGlobals->predictedPlayerState);
        if ( pool == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(pool - 4) <= 2u )
          break;
        if ( (unsigned __int8)(pool - 9) > 2u )
        {
          if ( pool == CONST_CALLOUT_POOL_ID_WORLD )
            break;
          if ( (unsigned __int8)pool > CONST_CALLOUT_POOL_ID_DANGER_3 || v15[6] != View->origin.owner || *(_WORD *)v15 != View->origin.x || *((_WORD *)v15 + 1) != View->origin.y )
            goto LABEL_36;
          v18 = *((_WORD *)v15 + 2) == View->origin.z;
        }
        else
        {
          if ( v15[6] != View->origin.owner )
            goto LABEL_36;
          v18 = *(_DWORD *)v15 == View->scriptable.index;
        }
LABEL_35:
        if ( v18 )
        {
          s_calloutMarkerPingData[v20].lastPredictedViewIndex = v16;
          goto LABEL_39;
        }
LABEL_36:
        if ( ++v16 >= 0xDu )
          goto LABEL_39;
      }
      if ( v15[6] != View->origin.owner )
        goto LABEL_36;
      v18 = *(_WORD *)v15 == View->origin.x;
      goto LABEL_35;
    }
  }
LABEL_39:
  result = v11;
  if ( s_calloutMarkerPingData[v20].dirty )
    return 1i64;
  return result;
}

/*
==============
CG_CalloutMarkerPing_CheckMarkerChanged
==============
*/
char CG_CalloutMarkerPing_CheckMarkerChanged(LocalClientNum_t localClientNum, int clientNum, unsigned __int8 viewIndex, const CalloutMarkerPingView *pingViewPrev, const CalloutMarkerPingView *pingViewNext, const bool clientChanged)
{
  __int64 v6; 
  __int64 v9; 
  CG_CalloutMarkerPingData *v10; 
  __int64 v11; 
  bool v13; 
  unsigned __int8 feedback; 
  char v15; 
  __int64 v16; 
  __int64 v17; 

  v6 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( viewIndex >= 0x34u )
  {
    LODWORD(v17) = 52;
    LODWORD(v16) = viewIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1532, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( !pingViewPrev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1533, ASSERT_TYPE_ASSERT, "(pingViewPrev)", (const char *)&queryFormat, "pingViewPrev") )
    __debugbreak();
  if ( !pingViewNext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1534, ASSERT_TYPE_ASSERT, "(pingViewNext)", (const char *)&queryFormat, "pingViewNext") )
    __debugbreak();
  v9 = viewIndex;
  v10 = &s_calloutMarkerPingData[v6];
  v11 = viewIndex;
  v10->markers[viewIndex].newsFeedPending = 0;
  v10->markers[viewIndex].newsFeedPendingFeedbackBits = 0;
  if ( *pingViewPrev == *pingViewNext )
    return 0;
  if ( pingViewNext->origin.owner )
  {
    v13 = pingViewPrev->origin.x != pingViewNext->origin.x || pingViewPrev->origin.y != pingViewNext->origin.y || pingViewPrev->origin.z != pingViewNext->origin.z;
    feedback = pingViewPrev->origin.feedback;
    if ( !feedback || feedback == pingViewNext->origin.feedback )
    {
      v15 = 0;
    }
    else
    {
      v15 = 1;
      v10->markers[v11].lastTimeChangedFeedback = CG_GetLocalClientGlobals((const LocalClientNum_t)v6)->time;
    }
    if ( !clientChanged && !CG_View_IsKillCamView((const LocalClientNum_t)v6) && !CG_GetLocalClientGlobals((const LocalClientNum_t)v6)->predictedPlayerState.deltaTime )
    {
      v10->markers[v9].newsFeedPending = 1;
      if ( !v13 )
      {
        if ( v15 )
          v10->markers[v9].newsFeedPendingFeedbackBits = pingViewPrev->origin.feedback ^ pingViewNext->origin.feedback;
      }
    }
  }
  return 1;
}

/*
==============
CG_CalloutMarkerPing_CheckPrevPredictedForTarget
==============
*/
unsigned __int8 CG_CalloutMarkerPing_CheckPrevPredictedForTarget(LocalClientNum_t localClientNum, int targetEntNum, unsigned int scriptableIndex, int targetGSCObjectiveIndex)
{
  CG_CalloutMarkerPingPredicted *p_predictedPrev; 
  CalloutMarkerPingPool pool; 

  p_predictedPrev = &s_calloutMarkerPingData[localClientNum].predictedPrev;
  if ( p_predictedPrev->view.origin.owner && (((pool = p_predictedPrev->pool, pool == CONST_CALLOUT_POOL_ID_VEHICLE) || (unsigned __int8)(pool - 4) <= 2u) && (unsigned int)(targetEntNum - 2046) > 1 && p_predictedPrev->view.origin.x == targetEntNum || (unsigned __int8)(pool - 9) <= 2u && p_predictedPrev->view.scriptable.index == scriptableIndex || pool == CONST_CALLOUT_POOL_ID_WORLD && p_predictedPrev->view.origin.x == targetGSCObjectiveIndex) )
    return 52;
  else
    return 53;
}

/*
==============
CG_CalloutMarkerPing_CheckSquadPingsForReviveByClient
==============
*/
unsigned __int8 CG_CalloutMarkerPing_CheckSquadPingsForReviveByClient(LocalClientNum_t localClientNum, int clientNum)
{
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  unsigned __int8 v10; 
  unsigned __int8 owner; 
  int v12; 
  int v13; 
  __int64 v15; 
  __int64 v16; 

  Entity = CG_GetEntity(localClientNum, (__int16)clientNum);
  if ( (Entity->flags & 1) == 0 || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 0x11u) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v6 = 0;
    while ( 2 )
    {
      v7 = 0i64;
      v8 = 13 * v6;
      do
      {
        v9 = (unsigned __int8)s_scriptablePools[v7];
        v10 = v8 + v9;
        if ( (unsigned int)(v8 + v9) >= 0x34 )
        {
          LODWORD(v16) = 52;
          LODWORD(v15) = v8 + v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        owner = LocalClientGlobals->predictedPlayerState.calloutMarkerPings[v10].origin.owner;
        if ( owner )
          v12 = owner - 1;
        else
          v12 = -1;
        if ( v12 == clientNum )
        {
          LOBYTE(v13) = CG_CalloutMarkerPing_ClassifyPing(localClientNum, (const CalloutMarkerPingPool)v9, &LocalClientGlobals->predictedPlayerState.calloutMarkerPings[v10]);
          if ( v13 == 15 )
            return v8 + v9;
        }
        ++v7;
      }
      while ( v7 < 3 );
      if ( ++v6 < 4 )
        continue;
      break;
    }
  }
  return 53;
}

/*
==============
CG_CalloutMarkerPing_CheckSquadPingsForTarget
==============
*/
unsigned __int8 CG_CalloutMarkerPing_CheckSquadPingsForTarget(LocalClientNum_t localClientNum, int targetEntNum, unsigned int scriptableIndex, int targetGSCObjectiveIndex)
{
  int v5; 
  CG_CalloutMarkerPingPredicted *p_predicted; 
  CalloutMarkerPingPool pool; 
  unsigned int v11; 
  __int64 v12; 
  cg_t *LocalClientGlobals; 
  unsigned int v14; 
  __int64 v15; 
  cg_t *v16; 
  cg_t *v17; 
  __int64 v18; 
  __int64 v19; 

  v5 = targetGSCObjectiveIndex;
  p_predicted = &s_calloutMarkerPingData[localClientNum].predicted;
  if ( p_predicted->view.origin.owner )
  {
    pool = p_predicted->pool;
    if ( (pool == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(pool - 4) <= 2u) && (unsigned int)(targetEntNum - 2046) > 1 && p_predicted->view.origin.x == targetEntNum )
      return 52;
    if ( (unsigned __int8)(pool - 9) <= 2u && p_predicted->view.scriptable.index == scriptableIndex || pool == CONST_CALLOUT_POOL_ID_WORLD && p_predicted->view.origin.x == targetGSCObjectiveIndex )
      return 52;
  }
  v11 = 0;
  while ( (unsigned int)(targetEntNum - 2046) > 1 )
  {
    if ( v11 >= 4 )
    {
      LODWORD(v19) = 4;
      LODWORD(v18) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2774, ASSERT_TYPE_ASSERT, "(unsigned)( teammateIndex ) < (unsigned)( 4 )", "teammateIndex doesn't index CALLOUT_MARKER_PING_MAX_TEAM_SIZE\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v12 = 0i64;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    while ( 1 )
    {
      v14 = 13 * v11 + (unsigned __int8)s_entityPools[v12];
      if ( v14 >= 0x34 )
      {
        LODWORD(v19) = 52;
        LODWORD(v18) = 13 * v11 + (unsigned __int8)s_entityPools[v12];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( LocalClientGlobals->predictedPlayerState.calloutMarkerPings[(unsigned __int8)v14].origin.owner && LocalClientGlobals->predictedPlayerState.calloutMarkerPings[(unsigned __int8)v14].origin.x == targetEntNum )
        break;
      if ( ++v12 >= 4 )
        goto LABEL_23;
    }
LABEL_24:
    if ( (_BYTE)v14 != 53 )
      return v14;
    v5 = targetGSCObjectiveIndex;
LABEL_44:
    if ( (int)++v11 >= 4 )
      return 53;
  }
  if ( scriptableIndex != -1 )
  {
    if ( v11 >= 4 )
    {
      LODWORD(v19) = 4;
      LODWORD(v18) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2802, ASSERT_TYPE_ASSERT, "(unsigned)( teammateIndex ) < (unsigned)( 4 )", "teammateIndex doesn't index CALLOUT_MARKER_PING_MAX_TEAM_SIZE\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v15 = 0i64;
    v16 = CG_GetLocalClientGlobals(localClientNum);
    while ( 1 )
    {
      v14 = 13 * v11 + (unsigned __int8)s_scriptablePools[v15];
      if ( v14 >= 0x34 )
      {
        LODWORD(v19) = 52;
        LODWORD(v18) = 13 * v11 + (unsigned __int8)s_scriptablePools[v15];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( v16->predictedPlayerState.calloutMarkerPings[(unsigned __int8)v14].origin.owner && v16->predictedPlayerState.calloutMarkerPings[(unsigned __int8)v14].scriptable.index == scriptableIndex )
        goto LABEL_24;
      if ( ++v15 >= 3 )
      {
LABEL_23:
        v5 = targetGSCObjectiveIndex;
        goto LABEL_44;
      }
    }
  }
  if ( v5 == -1 )
    goto LABEL_44;
  v17 = CG_GetLocalClientGlobals(localClientNum);
  v14 = 13 * v11 + 7;
  if ( v14 >= 0x34 )
  {
    LODWORD(v19) = 52;
    LODWORD(v18) = 13 * v11 + 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( !v17->predictedPlayerState.calloutMarkerPings[(unsigned __int8)v14].origin.owner || v17->predictedPlayerState.calloutMarkerPings[(unsigned __int8)v14].origin.x != v5 )
    goto LABEL_44;
  return v14;
}

/*
==============
CG_CalloutMarkerPing_CheckSquadmateHasRequestedInventory
==============
*/
char CG_CalloutMarkerPing_CheckSquadmateHasRequestedInventory(LocalClientNum_t localClientNum, int clientNum)
{
  cg_t *LocalClientGlobals; 
  int v4; 
  unsigned int v5; 
  unsigned __int8 owner; 
  __int64 v8; 
  __int64 v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v4 = 0;
  while ( 1 )
  {
    v5 = 13 * v4 + 12;
    if ( v5 >= 0x34 )
    {
      LODWORD(v9) = 52;
      LODWORD(v8) = 13 * v4 + 12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    owner = LocalClientGlobals->predictedPlayerState.calloutMarkerPings[(unsigned __int8)v5].origin.owner;
    if ( owner )
    {
      if ( owner - 1 == clientNum )
        break;
    }
    if ( ++v4 >= 4 )
      return 10;
  }
  return LocalClientGlobals->predictedPlayerState.calloutMarkerPings[(unsigned __int8)v5].entity.yOffset;
}

/*
==============
CG_CalloutMarkerPing_ClassifyEntity
==============
*/
__int64 CG_CalloutMarkerPing_ClassifyEntity(LocalClientNum_t localClientNum, __int16 entNum)
{
  __int64 v2; 
  unsigned int v3; 
  centity_t *Entity; 
  centity_t *v5; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v8; 
  int v10; 
  unsigned int v11; 
  int v12; 
  cg_t *v13; 
  const characterInfo_t *v14; 
  __int16 otherEntityNum; 
  const characterInfo_t *v16; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponCompleteDef *v19; 
  const char **p_szInternalName; 
  unsigned int scriptableIndex; 

  v2 = localClientNum;
  if ( (unsigned __int16)(entNum - 2046) > 1u )
  {
    v3 = entNum;
    Entity = CG_GetEntity(localClientNum, entNum);
    v5 = Entity;
    if ( Entity )
    {
      if ( (Entity->flags & 1) != 0 )
      {
        if ( (unsigned __int16)(Entity->nextState.eType - 3) > 1u )
        {
          if ( BG_IsCharacterEntity(&Entity->nextState) )
          {
            LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
            CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->predictedPlayerState.clientNum);
            v8 = CG_GetCharacterInfo(LocalClientGlobals, v5->nextState.clientNum);
            if ( CharacterInfo && v8 && v8->team != CharacterInfo->team )
              return 10i64;
            return 1i64;
          }
          if ( BG_IsVehicleEntity(&v5->nextState) )
            return 6i64;
          if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v2, v5, &scriptableIndex) )
          {
            LOBYTE(v10) = CG_CalloutMarkerPing_ClassifyScriptable((LocalClientNum_t)v2, scriptableIndex);
            v11 = v10;
            if ( v10 == 12 )
            {
              if ( GetCUAVFriendliness((LocalClientNum_t)v2, v3) == TEAM_TWO )
                return 0i64;
              return v11;
            }
            if ( v10 > 1 )
              return v11;
          }
          if ( v5->nextState.eType == ET_SCRIPTMOVER )
          {
            v12 = v5->nextState.lerp.u.anonymous.data[1];
            if ( v12 == s_calloutMarkerPingData[v2].xmodelIndexForPropaneJar || v12 == s_calloutMarkerPingData[v2].xmodelIndexForNeurotoxinJar )
              return 11i64;
          }
          return 1i64;
        }
        v13 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
        v14 = CG_GetCharacterInfo(v13, v13->predictedPlayerState.clientNum);
        if ( !v14 )
          return 7i64;
        otherEntityNum = v5->nextState.otherEntityNum;
        if ( otherEntityNum == 2047 )
          return 7i64;
        if ( !v13->HasCharacterInfo(v13, otherEntityNum) )
          return 7i64;
        v16 = CG_GetCharacterInfo(v13, v5->nextState.otherEntityNum);
        if ( !v16 || !v16->infoValid || v16->team != v14->team )
          return 7i64;
        Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v2);
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1064, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        WeaponForEntity = BG_GetWeaponForEntity(Instance, &v5->nextState);
        if ( WeaponForEntity->weaponIdx )
        {
          v19 = BG_WeaponCompleteDef(WeaponForEntity, 0);
          p_szInternalName = &v19->szInternalName;
          if ( v19 )
          {
            if ( !I_strcmp(v19->szInternalName, "support_box_mp") || !I_strcmp(*p_szInternalName, "armor_box_mp") || !I_strcmp(*p_szInternalName, "iw8_armor_marker_cp") || !I_strcmp(*p_szInternalName, "iw8_ammo_marker_cp") || !I_strcmp(*p_szInternalName, "iw8_health_marker_cp") )
              return 8i64;
          }
        }
      }
    }
  }
  return 1i64;
}

/*
==============
CG_CalloutMarkerPing_ClassifyPing
==============
*/
CalloutMarkerPingType CG_CalloutMarkerPing_ClassifyPing(LocalClientNum_t localClientNum, const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view)
{
  if ( pool == CONST_CALLOUT_POOL_ID_NAVIGATION )
    return 2;
  if ( (unsigned __int8)(pool - 1) <= 2u )
    return 3;
  switch ( pool )
  {
    case CONST_CALLOUT_POOL_ID_WORLD:
      return 4;
    case CONST_CALLOUT_POOL_ID_REQUEST:
      return 5;
    case CONST_CALLOUT_POOL_ID_VEHICLE:
      return 6;
  }
  if ( (unsigned __int8)(pool - 9) <= 2u )
    return CG_CalloutMarkerPing_ClassifyScriptable(localClientNum, view->scriptable.index);
  if ( (unsigned __int8)(pool - 4) <= 2u )
    return CG_CalloutMarkerPing_ClassifyEntity(localClientNum, view->origin.x);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1201, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
    __debugbreak();
  return 1;
}

/*
==============
CG_CalloutMarkerPing_ClassifyScriptable
==============
*/
__int64 CG_CalloutMarkerPing_ClassifyScriptable(LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  __int64 v3; 
  const ScriptableDef *def; 
  __int64 v6; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  const BG_SpawnGroup_Loot_Table *LootTable; 
  unsigned __int8 type; 
  unsigned __int8 v10; 
  const ObjectiveSettings *v11; 
  objectiveState_t state; 
  vec3_t out_origin; 

  v3 = localClientNum;
  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def )
    return 1i64;
  v6 = v3;
  if ( def == s_calloutMarkerPingData[v3].scriptableDef_equip_fulton_mp )
    return 22i64;
  if ( def == s_calloutMarkerPingData[v6].scriptableDef_military_ammo_restock )
    return 9i64;
  if ( def == s_calloutMarkerPingData[v6].scriptableDef_equip_gascan_propaneJar || def == s_calloutMarkerPingData[v6].scriptableDef_equip_gascan_neurotoxinJar )
    return 17i64;
  if ( def == s_calloutMarkerPingData[v6].scriptableDef_killstreak_CUAV )
    return 12i64;
  if ( (def->flags & 0x180000) != 0 )
    return 20i64;
  LootItemDef = ScriptableCl_GetLootItemDef((const LocalClientNum_t)v3, scriptableIndex);
  if ( LootItemDef )
  {
    LootTable = ScriptableCl_GetLootTable((const LocalClientNum_t)v3);
    type = LootItemDef->type;
    if ( type == LootTable->itemTypeIndexTablet )
      return 16i64;
    if ( type == LootTable->itemTypeIndexKiosk )
      return 15i64;
    if ( type == LootTable->itemTypeIndexAttraction )
      return 19i64;
    if ( type != LootTable->itemTypeIndexCache )
      return 14i64;
    if ( !ScriptableCl_IsScriptableUsable((const LocalClientNum_t)v3, scriptableIndex, NULL) )
      return 21i64;
    if ( ScriptableCl_GetLinkType((const LocalClientNum_t)v3, scriptableIndex) != SCRIPTABLE_LINK_ENTITY )
      return 14i64;
    return 1i64;
  }
  if ( ScriptableCl_ObjectiveActiveForInstance((const LocalClientNum_t)v3, scriptableIndex) )
  {
    v10 = ScriptableCl_ObjectiveGetForInstance((const LocalClientNum_t)v3, scriptableIndex);
    v11 = ScriptableCl_ObjectiveGet((const LocalClientNum_t)v3, v10, &out_origin);
    if ( v11 )
    {
      state = v11->state;
      if ( state == OBJST_ACTIVE || state == OBJST_CURRENT )
      {
        memset(&out_origin, 0, sizeof(out_origin));
        return 18i64;
      }
    }
    memset(&out_origin, 0, sizeof(out_origin));
  }
  if ( def != s_calloutMarkerPingData[v6].scriptableDef_cargotrain && def != s_calloutMarkerPingData[v6].scriptableDef_cargotrain_engine && def != s_calloutMarkerPingData[v6].scriptableDef_br_train_locomotive && def != s_calloutMarkerPingData[v6].scriptableDef_br_train_flatbed )
    return 1i64;
  return 13i64;
}

/*
==============
CG_CalloutMarkerPing_DebugDraw
==============
*/
void CG_CalloutMarkerPing_DebugDraw(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 
  const dvar_t *v3; 
  ContextualPingTarget *v4; 
  __int64 v5; 
  vec3_t outDrawPos; 
  char dest[1024]; 

  v1 = DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled;
  v2 = localClientNum;
  if ( !DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_contextualPingDetectionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v3 = DCONST_DVARBOOL_calloutmarkerping_debug_contextualping;
    if ( !DCONST_DVARBOOL_calloutmarkerping_debug_contextualping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_debug_contextualping") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      v4 = &s_contextualPingTargets[v2];
      if ( v4->type )
      {
        if ( CG_CalloutMarkerPing_GetDrawPos((const LocalClientNum_t)v2, &s_contextualPingTargets[v2], &outDrawPos) )
        {
          v5 = Com_sprintf(dest, 0x400ui64, "Ping Type: %s", s_debugContextualPingTypeNames[v4->type]);
          if ( v4->type == 1 )
          {
            Com_sprintf(&dest[v5], 1024 - (int)v5, " Entity: %d", (unsigned int)v4->data.entity.entNum);
          }
          else if ( (unsigned int)(v4->type - 2) <= 1 )
          {
            Com_sprintf(&dest[v5], 1024 - (int)v5, " Scriptable: %u", v4->data.scriptable.scriptableIndex);
          }
          CL_AddDebugStringCentered(&outDrawPos, &colorOrange, TEXT_SCALE, dest, 0, 0);
        }
      }
    }
  }
}

/*
==============
CG_CalloutMarkerPing_DebugTraceLine
==============
*/
void CG_CalloutMarkerPing_DebugTraceLine(const vec3_t *traceStart, const vec3_t *traceEnd, HavokPhysics_CollisionQueryResult *result)
{
  const dvar_t *v3; 
  const dvar_t *v7; 
  int integer; 
  const vec4_t *v9; 
  const vec3_t *p_pos; 
  vec3_t pos; 

  v3 = DCONST_DVARBOOL_calloutmarkerping_debug_trace;
  if ( !DCONST_DVARBOOL_calloutmarkerping_debug_trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_debug_trace") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v7 = DCONST_DVARINT_calloutmarkerping_debug_trace_duration;
    if ( !DCONST_DVARINT_calloutmarkerping_debug_trace_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_debug_trace_duration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    integer = v7->current.integer;
    if ( HavokPhysics_CollisionQueryResult::HasHit(result) )
    {
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(result, 0, &pos);
      v9 = &colorGreen;
      p_pos = &pos;
    }
    else
    {
      v9 = &colorRed;
      p_pos = traceEnd;
    }
    CG_DebugLine(traceStart, p_pos, v9, 0, integer);
  }
}

/*
==============
CG_CalloutMarkerPing_ExecuteContextualPingWorkerThread
==============
*/
void CG_CalloutMarkerPing_ExecuteContextualPingWorkerThread(const void *const cmdInfo)
{
  __int64 v2; 
  __int16 bestEntNum; 
  unsigned int bestScriptable; 
  CalloutMarkerPingType v5; 
  centity_t *Entity; 
  int bestGSCObjective; 
  CalloutMarkerPingScore outPingScore; 

  Sys_ProfBeginNamedEvent(0xFF808080, "CG_CalloutMarkerPing_ExecuteContextualPingWorkerThread");
  v2 = *((int *)cmdInfo + 12);
  outPingScore.bestScore = 0.0;
  outPingScore.bestEntNum = 2047;
  *(_DWORD *)outPingScore.bestType = 1;
  *(_QWORD *)&outPingScore.bestScriptable = -1i64;
  CG_CalloutMarkerPing_PickContextualTarget((const LocalClientNum_t)v2, (const vec3_t *)cmdInfo, (const tmat33_t<vec3_t> *)((char *)cmdInfo + 12), &outPingScore);
  s_contextualPingTargets[v2].type = None;
  bestEntNum = outPingScore.bestEntNum;
  bestScriptable = outPingScore.bestScriptable;
  if ( (unsigned __int8)(CG_CalloutMarkerPing_CheckSquadPingsForTarget((LocalClientNum_t)v2, outPingScore.bestEntNum, outPingScore.bestScriptable, -1) - 52) <= 1u )
  {
    if ( bestEntNum == 2047 )
    {
      if ( bestScriptable == -1 )
      {
        bestGSCObjective = outPingScore.bestGSCObjective;
        if ( outPingScore.bestGSCObjective != -1 )
        {
          s_contextualPingTargets[v2].type = Menu;
          s_contextualPingTargets[v2].data.scriptable.scriptableIndex = bestGSCObjective;
        }
      }
      else
      {
        s_contextualPingTargets[v2].type = 2;
        s_contextualPingTargets[v2].data.scriptable.scriptableIndex = bestScriptable;
      }
    }
    else
    {
      v5 = outPingScore.bestType[0];
      if ( (unsigned int)(*(_DWORD *)outPingScore.bestType - 6) > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5180, ASSERT_TYPE_ASSERT, "(( pingScore.bestType < CalloutMarkerPingType::SCRIPTABLES_BEGIN ) && ( pingScore.bestType >= CalloutMarkerPingType::ENTITIES_BEGIN ))", (const char *)&queryFormat, "( pingScore.bestType < CalloutMarkerPingType::SCRIPTABLES_BEGIN ) && ( pingScore.bestType >= CalloutMarkerPingType::ENTITIES_BEGIN )", -2i64) )
        __debugbreak();
      Entity = CG_GetEntity((const LocalClientNum_t)v2, bestEntNum);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5183, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( (Entity->flags & 1) != 0 && Entity->nextState.eType != ET_PLAYER )
      {
        s_contextualPingTargets[v2].type = 1;
        s_contextualPingTargets[v2].data.entity.entNum = bestEntNum;
        s_contextualPingTargets[v2].data.entity.pool = CG_CalloutMarkerPing_TypeGetPoolID(v5);
        s_contextualPingTargets[v2].data.entity.zOffset = CG_CalloutMarkerPing_GetEntityZOffset((LocalClientNum_t)v2, bestEntNum);
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_CalloutMarkerPing_ExecuteQueuedMarkAction
==============
*/
void CG_CalloutMarkerPing_ExecuteQueuedMarkAction(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5128, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5131, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->calloutMarkerInfo.executeMarkThisFrame )
  {
    Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_CalloutMarkerPing_ExecuteQueuedMarkAction");
    CG_CalloutMarkerPing_Predicted_HandleButtonPress((LocalClientNum_t)v1, LocalClientGlobals->calloutMarkerInfo.isTentative);
    if ( s_calloutMarkerPingData[v1].predicted.view.origin.owner )
    {
      if ( LUI_BeginEvent((LocalClientNum_t)v1, "callout_marker_pings_update", LUI_luaVM) )
        LUI_EndEvent(LUI_luaVM);
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
CG_CalloutMarkerPing_FinalizeDoubleTap
==============
*/
void CG_CalloutMarkerPing_FinalizeDoubleTap(LocalClientNum_t localClientNum, const bool isTentativeAction, const bool shouldDelete)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4305, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( isTentativeAction )
  {
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v9) = 2;
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4060, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v6 = v3;
    *(_WORD *)&s_calloutMarkerPingData[v6].predicted.isTentative = 257;
    s_calloutMarkerPingData[v6].predicted.isMarkedForDeletion = shouldDelete;
  }
  else if ( shouldDelete )
  {
    v7 = v3;
    s_calloutMarkerPingData[v7].predicted.createdTime = 0;
    *(_QWORD *)&s_calloutMarkerPingData[v7].predicted.sentToServerSequence = 0i64;
    *(_WORD *)&s_calloutMarkerPingData[v7].predicted.pool = 13581;
    s_calloutMarkerPingData[v7].predicted.view = 0i64;
  }
  else
  {
    CG_CalloutMarkerPing_Predicted_SendToServer((LocalClientNum_t)v3);
  }
}

/*
==============
CG_CalloutMarkerPing_GetAspectRatio
==============
*/
double CG_CalloutMarkerPing_GetAspectRatio(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum)
{
  int v5; 
  const GfxImage *IconForVehicle; 

  LOBYTE(v5) = CG_CalloutMarkerPing_ClassifyPing(localClientNum, pool, view);
  switch ( v5 )
  {
    case 6:
      IconForVehicle = CG_CalloutMarkerPing_GetIconForVehicle(localClientNum, view->origin.x, COMPASS_TYPE_TACMAP);
      CG_CalloutMarkerPing_GetAspectRatioForIcon(IconForVehicle);
      _XMM2 = LODWORD(FLOAT_1_0);
      __asm
      {
        vcmpltss xmm1, xmm2, xmm0
        vblendvps xmm0, xmm2, xmm0, xmm1
      }
      break;
    case 14:
    case 15:
    case 16:
    case 18:
    case 19:
      *(float *)&_XMM0 = CG_CalloutMarkerPing_GetAspectRatioForScriptable(localClientNum, view->scriptable.index);
      break;
    default:
      *(_QWORD *)&_XMM0 = LODWORD(FLOAT_1_0);
      break;
  }
  return *(double *)&_XMM0;
}

/*
==============
CG_CalloutMarkerPing_GetAspectRatioForIcon
==============
*/
float CG_CalloutMarkerPing_GetAspectRatioForIcon(const GfxImage *const icon)
{
  unsigned __int16 height; 

  if ( icon && (height = icon->height) != 0 )
    return (float)icon->width / (float)height;
  else
    return FLOAT_1_0;
}

/*
==============
CG_CalloutMarkerPing_GetAspectRatioForScriptable
==============
*/
float CG_CalloutMarkerPing_GetAspectRatioForScriptable(LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  unsigned __int8 v4; 
  const ObjectiveSettings *v5; 
  const GfxImage *v6; 
  float result; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  const BG_SpawnGroup_Loot_ItemDef *v9; 
  BgWeaponHandle v10; 
  CgWeaponMap *Instance; 
  const Weapon *Weapon; 
  GfxImage *icon; 
  unsigned __int16 height; 
  vec3_t out_origin; 
  char *outName; 

  if ( ScriptableCl_ObjectiveActiveForInstance(localClientNum, scriptableIndex) )
  {
    v4 = ScriptableCl_ObjectiveGetForInstance(localClientNum, scriptableIndex);
    v5 = ScriptableCl_ObjectiveGet(localClientNum, v4, &out_origin);
    if ( v5 && NetConstStrings_AreStringsLoaded() && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, v5->icon, (const char **)&outName) )
    {
      v6 = Image_Register(outName, IMAGE_TRACK_HUD);
      result = CG_CalloutMarkerPing_GetAspectRatioForIcon(v6);
    }
    else
    {
      result = FLOAT_1_0;
    }
    memset(&out_origin, 0, sizeof(out_origin));
  }
  else
  {
    LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, scriptableIndex);
    v9 = LootItemDef;
    if ( !LootItemDef )
      return FLOAT_1_0;
    if ( BG_SpawnGroup_Loot_IsCustomWeaponItemDef(LootItemDef) )
    {
      v10.m_mapEntryId = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->extraPayload;
      Instance = CgWeaponMap::GetInstance(localClientNum);
      Weapon = BgWeaponMap::GetWeapon(Instance, v10);
      BG_WeaponCompleteDef(Weapon, 0);
    }
    icon = v9->icon;
    if ( icon && (height = icon->height) != 0 )
      return (float)icon->width / (float)height;
    else
      return FLOAT_1_0;
  }
  return result;
}

/*
==============
CG_CalloutMarkerPing_GetBackgroundType
==============
*/
CalloutMarkerPingBackgroundType CG_CalloutMarkerPing_GetBackgroundType(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum)
{
  int v3; 
  CalloutMarkerPingBackgroundType result; 

  LOBYTE(v3) = CG_CalloutMarkerPing_ClassifyPing(localClientNum, pool, view);
  switch ( v3 )
  {
    case 2:
    case 13:
      result = CONST_CALLOUT_BACKGROUND_TYPE_LOCATION;
      break;
    case 3:
    case 11:
    case 12:
    case 17:
      result = CONST_CALLOUT_BACKGROUND_TYPE_DANGER;
      break;
    case 4:
    case 8:
    case 9:
    case 14:
    case 15:
    case 16:
    case 18:
    case 19:
    case 22:
      result = CONST_CALLOUT_BACKGROUND_TYPE_LOOT;
      break;
    case 5:
      result = CONST_CALLOUT_BACKGROUND_TYPE_REQUEST;
      break;
    case 6:
      result = CONST_CALLOUT_BACKGROUND_TYPE_VEHICLE;
      break;
    case 10:
      result = CONST_CALLOUT_BACKGROUND_TYPE_ENEMY;
      break;
    default:
      result = CONST_CALLOUT_BACKGROUND_TYPE_NONE;
      break;
  }
  return result;
}

/*
==============
CG_CalloutMarkerPing_GetColor
==============
*/
void CG_CalloutMarkerPing_GetColor(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum, vec4_t *out_color)
{
  int clientNum; 
  unsigned __int8 owner; 
  int v10; 
  int v11; 
  float v12; 
  team_t Friendliness; 
  vec4_t *v14; 

  clientNum = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.clientNum;
  owner = view->origin.owner;
  if ( owner )
    v10 = owner - 1;
  else
    v10 = -1;
  LOBYTE(v11) = CG_CalloutMarkerPing_ClassifyPing(localClientNum, pool, view);
  switch ( v11 )
  {
    case 0:
      *out_color = colorWhite;
      goto LABEL_6;
    case 1:
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
    case 18:
    case 20:
    case 21:
    case 22:
LABEL_6:
      out_color->v[0] = colorWhite.v[0];
      out_color->v[1] = colorWhite.v[1];
      out_color->v[2] = colorWhite.v[2];
      v12 = colorWhite.v[3];
      goto LABEL_7;
    case 2:
    case 5:
    case 13:
    case 19:
      CG_CalloutMarkerPing_GetColorForAllyOrSelf(localClientNum, clientNum, v10, out_color);
      return;
    case 6:
      Friendliness = CG_CalloutMarkerPing_GetFriendliness(pool, view, localClientNum);
      v14 = &colorWhite;
      if ( Friendliness == TEAM_ONE )
        v14 = &colorRed;
      out_color->v[0] = v14->v[0];
      out_color->v[1] = v14->v[1];
      out_color->v[2] = v14->v[2];
      out_color->v[3] = v14->v[3];
      return;
    case 7:
    case 11:
    case 12:
    case 17:
      out_color->v[0] = colorRed.v[0];
      out_color->v[1] = colorRed.v[1];
      out_color->v[2] = colorRed.v[2];
      v12 = colorRed.v[3];
LABEL_7:
      out_color->v[3] = v12;
      break;
    case 14:
    case 15:
    case 16:
      CG_CalloutMarkerPing_GetColorForLoot(localClientNum, view->scriptable.index, out_color);
      break;
    default:
      return;
  }
}

/*
==============
CG_CalloutMarkerPing_GetColorForAllyOrSelf
==============
*/
void CG_CalloutMarkerPing_GetColorForAllyOrSelf(LocalClientNum_t localClientNum, int myClientNum, int ownerClientNum, vec4_t *out_color)
{
  cg_t *LocalClientGlobals; 
  CgCompassSystem *CompassSystem; 
  CgStatic *LocalClientStatics; 
  __int64 v11; 
  CgCompassSystem *v12; 
  CgStatic *v13; 
  __int64 v14; 
  __int64 v15; 

  if ( myClientNum == ownerClientNum )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    CompassSystem = CgCompassSystem::GetCompassSystem(localClientNum);
    CompassSystem->GetPlayerCompassColor(CompassSystem, out_color, LocalClientGlobals);
    if ( CG_GameInterface_PlayingArena() || CG_GameInterface_PlayingGroundWar() )
    {
      LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
      v11 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, myClientNum);
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2489, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
        __debugbreak();
      if ( (*(_BYTE *)(v11 + 120) & 7) != 0 )
        LUI_CoD_GameMP_GetBrColorForClientNum(*(_DWORD *)v11, out_color);
    }
  }
  else
  {
    v12 = CgCompassSystem::GetCompassSystem(localClientNum);
    v13 = CgStatic::GetLocalClientStatics(localClientNum);
    v14 = (__int64)v13->GetClientInfo(v13, myClientNum);
    v15 = (__int64)v13->GetClientInfo(v13, ownerClientNum);
    v12->ComputeFriendlyCompassColor(v12, (const clientInfo_t *)v14, (const clientInfo_t *)v15, out_color);
  }
}

/*
==============
CG_CalloutMarkerPing_GetColorForLoot
==============
*/
void CG_CalloutMarkerPing_GetColorForLoot(LocalClientNum_t localClientNum, unsigned int scriptableIndex, vec4_t *out_color)
{
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 

  LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, scriptableIndex);
  if ( LootItemDef )
  {
    _XMM0 = ScriptableCl_GetLootItemRarityColor(localClientNum, LootItemDef->rarity);
    __asm { vpmovzxbd xmm1, xmm0 }
    *(__m128 *)out_color = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
  }
  else
  {
    *out_color = colorWhite;
  }
}

/*
==============
CG_CalloutMarkerPing_GetContextualPingData
==============
*/
CG_CalloutMarkerPingData *CG_CalloutMarkerPing_GetContextualPingData(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5269, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &s_calloutMarkerPingData[v1];
}

/*
==============
CG_CalloutMarkerPing_GetContextualPingTarget
==============
*/
ContextualPingTarget *CG_CalloutMarkerPing_GetContextualPingTarget(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5262, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &s_contextualPingTargets[v1];
}

/*
==============
CG_CalloutMarkerPing_GetDrawPos
==============
*/
bool CG_CalloutMarkerPing_GetDrawPos(const LocalClientNum_t localClientNum, const ContextualPingTarget *contextualPingTarget, vec3_t *outDrawPos)
{
  bool result; 
  cg_t *LocalClientGlobals; 
  __int64 objectiveIndex; 
  unsigned int v9; 
  const cpose_t *v10; 
  float v11; 
  unsigned int scriptableIndex; 
  __int16 entNum; 
  const cpose_t *Pose; 
  __int64 v15; 

  if ( (contextualPingTarget->type == None || contextualPingTarget->type == 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5276, ASSERT_TYPE_ASSERT, "((contextualPingTarget.type != ContextualPingTargetType::None) && (contextualPingTarget.type != ContextualPingTargetType::Count))", (const char *)&queryFormat, "(contextualPingTarget.type != ContextualPingTargetType::None) && (contextualPingTarget.type != ContextualPingTargetType::Count)") )
    __debugbreak();
  switch ( contextualPingTarget->type )
  {
    case 1:
      entNum = contextualPingTarget->data.entity.entNum;
      if ( (unsigned __int16)entNum >= 0x7FEu )
        return 0;
      Pose = CG_GetPose(localClientNum, entNum);
      if ( !Pose )
        return 0;
      CG_GetPoseOrigin(Pose, outDrawPos);
      outDrawPos->v[2] = (float)((float)contextualPingTarget->data.entity.zOffset + outDrawPos->v[2]) + ENTITY_DRAW_Z_OFFSET;
      return 1;
    case 2:
    case 3:
      scriptableIndex = contextualPingTarget->data.scriptable.scriptableIndex;
      if ( scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5303, ASSERT_TYPE_ASSERT, "(scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
        __debugbreak();
      ScriptableCl_GetInstanceOrigin(localClientNum, scriptableIndex, outDrawPos);
      outDrawPos->v[2] = SCRIPTABLE_DRAW_Z_OFFSET + outDrawPos->v[2];
      return 1;
    case 4:
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      objectiveIndex = contextualPingTarget->data.objective.objectiveIndex;
      v9 = LocalClientGlobals->predictedPlayerState.objectives[objectiveIndex].entNum[0];
      if ( v9 < 0x7FE && (v10 = CG_GetPose(localClientNum, v9)) != NULL )
      {
        CG_GetPoseOrigin(v10, outDrawPos);
        outDrawPos->v[2] = (float)LocalClientGlobals->predictedPlayerState.objectives[objectiveIndex].zOffset + outDrawPos->v[2];
        return 1;
      }
      else
      {
        outDrawPos->v[0] = LocalClientGlobals->predictedPlayerState.objectives[objectiveIndex].origin[0].v[0];
        outDrawPos->v[1] = LocalClientGlobals->predictedPlayerState.objectives[objectiveIndex].origin[0].v[1];
        result = 1;
        v11 = LocalClientGlobals->predictedPlayerState.objectives[objectiveIndex].origin[0].v[2];
        outDrawPos->v[2] = v11;
        outDrawPos->v[2] = (float)LocalClientGlobals->predictedPlayerState.objectives[objectiveIndex].zOffset + v11;
      }
      break;
    default:
      LODWORD(v15) = contextualPingTarget->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5330, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CalloutMarkerPing_GetDrawPos: Unhandled ping target type: %d", v15) )
        __debugbreak();
      return 0;
  }
  return result;
}

/*
==============
CG_CalloutMarkerPing_GetEntityOffsetForPointLineSegmentDistCheck
==============
*/
float CG_CalloutMarkerPing_GetEntityOffsetForPointLineSegmentDistCheck(const LocalClientNum_t localClientNum, const __int16 entNum)
{
  __int32 v4; 
  int v5; 
  unsigned int Instance; 
  unsigned int m_serialAndIndex; 
  __int64 v13; 
  __int64 v14; 
  hknpBodyId result; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3723, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned __int16)entNum >= 0x7FEu )
  {
    LODWORD(v14) = 2046;
    LODWORD(v13) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3724, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "entNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v4 = 3 * localClientNum + 2;
  v5 = entNum;
  Instance = CG_PhysicsObject_GetInstance((Physics_WorldId)v4, entNum, localClientNum);
  if ( Instance == -1 )
    goto LABEL_24;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v4 > 7 )
  {
    LODWORD(v14) = 3 * localClientNum + 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * localClientNum) <= 5 )
  {
    LODWORD(v14) = 3 * localClientNum + 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v14) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v4 <= 1 )
  {
    LODWORD(v14) = 3 * localClientNum + 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v14) )
      __debugbreak();
  }
  m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v4, Instance, 0)->m_serialAndIndex;
  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
LABEL_24:
    _XMM0 = (unsigned int)CG_GetEntity(localClientNum, v5)->nextState.eType;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = 0i64;
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  }
  else
  {
    Physics_GetRigidBodyAABB((Physics_WorldId)v4, m_serialAndIndex, &aabbMin, &aabbMax, 1);
    LODWORD(_XMM0) = fsqrt((float)((float)((float)((float)(aabbMin.v[1] - aabbMax.v[1]) * (float)(aabbMin.v[1] - aabbMax.v[1])) + (float)((float)(aabbMin.v[0] - aabbMax.v[0]) * (float)(aabbMin.v[0] - aabbMax.v[0]))) + (float)((float)(aabbMin.v[2] - aabbMax.v[2]) * (float)(aabbMin.v[2] - aabbMax.v[2]))) * 0.25);
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_CalloutMarkerPing_GetEntityZOffset
==============
*/
__int64 CG_CalloutMarkerPing_GetEntityZOffset(LocalClientNum_t localClientNum, __int16 entNum)
{
  int v4; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  int v7; 
  __int64 v8; 
  ObjectiveView *objectives; 
  const CompassVehicleMedia *VehicleMedia; 
  int v12; 

  v4 = entNum;
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( (Entity->flags & 1) == 0 )
    return 0i64;
  if ( !BG_IsVehicleEntity(&Entity->nextState) )
  {
    LOBYTE(v12) = CG_CalloutMarkerPing_ClassifyEntity(localClientNum, entNum);
    if ( v12 == 10 )
      return 82i64;
    if ( v12 != 7 )
    {
      if ( v12 == 8 )
        return 24i64;
      if ( v12 == 9 )
        return 60i64;
      if ( v12 != 11 )
      {
        if ( v12 == 12 )
          return 120i64;
        if ( v12 != 13 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3057, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled entity type in CG_CalloutMarkerPing_GetEntityZOffset()") )
            __debugbreak();
          return 0i64;
        }
        return 60i64;
      }
    }
    return 32i64;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 0;
  v8 = 0i64;
  objectives = LocalClientGlobals->predictedPlayerState.objectives;
  while ( objectives->entNum[0] != v4 )
  {
    ++v7;
    ++v8;
    ++objectives;
    if ( v8 >= 32 )
      goto LABEL_6;
  }
  if ( v7 != -1 )
    return (unsigned int)(int)(float)CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.objectives[v7].zOffset;
LABEL_6:
  VehicleMedia = CG_CalloutMarkerPing_GetVehicleMedia(localClientNum, entNum);
  if ( VehicleMedia )
    return (unsigned int)(int)VehicleMedia->pingZOffset;
  else
    return (unsigned int)(int)0.0;
}

/*
==============
CG_CalloutMarkerPing_GetFriendliness
==============
*/
__int64 CG_CalloutMarkerPing_GetFriendliness(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum)
{
  centity_t *v4; 
  entityState_t *p_nextState; 
  CgVehicleSystem *VehicleSystem; 
  team_t v7; 
  CgStatic *v8; 
  cg_t *v9; 
  const characterInfo_t *v10; 
  team_t team; 
  bool v12; 
  centity_t *Entity; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  unsigned int otherEntityNum; 
  CgStatic *v18; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v20; 

  if ( pool == CONST_CALLOUT_POOL_ID_ENTITY_1 || pool == CONST_CALLOUT_POOL_ID_ENTITY_2 || pool == CONST_CALLOUT_POOL_ID_ENTITY_3 )
  {
    if ( pool != CONST_CALLOUT_POOL_ID_VEHICLE && (unsigned __int8)(pool - 4) > 2u || view->origin.x == 2047 )
      return 0i64;
    Entity = CG_GetEntity(localClientNum, view->origin.x);
    if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((Entity->nextState.eType - 1) & 0xFFEF) != 0 )
    {
      if ( Entity->nextState.eType != ET_MISSILE )
        return 0i64;
      LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
      LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
      otherEntityNum = Entity->nextState.otherEntityNum;
      v18 = LocalClientStatics;
      if ( otherEntityNum < ComCharacterLimits::GetCharacterMaxCount() )
      {
        CharacterInfo = CgStatic::GetCharacterInfo(v18, LocalClientGlobals->predictedPlayerState.clientNum);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2388, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
          __debugbreak();
        if ( CharacterInfo->team )
        {
          v20 = CgStatic::GetCharacterInfo(v18, otherEntityNum);
          if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2394, ASSERT_TYPE_ASSERT, "(attackerInfo)", (const char *)&queryFormat, "attackerInfo") )
            __debugbreak();
          v12 = v20->team == CharacterInfo->team;
          goto LABEL_36;
        }
      }
    }
    return 1i64;
  }
  if ( pool == CONST_CALLOUT_POOL_ID_VEHICLE && (pool == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(pool - 4) <= 2u) && view->origin.x != 2047 )
  {
    v4 = CG_GetEntity(localClientNum, view->origin.x);
    if ( (v4->flags & 1) != 0 )
    {
      p_nextState = &v4->nextState;
      if ( BG_IsVehicleEntity(&v4->nextState) )
      {
        VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
        if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2325, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
          __debugbreak();
        v7 = VehicleSystem->GetTeam(VehicleSystem, p_nextState);
        if ( v7 )
        {
          v8 = CgStatic::GetLocalClientStatics(localClientNum);
          v9 = CG_GetLocalClientGlobals(localClientNum);
          v10 = CgStatic::GetCharacterInfo(v8, v9->clientNum);
          if ( !v10 )
            return (unsigned int)v7;
          if ( !v10->infoValid )
            return (unsigned int)v7;
          team = v10->team;
          if ( team == TEAM_ZERO )
            return (unsigned int)v7;
          v12 = v7 == team;
LABEL_36:
          if ( v12 )
            return 2i64;
          return 1i64;
        }
      }
    }
  }
  return 0i64;
}

/*
==============
CG_CalloutMarkerPing_GetIcon
==============
*/
GfxImage *CG_CalloutMarkerPing_GetIcon(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum, CompassType compassType)
{
  unsigned __int8 owner; 
  int v8; 
  int v9; 
  bool IsClientNumSquadLeader; 
  const GfxImage *calloutMarkerPing_Navigation; 
  GfxImage *result; 
  __int64 x; 
  unsigned int icon; 
  centity_t *Entity; 
  centity_t *v16; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  centity_t *v19; 
  centity_t *v20; 
  CgWeaponMap *v21; 
  const Weapon *v22; 
  centity_t *v23; 
  char *outName; 

  owner = view->origin.owner;
  if ( owner )
    v8 = owner - 1;
  else
    v8 = -1;
  LOBYTE(v9) = CG_CalloutMarkerPing_ClassifyPing(localClientNum, pool, view);
  switch ( v9 )
  {
    case 2:
    case 13:
      IsClientNumSquadLeader = Game_IsClientNumSquadLeader(v8);
      calloutMarkerPing_Navigation = cgMedia.compass.calloutMarkerPing_Navigation;
      if ( IsClientNumSquadLeader )
        calloutMarkerPing_Navigation = cgMedia.compass.calloutMarkerPing_Navigation_Leader;
      result = (GfxImage *)calloutMarkerPing_Navigation;
      break;
    case 3:
      result = (GfxImage *)cgMedia.compass.calloutMarkerPing_Danger;
      break;
    case 4:
      x = view->origin.x;
      if ( (unsigned int)x >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 845, ASSERT_TYPE_ASSERT, "(unsigned)( gscObjectiveIndex ) < (unsigned)( 32 )", "gscObjectiveIndex doesn't index MAX_OBJECTIVES_PER_PLAYER\n\t%i not in [0, %i)", x, 32) )
        __debugbreak();
      if ( (unsigned int)x > 0x1F )
        goto $LN2_1;
      icon = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.objectives[x].icon;
      if ( !icon || !NetConstStrings_AreStringsLoaded() || !NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, icon, (const char **)&outName) )
        goto $LN2_1;
      result = Image_Register(outName, IMAGE_TRACK_HUD);
      break;
    case 5:
      result = (GfxImage *)CG_CalloutMarkerPing_GetIconForRequest(view->request.inventorySlot);
      break;
    case 6:
      result = (GfxImage *)CG_CalloutMarkerPing_GetIconForVehicle(localClientNum, view->origin.x, compassType);
      break;
    case 7:
      Entity = CG_GetEntity(localClientNum, view->origin.x);
      v16 = Entity;
      if ( !Entity || (Entity->flags & 1) == 0 || (unsigned __int16)(Entity->nextState.eType - 3) > 1u )
        goto $LN2_1;
      Instance = CgWeaponMap::GetInstance(localClientNum);
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 683, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &v16->nextState);
      if ( !WeaponForEntity->weaponIdx )
        goto LABEL_30;
      result = BG_HudIcon(WeaponForEntity, v16->nextState.inAltWeaponMode);
      if ( !result )
        goto LABEL_30;
      break;
    case 8:
      v19 = CG_GetEntity(localClientNum, view->origin.x);
      v20 = v19;
      if ( !v19 || (v19->flags & 1) == 0 || (unsigned __int16)(v19->nextState.eType - 3) > 1u )
        goto $LN2_1;
      v21 = CgWeaponMap::GetInstance(localClientNum);
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 718, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      v22 = BG_GetWeaponForEntity(v21, &v20->nextState);
      if ( v22->weaponIdx )
      {
        result = BG_HudIcon(v22, v20->nextState.inAltWeaponMode);
        if ( !result )
          result = cgMedia.grenadeIconFrag->textureTable->image;
      }
      else
      {
LABEL_30:
        result = cgMedia.grenadeIconFrag->textureTable->image;
      }
      break;
    case 9:
      result = (GfxImage *)cgMedia.compass.calloutMarkerPing_Ammo;
      break;
    case 10:
      result = (GfxImage *)cgMedia.compass.calloutMarkerPing_Enemy;
      break;
    case 11:
      result = (GfxImage *)CG_CalloutMarkerPing_GetIconForGascan_Entity(localClientNum, view->origin.x, compassType);
      break;
    case 12:
      result = (GfxImage *)cgMedia.compass.calloutMarkerPing_CUAV;
      break;
    case 14:
    case 16:
    case 18:
    case 19:
      goto $LN20_10;
    case 15:
      v23 = CG_GetEntity(localClientNum, (__int16)v8);
      if ( ((v23->flags & 1) == 0 || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v23->nextState.lerp.eFlags, ACTIVE, 0x11u)) && Dvar_GetBool_Internal_DebugName(DVARBOOL_calloutmarkerping_buybackEnabled, "calloutmarkerping_buybackEnabled") )
        result = (GfxImage *)cgMedia.compass.calloutMarkerPing_PlunderBuyback;
      else
$LN20_10:
        result = (GfxImage *)CG_CalloutMarkerPing_GetIconForScriptable(localClientNum, view->scriptable.index, compassType);
      break;
    case 17:
      result = (GfxImage *)CG_CalloutMarkerPing_GetIconForGascan_Scriptable(localClientNum, view->scriptable.index, compassType);
      break;
    case 20:
    case 21:
      result = (GfxImage *)cgMedia.compass.calloutMarkerPing_Caution;
      break;
    case 22:
      result = (GfxImage *)cgMedia.compass.calloutMarkerPing_Plunder;
      break;
    default:
$LN2_1:
      result = NULL;
      break;
  }
  return result;
}

/*
==============
CG_CalloutMarkerPing_GetIconForGascan_Entity
==============
*/
const GfxImage *CG_CalloutMarkerPing_GetIconForGascan_Entity(LocalClientNum_t localClientNum, int entNum, CompassType compassType)
{
  __int64 v3; 
  centity_t *Entity; 
  int v5; 

  v3 = localClientNum;
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity || (Entity->flags & 1) == 0 )
    return 0i64;
  v5 = Entity->nextState.lerp.u.anonymous.data[1];
  if ( v5 == s_calloutMarkerPingData[v3].xmodelIndexForPropaneJar )
    return cgMedia.compass.calloutMarkerPing_PropaneJar;
  if ( v5 == s_calloutMarkerPingData[v3].xmodelIndexForNeurotoxinJar )
    return cgMedia.compass.calloutMarkerPing_NeurotoxinJar;
  else
    return 0i64;
}

/*
==============
CG_CalloutMarkerPing_GetIconForGascan_Scriptable
==============
*/
const GfxImage *CG_CalloutMarkerPing_GetIconForGascan_Scriptable(LocalClientNum_t localClientNum, int index, CompassType compassType)
{
  __int64 v3; 
  const ScriptableDef *def; 

  v3 = localClientNum;
  def = ScriptableCl_GetInstanceCommonContext(localClientNum, index)->def;
  if ( !def )
    return 0i64;
  if ( def == s_calloutMarkerPingData[v3].scriptableDef_equip_gascan_propaneJar )
    return cgMedia.compass.calloutMarkerPing_PropaneJar;
  if ( def == s_calloutMarkerPingData[v3].scriptableDef_equip_gascan_neurotoxinJar )
    return cgMedia.compass.calloutMarkerPing_NeurotoxinJar;
  else
    return 0i64;
}

/*
==============
CG_CalloutMarkerPing_GetIconForNetConstString
==============
*/
GfxImage *CG_CalloutMarkerPing_GetIconForNetConstString(LocalClientNum_t localClientNum, unsigned int ncsIndex)
{
  char *outName; 

  if ( ncsIndex && NetConstStrings_AreStringsLoaded() && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, ncsIndex, (const char **)&outName) )
    return Image_Register(outName, IMAGE_TRACK_HUD);
  else
    return 0i64;
}

/*
==============
CG_CalloutMarkerPing_GetIconForRequest
==============
*/
const GfxImage *CG_CalloutMarkerPing_GetIconForRequest(const unsigned __int8 inventorySlot)
{
  const GfxImage *result; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( inventorySlot >= 0xAu )
  {
    v5 = 10;
    v4 = inventorySlot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 808, ASSERT_TYPE_ASSERT, "(unsigned)( inventorySlot ) < (unsigned)( static_cast<int>(CalloutMarkerPingInventorySlot::Count) )", "inventorySlot doesn't index static_cast<int>(CalloutMarkerPingInventorySlot::Count)\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  switch ( inventorySlot )
  {
    case 0u:
      result = cgMedia.compass.calloutMarkerPing_SlotPlunder;
      break;
    case 1u:
      result = cgMedia.compass.calloutMarkerPing_SlotRespawnToken;
      break;
    case 2u:
      result = cgMedia.compass.calloutMarkerPing_SlotArmor;
      break;
    case 3u:
      result = cgMedia.compass.calloutMarkerPing_SlotAmmoMidCal;
      break;
    case 4u:
      result = cgMedia.compass.calloutMarkerPing_SlotAmmoShells;
      break;
    case 5u:
      result = cgMedia.compass.calloutMarkerPing_SlotAmmoSmallCal;
      break;
    case 6u:
      result = cgMedia.compass.calloutMarkerPing_SlotAmmoRocket;
      break;
    case 7u:
      result = cgMedia.compass.calloutMarkerPing_SlotAmmoHighCal;
      break;
    case 8u:
      result = cgMedia.compass.calloutMarkerPing_SlotSelfRevive;
      break;
    case 9u:
      result = cgMedia.compass.calloutMarkerPing_SlotWeapon;
      break;
    default:
      LODWORD(v3) = inventorySlot;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 835, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled inventory slot %u in CG_CalloutMarkerPing_GetIconForRequest", v3) )
        __debugbreak();
      result = cgMedia.compass.calloutMarkerPing_Caution;
      break;
  }
  return result;
}

/*
==============
CG_CalloutMarkerPing_GetIconForScriptable
==============
*/
GfxImage *CG_CalloutMarkerPing_GetIconForScriptable(LocalClientNum_t localClientNum, unsigned int scriptableIndex, CompassType compassType)
{
  __int64 v6; 
  const ObjectiveSettings *v7; 
  unsigned __int8 v8; 
  const ObjectiveSettings *v9; 
  objectiveState_t state; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  const BG_SpawnGroup_Loot_ItemDef *v12; 
  unsigned int icon; 
  GfxImage *result; 
  BgWeaponHandle v15; 
  CgWeaponMap *Instance; 
  const Weapon *Weapon; 
  Material *killIconMat; 
  vec3_t out_origin; 
  char *outName; 

  v6 = 0i64;
  v7 = NULL;
  if ( ScriptableCl_ObjectiveActiveForInstance(localClientNum, scriptableIndex) )
  {
    v8 = ScriptableCl_ObjectiveGetForInstance(localClientNum, scriptableIndex);
    v9 = ScriptableCl_ObjectiveGet(localClientNum, v8, &out_origin);
    v7 = v9;
    if ( v9 )
    {
      if ( (*(_WORD *)v9->flags & 0x2000) == 0 && ((state = v9->state, state == OBJST_ACTIVE) || state == OBJST_CURRENT) && (compassType & 0xFFFFFFFD) == 0 || !v7->icon || !v7->cached )
      {
        result = NULL;
        memset(&out_origin, 0, sizeof(out_origin));
        return result;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 744, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj", -2i64) )
    {
      __debugbreak();
    }
    memset(&out_origin, 0, sizeof(out_origin));
  }
  LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, scriptableIndex);
  v12 = LootItemDef;
  if ( !LootItemDef )
  {
    if ( v7 )
    {
      icon = v7->icon;
      if ( icon && NetConstStrings_AreStringsLoaded() && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, icon, (const char **)&outName) )
        return Image_Register(outName, IMAGE_TRACK_HUD);
      return (GfxImage *)v6;
    }
    return (GfxImage *)cgMedia.compass.calloutMarkerPing_Loot_Generic;
  }
  if ( BG_SpawnGroup_Loot_IsCustomWeaponItemDef(LootItemDef) )
  {
    v15.m_mapEntryId = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->extraPayload;
    Instance = CgWeaponMap::GetInstance(localClientNum);
    Weapon = BgWeaponMap::GetWeapon(Instance, v15);
    killIconMat = BG_WeaponCompleteDef(Weapon, 0)->killIconMat;
    if ( killIconMat )
      return killIconMat->textureTable->image;
  }
  result = v12->icon;
  if ( !result )
  {
    if ( v7 )
      return CG_CalloutMarkerPing_GetIconForNetConstString(localClientNum, v7->icon);
    Com_PrintWarning(13, "CG_CalloutMarkerPing_GetIconForScriptable: Loot item %s does not have an icon.\n", v12->name);
    return (GfxImage *)cgMedia.compass.calloutMarkerPing_Loot_Generic;
  }
  return result;
}

/*
==============
CG_CalloutMarkerPing_GetIconForVehicle
==============
*/
const GfxImage *CG_CalloutMarkerPing_GetIconForVehicle(LocalClientNum_t localClientNum, __int16 entNum, CompassType compassType)
{
  int v4; 
  cg_t *LocalClientGlobals; 
  int v7; 
  __int64 v8; 
  ObjectiveView *objectives; 
  char *v10; 
  char v11; 
  const CompassVehicleMedia *VehicleMedia; 
  Material *pingIcon; 

  v4 = entNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 0;
  v8 = 0i64;
  objectives = LocalClientGlobals->predictedPlayerState.objectives;
  while ( objectives->entNum[0] != v4 )
  {
    ++v7;
    ++v8;
    ++objectives;
    if ( v8 >= 32 )
      goto LABEL_12;
  }
  if ( v7 != -1 )
  {
    v10 = (char *)CG_GetLocalClientGlobals(localClientNum) + 172 * v7;
    v11 = v10[4887];
    if ( (v11 == 1 || v11 == 4) && (compassType & 0xFFFFFFFD) == 0 )
      return CG_CalloutMarkerPing_GetIconForNetConstString(localClientNum, *((_DWORD *)v10 + 1218));
    if ( ((v11 - 2) & 0xFD) == 0 && (compassType & 0xFFFFFFFD) != 0 )
      return CG_CalloutMarkerPing_GetIconForNetConstString(localClientNum, *((_DWORD *)v10 + 1218));
  }
LABEL_12:
  VehicleMedia = CG_CalloutMarkerPing_GetVehicleMedia(localClientNum, v4);
  if ( VehicleMedia && (pingIcon = VehicleMedia->pingIcon) != NULL )
    return pingIcon->textureTable->image;
  else
    return cgMedia.compass.calloutMarkerPing_Vehicle;
}

/*
==============
CG_CalloutMarkerPing_GetLastPredictedViewIndex
==============
*/
__int64 CG_CalloutMarkerPing_GetLastPredictedViewIndex(const LocalClientNum_t localClientNum)
{
  return s_calloutMarkerPingData[localClientNum].lastPredictedViewIndex;
}

/*
==============
CG_CalloutMarkerPing_GetLastTimeChanged
==============
*/
__int64 CG_CalloutMarkerPing_GetLastTimeChanged(LocalClientNum_t localClientNum, unsigned __int8 viewIndex)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2002, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( viewIndex >= 0x35u )
  {
    LODWORD(v7) = 53;
    LODWORD(v5) = viewIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2003, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( CG_CALLOUTMARKERPING_VIEW_INDEX_MAX )", "viewIndex doesn't index CG_CALLOUTMARKERPING_VIEW_INDEX_MAX\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return (unsigned int)s_calloutMarkerPingData[v2].markers[viewIndex].lastTimeChangedFeedback;
}

/*
==============
CG_CalloutMarkerPing_GetLookAtIndex
==============
*/
__int64 CG_CalloutMarkerPing_GetLookAtIndex(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2011, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_calloutMarkerPingData[v1].pingLookAtViewIndex;
}

/*
==============
CG_CalloutMarkerPing_GetObjectiveStringForScriptable
==============
*/
const char *CG_CalloutMarkerPing_GetObjectiveStringForScriptable(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  unsigned __int8 v4; 
  const ObjectiveSettings *v5; 
  const char *v6; 
  const char *v7; 
  int v8; 
  ClConfigStrings *ClConfigStrings; 
  __int64 v11; 
  vec3_t out_origin; 

  if ( !ScriptableCl_ObjectiveActiveForInstance(localClientNum, scriptableIndex) )
    return 0i64;
  v4 = ScriptableCl_ObjectiveGetForInstance(localClientNum, scriptableIndex);
  v5 = ScriptableCl_ObjectiveGet(localClientNum, v4, &out_origin);
  if ( !v5 )
  {
    v6 = "obj";
    v7 = "(obj)";
    v8 = 1509;
LABEL_6:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", v8, ASSERT_TYPE_ASSERT, v7, (const char *)&queryFormat, v6, -2i64) )
      __debugbreak();
    memset(&out_origin, 0, sizeof(out_origin));
    return 0i64;
  }
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  if ( !ClConfigStrings )
  {
    v6 = "cs";
    v7 = "(cs)";
    v8 = 1513;
    goto LABEL_6;
  }
  v11 = ClConfigStrings->GetLocalizedString(ClConfigStrings, v5->description);
  memset(&out_origin, 0, sizeof(out_origin));
  return (const char *)v11;
}

/*
==============
CG_CalloutMarkerPing_GetTacmapIconSize
==============
*/
__int64 CG_CalloutMarkerPing_GetTacmapIconSize(LocalClientNum_t localClientNum, const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view)
{
  __int64 result; 

  result = 0i64;
  if ( (unsigned __int8)(pool - 1) <= 2u )
    return 3i64;
  return result;
}

/*
==============
CG_CalloutMarkerPing_GetTacmapLookAtScale
==============
*/
float CG_CalloutMarkerPing_GetTacmapLookAtScale(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v2; 
  cg_t *v3; 
  float value; 
  const dvar_t *v5; 
  float v6; 
  const dvar_t *v7; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v2 = DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_basis;
  v3 = LocalClientGlobals;
  if ( !DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_basis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_calloutmarkerping_iconpulse_basis") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v5 = DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_frequency;
  if ( !DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_frequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_calloutmarkerping_iconpulse_frequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = sinf_0((float)v3->time / v5->current.value);
  v7 = DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_amplitude;
  if ( !DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_amplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_calloutmarkerping_iconpulse_amplitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return (float)(v6 * v7->current.value) + value;
}

/*
==============
CG_CalloutMarkerPing_GetTacmapWorldPos
==============
*/
void CG_CalloutMarkerPing_GetTacmapWorldPos(LocalClientNum_t localClientNum, vec3_t *outPosition, vec3_t *outDirection)
{
  cg_t *LocalClientGlobals; 
  float v6; 
  const dvar_t *v7; 
  vec2_t outWorldPosition; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_CompassFullToWorld(LocalClientGlobals, &LocalClientGlobals->locationSelectorCursor, &outWorldPosition);
  v6 = outWorldPosition.v[1];
  outPosition->v[0] = outWorldPosition.v[0];
  outPosition->v[1] = v6;
  v7 = DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height;
  if ( !DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_tacmap_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  LODWORD(outPosition->v[2]) = v7->current.integer;
  *(_QWORD *)outDirection->v = 0i64;
  outDirection->v[2] = -1.0;
}

/*
==============
CG_CalloutMarkerPing_GetTeammateConfirmed
==============
*/
bool CG_CalloutMarkerPing_GetTeammateConfirmed(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, int teammateIndex)
{
  char v3; 

  v3 = teammateIndex;
  if ( teammateIndex > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2611, ASSERT_TYPE_ASSERT, "(teammateIndex <= 4)", (const char *)&queryFormat, "teammateIndex <= MAX_PLAYER_TEAM_BR") )
    __debugbreak();
  return ((unsigned __int8)(1 << v3) & view->origin.feedback) != 0;
}

/*
==============
CG_CalloutMarkerPing_GetTeammateIndex
==============
*/
__int64 CG_CalloutMarkerPing_GetTeammateIndex(LocalClientNum_t localClientNum, int clientNum)
{
  CgStatic *LocalClientStatics; 
  unsigned int v4; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v4 = LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum)->game_extrainfo & 7;
  if ( v4 > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2621, ASSERT_TYPE_ASSERT, "(teammateIndex >= 0 && teammateIndex <= 4)", (const char *)&queryFormat, "teammateIndex >= 0 && teammateIndex <= MAX_PLAYER_TEAM_BR") )
    __debugbreak();
  return v4;
}

/*
==============
CG_CalloutMarkerPing_GetVehicleMedia
==============
*/
CompassVehicleMedia *CG_CalloutMarkerPing_GetVehicleMedia(LocalClientNum_t localClientNum, __int16 entNum)
{
  centity_t *Entity; 
  const centity_t *v4; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *ClientSafeConst; 
  const VehicleClient *v7; 
  unsigned int defIndex; 
  __int64 v10; 

  if ( (unsigned __int16)(entNum - 2046) <= 1u )
    return 0i64;
  Entity = CG_GetEntity(localClientNum, entNum);
  v4 = Entity;
  if ( !Entity || !BG_IsVehicleEntity(&Entity->nextState) )
    return 0i64;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 503, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  ClientSafeConst = CgVehicleSystem::GetClientSafeConst(VehicleSystem, v4);
  v7 = ClientSafeConst;
  if ( !ClientSafeConst )
    return 0i64;
  defIndex = ClientSafeConst->defIndex;
  if ( defIndex >= 0x80 )
  {
    LODWORD(v10) = defIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 510, ASSERT_TYPE_ASSERT, "(unsigned)( vehicleClient->defIndex ) < (unsigned)( 128 )", "vehicleClient->defIndex doesn't index MAX_VEHICLE_DEF_GAME_CACHE\n\t%i not in [0, %i)", v10, 128) )
      __debugbreak();
  }
  return &cgMedia.compass.vehicleMediaArray[v7->defIndex];
}

/*
==============
CG_CalloutMarkerPing_GetView
==============
*/
CG_CalloutMarkerPingPredicted *CG_CalloutMarkerPing_GetView(LocalClientNum_t localClientNum, unsigned __int8 viewIndex, const playerState_s *const ps)
{
  __int64 v3; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2034, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( viewIndex >= 0x35u )
  {
    LODWORD(v8) = 53;
    LODWORD(v7) = viewIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2035, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( CG_CALLOUTMARKERPING_VIEW_INDEX_MAX )", "viewIndex doesn't index CG_CALLOUTMARKERPING_VIEW_INDEX_MAX\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2036, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( viewIndex == 52 )
    return &s_calloutMarkerPingData[v3].predicted;
  else
    return (CG_CalloutMarkerPingPredicted *)&ps->calloutMarkerPings[viewIndex];
}

/*
==============
CG_CalloutMarkerPing_GetZOffset
==============
*/
float CG_CalloutMarkerPing_GetZOffset(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum)
{
  int v6; 
  cg_t *LocalClientGlobals; 
  __int64 x; 
  unsigned __int8 v9; 
  const ObjectiveSettings *v10; 
  vec3_t out_origin; 

  if ( pool == CONST_CALLOUT_POOL_ID_REQUEST )
    return (float)view->origin.x;
  if ( pool == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(pool - 4) <= 2u )
    return (float)view->origin.y;
  if ( (unsigned __int8)pool <= CONST_CALLOUT_POOL_ID_DANGER_3 )
    return FLOAT_60_0;
  LOBYTE(v6) = CG_CalloutMarkerPing_ClassifyPing(localClientNum, pool, view);
  if ( (unsigned int)(v6 - 20) <= 1 )
    return FLOAT_48_0;
  if ( ((v6 - 14) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v6 - 18) <= 1 )
    {
      v9 = ScriptableCl_ObjectiveGetForInstance(localClientNum, view->scriptable.index);
      v10 = ScriptableCl_ObjectiveGet(localClientNum, v9, &out_origin);
      if ( v10 && ((v10->state - 2) & 0xFD) == 0 )
        return (float)v10->zOffset;
      return FLOAT_72_0;
    }
    if ( v6 == 4 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      x = view->origin.x;
      if ( (cg_t *)((char *)LocalClientGlobals + x * 172) != (cg_t *)-4728i64 && ((LocalClientGlobals->predictedPlayerState.objectives[x].state - 2) & 0xFD) == 0 )
        return (float)LocalClientGlobals->predictedPlayerState.objectives[x].zOffset;
      return FLOAT_72_0;
    }
    if ( v6 != 17 )
    {
      if ( v6 != 22 )
        return 0.0;
      return FLOAT_72_0;
    }
  }
  return FLOAT_32_0;
}

/*
==============
CG_CalloutMarkerPing_HasOvalBackgroundOnMap
==============
*/
bool CG_CalloutMarkerPing_HasOvalBackgroundOnMap(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum)
{
  int v3; 
  bool result; 

  LOBYTE(v3) = CG_CalloutMarkerPing_ClassifyPing(localClientNum, pool, view);
  switch ( v3 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 10:
    case 11:
    case 13:
    case 17:
    case 19:
    case 20:
    case 21:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

/*
==============
CG_CalloutMarkerPing_Init
==============
*/
void CG_CalloutMarkerPing_Init(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const ScriptableDef *v2; 
  __int64 v3; 
  bool *p_newsFeedPending; 
  const ScriptableDef *NetConstStringDefAtIndex; 
  const ScriptableDef *v6; 
  const ScriptableDef *v7; 
  const ScriptableDef *v8; 
  const ScriptableDef *v9; 
  const ScriptableDef *v10; 
  const ScriptableDef *v11; 
  const ScriptableDef *v12; 
  unsigned int outIndex; 

  v1 = localClientNum;
  v2 = NULL;
  s_calloutMarkerPingData[v1].tacmapLookAt.entityIndex = 2047;
  v3 = 53i64;
  s_calloutMarkerPingData[v1].pingLookAtViewIndex = 53;
  s_calloutMarkerPingData[v1].tacmapLookAt.pingIndex = 53;
  s_calloutMarkerPingData[v1].tacmapLookAt.scriptableIndex = -1;
  s_calloutMarkerPingData[v1].tacmapLookAt.objectiveIndex = -1;
  *(_QWORD *)&s_calloutMarkerPingData[v1].squadMateCount = 0i64;
  s_calloutMarkerPingData[v1].predicted.view = 0i64;
  *(_QWORD *)&s_calloutMarkerPingData[v1].predicted.pool = 0i64;
  *(_QWORD *)&s_calloutMarkerPingData[v1].predicted.sentToServerTime = 0i64;
  *(_QWORD *)&s_calloutMarkerPingData[v1].predicted.isTentative = 0i64;
  *(_QWORD *)&s_calloutMarkerPingData[v1].predictedPrev.view.request.inventorySlot = 0i64;
  *(_QWORD *)&s_calloutMarkerPingData[v1].predictedPrev.createdTime = 0i64;
  *(_QWORD *)&s_calloutMarkerPingData[v1].predictedPrev.sentToServerSequence = 0i64;
  p_newsFeedPending = &s_calloutMarkerPingData[v1].markers[0].newsFeedPending;
  s_calloutMarkerPingData[v1].predicted.feedbackViewIndex = 53;
  s_calloutMarkerPingData[v1].lastPredictedViewIndex = 53;
  s_calloutMarkerPingData[v1].lastPredictedPool = CONST_CALLOUT_POOL_SIZE;
  do
  {
    *((_DWORD *)p_newsFeedPending - 1) = 0;
    *p_newsFeedPending = 0;
    *(_QWORD *)(p_newsFeedPending + 4) = 0i64;
    p_newsFeedPending += 16;
    --v3;
  }
  while ( v3 );
  if ( CG_CalloutMarkerPing_SystemActive() )
  {
    if ( NetConstStrings_AreStringsLoaded() )
    {
      if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, "equip_fulton_mp", &outIndex) )
      {
        NetConstStringDefAtIndex = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
      }
      else
      {
        Com_PrintError(0, "[CG_CalloutMarkerPing] '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", "equip_fulton_mp");
        NetConstStringDefAtIndex = NULL;
      }
    }
    else
    {
      NetConstStringDefAtIndex = NULL;
    }
    s_calloutMarkerPingData[v1].scriptableDef_equip_fulton_mp = NetConstStringDefAtIndex;
    if ( NetConstStrings_AreStringsLoaded() )
    {
      if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, "military_ammo_restock", &outIndex) )
      {
        v6 = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
      }
      else
      {
        Com_PrintError(0, "[CG_CalloutMarkerPing] '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", "military_ammo_restock");
        v6 = NULL;
      }
    }
    else
    {
      v6 = NULL;
    }
    s_calloutMarkerPingData[v1].scriptableDef_military_ammo_restock = v6;
    if ( NetConstStrings_AreStringsLoaded() )
    {
      if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, "br_carriable_propane", &outIndex) )
      {
        v7 = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
      }
      else
      {
        Com_PrintError(0, "[CG_CalloutMarkerPing] '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", "br_carriable_propane");
        v7 = NULL;
      }
    }
    else
    {
      v7 = NULL;
    }
    s_calloutMarkerPingData[v1].scriptableDef_equip_gascan_propaneJar = v7;
    if ( NetConstStrings_AreStringsLoaded() )
    {
      if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, "br_carriable_neurotoxin", &outIndex) )
      {
        v8 = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
      }
      else
      {
        Com_PrintError(0, "[CG_CalloutMarkerPing] '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", "br_carriable_neurotoxin");
        v8 = NULL;
      }
    }
    else
    {
      v8 = NULL;
    }
    s_calloutMarkerPingData[v1].scriptableDef_equip_gascan_neurotoxinJar = v8;
    if ( NetConstStrings_AreStringsLoaded() )
    {
      if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, "ks_scrambler_drone_mp", &outIndex) )
      {
        v9 = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
      }
      else
      {
        Com_PrintError(0, "[CG_CalloutMarkerPing] '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", "ks_scrambler_drone_mp");
        v9 = NULL;
      }
    }
    else
    {
      v9 = NULL;
    }
    s_calloutMarkerPingData[v1].scriptableDef_killstreak_CUAV = v9;
    if ( NetConstStrings_AreStringsLoaded() )
    {
      if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, "br_cargotrain", &outIndex) )
      {
        v10 = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
      }
      else
      {
        Com_PrintError(0, "[CG_CalloutMarkerPing] '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", "br_cargotrain");
        v10 = NULL;
      }
    }
    else
    {
      v10 = NULL;
    }
    s_calloutMarkerPingData[v1].scriptableDef_cargotrain = v10;
    if ( NetConstStrings_AreStringsLoaded() )
    {
      if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, "br_cargotrain_engine", &outIndex) )
      {
        v11 = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
      }
      else
      {
        Com_PrintError(0, "[CG_CalloutMarkerPing] '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", "br_cargotrain_engine");
        v11 = NULL;
      }
    }
    else
    {
      v11 = NULL;
    }
    s_calloutMarkerPingData[v1].scriptableDef_cargotrain_engine = v11;
    if ( NetConstStrings_AreStringsLoaded() )
    {
      if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, "veh8_mil_lnd_br_train_locomotive", &outIndex) )
      {
        v12 = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
      }
      else
      {
        Com_PrintError(0, "[CG_CalloutMarkerPing] '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", "veh8_mil_lnd_br_train_locomotive");
        v12 = NULL;
      }
    }
    else
    {
      v12 = NULL;
    }
    s_calloutMarkerPingData[v1].scriptableDef_br_train_locomotive = v12;
    if ( NetConstStrings_AreStringsLoaded() )
    {
      if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, "veh8_mil_lnd_br_train_flatbed", &outIndex) )
        v2 = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
      else
        Com_PrintError(0, "[CG_CalloutMarkerPing] '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", "veh8_mil_lnd_br_train_flatbed");
    }
    s_calloutMarkerPingData[v1].scriptableDef_br_train_flatbed = v2;
    NetConstStrings_GetIndexPlusOneFromName(NETCONSTSTRINGTYPE_XMODEL, "offhand_wm_container_gas_tank_01", &s_calloutMarkerPingData[v1].xmodelIndexForPropaneJar);
    NetConstStrings_GetIndexPlusOneFromName(NETCONSTSTRINGTYPE_XMODEL, "offhand_wm_container_gas_tank_02", &s_calloutMarkerPingData[v1].xmodelIndexForNeurotoxinJar);
  }
}

/*
==============
CG_CalloutMarkerPing_InitTraceSightIgnoreList
==============
*/
void CG_CalloutMarkerPing_InitTraceSightIgnoreList(const LocalClientNum_t localClientNum, __int16 *ignoreEnts, int *numIgnoreEnts)
{
  centity_t *TurretEntity; 
  centity_t *v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !ignoreEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3172, ASSERT_TYPE_ASSERT, "(ignoreEnts)", (const char *)&queryFormat, "ignoreEnts") )
    __debugbreak();
  if ( *numIgnoreEnts < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3173, ASSERT_TYPE_ASSERT, "( numIgnoreEnts ) >= ( 0 )", "%s >= %s\n\t%i, %i", "numIgnoreEnts", "0", *numIgnoreEnts, 0i64) )
    __debugbreak();
  TurretEntity = CG_GetTurretEntity(localClientNum);
  v7 = TurretEntity;
  if ( TurretEntity && (TurretEntity->flags & 1) != 0 )
  {
    if ( (unsigned int)*numIgnoreEnts >= 4 )
    {
      LODWORD(v9) = 4;
      LODWORD(v8) = *numIgnoreEnts;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3178, ASSERT_TYPE_ASSERT, "(unsigned)( numIgnoreEnts ) < (unsigned)( TRACE_SIGHT_IGNORE_ENTS_ARRAY_SIZE )", "numIgnoreEnts doesn't index TRACE_SIGHT_IGNORE_ENTS_ARRAY_SIZE\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    ignoreEnts[(*numIgnoreEnts)++] = v7->nextState.number;
  }
}

/*
==============
CG_CalloutMarkerPing_IsEntityAlive
==============
*/
bool CG_CalloutMarkerPing_IsEntityAlive(LocalClientNum_t localClientNum, __int16 entNum)
{
  centity_t *Entity; 

  Entity = CG_GetEntity(localClientNum, entNum);
  return (Entity->flags & 1) != 0 && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 0x11u);
}

/*
==============
CG_CalloutMarkerPing_IsInPrematch
==============
*/
bool CG_CalloutMarkerPing_IsInPrematch(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    return 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  Data = CG_Omnvar_GetData(localClientNum, LocalClientGlobals->m_omnvarIndexScriptableLootHide);
  Def = BG_Omnvar_GetDef(LocalClientGlobals->m_omnvarIndexScriptableLootHide);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( Def->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
    __debugbreak();
  return Def->type == OMNVAR_TYPE_BOOL && Data->current.enabled;
}

/*
==============
CG_CalloutMarkerPing_MarkDataConsumed
==============
*/
void CG_CalloutMarkerPing_MarkDataConsumed(const LocalClientNum_t localClientNum)
{
  s_calloutMarkerPingData[localClientNum].dirty = 0;
}

/*
==============
CG_CalloutMarkerPing_OnBeginDrawActiveFrame
==============
*/
void CG_CalloutMarkerPing_OnBeginDrawActiveFrame(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  bool executeMarkNextFrame; 
  bool isTentative; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5075, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5078, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  executeMarkNextFrame = LocalClientGlobals->calloutMarkerInfo.executeMarkNextFrame;
  isTentative = LocalClientGlobals->calloutMarkerInfo.isTentative;
  *(_WORD *)&LocalClientGlobals->calloutMarkerInfo.executeMarkThisFrame = 0;
  LocalClientGlobals->calloutMarkerInfo.executeMarkNextFrame = 0;
  if ( executeMarkNextFrame )
  {
    LocalClientGlobals->calloutMarkerInfo.executeMarkThisFrame = 1;
    LocalClientGlobals->calloutMarkerInfo.isTentative = isTentative;
  }
}

/*
==============
CG_CalloutMarkerPing_PickContextualTarget
==============
*/
void CG_CalloutMarkerPing_PickContextualTarget(const LocalClientNum_t localClientNum, const vec3_t *viewPos, const tmat33_t<vec3_t> *viewAxis, CalloutMarkerPingScore *outPingScore)
{
  const dvar_t *v4; 
  float value; 
  const dvar_t *v10; 
  float traceRadius; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  int v14; 

  v4 = DCONST_DVARFLT_calloutmarkerping_trace_entity_distance;
  if ( !DCONST_DVARFLT_calloutmarkerping_trace_entity_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_entity_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v10 = DCONST_DVARFLT_calloutmarkerping_trace_entity_radius;
  if ( !DCONST_DVARFLT_calloutmarkerping_trace_entity_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_entity_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  traceRadius = v10->current.value;
  v12 = DVARBOOL_calloutmarkerping_enableLongRangeEnemyPing;
  if ( !DVARBOOL_calloutmarkerping_enableLongRangeEnemyPing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_enableLongRangeEnemyPing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    CG_CalloutMarkerPing_PickContextualTarget_CollectAndScore(localClientNum, viewPos, viewAxis, 16768, value, traceRadius, outPingScore);
    v13 = DVARFLT_calloutmarkerping_longRangeEnemyPing;
    if ( !DVARFLT_calloutmarkerping_longRangeEnemyPing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_longRangeEnemyPing") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    value = v13->current.value;
    v14 = 41943040;
  }
  else
  {
    v14 = 41959808;
  }
  CG_CalloutMarkerPing_PickContextualTarget_CollectAndScore(localClientNum, viewPos, viewAxis, v14, value, traceRadius, outPingScore);
}

/*
==============
CG_CalloutMarkerPing_PickContextualTarget_CollectAndScore
==============
*/
void CG_CalloutMarkerPing_PickContextualTarget_CollectAndScore(const LocalClientNum_t localClientNum, const vec3_t *viewPos, const tmat33_t<vec3_t> *viewAxis, const int contents, const float traceDistance, const float traceRadius, CalloutMarkerPingScore *outPingScore)
{
  signed __int64 v7; 
  __int128 v8; 
  __int128 v9; 
  void *v10; 
  __int32 v11; 
  const dvar_t *v15; 
  float v16; 
  float value; 
  float v18; 
  float v19; 
  unsigned int i; 
  unsigned int v21; 
  int v22; 
  int v23; 
  float v24; 
  unsigned int j; 
  __int16 v26; 
  int v27; 
  int v28; 
  const centity_t *Entity; 
  float v30; 
  float v31; 
  unsigned __int8 v32; 
  const ObjectiveSettings *v33; 
  const ObjectiveSettings *v34; 
  const dvar_t *v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  __int128 v40; 
  float v44; 
  float v45; 
  float v46; 
  const dvar_t *v47; 
  float v48; 
  int v49; 
  float *v50; 
  const dvar_t *v51; 
  float v52; 
  float v53; 
  __int128 v54; 
  float v55; 
  float v59; 
  LocalClientNum_t v60; 
  unsigned int Count; 
  unsigned int k; 
  unsigned int v63; 
  int v64; 
  int v65; 
  float v66; 
  unsigned __int8 v67; 
  unsigned int scriptableIndex; 
  LocalClientNum_t localClientNuma; 
  PhysicsQuery_Collected<unsigned int> collectedScriptables; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  cg_t *LocalClientGlobals; 
  vec3_t origin; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  Bounds baseBounds; 
  Bounds rotatedBounds; 
  char v79; 
  char v80; 
  __int128 v81; 
  __int128 v82; 

  v10 = alloca(v7);
  v11 = 3 * localClientNum + 2;
  collectedEnts.ids = (unsigned __int16 *)&v80;
  collectedScriptables.ids = (unsigned int *)&v79;
  localClientNuma = localClientNum;
  collectedEnts.count = 0;
  collectedEnts.countMax = 2048;
  collectedScriptables.count = 0;
  collectedScriptables.countMax = 2048;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4679, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v15 = DCONST_DVARFLT_calloutmarkerping_lookat_objective_icon_dot;
  if ( !DCONST_DVARFLT_calloutmarkerping_lookat_objective_icon_dot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_lookat_objective_icon_dot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = COERCE_FLOAT(LODWORD(traceRadius) ^ _xmm) * viewAxis->m[0].v[1];
  value = v15->current.value;
  origin.v[0] = (float)(COERCE_FLOAT(LODWORD(traceRadius) ^ _xmm) * viewAxis->m[0].v[0]) + viewPos->v[0];
  v18 = v16 + viewPos->v[1];
  v19 = COERCE_FLOAT(LODWORD(traceRadius) ^ _xmm) * viewAxis->m[0].v[2];
  origin.v[1] = v18;
  origin.v[2] = v19 + viewPos->v[2];
  baseBounds.midPoint.v[0] = (float)(traceDistance * 0.5) + traceRadius;
  baseBounds.halfSize.v[0] = baseBounds.midPoint.v[0];
  baseBounds.midPoint.v[1] = 0.0;
  baseBounds.midPoint.v[2] = 0.0;
  baseBounds.halfSize.v[1] = traceRadius;
  baseBounds.halfSize.v[2] = traceRadius;
  Bounds_Transform(&baseBounds, &origin, viewAxis, &rotatedBounds);
  aabbMin.v[0] = rotatedBounds.midPoint.v[0] - rotatedBounds.halfSize.v[0];
  aabbMin.v[1] = rotatedBounds.midPoint.v[1] - rotatedBounds.halfSize.v[1];
  aabbMin.v[2] = rotatedBounds.midPoint.v[2] - rotatedBounds.halfSize.v[2];
  aabbMax.v[0] = rotatedBounds.midPoint.v[0] + rotatedBounds.halfSize.v[0];
  aabbMax.v[1] = rotatedBounds.midPoint.v[1] + rotatedBounds.halfSize.v[1];
  aabbMax.v[2] = rotatedBounds.midPoint.v[2] + rotatedBounds.halfSize.v[2];
  PhysicsQuery_ImmediateAABBBroadphaseQuery((Physics_WorldId)v11, &aabbMin, &aabbMax, contents, 1u, &LocalClientGlobals->predictedPlayerState.clientNum, &collectedEnts, &collectedScriptables, 1);
  for ( i = 0; i < collectedScriptables.count; ++i )
  {
    v21 = collectedScriptables.ids[i];
    v22 = CG_CalloutMarkerPing_ClassifyScriptable(localClientNum, v21);
    v23 = v22;
    if ( v22 > 1 )
    {
      v24 = CG_CalloutMarkerPing_ScoreScriptable(localClientNum, 1, outPingScore->bestScore, viewPos, viewAxis->m, traceDistance, traceRadius, v21, (CalloutMarkerPingType)v22);
      if ( v24 > outPingScore->bestScore )
      {
        outPingScore->bestScore = v24;
        outPingScore->bestScriptable = v21;
        outPingScore->bestEntNum = 2047;
        *(_DWORD *)outPingScore->bestType = v23;
      }
    }
  }
  for ( j = 0; j < collectedEnts.count; ++j )
  {
    v26 = collectedEnts.ids[j];
    if ( v26 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4722, ASSERT_TYPE_ASSERT, "(entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entNum != ENTITYNUM_NONE") )
      __debugbreak();
    if ( (unsigned __int16)v26 < 0x7FEu )
    {
      LOBYTE(v27) = CG_CalloutMarkerPing_ClassifyEntity(localClientNum, v26);
      v28 = v27;
      if ( v27 > 1 )
      {
        if ( v27 < 14 )
        {
          v31 = CG_CalloutMarkerPing_ScoreEntity(localClientNum, 1, outPingScore->bestScore, viewPos, viewAxis->m, traceDistance, traceRadius, v26, (CalloutMarkerPingType)v27);
          if ( v31 > outPingScore->bestScore )
          {
            outPingScore->bestScore = v31;
            outPingScore->bestScriptable = -1;
            outPingScore->bestEntNum = v26;
            *(_DWORD *)outPingScore->bestType = v28;
          }
        }
        else
        {
          Entity = CG_GetEntity(localClientNum, v26);
          if ( ScriptableCl_GetIndexForEntity(localClientNum, Entity, &scriptableIndex) )
          {
            v30 = CG_CalloutMarkerPing_ScoreScriptable(localClientNum, 1, outPingScore->bestScore, viewPos, viewAxis->m, traceDistance, traceRadius, scriptableIndex, (CalloutMarkerPingType)v28);
            if ( v30 > outPingScore->bestScore )
            {
              outPingScore->bestScriptable = scriptableIndex;
              outPingScore->bestScore = v30;
              outPingScore->bestEntNum = 2047;
              *(_DWORD *)outPingScore->bestType = v28;
            }
          }
        }
      }
    }
  }
  if ( !CG_CalloutMarkerPing_IsInPrematch(localClientNum) )
  {
    v32 = 0;
    v67 = ScriptableCl_ObjectiveCount(localClientNum);
    if ( v67 )
    {
      v82 = v8;
      v81 = v9;
      do
      {
        v33 = ScriptableCl_ObjectiveGet(localClientNum, v32, &origin);
        v34 = v33;
        if ( !v33 || ((v33->state - 2) & 0xFD) != 0 || (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) != DODGE )
          goto LABEL_41;
        v35 = DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives;
        if ( !DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_hit_objectives") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v35);
        if ( !v35->current.enabled )
          goto LABEL_41;
        v36 = origin.v[0] - viewPos->v[0];
        v37 = _mm_cvtepi32_ps((__m128i)(unsigned int)v34->zOffset).m128_f32[0];
        v38 = (float)(v37 + origin.v[2]) - viewPos->v[2];
        v40 = LODWORD(origin.v[1]);
        v39 = origin.v[1] - viewPos->v[1];
        origin.v[2] = v37 + origin.v[2];
        *(float *)&v40 = fsqrt((float)((float)(v39 * v39) + (float)(v36 * v36)) + (float)(v38 * v38));
        _XMM7 = v40;
        __asm
        {
          vcmpless xmm0, xmm7, xmm14
          vblendvps xmm0, xmm7, xmm13, xmm0
        }
        v44 = v36 * (float)(1.0 / *(float *)&_XMM0);
        v45 = v39 * (float)(1.0 / *(float *)&_XMM0);
        v46 = v38 * (float)(1.0 / *(float *)&_XMM0);
        if ( v34->alwaysShowInWorld )
          goto LABEL_40;
        v47 = DVARFLT_lui_objective_fadeEnd;
        if ( !DVARFLT_lui_objective_fadeEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_fadeEnd") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v47);
        if ( *(float *)&_XMM7 <= v47->current.value )
LABEL_40:
          v48 = (float)((float)(v45 * viewAxis->m[0].v[1]) + (float)(v44 * viewAxis->m[0].v[0])) + (float)(v46 * viewAxis->m[0].v[2]);
        else
LABEL_41:
          v48 = 0.0;
        if ( v48 > outPingScore->bestScore && v48 > value )
        {
          *(_DWORD *)outPingScore->bestType = 18;
          outPingScore->bestScore = v48;
          outPingScore->bestScriptable = ScriptableCl_ObjectiveGetInstanceIndex(localClientNum, v32);
          outPingScore->bestEntNum = 2047;
          outPingScore->bestGSCObjective = -1;
        }
        ++v32;
      }
      while ( v32 < v67 );
    }
  }
  v49 = 0;
  v50 = &LocalClientGlobals->predictedPlayerState.objectives[0].origin[0].v[2];
  do
  {
    if ( v50 == (float *)40 || (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) != DODGE )
      goto LABEL_57;
    v51 = DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives;
    if ( !DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_hit_objectives") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    if ( v51->current.enabled && ((*((_BYTE *)v50 + 119) - 2) & 0xFD) == 0 && *((char *)v50 + 116) >= 0 && *((_DWORD *)v50 - 10) == 2047 )
    {
      v52 = *(v50 - 2) - viewPos->v[0];
      v54 = *((unsigned int *)v50 - 1);
      v53 = *(v50 - 1) - viewPos->v[1];
      v55 = *v50 - viewPos->v[2];
      *(float *)&v54 = fsqrt((float)((float)(v53 * v53) + (float)(v52 * v52)) + (float)(v55 * v55));
      _XMM1 = v54;
      __asm
      {
        vcmpless xmm0, xmm1, xmm14
        vblendvps xmm0, xmm1, xmm13, xmm0
      }
      v59 = (float)((float)((float)(v53 * (float)(1.0 / *(float *)&_XMM0)) * viewAxis->m[0].v[1]) + (float)((float)(v52 * (float)(1.0 / *(float *)&_XMM0)) * viewAxis->m[0].v[0])) + (float)((float)(v55 * (float)(1.0 / *(float *)&_XMM0)) * viewAxis->m[0].v[2]);
    }
    else
    {
LABEL_57:
      v59 = 0.0;
    }
    if ( v59 > outPingScore->bestScore && v59 > value )
    {
      *(_DWORD *)outPingScore->bestType = 4;
      outPingScore->bestEntNum = 2047;
      outPingScore->bestScore = v59;
      outPingScore->bestScriptable = -1;
      outPingScore->bestGSCObjective = v49;
    }
    ++v49;
    v50 += 43;
  }
  while ( v49 < 32 );
  v60 = localClientNuma;
  if ( !CG_CalloutMarkerPing_IsInPrematch(localClientNuma) )
  {
    Count = ScriptableCl_Spatial_ActiveList_GetCount(v60);
    if ( Count )
    {
      for ( k = 0; k < Count; ++k )
      {
        v63 = ScriptableCl_Spatial_ActiveList_GetAtIndex(v60, k);
        v64 = CG_CalloutMarkerPing_ClassifyScriptable(v60, v63);
        v65 = v64;
        if ( ((v64 - 14) & 0xFFFFFFFC) == 0 && v64 != 15 )
        {
          v66 = CG_CalloutMarkerPing_ScoreScriptable(v60, 1, outPingScore->bestScore, viewPos, viewAxis->m, traceDistance, traceRadius, v63, (CalloutMarkerPingType)v64);
          if ( v66 > outPingScore->bestScore )
          {
            outPingScore->bestScriptable = v63;
            outPingScore->bestEntNum = 2047;
            outPingScore->bestScore = v66;
            *(_DWORD *)outPingScore->bestType = v65;
            outPingScore->bestGSCObjective = -1;
          }
        }
      }
    }
  }
}

/*
==============
CG_CalloutMarkerPing_Predicted_Cancel
==============
*/
void CG_CalloutMarkerPing_Predicted_Cancel(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4282, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = v1;
  if ( (s_calloutMarkerPingData[v1].predicted.view.origin.owner || s_calloutMarkerPingData[v2].predicted.feedbackViewIndex != 53) && s_calloutMarkerPingData[v2].predicted.isTentative )
  {
    *(_WORD *)&s_calloutMarkerPingData[v2].predicted.pool = 13581;
    s_calloutMarkerPingData[v2].predicted.createdTime = 0;
    *(_QWORD *)&s_calloutMarkerPingData[v2].predicted.sentToServerSequence = 0i64;
    s_calloutMarkerPingData[v2].predicted.view = 0i64;
    s_calloutMarkerPingData[v2].dirty = 1;
  }
}

/*
==============
CG_CalloutMarkerPing_Predicted_Commit
==============
*/
void CG_CalloutMarkerPing_Predicted_Commit(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  bool v3; 
  int v5; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4248, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  v2 = v1;
  if ( (s_calloutMarkerPingData[v1].predicted.view.origin.owner || s_calloutMarkerPingData[v2].predicted.feedbackViewIndex != 53) && s_calloutMarkerPingData[v2].predicted.isTentative )
  {
    v3 = !s_calloutMarkerPingData[v2].predicted.isDoubleTap;
    s_calloutMarkerPingData[v2].predicted.isTentative = 0;
    if ( !v3 )
    {
      if ( s_calloutMarkerPingData[v2].predicted.isMarkedForDeletion )
      {
        *(_WORD *)&s_calloutMarkerPingData[v2].predicted.pool = 13581;
        s_calloutMarkerPingData[v2].predicted.createdTime = 0;
        *(_QWORD *)&s_calloutMarkerPingData[v2].predicted.sentToServerSequence = 0i64;
        s_calloutMarkerPingData[v2].predicted.view = 0i64;
      }
      else
      {
        CG_CalloutMarkerPing_Predicted_SendToServer((LocalClientNum_t)v1);
      }
    }
  }
}

/*
==============
CG_CalloutMarkerPing_Predicted_CreateAtEntity
==============
*/
void CG_CalloutMarkerPing_Predicted_CreateAtEntity(LocalClientNum_t localClientNum, CalloutMarkerPingPool pool, __int16 entNum, char xOffset, char yOffset, __int16 zOffset, const bool isTentative)
{
  __int64 v7; 
  __int64 v11; 

  v7 = localClientNum;
  if ( entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4195, ASSERT_TYPE_ASSERT, "(entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( pool == CONST_CALLOUT_POOL_SIZE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4196, ASSERT_TYPE_ASSERT, "(pool != CalloutMarkerPingPool::CONST_CALLOUT_POOL_INVALID)", (const char *)&queryFormat, "pool != CalloutMarkerPingPool::CONST_CALLOUT_POOL_INVALID") )
    __debugbreak();
  if ( !BG_CalloutMarkerPingPoolUsesEnt(pool) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4197, ASSERT_TYPE_ASSERT, "(BG_CalloutMarkerPingPoolUsesEnt( pool ))", (const char *)&queryFormat, "BG_CalloutMarkerPingPoolUsesEnt( pool )") )
    __debugbreak();
  CG_CalloutMarkerPing_Predicted_CreateViewCommon((LocalClientNum_t)v7, pool);
  v11 = v7;
  s_calloutMarkerPingData[v11].predicted.view.entity.yOffset = yOffset;
  s_calloutMarkerPingData[v11].predicted.view.origin.y = zOffset;
  s_calloutMarkerPingData[v11].predicted.view.origin.x = entNum;
  s_calloutMarkerPingData[v11].predicted.view.entity.xOffset = xOffset;
  s_calloutMarkerPingData[v11].predicted.isTentative = isTentative;
}

/*
==============
CG_CalloutMarkerPing_Predicted_CreateAtGSCObjective
==============
*/
void CG_CalloutMarkerPing_Predicted_CreateAtGSCObjective(LocalClientNum_t localClientNum, const int gscObjectiveIndex, const bool isTentative)
{
  __int64 v3; 
  __int16 v5; 
  __int64 v6; 
  int v8; 

  v3 = localClientNum;
  v5 = gscObjectiveIndex;
  if ( (unsigned int)gscObjectiveIndex >= 0x20 )
  {
    v8 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4216, ASSERT_TYPE_ASSERT, "(unsigned)( gscObjectiveIndex ) < (unsigned)( 32 )", "gscObjectiveIndex doesn't index MAX_OBJECTIVES_PER_PLAYER\n\t%i not in [0, %i)", gscObjectiveIndex, v8) )
      __debugbreak();
  }
  CG_CalloutMarkerPing_Predicted_CreateViewCommon((LocalClientNum_t)v3, CONST_CALLOUT_POOL_ID_WORLD);
  v6 = v3;
  s_calloutMarkerPingData[v6].predicted.view.origin.x = v5;
  s_calloutMarkerPingData[v6].predicted.isTentative = isTentative;
}

/*
==============
CG_CalloutMarkerPing_Predicted_CreateAtOrigin
==============
*/
void CG_CalloutMarkerPing_Predicted_CreateAtOrigin(LocalClientNum_t localClientNum, CalloutMarkerPingPool pool, const vec3_t *origin, const bool isTentative)
{
  __int64 v4; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  v4 = localClientNum;
  if ( pool == CONST_CALLOUT_POOL_SIZE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4226, ASSERT_TYPE_ASSERT, "(pool != CalloutMarkerPingPool::CONST_CALLOUT_POOL_INVALID)", (const char *)&queryFormat, "pool != CalloutMarkerPingPool::CONST_CALLOUT_POOL_INVALID") )
      __debugbreak();
  }
  else if ( (unsigned __int8)pool < CONST_CALLOUT_POOL_ID_ENTITY_1 )
  {
    goto LABEL_7;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4227, ASSERT_TYPE_ASSERT, "(BG_CalloutMarkerPingPoolUsesOrigin( pool ))", (const char *)&queryFormat, "BG_CalloutMarkerPingPoolUsesOrigin( pool )") )
    __debugbreak();
LABEL_7:
  CG_CalloutMarkerPing_Predicted_CreateViewCommon((LocalClientNum_t)v4, pool);
  v8 = v4;
  v9 = (int)(float)(0.5 * origin->v[0]);
  if ( v9 > 0x7FFF )
    v9 = 0x7FFF;
  if ( v9 < -32768 )
    LOWORD(v9) = 0x8000;
  s_calloutMarkerPingData[v8].predicted.view.origin.x = v9;
  v10 = (int)(float)(0.5 * origin->v[1]);
  if ( v10 > 0x7FFF )
    v10 = 0x7FFF;
  if ( v10 < -32768 )
    LOWORD(v10) = 0x8000;
  s_calloutMarkerPingData[v8].predicted.view.origin.y = v10;
  v11 = (int)origin->v[2];
  if ( v11 > 0x7FFF )
    v11 = 0x7FFF;
  if ( v11 < -32768 )
    LOWORD(v11) = 0x8000;
  s_calloutMarkerPingData[v8].predicted.view.origin.z = v11;
  s_calloutMarkerPingData[v8].predicted.isTentative = isTentative;
}

/*
==============
CG_CalloutMarkerPing_Predicted_CreateAtScriptable
==============
*/
void CG_CalloutMarkerPing_Predicted_CreateAtScriptable(LocalClientNum_t localClientNum, unsigned int scriptableIndex, const bool isTentative)
{
  __int64 v3; 
  __int64 v6; 

  v3 = localClientNum;
  if ( scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4185, ASSERT_TYPE_ASSERT, "(scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  CG_CalloutMarkerPing_Predicted_CreateViewCommon((LocalClientNum_t)v3, CONST_CALLOUT_POOL_ID_LOOT_1);
  v6 = v3;
  s_calloutMarkerPingData[v6].predicted.view.scriptable.index = scriptableIndex;
  s_calloutMarkerPingData[v6].predicted.isTentative = isTentative;
}

/*
==============
CG_CalloutMarkerPing_Predicted_CreateFeedback
==============
*/
void CG_CalloutMarkerPing_Predicted_CreateFeedback(LocalClientNum_t localClientNum, unsigned __int8 viewIndex, const bool isTentative)
{
  __int64 v3; 
  __int64 v6; 

  v3 = localClientNum;
  if ( viewIndex == 53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4237, ASSERT_TYPE_ASSERT, "(viewIndex != CG_CALLOUTMARKERPING_VIEW_INDEX_INVALID)", (const char *)&queryFormat, "viewIndex != CG_CALLOUTMARKERPING_VIEW_INDEX_INVALID") )
    __debugbreak();
  v6 = v3;
  s_calloutMarkerPingData[v6].predicted.feedbackViewIndex = viewIndex;
  s_calloutMarkerPingData[v6].predicted.createdTime = 0;
  *(_WORD *)&s_calloutMarkerPingData[v6].predicted.isMarkedForDeletion = 0;
  s_calloutMarkerPingData[v6].predicted.isDoubleTap = 0;
  s_calloutMarkerPingData[v6].predicted.sentToServerSequence = 0;
  *(_WORD *)&s_calloutMarkerPingData[v6].predicted.view.anonymous.feedback = 3328;
  s_calloutMarkerPingData[v6].predicted.view.origin.owner = 0;
  s_calloutMarkerPingData[v6].predicted.view.scriptable.index = 0;
  s_calloutMarkerPingData[v6].predicted.view.origin.z = 0;
  s_calloutMarkerPingData[v6].predicted.isTentative = isTentative;
}

/*
==============
CG_CalloutMarkerPing_Predicted_CreateViewCommon
==============
*/
void CG_CalloutMarkerPing_Predicted_CreateViewCommon(LocalClientNum_t localClientNum, CalloutMarkerPingPool pool)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  __int64 v7; 

  v4 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  *(_WORD *)&s_calloutMarkerPingData[v4].predicted.pool = 13581;
  s_calloutMarkerPingData[v4].predicted.createdTime = 0;
  *(_QWORD *)&s_calloutMarkerPingData[v4].predicted.sentToServerSequence = 0i64;
  s_calloutMarkerPingData[v4].predicted.view = 0i64;
  s_calloutMarkerPingData[v4].predicted.createdTime = LocalClientGlobals->time;
  s_calloutMarkerPingData[v4].predicted.pool = pool;
  s_calloutMarkerPingData[v4].predicted.view.origin.owner = LOBYTE(LocalClientGlobals->clientNum) + 1;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v7 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, LocalClientGlobals->clientNum);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4175, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
    __debugbreak();
  s_calloutMarkerPingData[v4].predicted.view.origin.feedback = 1 << UnpackValue(*(_DWORD *)(v7 + 120), 0, 3u);
  s_calloutMarkerPingData[v4].dirty = 1;
}

/*
==============
CG_CalloutMarkerPing_Predicted_HandleButtonPress
==============
*/
void CG_CalloutMarkerPing_Predicted_HandleButtonPress(LocalClientNum_t localClientNum, const bool isTentativeAction)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  __int64 v5; 
  CgCompassSystem *CompassSystem; 
  cg_t *v7; 
  cg_t *v8; 
  bool v9; 
  int v10; 
  unsigned __int8 pingLookAtViewIndex; 
  __int16 bestEntNum; 
  unsigned int bestScriptable; 
  unsigned __int8 v14; 
  int v15; 
  CalloutMarkerPingPool PoolID; 
  __int16 EntityZOffset; 
  double Float_Internal_DebugName; 
  __int16 v19; 
  centity_t *Entity; 
  float v21; 
  float v22; 
  int v23; 
  int v24; 
  __int16 v25; 
  double v26; 
  CalloutMarkerPingPool v27; 
  __int16 v28; 
  centity_t *v29; 
  float v30; 
  float v31; 
  int v32; 
  __int16 v33; 
  CalloutMarkerPingType *outPingType; 
  CalloutMarkerPingType outEntityNum[4]; 
  CalloutMarkerPingType type[4]; 
  CalloutMarkerPingScore outPingScore; 
  vec3_t outPosition; 
  vec3_t outOrigin; 
  vec3_t outOrg; 
  vec4_t plane; 
  vec3_t traceDir; 
  tmat33_t<vec3_t> axis; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4831, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v5 = v2;
  if ( CG_CalloutMarkerPing_CanPing((const LocalClientNum_t)v2, isTentativeAction) )
  {
    CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)v2);
    if ( CgCompassSystem::GetCurrentCompassType(CompassSystem) == COMPASS_TYPE_TACMAP )
    {
      CG_CalloutMarkerPing_Predicted_HandleButtonPress_TacMap((LocalClientNum_t)v2);
      return;
    }
    if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    {
      CG_CalloutMarkerPing_Predicted_HandleButtonPress_Spectate((const LocalClientNum_t)v2, isTentativeAction);
      return;
    }
    v7 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    RefdefView_GetOrg(&v7->refdef.view, &outOrg);
    v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    v9 = s_calloutMarkerPingData[v5].predicted.view.origin.owner == 0;
    traceDir = v8->refdef.view.axis.m[0];
    if ( v9 )
    {
      pingLookAtViewIndex = s_calloutMarkerPingData[v5].pingLookAtViewIndex;
      if ( pingLookAtViewIndex != 53 )
      {
        CG_CalloutMarkerPing_Predicted_CreateFeedback((LocalClientNum_t)v2, pingLookAtViewIndex, isTentativeAction);
        return;
      }
      outPingScore.bestEntNum = 2047;
      *(_DWORD *)outPingScore.bestType = 1;
      outPingScore.bestScore = 0.0;
      *(_QWORD *)&outPingScore.bestScriptable = -1i64;
      CG_CalloutMarkerPing_PickContextualTarget((const LocalClientNum_t)v2, &outOrg, &LocalClientGlobals->refdef.view.axis, &outPingScore);
      bestEntNum = outPingScore.bestEntNum;
      bestScriptable = outPingScore.bestScriptable;
      v14 = CG_CalloutMarkerPing_CheckSquadPingsForTarget((LocalClientNum_t)v2, outPingScore.bestEntNum, outPingScore.bestScriptable, -1);
      if ( (unsigned __int8)(v14 - 52) > 1u )
      {
        CG_CalloutMarkerPing_Predicted_CreateFeedback((LocalClientNum_t)v2, v14, isTentativeAction);
        return;
      }
      if ( bestEntNum != 2047 )
      {
        v15 = *(_DWORD *)outPingScore.bestType;
        if ( (unsigned int)(*(_DWORD *)outPingScore.bestType - 6) > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4908, ASSERT_TYPE_ASSERT, "(( pingScore.bestType < CalloutMarkerPingType::SCRIPTABLES_BEGIN ) && ( pingScore.bestType >= CalloutMarkerPingType::ENTITIES_BEGIN ))", (const char *)&queryFormat, "( pingScore.bestType < CalloutMarkerPingType::SCRIPTABLES_BEGIN ) && ( pingScore.bestType >= CalloutMarkerPingType::ENTITIES_BEGIN )") )
          __debugbreak();
        PoolID = CG_CalloutMarkerPing_TypeGetPoolID((CalloutMarkerPingType)v15);
        EntityZOffset = CG_CalloutMarkerPing_GetEntityZOffset((LocalClientNum_t)v2, bestEntNum);
        if ( v15 != 13 )
        {
          CG_CalloutMarkerPing_Predicted_CreateAtEntity((LocalClientNum_t)v2, PoolID, bestEntNum, 0, 0, EntityZOffset, isTentativeAction);
          return;
        }
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_calloutmarkerping_trace_solid_distance, "calloutmarkerping_trace_solid_distance");
        *(_DWORD *)outEntityNum = 2;
        if ( CG_CalloutMarkerPing_TraceSolidForNavOrDanger((LocalClientNum_t)v2, &outOrg, &traceDir, *(float *)&Float_Internal_DebugName + outOrg.v[2], (vec3_t *)&plane, outEntityNum, &outPingScore.bestEntNum) && *(_DWORD *)outEntityNum == 13 )
        {
          v19 = outPingScore.bestEntNum;
          Entity = CG_GetEntity((const LocalClientNum_t)v2, outPingScore.bestEntNum);
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          v21 = plane.v[0] - outOrigin.v[0];
          v22 = plane.v[1] - outOrigin.v[1];
          AnglesToAxis(&Entity->pose.angles, &axis);
          v23 = (int)(float)((float)((float)(v22 * axis.m[0].v[1]) + (float)(v21 * axis.m[0].v[0])) * 0.25);
          v24 = (int)(float)((float)((float)(v22 * axis.m[1].v[1]) + (float)(v21 * axis.m[1].v[0])) * 0.25);
          v25 = (int)(float)(plane.v[2] - outOrigin.v[2]) + CG_CalloutMarkerPing_GetEntityZOffset((LocalClientNum_t)v2, v19);
          if ( v19 != 2047 )
          {
            CG_CalloutMarkerPing_Predicted_CreateAtEntity((LocalClientNum_t)v2, PoolID, v19, v23, v24, v25, isTentativeAction);
            return;
          }
        }
        bestScriptable = outPingScore.bestScriptable;
      }
      if ( bestScriptable == -1 )
      {
        if ( outPingScore.bestGSCObjective == -1 )
        {
          v26 = Dvar_GetFloat_Internal_DebugName(DVARFLT_calloutmarkerping_trace_solid_distance, "calloutmarkerping_trace_solid_distance");
          *(_DWORD *)type = 2;
          if ( CG_CalloutMarkerPing_TraceSolidForNavOrDanger((LocalClientNum_t)v2, &outOrg, &traceDir, *(float *)&v26 + outOrg.v[2], &outPosition, type, (__int16 *)outEntityNum) )
          {
            if ( *(_DWORD *)type == 13 )
            {
              v27 = CG_CalloutMarkerPing_TypeGetPoolID(STRUCT_POINTER|INT_VALUE);
              Dvar_GetFloat_Internal_DebugName(DVARFLT_calloutmarkerping_trace_solid_distance, "calloutmarkerping_trace_solid_distance");
              v28 = *(_WORD *)outEntityNum;
              v29 = CG_GetEntity((const LocalClientNum_t)v2, *(__int16 *)outEntityNum);
              CG_GetPoseOrigin(&v29->pose, &outOrigin);
              v30 = outPosition.v[0] - outOrigin.v[0];
              v31 = outPosition.v[1] - outOrigin.v[1];
              AnglesToAxis(&v29->pose.angles, &axis);
              v32 = (int)(float)((float)((float)(v31 * axis.m[0].v[1]) + (float)(v30 * axis.m[0].v[0])) * 0.25);
              LODWORD(v29) = (int)(float)((float)((float)(v31 * axis.m[1].v[1]) + (float)(v30 * axis.m[1].v[0])) * 0.25);
              v33 = CG_CalloutMarkerPing_GetEntityZOffset((LocalClientNum_t)v2, v28);
              CG_CalloutMarkerPing_Predicted_CreateAtEntity((LocalClientNum_t)v2, v27, v28, v32, (char)v29, (int)(float)(outPosition.v[2] - outOrigin.v[2]) + v33, isTentativeAction);
            }
            else if ( *(_DWORD *)type )
            {
              outPosition.v[2] = outPosition.v[2] + 60.0;
              CG_CalloutMarkerPing_Predicted_CreateAtOrigin((LocalClientNum_t)v2, CONST_CALLOUT_POOL_ID_NAVIGATION, &outPosition, isTentativeAction);
            }
          }
          else if ( outOrg.v[2] > 0.0 && CG_GameInterface_PlayingBR() )
          {
            plane = (vec4_t)_xmm;
            if ( IntersectRayPlane(&outOrg, &traceDir, &plane, (float *)type, &outOrigin) && outOrigin.v[0] >= -65000.0 && outOrigin.v[1] >= -65000.0 && outOrigin.v[0] <= 65000.0 && outOrigin.v[1] <= 65000.0 )
            {
              outPosition.v[0] = outOrigin.v[0];
              outPosition.v[1] = outOrigin.v[1];
              outPosition.v[2] = 0.0;
              CG_CalloutMarkerPing_Predicted_CreateAtOrigin((LocalClientNum_t)v2, CONST_CALLOUT_POOL_ID_NAVIGATION, &outPosition, 0);
              s_calloutMarkerPingData[v5].predicted.view.origin.z = -12345;
            }
          }
        }
        else
        {
          CG_CalloutMarkerPing_Predicted_CreateAtGSCObjective((LocalClientNum_t)v2, outPingScore.bestGSCObjective, isTentativeAction);
        }
      }
      else
      {
        CG_CalloutMarkerPing_Predicted_CreateAtScriptable((LocalClientNum_t)v2, bestScriptable, isTentativeAction);
      }
    }
    else
    {
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(outPingType) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4549, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outPingType, 2) )
          __debugbreak();
      }
      if ( !s_calloutMarkerPingData[v5].predicted.sentToServer )
      {
        LOBYTE(v10) = CG_CalloutMarkerPing_ClassifyPing((LocalClientNum_t)v2, (const CalloutMarkerPingPool)s_calloutMarkerPingData[v5].predicted.pool, &s_calloutMarkerPingData[v5].predicted.view);
        if ( v10 == 10 )
        {
LABEL_19:
          CG_CalloutMarkerPing_FinalizeDoubleTap((LocalClientNum_t)v2, isTentativeAction, 0);
          return;
        }
        if ( v10 == 2 )
        {
          s_calloutMarkerPingData[v5].predicted.pool = CONST_CALLOUT_POOL_ID_DANGER_1;
          s_calloutMarkerPingData[v5].dirty = 1;
          CG_CalloutMarkerPing_FinalizeDoubleTap((LocalClientNum_t)v2, isTentativeAction, 0);
          return;
        }
        *(_DWORD *)type = 1;
        if ( CG_CalloutMarkerPing_TraceSolidForNavOrDanger((LocalClientNum_t)v2, &outOrg, &traceDir, 3000.0, (vec3_t *)&plane, type, (__int16 *)outEntityNum) )
        {
          plane.v[2] = plane.v[2] + 60.0;
          CG_CalloutMarkerPing_Predicted_CreateAtOrigin((LocalClientNum_t)v2, CONST_CALLOUT_POOL_ID_DANGER_1, (const vec3_t *)&plane, 1);
          goto LABEL_19;
        }
        CG_CalloutMarkerPing_FinalizeDoubleTap((LocalClientNum_t)v2, isTentativeAction, 1);
      }
    }
  }
}

/*
==============
CG_CalloutMarkerPing_Predicted_HandleButtonPress_Spectate
==============
*/
void CG_CalloutMarkerPing_Predicted_HandleButtonPress_Spectate(const LocalClientNum_t localClientNum, const bool isTentativeAction)
{
  __int64 v2; 
  unsigned int IndexByName; 
  unsigned int v5; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 
  const dvar_t *v8; 
  char v9; 
  float v10; 
  float v11; 
  double Float_Internal_DebugName; 
  float v13; 
  cg_t *LocalClientGlobals; 
  unsigned int v15; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 
  float v18; 
  float v19; 
  float v20; 
  unsigned int InstanceIndex; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  bool outIsMoving; 
  float outRadius; 
  vec3_t outOrg; 
  vec2_t outPosition; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4459, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !s_calloutMarkerPingData[v2].predicted.view.origin.owner && s_calloutMarkerPingData[v2].predicted.feedbackViewIndex == 53 )
  {
    IndexByName = BG_Omnvar_GetIndexByName("ui_lower_message");
    v5 = IndexByName;
    if ( IndexByName != -1 )
    {
      Def = BG_Omnvar_GetDef(IndexByName);
      Data = CG_Omnvar_GetData((LocalClientNum_t)v2, v5);
      if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
        __debugbreak();
      if ( Data->current.integer + Def->minvalue == 75 )
      {
        v8 = DVARBOOL_calloutmarkerping_buybackEnabled;
        if ( !DVARBOOL_calloutmarkerping_buybackEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_buybackEnabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.enabled )
        {
          v9 = 0;
          v10 = 0.0;
          v11 = 0.0;
          if ( CG_GameInterface_PlayingBR() )
          {
            if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
            {
              LODWORD(v24) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v24, 2, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
                __debugbreak();
            }
            if ( (unsigned int)v2 >= CgCompassSystem::ms_allocatedCount )
            {
              LODWORD(v24) = CgCompassSystem::ms_allocatedCount;
              LODWORD(v23) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v23, v24) )
                __debugbreak();
            }
            if ( !CgCompassSystem::ms_compassSystemArray[v2] )
            {
              LODWORD(v24) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v24) )
                __debugbreak();
            }
            if ( CgCompassSystemBR::GetDangerCircleInfo((CgCompassSystemBR *)CgCompassSystem::ms_compassSystemArray[v2], &outPosition, &outRadius, &outIsMoving) )
            {
              if ( outIsMoving )
              {
                Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_compass_buyback_circle_moving_radius_pct, "compass_buyback_circle_moving_radius_pct");
                v13 = outRadius * *(float *)&Float_Internal_DebugName;
              }
              else
              {
                v13 = outRadius;
              }
              v10 = v13 * v13;
              v9 = 1;
            }
          }
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
          RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
          v15 = -1;
          v16 = 0;
          v17 = ScriptableCl_ObjectiveCount((const LocalClientNum_t)v2);
          if ( v17 )
          {
            v18 = outOrg.v[2];
            v19 = outOrg.v[1];
            v20 = outOrg.v[0];
            do
            {
              InstanceIndex = ScriptableCl_ObjectiveGetInstanceIndex((const LocalClientNum_t)v2, v16);
              v22 = InstanceIndex;
              if ( InstanceIndex != -1 && (unsigned int)CG_CalloutMarkerPing_ClassifyScriptable((LocalClientNum_t)v2, InstanceIndex) == 15 )
              {
                ScriptableCl_GetInstanceOrigin((const LocalClientNum_t)v2, v22, &outOrg);
                if ( (!v9 || (float)((float)((float)(outPosition.v[1] - outOrg.v[1]) * (float)(outPosition.v[1] - outOrg.v[1])) + (float)((float)(outPosition.v[0] - outOrg.v[0]) * (float)(outPosition.v[0] - outOrg.v[0]))) <= v10) && (v15 == -1 || (float)((float)((float)((float)(v19 - outOrg.v[1]) * (float)(v19 - outOrg.v[1])) + (float)((float)(v20 - outOrg.v[0]) * (float)(v20 - outOrg.v[0]))) + (float)((float)(v18 - outOrg.v[2]) * (float)(v18 - outOrg.v[2]))) < v11) )
                {
                  v15 = v22;
                  v11 = (float)((float)((float)(v19 - outOrg.v[1]) * (float)(v19 - outOrg.v[1])) + (float)((float)(v20 - outOrg.v[0]) * (float)(v20 - outOrg.v[0]))) + (float)((float)(v18 - outOrg.v[2]) * (float)(v18 - outOrg.v[2]));
                }
              }
              ++v16;
            }
            while ( v16 < v17 );
            if ( v15 != -1 )
            {
              CG_CalloutMarkerPing_Predicted_CreateAtScriptable((LocalClientNum_t)v2, v15, isTentativeAction);
              CG_CalloutMarkerPing_Predicted_SendToServer((LocalClientNum_t)v2);
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_CalloutMarkerPing_Predicted_HandleButtonPress_TacMap
==============
*/
void CG_CalloutMarkerPing_Predicted_HandleButtonPress_TacMap(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v4; 
  cg_t *v5; 
  unsigned __int8 pingIndex; 
  unsigned int scriptableIndex; 
  __int16 entityIndex; 
  int v9; 
  CalloutMarkerPingType v10; 
  CalloutMarkerPingPool PoolID; 
  __int16 zOffset; 
  int objectiveIndex; 
  double Float_Internal_DebugName; 
  double v15; 
  __int16 v16; 
  centity_t *Entity; 
  float v18; 
  float v19; 
  int v20; 
  int v21; 
  __int16 EntityZOffset; 
  float v23; 
  __int16 v24; 
  __int16 outEntityNum[2]; 
  CalloutMarkerPingType outPingType[4]; 
  vec3_t origin; 
  vec3_t outPosition; 
  vec3_t outOrigin; 
  vec3_t outDirection; 
  tmat33_t<vec3_t> axis; 

  v2 = localClientNum;
  if ( !s_calloutMarkerPingData[v2].predicted.view.origin.owner && s_calloutMarkerPingData[v2].predicted.feedbackViewIndex == 53 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v4 = DCONST_DVARINT_calloutmarkerping_prediction_debounce_time;
    v5 = LocalClientGlobals;
    if ( !DCONST_DVARINT_calloutmarkerping_prediction_debounce_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_prediction_debounce_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v5->time >= v4->current.integer + s_calloutMarkerPingData[v2].predicted.sentToServerTime && CG_GameInterface_PlayingBR() )
    {
      CG_CalloutMarkerPing_UpdateSquad(localClientNum);
      if ( s_calloutMarkerPingData[v2].squadMateAliveCount )
      {
        pingIndex = s_calloutMarkerPingData[v2].tacmapLookAt.pingIndex;
        if ( pingIndex != 52 )
        {
          if ( pingIndex != 53 )
          {
            CG_CalloutMarkerPing_Predicted_CreateFeedback(localClientNum, pingIndex, 0);
            CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
            return;
          }
          scriptableIndex = s_calloutMarkerPingData[v2].tacmapLookAt.scriptableIndex;
          if ( scriptableIndex != -1 )
          {
            CG_CalloutMarkerPing_Predicted_CreateAtScriptable(localClientNum, scriptableIndex, 0);
            CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
            return;
          }
          entityIndex = s_calloutMarkerPingData[v2].tacmapLookAt.entityIndex;
          if ( entityIndex != 2047 )
          {
            LOBYTE(v9) = CG_CalloutMarkerPing_ClassifyEntity(localClientNum, entityIndex);
            v10 = (char)v9;
            if ( v9 <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4371, ASSERT_TYPE_ASSERT, "(type > CalloutMarkerPingType::INVALID)", (const char *)&queryFormat, "type > CalloutMarkerPingType::INVALID") )
              __debugbreak();
            CG_CalloutMarkerPing_GetEntityZOffset(localClientNum, s_calloutMarkerPingData[v2].tacmapLookAt.entityIndex);
            PoolID = CG_CalloutMarkerPing_TypeGetPoolID(v10);
            CG_CalloutMarkerPing_Predicted_CreateAtEntity(localClientNum, PoolID, s_calloutMarkerPingData[v2].tacmapLookAt.entityIndex, 0, 0, zOffset, 0);
            CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
            return;
          }
          objectiveIndex = s_calloutMarkerPingData[v2].tacmapLookAt.objectiveIndex;
          if ( objectiveIndex != -1 )
          {
            CG_CalloutMarkerPing_Predicted_CreateAtGSCObjective(localClientNum, objectiveIndex, 0);
            CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
            return;
          }
          CG_CalloutMarkerPing_GetTacmapWorldPos(localClientNum, &outPosition, &outDirection);
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height, "calloutmarkerping_trace_tacmap_height");
          *(_DWORD *)outPingType = 1;
          if ( !CG_CalloutMarkerPing_TraceSolidForNavOrDanger(localClientNum, &outPosition, &outDirection, *(float *)&Float_Internal_DebugName * 2.0, &origin, outPingType, outEntityNum) )
          {
            origin.v[0] = outPosition.v[0];
            origin.v[2] = 0.0;
            origin.v[1] = outPosition.v[1];
            CG_CalloutMarkerPing_Predicted_CreateAtOrigin(localClientNum, CONST_CALLOUT_POOL_ID_NAVIGATION, &origin, 0);
            s_calloutMarkerPingData[v2].predicted.view.origin.z = -1234;
            goto LABEL_29;
          }
          outEntityNum[0] = 2047;
          v15 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height, "calloutmarkerping_trace_tacmap_height");
          *(_DWORD *)outPingType = 2;
          if ( CG_CalloutMarkerPing_TraceSolidForNavOrDanger(localClientNum, &outPosition, &outDirection, *(float *)&v15 * 2.0, &origin, outPingType, outEntityNum) && *(_DWORD *)outPingType == 13 )
          {
            v16 = outEntityNum[0];
            Entity = CG_GetEntity(localClientNum, outEntityNum[0]);
            CG_GetPoseOrigin(&Entity->pose, &outOrigin);
            v18 = origin.v[0] - outOrigin.v[0];
            v19 = origin.v[1] - outOrigin.v[1];
            AnglesToAxis(&Entity->pose.angles, &axis);
            v20 = (int)(float)((float)((float)(v18 * axis.m[1].v[0]) + (float)(v19 * axis.m[1].v[1])) * 0.25);
            v21 = (int)(float)((float)((float)(v19 * axis.m[0].v[1]) + (float)(v18 * axis.m[0].v[0])) * 0.25);
            EntityZOffset = CG_CalloutMarkerPing_GetEntityZOffset(localClientNum, v16);
            v23 = origin.v[2];
            v24 = (int)(float)(origin.v[2] - outOrigin.v[2]) + EntityZOffset;
            if ( v16 != 2047 )
            {
              CG_CalloutMarkerPing_Predicted_CreateAtEntity(localClientNum, CONST_CALLOUT_POOL_ID_ENTITY_1, v16, v21, v20, v24, 0);
LABEL_29:
              CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
              return;
            }
          }
          else
          {
            v23 = origin.v[2];
          }
          origin.v[2] = v23 + 60.0;
          CG_CalloutMarkerPing_Predicted_CreateAtOrigin(localClientNum, CONST_CALLOUT_POOL_ID_NAVIGATION, &origin, 0);
          goto LABEL_29;
        }
      }
    }
  }
}

/*
==============
CG_CalloutMarkerPing_Predicted_SendToServer
==============
*/
void CG_CalloutMarkerPing_Predicted_SendToServer(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  ClConnectionMP *ClientConnectionMP; 
  __int64 v5; 
  unsigned __int8 feedbackViewIndex; 
  __int64 index; 
  __int64 v8; 
  const char *v9; 
  __int64 x; 
  char *fmt; 
  __int64 v12; 
  __int64 v13; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v1].connectionState != CA_ACTIVE )
  {
    Com_PrintWarning(13, "CG_CalloutMarkerPing_SendPredictedToServer: Not connected to a server\n");
    return;
  }
  v2 = v1;
  if ( s_calloutMarkerPingData[v1].predicted.sentToServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4096, ASSERT_TYPE_ASSERT, "(!markerData.predicted.sentToServer)", (const char *)&queryFormat, "!markerData.predicted.sentToServer") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  ClientConnectionMP = ClConnectionMP::GetClientConnectionMP((const LocalClientNum_t)v1);
  v5 = (__int64)ClientConnectionMP->GetConnectionData(ClientConnectionMP);
  s_calloutMarkerPingData[v2].predicted.isTentative = 0;
  s_calloutMarkerPingData[v2].predicted.sentToServer = 1;
  s_calloutMarkerPingData[v2].predicted.sentToServerTime = LocalClientGlobals->time;
  s_calloutMarkerPingData[v2].predicted.sentToServerSequence = *(_DWORD *)(v5 + 8);
  feedbackViewIndex = s_calloutMarkerPingData[v2].predicted.feedbackViewIndex;
  if ( feedbackViewIndex == 53 )
  {
    if ( !s_calloutMarkerPingData[v2].predicted.view.origin.owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4113, ASSERT_TYPE_ASSERT, "(BG_CalloutMarkerPing_GetIsActive( view ))", (const char *)&queryFormat, "BG_CalloutMarkerPing_GetIsActive( view )") )
      __debugbreak();
    LOBYTE(v8) = s_calloutMarkerPingData[v2].predicted.pool;
    if ( (_BYTE)v8 == 8 || (unsigned __int8)(v8 - 4) <= 2u )
    {
      LODWORD(v13) = s_calloutMarkerPingData[v2].predicted.view.origin.y;
      LODWORD(v12) = 4 * s_calloutMarkerPingData[v2].predicted.view.entity.yOffset;
      LODWORD(fmt) = 4 * s_calloutMarkerPingData[v2].predicted.view.entity.xOffset;
      v9 = j_va("cmd %s %d %i %i %i %i\n", "cmpp", (unsigned __int8)v8, (unsigned int)s_calloutMarkerPingData[v2].predicted.view.origin.x, fmt, v12, v13);
      goto LABEL_23;
    }
    if ( (unsigned __int8)(v8 - 9) > 2u )
    {
      x = (unsigned int)s_calloutMarkerPingData[v2].predicted.view.origin.x;
      if ( (_BYTE)v8 == 7 )
      {
        v9 = j_va("cmd %s %d %i\n", "cmpp", 7i64, x);
      }
      else
      {
        LODWORD(v12) = s_calloutMarkerPingData[v2].predicted.view.origin.z;
        LODWORD(fmt) = s_calloutMarkerPingData[v2].predicted.view.origin.y;
        v9 = j_va("cmd %s %d %i %i %i\n", "cmpp", (unsigned __int8)v8, x, fmt, v12);
      }
      goto LABEL_23;
    }
    index = s_calloutMarkerPingData[v2].predicted.view.scriptable.index;
    v8 = (unsigned __int8)v8;
  }
  else
  {
    index = feedbackViewIndex;
    v8 = 0xFFFFFFFFi64;
  }
  v9 = j_va("cmd %s %d %i\n", "cmpp", v8, index);
LABEL_23:
  Cbuf_AddText((LocalClientNum_t)v1, v9);
}

/*
==============
CG_CalloutMarkerPing_Predicted_Update
==============
*/
void CG_CalloutMarkerPing_Predicted_Update(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v3; 
  double v4; 
  int v5; 
  unsigned __int8 v6; 
  bool *p_newsFeedPending; 
  cg_t *LocalClientGlobals; 
  const CalloutMarkerPingView *View; 
  cg_t *v10; 
  ClConnectionMP *ClientConnectionMP; 
  __int64 v12; 
  __int64 v13; 

  v1 = DCONST_DVARBOOL_calloutmarkerping_use_prediction;
  v3 = localClientNum;
  if ( !DCONST_DVARBOOL_calloutmarkerping_use_prediction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_use_prediction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v4 = *(double *)&s_calloutMarkerPingData[v3].predicted.sentToServerTime;
    v5 = *(_DWORD *)&s_calloutMarkerPingData[v3].predicted.isTentative;
    *(_OWORD *)&s_calloutMarkerPingData[v3].predictedPrev.view.origin.x = *(_OWORD *)&s_calloutMarkerPingData[v3].predicted.view.origin.x;
    *(double *)&s_calloutMarkerPingData[v3].predictedPrev.sentToServerTime = v4;
    *(_DWORD *)&s_calloutMarkerPingData[v3].predictedPrev.isTentative = v5;
    CG_CalloutMarkerPing_UpdatePingLookAt(localClientNum);
    CG_CalloutMarkerPing_UpdateTacmapLookAt(localClientNum);
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v13) = 2;
      LODWORD(v12) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1780, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v6 = 0;
    p_newsFeedPending = &s_calloutMarkerPingData[v3].markers[0].newsFeedPending;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    do
    {
      if ( *p_newsFeedPending )
      {
        View = CG_CalloutMarkerPing_GetView(localClientNum, v6, &LocalClientGlobals->predictedPlayerState);
        CG_CalloutMarkerPing_UpdateNewsFeedSingle(localClientNum, v6, View);
        *p_newsFeedPending = 0;
        *((_DWORD *)p_newsFeedPending + 1) = 0;
      }
      ++v6;
      p_newsFeedPending += 16;
    }
    while ( v6 < 0x34u );
    if ( s_calloutMarkerPingData[v3].predicted.view.origin.owner || s_calloutMarkerPingData[v3].predicted.feedbackViewIndex != 53 )
    {
      if ( s_calloutMarkerPingData[v3].predicted.sentToServer )
      {
        ClientConnectionMP = ClConnectionMP::GetClientConnectionMP(localClientNum);
        if ( ClientConnectionMP->GetConnectionData(ClientConnectionMP)->reliableAcknowledge > s_calloutMarkerPingData[v3].predicted.sentToServerSequence )
        {
          s_calloutMarkerPingData[v3].lastPredictedPool = s_calloutMarkerPingData[v3].predicted.pool;
          s_calloutMarkerPingData[v3].lastPredictedView = s_calloutMarkerPingData[v3].predicted.view;
          s_calloutMarkerPingData[v3].predicted.createdTime = 0;
          *(_QWORD *)&s_calloutMarkerPingData[v3].predicted.sentToServerSequence = 0i64;
          *(_WORD *)&s_calloutMarkerPingData[v3].predicted.pool = 13581;
          s_calloutMarkerPingData[v3].predicted.view = 0i64;
          s_calloutMarkerPingData[v3].dirty = 1;
        }
      }
      else if ( !s_calloutMarkerPingData[v3].predicted.isTentative )
      {
        v10 = CG_GetLocalClientGlobals(localClientNum);
        if ( v10->time > Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_calloutmarkerping_double_tap_time, "calloutmarkerping_double_tap_time") + s_calloutMarkerPingData[v3].predicted.createdTime )
          CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
      }
    }
  }
}

/*
==============
CG_CalloutMarkerPing_QueueMarkAction
==============
*/
void CG_CalloutMarkerPing_QueueMarkAction(LocalClientNum_t localClientNum, const bool isTentative, const bool queueForNextFrame)
{
  const dvar_t *v6; 
  cg_t *LocalClientGlobals; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5095, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( CG_CalloutMarkerPing_SystemActive() )
  {
    v6 = DCONST_DVARBOOL_calloutmarkerping_use_prediction;
    if ( !DCONST_DVARBOOL_calloutmarkerping_use_prediction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_use_prediction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( LocalClientGlobals )
      {
        if ( queueForNextFrame )
          LocalClientGlobals->calloutMarkerInfo.executeMarkNextFrame = 1;
        else
          LocalClientGlobals->calloutMarkerInfo.executeMarkThisFrame = 1;
        LocalClientGlobals->calloutMarkerInfo.isTentative = isTentative;
      }
    }
  }
}

/*
==============
CG_CalloutMarkerPing_ResetLastPredicted
==============
*/
void CG_CalloutMarkerPing_ResetLastPredicted(const LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  s_calloutMarkerPingData[v1].lastPredictedViewIndex = 53;
  s_calloutMarkerPingData[v1].lastPredictedPool = CONST_CALLOUT_POOL_SIZE;
}

/*
==============
CG_CalloutMarkerPing_ScoreEntity
==============
*/
float CG_CalloutMarkerPing_ScoreEntity(LocalClientNum_t localClientNum, const bool usingAABBCollection, const float bestScore, const vec3_t *traceStart, const vec3_t *traceDir, const float traceDistance, const float traceRadius, __int16 entNum, int type)
{
  __int128 v9; 
  __int128 v10; 
  centity_t *Entity; 
  int v15; 
  float v16; 
  __int128 v17; 
  const dvar_t *v18; 
  float v19; 
  float v20; 
  float v24; 
  float v25; 
  float v26; 
  double Float_Internal_DebugName; 
  cg_t *LocalClientGlobals; 
  int linkedEntNum; 
  centity_t *v30; 
  int v31; 
  int v32; 
  int i; 
  char v34; 
  __int64 v35; 
  __int64 radiusExtension; 
  __int16 *v38; 
  int numIgnoreEnts[2]; 
  vec3_t outOrigin; 
  __int16 ignoreEnts[4]; 
  __int128 v42; 
  __int128 v43; 

  if ( !CG_CalloutMarkerPing_TypeCanBeTraceHit((CalloutMarkerPingType)type) )
    return 0.0;
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( (Entity->flags & 1) == 0 )
    return 0.0;
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  LOBYTE(v15) = CG_CalloutMarkerPing_ClassifyEntity(localClientNum, entNum);
  switch ( v15 )
  {
    case 6:
      outOrigin.v[2] = (float)((float)(__int16)CG_CalloutMarkerPing_GetEntityZOffset(localClientNum, entNum) * 0.5) + outOrigin.v[2];
      break;
    case 7:
    case 8:
    case 9:
    case 11:
    case 12:
    case 13:
    case 17:
      break;
    case 10:
      CG_CalcEyePoint(localClientNum, entNum, &outOrigin);
      break;
    default:
      return 0.0;
  }
  v17 = LODWORD(outOrigin.v[1]);
  v16 = outOrigin.v[1] - traceStart->v[1];
  v18 = DCONST_DVARFLT_calloutmarkerping_trace_entity_mindot;
  v43 = v9;
  v42 = v10;
  v19 = outOrigin.v[0] - traceStart->v[0];
  v20 = outOrigin.v[2] - traceStart->v[2];
  *(float *)&v17 = fsqrt((float)((float)(v16 * v16) + (float)(v19 * v19)) + (float)(v20 * v20));
  _XMM4 = v17;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  v25 = (float)((float)((float)(v16 * (float)(1.0 / *(float *)&_XMM0)) * traceDir->v[1]) + (float)((float)(v19 * (float)(1.0 / *(float *)&_XMM0)) * traceDir->v[0])) + (float)((float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * traceDir->v[2]);
  v24 = v25;
  if ( !DCONST_DVARFLT_calloutmarkerping_trace_entity_mindot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_entity_mindot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v25 < v18->current.value )
    return 0.0;
  if ( usingAABBCollection )
  {
    v26 = CG_CalloutMarkerPing_GetEntityOffsetForPointLineSegmentDistCheck(localClientNum, entNum);
    if ( !CG_CalloutMarkerPing_TargetIsWithinViewSphere(traceStart, traceDir, &outOrigin, traceDistance, traceRadius, v26) )
      return 0.0;
  }
  if ( type == 10 )
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_trace_enemy_bias, "calloutmarkerping_trace_enemy_bias");
    v24 = *(float *)&Float_Internal_DebugName + v25;
  }
  else if ( type == 6 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    linkedEntNum = CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum)->linkedEntNum;
    if ( linkedEntNum > 0 )
    {
      v30 = CG_GetEntity(localClientNum, linkedEntNum - 1);
      v31 = 2047;
      if ( v30 )
      {
        v32 = *(_DWORD *)&v30->nextState.clientLinkInfo & 0x7FF;
        if ( v32 )
          v31 = v32 - 1;
      }
      if ( v31 == entNum )
        return 0.0;
    }
  }
  if ( v24 >= bestScore )
  {
    numIgnoreEnts[0] = 0;
    CG_CalloutMarkerPing_InitTraceSightIgnoreList(localClientNum, ignoreEnts, numIgnoreEnts);
    for ( i = numIgnoreEnts[0]; ; ++i )
    {
      *(PingTraceSightResult *)numIgnoreEnts = CG_CalloutMarkerPing_TraceSight(localClientNum, traceStart, &outOrigin, entNum, 0xFFFFFFFF, i, ignoreEnts);
      v34 = numIgnoreEnts[0];
      if ( !CG_CalloutMarkerPing_ShouldIgnoreAndRetraceSight(localClientNum, entNum, (CalloutMarkerPingType)type, (const PingTraceSightResult *)numIgnoreEnts, i) )
        break;
      if ( (unsigned int)i >= 4 )
      {
        LODWORD(v38) = 4;
        LODWORD(radiusExtension) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3853, ASSERT_TYPE_ASSERT, "(unsigned)( numIgnoreEnts ) < (unsigned)( TRACE_SIGHT_IGNORE_ENTS_ARRAY_SIZE )", "numIgnoreEnts doesn't index TRACE_SIGHT_IGNORE_ENTS_ARRAY_SIZE\n\t%i not in [0, %i)", radiusExtension, v38) )
          __debugbreak();
      }
      v35 = i;
      ignoreEnts[v35] = numIgnoreEnts[1];
    }
    if ( v34 )
      return v24;
  }
  return 0.0;
}

/*
==============
CG_CalloutMarkerPing_ScoreScriptable
==============
*/
float CG_CalloutMarkerPing_ScoreScriptable(LocalClientNum_t localClientNum, const bool usingAABBCollection, const float bestScore, const vec3_t *traceStart, const vec3_t *traceDir, const float traceDistance, const float traceRadius, unsigned int scriptableIndex, int type)
{
  __int128 v9; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  double v15; 
  float v16; 
  ScriptableInstanceContextSecure *v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v25; 
  float v26; 
  float v28; 
  float v29; 
  double v30; 
  __int16 LinkObject; 
  int i; 
  char v33; 
  __int64 v34; 
  __int64 numIgnoreEnts; 
  __int16 *ignoreEnts; 
  unsigned int outFirstUsablePartIndex[2]; 
  vec3_t out_usePosition; 
  vec3_t end; 
  __int128 v40; 

  if ( CG_CalloutMarkerPing_IsInPrematch(localClientNum) && type != 17 )
    return 0.0;
  if ( !CG_CalloutMarkerPing_TypeCanBeTraceHit((CalloutMarkerPingType)type) )
    return 0.0;
  if ( !ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) )
    return 0.0;
  if ( !ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def )
    return 0.0;
  if ( type == 20 && ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) )
  {
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    v15 = AngleDelta(InstanceCommonContext->anglesInitial.v[1], InstanceCommonContext->angles.v[1]);
    if ( COERCE_FLOAT(LODWORD(v15) & _xmm) < 0.0099999998 )
      return 0.0;
  }
  if ( ScriptableCl_IsLootWeaponWithInvalidHandleIndex(localClientNum, scriptableIndex) )
    return 0.0;
  v40 = v9;
  outFirstUsablePartIndex[0] = 0;
  if ( ScriptableCl_IsScriptableUsable(localClientNum, scriptableIndex, outFirstUsablePartIndex) )
  {
    ScriptableCl_GetPartUsePosition(localClientNum, scriptableIndex, outFirstUsablePartIndex[0], &out_usePosition);
    v16 = out_usePosition.v[2];
  }
  else
  {
    v17 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    ScriptableInstanceContextSecure::GetOrigin(v17, scriptableIndex, &out_usePosition);
    v16 = out_usePosition.v[2] + 32.0;
    out_usePosition.v[2] = out_usePosition.v[2] + 32.0;
  }
  v18 = v16 - traceStart->v[2];
  v19 = out_usePosition.v[0] - traceStart->v[0];
  v21 = LODWORD(out_usePosition.v[1]);
  v20 = out_usePosition.v[1] - traceStart->v[1];
  *(float *)&v21 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v18 * v18));
  _XMM3 = v21;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v26 = (float)((float)((float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * traceDir->v[1]) + (float)((float)(v19 * (float)(1.0 / *(float *)&_XMM0)) * traceDir->v[0])) + (float)((float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * traceDir->v[2]);
  v25 = v26;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_trace_entity_mindot, "calloutmarkerping_trace_entity_mindot");
  if ( v26 < *(float *)&_XMM0 || v26 < bestScore )
    return 0.0;
  if ( ((type - 14) & 0xFFFFFFFC) == 0 && type != 15 )
  {
    if ( !ScriptableCl_IsScriptableUsable(localClientNum, scriptableIndex, NULL) )
      return 0.0;
    goto LABEL_21;
  }
  if ( usingAABBCollection )
  {
LABEL_21:
    v28 = traceDistance * traceDir->v[1];
    end.v[0] = (float)(traceDistance * traceDir->v[0]) + traceStart->v[0];
    v29 = traceDistance * traceDir->v[2];
    end.v[1] = v28 + traceStart->v[1];
    end.v[2] = v29 + traceStart->v[2];
    v30 = PointToLineSegmentDistSq(&out_usePosition, traceStart, &end);
    if ( *(float *)&v30 > (float)(traceRadius * traceRadius) )
      return 0.0;
  }
  LinkObject = 2047;
  if ( ScriptableCl_GetLinkType(localClientNum, scriptableIndex) == SCRIPTABLE_LINK_ENTITY )
    LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
  outFirstUsablePartIndex[0] = 0;
  CG_CalloutMarkerPing_InitTraceSightIgnoreList(localClientNum, (__int16 *)&end, (int *)outFirstUsablePartIndex);
  for ( i = outFirstUsablePartIndex[0]; ; ++i )
  {
    *(PingTraceSightResult *)outFirstUsablePartIndex = CG_CalloutMarkerPing_TraceSight(localClientNum, traceStart, &out_usePosition, LinkObject, scriptableIndex, i, (__int16 *)&end);
    v33 = outFirstUsablePartIndex[0];
    if ( !CG_CalloutMarkerPing_ShouldIgnoreAndRetraceSight(localClientNum, LinkObject, (CalloutMarkerPingType)type, (const PingTraceSightResult *)outFirstUsablePartIndex, i) )
      break;
    if ( (unsigned int)i >= 4 )
    {
      LODWORD(ignoreEnts) = 4;
      LODWORD(numIgnoreEnts) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3972, ASSERT_TYPE_ASSERT, "(unsigned)( numIgnoreEnts ) < (unsigned)( TRACE_SIGHT_IGNORE_ENTS_ARRAY_SIZE )", "numIgnoreEnts doesn't index TRACE_SIGHT_IGNORE_ENTS_ARRAY_SIZE\n\t%i not in [0, %i)", numIgnoreEnts, ignoreEnts) )
        __debugbreak();
    }
    v34 = i;
    *((_WORD *)end.v + v34) = outFirstUsablePartIndex[1];
  }
  if ( v33 )
    return v25;
  return 0.0;
}

/*
==============
CG_CalloutMarkerPing_ShouldIgnoreAndRetraceSight
==============
*/
char CG_CalloutMarkerPing_ShouldIgnoreAndRetraceSight(const LocalClientNum_t localClientNum, __int16 entNum, int type, const PingTraceSightResult *traceSightResult, int numIgnoreEnts)
{
  centity_t *Entity; 
  centity_t *LinkToParent; 

  if ( (unsigned int)numIgnoreEnts < 4 && !traceSightResult->canSee && traceSightResult->hit && traceSightResult->hitIsEntity )
  {
    Entity = CG_GetEntity(localClientNum, traceSightResult->entNum);
    if ( (Entity->flags & 1) != 0 && type == 6 && Entity->nextState.eType == ET_TURRET )
    {
      LinkToParent = CG_Entity_GetLinkToParent(localClientNum, Entity);
      if ( LinkToParent )
      {
        while ( (LinkToParent->flags & 1) != 0 )
        {
          if ( LinkToParent->nextState.number == entNum )
            return 1;
          LinkToParent = CG_Entity_GetLinkToParent(localClientNum, LinkToParent);
          if ( !LinkToParent )
            return 0;
        }
      }
    }
  }
  return 0;
}

/*
==============
CG_CalloutMarkerPing_StartContextualPingWorkerThread
==============
*/
void CG_CalloutMarkerPing_StartContextualPingWorkerThread(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  cg_t *v4; 
  __int64 v5; 
  vec3_t outOrg; 
  tmat33_t<vec3_t> dst; 
  int v8; 

  v1 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5211, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5212, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_CalloutMarkerPing_StartContextualPingWorkerThread");
  s_contextualPingTargets[v1].type = None;
  v2 = DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled;
  if ( !DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_contextualPingDetectionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && CG_CalloutMarkerPing_CanPing((const LocalClientNum_t)v1, 0) && s_calloutMarkerPingData[v1].pingLookAtViewIndex == 53 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5237, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v8 = v1;
    v4 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    RefdefView_GetOrg(&v4->refdef.view, &outOrg);
    MatrixCopy33(&LocalClientGlobals->refdef.view.axis, &dst);
    Sys_AddWorkerCmd(WRKCMD_CONTEXTUAL_PING, &outOrg);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_CalloutMarkerPing_SystemActive
==============
*/
char CG_CalloutMarkerPing_SystemActive()
{
  const dvar_t *v0; 
  char ActiveGameTypeQuick; 
  const dvar_t *v2; 

  v0 = DVARBOOL_calloutmarkerping_enabled;
  if ( !DVARBOOL_calloutmarkerping_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    ActiveGameTypeQuick = ClStatic::GetActiveGameTypeQuick(&cls);
    if ( ActiveGameTypeQuick == 1 )
      return 1;
    if ( ActiveGameTypeQuick == 2 )
    {
      v2 = DVARBOOL_calloutmarkerping_enabled_groundwar;
      if ( !DVARBOOL_calloutmarkerping_enabled_groundwar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_enabled_groundwar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( v2->current.enabled )
        return 1;
    }
    else if ( ActiveGameTypeQuick == 3 && Dvar_GetBool_Internal_DebugName(DVARBOOL_calloutmarkerping_enabled_arena, "calloutmarkerping_enabled_arena") )
    {
      return 1;
    }
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG && Dvar_GetBool_Internal_DebugName(DVARBOOL_calloutmarkerping_enabled_cp, "calloutmarkerping_enabled_cp") )
      return 1;
  }
  return 0;
}

/*
==============
CG_CalloutMarkerPing_TacmapGetLookingAtEntity
==============
*/
__int64 CG_CalloutMarkerPing_TacmapGetLookingAtEntity(LocalClientNum_t localClientNum)
{
  return (unsigned __int16)s_calloutMarkerPingData[localClientNum].tacmapLookAt.entityIndex;
}

/*
==============
CG_CalloutMarkerPing_TacmapGetLookingAtObjective
==============
*/
__int64 CG_CalloutMarkerPing_TacmapGetLookingAtObjective(LocalClientNum_t localClientNum)
{
  return (unsigned int)s_calloutMarkerPingData[localClientNum].tacmapLookAt.objectiveIndex;
}

/*
==============
CG_CalloutMarkerPing_TacmapGetLookingAtPing
==============
*/
__int64 CG_CalloutMarkerPing_TacmapGetLookingAtPing(LocalClientNum_t localClientNum)
{
  return s_calloutMarkerPingData[localClientNum].tacmapLookAt.pingIndex;
}

/*
==============
CG_CalloutMarkerPing_TacmapGetLookingAtScriptable
==============
*/
__int64 CG_CalloutMarkerPing_TacmapGetLookingAtScriptable(LocalClientNum_t localClientNum)
{
  return s_calloutMarkerPingData[localClientNum].tacmapLookAt.scriptableIndex;
}

/*
==============
CG_CalloutMarkerPing_TacmapIsLookingAtEntity
==============
*/
bool CG_CalloutMarkerPing_TacmapIsLookingAtEntity(LocalClientNum_t localClientNum, __int16 entityIndex)
{
  return s_calloutMarkerPingData[localClientNum].tacmapLookAt.entityIndex == (unsigned __int16)entityIndex;
}

/*
==============
CG_CalloutMarkerPing_TacmapIsLookingAtObjective
==============
*/
bool CG_CalloutMarkerPing_TacmapIsLookingAtObjective(LocalClientNum_t localClientNum, int objectiveIndex)
{
  return s_calloutMarkerPingData[localClientNum].tacmapLookAt.objectiveIndex == objectiveIndex;
}

/*
==============
CG_CalloutMarkerPing_TacmapIsLookingAtPing
==============
*/
bool CG_CalloutMarkerPing_TacmapIsLookingAtPing(LocalClientNum_t localClientNum, unsigned __int8 pingIndex)
{
  return s_calloutMarkerPingData[localClientNum].tacmapLookAt.pingIndex == pingIndex;
}

/*
==============
CG_CalloutMarkerPing_TacmapIsLookingAtScriptable
==============
*/
bool CG_CalloutMarkerPing_TacmapIsLookingAtScriptable(LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  return s_calloutMarkerPingData[localClientNum].tacmapLookAt.scriptableIndex == scriptableIndex;
}

/*
==============
CG_CalloutMarkerPing_TargetIsWithinViewSphere
==============
*/
bool CG_CalloutMarkerPing_TargetIsWithinViewSphere(const vec3_t *viewPos, const vec3_t *viewDir, const vec3_t *targetPos, const float traceDistance, const float traceRadius, const float radiusExtension)
{
  float v6; 
  float v7; 
  double v8; 
  vec3_t end; 

  v6 = traceDistance * viewDir->v[1];
  end.v[0] = (float)(traceDistance * viewDir->v[0]) + viewPos->v[0];
  v7 = traceDistance * viewDir->v[2];
  end.v[1] = v6 + viewPos->v[1];
  end.v[2] = v7 + viewPos->v[2];
  v8 = PointToLineSegmentDistSq(targetPos, viewPos, &end);
  return (float)((float)(traceRadius + radiusExtension) * (float)(traceRadius + radiusExtension)) >= *(float *)&v8;
}

/*
==============
CG_CalloutMarkerPing_TraceSight
==============
*/
PingTraceSightResult CG_CalloutMarkerPing_TraceSight(LocalClientNum_t localClientNum, const vec3_t *traceStart, const vec3_t *traceEnd, __int16 entNum, unsigned int scriptableIndex, int numIgnoreEnts, __int16 *ignoreEnts)
{
  __int32 v10; 
  const dvar_t *v11; 
  int v12; 
  __int16 *v13; 
  int i; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  unsigned int RaycastHitBodyId; 
  int Ref; 
  int v18; 
  int EntityNum; 
  hkMemoryAllocator *v20; 
  hkMemoryAllocator *v21; 
  __int64 v23; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v25; 
  __int64 v26; 

  v26 = -2i64;
  v23 = 0i64;
  v10 = 3 * localClientNum + 2;
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  v11 = DVARBOOL_calloutmarkerping_sightTraceContentsFix;
  if ( !DVARBOOL_calloutmarkerping_sightTraceContentsFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_sightTraceContentsFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = 8396801;
  if ( v11->current.enabled )
    v12 = 8433665;
  extendedData.contents = v12;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v25, numIgnoreEnts, 0);
  v13 = ignoreEnts;
  if ( ignoreEnts && numIgnoreEnts > 0 )
  {
    for ( i = 0; i < numIgnoreEnts; ++i )
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v25, i, *v13++, 1, 1, 1, 1, 1);
    extendedData.ignoreBodies = &v25;
  }
  ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v10);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3221, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  Physics_Raycast((Physics_WorldId)v10, traceStart, traceEnd, &extendedData, ClosestResult);
  CG_CalloutMarkerPing_DebugTraceLine(traceStart, traceEnd, ClosestResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    LOWORD(v23) = 256;
    RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
    Ref = Physics_GetRef((Physics_WorldId)v10, RaycastHitBodyId);
    if ( Physics_GetRefSystem(Ref) == Physics_RefSystem_Scriptable )
    {
      BYTE2(v23) = 0;
      v18 = Ref & 0x3FFFFF;
      HIDWORD(v23) = v18;
      if ( scriptableIndex != -1 && v18 == scriptableIndex )
        LOBYTE(v23) = 1;
    }
    else
    {
      BYTE2(v23) = 1;
      EntityNum = Physics_GetEntityNum(Ref);
      WORD2(v23) = EntityNum;
      if ( (unsigned __int16)(entNum - 2046) > 1u )
        LOBYTE(v23) = EntityNum == entNum;
    }
  }
  else
  {
    LOBYTE(v23) = 1;
  }
  v20 = hkMemHeapAllocator();
  v25.m_ignoreBodies.m_size = 0;
  if ( v25.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v20, v25.m_ignoreBodies.m_data, 4, v25.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v25.m_ignoreBodies.m_data = NULL;
  v25.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v21 = hkMemHeapAllocator();
  v25.m_ignoreEntities.m_size = 0;
  if ( v25.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v21, v25.m_ignoreEntities.m_data, 8, v25.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return (PingTraceSightResult)v23;
}

/*
==============
CG_CalloutMarkerPing_TraceSolidForNavOrDanger
==============
*/
_BOOL8 CG_CalloutMarkerPing_TraceSolidForNavOrDanger(LocalClientNum_t localClientNum, const vec3_t *traceStart, const vec3_t *traceDir, float traceDistance, vec3_t *outPosition, CalloutMarkerPingType *outPingType, __int16 *outEntityNum)
{
  const vec3_t *v7; 
  __int32 v9; 
  unsigned int v10; 
  centity_t *TurretEntity; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  char v13; 
  unsigned int NumHits; 
  unsigned int RaycastHitBodyId; 
  int Ref; 
  int EntityNum; 
  __int16 v18; 
  int v19; 
  bool HasHit; 
  hkMemoryAllocator *v21; 
  hkMemoryAllocator *v22; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v26; 
  __int64 v27; 
  vec3_t end; 

  v27 = -2i64;
  v7 = traceStart;
  end.v[0] = (float)(traceDistance * traceDir->v[0]) + traceStart->v[0];
  end.v[1] = (float)(traceDistance * traceDir->v[1]) + traceStart->v[1];
  end.v[2] = (float)(traceDistance * traceDir->v[2]) + traceStart->v[2];
  v9 = 3 * localClientNum + 2;
  v10 = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 8193;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v26, 1, 0);
  TurretEntity = CG_GetTurretEntity(localClientNum);
  if ( TurretEntity && (TurretEntity->flags & 1) != 0 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v26, 0, TurretEntity->nextState.number, 1, 1, 1, 1, 1);
    extendedData.ignoreBodies = &v26;
  }
  ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v9);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3334, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  v13 = 0;
  Physics_Raycast((Physics_WorldId)v9, v7, &end, &extendedData, ClosestResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(ClosestResult);
    if ( NumHits )
    {
      do
      {
        RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, v10);
        Ref = Physics_GetRef((Physics_WorldId)v9, RaycastHitBodyId);
        if ( ((Physics_GetRefSystem(Ref) - 2) & 0xFFFFFFFD) == 0 )
        {
          EntityNum = Physics_GetEntityNum(Ref);
          v18 = EntityNum;
          if ( (EntityNum < 0 || (unsigned int)EntityNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)EntityNum, "signed", EntityNum) )
            __debugbreak();
          if ( v18 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3358, ASSERT_TYPE_ASSERT, "(entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entNum != ENTITYNUM_NONE") )
            __debugbreak();
          if ( (unsigned __int16)v18 < 0x7FEu )
          {
            LOBYTE(v19) = CG_CalloutMarkerPing_ClassifyEntity(localClientNum, v18);
            if ( v19 )
            {
              v13 = 0;
              *(_DWORD *)outPingType = v19;
              *outEntityNum = v18;
            }
            else
            {
              v13 = 1;
            }
          }
        }
        ++v10;
      }
      while ( v10 < NumHits );
      v7 = traceStart;
    }
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, outPosition);
  }
  CG_CalloutMarkerPing_DebugTraceLine(v7, &end, ClosestResult);
  if ( v13 )
    HasHit = 0;
  else
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
  v21 = hkMemHeapAllocator();
  v26.m_ignoreBodies.m_size = 0;
  if ( v26.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v21, v26.m_ignoreBodies.m_data, 4, v26.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v26.m_ignoreBodies.m_data = NULL;
  v26.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v22 = hkMemHeapAllocator();
  v26.m_ignoreEntities.m_size = 0;
  if ( v26.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v22, v26.m_ignoreEntities.m_data, 8, v26.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return HasHit;
}

/*
==============
CG_CalloutMarkerPing_TypeCanBeTacMapHit
==============
*/
bool CG_CalloutMarkerPing_TypeCanBeTacMapHit(int type)
{
  bool result; 

  if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) != DODGE && (((type - 2) & 0xFFFFFFF6) != 0 || type == 11) )
    return 0;
  switch ( type )
  {
    case 2:
    case 3:
    case 13:
    case 20:
    case 21:
      result = 1;
      break;
    case 4:
    case 18:
    case 19:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_objectives, "calloutmarkerping_tacmap_hit_objectives");
      break;
    case 6:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_vehicles, "calloutmarkerping_tacmap_hit_vehicles");
      break;
    case 15:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_trace_hit_kiosks, "calloutmarkerping_trace_hit_kiosks");
      break;
    case 16:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_tablets, "calloutmarkerping_tacmap_hit_tablets");
      break;
    default:
      return 0;
  }
  return result;
}

/*
==============
CG_CalloutMarkerPing_TypeCanBeTraceHit
==============
*/
bool CG_CalloutMarkerPing_TypeCanBeTraceHit(int type)
{
  bool result; 

  if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) != DODGE && (((type - 2) & 0xFFFFFFF6) != 0 || type == 11) )
    return 0;
  switch ( type )
  {
    case 2:
    case 3:
    case 13:
    case 14:
    case 16:
    case 22:
      result = 1;
      break;
    case 4:
    case 18:
    case 19:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives, "calloutmarkerping_trace_hit_objectives");
      break;
    case 6:
    case 12:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_trace_hit_vehicles, "calloutmarkerping_trace_hit_vehicles");
      break;
    case 7:
    case 8:
    case 9:
    case 11:
    case 17:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_trace_hit_lethals, "calloutmarkerping_trace_hit_lethals");
      break;
    case 10:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_trace_hit_enemies, "calloutmarkerping_trace_hit_enemies");
      break;
    case 15:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_trace_hit_kiosks, "calloutmarkerping_trace_hit_kiosks");
      break;
    case 20:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_trace_hit_doors, "calloutmarkerping_trace_hit_doors");
      break;
    case 21:
      result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_trace_hit_caches, "calloutmarkerping_trace_hit_caches");
      break;
    default:
      return 0;
  }
  return result;
}

/*
==============
CG_CalloutMarkerPing_TypeGetPoolID
==============
*/
CalloutMarkerPingPool CG_CalloutMarkerPing_TypeGetPoolID(int type)
{
  CalloutMarkerPingPool result; 

  switch ( type )
  {
    case 2:
      result = CONST_CALLOUT_POOL_ID_NAVIGATION;
      break;
    case 3:
      result = CONST_CALLOUT_POOL_ID_DANGER_1;
      break;
    case 4:
      result = CONST_CALLOUT_POOL_ID_WORLD;
      break;
    case 5:
      result = CONST_CALLOUT_POOL_ID_REQUEST;
      break;
    case 6:
      result = CONST_CALLOUT_POOL_ID_VEHICLE;
      break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      result = CONST_CALLOUT_POOL_ID_ENTITY_1;
      break;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      result = CONST_CALLOUT_POOL_ID_LOOT_1;
      break;
    default:
      result = CONST_CALLOUT_POOL_SIZE;
      break;
  }
  return result;
}

/*
==============
CG_CalloutMarkerPing_UpdateNewsFeedSingle
==============
*/
void CG_CalloutMarkerPing_UpdateNewsFeedSingle(LocalClientNum_t localClientNum, unsigned __int8 viewIndex, const CalloutMarkerPingView *view)
{
  const CalloutMarkerPingView *v3; 
  LocalClientNum_t v5; 
  int v6; 
  int v7; 
  SndAliasList *calloutMarkerPingLocation; 
  int v9; 
  const char *displayName; 
  const GfxImage *IconForRequest; 
  int row; 
  int v13; 
  CompassVehicleMedia *VehicleMedia; 
  __int64 v15; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  const BG_SpawnGroup_Loot_ItemDef *v17; 
  unsigned __int8 owner; 
  __int16 v19; 
  bool IsEntityAlive; 
  unsigned __int8 v21; 
  int newsFeedPendingFeedbackBits; 
  int v23; 
  __int64 v24; 
  CgStatic *LocalClientStatics; 
  __int64 v26; 
  int *squadMates; 
  int v28; 
  __int64 v29; 
  CgSoundSystem **v30; 
  CgSoundSystem *v31; 
  unsigned int index; 
  int x; 
  char *stringParam; 
  GfxImage *iconParam; 
  int v36; 
  int v37; 
  char *v38; 
  int ownerClientNum; 
  vec3_t outOrigin; 
  __int64 v41; 
  LocalClientNum_t localClientNuma; 
  CalloutMarkerPingPool v43; 
  const CalloutMarkerPingView *v44; 
  int pingParam; 

  v44 = view;
  localClientNuma = localClientNum;
  v41 = -2i64;
  v3 = view;
  v5 = localClientNum;
  v6 = 2;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1575, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    v5 = localClientNuma;
  }
  if ( viewIndex >= 0x34u )
  {
    LODWORD(iconParam) = 52;
    LODWORD(stringParam) = viewIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1576, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", stringParam, iconParam) )
      __debugbreak();
    v5 = localClientNuma;
  }
  if ( (CG_View_IsKillCamView(v5) || CG_GetLocalClientGlobals(v5)->predictedPlayerState.deltaTime) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1577, ASSERT_TYPE_ASSERT, "(CG_CalloutMarkerPing_CanViewMessages( localClientNum ))", (const char *)&queryFormat, "CG_CalloutMarkerPing_CanViewMessages( localClientNum )") )
    __debugbreak();
  v43 = BG_CalloutMarkerPing_ViewIndexToPool(viewIndex);
  LOBYTE(v7) = CG_CalloutMarkerPing_ClassifyPing(localClientNuma, v43, v3);
  calloutMarkerPingLocation = NULL;
  v9 = 0;
  displayName = NULL;
  v38 = NULL;
  IconForRequest = NULL;
  row = 0;
  pingParam = 0;
  v13 = -1;
  ownerClientNum = -1;
  v36 = 1;
  switch ( v7 )
  {
    case 2:
    case 13:
      v9 = 1;
      goto $LN30_1;
    case 3:
      goto $LN29_5;
    case 4:
$LN30_1:
      calloutMarkerPingLocation = cgMedia.calloutMarkerPingLocation;
      break;
    case 5:
      v9 = 10;
      IconForRequest = CG_CalloutMarkerPing_GetIconForRequest(v3->request.inventorySlot);
      calloutMarkerPingLocation = cgMedia.calloutMarkerPingItem;
      displayName = NULL;
      v13 = -1;
      break;
    case 6:
      v9 = 5;
      VehicleMedia = CG_CalloutMarkerPing_GetVehicleMedia(localClientNuma, v3->origin.x);
      v13 = -1;
      if ( !VehicleMedia )
        goto LABEL_22;
      displayName = VehicleMedia->displayName;
      v38 = (char *)VehicleMedia->displayName;
      if ( !VehicleMedia->displayName )
        goto LABEL_22;
      v15 = -1i64;
      do
        ++v15;
      while ( displayName[v15] );
      if ( !(_DWORD)v15 )
      {
LABEL_22:
        displayName = (char *)&queryFormat.fmt + 3;
        v38 = (char *)&queryFormat.fmt + 3;
      }
      calloutMarkerPingLocation = cgMedia.calloutMarkerPingItem;
      break;
    case 7:
      goto $LN33_2;
    case 8:
    case 9:
    case 22:
      calloutMarkerPingLocation = cgMedia.calloutMarkerPingItem;
      break;
    case 10:
      v9 = 3;
      goto $LN33_2;
    case 11:
      v9 = 4;
      IconForRequest = CG_CalloutMarkerPing_GetIconForGascan_Entity(localClientNuma, v3->origin.x, COMPASS_TYPE_PARTIAL);
      calloutMarkerPingLocation = cgMedia.calloutMarkerPingItem;
      displayName = NULL;
      v13 = -1;
      break;
    case 12:
      IconForRequest = cgMedia.compass.calloutMarkerPing_CUAV;
$LN29_5:
      v9 = 4;
      goto $LN33_2;
    case 14:
    case 16:
      v9 = 2;
      LootItemDef = ScriptableCl_GetLootItemDef(localClientNuma, v3->scriptable.index);
      if ( LootItemDef )
        row = LootItemDef->row;
      pingParam = row;
      calloutMarkerPingLocation = cgMedia.calloutMarkerPingItem;
      goto LABEL_29;
    case 15:
      v9 = 2;
      v17 = ScriptableCl_GetLootItemDef(localClientNuma, v3->scriptable.index);
      if ( v17 )
        row = v17->row;
      pingParam = row;
      owner = v3->origin.owner;
      if ( owner )
        v19 = owner - 1;
      else
        v19 = -1;
      IsEntityAlive = CG_CalloutMarkerPing_IsEntityAlive(localClientNuma, v19);
      calloutMarkerPingLocation = cgMedia.calloutMarkerPingItem;
      if ( !IsEntityAlive )
        calloutMarkerPingLocation = cgMedia.calloutMarkerPingRevive;
LABEL_29:
      displayName = NULL;
      v13 = -1;
      break;
    case 17:
      v9 = 4;
      IconForRequest = CG_CalloutMarkerPing_GetIconForGascan_Scriptable(localClientNuma, v3->scriptable.index, COMPASS_TYPE_PARTIAL);
      calloutMarkerPingLocation = cgMedia.calloutMarkerPingItem;
      displayName = NULL;
      v13 = -1;
      break;
    case 18:
      v9 = 11;
      goto LABEL_41;
    case 19:
      v9 = 1;
LABEL_41:
      displayName = CG_CalloutMarkerPing_GetObjectiveStringForScriptable(localClientNuma, v3->scriptable.index);
      v38 = (char *)displayName;
      calloutMarkerPingLocation = cgMedia.calloutMarkerPingLocation;
      v13 = -1;
      break;
    case 20:
    case 21:
      v9 = 9;
$LN33_2:
      calloutMarkerPingLocation = cgMedia.calloutMarkerPingEnemy;
      break;
    default:
      break;
  }
  v21 = v3->origin.owner;
  if ( v21 )
  {
    v13 = v21 - 1;
    ownerClientNum = v13;
  }
  if ( v9 > 0 )
  {
    newsFeedPendingFeedbackBits = s_calloutMarkerPingData[localClientNuma].markers[viewIndex].newsFeedPendingFeedbackBits;
    v37 = newsFeedPendingFeedbackBits;
    if ( newsFeedPendingFeedbackBits )
    {
      CG_CalloutMarkerPing_UpdateSquad(localClientNuma);
      v23 = 1;
      do
      {
        if ( (v6 & newsFeedPendingFeedbackBits) != 0 && ((unsigned __int8)v6 & v3->origin.feedback) != 0 )
        {
          v24 = localClientNuma;
          LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNuma);
          *(_QWORD *)outOrigin.v = LocalClientStatics;
          v26 = 0i64;
          squadMates = s_calloutMarkerPingData[v24].squadMates;
          while ( 1 )
          {
            v28 = *squadMates;
            if ( (LocalClientStatics->GetClientInfo(LocalClientStatics, *squadMates)->game_extrainfo & 7) == v36 )
              break;
            ++v26;
            ++squadMates;
            LocalClientStatics = *(CgStatic **)outOrigin.v;
            if ( v26 >= 4 )
              goto LABEL_60;
          }
          if ( v28 != -1 )
          {
            LUI_BrPingAckMessage(&localClientNuma, v28, ownerClientNum, v9, pingParam, v38, NULL, LUI_luaVM);
            calloutMarkerPingLocation = cgMedia.calloutMarkerPingConfirm;
          }
LABEL_60:
          v23 = v36;
          v3 = v44;
          newsFeedPendingFeedbackBits = v37;
        }
        v36 = ++v23;
        v6 = __ROL4__(v6, 1);
      }
      while ( v23 <= 4 );
    }
    else if ( displayName || IconForRequest )
    {
      LUI_BrSquadMessageCustom(&localClientNuma, v9, displayName, IconForRequest, v13, LUI_luaVM);
    }
    else
    {
      LUI_BrSquadMessage(&localClientNuma, v9, v13, row, LUI_luaVM);
    }
  }
  if ( calloutMarkerPingLocation )
  {
    v29 = localClientNuma;
    if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
    {
      LODWORD(iconParam) = localClientNuma;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", iconParam) )
        __debugbreak();
    }
    if ( (unsigned int)v29 >= CgSoundSystem::ms_allocatedCount )
    {
      LODWORD(iconParam) = CgSoundSystem::ms_allocatedCount;
      LODWORD(stringParam) = v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", stringParam, iconParam) )
        __debugbreak();
    }
    v30 = &CgSoundSystem::ms_soundSystemArray[v29];
    if ( !*v30 )
    {
      LODWORD(iconParam) = v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", iconParam) )
        __debugbreak();
    }
    v31 = *v30;
    if ( v43 == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(v43 - 4) <= 2u )
    {
      x = v3->origin.x;
    }
    else
    {
      if ( (unsigned __int8)(v43 - 9) <= 2u )
      {
        index = v3->scriptable.index;
        ScriptableCl_GetInstanceOrigin(localClientNuma, v3->scriptable.index, &outOrigin);
        CgSoundSystem::PlaySoundAlias(v31, index + 5571, &outOrigin, calloutMarkerPingLocation);
        memset(&outOrigin, 0, sizeof(outOrigin));
        return;
      }
      x = ownerClientNum;
    }
    CgSoundSystem::PlayEntitySoundAlias(v31, x, calloutMarkerPingLocation);
  }
}

/*
==============
CG_CalloutMarkerPing_UpdatePingLookAt
==============
*/
void CG_CalloutMarkerPing_UpdatePingLookAt(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  playerState_s *v3; 
  unsigned __int8 v4; 
  char v5; 
  float v6; 
  unsigned int v7; 
  const CalloutMarkerPingView *View; 
  const CalloutMarkerPingView *v9; 
  int v10; 
  __int128 v11; 
  float v15; 
  const dvar_t *v16; 
  double ZOffset; 
  float v18; 
  double Float_Internal_DebugName; 
  CG_CalloutMarkerPingData *v20; 
  __int64 v21; 
  __int64 v22; 
  playerState_s *ps; 
  CG_CalloutMarkerPingData *v24; 
  vec3_t outWorldOrigin; 
  vec3_t rayDir; 
  vec3_t outOrg; 
  vec3_t bbMax; 
  vec3_t bbMin; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1802, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  ps = &CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->predictedPlayerState;
  v24 = &s_calloutMarkerPingData[v1];
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v3 = ps;
  rayDir = CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->refdef.view.axis.m[0];
  v4 = 0;
  v5 = 53;
  v6 = 0.0;
  do
  {
    if ( v4 / 0xDu >= 4 )
    {
      LODWORD(v22) = 4;
      LODWORD(v21) = v4 / 0xDu;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( teammateIndex ) < (unsigned)( 4 )", "teammateIndex doesn't index CALLOUT_MARKER_PING_MAX_TEAM_SIZE\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v7 = v4 % 0xDu;
    if ( v7 >= 0xD )
    {
      LODWORD(v22) = 13;
      LODWORD(v21) = v4 % 0xDu;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 181, ASSERT_TYPE_ASSERT, "(unsigned)( poolIndex ) < (unsigned)( 13 )", "poolIndex doesn't index CALLOUT_MARKER_PING_LOCAL_PLAYER_POOL_SIZE\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    View = CG_CalloutMarkerPing_GetView((LocalClientNum_t)v1, v4, v3);
    v9 = View;
    if ( View->origin.owner )
    {
      if ( CG_CalloutMarkerPing_GetWorldOrigin((const CalloutMarkerPingPool)v7, View, (LocalClientNum_t)v1, &outWorldOrigin) )
      {
        LOBYTE(v10) = CG_CalloutMarkerPing_ClassifyPing((LocalClientNum_t)v1, (const CalloutMarkerPingPool)v7, v9);
        if ( v10 != 10 )
        {
          v11 = LODWORD(outWorldOrigin.v[1]);
          *(float *)&v11 = fsqrt((float)((float)((float)(outWorldOrigin.v[1] - outOrg.v[1]) * (float)(outWorldOrigin.v[1] - outOrg.v[1])) + (float)((float)(outWorldOrigin.v[0] - outOrg.v[0]) * (float)(outWorldOrigin.v[0] - outOrg.v[0]))) + (float)((float)(outWorldOrigin.v[2] - outOrg.v[2]) * (float)(outWorldOrigin.v[2] - outOrg.v[2])));
          _XMM1 = v11;
          __asm
          {
            vcmpless xmm0, xmm1, xmm11
            vblendvps xmm0, xmm1, xmm10, xmm0
          }
          v15 = (float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outWorldOrigin.v[1] - outOrg.v[1])) * rayDir.v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outWorldOrigin.v[0] - outOrg.v[0])) * rayDir.v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outWorldOrigin.v[2] - outOrg.v[2])) * rayDir.v[2]);
          if ( v15 >= v6 )
          {
            v16 = DCONST_DVARFLT_calloutmarkerping_lookat_ping_icon_dot;
            if ( !DCONST_DVARFLT_calloutmarkerping_lookat_ping_icon_dot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_lookat_ping_icon_dot") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v16);
            if ( v15 >= v16->current.value )
              goto LABEL_21;
            ZOffset = CG_CalloutMarkerPing_GetZOffset((const CalloutMarkerPingPool)v7, v9, (LocalClientNum_t)v1);
            v18 = *(float *)&ZOffset;
            if ( *(float *)&ZOffset > 0.0 )
            {
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_lookat_ping_beam_dist, "calloutmarkerping_lookat_ping_beam_dist");
              bbMax.v[0] = *(float *)&Float_Internal_DebugName + outWorldOrigin.v[0];
              bbMax.v[1] = *(float *)&Float_Internal_DebugName + outWorldOrigin.v[1];
              bbMax.v[2] = *(float *)&Float_Internal_DebugName + outWorldOrigin.v[2];
              bbMin.v[0] = outWorldOrigin.v[0] - *(float *)&Float_Internal_DebugName;
              bbMin.v[2] = outWorldOrigin.v[2] - (float)(*(float *)&Float_Internal_DebugName + v18);
              bbMin.v[1] = outWorldOrigin.v[1] - *(float *)&Float_Internal_DebugName;
              *(float *)&ps = 0.0;
              if ( IntersectRayAABB(&outOrg, &rayDir, &bbMin, &bbMax, (float *)&ps) )
              {
LABEL_21:
                v6 = v15;
                v5 = v4;
              }
            }
          }
        }
      }
    }
    ++v4;
  }
  while ( v4 < 0x34u );
  v20 = v24;
  if ( v24->pingLookAtViewIndex != v5 )
  {
    v24->pingLookAtViewIndex = v5;
    v20->dirty = 1;
  }
}

/*
==============
CG_CalloutMarkerPing_UpdateSquad
==============
*/
void CG_CalloutMarkerPing_UpdateSquad(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  int v3; 
  CG_CalloutMarkerPingData *v4; 
  CgStatic *LocalClientStatics; 
  __int64 v6; 
  const characterInfo_t *CharacterInfo; 
  __int64 v8; 
  const characterInfo_t *v9; 
  centity_t *Entity; 
  __int64 v11; 
  __int64 v12; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = 0;
  v4 = &s_calloutMarkerPingData[v1];
  *(_QWORD *)&v4->squadMateCount = 0i64;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v1);
  v6 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, LocalClientGlobals->clientNum);
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum);
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v3 >= (int)ComCharacterLimits::ms_gameData.m_clientCount )
      break;
    v8 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, v3);
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( v3 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v12) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(v11) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      v9 = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v3);
    }
    else
    {
      v9 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v3);
    }
    if ( *(_DWORD *)(v8 + 160) == *(_DWORD *)(v6 + 160) && v9->team == CharacterInfo->team )
    {
      v4->squadMates[v4->squadMateCount++] = v3;
      Entity = CG_GetEntity((const LocalClientNum_t)v1, (__int16)v3);
      if ( (Entity->flags & 1) != 0 && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 0x11u) && !CG_Players_IsPlayerInGulag((const LocalClientNum_t)v1, v3) )
        ++v4->squadMateAliveCount;
    }
    ++v3;
  }
}

/*
==============
CG_CalloutMarkerPing_UpdateTacmapLookAt
==============
*/
void CG_CalloutMarkerPing_UpdateTacmapLookAt(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  __int64 v2; 
  CgCompassSystemMP *CompassSystemMP; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v5; 
  float v6; 
  double CurrentCompassZoomLevel; 
  float v8; 
  float v9; 
  double Float_Internal_DebugName; 
  float v11; 
  const playerState_s *p_predictedPlayerState; 
  unsigned __int8 v13; 
  float v14; 
  float v15; 
  CalloutMarkerPingPool pool; 
  const CalloutMarkerPingView *View; 
  __int16 *v18; 
  float v19; 
  float v20; 
  float v21; 
  unsigned int v22; 
  int v23; 
  ObjectiveBackground *p_background; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  const dvar_t *v29; 
  unsigned __int8 v30; 
  unsigned __int8 v31; 
  const ObjectiveSettings *v32; 
  const ObjectiveSettings *v33; 
  objectiveState_t state; 
  unsigned int InstanceIndex; 
  int v36; 
  float v37; 
  float v38; 
  float v39; 
  bool v40; 
  int *p_entIndex; 
  __int64 v42; 
  bool v43; 
  centity_t *Entity; 
  float v45; 
  float v46; 
  float v47; 
  GfxImage **outIcon; 
  __int64 v49; 
  GfxImage *v51; 
  vec3_t outPosition; 
  vec3_t outDirection; 

  v1 = localClientNum;
  v2 = localClientNum;
  s_calloutMarkerPingData[v2].tacmapLookAt.pingIndex = 53;
  s_calloutMarkerPingData[v2].tacmapLookAt.scriptableIndex = -1;
  s_calloutMarkerPingData[v2].tacmapLookAt.objectiveIndex = -1;
  s_calloutMarkerPingData[v2].tacmapLookAt.entityIndex = 2047;
  if ( CG_GameInterface_PlayingBR() )
  {
    CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(v1);
    if ( CgCompassSystem::GetCurrentCompassType(CompassSystemMP) == COMPASS_TYPE_TACMAP )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(v1);
      v5 = DCONST_DVARINT_bg_counterUAVStrengthLevelShowFriendlyOnly;
      if ( !DCONST_DVARINT_bg_counterUAVStrengthLevelShowFriendlyOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_counterUAVStrengthLevelShowFriendlyOnly") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( LocalClientGlobals->predictedPlayerState.radarStrength > v5->current.integer )
      {
        v6 = LocalClientGlobals->compassMapWorldSize.v[0];
        if ( v6 > 0.0 )
        {
          CurrentCompassZoomLevel = CgCompassSystem::GetCurrentCompassZoomLevel(CompassSystemMP);
          v8 = *(float *)&CurrentCompassZoomLevel;
          v9 = 1.0 / v6;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_trace_tacmap_radius, "calloutmarkerping_trace_tacmap_radius");
          v11 = *(float *)&Float_Internal_DebugName * v8;
          CG_CalloutMarkerPing_GetTacmapWorldPos(v1, &outPosition, &outDirection);
          p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
          *(_QWORD *)outDirection.v = &LocalClientGlobals->predictedPlayerState;
          v13 = 0;
          v14 = outPosition.v[1];
          v15 = outPosition.v[0];
          do
          {
            if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
            {
              LODWORD(v49) = 2;
              LODWORD(outIcon) = v1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2019, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outIcon, v49) )
                __debugbreak();
            }
            if ( v13 == 52 )
              pool = s_calloutMarkerPingData[v2].predicted.pool;
            else
              pool = BG_CalloutMarkerPing_ViewIndexToPool(v13);
            View = CG_CalloutMarkerPing_GetView(v1, v13, p_predictedPlayerState);
            v18 = (__int16 *)View;
            if ( View->origin.owner )
            {
              CG_CalloutMarkerPing_GetWorldOrigin(pool, View, v1, &outPosition);
              v19 = outPosition.v[0];
              v20 = outPosition.v[1];
              v21 = fsqrt((float)((float)(outPosition.v[1] - v14) * (float)(outPosition.v[1] - v14)) + (float)((float)(outPosition.v[0] - v15) * (float)(outPosition.v[0] - v15))) * v9;
              if ( v11 > v21 )
              {
                v11 = v21;
                s_calloutMarkerPingData[v2].tacmapLookAt.scriptableIndex = -1;
                s_calloutMarkerPingData[v2].tacmapLookAt.objectiveIndex = -1;
                s_calloutMarkerPingData[v2].tacmapLookAt.entityIndex = 2047;
                s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[0] = v19;
                s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[1] = v20;
                s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[2] = outPosition.v[2];
                s_calloutMarkerPingData[v2].tacmapLookAt.pingIndex = v13;
                if ( pool == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(pool - 4) <= 2u )
                {
                  s_calloutMarkerPingData[v2].tacmapLookAt.entityIndex = *v18;
                }
                else if ( (unsigned __int8)(pool - 9) > 2u )
                {
                  if ( pool == CONST_CALLOUT_POOL_ID_WORLD )
                    s_calloutMarkerPingData[v2].tacmapLookAt.objectiveIndex = *v18;
                }
                else
                {
                  s_calloutMarkerPingData[v2].tacmapLookAt.scriptableIndex = *(_DWORD *)v18;
                }
              }
            }
            ++v13;
          }
          while ( v13 < 0x35u );
          if ( s_calloutMarkerPingData[v2].tacmapLookAt.pingIndex == 53 )
          {
            v22 = 0;
            if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_objectives, "calloutmarkerping_tacmap_hit_objectives") )
            {
              v23 = 0;
              p_background = &p_predictedPlayerState->objectives[0].background;
              do
              {
                if ( *((char *)p_background - 2) >= 0 && *(_DWORD *)(p_background - 158) == 2047 && !CompassSystemMP->IsObjectiveFiltered(CompassSystemMP, COMPASS_TYPE_TACMAP, *p_background) && !CompassSystemMP->IsObjectiveMini(CompassSystemMP, COMPASS_TYPE_TACMAP, *p_background) && CgCompassSystemMP::GetObjectiveShouldRender(CompassSystemMP, *((objectiveState_t *)p_background + 1), (ObjectiveFlags)*((unsigned __int16 *)p_background - 1), 0, *(_DWORD *)(p_background - 14), (const GfxImage **)&v51) )
                {
                  if ( *(_DWORD *)(p_background - 158) != 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3151, ASSERT_TYPE_ASSERT, "(obj->entNum[0] == ENTITYNUM_NONE)", (const char *)&queryFormat, "obj->entNum[0] == ENTITYNUM_NONE") )
                    __debugbreak();
                  v25 = *(float *)(p_background - 126);
                  v26 = *(float *)(p_background - 122);
                  v27 = *(float *)(p_background - 118);
                  v28 = fsqrt((float)((float)(v26 - v14) * (float)(v26 - v14)) + (float)((float)(v25 - v15) * (float)(v25 - v15))) * v9;
                  if ( v11 > v28 )
                  {
                    v11 = v28;
                    s_calloutMarkerPingData[v2].tacmapLookAt.pingIndex = 53;
                    s_calloutMarkerPingData[v2].tacmapLookAt.scriptableIndex = -1;
                    s_calloutMarkerPingData[v2].tacmapLookAt.entityIndex = 2047;
                    s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[0] = v25;
                    s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[1] = v26;
                    s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[2] = v27;
                    s_calloutMarkerPingData[v2].tacmapLookAt.objectiveIndex = v23;
                  }
                }
                ++v23;
                p_background += 172;
              }
              while ( v23 < 32 );
              v22 = 0;
              v1 = localClientNum;
            }
            if ( s_calloutMarkerPingData[v2].tacmapLookAt.objectiveIndex == -1 )
            {
              if ( !CG_CalloutMarkerPing_IsInPrematch(v1) )
              {
                v29 = DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_tablets;
                if ( !DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_tablets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_tacmap_hit_tablets") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v29);
                if ( v29->current.enabled || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_kiosks, "calloutmarkerping_tacmap_hit_kiosks") )
                {
                  v30 = ScriptableCl_ObjectiveCount(v1);
                  v31 = 0;
                  if ( v30 )
                  {
                    do
                    {
                      v32 = ScriptableCl_ObjectiveGet(v1, v31, &outPosition);
                      v33 = v32;
                      if ( v32 )
                      {
                        state = v32->state;
                        if ( (state == OBJST_ACTIVE || state == OBJST_CURRENT) && !CompassSystemMP->IsObjectiveFiltered(CompassSystemMP, COMPASS_TYPE_TACMAP, v33->background) && !CompassSystemMP->IsObjectiveMini(CompassSystemMP, COMPASS_TYPE_TACMAP, v33->background) )
                        {
                          InstanceIndex = ScriptableCl_ObjectiveGetInstanceIndex(v1, v31);
                          v36 = CG_CalloutMarkerPing_ClassifyScriptable(v1, InstanceIndex);
                          if ( CG_CalloutMarkerPing_TypeCanBeTacMapHit(v36) )
                          {
                            v37 = outPosition.v[0];
                            v38 = outPosition.v[1];
                            v39 = fsqrt((float)((float)(outPosition.v[1] - v14) * (float)(outPosition.v[1] - v14)) + (float)((float)(outPosition.v[0] - v15) * (float)(outPosition.v[0] - v15))) * v9;
                            if ( v11 > v39 )
                            {
                              v11 = v39;
                              s_calloutMarkerPingData[v2].tacmapLookAt.pingIndex = 53;
                              s_calloutMarkerPingData[v2].tacmapLookAt.objectiveIndex = -1;
                              s_calloutMarkerPingData[v2].tacmapLookAt.entityIndex = 2047;
                              s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[0] = v37;
                              s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[1] = v38;
                              s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[2] = outPosition.v[2];
                              s_calloutMarkerPingData[v2].tacmapLookAt.scriptableIndex = InstanceIndex;
                            }
                          }
                        }
                      }
                      ++v31;
                    }
                    while ( v31 < v30 );
                    v22 = 0;
                  }
                }
              }
              if ( s_calloutMarkerPingData[v2].tacmapLookAt.scriptableIndex == -1 && (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_vehicles, "calloutmarkerping_tacmap_hit_vehicles") )
              {
                v40 = DVARBOOL_bg_compassEnableVisibleVehiclesMask && Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_compassEnableVisibleVehiclesMask, "bg_compassEnableVisibleVehiclesMask");
                p_entIndex = &CgVehicleSystem::GetVehicleSystem(v1)->m_vehicleClients[0].entIndex;
                v42 = *(_QWORD *)outDirection.v;
                v43 = 1;
                do
                {
                  if ( !v43 )
                  {
                    LODWORD(v49) = 128;
                    LODWORD(outIcon) = v22;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", outIcon, v49) )
                      __debugbreak();
                  }
                  if ( CG_Vehicle_IsClientValid(v1, (const VehicleClient *)(p_entIndex - 20)) && (p_entIndex[5] & 0x20000) == 0 )
                  {
                    if ( !v40 )
                      goto LABEL_77;
                    if ( v22 >= 0x80 )
                    {
                      LODWORD(v49) = 128;
                      LODWORD(outIcon) = v22;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outIcon, v49) )
                        __debugbreak();
                    }
                    if ( ((0x80000000 >> (v22 & 0x1F)) & *(_DWORD *)(v42 + 4 * ((unsigned __int64)v22 >> 5) + 4580)) == 0 )
                    {
LABEL_77:
                      Entity = CG_GetEntity(v1, *p_entIndex);
                      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3674, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
                        __debugbreak();
                      if ( !CompassSystemMP->IsVehicleFiltered(CompassSystemMP, COMPASS_TYPE_TACMAP, Entity) && !CompassSystemMP->IsVehicleMini(CompassSystemMP, COMPASS_TYPE_TACMAP) )
                      {
                        CG_GetPoseOrigin(&Entity->pose, &outDirection);
                        v45 = outDirection.v[0];
                        v46 = outDirection.v[1];
                        v47 = fsqrt((float)((float)(outDirection.v[1] - v14) * (float)(outDirection.v[1] - v14)) + (float)((float)(outDirection.v[0] - v15) * (float)(outDirection.v[0] - v15))) * v9;
                        if ( v11 > v47 )
                        {
                          v11 = v47;
                          s_calloutMarkerPingData[v2].tacmapLookAt.pingIndex = 53;
                          s_calloutMarkerPingData[v2].tacmapLookAt.scriptableIndex = -1;
                          s_calloutMarkerPingData[v2].tacmapLookAt.objectiveIndex = -1;
                          s_calloutMarkerPingData[v2].tacmapLookAt.entityIndex = 2047;
                          s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[0] = v45;
                          s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[1] = v46;
                          s_calloutMarkerPingData[v2].tacmapLookAt.origin.v[2] = outDirection.v[2];
                          s_calloutMarkerPingData[v2].tacmapLookAt.entityIndex = *(_WORD *)p_entIndex;
                        }
                        memset(&outDirection, 0, sizeof(outDirection));
                      }
                    }
                  }
                  ++v22;
                  p_entIndex += 147;
                  v43 = v22 < 0x80;
                }
                while ( (int)v22 < 128 );
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_CalloutMarkerPing_ViewIndexToPool
==============
*/
CalloutMarkerPingPool CG_CalloutMarkerPing_ViewIndexToPool(LocalClientNum_t localClientNum, unsigned __int8 viewIndex)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2019, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( viewIndex >= 0x35u )
  {
    LODWORD(v6) = 53;
    LODWORD(v5) = viewIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2020, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( CG_CALLOUTMARKERPING_VIEW_INDEX_MAX )", "viewIndex doesn't index CG_CALLOUTMARKERPING_VIEW_INDEX_MAX\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( viewIndex == 52 )
    return s_calloutMarkerPingData[v2].predicted.pool;
  else
    return BG_CalloutMarkerPing_ViewIndexToPool(viewIndex);
}

/*
==============
CG_CalloutMarkerPing_WaitForContextualPingWorkerThread
==============
*/
void CG_CalloutMarkerPing_WaitForContextualPingWorkerThread(const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  int v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5249, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    LODWORD(v2) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5250, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_CalloutMarkerPing_WaitForContextualPingWorkerThread");
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CONTEXTUAL_PING);
  Sys_ProfEndNamedEvent();
}

/*
==============
GetCUAVFriendliness
==============
*/
__int64 GetCUAVFriendliness(LocalClientNum_t m_localClientNum, unsigned int entNum)
{
  __int64 v2; 
  CgCompassSystemMP *CompassSystemMP; 
  int clientNum; 
  const cg_t *v5; 
  int *p_scramblerEntNum; 
  int v7; 
  __int64 v8; 
  CgEntitySystem **v9; 
  int *v10; 
  __int64 v11; 
  CgEntitySystem *v12; 
  centity_t *Entity; 
  const cg_t *v14; 
  team_t team; 
  team_t v16; 
  __int64 result; 
  __int64 v18; 
  __int64 v19; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 

  v2 = m_localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(m_localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v2);
  CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)v2);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v5 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(v5, clientNum);
  p_scramblerEntNum = &CompassSystemMP->m_compassScramblers[0][0].scramblerEntNum;
  v7 = 0;
LABEL_5:
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v7 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
    return 1i64;
  v8 = 0i64;
  v9 = &CgEntitySystem::ms_entitySystemArray[v2];
  v10 = p_scramblerEntNum;
  while ( 1 )
  {
    v11 = *v10;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v19) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v19) )
        __debugbreak();
    }
    if ( (unsigned int)v2 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v19) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( !*v9 )
    {
      LODWORD(v19) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v19) )
        __debugbreak();
    }
    v12 = *v9;
    if ( (unsigned int)v11 >= 0x800 )
    {
      LODWORD(v19) = 2048;
      LODWORD(v18) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( (*(_DWORD *)&v12->m_entities[v11].nextState.clientLinkInfo & 0x7FF) - 1 == entNum )
      break;
    ++v8;
    v10 += 4;
    if ( v8 >= 4 )
    {
      ++v7;
      p_scramblerEntNum += 16;
      goto LABEL_5;
    }
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v2, v7);
  v14 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  team = CG_GetCharacterInfo(v14, v7)->team;
  v16 = CharacterInfo->team;
  if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
    __debugbreak();
  if ( v16 == TEAM_ZERO )
    return 1i64;
  result = 2i64;
  if ( v16 != team )
    return 1i64;
  return result;
}

