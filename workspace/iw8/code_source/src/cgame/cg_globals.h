/*
==============
CG_GetClientNum
==============
*/

int __fastcall CG_GetClientNum(const LocalClientNum_t localClientNum)
{
  return ?CG_GetClientNum@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetLocalClientTime
==============
*/

int __fastcall CG_GetLocalClientTime(const LocalClientNum_t localClientNum)
{
  return ?CG_GetLocalClientTime@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetPredictedPlayerState
==============
*/

playerState_s *__fastcall CG_GetPredictedPlayerState(const LocalClientNum_t localClientNum)
{
  return ?CG_GetPredictedPlayerState@@YAPEAUplayerState_s@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
cg_t::GetViewModelHand
==============
*/

const WeaponHand *__fastcall cg_t::GetViewModelHand(cg_t *this, const PlayerHandIndex handIndex)
{
  return ?GetViewModelHand@cg_t@@QEBAPEBUWeaponHand@@W4PlayerHandIndex@@@Z(this, handIndex);
}

/*
==============
CG_GetLocalClientGlobals
==============
*/

cg_t *__fastcall CG_GetLocalClientGlobals(const LocalClientNum_t localClientNum)
{
  return ?CG_GetLocalClientGlobals@@YAPEAVcg_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
cg_t::GetViewModelHand
==============
*/

WeaponHand *__fastcall cg_t::GetViewModelHand(cg_t *this, const PlayerHandIndex handIndex)
{
  return ?GetViewModelHand@cg_t@@QEAAPEAUWeaponHand@@W4PlayerHandIndex@@@Z(this, handIndex);
}

/*
==============
cg_tDummy::~cg_tDummy
==============
*/

void __fastcall cg_tDummy::~cg_tDummy(cg_tDummy *this)
{
  ??1cg_tDummy@@UEAA@XZ(this);
}

/*
==============
cg_t::SetInvalidStanceHint
==============
*/

void __fastcall cg_t::SetInvalidStanceHint(cg_t *this, stance_event_params_t type, const Weapon *weapon)
{
  ?SetInvalidStanceHint@cg_t@@QEAAXW4stance_event_params_t@@AEBUWeapon@@@Z(this, type, weapon);
}

/*
==============
CG_GetLocalClientGlobals
==============
*/
cg_t *CG_GetLocalClientGlobals(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    v5 = cg_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v4) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v4) )
      __debugbreak();
  }
  return cg_t::ms_cgArray[v1];
}

/*
==============
CG_GetLocalClientTime
==============
*/
__int64 CG_GetLocalClientTime(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    v5 = cg_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v4) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v4) )
      __debugbreak();
  }
  return (unsigned int)cg_t::ms_cgArray[v1]->time;
}

/*
==============
cg_t::GetViewModelHand
==============
*/
WeaponHand *cg_t::GetViewModelHand(cg_t *this, const PlayerHandIndex handIndex)
{
  __int64 v2; 
  int v6; 

  v2 = handIndex;
  if ( (unsigned int)handIndex >= NUM_WEAPON_HANDS )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", handIndex, v6) )
      __debugbreak();
  }
  return &this->m_weaponHand[v2];
}

/*
==============
cg_tDummy::~cg_tDummy
==============
*/
void cg_tDummy::~cg_tDummy(cg_tDummy *this)
{
  this->__vftable = (cg_tDummy_vtbl *)&cg_tDummy::`vftable';
}

/*
==============
cg_t::GetViewModelHand
==============
*/
WeaponHand *cg_t::GetViewModelHand(cg_t *this, const PlayerHandIndex handIndex)
{
  __int64 v2; 
  int v6; 

  v2 = handIndex;
  if ( (unsigned int)handIndex >= NUM_WEAPON_HANDS )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", handIndex, v6) )
      __debugbreak();
  }
  return &this->m_weaponHand[v2];
}

/*
==============
cg_t::SetInvalidStanceHint
==============
*/
void cg_t::SetInvalidStanceHint(cg_t *this, stance_event_params_t type, const Weapon *weapon)
{
  _RDI = weapon;
  _RBX = this;
  switch ( type )
  {
    case STANCE_EVENT_PARAM_INVALID_STAND_HINT:
      if ( this->invalidCmdHintType != INVALID_CMD_STAND_BLOCKED )
      {
        this->invalidCmdHintTime = this->time;
        this->invalidCmdHintType = INVALID_CMD_STAND_BLOCKED;
      }
      break;
    case STANCE_EVENT_PARAM_INVALID_CROUCH_HINT:
      if ( this->invalidCmdHintType != INVALID_CMD_CROUCH_BLOCKED )
      {
        this->invalidCmdHintTime = this->time;
        this->invalidCmdHintType = INVALID_CMD_CROUCH_BLOCKED;
      }
      break;
    case STANCE_EVENT_PARAM_INVALID_PRONE_HINT:
      if ( this->invalidCmdHintType != INVALID_CMD_PRONE_BLOCKED )
      {
        this->invalidCmdHintTime = this->time;
        this->invalidCmdHintType = INVALID_CMD_PRONE_BLOCKED;
      }
      break;
    case STANCE_EVENT_PARAM_INVALID_TURRET_HINT:
      if ( this->invalidCmdHintType != INVALID_CMD_TURRET_BLOCKED )
      {
        this->invalidCmdHintTime = this->time;
        this->invalidCmdHintType = INVALID_CMD_TURRET_BLOCKED;
      }
      break;
    default:
      if ( (type & 0xFFFFFFFA) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1249, ASSERT_TYPE_ASSERT, "((type == STANCE_EVENT_PARAM_NO_HINT) || (type == STANCE_EVENT_PARAM_GROUND_POUND) || (type == STANCE_EVENT_PARAM_KEEP_HELD))", (const char *)&queryFormat, "(type == STANCE_EVENT_PARAM_NO_HINT) || (type == STANCE_EVENT_PARAM_GROUND_POUND) || (type == STANCE_EVENT_PARAM_KEEP_HELD)") )
        __debugbreak();
      break;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx+180BCh], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbx+180DCh], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rbx+180ECh], xmm0
  }
  *(_DWORD *)&_RBX->invalidCmdHintWeapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
}

/*
==============
CG_GetPredictedPlayerState
==============
*/
playerState_s *CG_GetPredictedPlayerState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    v5 = cg_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v4) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v4) )
      __debugbreak();
  }
  return &cg_t::ms_cgArray[v1]->predictedPlayerState;
}

/*
==============
CG_GetClientNum
==============
*/
__int64 CG_GetClientNum(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    v5 = cg_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v4) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v4) )
      __debugbreak();
  }
  return (unsigned int)cg_t::ms_cgArray[v1]->clientNum;
}

