/*
==============
BG_GetPlayerCarryObjectDef
==============
*/

const CarryObjectDef *__fastcall BG_GetPlayerCarryObjectDef(const playerState_s *ps)
{
  return ?BG_GetPlayerCarryObjectDef@@YAPEBUCarryObjectDef@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GetCarryObjectDef
==============
*/

const CarryObjectDef *__fastcall BG_GetCarryObjectDef(int carryObjectIndex)
{
  return ?BG_GetCarryObjectDef@@YAPEBUCarryObjectDef@@H@Z(carryObjectIndex);
}

/*
==============
BG_CarryObject_ClearDefs
==============
*/

void BG_CarryObject_ClearDefs(void)
{
  ?BG_CarryObject_ClearDefs@@YAXXZ();
}

/*
==============
PM_CarryObject_UpdateGestureState
==============
*/

void __fastcall PM_CarryObject_UpdateGestureState(pmove_t *pm, pml_t *pml)
{
  ?PM_CarryObject_UpdateGestureState@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_CarryObject_IsActive
==============
*/

bool __fastcall BG_CarryObject_IsActive(const playerState_s *ps)
{
  return ?BG_CarryObject_IsActive@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_CarryObject_InitDefs
==============
*/

void __fastcall BG_CarryObject_InitDefs(bool isFullInit)
{
  ?BG_CarryObject_InitDefs@@YAX_N@Z(isFullInit);
}

/*
==============
BG_CarryObject_SetCharacterIKInfo
==============
*/

bool __fastcall BG_CarryObject_SetCharacterIKInfo(const vec3_t *playerPos, const vec3_t *playerAngles, const tmat43_t<vec3_t> *ikTagWorldTransform, characterInfo_t *ci)
{
  return ?BG_CarryObject_SetCharacterIKInfo@@YA_NTvec3_t@@0T?$tmat43_t@Tvec3_t@@@@PEAUcharacterInfo_t@@@Z(playerPos, playerAngles, ikTagWorldTransform, ci);
}

/*
==============
BG_CarryObject_GetLeftHandIKTagName
==============
*/

scr_string_t __fastcall BG_CarryObject_GetLeftHandIKTagName()
{
  return ?BG_CarryObject_GetLeftHandIKTagName@@YA?AW4scr_string_t@@XZ();
}

/*
==============
BG_CarryObject_ClearDefs
==============
*/
void BG_CarryObject_ClearDefs(void)
{
  s_carryObjectsInitialized = 0;
  memset_0(s_carryObjectDefs, 0, sizeof(s_carryObjectDefs));
}

/*
==============
BG_CarryObject_GetLeftHandIKTagName
==============
*/
__int64 BG_CarryObject_GetLeftHandIKTagName()
{
  return (unsigned int)scr_const.tag_carry_ik_loc_le;
}

/*
==============
BG_CarryObject_InitDefs
==============
*/
void BG_CarryObject_InitDefs(bool isFullInit)
{
  if ( isFullInit )
  {
    NetConstStrings_CallForAllCarryObjectStrings(BG_CarryObject_LoadCache_Callback);
    s_carryObjectsInitialized = 1;
  }
  else
  {
    if ( !s_carryObjectsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 63, ASSERT_TYPE_ASSERT, "(s_carryObjectsInitialized)", (const char *)&queryFormat, "s_carryObjectsInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllCarryObjectStrings(BG_CarryObject_Validate_Callback);
  }
}

/*
==============
BG_CarryObject_IsActive
==============
*/
bool BG_CarryObject_IsActive(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 101, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->carryState.flags & 1;
}

/*
==============
BG_CarryObject_LoadCache_Callback
==============
*/
void BG_CarryObject_LoadCache_Callback(const unsigned int carryObjectIndex, const char *carryObjectName)
{
  const CarryObjectDef *v2; 
  __int64 v3; 

  v2 = NULL;
  v3 = carryObjectIndex;
  if ( !carryObjectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 33, ASSERT_TYPE_ASSERT, "(carryObjectName)", (const char *)&queryFormat, "carryObjectName") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x3F )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CA1070, 5982i64);
  if ( *carryObjectName )
    v2 = CarryObject_Register(carryObjectName);
  s_carryObjectDefs[v3] = v2;
}

/*
==============
BG_CarryObject_SetCharacterIKInfo
==============
*/
bool BG_CarryObject_SetCharacterIKInfo(const vec3_t *playerPos, const vec3_t *playerAngles, const tmat43_t<vec3_t> *ikTagWorldTransform, characterInfo_t *ci)
{
  float v8; 
  float v9; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> v14; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 184, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  AnglesToAxis(playerAngles, (tmat33_t<vec3_t> *)&axis);
  v8 = playerPos->v[1];
  axis.m[3].v[0] = playerPos->v[0];
  axis.m[3].v[2] = playerPos->v[2];
  axis.m[3].v[1] = v8;
  MatrixTransposeTransformVector43(&ikTagWorldTransform->m[3], &axis, &out);
  MatrixTranspose((const tmat33_t<vec3_t> *)&axis, &in2);
  MatrixMultiply((const tmat33_t<vec3_t> *)ikTagWorldTransform, &in2, &v14);
  AxisToAngles(&v14, ci->IKHandAng);
  v9 = out.v[1];
  ci->IKHandPos[0].v[0] = out.v[0];
  ci->IKHandPos[0].v[2] = out.v[2];
  ci->IKHandPos[0].v[1] = v9;
  return 0;
}

/*
==============
BG_CarryObject_Validate_Callback
==============
*/
void BG_CarryObject_Validate_Callback(const unsigned int carryObjectIndex, const char *carryObjectName)
{
  __int64 v2; 
  const char *v3; 
  const CarryObjectDef **v4; 
  __int64 v5; 
  const char *name; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 

  v2 = carryObjectIndex;
  v3 = carryObjectName;
  if ( !carryObjectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 21, ASSERT_TYPE_ASSERT, "(carryObjectName)", (const char *)&queryFormat, "carryObjectName") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x3F )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 22, ASSERT_TYPE_ASSERT, "(unsigned)( carryObjectIndex ) < (unsigned)( ((1<<6)-1) )", "carryObjectIndex doesn't index INVALID_CARRYOBJECT_DEF\n\t%i not in [0, %i)", v13, 63) )
      __debugbreak();
  }
  v4 = &s_carryObjectDefs[v2];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 24, ASSERT_TYPE_ASSERT, "(s_carryObjectDefs[carryObjectIndex])", (const char *)&queryFormat, "s_carryObjectDefs[carryObjectIndex]") )
    __debugbreak();
  v5 = 0x7FFFFFFFi64;
  name = (*v4)->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = name - v3;
  do
  {
    v8 = (unsigned __int8)v3[v7];
    v9 = v5;
    v10 = *(unsigned __int8 *)v3++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 25, ASSERT_TYPE_ASSERT, "(!I_stricmp( s_carryObjectDefs[carryObjectIndex]->name, carryObjectName ))", "%s\n\tInvalid carry object asset mapping", "!I_stricmp( s_carryObjectDefs[carryObjectIndex]->name, carryObjectName )") )
          __debugbreak();
        return;
      }
    }
  }
  while ( v8 );
}

/*
==============
BG_GetCarryObjectDef
==============
*/
const CarryObjectDef *BG_GetCarryObjectDef(int carryObjectIndex)
{
  __int64 v1; 
  bool v2; 
  const CarryObjectDef **v3; 
  int v6; 

  v1 = carryObjectIndex;
  if ( (unsigned int)carryObjectIndex >= 0x40 )
  {
    v6 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( carryObjectIndex ) < (unsigned)( ( sizeof( *array_counter( s_carryObjectDefs ) ) + 0 ) )", "carryObjectIndex doesn't index ARRAY_COUNT( s_carryObjectDefs )\n\t%i not in [0, %i)", carryObjectIndex, v6) )
      __debugbreak();
  }
  if ( !s_carryObjectsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 85, ASSERT_TYPE_ASSERT, "(s_carryObjectsInitialized)", (const char *)&queryFormat, "s_carryObjectsInitialized") )
    __debugbreak();
  v2 = s_carryObjectDefs[v1] == NULL;
  v3 = &s_carryObjectDefs[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 86, ASSERT_TYPE_ASSERT, "(s_carryObjectDefs[carryObjectIndex])", (const char *)&queryFormat, "s_carryObjectDefs[carryObjectIndex]") )
    __debugbreak();
  return *v3;
}

/*
==============
BG_GetPlayerCarryObjectDef
==============
*/
const CarryObjectDef *BG_GetPlayerCarryObjectDef(const playerState_s *ps)
{
  __int64 carryObjectIndex; 
  bool v3; 
  const CarryObjectDef **v4; 
  __int64 v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 101, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->carryState.flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 94, ASSERT_TYPE_ASSERT, "(BG_CarryObject_IsActive( ps ))", (const char *)&queryFormat, "BG_CarryObject_IsActive( ps )") )
    __debugbreak();
  carryObjectIndex = (int)ps->carryState.carryObjectIndex;
  if ( (unsigned int)carryObjectIndex >= 0x40 )
  {
    LODWORD(v6) = carryObjectIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( carryObjectIndex ) < (unsigned)( ( sizeof( *array_counter( s_carryObjectDefs ) ) + 0 ) )", "carryObjectIndex doesn't index ARRAY_COUNT( s_carryObjectDefs )\n\t%i not in [0, %i)", v6, 64) )
      __debugbreak();
  }
  if ( !s_carryObjectsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 85, ASSERT_TYPE_ASSERT, "(s_carryObjectsInitialized)", (const char *)&queryFormat, "s_carryObjectsInitialized") )
    __debugbreak();
  v3 = s_carryObjectDefs[carryObjectIndex] == NULL;
  v4 = &s_carryObjectDefs[carryObjectIndex];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 86, ASSERT_TYPE_ASSERT, "(s_carryObjectDefs[carryObjectIndex])", (const char *)&queryFormat, "s_carryObjectDefs[carryObjectIndex]") )
    __debugbreak();
  return *v4;
}

/*
==============
PM_CarryObject_UpdateGestureState
==============
*/
void PM_CarryObject_UpdateGestureState(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  unsigned int v4; 
  GestureState *i; 
  __int64 carryObjectIndex; 
  bool v7; 
  const CarryObjectDef **v8; 
  const Gesture *gesture; 
  unsigned int IndexFromGesture; 
  int weaponState; 
  bool v12; 
  bool IsPlayingByIndex; 
  bool IsStoppingByIndex; 
  int restarted; 
  __int64 cancelTransitions; 
  GesturePlayRequest request; 
  GesturePlayRequest result; 
  unsigned int outSlot; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 109, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 109, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 101, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( (ps->carryState.flags & 1) != 0 )
  {
    carryObjectIndex = (int)ps->carryState.carryObjectIndex;
    if ( (unsigned int)carryObjectIndex >= 0x40 )
    {
      LODWORD(cancelTransitions) = ps->carryState.carryObjectIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( carryObjectIndex ) < (unsigned)( ( sizeof( *array_counter( s_carryObjectDefs ) ) + 0 ) )", "carryObjectIndex doesn't index ARRAY_COUNT( s_carryObjectDefs )\n\t%i not in [0, %i)", cancelTransitions, 64) )
        __debugbreak();
    }
    if ( !s_carryObjectsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 85, ASSERT_TYPE_ASSERT, "(s_carryObjectsInitialized)", (const char *)&queryFormat, "s_carryObjectsInitialized") )
      __debugbreak();
    v7 = s_carryObjectDefs[carryObjectIndex] == NULL;
    v8 = &s_carryObjectDefs[carryObjectIndex];
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject.cpp", 86, ASSERT_TYPE_ASSERT, "(s_carryObjectDefs[carryObjectIndex])", (const char *)&queryFormat, "s_carryObjectDefs[carryObjectIndex]") )
      __debugbreak();
    gesture = (*v8)->gesture;
    if ( gesture )
    {
      IndexFromGesture = BG_Gesture_GetIndexFromGesture(gesture);
      if ( IndexFromGesture != 256 )
      {
        weaponState = ps->weapState[0].weaponState;
        v12 = (unsigned int)(weaponState - 7) <= 5 || weaponState == 50;
        IsPlayingByIndex = BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
        IsStoppingByIndex = 0;
        if ( IsPlayingByIndex )
          IsStoppingByIndex = BG_Gesture_IsStoppingByIndex(ps, IndexFromGesture);
        if ( v12 )
        {
          if ( IsPlayingByIndex && !IsStoppingByIndex )
            BG_Gesture_StopByIndex(ps, IndexFromGesture, pm->cmd.serverTime, 0, 0, 0);
        }
        else if ( !IsPlayingByIndex || IsStoppingByIndex )
        {
          restarted = 0;
          if ( IsPlayingByIndex )
          {
            restarted = BG_Gesture_CalcRestartTimeOutToIn(ps, IndexFromGesture, pm->cmd.serverTime);
            BG_Gesture_StopByIndex(ps, IndexFromGesture, pm->cmd.serverTime, 1, 0, 0);
          }
          request = *BG_GesturePriority_SetupRequest(&result, pm->weaponMap, ps, pm->m_bgHandler, IndexFromGesture, pm->cmd.serverTime);
          request.startTime = restarted;
          request.ignoreGamePlayState = 1;
          BG_GesturePriority_TryPlay(&request, NULL, NULL);
        }
      }
    }
  }
  else
  {
    v4 = 0;
    for ( i = &ps->gestureState; BG_Gesture_GetCurrentAsset(ps, v4)->priority != GESTURE_PRIORITY_CARRY || i->gestures[0].state != GESTURE_STATE_PLAYING; i = (GestureState *)((char *)i + 32) )
    {
      if ( ++v4 >= 2 )
        return;
    }
    BG_Gesture_StopBySlot(ps, v4, pm->cmd.serverTime, 0, 0, 0);
  }
}

