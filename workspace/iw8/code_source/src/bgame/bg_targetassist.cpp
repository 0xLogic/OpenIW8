/*
==============
BgTargetAssist::GetConeTargetType
==============
*/

ConeTargetType __fastcall BgTargetAssist::GetConeTargetType(BgTargetAssist *this, const entityState_t *es)
{
  return ?GetConeTargetType@BgTargetAssist@@AEBA?AW4ConeTargetType@@PEBUentityState_t@@@Z(this, es);
}

/*
==============
BgTargetAssist::GetConeTargetTagList
==============
*/

void __fastcall BgTargetAssist::GetConeTargetTagList(BgTargetAssist *this, const entityState_t *const es, ConeTarget *const coneTargetTagList)
{
  ?GetConeTargetTagList@BgTargetAssist@@AEBAXQEBUentityState_t@@QEAUConeTarget@@@Z(this, es, coneTargetTagList);
}

/*
==============
BgTargetAssist::AddTarget
==============
*/

bool __fastcall BgTargetAssist::AddTarget(BgTargetAssist *this, const BgTargetAssist::TargetInfo *targetInfo)
{
  return ?AddTarget@BgTargetAssist@@QEAA_NPEBUTargetInfo@1@@Z(this, targetInfo);
}

/*
==============
BgTargetAssist::FindBonesWithinCone
==============
*/

bool __fastcall BgTargetAssist::FindBonesWithinCone(BgTargetAssist *this, const BGConeTargetBoneSearchParam *searchParam, ConeTargetHitResults *outSearchResults)
{
  return ?FindBonesWithinCone@BgTargetAssist@@QEBA_NPEBUBGConeTargetBoneSearchParam@@PEAUConeTargetHitResults@@@Z(this, searchParam, outSearchResults);
}

/*
==============
BgTargetAssist::DebugDrawBounds
==============
*/

void __fastcall BgTargetAssist::DebugDrawBounds(BgTargetAssist *this, const BGConeTargetBoneSearchParam *searchParam, const Bounds *baseBounds, const vec3_t *origin, const tmat33_t<vec3_t> *axis)
{
  ?DebugDrawBounds@BgTargetAssist@@AEBAXPEBUBGConeTargetBoneSearchParam@@PEBUBounds@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@@Z(this, searchParam, baseBounds, origin, axis);
}

/*
==============
BgTargetAssist::IsTargetListFull
==============
*/

bool __fastcall BgTargetAssist::IsTargetListFull(BgTargetAssist *this)
{
  return ?IsTargetListFull@BgTargetAssist@@QEBA_NXZ(this);
}

/*
==============
BgTargetAssist::DebugDrawCone
==============
*/

void __fastcall BgTargetAssist::DebugDrawCone(BgTargetAssist *this, const BGConeTargetBoneSearchParam *searchParam)
{
  ?DebugDrawCone@BgTargetAssist@@AEBAXPEBUBGConeTargetBoneSearchParam@@@Z(this, searchParam);
}

/*
==============
BgTargetAssist::GetShieldMaxAngle
==============
*/

double __fastcall BgTargetAssist::GetShieldMaxAngle(BgTargetAssist *this)
{
  double result; 

  *(float *)&result = ?GetShieldMaxAngle@BgTargetAssist@@QEBAMXZ(this);
  return result;
}

/*
==============
BgTargetAssist::GetTargetCount
==============
*/

int __fastcall BgTargetAssist::GetTargetCount(BgTargetAssist *this)
{
  return ?GetTargetCount@BgTargetAssist@@QEBAHXZ(this);
}

/*
==============
BgTargetAssist::ClearTargets
==============
*/

void __fastcall BgTargetAssist::ClearTargets(BgTargetAssist *this)
{
  ?ClearTargets@BgTargetAssist@@QEAAXXZ(this);
}

/*
==============
BgTargetAssist::IsEntityPotentialTarget
==============
*/

bool __fastcall BgTargetAssist::IsEntityPotentialTarget(BgTargetAssist *this, const entityState_t *es)
{
  return ?IsEntityPotentialTarget@BgTargetAssist@@QEBA_NPEBUentityState_t@@@Z(this, es);
}

/*
==============
ConeTargetInfo::GetHitResults
==============
*/

const ConeTargetHitResults *__fastcall ConeTargetInfo::GetHitResults(ConeTargetInfo *this)
{
  return ?GetHitResults@ConeTargetInfo@@QEBAAEBUConeTargetHitResults@@XZ(this);
}

/*
==============
ConeTargetInfo::ConeTargetInfo
==============
*/

void __fastcall ConeTargetInfo::ConeTargetInfo(ConeTargetInfo *this)
{
  ??0ConeTargetInfo@@QEAA@XZ(this);
}

/*
==============
ConeTargetHitResults::GetFirstVisibleHit
==============
*/

ConeTargetHitInfo *__fastcall ConeTargetHitResults::GetFirstVisibleHit(ConeTargetHitResults *this)
{
  return ?GetFirstVisibleHit@ConeTargetHitResults@@QEAAPEAUConeTargetHitInfo@@XZ(this);
}

/*
==============
ConeTargetHitResults::GetFirstVisibleHit
==============
*/

const ConeTargetHitInfo *__fastcall ConeTargetHitResults::GetFirstVisibleHit(ConeTargetHitResults *this)
{
  return ?GetFirstVisibleHit@ConeTargetHitResults@@QEBAPEBUConeTargetHitInfo@@XZ(this);
}

/*
==============
ConeTargetInfo::~ConeTargetInfo
==============
*/

void __fastcall ConeTargetInfo::~ConeTargetInfo(ConeTargetInfo *this)
{
  ??1ConeTargetInfo@@UEAA@XZ(this);
}

/*
==============
ConeTargetInfo::GetHitResults
==============
*/

ConeTargetHitResults *__fastcall ConeTargetInfo::GetHitResults(ConeTargetInfo *this)
{
  return ?GetHitResults@ConeTargetInfo@@QEAAAEAUConeTargetHitResults@@XZ(this);
}

/*
==============
ConeTargetInfo::ConeTargetInfo
==============
*/
void ConeTargetInfo::ConeTargetInfo(ConeTargetInfo *this)
{
  this->__vftable = (ConeTargetInfo_vtbl *)&ConeTargetInfo::`vftable';
  memset_0(&this->m_hitResults, 0, sizeof(this->m_hitResults));
}

/*
==============
ConeTargetInfo::~ConeTargetInfo
==============
*/
void ConeTargetInfo::~ConeTargetInfo(ConeTargetInfo *this)
{
  this->__vftable = (ConeTargetInfo_vtbl *)&ConeTargetInfo::`vftable';
}

/*
==============
BgTargetAssist::AddTarget
==============
*/
char BgTargetAssist::AddTarget(BgTargetAssist *this, const BgTargetAssist::TargetInfo *targetInfo)
{
  volatile int *p_m_targetCount; 
  int v5; 
  BgTargetAssist::TargetInfo *v6; 
  int v8; 

  if ( !targetInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 152, ASSERT_TYPE_ASSERT, "(targetInfo)", (const char *)&queryFormat, "targetInfo") )
    __debugbreak();
  p_m_targetCount = &this->m_targetCount;
  if ( (((_BYTE)this + 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_targetCount) )
    __debugbreak();
  v5 = _InterlockedExchangeAdd(p_m_targetCount, 1u);
  if ( v5 >= this->GetMaxTargetCount(this) )
  {
    if ( (((_BYTE)this + 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_targetCount) )
      __debugbreak();
    _InterlockedDecrement(p_m_targetCount);
    v8 = this->GetMaxTargetCount(this);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 168, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tTarget assist reached the maximum target count of %d. This number must be bumped before ship.", "0", v8) )
      __debugbreak();
    return 0;
  }
  else
  {
    v6 = this->GetTargetStorage(this);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 158, ASSERT_TYPE_ASSERT, "(targetStorage)", (const char *)&queryFormat, "targetStorage") )
      __debugbreak();
    v6[v5] = *targetInfo;
    return 1;
  }
}

/*
==============
BgTargetAssist::ClearTargets
==============
*/
void BgTargetAssist::ClearTargets(BgTargetAssist *this)
{
  BgTargetAssist_vtbl *v1; 
  void *v3; 
  int v4; 

  v1 = this->__vftable;
  this->m_targetCount = 0;
  v3 = (void *)((__int64 (*)(void))v1->GetTargetStorage)();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 144, ASSERT_TYPE_ASSERT, "(targetStorage)", (const char *)&queryFormat, "targetStorage") )
    __debugbreak();
  v4 = this->GetMaxTargetCount(this);
  memset_0(v3, 0, 4i64 * v4);
}

/*
==============
BgTargetAssist::DebugDrawBounds
==============
*/
void BgTargetAssist::DebugDrawBounds(BgTargetAssist *this, const BGConeTargetBoneSearchParam *searchParam, const Bounds *baseBounds, const vec3_t *origin, const tmat33_t<vec3_t> *axis)
{
  const dvar_t *v8; 
  bool v9; 
  const dvar_t *v10; 

  if ( !searchParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 438, ASSERT_TYPE_ASSERT, "(searchParam)", (const char *)&queryFormat, "searchParam") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_targetAssist_debug;
  if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.enabled && searchParam->isFiring;
  v10 = DCONST_DVARINT_targetAssist_debugDrawDuration;
  if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v9 )
    searchParam->pmoveHandler->DebugBoxOriented((BgHandler *)searchParam->pmoveHandler, origin, baseBounds, axis, &colorCyan, 1, v10->current.integer);
}

/*
==============
BgTargetAssist::DebugDrawCone
==============
*/
void BgTargetAssist::DebugDrawCone(BgTargetAssist *this, const BGConeTargetBoneSearchParam *searchParam)
{
  const dvar_t *v5; 
  bool v6; 
  const dvar_t *v7; 
  BgHandler *pmoveHandler; 
  BgHandler_vtbl *v24; 
  int v29[4]; 
  int v30[4]; 

  _RSI = searchParam;
  if ( !searchParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 411, ASSERT_TYPE_ASSERT, "(searchParam)", (const char *)&queryFormat, "searchParam") )
    __debugbreak();
  v5 = DCONST_DVARBOOL_targetAssist_debug;
  if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.enabled && _RSI->isFiring;
  v7 = DCONST_DVARINT_targetAssist_debugDrawDuration;
  if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v6 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm5, dword ptr [rsi+58h]
      vmovss  xmm4, dword ptr [rsi+5Ch]
    }
    pmoveHandler = (BgHandler *)_RSI->pmoveHandler;
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovss  xmm6, dword ptr [rsi+54h]
      vmovaps [rsp+0A8h+var_38], xmm7
      vmovss  xmm7, dword ptr [rsi+60h]
      vmulss  xmm2, xmm7, xmm4
      vmulss  xmm0, xmm7, xmm6
      vaddss  xmm1, xmm0, dword ptr [rsi+48h]
      vmovss  [rsp+0A8h+var_58], xmm1
      vmulss  xmm0, xmm7, xmm5
      vaddss  xmm1, xmm0, dword ptr [rsi+4Ch]
      vmovss  xmm0, dword ptr [rsi+64h]; X
      vmovss  [rsp+0A8h+var_54], xmm1
      vaddss  xmm1, xmm2, dword ptr [rsi+50h]
      vxorps  xmm2, xmm6, xmm3
      vmovss  [rsp+0A8h+var_68], xmm2
      vmovss  [rsp+0A8h+var_50], xmm1
      vxorps  xmm2, xmm4, xmm3
      vxorps  xmm1, xmm5, xmm3
      vmovss  [rsp+0A8h+var_60], xmm2
      vmovss  [rsp+0A8h+var_64], xmm1
    }
    v24 = pmoveHandler->__vftable;
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm3, xmm0, xmm7
      vmovss  dword ptr [rsp+0A8h+fmt], xmm7
    }
    ((void (__fastcall *)(BgHandler *, int *, int *))v24->DebugCone)(pmoveHandler, v30, v29);
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_38]
      vmovaps xmm6, [rsp+0A8h+var_28]
    }
  }
}

/*
==============
BgTargetAssist::FindBonesWithinCone
==============
*/
bool BgTargetAssist::FindBonesWithinCone(BgTargetAssist *this, const BGConeTargetBoneSearchParam *searchParam, ConeTargetHitResults *outSearchResults)
{
  const dvar_t *v8; 
  bool v9; 
  const dvar_t *v10; 
  BgHandler *pmoveHandler; 
  BgHandler_vtbl *v27; 
  XModelCharCollBoundsType v29; 
  const dvar_t *v36; 
  bool v37; 
  const dvar_t *v38; 
  const entityState_t *es; 
  int v46; 
  unsigned __int64 v50; 
  int *v51; 
  ConeTarget *p_coneTargetTagList; 
  hitLocation_t hitLocation; 
  const DObj *entityDobj; 
  scr_string_t tag_origin; 
  const dvar_t *v56; 
  const dvar_t *v59; 
  const __int16 *p_number; 
  int integer; 
  ConeTarget *v63; 
  unsigned __int64 i; 
  unsigned __int8 boneIndex; 
  char v77; 
  char v78; 
  __int64 v81; 
  int v87; 
  bool result; 
  vec4_t *v93; 
  char v94; 
  char v95; 
  unsigned __int8 inOutIndex[8]; 
  int v97; 
  BgTargetAssist *v98; 
  vec3_t point; 
  int v100[4]; 
  int v101[4]; 
  vec3_t coneDir; 
  vec3_t end; 
  Bounds bounds; 
  Bounds rotatedBounds; 
  DObjPartBits partBits; 
  tmat33_t<vec3_t> src; 
  DObjBoneInfo boneInfo[12]; 
  int v109[12]; 
  ConeTarget coneTargetTagList; 

  __asm { vmovaps [rsp+2E0h+var_50], xmm7 }
  v98 = this;
  _R15 = outSearchResults;
  _RSI = searchParam;
  if ( !searchParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 232, ASSERT_TYPE_ASSERT, "(searchParam)", (const char *)&queryFormat, "searchParam") )
    __debugbreak();
  if ( !_RSI->es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 233, ASSERT_TYPE_ASSERT, "(searchParam->es)", (const char *)&queryFormat, "searchParam->es") )
    __debugbreak();
  if ( !_RSI->entityDobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 234, ASSERT_TYPE_ASSERT, "(searchParam->entityDobj)", (const char *)&queryFormat, "searchParam->entityDobj") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 235, ASSERT_TYPE_ASSERT, "(outSearchResults)", (const char *)&queryFormat, "outSearchResults") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_targetAssist_debug;
  if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.enabled && _RSI->isFiring;
  v10 = DCONST_DVARINT_targetAssist_debugDrawDuration;
  if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
    __debugbreak();
  __asm { vmovaps [rsp+2E0h+var_40], xmm6 }
  Dvar_CheckFrontendServerThread(v10);
  __asm { vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000 }
  if ( v9 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+60h]
      vmovss  xmm2, dword ptr [rsi+54h]
      vmovss  xmm4, dword ptr [rsi+58h]
      vmovss  xmm3, dword ptr [rsi+5Ch]
    }
    pmoveHandler = (BgHandler *)_RSI->pmoveHandler;
    __asm
    {
      vmulss  xmm0, xmm6, xmm2
      vaddss  xmm1, xmm0, dword ptr [rsi+48h]
      vmovss  [rbp+1E0h+var_260], xmm1
      vmulss  xmm0, xmm6, xmm4
      vaddss  xmm1, xmm0, dword ptr [rsi+4Ch]
      vmulss  xmm0, xmm6, xmm3
      vmovss  [rbp+1E0h+var_25C], xmm1
      vaddss  xmm1, xmm0, dword ptr [rsi+50h]
      vmovss  [rbp+1E0h+var_258], xmm1
      vxorps  xmm0, xmm4, xmm7
      vmovss  [rsp+2E0h+var_26C], xmm0
      vmovss  xmm0, dword ptr [rsi+64h]; X
      vxorps  xmm1, xmm3, xmm7
      vxorps  xmm2, xmm2, xmm7
      vmovss  [rsp+2E0h+var_268], xmm1
      vmovss  [rsp+2E0h+var_270], xmm2
    }
    v27 = pmoveHandler->__vftable;
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
    v93 = &colorBlue;
    __asm
    {
      vmulss  xmm3, xmm0, xmm6
      vmovss  dword ptr [rsp+2E0h+fmt], xmm6
    }
    ((void (__fastcall *)(BgHandler *, int *, int *))v27->DebugCone)(pmoveHandler, v101, v100);
  }
  _R15->hitCount = 0;
  _R15->priority = 3.4028235e38;
  _R15->firstVisibleHitIndex = -1;
  v29 = this->GetCollBoundsType(this, _RSI->es->number);
  if ( (unsigned int)(v29 - 1) > 8 )
    v29 = CharCollBoundsType_Human;
  PhysicsCharacterProxy_GetEncapsulatingBounds(&bounds, v29);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+54h]
    vmovss  xmm2, dword ptr [rsi+58h]
    vxorps  xmm1, xmm0, xmm7
    vxorps  xmm0, xmm2, xmm7
    vmovss  dword ptr [rbp+1E0h+coneDir], xmm1
    vmovss  xmm1, dword ptr [rsi+5Ch]
    vxorps  xmm2, xmm1, xmm7
    vmovss  dword ptr [rbp+1E0h+coneDir+8], xmm2
    vmovss  dword ptr [rbp+1E0h+coneDir+4], xmm0
  }
  Bounds_Transform(&bounds, &_RSI->entityOrigin, &_RSI->entityAxis, &rotatedBounds);
  v36 = DCONST_DVARBOOL_targetAssist_debug;
  if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  v37 = v36->current.enabled && _RSI->isFiring;
  v38 = DCONST_DVARINT_targetAssist_debugDrawDuration;
  if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( v37 )
  {
    LODWORD(v93) = 1;
    _RSI->pmoveHandler->DebugBoxOriented((BgHandler *)_RSI->pmoveHandler, &_RSI->entityOrigin, &bounds, &_RSI->entityAxis, &colorCyan, (int)v93, v38->current.integer);
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+60h]; radius
    vmovss  xmm2, dword ptr [rsi+64h]; cosHalfFov
  }
  if ( CullBoxFromConicSectionOfSphere(&_RSI->bulletStart, &coneDir, *(float *)&_XMM2, *(float *)&_XMM3, &rotatedBounds) )
    goto LABEL_78;
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+60h]
    vmulss  xmm0, xmm2, dword ptr [rsi+54h]
    vaddss  xmm1, xmm0, dword ptr [rsi+48h]
    vmulss  xmm0, xmm2, dword ptr [rsi+58h]
  }
  es = _RSI->es;
  v46 = 0;
  __asm
  {
    vmovss  dword ptr [rbp+1E0h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4Ch]
    vmulss  xmm0, xmm2, dword ptr [rsi+5Ch]
    vmovss  dword ptr [rbp+1E0h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+50h]
    vmovss  dword ptr [rbp+1E0h+end+8], xmm1
  }
  BgTargetAssist::GetConeTargetTagList(v98, es, &coneTargetTagList);
  v50 = 0i64;
  v51 = v109;
  p_coneTargetTagList = &coneTargetTagList;
  do
  {
    hitLocation = p_coneTargetTagList->hitLocation;
    boneInfo[v50].boneIndex = -1;
    if ( hitLocation && HitLoc_MaskContains(_RSI->hitLocMask, hitLocation) && DObjGetBoneAndModelIndex(_RSI->entityDobj, *p_coneTargetTagList->tag, &boneInfo[v50]) )
    {
      DObjGetHidePartBits(_RSI->entityDobj, &partBits);
      if ( ((0x80000000 >> (boneInfo[v50].boneIndex & 0x1F)) & partBits.array[(unsigned __int64)boneInfo[v50].boneIndex >> 5]) != 0 )
      {
        boneInfo[v50].boneIndex = -1;
      }
      else
      {
        ++v46;
        *v51++ = boneInfo[v50].boneIndex;
      }
    }
    ++v50;
    ++p_coneTargetTagList;
  }
  while ( v50 < 0xC );
  v95 = 0;
  if ( v46 )
    goto LABEL_57;
  entityDobj = _RSI->entityDobj;
  tag_origin = scr_const.tag_origin;
  if ( !entityDobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 89, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !tag_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 90, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  inOutIndex[4] = -2;
  *(_DWORD *)inOutIndex = 0;
  if ( !DObjGetBoneIndexInternal_0(entityDobj, tag_origin, &inOutIndex[4], (int *)inOutIndex) )
  {
LABEL_78:
    result = 0;
    goto LABEL_79;
  }
  v46 = 1;
  boneInfo[0] = *(DObjBoneInfo *)inOutIndex;
  v109[0] = inOutIndex[4];
  v95 = 1;
LABEL_57:
  v56 = DCONST_DVARBOOL_targetAssist_debug;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+60h]
    vmulss  xmm7, xmm0, xmm0
  }
  if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( !v56->current.enabled || (v94 = 1, !_RSI->isFiring) )
    v94 = 0;
  v59 = DCONST_DVARINT_targetAssist_debugDrawDuration;
  if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v59);
  p_number = &_RSI->es->number;
  integer = v59->current.integer;
  v97 = integer;
  v98->CalculateSkeleton(v98, *(unsigned __int16 *)p_number, v46, v109);
  __asm { vmovss  xmm6, cs:__real@40400000 }
  v63 = &coneTargetTagList;
  for ( i = 0i64; i < 0xC; ++i )
  {
    boneIndex = boneInfo[i].boneIndex;
    if ( boneIndex != 0xFF )
    {
      v98->GetWorldBoneMatrix(v98, _RSI->es->number, boneIndex, &src, &point);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+2E0h+point]
        vsubss  xmm3, xmm0, dword ptr [rsi+48h]
        vmovss  xmm1, dword ptr [rsp+2E0h+point+4]
        vsubss  xmm2, xmm1, dword ptr [rsi+4Ch]
        vmovss  xmm0, dword ptr [rsp+2E0h+point+8]
        vsubss  xmm4, xmm0, dword ptr [rsi+50h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, xmm7
      }
      if ( v77 | v78 )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rsi+60h]; coneHeight
          vmovss  xmm2, dword ptr [rsi+64h]; cosHalfFov
        }
        if ( PointInsideCone(&_RSI->bulletStart, &_RSI->bulletDir, *(float *)&_XMM2, *(float *)&_XMM3, &point) )
        {
          if ( v94 )
          {
            LODWORD(v93) = 0;
            __asm { vmovaps xmm2, xmm6 }
            ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, vec4_t *, vec4_t *, int))_RSI->pmoveHandler->DebugSphereAll)(_RSI->pmoveHandler, &point, v81, &colorMagenta, &colorCyan, v93, integer);
          }
          _RBX = &_R15->hits[_R15->hitCount];
          _RBX->priority = v63->priority;
          *(double *)&_XMM0 = PointToLineSegmentDistSq(&point, &_RSI->bulletStart, &end);
          __asm
          {
            vmovss  dword ptr [rbx+3Ch], xmm0
            vmovss  xmm1, dword ptr [rsp+2E0h+point]
            vmovss  dword ptr [rbx], xmm1
            vmovss  xmm0, dword ptr [rsp+2E0h+point+4]
            vmovss  dword ptr [rbx+4], xmm0
            vmovss  xmm1, dword ptr [rsp+2E0h+point+8]
            vmovss  dword ptr [rbx+8], xmm1
          }
          MatrixCopy33(&src, &_RBX->tagWorldRot);
          _RBX->modelIndex = boneInfo[i].modelIndex;
          if ( v95 )
          {
            _RBX->tagName = scr_const.tag_origin;
            v87 = 5;
          }
          else
          {
            _RBX->tagName = *v63->tag;
            v87 = v63->hitLocation;
          }
          _RBX->hitLocation = v87;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+3Ch]
            vcomiss xmm0, dword ptr [r15+338h]
          }
          ++_R15->hitCount;
          integer = v97;
        }
      }
    }
    ++v63;
  }
  result = _R15->hitCount > 0;
LABEL_79:
  __asm
  {
    vmovaps xmm6, [rsp+2E0h+var_40]
    vmovaps xmm7, [rsp+2E0h+var_50]
  }
  return result;
}

/*
==============
BgTargetAssist::GetConeTargetTagList
==============
*/

void __fastcall BgTargetAssist::GetConeTargetTagList(BgTargetAssist *this, const entityState_t *const es, ConeTarget *const coneTargetTagList)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 183, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !coneTargetTagList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 184, ASSERT_TYPE_ASSERT, "(coneTargetTagList)", (const char *)&queryFormat, "coneTargetTagList") )
    __debugbreak();
  memset_0(coneTargetTagList, 0, 0xC0ui64);
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 455, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  this->GetCollBoundsType(this, es->number);
  JUMPOUT(0x140319FD9i64);
}

/*
==============
BgTargetAssist::GetConeTargetType
==============
*/
__int64 BgTargetAssist::GetConeTargetType(BgTargetAssist *this, const entityState_t *es)
{
  entityType_s eType; 
  bool v5; 
  XModelCharCollBoundsType v6; 
  __int64 result; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 455, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = es->eType;
  v5 = ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM;
  v6 = this->GetCollBoundsType(this, es->number);
  if ( v6 == CharCollBoundsType_C12 )
    return 7i64;
  if ( v6 == CharCollBoundsType_C8 )
    return 8i64;
  if ( eType == ET_ACTOR )
    return 4i64;
  if ( v5 )
    return 0i64;
  switch ( eType )
  {
    case ET_TURRET:
      return 1i64;
    case ET_VEHICLE:
      return 2i64;
    case ET_MISSILE:
      return 3i64;
    case ET_SCRIPTMOVER:
      return 5i64;
  }
  result = 9i64;
  if ( eType == ET_HELICOPTER )
    return 6i64;
  return result;
}

/*
==============
ConeTargetHitResults::GetFirstVisibleHit
==============
*/
ConeTargetHitInfo *ConeTargetHitResults::GetFirstVisibleHit(ConeTargetHitResults *this)
{
  __int64 firstVisibleHitIndex; 

  firstVisibleHitIndex = this->firstVisibleHitIndex;
  if ( (_DWORD)firstVisibleHitIndex == -1 )
    return 0i64;
  else
    return (ConeTargetHitInfo *)((char *)this + 68 * firstVisibleHitIndex);
}

/*
==============
ConeTargetHitResults::GetFirstVisibleHit
==============
*/
const ConeTargetHitInfo *ConeTargetHitResults::GetFirstVisibleHit(ConeTargetHitResults *this)
{
  __int64 firstVisibleHitIndex; 

  firstVisibleHitIndex = this->firstVisibleHitIndex;
  if ( (_DWORD)firstVisibleHitIndex == -1 )
    return 0i64;
  else
    return (const ConeTargetHitInfo *)((char *)this + 68 * firstVisibleHitIndex);
}

/*
==============
ConeTargetInfo::GetHitResults
==============
*/
ConeTargetHitResults *ConeTargetInfo::GetHitResults(ConeTargetInfo *this)
{
  return &this->m_hitResults;
}

/*
==============
ConeTargetInfo::GetHitResults
==============
*/
ConeTargetHitResults *ConeTargetInfo::GetHitResults(ConeTargetInfo *this)
{
  return &this->m_hitResults;
}

/*
==============
BgTargetAssist::GetShieldMaxAngle
==============
*/
float BgTargetAssist::GetShieldMaxAngle(BgTargetAssist *this)
{
  _RBX = DCONST_DVARMPFLT_targetAssist_shieldMaxAngle;
  if ( !DCONST_DVARMPFLT_targetAssist_shieldMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_shieldMaxAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
BgTargetAssist::GetTargetCount
==============
*/
__int64 BgTargetAssist::GetTargetCount(BgTargetAssist *this)
{
  return (unsigned int)this->m_targetCount;
}

/*
==============
BgTargetAssist::IsEntityPotentialTarget
==============
*/
bool BgTargetAssist::IsEntityPotentialTarget(BgTargetAssist *this, const entityState_t *es)
{
  const dvar_t *v3; 
  bool enabled; 
  entityType_s eType; 
  int v6; 
  bool result; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 114, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v3 = DCONST_DVARMPBOOL_targetAssist_targetMissiles;
  if ( !DCONST_DVARMPBOOL_targetAssist_targetMissiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_targetMissiles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  enabled = v3->current.enabled;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = es->eType;
  result = (unsigned __int16)eType <= ET_ACTOR && (v6 = 673794, _bittest(&v6, eType)) || enabled && eType == ET_MISSILE || eType == ET_HELICOPTER || eType == ET_SCRIPTMOVER;
  return result;
}

/*
==============
BgTargetAssist::IsTargetListFull
==============
*/
bool BgTargetAssist::IsTargetListFull(BgTargetAssist *this)
{
  return this->m_targetCount == this->GetMaxTargetCount(this);
}

