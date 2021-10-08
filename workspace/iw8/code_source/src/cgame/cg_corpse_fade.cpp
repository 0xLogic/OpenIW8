/*
==============
CG_CorpseFade_ApplyDissolveMaterial
==============
*/

void __fastcall CG_CorpseFade_ApplyDissolveMaterial(const LocalClientNum_t localClientNum, DObj *const obj, const int entityNum, bool *isFadeActive, bool *isFadeComplete, bool *isOverHalfWayFaded)
{
  ?CG_CorpseFade_ApplyDissolveMaterial@@YAXW4LocalClientNum_t@@QEAUDObj@@HAEA_N22@Z(localClientNum, obj, entityNum, isFadeActive, isFadeComplete, isOverHalfWayFaded);
}

/*
==============
CG_CorpseFade_CullImpactEffects
==============
*/

bool __fastcall CG_CorpseFade_CullImpactEffects(const LocalClientNum_t localClientNum, const int entityNum)
{
  return ?CG_CorpseFade_CullImpactEffects@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, entityNum);
}

/*
==============
CG_CorpseFade_Update
==============
*/

void __fastcall CG_CorpseFade_Update(const LocalClientNum_t localClientNum)
{
  ?CG_CorpseFade_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CorpseFade_Init
==============
*/

void __fastcall CG_CorpseFade_Init(const LocalClientNum_t localClientNum)
{
  ?CG_CorpseFade_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CorpseFade_Insert
==============
*/

void __fastcall CG_CorpseFade_Insert(const int entityId, const float distance, const unsigned __int64 maxSize, ntl::fixed_map<int,float,16,ntl::less<int,int> > *inOutMap)
{
  ?CG_CorpseFade_Insert@@YAXHM_KAEAV?$fixed_map@HM$0BA@U?$less@HH@ntl@@@ntl@@@Z(entityId, distance, maxSize, inOutMap);
}

/*
==============
CG_CorpseFade_ApplyDissolveMaterial
==============
*/
void CG_CorpseFade_ApplyDissolveMaterial(const LocalClientNum_t localClientNum, DObj *const obj, const int entityNum, bool *isFadeActive, bool *isFadeComplete, bool *isOverHalfWayFaded)
{
  __int64 v9; 
  __int64 v10; 
  cg_t *LocalClientGlobals; 
  __int64 v12; 
  cg_t *v13; 
  __int64 v14; 
  char *v15; 
  char *v16; 
  const CorpseFadeData *v17; 
  char *v18; 
  const dvar_t *v19; 
  bool v20; 
  bool v24; 
  bool v25; 
  __int64 v26; 
  unsigned int v27; 
  volatile signed __int32 *v28; 
  volatile signed __int32 *v29; 
  int v30; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  v9 = entityNum;
  v10 = localClientNum;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 789, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
  v12 = 440 * v10;
  v13 = LocalClientGlobals;
  v14 = v10;
  v15 = (char *)*((_QWORD *)&s_corpseFadeMap[0].m_endNodeBase.mp_parent + 55 * v10);
  v16 = (char *)&s_corpseFadeMap[0].m_endNodeBase + 440 * v10;
  v17 = (const CorpseFadeData *)v16;
  while ( v15 )
  {
    if ( *((_DWORD *)v15 + 8) < (int)v9 )
    {
      v15 = (char *)*((_QWORD *)v15 + 3);
    }
    else
    {
      v17 = (const CorpseFadeData *)v15;
      v15 = (char *)*((_QWORD *)v15 + 2);
    }
  }
  if ( v17 != (const CorpseFadeData *)v16 && (int)v9 < *(_DWORD *)&v17[2].increasing )
    v17 = (const CorpseFadeData *)v16;
  v18 = (char *)&s_corpseFadeMap[0].m_endNodeBase + v12;
  if ( v17 == (const CorpseFadeData *)((char *)&s_corpseFadeMap[0].m_endNodeBase + v12) )
    goto LABEL_18;
  v19 = DCONST_DVARMPBOOL_cg_corpseFade_enabled;
  if ( !DCONST_DVARMPBOOL_cg_corpseFade_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( !v19->current.enabled )
LABEL_18:
    v20 = 0;
  else
    v20 = 1;
  *isFadeActive = v20;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( v17 == (const CorpseFadeData *)v18 )
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  else
  {
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    *(float *)&_XMM0 = CG_CorpseFade_CalcOpacity(v13->time, v17 + 3);
    v20 = *isFadeActive;
  }
  __asm { vminss  xmm6, xmm0, xmm6 }
  if ( v20 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
  }
  *isFadeComplete = 0;
  if ( *isFadeActive )
    __asm { vcomiss xmm6, cs:__real@3f000000 }
  *isOverHalfWayFaded = 0;
  v24 = *isFadeActive;
  v25 = *isFadeActive && !*isFadeComplete;
  v26 = 160 * v14 + (v9 >> 5);
  v27 = 0x80000000 >> (v9 & 0x1F);
  v28 = (volatile signed __int32 *)((char *)s_corpseFadeActive + 4 * v26);
  if ( v24 )
  {
    if ( ((unsigned __int8)v28 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (char *)s_corpseFadeActive + 4 * v26) )
      __debugbreak();
    _InterlockedOr(v28, v27);
  }
  else
  {
    if ( ((unsigned __int8)v28 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (char *)s_corpseFadeActive + 4 * v26) )
      __debugbreak();
    _InterlockedAnd(v28, ~v27);
  }
  v29 = (volatile signed __int32 *)((char *)s_corpseFadeMaterialActive + 4 * v26);
  if ( v25 )
  {
    if ( (((unsigned __int8)0x40000000u + 4 * (_BYTE)v26 + 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (char *)s_corpseFadeMaterialActive + 4 * v26) )
      __debugbreak();
    _InterlockedOr(v29, v27);
  }
  else
  {
    v30 = ~v27;
    if ( (((unsigned __int8)0x40000000u + 4 * (_BYTE)v26 + 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (char *)s_corpseFadeMaterialActive + 4 * v26) )
      __debugbreak();
    _InterlockedAnd(v29, v30);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
}

/*
==============
CG_CorpseFade_CalcDetailDistance_Ragdoll
==============
*/
float CG_CorpseFade_CalcDetailDistance_Ragdoll(const LocalClientNum_t localClientNum, int entityId, const vec3_t *viewOrigin, const ntl::fixed_map<int,int,64,ntl::less<int,int> > *ragdollMap)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  int v11; 
  const scr_string_t **v12; 
  __int64 v14; 
  const scr_string_t *v16; 
  const dvar_t *v23; 
  float outRadius; 
  vec3_t outOrigin; 

  __asm
  {
    vmovaps [rsp+0C8h+var_58], xmm7
    vmovaps [rsp+0C8h+var_68], xmm8
  }
  mp_parent = ragdollMap->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &ragdollMap->m_endNodeBase;
  while ( mp_parent )
  {
    if ( mp_parent[1].m_color < entityId )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( p_m_endNodeBase != &ragdollMap->m_endNodeBase )
  {
    if ( entityId >= p_m_endNodeBase[1].m_color )
      goto LABEL_11;
    p_m_endNodeBase = &ragdollMap->m_endNodeBase;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 229, ASSERT_TYPE_ASSERT, "(ragdollItr != ragdollMap.end())", (const char *)&queryFormat, "ragdollItr != ragdollMap.end()") )
    __debugbreak();
LABEL_11:
  if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  v11 = *((_DWORD *)&p_m_endNodeBase[1].m_color + 1);
  v12 = s_ragdollBones;
  __asm { vmovss  xmm7, cs:__real@7f7fffff }
  v14 = 7i64;
  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm6
    vxorps  xmm8, xmm8, xmm8
  }
  do
  {
    v16 = *v12;
    if ( !*v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 236, ASSERT_TYPE_ASSERT, "(boneName != nullptr)", (const char *)&queryFormat, "boneName != nullptr") )
      __debugbreak();
    if ( !*v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 237, ASSERT_TYPE_ASSERT, "(*boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*boneName != NULL_SCR_STRING") )
      __debugbreak();
    if ( Ragdoll_GetBoneOrigin(v11, v16, &outOrigin, &outRadius) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+outOrigin]
        vsubss  xmm2, xmm0, dword ptr [r15]
        vmovss  xmm1, dword ptr [rsp+0C8h+outOrigin+4]
        vsubss  xmm3, xmm1, dword ptr [r15+4]
        vmovss  xmm0, dword ptr [rsp+0C8h+outOrigin+8]
        vsubss  xmm4, xmm0, dword ptr [r15+8]
      }
      v23 = DCONST_DVARBOOL_cg_corpseFade_debug;
      __asm
      {
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vsubss  xmm4, xmm1, [rsp+0C8h+outRadius]
        vmaxss  xmm0, xmm4, xmm8
        vminss  xmm7, xmm0, xmm7
      }
      if ( !DCONST_DVARBOOL_cg_corpseFade_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      if ( v23->current.enabled )
      {
        *(float *)&_XMM0 = CG_CorpseFade_GetOutDistanceStart(localClientNum, entityId);
        __asm
        {
          vmovss  xmm1, [rsp+0C8h+outRadius]; radius
          vmovaps xmm6, xmm0
        }
        CG_DebugSphere(&outOrigin, *(float *)&_XMM1, &colorGreen, 0, 0);
        __asm { vaddss  xmm1, xmm6, [rsp+0C8h+outRadius]; radius }
        CG_DebugSphere(&outOrigin, *(float *)&_XMM1, &colorCyan, 1, 0);
      }
    }
    ++v12;
    --v14;
  }
  while ( v14 );
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_48]
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+0C8h+var_58]
    vmovaps xmm8, [rsp+0C8h+var_68]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_CorpseFade_CalcOpacity
==============
*/
double CG_CorpseFade_CalcOpacity(const int serverTimeMs, const CorpseFadeData *fadeData)
{
  _RBX = DCONST_DVARFLT_cg_corpseFade_time;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !DCONST_DVARFLT_cg_corpseFade_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vmovss  xmm6, cs:__real@3f800000
    vcvttss2si eax, xmm1
  }
  if ( _EAX > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edi
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm0, xmm1, xmm0; val
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm
  {
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _EAX = 0;
  __asm { vmovd   xmm4, eax }
  _EAX = fadeData->increasing;
  __asm
  {
    vmovd   xmm3, eax
    vpcmpeqd xmm5, xmm3, xmm4
    vmovss  xmm4, cs:__real@bf800000
    vblendvps xmm3, xmm6, xmm4, xmm5
    vmulss  xmm0, xmm3, xmm0
    vaddss  xmm0, xmm0, dword ptr [rsi+4]; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
CG_CorpseFade_CalcRoughDistanceSq
==============
*/
float CG_CorpseFade_CalcRoughDistanceSq(const LocalClientNum_t localClientNum, const int entityId, const vec3_t *viewOrigin, const ntl::fixed_map<int,int,64,ntl::less<int,int> > *ragdollMap)
{
  int Type; 
  const dvar_t *v17; 
  const vec4_t *v25; 
  char v26; 
  char v27; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  int v30; 
  float outRadius; 
  vec3_t outOrigin; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  Type = CG_CorpseFade_GetType(localClientNum, entityId);
  if ( Type == 2 )
  {
LABEL_17:
    mp_parent = ragdollMap->m_endNodeBase.mp_parent;
    p_m_endNodeBase = &ragdollMap->m_endNodeBase;
    while ( mp_parent )
    {
      if ( mp_parent[1].m_color < entityId )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        p_m_endNodeBase = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    if ( p_m_endNodeBase == &ragdollMap->m_endNodeBase || entityId < p_m_endNodeBase[1].m_color || (v30 = *((_DWORD *)&p_m_endNodeBase[1].m_color + 1), !Ragdoll_IsAllocated(v30)) || !Ragdoll_GetBoneOrigin(v30, 0, &outOrigin, &outRadius) )
    {
      __asm { vmovss  xmm0, cs:__real@7f7fffff }
      goto LABEL_27;
    }
    goto LABEL_9;
  }
  if ( Type != 6 )
  {
    if ( Type != 18 && Type != 21 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 208, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CorpseFade_CalcRoughDistanceSq: unexpected eType %i, entNum %i", Type, entityId) )
        __debugbreak();
      __asm { vxorps  xmm0, xmm0, xmm0 }
      goto LABEL_27;
    }
    goto LABEL_17;
  }
  CG_GetEntityOrigin(localClientNum, entityId, &outOrigin);
LABEL_9:
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+outOrigin]
    vsubss  xmm3, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsp+88h+outOrigin+4]
    vmovss  xmm0, dword ptr [rsp+88h+outOrigin+8]
    vsubss  xmm2, xmm1, dword ptr [rsi+4]
    vsubss  xmm4, xmm0, dword ptr [rsi+8]
  }
  v17 = DCONST_DVARBOOL_cg_corpseFade_debug;
  __asm
  {
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm6, xmm3, xmm0
  }
  if ( !DCONST_DVARBOOL_cg_corpseFade_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    *(float *)&_XMM0 = CG_CorpseFade_GetOutDistanceStart(localClientNum, entityId);
    __asm
    {
      vaddss  xmm1, xmm0, cs:dword_147FA32DC; radius
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm6, xmm2
    }
    v25 = &colorDkCyan;
    if ( v26 | v27 )
      v25 = &colorCyan;
    CG_DebugSphere(&outOrigin, *(float *)&_XMM1, v25, 1, 0);
  }
  __asm { vmovaps xmm0, xmm6 }
LABEL_27:
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  return *(float *)&_XMM0;
}

/*
==============
CG_CorpseFade_CollectCandidates
==============
*/
void CG_CorpseFade_CollectCandidates(const LocalClientNum_t localClientNum, const vec3_t *viewOrigin, const bool isStateValid, const ntl::fixed_map<int,int,64,ntl::less<int,int> > *ragdollMap, const ntl::fixed_map<int,CorpseFadeData,8,ntl::less<int,int> > *inPrevActiveFadeMap, ntl::fixed_map<int,float,16,ntl::less<int,int> > *outDistSqMap)
{
  bool v10; 
  ntl::red_black_tree_node_base *mp_left; 
  __int64 v14; 
  int m_color; 
  char v16; 
  int v18; 
  Ragdoll *v19; 
  unsigned int EntityNumber; 
  int v21; 
  int v26; 
  __int64 v27; 
  CgEntitySystem *v28; 
  __int64 v35; 
  __int64 v36; 

  v10 = isStateValid;
  __asm
  {
    vmovaps [rsp+88h+var_48], xmm7
    vmovss  xmm7, cs:__real@7f7fffff
  }
  mp_left = inPrevActiveFadeMap->m_endNodeBase.mp_left;
  v14 = localClientNum;
  if ( mp_left != &inPrevActiveFadeMap->m_endNodeBase )
  {
    do
    {
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      m_color = mp_left[1].m_color;
      if ( CG_CorpseFade_IsValidEntityType((const LocalClientNum_t)v14, m_color) )
      {
        *(float *)&_XMM0 = CG_CorpseFade_CalcRoughDistanceSq((const LocalClientNum_t)v14, m_color, viewOrigin, ragdollMap);
        __asm { vcomiss xmm0, xmm7 }
        if ( v16 )
        {
          __asm { vmovaps xmm1, xmm0; distance }
          CG_CorpseFade_Insert(m_color, *(const float *)&_XMM1, 0x10ui64, outDistSqMap);
        }
      }
      mp_left = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(mp_left);
    }
    while ( mp_left != &inPrevActiveFadeMap->m_endNodeBase );
    v10 = isStateValid;
  }
  if ( v10 )
  {
    v18 = 1;
    __asm { vmovaps [rsp+88h+var_38], xmm6 }
    v19 = g_ragdollBodies;
    do
    {
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v18 - 1) >= 0x40 )
      {
        LODWORD(v36) = 64;
        LODWORD(v35) = v18 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v18 - 1) >= 0x40 )
      {
        LODWORD(v36) = 64;
        LODWORD(v35) = v18 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( v19->allocated )
      {
        EntityNumber = Ragdoll_GetEntityNumber(v18);
        v21 = EntityNumber;
        if ( EntityNumber >= 0x800 )
        {
          LODWORD(v36) = 2048;
          LODWORD(v35) = EntityNumber;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 463, ASSERT_TYPE_ASSERT, "(unsigned)( entityId ) < (unsigned)( ( 2048 ) )", "entityId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
        if ( CG_CorpseFade_IsValidEntityType((const LocalClientNum_t)v14, v21) )
        {
          *(float *)&_XMM0 = CG_CorpseFade_CalcRoughDistanceSq((const LocalClientNum_t)v14, v21, viewOrigin, ragdollMap);
          __asm
          {
            vcomiss xmm0, xmm7
            vmovaps xmm6, xmm0
          }
          if ( v16 )
          {
            *(float *)&_XMM0 = CG_CorpseFade_GetOutDistanceStart((const LocalClientNum_t)v14, v21);
            __asm
            {
              vaddss  xmm2, xmm0, cs:dword_147FA32DC
              vmulss  xmm3, xmm2, xmm2
              vcomiss xmm3, xmm6
            }
            if ( !v16 )
            {
              __asm { vmovaps xmm1, xmm6; distance }
              CG_CorpseFade_Insert(v21, *(const float *)&_XMM1, 0x10ui64, outDistSqMap);
            }
          }
        }
      }
      ++v18;
      ++v19;
    }
    while ( v18 <= 64 );
    v26 = 0;
    v27 = 0i64;
    do
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v36) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v36) )
          __debugbreak();
      }
      if ( (unsigned int)v14 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v35) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v14] )
      {
        LODWORD(v36) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v36) )
          __debugbreak();
      }
      v28 = CgEntitySystem::ms_entitySystemArray[v14];
      if ( (unsigned int)v26 >= 0x800 )
      {
        LODWORD(v36) = 2048;
        LODWORD(v35) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      if ( (v28->m_entities[v27].flags & 1) != 0 && v28->m_entities[v27].nextState.eType == ET_SCRIPTMOVER && (v28->m_entities[v27].nextState.lerp.u.anonymous.data[2] & 0x80) != 0 )
      {
        *(float *)&_XMM0 = CG_CorpseFade_CalcRoughDistanceSq((const LocalClientNum_t)v14, v26, viewOrigin, ragdollMap);
        __asm
        {
          vcomiss xmm0, xmm7
          vmovaps xmm6, xmm0
        }
        if ( v16 )
        {
          *(float *)&_XMM0 = CG_CorpseFade_GetOutDistanceStart((const LocalClientNum_t)v14, v26);
          __asm
          {
            vaddss  xmm1, xmm0, cs:dword_147FA32DC
            vmulss  xmm2, xmm1, xmm1
            vcomiss xmm2, xmm6
          }
          if ( !v16 )
          {
            __asm { vmovaps xmm1, xmm6; distance }
            CG_CorpseFade_Insert(v26, *(const float *)&_XMM1, 0x10ui64, outDistSqMap);
          }
        }
      }
      ++v26;
      ++v27;
    }
    while ( v26 < 2048 );
    __asm { vmovaps xmm6, [rsp+88h+var_38] }
  }
  __asm { vmovaps xmm7, [rsp+88h+var_48] }
}

/*
==============
CG_CorpseFade_CullImpactEffects
==============
*/
bool CG_CorpseFade_CullImpactEffects(const LocalClientNum_t localClientNum, const int entityNum)
{
  const dvar_t *v2; 
  __int64 v3; 
  __int64 v4; 

  v2 = DCONST_DVARMPBOOL_cg_corpseFade_enabled;
  v3 = entityNum;
  v4 = localClientNum;
  if ( !DCONST_DVARMPBOOL_cg_corpseFade_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled && ((0x80000000 >> (v3 & 0x1F)) & s_corpseFadeActive[v4][v3 >> 5]) != 0;
}

/*
==============
CG_CorpseFade_GetOutDistanceStart
==============
*/
float CG_CorpseFade_GetOutDistanceStart(const LocalClientNum_t localClientNum, const int entityId)
{
  int Type; 
  const char *v7; 

  Type = CG_CorpseFade_GetType(localClientNum, entityId);
  switch ( Type )
  {
    case 2:
      goto LABEL_10;
    case 6:
      _RBX = DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_scriptmodel;
      if ( !DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_scriptmodel )
      {
        v7 = "cg_corpseFade_outDistanceStart_scriptmodel";
        goto LABEL_12;
      }
LABEL_14:
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
      return *(float *)&_XMM0;
    case 18:
    case 21:
LABEL_10:
      _RBX = DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_ragdoll;
      if ( !DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_ragdoll )
      {
        v7 = "cg_corpseFade_outDistanceStart_ragdoll";
LABEL_12:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v7) )
          __debugbreak();
        goto LABEL_14;
      }
      goto LABEL_14;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 93, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CorpseFade_GetOutDistanceStart: unexpected eType %i, entNum %i", Type, entityId) )
    __debugbreak();
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
CG_CorpseFade_GetType
==============
*/
__int64 CG_CorpseFade_GetType(const LocalClientNum_t localClientNum, const int entityId)
{
  centity_t *Entity; 
  centity_t *v3; 

  Entity = CG_GetEntity(localClientNum, entityId);
  v3 = Entity;
  if ( (Entity->flags & 1) != 0 )
    return (unsigned __int16)Entity->nextState.eType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 45, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  return (unsigned __int16)v3->nextState.eType;
}

/*
==============
CG_CorpseFade_Init
==============
*/
void CG_CorpseFade_Init(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  ntl::fixed_map<int,CorpseFadeData,8,ntl::less<int,int> > *v3; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 

  v1 = localClientNum;
  v2 = localClientNum;
  memset_0(s_corpseFadeActive[v2], 0, sizeof(unsigned int[160]));
  memset_0(s_corpseFadeMaterialActive[v2], 0, sizeof(unsigned int[160]));
  v3 = &s_corpseFadeMap[v1];
  if ( v3->m_size )
  {
    mp_parent = v3->m_endNodeBase.mp_parent;
    if ( mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::erase_tree(v3, (ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> > *)mp_parent->mp_right);
        mp_left = mp_parent->mp_left;
        *(_QWORD *)&mp_parent->m_color = v3->m_freelist.m_head.mp_next;
        v3->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
        mp_parent = mp_left;
      }
      while ( mp_left );
    }
    v3->m_endNodeBase.mp_parent = NULL;
    v3->m_endNodeBase.mp_left = &v3->m_endNodeBase;
    v3->m_endNodeBase.mp_right = &v3->m_endNodeBase;
    v3->m_size = 0i64;
  }
}

/*
==============
CG_CorpseFade_Insert
==============
*/

void __fastcall CG_CorpseFade_Insert(const int entityId, double distance, const unsigned __int64 maxSize, ntl::fixed_map<int,float,16,ntl::less<int,int> > *inOutMap)
{
  ntl::red_black_tree_node_base **p_mp_parent; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base **p_mp_left; 
  ntl::red_black_tree_node_base *v17; 
  bool v19; 
  ntl::red_black_tree_node_base *v20; 
  bool v22; 
  bool v23; 
  ntl::red_black_tree_node_base *v27; 
  bool v28; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v31; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,float> >,ntl::pair<int,float> *,ntl::pair<int,float> &> result; 
  ntl::pair<int,float> r_element; 

  p_mp_parent = &inOutMap->m_endNodeBase.mp_parent;
  __asm { vmovaps [rsp+98h+var_58], xmm8 }
  mp_parent = inOutMap->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &inOutMap->m_endNodeBase;
  _RCX = &inOutMap->m_endNodeBase;
  __asm { vmovaps xmm8, xmm1 }
  while ( mp_parent )
  {
    if ( mp_parent[1].m_color < entityId )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      _RCX = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( _RCX != p_m_endNodeBase && entityId >= _RCX[1].m_color )
  {
    __asm
    {
      vmovss  dword ptr [rcx+24h], xmm8
      vmovaps xmm8, [rsp+98h+var_58]
    }
    return;
  }
  if ( inOutMap->m_size == maxSize )
  {
    p_mp_left = &inOutMap->m_endNodeBase.mp_left;
    __asm { vmovaps [rsp+98h+var_38], xmm6 }
    _RBX = inOutMap->m_endNodeBase.mp_left;
    v17 = &inOutMap->m_endNodeBase;
    __asm { vmovss  xmm6, cs:__real@ff7fffff }
    v19 = _RBX <= p_m_endNodeBase;
    if ( _RBX != p_m_endNodeBase )
    {
      __asm { vmovaps [rsp+98h+var_48], xmm7 }
      do
      {
        v20 = v17;
        __asm { vmovaps xmm7, xmm6 }
        v22 = _RBX == NULL;
        if ( !_RBX )
        {
          v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node");
          v22 = !v23;
          if ( v23 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+24h]
          vcomiss xmm0, xmm7
        }
        v17 = _RBX;
        if ( v22 )
          v17 = v20;
        __asm { vmaxss  xmm6, xmm0, xmm6 }
        _RBX = ntl::red_black_tree_node_base::get_next(_RBX);
        v19 = _RBX <= p_m_endNodeBase;
      }
      while ( _RBX != p_m_endNodeBase );
      __asm { vmovaps xmm7, [rsp+98h+var_48] }
      p_mp_left = &inOutMap->m_endNodeBase.mp_left;
      p_mp_parent = &inOutMap->m_endNodeBase.mp_parent;
    }
    __asm
    {
      vcomiss xmm6, xmm8
      vmovaps xmm6, [rsp+98h+var_38]
    }
    if ( v19 )
      goto LABEL_64;
    if ( v17 == p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 384, ASSERT_TYPE_ASSERT, "(itrMax != inOutMap.end())", (const char *)&queryFormat, "itrMax != inOutMap.end()") )
      __debugbreak();
    if ( !inOutMap->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
      __debugbreak();
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    r_element = (ntl::pair<int,float>)ntl::red_black_tree_node_base::get_next(v17);
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    if ( v17 == p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
      __debugbreak();
    ntl::red_black_tree_node_base::rebalance_for_erase(v17, p_mp_parent, p_mp_left, &inOutMap->m_endNodeBase.mp_right);
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    *(_QWORD *)&v17->m_color = inOutMap->m_freelist.m_head.mp_next;
    inOutMap->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v17;
    --inOutMap->m_size;
  }
  v27 = *p_mp_parent;
  v28 = 1;
  r_element.first = entityId;
  __asm { vmovss  [rsp+98h+r_element.second], xmm8 }
  while ( v27 )
  {
    p_m_endNodeBase = v27;
    v28 = entityId < v27[1].m_color;
    if ( entityId >= v27[1].m_color )
      v27 = v27->mp_right;
    else
      v27 = v27->mp_left;
  }
  mp_left = p_m_endNodeBase;
  if ( !v28 )
    goto LABEL_59;
  if ( p_m_endNodeBase != inOutMap->m_endNodeBase.mp_left )
  {
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
    {
      mp_left = p_m_endNodeBase->mp_left;
      if ( mp_left )
      {
        for ( i = mp_left->mp_right; i; i = i->mp_right )
          mp_left = i;
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_parent;
        if ( p_m_endNodeBase == mp_left->mp_left )
        {
          do
          {
            v31 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v31 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = p_m_endNodeBase->mp_right;
    }
LABEL_59:
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( mp_left[1].m_color < entityId )
      ntl::red_black_tree<int,ntl::pair<int,float>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,float>>,16,8>,ntl::return_pair_first<int,float>,ntl::less<int,int>>::insert_node(inOutMap, &result, p_m_endNodeBase, &r_element, 0, 0);
    goto LABEL_64;
  }
  ntl::red_black_tree<int,ntl::pair<int,float>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,float>>,16,8>,ntl::return_pair_first<int,float>,ntl::less<int,int>>::insert_node(inOutMap, &result, p_m_endNodeBase, &r_element, 1, 0);
LABEL_64:
  __asm { vmovaps xmm8, [rsp+98h+var_58] }
}

/*
==============
CG_CorpseFade_IsValidEntityType
==============
*/
char CG_CorpseFade_IsValidEntityType(const LocalClientNum_t localClientNum, const int entityId)
{
  centity_t *Entity; 
  entityType_s eType; 
  int v6; 

  if ( (CG_GetEntity(localClientNum, entityId)->flags & 1) == 0 )
    return 0;
  Entity = CG_GetEntity(localClientNum, entityId);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 45, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  eType = Entity->nextState.eType;
  if ( (unsigned __int16)eType <= ET_ACTOR_CORPSE && (v6 = 2359364, _bittest(&v6, eType)) )
    return 1;
  else
    return 0;
}

/*
==============
CG_CorpseFade_Update
==============
*/
void CG_CorpseFade_Update(const LocalClientNum_t localClientNum)
{
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  char v8; 
  const dvar_t *v9; 
  unsigned int v10; 
  unsigned int refdefViewOrg_aab; 
  __int64 v12; 
  ntl::fixed_map<int,CorpseFadeData,8,ntl::less<int,int> > *v13; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  unsigned __int8 *p_m_transitionFactor; 
  int m_color; 
  GfxCorpseFadeEntityData *v25; 
  __int64 v30; 
  __int64 v31; 
  vec3_t viewOrigin; 
  ntl::bitset<5120,0,unsigned __int64> corpseFadeActive; 
  GfxCorpseFadeEntityData corpseFade[10]; 
  char v35; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v6 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_CorpseFade_Update");
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2510, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
      __debugbreak();
  }
  else if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x33u) )
  {
    v8 = 0;
    goto LABEL_9;
  }
  v8 = 1;
LABEL_9:
  v9 = DCONST_DVARMPBOOL_cg_corpseFade_enabled;
  if ( !DCONST_DVARMPBOOL_cg_corpseFade_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = 0;
  if ( !v9->current.enabled || v8 )
  {
    v12 = v6;
    v13 = &s_corpseFadeMap[v6];
    if ( v13->m_size )
    {
      mp_parent = v13->m_endNodeBase.mp_parent;
      if ( mp_parent )
      {
        do
        {
          ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::erase_tree(&s_corpseFadeMap[v6], (ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> > *)mp_parent->mp_right);
          mp_left = mp_parent->mp_left;
          *(_QWORD *)&mp_parent->m_color = v13->m_freelist.m_head.mp_next;
          v13->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
          mp_parent = mp_left;
        }
        while ( mp_left );
      }
      v13->m_endNodeBase.mp_parent = NULL;
      v13->m_endNodeBase.mp_left = &v13->m_endNodeBase;
      v13->m_endNodeBase.mp_right = &v13->m_endNodeBase;
      v13->m_size = 0i64;
    }
  }
  else
  {
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(viewOrigin.v[0]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    LODWORD(viewOrigin.v[1]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    LODWORD(viewOrigin.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    v12 = v6;
    CG_CorpseFade_UpdateFadeMap((const LocalClientNum_t)v6, &viewOrigin, LocalClientGlobals->time, &s_corpseFadeMap[v6]);
  }
  memset_0(&corpseFadeActive, 0, sizeof(corpseFadeActive));
  next = s_corpseFadeMap[v12].m_endNodeBase.mp_left;
  p_m_endNodeBase = &s_corpseFadeMap[v12].m_endNodeBase;
  if ( next == p_m_endNodeBase )
    goto LABEL_44;
  p_m_transitionFactor = &corpseFade[0].m_transitionFactor;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm8, cs:__real@437f0000
  }
  do
  {
    if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    m_color = next[1].m_color;
    if ( (unsigned int)m_color >= 0x800 )
    {
      LODWORD(v31) = 2048;
      LODWORD(v30) = next[1].m_color;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 734, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    *(double *)&_XMM0 = CG_CorpseFade_CalcOpacity(LocalClientGlobals->time, (const CorpseFadeData *)(&next[1].m_color + 1));
    __asm { vminss  xmm6, xmm0, xmm7 }
    if ( (unsigned __int64)m_color >= 0x1400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 191, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    corpseFadeActive.m_data[(unsigned __int64)m_color >> 6] = (0x8000000000000000ui64 >> (m_color & 0x3F)) | corpseFadeActive.m_data[(unsigned __int64)m_color >> 6] & ~(0x8000000000000000ui64 >> (m_color & 0x3F));
    if ( (m_color < 0 || (unsigned int)m_color > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)m_color, "signed", m_color) )
      __debugbreak();
    *((_WORD *)p_m_transitionFactor - 1) = m_color;
    __asm
    {
      vsubss  xmm0, xmm7, xmm6
      vmulss  xmm1, xmm0, xmm8
      vcvttss2si eax, xmm1
    }
    *p_m_transitionFactor = _EAX;
    ++v10;
    p_m_transitionFactor += 4;
    next = ntl::red_black_tree_node_base::get_next(next);
  }
  while ( next != p_m_endNodeBase );
  if ( v10 < 8 )
  {
LABEL_44:
    v25 = &corpseFade[v10];
    do
    {
      v25->m_entityNum = 2047;
      ++v10;
      ++v25;
    }
    while ( v10 < 8 );
  }
  R_UpdateCorpseFadeData(&corpseFadeActive, corpseFade, 8ui64);
  Sys_ProfEndNamedEvent();
  _R11 = &v35;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_CorpseFade_UpdateFadeMap
==============
*/
void CG_CorpseFade_UpdateFadeMap(const LocalClientNum_t localClientNum, const vec3_t *viewOrigin, const int serverTimeMs, ntl::fixed_map<int,CorpseFadeData,8,ntl::less<int,int> > *inOutFadeMap)
{
  signed __int64 v4; 
  void *v8; 
  cg_t *LocalClientGlobals; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  char *v11; 
  int v12; 
  Ragdoll *v13; 
  unsigned int EntityNumber; 
  int v15; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v18; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v21; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::internal::pool_allocator_freelist<40> *v26; 
  char *v27; 
  const vec3_t *v28; 
  __int64 v29; 
  LocalClientNum_t v30; 
  ntl::internal::pool_allocator_freelist<40> *v31; 
  char *v32; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node<ntl::pair<int,int> > *v34; 
  signed int m_color; 
  centity_t *Entity; 
  int eType; 
  const dvar_t *v48; 
  ntl::red_black_tree_node<ntl::pair<int,int> > *v50; 
  ntl::red_black_tree_node<ntl::pair<int,int> > *v51; 
  ntl::internal::pool_allocator_freelist<48> *v53; 
  char *v54; 
  __int64 v55; 
  __int64 v56; 
  LocalClientNum_t v59; 
  int v60; 
  int v61; 
  ntl::red_black_tree_node_base *v63; 
  char increasing; 
  char v66; 
  centity_t *v67; 
  int v68; 
  bool v69; 
  char v70; 
  bool v71; 
  const char *v73; 
  ntl::red_black_tree_node_base *v75; 
  __int64 v76; 
  bool v77; 
  ntl::red_black_tree_node_base *v78; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v80; 
  ntl::red_black_tree_node_base *v81; 
  ntl::red_black_tree_node_base *v82; 
  ntl::red_black_tree_node_base *v83; 
  ntl::red_black_tree_node_base *v84; 
  ntl::red_black_tree_node_base *v85; 
  ntl::red_black_tree_node_base *v86; 
  ntl::red_black_tree_node_base *v87; 
  ntl::red_black_tree_node_base *v88; 
  __int64 hintInsertLessElement; 
  __int64 hintInsertLessElementa; 
  __int64 v94; 
  bool v95; 
  CorpseFadeData viewOrigina; 
  LocalClientNum_t localClientNuma; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,int> >,ntl::pair<int,int> *,ntl::pair<int,int> &> result; 
  __m256i v100; 
  __int64 v101; 
  __int64 v102; 
  vec3_t inPrevActiveFadeMap; 
  ntl::pair<int,CorpseFadeData> r_element; 
  ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int> > v105; 
  ntl::fixed_map<int,float,16,ntl::less<int,int> > inOutMap; 
  ntl::fixed_map<int,float,16,ntl::less<int,int> > outDistSqMap; 
  ntl::red_black_tree<int,ntl::pair<int,int>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,int> >,64,8>,ntl::return_pair_first<int,int>,ntl::less<int,int> > v108; 
  char v111; 

  v8 = alloca(v4);
  v102 = -2i64;
  __asm
  {
    vmovaps [rsp+1270h+var_40], xmm6
    vmovaps [rsp+1270h+var_50], xmm7
  }
  *(_QWORD *)inPrevActiveFadeMap.v = inOutFadeMap;
  *(_QWORD *)&viewOrigina.time = viewOrigin;
  localClientNuma = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v95 = PM_GetEffectiveStance(&LocalClientGlobals->predictedPlayerState) == PM_EFF_STANCE_PRONE;
  p_m_freelist = &v108.m_freelist;
  v11 = &v108.m_data.m_buffer[2520];
  do
  {
    *(_QWORD *)v11 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v11;
    v11 -= 40;
  }
  while ( v11 + 40 > (char *)&v108 );
  v108.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v108.m_size = 0i64;
  v108.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v108.m_endNodeBase.mp_parent = NULL;
  v108.m_endNodeBase.mp_left = &v108.m_endNodeBase;
  v108.m_endNodeBase.mp_right = &v108.m_endNodeBase;
  v12 = 1;
  v13 = g_ragdollBodies;
  do
  {
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( (unsigned int)(v12 - 1) >= 0x40 )
    {
      LODWORD(v94) = 64;
      LODWORD(hintInsertLessElement) = v12 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", hintInsertLessElement, v94) )
        __debugbreak();
    }
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( (unsigned int)(v12 - 1) >= 0x40 )
    {
      LODWORD(v94) = 64;
      LODWORD(hintInsertLessElement) = v12 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", hintInsertLessElement, v94) )
        __debugbreak();
    }
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( v13->allocated )
    {
      EntityNumber = Ragdoll_GetEntityNumber(v12);
      v15 = EntityNumber;
      if ( EntityNumber >= 0x800 )
      {
        LODWORD(v94) = 2048;
        LODWORD(hintInsertLessElement) = EntityNumber;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 541, ASSERT_TYPE_ASSERT, "(unsigned)( entityId ) < (unsigned)( ( 2048 ) )", "entityId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", hintInsertLessElement, v94) )
          __debugbreak();
      }
      r_element.first = v15;
      r_element.second.time = v12;
      p_m_endNodeBase = &v108.m_endNodeBase;
      mp_parent = v108.m_endNodeBase.mp_parent;
      v18 = 1;
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v18 = v15 < mp_parent[1].m_color;
        if ( v15 >= mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      mp_left = p_m_endNodeBase;
      if ( v18 )
      {
        if ( p_m_endNodeBase == v108.m_endNodeBase.mp_left )
        {
          ntl::red_black_tree<int,ntl::pair<int,int>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,int>>,64,8>,ntl::return_pair_first<int,int>,ntl::less<int,int>>::insert_node(&v108, &result, p_m_endNodeBase, (const ntl::pair<int,int> *)&r_element, 1, 0);
          goto LABEL_71;
        }
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
        {
          mp_left = p_m_endNodeBase->mp_left;
          if ( mp_left )
          {
            for ( i = mp_left->mp_right; i; i = i->mp_right )
              mp_left = i;
          }
          else
          {
            mp_left = p_m_endNodeBase->mp_parent;
            if ( p_m_endNodeBase == mp_left->mp_left )
            {
              do
              {
                v21 = mp_left;
                mp_left = mp_left->mp_parent;
              }
              while ( v21 == mp_left->mp_left );
            }
          }
        }
        else
        {
          mp_left = p_m_endNodeBase->mp_right;
        }
      }
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( mp_left[1].m_color < v15 )
      {
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
          __debugbreak();
        if ( !v108.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !v108.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<40> *)v108.m_freelist.m_head.mp_next == &v108.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 0x40ui64) )
          __debugbreak();
        _RCX = v108.m_freelist.m_head.mp_next;
        v108.m_freelist.m_head.mp_next = v108.m_freelist.m_head.mp_next->mp_next;
        v100.m256i_i32[0] = 0;
        v100.m256i_i64[1] = (__int64)p_m_endNodeBase;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+1270h+var_1208+10h], xmm0
        }
        v101 = *(_QWORD *)&r_element.first;
        __asm
        {
          vmovups ymm0, [rsp+1270h+var_1208]
          vmovups ymmword ptr [rcx], ymm0
          vmovsd  xmm1, [rbp+1170h+var_11E8]
          vmovsd  qword ptr [rcx+20h], xmm1
        }
        if ( p_m_endNodeBase == &v108.m_endNodeBase )
        {
          v108.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
          v108.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RCX;
          v108.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RCX;
        }
        else if ( v15 >= p_m_endNodeBase[1].m_color )
        {
          p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)_RCX;
          mp_right = v108.m_endNodeBase.mp_right;
          if ( p_m_endNodeBase == v108.m_endNodeBase.mp_right )
            mp_right = (ntl::red_black_tree_node_base *)_RCX;
          v108.m_endNodeBase.mp_right = mp_right;
        }
        else
        {
          p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)_RCX;
          if ( p_m_endNodeBase == v108.m_endNodeBase.mp_left )
            v108.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
        }
        ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RCX, &v108.m_endNodeBase.mp_parent);
        ++v108.m_size;
      }
    }
LABEL_71:
    ++v12;
    ++v13;
  }
  while ( v12 <= 64 );
  v26 = &outDistSqMap.m_freelist;
  v27 = &outDistSqMap.m_data.m_buffer[600];
  v28 = *(const vec3_t **)&viewOrigina.time;
  v29 = *(_QWORD *)inPrevActiveFadeMap.v;
  do
  {
    *(_QWORD *)v27 = v26;
    v26 = (ntl::internal::pool_allocator_freelist<40> *)v27;
    v27 -= 40;
  }
  while ( v27 + 40 > (char *)&outDistSqMap );
  outDistSqMap.m_freelist.m_head.mp_next = &v26->m_head;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  outDistSqMap.m_size = 0i64;
  outDistSqMap.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  outDistSqMap.m_endNodeBase.mp_parent = NULL;
  outDistSqMap.m_endNodeBase.mp_left = &outDistSqMap.m_endNodeBase;
  outDistSqMap.m_endNodeBase.mp_right = &outDistSqMap.m_endNodeBase;
  v30 = localClientNuma;
  CG_CorpseFade_CollectCandidates(localClientNuma, v28, v95, (const ntl::fixed_map<int,int,64,ntl::less<int,int> > *)&v108, (const ntl::fixed_map<int,CorpseFadeData,8,ntl::less<int,int> > *)v29, &outDistSqMap);
  v31 = &inOutMap.m_freelist;
  v32 = &inOutMap.m_data.m_buffer[600];
  do
  {
    *(_QWORD *)v32 = v31;
    v31 = (ntl::internal::pool_allocator_freelist<40> *)v32;
    v32 -= 40;
  }
  while ( v32 + 40 > (char *)&inOutMap );
  inOutMap.m_freelist.m_head.mp_next = &v31->m_head;
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  inOutMap.m_size = 0i64;
  inOutMap.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  inOutMap.m_endNodeBase.mp_parent = NULL;
  inOutMap.m_endNodeBase.mp_left = &inOutMap.m_endNodeBase;
  inOutMap.m_endNodeBase.mp_right = &inOutMap.m_endNodeBase;
  next = outDistSqMap.m_endNodeBase.mp_left;
  if ( outDistSqMap.m_endNodeBase.mp_left != &outDistSqMap.m_endNodeBase )
  {
    v34 = (ntl::red_black_tree_node<ntl::pair<int,int> > *)(v29 + 392);
    do
    {
      if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      m_color = next[1].m_color;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      Entity = CG_GetEntity(v30, m_color);
      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 45, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      eType = Entity->nextState.eType;
      if ( eType == 2 )
        goto LABEL_101;
      if ( (_WORD)eType == 6 )
      {
        CG_GetEntityOrigin(v30, m_color, &inPrevActiveFadeMap);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+1170h+inPrevActiveFadeMap]
          vsubss  xmm3, xmm0, dword ptr [r12]
          vmovss  xmm1, dword ptr [rbp+1170h+inPrevActiveFadeMap+4]
          vsubss  xmm2, xmm1, dword ptr [r12+4]
          vmovss  xmm0, [rbp+1170h+var_11D0]
          vsubss  xmm4, xmm0, dword ptr [r12+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm6, xmm2, xmm2
        }
        v48 = DCONST_DVARBOOL_cg_corpseFade_debug;
        if ( !DCONST_DVARBOOL_cg_corpseFade_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v48);
        if ( v48->current.enabled )
        {
          *(float *)&_XMM0 = CG_CorpseFade_GetOutDistanceStart(v30, m_color);
          __asm { vmovaps xmm1, xmm0; radius }
          CG_DebugSphere(&inPrevActiveFadeMap, *(float *)&_XMM1, &colorCyan, 1, 0);
        }
        goto LABEL_102;
      }
      if ( (_WORD)eType == 18 || (_WORD)eType == 21 )
      {
LABEL_101:
        *(float *)&_XMM0 = CG_CorpseFade_CalcDetailDistance_Ragdoll(v30, m_color, v28, (const ntl::fixed_map<int,int,64,ntl::less<int,int> > *)&v108);
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        LODWORD(v94) = m_color;
        LODWORD(hintInsertLessElementa) = Entity->nextState.eType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 304, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CorpseFade_CalcDetailDistance: unexpected eType %i, entNum %i", hintInsertLessElementa, v94) )
          __debugbreak();
      }
LABEL_102:
      result.mp_node = (ntl::red_black_tree_node<ntl::pair<int,int> > *)(v29 + 392);
      v50 = (ntl::red_black_tree_node<ntl::pair<int,int> > *)(v29 + 392);
      v51 = *(ntl::red_black_tree_node<ntl::pair<int,int> > **)(v29 + 400);
      if ( v51 )
      {
        do
        {
          if ( v51->m_element.first < m_color )
          {
            v51 = (ntl::red_black_tree_node<ntl::pair<int,int> > *)v51->mp_right;
          }
          else
          {
            v50 = v51;
            v51 = (ntl::red_black_tree_node<ntl::pair<int,int> > *)v51->mp_left;
          }
        }
        while ( v51 );
        if ( v50 != v34 && m_color < v50->m_element.first )
          v50 = (ntl::red_black_tree_node<ntl::pair<int,int> > *)(v29 + 392);
      }
      result.mp_node = v50;
      *(float *)&_XMM0 = CG_CorpseFade_GetOutDistanceStart(v30, m_color);
      if ( v50 != v34 )
        goto LABEL_112;
      __asm { vcomiss xmm6, xmm0 }
      if ( v50 < v34 )
      {
LABEL_112:
        __asm { vmovaps xmm1, xmm6; distance }
        CG_CorpseFade_Insert(m_color, *(const float *)&_XMM1, 8ui64, &inOutMap);
      }
      next = ntl::red_black_tree_node_base::get_next(next);
    }
    while ( next != &outDistSqMap.m_endNodeBase );
  }
  v53 = &v105.m_freelist;
  v54 = &v105.m_data.m_buffer[336];
  do
  {
    *(_QWORD *)v54 = v53;
    v53 = (ntl::internal::pool_allocator_freelist<48> *)v54;
    v54 -= 48;
  }
  while ( v54 + 48 > (char *)&v105 );
  v105.m_freelist.m_head.mp_next = &v53->m_head;
  if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v105.m_size = 0i64;
  v105.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v105.m_endNodeBase.mp_parent = NULL;
  v105.m_endNodeBase.mp_left = &v105.m_endNodeBase;
  v105.m_endNodeBase.mp_right = &v105.m_endNodeBase;
  ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::assign(&v105, (const ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int> > *)v29);
  if ( *(_QWORD *)(v29 + 424) )
  {
    v55 = *(_QWORD *)(v29 + 400);
    if ( v55 )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::erase_tree((ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int> > *)v29, *(ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> > **)(v55 + 24));
        v56 = *(_QWORD *)(v55 + 16);
        *(_QWORD *)v55 = *(_QWORD *)(v29 + 384);
        *(_QWORD *)(v29 + 384) = v55;
        v55 = v56;
      }
      while ( v56 );
    }
    *(_QWORD *)(v29 + 400) = 0i64;
    *(_QWORD *)(v29 + 408) = v29 + 392;
    *(_QWORD *)(v29 + 416) = v29 + 392;
    *(_QWORD *)(v29 + 424) = 0i64;
  }
  _RDI = inOutMap.m_endNodeBase.mp_left;
  if ( inOutMap.m_endNodeBase.mp_left != &inOutMap.m_endNodeBase )
  {
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    v59 = localClientNuma;
    v60 = serverTimeMs;
    while ( 1 )
    {
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v61 = _RDI[1].m_color;
      _RCX = &v105.m_endNodeBase;
      v63 = v105.m_endNodeBase.mp_parent;
      if ( !v105.m_endNodeBase.mp_parent )
        goto LABEL_163;
      do
      {
        if ( v63[1].m_color < v61 )
        {
          v63 = v63->mp_right;
        }
        else
        {
          _RCX = v63;
          v63 = v63->mp_left;
        }
      }
      while ( v63 );
      if ( _RCX == &v105.m_endNodeBase || v61 < _RCX[1].m_color )
      {
LABEL_163:
        viewOrigina.time = v60;
        __asm { vmovss  dword ptr [rsp+1270h+viewOrigin+4], xmm7 }
        viewOrigina.increasing = 0;
        goto LABEL_165;
      }
      __asm
      {
        vmovsd  xmm0, qword ptr [rcx+24h]
        vmovsd  [rsp+1270h+viewOrigin], xmm0
      }
      *(_DWORD *)&viewOrigina.increasing = HIDWORD(_RCX[1].mp_parent);
      increasing = viewOrigina.increasing;
      v66 = viewOrigina.increasing;
      if ( viewOrigina.increasing )
      {
        *(float *)&_XMM0 = CG_CorpseFade_GetOutDistanceStart(v59, v61);
        __asm { vcomiss xmm0, dword ptr [rdi+24h] }
        if ( !v70 )
          v66 = 0;
        goto LABEL_156;
      }
      __asm { vxorps  xmm6, xmm6, xmm6 }
      v67 = CG_GetEntity(v59, v61);
      if ( (v67->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 45, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      v68 = v67->nextState.eType;
      if ( v68 == 2 )
        goto LABEL_149;
      if ( (_WORD)v68 != 6 )
        break;
      _RSI = DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_scriptmodel;
      if ( !DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_scriptmodel )
      {
        v73 = "cg_corpseFade_inDistanceStart_scriptmodel";
        goto LABEL_151;
      }
LABEL_153:
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm6, dword ptr [rsi+28h] }
LABEL_154:
      __asm { vcomiss xmm6, dword ptr [rdi+24h] }
      if ( v70 | v71 )
        v66 = 1;
LABEL_156:
      if ( !v95 )
        v66 = 1;
      if ( v66 != increasing )
      {
        *(double *)&_XMM0 = CG_CorpseFade_CalcOpacity(serverTimeMs, &viewOrigina);
        __asm { vmovss  dword ptr [rsp+1270h+viewOrigin+4], xmm0 }
        viewOrigina.time = serverTimeMs;
        increasing = v66;
        viewOrigina.increasing = v66;
      }
      if ( increasing )
      {
        *(double *)&_XMM0 = CG_CorpseFade_CalcOpacity(serverTimeMs, &viewOrigina);
        __asm { vcomiss xmm0, xmm7 }
        v60 = serverTimeMs;
        if ( !v70 )
          goto LABEL_190;
      }
      else
      {
        v60 = serverTimeMs;
      }
LABEL_165:
      r_element.first = v61;
      __asm
      {
        vmovsd  xmm0, [rsp+1270h+viewOrigin]
        vmovsd  qword ptr [rbp+1170h+r_element.second], xmm0
      }
      *(_DWORD *)&r_element.second.increasing = *(_DWORD *)&viewOrigina.increasing;
      v75 = (ntl::red_black_tree_node_base *)(v29 + 392);
      v76 = *(_QWORD *)(v29 + 400);
      v77 = 1;
      while ( v76 )
      {
        v75 = (ntl::red_black_tree_node_base *)v76;
        v77 = v61 < *(_DWORD *)(v76 + 32);
        if ( v61 >= *(_DWORD *)(v76 + 32) )
          v76 = *(_QWORD *)(v76 + 24);
        else
          v76 = *(_QWORD *)(v76 + 16);
      }
      v78 = v75;
      if ( !v77 )
        goto LABEL_185;
      if ( v75 != *(ntl::red_black_tree_node_base **)(v29 + 408) )
      {
        if ( !v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( v75->m_color || v75->mp_parent->mp_parent != v75 )
        {
          v78 = v75->mp_left;
          if ( v78 )
          {
            for ( j = v78->mp_right; j; j = j->mp_right )
              v78 = j;
          }
          else
          {
            v78 = v75->mp_parent;
            if ( v75 == v78->mp_left )
            {
              do
              {
                v80 = v78;
                v78 = v78->mp_parent;
              }
              while ( v80 == v78->mp_left );
            }
          }
        }
        else
        {
          v78 = v75->mp_right;
        }
LABEL_185:
        if ( !v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( v78[1].m_color < v61 )
          ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::insert_node((ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int> > *)v29, (ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,ntl::pair<int,CorpseFadeData> *,ntl::pair<int,CorpseFadeData> &> *)&inPrevActiveFadeMap, v75, &r_element, 0, 0);
        goto LABEL_190;
      }
      ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::insert_node((ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int> > *)v29, (ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,ntl::pair<int,CorpseFadeData> *,ntl::pair<int,CorpseFadeData> &> *)&result, v75, &r_element, 1, 0);
LABEL_190:
      _RDI = ntl::red_black_tree_node_base::get_next(_RDI);
      if ( _RDI == &inOutMap.m_endNodeBase )
        goto LABEL_191;
    }
    if ( (_WORD)v68 != 18 && (_WORD)v68 != 21 )
    {
      LODWORD(v94) = v61;
      LODWORD(hintInsertLessElementa) = v67->nextState.eType;
      v69 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 118, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CorpseFade_GetInDistanceStart: unexpected eType %i, entNum %i", hintInsertLessElementa, v94);
      v70 = 0;
      v71 = !v69;
      if ( v69 )
        __debugbreak();
      goto LABEL_154;
    }
LABEL_149:
    _RSI = DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_ragdoll;
    if ( !DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_ragdoll )
    {
      v73 = "cg_corpseFade_inDistanceStart_ragdoll";
LABEL_151:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v73) )
        __debugbreak();
      goto LABEL_153;
    }
    goto LABEL_153;
  }
LABEL_191:
  if ( v105.m_size )
  {
    v81 = v105.m_endNodeBase.mp_parent;
    if ( v105.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::erase_tree(&v105, (ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> > *)v81->mp_right);
        v82 = v81->mp_left;
        *(_QWORD *)&v81->m_color = v105.m_freelist.m_head.mp_next;
        v105.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v81;
        v81 = v82;
      }
      while ( v82 );
    }
    v105.m_endNodeBase.mp_parent = NULL;
    v105.m_endNodeBase.mp_left = &v105.m_endNodeBase;
    v105.m_endNodeBase.mp_right = &v105.m_endNodeBase;
    v105.m_size = 0i64;
  }
  if ( inOutMap.m_size )
  {
    v83 = inOutMap.m_endNodeBase.mp_parent;
    if ( inOutMap.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,float>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,float>>,16,8>,ntl::return_pair_first<int,float>,ntl::less<int,int>>::erase_tree(&inOutMap, (ntl::red_black_tree_node<ntl::pair<int,float> > *)v83->mp_right);
        v84 = v83->mp_left;
        *(_QWORD *)&v83->m_color = inOutMap.m_freelist.m_head.mp_next;
        inOutMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v83;
        v83 = v84;
      }
      while ( v84 );
    }
    inOutMap.m_endNodeBase.mp_parent = NULL;
    inOutMap.m_endNodeBase.mp_left = &inOutMap.m_endNodeBase;
    inOutMap.m_endNodeBase.mp_right = &inOutMap.m_endNodeBase;
    inOutMap.m_size = 0i64;
  }
  if ( outDistSqMap.m_size )
  {
    v85 = outDistSqMap.m_endNodeBase.mp_parent;
    if ( outDistSqMap.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,float>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,float>>,16,8>,ntl::return_pair_first<int,float>,ntl::less<int,int>>::erase_tree(&outDistSqMap, (ntl::red_black_tree_node<ntl::pair<int,float> > *)v85->mp_right);
        v86 = v85->mp_left;
        *(_QWORD *)&v85->m_color = outDistSqMap.m_freelist.m_head.mp_next;
        outDistSqMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v85;
        v85 = v86;
      }
      while ( v86 );
    }
    outDistSqMap.m_endNodeBase.mp_parent = NULL;
    outDistSqMap.m_endNodeBase.mp_left = &outDistSqMap.m_endNodeBase;
    outDistSqMap.m_endNodeBase.mp_right = &outDistSqMap.m_endNodeBase;
    outDistSqMap.m_size = 0i64;
  }
  if ( v108.m_size )
  {
    v87 = v108.m_endNodeBase.mp_parent;
    if ( v108.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,int>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,int>>,64,8>,ntl::return_pair_first<int,int>,ntl::less<int,int>>::erase_tree(&v108, (ntl::red_black_tree_node<ntl::pair<int,int> > *)v87->mp_right);
        v88 = v87->mp_left;
        *(_QWORD *)&v87->m_color = v108.m_freelist.m_head.mp_next;
        v108.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v87;
        v87 = v88;
      }
      while ( v88 );
    }
  }
  _R11 = &v111;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

