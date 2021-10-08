/*
==============
G_ActorVisSP_Update
==============
*/

void G_ActorVisSP_Update(void)
{
  ?G_ActorVisSP_Update@@YAXXZ();
}

/*
==============
G_ActorVisSP_HasBeenSeenByPlayerWithin
==============
*/

bool __fastcall G_ActorVisSP_HasBeenSeenByPlayerWithin(actor_s *pActor, int msec)
{
  return ?G_ActorVisSP_HasBeenSeenByPlayerWithin@@YA_NPEAUactor_s@@H@Z(pActor, msec);
}

/*
==============
G_ActorVisSP_HasBeenSeenByPlayerWithin
==============
*/
bool G_ActorVisSP_HasBeenSeenByPlayerWithin(actor_s *pActor, int msec)
{
  return pActor->timeLastSeenByPlayer >= level.time - msec;
}

/*
==============
G_ActorVisSP_Update
==============
*/
void G_ActorVisSP_Update()
{
  const gentity_s *v10; 
  gclient_s *client; 
  actor_s *v12; 
  actor_s *v16; 
  const sentient_s *sentient; 
  const dvar_t *v44; 
  const dvar_t *v50; 
  char v62; 
  const sentient_s *v72; 
  unsigned __int16 v73; 
  vec3_t outOrigin; 
  vec3_t vEyePosOut; 
  vec3_t outForward; 
  bitarray<224> iTeamFlags; 
  vec3_t end; 
  vec3_t outUp; 
  vec3_t outRight; 
  trace_t results; 

  if ( G_IsEntityInUse(0) )
  {
    v10 = g_entities;
    client = g_entities->client;
    if ( client )
    {
      G_Client_GetViewOrigin(&client->ps, &outOrigin);
      G_Client_GetViewDirection(v10, &outForward, &outRight, &outUp);
      v12 = NULL;
      _RAX = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? Com_TeamsSP_GetAllTeamFlags() : Com_TeamsMP_GetAllTeamFlags();
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rsp+1F0h+iTeamFlags.array], xmm0
        vmovsd  xmm1, qword ptr [rax+10h]
        vmovsd  qword ptr [rbp+0F0h+iTeamFlags.array+10h], xmm1
      }
      iTeamFlags.array[6] = _RAX->array[6];
      v16 = AIActorInterface::FirstActor(&iTeamFlags);
      if ( v16 )
      {
        __asm
        {
          vmovaps [rsp+1F0h+var_50], xmm8
          vmovss  xmm8, cs:__real@3f800000
          vmovaps [rsp+1F0h+var_A0], xmm13
          vmovss  xmm13, cs:__real@3c8efa35
          vmovaps [rsp+1F0h+var_B0], xmm14
          vmovss  xmm14, cs:__real@3fc90fdb
          vmovaps [rsp+1F0h+var_C0], xmm15
          vmovss  xmm15, cs:__real@80000000
          vmovaps [rsp+1F0h+var_30], xmm6
          vmovaps [rsp+1F0h+var_40], xmm7
          vmovaps [rsp+1F0h+var_60], xmm9
          vmovaps [rsp+1F0h+var_70], xmm10
          vmovaps [rsp+1F0h+var_80], xmm11
          vmovaps [rsp+1F0h+var_90], xmm12
        }
        do
        {
          if ( v16->Physics.bIsAlive )
          {
            if ( !v16->painDeath.delayedDeath )
            {
              sentient = v16->sentient;
              if ( sentient )
              {
                Sentient_GetEyePosition(sentient, &vEyePosOut);
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1F0h+vEyePosOut]
                  vsubss  xmm6, xmm0, dword ptr [rsp+1F0h+outOrigin]
                  vmovss  xmm1, dword ptr [rsp+1F0h+vEyePosOut+4]
                  vsubss  xmm5, xmm1, dword ptr [rsp+1F0h+outOrigin+4]
                  vmovss  xmm0, dword ptr [rsp+1F0h+vEyePosOut+8]
                  vsubss  xmm4, xmm0, dword ptr [rsp+1F0h+outOrigin+8]
                }
                _RSI = DVARFLT_actorVisibilityCheckAngleDistMin;
                __asm
                {
                  vmulss  xmm2, xmm5, xmm5
                  vmulss  xmm1, xmm6, xmm6
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm3, xmm2, xmm1
                  vaddss  xmm2, xmm3, xmm0
                  vsqrtss xmm9, xmm2, xmm2
                  vcmpless xmm0, xmm9, xmm15
                  vblendvps xmm0, xmm9, xmm8, xmm0
                  vdivss  xmm1, xmm8, xmm0
                  vmulss  xmm10, xmm1, xmm6
                  vmulss  xmm11, xmm1, xmm5
                  vmulss  xmm12, xmm1, xmm4
                }
                if ( !DVARFLT_actorVisibilityCheckAngleDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorVisibilityCheckAngleDistMin") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(_RSI);
                __asm { vmovss  xmm7, dword ptr [rsi+28h] }
                _RSI = DVARFLT_actorVisibilityCheckAngleDistMax;
                if ( !DVARFLT_actorVisibilityCheckAngleDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorVisibilityCheckAngleDistMax") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(_RSI);
                __asm { vmovss  xmm6, dword ptr [rsi+28h] }
                v44 = DVARFLT_actorVisibilityCheckAngleDistMin;
                if ( !DVARFLT_actorVisibilityCheckAngleDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorVisibilityCheckAngleDistMin") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v44);
                __asm
                {
                  vsubss  xmm0, xmm6, dword ptr [rsi+28h]
                  vsubss  xmm1, xmm9, xmm7
                  vdivss  xmm0, xmm1, xmm0; val
                  vxorps  xmm1, xmm1, xmm1; min
                  vmovaps xmm2, xmm8; max
                }
                *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v50 = DVARFLT_actorVisibilityMinCheckAngle;
                __asm { vmovaps xmm7, xmm0 }
                if ( !DVARFLT_actorVisibilityMinCheckAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorVisibilityMinCheckAngle") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v50);
                __asm
                {
                  vmulss  xmm1, xmm11, dword ptr [rsp+1F0h+outForward+4]
                  vmulss  xmm0, xmm10, dword ptr [rsp+1F0h+outForward]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm12, dword ptr [rsp+1F0h+outForward+8]
                  vmulss  xmm0, xmm7, dword ptr [rsi+28h]
                  vaddss  xmm6, xmm2, xmm1
                  vmulss  xmm2, xmm0, xmm13
                  vsubss  xmm1, xmm8, xmm7
                  vmulss  xmm0, xmm1, xmm14
                  vaddss  xmm0, xmm2, xmm0; X
                }
                *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
                __asm { vcomiss xmm6, xmm0 }
                if ( !v62 && (!v12 || v16->timeLastCheckedPlayerVisibility < v12->timeLastCheckedPlayerVisibility) )
                  v12 = v16;
              }
            }
          }
          v16 = AIActorInterface::NextActor(v16, &iTeamFlags);
        }
        while ( v16 );
        __asm
        {
          vmovaps xmm15, [rsp+1F0h+var_C0]
          vmovaps xmm14, [rsp+1F0h+var_B0]
          vmovaps xmm13, [rsp+1F0h+var_A0]
          vmovaps xmm12, [rsp+1F0h+var_90]
          vmovaps xmm11, [rsp+1F0h+var_80]
          vmovaps xmm10, [rsp+1F0h+var_70]
          vmovaps xmm9, [rsp+1F0h+var_60]
          vmovaps xmm7, [rsp+1F0h+var_40]
          vmovaps xmm6, [rsp+1F0h+var_30]
        }
        if ( v12 )
        {
          v72 = v12->sentient;
          v12->timeLastCheckedPlayerVisibility = level.time;
          Sentient_GetEyePosition(v72, &end);
          G_Main_LocationalTrace(&results, &outOrigin, &end, 0, 41970977, NULL);
          v73 = truncate_cast<unsigned short,unsigned int>(results.hitId);
          __asm
          {
            vmovss  xmm0, [rbp+0F0h+results.fraction]
            vcomiss xmm0, xmm8
          }
          if ( !v62 || results.hitType == TRACE_HITTYPE_ENTITY && v73 == v12->ent->s.number )
            v12->timeLastSeenByPlayer = level.time;
        }
        __asm { vmovaps xmm8, [rsp+1F0h+var_50] }
      }
    }
  }
}

