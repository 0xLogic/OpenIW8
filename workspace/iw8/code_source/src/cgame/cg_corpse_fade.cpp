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
  __int64 v8; 
  __int64 v9; 
  cg_t *LocalClientGlobals; 
  __int64 v11; 
  cg_t *v12; 
  __int64 v13; 
  char *v14; 
  char *v15; 
  const CorpseFadeData *v16; 
  char *v17; 
  const dvar_t *v18; 
  bool v19; 
  const dvar_t *v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  __int64 v26; 
  unsigned int v27; 
  volatile signed __int32 *v28; 
  volatile signed __int32 *v29; 
  int v30; 

  v8 = entityNum;
  v9 = localClientNum;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 789, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
  v11 = 440 * v9;
  v12 = LocalClientGlobals;
  v13 = v9;
  v14 = (char *)*((_QWORD *)&s_corpseFadeMap[0].m_endNodeBase.mp_parent + 55 * v9);
  v15 = (char *)&s_corpseFadeMap[0].m_endNodeBase + 440 * v9;
  v16 = (const CorpseFadeData *)v15;
  while ( v14 )
  {
    if ( *((_DWORD *)v14 + 8) < (int)v8 )
    {
      v14 = (char *)*((_QWORD *)v14 + 3);
    }
    else
    {
      v16 = (const CorpseFadeData *)v14;
      v14 = (char *)*((_QWORD *)v14 + 2);
    }
  }
  if ( v16 != (const CorpseFadeData *)v15 && (int)v8 < *(_DWORD *)&v16[2].increasing )
    v16 = (const CorpseFadeData *)v15;
  v17 = (char *)&s_corpseFadeMap[0].m_endNodeBase + v11;
  if ( v16 == (const CorpseFadeData *)((char *)&s_corpseFadeMap[0].m_endNodeBase + v11) )
    goto LABEL_18;
  v18 = DCONST_DVARMPBOOL_cg_corpseFade_enabled;
  if ( !DCONST_DVARMPBOOL_cg_corpseFade_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( !v18->current.enabled )
LABEL_18:
    v19 = 0;
  else
    v19 = 1;
  *isFadeActive = v19;
  if ( v16 == (const CorpseFadeData *)v17 )
  {
    _XMM0 = LODWORD(FLOAT_1_0);
  }
  else
  {
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    *(float *)&_XMM0 = CG_CorpseFade_CalcOpacity(v12->time, v16 + 3);
    v19 = *isFadeActive;
  }
  __asm { vminss  xmm6, xmm0, xmm6 }
  if ( !v19 || *(float *)&_XMM6 > 0.0 )
    goto LABEL_32;
  v21 = DCONST_DVARBOOL_cg_corpseFade_removeDObjWhenComplete;
  if ( !DCONST_DVARBOOL_cg_corpseFade_removeDObjWhenComplete && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_removeDObjWhenComplete") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
    v22 = 1;
  else
LABEL_32:
    v22 = 0;
  *isFadeComplete = v22;
  v23 = *isFadeActive && *(float *)&_XMM6 < 0.5;
  *isOverHalfWayFaded = v23;
  v24 = *isFadeActive;
  v25 = *isFadeActive && !*isFadeComplete;
  v26 = 160 * v13 + (v8 >> 5);
  v27 = 0x80000000 >> (v8 & 0x1F);
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
  int v9; 
  const scr_string_t **v10; 
  __int64 v12; 
  const scr_string_t *v13; 
  __int128 v14; 
  const dvar_t *v15; 
  float OutDistanceStart; 
  float outRadius; 
  vec3_t outOrigin; 

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
  v9 = *((_DWORD *)&p_m_endNodeBase[1].m_color + 1);
  v10 = s_ragdollBones;
  *(float *)&_XMM7 = FLOAT_3_4028235e38;
  v12 = 7i64;
  do
  {
    v13 = *v10;
    if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 236, ASSERT_TYPE_ASSERT, "(boneName != nullptr)", (const char *)&queryFormat, "boneName != nullptr") )
      __debugbreak();
    if ( !*v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 237, ASSERT_TYPE_ASSERT, "(*boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*boneName != NULL_SCR_STRING") )
      __debugbreak();
    if ( Ragdoll_GetBoneOrigin(v9, v13, &outOrigin, &outRadius) )
    {
      v14 = LODWORD(outOrigin.v[0]);
      v15 = DCONST_DVARBOOL_cg_corpseFade_debug;
      *(float *)&v14 = fsqrt((float)((float)((float)(outOrigin.v[0] - viewOrigin->v[0]) * (float)(outOrigin.v[0] - viewOrigin->v[0])) + (float)((float)(outOrigin.v[1] - viewOrigin->v[1]) * (float)(outOrigin.v[1] - viewOrigin->v[1]))) + (float)((float)(outOrigin.v[2] - viewOrigin->v[2]) * (float)(outOrigin.v[2] - viewOrigin->v[2]))) - outRadius;
      _XMM4 = v14;
      __asm
      {
        vmaxss  xmm0, xmm4, xmm8
        vminss  xmm7, xmm0, xmm7
      }
      if ( !DCONST_DVARBOOL_cg_corpseFade_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled )
      {
        OutDistanceStart = CG_CorpseFade_GetOutDistanceStart(localClientNum, entityId);
        CG_DebugSphere(&outOrigin, outRadius, &colorGreen, 0, 0);
        CG_DebugSphere(&outOrigin, OutDistanceStart + outRadius, &colorCyan, 1, 0);
      }
    }
    ++v10;
    --v12;
  }
  while ( v12 );
  return *(float *)&_XMM7;
}

/*
==============
CG_CorpseFade_CalcOpacity
==============
*/
double CG_CorpseFade_CalcOpacity(const int serverTimeMs, const CorpseFadeData *fadeData)
{
  const dvar_t *v2; 
  int v6; 
  float v7; 
  double v8; 

  v2 = DCONST_DVARFLT_cg_corpseFade_time;
  if ( !DCONST_DVARFLT_cg_corpseFade_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  _XMM6 = LODWORD(FLOAT_1_0);
  v6 = (int)(float)(v2->current.value * 1000.0);
  if ( v6 > 0 )
    v7 = (float)(serverTimeMs - fadeData->time) / (float)v6;
  else
    v7 = FLOAT_1_0;
  v8 = I_fclamp(v7, 0.0, 1.0);
  _XMM3 = fadeData->increasing;
  __asm
  {
    vpcmpeqd xmm5, xmm3, xmm4
    vblendvps xmm3, xmm6, xmm4, xmm5
  }
  return I_fclamp((float)(*(float *)&_XMM3 * *(float *)&v8) + fadeData->opacity, 0.0, 1.0);
}

/*
==============
CG_CorpseFade_CalcRoughDistanceSq
==============
*/
float CG_CorpseFade_CalcRoughDistanceSq(const LocalClientNum_t localClientNum, const int entityId, const vec3_t *viewOrigin, const ntl::fixed_map<int,int,64,ntl::less<int,int> > *ragdollMap)
{
  int Type; 
  const dvar_t *v10; 
  float v11; 
  float v12; 
  const vec4_t *v13; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  int v16; 
  float outRadius; 
  vec3_t outOrigin; 

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
    if ( p_m_endNodeBase == &ragdollMap->m_endNodeBase )
      return FLOAT_3_4028235e38;
    if ( entityId < p_m_endNodeBase[1].m_color )
      return FLOAT_3_4028235e38;
    v16 = *((_DWORD *)&p_m_endNodeBase[1].m_color + 1);
    if ( !Ragdoll_IsAllocated(v16) || !Ragdoll_GetBoneOrigin(v16, 0, &outOrigin, &outRadius) )
      return FLOAT_3_4028235e38;
    goto LABEL_9;
  }
  if ( Type != 6 )
  {
    if ( Type != 18 && Type != 21 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 208, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CorpseFade_CalcRoughDistanceSq: unexpected eType %i, entNum %i", Type, entityId) )
        __debugbreak();
      return 0.0;
    }
    goto LABEL_17;
  }
  CG_GetEntityOrigin(localClientNum, entityId, &outOrigin);
LABEL_9:
  v10 = DCONST_DVARBOOL_cg_corpseFade_debug;
  v11 = (float)((float)((float)(outOrigin.v[1] - viewOrigin->v[1]) * (float)(outOrigin.v[1] - viewOrigin->v[1])) + (float)((float)(outOrigin.v[0] - viewOrigin->v[0]) * (float)(outOrigin.v[0] - viewOrigin->v[0]))) + (float)((float)(outOrigin.v[2] - viewOrigin->v[2]) * (float)(outOrigin.v[2] - viewOrigin->v[2]));
  if ( !DCONST_DVARBOOL_cg_corpseFade_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    v12 = CG_CorpseFade_GetOutDistanceStart(localClientNum, entityId) + *(float *)&dword_147FA32DC;
    v13 = &colorDkCyan;
    if ( v11 <= (float)(v12 * v12) )
      v13 = &colorCyan;
    CG_DebugSphere(&outOrigin, v12, v13, 1, 0);
  }
  return v11;
}

/*
==============
CG_CorpseFade_CollectCandidates
==============
*/
void CG_CorpseFade_CollectCandidates(const LocalClientNum_t localClientNum, const vec3_t *viewOrigin, const bool isStateValid, const ntl::fixed_map<int,int,64,ntl::less<int,int> > *ragdollMap, const ntl::fixed_map<int,CorpseFadeData,8,ntl::less<int,int> > *inPrevActiveFadeMap, ntl::fixed_map<int,float,16,ntl::less<int,int> > *outDistSqMap)
{
  bool v7; 
  ntl::red_black_tree_node_base *mp_left; 
  __int64 v10; 
  int m_color; 
  float v12; 
  int v13; 
  Ragdoll *v14; 
  unsigned int EntityNumber; 
  int v16; 
  float v17; 
  float v18; 
  int v19; 
  __int64 v20; 
  CgEntitySystem *v21; 
  float v22; 
  float v23; 
  __int64 v24; 
  __int64 v25; 

  v7 = isStateValid;
  mp_left = inPrevActiveFadeMap->m_endNodeBase.mp_left;
  v10 = localClientNum;
  if ( mp_left != &inPrevActiveFadeMap->m_endNodeBase )
  {
    do
    {
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      m_color = mp_left[1].m_color;
      if ( CG_CorpseFade_IsValidEntityType((const LocalClientNum_t)v10, m_color) )
      {
        v12 = CG_CorpseFade_CalcRoughDistanceSq((const LocalClientNum_t)v10, m_color, viewOrigin, ragdollMap);
        if ( v12 < 3.4028235e38 )
          CG_CorpseFade_Insert(m_color, v12, 0x10ui64, outDistSqMap);
      }
      mp_left = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(mp_left);
    }
    while ( mp_left != &inPrevActiveFadeMap->m_endNodeBase );
    v7 = isStateValid;
  }
  if ( v7 )
  {
    v13 = 1;
    v14 = g_ragdollBodies;
    do
    {
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v13 - 1) >= 0x40 )
      {
        LODWORD(v25) = 64;
        LODWORD(v24) = v13 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v13 - 1) >= 0x40 )
      {
        LODWORD(v25) = 64;
        LODWORD(v24) = v13 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( v14->allocated )
      {
        EntityNumber = Ragdoll_GetEntityNumber(v13);
        v16 = EntityNumber;
        if ( EntityNumber >= 0x800 )
        {
          LODWORD(v25) = 2048;
          LODWORD(v24) = EntityNumber;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 463, ASSERT_TYPE_ASSERT, "(unsigned)( entityId ) < (unsigned)( ( 2048 ) )", "entityId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, v25) )
            __debugbreak();
        }
        if ( CG_CorpseFade_IsValidEntityType((const LocalClientNum_t)v10, v16) )
        {
          v17 = CG_CorpseFade_CalcRoughDistanceSq((const LocalClientNum_t)v10, v16, viewOrigin, ragdollMap);
          if ( v17 < 3.4028235e38 )
          {
            v18 = CG_CorpseFade_GetOutDistanceStart((const LocalClientNum_t)v10, v16) + *(float *)&dword_147FA32DC;
            if ( (float)(v18 * v18) >= v17 )
              CG_CorpseFade_Insert(v16, v17, 0x10ui64, outDistSqMap);
          }
        }
      }
      ++v13;
      ++v14;
    }
    while ( v13 <= 64 );
    v19 = 0;
    v20 = 0i64;
    do
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v25) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v25) )
          __debugbreak();
      }
      if ( (unsigned int)v10 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v25) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v24) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v10] )
      {
        LODWORD(v25) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v25) )
          __debugbreak();
      }
      v21 = CgEntitySystem::ms_entitySystemArray[v10];
      if ( (unsigned int)v19 >= 0x800 )
      {
        LODWORD(v25) = 2048;
        LODWORD(v24) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( (v21->m_entities[v20].flags & 1) != 0 && v21->m_entities[v20].nextState.eType == ET_SCRIPTMOVER && (v21->m_entities[v20].nextState.lerp.u.anonymous.data[2] & 0x80) != 0 )
      {
        v22 = CG_CorpseFade_CalcRoughDistanceSq((const LocalClientNum_t)v10, v19, viewOrigin, ragdollMap);
        if ( v22 < 3.4028235e38 )
        {
          v23 = CG_CorpseFade_GetOutDistanceStart((const LocalClientNum_t)v10, v19) + *(float *)&dword_147FA32DC;
          if ( (float)(v23 * v23) >= v22 )
            CG_CorpseFade_Insert(v19, v22, 0x10ui64, outDistSqMap);
        }
      }
      ++v19;
      ++v20;
    }
    while ( v19 < 2048 );
  }
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
  const dvar_t *v5; 
  const char *v6; 

  Type = CG_CorpseFade_GetType(localClientNum, entityId);
  switch ( Type )
  {
    case 2:
      goto LABEL_10;
    case 6:
      v5 = DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_scriptmodel;
      if ( !DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_scriptmodel )
      {
        v6 = "cg_corpseFade_outDistanceStart_scriptmodel";
        goto LABEL_12;
      }
LABEL_14:
      Dvar_CheckFrontendServerThread(v5);
      return v5->current.value;
    case 18:
    case 21:
LABEL_10:
      v5 = DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_ragdoll;
      if ( !DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_ragdoll )
      {
        v6 = "cg_corpseFade_outDistanceStart_ragdoll";
LABEL_12:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
          __debugbreak();
        goto LABEL_14;
      }
      goto LABEL_14;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 93, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CorpseFade_GetOutDistanceStart: unexpected eType %i, entNum %i", Type, entityId) )
    __debugbreak();
  return 0.0;
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
void CG_CorpseFade_Insert(const int entityId, const float distance, const unsigned __int64 maxSize, ntl::fixed_map<int,float,16,ntl::less<int,int> > *inOutMap)
{
  __int128 v5; 
  ntl::red_black_tree_node_base **p_mp_parent; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v11; 
  ntl::red_black_tree_node_base **p_mp_left; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *v14; 
  ntl::red_black_tree_node_base *v15; 
  ntl::red_black_tree_node_base *v17; 
  bool v18; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v21; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,float> >,ntl::pair<int,float> *,ntl::pair<int,float> &> result; 
  __int128 v23; 
  __int128 v24; 
  ntl::pair<int,float> r_element; 

  p_mp_parent = &inOutMap->m_endNodeBase.mp_parent;
  mp_parent = inOutMap->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &inOutMap->m_endNodeBase;
  v11 = &inOutMap->m_endNodeBase;
  while ( mp_parent )
  {
    if ( mp_parent[1].m_color < entityId )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      v11 = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( v11 != p_m_endNodeBase && entityId >= v11[1].m_color )
  {
    *((const float *)&v11[1].m_color + 1) = distance;
    return;
  }
  if ( inOutMap->m_size == maxSize )
  {
    p_mp_left = &inOutMap->m_endNodeBase.mp_left;
    v24 = _XMM6;
    mp_left = inOutMap->m_endNodeBase.mp_left;
    v14 = &inOutMap->m_endNodeBase;
    *(float *)&_XMM6 = FLOAT_N3_4028235e38;
    if ( mp_left != p_m_endNodeBase )
    {
      v23 = v5;
      do
      {
        v15 = v14;
        if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        _XMM0 = *((unsigned int *)&mp_left[1].m_color + 1);
        v14 = mp_left;
        if ( *(float *)&_XMM0 <= *(float *)&_XMM6 )
          v14 = v15;
        __asm { vmaxss  xmm6, xmm0, xmm6 }
        mp_left = ntl::red_black_tree_node_base::get_next(mp_left);
      }
      while ( mp_left != p_m_endNodeBase );
      p_mp_left = &inOutMap->m_endNodeBase.mp_left;
      p_mp_parent = &inOutMap->m_endNodeBase.mp_parent;
    }
    if ( *(float *)&_XMM6 <= distance )
      return;
    if ( v14 == p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 384, ASSERT_TYPE_ASSERT, "(itrMax != inOutMap.end())", (const char *)&queryFormat, "itrMax != inOutMap.end()") )
      __debugbreak();
    if ( !inOutMap->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
      __debugbreak();
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    r_element = (ntl::pair<int,float>)ntl::red_black_tree_node_base::get_next(v14);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    if ( v14 == p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
      __debugbreak();
    ntl::red_black_tree_node_base::rebalance_for_erase(v14, p_mp_parent, p_mp_left, &inOutMap->m_endNodeBase.mp_right);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    *(_QWORD *)&v14->m_color = inOutMap->m_freelist.m_head.mp_next;
    inOutMap->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v14;
    --inOutMap->m_size;
  }
  v17 = *p_mp_parent;
  v18 = 1;
  r_element.first = entityId;
  r_element.second = distance;
  while ( v17 )
  {
    p_m_endNodeBase = v17;
    v18 = entityId < v17[1].m_color;
    if ( entityId >= v17[1].m_color )
      v17 = v17->mp_right;
    else
      v17 = v17->mp_left;
  }
  mp_right = p_m_endNodeBase;
  if ( v18 )
  {
    if ( p_m_endNodeBase == inOutMap->m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<int,ntl::pair<int,float>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,float>>,16,8>,ntl::return_pair_first<int,float>,ntl::less<int,int>>::insert_node(inOutMap, &result, p_m_endNodeBase, &r_element, 1, 0);
      return;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
    {
      mp_right = p_m_endNodeBase->mp_left;
      if ( mp_right )
      {
        for ( i = mp_right->mp_right; i; i = i->mp_right )
          mp_right = i;
      }
      else
      {
        mp_right = p_m_endNodeBase->mp_parent;
        if ( p_m_endNodeBase == mp_right->mp_left )
        {
          do
          {
            v21 = mp_right;
            mp_right = mp_right->mp_parent;
          }
          while ( v21 == mp_right->mp_left );
        }
      }
    }
    else
    {
      mp_right = p_m_endNodeBase->mp_right;
    }
  }
  if ( !mp_right && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( mp_right[1].m_color < entityId )
    ntl::red_black_tree<int,ntl::pair<int,float>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,float>>,16,8>,ntl::return_pair_first<int,float>,ntl::less<int,int>>::insert_node(inOutMap, &result, p_m_endNodeBase, &r_element, 0, 0);
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
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  char v4; 
  const dvar_t *v5; 
  unsigned int v6; 
  unsigned int refdefViewOrg_aab; 
  __int64 v8; 
  ntl::fixed_map<int,CorpseFadeData,8,ntl::less<int,int> > *v9; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  unsigned __int8 *p_m_transitionFactor; 
  int m_color; 
  GfxCorpseFadeEntityData *v17; 
  __int64 v18; 
  __int64 v19; 
  vec3_t viewOrigin; 
  ntl::bitset<5120,0,unsigned __int64> corpseFadeActive; 
  GfxCorpseFadeEntityData corpseFade[10]; 

  v2 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_CorpseFade_Update");
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2510, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
      __debugbreak();
  }
  else if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x33u) )
  {
    v4 = 0;
    goto LABEL_9;
  }
  v4 = 1;
LABEL_9:
  v5 = DCONST_DVARMPBOOL_cg_corpseFade_enabled;
  if ( !DCONST_DVARMPBOOL_cg_corpseFade_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = 0;
  if ( !v5->current.enabled || v4 )
  {
    v8 = v2;
    v9 = &s_corpseFadeMap[v2];
    if ( v9->m_size )
    {
      mp_parent = v9->m_endNodeBase.mp_parent;
      if ( mp_parent )
      {
        do
        {
          ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::erase_tree(&s_corpseFadeMap[v2], (ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> > *)mp_parent->mp_right);
          mp_left = mp_parent->mp_left;
          *(_QWORD *)&mp_parent->m_color = v9->m_freelist.m_head.mp_next;
          v9->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
          mp_parent = mp_left;
        }
        while ( mp_left );
      }
      v9->m_endNodeBase.mp_parent = NULL;
      v9->m_endNodeBase.mp_left = &v9->m_endNodeBase;
      v9->m_endNodeBase.mp_right = &v9->m_endNodeBase;
      v9->m_size = 0i64;
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
    v8 = v2;
    CG_CorpseFade_UpdateFadeMap((const LocalClientNum_t)v2, &viewOrigin, LocalClientGlobals->time, &s_corpseFadeMap[v2]);
  }
  memset_0(&corpseFadeActive, 0, sizeof(corpseFadeActive));
  next = s_corpseFadeMap[v8].m_endNodeBase.mp_left;
  p_m_endNodeBase = &s_corpseFadeMap[v8].m_endNodeBase;
  if ( next == p_m_endNodeBase )
    goto LABEL_44;
  p_m_transitionFactor = &corpseFade[0].m_transitionFactor;
  do
  {
    if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    m_color = next[1].m_color;
    if ( (unsigned int)m_color >= 0x800 )
    {
      LODWORD(v19) = 2048;
      LODWORD(v18) = next[1].m_color;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 734, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
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
    *((_QWORD *)&_XMM0 + 1) = 0i64;
    *p_m_transitionFactor = (int)(float)((float)(1.0 - *(float *)&_XMM6) * 255.0);
    ++v6;
    p_m_transitionFactor += 4;
    next = ntl::red_black_tree_node_base::get_next(next);
  }
  while ( next != p_m_endNodeBase );
  if ( v6 < 8 )
  {
LABEL_44:
    v17 = &corpseFade[v6];
    do
    {
      v17->m_entityNum = 2047;
      ++v6;
      ++v17;
    }
    while ( v6 < 8 );
  }
  R_UpdateCorpseFadeData(&corpseFadeActive, corpseFade, 8ui64);
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_CorpseFade_UpdateFadeMap
==============
*/
void CG_CorpseFade_UpdateFadeMap(const LocalClientNum_t localClientNum, const vec3_t *viewOrigin, const int serverTimeMs, ntl::fixed_map<int,CorpseFadeData,8,ntl::less<int,int> > *inOutFadeMap)
{
  signed __int64 v4; 
  void *v6; 
  cg_t *LocalClientGlobals; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  char *v9; 
  int v10; 
  Ragdoll *v11; 
  unsigned int EntityNumber; 
  int v13; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v16; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v19; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::internal::pool_allocator_freelist<40> *v22; 
  char *v23; 
  const vec3_t *v24; 
  __int64 v25; 
  LocalClientNum_t v26; 
  ntl::internal::pool_allocator_freelist<40> *v27; 
  char *v28; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node<ntl::pair<int,int> > *v30; 
  signed int m_color; 
  float v32; 
  centity_t *Entity; 
  int eType; 
  const dvar_t *v35; 
  float OutDistanceStart; 
  ntl::red_black_tree_node<ntl::pair<int,int> > *v37; 
  ntl::red_black_tree_node<ntl::pair<int,int> > *v38; 
  float v39; 
  ntl::internal::pool_allocator_freelist<48> *v40; 
  char *v41; 
  __int64 v42; 
  __int64 v43; 
  ntl::red_black_tree_node_base *v44; 
  LocalClientNum_t v45; 
  int v46; 
  int v47; 
  ntl::red_black_tree_node_base *v48; 
  ntl::red_black_tree_node_base *v49; 
  char increasing; 
  char v51; 
  float value; 
  centity_t *v53; 
  int v54; 
  const dvar_t *v55; 
  const char *v56; 
  double v57; 
  double v58; 
  ntl::red_black_tree_node_base *v59; 
  __int64 v60; 
  bool v61; 
  ntl::red_black_tree_node_base *v62; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v64; 
  ntl::red_black_tree_node_base *v65; 
  ntl::red_black_tree_node_base *v66; 
  ntl::red_black_tree_node_base *v67; 
  ntl::red_black_tree_node_base *v68; 
  ntl::red_black_tree_node_base *v69; 
  ntl::red_black_tree_node_base *v70; 
  ntl::red_black_tree_node_base *v71; 
  ntl::red_black_tree_node_base *v72; 
  __int64 hintInsertLessElement; 
  __int64 hintInsertLessElementa; 
  __int64 v75; 
  bool v76; 
  CorpseFadeData viewOrigina; 
  LocalClientNum_t localClientNuma; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,int> >,ntl::pair<int,int> *,ntl::pair<int,int> &> result; 
  __m256i v81; 
  double v82; 
  __int64 v83; 
  vec3_t inPrevActiveFadeMap; 
  ntl::pair<int,CorpseFadeData> r_element; 
  ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int> > v86; 
  ntl::fixed_map<int,float,16,ntl::less<int,int> > inOutMap; 
  ntl::fixed_map<int,float,16,ntl::less<int,int> > outDistSqMap; 
  ntl::red_black_tree<int,ntl::pair<int,int>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,int> >,64,8>,ntl::return_pair_first<int,int>,ntl::less<int,int> > v89; 

  v6 = alloca(v4);
  v83 = -2i64;
  *(_QWORD *)inPrevActiveFadeMap.v = inOutFadeMap;
  *(_QWORD *)&viewOrigina.time = viewOrigin;
  localClientNuma = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v76 = PM_GetEffectiveStance(&LocalClientGlobals->predictedPlayerState) == PM_EFF_STANCE_PRONE;
  p_m_freelist = &v89.m_freelist;
  v9 = &v89.m_data.m_buffer[2520];
  do
  {
    *(_QWORD *)v9 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v9;
    v9 -= 40;
  }
  while ( v9 + 40 > (char *)&v89 );
  v89.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v89.m_size = 0i64;
  v89.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v89.m_endNodeBase.mp_parent = NULL;
  v89.m_endNodeBase.mp_left = &v89.m_endNodeBase;
  v89.m_endNodeBase.mp_right = &v89.m_endNodeBase;
  v10 = 1;
  v11 = g_ragdollBodies;
  do
  {
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( (unsigned int)(v10 - 1) >= 0x40 )
    {
      LODWORD(v75) = 64;
      LODWORD(hintInsertLessElement) = v10 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", hintInsertLessElement, v75) )
        __debugbreak();
    }
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( (unsigned int)(v10 - 1) >= 0x40 )
    {
      LODWORD(v75) = 64;
      LODWORD(hintInsertLessElement) = v10 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", hintInsertLessElement, v75) )
        __debugbreak();
    }
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( v11->allocated )
    {
      EntityNumber = Ragdoll_GetEntityNumber(v10);
      v13 = EntityNumber;
      if ( EntityNumber >= 0x800 )
      {
        LODWORD(v75) = 2048;
        LODWORD(hintInsertLessElement) = EntityNumber;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 541, ASSERT_TYPE_ASSERT, "(unsigned)( entityId ) < (unsigned)( ( 2048 ) )", "entityId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", hintInsertLessElement, v75) )
          __debugbreak();
      }
      r_element.first = v13;
      r_element.second.time = v10;
      p_m_endNodeBase = &v89.m_endNodeBase;
      mp_parent = v89.m_endNodeBase.mp_parent;
      v16 = 1;
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v16 = v13 < mp_parent[1].m_color;
        if ( v13 >= mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      mp_left = p_m_endNodeBase;
      if ( v16 )
      {
        if ( p_m_endNodeBase == v89.m_endNodeBase.mp_left )
        {
          ntl::red_black_tree<int,ntl::pair<int,int>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,int>>,64,8>,ntl::return_pair_first<int,int>,ntl::less<int,int>>::insert_node(&v89, &result, p_m_endNodeBase, (const ntl::pair<int,int> *)&r_element, 1, 0);
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
                v19 = mp_left;
                mp_left = mp_left->mp_parent;
              }
              while ( v19 == mp_left->mp_left );
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
      if ( mp_left[1].m_color < v13 )
      {
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
          __debugbreak();
        if ( !v89.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !v89.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<40> *)v89.m_freelist.m_head.mp_next == &v89.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 0x40ui64) )
          __debugbreak();
        mp_next = v89.m_freelist.m_head.mp_next;
        v89.m_freelist.m_head.mp_next = v89.m_freelist.m_head.mp_next->mp_next;
        v81.m256i_i32[0] = 0;
        v81.m256i_i64[1] = (__int64)p_m_endNodeBase;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&v81.m256i_u64[2] = _XMM0;
        v82 = *(double *)&r_element.first;
        *(__m256i *)&mp_next->mp_next = v81;
        *(double *)&mp_next[4].mp_next = v82;
        if ( p_m_endNodeBase == &v89.m_endNodeBase )
        {
          v89.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
          v89.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
          v89.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
        }
        else if ( v13 >= p_m_endNodeBase[1].m_color )
        {
          p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)mp_next;
          mp_right = v89.m_endNodeBase.mp_right;
          if ( p_m_endNodeBase == v89.m_endNodeBase.mp_right )
            mp_right = (ntl::red_black_tree_node_base *)mp_next;
          v89.m_endNodeBase.mp_right = mp_right;
        }
        else
        {
          p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)mp_next;
          if ( p_m_endNodeBase == v89.m_endNodeBase.mp_left )
            v89.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
        }
        ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &v89.m_endNodeBase.mp_parent);
        ++v89.m_size;
      }
    }
LABEL_71:
    ++v10;
    ++v11;
  }
  while ( v10 <= 64 );
  v22 = &outDistSqMap.m_freelist;
  v23 = &outDistSqMap.m_data.m_buffer[600];
  v24 = *(const vec3_t **)&viewOrigina.time;
  v25 = *(_QWORD *)inPrevActiveFadeMap.v;
  do
  {
    *(_QWORD *)v23 = v22;
    v22 = (ntl::internal::pool_allocator_freelist<40> *)v23;
    v23 -= 40;
  }
  while ( v23 + 40 > (char *)&outDistSqMap );
  outDistSqMap.m_freelist.m_head.mp_next = &v22->m_head;
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  outDistSqMap.m_size = 0i64;
  outDistSqMap.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  outDistSqMap.m_endNodeBase.mp_parent = NULL;
  outDistSqMap.m_endNodeBase.mp_left = &outDistSqMap.m_endNodeBase;
  outDistSqMap.m_endNodeBase.mp_right = &outDistSqMap.m_endNodeBase;
  v26 = localClientNuma;
  CG_CorpseFade_CollectCandidates(localClientNuma, v24, v76, (const ntl::fixed_map<int,int,64,ntl::less<int,int> > *)&v89, (const ntl::fixed_map<int,CorpseFadeData,8,ntl::less<int,int> > *)v25, &outDistSqMap);
  v27 = &inOutMap.m_freelist;
  v28 = &inOutMap.m_data.m_buffer[600];
  do
  {
    *(_QWORD *)v28 = v27;
    v27 = (ntl::internal::pool_allocator_freelist<40> *)v28;
    v28 -= 40;
  }
  while ( v28 + 40 > (char *)&inOutMap );
  inOutMap.m_freelist.m_head.mp_next = &v27->m_head;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  inOutMap.m_size = 0i64;
  inOutMap.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  inOutMap.m_endNodeBase.mp_parent = NULL;
  inOutMap.m_endNodeBase.mp_left = &inOutMap.m_endNodeBase;
  inOutMap.m_endNodeBase.mp_right = &inOutMap.m_endNodeBase;
  next = outDistSqMap.m_endNodeBase.mp_left;
  if ( outDistSqMap.m_endNodeBase.mp_left != &outDistSqMap.m_endNodeBase )
  {
    v30 = (ntl::red_black_tree_node<ntl::pair<int,int> > *)(v25 + 392);
    do
    {
      if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      m_color = next[1].m_color;
      v32 = 0.0;
      Entity = CG_GetEntity(v26, m_color);
      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 45, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      eType = Entity->nextState.eType;
      if ( eType == 2 )
        goto LABEL_101;
      if ( (_WORD)eType == 6 )
      {
        CG_GetEntityOrigin(v26, m_color, &inPrevActiveFadeMap);
        v32 = fsqrt((float)((float)((float)(inPrevActiveFadeMap.v[1] - v24->v[1]) * (float)(inPrevActiveFadeMap.v[1] - v24->v[1])) + (float)((float)(inPrevActiveFadeMap.v[0] - v24->v[0]) * (float)(inPrevActiveFadeMap.v[0] - v24->v[0]))) + (float)((float)(inPrevActiveFadeMap.v[2] - v24->v[2]) * (float)(inPrevActiveFadeMap.v[2] - v24->v[2])));
        v35 = DCONST_DVARBOOL_cg_corpseFade_debug;
        if ( !DCONST_DVARBOOL_cg_corpseFade_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFade_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v35);
        if ( v35->current.enabled )
        {
          OutDistanceStart = CG_CorpseFade_GetOutDistanceStart(v26, m_color);
          CG_DebugSphere(&inPrevActiveFadeMap, OutDistanceStart, &colorCyan, 1, 0);
        }
        goto LABEL_102;
      }
      if ( (_WORD)eType == 18 || (_WORD)eType == 21 )
      {
LABEL_101:
        v32 = CG_CorpseFade_CalcDetailDistance_Ragdoll(v26, m_color, v24, (const ntl::fixed_map<int,int,64,ntl::less<int,int> > *)&v89);
      }
      else
      {
        LODWORD(v75) = m_color;
        LODWORD(hintInsertLessElementa) = Entity->nextState.eType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 304, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CorpseFade_CalcDetailDistance: unexpected eType %i, entNum %i", hintInsertLessElementa, v75) )
          __debugbreak();
      }
LABEL_102:
      result.mp_node = (ntl::red_black_tree_node<ntl::pair<int,int> > *)(v25 + 392);
      v37 = (ntl::red_black_tree_node<ntl::pair<int,int> > *)(v25 + 392);
      v38 = *(ntl::red_black_tree_node<ntl::pair<int,int> > **)(v25 + 400);
      if ( v38 )
      {
        do
        {
          if ( v38->m_element.first < m_color )
          {
            v38 = (ntl::red_black_tree_node<ntl::pair<int,int> > *)v38->mp_right;
          }
          else
          {
            v37 = v38;
            v38 = (ntl::red_black_tree_node<ntl::pair<int,int> > *)v38->mp_left;
          }
        }
        while ( v38 );
        if ( v37 != v30 && m_color < v37->m_element.first )
          v37 = (ntl::red_black_tree_node<ntl::pair<int,int> > *)(v25 + 392);
      }
      result.mp_node = v37;
      v39 = CG_CorpseFade_GetOutDistanceStart(v26, m_color);
      if ( v37 != v30 || v32 < v39 )
        CG_CorpseFade_Insert(m_color, v32, 8ui64, &inOutMap);
      next = ntl::red_black_tree_node_base::get_next(next);
    }
    while ( next != &outDistSqMap.m_endNodeBase );
  }
  v40 = &v86.m_freelist;
  v41 = &v86.m_data.m_buffer[336];
  do
  {
    *(_QWORD *)v41 = v40;
    v40 = (ntl::internal::pool_allocator_freelist<48> *)v41;
    v41 -= 48;
  }
  while ( v41 + 48 > (char *)&v86 );
  v86.m_freelist.m_head.mp_next = &v40->m_head;
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v86.m_size = 0i64;
  v86.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v86.m_endNodeBase.mp_parent = NULL;
  v86.m_endNodeBase.mp_left = &v86.m_endNodeBase;
  v86.m_endNodeBase.mp_right = &v86.m_endNodeBase;
  ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::assign(&v86, (const ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int> > *)v25);
  if ( *(_QWORD *)(v25 + 424) )
  {
    v42 = *(_QWORD *)(v25 + 400);
    if ( v42 )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::erase_tree((ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int> > *)v25, *(ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> > **)(v42 + 24));
        v43 = *(_QWORD *)(v42 + 16);
        *(_QWORD *)v42 = *(_QWORD *)(v25 + 384);
        *(_QWORD *)(v25 + 384) = v42;
        v42 = v43;
      }
      while ( v43 );
    }
    *(_QWORD *)(v25 + 400) = 0i64;
    *(_QWORD *)(v25 + 408) = v25 + 392;
    *(_QWORD *)(v25 + 416) = v25 + 392;
    *(_QWORD *)(v25 + 424) = 0i64;
  }
  v44 = inOutMap.m_endNodeBase.mp_left;
  if ( inOutMap.m_endNodeBase.mp_left != &inOutMap.m_endNodeBase )
  {
    v45 = localClientNuma;
    v46 = serverTimeMs;
    while ( 1 )
    {
      if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v47 = v44[1].m_color;
      v48 = &v86.m_endNodeBase;
      v49 = v86.m_endNodeBase.mp_parent;
      if ( !v86.m_endNodeBase.mp_parent )
        goto LABEL_163;
      do
      {
        if ( v49[1].m_color < v47 )
        {
          v49 = v49->mp_right;
        }
        else
        {
          v48 = v49;
          v49 = v49->mp_left;
        }
      }
      while ( v49 );
      if ( v48 == &v86.m_endNodeBase || v47 < v48[1].m_color )
      {
LABEL_163:
        viewOrigina.time = v46;
        viewOrigina.opacity = FLOAT_1_0;
        viewOrigina.increasing = 0;
        goto LABEL_165;
      }
      viewOrigina = *(CorpseFadeData *)(&v48[1].m_color + 1);
      increasing = viewOrigina.increasing;
      v51 = viewOrigina.increasing;
      if ( viewOrigina.increasing )
      {
        if ( CG_CorpseFade_GetOutDistanceStart(v45, v47) >= *((float *)&v44[1].m_color + 1) )
          v51 = 0;
        goto LABEL_156;
      }
      value = 0.0;
      v53 = CG_GetEntity(v45, v47);
      if ( (v53->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 45, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      v54 = v53->nextState.eType;
      if ( v54 == 2 )
        goto LABEL_149;
      if ( (_WORD)v54 != 6 )
        break;
      v55 = DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_scriptmodel;
      if ( !DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_scriptmodel )
      {
        v56 = "cg_corpseFade_inDistanceStart_scriptmodel";
        goto LABEL_151;
      }
LABEL_153:
      Dvar_CheckFrontendServerThread(v55);
      value = v55->current.value;
LABEL_154:
      if ( value <= *((float *)&v44[1].m_color + 1) )
        v51 = 1;
LABEL_156:
      if ( !v76 )
        v51 = 1;
      if ( v51 != increasing )
      {
        v57 = CG_CorpseFade_CalcOpacity(serverTimeMs, &viewOrigina);
        viewOrigina.opacity = *(float *)&v57;
        viewOrigina.time = serverTimeMs;
        increasing = v51;
        viewOrigina.increasing = v51;
      }
      if ( increasing )
      {
        v58 = CG_CorpseFade_CalcOpacity(serverTimeMs, &viewOrigina);
        v46 = serverTimeMs;
        if ( *(float *)&v58 >= 1.0 )
          goto LABEL_190;
      }
      else
      {
        v46 = serverTimeMs;
      }
LABEL_165:
      r_element.first = v47;
      r_element.second = viewOrigina;
      v59 = (ntl::red_black_tree_node_base *)(v25 + 392);
      v60 = *(_QWORD *)(v25 + 400);
      v61 = 1;
      while ( v60 )
      {
        v59 = (ntl::red_black_tree_node_base *)v60;
        v61 = v47 < *(_DWORD *)(v60 + 32);
        if ( v47 >= *(_DWORD *)(v60 + 32) )
          v60 = *(_QWORD *)(v60 + 24);
        else
          v60 = *(_QWORD *)(v60 + 16);
      }
      v62 = v59;
      if ( !v61 )
        goto LABEL_185;
      if ( v59 != *(ntl::red_black_tree_node_base **)(v25 + 408) )
      {
        if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( v59->m_color || v59->mp_parent->mp_parent != v59 )
        {
          v62 = v59->mp_left;
          if ( v62 )
          {
            for ( j = v62->mp_right; j; j = j->mp_right )
              v62 = j;
          }
          else
          {
            v62 = v59->mp_parent;
            if ( v59 == v62->mp_left )
            {
              do
              {
                v64 = v62;
                v62 = v62->mp_parent;
              }
              while ( v64 == v62->mp_left );
            }
          }
        }
        else
        {
          v62 = v59->mp_right;
        }
LABEL_185:
        if ( !v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( v62[1].m_color < v47 )
          ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::insert_node((ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int> > *)v25, (ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,ntl::pair<int,CorpseFadeData> *,ntl::pair<int,CorpseFadeData> &> *)&inPrevActiveFadeMap, v59, &r_element, 0, 0);
        goto LABEL_190;
      }
      ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::insert_node((ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int> > *)v25, (ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> >,ntl::pair<int,CorpseFadeData> *,ntl::pair<int,CorpseFadeData> &> *)&result, v59, &r_element, 1, 0);
LABEL_190:
      v44 = ntl::red_black_tree_node_base::get_next(v44);
      if ( v44 == &inOutMap.m_endNodeBase )
        goto LABEL_191;
    }
    if ( (_WORD)v54 != 18 && (_WORD)v54 != 21 )
    {
      LODWORD(v75) = v47;
      LODWORD(hintInsertLessElementa) = v53->nextState.eType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_corpse_fade.cpp", 118, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CorpseFade_GetInDistanceStart: unexpected eType %i, entNum %i", hintInsertLessElementa, v75) )
        __debugbreak();
      goto LABEL_154;
    }
LABEL_149:
    v55 = DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_ragdoll;
    if ( !DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_ragdoll )
    {
      v56 = "cg_corpseFade_inDistanceStart_ragdoll";
LABEL_151:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v56) )
        __debugbreak();
      goto LABEL_153;
    }
    goto LABEL_153;
  }
LABEL_191:
  if ( v86.m_size )
  {
    v65 = v86.m_endNodeBase.mp_parent;
    if ( v86.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,CorpseFadeData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData>>,8,8>,ntl::return_pair_first<int,CorpseFadeData>,ntl::less<int,int>>::erase_tree(&v86, (ntl::red_black_tree_node<ntl::pair<int,CorpseFadeData> > *)v65->mp_right);
        v66 = v65->mp_left;
        *(_QWORD *)&v65->m_color = v86.m_freelist.m_head.mp_next;
        v86.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v65;
        v65 = v66;
      }
      while ( v66 );
    }
    v86.m_endNodeBase.mp_parent = NULL;
    v86.m_endNodeBase.mp_left = &v86.m_endNodeBase;
    v86.m_endNodeBase.mp_right = &v86.m_endNodeBase;
    v86.m_size = 0i64;
  }
  if ( inOutMap.m_size )
  {
    v67 = inOutMap.m_endNodeBase.mp_parent;
    if ( inOutMap.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,float>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,float>>,16,8>,ntl::return_pair_first<int,float>,ntl::less<int,int>>::erase_tree(&inOutMap, (ntl::red_black_tree_node<ntl::pair<int,float> > *)v67->mp_right);
        v68 = v67->mp_left;
        *(_QWORD *)&v67->m_color = inOutMap.m_freelist.m_head.mp_next;
        inOutMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v67;
        v67 = v68;
      }
      while ( v68 );
    }
    inOutMap.m_endNodeBase.mp_parent = NULL;
    inOutMap.m_endNodeBase.mp_left = &inOutMap.m_endNodeBase;
    inOutMap.m_endNodeBase.mp_right = &inOutMap.m_endNodeBase;
    inOutMap.m_size = 0i64;
  }
  if ( outDistSqMap.m_size )
  {
    v69 = outDistSqMap.m_endNodeBase.mp_parent;
    if ( outDistSqMap.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,float>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,float>>,16,8>,ntl::return_pair_first<int,float>,ntl::less<int,int>>::erase_tree(&outDistSqMap, (ntl::red_black_tree_node<ntl::pair<int,float> > *)v69->mp_right);
        v70 = v69->mp_left;
        *(_QWORD *)&v69->m_color = outDistSqMap.m_freelist.m_head.mp_next;
        outDistSqMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v69;
        v69 = v70;
      }
      while ( v70 );
    }
    outDistSqMap.m_endNodeBase.mp_parent = NULL;
    outDistSqMap.m_endNodeBase.mp_left = &outDistSqMap.m_endNodeBase;
    outDistSqMap.m_endNodeBase.mp_right = &outDistSqMap.m_endNodeBase;
    outDistSqMap.m_size = 0i64;
  }
  if ( v89.m_size )
  {
    v71 = v89.m_endNodeBase.mp_parent;
    if ( v89.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,int>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,int>>,64,8>,ntl::return_pair_first<int,int>,ntl::less<int,int>>::erase_tree(&v89, (ntl::red_black_tree_node<ntl::pair<int,int> > *)v71->mp_right);
        v72 = v71->mp_left;
        *(_QWORD *)&v71->m_color = v89.m_freelist.m_head.mp_next;
        v89.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v71;
        v71 = v72;
      }
      while ( v72 );
    }
  }
}

