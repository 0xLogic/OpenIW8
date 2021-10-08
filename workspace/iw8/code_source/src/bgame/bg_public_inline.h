/*
==============
BG_CalcMeleeAimPos
==============
*/

int __fastcall BG_CalcMeleeAimPos(const BgHandler *handler, const playerState_s *ps, const BgWeaponMap *weaponMap, const int entIndex, vec3_t *outAimPos)
{
  return ?BG_CalcMeleeAimPos@@YAHPEBVBgHandler@@PEBUplayerState_s@@PEBVBgWeaponMap@@HAEATvec3_t@@@Z(handler, ps, weaponMap, entIndex, outAimPos);
}

/*
==============
BG_GetEntityWorldTagPosition
==============
*/

int __fastcall BG_GetEntityWorldTagPosition(const BgHandler *bgHandler, const int entIndex, scr_string_t tagName, vec3_t *outPosition)
{
  return ?BG_GetEntityWorldTagPosition@@YAHPEBVBgHandler@@HW4scr_string_t@@AEATvec3_t@@@Z(bgHandler, entIndex, tagName, outPosition);
}

/*
==============
BG_GetEntityState
==============
*/

const entityState_t *__fastcall BG_GetEntityState(const BgHandler *bgHandler, int entIndex)
{
  return ?BG_GetEntityState@@YAPEBUentityState_t@@PEBVBgHandler@@H@Z(bgHandler, entIndex);
}

/*
==============
BG_GetEntityState
==============
*/
const entityState_t *BG_GetEntityState(const BgHandler *bgHandler, int entIndex)
{
  const entityState_t *result; 

  if ( !bgHandler->IsClient((BgHandler *)bgHandler) )
    return GHandler::GetEntityState((GHandler *)bgHandler, entIndex);
  result = (const entityState_t *)CG_GetEntity((const LocalClientNum_t)LODWORD(bgHandler[1].__vftable), entIndex);
  if ( result )
    return (const entityState_t *)((char *)result + 400);
  return result;
}

/*
==============
BG_CalcMeleeAimPos
==============
*/
int BG_CalcMeleeAimPos(const BgHandler *handler, const playerState_s *ps, const BgWeaponMap *weaponMap, const int entIndex, vec3_t *outAimPos)
{
  bool v9; 
  bool v10; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  unsigned int eType; 
  int v14; 

  v9 = ps && BG_IsPlayerZeroG(ps);
  v10 = ps && BG_IsThirdPersonMode(weaponMap, ps);
  if ( handler->IsClient((BgHandler *)handler) )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(handler[1].__vftable), entIndex);
    if ( Entity )
      p_nextState = &Entity->nextState;
    else
      p_nextState = NULL;
  }
  else
  {
    p_nextState = GHandler::GetEntityState((GHandler *)handler, entIndex);
  }
  if ( !p_nextState )
    return 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
  {
    if ( !BG_IsCharacterEntity(p_nextState) )
    {
      eType = (unsigned __int16)p_nextState->eType;
      if ( (unsigned __int16)eType > 0x15u )
        return 0;
      v14 = 2359300;
      if ( !_bittest(&v14, eType) )
        return 0;
    }
  }
  else if ( p_nextState->eType != ET_ACTOR )
  {
    return 0;
  }
  if ( v9 && BG_GetEntityWorldTagPosition(handler, entIndex, scr_const.j_spinelower, outAimPos) || !v10 && BG_GetEntityWorldTagPosition(handler, entIndex, scr_const.j_neck, outAimPos) )
    return 1;
  else
    return BG_GetEntityWorldTagPosition(handler, entIndex, scr_const.j_spine4, outAimPos);
}

/*
==============
BG_GetEntityWorldTagPosition
==============
*/
int BG_GetEntityWorldTagPosition(const BgHandler *bgHandler, const int entIndex, scr_string_t tagName, vec3_t *outPosition)
{
  centity_t *Entity; 
  const cpose_t *p_pose; 
  const DObj *ClientDObj; 

  if ( !bgHandler->IsClient((BgHandler *)bgHandler) )
    return GHandler::GetEntityWorldTagPosition((GHandler *)bgHandler, entIndex, tagName, outPosition);
  Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(bgHandler[1].__vftable), entIndex);
  p_pose = &Entity->pose;
  if ( Entity )
  {
    if ( (Entity->flags & 1) != 0 )
    {
      ClientDObj = Com_GetClientDObj(Entity->nextState.number, (LocalClientNum_t)LODWORD(bgHandler[1].__vftable));
      if ( ClientDObj )
        return CG_DObjGetWorldTagPos(p_pose, ClientDObj, tagName, outPosition);
    }
    CG_GetPoseOrigin(p_pose, outPosition);
  }
  return 0;
}

