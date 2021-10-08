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
  ntl::fixed_array<GAssistTarget,20> *v16; 
  __int64 result; 
  int v41; 
  unsigned int v42; 
  char v43; 
  int v44; 
  __int64 v45; 
  unsigned __int64 v48; 
  ConeTargetHitResults *v49; 
  bool IsBeamWeapon; 
  int v51; 
  const dvar_t *v52; 
  const dvar_t *v53; 
  int v54; 
  unsigned int v56; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  unsigned __int64 v68; 
  int v69; 
  __int64 v70; 
  char v71; 
  char v72; 
  int *v73; 
  int *v74; 
  bool v75; 
  hkMemoryAllocator *v76; 
  hkMemoryAllocator *v77; 
  hkMemoryAllocator *v78; 
  hkMemoryAllocator *v79; 
  hkMemoryAllocator *v80; 
  hkMemoryAllocator *v81; 
  ConeTargetHitResults *HitResults; 
  unsigned __int64 v83; 
  char v89; 
  char v90; 
  char v91; 
  int v92; 
  int v93; 
  char v94; 
  char v95; 
  int v96; 
  unsigned int v97; 
  int v98; 
  unsigned __int64 v99; 
  int integer; 
  int v101; 
  HavokPhysics_IgnoreBodies v102; 
  float outUpOffset; 
  int v104; 
  float outForwardOffset; 
  ConeTargetHitResults *p_z; 
  ConeTargetHitResults *v107; 
  ntl::fixed_array<GAssistTarget,20> *v108; 
  float outRightOffset; 
  unsigned __int64 v110; 
  const BgHandler *v111; 
  Weapon *r_weapona; 
  BgTargetAssist *v113; 
  __int64 v114; 
  GAssistTarget *last; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v117; 
  vec3_t start; 
  int v119[20]; 
  char v120; 
  void *retaddr; 

  _RAX = &retaddr;
  v117 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  r_weapona = (Weapon *)r_weapon;
  v111 = handler;
  v113 = this;
  v16 = inOutTargetArray;
  v108 = inOutTargetArray;
  if ( targetCount )
  {
    BG_TargetAssistLosOffsets(r_weapon, isAlternate, &outForwardOffset, &outRightOffset, &outUpOffset);
    __asm
    {
      vmovss  xmm1, [rbp+120h+outForwardOffset]
      vmulss  xmm0, xmm1, dword ptr [rcx]
      vaddss  xmm3, xmm0, dword ptr [rax]
      vmulss  xmm0, xmm1, dword ptr [rcx+4]
      vaddss  xmm4, xmm0, dword ptr [rax+4]
      vmulss  xmm0, xmm1, dword ptr [rcx+8]
      vaddss  xmm5, xmm0, dword ptr [rax+8]
      vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, [rbp+120h+outRightOffset]
      vxorps  xmm2, xmm0, xmm7
      vmulss  xmm1, xmm2, dword ptr [rcx+0Ch]
      vaddss  xmm3, xmm1, xmm3
      vmulss  xmm0, xmm2, dword ptr [rcx+10h]
      vaddss  xmm4, xmm0, xmm4
      vmulss  xmm1, xmm2, dword ptr [rcx+14h]
      vaddss  xmm5, xmm1, xmm5
      vmovss  xmm2, [rbp+120h+var_170]
      vmulss  xmm0, xmm2, dword ptr [rcx+18h]
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbp+120h+start], xmm1
      vmulss  xmm0, xmm2, dword ptr [rcx+1Ch]
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rbp+120h+start+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rcx+20h]
      vaddss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rbp+120h+start+8], xmm1
    }
    v114 = targetCount;
    last = &inOutTargetArray->m_data[targetCount];
    ntl::sort<GAssistTarget *,ntl::less<GAssistTarget,GAssistTarget>>(inOutTargetArray->m_data, last, (ntl::less<GAssistTarget,GAssistTarget>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
    v41 = 0;
    v93 = 0;
    v42 = 0;
    v97 = 0;
    v43 = 0;
    v91 = 0;
    v44 = 0;
    v98 = 0;
    if ( targetCount <= 0i64 )
      goto LABEL_108;
    v45 = 0i64;
    v99 = 0i64;
    __asm
    {
      vmovss  xmm6, cs:__real@3c8efa35
      vxorps  xmm8, xmm8, xmm8
    }
    while ( 1 )
    {
      if ( v41 == 18 || v42 == maxTargets )
      {
        v91 = 1;
LABEL_96:
        v83 = v44;
        if ( (unsigned __int64)v44 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( ConeTargetInfo::GetHitResults(&v16->m_data[v83])->firstVisibleHitIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 48, ASSERT_TYPE_ASSERT, "(inOutTargetArray[targetIndex].GetHitResults().firstVisibleHitIndex == -1)", (const char *)&queryFormat, "inOutTargetArray[targetIndex].GetHitResults().firstVisibleHitIndex == IW_INVALID_INDEX") )
          __debugbreak();
        if ( v83 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        HitResults = ConeTargetInfo::GetHitResults(&v16->m_data[v83]);
LABEL_106:
        HitResults->priority = 3.4028235e38;
        goto LABEL_107;
      }
      if ( v43 )
        goto LABEL_96;
      v119[v45] = 0;
      v101 = -1;
      v48 = v44;
      v110 = v44;
      if ( (unsigned __int64)v44 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v49 = ConeTargetInfo::GetHitResults(&v16->m_data[v48]);
      v107 = v49;
      ntl::sort<ConeTargetHitInfo *,ntl::less<ConeTargetHitInfo,ConeTargetHitInfo>>(v49->hits, &v49->hits[v49->hitCount], (ntl::less<ConeTargetHitInfo,ConeTargetHitInfo>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
      v96 = 0;
      v94 = 0;
      v95 = 0;
      v90 = 0;
      IsBeamWeapon = BG_IsBeamWeapon(r_weapona, isAlternate);
      v51 = 8399153;
      if ( !IsBeamWeapon )
        v51 = 8399137;
      v104 = v51;
      v52 = DCONST_DVARBOOL_targetAssist_debug;
      if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v52);
      if ( !v52->current.enabled || (v89 = 1, !isFiring) )
        v89 = 0;
      v53 = DCONST_DVARINT_targetAssist_debugDrawDuration;
      if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v53);
      integer = v53->current.integer;
      v54 = 0;
      v92 = 0;
      if ( v49->hitCount <= 0 )
      {
LABEL_88:
        if ( v49->firstVisibleHitIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 211, ASSERT_TYPE_ASSERT, "(hitResults.firstVisibleHitIndex == -1)", (const char *)&queryFormat, "hitResults.firstVisibleHitIndex == IW_INVALID_INDEX") )
          __debugbreak();
        if ( v48 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        HitResults = ConeTargetInfo::GetHitResults(&v16->m_data[v48]);
        v42 = v97;
        goto LABEL_106;
      }
      _R13 = (__int64)&v49->hits[0].tagWorldRot.row0.z;
      p_z = (ConeTargetHitResults *)&v49->hits[0].tagWorldRot.row0.z;
      while ( 1 )
      {
        v56 = *(_DWORD *)(_R13 + 32);
        if ( (v56 - 14 > 1 || !v94) && (v56 - 6 > 1 || !v95) )
        {
          if ( v56 - 19 > 1 )
            break;
          *(double *)&_XMM0 = BgTargetAssist::GetShieldMaxAngle(v113);
          __asm { vmulss  xmm0, xmm0, xmm6; X }
          *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
          __asm { vmovaps xmm4, xmm0 }
          if ( v56 == 20 )
          {
            __asm
            {
              vmovss  xmm2, dword ptr [r13-8]
              vmovss  xmm1, dword ptr [r13-4]
              vmovss  xmm3, dword ptr [r13+0]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm2, dword ptr [r13+4]
              vmovss  xmm1, dword ptr [r13+8]
              vmovss  xmm3, dword ptr [r13+0Ch]
            }
          }
          __asm
          {
            vmulss  xmm1, xmm1, dword ptr [rax+4]
            vmulss  xmm0, xmm2, dword ptr [rax]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, dword ptr [rax+8]
            vaddss  xmm0, xmm2, xmm1
            vxorps  xmm2, xmm0, xmm7
            vcomiss xmm2, xmm4
          }
          if ( v56 >= 0x14 )
            break;
        }
LABEL_68:
        v92 = ++v54;
        _R13 += 68i64;
        p_z = (ConeTargetHitResults *)_R13;
        v49 = v107;
        if ( v54 >= v107->hitCount )
          goto LABEL_80;
      }
      AnyResult = PhysicsQuery_GetAnyResult(worldId);
      HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
      if ( Physics_IsDetailWorld(worldId) )
        Physics_AddDetailTrace(AnyResult, NULL);
      HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v102, 2, 0);
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v102, 0, attackerEntNum, 1, 1, 0, 1, 0);
      v68 = v99;
      if ( v99 >= 0x14 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v68 = v99;
      }
      v69 = v108->m_data[v68].GetEntNum(&v108->m_data[v68]);
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v102, 1, v69, 1, 1, 0, 1, 0);
      extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      __asm { vmovss  [rbp+120h+extendedData.collisionBuffer], xmm8 }
      extendedData.phaseSelection = All;
      extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
      *(_WORD *)&extendedData.collectInsideHits = 256;
      extendedData.ignoreBodies = &v102;
      extendedData.contents = v104;
      v70 = _R13 - 20;
      Physics_Raycast(worldId, &start, (const vec3_t *)v70, &extendedData, AnyResult);
      ++v96;
      ++v93;
      v71 = v94;
      if ( v56 - 14 <= 1 )
        v71 = 1;
      v94 = v71;
      v72 = v95;
      if ( v56 - 6 <= 1 )
        v72 = 1;
      v95 = v72;
      if ( v89 )
      {
        if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
          v111->DebugLineAll((BgHandler *)v111, &start, (const vec3_t *)v70, &colorRed, &colorRedFaded, 0, integer);
        else
          v111->DebugLineAll((BgHandler *)v111, &start, (const vec3_t *)v70, &colorGreen, &colorGreenFaded, 0, integer);
      }
      if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
      {
        v54 = v92;
      }
      else
      {
        v90 = 1;
        if ( !v98 || v56 == 20 )
        {
          v75 = 0;
        }
        else
        {
          v73 = v119;
          v74 = &v119[v110];
          if ( v119 != v74 )
          {
            do
            {
              if ( *v73 == LODWORD(p_z->hits[0].tagWorldRot.m[1].v[1]) )
                break;
              ++v73;
            }
            while ( v73 != v74 );
          }
          v75 = v73 != v74;
        }
        if ( *(_DWORD *)(v70 + 52) > 0x15u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 174, ASSERT_TYPE_ASSERT, "((hitInfo.hitLocation >= HITLOC_NONE) && (hitInfo.hitLocation < HITLOC_NUM))", (const char *)&queryFormat, "(hitInfo.hitLocation >= HITLOC_NONE) && (hitInfo.hitLocation < HITLOC_NUM)") )
          __debugbreak();
        if ( !v75 )
        {
          v49 = v107;
          v107->firstVisibleHitIndex = v92;
          v78 = hkMemHeapAllocator();
          v102.m_ignoreBodies.m_size = 0;
          if ( v102.m_ignoreBodies.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v78, v102.m_ignoreBodies.m_data, 4, v102.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
          v102.m_ignoreBodies.m_data = NULL;
          v102.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
          v79 = hkMemHeapAllocator();
          v102.m_ignoreEntities.m_size = 0;
          if ( v102.m_ignoreEntities.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v79, v102.m_ignoreEntities.m_data, 8, v102.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
          v102.m_ignoreEntities.m_data = NULL;
          v102.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
          goto LABEL_81;
        }
        v54 = v92;
        v101 = v92;
      }
      if ( v96 != 6 && v93 != 18 )
        break;
      v80 = hkMemHeapAllocator();
      v102.m_ignoreBodies.m_size = 0;
      if ( v102.m_ignoreBodies.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v80, v102.m_ignoreBodies.m_data, 4, v102.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
      v102.m_ignoreBodies.m_data = NULL;
      v102.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
      v81 = hkMemHeapAllocator();
      v102.m_ignoreEntities.m_size = 0;
      if ( v102.m_ignoreEntities.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v81, v102.m_ignoreEntities.m_data, 8, v102.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
      v102.m_ignoreEntities.m_data = NULL;
      v102.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
      v49 = v107;
LABEL_80:
      if ( !v90 )
      {
        v48 = v110;
        v45 = v99;
        v16 = v108;
        goto LABEL_88;
      }
LABEL_81:
      if ( v49->firstVisibleHitIndex == -1 )
      {
        if ( v101 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 199, ASSERT_TYPE_ASSERT, "(fallbackHitInfoIndex != -1)", (const char *)&queryFormat, "fallbackHitInfoIndex != IW_INVALID_INDEX") )
          __debugbreak();
        v49->firstVisibleHitIndex = v101;
      }
      v45 = v99;
      v119[v99] = ConeTargetHitResults::GetFirstVisibleHit(v49)->tagName;
      v42 = ++v97;
      v16 = v108;
LABEL_107:
      v44 = ++v98;
      v99 = ++v45;
      v41 = v93;
      v43 = v91;
      if ( v45 >= v114 )
      {
LABEL_108:
        ntl::sort<GAssistTarget *,ntl::less<GAssistTarget,GAssistTarget>>(v16->m_data, last, (ntl::less<GAssistTarget,GAssistTarget>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
        result = v42;
        goto LABEL_109;
      }
    }
    v76 = hkMemHeapAllocator();
    v102.m_ignoreBodies.m_size = 0;
    if ( v102.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v76, v102.m_ignoreBodies.m_data, 4, v102.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v102.m_ignoreBodies.m_data = NULL;
    v102.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v77 = hkMemHeapAllocator();
    v102.m_ignoreEntities.m_size = 0;
    if ( v102.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v77, v102.m_ignoreEntities.m_data, 8, v102.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    _R13 = (__int64)p_z;
    goto LABEL_68;
  }
  result = 0i64;
LABEL_109:
  _R11 = &v120;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
  return result;
}

/*
==============
BgTargetAssist::EvaluateTargetsWithinCone<CAssistTarget>
==============
*/
__int64 BgTargetAssist::EvaluateTargetsWithinCone<CAssistTarget>(BgTargetAssist *this, const BgHandler *handler, const Weapon *r_weapon, const bool isAlternate, ntl::fixed_array<CAssistTarget,20> *inOutTargetArray, const int targetCount, const tmat33_t<vec3_t> *bulletAxis, const vec3_t *bulletStart, const int maxTargets, const __int16 attackerEntNum, const Physics_WorldId worldId, const bool isFiring)
{
  ntl::fixed_array<CAssistTarget,20> *v16; 
  __int64 result; 
  int v41; 
  unsigned int v42; 
  char v43; 
  int v44; 
  __int64 v45; 
  unsigned __int64 v48; 
  ConeTargetHitResults *v49; 
  bool IsBeamWeapon; 
  int v51; 
  const dvar_t *v52; 
  const dvar_t *v53; 
  int v54; 
  unsigned int v56; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  unsigned __int64 v68; 
  int v69; 
  __int64 v70; 
  char v71; 
  char v72; 
  int *v73; 
  int *v74; 
  bool v75; 
  hkMemoryAllocator *v76; 
  hkMemoryAllocator *v77; 
  hkMemoryAllocator *v78; 
  hkMemoryAllocator *v79; 
  hkMemoryAllocator *v80; 
  hkMemoryAllocator *v81; 
  ConeTargetHitResults *HitResults; 
  unsigned __int64 v83; 
  char v89; 
  char v90; 
  char v91; 
  int v92; 
  int v93; 
  char v94; 
  char v95; 
  int v96; 
  unsigned int v97; 
  int v98; 
  unsigned __int64 v99; 
  int integer; 
  int v101; 
  HavokPhysics_IgnoreBodies v102; 
  float outUpOffset; 
  int v104; 
  float outForwardOffset; 
  ConeTargetHitResults *p_z; 
  ConeTargetHitResults *v107; 
  ntl::fixed_array<CAssistTarget,20> *v108; 
  float outRightOffset; 
  unsigned __int64 v110; 
  const BgHandler *v111; 
  Weapon *r_weapona; 
  BgTargetAssist *v113; 
  __int64 v114; 
  CAssistTarget *last; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v117; 
  vec3_t start; 
  int v119[20]; 
  char v120; 
  void *retaddr; 

  _RAX = &retaddr;
  v117 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  r_weapona = (Weapon *)r_weapon;
  v111 = handler;
  v113 = this;
  v16 = inOutTargetArray;
  v108 = inOutTargetArray;
  if ( targetCount )
  {
    BG_TargetAssistLosOffsets(r_weapon, isAlternate, &outForwardOffset, &outRightOffset, &outUpOffset);
    __asm
    {
      vmovss  xmm1, [rbp+120h+outForwardOffset]
      vmulss  xmm0, xmm1, dword ptr [rcx]
      vaddss  xmm3, xmm0, dword ptr [rax]
      vmulss  xmm0, xmm1, dword ptr [rcx+4]
      vaddss  xmm4, xmm0, dword ptr [rax+4]
      vmulss  xmm0, xmm1, dword ptr [rcx+8]
      vaddss  xmm5, xmm0, dword ptr [rax+8]
      vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, [rbp+120h+outRightOffset]
      vxorps  xmm2, xmm0, xmm7
      vmulss  xmm1, xmm2, dword ptr [rcx+0Ch]
      vaddss  xmm3, xmm1, xmm3
      vmulss  xmm0, xmm2, dword ptr [rcx+10h]
      vaddss  xmm4, xmm0, xmm4
      vmulss  xmm1, xmm2, dword ptr [rcx+14h]
      vaddss  xmm5, xmm1, xmm5
      vmovss  xmm2, [rbp+120h+var_170]
      vmulss  xmm0, xmm2, dword ptr [rcx+18h]
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbp+120h+start], xmm1
      vmulss  xmm0, xmm2, dword ptr [rcx+1Ch]
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rbp+120h+start+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rcx+20h]
      vaddss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rbp+120h+start+8], xmm1
    }
    v114 = targetCount;
    last = &inOutTargetArray->m_data[targetCount];
    ntl::sort<CAssistTarget *,ntl::less<CAssistTarget,CAssistTarget>>(inOutTargetArray->m_data, last, (ntl::less<CAssistTarget,CAssistTarget>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
    v41 = 0;
    v93 = 0;
    v42 = 0;
    v97 = 0;
    v43 = 0;
    v91 = 0;
    v44 = 0;
    v98 = 0;
    if ( targetCount <= 0i64 )
      goto LABEL_108;
    v45 = 0i64;
    v99 = 0i64;
    __asm
    {
      vmovss  xmm6, cs:__real@3c8efa35
      vxorps  xmm8, xmm8, xmm8
    }
    while ( 1 )
    {
      if ( v41 == 18 || v42 == maxTargets )
      {
        v91 = 1;
LABEL_96:
        v83 = v44;
        if ( (unsigned __int64)v44 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( ConeTargetInfo::GetHitResults(&v16->m_data[v83])->firstVisibleHitIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 48, ASSERT_TYPE_ASSERT, "(inOutTargetArray[targetIndex].GetHitResults().firstVisibleHitIndex == -1)", (const char *)&queryFormat, "inOutTargetArray[targetIndex].GetHitResults().firstVisibleHitIndex == IW_INVALID_INDEX") )
          __debugbreak();
        if ( v83 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        HitResults = ConeTargetInfo::GetHitResults(&v16->m_data[v83]);
LABEL_106:
        HitResults->priority = 3.4028235e38;
        goto LABEL_107;
      }
      if ( v43 )
        goto LABEL_96;
      v119[v45] = 0;
      v101 = -1;
      v48 = v44;
      v110 = v44;
      if ( (unsigned __int64)v44 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v49 = ConeTargetInfo::GetHitResults(&v16->m_data[v48]);
      v107 = v49;
      ntl::sort<ConeTargetHitInfo *,ntl::less<ConeTargetHitInfo,ConeTargetHitInfo>>(v49->hits, &v49->hits[v49->hitCount], (ntl::less<ConeTargetHitInfo,ConeTargetHitInfo>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
      v96 = 0;
      v94 = 0;
      v95 = 0;
      v90 = 0;
      IsBeamWeapon = BG_IsBeamWeapon(r_weapona, isAlternate);
      v51 = 8399153;
      if ( !IsBeamWeapon )
        v51 = 8399137;
      v104 = v51;
      v52 = DCONST_DVARBOOL_targetAssist_debug;
      if ( !DCONST_DVARBOOL_targetAssist_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v52);
      if ( !v52->current.enabled || (v89 = 1, !isFiring) )
        v89 = 0;
      v53 = DCONST_DVARINT_targetAssist_debugDrawDuration;
      if ( !DCONST_DVARINT_targetAssist_debugDrawDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "targetAssist_debugDrawDuration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v53);
      integer = v53->current.integer;
      v54 = 0;
      v92 = 0;
      if ( v49->hitCount <= 0 )
      {
LABEL_88:
        if ( v49->firstVisibleHitIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 211, ASSERT_TYPE_ASSERT, "(hitResults.firstVisibleHitIndex == -1)", (const char *)&queryFormat, "hitResults.firstVisibleHitIndex == IW_INVALID_INDEX") )
          __debugbreak();
        if ( v48 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        HitResults = ConeTargetInfo::GetHitResults(&v16->m_data[v48]);
        v42 = v97;
        goto LABEL_106;
      }
      _R13 = (__int64)&v49->hits[0].tagWorldRot.row0.z;
      p_z = (ConeTargetHitResults *)&v49->hits[0].tagWorldRot.row0.z;
      while ( 1 )
      {
        v56 = *(_DWORD *)(_R13 + 32);
        if ( (v56 - 14 > 1 || !v94) && (v56 - 6 > 1 || !v95) )
        {
          if ( v56 - 19 > 1 )
            break;
          *(double *)&_XMM0 = BgTargetAssist::GetShieldMaxAngle(v113);
          __asm { vmulss  xmm0, xmm0, xmm6; X }
          *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
          __asm { vmovaps xmm4, xmm0 }
          if ( v56 == 20 )
          {
            __asm
            {
              vmovss  xmm2, dword ptr [r13-8]
              vmovss  xmm1, dword ptr [r13-4]
              vmovss  xmm3, dword ptr [r13+0]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm2, dword ptr [r13+4]
              vmovss  xmm1, dword ptr [r13+8]
              vmovss  xmm3, dword ptr [r13+0Ch]
            }
          }
          __asm
          {
            vmulss  xmm1, xmm1, dword ptr [rax+4]
            vmulss  xmm0, xmm2, dword ptr [rax]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, dword ptr [rax+8]
            vaddss  xmm0, xmm2, xmm1
            vxorps  xmm2, xmm0, xmm7
            vcomiss xmm2, xmm4
          }
          if ( v56 >= 0x14 )
            break;
        }
LABEL_68:
        v92 = ++v54;
        _R13 += 68i64;
        p_z = (ConeTargetHitResults *)_R13;
        v49 = v107;
        if ( v54 >= v107->hitCount )
          goto LABEL_80;
      }
      AnyResult = PhysicsQuery_GetAnyResult(worldId);
      HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
      if ( Physics_IsDetailWorld(worldId) )
        Physics_AddDetailTrace(AnyResult, NULL);
      HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v102, 2, 0);
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v102, 0, attackerEntNum, 1, 1, 0, 1, 0);
      v68 = v99;
      if ( v99 >= 0x14 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v68 = v99;
      }
      v69 = v108->m_data[v68].GetEntNum(&v108->m_data[v68]);
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v102, 1, v69, 1, 1, 0, 1, 0);
      extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      __asm { vmovss  [rbp+120h+extendedData.collisionBuffer], xmm8 }
      extendedData.phaseSelection = All;
      extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
      *(_WORD *)&extendedData.collectInsideHits = 256;
      extendedData.ignoreBodies = &v102;
      extendedData.contents = v104;
      v70 = _R13 - 20;
      Physics_Raycast(worldId, &start, (const vec3_t *)v70, &extendedData, AnyResult);
      ++v96;
      ++v93;
      v71 = v94;
      if ( v56 - 14 <= 1 )
        v71 = 1;
      v94 = v71;
      v72 = v95;
      if ( v56 - 6 <= 1 )
        v72 = 1;
      v95 = v72;
      if ( v89 )
      {
        if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
          v111->DebugLineAll((BgHandler *)v111, &start, (const vec3_t *)v70, &colorRed, &colorRedFaded, 0, integer);
        else
          v111->DebugLineAll((BgHandler *)v111, &start, (const vec3_t *)v70, &colorGreen, &colorGreenFaded, 0, integer);
      }
      if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
      {
        v54 = v92;
      }
      else
      {
        v90 = 1;
        if ( !v98 || v56 == 20 )
        {
          v75 = 0;
        }
        else
        {
          v73 = v119;
          v74 = &v119[v110];
          if ( v119 != v74 )
          {
            do
            {
              if ( *v73 == LODWORD(p_z->hits[0].tagWorldRot.m[1].v[1]) )
                break;
              ++v73;
            }
            while ( v73 != v74 );
          }
          v75 = v73 != v74;
        }
        if ( *(_DWORD *)(v70 + 52) > 0x15u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 174, ASSERT_TYPE_ASSERT, "((hitInfo.hitLocation >= HITLOC_NONE) && (hitInfo.hitLocation < HITLOC_NUM))", (const char *)&queryFormat, "(hitInfo.hitLocation >= HITLOC_NONE) && (hitInfo.hitLocation < HITLOC_NUM)") )
          __debugbreak();
        if ( !v75 )
        {
          v49 = v107;
          v107->firstVisibleHitIndex = v92;
          v78 = hkMemHeapAllocator();
          v102.m_ignoreBodies.m_size = 0;
          if ( v102.m_ignoreBodies.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v78, v102.m_ignoreBodies.m_data, 4, v102.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
          v102.m_ignoreBodies.m_data = NULL;
          v102.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
          v79 = hkMemHeapAllocator();
          v102.m_ignoreEntities.m_size = 0;
          if ( v102.m_ignoreEntities.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v79, v102.m_ignoreEntities.m_data, 8, v102.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
          v102.m_ignoreEntities.m_data = NULL;
          v102.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
          goto LABEL_81;
        }
        v54 = v92;
        v101 = v92;
      }
      if ( v96 != 6 && v93 != 18 )
        break;
      v80 = hkMemHeapAllocator();
      v102.m_ignoreBodies.m_size = 0;
      if ( v102.m_ignoreBodies.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v80, v102.m_ignoreBodies.m_data, 4, v102.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
      v102.m_ignoreBodies.m_data = NULL;
      v102.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
      v81 = hkMemHeapAllocator();
      v102.m_ignoreEntities.m_size = 0;
      if ( v102.m_ignoreEntities.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v81, v102.m_ignoreEntities.m_data, 8, v102.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
      v102.m_ignoreEntities.m_data = NULL;
      v102.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
      v49 = v107;
LABEL_80:
      if ( !v90 )
      {
        v48 = v110;
        v45 = v99;
        v16 = v108;
        goto LABEL_88;
      }
LABEL_81:
      if ( v49->firstVisibleHitIndex == -1 )
      {
        if ( v101 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_targetassist_internal.h", 199, ASSERT_TYPE_ASSERT, "(fallbackHitInfoIndex != -1)", (const char *)&queryFormat, "fallbackHitInfoIndex != IW_INVALID_INDEX") )
          __debugbreak();
        v49->firstVisibleHitIndex = v101;
      }
      v45 = v99;
      v119[v99] = ConeTargetHitResults::GetFirstVisibleHit(v49)->tagName;
      v42 = ++v97;
      v16 = v108;
LABEL_107:
      v44 = ++v98;
      v99 = ++v45;
      v41 = v93;
      v43 = v91;
      if ( v45 >= v114 )
      {
LABEL_108:
        ntl::sort<CAssistTarget *,ntl::less<CAssistTarget,CAssistTarget>>(v16->m_data, last, (ntl::less<CAssistTarget,CAssistTarget>)isAlternate, (ntl::random_access_iterator_tag)isAlternate);
        result = v42;
        goto LABEL_109;
      }
    }
    v76 = hkMemHeapAllocator();
    v102.m_ignoreBodies.m_size = 0;
    if ( v102.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v76, v102.m_ignoreBodies.m_data, 4, v102.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v102.m_ignoreBodies.m_data = NULL;
    v102.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v77 = hkMemHeapAllocator();
    v102.m_ignoreEntities.m_size = 0;
    if ( v102.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v77, v102.m_ignoreEntities.m_data, 8, v102.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    _R13 = (__int64)p_z;
    goto LABEL_68;
  }
  result = 0i64;
LABEL_109:
  _R11 = &v120;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
  return result;
}

