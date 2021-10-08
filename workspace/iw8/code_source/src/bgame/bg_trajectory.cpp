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
  vec3_t *outAngles; 
  __int64 v23; 
  vec3_t result; 
  vec3_t v25; 

  _RDI = outAng;
  _RBP = outPos;
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
        LODWORD(v23) = 2;
        LODWORD(outAngles) = m_es;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outAngles, v23) )
          __debugbreak();
      }
      v12 = 2533 * m_es + IsClient_low;
      if ( v12 >= 0x13CA )
      {
        LODWORD(v23) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v23) )
          __debugbreak();
      }
      v13 = clientObjMap[v12];
      if ( v13 )
      {
        if ( v13 >= (unsigned int)s_objCount )
        {
          LODWORD(v23) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v23) )
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
      BgTrajectory::GetAbsoluteAnimMovement(this, v15, DObj, atTime, &result, &v25);
    }
    else
    {
      BgTrajectory::EvaluateTrajectoryInternal(this, &v15->pos, atTime, &result);
      BgTrajectory::EvaluateTrajectoryInternal(this, &v15->apos, atTime, &v25);
    }
    if ( _RBP )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0B8h+result]
        vmovss  xmm1, dword ptr [rsp+0B8h+result+4]
        vmovss  dword ptr [rbp+0], xmm0
        vmovss  xmm0, dword ptr [rsp+0B8h+result+8]
        vmovss  dword ptr [rbp+8], xmm0
        vmovss  dword ptr [rbp+4], xmm1
      }
    }
    if ( _RDI )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0B8h+var_68]
        vmovss  xmm1, dword ptr [rsp+0B8h+var_68+4]
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm0, dword ptr [rsp+0B8h+var_68+8]
        vmovss  dword ptr [rdi+8], xmm0
        vmovss  dword ptr [rdi+4], xmm1
      }
    }
  }
  else
  {
    if ( _RBP )
    {
      if ( trType == TR_SLERP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 52, ASSERT_TYPE_ASSERT, "(m_es->pos.trType != TR_SLERP)", "%s\n\tTR_SLERP trajectories cannot be used for position.", "m_es->pos.trType != TR_SLERP") )
        __debugbreak();
      BgTrajectory::EvaluateTrajectoryInternal(this, &this->m_es->pos, atTime, _RBP);
    }
    if ( _RDI )
      BgTrajectory::EvaluateTrajectoryInternal(this, &this->m_es->apos, atTime, _RDI);
  }
}

/*
==============
BgTrajectory::EvaluateTrajectoryDeltaInternal
==============
*/
void BgTrajectory::EvaluateTrajectoryDeltaInternal(BgTrajectory *this, const trajectory_t_secure *tr, int atTime, vec3_t *result)
{
  float fmt; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  vec3_t trBase; 
  __int64 v74; 
  vec4_t resulta; 
  vec4_t outQuat; 

  v74 = -2i64;
  __asm { vmovaps [rsp+0C8h+var_48], xmm6 }
  _RDI = result;
  _RBX = tr;
  Trajectory_GetTrBase(tr, &trBase);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+trBase]
    vmovss  [rsp+0C8h+var_98], xmm0
  }
  if ( (v61 & 0x7F800000) == 2139095040 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+trBase+4]
    vmovss  [rsp+0C8h+var_98], xmm0
  }
  if ( (v62 & 0x7F800000) == 2139095040 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+trBase+8]
    vmovss  [rsp+0C8h+var_98], xmm0
  }
  if ( (v63 & 0x7F800000) == 2139095040 )
  {
LABEL_44:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 512, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rsp+0C8h+var_98], xmm0
  }
  if ( (v64 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+0C8h+var_98], xmm0
  }
  if ( (v65 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  [rsp+0C8h+var_98], xmm0
  }
  if ( (v66 & 0x7F800000) == 2139095040 )
  {
LABEL_45:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 513, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] )") )
      __debugbreak();
  }
  switch ( _RBX->trType )
  {
    case TR_STATIONARY:
    case TR_INTERPOLATE:
    case TR_LINKED:
    case TR_TRACK_ANGLE:
    case TR_ANGLE_ALONG_VELOCITY:
    case TR_RAGDOLL_INTERPOLATE:
    case TR_RAGDOLL_INTERPOLATE_PLAYER_IMMEDIATE:
      *(_QWORD *)_RDI->v = 0i64;
      _RDI->v[2] = 0.0;
      goto LABEL_36;
    case TR_LINEAR:
    case TR_PHYSICS_SERVER_AUTH:
    case TR_FIRST_RAGDOLL:
      goto $LN20_7;
    case TR_LINEAR_STOP:
    case TR_LINEAR_STOP_SECURE:
      if ( atTime > _RBX->trTime + _RBX->trDuration )
        goto LABEL_17;
$LN20_7:
      _RDI->v[0] = _RBX->trDelta.v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1Ch]
        vmovss  dword ptr [rdi+4], xmm0
        vmovss  xmm1, dword ptr [rbx+20h]
        vmovss  dword ptr [rdi+8], xmm1
      }
      goto LABEL_36;
    case TR_SINE:
      _ESI = atTime - _RBX->trTime;
      __asm
      {
        vmovd   xmm1, esi
        vcvtdq2ps xmm1, xmm1
        vmovd   xmm0, dword ptr [rbx+8]
        vcvtdq2ps xmm0, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, cs:__real@40490fdb
        vmulss  xmm0, xmm2, cs:__real@40000000; X
      }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm { vmulss  xmm2, xmm0, cs:__real@3f000000 }
      goto LABEL_15;
    case TR_GRAVITY:
    case TR_RAGDOLL_GRAVITY:
    case TR_RAGDOLL_GRAVITY_PLAYER_IMMEDIATE:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmulss  xmm6, xmm0, cs:__real@3a83126f
      }
      *(double *)&_XMM0 = BG_GetGravity();
      goto LABEL_19;
    case TR_LOW_GRAVITY:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmulss  xmm6, xmm0, cs:__real@3a83126f
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
LABEL_19:
      __asm
      {
        vmovaps xmm2, xmm0; scale
        vmovss  dword ptr [rsp+0C8h+fmt], xmm6
      }
      BgTrajectory::UpdateTrajectoryGravityDelta(this, _RBX, *(float *)&_XMM2, _RDI, fmt);
      goto LABEL_36;
    case TR_ACCELERATE:
      if ( atTime > _RBX->trTime + _RBX->trDuration )
        goto LABEL_17;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm2, xmm1, cs:__real@358637be
      }
      goto LABEL_15;
    case TR_DECELERATE:
      if ( atTime > _RBX->trTime + _RBX->trDuration )
      {
LABEL_17:
        *(_QWORD *)_RDI->v = 0i64;
        _RDI->v[2] = 0.0;
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vmulss  xmm2, xmm0, cs:__real@3a83126f
        }
LABEL_15:
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [rbx+18h]
          vmovss  dword ptr [rdi], xmm0
          vmulss  xmm1, xmm2, dword ptr [rbx+1Ch]
          vmovss  dword ptr [rdi+4], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+20h]
          vmovss  dword ptr [rdi+8], xmm0
        }
LABEL_36:
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+18h]
          vmovss  [rsp+0C8h+var_98], xmm0
        }
        if ( (v70 & 0x7F800000) == 2139095040 )
          goto LABEL_46;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+1Ch]
          vmovss  [rsp+0C8h+var_98], xmm0
        }
        if ( (v71 & 0x7F800000) == 2139095040 )
          goto LABEL_46;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+20h]
          vmovss  [rsp+0C8h+var_98], xmm0
        }
        if ( (v72 & 0x7F800000) == 2139095040 )
        {
LABEL_46:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 614, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] )") )
            __debugbreak();
        }
      }
      memset(&trBase, 0, sizeof(trBase));
      __asm { vmovaps xmm6, [rsp+0C8h+var_48] }
      return;
    case TR_SLERP:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmulss  xmm6, xmm0, cs:__real@3ca3d70a
      }
      PackedQuatToUnitQuat(&_RBX->trDelta, &outQuat);
      __asm { vmovaps xmm2, xmm6; frac }
      QuatSlerp(&quat_identity, &outQuat, *(float *)&_XMM2, &resulta);
      UnitQuatToAngles(&resulta, _RDI);
      goto LABEL_36;
    default:
      if ( (unsigned int)(_RBX->trType - 14) > 5 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD2410, 747i64);
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vmulss  xmm6, xmm0, cs:__real@3a83126f
          vcomiss xmm6, cs:__real@3a83126f
        }
        if ( (unsigned int)atTime >= _RBX->trTime )
        {
          __asm { vmovaps xmm3, xmm6; deltaTime }
          BgTrajectory::UpdateTrackedTrajectory(this, _RBX, (vec3_t *)&outQuat, *(float *)&_XMM3);
          Trajectory_GetTrBase(_RBX, (vec3_t *)&resulta);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0C8h+outQuat]
            vsubss  xmm3, xmm0, dword ptr [rsp+0C8h+result]
            vmovss  xmm1, dword ptr [rsp+0C8h+outQuat+4]
            vsubss  xmm4, xmm1, dword ptr [rsp+0C8h+result+4]
            vmovss  xmm0, dword ptr [rsp+0C8h+outQuat+8]
            vsubss  xmm5, xmm0, dword ptr [rsp+0C8h+result+8]
            vmovss  xmm1, cs:__real@3f800000
            vdivss  xmm2, xmm1, xmm6
            vmulss  xmm0, xmm3, xmm2
            vmovss  dword ptr [rdi], xmm0
            vmulss  xmm1, xmm4, xmm2
            vmovss  dword ptr [rdi+4], xmm1
            vmulss  xmm3, xmm5, xmm2
            vmovss  dword ptr [rdi+8], xmm3
            vmovss  [rsp+0C8h+var_98], xmm0
          }
          if ( (v67 & 0x7F800000) == 2139095040 )
            goto LABEL_47;
          __asm { vmovss  [rsp+0C8h+var_98], xmm1 }
          if ( (v68 & 0x7F800000) == 2139095040 )
            goto LABEL_47;
          __asm { vmovss  [rsp+0C8h+var_98], xmm3 }
          if ( (v69 & 0x7F800000) == 2139095040 )
          {
LABEL_47:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 145, ASSERT_TYPE_SANITY, "( !IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] )") )
              __debugbreak();
          }
          memset(&resulta, 0, 0xCui64);
        }
        else
        {
          *(_QWORD *)_RDI->v = 0i64;
          _RDI->v[2] = 0.0;
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
  int trTime; 
  int v98; 
  char v219; 
  float fmt; 
  __int64 v240; 
  int v241; 
  int v242; 
  int v243; 
  int v244; 
  int v245; 
  int v246; 
  int v251; 
  int v252; 
  int v253; 
  vec3_t trBase; 
  __int64 v255; 
  vec4_t to; 
  vec4_t quat; 
  vec4_t outQuat; 
  vec4_t resulta; 
  char v260; 
  void *retaddr; 

  _RAX = &retaddr;
  v255 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
  }
  _RBX = result;
  _RSI = tr;
  if ( tr->trType >= NUM_TRTYPES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 361, ASSERT_TYPE_ASSERT, "( ( tr->trType < NUM_TRTYPES ) )", "( tr->trType ) = %i", tr->trType) )
    __debugbreak();
  if ( _RSI->trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 363, ASSERT_TYPE_ASSERT, "(!BgTrajectory::IsAnimatedTrajectory( tr ))", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( tr )") )
      __debugbreak();
  }
  Trajectory_GetTrBase(_RSI, &trBase);
  __asm
  {
    vmovss  xmm14, dword ptr [rsp+170h+trBase]
    vmovss  [rsp+170h+var_140], xmm14
  }
  if ( (v241 & 0x7F800000) == 2139095040 )
    goto LABEL_66;
  __asm
  {
    vmovss  xmm12, dword ptr [rsp+170h+trBase+4]
    vmovss  [rsp+170h+var_140], xmm12
  }
  if ( (v242 & 0x7F800000) == 2139095040 )
    goto LABEL_66;
  __asm
  {
    vmovss  xmm13, dword ptr [rsp+170h+trBase+8]
    vmovss  [rsp+170h+var_140], xmm13
  }
  if ( (v243 & 0x7F800000) == 2139095040 )
  {
LABEL_66:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 368, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm14, dword ptr [rsp+170h+trBase]
      vmovss  xmm12, dword ptr [rsp+170h+trBase+4]
      vmovss  xmm13, dword ptr [rsp+170h+trBase+8]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovss  [rsp+170h+var_140], xmm0
  }
  if ( (v244 & 0x7F800000) == 2139095040 )
    goto LABEL_67;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmovss  [rsp+170h+var_140], xmm0
  }
  if ( (v245 & 0x7F800000) == 2139095040 )
    goto LABEL_67;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+20h]
    vmovss  [rsp+170h+var_140], xmm0
  }
  if ( (v246 & 0x7F800000) == 2139095040 )
  {
LABEL_67:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 369, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm14, dword ptr [rsp+170h+trBase]
      vmovss  xmm12, dword ptr [rsp+170h+trBase+4]
      vmovss  xmm13, dword ptr [rsp+170h+trBase+8]
    }
  }
  switch ( _RSI->trType )
  {
    case TR_STATIONARY:
    case TR_INTERPOLATE:
    case TR_PHYSICS_CLIENT_AUTH:
    case TR_PHYSICS_SERVER_AUTH:
    case TR_LINKED:
    case TR_RAGDOLL_INTERPOLATE:
    case TR_RAGDOLL_INTERPOLATE_PLAYER_IMMEDIATE:
      __asm
      {
        vmovss  dword ptr [rbx], xmm14; jumptable 000000014031FB1A cases 0,1,11-13,26,27
        vmovss  dword ptr [rbx+4], xmm12
        vmovss  dword ptr [rbx+8], xmm13
      }
      break;
    case TR_LINEAR:
    case TR_FIRST_RAGDOLL:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vmulss  xmm2, xmm0, cs:__real@3a83126f
        vmulss  xmm0, xmm2, dword ptr [rsi+18h]
        vaddss  xmm1, xmm0, xmm14
        vmovss  dword ptr [rbx], xmm1
        vmulss  xmm0, xmm2, dword ptr [rsi+1Ch]
        vaddss  xmm1, xmm0, xmm12
        vmovss  dword ptr [rbx+4], xmm1
        vmulss  xmm0, xmm2, dword ptr [rsi+20h]
        vaddss  xmm1, xmm0, xmm13
        vmovss  dword ptr [rbx+8], xmm1
      }
      break;
    case TR_LINEAR_STOP:
    case TR_LINEAR_STOP_SECURE:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vmulss  xmm2, xmm0, cs:__real@3a83126f
        vxorps  xmm1, xmm1, xmm1
        vmaxss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm3, dword ptr [rsi+18h]
        vaddss  xmm1, xmm0, xmm14
        vmovss  dword ptr [rbx], xmm1
        vmulss  xmm0, xmm3, dword ptr [rsi+1Ch]
        vaddss  xmm1, xmm0, xmm12
        vmovss  dword ptr [rbx+4], xmm1
        vmulss  xmm0, xmm3, dword ptr [rsi+20h]
        vaddss  xmm1, xmm0, xmm13
        vmovss  dword ptr [rbx+8], xmm1
      }
      break;
    case TR_SINE:
      _EDI = atTime - _RSI->trTime;
      __asm
      {
        vmovd   xmm1, edi
        vcvtdq2ps xmm1, xmm1
        vmovd   xmm0, dword ptr [rsi+8]
        vcvtdq2ps xmm0, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, cs:__real@40490fdb
        vmulss  xmm0, xmm2, cs:__real@40000000; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rsi+18h]
        vaddss  xmm2, xmm1, xmm14
        vmovss  dword ptr [rbx], xmm2
        vmulss  xmm1, xmm0, dword ptr [rsi+1Ch]
        vaddss  xmm2, xmm1, xmm12
        vmovss  dword ptr [rbx+4], xmm2
        vmulss  xmm0, xmm0, dword ptr [rsi+20h]
        vaddss  xmm1, xmm0, xmm13
        vmovss  dword ptr [rbx+8], xmm1
      }
      break;
    case TR_GRAVITY:
    case TR_RAGDOLL_GRAVITY:
    case TR_RAGDOLL_GRAVITY_PLAYER_IMMEDIATE:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vmulss  xmm6, xmm0, cs:__real@3a83126f
      }
      *(double *)&_XMM0 = BG_GetGravity();
      goto LABEL_28;
    case TR_LOW_GRAVITY:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vmulss  xmm6, xmm0, cs:__real@3a83126f
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
LABEL_28:
      __asm
      {
        vmovaps xmm2, xmm0; scale
        vmovss  dword ptr [rsp+170h+fmt], xmm6
      }
      BgTrajectory::UpdateTrajectoryGravity(this, _RSI, *(float *)&_XMM2, _RBX, fmt);
      break;
    case TR_ACCELERATE:
      _EDX = _RSI->trDuration;
      if ( _EDX )
      {
        trTime = _RSI->trTime;
        if ( atTime > _EDX + trTime )
          atTime = _EDX + trTime;
        _EDI = atTime - trTime;
        __asm
        {
          vmovd   xmm0, edi
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm8, xmm0, cs:__real@3a83126f
          vmovss  xmm2, dword ptr [rsi+1Ch]
          vmovss  xmm4, dword ptr [rsi+18h]
          vmovss  xmm3, dword ptr [rsi+20h]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vmovss  xmm2, cs:__real@3f800000
          vblendvps xmm1, xmm3, xmm2, xmm0
          vmovss  [rsp+170h+var_140], xmm1
          vdivss  xmm0, xmm2, xmm1
          vmulss  xmm6, xmm4, xmm0
          vmovss  dword ptr [rbx], xmm6
          vmulss  xmm7, xmm0, dword ptr [rsi+1Ch]
          vmovss  dword ptr [rbx+4], xmm7
          vmulss  xmm5, xmm0, dword ptr [rsi+20h]
          vmovd   xmm1, edx
          vcvtdq2ps xmm1, xmm1
          vmovss  xmm0, cs:__real@43f9ffff
          vdivss  xmm1, xmm0, xmm1
          vmulss  xmm2, xmm1, xmm3
          vmulss  xmm3, xmm2, xmm8
          vmulss  xmm4, xmm3, xmm8
          vmulss  xmm0, xmm6, xmm4
          vaddss  xmm1, xmm0, xmm14
          vmovss  dword ptr [rbx], xmm1
          vmulss  xmm2, xmm7, xmm4
          vaddss  xmm0, xmm2, xmm12
          vmovss  dword ptr [rbx+4], xmm0
          vmulss  xmm1, xmm5, xmm4
          vaddss  xmm2, xmm1, xmm13
          vmovss  dword ptr [rbx+8], xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbx], xmm14
          vmovss  dword ptr [rbx+4], xmm12
          vmovss  dword ptr [rbx+8], xmm13
        }
      }
      break;
    case TR_DECELERATE:
      _EDX = _RSI->trDuration;
      if ( _EDX )
      {
        v98 = _RSI->trTime;
        if ( atTime > _EDX + v98 )
          atTime = _EDX + v98;
        _EDI = atTime - v98;
        __asm
        {
          vmovd   xmm0, edi
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm11, xmm0, cs:__real@3a83126f
          vmovss  xmm2, dword ptr [rsi+1Ch]
          vmovss  xmm4, dword ptr [rsi+18h]
          vmovss  xmm3, dword ptr [rsi+20h]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vmovss  xmm2, cs:__real@3f800000
          vblendvps xmm1, xmm3, xmm2, xmm0
          vmovss  [rsp+170h+var_140], xmm1
          vdivss  xmm0, xmm2, xmm1
          vmulss  xmm9, xmm4, xmm0
          vmovss  dword ptr [rbx], xmm9
          vmulss  xmm10, xmm0, dword ptr [rsi+1Ch]
          vmovss  dword ptr [rbx+4], xmm10
          vmulss  xmm8, xmm0, dword ptr [rsi+20h]
          vmovss  dword ptr [rbx+8], xmm8
          vmulss  xmm0, xmm11, dword ptr [rsi+18h]
          vaddss  xmm5, xmm0, xmm14
          vmulss  xmm1, xmm11, dword ptr [rsi+1Ch]
          vaddss  xmm6, xmm1, xmm12
          vmulss  xmm0, xmm11, dword ptr [rsi+20h]
          vaddss  xmm7, xmm0, xmm13
          vmovd   xmm2, edx
          vcvtdq2ps xmm2, xmm2
          vmovss  xmm1, cs:__real@c3f9ffff
          vdivss  xmm0, xmm1, xmm2
          vmulss  xmm2, xmm0, xmm3
          vmulss  xmm3, xmm2, xmm11
          vmulss  xmm4, xmm3, xmm11
          vmulss  xmm0, xmm4, xmm9
          vaddss  xmm1, xmm0, xmm5
          vmovss  dword ptr [rbx], xmm1
          vmulss  xmm2, xmm4, xmm10
          vaddss  xmm0, xmm2, xmm6
          vmovss  dword ptr [rbx+4], xmm0
          vmulss  xmm1, xmm4, xmm8
          vaddss  xmm2, xmm1, xmm7
          vmovss  dword ptr [rbx+8], xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbx], xmm14
          vmovss  dword ptr [rbx+4], xmm12
          vmovss  dword ptr [rbx+8], xmm13
        }
      }
      break;
    case TR_SLERP:
      AnglesToQuat(&trBase, &quat);
      PackedQuatToUnitQuat(&_RSI->trDelta, &outQuat);
      __asm
      {
        vmovss  xmm12, dword ptr [rsp+170h+quat]
        vmovss  xmm11, dword ptr [rsp+170h+outQuat+0Ch]
        vmulss  xmm1, xmm12, xmm11
        vmovss  xmm10, dword ptr [rsp+170h+outQuat]
        vmovss  xmm7, dword ptr [rsp+170h+quat+0Ch]
        vmulss  xmm0, xmm10, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm8, dword ptr [rsp+170h+outQuat+4]
        vmovss  xmm9, dword ptr [rsp+170h+quat+8]
        vmulss  xmm0, xmm8, xmm9
        vaddss  xmm1, xmm2, xmm0
        vmovss  xmm6, dword ptr [rsp+170h+outQuat+8]
        vmovss  xmm5, dword ptr [rsp+170h+quat+4]
        vmulss  xmm0, xmm6, xmm5
        vsubss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rsp+170h+to], xmm1
        vmulss  xmm2, xmm5, xmm11
        vmulss  xmm0, xmm9, xmm10
        vsubss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm8, xmm7
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm0, xmm6, xmm12
        vaddss  xmm2, xmm4, xmm0
        vmovss  dword ptr [rsp+170h+to+4], xmm2
        vmulss  xmm1, xmm9, xmm11
        vmulss  xmm0, xmm5, xmm10
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm12
        vsubss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm7
        vaddss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rsp+170h+to+8], xmm2
        vmulss  xmm1, xmm11, xmm7
        vmulss  xmm0, xmm12, xmm10
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm8
        vsubss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm9
        vsubss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rsp+170h+to+0Ch], xmm2
      }
      _EDI = atTime - _RSI->trTime;
      __asm
      {
        vmovd   xmm0, edi
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm2, xmm0, cs:__real@3ca3d70a; frac
      }
      QuatSlerp(&quat, &to, *(float *)&_XMM2, &resulta);
      UnitQuatToAngles(&resulta, _RBX);
      break;
    case TR_TRACK_ANGLE:
      if ( this->GetTargetPos(this, (vec3_t *)&outQuat) )
      {
        if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 256, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
          __debugbreak();
        Trajectory_GetTrBase(&this->m_es->pos, (vec3_t *)&to);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+170h+outQuat]
          vsubss  xmm4, xmm0, dword ptr [rsp+170h+to]
          vmovss  xmm1, dword ptr [rsp+170h+outQuat+4]
          vsubss  xmm5, xmm1, dword ptr [rsp+170h+to+4]
          vmovss  xmm0, dword ptr [rsp+170h+outQuat+8]
          vsubss  xmm6, xmm0, dword ptr [rsp+170h+to+8]
          vmulss  xmm2, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, cs:__real@80000000
          vmovss  xmm2, cs:__real@3f800000
          vblendvps xmm1, xmm1, xmm2, xmm0
          vmovss  [rsp+170h+var_140], xmm1
          vdivss  xmm2, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm2
          vmovss  dword ptr [rsp+170h+quat], xmm0
          vmulss  xmm1, xmm5, xmm2
          vmovss  dword ptr [rsp+170h+quat+4], xmm1
          vmulss  xmm0, xmm6, xmm2
          vmovss  dword ptr [rsp+170h+quat+8], xmm0
        }
        vectoangles((const vec3_t *)&quat, _RBX);
        memset(&to, 0, 0xCui64);
      }
      else
      {
        Trajectory_GetTrBase(_RSI, _RBX);
      }
      break;
    case TR_ANGLE_ALONG_VELOCITY:
      if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 280, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
        __debugbreak();
      BgTrajectory::EvaluateTrajectoryDeltaInternal(this, &this->m_es->pos, atTime, (vec3_t *)&to);
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+170h+to]
        vmulss  xmm1, xmm4, xmm4
        vmovss  xmm5, dword ptr [rsp+170h+to+4]
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm6, dword ptr [rsp+170h+to+8]
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vmovss  xmm2, cs:__real@3f800000
        vblendvps xmm1, xmm3, xmm2, xmm0
        vmovss  [rsp+170h+var_140], xmm1
        vdivss  xmm3, xmm2, xmm1
        vmulss  xmm4, xmm4, xmm3
        vmovss  dword ptr [rsp+170h+to], xmm4
        vmulss  xmm0, xmm5, xmm3
        vmovss  dword ptr [rsp+170h+to+4], xmm0
        vmulss  xmm3, xmm6, xmm3
        vmovss  dword ptr [rsp+170h+to+8], xmm3
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vcomiss xmm0, cs:__real@3a83126f
      }
      if ( v219 )
      {
        Trajectory_GetTrBase(_RSI, (vec3_t *)&quat);
        AngleVectors((const vec3_t *)&quat, (vec3_t *)&to, NULL, NULL);
        memset(&quat, 0, 0xCui64);
      }
      vectoangles((const vec3_t *)&to, _RBX);
      break;
    default:
      if ( (unsigned int)(_RSI->trType - 14) > 5 )
      {
        LODWORD(v240) = _RSI->trType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 494, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BG_EvaluateTrajectory: unknown trType: %i", v240) )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+170h+trBase]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr [rsp+170h+trBase+4]
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm0, dword ptr [rsp+170h+trBase+8]
          vmovss  dword ptr [rbx+8], xmm0
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edi
          vmulss  xmm3, xmm0, cs:__real@3a83126f; deltaTime
        }
        BgTrajectory::UpdateTrackedTrajectory(this, _RSI, _RBX, *(float *)&_XMM3);
      }
      break;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovss  [rsp+170h+var_140], xmm0
  }
  if ( (v251 & 0x7F800000) == 2139095040 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmovss  [rsp+170h+var_140], xmm0
  }
  if ( (v252 & 0x7F800000) == 2139095040 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+20h]
    vmovss  [rsp+170h+var_140], xmm0
  }
  if ( (v253 & 0x7F800000) == 2139095040 )
  {
LABEL_68:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 499, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tr->trDelta )[0] ) && !IS_NAN( ( tr->trDelta )[1] ) && !IS_NAN( ( tr->trDelta )[2] )") )
      __debugbreak();
  }
  memset(&trBase, 0, sizeof(trBase));
  _R11 = &v260;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
}

/*
==============
BgTrajectory::GetAbsoluteAnimMovement
==============
*/
void BgTrajectory::GetAbsoluteAnimMovement(BgTrajectory *this, const LerpEntityState *tr, const DObj *obj, int atTime, vec3_t *outOrigin, vec3_t *outAngles)
{
  const XAnimTree *Tree; 
  const XAnimTree *v14; 
  BOOL v21; 
  const XAnim_s *Anims; 
  const XAnim_s *v28; 
  trajectory_t_secure *p_pos; 
  char v39; 
  float fmt; 
  __int64 v51; 
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
  v14 = Tree;
  if ( !Tree )
    goto LABEL_13;
  if ( !XAnimIsSimpleTree(Tree) )
  {
    LODWORD(v51) = obj->entnum - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 670, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Non simple tree used for entity %d, pos trajectory type %d, ang trajectory type %d, quietly and safely handling for ship.\n", v51, tr->pos.trType, tr->apos.trType) )
      __debugbreak();
LABEL_13:
    Trajectory_GetTrBase(&tr->pos, outOrigin);
LABEL_14:
    *outAngles = tr->apos.trBase;
    return;
  }
  __asm
  {
    vmovaps [rsp+148h+var_48], xmm6
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbx+0Ch]
    vmovaps [rsp+148h+var_58], xmm7
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm1, xmm7
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r15d
    vdivss  xmm6, xmm0, xmm1
  }
  v21 = XAnimIsSimpleBlendTree(v14) != 0;
  Anims = XAnimGetAnims(v14);
  if ( XAnimIsLooped(Anims, v21 + 1) )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000; Y
      vmovaps xmm0, xmm6; X
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f7fbe77; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  v28 = XAnimGetAnims(v14);
  __asm { vmovss  dword ptr [rsp+148h+fmt], xmm6 }
  XAnimGetAbsDelta(v28, v21 + 1, &rot, &trans, fmt);
  AnglesToAxis(&tr->apos.trBase, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+148h+trans]
    vmovss  xmm1, dword ptr [rsp+148h+trans+4]
    vmovaps xmm6, [rsp+148h+var_48]
  }
  p_pos = &tr->pos;
  __asm
  {
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+148h+trans+8]
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vucomiss xmm2, xmm7
  }
  if ( v39 )
  {
    Trajectory_GetTrBase(p_pos, outOrigin);
  }
  else
  {
    Trajectory_GetTrBase(p_pos, &axis.m[3]);
    MatrixTransformVector43(&trans, &axis, outOrigin);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+148h+rot]
    vmovss  xmm1, dword ptr [rsp+148h+rot+4]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+148h+rot+8]
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vucomiss xmm2, xmm7
    vmovaps xmm7, [rsp+148h+var_58]
  }
  if ( v39 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+148h+rot+0Ch]
      vucomiss xmm0, cs:__real@3f800000
    }
    if ( v39 )
      goto LABEL_14;
  }
  QuatToAxis(&rot, &in1);
  MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&axis, &out);
  AxisToAngles(&out, outAngles);
}

/*
==============
BgTrajectory::GetPhysicsGravityDir
==============
*/

void __fastcall BgTrajectory::GetPhysicsGravityDir(BgTrajectory *this, vec3_t *outGravityDir, __int64 a3, double _XMM3_8)
{
  Physics_WorldId v5; 
  char v19; 
  __int64 v26; 

  _RDI = outGravityDir;
  v5 = this->GetPhysicsWorld(this);
  if ( v5 == PHYSICS_WORLD_ID_INVALID )
  {
    __asm { vmovss  xmm4, cs:__real@bf800000 }
    _RDI->v[0] = 0.0;
    __asm { vxorps  xmm3, xmm3, xmm3 }
  }
  else
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v5 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
        __debugbreak();
      LODWORD(v26) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v26) )
        __debugbreak();
    }
    __asm { vmovss  xmm1, cs:__real@42000000 }
    _RCX = HavokPhysics_GetConstWorld(v5)->world;
    __asm
    {
      vmovups xmm2, xmmword ptr [rcx+0AC0h]
      vmulss  xmm5, xmm2, xmm1
      vshufps xmm0, xmm2, xmm2, 55h ; 'U'
      vmulss  xmm3, xmm0, xmm1
      vshufps xmm2, xmm2, xmm2, 0AAh ; 'ª'
      vmulss  xmm4, xmm2, xmm1
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vcomiss xmm0, cs:__real@3a83126f
      vmovss  dword ptr [rdi], xmm5
      vmovss  dword ptr [rdi+4], xmm3
    }
    if ( !v19 )
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm2, xmm0, xmm0
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm5, xmm1
        vmovss  dword ptr [rdi], xmm0
        vmulss  xmm4, xmm4, xmm1
        vmulss  xmm3, xmm3, xmm1
      }
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi+4], xmm3
    vmovss  dword ptr [rdi+8], xmm4
  }
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
  char v52; 
  bool v60; 
  bool v62; 
  __int64 v101; 
  int v102; 
  int v104; 
  vec3_t trBase; 
  __int64 v106; 
  int v107[10]; 
  char v108; 
  void *retaddr; 

  _RAX = &retaddr;
  v106 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmm9, xmm3
  }
  _RDI = result;
  if ( !this->GetTargetPos(this, (vec3_t *)v107) )
    goto LABEL_22;
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm9, xmm10
  }
  _RSI = &tr->trDelta;
  __asm
  {
    vmovss  xmm6, cs:__real@3a83126f
    vmovaps xmm2, xmm6; epsilon
  }
  if ( VecNCompareCustomEpsilon(tr->trDelta.v, vec3_origin.v, *(float *)&_XMM2, 3) )
  {
LABEL_22:
    Trajectory_GetTrBase(tr, &trBase);
    __asm
    {
      vmulss  xmm0, xmm9, dword ptr [rbx+18h]
      vaddss  xmm1, xmm0, dword ptr [rsp+138h+trBase]
      vmovss  dword ptr [rdi], xmm1
      vmulss  xmm0, xmm9, dword ptr [rbx+1Ch]
      vaddss  xmm1, xmm0, dword ptr [rsp+138h+trBase+4]
      vmovss  dword ptr [rdi+4], xmm1
      vmulss  xmm0, xmm9, dword ptr [rbx+20h]
      vaddss  xmm1, xmm0, dword ptr [rsp+138h+trBase+8]
      vmovss  dword ptr [rdi+8], xmm1
    }
  }
  else
  {
    __asm { vmovaps xmm2, xmm6; epsilon }
    if ( VecNCompareCustomEpsilon(tr->trDelta.v, vec3_origin.v, *(float *)&_XMM2, 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 168, ASSERT_TYPE_ASSERT, "(!Vec3CompareEpsilon( tr->trDelta, vec3_origin ))", (const char *)&queryFormat, "!Vec3CompareEpsilon( tr->trDelta, vec3_origin )") )
      __debugbreak();
    __asm
    {
      vmulss  xmm8, xmm9, dword ptr [rsi]
      vmulss  xmm7, xmm9, dword ptr [rsi+4]
      vmulss  xmm6, xmm9, dword ptr [rsi+8]
    }
    Trajectory_GetTrBase(tr, &trBase);
    __asm
    {
      vaddss  xmm0, xmm8, dword ptr [rsp+138h+trBase]
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm7, dword ptr [rsp+138h+trBase+4]
      vmovss  dword ptr [rdi+4], xmm1
      vaddss  xmm0, xmm6, dword ptr [rsp+138h+trBase+8]
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  xmm0, [rsp+138h+var_D8]
      vsubss  xmm5, xmm0, dword ptr [rsp+138h+trBase]
      vmovss  xmm1, [rsp+138h+var_D4]
      vsubss  xmm4, xmm1, dword ptr [rsp+138h+trBase+4]
      vmovss  xmm0, [rsp+138h+var_D0]
      vsubss  xmm14, xmm0, dword ptr [rsp+138h+trBase+8]
      vmulss  xmm2, xmm8, xmm8
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, cs:__real@80000000
      vmovss  xmm11, cs:__real@3f800000
      vblendvps xmm1, xmm1, xmm11, xmm0
      vmovss  [rsp+138h+var_F8], xmm1
      vdivss  xmm0, xmm11, xmm1
      vmulss  xmm3, xmm0, xmm8
      vmulss  xmm7, xmm0, xmm7
      vmulss  xmm8, xmm0, xmm6
      vmulss  xmm1, xmm7, xmm4
      vmulss  xmm0, xmm3, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm14
      vaddss  xmm6, xmm2, xmm1
      vcomiss xmm6, cs:__real@3c23d70a
    }
    if ( !v52 )
    {
      __asm
      {
        vmulss  xmm0, xmm3, xmm6
        vmulss  xmm1, xmm7, xmm6
        vmulss  xmm2, xmm8, xmm6
        vsubss  xmm12, xmm5, xmm0
        vsubss  xmm13, xmm4, xmm1
        vsubss  xmm14, xmm14, xmm2
        vmovaps xmm7, xmm11
      }
      v60 = tr->trType == TR_TRACK_FULL_LOCK;
      if ( tr->trType != TR_TRACK_FULL_LOCK )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_trackTrajectory1, "trackTrajectory1");
        __asm { vmovss  [rsp+138h+var_C8], xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_trackTrajectory2, "trackTrajectory2");
        __asm { vmovss  [rsp+138h+var_C4], xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_trackTrajectory3, "trackTrajectory3");
        __asm { vmovss  [rsp+138h+var_C0], xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_trackTrajectory4, "trackTrajectory4");
        __asm { vmovss  [rsp+138h+var_BC], xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_trackTrajectory5, "trackTrajectory5");
        __asm { vmovss  [rsp+138h+var_B8], xmm0 }
        _RBX = tr->trType;
        v60 = (_DWORD)_RBX == 19;
        if ( (unsigned int)(_RBX - 14) >= 5 )
        {
          v102 = 5;
          LODWORD(v101) = _RBX - 14;
          v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 218, ASSERT_TYPE_ASSERT, "(unsigned)( trackType ) < (unsigned)( 5 )", "trackType doesn't index TR_NUM_LOCK_STRENGTHS\n\t%i not in [0, %i)", v101, v102);
          v60 = !v62;
          if ( v62 )
            __debugbreak();
        }
        __asm { vmovss  xmm7, [rsp+rbx*4+138h+var_100] }
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+4]
        vmovss  xmm0, dword ptr [rsi]
        vmovss  xmm3, dword ptr [rsi+8]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm8, xmm2, xmm2
        vucomiss xmm8, xmm10
      }
      if ( v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 224, ASSERT_TYPE_ASSERT, "(speed)", (const char *)&queryFormat, "speed") )
        __debugbreak();
      __asm
      {
        vmulss  xmm0, xmm8, xmm9
        vdivss  xmm3, xmm0, xmm6
        vmulss  xmm0, xmm3, xmm3; val
        vmovaps xmm2, xmm11; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm2, xmm0, xmm7
        vmulss  xmm1, xmm12, xmm2
        vaddss  xmm3, xmm1, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm3
        vmulss  xmm0, xmm13, xmm2
        vaddss  xmm4, xmm0, dword ptr [rdi+4]
        vmovss  dword ptr [rdi+4], xmm4
        vmulss  xmm1, xmm14, xmm2
        vaddss  xmm0, xmm1, dword ptr [rdi+8]
        vmovss  dword ptr [rdi+8], xmm0
        vmovss  [rsp+138h+var_F8], xmm3
      }
      if ( (v104 & 0x7F800000) == 2139095040 )
        goto LABEL_26;
      __asm { vmovss  [rsp+138h+var_F8], xmm4 }
      if ( (v104 & 0x7F800000) == 2139095040 )
        goto LABEL_26;
      __asm { vmovss  [rsp+138h+var_F8], xmm0 }
      if ( (v104 & 0x7F800000) == 2139095040 )
      {
LABEL_26:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 239, ASSERT_TYPE_SANITY, "( !IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] )") )
          __debugbreak();
      }
    }
  }
  memset(&trBase, 0, sizeof(trBase));
  _R11 = &v108;
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
  }
}

/*
==============
BgTrajectory::UpdateTrackedTrajectoryAngles
==============
*/
void BgTrajectory::UpdateTrackedTrajectoryAngles(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, float deltaTime)
{
  vec3_t trBase; 
  __int64 v29; 
  int v30[4]; 
  vec3_t vec; 

  v29 = -2i64;
  __asm { vmovaps [rsp+0A8h+var_28], xmm6 }
  if ( this->GetTargetPos(this, (vec3_t *)v30) )
  {
    if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 256, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
      __debugbreak();
    Trajectory_GetTrBase(&this->m_es->pos, &trBase);
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+var_58]
      vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+trBase]
      vmovss  xmm1, [rsp+0A8h+var_54]
      vsubss  xmm5, xmm1, dword ptr [rsp+0A8h+trBase+4]
      vmovss  xmm0, [rsp+0A8h+var_50]
      vsubss  xmm6, xmm0, dword ptr [rsp+0A8h+trBase+8]
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm1, xmm2, xmm0
      vdivss  xmm2, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rsp+0A8h+vec], xmm0
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rsp+0A8h+vec+4], xmm1
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rsp+0A8h+vec+8], xmm0
    }
    vectoangles(&vec, result);
    memset(&trBase, 0, sizeof(trBase));
  }
  else
  {
    Trajectory_GetTrBase(tr, result);
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
}

/*
==============
BgTrajectory::UpdateTrackedTrajectoryDelta
==============
*/

void __fastcall BgTrajectory::UpdateTrackedTrajectoryDelta(BgTrajectory *this, const trajectory_t_secure *tr, vec3_t *result, double deltaTime)
{
  int v20; 
  int v21; 
  int v22; 
  vec3_t trBase; 
  __int64 v24; 
  vec3_t resulta; 

  v24 = -2i64;
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  _RDI = result;
  __asm { vcomiss xmm3, cs:__real@3a83126f }
  BgTrajectory::UpdateTrackedTrajectory(this, tr, &resulta, *(float *)&deltaTime);
  Trajectory_GetTrBase(tr, &trBase);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+result]
    vsubss  xmm3, xmm0, dword ptr [rsp+88h+trBase]
    vmovss  xmm1, dword ptr [rsp+88h+result+4]
    vsubss  xmm4, xmm1, dword ptr [rsp+88h+trBase+4]
    vmovss  xmm0, dword ptr [rsp+88h+result+8]
    vsubss  xmm5, xmm0, dword ptr [rsp+88h+trBase+8]
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm2, xmm1, xmm6
    vmulss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm3, xmm2, xmm4
    vmovss  dword ptr [rdi+4], xmm3
    vmulss  xmm1, xmm2, xmm5
    vmovss  dword ptr [rdi+8], xmm1
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm { vmovss  [rsp+88h+var_58], xmm3 }
  if ( (v21 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm { vmovss  [rsp+88h+var_58], xmm1 }
  if ( (v22 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 145, ASSERT_TYPE_SANITY, "( !IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] )") )
      __debugbreak();
  }
  memset(&trBase, 0, sizeof(trBase));
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
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
  char v31; 
  vec3_t trBase; 
  __int64 v34; 
  vec3_t resulta; 

  v34 = -2i64;
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  if ( !this->m_es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.cpp", 280, ASSERT_TYPE_ASSERT, "(m_es)", (const char *)&queryFormat, "m_es") )
    __debugbreak();
  BgTrajectory::EvaluateTrajectoryDeltaInternal(this, &this->m_es->pos, atTime, &resulta);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0A8h+result]
    vmulss  xmm1, xmm4, xmm4
    vmovss  xmm5, dword ptr [rsp+0A8h+result+4]
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm6, dword ptr [rsp+0A8h+result+8]
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm2, xmm0
    vdivss  xmm3, xmm2, xmm1
    vmulss  xmm4, xmm4, xmm3
    vmovss  dword ptr [rsp+0A8h+result], xmm4
    vmulss  xmm0, xmm5, xmm3
    vmovss  dword ptr [rsp+0A8h+result+4], xmm0
    vmulss  xmm3, xmm6, xmm3
    vmovss  dword ptr [rsp+0A8h+result+8], xmm3
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v31 )
  {
    Trajectory_GetTrBase(tr, &trBase);
    AngleVectors(&trBase, &resulta, NULL, NULL);
    memset(&trBase, 0, sizeof(trBase));
  }
  vectoangles(&resulta, result);
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
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

void __fastcall BgTrajectory::UpdateTrajectoryGravity(BgTrajectory *this, const trajectory_t_secure *tr, double scale, vec3_t *result, float deltaTime)
{
  vec3_t trBase; 
  __int64 v35; 
  vec3_t outGravityDir; 
  char v38; 
  void *retaddr; 

  _RAX = &retaddr;
  v35 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RBX = result;
  __asm { vmovaps xmm6, xmm2 }
  BgTrajectory::GetPhysicsGravityDir(this, &outGravityDir);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@3f000000
    vmovss  xmm9, [rsp+98h+deltaTime]
    vmulss  xmm0, xmm0, xmm9
    vmulss  xmm2, xmm0, xmm9
    vmulss  xmm6, xmm2, dword ptr [rsp+98h+outGravityDir]
    vmulss  xmm7, xmm2, dword ptr [rsp+98h+outGravityDir+4]
    vmulss  xmm8, xmm2, dword ptr [rsp+98h+outGravityDir+8]
  }
  Trajectory_GetTrBase(tr, &trBase);
  __asm
  {
    vmulss  xmm0, xmm9, dword ptr [rdi+18h]
    vaddss  xmm1, xmm0, dword ptr [rsp+98h+trBase]
    vmovss  dword ptr [rbx], xmm1
    vmulss  xmm0, xmm9, dword ptr [rdi+1Ch]
    vaddss  xmm3, xmm0, dword ptr [rsp+98h+trBase+4]
    vmovss  dword ptr [rbx+4], xmm3
    vmulss  xmm0, xmm9, dword ptr [rdi+20h]
    vaddss  xmm2, xmm0, dword ptr [rsp+98h+trBase+8]
    vaddss  xmm1, xmm1, xmm6
    vmovss  dword ptr [rbx], xmm1
    vaddss  xmm0, xmm3, xmm7
    vmovss  dword ptr [rbx+4], xmm0
    vaddss  xmm1, xmm2, xmm8
    vmovss  dword ptr [rbx+8], xmm1
  }
  memset(&trBase, 0, sizeof(trBase));
  _R11 = &v38;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
BgTrajectory::UpdateTrajectoryGravityDelta
==============
*/

void __fastcall BgTrajectory::UpdateTrajectoryGravityDelta(BgTrajectory *this, const trajectory_t_secure *tr, double scale, vec3_t *result)
{
  vec3_t outGravityDir; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = result;
  __asm { vmovaps xmm6, xmm2 }
  BgTrajectory::GetPhysicsGravityDir(this, &outGravityDir);
  __asm
  {
    vmulss  xmm3, xmm6, [rsp+58h+deltaTime]
    vmulss  xmm1, xmm3, dword ptr [rsp+58h+outGravityDir]
    vaddss  xmm2, xmm1, dword ptr [rbx+18h]
    vmulss  xmm1, xmm3, dword ptr [rsp+58h+outGravityDir+4]
    vmovss  dword ptr [rdi], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbx+1Ch]
    vmulss  xmm1, xmm3, dword ptr [rsp+58h+outGravityDir+8]
    vmovss  dword ptr [rdi+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbx+20h]
    vmovss  dword ptr [rdi+8], xmm2
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

