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

void __fastcall AI_UpdateThreatSight(ai_common_t *self, sentient_info_t *info, double dist)
{
  const dvar_t *v15; 
  sentient_s *v17; 
  bool v18; 
  char v32; 
  __int64 v81; 
  __int64 v82; 
  bool inOutCalculated; 
  float outFacingDot; 

  __asm { vmovaps [rsp+0E8h+var_38], xmm6 }
  _RBX = info;
  _RDI = self;
  __asm { vmovaps xmm6, xmm2 }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1560, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !_RDI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1561, ASSERT_TYPE_ASSERT, "( self->ent )", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  if ( !_RDI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1562, ASSERT_TYPE_ASSERT, "( self->sentient )", (const char *)&queryFormat, "self->sentient") )
    __debugbreak();
  if ( !_RDI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1563, ASSERT_TYPE_ASSERT, "( self->sentientInfo )", (const char *)&queryFormat, "self->sentientInfo") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1564, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
    __debugbreak();
  v15 = DVARBOOL_ai_threatSight;
  if ( !DVARBOOL_ai_threatSight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_48], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    if ( _RDI->threat.threatSight )
    {
      __asm { vmovaps [rsp+0E8h+var_58], xmm8 }
      if ( (unsigned int)(_RBX - _RDI->sentientInfo) >= level.maxSentients )
      {
        LODWORD(v82) = level.maxSentients;
        LODWORD(v81) = _RBX - _RDI->sentientInfo;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1577, ASSERT_TYPE_ASSERT, "(unsigned)( (info - self->sentientInfo) ) < (unsigned)( level.maxSentients )", "(info - self->sentientInfo) doesn't index level.maxSentients\n\t%i not in [0, %i)", v81, v82) )
          __debugbreak();
      }
      v17 = &level.sentients[_RBX - _RDI->sentientInfo];
      if ( !v17->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1579, ASSERT_TYPE_ASSERT, "( other->ent )", (const char *)&queryFormat, "other->ent") )
        __debugbreak();
      v18 = _RBX->VisCache.bVisible || _RBX->VisCache.bPeripherallyVisible;
      if ( !_RDI->threat.threatSight || !v18 || _RDI->sentient->bIgnoreAll || v17->bIgnoreMe || (v17->ent->flags.m_flags[0] & 4) != 0 )
      {
        _RSI = DCONST_DVARFLT_ai_threatSightFalloffDelay;
        if ( !DCONST_DVARFLT_ai_threatSightFalloffDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSightFalloffDelay") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+28h]
          vmulss  xmm1, xmm0, cs:__real@447a0000
          vmovss  xmm8, cs:__real@3f800000
          vcvttss2si eax, xmm1
        }
        if ( level.time - _RBX->VisCache.iLastVisTime <= _EAX && _RDI->threat.threatSight )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+1Ch]
            vcomiss xmm0, xmm8
          }
        }
        _RSI = DCONST_DVARFLT_ai_threatSightFalloff;
        if ( !DCONST_DVARFLT_ai_threatSightFalloff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSightFalloff") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm { vmovss  xmm6, dword ptr [rsi+28h] }
        G_Level_GetFrameDuration();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm3, xmm0, cs:__real@3a83126f
          vmovss  xmm0, dword ptr [rbx+1Ch]
          vmulss  xmm4, xmm3, xmm6
          vsubss  xmm0, xmm0, xmm4; val
        }
      }
      else
      {
        __asm
        {
          vmovaps [rsp+0E8h+var_68], xmm9
          vmovaps [rsp+0E8h+var_78], xmm10
          vmovaps [rsp+0E8h+var_88], xmm11
          vmovaps [rsp+0E8h+var_98], xmm12
          vmovaps [rsp+0E8h+var_A8], xmm13
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ai_threatSightFacingScale, "ai_threatSightFacingScale");
        __asm { vmovaps xmm12, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ai_threatSightFacingScaleDot, "ai_threatSightFacingScaleDot");
        __asm { vmovaps xmm13, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_threatSightObscuredScale, "ai_threatSightObscuredScale");
        __asm { vmovaps xmm10, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_threatSightPeriphScale, "ai_threatSightPeriphScale");
        __asm { vmovaps xmm11, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_threatSightMoveScale, "ai_threatSightMoveScale");
        __asm { vmovaps xmm9, xmm0 }
        if ( _RBX->VisCache.bVisible )
        {
          __asm
          {
            vmovss  xmm4, dword ptr [rdi+24h]
            vcomiss xmm6, xmm4
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+20h]
          vsubss  xmm1, xmm0, dword ptr [rdi+24h]
          vsubss  xmm2, xmm6, dword ptr [rdi+24h]
          vmovss  xmm8, cs:__real@3f800000
          vdivss  xmm0, xmm2, xmm1; val
          vmovaps xmm2, xmm8; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+28h]
          vsubss  xmm2, xmm1, dword ptr [rdi+2Ch]
          vmulss  xmm0, xmm2, xmm0
          vaddss  xmm6, xmm0, dword ptr [rdi+2Ch]
          vcomiss xmm12, xmm7
        }
        inOutCalculated = 0;
        if ( !v32 )
        {
          AI_UpdateThreatSight_FacingDot(_RDI, v17->ent, &outFacingDot, &inOutCalculated);
          __asm
          {
            vmovss  xmm0, [rsp+0E8h+outFacingDot]
            vsubss  xmm2, xmm0, xmm13
            vsubss  xmm1, xmm8, xmm13
            vdivss  xmm0, xmm2, xmm1; val
            vmovaps xmm2, xmm8; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmulss  xmm2, xmm6, xmm12
            vsubss  xmm1, xmm8, xmm0
            vmulss  xmm2, xmm2, xmm1
            vmulss  xmm0, xmm0, xmm6
            vaddss  xmm6, xmm2, xmm0
          }
        }
        __asm
        {
          vcomiss xmm10, xmm7
          vmovaps xmm13, [rsp+0E8h+var_A8]
          vmovaps xmm12, [rsp+0E8h+var_98]
        }
        if ( !v32 )
        {
          v32 = 0;
          if ( _RBX->VisCache.bObscured )
            __asm { vmulss  xmm6, xmm6, xmm10 }
        }
        __asm
        {
          vcomiss xmm11, xmm7
          vmovaps xmm10, [rsp+0E8h+var_78]
        }
        if ( !v32 )
        {
          v32 = 0;
          if ( _RBX->VisCache.bPeripherallyVisible )
            __asm { vmulss  xmm6, xmm6, xmm11 }
        }
        __asm
        {
          vcomiss xmm9, xmm7
          vmovaps xmm11, [rsp+0E8h+var_88]
        }
        if ( !v32 )
        {
          if ( v17->ent->client )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+3Ch]
              vmovss  xmm2, dword ptr [rcx+40h]
              vmovss  xmm3, dword ptr [rcx+44h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmovss  xmm0, cs:__real@45a20000
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm4, xmm2, xmm1
              vcomiss xmm4, xmm0
              vcomiss xmm4, cs:__real@46610000
            }
          }
        }
        G_Level_GetFrameDuration();
        __asm
        {
          vmovaps xmm9, [rsp+0E8h+var_68]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm0, xmm2, dword ptr [rbx+1Ch]
        }
      }
      __asm
      {
        vmovss  dword ptr [rbx+1Ch], xmm0
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm8, [rsp+0E8h+var_58]
        vmovss  dword ptr [rbx+1Ch], xmm0
      }
    }
    else
    {
      __asm { vcomiss xmm7, dword ptr [rbx+1Ch] }
    }
    __asm { vmovaps xmm7, [rsp+0E8h+var_48] }
  }
  else
  {
    _RBX->threatSight = 0.0;
  }
  __asm { vmovaps xmm6, [rsp+0E8h+var_38] }
  Sentient_SetThreatSightState(_RDI->sentient, _RBX);
}

/*
==============
AI_UpdateThreatSight_FacingDot
==============
*/
void AI_UpdateThreatSight_FacingDot(ai_common_t *self, gentity_s *otherEnt, float *outFacingDot, bool *inOutCalculated)
{
  gclient_s *client; 
  bool v14; 
  vec3_t forward; 

  _RBP = outFacingDot;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1516, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1517, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  if ( !otherEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1518, ASSERT_TYPE_ASSERT, "(otherEnt)", (const char *)&queryFormat, "otherEnt") )
    __debugbreak();
  if ( !inOutCalculated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1519, ASSERT_TYPE_ASSERT, "(inOutCalculated)", (const char *)&queryFormat, "inOutCalculated") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1520, ASSERT_TYPE_ASSERT, "(outFacingDot)", (const char *)&queryFormat, "outFacingDot") )
    __debugbreak();
  if ( !*inOutCalculated )
  {
    client = otherEnt->client;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_48], xmm7
      vmovaps [rsp+0C8h+var_58], xmm8
      vmovaps [rsp+0C8h+var_68], xmm10
      vmovaps [rsp+0C8h+var_78], xmm11
    }
    if ( client )
    {
      AngleVectors(&client->ps.viewangles, &forward, NULL, NULL);
      v14 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&otherEnt->client->ps.pm_flags, ACTIVE, 0x2Au);
    }
    else
    {
      AngleVectors(&otherEnt->r.currentAngles, &forward, NULL, NULL);
      v14 = 0;
    }
    _RAX = self->ent;
    __asm
    {
      vmovss  xmm5, cs:__real@3f800000
      vmovss  xmm4, dword ptr [rsp+0C8h+forward]
      vmovss  xmm0, dword ptr [rax+130h]
      vsubss  xmm10, xmm0, dword ptr [rbx+130h]
      vmovss  xmm0, dword ptr [rax+138h]
      vmovss  xmm1, dword ptr [rax+134h]
      vsubss  xmm6, xmm0, dword ptr [rbx+138h]
      vsubss  xmm11, xmm1, dword ptr [rbx+134h]
    }
    if ( v14 )
    {
      __asm
      {
        vmovss  xmm8, dword ptr [rsp+0C8h+forward+8]
        vmovss  xmm7, dword ptr [rsp+0C8h+forward+4]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rsp+0C8h+forward+4]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm5, xmm0
        vdivss  xmm1, xmm5, xmm0
        vmulss  xmm4, xmm4, xmm1
        vmulss  xmm7, xmm3, xmm1
        vxorps  xmm6, xmm6, xmm6
        vxorps  xmm8, xmm8, xmm8
      }
    }
    __asm
    {
      vmulss  xmm0, xmm11, xmm11
      vmulss  xmm1, xmm10, xmm10
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm5, xmm0
      vdivss  xmm5, xmm5, xmm0
      vmulss  xmm0, xmm11, xmm5
      vmovaps xmm11, [rsp+0C8h+var_78]
      vmulss  xmm1, xmm10, xmm5
      vmovaps xmm10, [rsp+0C8h+var_68]
      vmulss  xmm3, xmm0, xmm7
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmulss  xmm2, xmm1, xmm4
      vmulss  xmm0, xmm6, xmm5
      vmovaps xmm6, [rsp+0C8h+var_38]
      vmulss  xmm1, xmm0, xmm8
      vmovaps xmm8, [rsp+0C8h+var_58]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rbp+0], xmm2
    }
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
  bool v5; 
  bool v6; 

  _RBX = outEyePosOut;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 98, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  ent = self->ent;
  _RBX->v[0] = self->eyeInfo.pos.v[0];
  _RBX->v[1] = self->eyeInfo.pos.v[1];
  _RBX->v[2] = self->eyeInfo.pos.v[2];
  v5 = __CFADD__(ent, 280i64) || &ent->r.absBox == NULL;
  if ( ent == (gentity_s *)-280i64 )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 536, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rdi]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm4, cs:__real@42000000
    vaddss  xmm0, xmm4, dword ptr [rdi+0Ch]
    vandps  xmm1, xmm1, xmm3
    vcomiss xmm1, xmm0
  }
  if ( v5 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vsubss  xmm2, xmm0, dword ptr [rdi+4]
      vaddss  xmm0, xmm4, dword ptr [rdi+10h]
      vandps  xmm2, xmm2, xmm3
      vcomiss xmm2, xmm0
    }
    if ( v5 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+8]
        vsubss  xmm2, xmm0, dword ptr [rdi+8]
        vaddss  xmm0, xmm4, dword ptr [rdi+14h]
        vandps  xmm2, xmm2, xmm3
        vcomiss xmm2, xmm0
      }
      if ( v5 )
      {
        _RCX = self->ent;
        _RBX->v[0] = self->ent->r.currentOrigin.v[0];
        _RBX->v[1] = _RCX->r.currentOrigin.v[1];
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+138h]
          vaddss  xmm1, xmm0, cs:__real@42600000
          vmovss  dword ptr [rbx+8], xmm1
        }
      }
    }
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
  int result; 
  float fmt; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 931, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  _RAX = this->m_pAI;
  __asm { vmovss  xmm7, dword ptr [rax+0A4h] }
  *(double *)&_XMM0 = ((double (__fastcall *)(AICommonInterface *, gentity_s *))this->FovDotZ)(this, pOtherEnt);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = ((double (__fastcall *)(AICommonInterface *, gentity_s *))this->FovDot)(this, pOtherEnt);
  __asm
  {
    vmovaps xmm2, xmm0; fovDot
    vmovaps xmm3, xmm6; fovDotZ
    vmovss  dword ptr [rsp+58h+fmt], xmm7
  }
  result = AICommonInterface::CanSeeEntityEx(this, pOtherEnt, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return result;
}

/*
==============
AICommonInterface::CanSeeEntityEx
==============
*/

__int64 __fastcall AICommonInterface::CanSeeEntityEx(AICommonInterface *this, gentity_s *ent, double fovDot, double fovDotZ, float fMaxDistSqrd)
{
  ai_scripted_t *AIScripted; 
  sentient_info_t *SentientInfo; 
  bool IsUsingTurret; 
  AICommonInterface *v24; 
  const gentity_s *TurretUsed; 
  int v26; 
  char CanSeePoint; 
  const dvar_t *v44; 
  int number; 
  int v57; 
  bool v75; 
  int ActorCorpseIndex; 
  __int64 v78; 
  AIScriptedInterface *m_pAI; 
  int v88; 
  __int64 result; 
  float fmt; 
  float fmta; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  vec2_t *out_localAngles; 
  float out_localAnglesa; 
  float out_localAnglesb; 
  BOOL bObscured; 
  ai_scripted_t *v116; 
  AIWrapper v117; 
  AIWrapper v118; 
  vec3_t out_targetPosition; 
  vec3_t out_sourcePosition; 
  vec3_t outEyePos; 
  vec2_t v122; 
  char v130; 

  __asm
  {
    vmovaps [rsp+1E0h+var_80], xmm9
    vmovaps [rsp+1E0h+var_90], xmm10
    vmovaps [rsp+1E0h+var_A0], xmm11
    vmovaps [rsp+1E0h+var_B0], xmm12
    vmovaps xmm12, xmm3
    vmovaps xmm11, xmm2
  }
  _RDI = ent;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1081, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1082, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1083, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1084, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm11, xmm9
    vmovss  xmm10, [rbp+0E0h+fMaxDistSqrd]
    vcomiss xmm10, xmm9
    vmovaps [rsp+1E0h+var_50], xmm6
    vmovaps [rsp+1E0h+var_60], xmm7
    vmovaps [rsp+1E0h+var_70], xmm8
  }
  _R13 = AI_GetAIScripted(_RDI);
  AIScripted = AI_GetAIScripted(this->m_pAI->ent);
  _R15 = _RDI->sentient;
  v116 = AIScripted;
  bObscured = 0;
  if ( !_R15 )
  {
    if ( _RDI->s.eType == ET_ACTOR_CORPSE && BG_ActorCorpse_SynchEnabled() )
    {
      if ( (_BYTE)GameScriptData::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_data_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
        __debugbreak();
      if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      _R14 = GameScriptData::ms_gScriptData;
      ActorCorpseIndex = G_GetActorCorpseIndex(_RDI);
      v78 = ActorCorpseIndex;
      if ( (unsigned int)ActorCorpseIndex >= 0x1C )
      {
        LODWORD(out_localAngles) = ActorCorpseIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1251, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( gScrData->actorCorpseInfo ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( gScrData->actorCorpseInfo )\n\t%i not in [0, %i)", out_localAngles, 28) )
          __debugbreak();
      }
      _RCX = 6 * v78;
      __asm
      {
        vmovss  xmm0, dword ptr [r14+rcx*8+3464h]
        vmovss  dword ptr [rbp+0E0h+out_targetPosition], xmm0
        vmovss  xmm1, dword ptr [r14+rcx*8+3468h]
        vmovss  dword ptr [rbp+0E0h+out_targetPosition+4], xmm1
        vmovss  xmm0, dword ptr [r14+rcx*8+346Ch]
        vmovss  dword ptr [rbp+0E0h+out_targetPosition+8], xmm0
      }
    }
    else if ( !G_Utils_DObjGetWorldTagPos(_RDI, scr_const.tag_eye, &out_targetPosition) && !G_Utils_DObjGetWorldTagPos(_RDI, scr_const.tag_aim, &out_targetPosition) )
    {
      G_Utils_EntityCentroid(_RDI, &out_targetPosition);
      if ( _RDI->vehicle )
      {
        this->GetEyePosition(this, &out_sourcePosition);
        GetVehicleLookAtPosition(_RDI, &out_sourcePosition, &out_targetPosition);
      }
    }
    SentientInfo = NULL;
    __asm
    {
      vmovaps xmm3, xmm12; fovDotZ
      vmovaps xmm2, xmm11; fovDot
      vmovss  dword ptr [rsp+1E0h+fmt], xmm10
    }
    CanSeePoint = AICommonInterface::CanSeePointEx(this, &out_targetPosition, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, _RDI->s.number, NORMAL_FOLIAGE_CHECKS) != 0;
    goto LABEL_66;
  }
  SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, _R15);
  IsUsingTurret = AICommonInterface::IsUsingTurret(this);
  v24 = this;
  if ( IsUsingTurret )
  {
    TurretUsed = AICommonInterface::GetTurretUsed(this);
    if ( G_Turret_CanTargetSentient(TurretUsed, _RDI, &vec3_origin, &out_targetPosition, &out_sourcePosition, &v122) )
      goto LABEL_20;
    v26 = level.time - SentientInfo->lastKnownPosTime;
    if ( v26 >= 1000 )
    {
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vmovss  xmm1, dword ptr [rcx+134h]
        vsubss  xmm2, xmm1, dword ptr [rbp+0E0h+out_targetPosition+4]
        vsubss  xmm4, xmm0, dword ptr [rbp+0E0h+out_targetPosition]
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, cs:__real@48800000
      }
LABEL_88:
      result = 0i64;
      goto LABEL_89;
    }
    v24 = this;
  }
  this->GetEyePosition(v24, &out_sourcePosition);
LABEL_20:
  __asm
  {
    vmovss  xmm0, dword ptr [r15+30h]
    vmulss  xmm1, xmm0, xmm0
    vminss  xmm7, xmm1, xmm10
  }
  if ( this->ShouldDoFOVCheck(this, _R15) )
  {
    __asm { vmovaps xmm6, xmm11 }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm12, xmm12, xmm12
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && SV_BotIsBotEnt(_RDI) )
  {
    Sentient_GetHeadPosition(_R15, &out_targetPosition);
  }
  else
  {
    AIWrapper::AIWrapper(&v117, _RDI);
    if ( !v117.m_pAI )
      goto LABEL_29;
    AIScriptedInterface::GetApproxEyePos(v117.m_pAI, &outEyePos, 0);
    __asm
    {
      vmovaps xmm3, xmm6; fovDot
      vmovss  dword ptr [rsp+1E0h+out_localAngles], xmm7
      vmovss  dword ptr [rsp+1E0h+fmt], xmm12
    }
    if ( AICommonInterface::PointInFovAndRange(this, &out_sourcePosition, &outEyePos, *(float *)&_XMM3, fmt, out_localAnglesa) )
    {
LABEL_29:
      Sentient_GetEyePosition(_R15, &out_targetPosition);
    }
    else
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+0E0h+outEyePos]
        vmovsd  qword ptr [rbp+0E0h+out_targetPosition], xmm0
      }
      out_targetPosition.v[2] = outEyePos.v[2];
    }
  }
  if ( _RDI->vehicle )
    GetVehicleLookAtPosition(_RDI, &out_sourcePosition, &out_targetPosition);
  __asm
  {
    vmovaps xmm3, xmm12; fovDotZ
    vmovaps xmm2, xmm6; fovDot
    vmovss  dword ptr [rsp+1E0h+fmt], xmm7
  }
  CanSeePoint = AICommonInterface::CanSeePointExInternal(this, &out_targetPosition, *(float *)&_XMM2, *(float *)&_XMM3, fmta, _RDI->s.number, &out_sourcePosition, NORMAL_FOLIAGE_CHECKS);
  if ( !CanSeePoint )
  {
    __asm
    {
      vmovaps xmm3, xmm12
      vmovaps xmm2, xmm6
      vmovss  dword ptr [rsp+1E0h+fmt], xmm7
    }
    CanSeePoint = ((__int64 (__fastcall *)(AICommonInterface *, vec3_t *))this->CanSeeProneEntityTorsoOrFeet)(this, &out_targetPosition);
  }
  v44 = DVARBOOL_ai_threatSight;
  if ( !DVARBOOL_ai_threatSight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  if ( v44->current.enabled && this->m_pAI->threat.threatSight )
  {
    if ( _RDI->client )
    {
      if ( CanSeePoint )
      {
        __asm
        {
          vcomiss xmm9, dword ptr [rax+4C0h]
          vmovss  xmm0, dword ptr [rbp+0E0h+out_targetPosition]
        }
        number = _RDI->s.number;
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+0E0h+out_targetPosition+4]
          vmovss  dword ptr [rbp+0E0h+outEyePos], xmm0
          vmovss  xmm0, dword ptr [rbp+0E0h+out_targetPosition+8]
          vsubss  xmm3, xmm0, cs:__real@41300000
          vmovss  dword ptr [rbp+0E0h+outEyePos+8], xmm3
          vmovaps xmm3, xmm12; fovDotZ
          vmovaps xmm2, xmm6; fovDot
          vmovss  dword ptr [rbp+0E0h+outEyePos+4], xmm1
          vmovss  dword ptr [rsp+1E0h+fmt], xmm7
        }
        bObscured = !AICommonInterface::CanSeePointExInternal(this, &outEyePos, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, number, &out_sourcePosition, NORMAL_FOLIAGE_CHECKS);
      }
      else
      {
        if ( this->GetStairsState(this) == AI_STAIRS_NONE )
        {
LABEL_45:
          _RAX = this->m_pAI;
          __asm
          {
            vmovss  xmm0, dword ptr [r15+30h]
            vmovss  xmm2, dword ptr [rax+0A8h]; fovDot
            vmulss  xmm0, xmm0, xmm0
            vminss  xmm1, xmm0, dword ptr [rax+0ACh]
            vmovaps xmm3, xmm12; fovDotZ
            vmovss  dword ptr [rsp+1E0h+fmt], xmm1
          }
          v75 = AICommonInterface::CanSeePointExInternal(this, &out_targetPosition, *(float *)&_XMM2, *(float *)&_XMM3, fmte, _RDI->s.number, &out_sourcePosition, NORMAL_FOLIAGE_CHECKS);
          goto LABEL_67;
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+130h]
          vmovss  xmm5, cs:__real@3e800000
          vmovss  xmm0, dword ptr [rbp+0E0h+out_targetPosition]
          vmovss  xmm3, dword ptr [rdi+134h]
          vmovss  xmm4, dword ptr [rdi+138h]
        }
        v57 = _RDI->s.number;
        __asm
        {
          vsubss  xmm1, xmm0, xmm2
          vmulss  xmm1, xmm1, xmm5
          vaddss  xmm0, xmm1, xmm2
          vmovss  xmm1, dword ptr [rbp+0E0h+out_targetPosition+4]
          vmovss  dword ptr [rbp+0E0h+outEyePos], xmm0
          vsubss  xmm0, xmm1, xmm3
          vmulss  xmm2, xmm0, xmm5
          vmovss  xmm0, dword ptr [rbp+0E0h+out_targetPosition+8]
          vaddss  xmm3, xmm2, xmm3
          vmovss  dword ptr [rbp+0E0h+outEyePos+4], xmm3
          vsubss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm1, xmm5
          vaddss  xmm3, xmm2, xmm4
          vmovss  dword ptr [rbp+0E0h+outEyePos+8], xmm3
          vmovaps xmm3, xmm12; fovDotZ
          vmovaps xmm2, xmm6; fovDot
          vmovss  dword ptr [rsp+1E0h+fmt], xmm7
        }
        CanSeePoint = AICommonInterface::CanSeePointExInternal(this, &outEyePos, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v57, &out_sourcePosition, NORMAL_FOLIAGE_CHECKS);
      }
    }
    if ( !CanSeePoint )
      goto LABEL_45;
  }
LABEL_66:
  v75 = 0;
LABEL_67:
  this->FovDot(this, _RDI);
  if ( CanSeePoint )
  {
    __asm { vcomiss xmm11, xmm0 }
    _RCX = this->m_pAI;
    __asm { vcomiss xmm10, dword ptr [rcx+0A4h] }
  }
  else
  {
    __asm { vcomiss xmm11, xmm0 }
    _RCX = this->m_pAI;
    __asm { vcomiss xmm10, dword ptr [rcx+0A4h] }
    if ( _R15 )
      AI_UpdateVisCacheInternal(_RCX, _RDI, SentientInfo, 0, bObscured, v75);
  }
  if ( !CanSeePoint )
    goto LABEL_88;
  AIWrapper::AIWrapper(&v118, _RDI);
  m_pAI = v118.m_pAI;
  if ( v118.m_pAI && v116 && !AICommonInterface::IsUsingTurret(this) && !AICommonInterface::IsUsingTurret(m_pAI) )
  {
    if ( !_R13->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1308, ASSERT_TYPE_ASSERT, "( target_ai->sentientInfo )", (const char *)&queryFormat, "target_ai->sentientInfo") )
      __debugbreak();
    if ( !_RDI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1313, ASSERT_TYPE_ASSERT, "(ent->sentient)", (const char *)&queryFormat, "ent->sentient") )
      __debugbreak();
    __asm { vmovss  xmm8, dword ptr [r13+0A4h] }
    v88 = 1;
    _RDX = this->m_pAI->sentient;
    __asm { vmovss  xmm7, dword ptr [rdx+30h] }
    if ( ((unsigned __int8 (__fastcall *)(AIScriptedInterface *))m_pAI->ShouldDoFOVCheck)(m_pAI) )
    {
      *(double *)&_XMM0 = ((double (__fastcall *)(AIScriptedInterface *, gentity_s *))m_pAI->FovDotZ)(m_pAI, this->m_pAI->ent);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = ((double (__fastcall *)(AIScriptedInterface *, gentity_s *))m_pAI->FovDot)(m_pAI, this->m_pAI->ent);
      __asm
      {
        vmulss  xmm1, xmm7, xmm7
        vminss  xmm2, xmm1, xmm8
        vmovss  dword ptr [rsp+1E0h+out_localAngles], xmm2
        vmovaps xmm3, xmm0; fovDot
        vmovss  dword ptr [rsp+1E0h+fmt], xmm6
      }
      if ( !AICommonInterface::PointInFovAndRange(m_pAI, &out_targetPosition, &out_sourcePosition, *(float *)&_XMM3, fmtg, out_localAnglesb) )
        v88 = 0;
    }
    AI_UpdateVisCacheInternal(_R13, this->m_pAI->ent, &_R13->sentientInfo[this->m_pAI->sentient - level.sentients], v88, 0, 0);
  }
  result = 1i64;
LABEL_89:
  __asm
  {
    vmovaps xmm8, [rsp+1E0h+var_70]
    vmovaps xmm7, [rsp+1E0h+var_60]
    vmovaps xmm6, [rsp+1E0h+var_50]
  }
  _R11 = &v130;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
    vmovaps xmm12, xmmword ptr [r11-80h]
  }
  return result;
}

/*
==============
AICommonInterface::CanSeeEntityPoint
==============
*/
int AICommonInterface::CanSeeEntityPoint(AICommonInterface *this, const vec3_t *vPoint, const gentity_s *ent)
{
  int ignoreEntityNum; 
  int result; 
  float fmt; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 850, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  _RAX = this->m_pAI;
  ignoreEntityNum = ent->s.number;
  __asm { vmovss  xmm7, dword ptr [rax+0A4h] }
  *(double *)&_XMM0 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDotZ)(this, 0i64);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = ((double (__fastcall *)(AICommonInterface *, const gentity_s *))this->FovDot)(this, ent);
  __asm
  {
    vmovaps xmm2, xmm0; fovDot
    vmovaps xmm3, xmm6; fovDotZ
    vmovss  dword ptr [rsp+68h+fmt], xmm7
  }
  result = AICommonInterface::CanSeePointEx(this, vPoint, *(float *)&_XMM2, *(float *)&_XMM3, fmt, ignoreEntityNum, NORMAL_FOLIAGE_CHECKS);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
AICommonInterface::CanSeeEntityPointThroughFoliage
==============
*/
int AICommonInterface::CanSeeEntityPointThroughFoliage(AICommonInterface *this, const vec3_t *vPoint, const gentity_s *ent)
{
  int ignoreEntityNum; 
  int result; 
  float fmt; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 864, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  _RAX = this->m_pAI;
  ignoreEntityNum = ent->s.number;
  __asm { vmovss  xmm7, dword ptr [rax+0A4h] }
  *(double *)&_XMM0 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDotZ)(this, 0i64);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = ((double (__fastcall *)(AICommonInterface *, const gentity_s *))this->FovDot)(this, ent);
  __asm
  {
    vmovaps xmm2, xmm0; fovDot
    vmovaps xmm3, xmm6; fovDotZ
    vmovss  dword ptr [rsp+68h+fmt], xmm7
  }
  result = AICommonInterface::CanSeePointEx(this, vPoint, *(float *)&_XMM2, *(float *)&_XMM3, fmt, ignoreEntityNum, FORCE_CHECK_FOLIAGE);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
AICommonInterface::CanSeePoint
==============
*/
int AICommonInterface::CanSeePoint(AICommonInterface *this, const vec3_t *vPoint)
{
  int result; 
  float fmt; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 836, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  _RAX = this->m_pAI;
  __asm { vmovss  xmm7, dword ptr [rax+0A4h] }
  *(double *)&_XMM0 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDotZ)(this, 0i64);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDot)(this, 0i64);
  __asm
  {
    vmovaps xmm2, xmm0; fovDot
    vmovaps xmm3, xmm6; fovDotZ
    vmovss  dword ptr [rsp+68h+fmt], xmm7
  }
  result = AICommonInterface::CanSeePointEx(this, vPoint, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 2047, NORMAL_FOLIAGE_CHECKS);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
AICommonInterface::CanSeePointEx
==============
*/

_BOOL8 __fastcall AICommonInterface::CanSeePointEx(AICommonInterface *this, const vec3_t *vPoint, double fovDot, double fovDotZ, float fMaxDistSqrd, int ignoreEntityNum, foliage_sight_trace_options_t foliageSetting)
{
  const gentity_s *TurretUsed; 
  _BOOL8 result; 
  float fmt; 
  vec3_t out_sourcePosition; 
  vec2_t out_localAngles; 
  char v30; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm2, xmm7
    vmovaps xmm9, xmm3
    vmovaps xmm8, xmm2
    vmovss  xmm6, [rsp+0B8h+fMaxDistSqrd]
    vcomiss xmm6, xmm7
  }
  TurretUsed = AICommonInterface::GetTurretUsed(this);
  if ( !TurretUsed || !AICommonInterface::IsUsingTurret(this) || !G_Turret_CanTargetPoint(TurretUsed, vPoint, &out_sourcePosition, &out_localAngles) )
    this->GetEyePosition(this, &out_sourcePosition);
  __asm
  {
    vmovaps xmm3, xmm9; fovDotZ
    vmovaps xmm2, xmm8; fovDot
    vmovss  dword ptr [rsp+0B8h+fmt], xmm6
  }
  result = AICommonInterface::CanSeePointExInternal(this, vPoint, *(float *)&_XMM2, *(float *)&_XMM3, fmt, ignoreEntityNum, &out_sourcePosition, foliageSetting);
  _R11 = &v30;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
AICommonInterface::CanSeePointExInternal
==============
*/

bool __fastcall AICommonInterface::CanSeePointExInternal(AICommonInterface *this, const vec3_t *vPoint, double fovDot, double fovDotZ, float fMaxDistSqrd, int ignoreEntityNum, const vec3_t *vViewPos, foliage_sight_trace_options_t foliageSetting)
{
  bool result; 
  float fmt; 
  float v25; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm2, xmm7
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm3
    vmovaps xmm8, xmm2
    vmovss  xmm6, [rsp+78h+fMaxDistSqrd]
    vcomiss xmm6, xmm7
    vmovss  dword ptr [rsp+78h+var_50], xmm6
    vmovaps xmm3, xmm8; fovDot
    vmovss  dword ptr [rsp+78h+fmt], xmm9
  }
  result = AICommonInterface::PointInFovAndRange(this, vViewPos, vPoint, *(float *)&_XMM3, fmt, v25);
  if ( result )
    result = AICommonInterface::SightTrace(this, vViewPos, vPoint, ignoreEntityNum, foliageSetting);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
  }
  return result;
}

/*
==============
AICommonInterface::CanSeePointFrom
==============
*/

_BOOL8 __fastcall AICommonInterface::CanSeePointFrom(AICommonInterface *this, const vec3_t *vStart, const vec3_t *vEnd, double fMaxDistSqrd, int ignoreEntityNum)
{
  bool v12; 
  bool v13; 
  _BOOL8 result; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RDI = vEnd;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm7
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm3, xmm7
    vmovaps xmm6, xmm3
  }
  v12 = this->m_pAI == NULL;
  if ( !this->m_pAI )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 676, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( v12 )
  {
    result = AICommonInterface::SightTrace(this, vStart, _RDI, ignoreEntityNum, NORMAL_FOLIAGE_CHECKS);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm3, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm2, xmm1, dword ptr [rbx+4]
      vsubss  xmm4, xmm0, dword ptr [rbx+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm5, xmm3, xmm0
      vcomiss xmm5, xmm6
    }
    if ( v12 )
      __asm { vcomiss xmm5, cs:?level@@3Ulevel_locals_t@@A.fFogOpaqueDistSqrd; level_locals_t level }
    result = 0i64;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
  return result;
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
  ai_scripted_t *v28; 
  const DObj *ServerDObjForEnt; 
  pathnode_t *v41; 
  scr_string_t m_CoverState; 
  __int16 turretEntNumber; 
  bool CanShootFrom; 
  bool v102; 
  const dvar_t *v103; 
  const dvar_t *v104; 
  int integer; 
  const vec4_t *v106; 
  __int64 v107; 
  __int64 v108; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName[3]; 
  AIWrapper v111; 
  TagPair v112; 
  vec3_t vFrom; 
  vec3_t outEyePos; 
  vec4_t v116; 
  vec3_t out; 
  vec3_t in; 
  vec3_t v119; 
  vec4_t quat; 
  vec4_t v121; 
  ApproxGunParams pOutGunParams; 
  tmat43_t<vec3_t> outTagMat; 

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
    LODWORD(v107) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v107, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v19 = v17 - 1;
  if ( g_entities[v19].r.isInUse != g_entityIsInUse[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v19] )
  {
    LODWORD(v108) = sentient->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v108) )
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
  AIWrapper::AIWrapper(&v111, v23);
  v24 = v111.m_pAI;
  if ( bUseActualEnemyPos )
    goto LABEL_37;
  if ( !v111.m_pAI )
    goto LABEL_37;
  CoverNode = AIScriptedInterface::GetCoverNode(v111.m_pAI);
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
    _RCX = this->m_pAI;
    if ( _RCX->muzzleInfo.time != level.time )
    {
      Profile_Begin(283);
      this->GetWeaponFlashTagName(this, &v112);
      v28 = this->m_pAI;
      outBoneIndex[0] = -2;
      outTagName[0] = 0;
      ServerDObjForEnt = Com_GetServerDObjForEnt(v28->ent);
      if ( !TagPair::GetTagNameAndBoneIndex(&v112, ServerDObjForEnt, outTagName, outBoneIndex) || !G_Utils_DObjGetWorldTagMatrix(this->m_pAI->ent, outTagName[0], &outTagMat) )
      {
        Profile_EndInternal(NULL);
        return 0;
      }
      this->m_pAI->muzzleInfo.time = level.time;
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+110h+outTagMat+24h]
        vmovss  dword ptr [rax+45Ch], xmm0
        vmovss  xmm1, dword ptr [rbp+110h+outTagMat+28h]
        vmovss  dword ptr [rax+460h], xmm1
        vmovss  xmm0, dword ptr [rbp+110h+outTagMat+2Ch]
        vmovss  dword ptr [rax+464h], xmm0
        vmovss  xmm0, dword ptr [rbp+110h+outTagMat]
      }
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  dword ptr [rax+468h], xmm0
        vmovss  xmm1, dword ptr [rbp+110h+outTagMat+4]
        vmovss  dword ptr [rax+46Ch], xmm1
        vmovss  xmm0, dword ptr [rbp+110h+outTagMat+8]
        vmovss  dword ptr [rax+470h], xmm0
      }
      Profile_EndInternal(NULL);
      _RCX = this->m_pAI;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+45Ch]
      vmovss  dword ptr [rbp+110h+vFrom], xmm0
      vmovss  xmm1, dword ptr [rcx+460h]
      vmovss  dword ptr [rbp+110h+vFrom+4], xmm1
      vmovss  xmm0, dword ptr [rcx+464h]
      vmovss  dword ptr [rbp+110h+vFrom+8], xmm0
    }
  }
  else
  {
    v41 = AIScriptedInterface::GetCoverNode(this);
    if ( !v41 )
      goto LABEL_55;
    m_CoverState = this->m_pAI->blackboard.m_CoverState;
    if ( m_CoverState == scr_const.exposed || m_CoverState == scr_const.none )
      goto LABEL_55;
    turretEntNumber = v41->constant.type;
    if ( turretEntNumber == 31 )
      turretEntNumber = v41->dynamic.turretEntNumber;
    if ( turretEntNumber == 9 )
    {
LABEL_55:
      __asm
      {
        vmovaps [rsp+210h+var_30], xmm6
        vmovaps [rsp+210h+var_40], xmm7
        vmovaps [rsp+210h+var_50], xmm8
        vmovaps [rsp+210h+var_60], xmm9
        vmovaps [rsp+210h+var_70], xmm10
        vmovaps [rsp+210h+var_80], xmm11
        vmovaps [rsp+210h+var_90], xmm12
      }
      AIScriptedInterface::GetApproxAdjustedGunParams(this, &pOutGunParams);
      this->GetEyePosition(this, (vec3_t *)&v112);
      AnglesToQuat(&this->m_pAI->aimAngles, &quat);
      AnglesToQuat(&this->m_pAI->ent->r.currentAngles, &v116);
      __asm
      {
        vmovss  xmm12, dword ptr [rbp+110h+var_140]
        vmovss  xmm11, dword ptr [rbp+110h+quat+0Ch]
        vmovss  xmm10, dword ptr [rbp+110h+quat]
        vmovss  xmm7, dword ptr [rbp+110h+var_140+0Ch]
        vmovss  xmm8, dword ptr [rbp+110h+var_140+4]
        vmovss  xmm9, dword ptr [rbp+110h+quat+8]
        vmovss  xmm6, dword ptr [rbp+110h+var_140+8]
        vmovss  xmm5, dword ptr [rbp+110h+quat+4]
        vmulss  xmm1, xmm12, xmm11
        vmulss  xmm0, xmm10, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm8, xmm9
        vaddss  xmm1, xmm2, xmm0
        vmulss  xmm0, xmm6, xmm5
        vsubss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rbp+110h+var_F0], xmm1
        vmulss  xmm0, xmm9, xmm12
        vmulss  xmm2, xmm5, xmm7
        vsubss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm8, xmm11
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm0, xmm6, xmm10
        vaddss  xmm2, xmm4, xmm0
        vmovss  dword ptr [rbp+110h+var_F0+4], xmm2
        vmulss  xmm0, xmm9, xmm7
        vmulss  xmm1, xmm5, xmm12
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm10
        vsubss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm11
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm0, xmm12, xmm10
        vmulss  xmm1, xmm11, xmm7
        vmovss  dword ptr [rbp+110h+var_F0+8], xmm2
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm8
        vsubss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm9
        vsubss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rbp+110h+var_F0+0Ch], xmm2
      }
      QuatTransform(&v116, &pOutGunParams.m_offset, &out);
      __asm
      {
        vmovss  xmm0, [rbp+110h+var_170.m_primaryTagName]
        vaddss  xmm1, xmm0, dword ptr [rbp+110h+out]
        vmovss  xmm2, [rbp+110h+var_170.m_fallbackTagName]
        vaddss  xmm0, xmm2, dword ptr [rbp+110h+out+4]
        vmovss  [rbp+110h+var_170.m_primaryTagName], xmm1
        vmovss  xmm1, [rbp+110h+var_168]
        vaddss  xmm2, xmm1, dword ptr [rbp+110h+out+8]
        vxorps  xmm1, xmm1, xmm1
        vmovss  [rbp+110h+var_170.m_fallbackTagName], xmm0
        vmovss  xmm0, [rbp+110h+pOutGunParams.m_length]
        vmovss  dword ptr [rbp+110h+in+4], xmm1
        vmovss  dword ptr [rbp+110h+in+8], xmm1
        vmovss  [rbp+110h+var_168], xmm2
        vmovss  dword ptr [rbp+110h+in], xmm0
      }
      QuatTransform(&v121, &in, &v119);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+110h+var_110]
        vaddss  xmm1, xmm0, [rbp+110h+var_170.m_primaryTagName]
        vmovss  xmm2, dword ptr [rbp+110h+var_110+4]
        vaddss  xmm0, xmm2, [rbp+110h+var_170.m_fallbackTagName]
        vmovaps xmm12, [rsp+210h+var_90]
        vmovaps xmm11, [rsp+210h+var_80]
        vmovaps xmm10, [rsp+210h+var_70]
        vmovaps xmm9, [rsp+210h+var_60]
        vmovaps xmm8, [rsp+210h+var_50]
        vmovaps xmm7, [rsp+210h+var_40]
        vmovaps xmm6, [rsp+210h+var_30]
        vmovss  dword ptr [rbp+110h+vFrom], xmm1
        vmovss  xmm1, dword ptr [rbp+110h+var_110+8]
        vaddss  xmm2, xmm1, [rbp+110h+var_168]
        vmovss  dword ptr [rbp+110h+vFrom+8], xmm2
        vmovss  dword ptr [rbp+110h+vFrom+4], xmm0
      }
    }
    else
    {
      AIScriptedInterface::GetApproxEyePos(this, &vFrom, 1);
    }
  }
  CanShootFrom = AICommonInterface::CanShootFrom(this, &outEyePos, &vFrom);
  m_pAI->shoot.lastCanShootEnemyTime = level.time;
  v102 = CanShootFrom;
  m_pAI->shoot.lastCanShootEnemyResult = CanShootFrom;
  v103 = DVARBOOL_ai_ShowCanshootChecks;
  if ( !DVARBOOL_ai_ShowCanshootChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_ShowCanshootChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v103);
  if ( v103->current.enabled )
  {
    v104 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v104);
    integer = v104->current.integer;
    if ( integer <= 0 || integer == this->m_pAI->ent->s.number )
    {
      v106 = &colorGreen;
      if ( !v102 )
        v106 = &colorRed;
      G_DebugLineWithDuration(&outEyePos, &vFrom, v106, 0, 30);
    }
  }
  return v102;
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
  bool CanShootFrom; 
  bool v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  int integer; 
  const vec4_t *v24; 
  __int64 v25; 
  __int64 v26; 
  AIWrapper v27; 
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
    LODWORD(v25) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v10 = v8 - 1;
  if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v10] )
  {
    LODWORD(v26) = sentient->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v26) )
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
  AIWrapper::AIWrapper(&v27, v15);
  if ( bUseActualEnemyPos || !v27.m_pAI )
    AICommonInterface::GetTargetLookPosition(this, &outEyePos);
  else
    AIScriptedInterface::GetApproxEyePos(v27.m_pAI, &outEyePos, 1);
  pathnode_t::GetPos(CoverNode, &pos);
  if ( AIScriptedInterface::IsStanceAllowed(this, STANCE_STAND) && Path_DoesNodeAllowStance(CoverNode, (const scr_string_t)scr_const.stand) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+pos+8]
      vaddss  xmm1, xmm0, cs:__real@42680000
    }
  }
  else
  {
    if ( !AIScriptedInterface::IsStanceAllowed(this, STANCE_CROUCH) || !Path_DoesNodeAllowStance(CoverNode, (const scr_string_t)scr_const.crouch) )
      goto LABEL_43;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+pos+8]
      vaddss  xmm1, xmm0, cs:__real@422c0000
    }
  }
  __asm { vmovss  dword ptr [rsp+0D8h+pos+8], xmm1 }
LABEL_43:
  CanShootFrom = AICommonInterface::CanShootFrom(this, &outEyePos, &pos);
  m_pAI->shoot.lastCanShootEnemyFromExposedAtNodeTime = level.time;
  v20 = CanShootFrom;
  m_pAI->shoot.lastCanShootEnemyFromExposedAtNodeResult = CanShootFrom;
  v21 = DVARBOOL_ai_ShowCanshootChecks;
  if ( !DVARBOOL_ai_ShowCanshootChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_ShowCanshootChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    v22 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    integer = v22->current.integer;
    if ( integer <= 0 || integer == this->m_pAI->ent->s.number )
    {
      v24 = &colorGreen;
      if ( !v20 )
        v24 = &colorRed;
      G_DebugLineWithDuration(&outEyePos, &pos, v24, 0, 30);
    }
  }
  return v20;
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
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  pathnode_t *CoverNode; 
  pathnode_t *v13; 
  ai_scripted_t *m_pAI; 
  int lastCanShootEnemyFromStepOutTime; 
  const gentity_s *v17; 
  AIScriptedInterface *v18; 
  pathnode_t *v19; 
  __int16 type; 
  int v25; 
  bool CanShootFrom; 
  const dvar_t *v36; 
  int Int_Internal_DebugName; 
  const vec4_t *v38; 
  __int64 v39; 
  __int64 v40; 
  AIWrapper v41; 
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
  v9 = number;
  v10 = number - 1;
  if ( v10 >= 0x800 )
  {
    LODWORD(v39) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v39, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v11 = v9 - 1;
  if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v11] )
  {
    LODWORD(v40) = sentient->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v40) )
      __debugbreak();
  }
  if ( !sentient->targetEnt.number )
  {
LABEL_61:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 269, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->targetEnt.isDefined())", (const char *)&queryFormat, "m_pAI->sentient->targetEnt.isDefined()") )
      __debugbreak();
  }
  CoverNode = AIScriptedInterface::GetCoverNode(this);
  v13 = CoverNode;
  if ( !CoverNode || (unsigned int)CoverNode->constant.type - 6 > 1 )
    return AIScriptedInterface::CanShootEnemy(this, cacheDuration, 0, bUseActualEnemyPos);
  m_pAI = this->m_pAI;
  lastCanShootEnemyFromStepOutTime = m_pAI->shoot.lastCanShootEnemyFromStepOutTime;
  if ( lastCanShootEnemyFromStepOutTime > 0 && lastCanShootEnemyFromStepOutTime + cacheDuration >= level.time )
    return m_pAI->shoot.lastCanShootEnemyFromStepOutResult;
  v17 = EntHandle::ent(&m_pAI->sentient->targetEnt);
  AIWrapper::AIWrapper(&v41, v17);
  v18 = v41.m_pAI;
  if ( bUseActualEnemyPos )
    goto LABEL_39;
  if ( !v41.m_pAI )
    goto LABEL_39;
  v19 = AIScriptedInterface::GetCoverNode(v41.m_pAI);
  if ( !v19 || *(_DWORD *)(v18->GetAI(v18) + 488) == scr_const.exposed )
    goto LABEL_39;
  type = v19->constant.type;
  if ( type == 31 )
    type = v19->dynamic.turretEntNumber;
  if ( type == 9 )
LABEL_39:
    AICommonInterface::GetTargetLookPosition(this, &outEyePos);
  else
    AIScriptedInterface::GetApproxEyePos(v18, &outEyePos, 1);
  if ( TacGraph_GetPointForPathnodeVis(v13) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  dword ptr [rbp+57h+vFrom], xmm0
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rbp+57h+vFrom+4], xmm1
      vmovss  xmm0, dword ptr [rax+8]
      vmovss  dword ptr [rbp+57h+vFrom+8], xmm0
    }
  }
  else
  {
    pathnode_t::GetAngles(v13, &vector);
    AnglesToQuat(&vector, &quat);
    v25 = 1 << LOBYTE(v13->constant.type);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rbp+57h+in], xmm0
    }
    if ( (v25 & 0x80u) == 0 )
    {
      if ( (v25 & 0x40) != 0 )
      {
        __asm
        {
          vmovss  xmm1, cs:__real@c2000000
          vmovss  xmm0, cs:__real@42700000
          vmovss  dword ptr [rbp+57h+in+4], xmm1
        }
      }
      else
      {
        __asm { vmovss  dword ptr [rbp+57h+in+4], xmm0 }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@42000000
        vmovss  xmm0, cs:__real@42700000
        vmovss  dword ptr [rbp+57h+in+4], xmm1
      }
    }
    __asm { vmovss  dword ptr [rbp+57h+in+8], xmm0 }
    QuatTransform(&quat, &in, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+out]
      vmovss  xmm2, dword ptr [rbp+57h+out+4]
      vaddss  xmm1, xmm0, dword ptr [rcx+130h]
      vmovss  dword ptr [rbp+57h+vFrom], xmm1
      vaddss  xmm0, xmm2, dword ptr [rcx+134h]
      vmovss  xmm1, dword ptr [rbp+57h+out+8]
      vmovss  dword ptr [rbp+57h+vFrom+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rcx+138h]
      vmovss  dword ptr [rbp+57h+vFrom+8], xmm2
    }
  }
  CanShootFrom = AICommonInterface::CanShootFrom(this, &outEyePos, &vFrom);
  m_pAI->shoot.lastCanShootEnemyFromStepOutTime = level.time;
  m_pAI->shoot.lastCanShootEnemyFromStepOutResult = CanShootFrom;
  v36 = DVARBOOL_ai_ShowCanshootChecks;
  if ( !DVARBOOL_ai_ShowCanshootChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_ShowCanshootChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  if ( v36->current.enabled )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugEntIndex, "ai_debugEntIndex");
    if ( Int_Internal_DebugName <= 0 || Int_Internal_DebugName == this->m_pAI->ent->s.number )
    {
      v38 = &colorGreen;
      if ( !CanShootFrom )
        v38 = &colorRed;
      G_DebugLineWithDuration(&outEyePos, &vFrom, v38, 0, 30);
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
  ai_common_t *m_pAI; 
  bool v7; 
  bool v8; 
  unsigned __int16 EntityHitId; 
  sentient_s *sentient; 
  int number; 
  __int64 v25; 
  __int64 v26; 
  sentient_s *v27; 
  __int64 contentmask; 
  __int64 v29; 
  int v30; 
  trace_t results; 

  _RSI = vFrom;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 142, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 143, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v7 = m_pAI->sentient == NULL;
  if ( !m_pAI->sentient )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 144, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient");
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm4, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:?level@@3Ulevel_locals_t@@A.fFogOpaqueDistSqrd; level_locals_t level
  }
  if ( !v7 )
    return 0;
  G_Main_TraceCapsule(&results, _RSI, vTarget, &bounds_origin, this->m_pAI->ent->s.number, 33577057);
  __asm
  {
    vmovss  xmm0, [rsp+0D8h+results.fraction]
    vucomiss xmm0, cs:__real@3f800000
  }
  if ( v7 )
    return 1;
  EntityHitId = Trace_GetEntityHitId(&results);
  if ( EntHandle::isDefined(&this->m_pAI->sentient->targetEnt) )
  {
    sentient = this->m_pAI->sentient;
    number = sentient->targetEnt.number;
    if ( (unsigned int)(number - 1) >= 0x7FF )
    {
      v30 = 2047;
      LODWORD(contentmask) = number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", contentmask, v30) )
        __debugbreak();
    }
    v25 = sentient->targetEnt.number;
    if ( (unsigned int)(v25 - 1) >= 0x800 )
    {
      LODWORD(v29) = 2048;
      LODWORD(contentmask) = v25 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", contentmask, v29) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v26 = v25 - 1;
    if ( g_entities[v26].r.isInUse != g_entityIsInUse[v26] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v26] )
    {
      LODWORD(v29) = sentient->targetEnt.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v29) )
        __debugbreak();
    }
    if ( (__int16)(sentient->targetEnt.number - 1) == EntityHitId )
      return 1;
  }
  v27 = g_entities[EntityHitId].sentient;
  return v27 && v27->eTeam != this->m_pAI->sentient->eTeam;
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
  char v9; 
  char v10; 
  int lastKnownPosTime; 
  vec3_t vOriginOut; 
  vec3_t outLastKnownPos; 
  vec3_t forward; 

  _RSI = other;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1843, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1844, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1845, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
    __debugbreak();
  SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, _RSI);
  if ( !SentientInfo->surprised )
  {
    m_pAI = this->m_pAI;
    if ( level.time - m_pAI->ent->c.item[0].ammoCount >= 2000 && ((unsigned int)(m_pAI->combat.combatMode - 4) > 1 || AICommonInterface::CanSeeSentient(this, _RSI, 250)) )
    {
      __asm
      {
        vmovaps [rsp+0A8h+var_18], xmm6
        vmovaps [rsp+0A8h+var_28], xmm7
        vmovaps [rsp+0A8h+var_38], xmm8
      }
      Sentient_GetOrigin(_RSI, &vOriginOut);
      __asm { vmovss  xmm0, dword ptr [rsp+0A8h+vOriginOut] }
      _RAX = (int *)this->m_pAI;
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+0A8h+vOriginOut+4]
        vmovss  xmm5, dword ptr [rsi+34h]
        vxorps  xmm8, xmm8, xmm8
        vucomiss xmm5, xmm8
        vsubss  xmm6, xmm0, dword ptr [rdx+130h]
        vmovss  xmm0, dword ptr [rsp+0A8h+vOriginOut+8]
        vsubss  xmm7, xmm1, dword ptr [rdx+134h]
        vsubss  xmm4, xmm0, dword ptr [rdx+138h]
        vmulss  xmm3, xmm7, xmm7
      }
      if ( !v10 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm0, xmm3
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm5
        }
        if ( v9 | v10 )
          goto LABEL_20;
      }
      __asm
      {
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm1, xmm0, xmm3
        vcomiss xmm1, dword ptr [rax+54h]
      }
      if ( v9 | v10 )
      {
        __asm
        {
          vmulss  xmm0, xmm4, xmm4
          vcomiss xmm0, cs:__real@45c80000
        }
        if ( v9 | v10 )
        {
LABEL_20:
          if ( _RAX[409] >= 2 || (lastKnownPosTime = SentientInfo->lastKnownPosTime) != 0 && level.time - lastKnownPosTime <= 10000 )
          {
            AngleVectors((const vec3_t *)(*(_QWORD *)_RAX + 316i64), &forward, NULL, NULL);
            SentientInfo_GetLastKnownPos(SentientInfo, &outLastKnownPos);
            if ( !SentientInfo->lastKnownPosTime )
              goto LABEL_23;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0A8h+vOriginOut]
              vsubss  xmm3, xmm0, dword ptr [rsp+0A8h+outLastKnownPos]
              vmovss  xmm1, dword ptr [rsp+0A8h+vOriginOut+4]
              vsubss  xmm2, xmm1, dword ptr [rsp+0A8h+outLastKnownPos+4]
              vmovss  xmm0, dword ptr [rsp+0A8h+vOriginOut+8]
              vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+outLastKnownPos+8]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vcomiss xmm2, cs:__real@47800000
            }
            if ( SentientInfo->lastKnownPosTime )
            {
LABEL_23:
              __asm
              {
                vmulss  xmm2, xmm6, dword ptr [rsp+0A8h+forward]
                vmulss  xmm1, xmm7, dword ptr [rsp+0A8h+forward+4]
                vaddss  xmm2, xmm2, xmm1
                vcomiss xmm2, xmm8
              }
            }
          }
          else
          {
            SentientInfo->surprised = 1;
          }
        }
      }
      __asm
      {
        vmovaps xmm7, [rsp+0A8h+var_28]
        vmovaps xmm6, [rsp+0A8h+var_18]
        vmovaps xmm8, [rsp+0A8h+var_38]
      }
    }
  }
}

/*
==============
DeltaInFovAndRange
==============
*/

bool __fastcall DeltaInFovAndRange(const vec3_t *vDelta, const vec3_t *vForward, double fovDot, double fovDotZ)
{
  bool result; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx+8]
    vmovaps [rsp+68h+var_28], xmm7
    vmovss  xmm7, dword ptr [rdx+4]
    vmovaps [rsp+68h+var_38], xmm8
    vmovss  xmm8, dword ptr [rcx]
    vmovaps [rsp+68h+var_48], xmm9
    vmovss  xmm9, dword ptr [rdx]
    vmovaps [rsp+68h+var_58], xmm10
    vmulss  xmm10, xmm6, dword ptr [rdx+8]
    vmovaps xmm5, xmm3
    vmovss  xmm3, dword ptr [rcx+4]
    vmulss  xmm1, xmm9, xmm8
    vmulss  xmm0, xmm7, xmm3
    vaddss  xmm1, xmm1, xmm0
    vmovaps [rsp+68h+var_68], xmm11
    vmovaps xmm4, xmm2
    vaddss  xmm2, xmm1, xmm10
    vxorps  xmm11, xmm11, xmm11
    vcomiss xmm2, xmm11
    vmulss  xmm0, xmm4, [rsp+68h+fDistSqrd]
    vmulss  xmm1, xmm0, xmm4
    vmulss  xmm2, xmm2, xmm2
    vcomiss xmm2, xmm1
    vcomiss xmm5, xmm4
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmulss  xmm3, xmm9, xmm2
    vmulss  xmm2, xmm7, xmm2
    vmulss  xmm0, xmm2, xmm7
    vmulss  xmm1, xmm3, xmm9
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm4, xmm1, xmm10
    vcomiss xmm4, xmm11
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm3, xmm0
    vmulss  xmm4, xmm4, xmm4
    vcomiss xmm4, xmm2
  }
  result = 1;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vmovaps xmm10, [rsp+68h+var_58]
    vmovaps xmm11, [rsp+68h+var_68]
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
  {
    _RAX = this->m_pAI;
    __asm { vmovss  xmm0, dword ptr [rax+98h] }
  }
  else
  {
    _RAX = this->m_pAI;
    __asm { vmovss  xmm0, dword ptr [rax+9Ch] }
  }
  return *(float *)&_XMM0;
}

/*
==============
AICommonInterface::FovDotZ
==============
*/
float AICommonInterface::FovDotZ(AICommonInterface *this, const gentity_s *pOtherEnt)
{
  if ( this->m_pAI )
  {
    _RAX = this->m_pAI;
    __asm { vmovss  xmm0, dword ptr [rax+0A0h] }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 517, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    _RAX = this->m_pAI;
    __asm { vmovss  xmm0, dword ptr [rax+0A0h] }
  }
  return *(float *)&_XMM0;
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
  ai_scripted_t *v17; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  TagPair v21; 
  tmat43_t<vec3_t> outTagMat; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 429, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->muzzleInfo.time == level.time )
    goto LABEL_8;
  Profile_Begin(283);
  this->GetWeaponFlashTagName(this, &v21);
  v7 = this->m_pAI;
  outBoneIndex[0] = -2;
  outTagName = 0;
  ServerDObjForEnt = Com_GetServerDObjForEnt(v7->ent);
  if ( TagPair::GetTagNameAndBoneIndex(&v21, ServerDObjForEnt, &outTagName, outBoneIndex) && G_Utils_DObjGetWorldTagMatrix(this->m_pAI->ent, outTagName, &outTagMat) )
  {
    this->m_pAI->muzzleInfo.time = level.time;
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+outTagMat+24h]
      vmovss  dword ptr [rax+45Ch], xmm0
      vmovss  xmm1, dword ptr [rsp+98h+outTagMat+28h]
      vmovss  dword ptr [rax+460h], xmm1
      vmovss  xmm0, dword ptr [rsp+98h+outTagMat+2Ch]
      vmovss  dword ptr [rax+464h], xmm0
      vmovss  xmm0, dword ptr [rsp+98h+outTagMat]
    }
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  dword ptr [rax+468h], xmm0
      vmovss  xmm1, dword ptr [rsp+98h+outTagMat+4]
      vmovss  dword ptr [rax+46Ch], xmm1
      vmovss  xmm0, dword ptr [rsp+98h+outTagMat+8]
      vmovss  dword ptr [rax+470h], xmm0
    }
    Profile_EndInternal(NULL);
    m_pAI = this->m_pAI;
LABEL_8:
    outOrigin->v[0] = m_pAI->muzzleInfo.pos.v[0];
    outOrigin->v[1] = m_pAI->muzzleInfo.pos.v[1];
    outOrigin->v[2] = m_pAI->muzzleInfo.pos.v[2];
    v17 = this->m_pAI;
    outForward->v[0] = v17->muzzleInfo.dir.v[0];
    outForward->v[1] = v17->muzzleInfo.dir.v[1];
    outForward->v[2] = v17->muzzleInfo.dir.v[2];
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
  int v70; 
  vec4_t v73; 
  vec3_t out; 
  vec3_t in; 
  vec3_t v76; 
  vec4_t quat; 
  vec4_t v78; 
  ApproxGunParams pOutGunParams; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  _RDI = outOrigin;
  AIScriptedInterface::GetApproxAdjustedGunParams(this, &pOutGunParams);
  this->GetEyePosition(this, (vec3_t *)&v70);
  AnglesToQuat(&this->m_pAI->aimAngles, &quat);
  AnglesToQuat(&this->m_pAI->ent->r.currentAngles, &v73);
  __asm
  {
    vmovss  xmm12, dword ptr [rsp+120h+quat]
    vmovss  xmm11, dword ptr [rsp+120h+var_F0+0Ch]
    vmovss  xmm10, dword ptr [rsp+120h+var_F0]
    vmovss  xmm7, dword ptr [rsp+120h+quat+0Ch]
    vmovss  xmm8, dword ptr [rsp+120h+var_F0+4]
    vmovss  xmm9, dword ptr [rsp+120h+quat+8]
    vmovss  xmm6, dword ptr [rsp+120h+var_F0+8]
    vmovss  xmm5, dword ptr [rsp+120h+quat+4]
    vmulss  xmm1, xmm12, xmm11
    vmulss  xmm0, xmm10, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm8, xmm9
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm0, xmm6, xmm5
    vsubss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rbp+20h+var_A0], xmm1
    vmulss  xmm0, xmm9, xmm10
    vmulss  xmm2, xmm5, xmm11
    vsubss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm8, xmm7
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm6, xmm12
    vaddss  xmm2, xmm4, xmm0
    vmovss  dword ptr [rbp+20h+var_A0+4], xmm2
    vmulss  xmm0, xmm5, xmm10
    vmulss  xmm1, xmm9, xmm11
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm12
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm7
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm12, xmm10
    vmulss  xmm1, xmm11, xmm7
    vmovss  dword ptr [rbp+20h+var_A0+8], xmm2
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm8
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm9
    vsubss  xmm2, xmm3, xmm0
    vmovss  dword ptr [rbp+20h+var_A0+0Ch], xmm2
  }
  QuatTransform(&v73, &pOutGunParams.m_offset, &out);
  __asm
  {
    vmovss  xmm0, [rsp+120h+var_100]
    vaddss  xmm1, xmm0, dword ptr [rsp+120h+out]
    vmovss  xmm2, [rsp+120h+var_FC]
    vaddss  xmm0, xmm2, dword ptr [rsp+120h+out+4]
    vmovss  [rsp+120h+var_100], xmm1
    vmovss  xmm1, [rsp+120h+var_F8]
    vaddss  xmm2, xmm1, dword ptr [rsp+120h+out+8]
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+120h+var_FC], xmm0
    vmovss  xmm0, [rbp+20h+pOutGunParams.m_length]
    vmovss  dword ptr [rsp+120h+in+4], xmm1
    vmovss  dword ptr [rsp+120h+in+8], xmm1
    vmovss  [rsp+120h+var_F8], xmm2
    vmovss  dword ptr [rsp+120h+in], xmm0
  }
  QuatTransform(&v78, &in, &v76);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+120h+var_C0]
    vaddss  xmm1, xmm0, [rsp+120h+var_100]
    vmovss  xmm2, dword ptr [rsp+120h+var_C0+4]
    vaddss  xmm0, xmm2, [rsp+120h+var_FC]
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm1, dword ptr [rsp+120h+var_C0+8]
    vaddss  xmm2, xmm1, [rsp+120h+var_F8]
    vmovss  dword ptr [rdi+8], xmm2
    vmovss  dword ptr [rdi+4], xmm0
  }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
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
  char v17; 
  char v18; 
  tmat33_t<vec3_t> axis; 
  char v94; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RDI = outLookAtPos;
  _RSI = viewPos;
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1046, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm8, xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm7, xmm0, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm6, xmm0, dword ptr [rdi+8]
  }
  AnglesToAxis(&_RBX->r.currentAngles, &axis);
  __asm
  {
    vmulss  xmm1, xmm8, dword ptr [rsp+0A8h+axis]
    vmulss  xmm2, xmm7, dword ptr [rsp+0A8h+axis+4]
    vmulss  xmm0, xmm6, dword ptr [rsp+0A8h+axis+8]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm7, dword ptr [rsp+0A8h+axis+10h]
    vmulss  xmm1, xmm6, dword ptr [rsp+0A8h+axis+14h]
    vaddss  xmm9, xmm3, xmm0
    vmulss  xmm0, xmm8, dword ptr [rsp+0A8h+axis+0Ch]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm2, xmm7, dword ptr [rsp+0A8h+axis+1Ch]
    vmulss  xmm0, xmm6, dword ptr [rsp+0A8h+axis+20h]
    vaddss  xmm5, xmm3, xmm1
    vmulss  xmm1, xmm8, dword ptr [rsp+0A8h+axis+18h]
    vaddss  xmm3, xmm2, xmm1
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm9, xmm8
    vaddss  xmm4, xmm3, xmm0
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( !v18 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10Ch]
      vandps  xmm1, xmm9, xmm3
      vdivss  xmm2, xmm0, xmm1
      vmulss  xmm6, xmm2, xmm5
      vandps  xmm0, xmm6, xmm3
      vcomiss xmm0, dword ptr [rbx+110h]
      vmulss  xmm1, xmm2, xmm9
      vmulss  xmm7, xmm2, xmm4
    }
    if ( v17 )
    {
      __asm
      {
        vandps  xmm0, xmm7, xmm3
        vcomiss xmm0, dword ptr [rbx+114h]
      }
      if ( v17 )
        goto LABEL_13;
    }
  }
  __asm { vucomiss xmm5, xmm8 }
  if ( !v18 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+110h]
      vandps  xmm1, xmm5, xmm3
      vdivss  xmm2, xmm0, xmm1
      vmulss  xmm7, xmm2, xmm4
      vandps  xmm0, xmm7, xmm3
      vcomiss xmm0, dword ptr [rbx+114h]
      vmulss  xmm1, xmm2, xmm9
      vmulss  xmm6, xmm2, xmm5
    }
    if ( v17 )
    {
      __asm
      {
        vandps  xmm0, xmm1, xmm3
        vcomiss xmm0, dword ptr [rbx+10Ch]
      }
      if ( v17 )
        goto LABEL_13;
    }
  }
  __asm { vucomiss xmm4, xmm8 }
  if ( !v18 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+114h]
      vandps  xmm1, xmm4, xmm3
      vdivss  xmm2, xmm0, xmm1
      vmulss  xmm1, xmm9, xmm2
      vandps  xmm0, xmm1, xmm3
      vcomiss xmm0, dword ptr [rbx+10Ch]
      vmulss  xmm6, xmm5, xmm2
      vmulss  xmm7, xmm2, xmm4
    }
    if ( v17 )
    {
      __asm
      {
        vandps  xmm0, xmm6, xmm3
        vcomiss xmm0, dword ptr [rbx+110h]
      }
      if ( v17 )
      {
LABEL_13:
        __asm
        {
          vsubss  xmm2, xmm1, xmm9
          vsubss  xmm0, xmm6, xmm5
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmovss  xmm0, dword ptr [rdi]
          vsubss  xmm5, xmm0, dword ptr [rsi]
          vmovss  xmm0, dword ptr [rdi+8]
          vsubss  xmm8, xmm0, dword ptr [rsi+8]
          vsubss  xmm3, xmm7, xmm4
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vmovss  xmm1, dword ptr [rdi+4]
          vsubss  xmm6, xmm1, dword ptr [rsi+4]
          vsqrtss xmm9, xmm2, xmm2
          vmulss  xmm0, xmm8, xmm8
          vmulss  xmm2, xmm6, xmm6
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm3, xmm2, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, cs:__real@80000000
          vblendvps xmm0, xmm4, xmm1, xmm0
          vdivss  xmm3, xmm1, xmm0
          vmulss  xmm0, xmm5, xmm3
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm1, dword ptr [rsi]
          vmulss  xmm0, xmm3, xmm6
          vmulss  xmm1, xmm0, xmm9
          vmovss  dword ptr [rdi], xmm2
          vaddss  xmm2, xmm1, dword ptr [rsi+4]
          vmulss  xmm0, xmm3, xmm8
          vmulss  xmm1, xmm0, xmm9
          vmovss  dword ptr [rdi+4], xmm2
          vaddss  xmm2, xmm1, dword ptr [rsi+8]
          vmovss  dword ptr [rdi+8], xmm2
        }
      }
    }
  }
  _R11 = &v94;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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
  _BOOL8 result; 
  float v12; 
  float v13; 
  vec3_t vEyePos; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  this->GetEyePosition(this, &vEyePos);
  *(double *)&_XMM0 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDotZ)(this, 0i64);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = ((double (__fastcall *)(AICommonInterface *, _QWORD))this->FovDot)(this, 0i64);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+68h+var_40], xmm1
    vmovaps xmm3, xmm0; fovDot
    vmovss  [rsp+68h+var_48], xmm6
  }
  result = AICommonInterface::PointInFovAndRange(this, &vEyePos, vPoint, *(float *)&_XMM3, v12, v13);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return result;
}

/*
==============
AICommonInterface::PointInFovAndRange
==============
*/

bool __fastcall AICommonInterface::PointInFovAndRange(AICommonInterface *this, const vec3_t *vEyePos, const vec3_t *vPoint, double fovDot, float fovDotZ, float fMaxDistSqrd)
{
  ai_common_t *m_pAI; 
  bool v14; 
  bool v15; 
  bool result; 
  char v35; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmm9, xmm3
  }
  _RDI = vPoint;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 790, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v14 = m_pAI->ent == NULL;
  if ( !m_pAI->ent )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 791, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm4, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm3, xmm0, dword ptr [rsi+8]
    vmovss  xmm7, [rsp+0D8h+fMaxDistSqrd]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm2, xmm2
    vmovss  dword ptr [rsp+0D8h+vDelta+4], xmm2
    vaddss  xmm2, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm7, xmm0
    vmulss  xmm1, xmm3, xmm3
    vmovss  dword ptr [rsp+0D8h+vDelta], xmm4
    vmovss  dword ptr [rsp+0D8h+vDelta+8], xmm3
    vaddss  xmm6, xmm2, xmm1
  }
  if ( v14 )
  {
    __asm { vucomiss xmm9, xmm0 }
    result = 1;
  }
  else
  {
    __asm { vcomiss xmm6, xmm7 }
    if ( v14 )
      __asm { vcomiss xmm6, cs:?level@@3Ulevel_locals_t@@A.fFogOpaqueDistSqrd; level_locals_t level }
    result = 0;
  }
  _R11 = &v35;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
AICommonInterface::PointInFovAndRange_Check
==============
*/
bool AICommonInterface::PointInFovAndRange_Check(AICommonInterface *this, const vec3_t *vEyePos, const vec3_t *vPoint, const vec3_t *vDelta, const vec3_t *vForward, float fovDot, float fovDotZ, float fDistSqrd, float fMaxDistSqrd)
{
  bool result; 
  const vec3_t *v15; 
  __int64 v16; 
  __int64 *v20; 
  vec3_t vDeltaa; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm0, [rsp+68h+fDistSqrd]
    vmovss  xmm6, [rsp+68h+fMaxDistSqrd]
    vmovss  xmm3, [rsp+68h+fovDotZ]; fovDotZ
    vmovss  xmm2, [rsp+68h+fovDot]; fovDot
    vmovss  [rsp+68h+var_40], xmm6
    vmovss  [rsp+68h+var_48], xmm0
  }
  result = DeltaInFovAndRange(vDelta, vForward, *(double *)&_XMM2, *(double *)&_XMM3);
  if ( !result )
  {
    v20 = *(__int64 **)(v16 + 8);
    if ( *((_BYTE *)v20 + 182) )
    {
      _R8 = *v20;
      __asm
      {
        vmovss  xmm1, dword ptr [r11+8]
        vmovss  xmm0, dword ptr [r8+138h]
        vcomiss xmm1, xmm0
      }
      if ( *((_BYTE *)v20 + 182) )
      {
        __asm
        {
          vmovss  xmm5, dword ptr [r10+8]
          vcomiss xmm5, xmm1
        }
        if ( !*((_BYTE *)v20 + 182) )
        {
          __asm
          {
            vcomiss xmm5, xmm0
            vmovss  [rsp+68h+var_40], xmm6
            vmovss  xmm0, dword ptr [r9+4]
            vmovss  xmm2, dword ptr [r9]
            vmulss  xmm1, xmm0, xmm0
            vmovss  dword ptr [rsp+68h+vDelta+4], xmm0
            vmulss  xmm0, xmm2, xmm2
            vmovss  dword ptr [rsp+68h+vDelta], xmm2
            vaddss  xmm2, xmm1, xmm0
            vxorps  xmm3, xmm3, xmm3; fovDotZ
            vmovss  [rsp+68h+var_48], xmm2
            vmovss  dword ptr [rsp+68h+vDelta+8], xmm3
            vmovss  xmm2, [rsp+68h+fovDot]; fovDot
          }
          result = DeltaInFovAndRange(&vDeltaa, v15, *(double *)&_XMM2, *(double *)&_XMM3);
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
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
  __int64 v12; 
  int v18; 
  BOOL v19; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  EntityTagInfo *tagInfo; 
  gentity_s *parent; 
  EntityTagInfo *v23; 
  gentity_s *v24; 
  ai_common_t *m_pAI; 
  bool HasHit; 
  vec3_t *p_starta; 
  char v62; 
  unsigned __int8 v63; 
  hkMemoryAllocator *v64; 
  hkMemoryAllocator *v65; 
  __int64 result; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v75; 
  vec3_t starta; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  v75 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  v12 = passEntNum;
  _R13 = end;
  _R12 = start;
  Profile_Begin(272);
  ++this->m_pAI->traceCount;
  _RBX = DVARFLT_ai_foliageSeeThroughDist;
  if ( !DVARFLT_ai_foliageSeeThroughDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_foliageSeeThroughDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm10, dword ptr [rbx+28h] }
  v18 = 41965571;
  v19 = foliageSetting == FORCE_IGNORE_FOLIAGE;
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && SV_BotIsBotEnt(this->m_pAI->ent) )
  {
    if ( foliageSetting != FORCE_CHECK_FOLIAGE )
      v19 = 1;
    if ( SV_BotControllingRemoteMissile(this->m_pAI->ent) )
      v18 = 41963523;
  }
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 560, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&ignoreBodies, 0, this->m_pAI->ent->s.number, 1, 1, 0, 1, 0);
  if ( (_DWORD)v12 != 2047 )
  {
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(&ignoreBodies, v12, 1, 1, 0, 1, 0);
    tagInfo = g_entities[v12].tagInfo;
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
  if ( (unsigned int)(v12 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v12, "signed", v12) )
    __debugbreak();
  G_GameInterface_AI_AddAdditionalIgnoreEntsForSightTrace(v12, &ignoreBodies);
  v23 = this->m_pAI->ent->tagInfo;
  if ( v23 )
  {
    v24 = v23->parent;
    if ( v24 )
    {
      if ( v24->vehicle )
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(&ignoreBodies, v24->s.number, 1, 0, 0, 0, 0);
    }
  }
  extendedData.contents = -1;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+170h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.ignoreBodies = &ignoreBodies;
  if ( v19 )
  {
    p_starta = (vec3_t *)_R13;
    goto LABEL_33;
  }
  __asm
  {
    vmovss  xmm4, dword ptr [r12]
    vmovss  xmm0, dword ptr [r13+0]
    vsubss  xmm7, xmm0, xmm4
    vmovss  xmm5, dword ptr [r12+4]
    vmovss  xmm1, dword ptr [r13+4]
    vsubss  xmm8, xmm1, xmm5
    vmovss  xmm6, dword ptr [r12+8]
    vmovss  xmm0, dword ptr [r13+8]
    vsubss  xmm9, xmm0, xmm6
    vmulss  xmm2, xmm8, xmm8
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm10, xmm10
    vcomiss xmm2, xmm1
  }
  m_pAI = this->m_pAI;
  if ( m_pAI->sight.ignoreCloseFoliage == v19 )
  {
    p_starta = (vec3_t *)_R13;
LABEL_34:
    extendedData.contents = v18;
    Physics_Raycast(PHYSICS_WORLD_ID_FIRST, _R12, p_starta, &extendedData, CollisionQueryResult);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    goto LABEL_35;
  }
  __asm
  {
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm2, xmm0
    vdivss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm7, xmm0
    vmulss  xmm2, xmm8, xmm0
    vmulss  xmm7, xmm9, xmm0
    vcomiss xmm3, xmm10
  }
  if ( !m_pAI->sight.ignoreCloseFoliage )
  {
    __asm
    {
      vmulss  xmm0, xmm1, xmm3
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rbp+70h+start], xmm1
      vmulss  xmm2, xmm2, xmm3
      vaddss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rbp+70h+start+4], xmm0
      vmulss  xmm1, xmm7, xmm3
      vaddss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rbp+70h+start+8], xmm2
    }
    HavokPhysics_CollisionQueryResult::Reset(CollisionQueryResult, 1);
    p_starta = &starta;
    goto LABEL_33;
  }
  __asm
  {
    vmulss  xmm0, xmm1, xmm10
    vaddss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rbp+70h+start], xmm1
    vmulss  xmm2, xmm2, xmm10
    vaddss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rbp+70h+start+4], xmm0
    vmulss  xmm1, xmm7, xmm10
    vaddss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rbp+70h+start+8], xmm2
  }
  extendedData.contents = v18;
  Physics_Raycast(PHYSICS_WORLD_ID_FIRST, &starta, _R13, &extendedData, CollisionQueryResult);
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
  if ( !HasHit )
  {
    HavokPhysics_CollisionQueryResult::Reset(CollisionQueryResult, 1);
    p_starta = &starta;
LABEL_33:
    v18 &= ~2u;
    goto LABEL_34;
  }
LABEL_35:
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  if ( HasHit )
    goto LABEL_44;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    goto LABEL_45;
  if ( SV_IsDemoPlaying() )
  {
    *(double *)&_XMM0 = SV_DemoSP_GetFxVisibility();
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
      __debugbreak();
    *(double *)&_XMM0 = FX_GetClientVisibility(fx_serverVisClient, _R12, _R13);
    __asm { vmovaps xmm6, xmm0 }
    SV_DemoSP_RecordFxVisibility(*(float *)&_XMM0);
  }
  __asm { vcomiss xmm6, cs:__real@3e4ccccd }
  if ( v62 )
  {
LABEL_44:
    Profile_EndInternal(NULL);
    v63 = 0;
  }
  else
  {
LABEL_45:
    Profile_EndInternal(NULL);
    v63 = 1;
  }
  v64 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreBodies.m_size = 0;
  if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v64, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  ignoreBodies.m_ignoreBodies.m_data = NULL;
  ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v65 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreEntities.m_size = 0;
  if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v65, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  result = v63;
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
  return result;
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
  gentity_s *ent; 
  ai_common_t *v28; 
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
    _RCX = this->m_pAI;
    if ( WorldTagMatrix )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+78h+outTagMat+24h]
        vmovss  dword ptr [rcx+11Ch], xmm0
        vmovss  xmm1, dword ptr [rsp+78h+outTagMat+28h]
        vmovss  dword ptr [rcx+120h], xmm1
        vmovss  xmm0, dword ptr [rsp+78h+outTagMat+2Ch]
        vmovss  dword ptr [rcx+124h], xmm0
      }
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+78h+outTagMat]
        vmovss  dword ptr [rax+128h], xmm0
        vmovss  xmm1, dword ptr [rsp+78h+outTagMat+4]
        vmovss  dword ptr [rax+12Ch], xmm1
      }
      this->m_pAI->eyeInfo.dir.v[2] = 0.0;
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+12Ch]
        vmovss  xmm3, dword ptr [rax+128h]
        vmulss  xmm0, xmm0, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, cs:__real@80000000
        vmovss  xmm1, cs:__real@3f800000
        vblendvps xmm0, xmm2, xmm1, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm3, xmm1
        vmovss  dword ptr [rax+128h], xmm0
        vmulss  xmm1, xmm1, dword ptr [rax+12Ch]
        vmovss  dword ptr [rax+12Ch], xmm1
      }
    }
    else
    {
      Com_Printf(18, "UpdateEyeInformation: Actor %i dobj doesn't have TAG_EYE.\n", (unsigned int)_RCX->ent->s.number);
      m_pAI = this->m_pAI;
      ent = m_pAI->ent;
      m_pAI->eyeInfo.pos.v[0] = m_pAI->ent->r.currentOrigin.v[0];
      m_pAI->eyeInfo.pos.v[1] = ent->r.currentOrigin.v[1];
      m_pAI->eyeInfo.pos.v[2] = ent->r.currentOrigin.v[2];
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+124h]
        vaddss  xmm1, xmm0, cs:__real@42680000
        vmovss  dword ptr [rax+124h], xmm1
      }
      v28 = this->m_pAI;
      v28->eyeInfo.dir.v[0] = v28->orientation.vLookForward.v[0];
      v28->eyeInfo.dir.v[1] = v28->orientation.vLookForward.v[1];
      v28->eyeInfo.dir.v[2] = v28->orientation.vLookForward.v[2];
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
void AICommonInterface::UpdateNearbyEnemyInfo(AICommonInterface *this, sentient_sort_t *enemyList, int enemyCount)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = enemyList;
  if ( !enemyList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1495, ASSERT_TYPE_ASSERT, "(enemyList)", (const char *)&queryFormat, "enemyList") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1496, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+58h]
    vmulss  xmm6, xmm0, xmm0
  }
  if ( enemyCount > 0 )
    __asm { vcomiss xmm6, dword ptr [rbx+0Ch] }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
AICommonInterface::UpdateSight
==============
*/
void AICommonInterface::UpdateSight(AICommonInterface *this)
{
  unsigned __int64 v5; 
  int v6; 
  bool v7; 
  unsigned int v11; 
  unsigned int v12; 
  bitarray<224> *p_result; 
  int v14; 
  sentient_s *v15; 
  const char *v16; 
  gclient_s *client; 
  bool v32; 
  bool v33; 
  bool v34; 
  bool v35; 
  bool v36; 
  ai_common_t *m_pAI; 
  sentient_s *v44; 
  int traceCount; 
  bool v46; 
  bool v47; 
  unsigned __int64 v48; 
  int latency; 
  ai_common_t *v51; 
  int IsBotEnt; 
  bool v59; 
  __int64 v62; 
  __int64 v63; 
  int v64; 
  vec3_t vOriginOut; 
  bitarray<224> result; 
  char Base[8]; 
  char v68; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1699, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1700, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1701, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  Profile_Begin(256);
  v5 = 0i64;
  v6 = 0;
  if ( level.teammode == TEAMMODE_FFA )
  {
    v7 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+11E8h+result.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rsp+11E8h+result.array+10h], xmm1
    }
    v11 = _RAX->array[6] & 0xFFEFFFFF;
    if ( v7 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v11 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, this->m_pAI->sentient->eTeam);
  }
  if ( this->m_pAI->sentient->neutralSenses && this->m_pAI->sentient->eTeam == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) )
    result.array[0] |= 0x20000000u;
  v12 = 0;
  p_result = &result;
  while ( !p_result->array[0] )
  {
    ++v12;
    p_result = (bitarray<224> *)((char *)p_result + 4);
    if ( v12 >= 7 )
      goto LABEL_74;
  }
  v14 = 0;
  __asm
  {
    vmovaps [rsp+11E8h+var_38], xmm6
    vmovaps [rsp+11E8h+var_48], xmm7
    vmovaps [rsp+11E8h+var_58], xmm8
  }
  v15 = Sentient_FirstSentient(&result);
  __asm
  {
    vmovss  xmm8, cs:__real@48800000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( v15 )
  {
    _R15 = &v68;
    do
    {
      if ( this->m_pAI->sentient != v15 )
      {
        if ( !v15->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1746, ASSERT_TYPE_ASSERT, "(sentient->ent)", (const char *)&queryFormat, "sentient->ent") )
          __debugbreak();
        if ( v15->ent->s.number == this->m_pAI->ent->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1747, ASSERT_TYPE_ASSERT, "(sentient->ent->s.number != m_pAI->ent->s.number)", (const char *)&queryFormat, "sentient->ent->s.number != m_pAI->ent->s.number") )
          __debugbreak();
        if ( v15->ent->s.eType != ET_INVISIBLE && v15->ent->health > 0 && (!Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || ((client = v15->ent->client) == NULL || client->sess.connected == CON_CONNECTED) && (v15->ent->flags.m_flags[0] & 4) == 0) )
        {
          Sentient_GetOrigin(v15, &vOriginOut);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+11E8h+vOriginOut]
            vsubss  xmm2, xmm0, dword ptr [rcx+130h]
            vmovss  xmm0, dword ptr [rsp+11E8h+vOriginOut+4]
            vmovss  dword ptr [rsp+11E8h+vOriginOut], xmm2
            vsubss  xmm1, xmm0, dword ptr [rcx+134h]
            vmovss  xmm0, dword ptr [rsp+11E8h+vOriginOut+8]
            vmovss  dword ptr [rsp+11E8h+vOriginOut+4], xmm1
            vsubss  xmm3, xmm0, dword ptr [rcx+138h]
            vmulss  xmm1, xmm1, xmm1
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm6, xmm2, xmm1
            vmovss  [rsp+11E8h+var_11A8], xmm6
            vmovss  dword ptr [rsp+11E8h+vOriginOut+8], xmm3
          }
          v32 = (v64 & 0x7F800000) == 2139095040;
          if ( (v64 & 0x7F800000) == 2139095040 )
          {
            v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1771, ASSERT_TYPE_SANITY, "( !IS_NAN( fDistSqrd ) )", (const char *)&queryFormat, "!IS_NAN( fDistSqrd )");
            v32 = !v33;
            if ( v33 )
              __debugbreak();
          }
          __asm { vucomiss xmm6, xmm7 }
          if ( !v32 )
          {
            G_Level_GetFrameDuration();
            v34 = (unsigned int)v14 <= 0x110;
            if ( (unsigned int)v14 >= 0x110 )
            {
              LODWORD(v63) = 272;
              LODWORD(v62) = v14;
              v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1780, ASSERT_TYPE_ASSERT, "(unsigned)( iCheckCount ) < (unsigned)( ( sizeof( *array_counter( check ) ) + 0 ) )", "iCheckCount doesn't index ARRAY_COUNT( check )\n\t%i not in [0, %i)", v62, v63);
              v34 = !v35;
              if ( v35 )
                __debugbreak();
            }
            __asm
            {
              vcomiss xmm6, xmm7
              vmovss  dword ptr [r15+4], xmm6
            }
            if ( v34 )
            {
              v36 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0");
              v34 = !v36;
              if ( v36 )
                __debugbreak();
            }
            m_pAI = this->m_pAI;
            __asm
            {
              vmovaps xmm1, xmm6
              vrsqrtss xmm2, xmm1, xmm6
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, ebx
              vmulss  xmm1, xmm0, xmm2
              vmovss  dword ptr [r15], xmm1
            }
            *((_QWORD *)_R15 - 1) = v15;
            __asm { vcomiss xmm6, xmm8 }
            if ( v34 )
              v6 = 1;
            __asm { vsqrtss xmm2, xmm6, xmm6; dist }
            AI_UpdateThreatSight(m_pAI, &m_pAI->sentientInfo[v15 - level.sentients], *(double *)&_XMM2);
            ++v14;
            _R15 += 16;
          }
        }
      }
      v44 = Sentient_NextSentient(v15, &result);
      v16 = "sentient->ent->s.number != m_pAI->ent->s.number";
      v15 = v44;
    }
    while ( v44 );
    v5 = 0i64;
    if ( v14 > 1 )
      qsort(Base, v14, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_sentient_sort);
  }
  traceCount = this->m_pAI->traceCount;
  v46 = 0;
  v47 = v14 == 0i64;
  if ( v14 > 0 )
  {
    v48 = 0i64;
    _RBX = (sentient_s **)Base;
    do
    {
      __asm { vcomiss xmm8, dword ptr [rbx+0Ch] }
      if ( v46 )
        latency = this->m_pAI->sight.latency;
      else
        latency = 0;
      AICommonInterface::CanSeeSentient(this, *_RBX, latency);
      v51 = this->m_pAI;
      if ( v51->traceCount != traceCount )
      {
        IsBotEnt = SV_BotIsBotEnt(v51->ent);
        v47 = IsBotEnt == 0;
        if ( !IsBotEnt )
          break;
        v47 = v6 == 0;
        if ( !v6 )
          break;
      }
      ++v48;
      _RBX += 2;
      v46 = v48 < v14;
      v47 = v48 == v14;
    }
    while ( (__int64)v48 < v14 );
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovaps xmm8, [rsp+11E8h+var_58]
    vucomiss xmm7, dword ptr [rax+58h]
    vmovaps xmm7, [rsp+11E8h+var_48]
  }
  if ( !v47 )
  {
    if ( !_RAX->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_senses.cpp", 1496, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+58h]
      vmulss  xmm6, xmm0, xmm0
    }
    v59 = v14 == 0i64;
    if ( v14 > 0i64 )
    {
      _RBX = (sentient_s **)Base;
      do
      {
        __asm { vcomiss xmm6, dword ptr [rbx+0Ch] }
        if ( v59 )
          break;
        LOBYTE(v16) = 18;
        this->GetPerfectInfo(this, *_RBX, (unsigned __int8)v16);
        ++v5;
        _RBX += 2;
        v59 = v5 <= v14;
      }
      while ( (__int64)v5 < v14 );
    }
  }
  __asm { vmovaps xmm6, [rsp+11E8h+var_38] }
LABEL_74:
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

