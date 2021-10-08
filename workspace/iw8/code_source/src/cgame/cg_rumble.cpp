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
  int v21; 
  __int64 v26; 
  unsigned int v31; 
  char v40; 
  centity_t *Entity; 
  bool v42; 
  bool v43; 
  bool v47; 
  bool v62; 
  bool v63; 
  unsigned int clientNum; 
  __int64 v75; 
  __int64 v79; 
  __int64 v119; 
  __int64 v120; 
  const dvar_t *v128; 
  const dvar_t *v130; 
  const dvar_t *v132; 
  int ControllerFromClient; 
  int v137; 
  double v168; 
  double v169; 
  double v170; 
  vec3_t outOrigin; 
  LocalClientNum_t localClientNuma; 
  vec4_t *quat; 
  __int64 v178; 
  tmat33_t<vec3_t> axis; 
  char v180; 
  void *retaddr; 

  _RAX = &retaddr;
  v178 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  quat = (vec4_t *)rumbleReceiverOrient;
  _R14 = rumbleReceiverPos;
  localClientNuma = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 178, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v21 = 0;
  __asm
  {
    vmovss  xmm8, cs:__real@bf800000
    vmovaps xmm10, xmm8
    vmovss  [rsp+180h+var_128], xmm8
    vmovaps xmm12, xmm8
    vmovss  [rsp+180h+var_130], xmm8
  }
  _RBX = &activeRumbleArray->source.pos.v[2];
  v26 = 32i64;
  __asm
  {
    vxorps  xmm13, xmm13, xmm13
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm9, cs:__real@3b808081
  }
  do
  {
    _RDI = *((_QWORD *)_RBX - 4);
    if ( !_RDI )
      goto LABEL_50;
    v31 = *((_DWORD *)_RBX - 4);
    if ( !v31 )
      goto LABEL_50;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+8]
      vdivss  xmm2, xmm1, xmm0
      vmaxss  xmm1, xmm2, xmm13
      vminss  xmm15, xmm1, xmm11
      vmovss  xmm0, dword ptr [r14]
      vmovss  dword ptr [rsp+180h+outOrigin], xmm0
      vmovss  xmm1, dword ptr [r14+4]
      vmovss  dword ptr [rsp+180h+outOrigin+4], xmm1
      vmovss  xmm0, dword ptr [r14+8]
      vmovss  dword ptr [rsp+180h+outOrigin+8], xmm0
    }
    v40 = 0;
    if ( !*(_BYTE *)(_RDI + 51) )
    {
      if ( v31 == 1 )
      {
        clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
        v62 = *((_DWORD *)_RBX - 2) < clientNum;
        v63 = *((_DWORD *)_RBX - 2) == clientNum;
        if ( *((_DWORD *)_RBX - 2) != clientNum )
          goto LABEL_50;
      }
      else
      {
        v62 = v31 < 2;
        v63 = v31 == 2;
        if ( v31 == 2 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-8]
            vmovss  dword ptr [rsp+180h+outOrigin], xmm0
            vmovss  xmm1, dword ptr [rbx-4]
            vmovss  dword ptr [rsp+180h+outOrigin+4], xmm1
            vmovss  xmm0, dword ptr [rbx]
            vmovss  dword ptr [rsp+180h+outOrigin+8], xmm0
          }
          v40 = 1;
        }
      }
      goto LABEL_26;
    }
    if ( v31 == 1 )
    {
      Entity = CG_GetEntity(localClientNuma, *((_DWORD *)_RBX - 2));
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+180h+outOrigin+8]
        vmovss  xmm2, dword ptr [rsp+180h+outOrigin+4]
        vmovss  xmm1, dword ptr [rsp+180h+outOrigin]
      }
    }
    else
    {
      v42 = v31 < 2;
      v43 = v31 == 2;
      if ( v31 != 2 )
      {
        v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 238, ASSERT_TYPE_ASSERT, "(ar->sourceType == RUMBLESOURCE_POS)", (const char *)&queryFormat, "ar->sourceType == RUMBLESOURCE_POS");
        v42 = 0;
        v43 = !v47;
        if ( v47 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rbx-8]
        vmovss  dword ptr [rsp+180h+outOrigin], xmm1
        vmovss  xmm2, dword ptr [rbx-4]
        vmovss  dword ptr [rsp+180h+outOrigin+4], xmm2
        vmovss  xmm4, dword ptr [rbx]
        vmovss  dword ptr [rsp+180h+outOrigin+8], xmm4
      }
    }
    v40 = 1;
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vsubss  xmm3, xmm0, xmm1
      vmovss  xmm1, dword ptr [r14+4]
      vsubss  xmm2, xmm1, xmm2
      vmovss  xmm0, dword ptr [r14+8]
      vsubss  xmm4, xmm0, xmm4
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm6, xmm2, xmm2
      vmovss  xmm0, dword ptr [rdi+0Ch]
      vcomiss xmm6, xmm0
    }
    if ( v42 || v43 )
    {
      v62 = 0;
      v63 = *(_BYTE *)(_RDI + 50) == 0;
      if ( *(_BYTE *)(_RDI + 50) )
      {
        __asm { vucomiss xmm0, xmm13 }
        if ( !*(_BYTE *)(_RDI + 50) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 253, ASSERT_TYPE_ASSERT, "(info->range)", (const char *)&queryFormat, "info->range") )
          __debugbreak();
        __asm
        {
          vdivss  xmm0, xmm6, dword ptr [rdi+0Ch]; val
          vmovaps xmm2, xmm11; max
          vmovaps xmm1, xmm13; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vsubss  xmm12, xmm11, xmm0 }
        goto LABEL_27;
      }
LABEL_26:
      __asm { vmovaps xmm12, xmm11 }
LABEL_27:
      __asm
      {
        vxorps  xmm14, xmm14, xmm14
        vcvtsi2ss xmm14, xmm14, eax
        vmulss  xmm6, xmm14, xmm9
        vcomiss xmm6, xmm13
      }
      if ( v62 )
        goto LABEL_69;
      __asm { vcomiss xmm6, xmm11 }
      if ( !v62 && !v63 )
      {
LABEL_69:
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  xmm1, cs:__real@3ff0000000000000
          vmovsd  [rsp+180h+var_148], xmm1
          vxorpd  xmm1, xmm1, xmm1
          vmovsd  [rsp+180h+var_150], xmm1
          vmovsd  [rsp+180h+var_158], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 280, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( scale ) && ( scale ) <= ( 1.0f )", "scale not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v168, v169, v170) )
          __debugbreak();
      }
      v75 = *(_QWORD *)(_RDI + 24);
      __asm { vmulss  xmm6, xmm6, xmm12 }
      if ( v75 )
      {
        __asm { vmovaps xmm2, xmm15; fraction }
        *(double *)&_XMM0 = GraphGetValueFromFraction(*(unsigned __int16 *)(v75 + 136), (const vec2_t *)(v75 + 8), *(const float *)&_XMM2);
        __asm { vmulss  xmm7, xmm0, xmm6 }
      }
      else
      {
        __asm { vmovaps xmm7, xmm13 }
      }
      v79 = *(_QWORD *)(_RDI + 16);
      if ( v79 )
      {
        __asm { vmovaps xmm2, xmm15; fraction }
        *(double *)&_XMM0 = GraphGetValueFromFraction(*(unsigned __int16 *)(v79 + 136), (const vec2_t *)(v79 + 8), *(const float *)&_XMM2);
        __asm { vmulss  xmm1, xmm0, xmm6 }
      }
      else
      {
        __asm { vmovaps xmm1, xmm13 }
      }
      __asm
      {
        vmaxss  xmm8, xmm7, xmm8
        vmovss  [rsp+180h+var_124], xmm8
        vmaxss  xmm10, xmm1, xmm10
        vmovss  [rsp+180h+var_120], xmm10
        vmovaps xmm6, xmm11
        vmovaps xmm7, xmm11
      }
      if ( v40 && *(_BYTE *)(_RDI + 49) )
      {
        QuatToAxis(quat, &axis);
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+80h+axis+0Ch]
          vmulss  xmm1, xmm6, xmm6
          vmovss  xmm5, dword ptr [rbp+80h+axis+10h]
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmovss  xmm4, dword ptr [rbp+80h+axis+14h]
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm0, xmm2, xmm1
          vsqrtss xmm3, xmm0, xmm0
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm11, xmm0
          vdivss  xmm0, xmm11, xmm1
          vmulss  xmm9, xmm6, xmm0
          vmulss  xmm8, xmm5, xmm0
          vmulss  xmm10, xmm4, xmm0
          vmovss  xmm0, dword ptr [rsp+180h+outOrigin]
          vsubss  xmm7, xmm0, dword ptr [r14]
          vmovss  xmm1, dword ptr [rsp+180h+outOrigin+4]
          vsubss  xmm4, xmm1, dword ptr [r14+4]
          vmovss  xmm0, dword ptr [rsp+180h+outOrigin+8]
          vsubss  xmm6, xmm0, dword ptr [r14+8]
          vmulss  xmm2, xmm4, xmm4
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm1, xmm1, xmm11, xmm0
          vdivss  xmm5, xmm11, xmm1
          vmulss  xmm0, xmm4, xmm5
          vmulss  xmm3, xmm0, xmm8
          vmulss  xmm1, xmm7, xmm5
          vmulss  xmm2, xmm1, xmm9
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm0, xmm6, xmm5
          vmulss  xmm1, xmm0, xmm10
          vaddss  xmm6, xmm4, xmm1
          vxorps  xmm7, xmm6, cs:__xmm@80000000800000008000000080000000
          vmovss  xmm8, [rsp+180h+var_124]
          vmovss  xmm9, cs:__real@3b808081
          vmovss  xmm10, [rsp+180h+var_120]
        }
      }
      if ( Dvar_GetBoolSafe("LMTKLROPNM") && *(_BYTE *)(_RDI + 48) )
      {
        v119 = *(_QWORD *)(_RDI + 40);
        v120 = *(_QWORD *)(_RDI + 32);
      }
      else
      {
        v119 = *(_QWORD *)(_RDI + 32);
        v120 = *(_QWORD *)(_RDI + 40);
      }
      if ( v119 )
      {
        __asm { vmovaps xmm2, xmm15; fraction }
        *(double *)&_XMM0 = GraphGetValueFromFraction(*(unsigned __int16 *)(v119 + 136), (const vec2_t *)(v119 + 8), *(const float *)&_XMM2);
        __asm
        {
          vmulss  xmm1, xmm6, xmm12
          vmulss  xmm2, xmm1, xmm14
          vmulss  xmm3, xmm2, xmm9
          vmulss  xmm0, xmm0, xmm3
          vmaxss  xmm6, xmm0, [rsp+180h+var_128]
          vmovss  [rsp+180h+var_128], xmm6
        }
      }
      if ( v120 )
      {
        __asm { vmovaps xmm2, xmm15; fraction }
        *(double *)&_XMM0 = GraphGetValueFromFraction(*(unsigned __int16 *)(v120 + 136), (const vec2_t *)(v120 + 8), *(const float *)&_XMM2);
        __asm
        {
          vmulss  xmm1, xmm7, xmm12
          vmulss  xmm2, xmm1, xmm14
          vmulss  xmm3, xmm2, xmm9
          vmulss  xmm0, xmm0, xmm3
          vmaxss  xmm12, xmm0, [rsp+180h+var_130]
          vmovss  [rsp+180h+var_130], xmm12
        }
      }
      else
      {
        __asm { vmovss  xmm12, [rsp+180h+var_130] }
      }
      ++v21;
    }
LABEL_50:
    memset(&outOrigin, 0, sizeof(outOrigin));
    _RBX += 14;
    --v26;
  }
  while ( v26 );
  v128 = DCONST_DVARFLT_cg_rumble_xb3_lf_mult;
  if ( !DCONST_DVARFLT_cg_rumble_xb3_lf_mult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_rumble_xb3_lf_mult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v128);
  __asm { vmulss  xmm7, xmm8, dword ptr [rdi+28h] }
  v130 = DCONST_DVARFLT_cg_rumble_xb3_hf_mult;
  if ( !DCONST_DVARFLT_cg_rumble_xb3_hf_mult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_rumble_xb3_hf_mult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v130);
  __asm { vmulss  xmm6, xmm10, dword ptr [rdi+28h] }
  v132 = DCONST_DVARFLT_cg_rumble_xb3_tr_mult;
  if ( !DCONST_DVARFLT_cg_rumble_xb3_tr_mult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_rumble_xb3_tr_mult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v132);
  __asm { vmulss  xmm9, xmm12, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_cg_rumble_xb3_tr_mult;
  if ( !DCONST_DVARFLT_cg_rumble_xb3_tr_mult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_rumble_xb3_tr_mult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm8, dword ptr [rdi+28h] }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNuma);
  v137 = ControllerFromClient;
  __asm { vmovaps xmm1, xmm13; min }
  if ( v21 )
  {
    __asm
    {
      vmovaps xmm2, xmm11; max
      vmovaps xmm0, xmm7; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm0; rumble }
    GPad_SetLowRumble(v137, *(float *)&_XMM1);
    __asm
    {
      vmovaps xmm2, xmm11; max
      vmovaps xmm1, xmm13; min
      vmovaps xmm0, xmm6; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm0; rumble }
    GPad_SetHighRumble(v137, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm0, xmm8, [rsp+180h+var_128]; val
      vmovaps xmm2, xmm11; max
      vmovaps xmm1, xmm13; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm0; rumble }
    GPad_SetLeftTriggerRumble(v137, *(float *)&_XMM1);
    __asm
    {
      vmovaps xmm2, xmm11; max
      vmovaps xmm1, xmm13; min
      vmovaps xmm0, xmm9; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm0; rumble }
    GPad_SetRightTriggerRumble(v137, *(float *)&_XMM1);
    __asm
    {
      vmovss  cs:lowRumbleDebugGlobal, xmm7
      vmovss  cs:highRumbleDebugGlobal, xmm6
    }
  }
  else
  {
    GPad_SetLowRumble(ControllerFromClient, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm13; rumble }
    GPad_SetHighRumble(v137, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm13; rumble }
    GPad_SetLeftTriggerRumble(v137, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm13; rumble }
    GPad_SetRightTriggerRumble(v137, *(float *)&_XMM1);
  }
  _R11 = &v180;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
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
  bool v17; 
  bool v18; 
  centity_t *Entity; 
  __int128 dir; 

  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps [rsp+98h+var_48], xmm8
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+98h+dir], xmm6
    vmovss  dword ptr [rsp+98h+dir+4], xmm6
    vmovss  dword ptr [rsp+98h+dir+8], xmm7
  }
  if ( !ar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 59, ASSERT_TYPE_ASSERT, "(ar)", (const char *)&queryFormat, "ar", dir) )
    __debugbreak();
  if ( !ar->rumbleInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 60, ASSERT_TYPE_ASSERT, "(ar->rumbleInfo)", (const char *)&queryFormat, "ar->rumbleInfo") )
    __debugbreak();
  _RSI = ar->rumbleInfo;
  CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+8]
  }
  v17 = ar->sourceType == RUMBLESOURCE_INVALID;
  v18 = ar->sourceType == RUMBLESOURCE_ENTITY;
  __asm
  {
    vcvtsi2ss xmm1, xmm1, edx
    vdivss  xmm8, xmm1, xmm0
  }
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
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+0Ch]; radius
    vcomiss xmm1, xmm6
  }
  if ( !v17 && !v18 )
  {
    CG_DebugCircle(outDebugStrPos, *(float *)&_XMM1, (const vec3_t *)&dir, &colorRed, 0, 3);
    __asm
    {
      vsubss  xmm0, xmm7, xmm8
      vmulss  xmm1, xmm0, dword ptr [rsi+0Ch]; radius
    }
    CG_DebugCircle(outDebugStrPos, *(float *)&_XMM1, (const vec3_t *)&dir, &colorYellow, 0, 3);
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
    vmovaps xmm8, [rsp+98h+var_48]
  }
}

/*
==============
CG_Rumble_DrawDebug
==============
*/
void CG_Rumble_DrawDebug(LocalClientNum_t localClientNum)
{
  __int64 v5; 
  const char *v8; 
  bool v9; 
  const ScreenPlacement *v10; 

  __asm
  {
    vmovss  xmm2, cs:highRumbleDebugGlobal
    vmovss  xmm1, cs:lowRumbleDebugGlobal
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm1, xmm1, xmm1
  }
  v5 = localClientNum;
  __asm
  {
    vmovq   r8, xmm2
    vmovq   rdx, xmm1
  }
  v8 = j_va("Rumble: Low %.3f, High %.3f\n", _RDX, _R8);
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v10 = &scrPlaceViewDisplay[v5];
      goto LABEL_8;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v9 )
      __debugbreak();
  }
  v10 = &scrPlaceFull;
LABEL_8:
  __asm
  {
    vmovss  xmm2, cs:__real@43960000; y
    vxorps  xmm1, xmm1, xmm1; x
  }
  CG_DrawSmallDevStringColor(v10, *(float *)&_XMM1, *(float *)&_XMM2, v8, &colorRed, 6);
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
  int v7; 
  int *p_startTime; 
  __int64 i; 
  int *v10; 
  RumbleSourceType *p_sourceType; 
  int v12; 
  int v13; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 525, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v7 = 0;
  p_startTime = &arArray[2].startTime;
  for ( i = 0i64; i < 32; i += 4i64 )
  {
    v10 = p_startTime - 30;
    if ( *(p_startTime - 28) <= 0 )
      break;
    v10 = p_startTime - 16;
    if ( *(p_startTime - 14) <= 0 )
    {
      ++v7;
      break;
    }
    v10 = p_startTime - 2;
    if ( *p_startTime <= 0 )
    {
      v7 += 2;
      break;
    }
    v10 = p_startTime + 12;
    if ( p_startTime[14] <= 0 )
    {
      v7 += 3;
      break;
    }
    p_startTime += 56;
    v7 += 4;
  }
  if ( v7 != 32 )
    return (ActiveRumble *)v10;
  p_sourceType = &arArray->sourceType;
  v12 = 32;
  v13 = 0;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm6
    vxorps  xmm6, xmm6, xmm6
  }
  do
  {
    if ( !*((_QWORD *)p_sourceType - 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 487, ASSERT_TYPE_ASSERT, "(ar->rumbleInfo)", (const char *)&queryFormat, "ar->rumbleInfo") )
      __debugbreak();
    if ( *p_sourceType == RUMBLESOURCE_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 488, ASSERT_TYPE_ASSERT, "(ar->sourceType != RUMBLESOURCE_INVALID)", (const char *)&queryFormat, "ar->sourceType != RUMBLESOURCE_INVALID") )
      __debugbreak();
    if ( !*((_DWORD *)p_sourceType - 1) && (*p_sourceType != RUMBLESOURCE_ENTITY || *((_DWORD *)p_sourceType + 2) != cgameGlob->predictedPlayerState.clientNum) )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rax+8]
        vdivss  xmm2, xmm1, xmm0
        vcomiss xmm2, xmm6
      }
      if ( cgameGlob->time > *((_DWORD *)p_sourceType - 2) )
      {
        v12 = v13;
        __asm { vmovaps xmm6, xmm2 }
      }
    }
    ++v13;
    p_sourceType += 14;
  }
  while ( v13 < 32 );
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
  if ( v12 == 32 )
  {
    Com_PrintWarning(16, "FindClosestToDyingActiveRumble(): Couldn't find a suitable rumble to stop, defaulting to index zero.\n", i);
    v12 = 0;
  }
  return &arArray[v12];
}

/*
==============
CG_Rumble_PlayDeferred
==============
*/
void CG_Rumble_PlayDeferred(LocalClientNum_t localClientNum, const RumbleInfo *rumble, RumbleLoopType loopType, RumbleSourceType type, int entityNum, const vec3_t *pos, float scale, bool updateDuplicates)
{
  int deferredRumbleCount; 
  int v17; 
  int v18; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  Sys_EnterCriticalSection(CRITSECT_CG_RUMBLE);
  deferredRumbleCount = _RBX->deferredRumbleCount;
  if ( deferredRumbleCount < 4 )
  {
    if ( (unsigned int)deferredRumbleCount >= 4 )
    {
      v18 = 4;
      v17 = _RBX->deferredRumbleCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 383, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->deferredRumbleCount ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->deferredRumbles ) ) + 0 ) )", "cgameGlob->deferredRumbleCount doesn't index ARRAY_COUNT( cgameGlob->deferredRumbles )\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    _RDX = &vec3_origin;
    _R8 = 5i64 * _RBX->deferredRumbleCount + 52790;
    *(&_RBX->predictedPlayerState.inputTime + 2 * _R8) = entityNum;
    *((_QWORD *)&_RBX->__vftable + _R8) = rumble;
    *(&_RBX->predictedPlayerState.commandTime + 2 * _R8) = loopType;
    if ( pos )
      _RDX = pos;
    *(&_RBX->predictedPlayerState.serverTime + 2 * _R8) = type;
    __asm
    {
      vmovsd  xmm0, qword ptr [rdx]
      vmovsd  qword ptr [rbx+r8*8+14h], xmm0
      vmovss  xmm0, [rsp+48h+scale]
    }
    _RBX->predictedPlayerState.pm_flags.m_flags[2 * _R8] = LODWORD(_RDX->v[2]);
    LOBYTE(_RBX->predictedPlayerState.otherFlags.m_flags[2 * _R8]) = updateDuplicates;
    __asm { vmovss  dword ptr [rbx+r8*8+20h], xmm0 }
    ++_RBX->deferredRumbleCount;
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
  float v6; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 857, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_18], xmm0
  }
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_LOOP, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, v6, 0);
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
  float v7; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 847, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+48h+var_18], xmm0
    }
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_LOOP, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, v7, 0);
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
  float v6; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 884, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_18], xmm0
  }
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_LOOP_NOENTFLAG, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, v6, 0);
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
  float v7; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 874, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+48h+var_18], xmm0
    }
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_LOOP_NOENTFLAG, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, v7, 0);
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
  float v4; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_18], xmm0
  }
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_LOOP, RUMBLESOURCE_ENTITY, entityNum, NULL, v4, 0);
}

/*
==============
CG_Rumble_PlayLoopOnEntityByName
==============
*/
void CG_Rumble_PlayLoopOnEntityByName(LocalClientNum_t localClientNum, const char *rumbleName, int entityNum)
{
  const RumbleInfo *RumbleByName; 
  float v8; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+48h+var_18], xmm0
    }
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_LOOP, RUMBLESOURCE_ENTITY, entityNum, NULL, v8, 0);
  }
  else
  {
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
  }
}

/*
==============
CG_Rumble_PlayLoopOnPosition
==============
*/
void CG_Rumble_PlayLoopOnPosition(LocalClientNum_t localClientNum, const RumbleInfo *rumble, const vec3_t *pos)
{
  float v4; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_18], xmm0
  }
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_LOOP, RUMBLESOURCE_POS, 0, pos, v4, 0);
}

/*
==============
CG_Rumble_PlayLoopOnPositionByName
==============
*/
void CG_Rumble_PlayLoopOnPositionByName(LocalClientNum_t localClientNum, const char *rumbleName, const vec3_t *pos)
{
  const RumbleInfo *RumbleByName; 
  float v8; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+48h+var_18], xmm0
    }
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_LOOP, RUMBLESOURCE_POS, 0, pos, v8, 0);
  }
  else
  {
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
  }
}

/*
==============
CG_Rumble_PlayOnClient
==============
*/
void CG_Rumble_PlayOnClient(LocalClientNum_t localClientNum, const RumbleInfo *rumble)
{
  cg_t *LocalClientGlobals; 
  float v6; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 787, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_18], xmm0
  }
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, v6, 0);
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
  float v7; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 777, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+48h+var_18], xmm0
    }
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, v7, 0);
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
  float v7; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 804, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+48h+var_18], xmm0
    }
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, v7, 0);
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

void __fastcall CG_Rumble_PlayOnClientScaledWithUpdate(LocalClientNum_t localClientNum, const RumbleInfo *rumble, double scale)
{
  cg_t *LocalClientGlobals; 
  float v9; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 830, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  __asm { vmovss  [rsp+58h+var_28], xmm6 }
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, v9, 1);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
CG_Rumble_PlayOnClientScaledWithUpdateByName
==============
*/

void __fastcall CG_Rumble_PlayOnClientScaledWithUpdateByName(LocalClientNum_t localClientNum, const char *rumbleName, double scale)
{
  const RumbleInfo *RumbleByName; 
  cg_t *LocalClientGlobals; 
  float v10; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 821, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    __asm { vmovss  [rsp+58h+var_28], xmm6 }
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, v10, 1);
  }
  else
  {
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
CG_Rumble_PlayOnEntity
==============
*/
void CG_Rumble_PlayOnEntity(LocalClientNum_t localClientNum, const RumbleInfo *rumble, int entityNum)
{
  float v4; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_18], xmm0
  }
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, entityNum, NULL, v4, 0);
}

/*
==============
CG_Rumble_PlayOnEntityByName
==============
*/
void CG_Rumble_PlayOnEntityByName(LocalClientNum_t localClientNum, const char *rumbleName, int entityNum)
{
  const RumbleInfo *RumbleByName; 
  float v8; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+48h+var_18], xmm0
    }
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, entityNum, NULL, v8, 0);
  }
  else
  {
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
  }
}

/*
==============
CG_Rumble_PlayOnPosition
==============
*/
void CG_Rumble_PlayOnPosition(LocalClientNum_t localClientNum, const RumbleInfo *rumble, const vec3_t *pos)
{
  float v4; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_18], xmm0
  }
  PlayRumbleInternal(localClientNum, rumble, RUMBLELOOP_ONESHOT, RUMBLESOURCE_POS, 0, pos, v4, 0);
}

/*
==============
CG_Rumble_PlayOnPositionByName
==============
*/
void CG_Rumble_PlayOnPositionByName(LocalClientNum_t localClientNum, const char *rumbleName, const vec3_t *pos)
{
  const RumbleInfo *RumbleByName; 
  float v8; 

  RumbleByName = Rumble_GetRumbleByName(rumbleName);
  if ( RumbleByName )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+48h+var_18], xmm0
    }
    PlayRumbleInternal(localClientNum, RumbleByName, RUMBLELOOP_ONESHOT, RUMBLESOURCE_POS, 0, pos, v8, 0);
  }
  else
  {
    Com_PrintWarning(14, "Can't play rumble asset '%s' because it is not registered.\n", rumbleName);
  }
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
  unsigned int v6; 
  DeferredRumbleStop *deferredRumbleStops; 
  const RumbleInfo *rumble; 
  int entityNum; 
  int v10; 
  int *p_startTime; 
  __int64 v12; 
  vec3_t *pos; 
  __int64 scale; 
  float scalea; 
  unsigned int v17; 
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
    _RBX = &LocalClientGlobals->deferredRumbles[0].scale;
    do
    {
      if ( v3 >= 4 )
      {
        LODWORD(scale) = 4;
        LODWORD(pos) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->deferredRumbles ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( cgameGlob->deferredRumbles )\n\t%i not in [0, %i)", pos, scale) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  [rsp+78h+scale], xmm0
      }
      PlayRumbleInternal(v1, *((const RumbleInfo **)_RBX - 4), *((RumbleLoopType *)_RBX - 6), *((RumbleSourceType *)_RBX - 5), *((_DWORD *)_RBX - 4), (const vec3_t *)_RBX - 1, scalea, *((_BYTE *)_RBX + 4));
      ++v3;
      _RBX += 10;
    }
    while ( (signed int)v3 < LocalClientGlobals->deferredRumbleCount );
  }
  v6 = 0;
  v17 = 0;
  if ( LocalClientGlobals->deferredRumbleStopCount > 0 )
  {
    deferredRumbleStops = LocalClientGlobals->deferredRumbleStops;
    do
    {
      if ( v6 >= 4 )
      {
        LODWORD(scale) = 4;
        LODWORD(pos) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 444, ASSERT_TYPE_ASSERT, "(unsigned)( stopIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->deferredRumbleStops ) ) + 0 ) )", "stopIndex doesn't index ARRAY_COUNT( cgameGlob->deferredRumbleStops )\n\t%i not in [0, %i)", pos, scale) )
          __debugbreak();
      }
      rumble = deferredRumbleStops->rumble;
      entityNum = deferredRumbleStops->entityNum;
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 934, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      v10 = 0;
      p_startTime = &CG_GetLocalClientGlobals(v1)->crData.activeRumbles[0].startTime;
      v12 = 32i64;
      do
      {
        if ( *p_startTime > 0 && p_startTime[2] == 1 )
        {
          if ( !*((_QWORD *)p_startTime - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 951, ASSERT_TYPE_ASSERT, "(ar->rumbleInfo)", (const char *)&queryFormat, "ar->rumbleInfo") )
            __debugbreak();
          if ( p_startTime[4] == entityNum && *((const RumbleInfo **)p_startTime - 1) == rumble )
          {
            if ( (unsigned int)(p_startTime[1] - 1) <= 1 || !v10 )
            {
              *p_startTime = -1;
              *((_QWORD *)p_startTime - 1) = 0i64;
              p_startTime[2] = 0;
            }
            ++v10;
          }
        }
        p_startTime += 14;
        --v12;
      }
      while ( v12 );
      v2 = LocalClientGlobals;
      v1 = localClientNum;
      v6 = v17 + 1;
      ++deferredRumbleStops;
      v17 = v6;
    }
    while ( (signed int)v6 < LocalClientGlobals->deferredRumbleStopCount );
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
  int v3; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = 0;
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
    GPad_StopRumbles(v3++, 1);
  while ( v3 < 8 );
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  cs:lowRumbleDebugGlobal, xmm0
    vmovss  cs:highRumbleDebugGlobal, xmm0
  }
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
  bool v14; 
  unsigned int v16; 
  __int64 v17; 
  ActiveRumble *AvailableRumble; 
  bool v20; 
  centity_t *Entity; 
  centity_t *v24; 
  entityState_t *p_nextState; 
  bool v30; 
  int nextUseCount; 
  bool v41; 
  cg_t *v48; 
  int clientNum; 
  char *fmt; 
  double v51; 
  double v52; 
  int v53[3]; 
  cg_t *v55; 
  int v56; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v55 = LocalClientGlobals;
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
  v14 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE);
  _RBX = pos;
  v16 = entityNum;
  if ( v14 )
  {
    v17 = 0i64;
    _RAX = &LocalClientGlobals->crData.activeRumbles[0].source.pos.v[2];
    while ( 1 )
    {
      AvailableRumble = (ActiveRumble *)(_RAX - 8);
      if ( *((const RumbleInfo **)_RAX - 4) == rumble && *((_DWORD *)_RAX - 5) == loopType && *((_DWORD *)_RAX - 4) == type )
      {
        if ( type == RUMBLESOURCE_ENTITY )
        {
          v20 = *((_DWORD *)_RAX - 2) == entityNum;
        }
        else
        {
          v20 = type == RUMBLESOURCE_POS;
          if ( type != RUMBLESOURCE_POS )
            break;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx]
            vucomiss xmm0, dword ptr [rax-8]
            vmovss  xmm0, dword ptr [rbx+4]
            vucomiss xmm0, dword ptr [rax-4]
            vmovss  xmm0, dword ptr [rbx+8]
            vucomiss xmm0, dword ptr [rax]
          }
        }
        if ( v20 )
          break;
      }
      ++v17;
      _RAX += 14;
      if ( v17 >= 32 )
        goto LABEL_34;
    }
    v30 = !updateDuplicates;
    if ( updateDuplicates )
      goto LABEL_75;
  }
  else
  {
LABEL_34:
    AvailableRumble = CG_Rumble_NextAvailableRumble(LocalClientGlobals, LocalClientGlobals->crData.activeRumbles);
  }
  if ( type == RUMBLESOURCE_ENTITY )
  {
    Entity = CG_GetEntity(localClientNum, v16);
    v24 = Entity;
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
          _RDI = &v24->prevState.pos;
          if ( v24 == (centity_t *)-292i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)v24 + 399, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
            __debugbreak();
          if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
          {
            v53[2] = LODWORD(v24->prevState.pos.trBase.v[1]) ^ LODWORD(v24->prevState.pos.trBase.v[2]) ^ s_trbase_aab_Z;
            v53[1] = LODWORD(v24->prevState.pos.trBase.v[0]) ^ LODWORD(v24->prevState.pos.trBase.v[1]) ^ s_trbase_aab_Y;
            v53[0] = LODWORD(v24->prevState.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
            memset(&v55, 0, sizeof(v55));
            __asm
            {
              vmovss  xmm0, [rsp+98h+var_50]
              vmovss  [rsp+98h+arg_18], xmm0
            }
            if ( (v56 & 0x7F800000) == 2139095040 )
              goto LABEL_86;
            __asm
            {
              vmovss  xmm0, [rsp+98h+var_4C]
              vmovss  [rsp+98h+arg_18], xmm0
            }
            if ( (v56 & 0x7F800000) == 2139095040 )
              goto LABEL_86;
            __asm
            {
              vmovss  xmm0, [rsp+98h+var_48]
              vmovss  [rsp+98h+arg_18], xmm0
            }
            if ( (v56 & 0x7F800000) == 2139095040 )
            {
LABEL_86:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                __debugbreak();
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+0Ch]
              vmovss  [rsp+98h+var_50], xmm0
              vmovss  xmm1, dword ptr [rdi+10h]
              vmovss  [rsp+98h+var_4C], xmm1
              vmovss  xmm0, dword ptr [rdi+14h]
              vmovss  [rsp+98h+var_48], xmm0
            }
          }
          __asm
          {
            vmovss  xmm0, [rsp+98h+var_48]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovss  xmm1, [rsp+98h+var_4C]
            vcvtss2sd xmm1, xmm1, xmm1
            vmovss  xmm2, [rsp+98h+var_50]
            vcvtss2sd xmm2, xmm2, xmm2
            vmovsd  [rsp+98h+var_68], xmm0
            vmovsd  [rsp+98h+var_70], xmm1
            vmovsd  [rsp+98h+fmt], xmm2
          }
          Com_PrintError(16, "Non-player, non-agent entity #%i of type %i at (%.0f, %.0f, %.0f) is trying to play non-broadcasting rumble \"%s\" on themselves.\n", v16, (unsigned int)v24->nextState.eType, *(double *)&fmt, v51, v52, rumble->name);
          memset(v53, 0, sizeof(v53));
          return;
        }
      }
      LocalClientGlobals = v55;
    }
    AvailableRumble->source.entityNum = v16;
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 101, ASSERT_TYPE_ASSERT, "(cent != 0)", (const char *)&queryFormat, "cent != NULL") )
      __debugbreak();
    v30 = (v24->flags & 1) == 0;
    if ( (v24->flags & 1) != 0 )
      nextUseCount = v24->nextUseCount;
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
    v30 = _RBX == NULL;
    if ( !_RBX )
    {
      v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 639, ASSERT_TYPE_ASSERT, "(pos)", (const char *)&queryFormat, "pos");
      v30 = !v41;
      if ( v41 )
        __debugbreak();
    }
    AvailableRumble->source.entityNum = LODWORD(_RBX->v[0]);
    AvailableRumble->source.pos.v[1] = _RBX->v[1];
    AvailableRumble->source.pos.v[2] = _RBX->v[2];
  }
  AvailableRumble->sourceType = type;
  AvailableRumble->startTime = LocalClientGlobals->time;
  AvailableRumble->rumbleInfo = rumble;
  AvailableRumble->loopType = loopType;
LABEL_75:
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, [rsp+98h+scale]
    vcomiss xmm1, xmm0
    vcomiss xmm1, cs:__real@3f800000
  }
  if ( !v30 )
  {
    __asm
    {
      vcvtss2sd xmm3, xmm1, xmm1
      vmovq   r9, xmm3
    }
    Com_PrintWarning(16, "Rumble \"%s\" has invalid scale value of %f.\n", rumble->name, _R9);
    __asm { vmovss  xmm1, cs:__real@3f800000 }
  }
  __asm
  {
    vmulss  xmm0, xmm1, cs:__real@437f0000
    vcvttss2si eax, xmm0
  }
  AvailableRumble->scale = _EAX;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) || (v48 = CG_GetLocalClientGlobals(localClientNum), !v48->transitionSettleIsActive) && (!v48->nextSnap || v48->predictedPlayerState.pm_type != 5 && (clientNum = v48->predictedPlayerState.clientNum, clientNum < cls.maxClients) && clientNum == v48->clientNum) )
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
  __int32 v8; 
  __int32 v9; 
  const char *v10; 
  fileHandle_t *v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  unsigned __int64 v22; 
  const dvar_t *v23; 
  const RumbleInfo *v24; 
  const dvar_t *v28; 
  bool enabled; 
  const RumbleInfo *v30; 
  cg_t *LocalClientGlobals; 
  const snapshot_t *nextSnap; 
  RumbleLoopType v33; 
  char *fmt; 
  float scale; 
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
    v8 = event - 2;
    if ( v8 )
    {
      v9 = v8 - 2;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          Com_sprintf<256>((char (*)[256])dest, "rumble\\%s", data[1]->name);
          v11 = FS_FOpenTextFileWrite((fileHandle_t *)dest, v10);
          if ( v11 != (fileHandle_t *)-1i64 )
          {
            v12 = *graph->knotCount;
            Com_sprintf(buffer, 0x400ui64, "RUMBLEGRAPHFILE\n\n%d\n", v12);
            v13 = -1i64;
            do
              ++v13;
            while ( buffer[v13] );
            FS_Write(buffer, v13, (fileHandle_t)v11);
            if ( (unsigned int)v12 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1063, ASSERT_TYPE_ASSERT, "( knotCount ) <= ( 16 )", "%s <= %s\n\t%i, %i", "knotCount", "MAX_RUMBLE_GRAPH_KNOTS", v12, 16) )
              __debugbreak();
            v14 = v12;
            if ( (_DWORD)v12 )
            {
              _RDI = 0i64;
              do
              {
                _RAX = graph->knots;
                __asm
                {
                  vmovss  xmm3, dword ptr [rax+rdi*8]
                  vmovss  xmm0, dword ptr [rax+rdi*8+4]
                  vcvtss2sd xmm3, xmm3, xmm3
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmovq   r9, xmm3
                  vmovsd  [rsp+588h+fmt], xmm0
                }
                Com_sprintf(buffer, 0x400ui64, "%.4f %.4f\n", *(double *)&_XMM3, *(double *)&fmt);
                v22 = -1i64;
                do
                  ++v22;
                while ( buffer[v22] );
                FS_Write(buffer, v22, (fileHandle_t)v11);
                ++_RDI;
              }
              while ( _RDI < v14 );
            }
            FS_FCloseFile((fileHandle_t)v11);
          }
        }
      }
      else
      {
        v23 = DVARFLT_cg_rumble_devgui_duration;
        if ( !DVARFLT_cg_rumble_devgui_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
          __debugbreak();
        if ( v23->modified )
        {
          v24 = *data;
          _RAX = Dvar_ValidatePtr(DVARFLT_cg_rumble_devgui_duration);
          __asm
          {
            vmovss  xmm0, dword ptr [rax+28h]
            vmulss  xmm1, xmm0, cs:__real@447a0000
            vcvttss2si eax, xmm1
          }
          v24->duration = (int)_RAX;
        }
      }
    }
    else
    {
      CG_Rumble_StopAll(localClientNum);
      v28 = DVARBOOL_cg_rumble_devgui_loop;
      if ( !DVARBOOL_cg_rumble_devgui_loop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_rumble_devgui_loop") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      enabled = v28->current.enabled;
      v30 = *data;
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      nextSnap = LocalClientGlobals->nextSnap;
      if ( enabled )
      {
        if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 857, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
          __debugbreak();
        v33 = RUMBLELOOP_LOOP;
      }
      else
      {
        if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 787, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
          __debugbreak();
        v33 = RUMBLELOOP_ONESHOT;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  [rsp+588h+scale], xmm0
      }
      PlayRumbleInternal(localClientNum, v30, v33, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, scale, 0);
    }
  }
  else
  {
    Dvar_SetBool_Internal(DVARBOOL_cg_rumble_devgui_loop, 0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+8]
      vmulss  xmm1, xmm0, cs:__real@3a83126f; value
    }
    Dvar_SetFloat_Internal(DVARFLT_cg_rumble_devgui_duration, *(float *)&_XMM1);
  }
}

/*
==============
RumbleGraphTextCallback
==============
*/

void __fastcall RumbleGraphTextCallback(const DevGraph *graph, double inputX, double inputY, char *text, const int textLength)
{
  unsigned __int64 v12; 
  double textLengtha; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm2
  }
  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1122, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !graph->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1123, ASSERT_TYPE_ASSERT, "(graph->data)", (const char *)&queryFormat, "graph->data") )
    __debugbreak();
  if ( !*((_QWORD *)graph->data + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_rumble.cpp", 1126, ASSERT_TYPE_ASSERT, "(graphInfo->rumbleGraph)", (const char *)&queryFormat, "graphInfo->rumbleGraph") )
    __debugbreak();
  v12 = textLength;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtss2sd xmm4, xmm6, xmm6
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+8]
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmulss  xmm2, xmm1, xmm7
    vcvtss2sd xmm3, xmm2, xmm2
    vmovq   r9, xmm3
    vmovsd  [rsp+58h+textLength], xmm4
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  Com_sprintf_truncate(text, v12, "Time: %.3f sec, Rumble Value: %.3f", *(double *)&_XMM3, textLengtha);
}

