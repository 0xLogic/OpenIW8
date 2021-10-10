/*
==============
CG_DrawMP_CanSeePlayer_Helper
==============
*/

bool __fastcall CG_DrawMP_CanSeePlayer_Helper(LocalClientNum_t localClientNum, const centity_t *cent, const cg_t *cgameGlob, const playerState_s *ps, const vec3_t *start, const vec3_t *end, const int contentsMask)
{
  return ?CG_DrawMP_CanSeePlayer_Helper@@YA_NW4LocalClientNum_t@@PEBUcentity_t@@PEBVcg_t@@PEBUplayerState_s@@AEBTvec3_t@@4H@Z(localClientNum, cent, cgameGlob, ps, start, end, contentsMask);
}

/*
==============
CG_DrawMP_CanSeePlayer
==============
*/

bool __fastcall CG_DrawMP_CanSeePlayer(LocalClientNum_t localClientNum, const centity_t *cent, const int contentsMask)
{
  return ?CG_DrawMP_CanSeePlayer@@YA_NW4LocalClientNum_t@@PEBUcentity_t@@H@Z(localClientNum, cent, contentsMask);
}

/*
==============
CG_DrawMP_CanSeePlayer
==============
*/
__int64 CG_DrawMP_CanSeePlayer(LocalClientNum_t localClientNum, const centity_t *cent, const int contentsMask)
{
  cg_t *LocalClientGlobals; 
  const DObj *ClientDObj; 
  unsigned __int8 v8; 
  vec3_t outOrg; 
  vec3_t outOrigin; 
  __int64 v12; 
  vec3_t outPos; 

  v12 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( ClientDObj )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    if ( (float)((float)((float)((float)(outOrigin.v[1] - outOrg.v[1]) * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + (float)((float)(outOrigin.v[0] - outOrg.v[0]) * LocalClientGlobals->refdef.view.axis.m[0].v[0])) + (float)((float)(outOrigin.v[2] - outOrg.v[2]) * LocalClientGlobals->refdef.view.axis.m[0].v[2])) < 0.0 )
      goto LABEL_11;
    if ( !CG_DObjGetWorldTagPos(&cent->pose, ClientDObj, scr_const.j_head, &outPos) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EB270, 874i64);
    if ( CG_DrawMP_CanSeePlayer_Helper(localClientNum, cent, LocalClientGlobals, &LocalClientGlobals->predictedPlayerState, &outOrg, &outPos, contentsMask) )
      goto LABEL_10;
    if ( !CG_DObjGetWorldTagPos(&cent->pose, ClientDObj, scr_const.j_mainroot, &outPos) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EB2D0, 875i64);
    if ( CG_DrawMP_CanSeePlayer_Helper(localClientNum, cent, LocalClientGlobals, &LocalClientGlobals->predictedPlayerState, &outOrg, &outPos, contentsMask) )
LABEL_10:
      v8 = 1;
    else
LABEL_11:
      v8 = 0;
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    v8 = 0;
  }
  memset(&outOrg, 0, sizeof(outOrg));
  return v8;
}

/*
==============
CG_DrawMP_CanSeePlayer_Helper
==============
*/
bool CG_DrawMP_CanSeePlayer_Helper(LocalClientNum_t localClientNum, const centity_t *cent, const cg_t *cgameGlob, const playerState_s *ps, const vec3_t *start, const vec3_t *end, const int contentsMask)
{
  unsigned __int16 EntityHitId; 
  float v10; 
  float v11; 
  double ClientVisibility; 
  bool result; 
  vec3_t v14; 
  trace_t results; 

  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, start, end, &bounds_origin, ps->clientNum, 0, contentsMask, 1, NULL, All);
  EntityHitId = Trace_GetEntityHitId(&results);
  result = 0;
  if ( EntityHitId == 2047 || EntityHitId == cent->nextState.clientNum )
  {
    v10 = end->v[1];
    v14.v[0] = (float)((float)(end->v[0] - start->v[0]) * results.fraction) + start->v[0];
    v11 = (float)(end->v[2] - start->v[2]) * results.fraction;
    v14.v[1] = (float)((float)(v10 - start->v[1]) * results.fraction) + start->v[1];
    v14.v[2] = v11 + start->v[2];
    ClientVisibility = FX_GetClientVisibility(localClientNum, start, &v14);
    if ( *(float *)&ClientVisibility >= 0.000099999997 )
      return 1;
  }
  return result;
}

