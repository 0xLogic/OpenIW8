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
  bool v4; 
  bool v5; 

  _RBX = inOutTo;
  _RDI = from;
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 113, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  v4 = _RBX == NULL;
  if ( !_RBX )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 114, ASSERT_TYPE_ASSERT, "(inOutTo)", (const char *)&queryFormat, "inOutTo");
    v4 = !v5;
    if ( v5 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vucomiss xmm0, dword ptr [rdi]
  }
  return v4;
}

/*
==============
MSG_ReadDeltaUsercmd
==============
*/
void MSG_ReadDeltaUsercmd(msg_t *msg, const usercmd_s *from, usercmd_s *to)
{
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
  int v26; 
  unsigned __int16 meleeChargeEnt; 
  __int16 scriptedMeleeTarget; 
  unsigned __int8 packedControllerAim; 
  char v45; 
  char v46; 
  char v47; 
  char v48; 
  char v49; 
  int v50; 
  __int16 v51; 
  __int16 v52; 
  __int16 v53; 
  Weapon result; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 

  _RDI = to;
  _RSI = from;
  if ( MSG_ReadBit(msg) )
    Long = _RSI->commandTime + MSG_ReadByte(msg);
  else
    Long = MSG_ReadLong(msg);
  _RDI->commandTime = Long;
  if ( MSG_ReadBit(msg) )
    v8 = _RSI->serverTime + MSG_ReadByte(msg);
  else
    v8 = MSG_ReadLong(msg);
  _RDI->serverTime = v8;
  if ( MSG_ReadBit(msg) )
    v9 = _RSI->inputTime + MSG_ReadByte(msg);
  else
    v9 = MSG_ReadLong(msg);
  _RDI->inputTime = v9;
  Bit = MSG_ReadBit(msg);
  v11 = _RSI->angles.v[0];
  if ( Bit )
  {
    __asm { vmovaps [rsp+88h+var_18], xmm6 }
    if ( MSG_ReadBits(msg, 1u) )
      Bits = MSG_ReadBits(msg, 0x14u);
    else
      Bits = v11;
    _RDI->angles.v[0] = Bits;
    v13 = _RSI->angles.v[1];
    if ( MSG_ReadBits(msg, 1u) )
      v14 = MSG_ReadBits(msg, 0x14u);
    else
      v14 = v13;
    _RDI->angles.v[1] = v14;
    v15 = _RSI->angles.v[2];
    if ( MSG_ReadBits(msg, 1u) )
      v16 = MSG_ReadBits(msg, 0x14u);
    else
      v16 = v15;
    _RDI->angles.v[2] = v16;
    forwardmove = _RSI->forwardmove;
    if ( MSG_ReadBits(msg, 1u) )
      forwardmove = MSG_ReadBits(msg, 8u);
    _RDI->forwardmove = forwardmove;
    rightmove = _RSI->rightmove;
    if ( MSG_ReadBits(msg, 1u) )
      rightmove = MSG_ReadBits(msg, 8u);
    _RDI->rightmove = rightmove;
    upmove = _RSI->upmove;
    if ( MSG_ReadBits(msg, 1u) )
      upmove = MSG_ReadBits(msg, 7u);
    _RDI->upmove = upmove;
    downmove = _RSI->downmove;
    if ( MSG_ReadBits(msg, 1u) )
      downmove = MSG_ReadBits(msg, 7u);
    _RDI->downmove = downmove;
    pitchmove = _RSI->pitchmove;
    if ( MSG_ReadBits(msg, 1u) )
      pitchmove = MSG_ReadBits(msg, 8u);
    _RDI->pitchmove = pitchmove;
    yawmove = _RSI->yawmove;
    if ( MSG_ReadBits(msg, 1u) )
      yawmove = MSG_ReadBits(msg, 8u);
    _RDI->yawmove = yawmove;
    buttons = _RSI->buttons;
    if ( MSG_ReadBits(msg, 1u) )
      buttons = MSG_ReadInt64(msg);
    _RDI->buttons = buttons;
    stateFlags = _RSI->stateFlags;
    if ( MSG_ReadBits(msg, 1u) )
      stateFlags = (unsigned int)MSG_ReadBits(msg, 5u);
    _RDI->stateFlags = stateFlags;
    MSG_ReadDeltaPrimaryWeapon(msg, &_RSI->weapon, _RSI->isAlternate, &_RDI->weapon, &_RDI->isAlternate);
    _RAX = MSG_ReadDeltaWeapon(&result, msg, &_RSI->offHand);
    v26 = *(_DWORD *)&_RAX->weaponCamo;
    __asm
    {
      vmovups ymm1, ymmword ptr [rax]
      vmovups xmm2, xmmword ptr [rax+20h]
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovups ymmword ptr [rdi+60h], ymm1
      vmovups xmmword ptr [rdi+80h], xmm2
      vmovsd  qword ptr [rdi+90h], xmm0
    }
    *(_DWORD *)&_RDI->offHand.weaponCamo = v26;
    __asm { vmovss  xmm6, dword ptr [rsi+0CCh] }
    if ( MSG_ReadBits(msg, 1u) )
    {
      v66 = MSG_ReadLong(msg);
      __asm { vmovss  xmm6, [rsp+88h+arg_10] }
    }
    __asm
    {
      vmovss  dword ptr [rdi+0CCh], xmm6
      vmovss  xmm6, dword ptr [rsi+0D0h]
    }
    if ( MSG_ReadBits(msg, 1u) )
    {
      v67 = MSG_ReadLong(msg);
      __asm { vmovss  xmm6, [rsp+88h+arg_10] }
    }
    __asm
    {
      vmovss  dword ptr [rdi+0D0h], xmm6
      vmovss  xmm6, dword ptr [rsi+0D4h]
    }
    if ( MSG_ReadBits(msg, 1u) )
    {
      v68 = MSG_ReadLong(msg);
      __asm { vmovss  xmm6, [rsp+88h+arg_10] }
    }
    __asm
    {
      vmovss  dword ptr [rdi+0D4h], xmm6
      vmovss  xmm6, dword ptr [rsi+0D8h]
    }
    if ( MSG_ReadBits(msg, 1u) )
    {
      v69 = MSG_ReadLong(msg);
      __asm { vmovss  xmm6, [rsp+88h+arg_10] }
    }
    __asm
    {
      vmovss  dword ptr [rdi+0D8h], xmm6
      vmovss  xmm6, dword ptr [rsi+0DCh]
    }
    if ( MSG_ReadBits(msg, 1u) )
    {
      v70 = MSG_ReadLong(msg);
      __asm { vmovss  xmm6, [rsp+88h+arg_10] }
    }
    __asm
    {
      vmovss  dword ptr [rdi+0DCh], xmm6
      vmovss  xmm6, dword ptr [rsi+0E0h]
    }
    if ( MSG_ReadBits(msg, 1u) )
    {
      v71 = MSG_ReadLong(msg);
      __asm { vmovss  xmm6, [rsp+88h+arg_10] }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0CCh]
      vmovss  [rsp+88h+arg_10], xmm0
      vmovss  dword ptr [rdi+0E0h], xmm6
    }
    if ( (v72 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 428, ASSERT_TYPE_SANITY, "( !IS_NAN( to->gunPitch ) )", (const char *)&queryFormat, "!IS_NAN( to->gunPitch )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0D0h]
      vmovss  [rsp+88h+arg_10], xmm0
    }
    if ( (v73 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 429, ASSERT_TYPE_SANITY, "( !IS_NAN( to->gunYaw ) )", (const char *)&queryFormat, "!IS_NAN( to->gunYaw )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0D4h]
      vmovss  [rsp+88h+arg_10], xmm0
    }
    if ( (v74 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 430, ASSERT_TYPE_SANITY, "( !IS_NAN( to->gunXOfs ) )", (const char *)&queryFormat, "!IS_NAN( to->gunXOfs )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0D8h]
      vmovss  [rsp+88h+arg_10], xmm0
    }
    if ( (v75 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 431, ASSERT_TYPE_SANITY, "( !IS_NAN( to->gunYOfs ) )", (const char *)&queryFormat, "!IS_NAN( to->gunYOfs )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0DCh]
      vmovss  [rsp+88h+arg_10], xmm0
    }
    if ( (v76 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 432, ASSERT_TYPE_SANITY, "( !IS_NAN( to->gunZOfs ) )", (const char *)&queryFormat, "!IS_NAN( to->gunZOfs )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0E0h]
      vmovss  [rsp+88h+arg_10], xmm0
    }
    if ( (v77 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 436, ASSERT_TYPE_SANITY, "( !IS_NAN( to->rollSensitivity ) )", (const char *)&queryFormat, "!IS_NAN( to->rollSensitivity )") )
      __debugbreak();
    meleeChargeEnt = _RSI->meleeChargeEnt;
    if ( MSG_ReadBits(msg, 1u) )
      meleeChargeEnt = MSG_ReadBits(msg, 0xBu);
    _RDI->meleeChargeEnt = meleeChargeEnt;
    scriptedMeleeTarget = _RSI->scriptedMeleeTarget;
    if ( MSG_ReadBits(msg, 1u) )
      scriptedMeleeTarget = MSG_ReadBits(msg, 0xBu);
    _RDI->scriptedMeleeTarget = scriptedMeleeTarget;
    packedControllerAim = _RSI->packedControllerAim;
    if ( MSG_ReadBits(msg, 1u) )
      packedControllerAim = MSG_ReadBits(msg, 8u);
    _RDI->packedControllerAim = packedControllerAim;
    v45 = _RSI->remoteControlAngles[0];
    if ( MSG_ReadBits(msg, 1u) )
      v45 = MSG_ReadBits(msg, 8u);
    _RDI->remoteControlAngles[0] = v45;
    v46 = _RSI->remoteControlAngles[1];
    if ( MSG_ReadBits(msg, 1u) )
      v46 = MSG_ReadBits(msg, 8u);
    _RDI->remoteControlAngles[1] = v46;
    v47 = _RSI->remoteControlMove[0];
    if ( MSG_ReadBits(msg, 1u) )
      v47 = MSG_ReadBits(msg, 8u);
    _RDI->remoteControlMove[0] = v47;
    v48 = _RSI->remoteControlMove[1];
    if ( MSG_ReadBits(msg, 1u) )
      v48 = MSG_ReadBits(msg, 8u);
    _RDI->remoteControlMove[1] = v48;
    v49 = _RSI->remoteControlMove[2];
    if ( MSG_ReadBits(msg, 1u) )
      v49 = MSG_ReadBits(msg, 8u);
    _RDI->remoteControlMove[2] = v49;
    v50 = MSG_ReadBit(msg);
    _RDI->lightSample.bValid = v50 != 0;
    if ( v50 )
      _RDI->lightSample.value = MSG_ReadBits(msg, 3u);
    v51 = _RSI->vehAngles[0];
    if ( MSG_ReadBits(msg, 1u) )
      v51 = MSG_ReadBits(msg, 0x14u);
    _RDI->vehAngles[0] = v51;
    v52 = _RSI->vehAngles[1];
    if ( MSG_ReadBits(msg, 1u) )
      v52 = MSG_ReadBits(msg, 0x14u);
    _RDI->vehAngles[1] = v52;
    v53 = _RSI->vehAngles[2];
    if ( MSG_ReadBits(msg, 1u) )
      v53 = MSG_ReadBits(msg, 0x14u);
    _RDI->vehAngles[2] = v53;
    __asm { vmovss  xmm6, dword ptr [rsi+0C0h] }
    if ( MSG_ReadBits(msg, 1u) )
    {
      v78 = MSG_ReadLong(msg);
      __asm { vmovss  xmm6, [rsp+88h+arg_10] }
    }
    __asm
    {
      vmovss  dword ptr [rdi+0C0h], xmm6
      vmovss  xmm6, dword ptr [rsi+0C4h]
    }
    if ( MSG_ReadBits(msg, 1u) )
    {
      v79 = MSG_ReadLong(msg);
      __asm { vmovss  xmm6, [rsp+88h+arg_10] }
    }
    __asm
    {
      vmovss  dword ptr [rdi+0C4h], xmm6
      vmovss  xmm6, dword ptr [rsi+0C8h]
    }
    if ( MSG_ReadBits(msg, 1u) )
    {
      v80 = MSG_ReadLong(msg);
      __asm { vmovss  xmm6, [rsp+88h+arg_10] }
    }
    __asm
    {
      vmovss  dword ptr [rdi+0C8h], xmm6
      vmovaps xmm6, [rsp+88h+var_18]
    }
  }
  else
  {
    _RDI->angles.v[0] = v11;
    _RDI->angles.v[1] = _RSI->angles.v[1];
    _RDI->angles.v[2] = _RSI->angles.v[2];
    _RDI->forwardmove = _RSI->forwardmove;
    _RDI->rightmove = _RSI->rightmove;
    _RDI->upmove = _RSI->upmove;
    _RDI->downmove = _RSI->downmove;
    _RDI->pitchmove = _RSI->pitchmove;
    _RDI->yawmove = _RSI->yawmove;
    _RDI->buttons = _RSI->buttons;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+24h]
      vmovups ymmword ptr [rdi+24h], ymm0
      vmovups xmm1, xmmword ptr [rsi+44h]
      vmovups xmmword ptr [rdi+44h], xmm1
      vmovsd  xmm0, qword ptr [rsi+54h]
      vmovsd  qword ptr [rdi+54h], xmm0
    }
    *(_DWORD *)&_RDI->weapon.weaponCamo = *(_DWORD *)&_RSI->weapon.weaponCamo;
    _RDI->isAlternate = _RSI->isAlternate;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+60h]
      vmovups ymmword ptr [rdi+60h], ymm0
      vmovups xmm1, xmmword ptr [rsi+80h]
      vmovups xmmword ptr [rdi+80h], xmm1
      vmovsd  xmm0, qword ptr [rsi+90h]
      vmovsd  qword ptr [rdi+90h], xmm0
    }
    *(_DWORD *)&_RDI->offHand.weaponCamo = *(_DWORD *)&_RSI->offHand.weaponCamo;
    _RDI->gunPitch = _RSI->gunPitch;
    _RDI->gunYaw = _RSI->gunYaw;
    _RDI->gunXOfs = _RSI->gunXOfs;
    _RDI->gunYOfs = _RSI->gunYOfs;
    _RDI->gunZOfs = _RSI->gunZOfs;
    _RDI->rollSensitivity = _RSI->rollSensitivity;
    _RDI->meleeChargeEnt = _RSI->meleeChargeEnt;
    _RDI->scriptedMeleeTarget = _RSI->scriptedMeleeTarget;
    _RDI->remoteControlAngles[0] = _RSI->remoteControlAngles[0];
    _RDI->remoteControlAngles[1] = _RSI->remoteControlAngles[1];
    _RDI->remoteControlMove[0] = _RSI->remoteControlMove[0];
    _RDI->remoteControlMove[1] = _RSI->remoteControlMove[1];
    _RDI->remoteControlMove[2] = _RSI->remoteControlMove[2];
    _RDI->lightSample.bValid = _RSI->lightSample.bValid;
    _RDI->lightSample.value = _RSI->lightSample.value;
    _RDI->vehAngles[0] = _RSI->vehAngles[0];
    _RDI->vehAngles[1] = _RSI->vehAngles[1];
    _RDI->vehAngles[2] = _RSI->vehAngles[2];
    _RDI->vehOrgX = _RSI->vehOrgX;
    _RDI->vehOrgY = _RSI->vehOrgY;
    _RDI->vehOrgZ = _RSI->vehOrgZ;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 519, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST ))", "%s\n\tNeed to transmit this if turned on", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST )") )
    __debugbreak();
  _RDI->airburstMarkDistance = 0;
  *(_QWORD *)_RDI->sightedClientsMask.data = 0i64;
  *(_QWORD *)&_RDI->sightedClientsMask.data[2] = 0i64;
  *(_QWORD *)&_RDI->sightedClientsMask.data[4] = 0i64;
  *(_QWORD *)&_RDI->sightedClientsMask.data[6] = 0i64;
}

/*
==============
MSG_WriteDeltaUsercmd
==============
*/
void MSG_WriteDeltaUsercmd(msg_t *msg, const usercmd_s *from, usercmd_s *to)
{
  int v7; 
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
  bool v22; 
  msg_t *v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned int v26; 
  msg_t *v27; 
  __int64 v28; 
  __int64 v29; 
  unsigned int v30; 
  msg_t *v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned int v34; 
  msg_t *v35; 
  __int64 forwardmove; 
  __int64 v37; 
  unsigned int v38; 
  msg_t *v39; 
  __int64 rightmove; 
  __int64 v41; 
  unsigned int v42; 
  msg_t *v43; 
  __int64 upmove; 
  __int64 v45; 
  unsigned int v46; 
  msg_t *v47; 
  __int64 downmove; 
  __int64 v49; 
  unsigned int v50; 
  msg_t *v51; 
  __int64 pitchmove; 
  __int64 v53; 
  unsigned int v54; 
  msg_t *v55; 
  __int64 yawmove; 
  __int64 v57; 
  unsigned int v58; 
  unsigned __int64 v59; 
  __int64 v60; 
  msg_t *v61; 
  __int64 v62; 
  unsigned int v63; 
  char v65; 
  char v67; 
  char v69; 
  char v71; 
  char v73; 
  __int64 v75; 
  msg_t *v76; 
  __int64 v77; 
  unsigned int v78; 
  msg_t *v79; 
  __int64 v80; 
  __int64 v81; 
  unsigned int v82; 
  msg_t *v83; 
  __int64 packedControllerAim; 
  __int64 v85; 
  unsigned int v86; 
  msg_t *v87; 
  __int64 v88; 
  __int64 v89; 
  unsigned int v90; 
  msg_t *v91; 
  __int64 v92; 
  __int64 v93; 
  unsigned int v94; 
  msg_t *v95; 
  __int64 v96; 
  __int64 v97; 
  unsigned int v98; 
  msg_t *v99; 
  __int64 v100; 
  __int64 v101; 
  unsigned int v102; 
  msg_t *v103; 
  __int64 v104; 
  __int64 v105; 
  unsigned int v106; 
  __int64 v107; 
  msg_t *v108; 
  __int64 v109; 
  unsigned int v110; 
  msg_t *v111; 
  __int64 v112; 
  __int64 v113; 
  unsigned int v114; 
  msg_t *v115; 
  __int64 v116; 
  __int64 v117; 
  unsigned int v118; 
  char v121; 
  char v124; 
  int v128; 
  int serverTime; 
  unsigned __int16 meleeChargeEnt; 
  __int16 v131; 
  __int16 scriptedMeleeTarget; 
  UserCommandStateFlags v133; 
  UserCommandStateFlags stateFlags; 
  unsigned __int64 v135; 
  unsigned __int64 buttons; 
  float *p_vehOrgX; 
  float *p_vehOrgY; 
  float *p_vehOrgZ; 
  char value; 
  int valuea; 
  int valueb; 
  int valuec; 
  int valued; 
  int valuee; 
  int valuef; 
  int valueg; 
  int valueh; 
  int valuei; 
  bool v151; 
  unsigned __int16 v152; 

  _RDI = to;
  _RSI = from;
  if ( (unsigned int)(to->commandTime - from->commandTime) >= 0x100 )
  {
    MSG_WriteBit0(msg);
    MSG_WriteLong(msg, _RDI->commandTime);
  }
  else
  {
    MSG_WriteBit1(msg);
    MSG_WriteByte(msg, _RDI->commandTime - _RSI->commandTime);
  }
  v7 = _RDI->serverTime - _RSI->serverTime;
  if ( v7 >= 256 )
  {
    MSG_WriteBit0(msg);
    MSG_WriteLong(msg, _RDI->serverTime);
  }
  else
  {
    if ( v7 < 0 )
    {
      serverTime = _RSI->serverTime;
      v128 = _RDI->serverTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\msg_sp.cpp", 253, ASSERT_TYPE_ASSERT, "(to->serverTime - from->serverTime >= 0)", "%s\n\t%i - %i >= 0\n", "to->serverTime - from->serverTime >= 0", v128, serverTime) )
        __debugbreak();
    }
    MSG_WriteBit1(msg);
    MSG_WriteByte(msg, _RDI->serverTime - _RSI->serverTime);
  }
  if ( _RDI->inputTime - _RSI->inputTime >= 256 )
  {
    MSG_WriteBit0(msg);
    MSG_WriteLong(msg, _RDI->inputTime);
  }
  else
  {
    MSG_WriteBit1(msg);
    MSG_WriteByte(msg, _RDI->inputTime - _RSI->inputTime);
  }
  v8 = _RSI->angles.v[0] == _RDI->angles.v[0] && _RSI->angles.v[1] == _RDI->angles.v[1] && _RSI->angles.v[2] == _RDI->angles.v[2];
  v9 = _RSI->forwardmove == _RDI->forwardmove && _RSI->rightmove == _RDI->rightmove && _RSI->upmove == _RDI->upmove && _RSI->downmove == _RDI->downmove && _RSI->pitchmove == _RDI->pitchmove && _RSI->yawmove == _RDI->yawmove;
  buttons = _RSI->buttons;
  v135 = _RDI->buttons;
  stateFlags = _RSI->stateFlags;
  v133 = _RDI->stateFlags;
  if ( memcmp_0(&_RSI->weapon, &_RDI->weapon, 0x3Cui64) || memcmp_0(&_RSI->offHand, &_RDI->offHand, 0x3Cui64) || (value = 1, _RSI->isAlternate != _RDI->isAlternate) )
    value = 0;
  v10 = MSG_AreFloatsEqual(&_RSI->gunPitch, &_RDI->gunPitch);
  v11 = MSG_AreFloatsEqual(&_RSI->gunYaw, &_RDI->gunYaw) && v10;
  v12 = MSG_AreFloatsEqual(&_RSI->gunXOfs, &_RDI->gunXOfs) && v11;
  v13 = MSG_AreFloatsEqual(&_RSI->gunYOfs, &_RDI->gunYOfs) && v12;
  v14 = MSG_AreFloatsEqual(&_RSI->gunZOfs, &_RDI->gunZOfs) && v13;
  v15 = _RSI->remoteControlAngles[0] == _RDI->remoteControlAngles[0] && _RSI->remoteControlAngles[1] == _RDI->remoteControlAngles[1];
  v16 = _RSI->remoteControlMove[0] == _RDI->remoteControlMove[0] && _RSI->remoteControlMove[1] == _RDI->remoteControlMove[1] && _RSI->remoteControlMove[2] == _RDI->remoteControlMove[2];
  v17 = v16 && v15;
  meleeChargeEnt = _RSI->meleeChargeEnt;
  v152 = _RDI->meleeChargeEnt;
  scriptedMeleeTarget = _RSI->scriptedMeleeTarget;
  v131 = _RDI->scriptedMeleeTarget;
  v18 = _RSI->vehAngles[0] == _RDI->vehAngles[0] && _RSI->vehAngles[1] == _RDI->vehAngles[1] && _RSI->vehAngles[2] == _RDI->vehAngles[2];
  p_vehOrgX = &_RDI->vehOrgX;
  v19 = MSG_AreFloatsEqual(&_RSI->vehOrgX, &_RDI->vehOrgX) && v18;
  p_vehOrgY = &_RDI->vehOrgY;
  v20 = MSG_AreFloatsEqual(&_RSI->vehOrgY, &_RDI->vehOrgY) && v19;
  p_vehOrgZ = &_RDI->vehOrgZ;
  v21 = MSG_AreFloatsEqual(&_RSI->vehOrgZ, &_RDI->vehOrgZ) && v20;
  v151 = MSG_AreFloatsEqual(&_RSI->rollSensitivity, &_RDI->rollSensitivity);
  v22 = !CG_LightSampler_DataChanged(_RSI, _RDI);
  if ( v8 && v9 && buttons == v135 && stateFlags == v133 && value && v14 && meleeChargeEnt == v152 && scriptedMeleeTarget == v131 && v17 && v151 && v22 && v21 )
  {
    MSG_WriteBit0(msg);
  }
  else
  {
    __asm { vmovaps [rsp+0C8h+var_48], xmm6 }
    MSG_WriteBit1(msg);
    v23 = msg;
    v24 = _RDI->angles.v[0];
    if ( _RSI->angles.v[0] == v24 )
    {
      v25 = 0i64;
      v26 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v26 = 20;
      v25 = v24;
      v23 = msg;
    }
    MSG_WriteBits(v23, v25, v26);
    v27 = msg;
    v28 = _RDI->angles.v[1];
    if ( _RSI->angles.v[1] == v28 )
    {
      v29 = 0i64;
      v30 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v30 = 20;
      v29 = v28;
      v27 = msg;
    }
    MSG_WriteBits(v27, v29, v30);
    v31 = msg;
    v32 = _RDI->angles.v[2];
    if ( _RSI->angles.v[2] == v32 )
    {
      v33 = 0i64;
      v34 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v34 = 20;
      v33 = v32;
      v31 = msg;
    }
    MSG_WriteBits(v31, v33, v34);
    v35 = msg;
    forwardmove = _RDI->forwardmove;
    if ( _RSI->forwardmove == forwardmove )
    {
      v37 = 0i64;
      v38 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v38 = 8;
      v37 = forwardmove;
      v35 = msg;
    }
    MSG_WriteBits(v35, v37, v38);
    v39 = msg;
    rightmove = _RDI->rightmove;
    if ( _RSI->rightmove == rightmove )
    {
      v41 = 0i64;
      v42 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v42 = 8;
      v41 = rightmove;
      v39 = msg;
    }
    MSG_WriteBits(v39, v41, v42);
    v43 = msg;
    upmove = _RDI->upmove;
    if ( _RSI->upmove == upmove )
    {
      v45 = 0i64;
      v46 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v46 = 7;
      v45 = upmove;
      v43 = msg;
    }
    MSG_WriteBits(v43, v45, v46);
    v47 = msg;
    downmove = _RDI->downmove;
    if ( _RSI->downmove == downmove )
    {
      v49 = 0i64;
      v50 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v50 = 7;
      v49 = downmove;
      v47 = msg;
    }
    MSG_WriteBits(v47, v49, v50);
    v51 = msg;
    pitchmove = _RDI->pitchmove;
    if ( _RSI->pitchmove == pitchmove )
    {
      v53 = 0i64;
      v54 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v54 = 8;
      v53 = pitchmove;
      v51 = msg;
    }
    MSG_WriteBits(v51, v53, v54);
    v55 = msg;
    yawmove = _RDI->yawmove;
    if ( _RSI->yawmove == yawmove )
    {
      v57 = 0i64;
      v58 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v58 = 8;
      v57 = yawmove;
      v55 = msg;
    }
    MSG_WriteBits(v55, v57, v58);
    v59 = _RDI->buttons;
    if ( _RSI->buttons == _RDI->buttons )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteInt64(msg, v59);
    }
    v60 = (unsigned int)_RDI->stateFlags;
    v61 = msg;
    if ( _RSI->stateFlags == v60 )
    {
      v62 = 0i64;
      v63 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v63 = 5;
      v62 = v60;
      v61 = msg;
    }
    MSG_WriteBits(v61, v62, v63);
    MSG_WriteDeltaPrimaryWeapon(msg, &_RSI->weapon, _RSI->isAlternate, &_RDI->weapon, _RDI->isAlternate);
    MSG_WriteDeltaWeapon(msg, &_RSI->offHand, &_RDI->offHand);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+0CCh]
      vucomiss xmm6, dword ptr [rsi+0CCh]
      vmovss  [rsp+0C8h+value], xmm6
    }
    if ( v65 )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valuea);
    }
    __asm
    {
      vmovss  dword ptr [rdi+0CCh], xmm6
      vmovss  xmm6, dword ptr [rdi+0D0h]
      vucomiss xmm6, dword ptr [rsi+0D0h]
      vmovss  [rsp+0C8h+value], xmm6
    }
    if ( v65 )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valueb);
    }
    __asm
    {
      vmovss  dword ptr [rdi+0D0h], xmm6
      vmovss  xmm6, dword ptr [rdi+0D4h]
      vucomiss xmm6, dword ptr [rsi+0D4h]
      vmovss  [rsp+0C8h+value], xmm6
    }
    if ( v67 )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valuec);
    }
    __asm
    {
      vmovss  dword ptr [rdi+0D4h], xmm6
      vmovss  xmm6, dword ptr [rdi+0D8h]
      vucomiss xmm6, dword ptr [rsi+0D8h]
      vmovss  [rsp+0C8h+value], xmm6
    }
    if ( v69 )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valued);
    }
    __asm
    {
      vmovss  dword ptr [rdi+0D8h], xmm6
      vmovss  xmm6, dword ptr [rdi+0DCh]
      vucomiss xmm6, dword ptr [rsi+0DCh]
      vmovss  [rsp+0C8h+value], xmm6
    }
    if ( v71 )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valuee);
    }
    __asm
    {
      vmovss  dword ptr [rdi+0DCh], xmm6
      vmovss  xmm6, dword ptr [rdi+0E0h]
      vucomiss xmm6, dword ptr [rsi+0E0h]
      vmovss  [rsp+0C8h+value], xmm6
    }
    if ( v73 )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valuef);
    }
    v75 = _RDI->meleeChargeEnt;
    v76 = msg;
    __asm { vmovss  dword ptr [rdi+0E0h], xmm6 }
    if ( _RSI->meleeChargeEnt == v75 )
    {
      v77 = 0i64;
      v78 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v78 = 11;
      v77 = v75;
      v76 = msg;
    }
    MSG_WriteBits(v76, v77, v78);
    v79 = msg;
    v80 = _RDI->scriptedMeleeTarget;
    if ( _RSI->scriptedMeleeTarget == v80 )
    {
      v81 = 0i64;
      v82 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v82 = 11;
      v81 = v80;
      v79 = msg;
    }
    MSG_WriteBits(v79, v81, v82);
    v83 = msg;
    packedControllerAim = _RDI->packedControllerAim;
    if ( _RSI->packedControllerAim == packedControllerAim )
    {
      v85 = 0i64;
      v86 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v86 = 8;
      v85 = packedControllerAim;
      v83 = msg;
    }
    MSG_WriteBits(v83, v85, v86);
    v87 = msg;
    v88 = _RDI->remoteControlAngles[0];
    if ( _RSI->remoteControlAngles[0] == v88 )
    {
      v89 = 0i64;
      v90 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v90 = 8;
      v89 = v88;
      v87 = msg;
    }
    MSG_WriteBits(v87, v89, v90);
    v91 = msg;
    v92 = _RDI->remoteControlAngles[1];
    if ( _RSI->remoteControlAngles[1] == v92 )
    {
      v93 = 0i64;
      v94 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v94 = 8;
      v93 = v92;
      v91 = msg;
    }
    MSG_WriteBits(v91, v93, v94);
    v95 = msg;
    v96 = _RDI->remoteControlMove[0];
    if ( _RSI->remoteControlMove[0] == v96 )
    {
      v97 = 0i64;
      v98 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v98 = 8;
      v97 = v96;
      v95 = msg;
    }
    MSG_WriteBits(v95, v97, v98);
    v99 = msg;
    v100 = _RDI->remoteControlMove[1];
    if ( _RSI->remoteControlMove[1] == v100 )
    {
      v101 = 0i64;
      v102 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v102 = 8;
      v101 = v100;
      v99 = msg;
    }
    MSG_WriteBits(v99, v101, v102);
    v103 = msg;
    v104 = _RDI->remoteControlMove[2];
    if ( _RSI->remoteControlMove[2] == v104 )
    {
      v105 = 0i64;
      v106 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v106 = 8;
      v105 = v104;
      v103 = msg;
    }
    MSG_WriteBits(v103, v105, v106);
    if ( _RDI->lightSample.bValid )
    {
      MSG_WriteBit1(msg);
      MSG_WriteBits(msg, _RDI->lightSample.value, 3u);
    }
    else
    {
      MSG_WriteBit0(msg);
    }
    v107 = _RDI->vehAngles[0];
    v108 = msg;
    if ( _RSI->vehAngles[0] == v107 )
    {
      v109 = 0i64;
      v110 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v110 = 20;
      v109 = v107;
      v108 = msg;
    }
    MSG_WriteBits(v108, v109, v110);
    v111 = msg;
    v112 = _RDI->vehAngles[1];
    if ( _RSI->vehAngles[1] == v112 )
    {
      v113 = 0i64;
      v114 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v114 = 20;
      v113 = v112;
      v111 = msg;
    }
    MSG_WriteBits(v111, v113, v114);
    v115 = msg;
    v116 = _RDI->vehAngles[2];
    if ( _RSI->vehAngles[2] == v116 )
    {
      v117 = 0i64;
      v118 = 1;
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      v118 = 20;
      v117 = v116;
      v115 = msg;
    }
    MSG_WriteBits(v115, v117, v118);
    _RDI = p_vehOrgX;
    __asm
    {
      vmovss  xmm6, dword ptr [rdi]
      vucomiss xmm6, dword ptr [rsi+0C0h]
      vmovss  [rsp+0C8h+value], xmm6
    }
    if ( v65 )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valueg);
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    _RDI = p_vehOrgY;
    __asm
    {
      vmovss  xmm6, dword ptr [rdi]
      vucomiss xmm6, dword ptr [rsi+0C4h]
      vmovss  [rsp+0C8h+value], xmm6
    }
    if ( v121 )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valueh);
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    _RDI = p_vehOrgZ;
    __asm
    {
      vmovss  xmm6, dword ptr [rdi]
      vucomiss xmm6, dword ptr [rsi+0C8h]
      vmovss  [rsp+0C8h+value], xmm6
    }
    if ( v124 )
    {
      MSG_WriteBits(msg, 0i64, 1u);
    }
    else
    {
      MSG_WriteBits(msg, 1i64, 1u);
      MSG_WriteLong(msg, valuei);
    }
    __asm
    {
      vmovss  dword ptr [rdi], xmm6
      vmovaps xmm6, [rsp+0C8h+var_48]
    }
  }
}

