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
void G_ActorVisSP_Update(void)
{
  const gentity_s *v0; 
  gclient_s *client; 
  actor_s *v2; 
  bitarray<224> *v3; 
  actor_s *v4; 
  const sentient_s *sentient; 
  const dvar_t *v6; 
  __int128 v8; 
  float v11; 
  float v12; 
  float v13; 
  float value; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  double v18; 
  const dvar_t *v19; 
  float v20; 
  const sentient_s *v21; 
  unsigned __int16 v22; 
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
    v0 = g_entities;
    client = g_entities->client;
    if ( client )
    {
      G_Client_GetViewOrigin(&client->ps, &outOrigin);
      G_Client_GetViewDirection(v0, &outForward, &outRight, &outUp);
      v2 = NULL;
      v3 = (bitarray<224> *)(Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? Com_TeamsSP_GetAllTeamFlags() : Com_TeamsMP_GetAllTeamFlags());
      iTeamFlags = *v3;
      v4 = AIActorInterface::FirstActor(&iTeamFlags);
      if ( v4 )
      {
        do
        {
          if ( v4->Physics.bIsAlive )
          {
            if ( !v4->painDeath.delayedDeath )
            {
              sentient = v4->sentient;
              if ( sentient )
              {
                Sentient_GetEyePosition(sentient, &vEyePosOut);
                v8 = LODWORD(vEyePosOut.v[1]);
                v6 = DVARFLT_actorVisibilityCheckAngleDistMin;
                *(float *)&v8 = fsqrt((float)((float)((float)(vEyePosOut.v[1] - outOrigin.v[1]) * (float)(vEyePosOut.v[1] - outOrigin.v[1])) + (float)((float)(vEyePosOut.v[0] - outOrigin.v[0]) * (float)(vEyePosOut.v[0] - outOrigin.v[0]))) + (float)((float)(vEyePosOut.v[2] - outOrigin.v[2]) * (float)(vEyePosOut.v[2] - outOrigin.v[2])));
                _XMM9 = v8;
                __asm
                {
                  vcmpless xmm0, xmm9, xmm15
                  vblendvps xmm0, xmm9, xmm8, xmm0
                }
                v11 = (float)(1.0 / *(float *)&_XMM0) * (float)(vEyePosOut.v[0] - outOrigin.v[0]);
                v12 = (float)(1.0 / *(float *)&_XMM0) * (float)(vEyePosOut.v[1] - outOrigin.v[1]);
                v13 = (float)(1.0 / *(float *)&_XMM0) * (float)(vEyePosOut.v[2] - outOrigin.v[2]);
                if ( !DVARFLT_actorVisibilityCheckAngleDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorVisibilityCheckAngleDistMin") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v6);
                value = v6->current.value;
                v15 = DVARFLT_actorVisibilityCheckAngleDistMax;
                if ( !DVARFLT_actorVisibilityCheckAngleDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorVisibilityCheckAngleDistMax") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v15);
                v16 = v15->current.value;
                v17 = DVARFLT_actorVisibilityCheckAngleDistMin;
                if ( !DVARFLT_actorVisibilityCheckAngleDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorVisibilityCheckAngleDistMin") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v17);
                v18 = I_fclamp((float)(*(float *)&v8 - value) / (float)(v16 - v17->current.value), 0.0, 1.0);
                v19 = DVARFLT_actorVisibilityMinCheckAngle;
                if ( !DVARFLT_actorVisibilityMinCheckAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorVisibilityMinCheckAngle") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v19);
                v20 = (float)((float)(v12 * outForward.v[1]) + (float)(v11 * outForward.v[0])) + (float)(v13 * outForward.v[2]);
                if ( v20 >= cosf_0((float)((float)(*(float *)&v18 * v19->current.value) * 0.017453292) + (float)((float)(1.0 - *(float *)&v18) * 1.5707964)) && (!v2 || v4->timeLastCheckedPlayerVisibility < v2->timeLastCheckedPlayerVisibility) )
                  v2 = v4;
              }
            }
          }
          v4 = AIActorInterface::NextActor(v4, &iTeamFlags);
        }
        while ( v4 );
        if ( v2 )
        {
          v21 = v2->sentient;
          v2->timeLastCheckedPlayerVisibility = level.time;
          Sentient_GetEyePosition(v21, &end);
          G_Main_LocationalTrace(&results, &outOrigin, &end, 0, 41970977, NULL);
          v22 = truncate_cast<unsigned short,unsigned int>(results.hitId);
          if ( results.fraction >= 1.0 || results.hitType == TRACE_HITTYPE_ENTITY && v22 == v2->ent->s.number )
            v2->timeLastSeenByPlayer = level.time;
        }
      }
    }
  }
}

