/*
==============
BG_VehicleOccupancy_HideLegs
==============
*/

bool __fastcall BG_VehicleOccupancy_HideLegs(const playerState_s *ps)
{
  return ?BG_VehicleOccupancy_HideLegs@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_VehicleOccupancy_GetLinkTransform
==============
*/

bool __fastcall BG_VehicleOccupancy_GetLinkTransform(const BgHandler *handler, const int playerRigEntNum, vec3_t *outLinkPos, vec3_t *outLinkAngles)
{
  return ?BG_VehicleOccupancy_GetLinkTransform@@YA_NPEBVBgHandler@@HAEATvec3_t@@1@Z(handler, playerRigEntNum, outLinkPos, outLinkAngles);
}

/*
==============
BG_VehicleOccupancy_GetEnterSide
==============
*/

animScriptVehicleSide_t __fastcall BG_VehicleOccupancy_GetEnterSide(const BgHandler *handler, const entityState_t *es, const int vehicleEntNum)
{
  return ?BG_VehicleOccupancy_GetEnterSide@@YA?AW4animScriptVehicleSide_t@@PEBVBgHandler@@PEBUentityState_t@@H@Z(handler, es, vehicleEntNum);
}

/*
==============
BG_VehicleOccupancy_PlayerIsSeated
==============
*/

bool __fastcall BG_VehicleOccupancy_PlayerIsSeated(const playerState_s *ps)
{
  return ?BG_VehicleOccupancy_PlayerIsSeated@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_VehicleOccupancy_GetLinkedVehicle
==============
*/

int __fastcall BG_VehicleOccupancy_GetLinkedVehicle(const BgHandler *handler, const entityState_t *es, const characterInfo_t *ci, animScriptVehicleType_t *outVehicleType, animScriptVehicleSeat_t *outVehicleSeat)
{
  return ?BG_VehicleOccupancy_GetLinkedVehicle@@YAHPEBVBgHandler@@PEBUentityState_t@@PEBUcharacterInfo_t@@AEAW4animScriptVehicleType_t@@AEAW4animScriptVehicleSeat_t@@@Z(handler, es, ci, outVehicleType, outVehicleSeat);
}

/*
==============
BG_VehicleOccupancy_SetCharacterInfo
==============
*/

bool __fastcall BG_VehicleOccupancy_SetCharacterInfo(const BgHandler *handler, const int vehicleEntNum, const animScriptVehicleSeat_t vehicleSeat, characterInfo_t *ci, const vec3_t *viewAngles, vec3_t *outLinkPos, vec3_t *outLinkAngles)
{
  return ?BG_VehicleOccupancy_SetCharacterInfo@@YA_NPEBVBgHandler@@HW4animScriptVehicleSeat_t@@PEAUcharacterInfo_t@@AEBTvec3_t@@AEAT4@4@Z(handler, vehicleEntNum, vehicleSeat, ci, viewAngles, outLinkPos, outLinkAngles);
}

/*
==============
BG_VehicleOccupancy_MapVehicleProfileToVehicleType
==============
*/

animScriptVehicleType_t __fastcall BG_VehicleOccupancy_MapVehicleProfileToVehicleType(const VehiclePhysicsAnimProfile vehicleProfile)
{
  return ?BG_VehicleOccupancy_MapVehicleProfileToVehicleType@@YA?AW4animScriptVehicleType_t@@W4VehiclePhysicsAnimProfile@@@Z(vehicleProfile);
}

/*
==============
BG_VehicleOccupancy_GetEnterSide
==============
*/
__int64 BG_VehicleOccupancy_GetEnterSide(const BgHandler *handler, const entityState_t *es, const int vehicleEntNum)
{
  const BGVehicles *v6; 
  __int64 v7; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 278, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( vehicleEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 279, ASSERT_TYPE_ASSERT, "(vehicleEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "vehicleEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 280, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v6 = handler->GetVehicleSystemConst(handler);
  if ( !v6 )
    return 0i64;
  v7 = (__int64)v6->PhysicsGetVehicleObject(v6, vehicleEntNum);
  if ( !v7 || *(_DWORD *)(v7 + 60) != es->clientNum )
    return 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+0Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm0, dword ptr [rax+40h]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+10h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rax+44h]
    vaddss  xmm4, xmm3, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm4, xmm0
  }
  return 1i64;
}

/*
==============
BG_VehicleOccupancy_GetLinkTransform
==============
*/
bool BG_VehicleOccupancy_GetLinkTransform(const BgHandler *handler, const int playerRigEntNum, vec3_t *outLinkPos, vec3_t *outLinkAngles)
{
  bool result; 
  int v34[4]; 
  tmat33_t<vec3_t> axis; 

  _RSI = outLinkAngles;
  _RBP = outLinkPos;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 315, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( playerRigEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 316, ASSERT_TYPE_ASSERT, "(playerRigEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "playerRigEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  result = handler->GetWorldTagMatrix((BgHandler *)handler, playerRigEntNum, (const scr_string_t)scr_const.tag_player, &axis, (vec3_t *)v34);
  if ( result )
  {
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+var_78]
      vmovss  xmm1, [rsp+0A8h+var_74]
      vmovss  dword ptr [rbp+0], xmm0
      vmovss  xmm0, [rsp+0A8h+var_70]
      vmovaps [rsp+0A8h+var_38], xmm8
      vmovss  dword ptr [rbp+8], xmm0
      vmovss  dword ptr [rbp+4], xmm1
    }
    AxisToAngles(&axis, _RSI);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmulss  xmm3, xmm0, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vmovss  xmm5, cs:__real@43b40000
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm2, xmm8, xmm1, 1
      vmovss  xmm1, dword ptr [rsi+4]
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vsubss  xmm0, xmm3, xmm2
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vmulss  xmm0, xmm0, xmm5
      vroundss xmm3, xmm8, xmm2, 1
      vmovss  dword ptr [rsi], xmm0
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm5
      vmovss  xmm0, dword ptr [rsi+8]
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vroundss xmm3, xmm8, xmm2, 1
      vmovaps xmm8, [rsp+0A8h+var_38]
    }
    result = 1;
    __asm
    {
      vmovss  dword ptr [rsi+4], xmm1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm5
      vmovss  dword ptr [rsi+8], xmm0
    }
  }
  return result;
}

/*
==============
BG_VehicleOccupancy_GetLinkedVehicle
==============
*/
__int64 BG_VehicleOccupancy_GetLinkedVehicle(const BgHandler *handler, const entityState_t *es, const characterInfo_t *ci, animScriptVehicleType_t *outVehicleType, animScriptVehicleSeat_t *outVehicleSeat)
{
  int linkedEntNum; 
  const entityState_t *EntityState; 
  int v11; 
  unsigned int v12; 
  const entityState_t *v13; 
  __int64 v14; 
  _DWORD *v15; 
  unsigned int number; 
  DObj *v17; 
  const DObj *v18; 
  const BGVehicles *v19; 
  const BGVehicles *v20; 
  scr_string_t BoneNameScriptString; 
  animScriptVehicleSeat_t v22; 
  __int64 v23; 
  __int64 v24; 
  animScriptVehicleType_t v25; 
  __int64 result; 
  __int64 v27; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 197, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 198, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 199, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  *outVehicleType = VEHICLE_TYPE_UNUSED;
  *outVehicleSeat = VEHICLE_SEAT_UNUSED;
  if ( !BG_IsPlayingVehicleOccupancyAnims(ci) )
    return 2047i64;
  linkedEntNum = ci->linkedEntNum;
  if ( linkedEntNum <= 0 )
    return 2047i64;
  EntityState = BG_GetEntityState(handler, linkedEntNum - 1);
  v11 = *(_DWORD *)&EntityState->clientLinkInfo & 0x7FF;
  if ( !v11 )
    return 2047i64;
  v12 = v11 - 1;
  v13 = BG_GetEntityState(handler, v11 - 1);
  if ( v13->eType != ET_VEHICLE )
    return 2047i64;
  v14 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  v15 = *(_DWORD **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v14) + 272i64);
  number = v13->number;
  v17 = (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 160i64))(v15) ? Com_GetClientDObj(number, (LocalClientNum_t)v15[2]) : (DObj *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v15 + 232i64))(v15, number);
  v18 = v17;
  v19 = handler->GetVehicleSystemConst(handler);
  v20 = v19;
  if ( v19 )
  {
    if ( !v19->BgIsDobjValidForVehicle((BGVehicles *)v19, v18) )
      return 2047i64;
  }
  BoneNameScriptString = DObjGetBoneNameScriptString(v18, (unsigned __int8)(*(_DWORD *)&EntityState->clientLinkInfo >> 11));
  if ( BoneNameScriptString == scr_const.tag_seat_0 )
  {
    v22 = VEHICLE_SEAT_DRIVER;
  }
  else if ( BoneNameScriptString == scr_const.tag_seat_1 )
  {
    v22 = VEHICLE_SEAT_1;
  }
  else if ( BoneNameScriptString == scr_const.tag_seat_2 )
  {
    v22 = VEHICLE_SEAT_2;
  }
  else if ( BoneNameScriptString == scr_const.tag_seat_3 )
  {
    v22 = VEHICLE_SEAT_3;
  }
  else if ( BoneNameScriptString == scr_const.tag_seat_4 )
  {
    v22 = VEHICLE_SEAT_4;
  }
  else if ( BoneNameScriptString == scr_const.tag_seat_5 )
  {
    v22 = VEHICLE_SEAT_5;
  }
  else if ( BoneNameScriptString == scr_const.tag_seat_6 )
  {
    v22 = VEHICLE_SEAT_6;
  }
  else if ( BoneNameScriptString == scr_const.tag_seat_7 )
  {
    v22 = VEHICLE_SEAT_7;
  }
  else if ( BoneNameScriptString == scr_const.tag_seat_8 )
  {
    v22 = VEHICLE_SEAT_8;
  }
  else
  {
    if ( BoneNameScriptString != scr_const.tag_seat_9 )
      return 2047i64;
    v22 = VEHICLE_SEAT_9;
  }
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 251, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  v23 = (__int64)v20->PhysicsGetVehicleObject(v20, v13->number);
  if ( v23 )
  {
    v24 = *(unsigned int *)(v23 + 40);
    if ( (unsigned int)v24 > 0x1B )
    {
      LODWORD(v27) = *(_DWORD *)(v23 + 40);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 189, ASSERT_TYPE_ASSERT, "( static_cast<uint>( vehicleProfile ) ) <= ( static_cast<uint>( VEH_ANIMPROFILE_COUNT ) )", "static_cast<uint>( vehicleProfile ) not in [0, static_cast<uint>( VEH_ANIMPROFILE_COUNT )]\n\t%u not in [0, %u]", v27, 27) )
        __debugbreak();
    }
    v25 = s_mapping[v24];
    if ( v25 )
    {
      *outVehicleType = v25;
      result = v12;
      *outVehicleSeat = v22;
      return result;
    }
  }
  return 2047i64;
}

/*
==============
BG_VehicleOccupancy_GetSeatIKTag
==============
*/
__int64 BG_VehicleOccupancy_GetSeatIKTag(const XAnimIKType ikType, const animScriptVehicleSeat_t seat)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  int v7; 

  v2 = seat;
  v3 = ikType;
  if ( seat == VEHICLE_SEAT_UNUSED )
  {
    v7 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 55, ASSERT_TYPE_ASSERT, "( seat ) != ( VEHICLE_SEAT_UNUSED )", "%s != %s\n\t%i, %i", "seat", "VEHICLE_SEAT_UNUSED", v7, 0i64) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v6) = 2;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 56, ASSERT_TYPE_ASSERT, "(unsigned)( ikType ) < (unsigned)( XANIM_IK_NUM_HAND_TYPES )", "ikType doesn't index XANIM_IK_NUM_HAND_TYPES\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 0xB )
  {
    LODWORD(v6) = 11;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 57, ASSERT_TYPE_ASSERT, "(unsigned)( seat ) < (unsigned)( NUM_ANIM_COND_VEHICLE_SEAT )", "seat doesn't index NUM_ANIM_COND_VEHICLE_SEAT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return *(unsigned int *)SEAT_IK_TAG_MAP[v3][v2];
}

/*
==============
BG_VehicleOccupancy_GetSeatIKTransform
==============
*/
void BG_VehicleOccupancy_GetSeatIKTransform(const BgHandler *handler, const int vehicleEntNum, const animScriptVehicleSeat_t vehicleSeat, BgVehicleSeatIKTransforms *outSeatIKTransforms)
{
  int v8; 
  bool *hasSeatIK; 
  float *v10; 
  tmat33_t<vec3_t> *seatIKTagAxisWorld; 
  signed int SeatIKTag; 
  bool v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 337, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( (unsigned int)vehicleEntNum >= 0x800 )
  {
    LODWORD(v14) = vehicleEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 338, ASSERT_TYPE_ASSERT, "(unsigned)( vehicleEntNum ) < (unsigned)( ( 2048 ) )", "vehicleEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, 2048) )
      __debugbreak();
  }
  if ( vehicleEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 339, ASSERT_TYPE_ASSERT, "( vehicleEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "vehicleEntNum", "ENTITYNUM_NONE", 2047, 2047) )
    __debugbreak();
  if ( (unsigned int)vehicleSeat >= NUM_ANIM_COND_VEHICLE_SEAT )
  {
    LODWORD(v15) = 11;
    LODWORD(v14) = vehicleSeat;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 340, ASSERT_TYPE_ASSERT, "(unsigned)( vehicleSeat ) < (unsigned)( NUM_ANIM_COND_VEHICLE_SEAT )", "vehicleSeat doesn't index NUM_ANIM_COND_VEHICLE_SEAT\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( vehicleSeat == VEHICLE_SEAT_UNUSED )
  {
    LODWORD(v16) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 341, ASSERT_TYPE_ASSERT, "( vehicleSeat ) != ( VEHICLE_SEAT_UNUSED )", "%s != %s\n\t%i, %i", "vehicleSeat", "VEHICLE_SEAT_UNUSED", v16, 0i64) )
      __debugbreak();
  }
  v8 = 0;
  hasSeatIK = outSeatIKTransforms->hasSeatIK;
  v10 = &outSeatIKTransforms->seatIKTagPosWorld[0].v[2];
  seatIKTagAxisWorld = outSeatIKTransforms->seatIKTagAxisWorld;
  do
  {
    SeatIKTag = BG_VehicleOccupancy_GetSeatIKTag((const XAnimIKType)v8, vehicleSeat);
    v13 = handler->GetWorldTagMatrix((BgHandler *)handler, vehicleEntNum, (const scr_string_t)SeatIKTag, seatIKTagAxisWorld, (vec3_t *)outSeatIKTransforms);
    *hasSeatIK = v13;
    if ( !v13 )
    {
      *((_QWORD *)v10 - 1) = 0i64;
      *v10 = 0.0;
      MatrixIdentity33(seatIKTagAxisWorld);
    }
    ++v8;
    outSeatIKTransforms = (BgVehicleSeatIKTransforms *)((char *)outSeatIKTransforms + 12);
    ++seatIKTagAxisWorld;
    ++hasSeatIK;
    v10 += 3;
  }
  while ( v8 < 2 );
}

/*
==============
BG_VehicleOccupancy_HideLegs
==============
*/
bool BG_VehicleOccupancy_HideLegs(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 498, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (unsigned int)(ps->vehicleAnimState.seat - 1) <= 9;
}

/*
==============
BG_VehicleOccupancy_MapVehicleProfileToVehicleType
==============
*/
__int64 BG_VehicleOccupancy_MapVehicleProfileToVehicleType(const VehiclePhysicsAnimProfile vehicleProfile)
{
  __int64 v1; 
  int v4; 

  v1 = (unsigned int)vehicleProfile;
  if ( (unsigned int)vehicleProfile > VEH_ANIMPROFILE_COUNT )
  {
    v4 = 27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 189, ASSERT_TYPE_ASSERT, "( static_cast<uint>( vehicleProfile ) ) <= ( static_cast<uint>( VEH_ANIMPROFILE_COUNT ) )", "static_cast<uint>( vehicleProfile ) not in [0, static_cast<uint>( VEH_ANIMPROFILE_COUNT )]\n\t%u not in [0, %u]", vehicleProfile, v4) )
      __debugbreak();
  }
  return (unsigned int)s_mapping[v1];
}

/*
==============
BG_VehicleOccupancy_PlayerIsSeated
==============
*/
bool BG_VehicleOccupancy_PlayerIsSeated(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 511, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->pm_type == 1 && (unsigned int)(ps->vehicleAnimState.seat - 1) <= 9;
}

/*
==============
BG_VehicleOccupancy_SetCharacterInfo
==============
*/
bool BG_VehicleOccupancy_SetCharacterInfo(const BgHandler *handler, const int vehicleEntNum, const animScriptVehicleSeat_t vehicleSeat, characterInfo_t *ci, const vec3_t *viewAngles, vec3_t *outLinkPos, vec3_t *outLinkAngles)
{
  int v17; 
  bool *hasSeatIK; 
  bool *v61; 
  __int64 v63; 
  animScriptVehicleSeat_t v71; 
  bool v72; 
  __int64 v73; 
  const dvar_t *v74; 
  int integer; 
  char v76; 
  int v77; 
  bool *v79; 
  __int64 v80; 
  float *v81; 
  float *v82; 
  __int64 v87; 
  void (__fastcall *v91)(__int64, vec3_t *, vec4_t *); 
  scr_string_t SeatIKTag; 
  __int64 v95; 
  scr_string_t tag_seat_0; 
  __int64 v102; 
  void (__fastcall *v105)(__int64, vec3_t *, vec4_t *); 
  __int64 v109; 
  char v111; 
  char v112; 
  __int64 v139; 
  __int64 v147; 
  bool result; 
  unsigned __int16 v153; 
  bool *angles; 
  vec3_t out; 
  const BgHandler *v159; 
  bool *v161; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v164; 
  tmat43_t<vec3_t> in; 
  BgVehicleSeatIKTransforms outSeatIKTransforms; 

  _RBX = outLinkPos;
  _RDI = ci;
  _R12 = outLinkAngles;
  v159 = handler;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 358, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 359, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !BG_IsPlayingVehicleOccupancyAnims(_RDI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 360, ASSERT_TYPE_ASSERT, "(BG_IsPlayingVehicleOccupancyAnims( ci ))", (const char *)&queryFormat, "BG_IsPlayingVehicleOccupancyAnims( ci )") )
    __debugbreak();
  if ( _RDI->linkedEntNum <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 361, ASSERT_TYPE_ASSERT, "(ci->linkedEntNum > 0)", (const char *)&queryFormat, "ci->linkedEntNum > 0") )
    __debugbreak();
  v17 = _RDI->linkedEntNum - 1;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 315, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( v17 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 316, ASSERT_TYPE_ASSERT, "(playerRigEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "playerRigEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( !handler->GetWorldTagMatrix((BgHandler *)handler, v17, (const scr_string_t)scr_const.tag_player, &axis, (vec3_t *)&v161) )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+120h+var_198]
    vmovss  xmm1, dword ptr [rbp+120h+var_198+4]
    vmovaps [rsp+220h+var_50], xmm6
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, [rbp+120h+var_190]
    vmovaps [rsp+220h+var_60], xmm7
    vmovaps [rsp+220h+var_70], xmm8
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+4], xmm1
    vmovaps [rsp+220h+var_80], xmm9
  }
  AxisToAngles(&axis, outLinkAngles);
  __asm
  {
    vmovss  xmm9, cs:__real@3b360b61
    vmulss  xmm3, xmm9, dword ptr [r12]
    vmulss  xmm4, xmm9, dword ptr [r12+4]
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm6, cs:__real@43b40000
    vaddss  xmm1, xmm3, xmm8
    vaddss  xmm2, xmm4, xmm8
    vxorps  xmm7, xmm7, xmm7
    vroundss xmm0, xmm7, xmm1, 1
    vsubss  xmm0, xmm3, xmm0
    vmulss  xmm0, xmm0, xmm6
    vmovss  dword ptr [r12], xmm0
    vroundss xmm3, xmm7, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm4, xmm9, dword ptr [r12+8]
    vmulss  xmm5, xmm0, xmm6
    vmovss  dword ptr [r12+4], xmm5
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm7, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [r12+8], xmm1
    vmovss  dword ptr [rdi+8BCh], xmm5
  }
  _RDI->playerAngles.v[0] = outLinkAngles->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  dword ptr [rdi+9C4h], xmm0
    vmovss  xmm1, dword ptr [r12+8]
    vmovss  dword ptr [rdi+9C8h], xmm1
  }
  _RDI->playerAnglesWorld.v[0] = outLinkAngles->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  dword ptr [rdi+9D0h], xmm0
    vmovss  xmm1, dword ptr [r12+8]
    vmovss  dword ptr [rdi+9D4h], xmm1
    vmulss  xmm4, xmm9, dword ptr [rax]
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm7, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi+9E4h], xmm1
    vmulss  xmm4, xmm9, dword ptr [rax+4]
    vaddss  xmm1, xmm4, xmm8
    vroundss xmm3, xmm7, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi+9E8h], xmm1
    vmulss  xmm4, xmm9, dword ptr [rax+8]
    vaddss  xmm1, xmm4, xmm8
    vroundss xmm3, xmm7, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi+9ECh], xmm1
  }
  v153 = *(_WORD *)_RDI->vehicleAnimation.hasSeatIK;
  BG_VehicleOccupancy_GetSeatIKTransform(handler, vehicleEntNum, vehicleSeat, &outSeatIKTransforms);
  _R14 = outLinkPos;
  hasSeatIK = outSeatIKTransforms.hasSeatIK;
  v61 = _RDI->vehicleAnimation.hasSeatIK;
  v161 = outSeatIKTransforms.hasSeatIK;
  _R15 = &_RDI->IKHandPos[0].v[2];
  v63 = 0i64;
  __asm { vmovaps xmm9, [rsp+220h+var_80] }
  do
  {
    if ( *hasSeatIK )
    {
      *v61 = 1;
      AnglesToAxis(outLinkAngles, (tmat33_t<vec3_t> *)&in);
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vmovss  xmm1, dword ptr [r14+4]
        vmovss  [rbp+120h+var_114], xmm0
        vmovss  xmm0, dword ptr [r14+8]
        vmovss  [rbp+120h+var_10C], xmm0
        vmovss  [rbp+120h+var_110], xmm1
      }
      MatrixTransposeTransformVector43(&outSeatIKTransforms.seatIKTagPosWorld[v63], &in, &out);
      MatrixTranspose((const tmat33_t<vec3_t> *)&in, &axis);
      MatrixMultiply(&outSeatIKTransforms.seatIKTagAxisWorld[v63], &axis, &v164);
      _RDI = ci;
      AxisToAngles(&v164, &ci->IKHandAng[v63]);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+220h+out]
        vmovss  xmm1, dword ptr [rsp+220h+out+4]
      }
      hasSeatIK = v161;
      __asm
      {
        vmovss  dword ptr [r15-8], xmm0
        vmovss  xmm0, dword ptr [rsp+220h+out+8]
        vmovss  dword ptr [r15], xmm0
        vmovss  dword ptr [r15-4], xmm1
      }
    }
    else
    {
      *v61 = 0;
    }
    ++hasSeatIK;
    v63 = (unsigned int)(v63 + 1);
    ++v61;
    v161 = hasSeatIK;
    _R15 += 3;
  }
  while ( (unsigned int)v63 < 2 );
  v71 = _RDI->vehicleAnimation.seat;
  v72 = *(_WORD *)_RDI->vehicleAnimation.hasSeatIK != v153;
  v73 = (__int64)v159;
  _RDI->vehicleSeatChanged = vehicleSeat != v71;
  if ( v72 || vehicleSeat != v71 )
    _RDI->dobjDirty = 1;
  _RDI->vehicleAnimation.prevSeat = v71;
  _RDI->vehicleAnimation.seat = vehicleSeat;
  v74 = DCONST_DVARINT_animscript_debug_vehicle;
  if ( !DCONST_DVARINT_animscript_debug_vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug_vehicle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v74);
  integer = v74->current.integer;
  if ( integer == 1 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v73 + 448i64))(v73) || integer == 2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v73 + 440i64))(v73) )
  {
    v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 448i64))(v73);
    v77 = DEBUG_DURATION_CLIENT;
    if ( v76 )
      v77 = DEBUG_DURATION_SERVER;
    AnglesToAxis(outLinkAngles, &v164);
    __asm { vmovss  xmm3, cs:DEBUG_AXIS_LENGTH }
    (*(void (__fastcall **)(__int64, tmat33_t<vec3_t> *, vec3_t *))(*(_QWORD *)v73 + 384i64))(v73, &v164, outLinkPos);
    v79 = outSeatIKTransforms.hasSeatIK;
    v80 = 0i64;
    angles = outSeatIKTransforms.hasSeatIK;
    v81 = &outSeatIKTransforms.seatIKTagPosWorld[0].v[2];
    v82 = &outSeatIKTransforms.seatIKTagAxisWorld[0].m[2].v[2];
    do
    {
      if ( *v79 )
      {
        __asm
        {
          vmovss  xmm2, cs:DEBUG_TEXT_HEIGHT_OFFSET
          vmulss  xmm0, xmm2, dword ptr [r12-8]
          vaddss  xmm1, xmm0, dword ptr [r15-8]
          vmulss  xmm0, xmm2, dword ptr [r12-4]
        }
        v87 = *(_QWORD *)v73;
        __asm
        {
          vmulss  xmm2, xmm2, dword ptr [r12]
          vmovss  dword ptr [rsp+220h+out], xmm1
          vaddss  xmm1, xmm0, dword ptr [r15-4]
          vaddss  xmm0, xmm2, dword ptr [r15]
        }
        v91 = *(void (__fastcall **)(__int64, vec3_t *, vec4_t *))(v87 + 312);
        __asm
        {
          vmovss  dword ptr [rsp+220h+out+8], xmm0
          vmovss  dword ptr [rsp+220h+out+4], xmm1
        }
        SeatIKTag = (unsigned int)BG_VehicleOccupancy_GetSeatIKTag((const XAnimIKType)v80, vehicleSeat);
        SL_ConvertToString(SeatIKTag);
        __asm { vmovss  xmm3, cs:DEBUG_TEXT_SCALE }
        v91(v73, &out, &colorGreen);
        __asm { vmovss  xmm2, cs:DEBUG_SPHERE_RADIUS }
        (*(void (__fastcall **)(__int64, vec3_t *, __int64, vec4_t *, vec4_t *, _DWORD, int))(*(_QWORD *)v73 + 368i64))(v73, &outSeatIKTransforms.seatIKTagPosWorld[v80], v95, &colorYellow, &colorGreen, 0, v77);
        __asm { vmovss  xmm3, cs:DEBUG_AXIS_LENGTH }
        (*(void (__fastcall **)(__int64, tmat33_t<vec3_t> *, vec3_t *))(*(_QWORD *)v73 + 384i64))(v73, &outSeatIKTransforms.seatIKTagAxisWorld[v80], &outSeatIKTransforms.seatIKTagPosWorld[v80]);
        v79 = angles;
      }
      ++v79;
      v80 = (unsigned int)(v80 + 1);
      v82 += 9;
      angles = v79;
      v81 += 3;
    }
    while ( (unsigned int)v80 < 2 );
    switch ( vehicleSeat )
    {
      case VEHICLE_SEAT_DRIVER:
        tag_seat_0 = scr_const.tag_seat_0;
        goto LABEL_52;
      case VEHICLE_SEAT_1:
        tag_seat_0 = scr_const.tag_seat_1;
        goto LABEL_52;
      case VEHICLE_SEAT_2:
        tag_seat_0 = scr_const.tag_seat_2;
        goto LABEL_52;
      case VEHICLE_SEAT_3:
        tag_seat_0 = scr_const.tag_seat_3;
        goto LABEL_52;
      case VEHICLE_SEAT_4:
        tag_seat_0 = scr_const.tag_seat_4;
        goto LABEL_52;
      case VEHICLE_SEAT_5:
        tag_seat_0 = scr_const.tag_seat_5;
        goto LABEL_52;
      case VEHICLE_SEAT_6:
        tag_seat_0 = scr_const.tag_seat_6;
        goto LABEL_52;
      case VEHICLE_SEAT_7:
        tag_seat_0 = scr_const.tag_seat_7;
        goto LABEL_52;
      case VEHICLE_SEAT_8:
        tag_seat_0 = scr_const.tag_seat_8;
        goto LABEL_52;
      case VEHICLE_SEAT_9:
        tag_seat_0 = scr_const.tag_seat_9;
LABEL_52:
        if ( !tag_seat_0 )
          goto LABEL_55;
        goto LABEL_57;
      default:
        tag_seat_0 = 0;
LABEL_55:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 463, ASSERT_TYPE_ASSERT, "(vehicleSeatTag != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "vehicleSeatTag != NULL_SCR_STRING") )
          __debugbreak();
LABEL_57:
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, tmat33_t<vec3_t> *, const BgHandler **))(*(_QWORD *)v73 + 216i64))(v73, (unsigned int)vehicleEntNum, (unsigned int)tag_seat_0, &axis, &v159) )
        {
          __asm
          {
            vmovss  xmm3, cs:DEBUG_TEXT_HEIGHT_OFFSET
            vmulss  xmm1, xmm3, dword ptr [rbp+120h+axis+18h]
            vaddss  xmm2, xmm1, dword ptr [rsp+220h+var_1A8]
            vmulss  xmm1, xmm3, dword ptr [rbp+120h+axis+1Ch]
          }
          v102 = *(_QWORD *)v73;
          __asm
          {
            vmovss  dword ptr [rsp+220h+out], xmm2
            vaddss  xmm2, xmm1, dword ptr [rsp+220h+var_1A8+4]
            vmulss  xmm1, xmm3, dword ptr [rbp+120h+axis+20h]
          }
          v105 = *(void (__fastcall **)(__int64, vec3_t *, vec4_t *))(v102 + 312);
          __asm
          {
            vmovss  dword ptr [rsp+220h+out+4], xmm2
            vaddss  xmm2, xmm1, [rbp+120h+var_1A0]
            vmovss  dword ptr [rsp+220h+out+8], xmm2
          }
          SL_ConvertToString(tag_seat_0);
          __asm { vmovss  xmm3, cs:DEBUG_TEXT_SCALE }
          v105(v73, &out, &colorGreen);
          __asm { vmovss  xmm2, cs:DEBUG_SPHERE_RADIUS }
          (*(void (__fastcall **)(__int64, const BgHandler **, __int64, vec4_t *, vec4_t *, _DWORD, int))(*(_QWORD *)v73 + 368i64))(v73, &v159, v109, &colorYellow, &colorGreen, 0, v77);
          __asm { vmovss  xmm3, cs:DEBUG_AXIS_LENGTH }
          (*(void (__fastcall **)(__int64, tmat33_t<vec3_t> *, const BgHandler **))(*(_QWORD *)v73 + 384i64))(v73, &axis, &v159);
        }
        else
        {
          v111 = 0;
          v112 = 1;
        }
        _RBX = outLinkPos;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+220h+var_1A8]
          vmovss  xmm1, dword ptr [rsp+220h+var_1A8+4]
          vmovss  xmm5, dword ptr [rbx]
          vmovss  xmm7, dword ptr [rbx+4]
          vmovss  xmm8, dword ptr [rbx+8]
          vsubss  xmm3, xmm0, xmm5
          vmovss  xmm0, [rbp+120h+var_1A0]
          vsubss  xmm2, xmm1, xmm7
          vmulss  xmm2, xmm2, xmm2
          vsubss  xmm4, xmm0, xmm8
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, cs:DEBUG_ORIGIN_DELTA_THRESHOLD
        }
        if ( !(v111 | v112) )
          goto LABEL_62;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+120h+axis]
          vmovss  xmm1, dword ptr [rbp+120h+var_160+4]
          vmulss  xmm2, xmm1, dword ptr [rbp+120h+axis+4]
          vmulss  xmm3, xmm0, dword ptr [rbp+120h+var_160]
          vmovss  xmm0, dword ptr [rbp+120h+var_160+8]
          vmulss  xmm1, xmm0, dword ptr [rbp+120h+axis+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, cs:DEBUG_AXIS_DOT_THRESHOLD
        }
        if ( v111 )
        {
LABEL_62:
          __asm
          {
            vmovss  xmm6, cs:__real@40000000
            vaddss  xmm3, xmm6, cs:DEBUG_TEXT_HEIGHT_OFFSET
            vmulss  xmm2, xmm3, dword ptr [rbp+120h+var_160+18h]
          }
          v139 = *(_QWORD *)v73;
          __asm
          {
            vaddss  xmm0, xmm2, xmm5
            vmulss  xmm2, xmm3, dword ptr [rbp+120h+var_160+1Ch]
            vmovss  dword ptr [rsp+220h+out], xmm0
            vaddss  xmm0, xmm2, xmm7
            vmulss  xmm2, xmm3, dword ptr [rbp+120h+var_160+20h]
            vmovss  xmm3, cs:DEBUG_TEXT_SCALE
            vmovss  dword ptr [rsp+220h+out+4], xmm0
            vaddss  xmm0, xmm2, xmm8
            vmovss  dword ptr [rsp+220h+out+8], xmm0
          }
          (*(void (__fastcall **)(__int64, vec3_t *, vec4_t *))(v139 + 312))(v73, &out, &colorBlue);
          __asm { vaddss  xmm2, xmm6, cs:DEBUG_SPHERE_RADIUS }
          (*(void (__fastcall **)(__int64, vec3_t *, __int64, vec4_t *, vec4_t *, _DWORD, int))(*(_QWORD *)v73 + 368i64))(v73, outLinkPos, v147, &colorBlue, &colorGreen, 0, v77);
          __asm { vaddss  xmm3, xmm6, cs:DEBUG_AXIS_LENGTH }
          (*(void (__fastcall **)(__int64, tmat33_t<vec3_t> *, vec3_t *))(*(_QWORD *)v73 + 384i64))(v73, &v164, outLinkPos);
        }
        break;
    }
  }
  __asm { vmovaps xmm8, [rsp+220h+var_70] }
  result = 1;
  __asm
  {
    vmovaps xmm7, [rsp+220h+var_60]
    vmovaps xmm6, [rsp+220h+var_50]
  }
  return result;
}

