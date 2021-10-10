/*
==============
CG_Rumble_IsBroadcastRumble
==============
*/

bool __fastcall CG_Rumble_IsBroadcastRumble(const RumbleInfo *rumble)
{
  return ?CG_Rumble_IsBroadcastRumble@@YA_NPEBURumbleInfo@@@Z(rumble);
}

/*
==============
CG_Rumble_DrawActiveRumble
==============
*/

void __fastcall CG_Rumble_DrawActiveRumble(const LocalClientNum_t localClientNum, const ActiveRumble *ar, vec3_t *outDebugStrPos)
{
  ?CG_Rumble_DrawActiveRumble@@YAXW4LocalClientNum_t@@PEBUActiveRumble@@AEATvec3_t@@@Z(localClientNum, ar, outDebugStrPos);
}

/*
==============
CG_Rumble_StopDeferred
==============
*/

void __fastcall CG_Rumble_StopDeferred(LocalClientNum_t localClientNum, const RumbleInfo *rumble, const int entityNum)
{
  ?CG_Rumble_StopDeferred@@YAXW4LocalClientNum_t@@PEBURumbleInfo@@H@Z(localClientNum, rumble, entityNum);
}

/*
==============
CG_Rumble_PlayLoopOnClientSafeNoEntFlag
==============
*/

void __fastcall CG_Rumble_PlayLoopOnClientSafeNoEntFlag(LocalClientNum_t localClientNum, const RumbleInfo *rumble)
{
  ?CG_Rumble_PlayLoopOnClientSafeNoEntFlag@@YAXW4LocalClientNum_t@@PEBURumbleInfo@@@Z(localClientNum, rumble);
}

/*
==============
CG_Rumble_PlayOnClient
==============
*/

void __fastcall CG_Rumble_PlayOnClient(LocalClientNum_t localClientNum, const RumbleInfo *rumble)
{
  ?CG_Rumble_PlayOnClient@@YAXW4LocalClientNum_t@@PEBURumbleInfo@@@Z(localClientNum, rumble);
}

/*
==============
CG_Rumble_ProcessDeferred
==============
*/

void __fastcall CG_Rumble_ProcessDeferred(LocalClientNum_t localClientNum)
{
  ?CG_Rumble_ProcessDeferred@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Rumble_StopAll
==============
*/

void __fastcall CG_Rumble_StopAll(LocalClientNum_t localClientNum)
{
  ?CG_Rumble_StopAll@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Rumble_PlayLoopOnPosition
==============
*/

void __fastcall CG_Rumble_PlayLoopOnPosition(LocalClientNum_t localClientNum, const RumbleInfo *rumble, const vec3_t *pos)
{
  ?CG_Rumble_PlayLoopOnPosition@@YAXW4LocalClientNum_t@@PEBURumbleInfo@@AEBTvec3_t@@@Z(localClientNum, rumble, pos);
}

/*
==============
CG_Rumble_PlayOnClientByName
==============
*/

void __fastcall CG_Rumble_PlayOnClientByName(LocalClientNum_t localClientNum, const char *rumbleName)
{
  ?CG_Rumble_PlayOnClientByName@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, rumbleName);
}

/*
==============
CG_Rumble_InitDevguiRumbleGraph
==============
*/

void CG_Rumble_InitDevguiRumbleGraph(void)
{
  ?CG_Rumble_InitDevguiRumbleGraph@@YAXXZ();
}

/*
==============
CG_Rumble_PlayLoopOnClientByName
==============
*/

void __fastcall CG_Rumble_PlayLoopOnClientByName(LocalClientNum_t localClientNum, const char *rumbleName)
{
  ?CG_Rumble_PlayLoopOnClientByName@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, rumbleName);
}

/*
==============
CG_Rumble_ClearDeferred
==============
*/

void __fastcall CG_Rumble_ClearDeferred(LocalClientNum_t localClientNum)
{
  ?CG_Rumble_ClearDeferred@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Rumble_PlayOnPosition
==============
*/

void __fastcall CG_Rumble_PlayOnPosition(LocalClientNum_t localClientNum, const RumbleInfo *rumble, const vec3_t *pos)
{
  ?CG_Rumble_PlayOnPosition@@YAXW4LocalClientNum_t@@PEBURumbleInfo@@AEBTvec3_t@@@Z(localClientNum, rumble, pos);
}

/*
==============
CG_Rumble_PlayLoopOnClientSafeNoEntFlagByName
==============
*/

void __fastcall CG_Rumble_PlayLoopOnClientSafeNoEntFlagByName(LocalClientNum_t localClientNum, const char *rumbleName)
{
  ?CG_Rumble_PlayLoopOnClientSafeNoEntFlagByName@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, rumbleName);
}

/*
==============
CG_Rumble_PlayLoopOnEntityByName
==============
*/

void __fastcall CG_Rumble_PlayLoopOnEntityByName(LocalClientNum_t localClientNum, const char *rumbleName, int entityNum)
{
  ?CG_Rumble_PlayLoopOnEntityByName@@YAXW4LocalClientNum_t@@PEBDH@Z(localClientNum, rumbleName, entityNum);
}

/*
==============
CG_Rumble_CalcActiveRumbles
==============
*/

void __fastcall CG_Rumble_CalcActiveRumbles(LocalClientNum_t localClientNum, ActiveRumble *activeRumbleArray, const vec3_t *rumbleReceiverPos, const vec4_t *rumbleReceiverOrient)
{
  ?CG_Rumble_CalcActiveRumbles@@YAXW4LocalClientNum_t@@QEAUActiveRumble@@AEBTvec3_t@@AEBTvec4_t@@@Z(localClientNum, activeRumbleArray, rumbleReceiverPos, rumbleReceiverOrient);
}

/*
==============
CG_Rumble_ShouldNotRumble
==============
*/

int __fastcall CG_Rumble_ShouldNotRumble(LocalClientNum_t localClientNum)
{
  return ?CG_Rumble_ShouldNotRumble@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Rumble_DrawDebug
==============
*/

void __fastcall CG_Rumble_DrawDebug(LocalClientNum_t localClientNum)
{
  ?CG_Rumble_DrawDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Rumble_PlayOnClientScaledWithUpdate
==============
*/

void __fastcall CG_Rumble_PlayOnClientScaledWithUpdate(LocalClientNum_t localClientNum, const RumbleInfo *rumble, float scale)
{
  ?CG_Rumble_PlayOnClientScaledWithUpdate@@YAXW4LocalClientNum_t@@PEBURumbleInfo@@M@Z(localClientNum, rumble, scale);
}

/*
==============
CG_Rumble_InvalidateActiveRumble
==============
*/

void __fastcall CG_Rumble_InvalidateActiveRumble(ActiveRumble *ar)
{
  ?CG_Rumble_InvalidateActiveRumble@@YAXPEAUActiveRumble@@@Z(ar);
}

/*
==============
CG_Rumble_SetReceiver
==============
*/

void __fastcall CG_Rumble_SetReceiver(LocalClientNum_t localClientNum, int entityNum, const vec3_t *position, const vec4_t *orientation)
{
  ?CG_Rumble_SetReceiver@@YAXW4LocalClientNum_t@@HAEBTvec3_t@@AEBTvec4_t@@@Z(localClientNum, entityNum, position, orientation);
}

/*
==============
CG_Rumble_PlayOnEntity
==============
*/

void __fastcall CG_Rumble_PlayOnEntity(LocalClientNum_t localClientNum, const RumbleInfo *rumble, int entityNum)
{
  ?CG_Rumble_PlayOnEntity@@YAXW4LocalClientNum_t@@PEBURumbleInfo@@H@Z(localClientNum, rumble, entityNum);
}

/*
==============
CG_Rumble_PlayLoopOnEntity
==============
*/

void __fastcall CG_Rumble_PlayLoopOnEntity(LocalClientNum_t localClientNum, const RumbleInfo *rumble, int entityNum)
{
  ?CG_Rumble_PlayLoopOnEntity@@YAXW4LocalClientNum_t@@PEBURumbleInfo@@H@Z(localClientNum, rumble, entityNum);
}

/*
==============
CG_Rumble_PlayOnClientSafeByName
==============
*/

void __fastcall CG_Rumble_PlayOnClientSafeByName(LocalClientNum_t localClientNum, const char *rumbleName)
{
  ?CG_Rumble_PlayOnClientSafeByName@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, rumbleName);
}

/*
==============
CG_Rumble_StopByName
==============
*/

void __fastcall CG_Rumble_StopByName(LocalClientNum_t localClientNum, int entityNum, const char *rumbleName)
{
  ?CG_Rumble_StopByName@@YAXW4LocalClientNum_t@@HPEBD@Z(localClientNum, entityNum, rumbleName);
}

/*
==============
CG_Rumble_PlayLoopOnPositionByName
==============
*/

void __fastcall CG_Rumble_PlayLoopOnPositionByName(LocalClientNum_t localClientNum, const char *rumbleName, const vec3_t *pos)
{
  ?CG_Rumble_PlayLoopOnPositionByName@@YAXW4LocalClientNum_t@@PEBDAEBTvec3_t@@@Z(localClientNum, rumbleName, pos);
}

/*
==============
CG_Rumble_PlayDeferred
==============
*/

void __fastcall CG_Rumble_PlayDeferred(LocalClientNum_t localClientNum, const RumbleInfo *rumble, RumbleLoopType loopType, RumbleSourceType type, int entityNum, const vec3_t *pos, float scale, bool updateDuplicates)
{
  ?CG_Rumble_PlayDeferred@@YAXW4LocalClientNum_t@@PEBURumbleInfo@@W4RumbleLoopType@@W4RumbleSourceType@@HPEBTvec3_t@@M_N@Z(localClientNum, rumble, loopType, type, entityNum, pos, scale, updateDuplicates);
}

/*
==============
CG_Rumble_PlayOnClientScaledWithUpdateByName
==============
*/

void __fastcall CG_Rumble_PlayOnClientScaledWithUpdateByName(LocalClientNum_t localClientNum, const char *rumbleName, float scale)
{
  ?CG_Rumble_PlayOnClientScaledWithUpdateByName@@YAXW4LocalClientNum_t@@PEBDM@Z(localClientNum, rumbleName, scale);
}

/*
==============
CG_Rumble_IsBroadcastRumbleByName
==============
*/

bool __fastcall CG_Rumble_IsBroadcastRumbleByName(const char *rumbleName)
{
  return ?CG_Rumble_IsBroadcastRumbleByName@@YA_NPEBD@Z(rumbleName);
}

/*
==============
CG_Rumble_PlayLoopOnClient
==============
*/

void __fastcall CG_Rumble_PlayLoopOnClient(LocalClientNum_t localClientNum, const RumbleInfo *rumble)
{
  ?CG_Rumble_PlayLoopOnClient@@YAXW4LocalClientNum_t@@PEBURumbleInfo@@@Z(localClientNum, rumble);
}

/*
==============
CG_Rumble_Stop
==============
*/

bool __fastcall CG_Rumble_Stop(LocalClientNum_t localClientNum, int entityNum, const RumbleInfo *rumble)
{
  return ?CG_Rumble_Stop@@YA_NW4LocalClientNum_t@@HPEBURumbleInfo@@@Z(localClientNum, entityNum, rumble);
}

/*
==============
CG_Rumble_IsActive
==============
*/

bool __fastcall CG_Rumble_IsActive(LocalClientNum_t localClientNum, int entityNum, const RumbleInfo *rumble)
{
  return ?CG_Rumble_IsActive@@YA_NW4LocalClientNum_t@@HPEBURumbleInfo@@@Z(localClientNum, entityNum, rumble);
}

/*
==============
CG_Rumble_PlayOnEntityByName
==============
*/

void __fastcall CG_Rumble_PlayOnEntityByName(LocalClientNum_t localClientNum, const char *rumbleName, int entityNum)
{
  ?CG_Rumble_PlayOnEntityByName@@YAXW4LocalClientNum_t@@PEBDH@Z(localClientNum, rumbleName, entityNum);
}

/*
==============
CG_Rumble_PlayOnPositionByName
==============
*/

void __fastcall CG_Rumble_PlayOnPositionByName(LocalClientNum_t localClientNum, const char *rumbleName, const vec3_t *pos)
{
  ?CG_Rumble_PlayOnPositionByName@@YAXW4LocalClientNum_t@@PEBDAEBTvec3_t@@@Z(localClientNum, rumbleName, pos);
}

/*
==============
CG_Rumble_CalcActiveRumbles
==============
*/
void CG_Rumble_CalcActiveRumbles(LocalClientNum_t localClientNum, ActiveRumble *activeRumbleArray, const vec3_t *rumbleReceiverPos, const vec4_t *rumbleReceiverOrient)
{
  cg_t *LocalClientGlobals; 
  int v8; 
  float *v12; 
  __int64 v13; 
  float v14; 
  __int64 v15; 
  int v16; 
  __int128 v17; 
  char v22; 
  centity_t *Entity; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v28; 
  float v29; 
  float v30; 
  __int64 v33; 
  float v34; 
  __int128 v36; 
  __int64 v37; 
  __int128 v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  __int64 v57; 
  __int64 v58; 
  __int128 v59; 
  __int128 v62; 
  const dvar_t *v63; 
  float v64; 
  const dvar_t *v65; 
  float v66; 
  const dvar_t *v67; 
  float v68; 
  const dvar_t *v69; 
  float value; 
  int ControllerFromClient; 
  int v72; 
  float v73; 
  vec3_t outOrigin; 
  float v75; 
  LocalClientNum_t localClientNuma; 
  float v77; 
  int v78; 
  int v79; 
  vec4_t *quat; 
  __int64 v81; 
  tmat33_t<vec3_t> axis; 

  v81 = -2i64;
  quat = (vec4_t *)rumbleReceiverOrient;
  localClientNuma = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 178, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v8 = 0;
  *(float *)&_XMM8 = FLOAT_N1_0;
  *(float *)&_XMM10 = FLOAT_N1_0;
  v77 = FLOAT_N1_0;
  *(float *)&_XMM12 = FLOAT_N1_0;
  v75 = FLOAT_N1_0;
  v12 = &activeRumbleArray->source.pos.v[2];
  v13 = 32i64;
  v14 = FLOAT_0_0039215689;
  do
  {
    v15 = *((_QWORD *)v12 - 4);
    if ( !v15 )
      goto LABEL_50;
    v16 = *((_DWORD *)v12 - 4);
    if ( !v16 )
      goto LABEL_50;
    v17 = 0i64;
    *(float *)&v17 = (float)(LocalClientGlobals->time - *((_DWORD *)v12 - 6)) / (float)*(int *)(v15 + 8);
    _XMM2 = v17;
    __asm
    {
      vmaxss  xmm1, xmm2, xmm13
      vminss  xmm15, xmm1, xmm11
    }
    *(_QWORD *)outOrigin.v = *(_QWORD *)rumbleReceiverPos->v;
    _XMM0 = LODWORD(rumbleReceiverPos->v[2]);
    outOrigin.v[2] = rumbleReceiverPos->v[2];
    v22 = 0;
    if ( !*(_BYTE *)(v15 + 51) )
    {
      if ( v16 == 1 )
      {
        if ( *((_DWORD *)v12 - 2) != LocalClientGlobals->predictedPlayerState.clientNum )
          goto LABEL_50;
      }
      else if ( v16 == 2 )
      {
        *(_QWORD *)outOrigin.v = *((_QWORD *)v12 - 1);
        _XMM0 = *(unsigned int *)v12;
        outOrigin.v[2] = *v12;
        v22 = 1;
      }
      goto LABEL_26;
    }
    if ( v16 == 1 )
    {
      Entity = CG_GetEntity(localClientNuma, *((_DWORD *)v12 - 2));
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      v24 = outOrigin.v[2];
      v25 = outOrigin.v[1];
      v26 = outOrigin.v[0];
    }
    else
    {
      if ( v16 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 238, ASSERT_TYPE_ASSERT, "(ar->sourceType == RUMBLESOURCE_POS)", (const char *)&queryFormat, "ar->sourceType == RUMBLESOURCE_POS") )
        __debugbreak();
      v26 = *(v12 - 2);
      outOrigin.v[0] = v26;
      v25 = *(v12 - 1);
      outOrigin.v[1] = v25;
      v24 = *v12;
      outOrigin.v[2] = *v12;
    }
    v22 = 1;
    v27 = LODWORD(rumbleReceiverPos->v[1]);
    *(float *)&v27 = fsqrt((float)((float)((float)(rumbleReceiverPos->v[1] - v25) * (float)(rumbleReceiverPos->v[1] - v25)) + (float)((float)(rumbleReceiverPos->v[0] - v26) * (float)(rumbleReceiverPos->v[0] - v26))) + (float)((float)(rumbleReceiverPos->v[2] - v24) * (float)(rumbleReceiverPos->v[2] - v24)));
    _XMM0 = *(unsigned int *)(v15 + 12);
    if ( *(float *)&v27 <= *(float *)&_XMM0 )
    {
      if ( *(_BYTE *)(v15 + 50) )
      {
        if ( *(float *)&_XMM0 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 253, ASSERT_TYPE_ASSERT, "(info->range)", (const char *)&queryFormat, "info->range") )
          __debugbreak();
        *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v27 + 1);
        *(double *)&_XMM0 = I_fclamp(*(float *)&v27 / *(float *)(v15 + 12), 0.0, 1.0);
        v28 = 1.0 - *(float *)&_XMM0;
        goto LABEL_27;
      }
LABEL_26:
      v28 = FLOAT_1_0;
LABEL_27:
      v29 = (float)*((unsigned __int8 *)v12 - 12);
      v30 = v29 * v14;
      if ( (float)(v29 * v14) < 0.0 || (float)(v29 * v14) > 1.0 )
      {
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        _XMM1 = *(unsigned __int64 *)&DOUBLE_1_0;
        __asm { vxorpd  xmm1, xmm1, xmm1 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 280, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( scale ) && ( scale ) <= ( 1.0f )", "scale not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v30, *(double *)&_XMM1, DOUBLE_1_0) )
          __debugbreak();
      }
      v33 = *(_QWORD *)(v15 + 24);
      v34 = v30 * v28;
      if ( v33 )
      {
        *(double *)&_XMM0 = GraphGetValueFromFraction(*(unsigned __int16 *)(v33 + 136), (const vec2_t *)(v33 + 8), *(const float *)&_XMM15);
        v36 = _XMM0;
        *(float *)&v36 = *(float *)&_XMM0 * v34;
        _XMM7 = v36;
      }
      else
      {
        _XMM7 = 0i64;
      }
      v37 = *(_QWORD *)(v15 + 16);
      if ( v37 )
      {
        *(double *)&_XMM0 = GraphGetValueFromFraction(*(unsigned __int16 *)(v37 + 136), (const vec2_t *)(v37 + 8), *(const float *)&_XMM15);
        v39 = _XMM0;
        *(float *)&v39 = *(float *)&_XMM0 * v34;
        _XMM1 = v39;
      }
      else
      {
        _XMM1 = 0i64;
      }
      __asm { vmaxss  xmm8, xmm7, xmm8 }
      v78 = _XMM8;
      __asm { vmaxss  xmm10, xmm1, xmm10 }
      v79 = _XMM10;
      v40 = FLOAT_1_0;
      v41 = FLOAT_1_0;
      if ( v22 && *(_BYTE *)(v15 + 49) )
      {
        QuatToAxis(quat, &axis);
        v42 = LODWORD(axis.m[1].v[0]);
        *(float *)&v42 = fsqrt((float)((float)(*(float *)&v42 * *(float *)&v42) + (float)(axis.m[1].v[1] * axis.m[1].v[1])) + (float)(axis.m[1].v[2] * axis.m[1].v[2]));
        _XMM3 = v42;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm11, xmm0
        }
        v46 = axis.m[1].v[0] * (float)(1.0 / *(float *)&_XMM1);
        v47 = axis.m[1].v[1] * (float)(1.0 / *(float *)&_XMM1);
        v48 = axis.m[1].v[2] * (float)(1.0 / *(float *)&_XMM1);
        v49 = outOrigin.v[0] - rumbleReceiverPos->v[0];
        v51 = LODWORD(outOrigin.v[1]);
        *(float *)&v51 = outOrigin.v[1] - rumbleReceiverPos->v[1];
        v50 = v51;
        v53 = LODWORD(outOrigin.v[2]);
        *(float *)&v53 = outOrigin.v[2] - rumbleReceiverPos->v[2];
        v52 = v53;
        v54 = v50;
        *(float *)&v54 = fsqrt((float)((float)(*(float *)&v50 * *(float *)&v50) + (float)(v49 * v49)) + (float)(*(float *)&v52 * *(float *)&v52));
        _XMM1 = v54;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm1, xmm1, xmm11, xmm0
        }
        *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v52 + 1);
        v40 = (float)((float)((float)(*(float *)&v50 * (float)(1.0 / *(float *)&_XMM1)) * v47) + (float)((float)(v49 * (float)(1.0 / *(float *)&_XMM1)) * v46)) + (float)((float)(*(float *)&v52 * (float)(1.0 / *(float *)&_XMM1)) * v48);
        LODWORD(v41) = LODWORD(v40) ^ _xmm;
        LODWORD(_XMM8) = v78;
        v14 = FLOAT_0_0039215689;
        LODWORD(_XMM10) = v79;
      }
      if ( Dvar_GetBoolSafe("LMTKLROPNM") && *(_BYTE *)(v15 + 48) )
      {
        v57 = *(_QWORD *)(v15 + 40);
        v58 = *(_QWORD *)(v15 + 32);
      }
      else
      {
        v57 = *(_QWORD *)(v15 + 32);
        v58 = *(_QWORD *)(v15 + 40);
      }
      if ( v57 )
      {
        *(double *)&_XMM0 = GraphGetValueFromFraction(*(unsigned __int16 *)(v57 + 136), (const vec2_t *)(v57 + 8), *(const float *)&_XMM15);
        v59 = _XMM0;
        *(float *)&v59 = *(float *)&_XMM0 * (float)((float)((float)(v40 * v28) * v29) * v14);
        _XMM0 = v59;
        __asm { vmaxss  xmm6, xmm0, [rsp+180h+var_128] }
        v77 = *(float *)&_XMM6;
      }
      if ( v58 )
      {
        *(double *)&_XMM0 = GraphGetValueFromFraction(*(unsigned __int16 *)(v58 + 136), (const vec2_t *)(v58 + 8), *(const float *)&_XMM15);
        v62 = _XMM0;
        *(float *)&v62 = *(float *)&_XMM0 * (float)((float)((float)(v41 * v28) * v29) * v14);
        _XMM0 = v62;
        __asm { vmaxss  xmm12, xmm0, [rsp+180h+var_130] }
        v75 = *(float *)&_XMM12;
      }
      else
      {
        *(float *)&_XMM12 = v75;
      }
      ++v8;
    }
LABEL_50:
    memset(&outOrigin, 0, sizeof(outOrigin));
    v12 += 14;
    --v13;
  }
  while ( v13 );
  v63 = DCONST_DVARFLT_cg_rumble_xb3_lf_mult;
  if ( !DCONST_DVARFLT_cg_rumble_xb3_lf_mult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_rumble_xb3_lf_mult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v63);
  v64 = *(float *)&_XMM8 * v63->current.value;
  v65 = DCONST_DVARFLT_cg_rumble_xb3_hf_mult;
  if ( !DCONST_DVARFLT_cg_rumble_xb3_hf_mult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_rumble_xb3_hf_mult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  v66 = *(float *)&_XMM10 * v65->current.value;
  v67 = DCONST_DVARFLT_cg_rumble_xb3_tr_mult;
  if ( !DCONST_DVARFLT_cg_rumble_xb3_tr_mult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_rumble_xb3_tr_mult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  v68 = *(float *)&_XMM12 * v67->current.value;
  v69 = DCONST_DVARFLT_cg_rumble_xb3_tr_mult;
  if ( !DCONST_DVARFLT_cg_rumble_xb3_tr_mult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_rumble_xb3_tr_mult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v69);
  value = v69->current.value;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNuma);
  v72 = ControllerFromClient;
  if ( v8 )
  {
    I_fclamp(v64, 0.0, 1.0);
    GPad_SetLowRumble(v72, v64);
    I_fclamp(v66, 0.0, 1.0);
    GPad_SetHighRumble(v72, v66);
    v73 = value * v77;
    I_fclamp(value * v77, 0.0, 1.0);
    GPad_SetLeftTriggerRumble(v72, v73);
    I_fclamp(v68, 0.0, 1.0);
    GPad_SetRightTriggerRumble(v72, v68);
    lowRumbleDebugGlobal = v64;
    highRumbleDebugGlobal = v66;
  }
  else
  {
    GPad_SetLowRumble(ControllerFromClient, 0.0);
    GPad_SetHighRumble(v72, 0.0);
    GPad_SetLeftTriggerRumble(v72, 0.0);
    GPad_SetRightTriggerRumble(v72, 0.0);
  }
}

/*
==============
CG_Rumble_ClearDeferred
==============
*/
void CG_Rumble_ClearDeferred(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Sys_EnterCriticalSection(CRITSECT_CG_RUMBLE);
  LocalClientGlobals->deferredRumbleCount = 0;
  LocalClientGlobals->deferredRumbleStopCount = 0;
  Sys_LeaveCriticalSection(CRITSECT_CG_RUMBLE);
}

/*
==============
CG_Rumble_DrawActiveRumble
==============
*/
void CG_Rumble_DrawActiveRumble(const LocalClientNum_t localClientNum, const ActiveRumble *ar, vec3_t *outDebugStrPos)
{
  const RumbleInfo *rumbleInfo; 
  float v7; 
  centity_t *Entity; 
  float range; 
  __int128 dir; 

  *(float *)&dir = 0.0;
  *((float *)&dir + 1) = 0.0;
  *((float *)&dir + 2) = FLOAT_1_0;
  if ( !ar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 59, ASSERT_TYPE_ASSERT, "(ar)", (const char *)&queryFormat, "ar", dir) )
    __debugbreak();
  if ( !ar->rumbleInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 60, ASSERT_TYPE_ASSERT, "(ar->rumbleInfo)", (const char *)&queryFormat, "ar->rumbleInfo") )
    __debugbreak();
  rumbleInfo = ar->rumbleInfo;
  v7 = (float)(CG_GetLocalClientGlobals(localClientNum)->time - ar->startTime) / (float)rumbleInfo->duration;
  if ( ar->sourceType == RUMBLESOURCE_ENTITY )
  {
    Entity = CG_GetEntity(localClientNum, ar->source.entityNum);
    CG_GetPoseOrigin(&Entity->pose, outDebugStrPos);
  }
  else
  {
    LODWORD(outDebugStrPos->v[0]) = ar->source.entityNum;
    outDebugStrPos->v[1] = ar->source.pos.v[1];
    outDebugStrPos->v[2] = ar->source.pos.v[2];
  }
  range = rumbleInfo->range;
  if ( range > 0.0 )
  {
    CG_DebugCircle(outDebugStrPos, range, (const vec3_t *)&dir, &colorRed, 0, 3);
    CG_DebugCircle(outDebugStrPos, (float)(1.0 - v7) * rumbleInfo->range, (const vec3_t *)&dir, &colorYellow, 0, 3);
  }
}

/*
==============
CG_Rumble_DrawDebug
==============
*/
void CG_Rumble_DrawDebug(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const char *v2; 
  bool v3; 
  const ScreenPlacement *v4; 

  v1 = localClientNum;
  v2 = j_va("Rumble: Low %.3f, High %.3f\n", lowRumbleDebugGlobal, highRumbleDebugGlobal);
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v4 = &scrPlaceViewDisplay[v1];
      goto LABEL_8;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v3 )
      __debugbreak();
  }
  v4 = &scrPlaceFull;
LABEL_8:
  CG_DrawSmallDevStringColor(v4, 0.0, 300.0, v2, &colorRed, 6);
}

/*
==============
CG_Rumble_InitDevguiRumbleGraph
==============
*/
void CG_Rumble_InitDevguiRumbleGraph(void)
{
  int v0; 
  DevGraph *v1; 
  RumbleDevguiGraphInfo *v2; 
  const RumbleInfo *Info; 
  const RumbleInfo *v4; 
  RumbleGraph *leftTriggerRumbleGraph; 
  RumbleGraph *rightTriggerRumbleGraph; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  char dest[256]; 

  if ( Rumble_IsInitialized() )
  {
    v0 = 0;
    v1 = &g_devGraphs[0][1];
    v2 = &g_devRumbles[0][1];
    do
    {
      Info = Rumble_GetInfo(v0);
      v4 = Info;
      if ( Info )
      {
        Com_sprintf<256>((char (*)[256])dest, "Rumble/%s", Info->name);
        if ( !DevGui_DoesMenuExist(dest) )
        {
          InitDevguiRumbleGraphInteral(v4, v4->highRumbleGraph, v2 - 1, v1 - 1);
          InitDevguiRumbleGraphInteral(v4, v4->lowRumbleGraph, v2, v1);
          leftTriggerRumbleGraph = v4->leftTriggerRumbleGraph;
          if ( leftTriggerRumbleGraph )
            InitDevguiRumbleGraphInteral(v4, leftTriggerRumbleGraph, v2 + 1, v1 + 1);
          rightTriggerRumbleGraph = v4->rightTriggerRumbleGraph;
          if ( rightTriggerRumbleGraph )
            InitDevguiRumbleGraphInteral(v4, rightTriggerRumbleGraph, v2 + 2, v1 + 2);
          Com_sprintf<256>((char (*)[256])dest, "Rumble/%s/Duration", v4->name);
          v7 = DVARFLT_cg_rumble_devgui_duration;
          if ( !DVARFLT_cg_rumble_devgui_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
            __debugbreak();
          DevGui_AddDvar(dest, v7);
          Com_sprintf<256>((char (*)[256])dest, "Rumble/%s/Loop", v4->name);
          v8 = DVARBOOL_cg_rumble_devgui_loop;
          if ( !DVARBOOL_cg_rumble_devgui_loop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
            __debugbreak();
          DevGui_AddDvar(dest, v8);
        }
      }
      ++v0;
      v1 += 4;
      v2 += 4;
    }
    while ( v0 < 128 );
  }
}

/*
==============
CG_Rumble_InvalidateActiveRumble
==============
*/
void CG_Rumble_InvalidateActiveRumble(ActiveRumble *ar)
{
  ar->startTime = -1;
  ar->rumbleInfo = NULL;
  ar->sourceType = RUMBLESOURCE_INVALID;
}

/*
==============
CG_Rumble_IsActive
==============
*/
char CG_Rumble_IsActive(LocalClientNum_t localClientNum, int entityNum, const RumbleInfo *rumble)
{
  __int64 v5; 
  RumbleSourceType *i; 

  v5 = 0i64;
  for ( i = &CG_GetLocalClientGlobals(localClientNum)->crData.activeRumbles[0].sourceType; ; i += 14 )
  {
    if ( *((int *)i - 2) > 0 && *i == RUMBLESOURCE_ENTITY )
    {
      if ( !*((_QWORD *)i - 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 988, ASSERT_TYPE_ASSERT, "(ar->rumbleInfo)", (const char *)&queryFormat, "ar->rumbleInfo") )
        __debugbreak();
      if ( *((_DWORD *)i + 2) == entityNum && *((const RumbleInfo **)i - 2) == rumble )
        break;
    }
    if ( ++v5 >= 32 )
      return 0;
  }
  return 1;
}

/*
==============
CG_Rumble_IsBroadcastRumble
==============
*/
__int64 CG_Rumble_IsBroadcastRumble(const RumbleInfo *rumble)
{
  if ( rumble )
    return rumble->broadcast;
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C5DC0, 2i64, MEMORY[0]);
  return MEMORY[0x33];
}

/*
==============
CG_Rumble_IsBroadcastRumbleByName
==============
*/
bool CG_Rumble_IsBroadcastRumbleByName(const char *rumbleName)
{
  RumbleInfo *RumbleByName; 

  if ( !rumbleName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 666, ASSERT_TYPE_ASSERT, "(rumbleName)", (const char *)&queryFormat, "rumbleName") )
    __debugbreak();
  if ( !*rumbleName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 667, ASSERT_TYPE_ASSERT, "(rumbleName[0])", (const char *)&queryFormat, "rumbleName[0]") )
    __debugbreak();
  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
    return RumbleByName->broadcast;
  Com_PrintWarning(14, "rumble asset '%s' is not registered.", rumbleName);
  return 0;
}

/*
==============
CG_Rumble_NextAvailableRumble
==============
*/
ActiveRumble *CG_Rumble_NextAvailableRumble(const cg_t *cgameGlob, ActiveRumble *arArray)
{
  int v4; 
  int *p_startTime; 
  __int64 i; 
  int *v7; 
  RumbleSourceType *p_sourceType; 
  int v9; 
  int v10; 
  float v11; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 525, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v4 = 0;
  p_startTime = &arArray[2].startTime;
  for ( i = 0i64; i < 32; i += 4i64 )
  {
    v7 = p_startTime - 30;
    if ( *(p_startTime - 28) <= 0 )
      break;
    v7 = p_startTime - 16;
    if ( *(p_startTime - 14) <= 0 )
    {
      ++v4;
      break;
    }
    v7 = p_startTime - 2;
    if ( *p_startTime <= 0 )
    {
      v4 += 2;
      break;
    }
    v7 = p_startTime + 12;
    if ( p_startTime[14] <= 0 )
    {
      v4 += 3;
      break;
    }
    p_startTime += 56;
    v4 += 4;
  }
  if ( v4 != 32 )
    return (ActiveRumble *)v7;
  p_sourceType = &arArray->sourceType;
  v9 = 32;
  v10 = 0;
  v11 = 0.0;
  do
  {
    if ( !*((_QWORD *)p_sourceType - 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 487, ASSERT_TYPE_ASSERT, "(ar->rumbleInfo)", (const char *)&queryFormat, "ar->rumbleInfo") )
      __debugbreak();
    if ( *p_sourceType == RUMBLESOURCE_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 488, ASSERT_TYPE_ASSERT, "(ar->sourceType != RUMBLESOURCE_INVALID)", (const char *)&queryFormat, "ar->sourceType != RUMBLESOURCE_INVALID") )
      __debugbreak();
    if ( !*((_DWORD *)p_sourceType - 1) && (*p_sourceType != RUMBLESOURCE_ENTITY || *((_DWORD *)p_sourceType + 2) != cgameGlob->predictedPlayerState.clientNum) && (float)((float)(cgameGlob->time - *((_DWORD *)p_sourceType - 2)) / (float)*(int *)(*((_QWORD *)p_sourceType - 2) + 8i64)) > v11 )
    {
      v9 = v10;
      v11 = (float)(cgameGlob->time - *((_DWORD *)p_sourceType - 2)) / (float)*(int *)(*((_QWORD *)p_sourceType - 2) + 8i64);
    }
    ++v10;
    p_sourceType += 14;
  }
  while ( v10 < 32 );
  if ( v9 == 32 )
  {
    Com_PrintWarning(16, "FindClosestToDyingActiveRumble(): Couldn't find a suitable rumble to stop, defaulting to index zero.\n", i);
    v9 = 0;
  }
  return &arArray[v9];
}

/*
==============
CG_Rumble_PlayDeferred
==============
*/
void CG_Rumble_PlayDeferred(LocalClientNum_t localClientNum, const RumbleInfo *rumble, RumbleLoopType loopType, RumbleSourceType type, int entityNum, const vec3_t *pos, float scale, bool updateDuplicates)
{
  cg_t *LocalClientGlobals; 
  int deferredRumbleCount; 
  const vec3_t *v13; 
  __int64 v14; 
  int v15; 
  int v16; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Sys_EnterCriticalSection(CRITSECT_CG_RUMBLE);
  deferredRumbleCount = LocalClientGlobals->deferredRumbleCount;
  if ( deferredRumbleCount < 4 )
  {
    if ( (unsigned int)deferredRumbleCount >= 4 )
    {
      v16 = 4;
      v15 = LocalClientGlobals->deferredRumbleCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 383, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->deferredRumbleCount ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->deferredRumbles ) ) + 0 ) )", "cgameGlob->deferredRumbleCount doesn't index ARRAY_COUNT( cgameGlob->deferredRumbles )\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v13 = &vec3_origin;
    v14 = 5i64 * LocalClientGlobals->deferredRumbleCount + 52790;
    *(&LocalClientGlobals->predictedPlayerState.inputTime + 2 * v14) = entityNum;
    *((_QWORD *)&LocalClientGlobals->__vftable + v14) = rumble;
    *(&LocalClientGlobals->predictedPlayerState.commandTime + 2 * v14) = loopType;
    if ( pos )
      v13 = pos;
    *(&LocalClientGlobals->predictedPlayerState.serverTime + 2 * v14) = type;
    *((double *)&LocalClientGlobals->predictedPlayerState.pm_type + v14) = *(double *)v13->v;
    LocalClientGlobals->predictedPlayerState.pm_flags.m_flags[2 * v14] = LODWORD(v13->v[2]);
    LOBYTE(LocalClientGlobals->predictedPlayerState.otherFlags.m_flags[2 * v14]) = updateDuplicates;
    *(float *)&LocalClientGlobals->predictedPlayerState.pm_flags.m_flags[2 * v14 + 1] = scale;
    ++LocalClientGlobals->deferredRumbleCount;
  }
  Sys_LeaveCriticalSection(CRITSECT_CG_RUMBLE);
}

/*
==============
CG_Rumble_PlayLoopOnClient
==============
*/
void CG_Rumble_PlayLoopOnClient(LocalClientNum_t localClientNum, const RumbleInfo *rumble)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 857, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_LOOP, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, 1.0, 0);
}

/*
==============
CG_Rumble_PlayLoopOnClientByName
==============
*/
void CG_Rumble_PlayLoopOnClientByName(LocalClientNum_t localClientNum, const char *rumbleName)
{
  const RumbleInfo *RumbleByName; 
  cg_t *LocalClientGlobals; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 847, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_LOOP, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, 1.0, 0);
  }
  else
  {
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
  }
}

/*
==============
CG_Rumble_PlayLoopOnClientSafeNoEntFlag
==============
*/
void CG_Rumble_PlayLoopOnClientSafeNoEntFlag(LocalClientNum_t localClientNum, const RumbleInfo *rumble)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 884, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_LOOP_NOENTFLAG, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, 1.0, 0);
}

/*
==============
CG_Rumble_PlayLoopOnClientSafeNoEntFlagByName
==============
*/
void CG_Rumble_PlayLoopOnClientSafeNoEntFlagByName(LocalClientNum_t localClientNum, const char *rumbleName)
{
  const RumbleInfo *RumbleByName; 
  cg_t *LocalClientGlobals; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 874, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_LOOP_NOENTFLAG, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, 1.0, 0);
  }
  else
  {
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
  }
}

/*
==============
CG_Rumble_PlayLoopOnEntity
==============
*/
void CG_Rumble_PlayLoopOnEntity(LocalClientNum_t localClientNum, const RumbleInfo *rumble, int entityNum)
{
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_LOOP, RUMBLESOURCE_ENTITY, entityNum, NULL, 1.0, 0);
}

/*
==============
CG_Rumble_PlayLoopOnEntityByName
==============
*/
void CG_Rumble_PlayLoopOnEntityByName(LocalClientNum_t localClientNum, const char *rumbleName, int entityNum)
{
  const RumbleInfo *RumbleByName; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_LOOP, RUMBLESOURCE_ENTITY, entityNum, NULL, 1.0, 0);
  else
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
}

/*
==============
CG_Rumble_PlayLoopOnPosition
==============
*/
void CG_Rumble_PlayLoopOnPosition(LocalClientNum_t localClientNum, const RumbleInfo *rumble, const vec3_t *pos)
{
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_LOOP, RUMBLESOURCE_POS, 0, pos, 1.0, 0);
}

/*
==============
CG_Rumble_PlayLoopOnPositionByName
==============
*/
void CG_Rumble_PlayLoopOnPositionByName(LocalClientNum_t localClientNum, const char *rumbleName, const vec3_t *pos)
{
  const RumbleInfo *RumbleByName; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_LOOP, RUMBLESOURCE_POS, 0, pos, 1.0, 0);
  else
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
}

/*
==============
CG_Rumble_PlayOnClient
==============
*/
void CG_Rumble_PlayOnClient(LocalClientNum_t localClientNum, const RumbleInfo *rumble)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 787, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, 1.0, 0);
}

/*
==============
CG_Rumble_PlayOnClientByName
==============
*/
void CG_Rumble_PlayOnClientByName(LocalClientNum_t localClientNum, const char *rumbleName)
{
  const RumbleInfo *RumbleByName; 
  cg_t *LocalClientGlobals; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 777, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, 1.0, 0);
  }
  else
  {
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
  }
}

/*
==============
CG_Rumble_PlayOnClientSafeByName
==============
*/
void CG_Rumble_PlayOnClientSafeByName(LocalClientNum_t localClientNum, const char *rumbleName)
{
  const RumbleInfo *RumbleByName; 
  cg_t *LocalClientGlobals; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 804, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, 1.0, 0);
  }
  else
  {
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
  }
}

/*
==============
CG_Rumble_PlayOnClientScaledWithUpdate
==============
*/
void CG_Rumble_PlayOnClientScaledWithUpdate(LocalClientNum_t localClientNum, const RumbleInfo *rumble, float scale)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 830, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, scale, 1);
}

/*
==============
CG_Rumble_PlayOnClientScaledWithUpdateByName
==============
*/
void CG_Rumble_PlayOnClientScaledWithUpdateByName(LocalClientNum_t localClientNum, const char *rumbleName, float scale)
{
  const RumbleInfo *RumbleByName; 
  cg_t *LocalClientGlobals; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 821, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, scale, 1);
  }
  else
  {
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
  }
}

/*
==============
CG_Rumble_PlayOnEntity
==============
*/
void CG_Rumble_PlayOnEntity(LocalClientNum_t localClientNum, const RumbleInfo *rumble, int entityNum)
{
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, entityNum, NULL, 1.0, 0);
}

/*
==============
CG_Rumble_PlayOnEntityByName
==============
*/
void CG_Rumble_PlayOnEntityByName(LocalClientNum_t localClientNum, const char *rumbleName, int entityNum)
{
  const RumbleInfo *RumbleByName; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, entityNum, NULL, 1.0, 0);
  else
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
}

/*
==============
CG_Rumble_PlayOnPosition
==============
*/
void CG_Rumble_PlayOnPosition(LocalClientNum_t localClientNum, const RumbleInfo *rumble, const vec3_t *pos)
{
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_ONESHOT, RUMBLESOURCE_POS, 0, pos, 1.0, 0);
}

/*
==============
CG_Rumble_PlayOnPositionByName
==============
*/
void CG_Rumble_PlayOnPositionByName(LocalClientNum_t localClientNum, const char *rumbleName, const vec3_t *pos)
{
  const RumbleInfo *RumbleByName; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_ONESHOT, RUMBLESOURCE_POS, 0, pos, 1.0, 0);
  else
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
}

/*
==============
CG_Rumble_ProcessDeferred
==============
*/
void CG_Rumble_ProcessDeferred(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  cg_t *v2; 
  unsigned int v3; 
  float *p_scale; 
  unsigned int v5; 
  DeferredRumbleStop *deferredRumbleStops; 
  const RumbleInfo *rumble; 
  int entityNum; 
  int v9; 
  int *p_startTime; 
  __int64 v11; 
  vec3_t *pos; 
  __int64 scale; 
  unsigned int v15; 
  cg_t *LocalClientGlobals; 

  v1 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 422, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(v1);
  v2 = LocalClientGlobals;
  Sys_EnterCriticalSection(CRITSECT_CG_RUMBLE);
  v3 = 0;
  if ( LocalClientGlobals->deferredRumbleCount > 0 )
  {
    p_scale = &LocalClientGlobals->deferredRumbles[0].scale;
    do
    {
      if ( v3 >= 4 )
      {
        LODWORD(scale) = 4;
        LODWORD(pos) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->deferredRumbles ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( cgameGlob->deferredRumbles )\n\t%i not in [0, %i)", pos, scale) )
          __debugbreak();
      }
      PlayRumbleInternal(v1, *((const RumbleInfo **)p_scale - 4), *((RumbleLoopType *)p_scale - 6), *((RumbleSourceType *)p_scale - 5), *((_DWORD *)p_scale - 4), (const vec3_t *)p_scale - 1, *p_scale, *((_BYTE *)p_scale + 4));
      ++v3;
      p_scale += 10;
    }
    while ( (signed int)v3 < LocalClientGlobals->deferredRumbleCount );
  }
  v5 = 0;
  v15 = 0;
  if ( LocalClientGlobals->deferredRumbleStopCount > 0 )
  {
    deferredRumbleStops = LocalClientGlobals->deferredRumbleStops;
    do
    {
      if ( v5 >= 4 )
      {
        LODWORD(scale) = 4;
        LODWORD(pos) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 444, ASSERT_TYPE_ASSERT, "(unsigned)( stopIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->deferredRumbleStops ) ) + 0 ) )", "stopIndex doesn't index ARRAY_COUNT( cgameGlob->deferredRumbleStops )\n\t%i not in [0, %i)", pos, scale) )
          __debugbreak();
      }
      rumble = deferredRumbleStops->rumble;
      entityNum = deferredRumbleStops->entityNum;
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 934, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      v9 = 0;
      p_startTime = &CG_GetLocalClientGlobals(v1)->crData.activeRumbles[0].startTime;
      v11 = 32i64;
      do
      {
        if ( *p_startTime > 0 && p_startTime[2] == 1 )
        {
          if ( !*((_QWORD *)p_startTime - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 951, ASSERT_TYPE_ASSERT, "(ar->rumbleInfo)", (const char *)&queryFormat, "ar->rumbleInfo") )
            __debugbreak();
          if ( p_startTime[4] == entityNum && *((const RumbleInfo **)p_startTime - 1) == rumble )
          {
            if ( (unsigned int)(p_startTime[1] - 1) <= 1 || !v9 )
            {
              *p_startTime = -1;
              *((_QWORD *)p_startTime - 1) = 0i64;
              p_startTime[2] = 0;
            }
            ++v9;
          }
        }
        p_startTime += 14;
        --v11;
      }
      while ( v11 );
      v2 = LocalClientGlobals;
      v1 = localClientNum;
      v5 = v15 + 1;
      ++deferredRumbleStops;
      v15 = v5;
    }
    while ( (signed int)v5 < LocalClientGlobals->deferredRumbleStopCount );
  }
  v2->deferredRumbleCount = 0;
  v2->deferredRumbleStopCount = 0;
  Sys_LeaveCriticalSection(CRITSECT_CG_RUMBLE);
}

/*
==============
CG_Rumble_SetReceiver
==============
*/
void CG_Rumble_SetReceiver(LocalClientNum_t localClientNum, int entityNum, const vec3_t *position, const vec4_t *orientation)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->crData.receiverEntNum = entityNum;
  LocalClientGlobals->crData.receiverPos = *position;
  LocalClientGlobals->crData.receiverOrientation = *orientation;
}

/*
==============
CG_Rumble_ShouldNotRumble
==============
*/
_BOOL8 CG_Rumble_ShouldNotRumble(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int clientNum; 
  _BOOL8 result; 

  result = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals->transitionSettleIsActive )
      return 1;
    if ( LocalClientGlobals->nextSnap )
    {
      if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 )
        return 1;
      clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
      if ( clientNum >= cls.maxClients || clientNum != LocalClientGlobals->clientNum )
        return 1;
    }
  }
  return result;
}

/*
==============
CG_Rumble_Stop
==============
*/
bool CG_Rumble_Stop(LocalClientNum_t localClientNum, int entityNum, const RumbleInfo *rumble)
{
  int v6; 
  int *p_startTime; 
  __int64 v8; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 934, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v6 = 0;
  p_startTime = &CG_GetLocalClientGlobals(localClientNum)->crData.activeRumbles[0].startTime;
  v8 = 32i64;
  do
  {
    if ( *p_startTime > 0 && p_startTime[2] == 1 )
    {
      if ( !*((_QWORD *)p_startTime - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 951, ASSERT_TYPE_ASSERT, "(ar->rumbleInfo)", (const char *)&queryFormat, "ar->rumbleInfo") )
        __debugbreak();
      if ( p_startTime[4] == entityNum && *((const RumbleInfo **)p_startTime - 1) == rumble )
      {
        if ( (unsigned int)(p_startTime[1] - 1) <= 1 || !v6 )
        {
          *p_startTime = -1;
          *((_QWORD *)p_startTime - 1) = 0i64;
          p_startTime[2] = 0;
        }
        ++v6;
      }
    }
    p_startTime += 14;
    --v8;
  }
  while ( v8 );
  return v6 != 0;
}

/*
==============
CG_Rumble_StopAll
==============
*/
void CG_Rumble_StopAll(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int v2; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v2 = 0;
  LocalClientGlobals->crData.activeRumbles[0].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[0].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[0].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[1].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[1].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[1].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[2].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[2].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[2].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[3].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[3].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[3].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[4].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[4].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[4].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[5].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[5].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[5].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[6].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[6].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[6].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[7].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[7].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[7].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[8].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[8].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[8].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[9].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[9].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[9].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[10].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[10].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[10].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[11].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[11].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[11].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[12].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[12].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[12].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[13].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[13].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[13].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[14].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[14].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[14].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[15].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[15].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[15].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[16].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[16].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[16].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[17].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[17].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[17].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[18].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[18].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[18].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[19].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[19].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[19].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[20].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[20].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[20].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[21].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[21].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[21].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[22].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[22].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[22].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[23].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[23].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[23].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[24].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[24].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[24].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[25].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[25].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[25].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[26].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[26].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[26].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[27].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[27].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[27].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[28].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[28].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[28].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[29].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[29].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[29].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[30].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[30].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[30].sourceType = RUMBLESOURCE_INVALID;
  LocalClientGlobals->crData.activeRumbles[31].startTime = -1;
  LocalClientGlobals->crData.activeRumbles[31].rumbleInfo = NULL;
  LocalClientGlobals->crData.activeRumbles[31].sourceType = RUMBLESOURCE_INVALID;
  do
    GPad_StopRumbles(v2++, 1);
  while ( v2 < 8 );
  lowRumbleDebugGlobal = 0.0;
  highRumbleDebugGlobal = 0.0;
}

/*
==============
CG_Rumble_StopByName
==============
*/
void CG_Rumble_StopByName(LocalClientNum_t localClientNum, int entityNum, const char *rumbleName)
{
  int v6; 
  int *p_startTime; 
  __int64 v8; 
  const char *v9; 
  const char *v10; 
  int v11; 
  int v12; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 895, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v6 = 0;
  p_startTime = &CG_GetLocalClientGlobals(localClientNum)->crData.activeRumbles[0].startTime;
  v8 = 32i64;
  do
  {
    if ( *p_startTime > 0 && p_startTime[2] == 1 )
    {
      if ( !*((_QWORD *)p_startTime - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 912, ASSERT_TYPE_ASSERT, "(ar->rumbleInfo)", (const char *)&queryFormat, "ar->rumbleInfo") )
        __debugbreak();
      if ( p_startTime[4] == entityNum )
      {
        v9 = (const char *)**((_QWORD **)p_startTime - 1);
        v10 = (const char *)(rumbleName - v9);
        do
        {
          v11 = (unsigned __int8)v10[(_QWORD)v9];
          v12 = *(unsigned __int8 *)v9 - v11;
          if ( v12 )
            break;
          ++v9;
        }
        while ( v11 );
        if ( !v12 )
        {
          if ( (unsigned int)(p_startTime[1] - 1) <= 1 || !v6 )
          {
            *p_startTime = -1;
            *((_QWORD *)p_startTime - 1) = 0i64;
            p_startTime[2] = 0;
          }
          ++v6;
        }
      }
    }
    p_startTime += 14;
    --v8;
  }
  while ( v8 );
}

/*
==============
CG_Rumble_StopDeferred
==============
*/
void CG_Rumble_StopDeferred(LocalClientNum_t localClientNum, const RumbleInfo *rumble, const int entityNum)
{
  cg_t *LocalClientGlobals; 
  int deferredRumbleStopCount; 
  __int64 v7; 
  int v8; 
  int v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Sys_EnterCriticalSection(CRITSECT_CG_RUMBLE);
  deferredRumbleStopCount = LocalClientGlobals->deferredRumbleStopCount;
  if ( deferredRumbleStopCount < 4 )
  {
    if ( (unsigned int)deferredRumbleStopCount >= 4 )
    {
      v9 = 4;
      v8 = LocalClientGlobals->deferredRumbleStopCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 408, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->deferredRumbleStopCount ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->deferredRumbleStops ) ) + 0 ) )", "cgameGlob->deferredRumbleStopCount doesn't index ARRAY_COUNT( cgameGlob->deferredRumbleStops )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v7 = LocalClientGlobals->deferredRumbleStopCount;
    LocalClientGlobals->deferredRumbleStops[v7].rumble = rumble;
    LocalClientGlobals->deferredRumbleStops[v7].entityNum = entityNum;
    ++LocalClientGlobals->deferredRumbleStopCount;
  }
  Sys_LeaveCriticalSection(CRITSECT_CG_RUMBLE);
}

/*
==============
InitDevguiRumbleGraphInteral
==============
*/
void InitDevguiRumbleGraphInteral(const RumbleInfo *rumbleInfo, RumbleGraph *rumbleGraph, RumbleDevguiGraphInfo *devInfo, DevGraph *devGuiGraph)
{
  char dest[256]; 

  if ( !rumbleGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1136, ASSERT_TYPE_ASSERT, "(rumbleGraph)", (const char *)&queryFormat, "rumbleGraph") )
    __debugbreak();
  devGuiGraph->knotCountMax = 16;
  devGuiGraph->knots = rumbleGraph->knots;
  devGuiGraph->knotCount = &rumbleGraph->knotCount;
  devGuiGraph->eventCallback = RumbleGraphEventCallback;
  devGuiGraph->textCallback = RumbleGraphTextCallback;
  devInfo->rumbleGraph = rumbleGraph;
  devInfo->rumbleInfo = rumbleInfo;
  devGuiGraph->data = devInfo;
  Com_sprintf<256>((char (*)[256])dest, "Rumble/%s/%s", rumbleInfo->name, rumbleGraph->name);
  DevGui_AddGraph(dest, devGuiGraph);
}

/*
==============
PlayRumbleInternal
==============
*/
void PlayRumbleInternal(LocalClientNum_t localClientNum, const RumbleInfo *rumble, RumbleLoopType loopType, RumbleSourceType type, int entityNum, const vec3_t *pos, float scale, bool updateDuplicates)
{
  cg_t *LocalClientGlobals; 
  ClientRumbleGlobals *p_crData; 
  bool v13; 
  const vec3_t *v14; 
  unsigned int v15; 
  __int64 v16; 
  float *v17; 
  ActiveRumble *AvailableRumble; 
  bool v19; 
  centity_t *Entity; 
  centity_t *v21; 
  entityState_t *p_nextState; 
  int nextUseCount; 
  float v24; 
  cg_t *v25; 
  int clientNum; 
  int v27[3]; 
  cg_t *v29; 
  int v30; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v29 = LocalClientGlobals;
  if ( type == RUMBLESOURCE_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 596, ASSERT_TYPE_ASSERT, "(type != RUMBLESOURCE_INVALID)", (const char *)&queryFormat, "type != RUMBLESOURCE_INVALID") )
    __debugbreak();
  if ( !rumble && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 597, ASSERT_TYPE_ASSERT, "(rumble)", (const char *)&queryFormat, "rumble") )
    __debugbreak();
  p_crData = &LocalClientGlobals->crData;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 602, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 552, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-364376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 553, ASSERT_TYPE_ASSERT, "(arArray)", (const char *)&queryFormat, "arArray") )
    __debugbreak();
  if ( type == RUMBLESOURCE_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 554, ASSERT_TYPE_ASSERT, "(type != RUMBLESOURCE_INVALID)", (const char *)&queryFormat, "type != RUMBLESOURCE_INVALID") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 555, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v13 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE);
  v14 = pos;
  v15 = entityNum;
  if ( !v13 )
  {
LABEL_35:
    AvailableRumble = CG_Rumble_NextAvailableRumble(LocalClientGlobals, LocalClientGlobals->crData.activeRumbles);
    goto LABEL_36;
  }
  v16 = 0i64;
  v17 = &LocalClientGlobals->crData.activeRumbles[0].source.pos.v[2];
  while ( 1 )
  {
    AvailableRumble = (ActiveRumble *)(v17 - 8);
    if ( *((const RumbleInfo **)v17 - 4) != rumble || *((_DWORD *)v17 - 5) != loopType || *((_DWORD *)v17 - 4) != type )
      goto LABEL_34;
    if ( type == RUMBLESOURCE_ENTITY )
    {
      v19 = *((_DWORD *)v17 - 2) == entityNum;
      goto LABEL_33;
    }
    if ( type != RUMBLESOURCE_POS )
      goto LABEL_56;
    if ( pos->v[0] == *(v17 - 2) && pos->v[1] == *(v17 - 1) )
      break;
LABEL_34:
    ++v16;
    v17 += 14;
    if ( v16 >= 32 )
      goto LABEL_35;
  }
  v19 = pos->v[2] == *v17;
LABEL_33:
  if ( !v19 )
    goto LABEL_34;
LABEL_56:
  if ( !updateDuplicates )
  {
LABEL_36:
    if ( type == RUMBLESOURCE_ENTITY )
    {
      Entity = CG_GetEntity(localClientNum, v15);
      v21 = Entity;
      if ( !rumble->broadcast )
      {
        if ( (Entity->flags & 1) == 0 )
          return;
        p_nextState = &Entity->nextState;
        if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( ((p_nextState->eType - 1) & 0xFFEF) != 0 )
        {
          if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1990, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          if ( ((p_nextState->eType - 2) & 0xFFEF) != 0 )
          {
            if ( v21 == (centity_t *)-292i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
              __debugbreak();
            if ( v21->prevState.pos.trType == TR_LINEAR_STOP_SECURE )
            {
              v27[2] = LODWORD(v21->prevState.pos.trBase.v[1]) ^ LODWORD(v21->prevState.pos.trBase.v[2]) ^ s_trbase_aab_Z;
              v27[1] = LODWORD(v21->prevState.pos.trBase.v[0]) ^ LODWORD(v21->prevState.pos.trBase.v[1]) ^ s_trbase_aab_Y;
              v27[0] = LODWORD(v21->prevState.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
              memset(&v29, 0, sizeof(v29));
              v30 = v27[0];
              if ( (v27[0] & 0x7F800000) == 2139095040 || (v30 = v27[1], (v27[1] & 0x7F800000) == 2139095040) || (v30 = v27[2], (v27[2] & 0x7F800000) == 2139095040) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                  __debugbreak();
              }
            }
            else
            {
              v27[0] = LODWORD(v21->prevState.pos.trBase.v[0]);
              v27[1] = LODWORD(v21->prevState.pos.trBase.v[1]);
              v27[2] = LODWORD(v21->prevState.pos.trBase.v[2]);
            }
            Com_PrintError(16, "Non-player, non-agent entity #%i of type %i at (%.0f, %.0f, %.0f) is trying to play non-broadcasting rumble \"%s\" on themselves.\n", v15, (unsigned int)v21->nextState.eType, *(float *)v27, *(float *)&v27[1], *(float *)&v27[2], rumble->name);
            memset(v27, 0, sizeof(v27));
            return;
          }
        }
        LocalClientGlobals = v29;
      }
      AvailableRumble->source.entityNum = v15;
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 101, ASSERT_TYPE_ASSERT, "(cent != 0)", (const char *)&queryFormat, "cent != NULL") )
        __debugbreak();
      if ( (v21->flags & 1) != 0 )
        nextUseCount = v21->nextUseCount;
      else
        nextUseCount = -1;
      AvailableRumble->useCountBuffer[0] = nextUseCount;
      AvailableRumble->useCountBuffer[1] = nextUseCount;
      AvailableRumble->useCountBuffer[2] = nextUseCount;
      AvailableRumble->useCountBuffer[3] = nextUseCount;
      AvailableRumble->useCountPointer = 0;
    }
    else
    {
      if ( type != RUMBLESOURCE_POS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 638, ASSERT_TYPE_ASSERT, "(type == RUMBLESOURCE_POS)", (const char *)&queryFormat, "type == RUMBLESOURCE_POS") )
        __debugbreak();
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 639, ASSERT_TYPE_ASSERT, "(pos)", (const char *)&queryFormat, "pos") )
        __debugbreak();
      AvailableRumble->source.entityNum = LODWORD(v14->v[0]);
      AvailableRumble->source.pos.v[1] = v14->v[1];
      AvailableRumble->source.pos.v[2] = v14->v[2];
    }
    AvailableRumble->sourceType = type;
    AvailableRumble->startTime = LocalClientGlobals->time;
    AvailableRumble->rumbleInfo = rumble;
    AvailableRumble->loopType = loopType;
  }
  v24 = scale;
  if ( scale < 0.0 || scale > 1.0 )
  {
    Com_PrintWarning(16, "Rumble \"%s\" has invalid scale value of %f.\n", rumble->name, scale);
    v24 = FLOAT_1_0;
  }
  AvailableRumble->scale = (int)(float)(v24 * 255.0);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) || (v25 = CG_GetLocalClientGlobals(localClientNum), !v25->transitionSettleIsActive) && (!v25->nextSnap || v25->predictedPlayerState.pm_type != 5 && (clientNum = v25->predictedPlayerState.clientNum, clientNum < cls.maxClients) && clientNum == v25->clientNum) )
    CG_Rumble_CalcActiveRumbles(localClientNum, p_crData->activeRumbles, &p_crData->receiverPos, &p_crData->receiverOrientation);
}

/*
==============
RumbleGraphEventCallback
==============
*/
void RumbleGraphEventCallback(const DevGraph *graph, DevEventType event, LocalClientNum_t localClientNum)
{
  const RumbleInfo **data; 
  __int32 v7; 
  __int32 v8; 
  const char *v9; 
  fileHandle_t *v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  const dvar_t *v16; 
  const RumbleInfo *v17; 
  const dvar_t *v18; 
  bool enabled; 
  const RumbleInfo *v20; 
  cg_t *LocalClientGlobals; 
  const snapshot_t *nextSnap; 
  RumbleLoopType v23; 
  char dest[256]; 
  char buffer[1024]; 

  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1076, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !graph->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1077, ASSERT_TYPE_ASSERT, "(graph->data)", (const char *)&queryFormat, "graph->data") )
    __debugbreak();
  data = (const RumbleInfo **)graph->data;
  if ( !data[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1080, ASSERT_TYPE_ASSERT, "(graphInfo->rumbleGraph)", (const char *)&queryFormat, "graphInfo->rumbleGraph") )
    __debugbreak();
  if ( event )
  {
    v7 = event - 2;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          Com_sprintf<256>((char (*)[256])dest, "rumble\\%s", data[1]->name);
          v10 = FS_FOpenTextFileWrite((fileHandle_t *)dest, v9);
          if ( v10 != (fileHandle_t *)-1i64 )
          {
            v11 = *graph->knotCount;
            Com_sprintf(buffer, 0x400ui64, "RUMBLEGRAPHFILE\n\n%d\n", v11);
            v12 = -1i64;
            do
              ++v12;
            while ( buffer[v12] );
            FS_Write(buffer, v12, (fileHandle_t)v10);
            if ( (unsigned int)v11 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1063, ASSERT_TYPE_ASSERT, "( knotCount ) <= ( 16 )", "%s <= %s\n\t%i, %i", "knotCount", "MAX_RUMBLE_GRAPH_KNOTS", v11, 16) )
              __debugbreak();
            v13 = v11;
            if ( (_DWORD)v11 )
            {
              v14 = 0i64;
              do
              {
                Com_sprintf(buffer, 0x400ui64, "%.4f %.4f\n", graph->knots[v14].v[0], graph->knots[v14].v[1]);
                v15 = -1i64;
                do
                  ++v15;
                while ( buffer[v15] );
                FS_Write(buffer, v15, (fileHandle_t)v10);
                ++v14;
              }
              while ( v14 < v13 );
            }
            FS_FCloseFile((fileHandle_t)v10);
          }
        }
      }
      else
      {
        v16 = DVARFLT_cg_rumble_devgui_duration;
        if ( !DVARFLT_cg_rumble_devgui_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
          __debugbreak();
        if ( v16->modified )
        {
          v17 = *data;
          v17->duration = (int)(float)(Dvar_ValidatePtr(DVARFLT_cg_rumble_devgui_duration)->current.value * 1000.0);
        }
      }
    }
    else
    {
      CG_Rumble_StopAll(localClientNum);
      v18 = DVARBOOL_cg_rumble_devgui_loop;
      if ( !DVARBOOL_cg_rumble_devgui_loop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_rumble_devgui_loop") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      enabled = v18->current.enabled;
      v20 = *data;
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      nextSnap = LocalClientGlobals->nextSnap;
      if ( enabled )
      {
        if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 857, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
          __debugbreak();
        v23 = RUMBLELOOP_LOOP;
      }
      else
      {
        if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 787, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
          __debugbreak();
        v23 = RUMBLELOOP_ONESHOT;
      }
      PlayRumbleInternal(localClientNum, v20, v23, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, 1.0, 0);
    }
  }
  else
  {
    Dvar_SetBool_Internal(DVARBOOL_cg_rumble_devgui_loop, 0);
    Dvar_SetFloat_Internal(DVARFLT_cg_rumble_devgui_duration, (float)(*data)->duration * 0.001);
  }
}

/*
==============
RumbleGraphTextCallback
==============
*/
void RumbleGraphTextCallback(const DevGraph *graph, const float inputX, const float inputY, char *text, const int textLength)
{
  _QWORD *data; 

  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1122, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !graph->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1123, ASSERT_TYPE_ASSERT, "(graph->data)", (const char *)&queryFormat, "graph->data") )
    __debugbreak();
  data = graph->data;
  if ( !data[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1126, ASSERT_TYPE_ASSERT, "(graphInfo->rumbleGraph)", (const char *)&queryFormat, "graphInfo->rumbleGraph") )
    __debugbreak();
  Com_sprintf_truncate(text, textLength, "Time: %.3f sec, Rumble Value: %.3f", (float)((float)((float)*(int *)(*data + 8i64) * 0.001) * inputX), inputY);
}

