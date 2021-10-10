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
  const dvar_t *v3; 
  bool v4; 
  const dvar_t *v5; 
  float v6; 
  float v7; 
  const BgHandler *pmoveHandler; 
  float v9; 
  float bulletRange; 
  float maxDot; 
  int v12; 
  BgHandler_vtbl *v13; 
  float v14; 
  int v15[4]; 
  int v16[4]; 

  if ( !searchParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 411, ASSERT_TYPE_ASSERT, "(searchParam)", (const char *)&queryFormat, "searchParam") )
    __debugbreak();
  v3 = DCONST_DVARBOOL_targetAssist_debug;
  if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = v3->current.enabled && searchParam->isFiring;
  v5 = DCONST_DVARINT_targetAssist_debugDrawDuration;
  if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v4 )
  {
    v6 = searchParam->bulletDir.v[1];
    v7 = searchParam->bulletDir.v[2];
    pmoveHandler = searchParam->pmoveHandler;
    v9 = searchParam->bulletDir.v[0];
    bulletRange = searchParam->bulletRange;
    *(float *)v16 = (float)(bulletRange * v9) + searchParam->bulletStart.v[0];
    maxDot = searchParam->maxDot;
    *(float *)&v16[1] = (float)(bulletRange * v6) + searchParam->bulletStart.v[1];
    *(float *)&v12 = (float)(bulletRange * v7) + searchParam->bulletStart.v[2];
    v15[0] = LODWORD(v9) ^ _xmm;
    v16[2] = v12;
    v15[2] = LODWORD(v7) ^ _xmm;
    v15[1] = LODWORD(v6) ^ _xmm;
    v13 = pmoveHandler->__vftable;
    v14 = acosf_0(maxDot);
    tanf_0(v14);
    ((void (__fastcall *)(const BgHandler *, int *, int *))v13->DebugCone)(pmoveHandler, v16, v15);
  }
}

/*
==============
BgTargetAssist::FindBonesWithinCone
==============
*/
bool BgTargetAssist::FindBonesWithinCone(BgTargetAssist *this, const BGConeTargetBoneSearchParam *searchParam, ConeTargetHitResults *outSearchResults)
{
  const dvar_t *v6; 
  bool v7; 
  const dvar_t *v8; 
  float bulletRange; 
  float v10; 
  float v11; 
  float v12; 
  const BgHandler *pmoveHandler; 
  float maxDot; 
  BgHandler_vtbl *v15; 
  float v16; 
  XModelCharCollBoundsType v17; 
  float v18; 
  const dvar_t *v19; 
  bool v20; 
  const dvar_t *v21; 
  float v22; 
  float v23; 
  const entityState_t *es; 
  int v25; 
  float v26; 
  unsigned __int64 v27; 
  int *v28; 
  ConeTarget *p_coneTargetTagList; 
  hitLocation_t hitLocation; 
  DObj *entityDobj; 
  scr_string_t tag_origin; 
  const dvar_t *v33; 
  float v34; 
  const dvar_t *v35; 
  const entityState_t *v36; 
  int integer; 
  ConeTarget *v38; 
  unsigned __int64 i; 
  unsigned __int8 boneIndex; 
  __int64 v41; 
  ConeTargetHitInfo *v42; 
  double v43; 
  int v44; 
  float distSq; 
  vec4_t *v47; 
  char v48; 
  char v49; 
  unsigned __int8 inOutIndex[8]; 
  int v51; 
  BgTargetAssist *v52; 
  vec3_t point; 
  int v54[4]; 
  int v55[4]; 
  vec3_t coneDir; 
  vec3_t end; 
  Bounds bounds; 
  Bounds rotatedBounds; 
  DObjPartBits partBits; 
  tmat33_t<vec3_t> src; 
  DObjBoneInfo boneInfo[12]; 
  int v63[12]; 
  ConeTarget coneTargetTagList; 

  v52 = this;
  if ( !searchParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 232, ASSERT_TYPE_ASSERT, "(searchParam)", (const char *)&queryFormat, "searchParam") )
    __debugbreak();
  if ( !searchParam->es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 233, ASSERT_TYPE_ASSERT, "(searchParam->es)", (const char *)&queryFormat, "searchParam->es") )
    __debugbreak();
  if ( !searchParam->entityDobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 234, ASSERT_TYPE_ASSERT, "(searchParam->entityDobj)", (const char *)&queryFormat, "searchParam->entityDobj") )
    __debugbreak();
  if ( !outSearchResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist.cpp", 235, ASSERT_TYPE_ASSERT, "(outSearchResults)", (const char *)&queryFormat, "outSearchResults") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_targetAssist_debug;
  if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.enabled && searchParam->isFiring;
  v8 = DCONST_DVARINT_targetAssist_debugDrawDuration;
  if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v7 )
  {
    bulletRange = searchParam->bulletRange;
    v10 = searchParam->bulletDir.v[0];
    v11 = searchParam->bulletDir.v[1];
    v12 = searchParam->bulletDir.v[2];
    pmoveHandler = searchParam->pmoveHandler;
    *(float *)v55 = (float)(bulletRange * v10) + searchParam->bulletStart.v[0];
    *(float *)&v55[1] = (float)(bulletRange * v11) + searchParam->bulletStart.v[1];
    *(float *)&v55[2] = (float)(bulletRange * v12) + searchParam->bulletStart.v[2];
    v54[1] = LODWORD(v11) ^ _xmm;
    maxDot = searchParam->maxDot;
    v54[2] = LODWORD(v12) ^ _xmm;
    v54[0] = LODWORD(v10) ^ _xmm;
    v15 = pmoveHandler->__vftable;
    v16 = acosf_0(maxDot);
    tanf_0(v16);
    v47 = &colorBlue;
    ((void (__fastcall *)(const BgHandler *, int *, int *))v15->DebugCone)(pmoveHandler, v55, v54);
  }
  outSearchResults->hitCount = 0;
  outSearchResults->priority = 3.4028235e38;
  outSearchResults->firstVisibleHitIndex = -1;
  v17 = this->GetCollBoundsType(this, searchParam->es->number);
  if ( (unsigned int)(v17 - 1) > 8 )
    v17 = CharCollBoundsType_Human;
  PhysicsCharacterProxy_GetEncapsulatingBounds(&bounds, v17);
  LODWORD(v18) = LODWORD(searchParam->bulletDir.v[1]) ^ _xmm;
  LODWORD(coneDir.v[0]) = LODWORD(searchParam->bulletDir.v[0]) ^ _xmm;
  LODWORD(coneDir.v[2]) = LODWORD(searchParam->bulletDir.v[2]) ^ _xmm;
  coneDir.v[1] = v18;
  Bounds_Transform(&bounds, &searchParam->entityOrigin, &searchParam->entityAxis, &rotatedBounds);
  v19 = DCONST_DVARBOOL_targetAssist_debug;
  if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  v20 = v19->current.enabled && searchParam->isFiring;
  v21 = DCONST_DVARINT_targetAssist_debugDrawDuration;
  if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v20 )
  {
    LODWORD(v47) = 1;
    searchParam->pmoveHandler->DebugBoxOriented((BgHandler *)searchParam->pmoveHandler, &searchParam->entityOrigin, &bounds, &searchParam->entityAxis, &colorCyan, (int)v47, v21->current.integer);
  }
  if ( CullBoxFromConicSectionOfSphere(&searchParam->bulletStart, &coneDir, searchParam->maxDot, searchParam->bulletRange, &rotatedBounds) )
    return 0;
  v22 = searchParam->bulletRange;
  v23 = v22 * searchParam->bulletDir.v[1];
  es = searchParam->es;
  v25 = 0;
  end.v[0] = (float)(v22 * searchParam->bulletDir.v[0]) + searchParam->bulletStart.v[0];
  v26 = v22 * searchParam->bulletDir.v[2];
  end.v[1] = v23 + searchParam->bulletStart.v[1];
  end.v[2] = v26 + searchParam->bulletStart.v[2];
  BgTargetAssist::GetConeTargetTagList(v52, es, &coneTargetTagList);
  v27 = 0i64;
  v28 = v63;
  p_coneTargetTagList = &coneTargetTagList;
  do
  {
    hitLocation = p_coneTargetTagList->hitLocation;
    boneInfo[v27].boneIndex = -1;
    if ( hitLocation && HitLoc_MaskContains(searchParam->hitLocMask, hitLocation) && DObjGetBoneAndModelIndex(searchParam->entityDobj, *p_coneTargetTagList->tag, &boneInfo[v27]) )
    {
      DObjGetHidePartBits(searchParam->entityDobj, &partBits);
      if ( ((0x80000000 >> (boneInfo[v27].boneIndex & 0x1F)) & partBits.array[(unsigned __int64)boneInfo[v27].boneIndex >> 5]) != 0 )
      {
        boneInfo[v27].boneIndex = -1;
      }
      else
      {
        ++v25;
        *v28++ = boneInfo[v27].boneIndex;
      }
    }
    ++v27;
    ++p_coneTargetTagList;
  }
  while ( v27 < 0xC );
  v49 = 0;
  if ( v25 )
    goto LABEL_57;
  entityDobj = searchParam->entityDobj;
  tag_origin = scr_const.tag_origin;
  if ( !entityDobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 89, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !tag_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 90, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  inOutIndex[4] = -2;
  *(_DWORD *)inOutIndex = 0;
  if ( !DObjGetBoneIndexInternal_0(entityDobj, tag_origin, &inOutIndex[4], (int *)inOutIndex) )
    return 0;
  v25 = 1;
  boneInfo[0] = *(DObjBoneInfo *)inOutIndex;
  v63[0] = inOutIndex[4];
  v49 = 1;
LABEL_57:
  v33 = DCONST_DVARBOOL_targetAssist_debug;
  v34 = searchParam->bulletRange * searchParam->bulletRange;
  if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  if ( !v33->current.enabled || (v48 = 1, !searchParam->isFiring) )
    v48 = 0;
  v35 = DCONST_DVARINT_targetAssist_debugDrawDuration;
  if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  v36 = searchParam->es;
  integer = v35->current.integer;
  v51 = integer;
  v52->CalculateSkeleton(v52, v36->number, v25, v63);
  v38 = &coneTargetTagList;
  for ( i = 0i64; i < 0xC; ++i )
  {
    boneIndex = boneInfo[i].boneIndex;
    if ( boneIndex != 0xFF )
    {
      v52->GetWorldBoneMatrix(v52, searchParam->es->number, boneIndex, &src, &point);
      if ( (float)((float)((float)((float)(point.v[1] - searchParam->bulletStart.v[1]) * (float)(point.v[1] - searchParam->bulletStart.v[1])) + (float)((float)(point.v[0] - searchParam->bulletStart.v[0]) * (float)(point.v[0] - searchParam->bulletStart.v[0]))) + (float)((float)(point.v[2] - searchParam->bulletStart.v[2]) * (float)(point.v[2] - searchParam->bulletStart.v[2]))) <= v34 && PointInsideCone(&searchParam->bulletStart, &searchParam->bulletDir, searchParam->maxDot, searchParam->bulletRange, &point) )
      {
        if ( v48 )
        {
          LODWORD(v47) = 0;
          ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, vec4_t *, vec4_t *, int))searchParam->pmoveHandler->DebugSphereAll)(searchParam->pmoveHandler, &point, v41, &colorMagenta, &colorCyan, v47, integer);
        }
        v42 = &outSearchResults->hits[outSearchResults->hitCount];
        v42->priority = v38->priority;
        v43 = PointToLineSegmentDistSq(&point, &searchParam->bulletStart, &end);
        v42->distSq = *(float *)&v43;
        v42->tagWorldPos = point;
        MatrixCopy33(&src, &v42->tagWorldRot);
        v42->modelIndex = boneInfo[i].modelIndex;
        if ( v49 )
        {
          v42->tagName = scr_const.tag_origin;
          v44 = 5;
        }
        else
        {
          v42->tagName = *v38->tag;
          v44 = v38->hitLocation;
        }
        v42->hitLocation = v44;
        distSq = v42->distSq;
        if ( distSq < outSearchResults->priority )
          outSearchResults->priority = distSq;
        ++outSearchResults->hitCount;
        integer = v51;
      }
    }
    ++v38;
  }
  return outSearchResults->hitCount > 0;
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
  const dvar_t *v1; 

  v1 = DCONST_DVARMPFLT_targetAssist_shieldMaxAngle;
  if ( !DCONST_DVARMPFLT_targetAssist_shieldMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_shieldMaxAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.value;
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

