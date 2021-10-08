/*
==============
CgTrajectory::GetPhysicsWorld
==============
*/

int __fastcall CgTrajectory::GetPhysicsWorld(CgTrajectory *this)
{
  return ?GetPhysicsWorld@CgTrajectory@@UEBAHXZ(this);
}

/*
==============
CgTrajectory::InterpolateEntityAngles
==============
*/

void __fastcall CgTrajectory::InterpolateEntityAngles(const cg_t *cgameGlob, const centity_t *cent, vec3_t *outAngles)
{
  ?InterpolateEntityAngles@CgTrajectory@@SAXPEBVcg_t@@PEBUcentity_t@@AEATvec3_t@@@Z(cgameGlob, cent, outAngles);
}

/*
==============
CgTrajectory::CgTrajectory
==============
*/

void __fastcall CgTrajectory::CgTrajectory(CgTrajectory *this, const LocalClientNum_t localClientNum, const centity_t *cent, const LerpEntityState *es)
{
  ??0CgTrajectory@@QEAA@W4LocalClientNum_t@@PEBUcentity_t@@PEBULerpEntityState@@@Z(this, localClientNum, cent, es);
}

/*
==============
CgTrajectory::IsClient
==============
*/

bool __fastcall CgTrajectory::IsClient(CgTrajectory *this)
{
  return ?IsClient@CgTrajectory@@UEBA_NXZ(this);
}

/*
==============
CgTrajectory::InterpolateEntityAngles
==============
*/

void __fastcall CgTrajectory::InterpolateEntityAngles(const cg_t *cgameGlob, centity_t *cent)
{
  ?InterpolateEntityAngles@CgTrajectory@@SAXPEBVcg_t@@PEAUcentity_t@@@Z(cgameGlob, cent);
}

/*
==============
CgTrajectory::GetTargetPos
==============
*/

bool __fastcall CgTrajectory::GetTargetPos(CgTrajectory *this, vec3_t *outPos)
{
  return ?GetTargetPos@CgTrajectory@@UEBA_NAEATvec3_t@@@Z(this, outPos);
}

/*
==============
CgTrajectory::CgTrajectory
==============
*/
void CgTrajectory::CgTrajectory(CgTrajectory *this, const LocalClientNum_t localClientNum, const centity_t *cent, const LerpEntityState *es)
{
  BgTrajectory::BgTrajectory(this);
  this->m_localClientNum = localClientNum;
  this->__vftable = (CgTrajectory_vtbl *)&CgTrajectory::`vftable';
  this->m_cent = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trajectory.cpp", 26, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trajectory.cpp", 27, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  this->m_es = es;
}

/*
==============
CgTrajectory::GetPhysicsWorld
==============
*/
__int64 CgTrajectory::GetPhysicsWorld(CgTrajectory *this)
{
  return (unsigned int)(3 * this->m_localClientNum + 2);
}

/*
==============
CgTrajectory::GetTargetPos
==============
*/
char CgTrajectory::GetTargetPos(CgTrajectory *this, vec3_t *outPos)
{
  __int64 m_localClientNum; 
  cg_t *v5; 
  const centity_t *m_cent; 
  __int64 v7; 
  __int64 v8; 
  CgEntitySystem *v9; 
  __int64 v10; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  char result; 
  __int64 v26; 
  __int64 v27; 

  _RDI = outPos;
  if ( !this->m_cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trajectory.cpp", 46, ASSERT_TYPE_ASSERT, "(m_cent)", (const char *)&queryFormat, "m_cent") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= cg_t::ms_allocatedCount )
  {
    LODWORD(v26) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v26, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[m_localClientNum] )
  {
    LODWORD(v27) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v27) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v27) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v27) )
      __debugbreak();
  }
  v5 = cg_t::ms_cgArray[m_localClientNum];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trajectory.cpp", 49, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( v5->firstSnapshot )
    goto LABEL_38;
  m_cent = this->m_cent;
  if ( m_cent->nextState.eType != ET_MISSILE )
    goto LABEL_38;
  v7 = m_cent->nextState.lerp.u.anonymous.data[5];
  if ( (_DWORD)v7 == 2047 )
    goto LABEL_38;
  v8 = this->m_localClientNum;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v27) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v27) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v27) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v26) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v8] )
  {
    LODWORD(v27) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v27) )
      __debugbreak();
  }
  v9 = CgEntitySystem::ms_entitySystemArray[v8];
  if ( (unsigned int)v7 >= 0x800 )
  {
    LODWORD(v27) = 2048;
    LODWORD(v26) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  v10 = (__int64)&v9->m_entities[v7];
  if ( (*(_BYTE *)(v10 + 648) & 1) == 0 )
  {
LABEL_38:
    result = 0;
    *(_QWORD *)_RDI->v = 0i64;
    _RDI->v[2] = 0.0;
  }
  else
  {
    if ( !*(_QWORD *)(v10 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v10 + 48), (const cpose_t *)v10);
    FunctionPointer_origin((const vec4_t *)(v10 + 56), _RDI);
    if ( *(_BYTE *)(v10 + 2) )
    {
      __asm
      {
        vmovsd  xmm3, cs:__real@3f30000000000000
        vmovd   xmm0, dword ptr [rdi]
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm0, xmm0, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovd   xmm0, dword ptr [rdi+4]
        vcvtdq2pd xmm0, xmm0
        vmovss  dword ptr [rdi], xmm1
        vmulsd  xmm1, xmm0, xmm3
        vmovd   xmm0, dword ptr [rdi+8]
        vcvtsd2ss xmm2, xmm1, xmm1
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm1, xmm0, xmm3
        vmovss  dword ptr [rdi+4], xmm2
        vcvtsd2ss xmm2, xmm1, xmm1
        vmovss  dword ptr [rdi+8], xmm2
      }
    }
    return 1;
  }
  return result;
}

/*
==============
CgTrajectory::InterpolateEntityAngles
==============
*/
void CgTrajectory::InterpolateEntityAngles(const cg_t *cgameGlob, centity_t *cent)
{
  CgTrajectory::InterpolateEntityAngles(cgameGlob, cent, &cent->pose.angles);
}

/*
==============
CgTrajectory::InterpolateEntityAngles
==============
*/
void CgTrajectory::InterpolateEntityAngles(const cg_t *cgameGlob, const centity_t *cent, vec3_t *outAngles)
{
  int serverTime; 
  int v13; 
  CgTrajectory v66; 
  vec3_t outAng; 
  vec3_t angles; 
  vec4_t qb; 
  vec4_t quat; 
  vec4_t out; 
  tmat33_t<vec3_t> axis; 
  __int64 v74; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v74;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R14 = outAngles;
  _RBX = cgameGlob;
  if ( !cgameGlob->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trajectory.cpp", 105, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !_RBX->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trajectory.cpp", 106, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  __asm { vmovss  xmm6, dword ptr [rbx+65E0h] }
  serverTime = _RBX->snap->serverTime;
  v13 = _RBX->nextSnap->serverTime;
  LOBYTE(_EAX) = CG_IsEntityInterpolationValid(cent);
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  _ECX = 0;
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ecx
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( cent->prevState.apos.trType == TR_SLERP && cent->nextState.lerp.apos.trType == TR_SLERP )
  {
    CgTrajectory::CgTrajectory(&v66, (const LocalClientNum_t)_RBX->localClientNum, cent, &cent->nextState.lerp);
    __asm
    {
      vsubss  xmm1, xmm7, [rsp+140h+var_110]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r15d
      vmulss  xmm3, xmm1, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r12d
      vmulss  xmm2, xmm1, [rsp+140h+var_110]
      vaddss  xmm0, xmm3, xmm2
      vcvttss2si edx, xmm0; atTime
    }
    BgTrajectory::EvaluateAngTrajectory(&v66, _EDX, _R14);
  }
  else
  {
    CgTrajectory::CgTrajectory(&v66, (const LocalClientNum_t)_RBX->localClientNum, cent, &cent->prevState);
    BgTrajectory::EvaluateAngTrajectory(&v66, serverTime, &outAng);
    v66.m_es = &cent->nextState.lerp;
    BgTrajectory::EvaluateAngTrajectory(&v66, v13, &angles);
    if ( cent->nextState.eType == ET_ACTOR && (LOBYTE(cent->nextState.un.animRate) & 8) != 0 )
    {
      AnglesToQuat(&outAng, &quat);
      AnglesToQuat(&angles, &qb);
      __asm { vmovss  xmm2, [rsp+140h+var_110]; frac }
      QuatLerp(&quat, &qb, *(float *)&_XMM2, &out);
      QuatToAxis(&out, &axis);
      AxisToAngles(&axis, _R14);
    }
    else
    {
      __asm
      {
        vmovss  xmm7, cs:__real@43b40000
        vmovss  xmm6, [rsp+140h+var_110]
        vmovss  xmm0, dword ptr [rsp+140h+angles]
        vsubss  xmm1, xmm0, dword ptr [rsp+140h+outAng]
        vmulss  xmm3, xmm1, cs:__real@3b360b61
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vmovaps xmmword ptr [rsp+140h+var_68+8], xmm10
        vxorps  xmm10, xmm10, xmm10
        vroundss xmm2, xmm10, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm1, xmm0, dword ptr [rsp+140h+outAng]
        vmovss  xmm0, dword ptr [rsp+140h+angles+4]
        vmovss  dword ptr [r14], xmm1
        vsubss  xmm1, xmm0, dword ptr [rsp+140h+outAng+4]
        vmulss  xmm4, xmm1, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vroundss xmm3, xmm10, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm7
        vmovss  xmm0, dword ptr [rsp+140h+angles+8]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsp+140h+outAng+4]
        vsubss  xmm1, xmm0, dword ptr [rsp+140h+outAng+8]
        vmulss  xmm4, xmm1, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vmovss  dword ptr [r14+4], xmm3
        vroundss xmm3, xmm10, xmm2, 1
        vmovaps xmm10, xmmword ptr [rsp+140h+var_68+8]
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsp+140h+outAng+8]
        vmovss  dword ptr [r14+8], xmm3
      }
    }
  }
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CgTrajectory::IsClient
==============
*/
char CgTrajectory::IsClient(CgTrajectory *this)
{
  return 1;
}

