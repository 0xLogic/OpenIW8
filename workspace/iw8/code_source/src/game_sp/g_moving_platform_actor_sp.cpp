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
  __int64 v10; 
  AIScriptedInterface_vtbl *v11; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  gentity_s *v15; 
  unsigned int v24; 
  bool v25; 
  bool v26; 
  bool v28; 
  bool v38; 
  bool v39; 
  AIScriptedInterface *v47; 
  int v51; 
  char v55; 
  __int64 *v56; 
  bool v63; 
  ai_scripted_t *v64; 
  AIScriptedInterface_vtbl *v73; 
  AIScriptedInterface_vtbl *v74; 
  __int64 p_ScriptOrient; 
  vec2_t *p_dir; 
  bool v95; 
  vec3_t *LookAtPos; 
  ai_scripted_t *v117; 
  int v118; 
  __int64 v119; 
  __int64 v120; 
  ai_scripted_t *v121; 
  __int64 v169; 
  __int64 v170; 
  int v171; 
  __int64 v172; 
  tmat33_t<vec3_t> in2; 
  gentity_s *v174; 
  vec3_t inOutPoint; 
  vec3_t *angles; 
  vec3_t v179; 
  vec3_t v180; 
  vec3_t v181; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v186; 

  _RSI = this->m_pAI;
  v10 = 0i64;
  v11 = this->__vftable;
  *(_QWORD *)inOutPoint.v = this;
  *(_QWORD *)_RSI->Physics.movingPlatformUp.v = 0i64;
  *(_QWORD *)&_RSI->Physics.movingPlatformUp.z = 1065353216i64;
  *(_QWORD *)&_RSI->Physics.appliedGroundDelta.y = 0i64;
  if ( v11->IsDoingUpdateMovingPlatform(this) )
  {
    m_pAI = this->m_pAI;
    ent = m_pAI->ent;
    __asm
    {
      vmovaps [rsp+250h+var_30], xmm6
      vmovaps [rsp+250h+var_40], xmm7
      vmovaps [rsp+250h+var_50], xmm8
      vmovaps [rsp+250h+var_60], xmm9
      vmovaps [rsp+250h+var_70], xmm10
      vmovaps [rsp+250h+var_80], xmm11
    }
    if ( !ent->tagInfo || EntHandle::isDefined(&m_pAI->sentient->syncedMeleeEnt) )
    {
      v171 = 0;
    }
    else
    {
      v171 = 1;
      AIScriptedInterface::ResetMoveHistoryToEntForward(this);
    }
    v15 = &g_entities[_RSI->Physics.groundEntNum];
    v174 = v15;
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_moving_platform_actor_sp.cpp", 112, ASSERT_TYPE_ASSERT, "( pGroundEnt )", (const char *)&queryFormat, "pGroundEnt") )
      __debugbreak();
    _R13 = &v15->r.currentAngles;
    angles = &v15->r.currentAngles;
    AnglesToAxis(&v15->r.currentAngles, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+150h+axis+18h]
      vmovss  xmm1, dword ptr [rbp+150h+axis+1Ch]
      vmovss  xmm9, cs:__real@bf800000
      vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    _RBX = &axis.m[0].v[2];
    __asm
    {
      vmovss  dword ptr [rsi+870h], xmm0
      vmovss  xmm0, dword ptr [rbp+150h+axis+20h]
      vmovss  dword ptr [rsi+878h], xmm0
      vmovss  dword ptr [rsi+874h], xmm1
    }
    v24 = 0;
    v172 = 3i64;
    v25 = 1;
    v26 = 1;
    __asm { vxorps  xmm10, xmm10, xmm10 }
    do
    {
      if ( !v25 )
      {
        LODWORD(v170) = 3;
        LODWORD(v169) = v24;
        v28 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v169, v170);
        v26 = !v28;
        if ( v28 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr cs:?WORLD_UP@BGMovingPlatforms@@2Tvec3_t@@B; vec3_t const BGMovingPlatforms::WORLD_UP
        vmovss  xmm1, dword ptr cs:?WORLD_UP@BGMovingPlatforms@@2Tvec3_t@@B+4; vec3_t const BGMovingPlatforms::WORLD_UP
        vmulss  xmm3, xmm0, dword ptr [rbx-8]
        vmulss  xmm2, xmm1, dword ptr [rbx-4]
        vmovss  xmm0, dword ptr cs:?WORLD_UP@BGMovingPlatforms@@2Tvec3_t@@B+8; vec3_t const BGMovingPlatforms::WORLD_UP
        vmulss  xmm1, xmm0, dword ptr [rbx]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm7, xmm4, xmm1
        vandps  xmm6, xmm7, xmm11
        vcomiss xmm6, xmm9
      }
      if ( !v26 )
      {
        v38 = v24 < 3;
        if ( v24 >= 3 )
        {
          LODWORD(v170) = 3;
          LODWORD(v169) = v24;
          v39 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v169, v170);
          v38 = 0;
          if ( v39 )
            __debugbreak();
        }
        __asm
        {
          vcomiss xmm7, xmm10
          vmovss  xmm0, dword ptr [rbx-8]
          vmovss  xmm1, dword ptr [rbx-4]
          vmovss  xmm2, dword ptr [rbx]
          vmovss  dword ptr [rsi+870h], xmm0
          vmovss  dword ptr [rsi+874h], xmm1
          vmovss  dword ptr [rsi+878h], xmm2
        }
        if ( v38 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm8
            vmovss  dword ptr [rsi+870h], xmm0
            vxorps  xmm0, xmm2, xmm8
            vxorps  xmm1, xmm1, xmm8
            vmovss  dword ptr [rsi+878h], xmm0
            vmovss  dword ptr [rsi+874h], xmm1
          }
        }
        __asm { vmovaps xmm9, xmm6 }
      }
      ++v24;
      _RBX += 3;
      v25 = v24 < 3;
      v26 = v24 <= 3;
    }
    while ( (int)v24 < 3 );
    __asm
    {
      vmovss  xmm0, dword ptr [r13+0]
      vucomiss xmm0, dword ptr [rsi+864h]
    }
    v47 = *(AIScriptedInterface **)inOutPoint.v;
    _R15 = (__int64)v174;
    if ( v24 == 3 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r13+4]
        vucomiss xmm0, dword ptr [rsi+868h]
        vmovss  xmm0, dword ptr [r13+8]
        vucomiss xmm0, dword ptr [rsi+86Ch]
      }
      v51 = 0;
    }
    else
    {
      v51 = 1;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15+130h]
      vucomiss xmm0, dword ptr [rsi+858h]
    }
    if ( v24 == 3 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15+134h]
        vucomiss xmm0, dword ptr [rsi+85Ch]
        vmovss  xmm0, dword ptr [r15+138h]
        vucomiss xmm0, dword ptr [rsi+860h]
      }
      v55 = 1;
    }
    else
    {
      v55 = 0;
    }
    if ( !v51 && v55 )
      goto LABEL_67;
    v56 = *(__int64 **)(*(_QWORD *)inOutPoint.v + 16i64);
    __asm
    {
      vmovaps [rsp+250h+var_90], xmm12
      vmovaps [rsp+250h+var_A0], xmm13
    }
    _RCX = *v56;
    __asm
    {
      vmovss  xmm11, dword ptr [rcx+130h]
      vmovss  xmm12, dword ptr [rcx+134h]
      vmovss  xmm13, dword ptr [rcx+138h]
    }
    if ( v51 )
    {
      AnglesToAxis(&_RSI->Physics.vPrevGroundAngles, &in);
      MatrixTranspose(&in, &out);
      AnglesToAxis(angles, &in);
      MatrixMultiply(&out, &in, &in2);
      if ( !v171 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15+140h]
          vsubss  xmm8, xmm0, dword ptr [rsi+868h]
        }
        v63 = v47->Is3D(v47);
        v64 = v47->m_pAI;
        if ( v63 )
        {
          _RAX = angles;
          __asm
          {
            vmovss  xmm1, dword ptr [r15+144h]
            vsubss  xmm6, xmm1, dword ptr [rsi+86Ch]
            vaddss  xmm2, xmm6, dword ptr [rcx+988h]
            vaddss  xmm1, xmm8, dword ptr [rcx+984h]
            vmovss  xmm0, dword ptr [rax]
            vsubss  xmm7, xmm0, dword ptr [rsi+864h]
            vaddss  xmm0, xmm7, dword ptr [rcx+98Ch]
          }
          v73 = v47->__vftable;
          __asm
          {
            vmovss  dword ptr [rbp+150h+angles], xmm0
            vmovss  dword ptr [rbp+150h+angles+4], xmm1
            vmovss  [rbp+150h+var_1B0], xmm2
          }
          v73->SetDesiredBodyAngles(v47, &v64->CodeOrient, (const vec3_t *)&angles, 1);
          v74 = v47->__vftable;
          __asm
          {
            vaddss  xmm2, xmm6, dword ptr [rdx+9A0h]
            vaddss  xmm1, xmm8, dword ptr [rdx+99Ch]
            vaddss  xmm0, xmm7, dword ptr [rdx+9A4h]
          }
          p_ScriptOrient = (__int64)&v47->m_pAI->ScriptOrient;
          __asm
          {
            vmovss  dword ptr [rsp+250h+var_1D8], xmm0
            vmovss  dword ptr [rsp+250h+var_1D8+4], xmm1
            vmovss  [rbp+150h+var_1D0], xmm2
          }
          v74->SetDesiredBodyAngles(v47, (ai_orient_t *)p_ScriptOrient, (const vec3_t *)&v174, 1);
          __asm { vaddss  xmm0, xmm7, dword ptr [rcx+13Ch]; angle }
          *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
          _RCX = v47->m_pAI->ent;
          __asm
          {
            vmovss  dword ptr [rcx+13Ch], xmm0
            vaddss  xmm0, xmm8, dword ptr [rcx+140h]; angle
          }
          *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
          _RCX = v47->m_pAI->ent;
          __asm
          {
            vmovss  dword ptr [rcx+140h], xmm0
            vaddss  xmm0, xmm6, dword ptr [rcx+144h]; angle
          }
          *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
          _RAX = v47->m_pAI->ent;
          __asm
          {
            vmovss  dword ptr [rax+144h], xmm0
            vaddss  xmm2, xmm8, dword ptr [rcx+144h]; fYaw
            vaddss  xmm1, xmm7, dword ptr [rcx+140h]; fPitch
          }
          AIScriptedInterface::SetLookAngles(v47, *(const float *)&_XMM1, *(const float *)&_XMM2);
        }
        else if ( v64->Physics.bTrackMoverUp )
        {
          AnglesToAxis(&v64->ent->r.currentAngles, &in1);
          MatrixMultiply(&in1, &in2, &v186);
          AxisToAngles(&v186, &v179);
          v47->SetDesiredBodyAngles(v47, &v47->m_pAI->CodeOrient, &v179, 1);
          v47->SetDesiredBodyAngles(v47, &v47->m_pAI->ScriptOrient, &v179, 1);
          v47->SetBodyAngles(v47, &v179);
        }
        else
        {
          __asm
          {
            vmovaps xmm2, xmm8; yawDelta
            vmovaps xmm1, xmm10; pitchDelta
          }
          AIScriptedInterface::ForcePitchAndYawDeltas(v47, *(const float *)&_XMM1, *(const float *)&_XMM2);
        }
        _RBX = v47->m_pAI;
        __asm { vaddss  xmm0, xmm8, dword ptr [rbx+0C8h]; angle }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        p_dir = (vec2_t *)&v47->m_pAI->eyeInfo.dir;
        __asm
        {
          vmovaps xmm1, xmm8; yaw
          vmovss  dword ptr [rbx+0C8h], xmm0
        }
        UpdateMovingPlatformDirection2D(p_dir, *(float *)&_XMM1);
        __asm { vmovaps xmm1, xmm8; yaw }
        UpdateMovingPlatformDirection2D(&v47->m_pAI->prevMoveDir2D, *(float *)&_XMM1);
        __asm { vmovaps xmm1, xmm8; yaw }
        UpdateMovingPlatformDirection2D((vec2_t *)&v47->m_pAI->Physics.vHitNormal, *(float *)&_XMM1);
        UpdateMovingPlatformDirection(&in2, &v47->m_pAI->Physics.vVelocity);
        UpdateMovingPlatformDirection(&in2, &v47->m_pAI->Physics.vWishDelta);
        __asm
        {
          vmovss  xmm2, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
          vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
          vmovss  xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
        }
        for ( _RBX = 2484i64; _RBX < 2604; v95 = _RBX == 2604 )
        {
          _RAX = v47->m_pAI;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rax]
            vucomiss xmm0, xmm3
          }
          _R8 = (vec3_t *)((char *)_RAX + _RBX);
          if ( !v95 )
            goto LABEL_43;
          __asm { vucomiss xmm1, dword ptr [r8+4] }
          if ( !v95 )
            goto LABEL_43;
          __asm { vucomiss xmm2, dword ptr [r8+8] }
          if ( !v95 )
          {
LABEL_43:
            __asm
            {
              vmovss  xmm1, dword ptr [r8+8]
              vmovss  dword ptr [rbp+150h+var_198], xmm0
              vmovss  xmm0, dword ptr [r8+4]
              vmovss  dword ptr [rbp+150h+var_198+4], xmm0
              vmovss  dword ptr [rbp+150h+var_198+8], xmm1
            }
            MatrixTransformVector(&v180, &in2, _R8);
            _RAX = v47->m_pAI;
            __asm
            {
              vmovss  xmm2, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
              vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
              vmovss  xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
            }
          }
          _RBX += 12i64;
        }
        _R8 = &_RAX->arrivalInfo.offsetIncrement;
        __asm
        {
          vmovss  xmm0, dword ptr [r8]
          vucomiss xmm0, xmm3
        }
        if ( _RBX == 2604 )
        {
          __asm
          {
            vucomiss xmm1, dword ptr [r8+4]
            vucomiss xmm2, dword ptr [r8+8]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r8+8]
            vmovss  dword ptr [rbp+150h+var_188], xmm0
            vmovss  xmm0, dword ptr [r8+4]
            vmovss  dword ptr [rbp+150h+var_188+4], xmm0
            vmovss  dword ptr [rbp+150h+var_188+8], xmm1
          }
          MatrixTransformVector(&v181, &in2, _R8);
        }
        goto LABEL_49;
      }
    }
    else
    {
      MatrixIdentity33(&in2);
      v95 = v171 == 0;
      if ( !v171 )
      {
LABEL_49:
        _RBX = v47->m_pAI;
        _RAX = _RBX->ent;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+92Ch]
          vucomiss xmm0, xmm10
          vmovss  xmm1, dword ptr [rax+138h]
        }
        if ( !v95 )
          goto LABEL_51;
        __asm { vucomiss xmm10, dword ptr [rbx+930h] }
        if ( !v95 )
        {
LABEL_51:
          __asm
          {
            vmovss  dword ptr [rbp+150h+inOutPoint], xmm0
            vmovss  xmm0, dword ptr [rbx+930h]
            vmovss  dword ptr [rbp+150h+inOutPoint+4], xmm0
            vmovss  dword ptr [rbp+150h+inOutPoint+8], xmm1
          }
          UpdateMovingPlatformPoint(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), &inOutPoint);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+150h+inOutPoint]
            vmovss  xmm1, dword ptr [rbp+150h+inOutPoint+4]
            vmovss  dword ptr [rbx+92Ch], xmm0
            vmovss  dword ptr [rbx+930h], xmm1
          }
          _RBX = v47->m_pAI;
        }
        UpdateMovingPlatformPoint(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), &_RBX->sight.lastEnemySightPos);
        UpdateMovingPlatformPoint(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), &v47->m_pAI->eyeInfo.pos);
        LookAtPos = AIScriptedInterface::GetLookAtPos(v47);
        UpdateMovingPlatformPoint(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), LookAtPos);
        UpdateMovingPlatformPoint(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), &v47->m_pAI->Physics.vOrigin);
        UpdateMovingPlatformPoint(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), &v47->m_pAI->ent->r.currentOrigin);
        G_PhysicsCharacterProxy_Teleport(v47->m_pAI->ent, 1);
      }
    }
    UpdateMovingPlatformPoint(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), &v47->m_pAI->codeGoal.pos);
    UpdateMovingPlatformPoint(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), &v47->m_pAI->scriptGoal.pos);
    v117 = v47->m_pAI;
    v118 = 0;
    if ( v117->scriptGoalPath.numPoints )
    {
      do
      {
        UpdateMovingPlatformPoint(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), &v117->scriptGoalPath.path[v118]);
        v117 = v47->m_pAI;
        ++v118;
      }
      while ( v118 < v117->scriptGoalPath.numPoints );
    }
    v119 = 0i64;
    v120 = 3i64;
    do
    {
      v121 = v117;
      if ( v117->btGoals[v10].bValid )
      {
        UpdateMovingPlatformPoint(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), &v117->btGoals[v119].pos);
        v117 = v47->m_pAI;
        v120 = v172;
        v121 = v117;
      }
      else
      {
        v117 = v47->m_pAI;
      }
      ++v119;
      ++v10;
      v172 = --v120;
    }
    while ( v120 );
    G_MotionWarp_MovingPlatformUpdate(&in2, v51, &_RSI->Physics.vPrevGroundOrigin, (const vec3_t *)(_R15 + 304), v121->ent->s.number);
    _RCX = v47->m_pAI->ent;
    if ( v171 )
    {
      __asm
      {
        vmovss  xmm9, dword ptr [rcx+130h]
        vucomiss xmm9, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
        vmovss  xmm8, dword ptr [rcx+134h]
        vmovss  xmm2, dword ptr [rcx+138h]
        vmovss  xmm0, dword ptr [rsi+858h]
        vmovss  xmm1, dword ptr [rsi+85Ch]
        vmovss  xmm3, dword ptr [rsi+860h]
      }
      if ( v51 )
      {
        __asm
        {
          vsubss  xmm7, xmm2, xmm3
          vsubss  xmm5, xmm8, xmm1
          vmulss  xmm3, xmm5, dword ptr [rsp+250h+in2+0Ch]
          vmulss  xmm1, xmm7, dword ptr [rsp+250h+in2+18h]
          vsubss  xmm6, xmm9, xmm0
          vmulss  xmm2, xmm6, dword ptr [rsp+250h+in2]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm3, xmm5, dword ptr [rsp+250h+in2+10h]
          vaddss  xmm2, xmm4, xmm1
          vaddss  xmm9, xmm2, dword ptr [r15+130h]
          vmulss  xmm2, xmm6, dword ptr [rsp+250h+in2+4]
          vmulss  xmm1, xmm7, dword ptr [rsp+250h+in2+1Ch]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm3, xmm5, dword ptr [rsp+250h+in2+14h]
          vaddss  xmm2, xmm4, xmm1
          vaddss  xmm8, xmm2, dword ptr [r15+134h]
          vmulss  xmm2, xmm6, dword ptr [rsp+250h+in2+8]
          vmulss  xmm1, xmm7, dword ptr [rsp+250h+in2+20h]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vaddss  xmm2, xmm2, dword ptr [r15+138h]
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm9, xmm0
          vaddss  xmm9, xmm0, dword ptr [r15+130h]
          vsubss  xmm0, xmm2, xmm3
          vaddss  xmm2, xmm0, dword ptr [r15+138h]
          vsubss  xmm1, xmm8, xmm1
          vaddss  xmm8, xmm1, dword ptr [r15+134h]
        }
      }
      __asm
      {
        vsubss  xmm0, xmm9, xmm11
        vsubss  xmm1, xmm8, xmm12
        vmovss  dword ptr [rsi+87Ch], xmm0
        vmovss  dword ptr [rsi+880h], xmm1
        vsubss  xmm2, xmm2, xmm13
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vsubss  xmm1, xmm0, xmm11
        vmovss  dword ptr [rsi+87Ch], xmm1
        vmovss  xmm2, dword ptr [rcx+134h]
        vsubss  xmm0, xmm2, xmm12
        vmovss  dword ptr [rsi+880h], xmm0
        vmovss  xmm1, dword ptr [rcx+138h]
        vsubss  xmm2, xmm1, xmm13
      }
    }
    __asm { vmovss  dword ptr [rsi+884h], xmm2 }
    SV_LinkEntity(v47->m_pAI->ent);
    __asm
    {
      vmovaps xmm13, [rsp+250h+var_A0]
      vmovaps xmm12, [rsp+250h+var_90]
    }
LABEL_67:
    __asm
    {
      vmovaps xmm10, [rsp+250h+var_70]
      vmovaps xmm9, [rsp+250h+var_60]
      vmovaps xmm8, [rsp+250h+var_50]
      vmovaps xmm7, [rsp+250h+var_40]
      vmovaps xmm6, [rsp+250h+var_30]
      vmovaps xmm11, [rsp+250h+var_80]
    }
  }
}

/*
==============
UpdateMovingPlatformDirection2D
==============
*/

void __fastcall UpdateMovingPlatformDirection2D(vec2_t *inOutDir, double yaw)
{
  _BYTE v17[32]; 
  float c; 
  float s; 
  vec2_t v20; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rcx]
    vmovaps xmm6, xmm1
  }
  _RBX = inOutDir;
  if ( (unsigned __int64)v17 != _security_cookie )
    goto LABEL_3;
  __asm { vucomiss xmm0, dword ptr [rcx+4] }
  if ( (unsigned __int64)v17 != _security_cookie )
  {
LABEL_3:
    v20 = *inOutDir;
    if ( &v20 == inOutDir && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 887, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
      __debugbreak();
    __asm { vmovaps xmm0, xmm6; radians }
    FastSinCos(*(const float *)&_XMM0, &s, &c);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+68h+var_30]
      vmovss  xmm2, dword ptr [rsp+68h+var_30+4]
      vmulss  xmm0, xmm2, [rsp+68h+s]
      vmulss  xmm1, xmm5, [rsp+68h+c]
      vmulss  xmm2, xmm2, [rsp+68h+c]
      vsubss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm5, [rsp+68h+s]
      vmovss  dword ptr [rbx], xmm1
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
UpdateMovingPlatformDirection
==============
*/
void UpdateMovingPlatformDirection(const tmat33_t<vec3_t> *rotMtx, vec3_t *inOutDir)
{
  char v2; 
  vec3_t in1; 

  __asm
  {
    vmovss  xmm1, dword ptr [rdx]
    vucomiss xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
  }
  if ( !v2 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rdx+4]
  }
  if ( !v2 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rdx+8]
  }
  if ( !v2 )
  {
LABEL_4:
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+4]
      vmovss  dword ptr [rsp+48h+in1], xmm1
      vmovss  xmm1, dword ptr [rdx+8]
      vmovss  dword ptr [rsp+48h+in1+4], xmm0
      vmovss  dword ptr [rsp+48h+in1+8], xmm1
    }
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
  char v5; 
  vec3_t in1; 
  vec3_t out; 

  _RBX = inOutPoint;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vucomiss xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
  }
  if ( !v5 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rbx+4]
  }
  if ( !v5 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rbx+8]
  }
  if ( !v5 )
  {
LABEL_4:
    __asm
    {
      vsubss  xmm2, xmm1, dword ptr [r8]
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  xmm0, dword ptr [rbx+4]
      vsubss  xmm4, xmm1, dword ptr [r8+8]
      vsubss  xmm3, xmm0, dword ptr [r8+4]
    }
    if ( anglesValid )
    {
      __asm
      {
        vmovss  dword ptr [rsp+58h+in1], xmm2
        vmovss  dword ptr [rsp+58h+in1+4], xmm3
        vmovss  dword ptr [rsp+58h+in1+8], xmm4
      }
      MatrixTransformVector(&in1, rotMtx, &out);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+out]
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmovss  xmm2, dword ptr [rsp+58h+out+4]
        vmovss  dword ptr [rbx], xmm1
        vaddss  xmm0, xmm2, dword ptr [rdi+4]
        vmovss  xmm1, dword ptr [rsp+58h+out+8]
        vmovss  dword ptr [rbx+4], xmm0
        vaddss  xmm2, xmm1, dword ptr [rdi+8]
        vmovss  dword ptr [rbx+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vaddss  xmm0, xmm2, dword ptr [r9]
        vmovss  dword ptr [rbx], xmm0
        vaddss  xmm1, xmm3, dword ptr [r9+4]
        vmovss  dword ptr [rbx+4], xmm1
        vaddss  xmm0, xmm4, dword ptr [r9+8]
        vmovss  dword ptr [rbx+8], xmm0
      }
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
  vec4_t *v4; 
  vec4_t in1; 
  vec4_t out; 

  if ( anglesValid )
  {
    __asm { vmovups xmm0, xmmword ptr [r8] }
    v4 = inOutQuat;
    __asm { vmovups xmmword ptr [rsp+58h+in1], xmm0 }
    AxisToQuat(rotMtx, &out);
    QuatMultiply(&in1, &out, v4);
  }
}

