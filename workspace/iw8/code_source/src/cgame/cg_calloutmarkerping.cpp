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
          __asm { vmovss  xmm2, cs:TEXT_SCALE; scale }
          CL_AddDebugStringCentered(&outDrawPos, &colorOrange, *(float *)&_XMM2, dest, 0, 0);
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
  __int64 v3; 
  __int16 bestEntNum; 
  unsigned int bestScriptable; 
  CalloutMarkerPingType v7; 
  centity_t *Entity; 
  int bestGSCObjective; 
  CalloutMarkerPingScore outPingScore; 

  Sys_ProfBeginNamedEvent(0xFF808080, "CG_CalloutMarkerPing_ExecuteContextualPingWorkerThread");
  v3 = *((int *)cmdInfo + 12);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+78h+outPingScore.bestScore], xmm0
  }
  outPingScore.bestEntNum = 2047;
  *(_DWORD *)outPingScore.bestType = 1;
  *(_QWORD *)&outPingScore.bestScriptable = -1i64;
  CG_CalloutMarkerPing_PickContextualTarget((const LocalClientNum_t)v3, (const vec3_t *)cmdInfo, (const tmat33_t<vec3_t> *)((char *)cmdInfo + 12), &outPingScore);
  s_contextualPingTargets[v3].type = None;
  bestEntNum = outPingScore.bestEntNum;
  bestScriptable = outPingScore.bestScriptable;
  if ( (unsigned __int8)(CG_CalloutMarkerPing_CheckSquadPingsForTarget((LocalClientNum_t)v3, outPingScore.bestEntNum, outPingScore.bestScriptable, -1) - 52) <= 1u )
  {
    if ( bestEntNum == 2047 )
    {
      if ( bestScriptable == -1 )
      {
        bestGSCObjective = outPingScore.bestGSCObjective;
        if ( outPingScore.bestGSCObjective != -1 )
        {
          s_contextualPingTargets[v3].type = Menu;
          s_contextualPingTargets[v3].data.scriptable.scriptableIndex = bestGSCObjective;
        }
      }
      else
      {
        s_contextualPingTargets[v3].type = 2;
        s_contextualPingTargets[v3].data.scriptable.scriptableIndex = bestScriptable;
      }
    }
    else
    {
      v7 = outPingScore.bestType[0];
      if ( (unsigned int)(*(_DWORD *)outPingScore.bestType - 6) > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5180, ASSERT_TYPE_ASSERT, "(( pingScore.bestType < CalloutMarkerPingType::SCRIPTABLES_BEGIN ) && ( pingScore.bestType >= CalloutMarkerPingType::ENTITIES_BEGIN ))", (const char *)&queryFormat, "( pingScore.bestType < CalloutMarkerPingType::SCRIPTABLES_BEGIN ) && ( pingScore.bestType >= CalloutMarkerPingType::ENTITIES_BEGIN )", -2i64) )
        __debugbreak();
      Entity = CG_GetEntity((const LocalClientNum_t)v3, bestEntNum);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5183, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( (Entity->flags & 1) != 0 && Entity->nextState.eType != ET_PLAYER )
      {
        s_contextualPingTargets[v3].type = 1;
        s_contextualPingTargets[v3].data.entity.entNum = bestEntNum;
        s_contextualPingTargets[v3].data.entity.pool = CG_CalloutMarkerPing_TypeGetPoolID(v7);
        s_contextualPingTargets[v3].data.entity.zOffset = CG_CalloutMarkerPing_GetEntityZOffset((LocalClientNum_t)v3, bestEntNum);
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
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000
        vcmpltss xmm1, xmm2, xmm0
        vmovss  xmm0, cs:__real@40000000
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
      __asm { vmovss  xmm0, cs:__real@3f800000; jumptable 00000001403C00B5 default case, cases 0-5,7-13,17,20-22 }
      break;
  }
  return *(double *)&_XMM0;
}

/*
==============
CG_CalloutMarkerPing_GetAspectRatioForIcon
==============
*/

float __fastcall CG_CalloutMarkerPing_GetAspectRatioForIcon(const GfxImage *const icon, double _XMM1_8)
{
  if ( icon && icon->height )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm0, xmm1, xmm0
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_CalloutMarkerPing_GetAspectRatioForScriptable
==============
*/
float CG_CalloutMarkerPing_GetAspectRatioForScriptable(LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  unsigned __int8 v6; 
  const ObjectiveSettings *v7; 
  const GfxImage *v8; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  const BG_SpawnGroup_Loot_ItemDef *v11; 
  BgWeaponHandle v12; 
  CgWeaponMap *Instance; 
  const Weapon *Weapon; 
  GfxImage *icon; 
  vec3_t out_origin; 
  char *outName; 

  if ( ScriptableCl_ObjectiveActiveForInstance(localClientNum, scriptableIndex) )
  {
    v6 = ScriptableCl_ObjectiveGetForInstance(localClientNum, scriptableIndex);
    v7 = ScriptableCl_ObjectiveGet(localClientNum, v6, &out_origin);
    if ( v7 && NetConstStrings_AreStringsLoaded() && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, v7->icon, (const char **)&outName) )
    {
      v8 = Image_Register(outName, IMAGE_TRACK_HUD);
      *(float *)&_XMM0 = CG_CalloutMarkerPing_GetAspectRatioForIcon(v8, *(double *)&_XMM1);
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
    memset(&out_origin, 0, sizeof(out_origin));
  }
  else
  {
    LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, scriptableIndex);
    v11 = LootItemDef;
    if ( !LootItemDef )
      goto LABEL_14;
    if ( BG_SpawnGroup_Loot_IsCustomWeaponItemDef(LootItemDef) )
    {
      v12.m_mapEntryId = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->extraPayload;
      Instance = CgWeaponMap::GetInstance(localClientNum);
      Weapon = BgWeaponMap::GetWeapon(Instance, v12);
      BG_WeaponCompleteDef(Weapon, 0);
    }
    icon = v11->icon;
    if ( icon && icon->height )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm0, xmm1, xmm0
      }
    }
    else
    {
LABEL_14:
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
  }
  return *(float *)&_XMM0;
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
  team_t Friendliness; 
  vec4_t *v21; 

  _RBX = out_color;
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
      __asm
      {
        vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; jumptable 00000001403C04EE case 0
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
        vmovss  dword ptr [rbx+0Ch], xmm1
      }
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
      __asm
      {
        vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; jumptable 00000001403C04EE cases 1,3,4,8-10,18,20-22
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      }
      goto LABEL_7;
    case 2:
    case 5:
    case 13:
    case 19:
      CG_CalloutMarkerPing_GetColorForAllyOrSelf(localClientNum, clientNum, v10, _RBX);
      return;
    case 6:
      Friendliness = CG_CalloutMarkerPing_GetFriendliness(pool, view, localClientNum);
      v21 = &colorWhite;
      if ( Friendliness == TEAM_ONE )
        v21 = &colorRed;
      _RBX->v[0] = v21->v[0];
      _RBX->v[1] = v21->v[1];
      _RBX->v[2] = v21->v[2];
      _RBX->v[3] = v21->v[3];
      return;
    case 7:
    case 11:
    case 12:
    case 17:
      __asm
      {
        vmovss  xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B; jumptable 00000001403C04EE cases 7,11,12,17
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+0Ch; vec4_t const colorRed
      }
LABEL_7:
      __asm { vmovss  dword ptr [rbx+0Ch], xmm1 }
      break;
    case 14:
    case 15:
    case 16:
      CG_CalloutMarkerPing_GetColorForLoot(localClientNum, view->scriptable.index, _RBX);
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

  _RBX = out_color;
  LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, scriptableIndex);
  if ( LootItemDef )
  {
    _EAX = ScriptableCl_GetLootItemRarityColor(localClientNum, LootItemDef->rarity);
    __asm
    {
      vmovd   xmm0, eax
      vpmovzxbd xmm1, xmm0
      vcvtdq2ps xmm3, xmm1
      vmulps  xmm0, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
      vmovups xmmword ptr [rbx], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  dword ptr [rbx+0Ch], xmm1
    }
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
  unsigned int v10; 
  const cpose_t *v11; 
  unsigned int scriptableIndex; 
  __int16 entNum; 
  const cpose_t *Pose; 
  __int64 v28; 

  _RBX = outDrawPos;
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
      CG_GetPoseOrigin(Pose, _RBX);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vaddss  xmm2, xmm1, cs:ENTITY_DRAW_Z_OFFSET
        vmovss  dword ptr [rbx+8], xmm2
      }
      return 1;
    case 2:
    case 3:
      scriptableIndex = contextualPingTarget->data.scriptable.scriptableIndex;
      if ( scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5303, ASSERT_TYPE_ASSERT, "(scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
        __debugbreak();
      ScriptableCl_GetInstanceOrigin(localClientNum, scriptableIndex, _RBX);
      __asm
      {
        vmovss  xmm0, cs:SCRIPTABLE_DRAW_Z_OFFSET
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
      }
      return 1;
    case 4:
      _RDI = CG_GetLocalClientGlobals(localClientNum);
      _RSI = contextualPingTarget->data.objective.objectiveIndex;
      v10 = _RDI->predictedPlayerState.objectives[_RSI].entNum[0];
      if ( v10 < 0x7FE && (v11 = CG_GetPose(localClientNum, v10)) != NULL )
      {
        CG_GetPoseOrigin(v11, _RBX);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rsi+rdi+12FCh]
          vaddss  xmm1, xmm0, dword ptr [rbx+8]
          vmovss  dword ptr [rbx+8], xmm1
        }
        return 1;
      }
      else
      {
        _RBX->v[0] = _RDI->predictedPlayerState.objectives[_RSI].origin[0].v[0];
        _RBX->v[1] = _RDI->predictedPlayerState.objectives[_RSI].origin[0].v[1];
        result = 1;
        __asm
        {
          vmovss  xmm1, dword ptr [rsi+rdi+12A0h]
          vmovss  dword ptr [rbx+8], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rsi+rdi+12FCh]
          vaddss  xmm1, xmm0, xmm1
          vmovss  dword ptr [rbx+8], xmm1
        }
      }
      break;
    default:
      LODWORD(v28) = contextualPingTarget->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 5330, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CalloutMarkerPing_GetDrawPos: Unhandled ping target type: %d", v28) )
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
  __int64 v29; 
  __int64 v30; 
  hknpBodyId result; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3723, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned __int16)entNum >= 0x7FEu )
  {
    LODWORD(v30) = 2046;
    LODWORD(v29) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3724, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "entNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v29, v30) )
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
    LODWORD(v30) = 3 * localClientNum + 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v30) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * localClientNum) <= 5 )
  {
    LODWORD(v30) = 3 * localClientNum + 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v30) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v4 <= 1 )
  {
    LODWORD(v30) = 3 * localClientNum + 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v30) )
      __debugbreak();
  }
  m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v4, Instance, 0)->m_serialAndIndex;
  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
LABEL_24:
    _RAX = CG_GetEntity(localClientNum, v5);
    __asm { vmovss  xmm2, cs:VEHICLE_OFFSET }
    _ECX = 14;
    __asm { vmovd   xmm1, ecx }
    LODWORD(_RAX) = _RAX->nextState.eType;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vxorps  xmm1, xmm1, xmm1
      vblendvps xmm0, xmm1, xmm2, xmm3
    }
  }
  else
  {
    Physics_GetRigidBodyAABB((Physics_WorldId)v4, m_serialAndIndex, &aabbMin, &aabbMax, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+aabbMin]
      vsubss  xmm3, xmm0, dword ptr [rsp+88h+aabbMax]
      vmovss  xmm1, dword ptr [rsp+88h+aabbMin+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+88h+aabbMax+4]
      vmovss  xmm0, dword ptr [rsp+88h+aabbMin+8]
      vsubss  xmm4, xmm0, dword ptr [rsp+88h+aabbMax+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm2, cs:__real@3e800000
      vsqrtss xmm0, xmm1, xmm1
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_CalloutMarkerPing_GetEntityZOffset
==============
*/
int CG_CalloutMarkerPing_GetEntityZOffset(LocalClientNum_t localClientNum, __int16 entNum)
{
  int v5; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  int v8; 
  __int64 v9; 
  ObjectiveView *objectives; 
  int result; 
  int v17; 

  v5 = entNum;
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( (Entity->flags & 1) == 0 )
    return 0;
  if ( !BG_IsVehicleEntity(&Entity->nextState) )
  {
    LOBYTE(v17) = CG_CalloutMarkerPing_ClassifyEntity(localClientNum, entNum);
    if ( v17 == 10 )
      return 82;
    if ( v17 != 7 )
    {
      if ( v17 == 8 )
        return 24;
      if ( v17 == 9 )
        return 60;
      if ( v17 != 11 )
      {
        if ( v17 == 12 )
          return 120;
        if ( v17 != 13 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3057, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled entity type in CG_CalloutMarkerPing_GetEntityZOffset()") )
            __debugbreak();
          return 0;
        }
        return 60;
      }
    }
    return 32;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v8 = 0;
  v9 = 0i64;
  objectives = LocalClientGlobals->predictedPlayerState.objectives;
  while ( objectives->entNum[0] != v5 )
  {
    ++v8;
    ++v9;
    ++objectives;
    if ( v9 >= 32 )
      goto LABEL_6;
  }
  if ( v8 != -1 )
  {
    CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+rdx+12FCh]
      vcvttss2si eax, xmm0
    }
    return result;
  }
LABEL_6:
  if ( CG_CalloutMarkerPing_GetVehicleMedia(localClientNum, entNum) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+8]
      vcvttss2si eax, xmm0
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvttss2si eax, xmm0
    }
  }
  return result;
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
  const dvar_t *v6; 
  const dvar_t *v10; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  CG_GetLocalClientGlobals(localClientNum);
  _RBX = DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_basis;
  if ( !DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_basis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_calloutmarkerping_iconpulse_basis") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  v6 = DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_frequency;
  if ( !DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_frequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_calloutmarkerping_iconpulse_frequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+65ECh]
    vdivss  xmm0, xmm0, dword ptr [rbx+28h]; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  v10 = DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_amplitude;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_amplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_calloutmarkerping_iconpulse_amplitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbx+28h]
    vmovaps xmm6, [rsp+68h+var_18]
    vaddss  xmm0, xmm0, xmm7
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_CalloutMarkerPing_GetTacmapWorldPos
==============
*/
void CG_CalloutMarkerPing_GetTacmapWorldPos(LocalClientNum_t localClientNum, vec3_t *outPosition, vec3_t *outDirection)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v8; 
  vec2_t outWorldPosition; 

  _RSI = outPosition;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_CompassFullToWorld(LocalClientGlobals, &LocalClientGlobals->locationSelectorCursor, &outWorldPosition);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+outWorldPosition]
    vmovss  xmm1, dword ptr [rsp+68h+outWorldPosition+4]
    vmovss  dword ptr [rsi], xmm0
    vmovss  dword ptr [rsi+4], xmm1
  }
  v8 = DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height;
  if ( !DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_tacmap_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  LODWORD(_RSI->v[2]) = v8->current.integer;
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
  int v7; 
  cg_t *LocalClientGlobals; 
  __int64 x; 
  unsigned __int8 v11; 
  const ObjectiveSettings *v12; 
  vec3_t out_origin; 

  if ( pool == CONST_CALLOUT_POOL_ID_REQUEST || pool == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(pool - 4) <= 2u )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    return *(float *)&_XMM0;
  }
  if ( (unsigned __int8)pool > CONST_CALLOUT_POOL_ID_DANGER_3 )
  {
    LOBYTE(v7) = CG_CalloutMarkerPing_ClassifyPing(localClientNum, pool, view);
    if ( (unsigned int)(v7 - 20) <= 1 )
    {
      __asm { vmovss  xmm0, cs:__real@42400000 }
      return *(float *)&_XMM0;
    }
    if ( ((v7 - 14) & 0xFFFFFFFD) != 0 )
    {
      if ( (unsigned int)(v7 - 18) <= 1 )
      {
        v11 = ScriptableCl_ObjectiveGetForInstance(localClientNum, view->scriptable.index);
        v12 = ScriptableCl_ObjectiveGet(localClientNum, v11, &out_origin);
        if ( v12 && ((v12->state - 2) & 0xFD) == 0 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rax+4]
          }
          return *(float *)&_XMM0;
        }
        goto LABEL_20;
      }
      if ( v7 == 4 )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        x = view->origin.x;
        if ( (cg_t *)((char *)LocalClientGlobals + x * 172) != (cg_t *)-4728i64 && ((LocalClientGlobals->predictedPlayerState.objectives[x].state - 2) & 0xFD) == 0 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rcx+84h]
          }
          return *(float *)&_XMM0;
        }
LABEL_20:
        __asm { vmovss  xmm0, cs:__real@42900000 }
        return *(float *)&_XMM0;
      }
      if ( v7 != 17 )
      {
        if ( v7 != 22 )
        {
          __asm { vxorps  xmm0, xmm0, xmm0 }
          return *(float *)&_XMM0;
        }
        goto LABEL_20;
      }
    }
    __asm { vmovss  xmm0, cs:__real@42000000 }
    return *(float *)&_XMM0;
  }
  __asm { vmovss  xmm0, cs:__real@42700000 }
  return *(float *)&_XMM0;
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
  const dvar_t *v14; 
  int v16; 
  float fmt; 
  float fmta; 
  float traceRadius; 
  float traceRadiusa; 

  _RBX = DCONST_DVARFLT_calloutmarkerping_trace_entity_distance;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  if ( !DCONST_DVARFLT_calloutmarkerping_trace_entity_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_entity_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_calloutmarkerping_trace_entity_radius;
  if ( !DCONST_DVARFLT_calloutmarkerping_trace_entity_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_entity_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  v14 = DVARBOOL_calloutmarkerping_enableLongRangeEnemyPing;
  if ( !DVARBOOL_calloutmarkerping_enableLongRangeEnemyPing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_enableLongRangeEnemyPing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    __asm
    {
      vmovss  [rsp+78h+traceRadius], xmm7
      vmovss  dword ptr [rsp+78h+fmt], xmm6
    }
    CG_CalloutMarkerPing_PickContextualTarget_CollectAndScore(localClientNum, viewPos, viewAxis, 16768, fmt, traceRadius, outPingScore);
    _RBX = DVARFLT_calloutmarkerping_longRangeEnemyPing;
    if ( !DVARFLT_calloutmarkerping_longRangeEnemyPing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_longRangeEnemyPing") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v16 = 41943040;
  }
  else
  {
    v16 = 41959808;
  }
  __asm
  {
    vmovss  [rsp+78h+traceRadius], xmm7
    vmovss  dword ptr [rsp+78h+fmt], xmm6
  }
  CG_CalloutMarkerPing_PickContextualTarget_CollectAndScore(localClientNum, viewPos, viewAxis, v16, fmta, traceRadiusa, outPingScore);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
CG_CalloutMarkerPing_PickContextualTarget_CollectAndScore
==============
*/
void CG_CalloutMarkerPing_PickContextualTarget_CollectAndScore(const LocalClientNum_t localClientNum, const vec3_t *viewPos, const tmat33_t<vec3_t> *viewAxis, const int contents, const float traceDistance, const float traceRadius, CalloutMarkerPingScore *outPingScore)
{
  signed __int64 v7; 
  void *v18; 
  __int32 v20; 
  unsigned int i; 
  unsigned int v48; 
  int v49; 
  int v50; 
  unsigned int j; 
  __int16 v53; 
  int v54; 
  int v55; 
  const centity_t *Entity; 
  unsigned __int8 v61; 
  const ObjectiveSettings *v62; 
  bool v64; 
  bool v65; 
  char v66; 
  char ActiveGameTypeQuick; 
  const dvar_t *v68; 
  int v97; 
  float *v99; 
  bool v100; 
  unsigned __int8 v101; 
  const dvar_t *v102; 
  char v103; 
  LocalClientNum_t v127; 
  bool v128; 
  unsigned int Count; 
  unsigned int k; 
  unsigned int v137; 
  int v138; 
  int v139; 
  float ignoreEnts; 
  float ignoreEntsa; 
  float ignoreEntsb; 
  float ignoreEntsc; 
  float collectedEnts; 
  float collectedEntsa; 
  float collectedEntsb; 
  float collectedEntsc; 
  unsigned __int8 v152; 
  unsigned int scriptableIndex; 
  LocalClientNum_t localClientNuma; 
  PhysicsQuery_Collected<unsigned int> collectedScriptables; 
  PhysicsQuery_Collected<unsigned short> v157; 
  cg_t *LocalClientGlobals; 
  vec3_t origin; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  Bounds baseBounds; 
  Bounds rotatedBounds; 
  char v164; 
  char v165; 
  char v176; 

  v18 = alloca(v7);
  __asm
  {
    vmovaps [rsp+31E0h+var_A0], xmm11
    vmovaps [rsp+31E0h+var_B0], xmm12
  }
  _RBX = outPingScore;
  __asm { vmovaps [rsp+31E0h+var_50], xmm6 }
  v20 = 3 * localClientNum + 2;
  __asm { vmovaps [rsp+31E0h+var_70], xmm8 }
  v157.ids = (unsigned __int16 *)&v165;
  __asm
  {
    vmovaps [rsp+31E0h+var_C0], xmm13
    vmovaps [rsp+31E0h+var_D0], xmm14
  }
  collectedScriptables.ids = (unsigned int *)&v164;
  __asm { vmovaps [rsp+31E0h+var_E0], xmm15 }
  localClientNuma = localClientNum;
  v157.count = 0;
  v157.countMax = 2048;
  collectedScriptables.count = 0;
  collectedScriptables.countMax = 2048;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4679, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RSI = DCONST_DVARFLT_calloutmarkerping_lookat_objective_icon_dot;
  if ( !DCONST_DVARFLT_calloutmarkerping_lookat_objective_icon_dot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_lookat_objective_icon_dot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm11, [rbp+30E0h+arg_28]
    vxorps  xmm2, xmm11, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm2, dword ptr [r13+0]
    vmovss  xmm12, [rbp+30E0h+arg_20]
    vaddss  xmm1, xmm0, dword ptr [rax]
    vmulss  xmm0, xmm2, dword ptr [r13+4]
    vmovss  xmm15, dword ptr [rsi+28h]
    vmovss  dword ptr [rbp+30E0h+origin], xmm1
    vaddss  xmm1, xmm0, dword ptr [rax+4]
    vmulss  xmm0, xmm2, dword ptr [r13+8]
    vmovss  dword ptr [rbp+30E0h+origin+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rax+8]
    vmulss  xmm0, xmm12, cs:__real@3f000000
    vmovss  dword ptr [rbp+30E0h+origin+8], xmm1
    vaddss  xmm1, xmm0, xmm11
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rbp+30E0h+baseBounds.midPoint], xmm1
    vmovss  dword ptr [rbp+30E0h+baseBounds.halfSize], xmm1
    vmovss  dword ptr [rbp+30E0h+baseBounds.midPoint+4], xmm8
    vmovss  dword ptr [rbp+30E0h+baseBounds.midPoint+8], xmm8
    vmovss  dword ptr [rbp+30E0h+baseBounds.halfSize+4], xmm11
    vmovss  dword ptr [rbp+30E0h+baseBounds.halfSize+8], xmm11
  }
  Bounds_Transform(&baseBounds, &origin, viewAxis, &rotatedBounds);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+30E0h+rotatedBounds.midPoint+4]
    vmovss  xmm3, dword ptr [rbp+30E0h+rotatedBounds.midPoint+8]
    vmovss  xmm6, dword ptr [rbp+30E0h+rotatedBounds.midPoint]
    vsubss  xmm0, xmm6, dword ptr [rbp+30E0h+rotatedBounds.halfSize]
    vaddss  xmm1, xmm6, dword ptr [rbp+30E0h+rotatedBounds.halfSize]
    vmovss  dword ptr [rbp+30E0h+aabbMin], xmm0
    vsubss  xmm0, xmm5, dword ptr [rbp+30E0h+rotatedBounds.halfSize+4]
    vmovss  dword ptr [rbp+30E0h+aabbMin+4], xmm0
    vsubss  xmm0, xmm3, dword ptr [rbp+30E0h+rotatedBounds.halfSize+8]
    vmovss  dword ptr [rbp+30E0h+aabbMin+8], xmm0
    vaddss  xmm0, xmm5, dword ptr [rbp+30E0h+rotatedBounds.halfSize+4]
    vmovss  dword ptr [rbp+30E0h+aabbMax], xmm1
    vaddss  xmm1, xmm3, dword ptr [rbp+30E0h+rotatedBounds.halfSize+8]
    vmovss  dword ptr [rbp+30E0h+aabbMax+4], xmm0
    vmovss  dword ptr [rbp+30E0h+aabbMax+8], xmm1
  }
  PhysicsQuery_ImmediateAABBBroadphaseQuery((Physics_WorldId)v20, &aabbMin, &aabbMax, contents, 1u, &LocalClientGlobals->predictedPlayerState.clientNum, &v157, &collectedScriptables, 1);
  for ( i = 0; i < collectedScriptables.count; ++i )
  {
    v48 = collectedScriptables.ids[i];
    v49 = CG_CalloutMarkerPing_ClassifyScriptable(localClientNum, v48);
    v50 = v49;
    if ( v49 > 1 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; bestScore
        vmovss  dword ptr [rsp+31E0h+collectedEnts], xmm11
        vmovss  dword ptr [rsp+31E0h+ignoreEnts], xmm12
      }
      *(float *)&_XMM0 = CG_CalloutMarkerPing_ScoreScriptable(localClientNum, 1, *(const float *)&_XMM2, viewPos, viewAxis->m, ignoreEnts, collectedEnts, v48, (CalloutMarkerPingType)v49);
      __asm { vcomiss xmm0, dword ptr [rbx] }
      if ( !v64 && !v65 )
      {
        __asm { vmovss  dword ptr [rbx], xmm0 }
        outPingScore->bestScriptable = v48;
        outPingScore->bestEntNum = 2047;
        *(_DWORD *)outPingScore->bestType = v50;
      }
    }
  }
  for ( j = 0; j < v157.count; ++j )
  {
    v53 = v157.ids[j];
    if ( v53 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4722, ASSERT_TYPE_ASSERT, "(entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entNum != ENTITYNUM_NONE") )
      __debugbreak();
    if ( (unsigned __int16)v53 < 0x7FEu )
    {
      LOBYTE(v54) = CG_CalloutMarkerPing_ClassifyEntity(localClientNum, v53);
      v55 = v54;
      if ( v54 > 1 )
      {
        if ( v54 < 14 )
        {
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; bestScore
            vmovss  dword ptr [rsp+31E0h+collectedEnts], xmm11
            vmovss  dword ptr [rsp+31E0h+ignoreEnts], xmm12
          }
          *(float *)&_XMM0 = CG_CalloutMarkerPing_ScoreEntity(localClientNum, 1, *(const float *)&_XMM2, viewPos, viewAxis->m, ignoreEntsb, collectedEntsb, v53, (CalloutMarkerPingType)v54);
          __asm { vcomiss xmm0, dword ptr [rbx] }
          if ( !v64 && !v65 )
          {
            __asm { vmovss  dword ptr [rbx], xmm0 }
            outPingScore->bestScriptable = -1;
            outPingScore->bestEntNum = v53;
            *(_DWORD *)outPingScore->bestType = v55;
          }
        }
        else
        {
          Entity = CG_GetEntity(localClientNum, v53);
          if ( ScriptableCl_GetIndexForEntity(localClientNum, Entity, &scriptableIndex) )
          {
            __asm
            {
              vmovss  xmm2, dword ptr [rbx]; bestScore
              vmovss  dword ptr [rsp+31E0h+collectedEnts], xmm11
              vmovss  dword ptr [rsp+31E0h+ignoreEnts], xmm12
            }
            *(float *)&_XMM0 = CG_CalloutMarkerPing_ScoreScriptable(localClientNum, 1, *(const float *)&_XMM2, viewPos, viewAxis->m, ignoreEntsa, collectedEntsa, scriptableIndex, (CalloutMarkerPingType)v55);
            __asm { vcomiss xmm0, dword ptr [rbx] }
            if ( !v64 && !v65 )
            {
              outPingScore->bestScriptable = scriptableIndex;
              __asm { vmovss  dword ptr [rbx], xmm0 }
              outPingScore->bestEntNum = 2047;
              *(_DWORD *)outPingScore->bestType = v55;
            }
          }
        }
      }
    }
  }
  __asm
  {
    vmovaps [rsp+31E0h+var_60], xmm7
    vmovss  xmm14, cs:__real@80000000
    vmovss  xmm13, cs:__real@3f800000
  }
  if ( !CG_CalloutMarkerPing_IsInPrematch(localClientNum) )
  {
    v61 = 0;
    v152 = ScriptableCl_ObjectiveCount(localClientNum);
    if ( v152 )
    {
      __asm
      {
        vmovaps [rsp+31E0h+var_80], xmm9
        vmovaps [rsp+31E0h+var_90], xmm10
      }
      do
      {
        v62 = ScriptableCl_ObjectiveGet(localClientNum, v61, &origin);
        _R15 = v62;
        v64 = 0;
        v65 = v62 == NULL;
        if ( !v62 )
          goto LABEL_41;
        v66 = v62->state - 2;
        v64 = 0;
        v65 = (v66 & 0xFD) == 0;
        if ( (v66 & 0xFD) != 0 )
          goto LABEL_41;
        ActiveGameTypeQuick = ClStatic::GetActiveGameTypeQuick(&cls);
        v64 = ActiveGameTypeQuick == 0;
        v65 = ActiveGameTypeQuick == 1;
        if ( ActiveGameTypeQuick != 1 )
          goto LABEL_41;
        v68 = DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives;
        if ( !DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_hit_objectives") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v68);
        v64 = 0;
        v65 = !v68->current.enabled;
        if ( !v68->current.enabled )
          goto LABEL_41;
        __asm
        {
          vmovd   xmm1, dword ptr [r15+4]
          vmovss  xmm0, dword ptr [rbp+30E0h+origin]
          vsubss  xmm6, xmm0, dword ptr [r12]
          vcvtdq2ps xmm1, xmm1
          vaddss  xmm2, xmm1, dword ptr [rbp+30E0h+origin+8]
          vsubss  xmm5, xmm2, dword ptr [r12+8]
          vmovss  xmm1, dword ptr [rbp+30E0h+origin+4]
          vsubss  xmm4, xmm1, dword ptr [r12+4]
          vmovss  dword ptr [rbp+30E0h+origin+8], xmm2
        }
        v64 = 0;
        v65 = !_R15->alwaysShowInWorld;
        __asm
        {
          vmulss  xmm0, xmm6, xmm6
          vmulss  xmm2, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm3, xmm1
          vsqrtss xmm7, xmm2, xmm2
          vcmpless xmm0, xmm7, xmm14
          vblendvps xmm0, xmm7, xmm13, xmm0
          vdivss  xmm1, xmm13, xmm0
          vmulss  xmm6, xmm6, xmm1
          vmulss  xmm9, xmm4, xmm1
          vmulss  xmm10, xmm5, xmm1
        }
        if ( _R15->alwaysShowInWorld )
          goto LABEL_40;
        _RSI = DVARFLT_lui_objective_fadeEnd;
        if ( !DVARFLT_lui_objective_fadeEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_fadeEnd") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm { vcomiss xmm7, dword ptr [rsi+28h] }
        if ( v64 || v65 )
        {
LABEL_40:
          __asm
          {
            vmulss  xmm1, xmm9, dword ptr [r13+4]
            vmulss  xmm0, xmm6, dword ptr [r13+0]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm10, dword ptr [r13+8]
            vaddss  xmm0, xmm2, xmm1
          }
        }
        else
        {
LABEL_41:
          __asm { vmovaps xmm0, xmm8 }
        }
        __asm { vcomiss xmm0, dword ptr [rbx] }
        if ( !v64 && !v65 )
        {
          __asm { vcomiss xmm0, xmm15 }
          if ( !v64 && !v65 )
          {
            *(_DWORD *)outPingScore->bestType = 18;
            __asm { vmovss  dword ptr [rbx], xmm0 }
            outPingScore->bestScriptable = ScriptableCl_ObjectiveGetInstanceIndex(localClientNum, v61);
            outPingScore->bestEntNum = 2047;
            outPingScore->bestGSCObjective = -1;
          }
        }
        ++v61;
      }
      while ( v61 < v152 );
      __asm
      {
        vmovaps xmm10, [rsp+31E0h+var_90]
        vmovaps xmm9, [rsp+31E0h+var_80]
      }
    }
  }
  v97 = 0;
  _RSI = &LocalClientGlobals->predictedPlayerState.objectives[0].origin[0].v[2];
  do
  {
    v99 = _RSI - 10;
    v100 = _RSI == (float *)40;
    if ( _RSI == (float *)40 )
      goto LABEL_58;
    v101 = ClStatic::GetActiveGameTypeQuick(&cls);
    v100 = v101 <= 1u;
    if ( v101 != 1 )
      goto LABEL_58;
    v102 = DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives;
    if ( !DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_hit_objectives") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v102);
    v100 = !v102->current.enabled;
    if ( v102->current.enabled && (v103 = *((_BYTE *)_RSI + 119) - 2, v100 = (v103 & 0xFD) == 0) && (v100 = *((_BYTE *)_RSI + 116) >= 0, *((char *)_RSI + 116) >= 0) && (v100 = *(_DWORD *)v99 <= 0x7FFu, *(_DWORD *)v99 == 2047) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi-8]
        vsubss  xmm7, xmm0, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rsi-4]
        vsubss  xmm4, xmm1, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm6, xmm0, dword ptr [rdi+8]
        vmulss  xmm2, xmm4, xmm4
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, xmm14
        vblendvps xmm0, xmm1, xmm13, xmm0
        vdivss  xmm5, xmm13, xmm0
        vmulss  xmm0, xmm4, xmm5
        vmulss  xmm3, xmm0, dword ptr [r13+4]
        vmulss  xmm1, xmm7, xmm5
        vmulss  xmm2, xmm1, dword ptr [r13+0]
        vmulss  xmm0, xmm6, xmm5
        vmulss  xmm1, xmm0, dword ptr [r13+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm0, xmm4, xmm1
      }
    }
    else
    {
LABEL_58:
      __asm { vmovaps xmm0, xmm8 }
    }
    __asm { vcomiss xmm0, dword ptr [rbx] }
    if ( !v100 )
    {
      __asm { vcomiss xmm0, xmm15 }
      *(_DWORD *)outPingScore->bestType = 4;
      outPingScore->bestEntNum = 2047;
      __asm { vmovss  dword ptr [rbx], xmm0 }
      outPingScore->bestScriptable = -1;
      outPingScore->bestGSCObjective = v97;
    }
    ++v97;
    _RSI += 43;
  }
  while ( v97 < 32 );
  v127 = localClientNuma;
  v128 = CG_CalloutMarkerPing_IsInPrematch(localClientNuma);
  __asm
  {
    vmovaps xmm15, [rsp+31E0h+var_E0]
    vmovaps xmm14, [rsp+31E0h+var_D0]
    vmovaps xmm13, [rsp+31E0h+var_C0]
    vmovaps xmm8, [rsp+31E0h+var_70]
    vmovaps xmm7, [rsp+31E0h+var_60]
    vmovaps xmm6, [rsp+31E0h+var_50]
  }
  if ( !v128 )
  {
    Count = ScriptableCl_Spatial_ActiveList_GetCount(v127);
    if ( Count )
    {
      for ( k = 0; k < Count; ++k )
      {
        v137 = ScriptableCl_Spatial_ActiveList_GetAtIndex(v127, k);
        v138 = CG_CalloutMarkerPing_ClassifyScriptable(v127, v137);
        v139 = v138;
        if ( ((v138 - 14) & 0xFFFFFFFC) == 0 && v138 != 15 )
        {
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; bestScore
            vmovss  dword ptr [rsp+31E0h+collectedEnts], xmm11
            vmovss  dword ptr [rsp+31E0h+ignoreEnts], xmm12
          }
          *(float *)&_XMM0 = CG_CalloutMarkerPing_ScoreScriptable(v127, 1, *(const float *)&_XMM2, viewPos, viewAxis->m, ignoreEntsc, collectedEntsc, v137, (CalloutMarkerPingType)v138);
          __asm { vcomiss xmm0, dword ptr [rbx] }
          if ( !v64 && !v65 )
          {
            outPingScore->bestScriptable = v137;
            outPingScore->bestEntNum = 2047;
            __asm { vmovss  dword ptr [rbx], xmm0 }
            *(_DWORD *)outPingScore->bestType = v139;
            outPingScore->bestGSCObjective = -1;
          }
        }
      }
    }
  }
  _R11 = &v176;
  __asm
  {
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
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
  __int64 v10; 

  v4 = localClientNum;
  _RDI = origin;
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
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmulss  xmm0, xmm1, dword ptr [rdi]
  }
  v10 = v4;
  __asm { vcvttss2si eax, xmm0 }
  if ( _EAX > 0x7FFF )
    _EAX = 0x7FFF;
  if ( _EAX < -32768 )
    LOWORD(_EAX) = 0x8000;
  s_calloutMarkerPingData[v10].predicted.view.origin.x = _EAX;
  __asm
  {
    vmulss  xmm1, xmm1, dword ptr [rdi+4]
    vcvttss2si eax, xmm1
  }
  if ( _EAX > 0x7FFF )
    _EAX = 0x7FFF;
  if ( _EAX < -32768 )
    LOWORD(_EAX) = 0x8000;
  s_calloutMarkerPingData[v10].predicted.view.origin.y = _EAX;
  __asm { vcvttss2si eax, dword ptr [rdi+8] }
  if ( _EAX > 0x7FFF )
    _EAX = 0x7FFF;
  if ( _EAX < -32768 )
    LOWORD(_EAX) = 0x8000;
  s_calloutMarkerPingData[v10].predicted.view.origin.z = _EAX;
  s_calloutMarkerPingData[v10].predicted.isTentative = isTentative;
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
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  __int64 v9; 
  CgCompassSystem *CompassSystem; 
  cg_t *v11; 
  bool v13; 
  int v17; 
  unsigned __int8 pingLookAtViewIndex; 
  __int16 bestEntNum; 
  unsigned int bestScriptable; 
  unsigned __int8 v25; 
  int v27; 
  CalloutMarkerPingPool PoolID; 
  __int16 EntityZOffset; 
  __int16 v31; 
  centity_t *Entity; 
  __int16 v47; 
  __int16 v50; 
  CalloutMarkerPingPool v56; 
  __int16 v57; 
  __int16 v72; 
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

  v6 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4831, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v9 = v6;
  if ( !CG_CalloutMarkerPing_CanPing((const LocalClientNum_t)v6, isTentativeAction) )
    return;
  CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)v6);
  if ( CgCompassSystem::GetCurrentCompassType(CompassSystem) == COMPASS_TYPE_TACMAP )
  {
    CG_CalloutMarkerPing_Predicted_HandleButtonPress_TacMap((LocalClientNum_t)v6);
    return;
  }
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
    CG_CalloutMarkerPing_Predicted_HandleButtonPress_Spectate((const LocalClientNum_t)v6, isTentativeAction);
    return;
  }
  v11 = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  RefdefView_GetOrg(&v11->refdef.view, &outOrg);
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  v13 = s_calloutMarkerPingData[v9].predicted.view.origin.owner == 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+6944h]
    vmovss  dword ptr [rbp+40h+traceDir], xmm0
    vmovss  xmm1, dword ptr [rax+6948h]
    vmovss  dword ptr [rbp+40h+traceDir+4], xmm1
    vmovss  xmm0, dword ptr [rax+694Ch]
    vmovss  dword ptr [rbp+40h+traceDir+8], xmm0
  }
  if ( v13 )
  {
    pingLookAtViewIndex = s_calloutMarkerPingData[v9].pingLookAtViewIndex;
    if ( pingLookAtViewIndex != 53 )
    {
      CG_CalloutMarkerPing_Predicted_CreateFeedback((LocalClientNum_t)v6, pingLookAtViewIndex, isTentativeAction);
      return;
    }
    __asm
    {
      vmovaps [rsp+140h+var_50], xmm8
      vxorps  xmm8, xmm8, xmm8
    }
    outPingScore.bestEntNum = 2047;
    *(_DWORD *)outPingScore.bestType = 1;
    __asm { vmovss  [rsp+140h+outPingScore.bestScore], xmm8 }
    *(_QWORD *)&outPingScore.bestScriptable = -1i64;
    CG_CalloutMarkerPing_PickContextualTarget((const LocalClientNum_t)v6, &outOrg, &LocalClientGlobals->refdef.view.axis, &outPingScore);
    bestEntNum = outPingScore.bestEntNum;
    bestScriptable = outPingScore.bestScriptable;
    v25 = CG_CalloutMarkerPing_CheckSquadPingsForTarget((LocalClientNum_t)v6, outPingScore.bestEntNum, outPingScore.bestScriptable, -1);
    if ( (unsigned __int8)(v25 - 52) > 1u )
    {
      CG_CalloutMarkerPing_Predicted_CreateFeedback((LocalClientNum_t)v6, v25, isTentativeAction);
LABEL_35:
      __asm { vmovaps xmm8, [rsp+140h+var_50] }
      return;
    }
    __asm
    {
      vmovaps [rsp+140h+var_30], xmm6
      vmovaps [rsp+140h+var_40], xmm7
      vmovaps [rsp+140h+var_60], xmm9
      vmovss  xmm9, cs:__real@3e800000
    }
    if ( bestEntNum != 2047 )
    {
      v27 = *(_DWORD *)outPingScore.bestType;
      if ( (unsigned int)(*(_DWORD *)outPingScore.bestType - 6) > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4908, ASSERT_TYPE_ASSERT, "(( pingScore.bestType < CalloutMarkerPingType::SCRIPTABLES_BEGIN ) && ( pingScore.bestType >= CalloutMarkerPingType::ENTITIES_BEGIN ))", (const char *)&queryFormat, "( pingScore.bestType < CalloutMarkerPingType::SCRIPTABLES_BEGIN ) && ( pingScore.bestType >= CalloutMarkerPingType::ENTITIES_BEGIN )") )
        __debugbreak();
      PoolID = CG_CalloutMarkerPing_TypeGetPoolID((CalloutMarkerPingType)v27);
      EntityZOffset = CG_CalloutMarkerPing_GetEntityZOffset((LocalClientNum_t)v6, bestEntNum);
      if ( v27 != 13 )
      {
        CG_CalloutMarkerPing_Predicted_CreateAtEntity((LocalClientNum_t)v6, PoolID, bestEntNum, 0, 0, EntityZOffset, isTentativeAction);
        goto LABEL_34;
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_calloutmarkerping_trace_solid_distance, "calloutmarkerping_trace_solid_distance");
      __asm { vaddss  xmm3, xmm0, dword ptr [rbp+40h+outOrg+8]; traceDistance }
      *(_DWORD *)outEntityNum = 2;
      if ( CG_CalloutMarkerPing_TraceSolidForNavOrDanger((LocalClientNum_t)v6, &outOrg, &traceDir, *(float *)&_XMM3, (vec3_t *)&plane, outEntityNum, &outPingScore.bestEntNum) && *(_DWORD *)outEntityNum == 13 )
      {
        v31 = outPingScore.bestEntNum;
        Entity = CG_GetEntity((const LocalClientNum_t)v6, outPingScore.bestEntNum);
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+40h+plane]
          vmovss  xmm1, dword ptr [rbp+40h+plane+4]
          vsubss  xmm7, xmm0, dword ptr [rsp+140h+outOrigin]
          vsubss  xmm6, xmm1, dword ptr [rsp+140h+outOrigin+4]
        }
        AnglesToAxis(&Entity->pose.angles, &axis);
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rbp+40h+axis+4]
          vmulss  xmm0, xmm7, dword ptr [rbp+40h+axis]
          vaddss  xmm1, xmm1, xmm0
          vmulss  xmm0, xmm7, dword ptr [rbp+40h+axis+0Ch]
          vmulss  xmm2, xmm1, xmm9
          vmulss  xmm1, xmm6, dword ptr [rbp+40h+axis+10h]
          vaddss  xmm1, xmm1, xmm0
          vcvttss2si ebx, xmm2
          vmulss  xmm2, xmm1, xmm9
          vcvttss2si r13d, xmm2
        }
        v47 = CG_CalloutMarkerPing_GetEntityZOffset((LocalClientNum_t)v6, v31);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+40h+plane+8]
          vsubss  xmm1, xmm0, dword ptr [rsp+140h+outOrigin+8]
          vcvttss2si ecx, xmm1
        }
        v50 = _ECX + v47;
        if ( v31 != 2047 )
        {
          CG_CalloutMarkerPing_Predicted_CreateAtEntity((LocalClientNum_t)v6, PoolID, v31, _EBX, _ER13, v50, isTentativeAction);
LABEL_34:
          __asm
          {
            vmovaps xmm6, [rsp+140h+var_30]
            vmovaps xmm7, [rsp+140h+var_40]
            vmovaps xmm9, [rsp+140h+var_60]
          }
          goto LABEL_35;
        }
      }
      bestScriptable = outPingScore.bestScriptable;
    }
    if ( bestScriptable == -1 )
    {
      if ( outPingScore.bestGSCObjective == -1 )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_calloutmarkerping_trace_solid_distance, "calloutmarkerping_trace_solid_distance");
        __asm { vaddss  xmm3, xmm0, dword ptr [rbp+40h+outOrg+8]; traceDistance }
        *(_DWORD *)type = 2;
        if ( CG_CalloutMarkerPing_TraceSolidForNavOrDanger((LocalClientNum_t)v6, &outOrg, &traceDir, *(float *)&_XMM3, &outPosition, type, (__int16 *)outEntityNum) )
        {
          if ( *(_DWORD *)type == 13 )
          {
            v56 = CG_CalloutMarkerPing_TypeGetPoolID(STRUCT_POINTER|INT_VALUE);
            Dvar_GetFloat_Internal_DebugName(DVARFLT_calloutmarkerping_trace_solid_distance, "calloutmarkerping_trace_solid_distance");
            v57 = *(_WORD *)outEntityNum;
            _RBX = CG_GetEntity((const LocalClientNum_t)v6, *(__int16 *)outEntityNum);
            CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+140h+outPosition]
              vmovss  xmm1, dword ptr [rsp+140h+outPosition+4]
              vsubss  xmm7, xmm0, dword ptr [rsp+140h+outOrigin]
              vsubss  xmm6, xmm1, dword ptr [rsp+140h+outOrigin+4]
            }
            AnglesToAxis(&_RBX->pose.angles, &axis);
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr [rbp+40h+axis+4]
              vmulss  xmm0, xmm7, dword ptr [rbp+40h+axis]
              vaddss  xmm1, xmm1, xmm0
              vmulss  xmm0, xmm7, dword ptr [rbp+40h+axis+0Ch]
              vmulss  xmm2, xmm1, xmm9
              vmulss  xmm1, xmm6, dword ptr [rbp+40h+axis+10h]
              vaddss  xmm1, xmm1, xmm0
              vcvttss2si edi, xmm2
              vmulss  xmm2, xmm1, xmm9
              vcvttss2si ebx, xmm2
            }
            v72 = CG_CalloutMarkerPing_GetEntityZOffset((LocalClientNum_t)v6, v57);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+140h+outPosition+8]
              vsubss  xmm1, xmm0, dword ptr [rsp+140h+outOrigin+8]
              vcvttss2si ecx, xmm1
            }
            CG_CalloutMarkerPing_Predicted_CreateAtEntity((LocalClientNum_t)v6, v56, v57, _EDI, (char)_RBX, _ECX + v72, isTentativeAction);
          }
          else if ( *(_DWORD *)type )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+140h+outPosition+8]
              vaddss  xmm1, xmm0, cs:__real@42700000
              vmovss  dword ptr [rsp+140h+outPosition+8], xmm1
            }
            CG_CalloutMarkerPing_Predicted_CreateAtOrigin((LocalClientNum_t)v6, CONST_CALLOUT_POOL_ID_NAVIGATION, &outPosition, isTentativeAction);
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+40h+outOrg+8]
            vcomiss xmm0, xmm8
          }
        }
      }
      else
      {
        CG_CalloutMarkerPing_Predicted_CreateAtGSCObjective((LocalClientNum_t)v6, outPingScore.bestGSCObjective, isTentativeAction);
      }
    }
    else
    {
      CG_CalloutMarkerPing_Predicted_CreateAtScriptable((LocalClientNum_t)v6, bestScriptable, isTentativeAction);
    }
    goto LABEL_34;
  }
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(outPingType) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4549, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outPingType, 2) )
      __debugbreak();
  }
  if ( !s_calloutMarkerPingData[v9].predicted.sentToServer )
  {
    LOBYTE(v17) = CG_CalloutMarkerPing_ClassifyPing((LocalClientNum_t)v6, (const CalloutMarkerPingPool)s_calloutMarkerPingData[v9].predicted.pool, &s_calloutMarkerPingData[v9].predicted.view);
    if ( v17 == 10 )
    {
LABEL_19:
      CG_CalloutMarkerPing_FinalizeDoubleTap((LocalClientNum_t)v6, isTentativeAction, 0);
      return;
    }
    if ( v17 == 2 )
    {
      s_calloutMarkerPingData[v9].predicted.pool = CONST_CALLOUT_POOL_ID_DANGER_1;
      s_calloutMarkerPingData[v9].dirty = 1;
      CG_CalloutMarkerPing_FinalizeDoubleTap((LocalClientNum_t)v6, isTentativeAction, 0);
      return;
    }
    __asm { vmovss  xmm3, cs:__real@453b8000; traceDistance }
    *(_DWORD *)type = 1;
    if ( CG_CalloutMarkerPing_TraceSolidForNavOrDanger((LocalClientNum_t)v6, &outOrg, &traceDir, *(float *)&_XMM3, (vec3_t *)&plane, type, (__int16 *)outEntityNum) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+40h+plane+8]
        vaddss  xmm1, xmm0, cs:__real@42700000
        vmovss  dword ptr [rbp+40h+plane+8], xmm1
      }
      CG_CalloutMarkerPing_Predicted_CreateAtOrigin((LocalClientNum_t)v6, CONST_CALLOUT_POOL_ID_DANGER_1, (const vec3_t *)&plane, 1);
      goto LABEL_19;
    }
    CG_CalloutMarkerPing_FinalizeDoubleTap((LocalClientNum_t)v6, isTentativeAction, 1);
  }
}

/*
==============
CG_CalloutMarkerPing_Predicted_HandleButtonPress_Spectate
==============
*/
void CG_CalloutMarkerPing_Predicted_HandleButtonPress_Spectate(const LocalClientNum_t localClientNum, const bool isTentativeAction)
{
  __int64 v8; 
  unsigned int IndexByName; 
  unsigned int v11; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 
  const dvar_t *v14; 
  char v15; 
  cg_t *LocalClientGlobals; 
  unsigned int v21; 
  unsigned __int8 v22; 
  unsigned __int8 v23; 
  unsigned int InstanceIndex; 
  unsigned int v28; 
  __int64 v52; 
  __int64 v53; 
  bool outIsMoving; 
  float outRadius; 
  vec3_t outOrg; 
  vec2_t outPosition; 

  v8 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4459, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !s_calloutMarkerPingData[v8].predicted.view.origin.owner && s_calloutMarkerPingData[v8].predicted.feedbackViewIndex == 53 )
  {
    IndexByName = BG_Omnvar_GetIndexByName("ui_lower_message");
    v11 = IndexByName;
    if ( IndexByName != -1 )
    {
      Def = BG_Omnvar_GetDef(IndexByName);
      Data = CG_Omnvar_GetData((LocalClientNum_t)v8, v11);
      if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
        __debugbreak();
      if ( Data->current.integer + Def->minvalue == 75 )
      {
        v14 = DVARBOOL_calloutmarkerping_buybackEnabled;
        if ( !DVARBOOL_calloutmarkerping_buybackEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_buybackEnabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        if ( v14->current.enabled )
        {
          __asm { vmovaps [rsp+108h+var_48], xmm7 }
          v15 = 0;
          __asm
          {
            vmovaps [rsp+108h+var_58], xmm8
            vxorps  xmm8, xmm8, xmm8
            vxorps  xmm7, xmm7, xmm7
          }
          if ( CG_GameInterface_PlayingBR() )
          {
            if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
            {
              LODWORD(v53) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v53, 2, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
                __debugbreak();
            }
            if ( (unsigned int)v8 >= CgCompassSystem::ms_allocatedCount )
            {
              LODWORD(v53) = CgCompassSystem::ms_allocatedCount;
              LODWORD(v52) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v52, v53) )
                __debugbreak();
            }
            if ( !CgCompassSystem::ms_compassSystemArray[v8] )
            {
              LODWORD(v53) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v53) )
                __debugbreak();
            }
            if ( CgCompassSystemBR::GetDangerCircleInfo((CgCompassSystemBR *)CgCompassSystem::ms_compassSystemArray[v8], &outPosition, &outRadius, &outIsMoving) )
            {
              if ( outIsMoving )
              {
                Dvar_GetFloat_Internal_DebugName(DVARFLT_compass_buyback_circle_moving_radius_pct, "compass_buyback_circle_moving_radius_pct");
                __asm
                {
                  vmovss  xmm1, [rsp+108h+outRadius]
                  vmulss  xmm2, xmm1, xmm0
                }
              }
              else
              {
                __asm { vmovss  xmm2, [rsp+108h+outRadius] }
              }
              __asm { vmulss  xmm8, xmm2, xmm2 }
              v15 = 1;
            }
          }
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
          RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
          v21 = -1;
          v22 = 0;
          v23 = ScriptableCl_ObjectiveCount((const LocalClientNum_t)v8);
          if ( v23 )
          {
            __asm
            {
              vmovaps [rsp+108h+var_68], xmm9
              vmovss  xmm9, dword ptr [rsp+108h+outOrg+8]
              vmovaps [rsp+108h+var_78], xmm10
              vmovss  xmm10, dword ptr [rsp+108h+outOrg+4]
              vmovaps [rsp+108h+var_88], xmm11
              vmovss  xmm11, dword ptr [rsp+108h+outOrg]
              vmovaps [rsp+108h+var_38], xmm6
            }
            do
            {
              InstanceIndex = ScriptableCl_ObjectiveGetInstanceIndex((const LocalClientNum_t)v8, v22);
              v28 = InstanceIndex;
              if ( InstanceIndex != -1 && (unsigned int)CG_CalloutMarkerPing_ClassifyScriptable((LocalClientNum_t)v8, InstanceIndex) == 15 )
              {
                ScriptableCl_GetInstanceOrigin((const LocalClientNum_t)v8, v28, &outOrg);
                __asm
                {
                  vmovss  xmm5, dword ptr [rsp+108h+outOrg+4]
                  vmovss  xmm6, dword ptr [rsp+108h+outOrg]
                }
                if ( v15 )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+108h+outPosition]
                    vmovss  xmm1, dword ptr [rsp+108h+outPosition+4]
                    vsubss  xmm2, xmm1, xmm5
                    vsubss  xmm4, xmm0, xmm6
                    vmulss  xmm3, xmm2, xmm2
                    vmulss  xmm0, xmm4, xmm4
                    vaddss  xmm1, xmm3, xmm0
                    vcomiss xmm1, xmm8
                  }
                }
                else
                {
                  __asm
                  {
                    vsubss  xmm3, xmm9, dword ptr [rsp+108h+outOrg+8]
                    vsubss  xmm0, xmm10, xmm5
                    vmulss  xmm1, xmm0, xmm0
                    vsubss  xmm2, xmm11, xmm6
                    vmulss  xmm0, xmm2, xmm2
                    vaddss  xmm2, xmm1, xmm0
                    vmulss  xmm1, xmm3, xmm3
                    vaddss  xmm4, xmm2, xmm1
                  }
                  if ( v21 != -1 )
                    __asm { vcomiss xmm4, xmm7 }
                  v21 = v28;
                  __asm { vmovaps xmm7, xmm4 }
                }
              }
              ++v22;
            }
            while ( v22 < v23 );
            __asm
            {
              vmovaps xmm11, [rsp+108h+var_88]
              vmovaps xmm10, [rsp+108h+var_78]
              vmovaps xmm9, [rsp+108h+var_68]
              vmovaps xmm6, [rsp+108h+var_38]
            }
            if ( v21 != -1 )
            {
              CG_CalloutMarkerPing_Predicted_CreateAtScriptable((LocalClientNum_t)v8, v21, isTentativeAction);
              CG_CalloutMarkerPing_Predicted_SendToServer((LocalClientNum_t)v8);
            }
          }
          __asm
          {
            vmovaps xmm7, [rsp+108h+var_48]
            vmovaps xmm8, [rsp+108h+var_58]
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
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v7; 
  cg_t *v8; 
  unsigned __int8 pingIndex; 
  unsigned int scriptableIndex; 
  __int16 entityIndex; 
  int v12; 
  CalloutMarkerPingType v13; 
  CalloutMarkerPingPool PoolID; 
  __int16 zOffset; 
  int objectiveIndex; 
  __int16 v20; 
  centity_t *Entity; 
  __int16 EntityZOffset; 
  __int16 v41; 
  __int16 outEntityNum[2]; 
  CalloutMarkerPingType outPingType[4]; 
  vec3_t origin; 
  vec3_t outPosition; 
  vec3_t outOrigin; 
  vec3_t outDirection; 
  tmat33_t<vec3_t> axis; 

  v5 = localClientNum;
  if ( !s_calloutMarkerPingData[v5].predicted.view.origin.owner && s_calloutMarkerPingData[v5].predicted.feedbackViewIndex == 53 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v7 = DCONST_DVARINT_calloutmarkerping_prediction_debounce_time;
    v8 = LocalClientGlobals;
    if ( !DCONST_DVARINT_calloutmarkerping_prediction_debounce_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_prediction_debounce_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v8->time >= v7->current.integer + s_calloutMarkerPingData[v5].predicted.sentToServerTime && CG_GameInterface_PlayingBR() )
    {
      CG_CalloutMarkerPing_UpdateSquad(localClientNum);
      if ( s_calloutMarkerPingData[v5].squadMateAliveCount )
      {
        pingIndex = s_calloutMarkerPingData[v5].tacmapLookAt.pingIndex;
        if ( pingIndex != 52 )
        {
          if ( pingIndex != 53 )
          {
            CG_CalloutMarkerPing_Predicted_CreateFeedback(localClientNum, pingIndex, 0);
            CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
            return;
          }
          scriptableIndex = s_calloutMarkerPingData[v5].tacmapLookAt.scriptableIndex;
          if ( scriptableIndex != -1 )
          {
            CG_CalloutMarkerPing_Predicted_CreateAtScriptable(localClientNum, scriptableIndex, 0);
            CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
            return;
          }
          entityIndex = s_calloutMarkerPingData[v5].tacmapLookAt.entityIndex;
          if ( entityIndex != 2047 )
          {
            LOBYTE(v12) = CG_CalloutMarkerPing_ClassifyEntity(localClientNum, entityIndex);
            v13 = (char)v12;
            if ( v12 <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 4371, ASSERT_TYPE_ASSERT, "(type > CalloutMarkerPingType::INVALID)", (const char *)&queryFormat, "type > CalloutMarkerPingType::INVALID") )
              __debugbreak();
            CG_CalloutMarkerPing_GetEntityZOffset(localClientNum, s_calloutMarkerPingData[v5].tacmapLookAt.entityIndex);
            PoolID = CG_CalloutMarkerPing_TypeGetPoolID(v13);
            CG_CalloutMarkerPing_Predicted_CreateAtEntity(localClientNum, PoolID, s_calloutMarkerPingData[v5].tacmapLookAt.entityIndex, 0, 0, zOffset, 0);
            CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
            return;
          }
          objectiveIndex = s_calloutMarkerPingData[v5].tacmapLookAt.objectiveIndex;
          if ( objectiveIndex != -1 )
          {
            CG_CalloutMarkerPing_Predicted_CreateAtGSCObjective(localClientNum, objectiveIndex, 0);
            CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
            return;
          }
          __asm { vmovaps [rsp+100h+var_38+8], xmm6 }
          CG_CalloutMarkerPing_GetTacmapWorldPos(localClientNum, &outPosition, &outDirection);
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height, "calloutmarkerping_trace_tacmap_height");
          __asm { vmovss  xmm6, cs:__real@40000000 }
          *(_DWORD *)outPingType = 1;
          __asm { vmulss  xmm3, xmm0, xmm6; traceDistance }
          if ( !CG_CalloutMarkerPing_TraceSolidForNavOrDanger(localClientNum, &outPosition, &outDirection, *(float *)&_XMM3, &origin, outPingType, outEntityNum) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+57h+outPosition]
              vmovss  xmm1, dword ptr [rbp+57h+outPosition+4]
              vmovss  dword ptr [rbp+57h+origin], xmm0
              vxorps  xmm0, xmm0, xmm0
              vmovss  dword ptr [rbp+57h+origin+8], xmm0
              vmovss  dword ptr [rbp+57h+origin+4], xmm1
            }
            CG_CalloutMarkerPing_Predicted_CreateAtOrigin(localClientNum, CONST_CALLOUT_POOL_ID_NAVIGATION, &origin, 0);
            s_calloutMarkerPingData[v5].predicted.view.origin.z = -1234;
            goto LABEL_29;
          }
          outEntityNum[0] = 2047;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height, "calloutmarkerping_trace_tacmap_height");
          *(_DWORD *)outPingType = 2;
          __asm { vmulss  xmm3, xmm0, xmm6; traceDistance }
          if ( CG_CalloutMarkerPing_TraceSolidForNavOrDanger(localClientNum, &outPosition, &outDirection, *(float *)&_XMM3, &origin, outPingType, outEntityNum) && *(_DWORD *)outPingType == 13 )
          {
            v20 = outEntityNum[0];
            __asm { vmovaps [rsp+100h+var_48+8], xmm7 }
            Entity = CG_GetEntity(localClientNum, outEntityNum[0]);
            CG_GetPoseOrigin(&Entity->pose, &outOrigin);
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+57h+origin]
              vmovss  xmm1, dword ptr [rbp+57h+origin+4]
              vsubss  xmm6, xmm0, dword ptr [rbp+57h+outOrigin]
              vsubss  xmm7, xmm1, dword ptr [rbp+57h+outOrigin+4]
            }
            AnglesToAxis(&Entity->pose.angles, &axis);
            __asm
            {
              vmulss  xmm3, xmm7, dword ptr [rbp+57h+axis+4]
              vmulss  xmm2, xmm6, dword ptr [rbp+57h+axis]
              vaddss  xmm0, xmm3, xmm2
              vmulss  xmm3, xmm6, dword ptr [rbp+57h+axis+0Ch]
              vmulss  xmm2, xmm7, dword ptr [rbp+57h+axis+10h]
              vmulss  xmm0, xmm0, cs:__real@3e800000
              vaddss  xmm1, xmm3, xmm2
              vmulss  xmm3, xmm1, cs:__real@3e800000
              vcvttss2si r14d, xmm3
              vcvttss2si ebx, xmm0
            }
            EntityZOffset = CG_CalloutMarkerPing_GetEntityZOffset(localClientNum, v20);
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+57h+origin+8]
              vsubss  xmm0, xmm1, dword ptr [rbp+57h+outOrigin+8]
              vmovaps xmm7, [rsp+100h+var_48+8]
              vcvttss2si ecx, xmm0
            }
            v41 = _ECX + EntityZOffset;
            if ( v20 != 2047 )
            {
              CG_CalloutMarkerPing_Predicted_CreateAtEntity(localClientNum, CONST_CALLOUT_POOL_ID_ENTITY_1, v20, _EBX, _ER14, v41, 0);
LABEL_29:
              CG_CalloutMarkerPing_Predicted_SendToServer(localClientNum);
              __asm { vmovaps xmm6, [rsp+100h+var_38+8] }
              return;
            }
          }
          else
          {
            __asm { vmovss  xmm1, dword ptr [rbp+57h+origin+8] }
          }
          __asm
          {
            vaddss  xmm0, xmm1, cs:__real@42700000
            vmovss  dword ptr [rbp+57h+origin+8], xmm0
          }
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
  int v7; 
  unsigned __int8 v8; 
  bool *p_newsFeedPending; 
  cg_t *LocalClientGlobals; 
  const CalloutMarkerPingView *View; 
  cg_t *v12; 
  ClConnectionMP *ClientConnectionMP; 
  __int64 v15; 
  __int64 v16; 

  v1 = DCONST_DVARBOOL_calloutmarkerping_use_prediction;
  _RBP = localClientNum;
  if ( !DCONST_DVARBOOL_calloutmarkerping_use_prediction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_use_prediction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    _R15 = s_calloutMarkerPingData;
    __asm
    {
      vmovups xmm0, xmmword ptr [r15+rbp+10h]
      vmovsd  xmm1, qword ptr [r15+rbp+20h]
    }
    v7 = *(_DWORD *)&s_calloutMarkerPingData[_RBP].predicted.isTentative;
    __asm
    {
      vmovups xmmword ptr [r15+rbp+2Ch], xmm0
      vmovsd  qword ptr [r15+rbp+3Ch], xmm1
    }
    *(_DWORD *)&s_calloutMarkerPingData[_RBP].predictedPrev.isTentative = v7;
    CG_CalloutMarkerPing_UpdatePingLookAt(localClientNum);
    CG_CalloutMarkerPing_UpdateTacmapLookAt(localClientNum);
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v16) = 2;
      LODWORD(v15) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1780, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v8 = 0;
    p_newsFeedPending = &s_calloutMarkerPingData[_RBP].markers[0].newsFeedPending;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    do
    {
      if ( *p_newsFeedPending )
      {
        View = CG_CalloutMarkerPing_GetView(localClientNum, v8, &LocalClientGlobals->predictedPlayerState);
        CG_CalloutMarkerPing_UpdateNewsFeedSingle(localClientNum, v8, View);
        *p_newsFeedPending = 0;
        *((_DWORD *)p_newsFeedPending + 1) = 0;
      }
      ++v8;
      p_newsFeedPending += 16;
    }
    while ( v8 < 0x34u );
    if ( s_calloutMarkerPingData[_RBP].predicted.view.origin.owner || s_calloutMarkerPingData[_RBP].predicted.feedbackViewIndex != 53 )
    {
      if ( s_calloutMarkerPingData[_RBP].predicted.sentToServer )
      {
        ClientConnectionMP = ClConnectionMP::GetClientConnectionMP(localClientNum);
        if ( ClientConnectionMP->GetConnectionData(ClientConnectionMP)->reliableAcknowledge > s_calloutMarkerPingData[_RBP].predicted.sentToServerSequence )
        {
          s_calloutMarkerPingData[_RBP].lastPredictedPool = s_calloutMarkerPingData[_RBP].predicted.pool;
          __asm
          {
            vmovsd  xmm0, qword ptr [r15+rbp+10h]
            vmovsd  qword ptr [r15+rbp+4], xmm0
          }
          s_calloutMarkerPingData[_RBP].predicted.createdTime = 0;
          *(_QWORD *)&s_calloutMarkerPingData[_RBP].predicted.sentToServerSequence = 0i64;
          *(_WORD *)&s_calloutMarkerPingData[_RBP].predicted.pool = 13581;
          s_calloutMarkerPingData[_RBP].predicted.view = 0i64;
          s_calloutMarkerPingData[_RBP].dirty = 1;
        }
      }
      else if ( !s_calloutMarkerPingData[_RBP].predicted.isTentative )
      {
        v12 = CG_GetLocalClientGlobals(localClientNum);
        if ( v12->time > Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_calloutmarkerping_double_tap_time, "calloutmarkerping_double_tap_time") + s_calloutMarkerPingData[_RBP].predicted.createdTime )
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

float __fastcall CG_CalloutMarkerPing_ScoreEntity(LocalClientNum_t localClientNum, const bool usingAABBCollection, double bestScore, const vec3_t *traceStart, const vec3_t *traceDir, const float traceDistance, const float traceRadius, __int16 entNum, unsigned int type)
{
  centity_t *Entity; 
  int v19; 
  bool v52; 
  cg_t *LocalClientGlobals; 
  int linkedEntNum; 
  centity_t *v55; 
  unsigned int v56; 
  int v57; 
  int v58; 
  char v59; 
  __int64 v60; 
  float fmt; 
  float radiusExtensiona; 
  __int64 radiusExtension; 
  __int16 *v69; 
  int numIgnoreEnts[2]; 
  vec3_t outOrigin; 
  __int16 ignoreEnts[4]; 
  char v77; 

  __asm
  {
    vmovaps [rsp+0E8h+var_48], xmm6
    vmovaps [rsp+0E8h+var_78], xmm9
    vmovaps xmm9, xmm2
  }
  if ( !CG_CalloutMarkerPing_TypeCanBeTraceHit((CalloutMarkerPingType)type) )
    goto $LN247;
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( (Entity->flags & 1) == 0 )
    goto $LN247;
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  LOBYTE(v19) = CG_CalloutMarkerPing_ClassifyEntity(localClientNum, entNum);
  switch ( v19 )
  {
    case 6:
      CG_CalloutMarkerPing_GetEntityZOffset(localClientNum, entNum);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm2, xmm0, cs:__real@3f000000
        vaddss  xmm2, xmm2, dword ptr [rsp+0E8h+outOrigin+8]
        vmovss  dword ptr [rsp+0E8h+outOrigin+8], xmm2
      }
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
      goto $LN247;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+outOrigin]; jumptable 00000001403C6D5D cases 7-9,11-13,17
    vmovss  xmm1, dword ptr [rsp+0E8h+outOrigin+4]
    vsubss  xmm6, xmm1, dword ptr [r15+4]
  }
  _RDI = DCONST_DVARFLT_calloutmarkerping_trace_entity_mindot;
  __asm
  {
    vmovaps [rsp+0E8h+var_58], xmm7
    vmovaps [rsp+0E8h+var_68], xmm8
    vsubss  xmm8, xmm0, dword ptr [r15]
    vmovss  xmm0, dword ptr [rsp+0E8h+outOrigin+8]
    vsubss  xmm7, xmm0, dword ptr [r15+8]
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm6, xmm5
    vmulss  xmm3, xmm0, dword ptr [r12+4]
    vmulss  xmm1, xmm8, xmm5
    vmovaps xmm8, [rsp+0E8h+var_68]
    vmulss  xmm2, xmm1, dword ptr [r12]
    vmulss  xmm0, xmm7, xmm5
    vmovaps xmm7, [rsp+0E8h+var_58]
    vmulss  xmm1, xmm0, dword ptr [r12+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
  }
  if ( !DCONST_DVARFLT_calloutmarkerping_trace_entity_mindot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_trace_entity_mindot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vcomiss xmm6, dword ptr [rdi+28h] }
  if ( v52 )
    goto $LN247;
  if ( usingAABBCollection )
  {
    *(float *)&_XMM0 = CG_CalloutMarkerPing_GetEntityOffsetForPointLineSegmentDistCheck(localClientNum, entNum);
    __asm
    {
      vmovss  xmm1, [rsp+0E8h+traceRadius]
      vmovss  xmm3, [rsp+0E8h+traceDistance]; traceDistance
      vmovss  [rsp+0E8h+radiusExtension], xmm0
      vmovss  dword ptr [rsp+0E8h+fmt], xmm1
    }
    if ( !CG_CalloutMarkerPing_TargetIsWithinViewSphere(traceStart, traceDir, &outOrigin, *(const float *)&_XMM3, fmt, radiusExtensiona) )
      goto $LN247;
  }
  if ( type == 10 )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_trace_enemy_bias, "calloutmarkerping_trace_enemy_bias");
    __asm { vaddss  xmm6, xmm0, xmm6 }
  }
  else
  {
    v52 = type < 6;
    if ( type == 6 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      linkedEntNum = CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum)->linkedEntNum;
      v52 = 0;
      if ( linkedEntNum > 0 )
      {
        v55 = CG_GetEntity(localClientNum, linkedEntNum - 1);
        v56 = 2047;
        if ( v55 )
        {
          v57 = *(_DWORD *)&v55->nextState.clientLinkInfo & 0x7FF;
          if ( v57 )
            v56 = v57 - 1;
        }
        v52 = v56 < entNum;
        if ( v56 == entNum )
          goto $LN247;
      }
    }
  }
  __asm { vcomiss xmm6, xmm9 }
  if ( v52 )
    goto $LN247;
  numIgnoreEnts[0] = 0;
  CG_CalloutMarkerPing_InitTraceSightIgnoreList(localClientNum, ignoreEnts, numIgnoreEnts);
  v58 = numIgnoreEnts[0];
  while ( 1 )
  {
    *(PingTraceSightResult *)numIgnoreEnts = CG_CalloutMarkerPing_TraceSight(localClientNum, traceStart, &outOrigin, entNum, 0xFFFFFFFF, v58, ignoreEnts);
    v59 = numIgnoreEnts[0];
    if ( !CG_CalloutMarkerPing_ShouldIgnoreAndRetraceSight(localClientNum, entNum, (CalloutMarkerPingType)type, (const PingTraceSightResult *)numIgnoreEnts, v58) )
      break;
    if ( (unsigned int)v58 >= 4 )
    {
      LODWORD(v69) = 4;
      LODWORD(radiusExtension) = v58;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3853, ASSERT_TYPE_ASSERT, "(unsigned)( numIgnoreEnts ) < (unsigned)( TRACE_SIGHT_IGNORE_ENTS_ARRAY_SIZE )", "numIgnoreEnts doesn't index TRACE_SIGHT_IGNORE_ENTS_ARRAY_SIZE\n\t%i not in [0, %i)", radiusExtension, v69) )
        __debugbreak();
    }
    v60 = v58++;
    ignoreEnts[v60] = numIgnoreEnts[1];
  }
  if ( !v59 )
  {
$LN247:
    __asm { vxorps  xmm0, xmm0, xmm0; jumptable 00000001403C6D5D default case, cases 0-5,14-16,18-22 }
    goto LABEL_30;
  }
  __asm { vmovaps xmm0, xmm6 }
LABEL_30:
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_CalloutMarkerPing_ScoreScriptable
==============
*/

float __fastcall CG_CalloutMarkerPing_ScoreScriptable(LocalClientNum_t localClientNum, const bool usingAABBCollection, double bestScore, const vec3_t *traceStart, const vec3_t *traceDir, const float traceDistance, const float traceRadius, unsigned int scriptableIndex, int type)
{
  char v20; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  char v58; 
  __int16 LinkObject; 
  int i; 
  char v61; 
  __int64 v62; 
  __int64 numIgnoreEnts; 
  __int16 *ignoreEnts; 
  unsigned int outFirstUsablePartIndex[2]; 
  vec3_t out_usePosition; 
  vec3_t end; 

  __asm
  {
    vmovaps [rsp+0D0h+var_40], xmm6
    vmovaps [rsp+0D0h+var_60], xmm8
    vmovaps xmm8, xmm2
  }
  if ( CG_CalloutMarkerPing_IsInPrematch(localClientNum) && type != 17 )
    goto LABEL_18;
  if ( !CG_CalloutMarkerPing_TypeCanBeTraceHit((CalloutMarkerPingType)type) )
    goto LABEL_18;
  if ( !ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) )
    goto LABEL_18;
  if ( !ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def )
    goto LABEL_18;
  if ( type == 20 && ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) )
  {
    _RAX = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    __asm
    {
      vmovss  xmm1, dword ptr [rax+30h]; angle2
      vmovss  xmm0, dword ptr [rax+18h]; angle1
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3c23d70a
    }
    if ( v20 )
      goto LABEL_18;
  }
  if ( ScriptableCl_IsLootWeaponWithInvalidHandleIndex(localClientNum, scriptableIndex) )
    goto LABEL_18;
  __asm { vmovaps [rsp+0D0h+var_50], xmm7 }
  outFirstUsablePartIndex[0] = 0;
  if ( ScriptableCl_IsScriptableUsable(localClientNum, scriptableIndex, outFirstUsablePartIndex) )
  {
    ScriptableCl_GetPartUsePosition(localClientNum, scriptableIndex, outFirstUsablePartIndex[0], &out_usePosition);
    __asm { vmovss  xmm2, dword ptr [rbp+37h+out_usePosition+8] }
  }
  else
  {
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &out_usePosition);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+37h+out_usePosition+8]
      vaddss  xmm2, xmm0, cs:__real@42000000
      vmovss  dword ptr [rbp+37h+out_usePosition+8], xmm2
    }
  }
  __asm
  {
    vsubss  xmm6, xmm2, dword ptr [r13+8]
    vmovss  xmm0, dword ptr [rbp+37h+out_usePosition]
    vsubss  xmm7, xmm0, dword ptr [r13+0]
    vmovss  xmm1, dword ptr [rbp+37h+out_usePosition+4]
    vsubss  xmm4, xmm1, dword ptr [r13+4]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmulss  xmm1, xmm7, xmm5
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmulss  xmm0, xmm6, xmm5
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_trace_entity_mindot, "calloutmarkerping_trace_entity_mindot");
  __asm
  {
    vcomiss xmm6, xmm0
    vmovaps xmm7, [rsp+0D0h+var_50]
  }
  if ( v20 )
    goto LABEL_18;
  __asm { vcomiss xmm6, xmm8 }
  if ( ((type - 14) & 0xFFFFFFFC) == 0 && type != 15 )
  {
    if ( !ScriptableCl_IsScriptableUsable(localClientNum, scriptableIndex, NULL) )
      goto LABEL_18;
    goto LABEL_21;
  }
  if ( usingAABBCollection )
  {
LABEL_21:
    __asm
    {
      vmovss  xmm2, [rbp+37h+traceDistance]
      vmulss  xmm0, xmm2, dword ptr [rbx]
      vaddss  xmm1, xmm0, dword ptr [r13+0]
      vmulss  xmm0, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbp+37h+end], xmm1
      vaddss  xmm1, xmm0, dword ptr [r13+4]
      vmulss  xmm0, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+37h+end+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [r13+8]
      vmovss  dword ptr [rbp+37h+end+8], xmm1
    }
    *(double *)&_XMM0 = PointToLineSegmentDistSq(&out_usePosition, traceStart, &end);
    __asm
    {
      vmovss  xmm1, [rbp+37h+traceRadius]
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm0, xmm2
    }
    if ( !(v20 | v58) )
      goto LABEL_18;
  }
  LinkObject = 2047;
  if ( ScriptableCl_GetLinkType(localClientNum, scriptableIndex) == SCRIPTABLE_LINK_ENTITY )
    LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
  outFirstUsablePartIndex[0] = 0;
  CG_CalloutMarkerPing_InitTraceSightIgnoreList(localClientNum, (__int16 *)&end, (int *)outFirstUsablePartIndex);
  for ( i = outFirstUsablePartIndex[0]; ; ++i )
  {
    *(PingTraceSightResult *)outFirstUsablePartIndex = CG_CalloutMarkerPing_TraceSight(localClientNum, traceStart, &out_usePosition, LinkObject, scriptableIndex, i, (__int16 *)&end);
    v61 = outFirstUsablePartIndex[0];
    if ( !CG_CalloutMarkerPing_ShouldIgnoreAndRetraceSight(localClientNum, LinkObject, (CalloutMarkerPingType)type, (const PingTraceSightResult *)outFirstUsablePartIndex, i) )
      break;
    if ( (unsigned int)i >= 4 )
    {
      LODWORD(ignoreEnts) = 4;
      LODWORD(numIgnoreEnts) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3972, ASSERT_TYPE_ASSERT, "(unsigned)( numIgnoreEnts ) < (unsigned)( TRACE_SIGHT_IGNORE_ENTS_ARRAY_SIZE )", "numIgnoreEnts doesn't index TRACE_SIGHT_IGNORE_ENTS_ARRAY_SIZE\n\t%i not in [0, %i)", numIgnoreEnts, ignoreEnts) )
        __debugbreak();
    }
    v62 = i;
    *((_WORD *)end.v + v62) = outFirstUsablePartIndex[1];
  }
  if ( v61 )
  {
    __asm { vmovaps xmm0, xmm6 }
    goto LABEL_19;
  }
LABEL_18:
  __asm { vxorps  xmm0, xmm0, xmm0 }
LABEL_19:
  __asm
  {
    vmovaps xmm6, [rsp+0D0h+var_40]
    vmovaps xmm8, [rsp+0D0h+var_60]
  }
  return *(float *)&_XMM0;
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

bool __fastcall CG_CalloutMarkerPing_TargetIsWithinViewSphere(const vec3_t *viewPos, const vec3_t *viewDir, const vec3_t *targetPos, double traceDistance, const float traceRadius)
{
  char v15; 
  bool result; 
  vec3_t end; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmulss  xmm0, xmm3, dword ptr [rdx]
    vaddss  xmm1, xmm0, dword ptr [rcx]
    vmulss  xmm0, xmm3, dword ptr [rdx+4]
    vmovss  xmm2, [rsp+58h+traceRadius]
    vaddss  xmm6, xmm2, [rsp+58h+radiusExtension]
    vmovss  dword ptr [rsp+58h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+4]
    vmulss  xmm0, xmm3, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+58h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+58h+end+8], xmm1
  }
  *(double *)&_XMM0 = PointToLineSegmentDistSq(targetPos, viewPos, &end);
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vcomiss xmm1, xmm0
  }
  result = !v15;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
CG_CalloutMarkerPing_TraceSight
==============
*/
PingTraceSightResult CG_CalloutMarkerPing_TraceSight(LocalClientNum_t localClientNum, const vec3_t *traceStart, const vec3_t *traceEnd, __int16 entNum, unsigned int scriptableIndex, int numIgnoreEnts, __int16 *ignoreEnts)
{
  __int32 v11; 
  const dvar_t *v13; 
  int v14; 
  __int16 *v15; 
  int i; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  unsigned int RaycastHitBodyId; 
  int Ref; 
  int v20; 
  int EntityNum; 
  hkMemoryAllocator *v22; 
  hkMemoryAllocator *v23; 
  __int64 v25; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v27; 
  __int64 v28; 

  v28 = -2i64;
  v25 = 0i64;
  v11 = 3 * localClientNum + 2;
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+3Fh+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  v13 = DVARBOOL_calloutmarkerping_sightTraceContentsFix;
  if ( !DVARBOOL_calloutmarkerping_sightTraceContentsFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_sightTraceContentsFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = 8396801;
  if ( v13->current.enabled )
    v14 = 8433665;
  extendedData.contents = v14;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v27, numIgnoreEnts, 0);
  v15 = ignoreEnts;
  if ( ignoreEnts && numIgnoreEnts > 0 )
  {
    for ( i = 0; i < numIgnoreEnts; ++i )
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v27, i, *v15++, 1, 1, 1, 1, 1);
    extendedData.ignoreBodies = &v27;
  }
  ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v11);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3221, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  Physics_Raycast((Physics_WorldId)v11, traceStart, traceEnd, &extendedData, ClosestResult);
  CG_CalloutMarkerPing_DebugTraceLine(traceStart, traceEnd, ClosestResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    LOWORD(v25) = 256;
    RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
    Ref = Physics_GetRef((Physics_WorldId)v11, RaycastHitBodyId);
    if ( Physics_GetRefSystem(Ref) == Physics_RefSystem_Scriptable )
    {
      BYTE2(v25) = 0;
      v20 = Ref & 0x3FFFFF;
      HIDWORD(v25) = v20;
      if ( scriptableIndex != -1 && v20 == scriptableIndex )
        LOBYTE(v25) = 1;
    }
    else
    {
      BYTE2(v25) = 1;
      EntityNum = Physics_GetEntityNum(Ref);
      WORD2(v25) = EntityNum;
      if ( (unsigned __int16)(entNum - 2046) > 1u )
        LOBYTE(v25) = EntityNum == entNum;
    }
  }
  else
  {
    LOBYTE(v25) = 1;
  }
  v22 = hkMemHeapAllocator();
  v27.m_ignoreBodies.m_size = 0;
  if ( v27.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v22, v27.m_ignoreBodies.m_data, 4, v27.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v27.m_ignoreBodies.m_data = NULL;
  v27.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v23 = hkMemHeapAllocator();
  v27.m_ignoreEntities.m_size = 0;
  if ( v27.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v23, v27.m_ignoreEntities.m_data, 8, v27.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return (PingTraceSightResult)v25;
}

/*
==============
CG_CalloutMarkerPing_TraceSolidForNavOrDanger
==============
*/

_BOOL8 __fastcall CG_CalloutMarkerPing_TraceSolidForNavOrDanger(LocalClientNum_t localClientNum, const vec3_t *traceStart, const vec3_t *traceDir, double traceDistance, vec3_t *outPosition, CalloutMarkerPingType *outPingType, __int16 *outEntityNum)
{
  const vec3_t *v7; 
  __int32 v15; 
  unsigned int v16; 
  centity_t *TurretEntity; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  char v20; 
  unsigned int NumHits; 
  unsigned int RaycastHitBodyId; 
  int Ref; 
  int EntityNum; 
  __int16 v25; 
  int v26; 
  bool HasHit; 
  hkMemoryAllocator *v28; 
  hkMemoryAllocator *v29; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v33; 
  __int64 v34; 
  vec3_t end; 

  v34 = -2i64;
  v7 = traceStart;
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8]
    vaddss  xmm1, xmm0, dword ptr [rdx]
    vmovss  dword ptr [rbp+3Fh+end], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+4]
    vaddss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  dword ptr [rbp+3Fh+end+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+8]
    vaddss  xmm1, xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [rbp+3Fh+end+8], xmm1
  }
  v15 = 3 * localClientNum + 2;
  v16 = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+3Fh+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 8193;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v33, 1, 0);
  TurretEntity = CG_GetTurretEntity(localClientNum);
  if ( TurretEntity && (TurretEntity->flags & 1) != 0 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v33, 0, TurretEntity->nextState.number, 1, 1, 1, 1, 1);
    extendedData.ignoreBodies = &v33;
  }
  ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v15);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3334, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  v20 = 0;
  Physics_Raycast((Physics_WorldId)v15, v7, &end, &extendedData, ClosestResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(ClosestResult);
    if ( NumHits )
    {
      do
      {
        RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, v16);
        Ref = Physics_GetRef((Physics_WorldId)v15, RaycastHitBodyId);
        if ( ((Physics_GetRefSystem(Ref) - 2) & 0xFFFFFFFD) == 0 )
        {
          EntityNum = Physics_GetEntityNum(Ref);
          v25 = EntityNum;
          if ( (EntityNum < 0 || (unsigned int)EntityNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)EntityNum, "signed", EntityNum) )
            __debugbreak();
          if ( v25 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3358, ASSERT_TYPE_ASSERT, "(entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entNum != ENTITYNUM_NONE") )
            __debugbreak();
          if ( (unsigned __int16)v25 < 0x7FEu )
          {
            LOBYTE(v26) = CG_CalloutMarkerPing_ClassifyEntity(localClientNum, v25);
            if ( v26 )
            {
              v20 = 0;
              *(_DWORD *)outPingType = v26;
              *outEntityNum = v25;
            }
            else
            {
              v20 = 1;
            }
          }
        }
        ++v16;
      }
      while ( v16 < NumHits );
      v7 = traceStart;
    }
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, outPosition);
  }
  CG_CalloutMarkerPing_DebugTraceLine(v7, &end, ClosestResult);
  if ( v20 )
    HasHit = 0;
  else
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
  v28 = hkMemHeapAllocator();
  v33.m_ignoreBodies.m_size = 0;
  if ( v33.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v28, v33.m_ignoreBodies.m_data, 4, v33.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v33.m_ignoreBodies.m_data = NULL;
  v33.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v29 = hkMemHeapAllocator();
  v33.m_ignoreEntities.m_size = 0;
  if ( v33.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v29, v33.m_ignoreEntities.m_data, 8, v33.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
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
  __int64 v8; 
  cg_t *LocalClientGlobals; 
  playerState_s *v13; 
  unsigned __int8 v17; 
  char v18; 
  unsigned int v21; 
  const CalloutMarkerPingView *View; 
  const CalloutMarkerPingView *v23; 
  unsigned int v24; 
  char v49; 
  char v51; 
  CG_CalloutMarkerPingData *v62; 
  __int64 v69; 
  __int64 v71; 
  int v72; 
  playerState_s *ps; 
  CG_CalloutMarkerPingData *v74; 
  vec3_t outWorldOrigin; 
  vec3_t rayDir; 
  vec3_t outOrg; 
  vec3_t bbMax; 
  vec3_t bbMin; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
  }
  v8 = localClientNum;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v72 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 1802, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v72) )
      __debugbreak();
  }
  ps = &CG_GetLocalClientGlobals((const LocalClientNum_t)v8)->predictedPlayerState;
  v74 = &s_calloutMarkerPingData[v8];
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  __asm
  {
    vmovss  xmm11, cs:__real@80000000
    vmovss  xmm10, cs:__real@3f800000
  }
  v13 = ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+6944h]
    vmovss  dword ptr [rsp+130h+rayDir], xmm0
    vmovss  xmm1, dword ptr [rax+6948h]
    vmovss  dword ptr [rsp+130h+rayDir+4], xmm1
    vmovss  xmm0, dword ptr [rax+694Ch]
  }
  v17 = 0;
  __asm
  {
    vmovaps [rsp+130h+var_38+8], xmm6
    vmovaps [rsp+130h+var_48+8], xmm7
  }
  v18 = 53;
  __asm
  {
    vmovss  dword ptr [rsp+130h+rayDir+8], xmm0
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm9, xmm9, xmm9
  }
  do
  {
    if ( v17 / 0xDu >= 4 )
    {
      LODWORD(v71) = 4;
      LODWORD(v69) = v17 / 0xDu;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( teammateIndex ) < (unsigned)( 4 )", "teammateIndex doesn't index CALLOUT_MARKER_PING_MAX_TEAM_SIZE\n\t%i not in [0, %i)", v69, v71) )
        __debugbreak();
    }
    v21 = v17 % 0xDu;
    if ( v21 >= 0xD )
    {
      LODWORD(v71) = 13;
      LODWORD(v69) = v17 % 0xDu;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 181, ASSERT_TYPE_ASSERT, "(unsigned)( poolIndex ) < (unsigned)( 13 )", "poolIndex doesn't index CALLOUT_MARKER_PING_LOCAL_PLAYER_POOL_SIZE\n\t%i not in [0, %i)", v69, v71) )
        __debugbreak();
    }
    View = CG_CalloutMarkerPing_GetView((LocalClientNum_t)v8, v17, v13);
    v23 = View;
    if ( View->origin.owner )
    {
      if ( CG_CalloutMarkerPing_GetWorldOrigin((const CalloutMarkerPingPool)v21, View, (LocalClientNum_t)v8, &outWorldOrigin) )
      {
        LOBYTE(v24) = CG_CalloutMarkerPing_ClassifyPing((LocalClientNum_t)v8, (const CalloutMarkerPingPool)v21, v23);
        if ( v24 != 10 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+130h+outWorldOrigin]
            vsubss  xmm7, xmm0, dword ptr [rsp+130h+outOrg]
            vmovss  xmm1, dword ptr [rsp+130h+outWorldOrigin+4]
            vsubss  xmm4, xmm1, dword ptr [rsp+130h+outOrg+4]
            vmovss  xmm0, dword ptr [rsp+130h+outWorldOrigin+8]
            vsubss  xmm6, xmm0, dword ptr [rsp+130h+outOrg+8]
            vmulss  xmm2, xmm4, xmm4
            vmulss  xmm1, xmm7, xmm7
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vcmpless xmm0, xmm1, xmm11
            vblendvps xmm0, xmm1, xmm10, xmm0
            vdivss  xmm5, xmm10, xmm0
            vmulss  xmm0, xmm5, xmm4
            vmulss  xmm3, xmm0, dword ptr [rsp+130h+rayDir+4]
            vmulss  xmm1, xmm5, xmm7
            vmulss  xmm2, xmm1, dword ptr [rsp+130h+rayDir]
            vmulss  xmm0, xmm5, xmm6
            vmulss  xmm1, xmm0, dword ptr [rsp+130h+rayDir+8]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm7, xmm4, xmm1
            vcomiss xmm7, xmm9
          }
          if ( v24 >= 0xA )
          {
            _RSI = DCONST_DVARFLT_calloutmarkerping_lookat_ping_icon_dot;
            if ( !DCONST_DVARFLT_calloutmarkerping_lookat_ping_icon_dot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_lookat_ping_icon_dot") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RSI);
            __asm { vcomiss xmm7, dword ptr [rsi+28h] }
            if ( !v49 )
              goto LABEL_21;
            *(double *)&_XMM0 = CG_CalloutMarkerPing_GetZOffset((const CalloutMarkerPingPool)v21, v23, (LocalClientNum_t)v8);
            __asm
            {
              vcomiss xmm0, xmm8
              vmovaps xmm6, xmm0
            }
            if ( !(v49 | v51) )
            {
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_lookat_ping_beam_dist, "calloutmarkerping_lookat_ping_beam_dist");
              __asm
              {
                vmovss  xmm5, dword ptr [rsp+130h+outWorldOrigin]
                vmovss  xmm3, dword ptr [rsp+130h+outWorldOrigin+4]
                vmovss  xmm4, dword ptr [rsp+130h+outWorldOrigin+8]
                vaddss  xmm1, xmm0, xmm5
                vaddss  xmm2, xmm0, xmm3
                vmovss  dword ptr [rbp+30h+bbMax], xmm1
                vaddss  xmm1, xmm0, xmm4
                vmovss  dword ptr [rbp+30h+bbMax+4], xmm2
                vsubss  xmm2, xmm5, xmm0
                vmovss  dword ptr [rbp+30h+bbMax+8], xmm1
                vsubss  xmm1, xmm3, xmm0
                vaddss  xmm0, xmm0, xmm6
                vmovss  dword ptr [rbp+30h+bbMin], xmm2
                vsubss  xmm2, xmm4, xmm0
                vmovss  dword ptr [rbp+30h+bbMin+8], xmm2
                vmovss  dword ptr [rbp+30h+bbMin+4], xmm1
                vmovss  dword ptr [rsp+130h+ps], xmm8
              }
              if ( IntersectRayAABB(&outOrg, &rayDir, &bbMin, &bbMax, (float *)&ps) )
              {
LABEL_21:
                __asm { vmovaps xmm9, xmm7 }
                v18 = v17;
              }
            }
          }
        }
      }
    }
    ++v17;
  }
  while ( v17 < 0x34u );
  v62 = v74;
  __asm
  {
    vmovaps xmm11, [rsp+130h+var_88+8]
    vmovaps xmm10, [rsp+130h+var_78+8]
    vmovaps xmm9, [rsp+130h+var_68+8]
    vmovaps xmm8, [rsp+130h+var_58+8]
    vmovaps xmm7, [rsp+130h+var_48+8]
    vmovaps xmm6, [rsp+130h+var_38+8]
  }
  if ( v74->pingLookAtViewIndex != v18 )
  {
    v74->pingLookAtViewIndex = v18;
    v62->dirty = 1;
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
  LocalClientNum_t v8; 
  CgCompassSystemMP *CompassSystemMP; 
  const dvar_t *v13; 
  int radarStrength; 
  const playerState_s *p_predictedPlayerState; 
  unsigned __int8 v22; 
  CalloutMarkerPingPool pool; 
  const CalloutMarkerPingView *View; 
  __int16 *v27; 
  char v37; 
  unsigned int v39; 
  int v40; 
  bool v43; 
  bool v44; 
  const dvar_t *v55; 
  unsigned __int8 v56; 
  unsigned __int8 v57; 
  const ObjectiveSettings *v59; 
  const ObjectiveSettings *v60; 
  objectiveState_t state; 
  unsigned int InstanceIndex; 
  int v63; 
  bool v74; 
  int *p_entIndex; 
  __int64 v76; 
  bool v77; 
  centity_t *Entity; 
  GfxImage **outIcon; 
  __int64 v97; 
  GfxImage *v99; 
  vec3_t outPosition; 
  vec3_t outDirection; 
  char v102; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  v8 = localClientNum;
  _RBX = localClientNum;
  _R15 = s_calloutMarkerPingData;
  s_calloutMarkerPingData[_RBX].tacmapLookAt.pingIndex = 53;
  s_calloutMarkerPingData[_RBX].tacmapLookAt.scriptableIndex = -1;
  s_calloutMarkerPingData[_RBX].tacmapLookAt.objectiveIndex = -1;
  s_calloutMarkerPingData[_RBX].tacmapLookAt.entityIndex = 2047;
  if ( CG_GameInterface_PlayingBR() )
  {
    CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(v8);
    if ( CgCompassSystem::GetCurrentCompassType(CompassSystemMP) == COMPASS_TYPE_TACMAP )
    {
      _RSI = CG_GetLocalClientGlobals(v8);
      v13 = DCONST_DVARINT_bg_counterUAVStrengthLevelShowFriendlyOnly;
      if ( !DCONST_DVARINT_bg_counterUAVStrengthLevelShowFriendlyOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_counterUAVStrengthLevelShowFriendlyOnly") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      radarStrength = _RSI->predictedPlayerState.radarStrength;
      if ( radarStrength > v13->current.integer )
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rsi+4A020h]
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm7, xmm0
        }
        if ( (unsigned int)radarStrength > v13->current.integer )
        {
          *(double *)&_XMM0 = CgCompassSystem::GetCurrentCompassZoomLevel(CompassSystemMP);
          __asm
          {
            vmovaps xmm6, xmm0
            vmovss  xmm1, cs:__real@3f800000
            vdivss  xmm8, xmm1, xmm7
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_calloutmarkerping_trace_tacmap_radius, "calloutmarkerping_trace_tacmap_radius");
          __asm { vmulss  xmm7, xmm0, xmm6 }
          CG_CalloutMarkerPing_GetTacmapWorldPos(v8, &outPosition, &outDirection);
          p_predictedPlayerState = &_RSI->predictedPlayerState;
          *(_QWORD *)outDirection.v = &_RSI->predictedPlayerState;
          v22 = 0;
          __asm
          {
            vmovss  xmm9, dword ptr [rsp+108h+outPosition+4]
            vmovss  xmm10, dword ptr [rsp+108h+outPosition]
          }
          do
          {
            if ( (unsigned int)v8 >= LOCAL_CLIENT_COUNT )
            {
              LODWORD(v97) = 2;
              LODWORD(outIcon) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 2019, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outIcon, v97) )
                __debugbreak();
            }
            if ( v22 == 52 )
              pool = s_calloutMarkerPingData[_RBX].predicted.pool;
            else
              pool = BG_CalloutMarkerPing_ViewIndexToPool(v22);
            View = CG_CalloutMarkerPing_GetView(v8, v22, p_predictedPlayerState);
            v27 = (__int16 *)View;
            if ( View->origin.owner )
            {
              CG_CalloutMarkerPing_GetWorldOrigin(pool, View, v8, &outPosition);
              __asm
              {
                vmovss  xmm3, dword ptr [rsp+108h+outPosition]
                vsubss  xmm1, xmm3, xmm10
                vmovss  xmm4, dword ptr [rsp+108h+outPosition+4]
                vsubss  xmm0, xmm4, xmm9
                vmulss  xmm2, xmm0, xmm0
                vmulss  xmm1, xmm1, xmm1
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm0, xmm2, xmm2
                vmulss  xmm5, xmm0, xmm8
                vcomiss xmm7, xmm5
              }
              if ( !(v77 | v37) )
              {
                __asm { vmovaps xmm7, xmm5 }
                s_calloutMarkerPingData[_RBX].tacmapLookAt.scriptableIndex = -1;
                s_calloutMarkerPingData[_RBX].tacmapLookAt.objectiveIndex = -1;
                s_calloutMarkerPingData[_RBX].tacmapLookAt.entityIndex = 2047;
                __asm
                {
                  vmovss  dword ptr [rbx+r15+3B0h], xmm3
                  vmovss  dword ptr [rbx+r15+3B4h], xmm4
                  vmovss  xmm0, dword ptr [rsp+108h+outPosition+8]
                  vmovss  dword ptr [rbx+r15+3B8h], xmm0
                }
                s_calloutMarkerPingData[_RBX].tacmapLookAt.pingIndex = v22;
                if ( pool == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(pool - 4) <= 2u )
                {
                  s_calloutMarkerPingData[_RBX].tacmapLookAt.entityIndex = *v27;
                }
                else if ( (unsigned __int8)(pool - 9) > 2u )
                {
                  if ( pool == CONST_CALLOUT_POOL_ID_WORLD )
                    s_calloutMarkerPingData[_RBX].tacmapLookAt.objectiveIndex = *v27;
                }
                else
                {
                  s_calloutMarkerPingData[_RBX].tacmapLookAt.scriptableIndex = *(_DWORD *)v27;
                }
              }
            }
            ++v22;
          }
          while ( v22 < 0x35u );
          if ( s_calloutMarkerPingData[_RBX].tacmapLookAt.pingIndex == 53 )
          {
            v39 = 0;
            if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_objectives, "calloutmarkerping_tacmap_hit_objectives") )
            {
              v40 = 0;
              _RDI = &p_predictedPlayerState->objectives[0].background;
              _RBP = s_calloutMarkerPingData;
              do
              {
                if ( *((char *)_RDI - 2) >= 0 && *(_DWORD *)(_RDI - 158) == 2047 && !CompassSystemMP->IsObjectiveFiltered(CompassSystemMP, COMPASS_TYPE_TACMAP, *_RDI) && !CompassSystemMP->IsObjectiveMini(CompassSystemMP, COMPASS_TYPE_TACMAP, *_RDI) && CgCompassSystemMP::GetObjectiveShouldRender(CompassSystemMP, *((objectiveState_t *)_RDI + 1), (ObjectiveFlags)*((unsigned __int16 *)_RDI - 1), 0, *(_DWORD *)(_RDI - 14), (const GfxImage **)&v99) )
                {
                  v43 = *(_DWORD *)(_RDI - 158) <= 0x7FFu;
                  if ( *(_DWORD *)(_RDI - 158) != 2047 )
                  {
                    v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3151, ASSERT_TYPE_ASSERT, "(obj->entNum[0] == ENTITYNUM_NONE)", (const char *)&queryFormat, "obj->entNum[0] == ENTITYNUM_NONE");
                    v43 = !v44;
                    if ( v44 )
                      __debugbreak();
                  }
                  __asm
                  {
                    vmovss  xmm3, dword ptr [rdi-7Eh]
                    vmovss  xmm4, dword ptr [rdi-7Ah]
                    vmovss  xmm6, dword ptr [rdi-76h]
                    vsubss  xmm1, xmm3, xmm10
                    vsubss  xmm0, xmm4, xmm9
                    vmulss  xmm2, xmm0, xmm0
                    vmulss  xmm1, xmm1, xmm1
                    vaddss  xmm2, xmm2, xmm1
                    vsqrtss xmm0, xmm2, xmm2
                    vmulss  xmm5, xmm0, xmm8
                    vcomiss xmm7, xmm5
                  }
                  if ( !v43 )
                  {
                    __asm { vmovaps xmm7, xmm5 }
                    s_calloutMarkerPingData[_RBX].tacmapLookAt.pingIndex = 53;
                    s_calloutMarkerPingData[_RBX].tacmapLookAt.scriptableIndex = -1;
                    s_calloutMarkerPingData[_RBX].tacmapLookAt.entityIndex = 2047;
                    __asm
                    {
                      vmovss  dword ptr [rbx+rbp+3B0h], xmm3
                      vmovss  dword ptr [rbx+rbp+3B4h], xmm4
                      vmovss  dword ptr [rbx+rbp+3B8h], xmm6
                    }
                    s_calloutMarkerPingData[_RBX].tacmapLookAt.objectiveIndex = v40;
                  }
                }
                ++v40;
                _RDI += 172;
              }
              while ( v40 < 32 );
              v39 = 0;
              v8 = localClientNum;
            }
            if ( s_calloutMarkerPingData[_RBX].tacmapLookAt.objectiveIndex == -1 )
            {
              if ( !CG_CalloutMarkerPing_IsInPrematch(v8) )
              {
                v55 = DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_tablets;
                if ( !DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_tablets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_tacmap_hit_tablets") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v55);
                if ( v55->current.enabled || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_kiosks, "calloutmarkerping_tacmap_hit_kiosks") )
                {
                  v56 = ScriptableCl_ObjectiveCount(v8);
                  v57 = 0;
                  if ( v56 )
                  {
                    _R15 = s_calloutMarkerPingData;
                    do
                    {
                      v59 = ScriptableCl_ObjectiveGet(v8, v57, &outPosition);
                      v60 = v59;
                      if ( v59 )
                      {
                        state = v59->state;
                        if ( (state == OBJST_ACTIVE || state == OBJST_CURRENT) && !CompassSystemMP->IsObjectiveFiltered(CompassSystemMP, COMPASS_TYPE_TACMAP, v60->background) && !CompassSystemMP->IsObjectiveMini(CompassSystemMP, COMPASS_TYPE_TACMAP, v60->background) )
                        {
                          InstanceIndex = ScriptableCl_ObjectiveGetInstanceIndex(v8, v57);
                          v63 = CG_CalloutMarkerPing_ClassifyScriptable(v8, InstanceIndex);
                          if ( CG_CalloutMarkerPing_TypeCanBeTacMapHit(v63) )
                          {
                            __asm
                            {
                              vmovss  xmm3, dword ptr [rsp+108h+outPosition]
                              vsubss  xmm1, xmm3, xmm10
                              vmovss  xmm4, dword ptr [rsp+108h+outPosition+4]
                              vsubss  xmm0, xmm4, xmm9
                              vmulss  xmm2, xmm0, xmm0
                              vmulss  xmm1, xmm1, xmm1
                              vaddss  xmm2, xmm2, xmm1
                              vsqrtss xmm0, xmm2, xmm2
                              vmulss  xmm5, xmm0, xmm8
                              vcomiss xmm7, xmm5
                              vmovaps xmm7, xmm5
                            }
                            s_calloutMarkerPingData[_RBX].tacmapLookAt.pingIndex = 53;
                            s_calloutMarkerPingData[_RBX].tacmapLookAt.objectiveIndex = -1;
                            s_calloutMarkerPingData[_RBX].tacmapLookAt.entityIndex = 2047;
                            __asm
                            {
                              vmovss  dword ptr [rbx+r15+3B0h], xmm3
                              vmovss  dword ptr [rbx+r15+3B4h], xmm4
                              vmovss  xmm0, dword ptr [rsp+108h+outPosition+8]
                              vmovss  dword ptr [rbx+r15+3B8h], xmm0
                            }
                            s_calloutMarkerPingData[_RBX].tacmapLookAt.scriptableIndex = InstanceIndex;
                          }
                        }
                      }
                      ++v57;
                    }
                    while ( v57 < v56 );
                    v39 = 0;
                  }
                }
              }
              if ( s_calloutMarkerPingData[_RBX].tacmapLookAt.scriptableIndex == -1 && (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_vehicles, "calloutmarkerping_tacmap_hit_vehicles") )
              {
                v74 = DVARBOOL_bg_compassEnableVisibleVehiclesMask && Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_compassEnableVisibleVehiclesMask, "bg_compassEnableVisibleVehiclesMask");
                p_entIndex = &CgVehicleSystem::GetVehicleSystem(v8)->m_vehicleClients[0].entIndex;
                v76 = *(_QWORD *)outDirection.v;
                v77 = 1;
                do
                {
                  if ( !v77 )
                  {
                    LODWORD(v97) = 128;
                    LODWORD(outIcon) = v39;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", outIcon, v97) )
                      __debugbreak();
                  }
                  if ( CG_Vehicle_IsClientValid(v8, (const VehicleClient *)(p_entIndex - 20)) && (p_entIndex[5] & 0x20000) == 0 )
                  {
                    if ( !v74 )
                      goto LABEL_77;
                    if ( v39 >= 0x80 )
                    {
                      LODWORD(v97) = 128;
                      LODWORD(outIcon) = v39;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outIcon, v97) )
                        __debugbreak();
                    }
                    if ( ((0x80000000 >> (v39 & 0x1F)) & *(_DWORD *)(v76 + 4 * ((unsigned __int64)v39 >> 5) + 4580)) == 0 )
                    {
LABEL_77:
                      Entity = CG_GetEntity(v8, *p_entIndex);
                      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping.cpp", 3674, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
                        __debugbreak();
                      if ( !CompassSystemMP->IsVehicleFiltered(CompassSystemMP, COMPASS_TYPE_TACMAP, Entity) && !CompassSystemMP->IsVehicleMini(CompassSystemMP, COMPASS_TYPE_TACMAP) )
                      {
                        CG_GetPoseOrigin(&Entity->pose, &outDirection);
                        __asm
                        {
                          vmovss  xmm3, dword ptr [rsp+108h+outDirection]
                          vsubss  xmm1, xmm3, xmm10
                          vmovss  xmm4, dword ptr [rsp+108h+outDirection+4]
                          vsubss  xmm0, xmm4, xmm9
                          vmulss  xmm2, xmm0, xmm0
                          vmulss  xmm1, xmm1, xmm1
                          vaddss  xmm2, xmm2, xmm1
                          vsqrtss xmm0, xmm2, xmm2
                          vmulss  xmm5, xmm0, xmm8
                          vcomiss xmm7, xmm5
                        }
                        if ( !(v77 | v37) )
                        {
                          __asm { vmovaps xmm7, xmm5 }
                          _RCX = s_calloutMarkerPingData;
                          s_calloutMarkerPingData[_RBX].tacmapLookAt.pingIndex = 53;
                          s_calloutMarkerPingData[_RBX].tacmapLookAt.scriptableIndex = -1;
                          s_calloutMarkerPingData[_RBX].tacmapLookAt.objectiveIndex = -1;
                          s_calloutMarkerPingData[_RBX].tacmapLookAt.entityIndex = 2047;
                          __asm
                          {
                            vmovss  dword ptr [rbx+rcx+3B0h], xmm3
                            vmovss  dword ptr [rbx+rcx+3B4h], xmm4
                            vmovss  xmm0, dword ptr [rsp+108h+outDirection+8]
                            vmovss  dword ptr [rbx+rcx+3B8h], xmm0
                          }
                          s_calloutMarkerPingData[_RBX].tacmapLookAt.entityIndex = *(_WORD *)p_entIndex;
                        }
                        memset(&outDirection, 0, sizeof(outDirection));
                      }
                    }
                  }
                  ++v39;
                  p_entIndex += 147;
                  v77 = v39 < 0x80;
                }
                while ( (int)v39 < 128 );
              }
            }
          }
        }
      }
    }
  }
  _R11 = &v102;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
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

