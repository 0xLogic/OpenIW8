/*
==============
UpdateMovingPlatformPoint
==============
*/

void __fastcall UpdateMovingPlatformPoint(const tmat33_t<vec3_t> *rotMtx, int anglesValid, const vec3_t *prevOrigin, const vec3_t *origin, vec3_t *inOutPoint)
{
  ?UpdateMovingPlatformPoint@@YAXAEBT?$tmat33_t@Tvec3_t@@@@HAEBTvec3_t@@1AEAT2@@Z(rotMtx, anglesValid, prevOrigin, origin, inOutPoint);
}

/*
==============
UpdateMovingPlatformQuat
==============
*/

void __fastcall UpdateMovingPlatformQuat(const tmat33_t<vec3_t> *rotMtx, int anglesValid, vec4_t *inOutQuat)
{
  ?UpdateMovingPlatformQuat@@YAXAEBT?$tmat33_t@Tvec3_t@@@@HAEATvec4_t@@@Z(rotMtx, anglesValid, inOutQuat);
}

/*
==============
AIScriptedInterface::IsDoingUpdateMovingPlatform
==============
*/

bool __fastcall AIScriptedInterface::IsDoingUpdateMovingPlatform(AIScriptedInterface *this)
{
  return ?IsDoingUpdateMovingPlatform@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Physics_UpdateTransformForGroundEnt
==============
*/

void __fastcall AIScriptedInterface::Physics_UpdateTransformForGroundEnt(AIScriptedInterface *this)
{
  ?Physics_UpdateTransformForGroundEnt@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::IsDoingUpdateMovingPlatform
==============
*/
bool AIScriptedInterface::IsDoingUpdateMovingPlatform(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v3; 
  bool result; 

  m_pAI = this->m_pAI;
  result = 0;
  if ( G_IsEntityInUse(m_pAI->Physics.groundEntNum) )
  {
    if ( BGMovingPlatforms::IsMovingPlatform(m_pAI->Physics.groundEntNum) )
    {
      v3 = this->m_pAI;
      if ( !v3->ent->tagInfo || EntHandle::isDefined(&v3->sentient->syncedMeleeEnt) || !g_entities[m_pAI->Physics.groundEntNum].vehicle )
        return 1;
    }
  }
  return result;
}

/*
==============
AIScriptedInterface::Physics_UpdateTransformForGroundEnt
==============
*/
void AIScriptedInterface::Physics_UpdateTransformForGroundEnt(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  __int64 v2; 
  AIScriptedInterface_vtbl *v3; 
  ai_scripted_t *v5; 
  gentity_s *v6; 
  float *v; 
  float v8; 
  float v9; 
  float *v10; 
  int v11; 
  bool v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  AIScriptedInterface *v17; 
  __int64 v18; 
  float v19; 
  int v20; 
  bool v21; 
  __int64 v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  bool v27; 
  ai_scripted_t *v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  AIScriptedInterface_vtbl *v33; 
  float *v34; 
  AIScriptedInterface_vtbl *v35; 
  float v36; 
  float v37; 
  double v38; 
  gentity_s *ent; 
  double v40; 
  gentity_s *v41; 
  double v42; 
  float *v43; 
  ai_scripted_t *v44; 
  double v45; 
  vec2_t *p_dir; 
  float v47; 
  float v48; 
  float v49; 
  __int64 i; 
  vec3_t *v51; 
  vec3_t *v52; 
  float v53; 
  float v54; 
  ai_scripted_t *v55; 
  float v56; 
  float v57; 
  vec3_t *LookAtPos; 
  ai_scripted_t *v59; 
  int v60; 
  __int64 v61; 
  __int64 v62; 
  ai_scripted_t *v63; 
  float *v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  __int64 v75; 
  __int64 v76; 
  int v77; 
  __int64 v78; 
  tmat33_t<vec3_t> in2; 
  float *p_number; 
  float v81; 
  vec3_t inOutPoint; 
  vec3_t *angles; 
  float v84; 
  vec3_t v85; 
  vec3_t v86; 
  vec3_t v87; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v92; 

  m_pAI = this->m_pAI;
  v2 = 0i64;
  v3 = this->__vftable;
  *(_QWORD *)inOutPoint.v = this;
  *(_QWORD *)m_pAI->Physics.movingPlatformUp.v = 0i64;
  *(_QWORD *)&m_pAI->Physics.movingPlatformUp.z = 1065353216i64;
  *(_QWORD *)&m_pAI->Physics.appliedGroundDelta.y = 0i64;
  if ( v3->IsDoingUpdateMovingPlatform(this) )
  {
    v5 = this->m_pAI;
    if ( !v5->ent->tagInfo || EntHandle::isDefined(&v5->sentient->syncedMeleeEnt) )
    {
      v77 = 0;
    }
    else
    {
      v77 = 1;
      AIScriptedInterface::ResetMoveHistoryToEntForward(this);
    }
    v6 = &g_entities[m_pAI->Physics.groundEntNum];
    p_number = (float *)&v6->s.number;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_moving_platform_actor_sp.cpp", 112, ASSERT_TYPE_ASSERT, "( pGroundEnt )", (const char *)&queryFormat, "pGroundEnt") )
      __debugbreak();
    v = v6->r.currentAngles.v;
    angles = &v6->r.currentAngles;
    AnglesToAxis(&v6->r.currentAngles, &axis);
    v8 = axis.m[2].v[1];
    v9 = FLOAT_N1_0;
    v10 = &axis.m[0].v[2];
    m_pAI->Physics.movingPlatformUp.v[0] = axis.m[2].v[0];
    m_pAI->Physics.movingPlatformUp.v[2] = axis.m[2].v[2];
    m_pAI->Physics.movingPlatformUp.v[1] = v8;
    v11 = 0;
    v78 = 3i64;
    v12 = 1;
    do
    {
      if ( !v12 )
      {
        LODWORD(v76) = 3;
        LODWORD(v75) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v75, v76) )
          __debugbreak();
      }
      v13 = (float)((float)(0.0 * *(v10 - 2)) + (float)(0.0 * *(v10 - 1))) + (float)(1.0 * *v10);
      if ( COERCE_FLOAT(LODWORD(v13) & _xmm) > v9 )
      {
        if ( (unsigned int)v11 >= 3 )
        {
          LODWORD(v76) = 3;
          LODWORD(v75) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v75, v76) )
            __debugbreak();
        }
        v14 = *(v10 - 2);
        v15 = *(v10 - 1);
        v16 = *v10;
        m_pAI->Physics.movingPlatformUp.v[0] = v14;
        m_pAI->Physics.movingPlatformUp.v[1] = v15;
        m_pAI->Physics.movingPlatformUp.v[2] = v16;
        if ( v13 < 0.0 )
        {
          m_pAI->Physics.movingPlatformUp.v[0] = COERCE_FLOAT(LODWORD(v14) ^ _xmm);
          m_pAI->Physics.movingPlatformUp.v[2] = COERCE_FLOAT(LODWORD(v16) ^ _xmm);
          m_pAI->Physics.movingPlatformUp.v[1] = COERCE_FLOAT(LODWORD(v15) ^ _xmm);
        }
        LODWORD(v9) = LODWORD(v13) & _xmm;
      }
      ++v11;
      v10 += 3;
      v12 = (unsigned int)v11 < 3;
    }
    while ( v11 < 3 );
    v17 = *(AIScriptedInterface **)inOutPoint.v;
    v18 = (__int64)p_number;
    if ( *v != m_pAI->Physics.vPrevGroundAngles.v[0] || v[1] != m_pAI->Physics.vPrevGroundAngles.v[1] || (v19 = v[2], v20 = 0, v19 != m_pAI->Physics.vPrevGroundAngles.v[2]) )
      v20 = 1;
    v21 = p_number[76] == m_pAI->Physics.vPrevGroundOrigin.v[0] && p_number[77] == m_pAI->Physics.vPrevGroundOrigin.v[1] && p_number[78] == m_pAI->Physics.vPrevGroundOrigin.v[2];
    if ( v20 || !v21 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)inOutPoint.v + 16i64);
      v23 = *(float *)(*(_QWORD *)v22 + 304i64);
      v24 = *(float *)(*(_QWORD *)v22 + 308i64);
      v25 = *(float *)(*(_QWORD *)v22 + 312i64);
      if ( v20 )
      {
        AnglesToAxis(&m_pAI->Physics.vPrevGroundAngles, &in);
        MatrixTranspose(&in, &out);
        AnglesToAxis(angles, &in);
        MatrixMultiply(&out, &in, &in2);
        if ( !v77 )
        {
          v26 = *(float *)(v18 + 320) - m_pAI->Physics.vPrevGroundAngles.v[1];
          v27 = v17->Is3D(v17);
          v28 = v17->m_pAI;
          if ( v27 )
          {
            v29 = *(float *)(v18 + 324) - m_pAI->Physics.vPrevGroundAngles.v[2];
            v30 = v29 + v28->CodeOrient.vDesiredAngles.v[2];
            v31 = v26 + v28->CodeOrient.vDesiredAngles.v[1];
            v32 = angles->v[0] - m_pAI->Physics.vPrevGroundAngles.v[0];
            v33 = v17->__vftable;
            *(float *)&angles = v32 + v28->CodeOrient.fDesiredLookPitch;
            *((float *)&angles + 1) = v31;
            v84 = v30;
            v33->SetDesiredBodyAngles(v17, &v28->CodeOrient, (const vec3_t *)&angles, 1);
            v34 = (float *)v17->m_pAI;
            v35 = v17->__vftable;
            v36 = v29 + v34[616];
            v37 = v26 + v34[615];
            *(float *)&p_number = v32 + v34[617];
            *((float *)&p_number + 1) = v37;
            v81 = v36;
            v35->SetDesiredBodyAngles(v17, (ai_orient_t *)(v34 + 613), (const vec3_t *)&p_number, 1);
            v38 = AngleNormalize360(v32 + v17->m_pAI->ent->r.currentAngles.v[0]);
            ent = v17->m_pAI->ent;
            ent->r.currentAngles.v[0] = *(float *)&v38;
            v40 = AngleNormalize360(v26 + ent->r.currentAngles.v[1]);
            v41 = v17->m_pAI->ent;
            v41->r.currentAngles.v[1] = *(float *)&v40;
            v42 = AngleNormalize360(v29 + v41->r.currentAngles.v[2]);
            v43 = (float *)v17->m_pAI;
            *(float *)(*(_QWORD *)v43 + 324i64) = *(float *)&v42;
            AIScriptedInterface::SetLookAngles(v17, v32 + v43[80], v26 + v43[81]);
          }
          else if ( v28->Physics.bTrackMoverUp )
          {
            AnglesToAxis(&v28->ent->r.currentAngles, &in1);
            MatrixMultiply(&in1, &in2, &v92);
            AxisToAngles(&v92, &v85);
            v17->SetDesiredBodyAngles(v17, &v17->m_pAI->CodeOrient, &v85, 1);
            v17->SetDesiredBodyAngles(v17, &v17->m_pAI->ScriptOrient, &v85, 1);
            v17->SetBodyAngles(v17, &v85);
          }
          else
          {
            AIScriptedInterface::ForcePitchAndYawDeltas(v17, 0.0, v26);
          }
          v44 = v17->m_pAI;
          v45 = AngleNormalize360(v26 + v44->sight.anglesToLikelyEnemyPath.v[1]);
          p_dir = (vec2_t *)&v17->m_pAI->eyeInfo.dir;
          v44->sight.anglesToLikelyEnemyPath.v[1] = *(float *)&v45;
          UpdateMovingPlatformDirection2D(p_dir, v26);
          UpdateMovingPlatformDirection2D(&v17->m_pAI->prevMoveDir2D, v26);
          UpdateMovingPlatformDirection2D((vec2_t *)&v17->m_pAI->Physics.vHitNormal, v26);
          UpdateMovingPlatformDirection(&in2, &v17->m_pAI->Physics.vVelocity);
          UpdateMovingPlatformDirection(&in2, &v17->m_pAI->Physics.vWishDelta);
          v47 = vec3_origin.v[2];
          v48 = vec3_origin.v[1];
          v49 = vec3_origin.v[0];
          for ( i = 207i64; i < 217; ++i )
          {
            v51 = (vec3_t *)v17->m_pAI;
            v52 = &v51[i];
            if ( v51[i].v[0] != v49 || v48 != v52->v[1] || v47 != v52->v[2] )
            {
              v53 = v52->v[2];
              v86.v[0] = v51[i].v[0];
              v86.v[1] = v52->v[1];
              v86.v[2] = v53;
              MatrixTransformVector(&v86, &in2, v52);
              v51 = (vec3_t *)v17->m_pAI;
              v47 = vec3_origin.v[2];
              v48 = vec3_origin.v[1];
              v49 = vec3_origin.v[0];
            }
          }
          if ( v51[140].v[0] != v49 || v48 != v51[140].v[1] || v47 != v51[140].v[2] )
          {
            v54 = v51[140].v[2];
            *(_QWORD *)v87.v = *(_QWORD *)v51[140].v;
            v87.v[2] = v54;
            MatrixTransformVector(&v87, &in2, v51 + 140);
          }
          goto LABEL_50;
        }
      }
      else
      {
        MatrixIdentity33(&in2);
        if ( !v77 )
        {
LABEL_50:
          v55 = v17->m_pAI;
          v56 = v55->ent->r.currentOrigin.v[2];
          if ( v55->Physics.vHitOrigin.v[0] != 0.0 || v55->Physics.vHitOrigin.v[1] != 0.0 )
          {
            *(_QWORD *)inOutPoint.v = *(_QWORD *)v55->Physics.vHitOrigin.v;
            inOutPoint.v[2] = v56;
            UpdateMovingPlatformPoint(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), &inOutPoint);
            v57 = inOutPoint.v[1];
            v55->Physics.vHitOrigin.v[0] = inOutPoint.v[0];
            v55->Physics.vHitOrigin.v[1] = v57;
            v55 = v17->m_pAI;
          }
          UpdateMovingPlatformPoint(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), &v55->sight.lastEnemySightPos);
          UpdateMovingPlatformPoint(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), &v17->m_pAI->eyeInfo.pos);
          LookAtPos = AIScriptedInterface::GetLookAtPos(v17);
          UpdateMovingPlatformPoint(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), LookAtPos);
          UpdateMovingPlatformPoint(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), &v17->m_pAI->Physics.vOrigin);
          UpdateMovingPlatformPoint(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), &v17->m_pAI->ent->r.currentOrigin);
          G_PhysicsCharacterProxy_Teleport(v17->m_pAI->ent, 1);
        }
      }
      UpdateMovingPlatformPoint(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), &v17->m_pAI->codeGoal.pos);
      UpdateMovingPlatformPoint(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), &v17->m_pAI->scriptGoal.pos);
      v59 = v17->m_pAI;
      v60 = 0;
      if ( v59->scriptGoalPath.numPoints )
      {
        do
        {
          UpdateMovingPlatformPoint(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), &v59->scriptGoalPath.path[v60]);
          v59 = v17->m_pAI;
          ++v60;
        }
        while ( v60 < v59->scriptGoalPath.numPoints );
      }
      v61 = 0i64;
      v62 = 3i64;
      do
      {
        v63 = v59;
        if ( v59->btGoals[v2].bValid )
        {
          UpdateMovingPlatformPoint(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), &v59->btGoals[v61].pos);
          v59 = v17->m_pAI;
          v62 = v78;
          v63 = v59;
        }
        else
        {
          v59 = v17->m_pAI;
        }
        ++v61;
        ++v2;
        v78 = --v62;
      }
      while ( v62 );
      G_MotionWarp_MovingPlatformUpdate(&in2, v20, &m_pAI->Physics.vPrevGroundOrigin, (const vec3_t *)(v18 + 304), v63->ent->s.number);
      v64 = (float *)v17->m_pAI->ent;
      if ( v77 )
      {
        v66 = v64[76];
        v67 = v64[77];
        v68 = v64[78];
        if ( v66 != 0.0 || v67 != 0.0 || v68 != 0.0 )
        {
          v69 = m_pAI->Physics.vPrevGroundOrigin.v[0];
          v70 = m_pAI->Physics.vPrevGroundOrigin.v[1];
          v71 = m_pAI->Physics.vPrevGroundOrigin.v[2];
          if ( v20 )
          {
            v72 = v68 - v71;
            v73 = v66 - v69;
            v66 = (float)((float)((float)((float)(v67 - v70) * in2.m[1].v[0]) + (float)((float)(v66 - v69) * in2.m[0].v[0])) + (float)((float)(v68 - v71) * in2.m[2].v[0])) + *(float *)(v18 + 304);
            v74 = (float)(v67 - v70) * in2.m[1].v[2];
            v67 = (float)((float)((float)((float)(v67 - v70) * in2.m[1].v[1]) + (float)(v73 * in2.m[0].v[1])) + (float)(v72 * in2.m[2].v[1])) + *(float *)(v18 + 308);
            v68 = (float)((float)(v74 + (float)(v73 * in2.m[0].v[2])) + (float)(v72 * in2.m[2].v[2])) + *(float *)(v18 + 312);
          }
          else
          {
            v66 = (float)(v66 - v69) + *(float *)(v18 + 304);
            v68 = (float)(v68 - v71) + *(float *)(v18 + 312);
            v67 = (float)(v67 - v70) + *(float *)(v18 + 308);
          }
        }
        m_pAI->Physics.appliedGroundDelta.v[0] = v66 - v23;
        m_pAI->Physics.appliedGroundDelta.v[1] = v67 - v24;
        v65 = v68 - v25;
      }
      else
      {
        m_pAI->Physics.appliedGroundDelta.v[0] = v64[76] - v23;
        m_pAI->Physics.appliedGroundDelta.v[1] = v64[77] - v24;
        v65 = v64[78] - v25;
      }
      m_pAI->Physics.appliedGroundDelta.v[2] = v65;
      SV_LinkEntity(v17->m_pAI->ent);
    }
  }
}

/*
==============
UpdateMovingPlatformDirection2D
==============
*/
void UpdateMovingPlatformDirection2D(vec2_t *inOutDir, float yaw)
{
  float v3; 
  float v4; 
  float c; 
  float s; 
  vec2_t v7; 

  if ( inOutDir->v[0] != 0.0 || inOutDir->v[1] != 0.0 )
  {
    v7 = *inOutDir;
    if ( &v7 == inOutDir && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 887, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
      __debugbreak();
    FastSinCos(yaw, &s, &c);
    v3 = v7.v[1] * c;
    v4 = v7.v[0] * s;
    inOutDir->v[0] = (float)(v7.v[0] * c) - (float)(v7.v[1] * s);
    inOutDir->v[1] = v3 + v4;
  }
}

/*
==============
UpdateMovingPlatformDirection
==============
*/
void UpdateMovingPlatformDirection(const tmat33_t<vec3_t> *rotMtx, vec3_t *inOutDir)
{
  float v2; 
  float v3; 
  vec3_t in1; 

  if ( inOutDir->v[0] != 0.0 || 0.0 != inOutDir->v[1] || 0.0 != inOutDir->v[2] )
  {
    v2 = inOutDir->v[1];
    in1.v[0] = inOutDir->v[0];
    v3 = inOutDir->v[2];
    in1.v[1] = v2;
    in1.v[2] = v3;
    MatrixTransformVector(&in1, rotMtx, inOutDir);
  }
}

/*
==============
UpdateMovingPlatformPoint
==============
*/
void UpdateMovingPlatformPoint(const tmat33_t<vec3_t> *rotMtx, int anglesValid, const vec3_t *prevOrigin, const vec3_t *origin, vec3_t *inOutPoint)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  vec3_t in1; 
  vec3_t out; 

  if ( inOutPoint->v[0] != 0.0 || 0.0 != inOutPoint->v[1] || 0.0 != inOutPoint->v[2] )
  {
    v6 = inOutPoint->v[2] - prevOrigin->v[2];
    v7 = inOutPoint->v[1] - prevOrigin->v[1];
    if ( anglesValid )
    {
      in1.v[0] = inOutPoint->v[0] - prevOrigin->v[0];
      in1.v[1] = v7;
      in1.v[2] = v6;
      MatrixTransformVector(&in1, rotMtx, &out);
      v8 = out.v[1];
      inOutPoint->v[0] = out.v[0] + origin->v[0];
      v9 = out.v[2];
      inOutPoint->v[1] = v8 + origin->v[1];
      inOutPoint->v[2] = v9 + origin->v[2];
    }
    else
    {
      inOutPoint->v[0] = (float)(inOutPoint->v[0] - prevOrigin->v[0]) + origin->v[0];
      inOutPoint->v[1] = v7 + origin->v[1];
      inOutPoint->v[2] = v6 + origin->v[2];
    }
  }
}

/*
==============
UpdateMovingPlatformQuat
==============
*/
void UpdateMovingPlatformQuat(const tmat33_t<vec3_t> *rotMtx, int anglesValid, vec4_t *inOutQuat)
{
  vec4_t in1; 
  vec4_t out; 

  if ( anglesValid )
  {
    in1 = *inOutQuat;
    AxisToQuat(rotMtx, &out);
    QuatMultiply(&in1, &out, inOutQuat);
  }
}

