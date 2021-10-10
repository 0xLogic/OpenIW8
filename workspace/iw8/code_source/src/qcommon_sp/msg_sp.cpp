/*
==============
MSG_ReadDeltaUsercmd
==============
*/

void __fastcall MSG_ReadDeltaUsercmd(msg_t *msg, const usercmd_s *from, usercmd_s *to)
{
  ?MSG_ReadDeltaUsercmd@@YAXPEAUmsg_t@@PEBUusercmd_s@@PEAU2@@Z(msg, from, to);
}

/*
==============
MSG_WriteDeltaUsercmd
==============
*/

void __fastcall MSG_WriteDeltaUsercmd(msg_t *msg, const usercmd_s *from, usercmd_s *to)
{
  ?MSG_WriteDeltaUsercmd@@YAXPEAUmsg_t@@PEBUusercmd_s@@PEAU2@@Z(msg, from, to);
}

/*
==============
MSG_AreFloatsEqual
==============
*/
bool MSG_AreFloatsEqual(const float *from, float *inOutTo)
{
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 113, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !inOutTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 114, ASSERT_TYPE_ASSERT, "(inOutTo)", (const char *)&queryFormat, "inOutTo") )
    __debugbreak();
  return *inOutTo == *from;
}

/*
==============
MSG_ReadDeltaUsercmd
==============
*/
void MSG_ReadDeltaUsercmd(msg_t *msg, const usercmd_s *from, usercmd_s *to)
{
  __int128 v3; 
  int Long; 
  int v8; 
  int v9; 
  int Bit; 
  int v11; 
  int Bits; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  char forwardmove; 
  char rightmove; 
  unsigned __int8 upmove; 
  unsigned __int8 downmove; 
  char pitchmove; 
  char yawmove; 
  unsigned __int64 buttons; 
  UserCommandStateFlags stateFlags; 
  Weapon *v25; 
  int v26; 
  __int128 v27; 
  double v28; 
  float gunPitch; 
  float gunYaw; 
  float gunXOfs; 
  float gunYOfs; 
  float gunZOfs; 
  float rollSensitivity; 
  unsigned __int16 meleeChargeEnt; 
  __int16 scriptedMeleeTarget; 
  unsigned __int8 packedControllerAim; 
  char v38; 
  char v39; 
  char v40; 
  char v41; 
  char v42; 
  int v43; 
  __int16 v44; 
  __int16 v45; 
  __int16 v46; 
  float vehOrgX; 
  float vehOrgY; 
  float vehOrgZ; 
  Weapon result; 
  __int128 v51; 
  float v52; 

  if ( MSG_ReadBit(msg) )
    Long = from->commandTime + MSG_ReadByte(msg);
  else
    Long = MSG_ReadLong(msg);
  to->commandTime = Long;
  if ( MSG_ReadBit(msg) )
    v8 = from->serverTime + MSG_ReadByte(msg);
  else
    v8 = MSG_ReadLong(msg);
  to->serverTime = v8;
  if ( MSG_ReadBit(msg) )
    v9 = from->inputTime + MSG_ReadByte(msg);
  else
    v9 = MSG_ReadLong(msg);
  to->inputTime = v9;
  Bit = MSG_ReadBit(msg);
  v11 = from->angles.v[0];
  if ( Bit )
  {
    v51 = v3;
    if ( MSG_ReadBits(msg, 1u) )
      Bits = MSG_ReadBits(msg, 0x14u);
    else
      Bits = v11;
    to->angles.v[0] = Bits;
    v13 = from->angles.v[1];
    if ( MSG_ReadBits(msg, 1u) )
      v14 = MSG_ReadBits(msg, 0x14u);
    else
      v14 = v13;
    to->angles.v[1] = v14;
    v15 = from->angles.v[2];
    if ( MSG_ReadBits(msg, 1u) )
      v16 = MSG_ReadBits(msg, 0x14u);
    else
      v16 = v15;
    to->angles.v[2] = v16;
    forwardmove = from->forwardmove;
    if ( MSG_ReadBits(msg, 1u) )
      forwardmove = MSG_ReadBits(msg, 8u);
    to->forwardmove = forwardmove;
    rightmove = from->rightmove;
    if ( MSG_ReadBits(msg, 1u) )
      rightmove = MSG_ReadBits(msg, 8u);
    to->rightmove = rightmove;
    upmove = from->upmove;
    if ( MSG_ReadBits(msg, 1u) )
      upmove = MSG_ReadBits(msg, 7u);
    to->upmove = upmove;
    downmove = from->downmove;
    if ( MSG_ReadBits(msg, 1u) )
      downmove = MSG_ReadBits(msg, 7u);
    to->downmove = downmove;
    pitchmove = from->pitchmove;
    if ( MSG_ReadBits(msg, 1u) )
      pitchmove = MSG_ReadBits(msg, 8u);
    to->pitchmove = pitchmove;
    yawmove = from->yawmove;
    if ( MSG_ReadBits(msg, 1u) )
      yawmove = MSG_ReadBits(msg, 8u);
    to->yawmove = yawmove;
    buttons = from->buttons;
    if ( MSG_ReadBits(msg, 1u) )
      buttons = MSG_ReadInt64(msg);
    to->buttons = buttons;
    stateFlags = from->stateFlags;
    if ( MSG_ReadBits(msg, 1u) )
      stateFlags = (unsigned int)MSG_ReadBits(msg, 5u);
    to->stateFlags = stateFlags;
    MSG_ReadDeltaPrimaryWeapon(msg, &from->weapon, from->isAlternate, &to->weapon, &to->isAlternate);
    v25 = MSG_ReadDeltaWeapon(&result, msg, &from->offHand);
    v26 = *(_DWORD *)&v25->weaponCamo;
    v27 = *(_OWORD *)&v25->attachmentVariationIndices[5];
    v28 = *(double *)&v25->attachmentVariationIndices[21];
    *(__m256i *)&to->offHand.weaponIdx = *(__m256i *)&v25->weaponIdx;
    *(_OWORD *)&to->offHand.attachmentVariationIndices[5] = v27;
    *(double *)&to->offHand.attachmentVariationIndices[21] = v28;
    *(_DWORD *)&to->offHand.weaponCamo = v26;
    gunPitch = from->gunPitch;
    if ( MSG_ReadBits(msg, 1u) )
      gunPitch = COERCE_FLOAT(MSG_ReadLong(msg));
    to->gunPitch = gunPitch;
    gunYaw = from->gunYaw;
    if ( MSG_ReadBits(msg, 1u) )
      gunYaw = COERCE_FLOAT(MSG_ReadLong(msg));
    to->gunYaw = gunYaw;
    gunXOfs = from->gunXOfs;
    if ( MSG_ReadBits(msg, 1u) )
      gunXOfs = COERCE_FLOAT(MSG_ReadLong(msg));
    to->gunXOfs = gunXOfs;
    gunYOfs = from->gunYOfs;
    if ( MSG_ReadBits(msg, 1u) )
      gunYOfs = COERCE_FLOAT(MSG_ReadLong(msg));
    to->gunYOfs = gunYOfs;
    gunZOfs = from->gunZOfs;
    if ( MSG_ReadBits(msg, 1u) )
      gunZOfs = COERCE_FLOAT(MSG_ReadLong(msg));
    to->gunZOfs = gunZOfs;
    rollSensitivity = from->rollSensitivity;
    if ( MSG_ReadBits(msg, 1u) )
      rollSensitivity = COERCE_FLOAT(MSG_ReadLong(msg));
    v52 = to->gunPitch;
    to->rollSensitivity = rollSensitivity;
    if ( (LODWORD(v52) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 428, ASSERT_TYPE_SANITY, "( !IS_NAN( to->gunPitch ) )", (const char *)&queryFormat, "!IS_NAN( to->gunPitch )") )
      __debugbreak();
    if ( (LODWORD(to->gunYaw) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 429, ASSERT_TYPE_SANITY, "( !IS_NAN( to->gunYaw ) )", (const char *)&queryFormat, "!IS_NAN( to->gunYaw )") )
      __debugbreak();
    if ( (LODWORD(to->gunXOfs) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 430, ASSERT_TYPE_SANITY, "( !IS_NAN( to->gunXOfs ) )", (const char *)&queryFormat, "!IS_NAN( to->gunXOfs )") )
      __debugbreak();
    if ( (LODWORD(to->gunYOfs) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 431, ASSERT_TYPE_SANITY, "( !IS_NAN( to->gunYOfs ) )", (const char *)&queryFormat, "!IS_NAN( to->gunYOfs )") )
      __debugbreak();
    if ( (LODWORD(to->gunZOfs) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 432, ASSERT_TYPE_SANITY, "( !IS_NAN( to->gunZOfs ) )", (const char *)&queryFormat, "!IS_NAN( to->gunZOfs )") )
      __debugbreak();
    if ( (LODWORD(to->rollSensitivity) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 436, ASSERT_TYPE_SANITY, "( !IS_NAN( to->rollSensitivity ) )", (const char *)&queryFormat, "!IS_NAN( to->rollSensitivity )") )
      __debugbreak();
    meleeChargeEnt = from->meleeChargeEnt;
    if ( MSG_ReadBits(msg, 1u) )
      meleeChargeEnt = MSG_ReadBits(msg, 0xBu);
    to->meleeChargeEnt = meleeChargeEnt;
    scriptedMeleeTarget = from->scriptedMeleeTarget;
    if ( MSG_ReadBits(msg, 1u) )
      scriptedMeleeTarget = MSG_ReadBits(msg, 0xBu);
    to->scriptedMeleeTarget = scriptedMeleeTarget;
    packedControllerAim = from->packedControllerAim;
    if ( MSG_ReadBits(msg, 1u) )
      packedControllerAim = MSG_ReadBits(msg, 8u);
    to->packedControllerAim = packedControllerAim;
    v38 = from->remoteControlAngles[0];
    if ( MSG_ReadBits(msg, 1u) )
      v38 = MSG_ReadBits(msg, 8u);
    to->remoteControlAngles[0] = v38;
    v39 = from->remoteControlAngles[1];
    if ( MSG_ReadBits(msg, 1u) )
      v39 = MSG_ReadBits(msg, 8u);
    to->remoteControlAngles[1] = v39;
    v40 = from->remoteControlMove[0];
    if ( MSG_ReadBits(msg, 1u) )
      v40 = MSG_ReadBits(msg, 8u);
    to->remoteControlMove[0] = v40;
    v41 = from->remoteControlMove[1];
    if ( MSG_ReadBits(msg, 1u) )
      v41 = MSG_ReadBits(msg, 8u);
    to->remoteControlMove[1] = v41;
    v42 = from->remoteControlMove[2];
    if ( MSG_ReadBits(msg, 1u) )
      v42 = MSG_ReadBits(msg, 8u);
    to->remoteControlMove[2] = v42;
    v43 = MSG_ReadBit(msg);
    to->lightSample.bValid = v43 != 0;
    if ( v43 )
      to->lightSample.value = MSG_ReadBits(msg, 3u);
    v44 = from->vehAngles[0];
    if ( MSG_ReadBits(msg, 1u) )
      v44 = MSG_ReadBits(msg, 0x14u);
    to->vehAngles[0] = v44;
    v45 = from->vehAngles[1];
    if ( MSG_ReadBits(msg, 1u) )
      v45 = MSG_ReadBits(msg, 0x14u);
    to->vehAngles[1] = v45;
    v46 = from->vehAngles[2];
    if ( MSG_ReadBits(msg, 1u) )
      v46 = MSG_ReadBits(msg, 0x14u);
    to->vehAngles[2] = v46;
    vehOrgX = from->vehOrgX;
    if ( MSG_ReadBits(msg, 1u) )
      vehOrgX = COERCE_FLOAT(MSG_ReadLong(msg));
    to->vehOrgX = vehOrgX;
    vehOrgY = from->vehOrgY;
    if ( MSG_ReadBits(msg, 1u) )
      vehOrgY = COERCE_FLOAT(MSG_ReadLong(msg));
    to->vehOrgY = vehOrgY;
    vehOrgZ = from->vehOrgZ;
    if ( MSG_ReadBits(msg, 1u) )
      vehOrgZ = COERCE_FLOAT(MSG_ReadLong(msg));
    to->vehOrgZ = vehOrgZ;
  }
  else
  {
    to->angles.v[0] = v11;
    to->angles.v[1] = from->angles.v[1];
    to->angles.v[2] = from->angles.v[2];
    to->forwardmove = from->forwardmove;
    to->rightmove = from->rightmove;
    to->upmove = from->upmove;
    to->downmove = from->downmove;
    to->pitchmove = from->pitchmove;
    to->yawmove = from->yawmove;
    to->buttons = from->buttons;
    *(__m256i *)&to->weapon.weaponIdx = *(__m256i *)&from->weapon.weaponIdx;
    *(_OWORD *)&to->weapon.attachmentVariationIndices[5] = *(_OWORD *)&from->weapon.attachmentVariationIndices[5];
    *(double *)&to->weapon.attachmentVariationIndices[21] = *(double *)&from->weapon.attachmentVariationIndices[21];
    *(_DWORD *)&to->weapon.weaponCamo = *(_DWORD *)&from->weapon.weaponCamo;
    to->isAlternate = from->isAlternate;
    *(__m256i *)&to->offHand.weaponIdx = *(__m256i *)&from->offHand.weaponIdx;
    *(_OWORD *)&to->offHand.attachmentVariationIndices[5] = *(_OWORD *)&from->offHand.attachmentVariationIndices[5];
    *(double *)&to->offHand.attachmentVariationIndices[21] = *(double *)&from->offHand.attachmentVariationIndices[21];
    *(_DWORD *)&to->offHand.weaponCamo = *(_DWORD *)&from->offHand.weaponCamo;
    to->gunPitch = from->gunPitch;
    to->gunYaw = from->gunYaw;
    to->gunXOfs = from->gunXOfs;
    to->gunYOfs = from->gunYOfs;
    to->gunZOfs = from->gunZOfs;
    to->rollSensitivity = from->rollSensitivity;
    to->meleeChargeEnt = from->meleeChargeEnt;
    to->scriptedMeleeTarget = from->scriptedMeleeTarget;
    to->remoteControlAngles[0] = from->remoteControlAngles[0];
    to->remoteControlAngles[1] = from->remoteControlAngles[1];
    to->remoteControlMove[0] = from->remoteControlMove[0];
    to->remoteControlMove[1] = from->remoteControlMove[1];
    to->remoteControlMove[2] = from->remoteControlMove[2];
    to->lightSample.bValid = from->lightSample.bValid;
    to->lightSample.value = from->lightSample.value;
    to->vehAngles[0] = from->vehAngles[0];
    to->vehAngles[1] = from->vehAngles[1];
    to->vehAngles[2] = from->vehAngles[2];
    to->vehOrgX = from->vehOrgX;
    to->vehOrgY = from->vehOrgY;
    to->vehOrgZ = from->vehOrgZ;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 519, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST ))", "%s\n\tNeed to transmit this if turned on", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST )") )
    __debugbreak();
  to->airburstMarkDistance = 0;
  *(_QWORD *)to->sightedClientsMask.data = 0i64;
  *(_QWORD *)&to->sightedClientsMask.data[2] = 0i64;
  *(_QWORD *)&to->sightedClientsMask.data[4] = 0i64;
  *(_QWORD *)&to->sightedClientsMask.data[6] = 0i64;
}

/*
==============
MSG_WriteDeltaUsercmd
==============
*/
void MSG_WriteDeltaUsercmd(msg_t *msg, const usercmd_s *from, usercmd_s *to)
{
  int v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  bool v12; 
  bool v13; 
  bool v14; 
  bool v15; 
  bool v16; 
  bool v17; 
  bool v18; 
  bool v19; 
  bool v20; 
  bool v21; 
  msg_t *v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  msg_t *v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int v29; 
  msg_t *v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned int v33; 
  msg_t *v34; 
  __int64 forwardmove; 
  __int64 v36; 
  unsigned int v37; 
  msg_t *v38; 
  __int64 rightmove; 
  __int64 v40; 
  unsigned int v41; 
  msg_t *v42; 
  __int64 upmove; 
  __int64 v44; 
  unsigned int v45; 
  msg_t *v46; 
  __int64 downmove; 
  __int64 v48; 
  unsigned int v49; 
  msg_t *v50; 
  __int64 pitchmove; 
  __int64 v52; 
  unsigned int v53; 
  msg_t *v54; 
  __int64 yawmove; 
  __int64 v56; 
  unsigned int v57; 
  unsigned __int64 v58; 
  __int64 v59; 
  msg_t *v60; 
  __int64 v61; 
  unsigned int v62; 
  float gunPitch; 
  float gunYaw; 
  float gunXOfs; 
  float gunYOfs; 
  float gunZOfs; 
  float rollSensitivity; 
  __int64 v69; 
  msg_t *v70; 
  __int64 v71; 
  unsigned int v72; 
  msg_t *v73; 
  __int64 v74; 
  __int64 v75; 
  unsigned int v76; 
  msg_t *v77; 
  __int64 packedControllerAim; 
  __int64 v79; 
  unsigned int v80; 
  msg_t *v81; 
  __int64 v82; 
  __int64 v83; 
  unsigned int v84; 
  msg_t *v85; 
  __int64 v86; 
  __int64 v87; 
  unsigned int v88; 
  msg_t *v89; 
  __int64 v90; 
  __int64 v91; 
  unsigned int v92; 
  msg_t *v93; 
  __int64 v94; 
  __int64 v95; 
  unsigned int v96; 
  msg_t *v97; 
  __int64 v98; 
  __int64 v99; 
  unsigned int v100; 
  __int64 v101; 
  msg_t *v102; 
  __int64 v103; 
  unsigned int v104; 
  msg_t *v105; 
  __int64 v106; 
  __int64 v107; 
  unsigned int v108; 
  msg_t *v109; 
  __int64 v110; 
  __int64 v111; 
  unsigned int v112; 
  float v113; 
  float v114; 
  float v115; 
  unsigned __int16 meleeChargeEnt; 
  __int16 v117; 
  __int16 scriptedMeleeTarget; 
  UserCommandStateFlags v119; 
  UserCommandStateFlags stateFlags; 
  unsigned __int64 v121; 
  unsigned __int64 buttons; 
  float *p_vehOrgX; 
  float *p_vehOrgY; 
  float *p_vehOrgZ; 
  char value; 
  int valuea; 
  int valueb; 
  int valuec; 
  bool v130; 
  unsigned __int16 v131; 

  if ( (unsigned int)(to->commandTime - from->commandTime) >= 0x100 )
  {
    MSG_WriteBit0(msg);
    MSG_WriteLong(msg, to->commandTime);
  }
  else
  {
    MSG_WriteBit1(msg);
    MSG_WriteByte(msg, to->commandTime - from->commandTime);
  }
  v6 = to->serverTime - from->serverTime;
  if ( v6 >= 256 )
  {
    MSG_WriteBit0(msg);
    MSG_WriteLong(msg, to->serverTime);
  }
  else
  {
    if ( v6 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 253, ASSERT_TYPE_ASSERT, "(to->serverTime - from->serverTime >= 0)", "%s\n\t%i - %i >= 0\n", "to->serverTime - from->serverTime >= 0", to->serverTime, from->serverTime) )
      __debugbreak();
    MSG_WriteBit1(msg);
    MSG_WriteByte(msg, to->serverTime - from->serverTime);
  }
  if ( to->inputTime - from->inputTime >= 256 )
  {
    MSG_WriteBit0(msg);
    MSG_WriteLong(msg, to->inputTime);
  }
  else
  {
    MSG_WriteBit1(msg);
    MSG_WriteByte(msg, to->inputTime - from->inputTime);
  }
  v7 = from->angles.v[0] == to->angles.v[0] && from->angles.v[1] == to->angles.v[1] && from->angles.v[2] == to->angles.v[2];
  v8 = from->forwardmove == to->forwardmove && from->rightmove == to->rightmove && from->upmove == to->upmove && from->downmove == to->downmove && from->pitchmove == to->pitchmove && from->yawmove == to->yawmove;
  buttons = from->buttons;
  v121 = to->buttons;
  stateFlags = from->stateFlags;
  v119 = to->stateFlags;
  if ( memcmp_0(&from->weapon, &to->weapon, 0x3Cui64) || memcmp_0(&from->offHand, &to->offHand, 0x3Cui64) || (value = 1, from->isAlternate != to->isAlternate) )
    value = 0;
  v9 = MSG_AreFloatsEqual(&from->gunPitch, &to->gunPitch);
  v10 = MSG_AreFloatsEqual(&from->gunYaw, &to->gunYaw) && v9;
  v11 = MSG_AreFloatsEqual(&from->gunXOfs, &to->gunXOfs) && v10;
  v12 = MSG_AreFloatsEqual(&from->gunYOfs, &to->gunYOfs) && v11;
  v13 = MSG_AreFloatsEqual(&from->gunZOfs, &to->gunZOfs) && v12;
  v14 = from->remoteControlAngles[0] == to->remoteControlAngles[0] && from->remoteControlAngles[1] == to->remoteControlAngles[1];
  v15 = from->remoteControlMove[0] == to->remoteControlMove[0] && from->remoteControlMove[1] == to->remoteControlMove[1] && from->remoteControlMove[2] == to->remoteControlMove[2];
  v16 = v15 && v14;
  meleeChargeEnt = from->meleeChargeEnt;
  v131 = to->meleeChargeEnt;
  scriptedMeleeTarget = from->scriptedMeleeTarget;
  v117 = to->scriptedMeleeTarget;
  v17 = from->vehAngles[0] == to->vehAngles[0] && from->vehAngles[1] == to->vehAngles[1] && from->vehAngles[2] == to->vehAngles[2];
  p_vehOrgX = &to->vehOrgX;
  v18 = MSG_AreFloatsEqual(&from->vehOrgX, &to->vehOrgX) && v17;
  p_vehOrgY = &to->vehOrgY;
  v19 = MSG_AreFloatsEqual(&from->vehOrgY, &to->vehOrgY) && v18;
  p_vehOrgZ = &to->vehOrgZ;
  v20 = MSG_AreFloatsEqual(&from->vehOrgZ, &to->vehOrgZ) && v19;
  v130 = MSG_AreFloatsEqual(&from->rollSensitivity, &to->rollSensitivity);
  v21 = !CG_LightSampler_DataChanged(from, to);
  if ( v7 && v8 && buttons == v121 && stateFlags == v119 && value && v13 && meleeChargeEnt == v131 && scriptedMeleeTarget == v117 && v16 && v130 && v21 && v20 )
  {
    MSG_WriteBit0(msg);
  }
  else
  {
    MSG_WriteBit1(msg);
    v22 = msg;
    v23 = to->angles.v[0];
    if ( from->angles.v[0] == v23 )
    {
      v24 = 0i64;
      v25 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v25 = 20;
      v24 = v23;
      v22 = msg;
    }
    MSG_WriteBits(v22, v24, v25);
    v26 = msg;
    v27 = to->angles.v[1];
    if ( from->angles.v[1] == v27 )
    {
      v28 = 0i64;
      v29 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v29 = 20;
      v28 = v27;
      v26 = msg;
    }
    MSG_WriteBits(v26, v28, v29);
    v30 = msg;
    v31 = to->angles.v[2];
    if ( from->angles.v[2] == v31 )
    {
      v32 = 0i64;
      v33 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v33 = 20;
      v32 = v31;
      v30 = msg;
    }
    MSG_WriteBits(v30, v32, v33);
    v34 = msg;
    forwardmove = to->forwardmove;
    if ( from->forwardmove == forwardmove )
    {
      v36 = 0i64;
      v37 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v37 = 8;
      v36 = forwardmove;
      v34 = msg;
    }
    MSG_WriteBits(v34, v36, v37);
    v38 = msg;
    rightmove = to->rightmove;
    if ( from->rightmove == rightmove )
    {
      v40 = 0i64;
      v41 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v41 = 8;
      v40 = rightmove;
      v38 = msg;
    }
    MSG_WriteBits(v38, v40, v41);
    v42 = msg;
    upmove = to->upmove;
    if ( from->upmove == upmove )
    {
      v44 = 0i64;
      v45 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v45 = 7;
      v44 = upmove;
      v42 = msg;
    }
    MSG_WriteBits(v42, v44, v45);
    v46 = msg;
    downmove = to->downmove;
    if ( from->downmove == downmove )
    {
      v48 = 0i64;
      v49 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v49 = 7;
      v48 = downmove;
      v46 = msg;
    }
    MSG_WriteBits(v46, v48, v49);
    v50 = msg;
    pitchmove = to->pitchmove;
    if ( from->pitchmove == pitchmove )
    {
      v52 = 0i64;
      v53 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v53 = 8;
      v52 = pitchmove;
      v50 = msg;
    }
    MSG_WriteBits(v50, v52, v53);
    v54 = msg;
    yawmove = to->yawmove;
    if ( from->yawmove == yawmove )
    {
      v56 = 0i64;
      v57 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v57 = 8;
      v56 = yawmove;
      v54 = msg;
    }
    MSG_WriteBits(v54, v56, v57);
    v58 = to->buttons;
    if ( from->buttons == to->buttons )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteInt64(msg, v58);
    }
    v59 = (unsigned int)to->stateFlags;
    v60 = msg;
    if ( from->stateFlags == v59 )
    {
      v61 = 0i64;
      v62 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v62 = 5;
      v61 = v59;
      v60 = msg;
    }
    MSG_WriteBits(v60, v61, v62);
    MSG_WriteDeltaPrimaryWeapon(msg, &from->weapon, from->isAlternate, &to->weapon, to->isAlternate);
    MSG_WriteDeltaWeapon(msg, &from->offHand, &to->offHand);
    gunPitch = to->gunPitch;
    if ( gunPitch == from->gunPitch )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, SLODWORD(gunPitch));
    }
    to->gunPitch = gunPitch;
    gunYaw = to->gunYaw;
    if ( gunYaw == from->gunYaw )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, SLODWORD(gunYaw));
    }
    to->gunYaw = gunYaw;
    gunXOfs = to->gunXOfs;
    if ( gunXOfs == from->gunXOfs )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, SLODWORD(gunXOfs));
    }
    to->gunXOfs = gunXOfs;
    gunYOfs = to->gunYOfs;
    if ( gunYOfs == from->gunYOfs )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, SLODWORD(gunYOfs));
    }
    to->gunYOfs = gunYOfs;
    gunZOfs = to->gunZOfs;
    if ( gunZOfs == from->gunZOfs )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, SLODWORD(gunZOfs));
    }
    to->gunZOfs = gunZOfs;
    rollSensitivity = to->rollSensitivity;
    if ( rollSensitivity == from->rollSensitivity )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, SLODWORD(rollSensitivity));
    }
    v69 = to->meleeChargeEnt;
    v70 = msg;
    to->rollSensitivity = rollSensitivity;
    if ( from->meleeChargeEnt == v69 )
    {
      v71 = 0i64;
      v72 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v72 = 11;
      v71 = v69;
      v70 = msg;
    }
    MSG_WriteBits(v70, v71, v72);
    v73 = msg;
    v74 = to->scriptedMeleeTarget;
    if ( from->scriptedMeleeTarget == v74 )
    {
      v75 = 0i64;
      v76 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v76 = 11;
      v75 = v74;
      v73 = msg;
    }
    MSG_WriteBits(v73, v75, v76);
    v77 = msg;
    packedControllerAim = to->packedControllerAim;
    if ( from->packedControllerAim == packedControllerAim )
    {
      v79 = 0i64;
      v80 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v80 = 8;
      v79 = packedControllerAim;
      v77 = msg;
    }
    MSG_WriteBits(v77, v79, v80);
    v81 = msg;
    v82 = to->remoteControlAngles[0];
    if ( from->remoteControlAngles[0] == v82 )
    {
      v83 = 0i64;
      v84 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v84 = 8;
      v83 = v82;
      v81 = msg;
    }
    MSG_WriteBits(v81, v83, v84);
    v85 = msg;
    v86 = to->remoteControlAngles[1];
    if ( from->remoteControlAngles[1] == v86 )
    {
      v87 = 0i64;
      v88 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v88 = 8;
      v87 = v86;
      v85 = msg;
    }
    MSG_WriteBits(v85, v87, v88);
    v89 = msg;
    v90 = to->remoteControlMove[0];
    if ( from->remoteControlMove[0] == v90 )
    {
      v91 = 0i64;
      v92 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v92 = 8;
      v91 = v90;
      v89 = msg;
    }
    MSG_WriteBits(v89, v91, v92);
    v93 = msg;
    v94 = to->remoteControlMove[1];
    if ( from->remoteControlMove[1] == v94 )
    {
      v95 = 0i64;
      v96 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v96 = 8;
      v95 = v94;
      v93 = msg;
    }
    MSG_WriteBits(v93, v95, v96);
    v97 = msg;
    v98 = to->remoteControlMove[2];
    if ( from->remoteControlMove[2] == v98 )
    {
      v99 = 0i64;
      v100 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v100 = 8;
      v99 = v98;
      v97 = msg;
    }
    MSG_WriteBits(v97, v99, v100);
    if ( to->lightSample.bValid )
    {
      MSG_WriteBit1(msg);
      MSG_WriteBits(msg, to->lightSample.value, 3u);
    }
    else
    {
      MSG_WriteBit0(msg);
    }
    v101 = to->vehAngles[0];
    v102 = msg;
    if ( from->vehAngles[0] == v101 )
    {
      v103 = 0i64;
      v104 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v104 = 20;
      v103 = v101;
      v102 = msg;
    }
    MSG_WriteBits(v102, v103, v104);
    v105 = msg;
    v106 = to->vehAngles[1];
    if ( from->vehAngles[1] == v106 )
    {
      v107 = 0i64;
      v108 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v108 = 20;
      v107 = v106;
      v105 = msg;
    }
    MSG_WriteBits(v105, v107, v108);
    v109 = msg;
    v110 = to->vehAngles[2];
    if ( from->vehAngles[2] == v110 )
    {
      v111 = 0i64;
      v112 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v112 = 20;
      v111 = v110;
      v109 = msg;
    }
    MSG_WriteBits(v109, v111, v112);
    v113 = *p_vehOrgX;
    valuea = *(_DWORD *)p_vehOrgX;
    if ( *p_vehOrgX == from->vehOrgX )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valuea);
    }
    *p_vehOrgX = v113;
    v114 = *p_vehOrgY;
    valueb = *(_DWORD *)p_vehOrgY;
    if ( *p_vehOrgY == from->vehOrgY )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valueb);
    }
    *p_vehOrgY = v114;
    v115 = *p_vehOrgZ;
    valuec = *(_DWORD *)p_vehOrgZ;
    if ( *p_vehOrgZ == from->vehOrgZ )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valuec);
    }
    *p_vehOrgZ = v115;
  }
}

