/*
==============
BgTargetAssist::EvaluateTargetsWithinCone<CAssistTarget>
==============
*/

int __fastcall BgTargetAssist::EvaluateTargetsWithinCone<CAssistTarget>(BgTargetAssist *this, const BgHandler *handler, const Weapon *r_weapon, const bool isAlternate, ntl::fixed_array<CAssistTarget,20> *inOutTargetArray, const int targetCount, const tmat33_t<vec3_t> *bulletAxis, const vec3_t *bulletStart, const int maxTargets, const __int16 attackerEntNum, const Physics_WorldId worldId, const bool isFiring)
{
  return ??$EvaluateTargetsWithinCone@VCAssistTarget@@@BgTargetAssist@@QEBAHPEBVBgHandler@@AEBUWeapon@@_NAEAV?$fixed_array@VCAssistTarget@@$0BE@@ntl@@HAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@HFW4Physics_WorldId@@2@Z(this, handler, r_weapon, isAlternate, inOutTargetArray, targetCount, bulletAxis, bulletStart, maxTargets, attackerEntNum, worldId, isFiring);
}

/*
==============
BgTargetAssist::EvaluateTargetsWithinCone<GAssistTarget>
==============
*/

int __fastcall BgTargetAssist::EvaluateTargetsWithinCone<GAssistTarget>(BgTargetAssist *this, const BgHandler *handler, const Weapon *r_weapon, const bool isAlternate, ntl::fixed_array<GAssistTarget,20> *inOutTargetArray, const int targetCount, const tmat33_t<vec3_t> *bulletAxis, const vec3_t *bulletStart, const int maxTargets, const __int16 attackerEntNum, const Physics_WorldId worldId, const bool isFiring)
{
  return ??$EvaluateTargetsWithinCone@VGAssistTarget@@@BgTargetAssist@@QEBAHPEBVBgHandler@@AEBUWeapon@@_NAEAV?$fixed_array@VGAssistTarget@@$0BE@@ntl@@HAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@HFW4Physics_WorldId@@2@Z(this, handler, r_weapon, isAlternate, inOutTargetArray, targetCount, bulletAxis, bulletStart, maxTargets, attackerEntNum, worldId, isFiring);
}

/*
==============
BgTargetAssist::EvaluateTargetsWithinCone<GAssistTarget>
==============
*/
__int64 BgTargetAssist::EvaluateTargetsWithinCone<GAssistTarget>(BgTargetAssist *this, const BgHandler *handler, const Weapon *r_weapon, const bool isAlternate, ntl::fixed_array<GAssistTarget,20> *inOutTargetArray, const int targetCount, const tmat33_t<vec3_t> *bulletAxis, const vec3_t *bulletStart, const int maxTargets, const __int16 attackerEntNum, const Physics_WorldId worldId, const bool isFiring)
{
  ntl::fixed_array<GAssistTarget,20> *v12; 
  float v14; 
  float v15; 
  int v16; 
  unsigned int v17; 
  char v18; 
  int v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  ConeTargetHitResults *v22; 
  bool IsBeamWeapon; 
  int v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  int v27; 
  __int64 p_z; 
  int v29; 
  double ShieldMaxAngle; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  unsigned __int64 v36; 
  int v37; 
  __int64 v38; 
  char v39; 
  char v40; 
  int *v41; 
  int *v42; 
  bool v43; 
  hkMemoryAllocator *v44; 
  hkMemoryAllocator *v45; 
  hkMemoryAllocator *v46; 
  hkMemoryAllocator *v47; 
  hkMemoryAllocator *v48; 
  hkMemoryAllocator *v49; 
  ConeTargetHitResults *HitResults; 
  unsigned __int64 v51; 
  char v53; 
  char v54; 
  char v55; 
  int v56; 
  int v57; 
  char v58; 
  char v59; 
  int v60; 
  unsigned int v61; 
  int v62; 
  unsigned __int64 v63; 
  int integer; 
  int v65; 
  HavokPhysics_IgnoreBodies v66; 
  float outUpOffset; 
  int v68; 
  float outForwardOffset; 
  ConeTargetHitResults *v70; 
  ConeTargetHitResults *v71; 
  ntl::fixed_array<GAssistTarget,20> *v72; 
  float outRightOffset; 
  unsigned __int64 v74; 
  const BgHandler *v75; 
  Weapon *r_weapona; 
  BgTargetAssist *v77; 
  __int64 v78; 
  GAssistTarget *last; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v81; 
  vec3_t start; 
  int v83[20]; 

  v81 = -2i64;
  r_weapona = (Weapon *)r_weapon;
  v75 = handler;
  v77 = this;
  v12 = inOutTargetArray;
  v72 = inOutTargetArray;
  if ( !targetCount )
    return 0i64;
  BG_TargetAssistLosOffsets(r_weapon, isAlternate, &outForwardOffset, &outRightOffset, &outUpOffset);
  v14 = (float)(COERCE_FLOAT(LODWORD(outRightOffset) ^ _xmm) * bulletAxis->m[1].v[1]) + (float)((float)(outForwardOffset * bulletAxis->m[0].v[1]) + bulletStart->v[1]);
  v15 = (float)(COERCE_FLOAT(LODWORD(outRightOffset) ^ _xmm) * bulletAxis->m[1].v[2]) + (float)((float)(outForwardOffset * bulletAxis->m[0].v[2]) + bulletStart->v[2]);
  start.v[0] = (float)(outUpOffset * bulletAxis->m[2].v[0]) + (float)((float)(COERCE_FLOAT(LODWORD(outRightOffset) ^ _xmm) * bulletAxis->m[1].v[0]) + (float)((float)(outForwardOffset * bulletAxis->m[0].v[0]) + bulletStart->v[0]));
  start.v[1] = (float)(outUpOffset * bulletAxis->m[2].v[1]) + v14;
  start.v[2] = (float)(outUpOffset * bulletAxis->m[2].v[2]) + v15;
  v78 = targetCount;
  last = &inOutTargetArray->m_data[targetCount];
  ntl::sort<GAssistTarget *,ntl::less<GAssistTarget,GAssistTarget>>(inOutTargetArray->m_data, last, (ntl::less<GAssistTarget,GAssistTarget>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
  v16 = 0;
  v57 = 0;
  v17 = 0;
  v61 = 0;
  v18 = 0;
  v55 = 0;
  v19 = 0;
  v62 = 0;
  if ( targetCount <= 0i64 )
    goto LABEL_108;
  v20 = 0i64;
  v63 = 0i64;
  do
  {
    if ( v16 == 18 || v17 == maxTargets )
    {
      v55 = 1;
LABEL_96:
      v51 = v19;
      if ( (unsigned __int64)v19 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( ConeTargetInfo::GetHitResults(&v12->m_data[v51])->firstVisibleHitIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 48, ASSERT_TYPE_ASSERT, "(inOutTargetArray[targetIndex].GetHitResults().firstVisibleHitIndex == -1)", (const char *)&queryFormat, "inOutTargetArray[targetIndex].GetHitResults().firstVisibleHitIndex == IW_INVALID_INDEX") )
        __debugbreak();
      if ( v51 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      HitResults = ConeTargetInfo::GetHitResults(&v12->m_data[v51]);
LABEL_106:
      HitResults->priority = 3.4028235e38;
      goto LABEL_107;
    }
    if ( v18 )
      goto LABEL_96;
    v83[v20] = 0;
    v65 = -1;
    v21 = v19;
    v74 = v19;
    if ( (unsigned __int64)v19 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v22 = ConeTargetInfo::GetHitResults(&v12->m_data[v21]);
    v71 = v22;
    ntl::sort<ConeTargetHitInfo *,ntl::less<ConeTargetHitInfo,ConeTargetHitInfo>>(v22->hits, &v22->hits[v22->hitCount], (ntl::less<ConeTargetHitInfo,ConeTargetHitInfo>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
    v60 = 0;
    v58 = 0;
    v59 = 0;
    v54 = 0;
    IsBeamWeapon = BG_IsBeamWeapon(r_weapona, isAlternate);
    v24 = 8399153;
    if ( !IsBeamWeapon )
      v24 = 8399137;
    v68 = v24;
    v25 = DCONST_DVARBOOL_targetAssist_debug;
    if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( !v25->current.enabled || (v53 = 1, !isFiring) )
      v53 = 0;
    v26 = DCONST_DVARINT_targetAssist_debugDrawDuration;
    if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    integer = v26->current.integer;
    v27 = 0;
    v56 = 0;
    if ( v22->hitCount <= 0 )
    {
LABEL_88:
      if ( v22->firstVisibleHitIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 211, ASSERT_TYPE_ASSERT, "(hitResults.firstVisibleHitIndex == -1)", (const char *)&queryFormat, "hitResults.firstVisibleHitIndex == IW_INVALID_INDEX") )
        __debugbreak();
      if ( v21 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      HitResults = ConeTargetInfo::GetHitResults(&v12->m_data[v21]);
      v17 = v61;
      goto LABEL_106;
    }
    p_z = (__int64)&v22->hits[0].tagWorldRot.row0.z;
    v70 = (ConeTargetHitResults *)&v22->hits[0].tagWorldRot.row0.z;
    while ( 1 )
    {
      v29 = *(_DWORD *)(p_z + 32);
      if ( ((unsigned int)(v29 - 14) > 1 || !v58) && ((unsigned int)(v29 - 6) > 1 || !v59) )
      {
        if ( (unsigned int)(v29 - 19) > 1 )
          break;
        ShieldMaxAngle = BgTargetAssist::GetShieldMaxAngle(v77);
        v31 = *(float *)&ShieldMaxAngle * 0.017453292;
        cosf_0(*(float *)&ShieldMaxAngle * 0.017453292);
        if ( v29 == 20 )
        {
          v32 = *(float *)(p_z - 8);
          v33 = *(float *)(p_z - 4);
          v34 = *(float *)p_z;
        }
        else
        {
          v32 = *(float *)(p_z + 4);
          v33 = *(float *)(p_z + 8);
          v34 = *(float *)(p_z + 12);
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v33 * bulletAxis->m[0].v[1]) + (float)(v32 * bulletAxis->m[0].v[0])) + (float)(v34 * bulletAxis->m[0].v[2])) ^ _xmm) >= v31 )
          break;
      }
LABEL_68:
      v56 = ++v27;
      p_z += 68i64;
      v70 = (ConeTargetHitResults *)p_z;
      v22 = v71;
      if ( v27 >= v71->hitCount )
        goto LABEL_80;
    }
    AnyResult = PhysicsQuery_GetAnyResult(worldId);
    HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
    if ( Physics_IsDetailWorld(worldId) )
      Physics_AddDetailTrace(AnyResult, NULL);
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v66, 2, 0);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v66, 0, attackerEntNum, 1, 1, 0, 1, 0);
    v36 = v63;
    if ( v63 >= 0x14 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v36 = v63;
    }
    v37 = v72->m_data[v36].GetEntNum(&v72->m_data[v36]);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v66, 1, v37, 1, 1, 0, 1, 0);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.ignoreBodies = &v66;
    extendedData.contents = v68;
    v38 = p_z - 20;
    Physics_Raycast(worldId, &start, (const vec3_t *)v38, &extendedData, AnyResult);
    ++v60;
    ++v57;
    v39 = v58;
    if ( (unsigned int)(v29 - 14) <= 1 )
      v39 = 1;
    v58 = v39;
    v40 = v59;
    if ( (unsigned int)(v29 - 6) <= 1 )
      v40 = 1;
    v59 = v40;
    if ( v53 )
    {
      if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
        v75->DebugLineAll((BgHandler *)v75, &start, (const vec3_t *)v38, &colorRed, &colorRedFaded, 0, integer);
      else
        v75->DebugLineAll((BgHandler *)v75, &start, (const vec3_t *)v38, &colorGreen, &colorGreenFaded, 0, integer);
    }
    if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
    {
      v27 = v56;
    }
    else
    {
      v54 = 1;
      if ( !v62 || v29 == 20 )
      {
        v43 = 0;
      }
      else
      {
        v41 = v83;
        v42 = &v83[v74];
        if ( v83 != v42 )
        {
          do
          {
            if ( *v41 == LODWORD(v70->hits[0].tagWorldRot.m[1].v[1]) )
              break;
            ++v41;
          }
          while ( v41 != v42 );
        }
        v43 = v41 != v42;
      }
      if ( *(_DWORD *)(v38 + 52) > 0x15u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 174, ASSERT_TYPE_ASSERT, "((hitInfo.hitLocation >= HITLOC_NONE) && (hitInfo.hitLocation < HITLOC_NUM))", (const char *)&queryFormat, "(hitInfo.hitLocation >= HITLOC_NONE) && (hitInfo.hitLocation < HITLOC_NUM)") )
        __debugbreak();
      if ( !v43 )
      {
        v22 = v71;
        v71->firstVisibleHitIndex = v56;
        v46 = hkMemHeapAllocator();
        v66.m_ignoreBodies.m_size = 0;
        if ( v66.m_ignoreBodies.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v46, v66.m_ignoreBodies.m_data, 4, v66.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
        v66.m_ignoreBodies.m_data = NULL;
        v66.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
        v47 = hkMemHeapAllocator();
        v66.m_ignoreEntities.m_size = 0;
        if ( v66.m_ignoreEntities.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v47, v66.m_ignoreEntities.m_data, 8, v66.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
        v66.m_ignoreEntities.m_data = NULL;
        v66.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
        goto LABEL_81;
      }
      v27 = v56;
      v65 = v56;
    }
    if ( v60 != 6 && v57 != 18 )
    {
      v44 = hkMemHeapAllocator();
      v66.m_ignoreBodies.m_size = 0;
      if ( v66.m_ignoreBodies.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v44, v66.m_ignoreBodies.m_data, 4, v66.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
      v66.m_ignoreBodies.m_data = NULL;
      v66.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
      v45 = hkMemHeapAllocator();
      v66.m_ignoreEntities.m_size = 0;
      if ( v66.m_ignoreEntities.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v45, v66.m_ignoreEntities.m_data, 8, v66.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
      p_z = (__int64)v70;
      goto LABEL_68;
    }
    v48 = hkMemHeapAllocator();
    v66.m_ignoreBodies.m_size = 0;
    if ( v66.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v48, v66.m_ignoreBodies.m_data, 4, v66.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v66.m_ignoreBodies.m_data = NULL;
    v66.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v49 = hkMemHeapAllocator();
    v66.m_ignoreEntities.m_size = 0;
    if ( v66.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v49, v66.m_ignoreEntities.m_data, 8, v66.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    v66.m_ignoreEntities.m_data = NULL;
    v66.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
    v22 = v71;
LABEL_80:
    if ( !v54 )
    {
      v21 = v74;
      v20 = v63;
      v12 = v72;
      goto LABEL_88;
    }
LABEL_81:
    if ( v22->firstVisibleHitIndex == -1 )
    {
      if ( v65 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 199, ASSERT_TYPE_ASSERT, "(fallbackHitInfoIndex != -1)", (const char *)&queryFormat, "fallbackHitInfoIndex != IW_INVALID_INDEX") )
        __debugbreak();
      v22->firstVisibleHitIndex = v65;
    }
    v20 = v63;
    v83[v63] = ConeTargetHitResults::GetFirstVisibleHit(v22)->tagName;
    v17 = ++v61;
    v12 = v72;
LABEL_107:
    v19 = ++v62;
    v63 = ++v20;
    v16 = v57;
    v18 = v55;
  }
  while ( v20 < v78 );
LABEL_108:
  ntl::sort<GAssistTarget *,ntl::less<GAssistTarget,GAssistTarget>>(v12->m_data, last, (ntl::less<GAssistTarget,GAssistTarget>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
  return v17;
}

/*
==============
BgTargetAssist::EvaluateTargetsWithinCone<CAssistTarget>
==============
*/
__int64 BgTargetAssist::EvaluateTargetsWithinCone<CAssistTarget>(BgTargetAssist *this, const BgHandler *handler, const Weapon *r_weapon, const bool isAlternate, ntl::fixed_array<CAssistTarget,20> *inOutTargetArray, const int targetCount, const tmat33_t<vec3_t> *bulletAxis, const vec3_t *bulletStart, const int maxTargets, const __int16 attackerEntNum, const Physics_WorldId worldId, const bool isFiring)
{
  ntl::fixed_array<CAssistTarget,20> *v12; 
  float v14; 
  float v15; 
  int v16; 
  unsigned int v17; 
  char v18; 
  int v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  ConeTargetHitResults *v22; 
  bool IsBeamWeapon; 
  int v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  int v27; 
  __int64 p_z; 
  int v29; 
  double ShieldMaxAngle; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  unsigned __int64 v36; 
  int v37; 
  __int64 v38; 
  char v39; 
  char v40; 
  int *v41; 
  int *v42; 
  bool v43; 
  hkMemoryAllocator *v44; 
  hkMemoryAllocator *v45; 
  hkMemoryAllocator *v46; 
  hkMemoryAllocator *v47; 
  hkMemoryAllocator *v48; 
  hkMemoryAllocator *v49; 
  ConeTargetHitResults *HitResults; 
  unsigned __int64 v51; 
  char v53; 
  char v54; 
  char v55; 
  int v56; 
  int v57; 
  char v58; 
  char v59; 
  int v60; 
  unsigned int v61; 
  int v62; 
  unsigned __int64 v63; 
  int integer; 
  int v65; 
  HavokPhysics_IgnoreBodies v66; 
  float outUpOffset; 
  int v68; 
  float outForwardOffset; 
  ConeTargetHitResults *v70; 
  ConeTargetHitResults *v71; 
  ntl::fixed_array<CAssistTarget,20> *v72; 
  float outRightOffset; 
  unsigned __int64 v74; 
  const BgHandler *v75; 
  Weapon *r_weapona; 
  BgTargetAssist *v77; 
  __int64 v78; 
  CAssistTarget *last; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v81; 
  vec3_t start; 
  int v83[20]; 

  v81 = -2i64;
  r_weapona = (Weapon *)r_weapon;
  v75 = handler;
  v77 = this;
  v12 = inOutTargetArray;
  v72 = inOutTargetArray;
  if ( !targetCount )
    return 0i64;
  BG_TargetAssistLosOffsets(r_weapon, isAlternate, &outForwardOffset, &outRightOffset, &outUpOffset);
  v14 = (float)(COERCE_FLOAT(LODWORD(outRightOffset) ^ _xmm) * bulletAxis->m[1].v[1]) + (float)((float)(outForwardOffset * bulletAxis->m[0].v[1]) + bulletStart->v[1]);
  v15 = (float)(COERCE_FLOAT(LODWORD(outRightOffset) ^ _xmm) * bulletAxis->m[1].v[2]) + (float)((float)(outForwardOffset * bulletAxis->m[0].v[2]) + bulletStart->v[2]);
  start.v[0] = (float)(outUpOffset * bulletAxis->m[2].v[0]) + (float)((float)(COERCE_FLOAT(LODWORD(outRightOffset) ^ _xmm) * bulletAxis->m[1].v[0]) + (float)((float)(outForwardOffset * bulletAxis->m[0].v[0]) + bulletStart->v[0]));
  start.v[1] = (float)(outUpOffset * bulletAxis->m[2].v[1]) + v14;
  start.v[2] = (float)(outUpOffset * bulletAxis->m[2].v[2]) + v15;
  v78 = targetCount;
  last = &inOutTargetArray->m_data[targetCount];
  ntl::sort<CAssistTarget *,ntl::less<CAssistTarget,CAssistTarget>>(inOutTargetArray->m_data, last, (ntl::less<CAssistTarget,CAssistTarget>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
  v16 = 0;
  v57 = 0;
  v17 = 0;
  v61 = 0;
  v18 = 0;
  v55 = 0;
  v19 = 0;
  v62 = 0;
  if ( targetCount <= 0i64 )
    goto LABEL_108;
  v20 = 0i64;
  v63 = 0i64;
  do
  {
    if ( v16 == 18 || v17 == maxTargets )
    {
      v55 = 1;
LABEL_96:
      v51 = v19;
      if ( (unsigned __int64)v19 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( ConeTargetInfo::GetHitResults(&v12->m_data[v51])->firstVisibleHitIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 48, ASSERT_TYPE_ASSERT, "(inOutTargetArray[targetIndex].GetHitResults().firstVisibleHitIndex == -1)", (const char *)&queryFormat, "inOutTargetArray[targetIndex].GetHitResults().firstVisibleHitIndex == IW_INVALID_INDEX") )
        __debugbreak();
      if ( v51 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      HitResults = ConeTargetInfo::GetHitResults(&v12->m_data[v51]);
LABEL_106:
      HitResults->priority = 3.4028235e38;
      goto LABEL_107;
    }
    if ( v18 )
      goto LABEL_96;
    v83[v20] = 0;
    v65 = -1;
    v21 = v19;
    v74 = v19;
    if ( (unsigned __int64)v19 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v22 = ConeTargetInfo::GetHitResults(&v12->m_data[v21]);
    v71 = v22;
    ntl::sort<ConeTargetHitInfo *,ntl::less<ConeTargetHitInfo,ConeTargetHitInfo>>(v22->hits, &v22->hits[v22->hitCount], (ntl::less<ConeTargetHitInfo,ConeTargetHitInfo>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
    v60 = 0;
    v58 = 0;
    v59 = 0;
    v54 = 0;
    IsBeamWeapon = BG_IsBeamWeapon(r_weapona, isAlternate);
    v24 = 8399153;
    if ( !IsBeamWeapon )
      v24 = 8399137;
    v68 = v24;
    v25 = DCONST_DVARBOOL_targetAssist_debug;
    if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( !v25->current.enabled || (v53 = 1, !isFiring) )
      v53 = 0;
    v26 = DCONST_DVARINT_targetAssist_debugDrawDuration;
    if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    integer = v26->current.integer;
    v27 = 0;
    v56 = 0;
    if ( v22->hitCount <= 0 )
    {
LABEL_88:
      if ( v22->firstVisibleHitIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 211, ASSERT_TYPE_ASSERT, "(hitResults.firstVisibleHitIndex == -1)", (const char *)&queryFormat, "hitResults.firstVisibleHitIndex == IW_INVALID_INDEX") )
        __debugbreak();
      if ( v21 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      HitResults = ConeTargetInfo::GetHitResults(&v12->m_data[v21]);
      v17 = v61;
      goto LABEL_106;
    }
    p_z = (__int64)&v22->hits[0].tagWorldRot.row0.z;
    v70 = (ConeTargetHitResults *)&v22->hits[0].tagWorldRot.row0.z;
    while ( 1 )
    {
      v29 = *(_DWORD *)(p_z + 32);
      if ( ((unsigned int)(v29 - 14) > 1 || !v58) && ((unsigned int)(v29 - 6) > 1 || !v59) )
      {
        if ( (unsigned int)(v29 - 19) > 1 )
          break;
        ShieldMaxAngle = BgTargetAssist::GetShieldMaxAngle(v77);
        v31 = *(float *)&ShieldMaxAngle * 0.017453292;
        cosf_0(*(float *)&ShieldMaxAngle * 0.017453292);
        if ( v29 == 20 )
        {
          v32 = *(float *)(p_z - 8);
          v33 = *(float *)(p_z - 4);
          v34 = *(float *)p_z;
        }
        else
        {
          v32 = *(float *)(p_z + 4);
          v33 = *(float *)(p_z + 8);
          v34 = *(float *)(p_z + 12);
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v33 * bulletAxis->m[0].v[1]) + (float)(v32 * bulletAxis->m[0].v[0])) + (float)(v34 * bulletAxis->m[0].v[2])) ^ _xmm) >= v31 )
          break;
      }
LABEL_68:
      v56 = ++v27;
      p_z += 68i64;
      v70 = (ConeTargetHitResults *)p_z;
      v22 = v71;
      if ( v27 >= v71->hitCount )
        goto LABEL_80;
    }
    AnyResult = PhysicsQuery_GetAnyResult(worldId);
    HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
    if ( Physics_IsDetailWorld(worldId) )
      Physics_AddDetailTrace(AnyResult, NULL);
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v66, 2, 0);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v66, 0, attackerEntNum, 1, 1, 0, 1, 0);
    v36 = v63;
    if ( v63 >= 0x14 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v36 = v63;
    }
    v37 = v72->m_data[v36].GetEntNum(&v72->m_data[v36]);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v66, 1, v37, 1, 1, 0, 1, 0);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.ignoreBodies = &v66;
    extendedData.contents = v68;
    v38 = p_z - 20;
    Physics_Raycast(worldId, &start, (const vec3_t *)v38, &extendedData, AnyResult);
    ++v60;
    ++v57;
    v39 = v58;
    if ( (unsigned int)(v29 - 14) <= 1 )
      v39 = 1;
    v58 = v39;
    v40 = v59;
    if ( (unsigned int)(v29 - 6) <= 1 )
      v40 = 1;
    v59 = v40;
    if ( v53 )
    {
      if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
        v75->DebugLineAll((BgHandler *)v75, &start, (const vec3_t *)v38, &colorRed, &colorRedFaded, 0, integer);
      else
        v75->DebugLineAll((BgHandler *)v75, &start, (const vec3_t *)v38, &colorGreen, &colorGreenFaded, 0, integer);
    }
    if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
    {
      v27 = v56;
    }
    else
    {
      v54 = 1;
      if ( !v62 || v29 == 20 )
      {
        v43 = 0;
      }
      else
      {
        v41 = v83;
        v42 = &v83[v74];
        if ( v83 != v42 )
        {
          do
          {
            if ( *v41 == LODWORD(v70->hits[0].tagWorldRot.m[1].v[1]) )
              break;
            ++v41;
          }
          while ( v41 != v42 );
        }
        v43 = v41 != v42;
      }
      if ( *(_DWORD *)(v38 + 52) > 0x15u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 174, ASSERT_TYPE_ASSERT, "((hitInfo.hitLocation >= HITLOC_NONE) && (hitInfo.hitLocation < HITLOC_NUM))", (const char *)&queryFormat, "(hitInfo.hitLocation >= HITLOC_NONE) && (hitInfo.hitLocation < HITLOC_NUM)") )
        __debugbreak();
      if ( !v43 )
      {
        v22 = v71;
        v71->firstVisibleHitIndex = v56;
        v46 = hkMemHeapAllocator();
        v66.m_ignoreBodies.m_size = 0;
        if ( v66.m_ignoreBodies.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v46, v66.m_ignoreBodies.m_data, 4, v66.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
        v66.m_ignoreBodies.m_data = NULL;
        v66.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
        v47 = hkMemHeapAllocator();
        v66.m_ignoreEntities.m_size = 0;
        if ( v66.m_ignoreEntities.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v47, v66.m_ignoreEntities.m_data, 8, v66.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
        v66.m_ignoreEntities.m_data = NULL;
        v66.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
        goto LABEL_81;
      }
      v27 = v56;
      v65 = v56;
    }
    if ( v60 != 6 && v57 != 18 )
    {
      v44 = hkMemHeapAllocator();
      v66.m_ignoreBodies.m_size = 0;
      if ( v66.m_ignoreBodies.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v44, v66.m_ignoreBodies.m_data, 4, v66.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
      v66.m_ignoreBodies.m_data = NULL;
      v66.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
      v45 = hkMemHeapAllocator();
      v66.m_ignoreEntities.m_size = 0;
      if ( v66.m_ignoreEntities.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v45, v66.m_ignoreEntities.m_data, 8, v66.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
      p_z = (__int64)v70;
      goto LABEL_68;
    }
    v48 = hkMemHeapAllocator();
    v66.m_ignoreBodies.m_size = 0;
    if ( v66.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v48, v66.m_ignoreBodies.m_data, 4, v66.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v66.m_ignoreBodies.m_data = NULL;
    v66.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v49 = hkMemHeapAllocator();
    v66.m_ignoreEntities.m_size = 0;
    if ( v66.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v49, v66.m_ignoreEntities.m_data, 8, v66.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    v66.m_ignoreEntities.m_data = NULL;
    v66.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
    v22 = v71;
LABEL_80:
    if ( !v54 )
    {
      v21 = v74;
      v20 = v63;
      v12 = v72;
      goto LABEL_88;
    }
LABEL_81:
    if ( v22->firstVisibleHitIndex == -1 )
    {
      if ( v65 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 199, ASSERT_TYPE_ASSERT, "(fallbackHitInfoIndex != -1)", (const char *)&queryFormat, "fallbackHitInfoIndex != IW_INVALID_INDEX") )
        __debugbreak();
      v22->firstVisibleHitIndex = v65;
    }
    v20 = v63;
    v83[v63] = ConeTargetHitResults::GetFirstVisibleHit(v22)->tagName;
    v17 = ++v61;
    v12 = v72;
LABEL_107:
    v19 = ++v62;
    v63 = ++v20;
    v16 = v57;
    v18 = v55;
  }
  while ( v20 < v78 );
LABEL_108:
  ntl::sort<CAssistTarget *,ntl::less<CAssistTarget,CAssistTarget>>(v12->m_data, last, (ntl::less<CAssistTarget,CAssistTarget>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
  return v17;
}

