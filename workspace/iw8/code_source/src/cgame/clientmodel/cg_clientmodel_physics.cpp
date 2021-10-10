/*
==============
CG_ClientModel_Physics_SetupModel
==============
*/

void __fastcall CG_ClientModel_Physics_SetupModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  ?CG_ClientModel_Physics_SetupModel@@YAXW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_Physics_MapPose
==============
*/

void __fastcall CG_ClientModel_Physics_MapPose(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, DObjPartBits *partBits)
{
  ?CG_ClientModel_Physics_MapPose@@YAXW4LocalClientNum_t@@IPEAUDObjPartBits@@@Z(localClientNum, clientModelIdx, partBits);
}

/*
==============
CG_ClientModel_Physics_PropagateToDetailWorld
==============
*/

void __fastcall CG_ClientModel_Physics_PropagateToDetailWorld(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_Physics_PropagateToDetailWorld@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_Physics_GetInstanceId
==============
*/

unsigned int __fastcall CG_ClientModel_Physics_GetInstanceId(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_Physics_GetInstanceId@@YAIW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_Physics_PostStepWorld
==============
*/

void __fastcall CG_ClientModel_Physics_PostStepWorld(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_Physics_PostStepWorld@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_Physics_PreStepWorld
==============
*/

void __fastcall CG_ClientModel_Physics_PreStepWorld(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_Physics_PreStepWorld@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_Physics_GetDetailInstanceId
==============
*/

unsigned int __fastcall CG_ClientModel_Physics_GetDetailInstanceId(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_Physics_GetDetailInstanceId@@YAIW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_Physics_Init
==============
*/

void __fastcall CG_ClientModel_Physics_Init(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_Physics_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_Physics_Shutdown
==============
*/

void __fastcall CG_ClientModel_Physics_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_Physics_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_Physics_UpdateDetailWorldInstance
==============
*/

unsigned int __fastcall CG_ClientModel_Physics_UpdateDetailWorldInstance(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_Physics_UpdateDetailWorldInstance@@YAIW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_Physics_ShutdownModel
==============
*/

void __fastcall CG_ClientModel_Physics_ShutdownModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  ?CG_ClientModel_Physics_ShutdownModel@@YAXW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_Physics_RuntimeData::CG_ClientModel_Physics_RuntimeData
==============
*/

void __fastcall CG_ClientModel_Physics_RuntimeData::CG_ClientModel_Physics_RuntimeData(CG_ClientModel_Physics_RuntimeData *this)
{
  ??0CG_ClientModel_Physics_RuntimeData@@QEAA@XZ(this);
}

/*
==============
CG_ClientModel_Physics_RuntimeData::CG_ClientModel_Physics_RuntimeData
==============
*/
void CG_ClientModel_Physics_RuntimeData::CG_ClientModel_Physics_RuntimeData(CG_ClientModel_Physics_RuntimeData *this)
{
  this->dynamicBoneMapping.m_data.m_buffer = NULL;
  this->dynamicBoneMapping.m_data.m_size = 0i64;
  this->keyframedOffsetMapping.m_data.m_buffer = NULL;
  this->keyframedOffsetMapping.m_data.m_size = 0i64;
  this->keyframedBoneMapping.m_data.m_buffer = NULL;
  this->keyframedBoneMapping.m_data.m_size = 0i64;
  this->detailBoneMapping.m_data.m_buffer = NULL;
  this->detailBoneMapping.m_data.m_size = 0i64;
  this->detailCache.cached = 0;
  *(_QWORD *)this->physicsInstances = -1i64;
  this->primaryBody = 0xFFFFFF;
}

/*
==============
CG_ClientModel_Physics_FindBoneIndex
==============
*/
__int64 CG_ClientModel_Physics_FindBoneIndex(Physics_WorldId worldId, unsigned int bodyId, const DObj *dobj, const PhysicsAsset *physAsset)
{
  const char *RigidBodyName; 
  const char *v9; 
  scr_string_t String; 
  __int64 v11; 
  unsigned __int64 v12; 
  const char *v13; 
  const char *v14; 
  const char *name; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex[3]; 
  char dest[256]; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 180, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !physAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 181, ASSERT_TYPE_ASSERT, "(physAsset)", (const char *)&queryFormat, "physAsset") )
    __debugbreak();
  RigidBodyName = Physics_GetRigidBodyName(worldId, bodyId);
  if ( !RigidBodyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 184, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  Com_sprintf(dest, 0x100ui64, "%s_lod0", RigidBodyName);
  I_strlwr(dest);
  v9 = "<UNKNOWN>";
  String = SL_FindString(dest);
  if ( !String )
  {
    v11 = -1i64;
    do
      ++v11;
    while ( dest[v11] );
    v12 = v11 - 5;
    if ( v12 >= 0x100 )
    {
      j___report_rangecheckfailure(dest);
      JUMPOUT(0x141E386E6i64);
    }
    dest[v12] = 0;
    String = SL_FindString(dest);
    if ( !String )
    {
      v13 = physAsset ? physAsset->name : "<UNKNOWN>";
      v14 = dobj->numModels ? **(const char ***)dobj->models : "<UNKNOWN>";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 200, ASSERT_TYPE_ASSERT, "(scrName != ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tCouldn't generate script string for bone %s when searching dobj using model %s and physicsasset %s", "scrName != NULL_SCR_STRING", dest, v14, v13) )
        __debugbreak();
    }
  }
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_69(dobj, String, inOutIndex, modelIndex) )
    return inOutIndex[0];
  if ( physAsset )
    name = physAsset->name;
  else
    name = "<UNKNOWN>";
  if ( dobj->numModels )
    v9 = **(const char ***)dobj->models;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 205, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tCouldn't find bone %s(or %s) when searching dobj using model %s and physicsasset %s", "success", RigidBodyName, dest, v9, name) )
    __debugbreak();
  return 255i64;
}

/*
==============
CG_ClientModel_Physics_GetDetailInstanceId
==============
*/
__int64 CG_ClientModel_Physics_GetDetailInstanceId(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v3; 

  v2 = localClientNum;
  v3 = clientModelIdx;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 643, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 644, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v3 >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 645, ASSERT_TYPE_ASSERT, "(clientModelIdx < CG_ClientModel_GetCount( localClientNum ))", (const char *)&queryFormat, "clientModelIdx < CG_ClientModel_GetCount( localClientNum )") )
    __debugbreak();
  return s_CG_ClientModel_Physics_RuntimeData[v2][v3].physicsInstances[1];
}

/*
==============
CG_ClientModel_Physics_GetInstanceId
==============
*/
__int64 CG_ClientModel_Physics_GetInstanceId(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v3; 

  v2 = localClientNum;
  v3 = clientModelIdx;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 630, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 631, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v3 >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 632, ASSERT_TYPE_ASSERT, "(clientModelIdx < CG_ClientModel_GetCount( localClientNum ))", (const char *)&queryFormat, "clientModelIdx < CG_ClientModel_GetCount( localClientNum )") )
    __debugbreak();
  return s_CG_ClientModel_Physics_RuntimeData[v2][v3].physicsInstances[0];
}

/*
==============
CG_ClientModel_Physics_Init
==============
*/
void CG_ClientModel_Physics_Init(const LocalClientNum_t localClientNum)
{
  __int64 v1; 

  if ( !s_CG_ClientModel_Physics_AllocatorsSetup )
  {
    s_CG_ClientModel_Physics_AllocatorsSetup = 1;
    ntl::static_shared_allocator<CG_ClientModel_Physics_OffsetMappingAllocator,ntl::fixed_heap_allocator<39936,0>>::mp_allocator = &s_cg_ClientModel_Physics_OffsetMappingAllocator;
    ntl::static_shared_allocator<CG_ClientModel_Physics_BoneMappingAllocator,ntl::fixed_heap_allocator<6144,0>>::mp_allocator = &s_cg_ClientModel_Physics_BoneMappingAllocator;
    ntl::static_shared_allocator<CG_ClientModel_Physics_CachedBoneMappingAllocator,ntl::fixed_heap_allocator<52224,0>>::mp_allocator = &s_cg_ClientModel_Physics_CachedBoneMappingAllocator;
  }
  v1 = localClientNum;
  *(_QWORD *)s_CG_ClientModel_Physics_HasCGAuthData[v1].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_HasCGAuthData[v1].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_HasCGAuthData[v1].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_HasCGAuthData[v1].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_HasCGAuthData[v1].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_HasCGAuthData[v1].array[10] = 0i64;
  *(_QWORD *)s_CG_ClientModel_Physics_HasPhysAuthData[v1].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_HasPhysAuthData[v1].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_HasPhysAuthData[v1].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_HasPhysAuthData[v1].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_HasPhysAuthData[v1].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_HasPhysAuthData[v1].array[10] = 0i64;
  *(_QWORD *)s_CG_ClientModel_Physics_NeedsPropagation[v1].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_NeedsPropagation[v1].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_NeedsPropagation[v1].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_NeedsPropagation[v1].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_NeedsPropagation[v1].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Physics_NeedsPropagation[v1].array[10] = 0i64;
}

/*
==============
CG_ClientModel_Physics_MapPose
==============
*/
void CG_ClientModel_Physics_MapPose(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, DObjPartBits *partBits)
{
  __int64 v3; 
  __int64 v4; 
  CG_ClientModel_Physics_RuntimeData *v6; 
  cpose_t *Pose; 
  DObj *DObj; 
  DObjAnimMat *RotTransArray; 
  CG_ClientModel_Physics_CachedBoneMapping *m_buffer; 
  refdef_t *v11; 
  __int64 currentCache; 
  __m128 *v13; 
  int *v14; 

  v3 = localClientNum;
  v4 = clientModelIdx;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 885, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 886, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v4 >= CG_ClientModel_GetCount((const LocalClientNum_t)v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 887, ASSERT_TYPE_ASSERT, "(clientModelIdx < CG_ClientModel_GetCount( localClientNum ))", (const char *)&queryFormat, "clientModelIdx < CG_ClientModel_GetCount( localClientNum )") )
    __debugbreak();
  v6 = &s_CG_ClientModel_Physics_RuntimeData[v3][v4];
  if ( v6->physicsInstances[0] == -1 )
  {
    Pose = CG_ClientModel_GetPose((const LocalClientNum_t)v3, v4);
    DObj = CG_ClientModel_GetDObj((const LocalClientNum_t)v3, v4);
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 901, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( !DObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 902, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
      __debugbreak();
    if ( DObj->numBones )
    {
      RotTransArray = DObjGetRotTransArray(DObj);
      if ( RotTransArray )
      {
        Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Physics_MapPose");
        m_buffer = v6->dynamicBoneMapping.m_data.m_buffer;
        if ( m_buffer != &m_buffer[v6->dynamicBoneMapping.m_data.m_size] )
        {
          do
          {
            if ( DObjSetSkelRotTransIndex(DObj, partBits, m_buffer->boneIndex) )
            {
              v11 = g_activeRefDef;
              currentCache = m_buffer->currentCache;
              v13 = (__m128 *)&RotTransArray[m_buffer->boneIndex];
              v13[1].m128_f32[0] = m_buffer->cachedPosition[currentCache].v[0] - g_activeRefDef->viewOffset.v[0];
              v13[1].m128_f32[1] = m_buffer->cachedPosition[currentCache].v[1] - v11->viewOffset.v[1];
              v13[1].m128_f32[2] = m_buffer->cachedPosition[currentCache].v[2] - v11->viewOffset.v[2];
              v14 = (int *)&m_buffer->cachedOrientationAsQuat[currentCache];
              v13->m128_i32[0] = *v14;
              v13->m128_i32[1] = v14[1];
              v13->m128_i32[2] = v14[2];
              v13->m128_i32[3] = v14[3];
              _XMM0 = _mm128_mul_ps(*v13, *v13);
              __asm
              {
                vhaddps xmm1, xmm0, xmm0
                vhaddps xmm0, xmm1, xmm1
              }
              *v13 = _mm128_div_ps(*v13, _mm_sqrt_ps(_XMM0));
              v13[1].m128_i32[3] = 0x40000000;
            }
            ++m_buffer;
          }
          while ( m_buffer != &v6->dynamicBoneMapping.m_data.m_buffer[v6->dynamicBoneMapping.m_data.m_size] );
        }
        Sys_ProfEndNamedEvent();
      }
    }
  }
}

/*
==============
CG_ClientModel_Physics_PostStepWorld
==============
*/
void CG_ClientModel_Physics_PostStepWorld(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  Physics_WorldId v2; 
  __int64 v3; 
  bitarray<384> *v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  CG_ClientModel_Physics_RuntimeData *v9; 
  cpose_t *Pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v15; 
  CG_ClientModel_Physics_CachedBoneMapping *m_buffer; 
  int v26; 
  unsigned int bodyId; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v29; 
  __int64 v30; 
  __int64 v31; 
  vec3_t origin; 
  int v33; 
  LocalClientNum_t v34; 
  unsigned int v35; 
  bitarray<384> *v36; 
  CG_ClientModel_Physics_RuntimeData *v37; 
  __int64 v38; 
  __int64 v39; 
  vec4_t orientation; 

  v39 = -2i64;
  v1 = localClientNum;
  v34 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Physics_PostStepWorld");
  if ( (unsigned int)v1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 829, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 830, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v2 = 3 * v1 + 3;
  v3 = v1;
  v38 = v1;
  v4 = &s_CG_ClientModel_Physics_HasPhysAuthData[v1];
  v36 = v4;
  LODWORD(v5) = 0;
  v33 = 0;
  v6 = v4->array[0];
  while ( v6 )
  {
LABEL_12:
    v7 = __lzcnt(v6);
    v8 = v7 + 32 * v5;
    if ( v7 >= 0x20 )
    {
      LODWORD(v31) = 32;
      LODWORD(v30) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    if ( (v6 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v6 &= ~(0x80000000 >> v7);
    v35 = v6;
    v9 = &s_CG_ClientModel_Physics_RuntimeData[v3][v8];
    v37 = v9;
    if ( (v9->physicsInstances[0] == -1 || !Physics_IsRigidBodyValid(v2, v9->primaryBody)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 844, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[0] != 0xFFFFFFFF && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody ))", (const char *)&queryFormat, "runtimeData->physicsInstances[0] != PHYSICSINSTANCEID_INVALID && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody )") )
      __debugbreak();
    Pose = CG_ClientModel_GetPose((const LocalClientNum_t)v1, v8);
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 848, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( (*((_BYTE *)v9 + 12) & 1) != 0 )
    {
      if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !Pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Pose->origin.Get_origin, Pose);
      FunctionPointer_origin(&Pose->origin.origin.origin, &origin);
      if ( Pose->isPosePrecise )
      {
        _XMM0 = LODWORD(origin.v[0]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v15 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v15;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        origin.v[0] = *(float *)&_XMM2;
        _XMM0 = LODWORD(origin.v[1]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v15 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v15;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        origin.v[1] = *(float *)&_XMM2;
        _XMM0 = LODWORD(origin.v[2]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v15 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v15;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        origin.v[2] = *(float *)&_XMM2;
      }
      CG_ClientModel_SetPrevPose((const LocalClientNum_t)v1, v8, &origin, &Pose->angles);
      Physics_GetRigidBodyTransform(v2, v9->primaryBody, &origin, &orientation);
      QuatToAngles(&orientation, &Pose->angles);
      memset(&origin, 0, sizeof(origin));
    }
    m_buffer = v9->dynamicBoneMapping.m_data.m_buffer;
    v4 = v36;
    if ( m_buffer != &m_buffer[v9->dynamicBoneMapping.m_data.m_size] )
    {
      do
      {
        v26 = 1 - m_buffer->currentCache;
        if ( m_buffer->currentCache != 1 && v26 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 872, ASSERT_TYPE_ASSERT, "(newCache == 0 || newCache == 1)", (const char *)&queryFormat, "newCache == 0 || newCache == 1") )
          __debugbreak();
        bodyId = m_buffer->bodyId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v2 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v31) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v31) )
            __debugbreak();
        }
        if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v31) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v31) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v2 - 2) <= 5 )
        {
          LODWORD(v31) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v31) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v2 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v31) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v31) )
            __debugbreak();
        }
        if ( (unsigned int)v2 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v31) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v31) )
            __debugbreak();
        }
        if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v31) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v31) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld(v2)->world;
        if ( !world )
        {
          LODWORD(v31) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v31) )
            __debugbreak();
        }
        v29 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, bodyId);
        m_buffer->cachedPosition[v26].v[0] = 32.0 * v29[1].m[0].v[0];
        m_buffer->cachedPosition[v26].v[1] = 32.0 * v29[1].m[0].v[1];
        m_buffer->cachedPosition[v26].v[2] = 32.0 * v29[1].m[0].v[2];
        Axis34ToQuat(v29, &m_buffer->cachedOrientationAsQuat[v26]);
        m_buffer->currentCache = v26;
        ++m_buffer;
      }
      while ( m_buffer != &v37->dynamicBoneMapping.m_data.m_buffer[v37->dynamicBoneMapping.m_data.m_size] );
      LODWORD(v5) = v33;
      v6 = v35;
      v4 = v36;
      v3 = v38;
    }
    LODWORD(v1) = v34;
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    v33 = v5;
    if ( (unsigned int)v5 >= 0xC )
      break;
    v6 = v4->array[v5];
    if ( v6 )
      goto LABEL_12;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ClientModel_Physics_PreStepWorld
==============
*/
void CG_ClientModel_Physics_PreStepWorld(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  Physics_WorldId v2; 
  __int64 v3; 
  bitarray<384> *v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  char v9; 
  CG_ClientModel_Physics_RuntimeData *v10; 
  cpose_t *Pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v16; 
  char v26; 
  CG_ClientModel_Physics_OffsetMapping *m_buffer; 
  void (__fastcall *v28)(const vec4_t *, vec3_t *); 
  __int128 v32; 
  char v42; 
  CG_ClientModel_Physics_BoneMapping *v43; 
  int boneIndex; 
  char *Value; 
  int *v46; 
  _QWORD *v47; 
  char *v48; 
  __int64 v49; 
  unsigned __int64 v50; 
  ThreadContext CurrentThreadContext; 
  int *SkelBoneMatrix; 
  __int64 canWarp; 
  __int64 canWarpa; 
  __int64 updateBroadphaseIfWarping; 
  int boneIndices; 
  unsigned int v57; 
  LocalClientNum_t localClientNuma; 
  int v59; 
  Physics_WorldId worldId; 
  unsigned int clientModelIdx; 
  vec3_t position; 
  vec3_t origin; 
  bitarray<384> *v64; 
  __int64 v65; 
  CG_ClientModel_Physics_RuntimeData *v66; 
  __int64 v67; 
  vec3_t v68; 
  vec4_t quat; 
  vec4_t orientationAsQuat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 

  v67 = -2i64;
  v1 = localClientNum;
  localClientNuma = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Physics_PreStepWorld");
  if ( (unsigned int)v1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 722, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 723, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v2 = 3 * v1 + 3;
  worldId = v2;
  v3 = v1;
  v65 = v1;
  v4 = &s_CG_ClientModel_Physics_HasCGAuthData[v1];
  v64 = v4;
  LODWORD(v5) = 0;
  v59 = 0;
  v6 = v4->array[0];
  v57 = v4->array[0];
  while ( 1 )
  {
    if ( v6 )
    {
LABEL_12:
      v7 = __lzcnt(v6);
      v8 = v7 + 32 * v5;
      clientModelIdx = v8;
      if ( v7 >= 0x20 )
      {
        LODWORD(updateBroadphaseIfWarping) = 32;
        LODWORD(canWarp) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( (v6 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v57 = ~(0x80000000 >> v7) & v6;
      v9 = 1;
      LODWORD(v1) = localClientNuma;
      v3 = v65;
    }
    else
    {
      while ( 1 )
      {
        v5 = (unsigned int)(v5 + 1);
        v59 = v5;
        if ( (unsigned int)v5 >= 0xC )
          break;
        v6 = v4->array[v5];
        v57 = v6;
        if ( v6 )
          goto LABEL_12;
      }
      v9 = 0;
      v8 = clientModelIdx;
    }
    if ( !v9 )
      break;
    v10 = &s_CG_ClientModel_Physics_RuntimeData[v3][v8];
    v66 = v10;
    if ( (v10->physicsInstances[0] == -1 || !Physics_IsRigidBodyValid(v2, v10->primaryBody)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 737, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[0] != 0xFFFFFFFF && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody ))", (const char *)&queryFormat, "runtimeData->physicsInstances[0] != PHYSICSINSTANCEID_INVALID && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody )") )
      __debugbreak();
    if ( (*((_BYTE *)v10 + 12) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 738, ASSERT_TYPE_ASSERT, "(!runtimeData->primaryBodyIsDynamic)", (const char *)&queryFormat, "!runtimeData->primaryBodyIsDynamic") )
      __debugbreak();
    Pose = CG_ClientModel_GetPose((const LocalClientNum_t)v1, v8);
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 742, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( (*((_BYTE *)v10 + 12) & 2) != 0 )
    {
      AnglesToQuat(&Pose->angles, &quat);
      if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !Pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Pose->origin.Get_origin, Pose);
      FunctionPointer_origin(&Pose->origin.origin.origin, &position);
      if ( Pose->isPosePrecise )
      {
        _XMM0 = LODWORD(position.v[0]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v16 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v16;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        position.v[0] = *(float *)&_XMM2;
        _XMM0 = LODWORD(position.v[1]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v16 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v16;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        position.v[1] = *(float *)&_XMM2;
        _XMM0 = LODWORD(position.v[2]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v16 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v16;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        position.v[2] = *(float *)&_XMM2;
      }
      Physics_KeyframeRigidBodyTo(v2, v10->primaryBody, &position, &quat, 1.0, 1, 0, 0.0);
      memset(&position, 0, sizeof(position));
    }
    v26 = 0;
    m_buffer = v10->keyframedOffsetMapping.m_data.m_buffer;
    if ( m_buffer != &m_buffer[v10->keyframedOffsetMapping.m_data.m_size] )
    {
      do
      {
        if ( !v26 )
        {
          v26 = 1;
          if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          if ( !Pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          v28 = ObfuscateGetFunctionPointer_origin(Pose->origin.Get_origin, Pose);
          v28(&Pose->origin.origin.origin, &origin);
          if ( Pose->isPosePrecise )
          {
            _XMM0 = LODWORD(origin.v[0]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v32 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v32 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v32;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            origin.v[0] = *(float *)&_XMM2;
            _XMM0 = LODWORD(origin.v[1]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v32 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v32 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v32;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            origin.v[1] = *(float *)&_XMM2;
            _XMM0 = LODWORD(origin.v[2]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v32 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v32 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v32;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            origin.v[2] = *(float *)&_XMM2;
          }
          AnglesAndOriginToMatrix43(&Pose->angles, &origin, &result);
          memset(&origin, 0, sizeof(origin));
        }
        MatrixMultiply43(&m_buffer->rootOffset, &result, &out);
        AxisToQuat((const tmat33_t<vec3_t> *)&out, &orientationAsQuat);
        Physics_KeyframeRigidBodyTo(v2, m_buffer->bodyId, &out.m[3], &orientationAsQuat, 1.0, 1, 0, 0.0);
        ++m_buffer;
      }
      while ( m_buffer != &v10->keyframedOffsetMapping.m_data.m_buffer[v10->keyframedOffsetMapping.m_data.m_size] );
    }
    v42 = 0;
    v43 = v10->keyframedBoneMapping.m_data.m_buffer;
    LODWORD(v5) = v59;
    v6 = v57;
    LODWORD(v1) = localClientNuma;
    v4 = v64;
    v3 = localClientNuma;
    if ( v43 != &v43[v10->keyframedBoneMapping.m_data.m_size] )
    {
      do
      {
        if ( !v42 )
        {
          v42 = 1;
          CG_ClientModel_GetDObj(localClientNuma, clientModelIdx);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 803, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
            __debugbreak();
        }
        boneIndex = v43->boneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 86, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
          __debugbreak();
        Value = (char *)Sys_GetValue(0);
        v46 = (int *)(Value + 18936);
        if ( (unsigned int)(*((_DWORD *)Value + 4734) + 1) >= 3 )
        {
          LODWORD(updateBroadphaseIfWarping) = 3;
          LODWORD(canWarpa) = *((_DWORD *)Value + 4734) + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", canWarpa, updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( (unsigned int)++*v46 >= 3 )
        {
          LODWORD(updateBroadphaseIfWarping) = 3;
          LODWORD(canWarpa) = *v46;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", canWarpa, updateBroadphaseIfWarping) )
            __debugbreak();
        }
        v47 = Value + 2088;
        v48 = Value + 40;
        if ( *v47 < (unsigned __int64)v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
          __debugbreak();
        *v47 += 8i64;
        if ( *v47 >= (unsigned __int64)v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
          __debugbreak();
        *(_QWORD *)*v47 = v46;
        if ( *v47 <= (unsigned __int64)v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
          __debugbreak();
        v49 = *v46;
        v50 = __rdtsc();
        v46[v49 + 2] = v50;
        if ( Sys_HasValidCurrentThreadContext() )
          CurrentThreadContext = Sys_GetCurrentThreadContext();
        else
          CurrentThreadContext = THREAD_CONTEXT_COUNT;
        CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 421, NULL, 0);
        boneIndices = boneIndex;
        CG_DObjCalcBones(Pose, NULL, 1, &boneIndices);
        Profile_EndInternal(NULL);
        if ( DObjGetRotTransArray(NULL) )
          SkelBoneMatrix = (int *)DObjGetSkelBoneMatrix(NULL, boneIndex);
        else
          SkelBoneMatrix = NULL;
        boneIndices = *SkelBoneMatrix;
        if ( (boneIndices & 0x7F800000) == 2139095040 || (boneIndices = SkelBoneMatrix[1], (boneIndices & 0x7F800000) == 2139095040) || (boneIndices = SkelBoneMatrix[2], (boneIndices & 0x7F800000) == 2139095040) || (boneIndices = SkelBoneMatrix[3], (boneIndices & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 808, ASSERT_TYPE_ASSERT, "(!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] ))", (const char *)&queryFormat, "!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] )") )
            __debugbreak();
        }
        boneIndices = SkelBoneMatrix[4];
        if ( (boneIndices & 0x7F800000) == 2139095040 || (boneIndices = SkelBoneMatrix[5], (boneIndices & 0x7F800000) == 2139095040) || (boneIndices = SkelBoneMatrix[6], (boneIndices & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 809, ASSERT_TYPE_ASSERT, "(!IS_NAN( dobjMat->trans[0] ) && !IS_NAN( dobjMat->trans[1] ) && !IS_NAN( dobjMat->trans[2] ))", (const char *)&queryFormat, "!IS_NAN( dobjMat->trans[0] ) && !IS_NAN( dobjMat->trans[1] ) && !IS_NAN( dobjMat->trans[2] )") )
            __debugbreak();
        }
        v68.v[0] = *((float *)SkelBoneMatrix + 4) + g_activeRefDef->viewOffset.v[0];
        v68.v[1] = *((float *)SkelBoneMatrix + 5) + g_activeRefDef->viewOffset.v[1];
        v68.v[2] = *((float *)SkelBoneMatrix + 6) + g_activeRefDef->viewOffset.v[2];
        Physics_KeyframeRigidBodyTo(worldId, v43->bodyId, &v68, (const vec4_t *)SkelBoneMatrix, 1.0, 1, 0, 0.0);
        ++v43;
      }
      while ( v43 != &v66->keyframedBoneMapping.m_data.m_buffer[v66->keyframedBoneMapping.m_data.m_size] );
      LODWORD(v5) = v59;
      v6 = v57;
      LODWORD(v1) = localClientNuma;
      v4 = v64;
      v3 = v65;
    }
    v2 = worldId;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ClientModel_Physics_PropagateToDetailWorld
==============
*/
void CG_ClientModel_Physics_PropagateToDetailWorld(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bitarray<384> *v2; 
  int v3; 
  __int64 v4; 
  Physics_WorldId v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  CG_ClientModel_Physics_RuntimeData *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int m_serialAndIndex; 
  unsigned int v14; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v16; 
  unsigned int v17; 
  hknpBodyId *RigidBodyID; 
  int v19; 
  hknpBodyId v20; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v22; 
  float v23; 
  float v24; 
  float v25; 
  __int64 activate; 
  __int64 v33; 
  int v34; 
  unsigned int v35; 
  unsigned int NumRigidBodys; 
  unsigned int v37; 
  bitarray<384> *v38; 
  __int64 v39; 
  hknpBodyId result; 
  hknpBodyId v41; 
  hknpBodyId v42; 
  hknpBodyId v43; 
  vec4_t out; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Physics_PropagateToDetailWorld");
  if ( (unsigned int)v1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 950, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 951, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v39 = v1;
  v2 = &s_CG_ClientModel_Physics_NeedsPropagation[v1];
  v3 = 3 * v1 + 3;
  LODWORD(v4) = 0;
  v38 = v2;
  v5 = 3 * v1 + 4;
  v34 = 0;
  v6 = v1;
  v7 = v2->array[0];
  while ( v7 )
  {
LABEL_12:
    v8 = __lzcnt(v7);
    v9 = v8 + 32 * v4;
    if ( v8 >= 0x20 )
    {
      LODWORD(v33) = 32;
      LODWORD(activate) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", activate, v33) )
        __debugbreak();
    }
    if ( (v7 & (0x80000000 >> v8)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v7 &= ~(0x80000000 >> v8);
    v35 = v7;
    v10 = &s_CG_ClientModel_Physics_RuntimeData[v6][v9];
    v11 = v10->physicsInstances[0];
    v12 = v10->physicsInstances[1];
    v37 = v12;
    if ( v10->physicsInstances[0] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 970, ASSERT_TYPE_ASSERT, "(physicsInstanceFrom != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstanceFrom != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( v12 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 971, ASSERT_TYPE_ASSERT, "(physicsInstanceTo != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstanceTo != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    NumRigidBodys = Physics_GetNumRigidBodys(v5, v12);
    if ( !NumRigidBodys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 974, ASSERT_TYPE_ASSERT, "(numDetailBodies > 0)", (const char *)&queryFormat, "numDetailBodies > 0") )
      __debugbreak();
    if ( Physics_IsInstanceDetailBounded(v5, v12) )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v3 > 7 )
      {
        LODWORD(v33) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
          __debugbreak();
      }
      if ( v11 == -1 )
      {
        LODWORD(v33) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v33) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
      {
        LODWORD(v33) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v33) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
      {
        LODWORD(v33) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v33) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v3, v11, 0)->m_serialAndIndex;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v33) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
          __debugbreak();
      }
      if ( v12 == -1 )
      {
        LODWORD(v33) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v33) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(v33) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v33) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v33) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v33) )
          __debugbreak();
      }
      v14 = HavokPhysics_GetRigidBodyID(&v41, v5, v12, NumRigidBodys - 1)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 982, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( fromBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( fromBodyId )") )
        __debugbreak();
      if ( (v14 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 983, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( toBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( toBodyId )") )
        __debugbreak();
      Physics_GetRigidBodyTransform((const Physics_WorldId)v3, m_serialAndIndex, &v10->detailCache.position, &v10->detailCache.orientationAsQuat);
      v10->detailCache.cached = 0;
      Physics_WarpRigidBodyTo(v5, v14, &v10->detailCache.position, &v10->detailCache.orientationAsQuat, 0, 0);
      LODWORD(v4) = v34;
      v2 = v38;
      v7 = v35;
      goto LABEL_8;
    }
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v3 > 7 )
    {
      LODWORD(v33) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
        __debugbreak();
    }
    if ( v11 == -1 )
    {
      LODWORD(v33) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v33) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
    {
      LODWORD(v33) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v33) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      if ( v3 < 0 )
        goto LABEL_88;
      if ( v3 <= 1 )
      {
        LODWORD(v33) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v33) )
          __debugbreak();
      }
    }
    if ( (unsigned int)v3 > 7 )
    {
LABEL_88:
      LODWORD(v33) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
        __debugbreak();
    }
    if ( v11 == -1 )
    {
      LODWORD(v33) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v33) )
        __debugbreak();
    }
    ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v3);
    if ( !ConstWorld->world )
    {
      LODWORD(v33) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v33) )
        __debugbreak();
    }
    if ( NumRigidBodys != HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 996, ASSERT_TYPE_ASSERT, "( numDetailBodies == Physics_GetNumRigidBodys( clientAuthWorldId, physicsInstanceFrom ) )", (const char *)&queryFormat, "numDetailBodies == Physics_GetNumRigidBodys( clientAuthWorldId, physicsInstanceFrom )") )
      __debugbreak();
    LODWORD(v4) = v34;
    v2 = v38;
    v16 = 0;
    if ( NumRigidBodys )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v3 > 7 )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
            __debugbreak();
        }
        if ( v11 == -1 )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v33) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v33) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v33) )
            __debugbreak();
        }
        v17 = HavokPhysics_GetRigidBodyID(&v42, (const Physics_WorldId)v3, v11, v16)->m_serialAndIndex;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v5 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v33) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
            __debugbreak();
        }
        if ( v12 == -1 )
        {
          LODWORD(v33) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v33) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
        {
          LODWORD(v33) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v33) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v33) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v33) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&v43, v5, v12, v16);
        v19 = v17 & 0xFFFFFF;
        v20.m_serialAndIndex = RigidBodyID->m_serialAndIndex;
        if ( (v17 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 1004, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( fromBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( fromBodyId )") )
          __debugbreak();
        if ( (v20.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 1005, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( toBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( toBodyId )") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v3 > 7 )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
            __debugbreak();
        }
        if ( v19 == 0xFFFFFF )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v33) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v33) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v33) )
            __debugbreak();
        }
        if ( (unsigned int)v3 > 7 )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
            __debugbreak();
        }
        if ( v19 == 0xFFFFFF )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v33) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld((Physics_WorldId)v3)->world;
        if ( !world )
        {
          LODWORD(v33) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v33) )
            __debugbreak();
        }
        v22 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, v17);
        v23 = 32.0 * v22[1].m[0].v[0];
        v24 = 32.0 * v22[1].m[0].v[1];
        v25 = 32.0 * v22[1].m[0].v[2];
        Axis34ToQuat(v22, &out);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v5 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v33) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
            __debugbreak();
        }
        if ( (v20.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v33) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v33) )
            __debugbreak();
        }
        if ( ((LODWORD(v23) & 0x7F800000) == 2139095040 || (LODWORD(v24) & 0x7F800000) == 2139095040 || (LODWORD(v25) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
          __debugbreak();
        if ( ((LODWORD(out.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
          __debugbreak();
        _XMM5 = LODWORD(out.v[0]);
        __asm
        {
          vinsertps xmm5, xmm5, dword ptr [rsp+148h+out+4], 10h
          vinsertps xmm5, xmm5, dword ptr [rsp+148h+out+8], 20h
          vinsertps xmm5, xmm5, dword ptr [rsp+148h+out+0Ch], 30h
        }
        hkPosition.m_quad.m128_f32[0] = v23 * 0.03125;
        hkPosition.m_quad.m128_f32[2] = v25 * 0.03125;
        __asm
        {
          vdpps   xmm0, xmm5, xmm5, 0FFh
          vrsqrtps xmm4, xmm0
        }
        hkPosition.m_quad.m128_f32[1] = v24 * 0.03125;
        hkOrientation.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
        hkPosition.m_quad.m128_f32[3] = 0.0;
        HavokPhysics_WarpRigidBodyTo(v5, v20, &hkPosition, &hkOrientation, 0, 0);
        v12 = v37;
        ++v16;
      }
      while ( v16 < NumRigidBodys );
      LODWORD(v4) = v34;
      v7 = v35;
      v2 = v38;
    }
LABEL_8:
    v6 = v39;
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    v34 = v4;
    if ( (unsigned int)v4 >= 0xC )
      break;
    v7 = v2->array[v4];
    if ( v7 )
      goto LABEL_12;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ClientModel_Physics_SetupBoneMappings
==============
*/
void CG_ClientModel_Physics_SetupBoneMappings(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, CG_ClientModel_Physics_RuntimeData *runtimeData, const DObj *dobj, const PhysicsAsset *physAsset)
{
  char v7; 
  LocalClientNum_t v8; 
  int v9; 
  signed int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  PhysicsAsset *v15; 
  unsigned int v16; 
  unsigned int m_serialAndIndex; 
  unsigned __int64 v18; 
  __int64 v19; 
  CG_ClientModel_Physics_CachedBoneMapping *m_buffer; 
  unsigned __int64 v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned int v29; 
  bitarray<384> *v30; 
  PhysicsAsset *v31; 
  DObj *v32; 
  unsigned __int8 BoneIndex; 
  vec4_t *cachedOrientationAsQuat; 
  __int64 v35; 
  bitarray<384> *v36; 
  unsigned int v37; 
  PhysicsAsset *v38; 
  unsigned __int8 v39; 
  unsigned int v40; 
  unsigned __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  int v47; 
  int NumRigidBodys; 
  char v49; 
  int bodyIdx; 
  hknpBodyId v51; 
  PhysicsAsset *physicsAsset; 
  unsigned __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  DObj *dobja; 
  unsigned __int64 v57; 
  hknpBodyId v58; 
  vec3_t position; 
  vec3_t origin; 
  vec4_t orientation; 
  vec4_t quat; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in1; 

  physicsAsset = (PhysicsAsset *)physAsset;
  dobja = (DObj *)dobj;
  v7 = clientModelIdx;
  v8 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 215, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !runtimeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 216, ASSERT_TYPE_ASSERT, "(runtimeData)", (const char *)&queryFormat, "runtimeData") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 217, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !physAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 218, ASSERT_TYPE_ASSERT, "(physAsset)", (const char *)&queryFormat, "physAsset") )
    __debugbreak();
  v9 = 3 * v8 + 3;
  if ( (runtimeData->physicsInstances[0] == -1 || !Physics_IsRigidBodyValid((Physics_WorldId)v9, runtimeData->primaryBody)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 224, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[0] != 0xFFFFFFFF && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody ))", (const char *)&queryFormat, "runtimeData->physicsInstances[0] != PHYSICSINSTANCEID_INVALID && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody )") )
    __debugbreak();
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v9, runtimeData->physicsInstances[0]);
  Physics_GetRigidBodyTransform((const Physics_WorldId)v9, runtimeData->primaryBody, &position, &orientation);
  QuatAndOriginToMatrix43(&orientation, &position, &result);
  MatrixInverseOrthogonal43(&result, &out);
  v10 = 1;
  bodyIdx = 1;
  v11 = NumRigidBodys;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( NumRigidBodys > 1 )
  {
    v15 = physicsAsset;
    do
    {
      v16 = runtimeData->physicsInstances[0];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v9 > 7 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
          __debugbreak();
      }
      if ( v16 == -1 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v42) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v51, (const Physics_WorldId)v9, v16, v10)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 246, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v9, m_serialAndIndex) )
      {
        ++v12;
      }
      else if ( !Physics_IsRigidBodyStatic((Physics_WorldId)v9, m_serialAndIndex) )
      {
        if ( Physics_IsAssetBodyAnimationDriven(v15, v10) )
          ++v13;
        else
          ++v14;
      }
      ++v10;
    }
    while ( v10 < NumRigidBodys );
    v8 = localClientNum;
    if ( v12 > 0 )
    {
      if ( runtimeData->dynamicBoneMapping.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
        __debugbreak();
      if ( !ntl::static_shared_allocator<CG_ClientModel_Physics_CachedBoneMappingAllocator,ntl::fixed_heap_allocator<52224,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
        __debugbreak();
      runtimeData->dynamicBoneMapping.m_data.m_buffer = (CG_ClientModel_Physics_CachedBoneMapping *)ntl::nxheap::allocate(&ntl::static_shared_allocator<CG_ClientModel_Physics_CachedBoneMappingAllocator,ntl::fixed_heap_allocator<52224,0>>::mp_allocator->m_heap, 68i64 * v12, 4ui64, 1);
      runtimeData->dynamicBoneMapping.m_data.m_size = v12;
      v18 = 0i64;
      v19 = 0i64;
      do
      {
        if ( v18 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
        m_buffer = runtimeData->dynamicBoneMapping.m_data.m_buffer;
        ++v18;
        m_buffer[v19].bodyId = 0xFFFFFF;
        m_buffer[v19].boneIndex = 0;
        *(_QWORD *)m_buffer[v19].cachedPosition[0].v = 0i64;
        *(_QWORD *)&m_buffer[v19].cachedPosition[0].z = 0i64;
        *(_QWORD *)&m_buffer[v19].cachedPosition[1].y = 0i64;
        m_buffer[v19].cachedOrientationAsQuat[0] = quat_identity;
        m_buffer[v19].cachedOrientationAsQuat[1] = quat_identity;
        m_buffer[v19++].currentCache = 0;
      }
      while ( v18 < v12 );
      v8 = localClientNum;
    }
    if ( v13 > 0 )
      ntl::array<CG_ClientModel_Physics_BoneMapping,CG_ClientModel_Physics_BoneMappingAllocator>::reserve(&runtimeData->keyframedBoneMapping, v13);
    if ( v14 > 0 )
    {
      if ( runtimeData->keyframedOffsetMapping.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
        __debugbreak();
      if ( !ntl::static_shared_allocator<CG_ClientModel_Physics_OffsetMappingAllocator,ntl::fixed_heap_allocator<39936,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
        __debugbreak();
      v21 = 0i64;
      runtimeData->keyframedOffsetMapping.m_data.m_buffer = (CG_ClientModel_Physics_OffsetMapping *)ntl::nxheap::allocate(&ntl::static_shared_allocator<CG_ClientModel_Physics_OffsetMappingAllocator,ntl::fixed_heap_allocator<39936,0>>::mp_allocator->m_heap, 52i64 * v14, 4ui64, 1);
      runtimeData->keyframedOffsetMapping.m_data.m_size = v14;
      v22 = 0i64;
      do
      {
        if ( v21 >= runtimeData->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
        ++v21;
        runtimeData->keyframedOffsetMapping.m_data.m_buffer[v22++].bodyId = 0xFFFFFF;
      }
      while ( v21 < v14 );
      v8 = localClientNum;
    }
    v7 = clientModelIdx;
    v11 = NumRigidBodys;
  }
  v47 = 0;
  v51.m_serialAndIndex = 0;
  if ( v11 > 1 )
  {
    v23 = 0i64;
    v57 = 0i64;
    v49 = v7 & 0x1F;
    v24 = 0i64;
    v25 = v8;
    v26 = 0i64;
    v27 = 0i64;
    v55 = v25;
    v54 = 0i64;
    v53 = 0i64;
    do
    {
      v28 = runtimeData->physicsInstances[0];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v9 > 7 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
          __debugbreak();
      }
      if ( v28 == -1 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v42) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
          __debugbreak();
      }
      v29 = HavokPhysics_GetRigidBodyID(&v58, (const Physics_WorldId)v9, v28, bodyIdx)->m_serialAndIndex;
      if ( (v29 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 288, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v9, v29) )
      {
        v30 = &s_CG_ClientModel_Physics_HasPhysAuthData[v55];
        if ( clientModelIdx >= 0x180 )
        {
          LODWORD(v44) = 384;
          LODWORD(v43) = clientModelIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v43, v44) )
            __debugbreak();
        }
        v31 = physicsAsset;
        v32 = dobja;
        v30->array[(unsigned __int64)clientModelIdx >> 5] |= 0x80000000 >> v49;
        BoneIndex = CG_ClientModel_Physics_FindBoneIndex((Physics_WorldId)v9, v29, v32, v31);
        if ( v24 >= runtimeData->dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v24 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        *(unsigned int *)((char *)&runtimeData->dynamicBoneMapping.m_data.m_buffer->bodyId + v27) = v29;
        if ( v24 >= runtimeData->dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v24 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        *(&runtimeData->dynamicBoneMapping.m_data.m_buffer->boneIndex + v27) = BoneIndex;
        if ( v47 >= runtimeData->dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v47 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        cachedOrientationAsQuat = runtimeData->dynamicBoneMapping.m_data.m_buffer[v47].cachedOrientationAsQuat;
        if ( v47 >= runtimeData->dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v47 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        Physics_GetRigidBodyTransform((const Physics_WorldId)v9, v29, runtimeData->dynamicBoneMapping.m_data.m_buffer[v47].cachedPosition, cachedOrientationAsQuat);
        if ( v24 >= runtimeData->dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v24 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v35 = v54;
        ++v24;
        ++v47;
        v23 = v57;
        *(float *)((char *)runtimeData->dynamicBoneMapping.m_data.m_buffer->cachedOrientationAsQuat[2].v + v54) = 0.0;
        v27 = v35 + 68;
        v54 = v27;
      }
      else if ( !Physics_IsRigidBodyStatic((Physics_WorldId)v9, v29) )
      {
        v36 = &s_CG_ClientModel_Physics_HasCGAuthData[v55];
        v37 = clientModelIdx;
        if ( clientModelIdx >= 0x180 )
        {
          LODWORD(v44) = 384;
          LODWORD(v43) = clientModelIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v43, v44) )
            __debugbreak();
          v37 = clientModelIdx;
        }
        v36->array[(unsigned __int64)v37 >> 5] |= 0x80000000 >> v49;
        v38 = physicsAsset;
        if ( Physics_IsAssetBodyAnimationDriven(physicsAsset, bodyIdx) )
        {
          v39 = CG_ClientModel_Physics_FindBoneIndex((Physics_WorldId)v9, v29, dobja, v38);
          if ( v26 >= runtimeData->keyframedBoneMapping.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v26 >= runtimeData->keyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          runtimeData->keyframedBoneMapping.m_data.m_buffer[v26].bodyId = v29;
          if ( v26 >= runtimeData->keyframedBoneMapping.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v26 >= runtimeData->keyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          runtimeData->keyframedBoneMapping.m_data.m_buffer[v26++].boneIndex = v39;
        }
        else
        {
          Physics_GetRigidBodyTransform((const Physics_WorldId)v9, v29, &origin, &quat);
          QuatAndOriginToMatrix43(&quat, &origin, &in1);
          if ( v23 >= runtimeData->keyframedOffsetMapping.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v23 >= runtimeData->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          runtimeData->keyframedOffsetMapping.m_data.m_buffer[v53 / 0x34].bodyId = v29;
          v40 = v51.m_serialAndIndex;
          v41 = (int)v51.m_serialAndIndex;
          if ( (int)v51.m_serialAndIndex >= runtimeData->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v41 >= runtimeData->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
          MatrixMultiply43(&in1, &out, &runtimeData->keyframedOffsetMapping.m_data.m_buffer[v41].rootOffset);
          ++v23;
          v53 += 52i64;
          v51.m_serialAndIndex = v40 + 1;
          v57 = v23;
        }
      }
      ++bodyIdx;
    }
    while ( bodyIdx < NumRigidBodys );
  }
}

/*
==============
CG_ClientModel_Physics_SetupDetailBoneMapping
==============
*/
void CG_ClientModel_Physics_SetupDetailBoneMapping(const LocalClientNum_t localClientNum, CG_ClientModel_Physics_RuntimeData *runtimeData, const DObj *dobj, const PhysicsAsset *physAsset)
{
  const PhysicsAsset *v4; 
  unsigned int v8; 
  __int32 v9; 
  signed int v10; 
  signed __int64 v11; 
  unsigned int v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  unsigned int m_serialAndIndex; 
  unsigned __int8 BoneIndex; 
  __int64 v17; 
  hknpBodyId result; 
  DObj *dobja; 
  const PhysicsAsset *v20; 

  v20 = physAsset;
  dobja = (DObj *)dobj;
  v4 = physAsset;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 345, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !runtimeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 346, ASSERT_TYPE_ASSERT, "(runtimeData)", (const char *)&queryFormat, "runtimeData") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 347, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 348, ASSERT_TYPE_ASSERT, "(physAsset)", (const char *)&queryFormat, "physAsset") )
    __debugbreak();
  v8 = runtimeData->physicsInstances[1];
  v9 = 3 * localClientNum + 4;
  if ( (v8 == -1 || !Physics_IsInstanceDetailBounded((const Physics_WorldId)v9, v8)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 354, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[1] != 0xFFFFFFFF && Physics_IsInstanceDetailBounded( clientDetailWorldId, runtimeData->physicsInstances[1] ))", (const char *)&queryFormat, "runtimeData->physicsInstances[1] != PHYSICSINSTANCEID_INVALID && Physics_IsInstanceDetailBounded( clientDetailWorldId, runtimeData->physicsInstances[1] )") )
    __debugbreak();
  v10 = Physics_GetNumRigidBodys((const Physics_WorldId)v9, runtimeData->physicsInstances[1]) - 1;
  if ( v10 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 359, ASSERT_TYPE_ASSERT, "(numBoundBodies >= 1)", (const char *)&queryFormat, "numBoundBodies >= 1") )
    __debugbreak();
  v11 = v10;
  ntl::array<CG_ClientModel_Physics_BoneMapping,CG_ClientModel_Physics_BoneMappingAllocator>::reserve(&runtimeData->detailBoneMapping, v10);
  v12 = 0;
  if ( v10 > 0 )
  {
    v13 = 0i64;
    do
    {
      v14 = runtimeData->physicsInstances[1];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v9 > 7 )
      {
        LODWORD(v17) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v17) )
          __debugbreak();
      }
      if ( v14 == -1 )
      {
        LODWORD(v17) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v17) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
      {
        LODWORD(v17) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v17) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
      {
        LODWORD(v17) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v17) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v9, v14, v12)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 369, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      BoneIndex = CG_ClientModel_Physics_FindBoneIndex((Physics_WorldId)v9, m_serialAndIndex, dobja, v4);
      if ( v13 >= runtimeData->detailBoneMapping.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v13 >= runtimeData->detailBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      runtimeData->detailBoneMapping.m_data.m_buffer[v13].bodyId = m_serialAndIndex;
      if ( v13 >= runtimeData->detailBoneMapping.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v13 >= runtimeData->detailBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      ++v12;
      runtimeData->detailBoneMapping.m_data.m_buffer[v13++].boneIndex = BoneIndex;
      v4 = v20;
    }
    while ( (__int64)v13 < v11 );
  }
}

/*
==============
CG_ClientModel_Physics_SetupModel
==============
*/
void CG_ClientModel_Physics_SetupModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v3; 
  CG_ClientModel_Physics_RuntimeData *v4; 
  const XModel *Model; 
  const PhysicsAsset *physicsAsset; 
  DObj *v7; 
  cpose_t *v8; 
  unsigned __int16 v9; 
  int Ref; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int RigidBodyID; 
  char v15; 
  char v16; 
  char v17; 
  __int64 v18; 
  bitarray<384> *v19; 
  DObj *v20; 
  char v21; 
  Physics_WorldId v22; 
  Physics_WorldId worldId; 
  vec3_t outOrigin; 
  cpose_t *pose; 
  DObj *dobj; 
  Physics_InstantiateShapeOverride shapeOverride; 
  Physics_InstantiateShapeOverride v28; 
  __int64 v29; 
  vec4_t quat; 

  v29 = -2i64;
  v2 = clientModelIdx;
  v3 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 397, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 398, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v2 >= CG_ClientModel_GetCount((const LocalClientNum_t)v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 399, ASSERT_TYPE_ASSERT, "(clientModelIdx < CG_ClientModel_GetCount( localClientNum ))", (const char *)&queryFormat, "clientModelIdx < CG_ClientModel_GetCount( localClientNum )") )
    __debugbreak();
  if ( !CG_ClientModel_IsLoaded((const LocalClientNum_t)v3, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 400, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsLoaded( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( CG_ClientModel_NoPhysics((const LocalClientNum_t)v3, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 401, ASSERT_TYPE_ASSERT, "(!CG_ClientModel_NoPhysics( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "!CG_ClientModel_NoPhysics( localClientNum, clientModelIdx )") )
    __debugbreak();
  worldId = 3 * v3 + 3;
  v22 = 3 * v3 + 4;
  v4 = &s_CG_ClientModel_Physics_RuntimeData[v3][v2];
  if ( (v4->physicsInstances[0] != -1 || Physics_IsRigidBodyValid((Physics_WorldId)(3 * v3 + 3), v4->primaryBody)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 409, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[0] == 0xFFFFFFFF && !Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody ))", (const char *)&queryFormat, "runtimeData->physicsInstances[0] == PHYSICSINSTANCEID_INVALID && !Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody )") )
    __debugbreak();
  if ( v4->physicsInstances[1] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 410, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[1] == 0xFFFFFFFF)", (const char *)&queryFormat, "runtimeData->physicsInstances[1] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( v4->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 411, ASSERT_TYPE_ASSERT, "(runtimeData->dynamicBoneMapping.size() == 0)", (const char *)&queryFormat, "runtimeData->dynamicBoneMapping.size() == 0") )
    __debugbreak();
  if ( v4->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 412, ASSERT_TYPE_ASSERT, "(runtimeData->keyframedOffsetMapping.size() == 0)", (const char *)&queryFormat, "runtimeData->keyframedOffsetMapping.size() == 0") )
    __debugbreak();
  if ( v4->keyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 413, ASSERT_TYPE_ASSERT, "(runtimeData->keyframedBoneMapping.size() == 0)", (const char *)&queryFormat, "runtimeData->keyframedBoneMapping.size() == 0") )
    __debugbreak();
  if ( v4->detailBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 414, ASSERT_TYPE_ASSERT, "(runtimeData->detailBoneMapping.size() == 0)", (const char *)&queryFormat, "runtimeData->detailBoneMapping.size() == 0") )
    __debugbreak();
  if ( v4->detailCache.cached && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 415, ASSERT_TYPE_ASSERT, "(runtimeData->detailCache.cached == false)", (const char *)&queryFormat, "runtimeData->detailCache.cached == false") )
    __debugbreak();
  Model = CG_ClientModel_GetModel((const LocalClientNum_t)v3, v2, 0);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 419, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  physicsAsset = Model->physicsAsset;
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 421, ASSERT_TYPE_ASSERT, "(physAsset)", (const char *)&queryFormat, "physAsset") )
    __debugbreak();
  pose = CG_ClientModel_GetPose((const LocalClientNum_t)v3, v2);
  v7 = CG_ClientModel_GetDObj((const LocalClientNum_t)v3, v2);
  dobj = v7;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 426, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 427, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v8 = pose;
  CG_GetPoseOrigin(pose, &outOrigin);
  AnglesToQuat(&v8->angles, &quat);
  if ( (unsigned int)v2 >= 0x7FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 436, ASSERT_TYPE_ASSERT, "(clientModelIdx >= 0 && clientModelIdx < 32767)", "%s\n\tIndex Number truncated to a short here - but it doesn't fit", "clientModelIdx >= 0 && clientModelIdx < 32767") )
    __debugbreak();
  v9 = truncate_cast<unsigned short,unsigned int>(v2);
  Ref = Physics_MakeRef(Physics_RefSystem_CModels, Physics_RelationshipSystem_None, 0, v9);
  shapeOverride.customShape = NULL;
  shapeOverride.shapeOverride = -1;
  shapeOverride.physicsAssetAddendum = NULL;
  shapeOverride.shapeAddendum = -1;
  shapeOverride.massProperties = NULL;
  *(_WORD *)&shapeOverride.overrideMass = 0;
  shapeOverride.overrideTensor = 0;
  v28.customShape = NULL;
  v28.shapeOverride = -1;
  v28.physicsAssetAddendum = NULL;
  v28.shapeAddendum = -1;
  v28.massProperties = NULL;
  *(_WORD *)&v28.overrideMass = 0;
  v28.overrideTensor = 0;
  v11 = Physics_InstantiateAsset(worldId, Model, physicsAsset, Ref, &outOrigin, &quat, 1, 0, 1, &shapeOverride, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeClientSimulation, 0);
  v4->physicsInstances[0] = v11;
  if ( v11 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 453, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[0] != 0xFFFFFFFF)", (const char *)&queryFormat, "runtimeData->physicsInstances[0] != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  ++physicsAsset->usageCounter.clientEnt;
  if ( Model->detailCollision )
  {
    v12 = Physics_InstantiateDetailModel(v22, Model, Ref, &outOrigin, &quat, 1, 1, 0, 0);
    v4->physicsInstances[1] = v12;
    if ( v12 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 459, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[1] != 0xFFFFFFFF)", (const char *)&queryFormat, "runtimeData->physicsInstances[1] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    ++Model->physicsUsageCounter.clientEnt;
  }
  else
  {
    v13 = Physics_InstantiateAsset(v22, Model, physicsAsset, Ref, &outOrigin, &quat, 1, 0, 1, &v28, Physics_InstantiationForceTypeStatic, Physics_InstantiationFilterTypeNone, 0);
    v4->physicsInstances[1] = v13;
    if ( v13 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 467, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[1] != 0xFFFFFFFF)", (const char *)&queryFormat, "runtimeData->physicsInstances[1] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
  }
  RigidBodyID = Physics_GetRigidBodyID(worldId, v4->physicsInstances[0], 0);
  v4->primaryBody = RigidBodyID;
  if ( !Physics_IsRigidBodyValid(worldId, RigidBodyID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 472, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody )") )
    __debugbreak();
  v15 = *((_BYTE *)v4 + 12) ^ (*((_BYTE *)v4 + 12) ^ Physics_IsRigidBodyDynamic(worldId, v4->primaryBody)) & 1;
  *((_BYTE *)v4 + 12) = v15;
  if ( (v15 & 1) != 0 || Physics_IsRigidBodyStatic(worldId, v4->primaryBody) )
    v16 = 0;
  else
    v16 = 2;
  v17 = v16 | *((_BYTE *)v4 + 12) & 0xFD;
  *((_BYTE *)v4 + 12) = v17;
  if ( (v17 & 1) != 0 )
  {
    v18 = v3;
    v19 = &s_CG_ClientModel_Physics_HasPhysAuthData[v3];
  }
  else
  {
    if ( (v17 & 2) == 0 )
      goto LABEL_76;
    v18 = v3;
    v19 = &s_CG_ClientModel_Physics_HasCGAuthData[v3];
  }
  bitarray_base<bitarray<384>>::setBit(v19, v2);
  bitarray_base<bitarray<384>>::setBit(&s_CG_ClientModel_Physics_NeedsPropagation[v18], v2);
LABEL_76:
  v20 = dobj;
  CG_ClientModel_Physics_SetupBoneMappings((const LocalClientNum_t)v3, v2, v4, dobj, physicsAsset);
  if ( (*((_BYTE *)v4 + 12) & 1) != 0 )
  {
    if ( v4->keyframedOffsetMapping.m_data.m_size )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442E7320, 280i64, (unsigned int)v2, Model->name);
    if ( v4->keyframedBoneMapping.m_data.m_size )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442E73B0, 281i64, (unsigned int)v2, Model->name);
  }
  if ( Physics_IsInstanceDetailBounded(v22, v4->physicsInstances[1]) )
  {
    CG_ClientModel_Physics_SetupDetailBoneMapping((const LocalClientNum_t)v3, v4, v20, physicsAsset);
  }
  else
  {
    v21 = *((_BYTE *)v4 + 12);
    if ( (v21 & 1) == 0 && (v21 & 2) != 0 && (v4->dynamicBoneMapping.m_data.m_size || v4->keyframedOffsetMapping.m_data.m_size || v4->keyframedBoneMapping.m_data.m_size) )
      bitarray_base<bitarray<384>>::setBit(&s_CG_ClientModel_Physics_NeedsPropagation[v3], v2);
  }
  v4->detailCache.position = outOrigin;
  v4->detailCache.orientationAsQuat = quat;
  v4->detailCache.cached = 0;
  pose->physicsId = v2 + 2118;
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_ClientModel_Physics_Shutdown
==============
*/
void CG_ClientModel_Physics_Shutdown(const LocalClientNum_t localClientNum)
{
  int v1; 
  unsigned int v2; 
  __int64 v3; 
  bitarray<384> *v4; 
  unsigned int v5; 
  bitarray<384> *v6; 
  bitarray<384> *i; 

  v1 = 0;
  v2 = 0;
  v3 = localClientNum;
  v4 = &s_CG_ClientModel_Physics_NeedsPropagation[localClientNum];
  while ( !v4->array[0] )
  {
    ++v2;
    v4 = (bitarray<384> *)((char *)v4 + 4);
    if ( v2 >= 0xC )
      goto LABEL_7;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 171, ASSERT_TYPE_ASSERT, "(s_CG_ClientModel_Physics_NeedsPropagation[localClientNum].noBitsOn())", (const char *)&queryFormat, "s_CG_ClientModel_Physics_NeedsPropagation[localClientNum].noBitsOn()") )
    __debugbreak();
LABEL_7:
  v5 = 0;
  v6 = &s_CG_ClientModel_Physics_HasPhysAuthData[v3];
  while ( !v6->array[0] )
  {
    ++v5;
    v6 = (bitarray<384> *)((char *)v6 + 4);
    if ( v5 >= 0xC )
      goto LABEL_13;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 172, ASSERT_TYPE_ASSERT, "(s_CG_ClientModel_Physics_HasPhysAuthData[localClientNum].noBitsOn())", (const char *)&queryFormat, "s_CG_ClientModel_Physics_HasPhysAuthData[localClientNum].noBitsOn()") )
    __debugbreak();
LABEL_13:
  for ( i = &s_CG_ClientModel_Physics_HasCGAuthData[v3]; !i->array[0]; i = (bitarray<384> *)((char *)i + 4) )
  {
    if ( (unsigned int)++v1 >= 0xC )
      return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 173, ASSERT_TYPE_ASSERT, "(s_CG_ClientModel_Physics_HasCGAuthData[localClientNum].noBitsOn())", (const char *)&queryFormat, "s_CG_ClientModel_Physics_HasCGAuthData[localClientNum].noBitsOn()") )
    __debugbreak();
}

/*
==============
CG_ClientModel_Physics_ShutdownModel
==============
*/
void CG_ClientModel_Physics_ShutdownModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  unsigned __int64 v3; 
  CG_ClientModel_Physics_RuntimeData *v4; 
  const XModel *Model; 
  cpose_t *Pose; 
  unsigned __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  bitarray<384> *v10; 
  unsigned __int64 i; 
  CG_ClientModel_Physics_OffsetMapping *m_buffer; 
  unsigned __int64 j; 
  CG_ClientModel_Physics_CachedBoneMapping *v14; 
  __int64 v15; 
  __int64 v16; 
  Physics_WorldId worldId; 
  Physics_WorldId v18; 
  PhysicsAsset *physicsAsset; 

  v2 = localClientNum;
  v3 = clientModelIdx;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 551, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 552, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v3 >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 553, ASSERT_TYPE_ASSERT, "(clientModelIdx < CG_ClientModel_GetCount( localClientNum ))", (const char *)&queryFormat, "clientModelIdx < CG_ClientModel_GetCount( localClientNum )") )
    __debugbreak();
  if ( !CG_ClientModel_IsLoaded((const LocalClientNum_t)v2, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 554, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsLoaded( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( CG_ClientModel_NoPhysics((const LocalClientNum_t)v2, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 555, ASSERT_TYPE_ASSERT, "(!CG_ClientModel_NoPhysics( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "!CG_ClientModel_NoPhysics( localClientNum, clientModelIdx )") )
    __debugbreak();
  v18 = 3 * v2 + 3;
  worldId = 3 * v2 + 4;
  v4 = &s_CG_ClientModel_Physics_RuntimeData[v2][v3];
  if ( (v4->physicsInstances[0] == -1 || !Physics_IsRigidBodyValid((Physics_WorldId)(3 * v2 + 3), v4->primaryBody)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 563, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[0] != 0xFFFFFFFF && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody ))", (const char *)&queryFormat, "runtimeData->physicsInstances[0] != PHYSICSINSTANCEID_INVALID && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody )") )
    __debugbreak();
  if ( v4->physicsInstances[1] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 564, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[1] != 0xFFFFFFFF)", (const char *)&queryFormat, "runtimeData->physicsInstances[1] != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  Model = CG_ClientModel_GetModel((const LocalClientNum_t)v2, v3, 0);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 568, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  physicsAsset = Model->physicsAsset;
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 570, ASSERT_TYPE_ASSERT, "(physAsset)", (const char *)&queryFormat, "physAsset") )
    __debugbreak();
  Pose = CG_ClientModel_GetPose((const LocalClientNum_t)v2, v3);
  if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 574, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 384) )
    __debugbreak();
  v7 = v3 >> 5;
  v8 = v2;
  v9 = ~(0x80000000 >> (v3 & 0x1F));
  s_CG_ClientModel_Physics_NeedsPropagation[0].array[v3 >> 5] &= v9;
  if ( (unsigned int)v3 >= 0x180 )
  {
    LODWORD(v16) = 384;
    LODWORD(v15) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v15, v16) )
      __debugbreak();
  }
  s_CG_ClientModel_Physics_HasPhysAuthData[v8].array[v7] &= v9;
  v10 = &s_CG_ClientModel_Physics_HasCGAuthData[v8];
  if ( (unsigned int)v3 >= 0x180 )
  {
    LODWORD(v16) = 384;
    LODWORD(v15) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v15, v16) )
      __debugbreak();
  }
  v10->array[v7] &= v9;
  Pose->physicsId = 0;
  v4->detailCache.cached = 0;
  if ( v4->detailBoneMapping.m_data.m_size )
  {
    ntl::array<CG_ClientModel_Physics_BoneMapping,CG_ClientModel_Physics_BoneMappingAllocator>::clear_and_deallocate(&v4->detailBoneMapping);
    if ( v4->detailBoneMapping.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 593, ASSERT_TYPE_ASSERT, "(runtimeData->detailBoneMapping.size() == 0)", (const char *)&queryFormat, "runtimeData->detailBoneMapping.size() == 0") )
        __debugbreak();
    }
  }
  if ( v4->keyframedOffsetMapping.m_data.m_size )
  {
    for ( i = 0i64; i < v4->keyframedOffsetMapping.m_data.m_size; ++i )
      ;
    m_buffer = v4->keyframedOffsetMapping.m_data.m_buffer;
    if ( m_buffer )
    {
      if ( !ntl::static_shared_allocator<CG_ClientModel_Physics_OffsetMappingAllocator,ntl::fixed_heap_allocator<39936,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
        __debugbreak();
      ntl::nxheap::free(&ntl::static_shared_allocator<CG_ClientModel_Physics_OffsetMappingAllocator,ntl::fixed_heap_allocator<39936,0>>::mp_allocator->m_heap, m_buffer);
      v4->keyframedOffsetMapping.m_data.m_buffer = NULL;
      v4->keyframedOffsetMapping.m_data.m_size = 0i64;
    }
  }
  if ( v4->keyframedBoneMapping.m_data.m_size )
    ntl::array<CG_ClientModel_Physics_BoneMapping,CG_ClientModel_Physics_BoneMappingAllocator>::clear_and_deallocate(&v4->keyframedBoneMapping);
  if ( v4->detailBoneMapping.m_data.m_size )
  {
    for ( j = 0i64; j < v4->dynamicBoneMapping.m_data.m_size; ++j )
      ;
    v14 = v4->dynamicBoneMapping.m_data.m_buffer;
    if ( v14 )
    {
      if ( !ntl::static_shared_allocator<CG_ClientModel_Physics_CachedBoneMappingAllocator,ntl::fixed_heap_allocator<52224,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
        __debugbreak();
      ntl::nxheap::free(&ntl::static_shared_allocator<CG_ClientModel_Physics_CachedBoneMappingAllocator,ntl::fixed_heap_allocator<52224,0>>::mp_allocator->m_heap, v14);
      v4->dynamicBoneMapping.m_data.m_buffer = NULL;
      v4->dynamicBoneMapping.m_data.m_size = 0i64;
    }
  }
  v4->primaryBody = 0xFFFFFF;
  if ( Model->detailCollision )
    --Model->physicsUsageCounter.clientEnt;
  Physics_DestroyInstance(worldId, v4->physicsInstances[1], 0);
  v4->physicsInstances[1] = -1;
  --physicsAsset->usageCounter.clientEnt;
  Physics_DestroyInstance(v18, v4->physicsInstances[0], 0);
  v4->physicsInstances[0] = -1;
}

/*
==============
CG_ClientModel_Physics_UpdateDetailWorldInstance
==============
*/
__int64 CG_ClientModel_Physics_UpdateDetailWorldInstance(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v3; 
  Physics_WorldId v4; 
  __int64 v5; 
  const cpose_t *Pose; 
  const DObj *DObj; 
  CG_ClientModel_Physics_BoneMapping *m_buffer; 
  DObjAnimMat *LocalBoneMatrix; 
  DObjAnimMat *v10; 
  unsigned int bodyId; 
  __int64 v13; 
  vec3_t position; 

  v2 = localClientNum;
  v3 = clientModelIdx;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 657, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 658, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v3 >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 659, ASSERT_TYPE_ASSERT, "(clientModelIdx < CG_ClientModel_GetCount( localClientNum ))", (const char *)&queryFormat, "clientModelIdx < CG_ClientModel_GetCount( localClientNum )") )
    __debugbreak();
  if ( !CG_ClientModel_IsLoaded((const LocalClientNum_t)v2, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 662, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsLoaded( localClientNum, clientModelIdx )") )
    __debugbreak();
  v4 = 3 * v2 + 4;
  v5 = v3 + 384 * v2;
  if ( s_CG_ClientModel_Physics_RuntimeData[0][v5].physicsInstances[1] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 669, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[1] != 0xFFFFFFFF)", (const char *)&queryFormat, "runtimeData->physicsInstances[1] != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( !s_CG_ClientModel_Physics_RuntimeData[0][v5].detailCache.cached )
  {
    Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Physics_UpdateDetailWorldInstance");
    Pose = CG_ClientModel_GetPose((const LocalClientNum_t)v2, v3);
    DObj = CG_ClientModel_GetDObj((const LocalClientNum_t)v2, v3);
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 682, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( !DObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 683, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
      __debugbreak();
    m_buffer = s_CG_ClientModel_Physics_RuntimeData[0][v5].detailBoneMapping.m_data.m_buffer;
    if ( m_buffer != &m_buffer[s_CG_ClientModel_Physics_RuntimeData[0][v5].detailBoneMapping.m_data.m_size] )
    {
      do
      {
        if ( (m_buffer->bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 691, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( boneMapping->bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( boneMapping->bodyId )") )
          __debugbreak();
        if ( m_buffer->boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 692, ASSERT_TYPE_ASSERT, "(boneMapping->boneIndex != 254 && boneMapping->boneIndex != 255)", (const char *)&queryFormat, "boneMapping->boneIndex != UNDEFINED_BONEINDEX && boneMapping->boneIndex != NO_BONEINDEX") )
          __debugbreak();
        LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(Pose, DObj, m_buffer->boneIndex);
        v10 = LocalBoneMatrix;
        *(float *)&v13 = LocalBoneMatrix->quat.v[0];
        if ( (LODWORD(LocalBoneMatrix->quat.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v13 = LocalBoneMatrix->quat.v[1], (v13 & 0x7F800000) == 2139095040) || (*(float *)&v13 = LocalBoneMatrix->quat.v[2], (v13 & 0x7F800000) == 2139095040) || (*(float *)&v13 = LocalBoneMatrix->quat.v[3], (v13 & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 696, ASSERT_TYPE_ASSERT, "(!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] ))", (const char *)&queryFormat, "!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] )", v13) )
            __debugbreak();
        }
        if ( ((LODWORD(v10->trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v10->trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v10->trans.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 697, ASSERT_TYPE_ASSERT, "(!IS_NAN( dobjMat->trans[0] ) && !IS_NAN( dobjMat->trans[1] ) && !IS_NAN( dobjMat->trans[2] ))", (const char *)&queryFormat, "!IS_NAN( dobjMat->trans[0] ) && !IS_NAN( dobjMat->trans[1] ) && !IS_NAN( dobjMat->trans[2] )") )
          __debugbreak();
        bodyId = m_buffer->bodyId;
        position.v[0] = v10->trans.v[0] + g_activeRefDef->viewOffset.v[0];
        position.v[1] = v10->trans.v[1] + g_activeRefDef->viewOffset.v[1];
        position.v[2] = v10->trans.v[2] + g_activeRefDef->viewOffset.v[2];
        Physics_WarpLeafDetailRigidBodyTo(v4, bodyId, &position, &v10->quat, 0, 0);
        ++m_buffer;
      }
      while ( m_buffer != &s_CG_ClientModel_Physics_RuntimeData[0][v5].detailBoneMapping.m_data.m_buffer[s_CG_ClientModel_Physics_RuntimeData[0][v5].detailBoneMapping.m_data.m_size] );
    }
    s_CG_ClientModel_Physics_RuntimeData[0][v5].detailCache.cached = 1;
    Sys_ProfEndNamedEvent();
  }
  return s_CG_ClientModel_Physics_RuntimeData[0][v5].physicsInstances[1];
}

