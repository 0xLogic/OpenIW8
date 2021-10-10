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
  if ( v6 && (v7 = (__int64)v6->PhysicsGetVehicleObject(v6, vehicleEntNum)) != 0 && *(_DWORD *)(v7 + 60) == es->clientNum )
    return (unsigned int)((float)((float)(0.0 * *(float *)(v7 + 64)) + (float)(1.0 * *(float *)(v7 + 68))) < 0.0) + 1;
  else
    return 0i64;
}

/*
==============
BG_VehicleOccupancy_GetLinkTransform
==============
*/
bool BG_VehicleOccupancy_GetLinkTransform(const BgHandler *handler, const int playerRigEntNum, vec3_t *outLinkPos, vec3_t *outLinkAngles)
{
  bool result; 
  float v9; 
  float v12; 
  float v14; 
  float v15; 
  int v17[4]; 
  tmat33_t<vec3_t> axis; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 315, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( playerRigEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 316, ASSERT_TYPE_ASSERT, "(playerRigEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "playerRigEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  result = handler->GetWorldTagMatrix((BgHandler *)handler, playerRigEntNum, (const scr_string_t)scr_const.tag_player, &axis, (vec3_t *)v17);
  if ( result )
  {
    v9 = *(float *)&v17[1];
    outLinkPos->v[0] = *(float *)v17;
    outLinkPos->v[2] = *(float *)&v17[2];
    outLinkPos->v[1] = v9;
    AxisToAngles(&axis, outLinkAngles);
    _XMM8 = 0i64;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    v12 = outLinkAngles->v[1] * 0.0027777778;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    outLinkAngles->v[0] = (float)((float)(outLinkAngles->v[0] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    v14 = (float)(v12 - *(float *)&_XMM3) * 360.0;
    v15 = outLinkAngles->v[2] * 0.0027777778;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    result = 1;
    outLinkAngles->v[1] = v14;
    outLinkAngles->v[2] = (float)(v15 - *(float *)&_XMM3) * 360.0;
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
char BG_VehicleOccupancy_SetCharacterInfo(const BgHandler *handler, const int vehicleEntNum, const animScriptVehicleSeat_t vehicleSeat, characterInfo_t *ci, const vec3_t *viewAngles, vec3_t *outLinkPos, vec3_t *outLinkAngles)
{
  __int128 v7; 
  characterInfo_t *v8; 
  int v12; 
  float v13; 
  float v14; 
  float v18; 
  float v19; 
  bool *hasSeatIK; 
  bool *v25; 
  float *v26; 
  __int64 v27; 
  float v28; 
  float v29; 
  animScriptVehicleSeat_t v30; 
  bool v31; 
  __int64 v32; 
  const dvar_t *v33; 
  int integer; 
  char v35; 
  int v36; 
  bool *v37; 
  __int64 v38; 
  float *v39; 
  float *v40; 
  float v41; 
  __int64 v42; 
  float v43; 
  float v44; 
  void (__fastcall *v45)(__int64, vec3_t *, vec4_t *); 
  scr_string_t SeatIKTag; 
  __int64 v47; 
  scr_string_t tag_seat_0; 
  __int64 v49; 
  void (__fastcall *v50)(__int64, vec3_t *, vec4_t *); 
  __int64 v51; 
  float v52; 
  float v53; 
  __int64 v54; 
  __int64 v55; 
  unsigned __int16 v57; 
  bool *angles; 
  vec3_t out; 
  const BgHandler *v63; 
  float v64; 
  bool *v65; 
  float v66; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v68; 
  tmat43_t<vec3_t> in; 
  BgVehicleSeatIKTransforms outSeatIKTransforms; 
  __int128 v71; 

  v8 = ci;
  v63 = handler;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 358, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 359, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !BG_IsPlayingVehicleOccupancyAnims(v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 360, ASSERT_TYPE_ASSERT, "(BG_IsPlayingVehicleOccupancyAnims( ci ))", (const char *)&queryFormat, "BG_IsPlayingVehicleOccupancyAnims( ci )") )
    __debugbreak();
  if ( v8->linkedEntNum <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 361, ASSERT_TYPE_ASSERT, "(ci->linkedEntNum > 0)", (const char *)&queryFormat, "ci->linkedEntNum > 0") )
    __debugbreak();
  v12 = v8->linkedEntNum - 1;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 315, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( v12 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_occupancy.cpp", 316, ASSERT_TYPE_ASSERT, "(playerRigEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "playerRigEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( !handler->GetWorldTagMatrix((BgHandler *)handler, v12, (const scr_string_t)scr_const.tag_player, &axis, (vec3_t *)&v65) )
    return 0;
  v13 = *((float *)&v65 + 1);
  outLinkPos->v[0] = *(float *)&v65;
  outLinkPos->v[2] = v66;
  outLinkPos->v[1] = v13;
  v71 = v7;
  AxisToAngles(&axis, outLinkAngles);
  v14 = 0.0027777778 * outLinkAngles->v[1];
  _XMM7 = 0i64;
  __asm { vroundss xmm0, xmm7, xmm1, 1 }
  outLinkAngles->v[0] = (float)((float)(0.0027777778 * outLinkAngles->v[0]) - *(float *)&_XMM0) * 360.0;
  __asm { vroundss xmm3, xmm7, xmm2, 1 }
  v18 = 0.0027777778 * outLinkAngles->v[2];
  v19 = (float)(v14 - *(float *)&_XMM3) * 360.0;
  outLinkAngles->v[1] = v19;
  __asm { vroundss xmm3, xmm7, xmm2, 1 }
  outLinkAngles->v[2] = (float)(v18 - *(float *)&_XMM3) * 360.0;
  v8->lerpMoveDir = v19;
  v8->playerAngles = *outLinkAngles;
  v8->playerAnglesWorld = *outLinkAngles;
  __asm { vroundss xmm3, xmm7, xmm2, 1 }
  v8->vehicleAnimation.viewAngles.v[0] = (float)((float)(0.0027777778 * viewAngles->v[0]) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm7, xmm1, 1 }
  v8->vehicleAnimation.viewAngles.v[1] = (float)((float)(0.0027777778 * viewAngles->v[1]) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm7, xmm1, 1 }
  v8->vehicleAnimation.viewAngles.v[2] = (float)((float)(0.0027777778 * viewAngles->v[2]) - *(float *)&_XMM3) * 360.0;
  v57 = *(_WORD *)v8->vehicleAnimation.hasSeatIK;
  BG_VehicleOccupancy_GetSeatIKTransform(handler, vehicleEntNum, vehicleSeat, &outSeatIKTransforms);
  hasSeatIK = outSeatIKTransforms.hasSeatIK;
  v25 = v8->vehicleAnimation.hasSeatIK;
  v65 = outSeatIKTransforms.hasSeatIK;
  v26 = &v8->IKHandPos[0].v[2];
  v27 = 0i64;
  do
  {
    if ( *hasSeatIK )
    {
      *v25 = 1;
      AnglesToAxis(outLinkAngles, (tmat33_t<vec3_t> *)&in);
      v28 = outLinkPos->v[1];
      in.m[3].v[0] = outLinkPos->v[0];
      in.m[3].v[2] = outLinkPos->v[2];
      in.m[3].v[1] = v28;
      MatrixTransposeTransformVector43(&outSeatIKTransforms.seatIKTagPosWorld[v27], &in, &out);
      MatrixTranspose((const tmat33_t<vec3_t> *)&in, &axis);
      MatrixMultiply(&outSeatIKTransforms.seatIKTagAxisWorld[v27], &axis, &v68);
      v8 = ci;
      AxisToAngles(&v68, &ci->IKHandAng[v27]);
      v29 = out.v[1];
      hasSeatIK = v65;
      *(v26 - 2) = out.v[0];
      *v26 = out.v[2];
      *(v26 - 1) = v29;
    }
    else
    {
      *v25 = 0;
    }
    ++hasSeatIK;
    v27 = (unsigned int)(v27 + 1);
    ++v25;
    v65 = hasSeatIK;
    v26 += 3;
  }
  while ( (unsigned int)v27 < 2 );
  v30 = v8->vehicleAnimation.seat;
  v31 = *(_WORD *)v8->vehicleAnimation.hasSeatIK != v57;
  v32 = (__int64)v63;
  v8->vehicleSeatChanged = vehicleSeat != v30;
  if ( v31 || vehicleSeat != v30 )
    v8->dobjDirty = 1;
  v8->vehicleAnimation.prevSeat = v30;
  v8->vehicleAnimation.seat = vehicleSeat;
  v33 = DCONST_DVARINT_animscript_debug_vehicle;
  if ( !DCONST_DVARINT_animscript_debug_vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug_vehicle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  integer = v33->current.integer;
  if ( integer == 1 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v32 + 448i64))(v32) || integer == 2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v32 + 440i64))(v32) )
  {
    v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 448i64))(v32);
    v36 = DEBUG_DURATION_CLIENT;
    if ( v35 )
      v36 = DEBUG_DURATION_SERVER;
    AnglesToAxis(outLinkAngles, &v68);
    (*(void (__fastcall **)(__int64, tmat33_t<vec3_t> *, vec3_t *))(*(_QWORD *)v32 + 384i64))(v32, &v68, outLinkPos);
    v37 = outSeatIKTransforms.hasSeatIK;
    v38 = 0i64;
    angles = outSeatIKTransforms.hasSeatIK;
    v39 = &outSeatIKTransforms.seatIKTagPosWorld[0].v[2];
    v40 = &outSeatIKTransforms.seatIKTagAxisWorld[0].m[2].v[2];
    do
    {
      if ( *v37 )
      {
        v41 = DEBUG_TEXT_HEIGHT_OFFSET * *(v40 - 1);
        v42 = *(_QWORD *)v32;
        v43 = DEBUG_TEXT_HEIGHT_OFFSET * *v40;
        out.v[0] = (float)(DEBUG_TEXT_HEIGHT_OFFSET * *(v40 - 2)) + *(v39 - 2);
        v44 = v41 + *(v39 - 1);
        v45 = *(void (__fastcall **)(__int64, vec3_t *, vec4_t *))(v42 + 312);
        out.v[2] = v43 + *v39;
        out.v[1] = v44;
        SeatIKTag = (unsigned int)BG_VehicleOccupancy_GetSeatIKTag((const XAnimIKType)v38, vehicleSeat);
        SL_ConvertToString(SeatIKTag);
        v45(v32, &out, &colorGreen);
        (*(void (__fastcall **)(__int64, vec3_t *, __int64, vec4_t *, vec4_t *, _DWORD, int))(*(_QWORD *)v32 + 368i64))(v32, &outSeatIKTransforms.seatIKTagPosWorld[v38], v47, &colorYellow, &colorGreen, 0, v36);
        (*(void (__fastcall **)(__int64, tmat33_t<vec3_t> *, vec3_t *))(*(_QWORD *)v32 + 384i64))(v32, &outSeatIKTransforms.seatIKTagAxisWorld[v38], &outSeatIKTransforms.seatIKTagPosWorld[v38]);
        v37 = angles;
      }
      ++v37;
      v38 = (unsigned int)(v38 + 1);
      v40 += 9;
      angles = v37;
      v39 += 3;
    }
    while ( (unsigned int)v38 < 2 );
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
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, tmat33_t<vec3_t> *, const BgHandler **))(*(_QWORD *)v32 + 216i64))(v32, (unsigned int)vehicleEntNum, (unsigned int)tag_seat_0, &axis, &v63) )
        {
          v49 = *(_QWORD *)v32;
          out.v[0] = (float)(DEBUG_TEXT_HEIGHT_OFFSET * axis.m[2].v[0]) + *(float *)&v63;
          v50 = *(void (__fastcall **)(__int64, vec3_t *, vec4_t *))(v49 + 312);
          out.v[1] = (float)(DEBUG_TEXT_HEIGHT_OFFSET * axis.m[2].v[1]) + *((float *)&v63 + 1);
          out.v[2] = (float)(DEBUG_TEXT_HEIGHT_OFFSET * axis.m[2].v[2]) + v64;
          SL_ConvertToString(tag_seat_0);
          v50(v32, &out, &colorGreen);
          (*(void (__fastcall **)(__int64, const BgHandler **, __int64, vec4_t *, vec4_t *, _DWORD, int))(*(_QWORD *)v32 + 368i64))(v32, &v63, v51, &colorYellow, &colorGreen, 0, v36);
          (*(void (__fastcall **)(__int64, tmat33_t<vec3_t> *, const BgHandler **))(*(_QWORD *)v32 + 384i64))(v32, &axis, &v63);
        }
        v52 = outLinkPos->v[1];
        v53 = outLinkPos->v[2];
        if ( (float)((float)((float)((float)(*((float *)&v63 + 1) - v52) * (float)(*((float *)&v63 + 1) - v52)) + (float)((float)(*(float *)&v63 - outLinkPos->v[0]) * (float)(*(float *)&v63 - outLinkPos->v[0]))) + (float)((float)(v64 - v53) * (float)(v64 - v53))) > DEBUG_ORIGIN_DELTA_THRESHOLD || (float)((float)((float)(axis.m[0].v[0] * v68.m[0].v[0]) + (float)(v68.m[0].v[1] * axis.m[0].v[1])) + (float)(v68.m[0].v[2] * axis.m[0].v[2])) < DEBUG_AXIS_DOT_THRESHOLD )
        {
          v54 = *(_QWORD *)v32;
          out.v[0] = (float)((float)(DEBUG_TEXT_HEIGHT_OFFSET + 2.0) * v68.m[2].v[0]) + outLinkPos->v[0];
          out.v[1] = (float)((float)(DEBUG_TEXT_HEIGHT_OFFSET + 2.0) * v68.m[2].v[1]) + v52;
          out.v[2] = (float)((float)(DEBUG_TEXT_HEIGHT_OFFSET + 2.0) * v68.m[2].v[2]) + v53;
          (*(void (__fastcall **)(__int64, vec3_t *, vec4_t *))(v54 + 312))(v32, &out, &colorBlue);
          (*(void (__fastcall **)(__int64, vec3_t *, __int64, vec4_t *, vec4_t *, _DWORD, int))(*(_QWORD *)v32 + 368i64))(v32, outLinkPos, v55, &colorBlue, &colorGreen, 0, v36);
          (*(void (__fastcall **)(__int64, tmat33_t<vec3_t> *, vec3_t *))(*(_QWORD *)v32 + 384i64))(v32, &v68, outLinkPos);
        }
        break;
    }
  }
  return 1;
}

