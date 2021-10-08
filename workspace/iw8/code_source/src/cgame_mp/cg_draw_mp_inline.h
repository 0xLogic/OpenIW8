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
  char v21; 
  vec3_t outOrg; 
  vec3_t outOrigin; 
  __int64 v25; 
  vec3_t outPos; 

  v25 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( ClientDObj )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+outOrigin]
      vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+outOrg]
      vmovss  xmm1, dword ptr [rsp+0A8h+outOrigin+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+0A8h+outOrg+4]
      vmovss  xmm0, dword ptr [rsp+0A8h+outOrigin+8]
      vsubss  xmm3, xmm0, dword ptr [rsp+0A8h+outOrg+8]
      vmulss  xmm1, xmm2, dword ptr [rbx+6948h]
      vmulss  xmm0, xmm4, dword ptr [rbx+6944h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rbx+694Ch]
      vaddss  xmm2, xmm2, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
    }
    if ( v21 )
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
  char v24; 
  vec3_t v26; 
  trace_t results; 

  _RSI = end;
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, start, end, &bounds_origin, ps->clientNum, 0, contentsMask, 1, NULL, All);
  EntityHitId = Trace_GetEntityHitId(&results);
  if ( EntityHitId != 2047 && EntityHitId != cent->nextState.clientNum )
    return 0;
  __asm
  {
    vmovss  xmm5, [rsp+0F8h+results.fraction]
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm0, xmm1, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+0F8h+var_98], xmm0
    vsubss  xmm0, xmm1, dword ptr [rdi+4]
    vmulss  xmm2, xmm0, xmm5
    vaddss  xmm3, xmm2, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm1, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rsp+0F8h+var_98+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+0F8h+var_98+8], xmm3
  }
  *(double *)&_XMM0 = FX_GetClientVisibility(localClientNum, start, &v26);
  __asm { vcomiss xmm0, cs:__real@38d1b717 }
  return !v24;
}

