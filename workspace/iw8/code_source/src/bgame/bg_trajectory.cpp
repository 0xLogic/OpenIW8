/*
==============
BgTrajectory::EvaluateAngTrajectoryDelta
==============
*/

void __fastcall BgTrajectory::EvaluateAngTrajectoryDelta(BgTrajectory *this, int atTime, vec3_t *outAng)
{
  ?EvaluateAngTrajectoryDelta@BgTrajectory@@QEBAXHAEATvec3_t@@@Z(this, atTime, outAng);
}

/*
==============
BgTrajectory::EvaluateAdvancedTrajectoryInternal
==============
*/

void __fastcall BgTrajectory::EvaluateAdvancedTrajectoryInternal(BgTrajectory *this, const LerpEntityState *es, const DObj *obj, int atTime, vec3_t *outOrigin, vec3_t *outAngles)
{
  ?EvaluateAdvancedTrajectoryInternal@BgTrajectory@@IEBAXPEBULerpEntityState@@PEBUDObj@@HAEATvec3_t@@2@Z(this, es, obj, atTime, outOrigin, outAngles);
}

/*
==============
BgTrajectory::IsTrackingTrajectory
==============
*/

bool __fastcall BgTrajectory::IsTrackingTrajectory(const trajectory_t_secure *tr)
{
  return ?IsTrackingTrajectory@BgTrajectory@@SA_NPEBUtrajectory_t_secure@@@Z(tr);
}

/*
==============
BgTrajectory::UpdateTrackedTrajectoryDeltaAngles
==============
*/

void __fastcall BgTrajectory::UpdateTrackedTrajectoryDeltaAngles(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, float deltaTime)
{
  ?UpdateTrackedTrajectoryDeltaAngles@BgTrajectory@@IEBAXPEBUtrajectory_t_secure@@AEATvec3_t@@M@Z(this, tr, result, deltaTime);
}

/*
==============
BgTrajectory::SetFlags
==============
*/

void __fastcall BgTrajectory::SetFlags(BgTrajectory *this, int flags)
{
  ?SetFlags@BgTrajectory@@QEAAXH@Z(this, flags);
}

/*
==============
BgTrajectory::EvaluatePosTrajectoryDelta
==============
*/

void __fastcall BgTrajectory::EvaluatePosTrajectoryDelta(BgTrajectory *this, int atTime, vec3_t *outPos)
{
  ?EvaluatePosTrajectoryDelta@BgTrajectory@@QEBAXHAEATvec3_t@@@Z(this, atTime, outPos);
}

/*
==============
BgTrajectory::EvaluatePosTrajectory
==============
*/

void __fastcall BgTrajectory::EvaluatePosTrajectory(BgTrajectory *this, int atTime, vec3_t *outPos)
{
  ?EvaluatePosTrajectory@BgTrajectory@@QEBAXHAEATvec3_t@@@Z(this, atTime, outPos);
}

/*
==============
BgTrajectory::GetAbsoluteAnimMovement
==============
*/

void __fastcall BgTrajectory::GetAbsoluteAnimMovement(BgTrajectory *this, const LerpEntityState *tr, const DObj *obj, int atTime, vec3_t *outOrigin, vec3_t *outAngles)
{
  ?GetAbsoluteAnimMovement@BgTrajectory@@IEBAXPEBULerpEntityState@@PEBUDObj@@HAEATvec3_t@@2@Z(this, tr, obj, atTime, outOrigin, outAngles);
}

/*
==============
BgTrajectory::EvaluateTrajectoryInternal
==============
*/

void __fastcall BgTrajectory::EvaluateTrajectoryInternal(BgTrajectory *this, const trajectory_t_secure *tr, int atTime, vec3_t *result)
{
  ?EvaluateTrajectoryInternal@BgTrajectory@@IEBAXPEBUtrajectory_t_secure@@HAEATvec3_t@@@Z(this, tr, atTime, result);
}

/*
==============
BgTrajectory::UpdateTrajectoryDeltaAnglesAlongVelocity
==============
*/

void __fastcall BgTrajectory::UpdateTrajectoryDeltaAnglesAlongVelocity(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, float deltaTime)
{
  ?UpdateTrajectoryDeltaAnglesAlongVelocity@BgTrajectory@@IEBAXPEBUtrajectory_t_secure@@AEATvec3_t@@M@Z(this, tr, result, deltaTime);
}

/*
==============
BgTrajectory::EvaluateTrajectoryDeltaInternal
==============
*/

void __fastcall BgTrajectory::EvaluateTrajectoryDeltaInternal(BgTrajectory *this, const trajectory_t_secure *tr, int atTime, vec3_t *result)
{
  ?EvaluateTrajectoryDeltaInternal@BgTrajectory@@IEBAXPEBUtrajectory_t_secure@@HAEATvec3_t@@@Z(this, tr, atTime, result);
}

/*
==============
BgTrajectory::IsTrackingTrajectoryType
==============
*/

bool __fastcall BgTrajectory::IsTrackingTrajectoryType(const trType_t *type)
{
  return ?IsTrackingTrajectoryType@BgTrajectory@@SA_NAEBW4trType_t@@@Z(type);
}

/*
==============
BgTrajectory::UpdateTrackedTrajectoryAngles
==============
*/

void __fastcall BgTrajectory::UpdateTrackedTrajectoryAngles(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, float deltaTime)
{
  ?UpdateTrackedTrajectoryAngles@BgTrajectory@@IEBAXPEBUtrajectory_t_secure@@AEATvec3_t@@M@Z(this, tr, result, deltaTime);
}

/*
==============
BgTrajectory::EvaluateTrajectories
==============
*/

void __fastcall BgTrajectory::EvaluateTrajectories(BgTrajectory *this, int atTime, vec3_t *outPos, vec3_t *outAng)
{
  ?EvaluateTrajectories@BgTrajectory@@QEBAXHPEATvec3_t@@0@Z(this, atTime, outPos, outAng);
}

/*
==============
BgTrajectory::UpdateTrajectoryAnglesAlongVelocity
==============
*/

void __fastcall BgTrajectory::UpdateTrajectoryAnglesAlongVelocity(BgTrajectory *this, const trajectory_t_secure *tr, int atTime, vec3_t *result, float deltaTime)
{
  ?UpdateTrajectoryAnglesAlongVelocity@BgTrajectory@@IEBAXPEBUtrajectory_t_secure@@HAEATvec3_t@@M@Z(this, tr, atTime, result, deltaTime);
}

/*
==============
BgTrajectory::LegacyEvaluateTrajectory
==============
*/

void __fastcall BgTrajectory::LegacyEvaluateTrajectory(const trajectory_t_secure *tr, int atTime, vec3_t *result)
{
  ?LegacyEvaluateTrajectory@BgTrajectory@@SAXPEBUtrajectory_t_secure@@HAEATvec3_t@@@Z(tr, atTime, result);
}

/*
==============
BgTrajectory::UpdateTrajectoryGravity
==============
*/

void __fastcall BgTrajectory::UpdateTrajectoryGravity(BgTrajectory *this, const trajectory_t_secure *tr, float scale, vec3_t *result, float deltaTime)
{
  ?UpdateTrajectoryGravity@BgTrajectory@@IEBAXPEBUtrajectory_t_secure@@MAEATvec3_t@@M@Z(this, tr, scale, result, deltaTime);
}

/*
==============
BgTrajectory::UpdateTrajectoryGravityDelta
==============
*/

void __fastcall BgTrajectory::UpdateTrajectoryGravityDelta(BgTrajectory *this, const trajectory_t_secure *tr, float scale, vec3_t *result, float deltaTime)
{
  ?UpdateTrajectoryGravityDelta@BgTrajectory@@IEBAXPEBUtrajectory_t_secure@@MAEATvec3_t@@M@Z(this, tr, scale, result, deltaTime);
}

/*
==============
BgTrajectory::BgTrajectory
==============
*/

void __fastcall BgTrajectory::BgTrajectory(BgTrajectory *this)
{
  ??0BgTrajectory@@QEAA@XZ(this);
}

/*
==============
BgTrajectory::UpdateTrackedTrajectoryDelta
==============
*/

void __fastcall BgTrajectory::UpdateTrackedTrajectoryDelta(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, float deltaTime)
{
  ?UpdateTrackedTrajectoryDelta@BgTrajectory@@IEBAXPEBUtrajectory_t_secure@@AEATvec3_t@@M@Z(this, tr, result, deltaTime);
}

/*
==============
BgTrajectory::EvaluateAngTrajectory
==============
*/

void __fastcall BgTrajectory::EvaluateAngTrajectory(BgTrajectory *this, int atTime, vec3_t *outAng)
{
  ?EvaluateAngTrajectory@BgTrajectory@@QEBAXHAEATvec3_t@@@Z(this, atTime, outAng);
}

/*
==============
BgTrajectory::EvaluateTrajectoryDeltas
==============
*/

void __fastcall BgTrajectory::EvaluateTrajectoryDeltas(BgTrajectory *this, int atTime, vec3_t *outPos, vec3_t *outAng)
{
  ?EvaluateTrajectoryDeltas@BgTrajectory@@QEBAXHPEATvec3_t@@0@Z(this, atTime, outPos, outAng);
}

/*
==============
BgTrajectory::UpdateTrackedTrajectory
==============
*/

void __fastcall BgTrajectory::UpdateTrackedTrajectory(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, float deltaTime)
{
  ?UpdateTrackedTrajectory@BgTrajectory@@IEBAXPEBUtrajectory_t_secure@@AEATvec3_t@@M@Z(this, tr, result, deltaTime);
}

/*
==============
BgTrajectory::GetPhysicsGravityDir
==============
*/

void __fastcall BgTrajectory::GetPhysicsGravityDir(BgTrajectory *this, vec3_t *outGravityDir)
{
  ?GetPhysicsGravityDir@BgTrajectory@@IEBAXAEATvec3_t@@@Z(this, outGravityDir);
}

/*
==============
BgTrajectory::BgTrajectory
==============
*/
void BgTrajectory::BgTrajectory(BgTrajectory *this)
{
  this->__vftable = (BgTrajectory_vtbl *)&BgTrajectory::`vftable';
  this->m_es = NULL;
  this->m_flags = 0;
}

/*
==============
BgTrajectory::EvaluateAdvancedTrajectoryInternal
==============
*/
void BgTrajectory::EvaluateAdvancedTrajectoryInternal(BgTrajectory *this, const LerpEntityState *es, const DObj *obj, int atTime, vec3_t *outOrigin, vec3_t *outAngles)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 620, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( es->pos.trType == TR_ANIMATED_MOVER )
  {
    BgTrajectory::GetAbsoluteAnimMovement(this, es, obj, atTime, outOrigin, outAngles);
  }
  else
  {
    BgTrajectory::EvaluateTrajectoryInternal(this, &es->pos, atTime, outOrigin);
    BgTrajectory::EvaluateTrajectoryInternal(this, &es->apos, atTime, outAngles);
  }
}

/*
==============
BgTrajectory::EvaluateAngTrajectory
==============
*/
void BgTrajectory::EvaluateAngTrajectory(BgTrajectory *this, int atTime, vec3_t *outAng)
{
  if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 74, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
    __debugbreak();
  BgTrajectory::EvaluateTrajectories(this, atTime, NULL, outAng);
}

/*
==============
BgTrajectory::EvaluateAngTrajectoryDelta
==============
*/
void BgTrajectory::EvaluateAngTrajectoryDelta(BgTrajectory *this, int atTime, vec3_t *outAng)
{
  if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 82, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
    __debugbreak();
  if ( outAng )
    BgTrajectory::EvaluateTrajectoryDeltaInternal(this, &this->m_es->apos, atTime, outAng);
}

/*
==============
BgTrajectory::EvaluatePosTrajectory
==============
*/
void BgTrajectory::EvaluatePosTrajectory(BgTrajectory *this, int atTime, vec3_t *outPos)
{
  if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 66, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
    __debugbreak();
  BgTrajectory::EvaluateTrajectories(this, atTime, outPos, NULL);
}

/*
==============
BgTrajectory::EvaluatePosTrajectoryDelta
==============
*/
void BgTrajectory::EvaluatePosTrajectoryDelta(BgTrajectory *this, int atTime, vec3_t *outPos)
{
  if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 82, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
    __debugbreak();
  if ( outPos )
    BgTrajectory::EvaluateTrajectoryDeltaInternal(this, &this->m_es->pos, atTime, outPos);
}

/*
==============
BgTrajectory::EvaluateTrajectories
==============
*/
void BgTrajectory::EvaluateTrajectories(BgTrajectory *this, int atTime, vec3_t *outPos, vec3_t *outAng)
{
  trType_t trType; 
  BgTrajectory_vtbl *v9; 
  unsigned int m_es; 
  unsigned int IsClient_low; 
  unsigned int v12; 
  unsigned int v13; 
  const DObj *DObj; 
  const LerpEntityState *v15; 
  float v16; 
  float v17; 
  vec3_t *outAngles; 
  __int64 v19; 
  vec3_t result; 
  vec3_t v21; 

  if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 27, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
    __debugbreak();
  trType = this->m_es->pos.trType;
  if ( trType == TR_ANIMATED_MOVER )
  {
    if ( this->IsClient(this) )
    {
      if ( ((__int64)this[1].__vftable[27].GetPhysicsWorld & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trajectory.h", 60, ASSERT_TYPE_ASSERT, "(CENextValid( m_cent ))", (const char *)&queryFormat, "CENextValid( m_cent )") )
        __debugbreak();
      v9 = this[1].__vftable;
      m_es = (unsigned int)this[1].m_es;
      IsClient_low = SLOWORD(v9[16].IsClient);
      if ( IsClient_low > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", SLOWORD(v9[16].IsClient)) )
        __debugbreak();
      if ( m_es >= 2 )
      {
        LODWORD(v19) = 2;
        LODWORD(outAngles) = m_es;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outAngles, v19) )
          __debugbreak();
      }
      v12 = 2533 * m_es + IsClient_low;
      if ( v12 >= 0x13CA )
      {
        LODWORD(v19) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v19) )
          __debugbreak();
      }
      v13 = clientObjMap[v12];
      if ( v13 )
      {
        if ( v13 >= (unsigned int)s_objCount )
        {
          LODWORD(v19) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v19) )
            __debugbreak();
        }
        DObj = (const DObj *)s_objBuf[v13];
      }
      else
      {
        DObj = NULL;
      }
    }
    else
    {
      DObj = GTrajectory::GetDObj((GTrajectory *)this);
    }
    v15 = this->m_es;
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 620, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( v15->pos.trType == TR_ANIMATED_MOVER )
    {
      BgTrajectory::GetAbsoluteAnimMovement(this, v15, DObj, atTime, &result, &v21);
    }
    else
    {
      BgTrajectory::EvaluateTrajectoryInternal(this, &v15->pos, atTime, &result);
      BgTrajectory::EvaluateTrajectoryInternal(this, &v15->apos, atTime, &v21);
    }
    if ( outPos )
    {
      v16 = result.v[1];
      outPos->v[0] = result.v[0];
      outPos->v[2] = result.v[2];
      outPos->v[1] = v16;
    }
    if ( outAng )
    {
      v17 = v21.v[1];
      outAng->v[0] = v21.v[0];
      outAng->v[2] = v21.v[2];
      outAng->v[1] = v17;
    }
  }
  else
  {
    if ( outPos )
    {
      if ( trType == TR_SLERP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 52, ASSERT_TYPE_ASSERT, "(m_es->pos.trType != TR_SLERP)", "%s\n\tTR_SLERP trajectories cannot be used for position.", "m_es->pos.trType != TR_SLERP") )
        __debugbreak();
      BgTrajectory::EvaluateTrajectoryInternal(this, &this->m_es->pos, atTime, outPos);
    }
    if ( outAng )
      BgTrajectory::EvaluateTrajectoryInternal(this, &this->m_es->apos, atTime, outAng);
  }
}

/*
==============
BgTrajectory::EvaluateTrajectoryDeltaInternal
==============
*/
void BgTrajectory::EvaluateTrajectoryDeltaInternal(BgTrajectory *this, const trajectory_t_secure *tr, int atTime, vec3_t *result)
{
  float v8; 
  float v9; 
  double Gravity; 
  int trTime; 
  int v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  float v19; 
  vec3_t trBase; 
  __int64 v21; 
  vec4_t resulta; 
  vec4_t outQuat; 

  v21 = -2i64;
  Trajectory_GetTrBase(tr, &trBase);
  v19 = trBase.v[0];
  if ( (LODWORD(trBase.v[0]) & 0x7F800000) == 2139095040 || (v19 = trBase.v[1], (LODWORD(trBase.v[1]) & 0x7F800000) == 2139095040) || (v19 = trBase.v[2], (LODWORD(trBase.v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 512, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] )", v19) )
      __debugbreak();
  }
  if ( ((LODWORD(tr->trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(tr->trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(tr->trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 513, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] )") )
    __debugbreak();
  switch ( tr->trType )
  {
    case TR_STATIONARY:
    case TR_INTERPOLATE:
    case TR_LINKED:
    case TR_TRACK_ANGLE:
    case TR_ANGLE_ALONG_VELOCITY:
    case TR_RAGDOLL_INTERPOLATE:
    case TR_RAGDOLL_INTERPOLATE_PLAYER_IMMEDIATE:
      *(_QWORD *)result->v = 0i64;
      result->v[2] = 0.0;
      goto LABEL_36;
    case TR_LINEAR:
    case TR_PHYSICS_SERVER_AUTH:
    case TR_FIRST_RAGDOLL:
      goto $LN20_7;
    case TR_LINEAR_STOP:
    case TR_LINEAR_STOP_SECURE:
      if ( atTime > tr->trTime + tr->trDuration )
        goto LABEL_17;
$LN20_7:
      result->v[0] = tr->trDelta.v[0];
      result->v[1] = tr->trDelta.v[1];
      result->v[2] = tr->trDelta.v[2];
      goto LABEL_36;
    case TR_SINE:
      v8 = cosf_0((float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(atTime - tr->trTime)).m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)tr->trDuration).m128_f32[0]) * 3.1415927) * 2.0) * 0.5;
      goto LABEL_15;
    case TR_GRAVITY:
    case TR_RAGDOLL_GRAVITY:
    case TR_RAGDOLL_GRAVITY_PLAYER_IMMEDIATE:
      v9 = (float)(atTime - tr->trTime) * 0.001;
      Gravity = BG_GetGravity();
      goto LABEL_19;
    case TR_LOW_GRAVITY:
      v9 = (float)(atTime - tr->trTime) * 0.001;
      Gravity = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
LABEL_19:
      BgTrajectory::UpdateTrajectoryGravityDelta(this, tr, *(float *)&Gravity, result, v9);
      goto LABEL_36;
    case TR_ACCELERATE:
      trTime = tr->trTime;
      if ( atTime > trTime + tr->trDuration )
        goto LABEL_17;
      v8 = (float)((float)(atTime - trTime) * (float)(atTime - trTime)) * 0.0000010000001;
      goto LABEL_15;
    case TR_DECELERATE:
      v12 = tr->trTime;
      if ( atTime > v12 + tr->trDuration )
      {
LABEL_17:
        *(_QWORD *)result->v = 0i64;
        result->v[2] = 0.0;
      }
      else
      {
        v8 = (float)(atTime - v12) * 0.001;
LABEL_15:
        result->v[0] = v8 * tr->trDelta.v[0];
        result->v[1] = v8 * tr->trDelta.v[1];
        result->v[2] = v8 * tr->trDelta.v[2];
LABEL_36:
        if ( ((LODWORD(tr->trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(tr->trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(tr->trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 614, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] )") )
          __debugbreak();
      }
      memset(&trBase, 0, sizeof(trBase));
      return;
    case TR_SLERP:
      v13 = (float)(atTime - tr->trTime) * 0.02;
      PackedQuatToUnitQuat(&tr->trDelta, &outQuat);
      QuatSlerp(&quat_identity, &outQuat, v13, &resulta);
      UnitQuatToAngles(&resulta, result);
      goto LABEL_36;
    default:
      if ( (unsigned int)(tr->trType - 14) > 5 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD2410, 747i64);
      }
      else
      {
        v14 = (float)(atTime - tr->trTime) * 0.001;
        if ( v14 >= 0.001 )
        {
          BgTrajectory::UpdateTrackedTrajectory(this, tr, (vec3_t *)&outQuat, v14);
          Trajectory_GetTrBase(tr, (vec3_t *)&resulta);
          v15 = outQuat.v[1] - resulta.v[1];
          v16 = outQuat.v[2] - resulta.v[2];
          v17 = (float)(outQuat.v[0] - resulta.v[0]) * (float)(1.0 / v14);
          result->v[0] = v17;
          result->v[1] = v15 * (float)(1.0 / v14);
          result->v[2] = v16 * (float)(1.0 / v14);
          *(float *)&v18 = v17;
          if ( (LODWORD(v17) & 0x7F800000) == 2139095040 || (*(float *)&v18 = v15 * (float)(1.0 / v14), (v18 & 0x7F800000) == 2139095040) || (*(float *)&v18 = v16 * (float)(1.0 / v14), (v18 & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 145, ASSERT_TYPE_SANITY, "( !IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] )", v18) )
              __debugbreak();
          }
          memset(&resulta, 0, 0xCui64);
        }
        else
        {
          *(_QWORD *)result->v = 0i64;
          result->v[2] = 0.0;
        }
      }
      goto LABEL_36;
  }
}

/*
==============
BgTrajectory::EvaluateTrajectoryDeltas
==============
*/
void BgTrajectory::EvaluateTrajectoryDeltas(BgTrajectory *this, int atTime, vec3_t *outPos, vec3_t *outAng)
{
  if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 82, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
    __debugbreak();
  if ( outPos )
    BgTrajectory::EvaluateTrajectoryDeltaInternal(this, &this->m_es->pos, atTime, outPos);
  if ( outAng )
    BgTrajectory::EvaluateTrajectoryDeltaInternal(this, &this->m_es->apos, atTime, outAng);
}

/*
==============
BgTrajectory::EvaluateTrajectoryInternal
==============
*/
void BgTrajectory::EvaluateTrajectoryInternal(BgTrajectory *this, const trajectory_t_secure *tr, int atTime, vec3_t *result)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v16; 
  double Gravity; 
  unsigned int trDuration; 
  int trTime; 
  float v20; 
  __int128 v21; 
  __int128 v22; 
  float v26; 
  float v27; 
  float v28; 
  unsigned int v29; 
  int v30; 
  float v31; 
  __int128 v32; 
  __int128 v33; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  __int128 v46; 
  __int64 v50; 
  float v51; 
  vec3_t trBase; 
  __int64 v53; 
  vec4_t to; 
  vec4_t quat; 
  vec4_t outQuat; 
  vec4_t resulta; 

  v53 = -2i64;
  if ( tr->trType >= NUM_TRTYPES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 361, ASSERT_TYPE_ASSERT, "( ( tr->trType < NUM_TRTYPES ) )", "( tr->trType ) = %i", tr->trType) )
    __debugbreak();
  if ( tr->trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 363, ASSERT_TYPE_ASSERT, "(!BgTrajectory::IsAnimatedTrajectory( tr ))", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( tr )") )
      __debugbreak();
  }
  Trajectory_GetTrBase(tr, &trBase);
  v8 = trBase.v[0];
  v51 = trBase.v[0];
  if ( (LODWORD(trBase.v[0]) & 0x7F800000) == 2139095040 || (v9 = trBase.v[1], v51 = trBase.v[1], (LODWORD(trBase.v[1]) & 0x7F800000) == 2139095040) || (v10 = trBase.v[2], v51 = trBase.v[2], (LODWORD(trBase.v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 368, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] )", v51) )
      __debugbreak();
    v8 = trBase.v[0];
    v9 = trBase.v[1];
    v10 = trBase.v[2];
  }
  if ( (LODWORD(tr->trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(tr->trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(tr->trDelta.v[2]) & 0x7F800000) == 2139095040 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 369, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] )") )
      __debugbreak();
    v8 = trBase.v[0];
    v9 = trBase.v[1];
    v10 = trBase.v[2];
  }
  switch ( tr->trType )
  {
    case TR_STATIONARY:
    case TR_INTERPOLATE:
    case TR_PHYSICS_CLIENT_AUTH:
    case TR_PHYSICS_SERVER_AUTH:
    case TR_LINKED:
    case TR_RAGDOLL_INTERPOLATE:
    case TR_RAGDOLL_INTERPOLATE_PLAYER_IMMEDIATE:
      result->v[0] = v8;
      result->v[1] = v9;
      result->v[2] = v10;
      break;
    case TR_LINEAR:
    case TR_FIRST_RAGDOLL:
      v11 = (float)(atTime - tr->trTime) * 0.001;
      result->v[0] = (float)(v11 * tr->trDelta.v[0]) + v8;
      result->v[1] = (float)(v11 * tr->trDelta.v[1]) + v9;
      result->v[2] = (float)(v11 * tr->trDelta.v[2]) + v10;
      break;
    case TR_LINEAR_STOP:
    case TR_LINEAR_STOP_SECURE:
      if ( atTime > tr->trTime + tr->trDuration )
        atTime = tr->trTime + tr->trDuration;
      v13 = 0i64;
      *(float *)&v13 = (float)(atTime - tr->trTime) * 0.001;
      _XMM2 = v13;
      __asm { vmaxss  xmm3, xmm2, xmm1 }
      result->v[0] = (float)(*(float *)&_XMM3 * tr->trDelta.v[0]) + v8;
      result->v[1] = (float)(*(float *)&_XMM3 * tr->trDelta.v[1]) + v9;
      result->v[2] = (float)(*(float *)&_XMM3 * tr->trDelta.v[2]) + v10;
      break;
    case TR_SINE:
      v12 = sinf_0((float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(atTime - tr->trTime)).m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)tr->trDuration).m128_f32[0]) * 3.1415927) * 2.0);
      result->v[0] = (float)(v12 * tr->trDelta.v[0]) + v8;
      result->v[1] = (float)(v12 * tr->trDelta.v[1]) + v9;
      result->v[2] = (float)(v12 * tr->trDelta.v[2]) + v10;
      break;
    case TR_GRAVITY:
    case TR_RAGDOLL_GRAVITY:
    case TR_RAGDOLL_GRAVITY_PLAYER_IMMEDIATE:
      v16 = (float)(atTime - tr->trTime) * 0.001;
      Gravity = BG_GetGravity();
      goto LABEL_30;
    case TR_LOW_GRAVITY:
      v16 = (float)(atTime - tr->trTime) * 0.001;
      Gravity = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
LABEL_30:
      BgTrajectory::UpdateTrajectoryGravity(this, tr, *(float *)&Gravity, result, v16);
      break;
    case TR_ACCELERATE:
      trDuration = tr->trDuration;
      if ( trDuration )
      {
        trTime = tr->trTime;
        if ( atTime > (int)(trDuration + trTime) )
          atTime = trDuration + trTime;
        v20 = _mm_cvtepi32_ps((__m128i)(unsigned int)(atTime - trTime)).m128_f32[0] * 0.001;
        v21 = LODWORD(tr->trDelta.v[0]);
        v22 = v21;
        *(float *)&v22 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)(tr->trDelta.v[1] * tr->trDelta.v[1])) + (float)(tr->trDelta.v[2] * tr->trDelta.v[2]));
        _XMM3 = v22;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm2, xmm0
        }
        v26 = *(float *)&v21 * (float)(1.0 / *(float *)&_XMM1);
        result->v[0] = v26;
        v27 = (float)(1.0 / *(float *)&_XMM1) * tr->trDelta.v[1];
        result->v[1] = v27;
        v28 = (float)(1.0 / *(float *)&_XMM1) * tr->trDelta.v[2];
        *(float *)&v21 = (float)((float)((float)(499.99997 / _mm_cvtepi32_ps((__m128i)trDuration).m128_f32[0]) * *(float *)&v22) * v20) * v20;
        result->v[0] = (float)(v26 * *(float *)&v21) + v8;
        result->v[1] = (float)(v27 * *(float *)&v21) + v9;
        result->v[2] = (float)(v28 * *(float *)&v21) + v10;
      }
      else
      {
        result->v[0] = v8;
        result->v[1] = v9;
        result->v[2] = v10;
      }
      break;
    case TR_DECELERATE:
      v29 = tr->trDuration;
      if ( v29 )
      {
        v30 = tr->trTime;
        if ( atTime > (int)(v29 + v30) )
          atTime = v29 + v30;
        v31 = _mm_cvtepi32_ps((__m128i)(unsigned int)(atTime - v30)).m128_f32[0] * 0.001;
        v32 = LODWORD(tr->trDelta.v[0]);
        v33 = v32;
        *(float *)&v33 = fsqrt((float)((float)(*(float *)&v32 * *(float *)&v32) + (float)(tr->trDelta.v[1] * tr->trDelta.v[1])) + (float)(tr->trDelta.v[2] * tr->trDelta.v[2]));
        _XMM3 = v33;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm2, xmm0
        }
        v37 = *(float *)&v32 * (float)(1.0 / *(float *)&_XMM1);
        result->v[0] = v37;
        v38 = (float)(1.0 / *(float *)&_XMM1) * tr->trDelta.v[1];
        result->v[1] = v38;
        v39 = (float)(1.0 / *(float *)&_XMM1) * tr->trDelta.v[2];
        result->v[2] = v39;
        v40 = (float)(v31 * tr->trDelta.v[1]) + v9;
        v41 = (float)(v31 * tr->trDelta.v[2]) + v10;
        *(float *)&v32 = (float)((float)((float)(-499.99997 / _mm_cvtepi32_ps((__m128i)v29).m128_f32[0]) * *(float *)&v33) * v31) * v31;
        result->v[0] = (float)(*(float *)&v32 * v37) + (float)((float)(v31 * tr->trDelta.v[0]) + v8);
        result->v[1] = (float)(*(float *)&v32 * v38) + v40;
        result->v[2] = (float)(*(float *)&v32 * v39) + v41;
      }
      else
      {
        result->v[0] = v8;
        result->v[1] = v9;
        result->v[2] = v10;
      }
      break;
    case TR_SLERP:
      AnglesToQuat(&trBase, &quat);
      PackedQuatToUnitQuat(&tr->trDelta, &outQuat);
      to.v[0] = (float)((float)((float)(quat.v[0] * outQuat.v[3]) + (float)(outQuat.v[0] * quat.v[3])) + (float)(outQuat.v[1] * quat.v[2])) - (float)(outQuat.v[2] * quat.v[1]);
      to.v[1] = (float)((float)((float)(quat.v[1] * outQuat.v[3]) - (float)(quat.v[2] * outQuat.v[0])) + (float)(outQuat.v[1] * quat.v[3])) + (float)(outQuat.v[2] * quat.v[0]);
      to.v[2] = (float)((float)((float)(quat.v[2] * outQuat.v[3]) + (float)(quat.v[1] * outQuat.v[0])) - (float)(outQuat.v[1] * quat.v[0])) + (float)(outQuat.v[2] * quat.v[3]);
      to.v[3] = (float)((float)((float)(outQuat.v[3] * quat.v[3]) - (float)(quat.v[0] * outQuat.v[0])) - (float)(quat.v[1] * outQuat.v[1])) - (float)(outQuat.v[2] * quat.v[2]);
      QuatSlerp(&quat, &to, _mm_cvtepi32_ps((__m128i)(unsigned int)(atTime - tr->trTime)).m128_f32[0] * 0.02, &resulta);
      UnitQuatToAngles(&resulta, result);
      break;
    case TR_TRACK_ANGLE:
      if ( this->GetTargetPos(this, (vec3_t *)&outQuat) )
      {
        if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 256, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
          __debugbreak();
        Trajectory_GetTrBase(&this->m_es->pos, (vec3_t *)&to);
        v42 = LODWORD(outQuat.v[1]);
        *(float *)&v42 = fsqrt((float)((float)((float)(outQuat.v[1] - to.v[1]) * (float)(outQuat.v[1] - to.v[1])) + (float)((float)(outQuat.v[0] - to.v[0]) * (float)(outQuat.v[0] - to.v[0]))) + (float)((float)(outQuat.v[2] - to.v[2]) * (float)(outQuat.v[2] - to.v[2])));
        _XMM1 = v42;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm1, xmm1, xmm2, xmm0
        }
        quat.v[0] = (float)(outQuat.v[0] - to.v[0]) * (float)(1.0 / *(float *)&_XMM1);
        quat.v[1] = (float)(outQuat.v[1] - to.v[1]) * (float)(1.0 / *(float *)&_XMM1);
        quat.v[2] = (float)(outQuat.v[2] - to.v[2]) * (float)(1.0 / *(float *)&_XMM1);
        vectoangles((const vec3_t *)&quat, result);
        memset(&to, 0, 0xCui64);
      }
      else
      {
        Trajectory_GetTrBase(tr, result);
      }
      break;
    case TR_ANGLE_ALONG_VELOCITY:
      if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 280, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
        __debugbreak();
      BgTrajectory::EvaluateTrajectoryDeltaInternal(this, &this->m_es->pos, atTime, (vec3_t *)&to);
      v46 = LODWORD(to.v[0]);
      *(float *)&v46 = fsqrt((float)((float)(*(float *)&v46 * *(float *)&v46) + (float)(to.v[1] * to.v[1])) + (float)(to.v[2] * to.v[2]));
      _XMM3 = v46;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm2, xmm0
      }
      to.v[0] = to.v[0] * (float)(1.0 / *(float *)&_XMM1);
      to.v[1] = to.v[1] * (float)(1.0 / *(float *)&_XMM1);
      to.v[2] = to.v[2] * (float)(1.0 / *(float *)&_XMM1);
      if ( fsqrt((float)((float)(to.v[1] * to.v[1]) + (float)(to.v[0] * to.v[0])) + (float)(to.v[2] * to.v[2])) < 0.001 )
      {
        Trajectory_GetTrBase(tr, (vec3_t *)&quat);
        AngleVectors((const vec3_t *)&quat, (vec3_t *)&to, NULL, NULL);
        memset(&quat, 0, 0xCui64);
      }
      vectoangles((const vec3_t *)&to, result);
      break;
    default:
      if ( (unsigned int)(tr->trType - 14) > 5 )
      {
        LODWORD(v50) = tr->trType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 494, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BG_EvaluateTrajectory: unknown trType: %i", v50) )
          __debugbreak();
        *result = trBase;
      }
      else
      {
        BgTrajectory::UpdateTrackedTrajectory(this, tr, result, (float)(atTime - tr->trTime) * 0.001);
      }
      break;
  }
  if ( ((LODWORD(tr->trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(tr->trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(tr->trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 499, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] )") )
    __debugbreak();
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
BgTrajectory::GetAbsoluteAnimMovement
==============
*/
void BgTrajectory::GetAbsoluteAnimMovement(BgTrajectory *this, const LerpEntityState *tr, const DObj *obj, int atTime, vec3_t *outOrigin, vec3_t *outAngles)
{
  const XAnimTree *Tree; 
  const XAnimTree *v11; 
  float trDuration; 
  float v13; 
  BOOL v14; 
  const XAnim_s *Anims; 
  double v16; 
  const XAnim_s *v17; 
  trajectory_t_secure *p_pos; 
  __int64 v19; 
  vec3_t trans; 
  vec4_t rot; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  if ( !tr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 647, ASSERT_TYPE_ASSERT, "(tr)", (const char *)&queryFormat, "tr") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 648, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
    __debugbreak();
  if ( !obj )
    goto LABEL_13;
  if ( (this->m_flags & 2) != 0 )
    goto LABEL_13;
  Tree = DObjGetTree(obj);
  v11 = Tree;
  if ( !Tree )
    goto LABEL_13;
  if ( !XAnimIsSimpleTree(Tree) )
  {
    LODWORD(v19) = obj->entnum - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 670, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Non simple tree used for entity %d, pos trajectory type %d, ang trajectory type %d, quietly and safely handling for ship.\n", v19, tr->pos.trType, tr->apos.trType) )
      __debugbreak();
LABEL_13:
    Trajectory_GetTrBase(&tr->pos, outOrigin);
LABEL_14:
    *outAngles = tr->apos.trBase;
    return;
  }
  trDuration = (float)tr->pos.trDuration;
  if ( trDuration == 0.0 )
    v13 = 0.0;
  else
    v13 = (float)(atTime - tr->pos.trTime) / trDuration;
  v14 = XAnimIsSimpleBlendTree(v11) != 0;
  Anims = XAnimGetAnims(v11);
  if ( XAnimIsLooped(Anims, v14 + 1) )
    v13 = fmodf_0(v13, 1.0);
  v16 = I_fclamp(v13, 0.0, 0.99900001);
  v17 = XAnimGetAnims(v11);
  XAnimGetAbsDelta(v17, v14 + 1, &rot, &trans, *(float *)&v16);
  AnglesToAxis(&tr->apos.trBase, (tmat33_t<vec3_t> *)&axis);
  p_pos = &tr->pos;
  if ( (float)((float)((float)(trans.v[0] * trans.v[0]) + (float)(trans.v[1] * trans.v[1])) + (float)(trans.v[2] * trans.v[2])) == 0.0 )
  {
    Trajectory_GetTrBase(p_pos, outOrigin);
  }
  else
  {
    Trajectory_GetTrBase(p_pos, &axis.m[3]);
    MatrixTransformVector43(&trans, &axis, outOrigin);
  }
  if ( (float)((float)((float)(rot.v[0] * rot.v[0]) + (float)(rot.v[1] * rot.v[1])) + (float)(rot.v[2] * rot.v[2])) == 0.0 && rot.v[3] == 1.0 )
    goto LABEL_14;
  QuatToAxis(&rot, &in1);
  MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&axis, &out);
  AxisToAngles(&out, outAngles);
}

/*
==============
BgTrajectory::GetPhysicsGravityDir
==============
*/
void BgTrajectory::GetPhysicsGravityDir(BgTrajectory *this, vec3_t *outGravityDir)
{
  Physics_WorldId v3; 
  float v4; 
  float v5; 
  hkVector4f v6; 
  float v7; 
  __m128 v8; 
  __int64 v12; 

  v3 = this->GetPhysicsWorld(this);
  if ( v3 == PHYSICS_WORLD_ID_INVALID )
  {
    v4 = FLOAT_N1_0;
    outGravityDir->v[0] = 0.0;
    v5 = 0.0;
  }
  else
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v3 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v3) )
        __debugbreak();
      LODWORD(v12) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v12) )
        __debugbreak();
    }
    v6.m_quad = (__m128)HavokPhysics_GetConstWorld(v3)->world->m_gravity;
    v7 = v6.m_quad.m128_f32[0] * 32.0;
    v8 = _mm_shuffle_ps(v6.m_quad, v6.m_quad, 85);
    v5 = v8.m128_f32[0] * 32.0;
    v4 = _mm_shuffle_ps(v6.m_quad, v6.m_quad, 170).m128_f32[0] * 32.0;
    v8.m128_f32[0] = (float)((float)(v5 * v5) + (float)(v7 * v7)) + (float)(v4 * v4);
    outGravityDir->v[0] = v6.m_quad.m128_f32[0] * 32.0;
    outGravityDir->v[1] = v5;
    if ( v8.m128_f32[0] >= 0.001 )
    {
      v8.m128_f32[0] = fsqrt(v8.m128_f32[0]);
      _XMM2 = v8;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      outGravityDir->v[0] = v7 * (float)(1.0 / *(float *)&_XMM0);
      v4 = v4 * (float)(1.0 / *(float *)&_XMM0);
      v5 = v5 * (float)(1.0 / *(float *)&_XMM0);
    }
  }
  outGravityDir->v[1] = v5;
  outGravityDir->v[2] = v4;
}

/*
==============
BgTrajectory::IsTrackingTrajectory
==============
*/
bool BgTrajectory::IsTrackingTrajectory(const trajectory_t_secure *tr)
{
  return (unsigned int)(tr->trType - 14) <= 5;
}

/*
==============
BgTrajectory::IsTrackingTrajectoryType
==============
*/
bool BgTrajectory::IsTrackingTrajectoryType(const trType_t *type)
{
  return (unsigned int)(*type - 14) <= 5;
}

/*
==============
BgTrajectory::LegacyEvaluateTrajectory
==============
*/
void BgTrajectory::LegacyEvaluateTrajectory(const trajectory_t_secure *tr, int atTime, vec3_t *result)
{
  BgTrajectory v6; 

  if ( tr->trType == TR_ANIMATED_MOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 110, ASSERT_TYPE_ASSERT, "(tr->trType != TR_ANIMATED_MOVER)", (const char *)&queryFormat, "tr->trType != TR_ANIMATED_MOVER") )
    __debugbreak();
  if ( (unsigned int)(tr->trType - 14) <= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 111, ASSERT_TYPE_ASSERT, "(!IsTrackingTrajectory( tr ))", (const char *)&queryFormat, "!IsTrackingTrajectory( tr )") )
    __debugbreak();
  if ( (unsigned int)(tr->trType - 20) <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 112, ASSERT_TYPE_ASSERT, "(tr->trType != TR_TRACK_ANGLE && tr->trType != TR_ANGLE_ALONG_VELOCITY)", (const char *)&queryFormat, "tr->trType != TR_TRACK_ANGLE && tr->trType != TR_ANGLE_ALONG_VELOCITY") )
    __debugbreak();
  v6.m_flags = 0;
  v6.m_es = NULL;
  v6.__vftable = (BgTrajectory_vtbl *)BgTrajectory::LegacyEvaluateTrajectory_::_2_::BgTrajectoryLegacySupport::_vftable_;
  BgTrajectory::EvaluateTrajectoryInternal(&v6, tr, atTime, result);
}

/*
==============
BgTrajectory::SetFlags
==============
*/
void BgTrajectory::SetFlags(BgTrajectory *this, int flags)
{
  this->m_flags |= flags;
}

/*
==============
BgTrajectory::UpdateTrackedTrajectory
==============
*/

void __fastcall BgTrajectory::UpdateTrackedTrajectory(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, double deltaTime)
{
  float v4; 
  vec3_t *p_trDelta; 
  __int128 v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  double Float_Internal_DebugName; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  __int64 trType; 
  float v30; 
  double v31; 
  float v32; 
  float v33; 
  float v34; 
  __int64 v35; 
  int v36[2]; 
  float v37; 
  vec3_t trBase; 
  __int64 v39; 
  float v40; 
  float v41; 
  float v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 

  v39 = -2i64;
  v4 = *(float *)&deltaTime;
  if ( !this->GetTargetPos(this, (vec3_t *)&v40) || *(float *)&deltaTime <= 0.0 || (p_trDelta = &tr->trDelta, VecNCompareCustomEpsilon(tr->trDelta.v, vec3_origin.v, 0.001, 3)) )
  {
    Trajectory_GetTrBase(tr, &trBase);
    result->v[0] = (float)(*(float *)&deltaTime * tr->trDelta.v[0]) + trBase.v[0];
    result->v[1] = (float)(*(float *)&deltaTime * tr->trDelta.v[1]) + trBase.v[1];
    result->v[2] = (float)(*(float *)&deltaTime * tr->trDelta.v[2]) + trBase.v[2];
  }
  else
  {
    if ( VecNCompareCustomEpsilon(tr->trDelta.v, vec3_origin.v, 0.001, 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 168, ASSERT_TYPE_ASSERT, "(!Vec3CompareEpsilon( tr->trDelta, vec3_origin ))", (const char *)&queryFormat, "!Vec3CompareEpsilon( tr->trDelta, vec3_origin )") )
      __debugbreak();
    v9 = *(_OWORD *)&deltaTime;
    *(float *)&v9 = *(float *)&deltaTime * p_trDelta->v[0];
    v8 = v9;
    v10 = *(float *)&deltaTime * tr->trDelta.v[1];
    *(float *)&v9 = *(float *)&deltaTime * tr->trDelta.v[2];
    v11 = *(float *)&v9;
    Trajectory_GetTrBase(tr, &trBase);
    result->v[0] = *(float *)&v8 + trBase.v[0];
    result->v[1] = v10 + trBase.v[1];
    result->v[2] = *(float *)&v9 + trBase.v[2];
    v12 = v8;
    *(float *)&v12 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v10 * v10)) + (float)(v11 * v11));
    _XMM1 = v12;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm1, xmm1, xmm11, xmm0
    }
    v37 = *(float *)&_XMM1;
    v16 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v8;
    v17 = (float)(1.0 / *(float *)&_XMM1) * v10;
    v18 = (float)(1.0 / *(float *)&_XMM1) * v11;
    v19 = (float)((float)(v17 * (float)(v41 - trBase.v[1])) + (float)(v16 * (float)(v40 - trBase.v[0]))) + (float)(v18 * (float)(v42 - trBase.v[2]));
    if ( v19 >= 0.0099999998 )
    {
      v20 = (float)(v40 - trBase.v[0]) - (float)(v16 * v19);
      v21 = (float)(v41 - trBase.v[1]) - (float)(v17 * v19);
      v22 = (float)(v42 - trBase.v[2]) - (float)(v18 * v19);
      v23 = FLOAT_1_0;
      if ( tr->trType != TR_TRACK_FULL_LOCK )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_trackTrajectory1, "trackTrajectory1");
        v43 = SLODWORD(Float_Internal_DebugName);
        v25 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_trackTrajectory2, "trackTrajectory2");
        v44 = SLODWORD(v25);
        v26 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_trackTrajectory3, "trackTrajectory3");
        v45 = SLODWORD(v26);
        v27 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_trackTrajectory4, "trackTrajectory4");
        v46 = SLODWORD(v27);
        v28 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_trackTrajectory5, "trackTrajectory5");
        v47 = SLODWORD(v28);
        trType = tr->trType;
        if ( (unsigned int)(trType - 14) >= 5 )
        {
          LODWORD(v35) = trType - 14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 218, ASSERT_TYPE_ASSERT, "(unsigned)( trackType ) < (unsigned)( 5 )", "trackType doesn't index TR_NUM_LOCK_STRENGTHS\n\t%i not in [0, %i)", v35, 5) )
            __debugbreak();
        }
        v23 = *(float *)&v36[trType];
      }
      v30 = fsqrt((float)((float)(p_trDelta->v[0] * p_trDelta->v[0]) + (float)(p_trDelta->v[1] * p_trDelta->v[1])) + (float)(p_trDelta->v[2] * p_trDelta->v[2]));
      if ( v30 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 224, ASSERT_TYPE_ASSERT, "(speed)", (const char *)&queryFormat, "speed") )
        __debugbreak();
      v31 = I_fclamp((float)((float)(v30 * v4) / v19) * (float)((float)(v30 * v4) / v19), 0.0, 1.0);
      v32 = (float)(v20 * (float)(*(float *)&v31 * v23)) + result->v[0];
      result->v[0] = v32;
      v33 = (float)(v21 * (float)(*(float *)&v31 * v23)) + result->v[1];
      result->v[1] = v33;
      v34 = (float)(v22 * (float)(*(float *)&v31 * v23)) + result->v[2];
      result->v[2] = v34;
      v37 = v32;
      if ( (LODWORD(v32) & 0x7F800000) == 2139095040 || (v37 = v33, (LODWORD(v33) & 0x7F800000) == 2139095040) || (v37 = v34, (LODWORD(v34) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 239, ASSERT_TYPE_SANITY, "( !IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] )") )
          __debugbreak();
      }
    }
  }
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
BgTrajectory::UpdateTrackedTrajectoryAngles
==============
*/
void BgTrajectory::UpdateTrackedTrajectoryAngles(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, float deltaTime)
{
  __int128 v7; 
  vec3_t trBase; 
  __int64 v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t vec; 

  v12 = -2i64;
  if ( this->GetTargetPos(this, (vec3_t *)&v13) )
  {
    if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 256, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
      __debugbreak();
    Trajectory_GetTrBase(&this->m_es->pos, &trBase);
    v7 = LODWORD(v14);
    *(float *)&v7 = fsqrt((float)((float)((float)(v14 - trBase.v[1]) * (float)(v14 - trBase.v[1])) + (float)((float)(v13 - trBase.v[0]) * (float)(v13 - trBase.v[0]))) + (float)((float)(v15 - trBase.v[2]) * (float)(v15 - trBase.v[2])));
    _XMM1 = v7;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm1, xmm1, xmm2, xmm0
    }
    vec.v[0] = (float)(v13 - trBase.v[0]) * (float)(1.0 / *(float *)&_XMM1);
    vec.v[1] = (float)(v14 - trBase.v[1]) * (float)(1.0 / *(float *)&_XMM1);
    vec.v[2] = (float)(v15 - trBase.v[2]) * (float)(1.0 / *(float *)&_XMM1);
    vectoangles(&vec, result);
    memset(&trBase, 0, sizeof(trBase));
  }
  else
  {
    Trajectory_GetTrBase(tr, result);
  }
}

/*
==============
BgTrajectory::UpdateTrackedTrajectoryDelta
==============
*/
void BgTrajectory::UpdateTrackedTrajectoryDelta(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, float deltaTime)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  vec3_t trBase; 
  __int64 v12; 
  vec3_t resulta; 

  v12 = -2i64;
  if ( deltaTime >= 0.001 )
  {
    BgTrajectory::UpdateTrackedTrajectory(this, tr, &resulta, deltaTime);
    Trajectory_GetTrBase(tr, &trBase);
    v6 = resulta.v[1] - trBase.v[1];
    v7 = resulta.v[2] - trBase.v[2];
    v8 = 1.0 / deltaTime;
    v9 = (float)(1.0 / deltaTime) * (float)(resulta.v[0] - trBase.v[0]);
    result->v[0] = v9;
    result->v[1] = (float)(1.0 / deltaTime) * v6;
    result->v[2] = (float)(1.0 / deltaTime) * v7;
    v10 = v9;
    if ( (LODWORD(v9) & 0x7F800000) == 2139095040 || (v10 = v8 * v6, (COERCE_UNSIGNED_INT(v8 * v6) & 0x7F800000) == 2139095040) || (v10 = v8 * v7, (COERCE_UNSIGNED_INT(v8 * v7) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 145, ASSERT_TYPE_SANITY, "( !IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] )", v10) )
        __debugbreak();
    }
    memset(&trBase, 0, sizeof(trBase));
  }
  else
  {
    *(_QWORD *)result->v = 0i64;
    result->v[2] = 0.0;
  }
}

/*
==============
BgTrajectory::UpdateTrackedTrajectoryDeltaAngles
==============
*/
void BgTrajectory::UpdateTrackedTrajectoryDeltaAngles(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, float deltaTime)
{
  *(_QWORD *)result->v = 0i64;
  result->v[2] = 0.0;
}

/*
==============
BgTrajectory::UpdateTrajectoryAnglesAlongVelocity
==============
*/
void BgTrajectory::UpdateTrajectoryAnglesAlongVelocity(BgTrajectory *this, const trajectory_t_secure *tr, int atTime, vec3_t *result)
{
  __int128 v8; 
  vec3_t trBase; 
  __int64 v13; 
  vec3_t resulta; 

  v13 = -2i64;
  if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 280, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
    __debugbreak();
  BgTrajectory::EvaluateTrajectoryDeltaInternal(this, &this->m_es->pos, atTime, &resulta);
  v8 = LODWORD(resulta.v[0]);
  *(float *)&v8 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(resulta.v[1] * resulta.v[1])) + (float)(resulta.v[2] * resulta.v[2]));
  _XMM3 = v8;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm2, xmm0
  }
  resulta.v[0] = resulta.v[0] * (float)(1.0 / *(float *)&_XMM1);
  resulta.v[1] = resulta.v[1] * (float)(1.0 / *(float *)&_XMM1);
  resulta.v[2] = resulta.v[2] * (float)(1.0 / *(float *)&_XMM1);
  if ( fsqrt((float)((float)(resulta.v[1] * resulta.v[1]) + (float)(resulta.v[0] * resulta.v[0])) + (float)(resulta.v[2] * resulta.v[2])) < 0.001 )
  {
    Trajectory_GetTrBase(tr, &trBase);
    AngleVectors(&trBase, &resulta, NULL, NULL);
    memset(&trBase, 0, sizeof(trBase));
  }
  vectoangles(&resulta, result);
}

/*
==============
BgTrajectory::UpdateTrajectoryDeltaAnglesAlongVelocity
==============
*/
void BgTrajectory::UpdateTrajectoryDeltaAnglesAlongVelocity(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, float deltaTime)
{
  *(_QWORD *)result->v = 0i64;
  result->v[2] = 0.0;
}

/*
==============
BgTrajectory::UpdateTrajectoryGravity
==============
*/
void BgTrajectory::UpdateTrajectoryGravity(BgTrajectory *this, const trajectory_t_secure *tr, float scale, vec3_t *result, float deltaTime)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t trBase; 
  __int64 v15; 
  vec3_t outGravityDir; 

  v15 = -2i64;
  BgTrajectory::GetPhysicsGravityDir(this, &outGravityDir);
  v7 = (float)((float)(scale * 0.5) * deltaTime) * deltaTime;
  v8 = v7 * outGravityDir.v[0];
  v9 = v7 * outGravityDir.v[1];
  v10 = v7 * outGravityDir.v[2];
  Trajectory_GetTrBase(tr, &trBase);
  v11 = (float)(deltaTime * tr->trDelta.v[0]) + trBase.v[0];
  result->v[0] = v11;
  v12 = (float)(deltaTime * tr->trDelta.v[1]) + trBase.v[1];
  result->v[1] = v12;
  v13 = (float)(deltaTime * tr->trDelta.v[2]) + trBase.v[2];
  result->v[0] = v11 + v8;
  result->v[1] = v12 + v9;
  result->v[2] = v13 + v10;
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
BgTrajectory::UpdateTrajectoryGravityDelta
==============
*/
void BgTrajectory::UpdateTrajectoryGravityDelta(BgTrajectory *this, const trajectory_t_secure *tr, float scale, vec3_t *result, float deltaTime)
{
  float v7; 
  float v8; 
  vec3_t outGravityDir; 

  BgTrajectory::GetPhysicsGravityDir(this, &outGravityDir);
  v7 = (float)(scale * deltaTime) * outGravityDir.v[1];
  result->v[0] = (float)((float)(scale * deltaTime) * outGravityDir.v[0]) + tr->trDelta.v[0];
  v8 = (float)(scale * deltaTime) * outGravityDir.v[2];
  result->v[1] = v7 + tr->trDelta.v[1];
  result->v[2] = v8 + tr->trDelta.v[2];
}

