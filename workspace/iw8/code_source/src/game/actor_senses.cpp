/*
==============
AICommonInterface::UpdateLastEnemySightPos
==============
*/

void __fastcall AICommonInterface::UpdateLastEnemySightPos(AICommonInterface *this)
{
  ?UpdateLastEnemySightPos@AICommonInterface@@QEBAXXZ(this);
}

/*
==============
AICommonInterface::PointInFov
==============
*/

int __fastcall AICommonInterface::PointInFov(AICommonInterface *this, const vec3_t *vPoint)
{
  return ?PointInFov@AICommonInterface@@QEBAHAEBTvec3_t@@@Z(this, vPoint);
}

/*
==============
AICommonInterface::CanSeeEntity
==============
*/

int __fastcall AICommonInterface::CanSeeEntity(AICommonInterface *this, gentity_s *pOtherEnt)
{
  return ?CanSeeEntity@AICommonInterface@@QEBAHPEAUgentity_s@@@Z(this, pOtherEnt);
}

/*
==============
AICommonInterface::CanSeePointExInternal
==============
*/

bool __fastcall AICommonInterface::CanSeePointExInternal(AICommonInterface *this, const vec3_t *vPoint, float fovDot, float fovDotZ, float fMaxDistSqrd, int ignoreEntityNum, const vec3_t *vViewPos, foliage_sight_trace_options_t foliageSetting)
{
  return ?CanSeePointExInternal@AICommonInterface@@IEBA_NAEBTvec3_t@@MMMH0W4foliage_sight_trace_options_t@@@Z(this, vPoint, fovDot, fovDotZ, fMaxDistSqrd, ignoreEntityNum, vViewPos, foliageSetting);
}

/*
==============
Actor_GetDebugEyePosition
==============
*/

void __fastcall Actor_GetDebugEyePosition(actor_s *self, vec3_t *outEyePosOut)
{
  ?Actor_GetDebugEyePosition@@YAXPEAUactor_s@@AEATvec3_t@@@Z(self, outEyePosOut);
}

/*
==============
AICommonInterface::CanSeePointFrom
==============
*/

int __fastcall AICommonInterface::CanSeePointFrom(AICommonInterface *this, const vec3_t *vStart, const vec3_t *vEnd, float fMaxDistSqrd, int ignoreEntityNum)
{
  return ?CanSeePointFrom@AICommonInterface@@QEBAHAEBTvec3_t@@0MH@Z(this, vStart, vEnd, fMaxDistSqrd, ignoreEntityNum);
}

/*
==============
AIScriptedInterface::ShouldDoFOVCheck
==============
*/

bool __fastcall AIScriptedInterface::ShouldDoFOVCheck(AIScriptedInterface *this, sentient_s *sentient)
{
  return ?ShouldDoFOVCheck@AIScriptedInterface@@UEBA_NPEAUsentient_s@@@Z(this, sentient);
}

/*
==============
AICommonInterface::GetPerfectInfo
==============
*/

void __fastcall AICommonInterface::GetPerfectInfo(AICommonInterface *this, sentient_s *other, unsigned __int8 reason)
{
  ?GetPerfectInfo@AICommonInterface@@UEBAXPEAUsentient_s@@E@Z(this, other, reason);
}

/*
==============
AICommonInterface::FovDot
==============
*/

double __fastcall AICommonInterface::FovDot(AICommonInterface *this, const gentity_s *pOtherEnt)
{
  double result; 

  *(float *)&result = ?FovDot@AICommonInterface@@MEBAMPEBUgentity_s@@@Z(this, pOtherEnt);
  return result;
}

/*
==============
AICommonInterface::CanSeeEntityPoint
==============
*/

int __fastcall AICommonInterface::CanSeeEntityPoint(AICommonInterface *this, const vec3_t *vPoint, const gentity_s *ent)
{
  return ?CanSeeEntityPoint@AICommonInterface@@QEBAHAEBTvec3_t@@PEBUgentity_s@@@Z(this, vPoint, ent);
}

/*
==============
AICommonInterface::UpdateSight
==============
*/

void __fastcall AICommonInterface::UpdateSight(AICommonInterface *this)
{
  ?UpdateSight@AICommonInterface@@QEBAXXZ(this);
}

/*
==============
AICommonInterface::CanSeeSentient
==============
*/

int __fastcall AICommonInterface::CanSeeSentient(AICommonInterface *this, sentient_s *sentient, int iMaxLatency)
{
  return ?CanSeeSentient@AICommonInterface@@QEBAHPEAUsentient_s@@H@Z(this, sentient, iMaxLatency);
}

/*
==============
AIScriptedInterface::CanShootEnemyFromNodeStepOut
==============
*/

bool __fastcall AIScriptedInterface::CanShootEnemyFromNodeStepOut(AIScriptedInterface *this, int cacheDuration, bool bUseActualEnemyPos)
{
  return ?CanShootEnemyFromNodeStepOut@AIScriptedInterface@@QEBA_NH_N@Z(this, cacheDuration, bUseActualEnemyPos);
}

/*
==============
AICommonInterface::CanSeePoint
==============
*/

int __fastcall AICommonInterface::CanSeePoint(AICommonInterface *this, const vec3_t *vPoint)
{
  return ?CanSeePoint@AICommonInterface@@QEBAHAEBTvec3_t@@@Z(this, vPoint);
}

/*
==============
AICommonInterface::RecentlySeeEnemy
==============
*/

int __fastcall AICommonInterface::RecentlySeeEnemy(AICommonInterface *this)
{
  return ?RecentlySeeEnemy@AICommonInterface@@QEBAHXZ(this);
}

/*
==============
AICommonInterface::CanSeeEnemy
==============
*/

int __fastcall AICommonInterface::CanSeeEnemy(AICommonInterface *this)
{
  return ?CanSeeEnemy@AICommonInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::GetMuzzlePosApprox
==============
*/

void __fastcall AIScriptedInterface::GetMuzzlePosApprox(AIScriptedInterface *this, vec3_t *outOrigin)
{
  ?GetMuzzlePosApprox@AIScriptedInterface@@QEBAXAEATvec3_t@@@Z(this, outOrigin);
}

/*
==============
AICommonInterface::CanShootFrom
==============
*/

bool __fastcall AICommonInterface::CanShootFrom(AICommonInterface *this, const vec3_t *vTarget, const vec3_t *vFrom)
{
  return ?CanShootFrom@AICommonInterface@@QEBA_NAEBTvec3_t@@0@Z(this, vTarget, vFrom);
}

/*
==============
AICommonInterface::UpdateLastKnownPos
==============
*/

void __fastcall AICommonInterface::UpdateLastKnownPos(AICommonInterface *this, sentient_s *other, const vec3_t *pos, unsigned __int8 reason)
{
  ?UpdateLastKnownPos@AICommonInterface@@QEBAXPEAUsentient_s@@AEBTvec3_t@@E@Z(this, other, pos, reason);
}

/*
==============
AICommonInterface::KnowAboutEnemy
==============
*/

int __fastcall AICommonInterface::KnowAboutEnemy(AICommonInterface *this)
{
  return ?KnowAboutEnemy@AICommonInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::GetMuzzleInfo
==============
*/

int __fastcall AIScriptedInterface::GetMuzzleInfo(AIScriptedInterface *this, vec3_t *outOrigin, vec3_t *outForward)
{
  return ?GetMuzzleInfo@AIScriptedInterface@@QEBAHAEATvec3_t@@0@Z(this, outOrigin, outForward);
}

/*
==============
AICommonInterface::UpdateNearbyEnemyInfo
==============
*/

void __fastcall AICommonInterface::UpdateNearbyEnemyInfo(AICommonInterface *this, sentient_sort_t *enemyList, int enemyCount)
{
  ?UpdateNearbyEnemyInfo@AICommonInterface@@QEBAXQEAUsentient_sort_t@@H@Z(this, enemyList, enemyCount);
}

/*
==============
AIScriptedInterface::CanShootEnemyFromExposedAtNode
==============
*/

bool __fastcall AIScriptedInterface::CanShootEnemyFromExposedAtNode(AIScriptedInterface *this, int cacheDuration, bool bUseActualEnemyPos)
{
  return ?CanShootEnemyFromExposedAtNode@AIScriptedInterface@@QEBA_NH_N@Z(this, cacheDuration, bUseActualEnemyPos);
}

/*
==============
AICommonInterface::CanSeeEntityPointThroughFoliage
==============
*/

int __fastcall AICommonInterface::CanSeeEntityPointThroughFoliage(AICommonInterface *this, const vec3_t *vPoint, const gentity_s *ent)
{
  return ?CanSeeEntityPointThroughFoliage@AICommonInterface@@QEBAHAEBTvec3_t@@PEBUgentity_s@@@Z(this, vPoint, ent);
}

/*
==============
AICommonInterface::SightTrace
==============
*/

bool __fastcall AICommonInterface::SightTrace(AICommonInterface *this, const vec3_t *start, const vec3_t *end, int passEntNum, foliage_sight_trace_options_t foliageSetting)
{
  return ?SightTrace@AICommonInterface@@QEBA_NAEBTvec3_t@@0HW4foliage_sight_trace_options_t@@@Z(this, start, end, passEntNum, foliageSetting);
}

/*
==============
AICommonInterface::CanSeeProneEntityTorsoOrFeet
==============
*/

bool __fastcall AICommonInterface::CanSeeProneEntityTorsoOrFeet(AICommonInterface *this, const vec3_t *vEntHeadPos, float fovDot, float fovDotZ, float fMaxDistSqrd, const vec3_t *vViewPos, const gentity_s *pOtherEnt)
{
  return ?CanSeeProneEntityTorsoOrFeet@AICommonInterface@@MEBA_NAEBTvec3_t@@MMM0PEBUgentity_s@@@Z(this, vEntHeadPos, fovDot, fovDotZ, fMaxDistSqrd, vViewPos, pOtherEnt);
}

/*
==============
AICommonInterface::CanSeeEntityEx
==============
*/

int __fastcall AICommonInterface::CanSeeEntityEx(AICommonInterface *this, gentity_s *ent, float fovDot, float fovDotZ, float fMaxDistSqrd)
{
  return ?CanSeeEntityEx@AICommonInterface@@QEBAHPEAUgentity_s@@MMM@Z(this, ent, fovDot, fovDotZ, fMaxDistSqrd);
}

/*
==============
AIScriptedInterface::CheckSurprisedBySentient
==============
*/

void __fastcall AIScriptedInterface::CheckSurprisedBySentient(AIScriptedInterface *this, sentient_s *other)
{
  ?CheckSurprisedBySentient@AIScriptedInterface@@UEBAXPEAUsentient_s@@@Z(this, other);
}

/*
==============
AICommonInterface::UpdateEyeInformation
==============
*/

void __fastcall AICommonInterface::UpdateEyeInformation(AICommonInterface *this)
{
  ?UpdateEyeInformation@AICommonInterface@@UEBAXXZ(this);
}

/*
==============
AICommonInterface::PointInFovAndRange_Check
==============
*/

bool __fastcall AICommonInterface::PointInFovAndRange_Check(AICommonInterface *this, const vec3_t *vEyePos, const vec3_t *vPoint, const vec3_t *vDelta, const vec3_t *vForward, float fovDot, float fovDotZ, float fDistSqrd, float fMaxDistSqrd)
{
  return ?PointInFovAndRange_Check@AICommonInterface@@QEBA_NAEBTvec3_t@@000MMMM@Z(this, vEyePos, vPoint, vDelta, vForward, fovDot, fovDotZ, fDistSqrd, fMaxDistSqrd);
}

/*
==============
AICommonInterface::CanSeePointEx
==============
*/

int __fastcall AICommonInterface::CanSeePointEx(AICommonInterface *this, const vec3_t *vPoint, float fovDot, float fovDotZ, float fMaxDistSqrd, int ignoreEntityNum, foliage_sight_trace_options_t foliageSetting)
{
  return ?CanSeePointEx@AICommonInterface@@QEBAHAEBTvec3_t@@MMMHW4foliage_sight_trace_options_t@@@Z(this, vPoint, fovDot, fovDotZ, fMaxDistSqrd, ignoreEntityNum, foliageSetting);
}

/*
==============
AICommonInterface::RecentlyKnownEnemy
==============
*/

int __fastcall AICommonInterface::RecentlyKnownEnemy(AICommonInterface *this, int latency)
{
  return ?RecentlyKnownEnemy@AICommonInterface@@QEBAHH@Z(this, latency);
}

/*
==============
AICommonInterface::PointInFovAndRange
==============
*/

bool __fastcall AICommonInterface::PointInFovAndRange(AICommonInterface *this, const vec3_t *vEyePos, const vec3_t *vPoint, float fovDot, float fovDotZ, float fMaxDistSqrd)
{
  return ?PointInFovAndRange@AICommonInterface@@QEBA_NAEBTvec3_t@@0MMM@Z(this, vEyePos, vPoint, fovDot, fovDotZ, fMaxDistSqrd);
}

/*
==============
AICommonInterface::GetEyePosition
==============
*/

void __fastcall AICommonInterface::GetEyePosition(AICommonInterface *this, vec3_t *vEyePosOut)
{
  ?GetEyePosition@AICommonInterface@@UEBAXAEATvec3_t@@@Z(this, vEyePosOut);
}

/*
==============
AICommonInterface::FovDotZ
==============
*/

double __fastcall AICommonInterface::FovDotZ(AICommonInterface *this, const gentity_s *pOtherEnt)
{
  double result; 

  *(float *)&result = ?FovDotZ@AICommonInterface@@MEBAMPEBUgentity_s@@@Z(this, pOtherEnt);
  return result;
}

/*
==============
AICommonInterface::GetEyeDirection
==============
*/

void __fastcall AICommonInterface::GetEyeDirection(AICommonInterface *this, vec3_t *vEyeDir)
{
  ?GetEyeDirection@AICommonInterface@@QEBAXAEATvec3_t@@@Z(this, vEyeDir);
}

/*
==============
AICommonInterface::RecentlySeeSentient
==============
*/

int __fastcall AICommonInterface::RecentlySeeSentient(AICommonInterface *this, sentient_s *sentient, int latency)
{
  return ?RecentlySeeSentient@AICommonInterface@@QEBAHPEAUsentient_s@@H@Z(this, sentient, latency);
}

/*
==============
AIScriptedInterface::CanShootEnemy
==============
*/

bool __fastcall AIScriptedInterface::CanShootEnemy(AIScriptedInterface *this, const int cacheDuration, bool bUseActualMuzzlePos, bool bUseActualEnemyPos)
{
  return ?CanShootEnemy@AIScriptedInterface@@QEBA_NH_N0@Z(this, cacheDuration, bUseActualMuzzlePos, bUseActualEnemyPos);
}

/*
==============
AICommonInterface::CanSeeSentientPeripheral
==============
*/

int __fastcall AICommonInterface::CanSeeSentientPeripheral(AICommonInterface *this, sentient_s *sentient, int iMaxLatency)
{
  return ?CanSeeSentientPeripheral@AICommonInterface@@QEBAHPEAUsentient_s@@H@Z(this, sentient, iMaxLatency);
}

/*
==============
AICommonInterface::GetLastKnownEnemyTacPoint
==============
*/

const tacpoint_t *__fastcall AICommonInterface::GetLastKnownEnemyTacPoint(AICommonInterface *this, const gentity_s *enemy)
{
  return ?GetLastKnownEnemyTacPoint@AICommonInterface@@QEBAPEBUtacpoint_t@@PEBUgentity_s@@@Z(this, enemy);
}

/*
==============
AI_UpdateThreatSight
==============
*/
void AI_UpdateThreatSight(ai_common_t *self, sentient_info_t *info, float dist)
{
  const dvar_t *v6; 
  sentient_s *v7; 
  bool v8; 
  double Float_Internal_DebugName; 
  float v10; 
  double v11; 
  float v12; 
  double v13; 
  float v14; 
  double v15; 
  float v16; 
  double v17; 
  float v18; 
  float threatSightDistMin; 
  float v20; 
  __int128 threatSightDistMin_low; 
  double v24; 
  float v25; 
  double v26; 
  double v27; 
  float *p_commandTime; 
  float v29; 
  float threatSight; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  float value; 
  double v34; 
  __int64 v35; 
  __int64 v36; 
  bool inOutCalculated; 
  float outFacingDot; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1560, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1561, ASSERT_TYPE_ASSERT, "( self->ent )", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  if ( !self->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1562, ASSERT_TYPE_ASSERT, "( self->sentient )", (const char *)&queryFormat, "self->sentient") )
    __debugbreak();
  if ( !self->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1563, ASSERT_TYPE_ASSERT, "( self->sentientInfo )", (const char *)&queryFormat, "self->sentientInfo") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1564, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
    __debugbreak();
  v6 = DVARBOOL_ai_threatSight;
  if ( !DVARBOOL_ai_threatSight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
  {
    info->threatSight = 0.0;
    goto LABEL_69;
  }
  if ( self->threat.threatSight || info->threatSight > 0.0 )
  {
    if ( (unsigned int)(info - self->sentientInfo) >= level.maxSentients )
    {
      LODWORD(v36) = level.maxSentients;
      LODWORD(v35) = info - self->sentientInfo;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1577, ASSERT_TYPE_ASSERT, "(unsigned)( (info - self->sentientInfo) ) < (unsigned)( level.maxSentients )", "(info - self->sentientInfo) doesn't index level.maxSentients\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    v7 = &level.sentients[info - self->sentientInfo];
    if ( !v7->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1579, ASSERT_TYPE_ASSERT, "( other->ent )", (const char *)&queryFormat, "other->ent") )
      __debugbreak();
    v8 = info->VisCache.bVisible || info->VisCache.bPeripherallyVisible;
    if ( !self->threat.threatSight || !v8 || self->sentient->bIgnoreAll || v7->bIgnoreMe || (v7->ent->flags.m_flags[0] & 4) != 0 )
    {
      v31 = DCONST_DVARFLT_ai_threatSightFalloffDelay;
      if ( !DCONST_DVARFLT_ai_threatSightFalloffDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSightFalloffDelay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      v20 = FLOAT_1_0;
      if ( level.time - info->VisCache.iLastVisTime <= (int)(float)(v31->current.value * 1000.0) && self->threat.threatSight )
      {
        threatSight = info->threatSight;
        if ( threatSight < 1.0 )
          goto LABEL_68;
      }
      v32 = DCONST_DVARFLT_ai_threatSightFalloff;
      if ( !DCONST_DVARFLT_ai_threatSightFalloff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSightFalloff") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      value = v32->current.value;
      threatSight = info->threatSight - (float)((float)((float)G_Level_GetFrameDuration() * 0.001) * value);
    }
    else
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_ai_threatSightFacingScale, "ai_threatSightFacingScale");
      v10 = *(float *)&Float_Internal_DebugName;
      v11 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ai_threatSightFacingScaleDot, "ai_threatSightFacingScaleDot");
      v12 = *(float *)&v11;
      v13 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_threatSightObscuredScale, "ai_threatSightObscuredScale");
      v14 = *(float *)&v13;
      v15 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_threatSightPeriphScale, "ai_threatSightPeriphScale");
      v16 = *(float *)&v15;
      v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_threatSightMoveScale, "ai_threatSightMoveScale");
      v18 = *(float *)&v17;
      if ( info->VisCache.bVisible && (threatSightDistMin = self->threat.threatSightDistMin, dist < threatSightDistMin) )
      {
        v20 = FLOAT_1_0;
        threatSightDistMin_low = LODWORD(self->threat.threatSightDistMin);
        *(float *)&threatSightDistMin_low = threatSightDistMin - 1.0;
        _XMM1 = threatSightDistMin_low;
        __asm { vminss  xmm2, xmm1, cs:__real@42800000 }
        v24 = I_fclamp((float)(dist - *(float *)&_XMM2) / (float)(threatSightDistMin - *(float *)&_XMM2), 0.0, 1.0);
        v25 = (float)(*(float *)&v24 * self->threat.threatSightRateMin) + (float)((float)(1.0 - *(float *)&v24) * 10.0);
      }
      else
      {
        v20 = FLOAT_1_0;
        v26 = I_fclamp((float)(dist - self->threat.threatSightDistMin) / (float)(self->threat.threatSightDistMax - self->threat.threatSightDistMin), 0.0, 1.0);
        v25 = (float)((float)(self->threat.threatSightRateMax - self->threat.threatSightRateMin) * *(float *)&v26) + self->threat.threatSightRateMin;
      }
      inOutCalculated = 0;
      if ( v10 >= 0.0 )
      {
        AI_UpdateThreatSight_FacingDot(self, v7->ent, &outFacingDot, &inOutCalculated);
        v27 = I_fclamp((float)(outFacingDot - v12) / (float)(v20 - v12), 0.0, v20);
        v25 = (float)((float)(v25 * v10) * (float)(v20 - *(float *)&v27)) + (float)(*(float *)&v27 * v25);
      }
      if ( v14 >= 0.0 && info->VisCache.bObscured )
        v25 = v25 * v14;
      if ( v16 >= 0.0 && info->VisCache.bPeripherallyVisible )
        v25 = v25 * v16;
      if ( v18 >= 0.0 )
      {
        p_commandTime = (float *)&v7->ent->client->ps.commandTime;
        if ( p_commandTime )
        {
          v29 = (float)((float)(p_commandTime[15] * p_commandTime[15]) + (float)(p_commandTime[16] * p_commandTime[16])) + (float)(p_commandTime[17] * p_commandTime[17]);
          if ( v29 >= 5184.0 )
          {
            if ( v29 < 14400.0 )
              v25 = v25 * (float)((float)((float)(v20 - (float)((float)(v29 - 5184.0) * 0.00010850695)) * v18) + (float)((float)(v29 - 5184.0) * 0.00010850695));
          }
          else
          {
            v25 = v25 * v18;
          }
        }
      }
      threatSight = (float)((float)((float)G_Level_GetFrameDuration() * 0.001) * v25) + info->threatSight;
    }
    info->threatSight = threatSight;
LABEL_68:
    v34 = I_fclamp(threatSight, 0.0, v20);
    info->threatSight = *(float *)&v34;
  }
LABEL_69:
  Sentient_SetThreatSightState(self->sentient, info);
}

/*
==============
AI_UpdateThreatSight_FacingDot
==============
*/
void AI_UpdateThreatSight_FacingDot(ai_common_t *self, gentity_s *otherEnt, float *outFacingDot, bool *inOutCalculated)
{
  gclient_s *client; 
  bool v9; 
  float v10; 
  __int128 v11; 
  __int128 v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v19; 
  float v20; 
  __int128 v21; 
  vec3_t forward; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1516, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1517, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  if ( !otherEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1518, ASSERT_TYPE_ASSERT, "(otherEnt)", (const char *)&queryFormat, "otherEnt") )
    __debugbreak();
  if ( !inOutCalculated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1519, ASSERT_TYPE_ASSERT, "(inOutCalculated)", (const char *)&queryFormat, "inOutCalculated") )
    __debugbreak();
  if ( !outFacingDot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1520, ASSERT_TYPE_ASSERT, "(outFacingDot)", (const char *)&queryFormat, "outFacingDot") )
    __debugbreak();
  if ( !*inOutCalculated )
  {
    client = otherEnt->client;
    if ( client )
    {
      AngleVectors(&client->ps.viewangles, &forward, NULL, NULL);
      v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&otherEnt->client->ps.pm_flags, ACTIVE, 0x2Au);
    }
    else
    {
      AngleVectors(&otherEnt->r.currentAngles, &forward, NULL, NULL);
      v9 = 0;
    }
    v10 = forward.v[0];
    v12 = LODWORD(self->ent->r.currentOrigin.v[0]);
    *(float *)&v12 = self->ent->r.currentOrigin.v[0] - otherEnt->r.currentOrigin.v[0];
    v11 = v12;
    v13 = self->ent->r.currentOrigin.v[2] - otherEnt->r.currentOrigin.v[2];
    v14 = self->ent->r.currentOrigin.v[1] - otherEnt->r.currentOrigin.v[1];
    if ( v9 )
    {
      v20 = forward.v[2];
      v19 = forward.v[1];
    }
    else
    {
      v15 = LODWORD(forward.v[0]);
      *(float *)&v15 = fsqrt((float)(forward.v[0] * forward.v[0]) + (float)(forward.v[1] * forward.v[1]));
      _XMM2 = v15;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm5, xmm0
      }
      v10 = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
      v19 = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
      v13 = 0.0;
      v20 = 0.0;
    }
    v21 = v11;
    *(float *)&v21 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v14 * v14)) + (float)(v13 * v13));
    _XMM3 = v21;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm5, xmm0
    }
    *outFacingDot = (float)((float)((float)(v14 * (float)(1.0 / *(float *)&_XMM0)) * v19) + (float)((float)(*(float *)&v11 * (float)(1.0 / *(float *)&_XMM0)) * v10)) + (float)((float)(v13 * (float)(1.0 / *(float *)&_XMM0)) * v20);
    *inOutCalculated = 1;
  }
}

/*
==============
AI_UpdateVisCacheInternal
==============
*/
void AI_UpdateVisCacheInternal(ai_common_t *self, const gentity_s *ent, sentient_info_t *pInfo, int bVisible, int bObscured, bool bPeriphVisible)
{
  AICommonInterface *m_pAI; 
  int v11; 
  scr_string_t enemy_sighted; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  __int64 number; 
  __int64 v16; 
  sentient_s *sentient; 
  char *fmt; 
  AICommonWrapper v19; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 951, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 952, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !pInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 953, ASSERT_TYPE_ASSERT, "(pInfo)", (const char *)&queryFormat, "pInfo") )
    __debugbreak();
  AIActorInterface::AIActorInterface(&v19.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v19.m_newAgentInterface);
  v19.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v19.m_botInterface);
  v19.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v19.m_botAgentInterface);
  m_pAI = NULL;
  v19.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  v19.m_pAI = NULL;
  if ( self )
  {
    AICommonWrapper::Setup(&v19, self->ent);
    m_pAI = v19.m_pAI;
  }
  if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 954, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( SV_BotIsBotEnt(self->ent) && bVisible )
    bVisible = SV_BotAllowedToSeeEnt(self, ent);
  v11 = pInfo->VisCache.bVisible;
  VisCache_UpdateInternal(&pInfo->VisCache, bVisible, bObscured, bPeriphVisible);
  if ( SV_IsAgentBot(self->ent->s.number) && bVisible != v11 && ent->client && !AI_IsAlliedSentient(self->sentient, ent->sentient) )
  {
    enemy_sighted = scr_const.enemy_sighted;
    if ( !bVisible )
      enemy_sighted = scr_const.enemy_sighted_lost;
    GScr_Notify(self->ent, enemy_sighted, 0);
  }
  v13 = DVARBOOL_ai_threatSight;
  if ( !DVARBOOL_ai_threatSight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( (!v13->current.enabled || !self->threat.threatSight) && bVisible )
  {
    if ( !v11 )
    {
      v14 = DVARINT_g_aiEventDump;
      if ( !DVARINT_g_aiEventDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_aiEventDump") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      number = (unsigned int)self->ent->s.number;
      if ( v14->current.integer == (_DWORD)number )
      {
        LODWORD(fmt) = level.time;
        Com_Printf(18, "%d ^3 visible^7:  entity^5 %d ^7at time^5 %d\n", number, (unsigned int)ent->s.number, fmt);
      }
      if ( ent == AICommonInterface::GetTargetEntity(m_pAI) )
      {
        GScr_Notify(self->ent, scr_const.enemy_visible, 0);
        m_pAI->EnterCombatState(m_pAI);
      }
    }
    if ( !AICommonInterface::IsUsingTurret(m_pAI) && self->sentient->eTeam != TEAM_THREE )
      pInfo->attackTime = 0;
    sentient = ent->sentient;
    if ( !sentient->bIgnoreMe )
    {
      LOBYTE(v16) = 25;
      m_pAI->GetPerfectInfo(m_pAI, sentient, v16);
    }
  }
}

/*
==============
Actor_GetDebugEyePosition
==============
*/
void Actor_GetDebugEyePosition(actor_s *self, vec3_t *outEyePosOut)
{
  gentity_s *ent; 
  float *v; 
  gentity_s *v6; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 98, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  ent = self->ent;
  outEyePosOut->v[0] = self->eyeInfo.pos.v[0];
  outEyePosOut->v[1] = self->eyeInfo.pos.v[1];
  outEyePosOut->v[2] = self->eyeInfo.pos.v[2];
  v = ent->r.absBox.midPoint.v;
  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 536, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(outEyePosOut->v[0] - *v) & _xmm) <= (float)(v[3] + 32.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT(outEyePosOut->v[1] - v[1]) & _xmm) <= (float)(v[4] + 32.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT(outEyePosOut->v[2] - v[2]) & _xmm) <= (float)(v[5] + 32.0) )
  {
    v6 = self->ent;
    outEyePosOut->v[0] = self->ent->r.currentOrigin.v[0];
    outEyePosOut->v[1] = v6->r.currentOrigin.v[1];
    outEyePosOut->v[2] = v6->r.currentOrigin.v[2] + 56.0;
  }
}

/*
==============
AICommonInterface::CanSeeEnemy
==============
*/
int AICommonInterface::CanSeeEnemy(AICommonInterface *this)
{
  sentient_s *sentient; 
  unsigned __int16 number; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  sentient_s *TargetSentient; 
  ai_common_t *m_pAI; 
  int latency; 
  int v10; 
  gentity_s *v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1424, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1425, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  sentient = this->m_pAI->sentient;
  number = sentient->targetEnt.number;
  if ( !number )
    goto LABEL_30;
  v4 = number;
  v5 = number - 1;
  if ( v5 >= 0x800 )
  {
    v15 = 2048;
    LODWORD(v13) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = v4 - 1;
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] )
  {
    LODWORD(v14) = sentient->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v14) )
      __debugbreak();
  }
  if ( !sentient->targetEnt.number )
  {
LABEL_30:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1426, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->targetEnt.isDefined())", (const char *)&queryFormat, "m_pAI->sentient->targetEnt.isDefined()") )
      __debugbreak();
  }
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  m_pAI = this->m_pAI;
  if ( TargetSentient )
  {
    latency = m_pAI->sight.latency;
    v10 = 250;
    if ( latency > 250 )
      v10 = latency;
    return AICommonInterface::CanSeeSentient(this, TargetSentient, v10);
  }
  else
  {
    v12 = EntHandle::ent(&m_pAI->sentient->targetEnt);
    return AICommonInterface::CanSeeEntity(this, v12);
  }
}

/*
==============
AICommonInterface::CanSeeEntity
==============
*/
int AICommonInterface::CanSeeEntity(AICommonInterface *this, gentity_s *pOtherEnt)
{
  float fMaxSightDistSqrd; 
  double v5; 
  float v6; 
  double v7; 

  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 931, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  fMaxSightDistSqrd = this->m_pAI->sight.fMaxSightDistSqrd;
  v5 = ((double (__fastcall *)(AICommonInterface *, gentity_s *))this->FovDotZ)(this, pOtherEnt);
  v6 = *(float *)&v5;
  v7 = ((double (__fastcall *)(AICommonInterface *, gentity_s *))this->FovDot)(this, pOtherEnt);
  return AICommonInterface::CanSeeEntityEx(this, pOtherEnt, *(float *)&v7, v6, fMaxSightDistSqrd);
}

/*
==============
AICommonInterface::CanSeeEntityEx
==============
*/
__int64 AICommonInterface::CanSeeEntityEx(AICommonInterface *this, gentity_s *ent, float fovDot, float fovDotZ, float fMaxDistSqrd)
{
  float v6; 
  double v9; 
  double v10; 
  ai_scripted_t *AIScripted; 
  ai_scripted_t *v12; 
  sentient_s *sentient; 
  sentient_info_t *SentientInfo; 
  bool IsUsingTurret; 
  AICommonInterface *v16; 
  const gentity_s *TurretUsed; 
  __int128 v19; 
  float v21; 
  unsigned __int8 CanSeePoint; 
  const dvar_t *v23; 
  gclient_s *client; 
  float v25; 
  float v26; 
  float v27; 
  int number; 
  float v29; 
  float v30; 
  int v31; 
  __int128 maxVisibleDist_low; 
  bool v34; 
  GameScriptData *v35; 
  int ActorCorpseIndex; 
  __int64 v37; 
  ai_common_t *m_pAI; 
  AIScriptedInterface *v39; 
  int v40; 
  __int128 v41; 
  double v42; 
  float v43; 
  double v44; 
  __int128 v46; 
  vec2_t *out_localAngles; 
  BOOL bObscured; 
  ai_scripted_t *v51; 
  AIWrapper v52; 
  AIWrapper v53; 
  vec3_t out_targetPosition; 
  vec3_t out_sourcePosition; 
  vec3_t outEyePos; 
  vec2_t v57; 

  v6 = fovDotZ;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1081, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1082, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1083, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1084, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( fovDot < 0.0 )
  {
    v9 = fovDot;
    LODWORD(_XMM0) = LODWORD(v9);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1102, ASSERT_TYPE_ASSERT, "( ( fovDot >= 0 ) )", "( fovDot ) = %g", fovDot) )
      __debugbreak();
  }
  if ( fMaxDistSqrd < 0.0 )
  {
    v10 = fMaxDistSqrd;
    LODWORD(_XMM0) = LODWORD(v10);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1103, ASSERT_TYPE_ASSERT, "( ( fMaxDistSqrd >= 0 ) )", "( fMaxDistSqrd ) = %g", fMaxDistSqrd) )
      __debugbreak();
  }
  AIScripted = AI_GetAIScripted(ent);
  v12 = AI_GetAIScripted(this->m_pAI->ent);
  sentient = ent->sentient;
  v51 = v12;
  bObscured = 0;
  if ( !sentient )
  {
    if ( ent->s.eType == ET_ACTOR_CORPSE && BG_ActorCorpse_SynchEnabled() )
    {
      if ( (_BYTE)GameScriptData::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_data_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
        __debugbreak();
      if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      v35 = GameScriptData::ms_gScriptData;
      ActorCorpseIndex = G_GetActorCorpseIndex(ent);
      v37 = ActorCorpseIndex;
      if ( (unsigned int)ActorCorpseIndex >= 0x1C )
      {
        LODWORD(out_localAngles) = ActorCorpseIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1251, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( gScrData->actorCorpseInfo ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( gScrData->actorCorpseInfo )\n\t%i not in [0, %i)", out_localAngles, 28) )
          __debugbreak();
      }
      *(_QWORD *)out_targetPosition.v = *((_QWORD *)&v35[197].bt_getfunction + 6 * v37);
      LODWORD(_XMM0) = *(&v35[197].scriptable_postinit + 12 * v37);
      LODWORD(out_targetPosition.v[2]) = _XMM0;
    }
    else if ( !G_Utils_DObjGetWorldTagPos(ent, scr_const.tag_eye, &out_targetPosition) && !G_Utils_DObjGetWorldTagPos(ent, scr_const.tag_aim, &out_targetPosition) )
    {
      G_Utils_EntityCentroid(ent, &out_targetPosition);
      if ( ent->vehicle )
      {
        this->GetEyePosition(this, &out_sourcePosition);
        GetVehicleLookAtPosition(ent, &out_sourcePosition, &out_targetPosition);
      }
    }
    SentientInfo = NULL;
    CanSeePoint = AICommonInterface::CanSeePointEx(this, &out_targetPosition, fovDot, fovDotZ, fMaxDistSqrd, ent->s.number, NORMAL_FOLIAGE_CHECKS) != 0;
    goto LABEL_75;
  }
  SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, sentient);
  IsUsingTurret = AICommonInterface::IsUsingTurret(this);
  v16 = this;
  if ( IsUsingTurret )
  {
    TurretUsed = AICommonInterface::GetTurretUsed(this);
    if ( G_Turret_CanTargetSentient(TurretUsed, ent, &vec3_origin, &out_targetPosition, &out_sourcePosition, &v57) )
      goto LABEL_26;
    if ( level.time - SentientInfo->lastKnownPosTime >= 1000 && (float)((float)((float)(this->m_pAI->ent->r.currentOrigin.v[1] - out_targetPosition.v[1]) * (float)(this->m_pAI->ent->r.currentOrigin.v[1] - out_targetPosition.v[1])) + (float)((float)(this->m_pAI->ent->r.currentOrigin.v[0] - out_targetPosition.v[0]) * (float)(this->m_pAI->ent->r.currentOrigin.v[0] - out_targetPosition.v[0]))) >= 262144.0 )
      return 0i64;
    v16 = this;
  }
  this->GetEyePosition(v16, &out_sourcePosition);
LABEL_26:
  _XMM0 = LODWORD(sentient->maxVisibleDist);
  v19 = _XMM0;
  *(float *)&v19 = *(float *)&_XMM0 * *(float *)&_XMM0;
  _XMM1 = v19;
  __asm { vminss  xmm7, xmm1, xmm10 }
  if ( this->ShouldDoFOVCheck(this, sentient) )
  {
    v21 = fovDot;
  }
  else
  {
    v21 = 0.0;
    v6 = 0.0;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && SV_BotIsBotEnt(ent) )
  {
    Sentient_GetHeadPosition(sentient, &out_targetPosition);
  }
  else
  {
    AIWrapper::AIWrapper(&v52, ent);
    if ( !v52.m_pAI || (AIScriptedInterface::GetApproxEyePos(v52.m_pAI, &outEyePos, 0), AICommonInterface::PointInFovAndRange(this, &out_sourcePosition, &outEyePos, v21, v6, *(float *)&_XMM7)) )
    {
      Sentient_GetEyePosition(sentient, &out_targetPosition);
    }
    else
    {
      *(float *)&_XMM0 = outEyePos.v[0];
      out_targetPosition = outEyePos;
    }
  }
  if ( ent->vehicle )
    GetVehicleLookAtPosition(ent, &out_sourcePosition, &out_targetPosition);
  CanSeePoint = AICommonInterface::CanSeePointExInternal(this, &out_targetPosition, v21, v6, *(float *)&_XMM7, ent->s.number, &out_sourcePosition, NORMAL_FOLIAGE_CHECKS);
  if ( !CanSeePoint )
    CanSeePoint = ((__int64 (__fastcall *)(AICommonInterface *, vec3_t *))this->CanSeeProneEntityTorsoOrFeet)(this, &out_targetPosition);
  v23 = DVARBOOL_ai_threatSight;
  if ( !DVARBOOL_ai_threatSight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled && this->m_pAI->threat.threatSight )
  {
    client = ent->client;
    if ( client )
    {
      if ( CanSeePoint )
      {
        if ( client->ps.mountState.mountFraction <= 0.0 )
        {
          number = ent->s.number;
          outEyePos.v[0] = out_targetPosition.v[0];
          *(float *)&_XMM0 = out_targetPosition.v[2];
          outEyePos.v[2] = out_targetPosition.v[2] - 11.0;
          outEyePos.v[1] = out_targetPosition.v[1];
          bObscured = !AICommonInterface::CanSeePointExInternal(this, &outEyePos, v21, v6, *(float *)&_XMM7, number, &out_sourcePosition, NORMAL_FOLIAGE_CHECKS);
        }
        else
        {
          v25 = out_sourcePosition.v[0] - out_targetPosition.v[0];
          *(float *)&_XMM0 = out_sourcePosition.v[2];
          v26 = out_sourcePosition.v[2] - out_targetPosition.v[2];
          v27 = out_sourcePosition.v[1] - out_targetPosition.v[1];
          AngleVectors(&ent->r.currentAngles, &outEyePos, NULL, NULL);
          if ( (float)((float)((float)(v25 * outEyePos.v[0]) + (float)(v27 * outEyePos.v[1])) + (float)(v26 * outEyePos.v[2])) > 0.0 )
            bObscured = 1;
        }
      }
      else
      {
        if ( this->GetStairsState(this) == AI_STAIRS_NONE )
        {
LABEL_54:
          maxVisibleDist_low = LODWORD(sentient->maxVisibleDist);
          *(float *)&maxVisibleDist_low = sentient->maxVisibleDist * sentient->maxVisibleDist;
          _XMM0 = maxVisibleDist_low;
          __asm { vminss  xmm1, xmm0, dword ptr [rax+0ACh] }
          v34 = AICommonInterface::CanSeePointExInternal(this, &out_targetPosition, this->m_pAI->sight.fovDotPeriph, v6, *(float *)&_XMM1, ent->s.number, &out_sourcePosition, NORMAL_FOLIAGE_CHECKS);
          goto LABEL_76;
        }
        v29 = ent->r.currentOrigin.v[1];
        v30 = ent->r.currentOrigin.v[2];
        v31 = ent->s.number;
        outEyePos.v[0] = (float)((float)(out_targetPosition.v[0] - ent->r.currentOrigin.v[0]) * 0.25) + ent->r.currentOrigin.v[0];
        *(float *)&_XMM0 = out_targetPosition.v[2];
        outEyePos.v[1] = (float)((float)(out_targetPosition.v[1] - v29) * 0.25) + v29;
        outEyePos.v[2] = (float)((float)(out_targetPosition.v[2] - v30) * 0.25) + v30;
        CanSeePoint = AICommonInterface::CanSeePointExInternal(this, &outEyePos, v21, v6, *(float *)&_XMM7, v31, &out_sourcePosition, NORMAL_FOLIAGE_CHECKS);
      }
    }
    if ( !CanSeePoint )
      goto LABEL_54;
  }
LABEL_75:
  v34 = 0;
LABEL_76:
  this->FovDot(this, ent);
  if ( CanSeePoint )
  {
    if ( fovDot < *(float *)&_XMM0 )
      goto LABEL_84;
    m_pAI = this->m_pAI;
    if ( fMaxDistSqrd > m_pAI->sight.fMaxSightDistSqrd )
      goto LABEL_84;
  }
  else
  {
    if ( fovDot > *(float *)&_XMM0 )
      return 0i64;
    m_pAI = this->m_pAI;
    if ( fMaxDistSqrd < m_pAI->sight.fMaxSightDistSqrd )
      return 0i64;
  }
  if ( sentient )
    AI_UpdateVisCacheInternal(m_pAI, ent, SentientInfo, CanSeePoint, bObscured, v34);
LABEL_84:
  if ( !CanSeePoint )
    return 0i64;
  AIWrapper::AIWrapper(&v53, ent);
  v39 = v53.m_pAI;
  if ( v53.m_pAI && v51 && !AICommonInterface::IsUsingTurret(this) && !AICommonInterface::IsUsingTurret(v39) )
  {
    if ( !AIScripted->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1308, ASSERT_TYPE_ASSERT, "( target_ai->sentientInfo )", (const char *)&queryFormat, "target_ai->sentientInfo") )
      __debugbreak();
    if ( !ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1313, ASSERT_TYPE_ASSERT, "(ent->sentient)", (const char *)&queryFormat, "ent->sentient") )
      __debugbreak();
    v40 = 1;
    v41 = LODWORD(this->m_pAI->sentient->maxVisibleDist);
    if ( ((unsigned __int8 (__fastcall *)(AIScriptedInterface *))v39->ShouldDoFOVCheck)(v39) )
    {
      v42 = ((double (__fastcall *)(AIScriptedInterface *, gentity_s *))v39->FovDotZ)(v39, this->m_pAI->ent);
      v43 = *(float *)&v42;
      v44 = ((double (__fastcall *)(AIScriptedInterface *, gentity_s *))v39->FovDot)(v39, this->m_pAI->ent);
      v46 = v41;
      *(float *)&v46 = *(float *)&v41 * *(float *)&v41;
      _XMM1 = v46;
      __asm { vminss  xmm2, xmm1, xmm8 }
      if ( !AICommonInterface::PointInFovAndRange(v39, &out_targetPosition, &out_sourcePosition, *(float *)&v44, v43, *(float *)&_XMM2) )
        v40 = 0;
    }
    AI_UpdateVisCacheInternal(AIScripted, this->m_pAI->ent, &AIScripted->sentientInfo[this->m_pAI->sentient - level.sentients], v40, 0, 0);
  }
  return 1i64;
}

/*
==============
AICommonInterface::CanSeeEntityPoint
==============
*/
int AICommonInterface::CanSeeEntityPoint(AICommonInterface *this, const vec3_t *vPoint, const gentity_s *ent)
{
  int ignoreEntityNum; 
  float fMaxSightDistSqrd; 
  double v8; 
  float v9; 
  double v10; 

  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 850, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  ignoreEntityNum = ent->s.number;
  fMaxSightDistSqrd = this->m_pAI->sight.fMaxSightDistSqrd;
  v8 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDotZ)(this, 0i64);
  v9 = *(float *)&v8;
  v10 = ((double (__fastcall *)(AICommonInterface *, const gentity_s *))this->FovDot)(this, ent);
  return AICommonInterface::CanSeePointEx(this, vPoint, *(float *)&v10, v9, fMaxSightDistSqrd, ignoreEntityNum, NORMAL_FOLIAGE_CHECKS);
}

/*
==============
AICommonInterface::CanSeeEntityPointThroughFoliage
==============
*/
int AICommonInterface::CanSeeEntityPointThroughFoliage(AICommonInterface *this, const vec3_t *vPoint, const gentity_s *ent)
{
  int ignoreEntityNum; 
  float fMaxSightDistSqrd; 
  double v8; 
  float v9; 
  double v10; 

  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 864, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  ignoreEntityNum = ent->s.number;
  fMaxSightDistSqrd = this->m_pAI->sight.fMaxSightDistSqrd;
  v8 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDotZ)(this, 0i64);
  v9 = *(float *)&v8;
  v10 = ((double (__fastcall *)(AICommonInterface *, const gentity_s *))this->FovDot)(this, ent);
  return AICommonInterface::CanSeePointEx(this, vPoint, *(float *)&v10, v9, fMaxSightDistSqrd, ignoreEntityNum, FORCE_CHECK_FOLIAGE);
}

/*
==============
AICommonInterface::CanSeePoint
==============
*/
int AICommonInterface::CanSeePoint(AICommonInterface *this, const vec3_t *vPoint)
{
  float fMaxSightDistSqrd; 
  double v5; 
  float v6; 
  double v7; 

  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 836, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  fMaxSightDistSqrd = this->m_pAI->sight.fMaxSightDistSqrd;
  v5 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDotZ)(this, 0i64);
  v6 = *(float *)&v5;
  v7 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDot)(this, 0i64);
  return AICommonInterface::CanSeePointEx(this, vPoint, *(float *)&v7, v6, fMaxSightDistSqrd, 2047, NORMAL_FOLIAGE_CHECKS);
}

/*
==============
AICommonInterface::CanSeePointEx
==============
*/
_BOOL8 AICommonInterface::CanSeePointEx(AICommonInterface *this, const vec3_t *vPoint, float fovDot, float fovDotZ, float fMaxDistSqrd, int ignoreEntityNum, foliage_sight_trace_options_t foliageSetting)
{
  const gentity_s *TurretUsed; 
  vec3_t out_sourcePosition; 
  vec2_t out_localAngles; 

  if ( fovDot < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 910, ASSERT_TYPE_ASSERT, "( ( fovDot >= 0 ) )", "( fovDot ) = %g", fovDot) )
    __debugbreak();
  if ( fMaxDistSqrd < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 911, ASSERT_TYPE_ASSERT, "( ( fMaxDistSqrd >= 0 ) )", "( fMaxDistSqrd ) = %g", fMaxDistSqrd) )
    __debugbreak();
  TurretUsed = AICommonInterface::GetTurretUsed(this);
  if ( !TurretUsed || !AICommonInterface::IsUsingTurret(this) || !G_Turret_CanTargetPoint(TurretUsed, vPoint, &out_sourcePosition, &out_localAngles) )
    this->GetEyePosition(this, &out_sourcePosition);
  return AICommonInterface::CanSeePointExInternal(this, vPoint, fovDot, fovDotZ, fMaxDistSqrd, ignoreEntityNum, &out_sourcePosition, foliageSetting);
}

/*
==============
AICommonInterface::CanSeePointExInternal
==============
*/
bool AICommonInterface::CanSeePointExInternal(AICommonInterface *this, const vec3_t *vPoint, float fovDot, float fovDotZ, float fMaxDistSqrd, int ignoreEntityNum, const vec3_t *vViewPos, foliage_sight_trace_options_t foliageSetting)
{
  bool result; 

  if ( fovDot < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 878, ASSERT_TYPE_ASSERT, "( ( fovDot >= 0 ) )", "( fovDot ) = %g", fovDot) )
    __debugbreak();
  if ( fMaxDistSqrd < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 879, ASSERT_TYPE_ASSERT, "( ( fMaxDistSqrd >= 0 ) )", "( fMaxDistSqrd ) = %g", fMaxDistSqrd) )
    __debugbreak();
  result = AICommonInterface::PointInFovAndRange(this, vViewPos, vPoint, fovDot, fovDotZ, fMaxDistSqrd);
  if ( result )
    return AICommonInterface::SightTrace(this, vViewPos, vPoint, ignoreEntityNum, foliageSetting);
  return result;
}

/*
==============
AICommonInterface::CanSeePointFrom
==============
*/
_BOOL8 AICommonInterface::CanSeePointFrom(AICommonInterface *this, const vec3_t *vStart, const vec3_t *vEnd, float fMaxDistSqrd, int ignoreEntityNum)
{
  float v8; 
  float v9; 
  float v10; 

  if ( fMaxDistSqrd < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 675, ASSERT_TYPE_ASSERT, "( ( fMaxDistSqrd >= 0 ) )", "( fMaxDistSqrd ) = %g", fMaxDistSqrd) )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 676, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( fMaxDistSqrd == 0.0 )
    return AICommonInterface::SightTrace(this, vStart, vEnd, ignoreEntityNum, NORMAL_FOLIAGE_CHECKS);
  v8 = vEnd->v[1] - vStart->v[1];
  v9 = vEnd->v[2] - vStart->v[2];
  v10 = (float)((float)(v8 * v8) + (float)((float)(vEnd->v[0] - vStart->v[0]) * (float)(vEnd->v[0] - vStart->v[0]))) + (float)(v9 * v9);
  return v10 <= fMaxDistSqrd && v10 <= level.fFogOpaqueDistSqrd && AICommonInterface::SightTrace(this, vStart, vEnd, ignoreEntityNum, NORMAL_FOLIAGE_CHECKS);
}

/*
==============
AICommonInterface::CanSeeProneEntityTorsoOrFeet
==============
*/
bool AICommonInterface::CanSeeProneEntityTorsoOrFeet(AICommonInterface *this, const vec3_t *vEntHeadPos, float fovDot, float fovDotZ)
{
  return 0;
}

/*
==============
AICommonInterface::CanSeeSentient
==============
*/
int AICommonInterface::CanSeeSentient(AICommonInterface *this, sentient_s *sentient, int iMaxLatency)
{
  sentient_info_t *v6; 
  int iLastUpdateTime; 

  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1381, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1382, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  v6 = &this->m_pAI->sentientInfo[sentient - level.sentients];
  iLastUpdateTime = v6->VisCache.iLastUpdateTime;
  if ( iLastUpdateTime && iMaxLatency + iLastUpdateTime >= level.time )
    return v6->VisCache.bVisible;
  else
    return AICommonInterface::CanSeeEntity(this, sentient->ent);
}

/*
==============
AICommonInterface::CanSeeSentientPeripheral
==============
*/
_BOOL8 AICommonInterface::CanSeeSentientPeripheral(AICommonInterface *this, sentient_s *sentient, int iMaxLatency)
{
  sentient_info_t *v6; 
  int iLastUpdateTime; 

  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1402, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1403, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  v6 = &this->m_pAI->sentientInfo[sentient - level.sentients];
  iLastUpdateTime = v6->VisCache.iLastUpdateTime;
  if ( !iLastUpdateTime || iMaxLatency + iLastUpdateTime < level.time )
    AICommonInterface::CanSeeEntity(this, sentient->ent);
  return v6->VisCache.bPeripherallyVisible;
}

/*
==============
AIScriptedInterface::CanShootEnemy
==============
*/
bool AIScriptedInterface::CanShootEnemy(AIScriptedInterface *this, const int cacheDuration, bool bUseActualMuzzlePos, bool bUseActualEnemyPos)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  sentient_s *sentient; 
  unsigned __int16 number; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  ai_scripted_t *m_pAI; 
  int lastCanShootEnemyTime; 
  const gentity_s *v23; 
  AIScriptedInterface *v24; 
  pathnode_t *CoverNode; 
  __int16 type; 
  ai_scripted_t *v27; 
  ai_scripted_t *v28; 
  const DObj *ServerDObjForEnt; 
  ai_scripted_t *v30; 
  pathnode_t *v31; 
  scr_string_t m_CoverState; 
  __int16 turretEntNumber; 
  bool CanShootFrom; 
  bool v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  int integer; 
  const vec4_t *v39; 
  __int64 v40; 
  __int64 v41; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName[3]; 
  AIWrapper v44; 
  TagPair v45; 
  float v46; 
  vec3_t vFrom; 
  vec3_t outEyePos; 
  vec4_t v49; 
  vec3_t out; 
  vec3_t in; 
  vec3_t v52; 
  vec4_t quat; 
  vec4_t v54; 
  ApproxGunParams pOutGunParams; 
  tmat43_t<vec3_t> outTagMat; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 184, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 185, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 186, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  sentient = this->m_pAI->sentient;
  number = sentient->targetEnt.number;
  if ( !number )
    goto LABEL_71;
  v17 = number;
  v18 = number - 1;
  if ( v18 >= 0x800 )
  {
    LODWORD(v40) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v40, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v19 = v17 - 1;
  if ( g_entities[v19].r.isInUse != g_entityIsInUse[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v19] )
  {
    LODWORD(v41) = sentient->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v41) )
      __debugbreak();
  }
  if ( !sentient->targetEnt.number )
  {
LABEL_71:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 187, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->targetEnt.isDefined())", (const char *)&queryFormat, "m_pAI->sentient->targetEnt.isDefined()") )
      __debugbreak();
  }
  m_pAI = this->m_pAI;
  lastCanShootEnemyTime = m_pAI->shoot.lastCanShootEnemyTime;
  if ( lastCanShootEnemyTime > 0 && lastCanShootEnemyTime + cacheDuration >= level.time )
    return m_pAI->shoot.lastCanShootEnemyResult;
  v23 = EntHandle::ent(&m_pAI->sentient->targetEnt);
  AIWrapper::AIWrapper(&v44, v23);
  v24 = v44.m_pAI;
  if ( bUseActualEnemyPos )
    goto LABEL_37;
  if ( !v44.m_pAI )
    goto LABEL_37;
  CoverNode = AIScriptedInterface::GetCoverNode(v44.m_pAI);
  if ( !CoverNode || *(_DWORD *)(v24->GetAI(v24) + 488) == scr_const.exposed )
    goto LABEL_37;
  type = CoverNode->constant.type;
  if ( type == 31 )
    type = CoverNode->dynamic.turretEntNumber;
  if ( type == 9 )
LABEL_37:
    AICommonInterface::GetTargetLookPosition(this, &outEyePos);
  else
    AIScriptedInterface::GetApproxEyePos(v24, &outEyePos, 1);
  if ( bUseActualMuzzlePos )
  {
    if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 429, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    v27 = this->m_pAI;
    if ( v27->muzzleInfo.time != level.time )
    {
      Profile_Begin(283);
      this->GetWeaponFlashTagName(this, &v45);
      v28 = this->m_pAI;
      outBoneIndex[0] = -2;
      outTagName[0] = 0;
      ServerDObjForEnt = Com_GetServerDObjForEnt(v28->ent);
      if ( !TagPair::GetTagNameAndBoneIndex(&v45, ServerDObjForEnt, outTagName, outBoneIndex) || !G_Utils_DObjGetWorldTagMatrix(this->m_pAI->ent, outTagName[0], &outTagMat) )
      {
        Profile_EndInternal(NULL);
        return 0;
      }
      this->m_pAI->muzzleInfo.time = level.time;
      this->m_pAI->muzzleInfo.pos = outTagMat.m[3];
      v30 = this->m_pAI;
      v30->muzzleInfo.dir.v[0] = outTagMat.m[0].v[0];
      v30->muzzleInfo.dir.v[1] = outTagMat.m[0].v[1];
      v30->muzzleInfo.dir.v[2] = outTagMat.m[0].v[2];
      Profile_EndInternal(NULL);
      v27 = this->m_pAI;
    }
    vFrom = v27->muzzleInfo.pos;
  }
  else
  {
    v31 = AIScriptedInterface::GetCoverNode(this);
    if ( !v31 )
      goto LABEL_55;
    m_CoverState = this->m_pAI->blackboard.m_CoverState;
    if ( m_CoverState == scr_const.exposed || m_CoverState == scr_const.none )
      goto LABEL_55;
    turretEntNumber = v31->constant.type;
    if ( turretEntNumber == 31 )
      turretEntNumber = v31->dynamic.turretEntNumber;
    if ( turretEntNumber == 9 )
    {
LABEL_55:
      v63 = v4;
      v62 = v5;
      v61 = v6;
      v60 = v7;
      v59 = v8;
      v58 = v9;
      v57 = v10;
      AIScriptedInterface::GetApproxAdjustedGunParams(this, &pOutGunParams);
      this->GetEyePosition(this, (vec3_t *)&v45);
      AnglesToQuat(&this->m_pAI->aimAngles, &quat);
      AnglesToQuat(&this->m_pAI->ent->r.currentAngles, &v49);
      v54.v[0] = (float)((float)((float)(v49.v[0] * quat.v[3]) + (float)(quat.v[0] * v49.v[3])) + (float)(v49.v[1] * quat.v[2])) - (float)(v49.v[2] * quat.v[1]);
      v54.v[1] = (float)((float)((float)(quat.v[1] * v49.v[3]) - (float)(quat.v[2] * v49.v[0])) + (float)(v49.v[1] * quat.v[3])) + (float)(v49.v[2] * quat.v[0]);
      v54.v[2] = (float)((float)((float)(quat.v[1] * v49.v[0]) + (float)(quat.v[2] * v49.v[3])) - (float)(v49.v[1] * quat.v[0])) + (float)(v49.v[2] * quat.v[3]);
      v54.v[3] = (float)((float)((float)(quat.v[3] * v49.v[3]) - (float)(v49.v[0] * quat.v[0])) - (float)(quat.v[1] * v49.v[1])) - (float)(v49.v[2] * quat.v[2]);
      QuatTransform(&v49, &pOutGunParams.m_offset, &out);
      *(float *)&v45.m_primaryTagName = *(float *)&v45.m_primaryTagName + out.v[0];
      *(float *)&v45.m_fallbackTagName = *(float *)&v45.m_fallbackTagName + out.v[1];
      in.v[1] = 0.0;
      in.v[2] = 0.0;
      v46 = v46 + out.v[2];
      in.v[0] = pOutGunParams.m_length;
      QuatTransform(&v54, &in, &v52);
      vFrom.v[0] = v52.v[0] + *(float *)&v45.m_primaryTagName;
      vFrom.v[2] = v52.v[2] + v46;
      vFrom.v[1] = v52.v[1] + *(float *)&v45.m_fallbackTagName;
    }
    else
    {
      AIScriptedInterface::GetApproxEyePos(this, &vFrom, 1);
    }
  }
  CanShootFrom = AICommonInterface::CanShootFrom(this, &outEyePos, &vFrom);
  m_pAI->shoot.lastCanShootEnemyTime = level.time;
  v35 = CanShootFrom;
  m_pAI->shoot.lastCanShootEnemyResult = CanShootFrom;
  v36 = DVARBOOL_ai_ShowCanshootChecks;
  if ( !DVARBOOL_ai_ShowCanshootChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_ShowCanshootChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  if ( v36->current.enabled )
  {
    v37 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    integer = v37->current.integer;
    if ( integer <= 0 || integer == this->m_pAI->ent->s.number )
    {
      v39 = &colorGreen;
      if ( !v35 )
        v39 = &colorRed;
      G_DebugLineWithDuration(&outEyePos, &vFrom, v39, 0, 30);
    }
  }
  return v35;
}

/*
==============
AIScriptedInterface::CanShootEnemyFromExposedAtNode
==============
*/
bool AIScriptedInterface::CanShootEnemyFromExposedAtNode(AIScriptedInterface *this, int cacheDuration, bool bUseActualEnemyPos)
{
  sentient_s *sentient; 
  unsigned __int16 number; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  pathnode_t *CoverNode; 
  ai_scripted_t *m_pAI; 
  int lastCanShootEnemyFromExposedAtNodeTime; 
  const gentity_s *v15; 
  float v16; 
  bool CanShootFrom; 
  bool v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  int integer; 
  const vec4_t *v22; 
  __int64 v23; 
  __int64 v24; 
  AIWrapper v25; 
  vec3_t pos; 
  vec3_t outEyePos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 362, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 363, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 364, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  sentient = this->m_pAI->sentient;
  number = sentient->targetEnt.number;
  if ( !number )
    goto LABEL_58;
  v8 = number;
  v9 = number - 1;
  if ( v9 >= 0x800 )
  {
    LODWORD(v23) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v23, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v10 = v8 - 1;
  if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v10] )
  {
    LODWORD(v24) = sentient->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v24) )
      __debugbreak();
  }
  if ( !sentient->targetEnt.number )
  {
LABEL_58:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 365, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->targetEnt.isDefined())", (const char *)&queryFormat, "m_pAI->sentient->targetEnt.isDefined()") )
      __debugbreak();
  }
  CoverNode = AIScriptedInterface::GetCoverNode(this);
  if ( !CoverNode )
  {
    CoverNode = this->m_pAI->sentient->pClaimedNode;
    if ( !CoverNode )
      return 0;
  }
  m_pAI = this->m_pAI;
  lastCanShootEnemyFromExposedAtNodeTime = m_pAI->shoot.lastCanShootEnemyFromExposedAtNodeTime;
  if ( lastCanShootEnemyFromExposedAtNodeTime > 0 && lastCanShootEnemyFromExposedAtNodeTime + cacheDuration >= level.time )
    return m_pAI->shoot.lastCanShootEnemyFromExposedAtNodeResult;
  v15 = EntHandle::ent(&m_pAI->sentient->targetEnt);
  AIWrapper::AIWrapper(&v25, v15);
  if ( bUseActualEnemyPos || !v25.m_pAI )
    AICommonInterface::GetTargetLookPosition(this, &outEyePos);
  else
    AIScriptedInterface::GetApproxEyePos(v25.m_pAI, &outEyePos, 1);
  pathnode_t::GetPos(CoverNode, &pos);
  if ( AIScriptedInterface::IsStanceAllowed(this, STANCE_STAND) && Path_DoesNodeAllowStance(CoverNode, (const scr_string_t)scr_const.stand) )
  {
    v16 = pos.v[2] + 58.0;
  }
  else
  {
    if ( !AIScriptedInterface::IsStanceAllowed(this, STANCE_CROUCH) || !Path_DoesNodeAllowStance(CoverNode, (const scr_string_t)scr_const.crouch) )
      goto LABEL_43;
    v16 = pos.v[2] + 43.0;
  }
  pos.v[2] = v16;
LABEL_43:
  CanShootFrom = AICommonInterface::CanShootFrom(this, &outEyePos, &pos);
  m_pAI->shoot.lastCanShootEnemyFromExposedAtNodeTime = level.time;
  v18 = CanShootFrom;
  m_pAI->shoot.lastCanShootEnemyFromExposedAtNodeResult = CanShootFrom;
  v19 = DVARBOOL_ai_ShowCanshootChecks;
  if ( !DVARBOOL_ai_ShowCanshootChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_ShowCanshootChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.enabled )
  {
    v20 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    integer = v20->current.integer;
    if ( integer <= 0 || integer == this->m_pAI->ent->s.number )
    {
      v22 = &colorGreen;
      if ( !v18 )
        v22 = &colorRed;
      G_DebugLineWithDuration(&outEyePos, &pos, v22, 0, 30);
    }
  }
  return v18;
}

/*
==============
AIScriptedInterface::CanShootEnemyFromNodeStepOut
==============
*/
bool AIScriptedInterface::CanShootEnemyFromNodeStepOut(AIScriptedInterface *this, int cacheDuration, bool bUseActualEnemyPos)
{
  sentient_s *sentient; 
  unsigned __int16 number; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  pathnode_t *CoverNode; 
  pathnode_t *v12; 
  ai_scripted_t *m_pAI; 
  int lastCanShootEnemyFromStepOutTime; 
  const gentity_s *v16; 
  AIScriptedInterface *v17; 
  pathnode_t *v18; 
  __int16 type; 
  const tacpoint_t *PointForPathnodeVis; 
  int v21; 
  float v22; 
  ai_scripted_t *v23; 
  gentity_s *ent; 
  bool CanShootFrom; 
  const dvar_t *v26; 
  int Int_Internal_DebugName; 
  const vec4_t *v28; 
  __int64 v29; 
  __int64 v30; 
  AIWrapper v31; 
  vec3_t in; 
  vec3_t vFrom; 
  vec3_t outEyePos; 
  vec3_t out; 
  vec3_t vector; 
  vec4_t quat; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 266, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 267, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 268, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  sentient = this->m_pAI->sentient;
  number = sentient->targetEnt.number;
  if ( !number )
    goto LABEL_61;
  v8 = number;
  v9 = number - 1;
  if ( v9 >= 0x800 )
  {
    LODWORD(v29) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v29, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v10 = v8 - 1;
  if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v10] )
  {
    LODWORD(v30) = sentient->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v30) )
      __debugbreak();
  }
  if ( !sentient->targetEnt.number )
  {
LABEL_61:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 269, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->targetEnt.isDefined())", (const char *)&queryFormat, "m_pAI->sentient->targetEnt.isDefined()") )
      __debugbreak();
  }
  CoverNode = AIScriptedInterface::GetCoverNode(this);
  v12 = CoverNode;
  if ( !CoverNode || (unsigned int)CoverNode->constant.type - 6 > 1 )
    return AIScriptedInterface::CanShootEnemy(this, cacheDuration, 0, bUseActualEnemyPos);
  m_pAI = this->m_pAI;
  lastCanShootEnemyFromStepOutTime = m_pAI->shoot.lastCanShootEnemyFromStepOutTime;
  if ( lastCanShootEnemyFromStepOutTime > 0 && lastCanShootEnemyFromStepOutTime + cacheDuration >= level.time )
    return m_pAI->shoot.lastCanShootEnemyFromStepOutResult;
  v16 = EntHandle::ent(&m_pAI->sentient->targetEnt);
  AIWrapper::AIWrapper(&v31, v16);
  v17 = v31.m_pAI;
  if ( bUseActualEnemyPos )
    goto LABEL_39;
  if ( !v31.m_pAI )
    goto LABEL_39;
  v18 = AIScriptedInterface::GetCoverNode(v31.m_pAI);
  if ( !v18 || *(_DWORD *)(v17->GetAI(v17) + 488) == scr_const.exposed )
    goto LABEL_39;
  type = v18->constant.type;
  if ( type == 31 )
    type = v18->dynamic.turretEntNumber;
  if ( type == 9 )
LABEL_39:
    AICommonInterface::GetTargetLookPosition(this, &outEyePos);
  else
    AIScriptedInterface::GetApproxEyePos(v17, &outEyePos, 1);
  PointForPathnodeVis = TacGraph_GetPointForPathnodeVis(v12);
  if ( PointForPathnodeVis )
  {
    vFrom = PointForPathnodeVis->m_Pos;
  }
  else
  {
    pathnode_t::GetAngles(v12, &vector);
    AnglesToQuat(&vector, &quat);
    v21 = 1 << LOBYTE(v12->constant.type);
    v22 = 0.0;
    in.v[0] = 0.0;
    if ( (v21 & 0x80u) == 0 )
    {
      if ( (v21 & 0x40) != 0 )
      {
        v22 = FLOAT_60_0;
        in.v[1] = FLOAT_N32_0;
      }
      else
      {
        in.v[1] = 0.0;
      }
    }
    else
    {
      v22 = FLOAT_60_0;
      in.v[1] = FLOAT_32_0;
    }
    in.v[2] = v22;
    QuatTransform(&quat, &in, &out);
    v23 = this->m_pAI;
    ent = v23->ent;
    vFrom.v[0] = out.v[0] + v23->ent->r.currentOrigin.v[0];
    vFrom.v[1] = out.v[1] + ent->r.currentOrigin.v[1];
    vFrom.v[2] = out.v[2] + ent->r.currentOrigin.v[2];
  }
  CanShootFrom = AICommonInterface::CanShootFrom(this, &outEyePos, &vFrom);
  m_pAI->shoot.lastCanShootEnemyFromStepOutTime = level.time;
  m_pAI->shoot.lastCanShootEnemyFromStepOutResult = CanShootFrom;
  v26 = DVARBOOL_ai_ShowCanshootChecks;
  if ( !DVARBOOL_ai_ShowCanshootChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_ShowCanshootChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugEntIndex, "ai_debugEntIndex");
    if ( Int_Internal_DebugName <= 0 || Int_Internal_DebugName == this->m_pAI->ent->s.number )
    {
      v28 = &colorGreen;
      if ( !CanShootFrom )
        v28 = &colorRed;
      G_DebugLineWithDuration(&outEyePos, &vFrom, v28, 0, 30);
    }
  }
  return CanShootFrom;
}

/*
==============
AICommonInterface::CanShootFrom
==============
*/
bool AICommonInterface::CanShootFrom(AICommonInterface *this, const vec3_t *vTarget, const vec3_t *vFrom)
{
  float v6; 
  float v7; 
  unsigned __int16 EntityHitId; 
  sentient_s *sentient; 
  int number; 
  __int64 v12; 
  __int64 v13; 
  sentient_s *v14; 
  __int64 contentmask; 
  __int64 v16; 
  int v17; 
  trace_t results; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 142, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 143, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 144, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v6 = vFrom->v[1] - vTarget->v[1];
  v7 = vFrom->v[2] - vTarget->v[2];
  if ( (float)((float)((float)(v6 * v6) + (float)((float)(vFrom->v[0] - vTarget->v[0]) * (float)(vFrom->v[0] - vTarget->v[0]))) + (float)(v7 * v7)) > level.fFogOpaqueDistSqrd )
    return 0;
  G_Main_TraceCapsule(&results, vFrom, vTarget, &bounds_origin, this->m_pAI->ent->s.number, 33577057);
  if ( results.fraction == 1.0 )
    return 1;
  EntityHitId = Trace_GetEntityHitId(&results);
  if ( EntHandle::isDefined(&this->m_pAI->sentient->targetEnt) )
  {
    sentient = this->m_pAI->sentient;
    number = sentient->targetEnt.number;
    if ( (unsigned int)(number - 1) >= 0x7FF )
    {
      v17 = 2047;
      LODWORD(contentmask) = number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", contentmask, v17) )
        __debugbreak();
    }
    v12 = sentient->targetEnt.number;
    if ( (unsigned int)(v12 - 1) >= 0x800 )
    {
      LODWORD(v16) = 2048;
      LODWORD(contentmask) = v12 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", contentmask, v16) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v13 = v12 - 1;
    if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v13] )
    {
      LODWORD(v16) = sentient->targetEnt.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v16) )
        __debugbreak();
    }
    if ( (__int16)(sentient->targetEnt.number - 1) == EntityHitId )
      return 1;
  }
  v14 = g_entities[EntityHitId].sentient;
  return v14 && v14->eTeam != this->m_pAI->sentient->eTeam;
}

/*
==============
AIScriptedInterface::CheckSurprisedBySentient
==============
*/
void AIScriptedInterface::CheckSurprisedBySentient(AIScriptedInterface *this, sentient_s *other)
{
  sentient_info_t *SentientInfo; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v6; 
  float surprisedByMeDistSq; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  int lastKnownPosTime; 
  vec3_t vOriginOut; 
  vec3_t outLastKnownPos; 
  vec3_t forward; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1843, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1844, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1845, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
    __debugbreak();
  SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, other);
  if ( !SentientInfo->surprised )
  {
    m_pAI = this->m_pAI;
    if ( level.time - m_pAI->ent->c.item[0].ammoCount >= 2000 && ((unsigned int)(m_pAI->combat.combatMode - 4) > 1 || AICommonInterface::CanSeeSentient(this, other, 250)) )
    {
      if ( (Sentient_GetOrigin(other, &vOriginOut), v6 = this->m_pAI, surprisedByMeDistSq = other->surprisedByMeDistSq, v8 = vOriginOut.v[0] - v6->ent->r.currentOrigin.v[0], v9 = vOriginOut.v[1] - v6->ent->r.currentOrigin.v[1], v10 = vOriginOut.v[2] - v6->ent->r.currentOrigin.v[2], v11 = v9 * v9, surprisedByMeDistSq != 0.0) && (float)((float)((float)(v8 * v8) + v11) + (float)(v10 * v10)) <= surprisedByMeDistSq || (float)((float)(v8 * v8) + v11) <= v6->threat.newEnemyReactionDistSq && (float)(v10 * v10) <= 6400.0 )
      {
        if ( v6->combat.alertLevel < AI_ALERTNESS_ALERT && ((lastKnownPosTime = SentientInfo->lastKnownPosTime) == 0 || level.time - lastKnownPosTime > 10000) || ((AngleVectors(&v6->ent->r.currentAngles, &forward, NULL, NULL), SentientInfo_GetLastKnownPos(SentientInfo, &outLastKnownPos), !SentientInfo->lastKnownPosTime) || (float)((float)((float)((float)(vOriginOut.v[1] - outLastKnownPos.v[1]) * (float)(vOriginOut.v[1] - outLastKnownPos.v[1])) + (float)((float)(vOriginOut.v[0] - outLastKnownPos.v[0]) * (float)(vOriginOut.v[0] - outLastKnownPos.v[0]))) + (float)((float)(vOriginOut.v[2] - outLastKnownPos.v[2]) * (float)(vOriginOut.v[2] - outLastKnownPos.v[2]))) > 65536.0) && (float)((float)(v8 * forward.v[0]) + (float)(v9 * forward.v[1])) < 0.0 )
          SentientInfo->surprised = 1;
      }
    }
  }
}

/*
==============
DeltaInFovAndRange
==============
*/
bool DeltaInFovAndRange(const vec3_t *vDelta, const vec3_t *vForward, float fovDot, float fovDotZ, float fDistSqrd)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v10; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  bool result; 

  v5 = vDelta->v[2];
  v6 = vForward->v[1];
  v7 = vForward->v[0];
  v8 = v5 * vForward->v[2];
  v10 = vDelta->v[1];
  v12 = (float)((float)(vForward->v[0] * vDelta->v[0]) + (float)(v6 * v10)) + v8;
  result = 0;
  if ( v12 >= 0.0 && (float)(v12 * v12) >= (float)((float)(fovDot * fDistSqrd) * fovDot) )
  {
    if ( fovDotZ <= fovDot )
      return 1;
    v13 = fsqrt((float)(vDelta->v[0] * vDelta->v[0]) + (float)(v10 * v10));
    v14 = v7 * v13;
    v15 = v6 * v13;
    v16 = (float)((float)(v14 * v7) + (float)(v15 * v6)) + v8;
    if ( v16 >= 0.0 && (float)(v16 * v16) >= (float)((float)((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v5 * v5)) * (float)(fovDotZ * fovDotZ)) )
      return 1;
  }
  return result;
}

/*
==============
AICommonInterface::FovDot
==============
*/
float AICommonInterface::FovDot(AICommonInterface *this, const gentity_s *pOtherEnt)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 506, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->threat.hasThreateningEnemy || pOtherEnt && AICommonInterface::GetTargetEntity(this) == pOtherEnt )
    return this->m_pAI->sight.fovDot;
  else
    return this->m_pAI->sight.fovDotBusy;
}

/*
==============
AICommonInterface::FovDotZ
==============
*/
float AICommonInterface::FovDotZ(AICommonInterface *this, const gentity_s *pOtherEnt)
{
  if ( this->m_pAI )
    return this->m_pAI->sight.fovDotZ;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 517, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  return this->m_pAI->sight.fovDotZ;
}

/*
==============
AICommonInterface::GetEyeDirection
==============
*/
void AICommonInterface::GetEyeDirection(AICommonInterface *this, vec3_t *vEyeDir)
{
  ai_common_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 2032, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 2033, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  this->UpdateEyeInformation(this);
  m_pAI = this->m_pAI;
  vEyeDir->v[0] = m_pAI->eyeInfo.dir.v[0];
  vEyeDir->v[1] = m_pAI->eyeInfo.dir.v[1];
  vEyeDir->v[2] = m_pAI->eyeInfo.dir.v[2];
}

/*
==============
AICommonInterface::GetEyePosition
==============
*/
void AICommonInterface::GetEyePosition(AICommonInterface *this, vec3_t *vEyePosOut)
{
  ai_common_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 2013, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 2014, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  this->UpdateEyeInformation(this);
  m_pAI = this->m_pAI;
  vEyePosOut->v[0] = m_pAI->eyeInfo.pos.v[0];
  vEyePosOut->v[1] = m_pAI->eyeInfo.pos.v[1];
  vEyePosOut->v[2] = m_pAI->eyeInfo.pos.v[2];
}

/*
==============
AICommonInterface::GetLastKnownEnemyTacPoint
==============
*/
tacpoint_t *AICommonInterface::GetLastKnownEnemyTacPoint(AICommonInterface *this, const gentity_s *enemy)
{
  sentient_s *sentient; 
  sentient_info_t *SentientInfo; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 119, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 120, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  sentient = enemy->sentient;
  if ( sentient && (SentientInfo = Sentient_GetSentientInfo(this->m_pAI->ent->sentient, sentient), SentientInfo->lastKnownPosTime > 0) )
    return tacpoint_ref_t::GetPoint(&SentientInfo->lastKnownTacPoint);
  else
    return 0i64;
}

/*
==============
AIScriptedInterface::GetMuzzleInfo
==============
*/
__int64 AIScriptedInterface::GetMuzzleInfo(AIScriptedInterface *this, vec3_t *outOrigin, vec3_t *outForward)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v7; 
  const DObj *ServerDObjForEnt; 
  ai_scripted_t *v9; 
  ai_scripted_t *v10; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  TagPair v14; 
  tmat43_t<vec3_t> outTagMat; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 429, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->muzzleInfo.time == level.time )
    goto LABEL_8;
  Profile_Begin(283);
  this->GetWeaponFlashTagName(this, &v14);
  v7 = this->m_pAI;
  outBoneIndex[0] = -2;
  outTagName = 0;
  ServerDObjForEnt = Com_GetServerDObjForEnt(v7->ent);
  if ( TagPair::GetTagNameAndBoneIndex(&v14, ServerDObjForEnt, &outTagName, outBoneIndex) && G_Utils_DObjGetWorldTagMatrix(this->m_pAI->ent, outTagName, &outTagMat) )
  {
    this->m_pAI->muzzleInfo.time = level.time;
    this->m_pAI->muzzleInfo.pos = outTagMat.m[3];
    v9 = this->m_pAI;
    v9->muzzleInfo.dir.v[0] = outTagMat.m[0].v[0];
    v9->muzzleInfo.dir.v[1] = outTagMat.m[0].v[1];
    v9->muzzleInfo.dir.v[2] = outTagMat.m[0].v[2];
    Profile_EndInternal(NULL);
    m_pAI = this->m_pAI;
LABEL_8:
    outOrigin->v[0] = m_pAI->muzzleInfo.pos.v[0];
    outOrigin->v[1] = m_pAI->muzzleInfo.pos.v[1];
    outOrigin->v[2] = m_pAI->muzzleInfo.pos.v[2];
    v10 = this->m_pAI;
    outForward->v[0] = v10->muzzleInfo.dir.v[0];
    outForward->v[1] = v10->muzzleInfo.dir.v[1];
    outForward->v[2] = v10->muzzleInfo.dir.v[2];
    return 1i64;
  }
  Profile_EndInternal(NULL);
  return 0i64;
}

/*
==============
AIScriptedInterface::GetMuzzlePosApprox
==============
*/
void AIScriptedInterface::GetMuzzlePosApprox(AIScriptedInterface *this, vec3_t *outOrigin)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  vec4_t v8; 
  vec3_t out; 
  vec3_t in; 
  vec3_t v11; 
  vec4_t quat; 
  vec4_t v13; 
  ApproxGunParams pOutGunParams; 

  AIScriptedInterface::GetApproxAdjustedGunParams(this, &pOutGunParams);
  this->GetEyePosition(this, (vec3_t *)&v5);
  AnglesToQuat(&this->m_pAI->aimAngles, &quat);
  AnglesToQuat(&this->m_pAI->ent->r.currentAngles, &v8);
  v13.v[0] = (float)((float)((float)(quat.v[0] * v8.v[3]) + (float)(v8.v[0] * quat.v[3])) + (float)(v8.v[1] * quat.v[2])) - (float)(v8.v[2] * quat.v[1]);
  v13.v[1] = (float)((float)((float)(quat.v[1] * v8.v[3]) - (float)(quat.v[2] * v8.v[0])) + (float)(v8.v[1] * quat.v[3])) + (float)(v8.v[2] * quat.v[0]);
  v13.v[2] = (float)((float)((float)(quat.v[2] * v8.v[3]) + (float)(quat.v[1] * v8.v[0])) - (float)(v8.v[1] * quat.v[0])) + (float)(v8.v[2] * quat.v[3]);
  v13.v[3] = (float)((float)((float)(v8.v[3] * quat.v[3]) - (float)(quat.v[0] * v8.v[0])) - (float)(quat.v[1] * v8.v[1])) - (float)(v8.v[2] * quat.v[2]);
  QuatTransform(&v8, &pOutGunParams.m_offset, &out);
  v5 = v5 + out.v[0];
  v6 = v6 + out.v[1];
  in.v[1] = 0.0;
  in.v[2] = 0.0;
  v7 = v7 + out.v[2];
  in.v[0] = pOutGunParams.m_length;
  QuatTransform(&v13, &in, &v11);
  v4 = v11.v[1] + v6;
  outOrigin->v[0] = v11.v[0] + v5;
  outOrigin->v[2] = v11.v[2] + v7;
  outOrigin->v[1] = v4;
}

/*
==============
AICommonInterface::GetPerfectInfo
==============
*/
void AICommonInterface::GetPerfectInfo(AICommonInterface *this, sentient_s *other, unsigned __int8 reason)
{
  sentient_info_t *SentientInfo; 
  const tacpoint_t *v7; 
  int lastKnownPosTime; 
  vec3_t vOriginOut; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1908, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1909, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1910, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
    __debugbreak();
  this->CheckSurprisedBySentient(this, other);
  SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, other);
  SentientInfo->lastKnownPosTime = level.time;
  Sentient_GetOrigin(other, &vOriginOut);
  SentientInfo_SetLastKnownPos(SentientInfo, other, &vOriginOut);
  v7 = Sentient_NearestTacPoint(other);
  tacpoint_ref_t::SetPoint(&SentientInfo->lastKnownTacPoint, v7);
  lastKnownPosTime = SentientInfo->lastKnownPosTime;
  SentientInfo->lastKnownReason = reason;
  AICommonInterface::NotifyKnownEvent(this, other->ent, &vOriginOut, reason, lastKnownPosTime);
}

/*
==============
GetVehicleLookAtPosition
==============
*/
void GetVehicleLookAtPosition(const gentity_s *ent, const vec3_t *viewPos, vec3_t *outLookAtPos)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int128 v22; 
  float v23; 
  tmat33_t<vec3_t> axis; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1046, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v6 = viewPos->v[0] - outLookAtPos->v[0];
  v7 = viewPos->v[1] - outLookAtPos->v[1];
  v8 = viewPos->v[2] - outLookAtPos->v[2];
  AnglesToAxis(&ent->r.currentAngles, &axis);
  v9 = (float)((float)(v7 * axis.m[0].v[1]) + (float)(v6 * axis.m[0].v[0])) + (float)(v8 * axis.m[0].v[2]);
  v10 = (float)((float)(v7 * axis.m[1].v[1]) + (float)(v6 * axis.m[1].v[0])) + (float)(v8 * axis.m[1].v[2]);
  v11 = (float)((float)(v7 * axis.m[2].v[1]) + (float)(v6 * axis.m[2].v[0])) + (float)(v8 * axis.m[2].v[2]);
  if ( v9 != 0.0 )
  {
    v12 = ent->r.box.halfSize.v[0] / COERCE_FLOAT(LODWORD(v9) & _xmm);
    v13 = v12 * v10;
    v14 = v12 * v9;
    v15 = v12 * v11;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 * v10) & _xmm) < ent->r.box.halfSize.v[1] && COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 * v11) & _xmm) < ent->r.box.halfSize.v[2] )
      goto LABEL_13;
  }
  if ( v10 != 0.0 )
  {
    v16 = ent->r.box.halfSize.v[1] / COERCE_FLOAT(LODWORD(v10) & _xmm);
    v15 = v16 * v11;
    v14 = v16 * v9;
    v13 = v16 * v10;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 * v11) & _xmm) < ent->r.box.halfSize.v[2] && COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 * v9) & _xmm) < ent->r.box.halfSize.v[0] )
      goto LABEL_13;
  }
  if ( v11 != 0.0 )
  {
    v17 = ent->r.box.halfSize.v[2] / COERCE_FLOAT(LODWORD(v11) & _xmm);
    v14 = v9 * v17;
    v13 = v10 * v17;
    v15 = v17 * v11;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 * v17) & _xmm) < ent->r.box.halfSize.v[0] && COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 * v17) & _xmm) < ent->r.box.halfSize.v[1] )
    {
LABEL_13:
      v18 = (float)((float)(v13 - v10) * (float)(v13 - v10)) + (float)((float)(v14 - v9) * (float)(v14 - v9));
      v19 = outLookAtPos->v[0] - viewPos->v[0];
      v20 = outLookAtPos->v[2] - viewPos->v[2];
      v22 = LODWORD(outLookAtPos->v[1]);
      v21 = outLookAtPos->v[1] - viewPos->v[1];
      v23 = fsqrt(v18 + (float)((float)(v15 - v11) * (float)(v15 - v11)));
      *(float *)&v22 = fsqrt((float)((float)(v21 * v21) + (float)(v19 * v19)) + (float)(v20 * v20));
      _XMM4 = v22;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
      }
      outLookAtPos->v[0] = (float)((float)(v19 * (float)(1.0 / *(float *)&_XMM0)) * v23) + viewPos->v[0];
      outLookAtPos->v[1] = (float)((float)((float)(1.0 / *(float *)&_XMM0) * v21) * v23) + viewPos->v[1];
      outLookAtPos->v[2] = (float)((float)((float)(1.0 / *(float *)&_XMM0) * v20) * v23) + viewPos->v[2];
    }
  }
}

/*
==============
AICommonInterface::KnowAboutEnemy
==============
*/
_BOOL8 AICommonInterface::KnowAboutEnemy(AICommonInterface *this)
{
  const sentient_s *TargetSentient; 
  int lastKnownPosTime; 
  _BOOL8 result; 

  TargetSentient = AICommonInterface::GetTargetSentient(this);
  result = 0;
  if ( TargetSentient )
  {
    lastKnownPosTime = Sentient_GetSentientInfo(this->m_pAI->sentient, TargetSentient)->lastKnownPosTime;
    if ( lastKnownPosTime )
    {
      if ( level.time - lastKnownPosTime < 10000 )
        return 1;
    }
  }
  return result;
}

/*
==============
AICommonInterface::PointInFov
==============
*/
_BOOL8 AICommonInterface::PointInFov(AICommonInterface *this, const vec3_t *vPoint)
{
  double v4; 
  float v5; 
  double v6; 
  vec3_t vEyePos; 

  this->GetEyePosition(this, &vEyePos);
  v4 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDotZ)(this, 0i64);
  v5 = *(float *)&v4;
  v6 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDot)(this, 0i64);
  return AICommonInterface::PointInFovAndRange(this, &vEyePos, vPoint, *(float *)&v6, v5, 0.0);
}

/*
==============
AICommonInterface::PointInFovAndRange
==============
*/
bool AICommonInterface::PointInFovAndRange(AICommonInterface *this, const vec3_t *vEyePos, const vec3_t *vPoint, float fovDot, float fovDotZ, float fMaxDistSqrd)
{
  float v10; 
  float v11; 
  float v12; 
  bool result; 
  ai_common_t *m_pAI; 
  vec3_t vForward; 
  vec3_t vDelta; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 790, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 791, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  v10 = vPoint->v[0] - vEyePos->v[0];
  v11 = vPoint->v[2] - vEyePos->v[2];
  vDelta.v[1] = vPoint->v[1] - vEyePos->v[1];
  vDelta.v[0] = v10;
  vDelta.v[2] = v11;
  v12 = (float)((float)(vDelta.v[1] * vDelta.v[1]) + (float)(v10 * v10)) + (float)(v11 * v11);
  if ( fMaxDistSqrd != 0.0 && (v12 > fMaxDistSqrd || v12 > level.fFogOpaqueDistSqrd) )
    return 0;
  result = 1;
  if ( fovDot != 0.0 )
  {
    if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 2032, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 2033, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    this->UpdateEyeInformation(this);
    vForward = this->m_pAI->eyeInfo.dir;
    result = AICommonInterface::PointInFovAndRange_Check(this, vEyePos, vPoint, &vDelta, &vForward, fovDot, fovDotZ, v12, fMaxDistSqrd);
    if ( !result )
    {
      m_pAI = this->m_pAI;
      if ( m_pAI->sight.fovForward )
      {
        AngleVectors(&m_pAI->ent->r.currentAngles, &vForward, NULL, NULL);
        return AICommonInterface::PointInFovAndRange_Check(this, vEyePos, vPoint, &vDelta, &vForward, fovDot, fovDotZ, v12, fMaxDistSqrd);
      }
    }
  }
  return result;
}

/*
==============
AICommonInterface::PointInFovAndRange_Check
==============
*/
bool AICommonInterface::PointInFovAndRange_Check(AICommonInterface *this, const vec3_t *vEyePos, const vec3_t *vPoint, const vec3_t *vDelta, const vec3_t *vForward, float fovDot, float fovDotZ, float fDistSqrd)
{
  bool result; 
  const vec3_t *v9; 
  __int64 v10; 
  float *v11; 
  float *v12; 
  __int64 v13; 
  _BYTE *v14; 
  float *v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  vec3_t vDeltaa; 

  result = DeltaInFovAndRange(vDelta, vForward, fovDot, fovDotZ, fDistSqrd);
  if ( !result )
  {
    v14 = *(_BYTE **)(v10 + 8);
    if ( v14[182] )
    {
      v15 = *(float **)v14;
      v16 = *(float *)(v13 + 8);
      v17 = *(float *)(*(_QWORD *)v14 + 312i64);
      if ( v16 > v17 )
      {
        v18 = v12[2];
        if ( v18 <= v16 )
        {
          if ( v18 >= v17 )
          {
            v21 = *v11;
            v22 = v11[1] * v11[1];
            vDeltaa.v[1] = v11[1];
            vDeltaa.v[0] = v21;
            vDeltaa.v[2] = 0.0;
            return DeltaInFovAndRange(&vDeltaa, v9, fovDot, 0.0, v22 + (float)(v21 * v21));
          }
          else
          {
            v19 = v18 - v15[78];
            v20 = *v12 - v15[76];
            vDeltaa.v[1] = v12[1] - v15[77];
            vDeltaa.v[0] = v20;
            vDeltaa.v[2] = v19;
            return DeltaInFovAndRange(&vDeltaa, v9, fovDot, fovDotZ, (float)((float)(vDeltaa.v[1] * vDeltaa.v[1]) + (float)(v20 * v20)) + (float)(v19 * v19));
          }
        }
      }
    }
  }
  return result;
}

/*
==============
AICommonInterface::RecentlyKnownEnemy
==============
*/
_BOOL8 AICommonInterface::RecentlyKnownEnemy(AICommonInterface *this, int latency)
{
  const sentient_s *TargetSentient; 
  int lastKnownPosTime; 
  _BOOL8 result; 

  TargetSentient = AICommonInterface::GetTargetSentient(this);
  result = 0;
  if ( TargetSentient )
  {
    lastKnownPosTime = Sentient_GetSentientInfo(this->m_pAI->sentient, TargetSentient)->lastKnownPosTime;
    if ( lastKnownPosTime )
    {
      if ( level.time - lastKnownPosTime < latency )
        return 1;
    }
  }
  return result;
}

/*
==============
AICommonInterface::RecentlySeeEnemy
==============
*/
int AICommonInterface::RecentlySeeEnemy(AICommonInterface *this)
{
  sentient_s *TargetSentient; 
  sentient_info_t *v3; 
  int iLastUpdateTime; 
  int iLastVisTime; 

  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient )
    return AICommonInterface::CanSeeEnemy(this);
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1342, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1343, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  v3 = &this->m_pAI->sentientInfo[TargetSentient - level.sentients];
  iLastUpdateTime = v3->VisCache.iLastUpdateTime;
  if ( !iLastUpdateTime || iLastUpdateTime + 5000 < level.time )
    return AICommonInterface::CanSeeEntity(this, TargetSentient->ent);
  iLastVisTime = v3->VisCache.iLastVisTime;
  return iLastVisTime && iLastVisTime + 5000 >= level.time;
}

/*
==============
AICommonInterface::RecentlySeeSentient
==============
*/
int AICommonInterface::RecentlySeeSentient(AICommonInterface *this, sentient_s *sentient, int latency)
{
  sentient_info_t *v6; 
  int iLastUpdateTime; 
  int iLastVisTime; 

  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1341, ASSERT_TYPE_ASSERT, "( sentient )", (const char *)&queryFormat, "sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1342, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1343, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  v6 = &this->m_pAI->sentientInfo[sentient - level.sentients];
  iLastUpdateTime = v6->VisCache.iLastUpdateTime;
  if ( !iLastUpdateTime || latency + iLastUpdateTime < level.time )
    return AICommonInterface::CanSeeEntity(this, sentient->ent);
  iLastVisTime = v6->VisCache.iLastVisTime;
  return iLastVisTime && latency + iLastVisTime >= level.time;
}

/*
==============
AIScriptedInterface::ShouldDoFOVCheck
==============
*/
bool AIScriptedInterface::ShouldDoFOVCheck(AIScriptedInterface *this, sentient_s *sentient)
{
  sentient_info_t *SentientInfo; 
  bool result; 

  result = 1;
  if ( AICommonInterface::GetTargetSentient(this) == sentient || SentientHandle::isDefined(&this->m_pAI->threat.pFavoriteEnemy) && SentientHandle::sentient(&this->m_pAI->threat.pFavoriteEnemy) == sentient )
  {
    SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, sentient);
    if ( this->m_pAI->combat.alertLevel >= AI_ALERTNESS_COMBAT && level.time - SentientInfo->lastKnownPosTime < 1000 )
      return 0;
  }
  return result;
}

/*
==============
AICommonInterface::SightTrace
==============
*/
__int64 AICommonInterface::SightTrace(AICommonInterface *this, const vec3_t *start, const vec3_t *end, int passEntNum, foliage_sight_trace_options_t foliageSetting)
{
  __int64 v5; 
  const dvar_t *v9; 
  float value; 
  int v11; 
  BOOL v12; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  EntityTagInfo *tagInfo; 
  gentity_s *parent; 
  EntityTagInfo *v16; 
  gentity_s *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v24; 
  float v28; 
  float v29; 
  float v30; 
  bool HasHit; 
  const vec3_t *p_starta; 
  double ClientVisibility; 
  float v34; 
  double FxVisibility; 
  unsigned __int8 v36; 
  hkMemoryAllocator *v37; 
  hkMemoryAllocator *v38; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v42; 
  vec3_t starta; 

  v42 = -2i64;
  v5 = passEntNum;
  Profile_Begin(272);
  ++this->m_pAI->traceCount;
  v9 = DVARFLT_ai_foliageSeeThroughDist;
  if ( !DVARFLT_ai_foliageSeeThroughDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_foliageSeeThroughDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  value = v9->current.value;
  v11 = 41965571;
  v12 = foliageSetting == FORCE_IGNORE_FOLIAGE;
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && SV_BotIsBotEnt(this->m_pAI->ent) )
  {
    if ( foliageSetting != FORCE_CHECK_FOLIAGE )
      v12 = 1;
    if ( SV_BotControllingRemoteMissile(this->m_pAI->ent) )
      v11 = 41963523;
  }
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 560, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&ignoreBodies, 0, this->m_pAI->ent->s.number, 1, 1, 0, 1, 0);
  if ( (_DWORD)v5 != 2047 )
  {
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(&ignoreBodies, v5, 1, 1, 0, 1, 0);
    tagInfo = g_entities[v5].tagInfo;
    if ( tagInfo )
    {
      parent = tagInfo->parent;
      if ( parent )
      {
        if ( parent->vehicle )
          HavokPhysics_IgnoreBodies::AddIgnoreEntity(&ignoreBodies, parent->s.number, 1, 0, 0, 0, 0);
      }
    }
  }
  if ( (unsigned int)(v5 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v5, "signed", v5) )
    __debugbreak();
  G_GameInterface_AI_AddAdditionalIgnoreEntsForSightTrace(v5, &ignoreBodies);
  v16 = this->m_pAI->ent->tagInfo;
  if ( v16 )
  {
    v17 = v16->parent;
    if ( v17 )
    {
      if ( v17->vehicle )
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(&ignoreBodies, v17->s.number, 1, 0, 0, 0, 0);
    }
  }
  extendedData.contents = -1;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.ignoreBodies = &ignoreBodies;
  if ( v12 )
    goto LABEL_33;
  v18 = start->v[0];
  v19 = end->v[0] - start->v[0];
  v20 = start->v[1];
  v24 = LODWORD(end->v[1]);
  v21 = end->v[1] - v20;
  v22 = start->v[2];
  v23 = end->v[2] - v22;
  *(float *)&v24 = (float)((float)(v21 * v21) + (float)(v19 * v19)) + (float)(v23 * v23);
  if ( *(float *)&v24 < (float)(value * value) )
  {
LABEL_33:
    p_starta = end;
    goto LABEL_34;
  }
  if ( !this->m_pAI->sight.ignoreCloseFoliage )
  {
    p_starta = end;
LABEL_35:
    extendedData.contents = v11;
    Physics_Raycast(PHYSICS_WORLD_ID_FIRST, start, p_starta, &extendedData, CollisionQueryResult);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    goto LABEL_36;
  }
  *(float *)&v24 = fsqrt(*(float *)&v24);
  _XMM3 = v24;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm2, xmm0
  }
  *(float *)&_XMM0 = 1.0 / *(float *)&_XMM1;
  v28 = v19 * (float)(1.0 / *(float *)&_XMM1);
  v29 = v21 * *(float *)&_XMM0;
  v30 = v23 * *(float *)&_XMM0;
  if ( *(float *)&_XMM3 <= value )
  {
    starta.v[0] = (float)(v28 * *(float *)&_XMM3) + v18;
    starta.v[1] = (float)(v29 * *(float *)&_XMM3) + v20;
    starta.v[2] = (float)(v30 * *(float *)&_XMM3) + v22;
    HavokPhysics_CollisionQueryResult::Reset(CollisionQueryResult, 1);
    p_starta = &starta;
    goto LABEL_34;
  }
  starta.v[0] = (float)(v28 * value) + v18;
  starta.v[1] = (float)(v29 * value) + v20;
  starta.v[2] = (float)(v30 * value) + v22;
  extendedData.contents = v11;
  Physics_Raycast(PHYSICS_WORLD_ID_FIRST, &starta, end, &extendedData, CollisionQueryResult);
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
  if ( !HasHit )
  {
    HavokPhysics_CollisionQueryResult::Reset(CollisionQueryResult, 1);
    p_starta = &starta;
LABEL_34:
    v11 &= ~2u;
    goto LABEL_35;
  }
LABEL_36:
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  if ( HasHit )
    goto LABEL_45;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    goto LABEL_46;
  if ( SV_IsDemoPlaying() )
  {
    FxVisibility = SV_DemoSP_GetFxVisibility();
    v34 = *(float *)&FxVisibility;
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
      __debugbreak();
    ClientVisibility = FX_GetClientVisibility(fx_serverVisClient, start, end);
    v34 = *(float *)&ClientVisibility;
    SV_DemoSP_RecordFxVisibility(*(float *)&ClientVisibility);
  }
  if ( v34 < 0.2 )
  {
LABEL_45:
    Profile_EndInternal(NULL);
    v36 = 0;
  }
  else
  {
LABEL_46:
    Profile_EndInternal(NULL);
    v36 = 1;
  }
  v37 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreBodies.m_size = 0;
  if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v37, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  ignoreBodies.m_ignoreBodies.m_data = NULL;
  ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v38 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreEntities.m_size = 0;
  if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v38, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return v36;
}

/*
==============
AICommonInterface::UpdateEyeInformation
==============
*/
void AICommonInterface::UpdateEyeInformation(AICommonInterface *this)
{
  int WorldTagMatrix; 
  ai_common_t *m_pAI; 
  ai_common_t *v4; 
  ai_common_t *v5; 
  __int128 v6; 
  __int128 v7; 
  ai_common_t *v11; 
  gentity_s *ent; 
  ai_common_t *v13; 
  tmat43_t<vec3_t> outTagMat; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1963, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1964, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1965, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( this->m_pAI->eyeInfo.time != level.time )
  {
    Profile_Begin(273);
    this->m_pAI->eyeInfo.time = level.time;
    WorldTagMatrix = G_Utils_DObjGetWorldTagMatrix(this->m_pAI->ent, scr_const.tag_eye, &outTagMat);
    m_pAI = this->m_pAI;
    if ( WorldTagMatrix )
    {
      m_pAI->eyeInfo.pos = outTagMat.m[3];
      v4 = this->m_pAI;
      v4->eyeInfo.dir.v[0] = outTagMat.m[0].v[0];
      v4->eyeInfo.dir.v[1] = outTagMat.m[0].v[1];
      this->m_pAI->eyeInfo.dir.v[2] = 0.0;
      v5 = this->m_pAI;
      v6 = LODWORD(v5->eyeInfo.dir.v[0]);
      v7 = v6;
      *(float *)&v7 = fsqrt((float)(*(float *)&v6 * *(float *)&v6) + (float)(v5->eyeInfo.dir.v[1] * v5->eyeInfo.dir.v[1]));
      _XMM2 = v7;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      v5->eyeInfo.dir.v[0] = *(float *)&v6 * (float)(1.0 / *(float *)&_XMM0);
      v5->eyeInfo.dir.v[1] = (float)(1.0 / *(float *)&_XMM0) * v5->eyeInfo.dir.v[1];
    }
    else
    {
      Com_Printf(18, "UpdateEyeInformation: Actor %i dobj doesn't have TAG_EYE.\n", (unsigned int)m_pAI->ent->s.number);
      v11 = this->m_pAI;
      ent = v11->ent;
      v11->eyeInfo.pos.v[0] = v11->ent->r.currentOrigin.v[0];
      v11->eyeInfo.pos.v[1] = ent->r.currentOrigin.v[1];
      v11->eyeInfo.pos.v[2] = ent->r.currentOrigin.v[2];
      this->m_pAI->eyeInfo.pos.v[2] = this->m_pAI->eyeInfo.pos.v[2] + 58.0;
      v13 = this->m_pAI;
      v13->eyeInfo.dir.v[0] = v13->orientation.vLookForward.v[0];
      v13->eyeInfo.dir.v[1] = v13->orientation.vLookForward.v[1];
      v13->eyeInfo.dir.v[2] = v13->orientation.vLookForward.v[2];
    }
    Profile_EndInternal(NULL);
  }
}

/*
==============
AICommonInterface::UpdateLastEnemySightPos
==============
*/
void AICommonInterface::UpdateLastEnemySightPos(AICommonInterface *this)
{
  const sentient_s *TargetSentient; 
  const sentient_s *v3; 
  sentient_info_t *SentientInfo; 
  vec3_t *p_lastEnemySightPos; 
  AIWrapper v6; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 59, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 60, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  v3 = TargetSentient;
  if ( TargetSentient )
  {
    SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, TargetSentient);
    if ( SentientInfo->VisCache.bVisible && SentientInfo->VisCache.iLastVisTime == level.time )
    {
      this->m_pAI->sight.lastEnemySightPosValid = 1;
      AIWrapper::AIWrapper(&v6, v3->ent);
      p_lastEnemySightPos = &this->m_pAI->sight.lastEnemySightPos;
      if ( v6.m_pAI )
        AIScriptedInterface::GetApproxEyePos(v6.m_pAI, p_lastEnemySightPos, 0);
      else
        Sentient_GetEyePosition(v3, p_lastEnemySightPos);
    }
  }
}

/*
==============
AICommonInterface::UpdateLastKnownPos
==============
*/
void AICommonInterface::UpdateLastKnownPos(AICommonInterface *this, sentient_s *other, const vec3_t *pos, unsigned __int8 reason)
{
  sentient_info_t *SentientInfo; 
  int lastKnownPosTime; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1935, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1936, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
    __debugbreak();
  SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, other);
  if ( level.time - SentientInfo->lastKnownPosTime > 10000 )
  {
    SentientInfo->lastKnownPosTime = level.time;
    SentientInfo_SetLastKnownPos(SentientInfo, other, pos);
    SentientInfo->pLastKnownNode = NULL;
    tacpoint_ref_t::SetPoint(&SentientInfo->lastKnownTacPoint, NULL);
    lastKnownPosTime = SentientInfo->lastKnownPosTime;
    SentientInfo->lastKnownReason = reason;
    AICommonInterface::NotifyKnownEvent(this, other->ent, pos, reason, lastKnownPosTime);
  }
}

/*
==============
AICommonInterface::UpdateNearbyEnemyInfo
==============
*/
void AICommonInterface::UpdateNearbyEnemyInfo(AICommonInterface *this, sentient_sort_t *enemyList, __int64 enemyCount)
{
  sentient_sort_t *v3; 
  __int64 v4; 
  __int64 v6; 
  float v7; 
  __int64 v8; 

  v3 = enemyList;
  v4 = (int)enemyCount;
  if ( !enemyList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1495, ASSERT_TYPE_ASSERT, "(enemyList)", (const char *)&queryFormat, "enemyList") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1496, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v6 = v4;
  v7 = this->m_pAI->threat.highlyAwareRadius * this->m_pAI->threat.highlyAwareRadius;
  if ( (int)v4 > 0 )
  {
    v8 = 0i64;
    do
    {
      if ( v7 <= v3->distSqrd )
        break;
      LOBYTE(enemyCount) = 18;
      this->GetPerfectInfo(this, v3->sentient, enemyCount);
      ++v8;
      ++v3;
    }
    while ( v8 < v6 );
  }
}

/*
==============
AICommonInterface::UpdateSight
==============
*/
void AICommonInterface::UpdateSight(AICommonInterface *this)
{
  __int128 v1; 
  __int128 v2; 
  __int64 v4; 
  int v5; 
  bool v6; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v8; 
  unsigned int v9; 
  bitarray<224> *p_result; 
  int v11; 
  sentient_s *v12; 
  const char *v13; 
  float *v14; 
  gclient_s *client; 
  gentity_s *ent; 
  __int128 v17; 
  int iLastUpdateTime; 
  int FrameDuration; 
  int v20; 
  ai_common_t *m_pAI; 
  sentient_s *v24; 
  int traceCount; 
  __int64 v26; 
  char *v27; 
  int latency; 
  ai_common_t *v29; 
  ai_common_t *v30; 
  float v31; 
  char *v32; 
  __int64 v33; 
  __int64 v34; 
  vec3_t vOriginOut; 
  bitarray<224> result; 
  char Base[8]; 
  char v38; 
  __int128 v39; 
  __int128 v40; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1699, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1700, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1701, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  Profile_Begin(256);
  v4 = 0i64;
  v5 = 0;
  if ( level.teammode == TEAMMODE_FFA )
  {
    v6 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
    *(_QWORD *)&result.array[4] = *(_QWORD *)&AllCombatTeamFlags->array[4];
    v8 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
    if ( v6 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v8 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, this->m_pAI->sentient->eTeam);
  }
  if ( this->m_pAI->sentient->neutralSenses && this->m_pAI->sentient->eTeam == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) )
    result.array[0] |= 0x20000000u;
  v9 = 0;
  p_result = &result;
  while ( !p_result->array[0] )
  {
    ++v9;
    p_result = (bitarray<224> *)((char *)p_result + 4);
    if ( v9 >= 7 )
      goto LABEL_73;
  }
  v11 = 0;
  v40 = v1;
  v39 = v2;
  v12 = Sentient_FirstSentient(&result);
  if ( v12 )
  {
    v14 = (float *)&v38;
    do
    {
      if ( this->m_pAI->sentient != v12 )
      {
        if ( !v12->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1746, ASSERT_TYPE_ASSERT, "(sentient->ent)", (const char *)&queryFormat, "sentient->ent") )
          __debugbreak();
        if ( v12->ent->s.number == this->m_pAI->ent->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1747, ASSERT_TYPE_ASSERT, "(sentient->ent->s.number != m_pAI->ent->s.number)", (const char *)&queryFormat, "sentient->ent->s.number != m_pAI->ent->s.number") )
          __debugbreak();
        if ( v12->ent->s.eType != ET_INVISIBLE && v12->ent->health > 0 && (!Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || ((client = v12->ent->client) == NULL || client->sess.connected == CON_CONNECTED) && (v12->ent->flags.m_flags[0] & 4) == 0) )
        {
          Sentient_GetOrigin(v12, &vOriginOut);
          ent = this->m_pAI->ent;
          vOriginOut.v[0] = vOriginOut.v[0] - ent->r.currentOrigin.v[0];
          v17 = LODWORD(vOriginOut.v[1]);
          vOriginOut.v[1] = vOriginOut.v[1] - ent->r.currentOrigin.v[1];
          *(float *)&v17 = (float)((float)(vOriginOut.v[1] * vOriginOut.v[1]) + (float)(vOriginOut.v[0] * vOriginOut.v[0])) + (float)((float)(vOriginOut.v[2] - ent->r.currentOrigin.v[2]) * (float)(vOriginOut.v[2] - ent->r.currentOrigin.v[2]));
          vOriginOut.v[2] = vOriginOut.v[2] - ent->r.currentOrigin.v[2];
          if ( (v17 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1771, ASSERT_TYPE_SANITY, "( !IS_NAN( fDistSqrd ) )", (const char *)&queryFormat, "!IS_NAN( fDistSqrd )") )
            __debugbreak();
          if ( *(float *)&v17 != 0.0 )
          {
            iLastUpdateTime = this->m_pAI->sentientInfo[v12 - level.sentients].VisCache.iLastUpdateTime;
            FrameDuration = G_Level_GetFrameDuration();
            v20 = (level.time - 2 * FrameDuration - iLastUpdateTime) & ~((level.time - 2 * FrameDuration - iLastUpdateTime) >> 31);
            if ( (unsigned int)v11 >= 0x110 )
            {
              LODWORD(v34) = 272;
              LODWORD(v33) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1780, ASSERT_TYPE_ASSERT, "(unsigned)( iCheckCount ) < (unsigned)( ( sizeof( *array_counter( check ) ) + 0 ) )", "iCheckCount doesn't index ARRAY_COUNT( check )\n\t%i not in [0, %i)", v33, v34) )
                __debugbreak();
            }
            v14[1] = *(float *)&v17;
            if ( *(float *)&v17 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
              __debugbreak();
            m_pAI = this->m_pAI;
            _XMM1 = v17;
            __asm { vrsqrtss xmm2, xmm1, xmm6 }
            *v14 = (float)v20 * *(float *)&_XMM2;
            *((_QWORD *)v14 - 1) = v12;
            if ( *(float *)&v17 <= 262144.0 )
              v5 = 1;
            AI_UpdateThreatSight(m_pAI, &m_pAI->sentientInfo[v12 - level.sentients], fsqrt(*(float *)&v17));
            ++v11;
            v14 += 4;
          }
        }
      }
      v24 = Sentient_NextSentient(v12, &result);
      v13 = "sentient->ent->s.number != m_pAI->ent->s.number";
      v12 = v24;
    }
    while ( v24 );
    v4 = 0i64;
    if ( v11 > 1 )
      qsort(Base, v11, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_sentient_sort);
  }
  traceCount = this->m_pAI->traceCount;
  if ( v11 > 0 )
  {
    v26 = 0i64;
    v27 = Base;
    do
    {
      if ( *((float *)v27 + 3) <= 262144.0 )
        latency = 0;
      else
        latency = this->m_pAI->sight.latency;
      AICommonInterface::CanSeeSentient(this, *(sentient_s **)v27, latency);
      v29 = this->m_pAI;
      if ( v29->traceCount != traceCount && (!SV_BotIsBotEnt(v29->ent) || !v5) )
        break;
      ++v26;
      v27 += 16;
    }
    while ( v26 < v11 );
  }
  v30 = this->m_pAI;
  if ( v30->threat.highlyAwareRadius != 0.0 )
  {
    if ( !v30->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1496, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    v31 = this->m_pAI->threat.highlyAwareRadius * this->m_pAI->threat.highlyAwareRadius;
    if ( v11 > 0i64 )
    {
      v32 = Base;
      do
      {
        if ( v31 <= *((float *)v32 + 3) )
          break;
        LOBYTE(v13) = 18;
        this->GetPerfectInfo(this, *(sentient_s **)v32, (unsigned __int8)v13);
        ++v4;
        v32 += 16;
      }
      while ( v4 < v11 );
    }
  }
LABEL_73:
  Profile_EndInternal(NULL);
}

/*
==============
compare_sentient_sort
==============
*/
__int64 compare_sentient_sort(const void *pe1, const void *pe2)
{
  return (unsigned int)(*((_DWORD *)pe2 + 2) - *((_DWORD *)pe1 + 2));
}

