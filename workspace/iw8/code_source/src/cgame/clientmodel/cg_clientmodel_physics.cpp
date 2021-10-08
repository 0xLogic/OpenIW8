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
  __int64 currentCache; 
  _DWORD *v; 

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
        _RBX = v6->dynamicBoneMapping.m_data.m_buffer;
        if ( _RBX != &_RBX[v6->dynamicBoneMapping.m_data.m_size] )
        {
          do
          {
            if ( DObjSetSkelRotTransIndex(DObj, partBits, _RBX->boneIndex) )
            {
              currentCache = _RBX->currentCache;
              _R8 = (_DWORD *)RotTransArray[_RBX->boneIndex].quat.v;
              _RAX = 3 * currentCache;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+rax*4+8]
                vsubss  xmm1, xmm0, dword ptr [rcx+7Ch]
                vmovss  dword ptr [r8+10h], xmm1
                vmovss  xmm2, dword ptr [rbx+rax*4+0Ch]
                vsubss  xmm0, xmm2, dword ptr [rcx+80h]
                vmovss  dword ptr [r8+14h], xmm0
                vmovss  xmm1, dword ptr [rbx+rax*4+10h]
                vsubss  xmm2, xmm1, dword ptr [rcx+84h]
                vmovss  dword ptr [r8+18h], xmm2
              }
              v = (_DWORD *)_RBX->cachedOrientationAsQuat[currentCache].v;
              *_R8 = *v;
              _R8[1] = v[1];
              _R8[2] = v[2];
              _R8[3] = v[3];
              __asm
              {
                vmovups xmm2, xmmword ptr [r8]
                vmulps  xmm0, xmm2, xmm2
                vhaddps xmm1, xmm0, xmm0
                vhaddps xmm0, xmm1, xmm1
                vsqrtps xmm1, xmm0
                vdivps  xmm2, xmm2, xmm1
                vmovups xmmword ptr [r8], xmm2
              }
              _R8[7] = 0x40000000;
            }
            ++_RBX;
          }
          while ( _RBX != &v6->dynamicBoneMapping.m_data.m_buffer[v6->dynamicBoneMapping.m_data.m_size] );
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
  __int64 v4; 
  Physics_WorldId v5; 
  __int64 v6; 
  bitarray<384> *v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v12; 
  unsigned int v13; 
  CG_ClientModel_Physics_RuntimeData *v14; 
  cpose_t *Pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  int v30; 
  unsigned int bodyId; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v34; 
  __int64 v41; 
  __int64 v42; 
  vec3_t origin; 
  int v44; 
  LocalClientNum_t v45; 
  unsigned int v46; 
  bitarray<384> *v47; 
  CG_ClientModel_Physics_RuntimeData *v48; 
  __int64 v49; 
  __int64 v50; 
  vec4_t orientation; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  v50 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v4 = localClientNum;
  v45 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Physics_PostStepWorld");
  if ( (unsigned int)v4 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 829, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 830, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v5 = 3 * v4 + 3;
  v6 = v4;
  v49 = v4;
  v7 = &s_CG_ClientModel_Physics_HasPhysAuthData[v4];
  v47 = v7;
  LODWORD(v8) = 0;
  v44 = 0;
  v9 = v7->array[0];
  __asm
  {
    vmovsd  xmm7, cs:__real@3f30000000000000
    vmovss  xmm6, cs:__real@42000000
  }
  while ( v9 )
  {
LABEL_12:
    v12 = __lzcnt(v9);
    v13 = v12 + 32 * v8;
    if ( v12 >= 0x20 )
    {
      LODWORD(v42) = 32;
      LODWORD(v41) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v41, v42) )
        __debugbreak();
    }
    if ( (v9 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v9 &= ~(0x80000000 >> v12);
    v46 = v9;
    v14 = &s_CG_ClientModel_Physics_RuntimeData[v6][v13];
    v48 = v14;
    if ( (v14->physicsInstances[0] == -1 || !Physics_IsRigidBodyValid(v5, v14->primaryBody)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 844, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[0] != 0xFFFFFFFF && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody ))", (const char *)&queryFormat, "runtimeData->physicsInstances[0] != PHYSICSINSTANCEID_INVALID && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody )") )
      __debugbreak();
    Pose = CG_ClientModel_GetPose((const LocalClientNum_t)v4, v13);
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 848, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( (*((_BYTE *)v14 + 12) & 1) != 0 )
    {
      if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !Pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Pose->origin.Get_origin, Pose);
      FunctionPointer_origin(&Pose->origin.origin.origin, &origin);
      if ( Pose->isPosePrecise )
      {
        __asm
        {
          vmovd   xmm0, dword ptr [rsp+0E8h+origin]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm7
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+0E8h+origin], xmm2
          vmovd   xmm0, dword ptr [rsp+0E8h+origin+4]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm7
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+0E8h+origin+4], xmm2
          vmovd   xmm0, dword ptr [rsp+0E8h+origin+8]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm7
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+0E8h+origin+8], xmm2
        }
      }
      CG_ClientModel_SetPrevPose((const LocalClientNum_t)v4, v13, &origin, &Pose->angles);
      Physics_GetRigidBodyTransform(v5, v14->primaryBody, &origin, &orientation);
      QuatToAngles(&orientation, &Pose->angles);
      memset(&origin, 0, sizeof(origin));
    }
    _R14 = v14->dynamicBoneMapping.m_data.m_buffer;
    v7 = v47;
    if ( _R14 != &_R14[v14->dynamicBoneMapping.m_data.m_size] )
    {
      do
      {
        v30 = 1 - _R14->currentCache;
        if ( _R14->currentCache != 1 && v30 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 872, ASSERT_TYPE_ASSERT, "(newCache == 0 || newCache == 1)", (const char *)&queryFormat, "newCache == 0 || newCache == 1") )
          __debugbreak();
        _R12 = 3i64 * v30;
        bodyId = _R14->bodyId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v5 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
            __debugbreak();
        }
        if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v42) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
            __debugbreak();
        }
        if ( (unsigned int)v5 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
            __debugbreak();
        }
        if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v42) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld(v5)->world;
        if ( !world )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v42) )
            __debugbreak();
        }
        v34 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, bodyId);
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rax+30h]
          vmovss  dword ptr [r14+r12*4+8], xmm1
          vmulss  xmm0, xmm6, dword ptr [rax+34h]
          vmovss  dword ptr [r14+r12*4+0Ch], xmm0
          vmulss  xmm2, xmm6, dword ptr [rax+38h]
          vmovss  dword ptr [r14+r12*4+10h], xmm2
        }
        Axis34ToQuat(v34, &_R14->cachedOrientationAsQuat[v30]);
        _R14->currentCache = v30;
        ++_R14;
      }
      while ( _R14 != &v48->dynamicBoneMapping.m_data.m_buffer[v48->dynamicBoneMapping.m_data.m_size] );
      LODWORD(v8) = v44;
      v9 = v46;
      v7 = v47;
      v6 = v49;
    }
    LODWORD(v4) = v45;
  }
  while ( 1 )
  {
    v8 = (unsigned int)(v8 + 1);
    v44 = v8;
    if ( (unsigned int)v8 >= 0xC )
      break;
    v9 = v7->array[v8];
    if ( v9 )
      goto LABEL_12;
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_ClientModel_Physics_PreStepWorld
==============
*/
void CG_ClientModel_Physics_PreStepWorld(const LocalClientNum_t localClientNum)
{
  __int64 v5; 
  Physics_WorldId v6; 
  __int64 v7; 
  bitarray<384> *v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v14; 
  unsigned int v15; 
  char v16; 
  CG_ClientModel_Physics_RuntimeData *v17; 
  cpose_t *Pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  char v32; 
  CG_ClientModel_Physics_OffsetMapping *m_buffer; 
  void (__fastcall *v34)(const vec4_t *, vec3_t *); 
  char v47; 
  CG_ClientModel_Physics_BoneMapping *v48; 
  int boneIndex; 
  char *Value; 
  int *v51; 
  _QWORD *v52; 
  char *v53; 
  __int64 v54; 
  unsigned __int64 v55; 
  ThreadContext CurrentThreadContext; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 canWarp; 
  __int64 canWarpa; 
  __int64 updateBroadphaseIfWarping; 
  float v81; 
  float v82; 
  float v83; 
  int boneIndices; 
  unsigned int v85; 
  LocalClientNum_t localClientNuma; 
  int v87; 
  Physics_WorldId worldId; 
  unsigned int clientModelIdx; 
  vec3_t position; 
  vec3_t origin; 
  bitarray<384> *v92; 
  __int64 v93; 
  CG_ClientModel_Physics_RuntimeData *v94; 
  __int64 v95; 
  vec3_t v96; 
  vec4_t quat; 
  vec4_t orientationAsQuat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 
  char v101; 
  void *retaddr; 

  _RAX = &retaddr;
  v95 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v5 = localClientNum;
  localClientNuma = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Physics_PreStepWorld");
  if ( (unsigned int)v5 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 722, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 723, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v6 = 3 * v5 + 3;
  worldId = v6;
  v7 = v5;
  v93 = v5;
  v8 = &s_CG_ClientModel_Physics_HasCGAuthData[v5];
  v92 = v8;
  LODWORD(v9) = 0;
  v87 = 0;
  v10 = v8->array[0];
  v85 = v8->array[0];
  __asm
  {
    vmovsd  xmm6, cs:__real@3f30000000000000
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm8, cs:__real@3f800000
  }
  while ( 1 )
  {
    if ( v10 )
    {
LABEL_12:
      v14 = __lzcnt(v10);
      v15 = v14 + 32 * v9;
      clientModelIdx = v15;
      if ( v14 >= 0x20 )
      {
        LODWORD(updateBroadphaseIfWarping) = 32;
        LODWORD(canWarp) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( (v10 & (0x80000000 >> v14)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v85 = ~(0x80000000 >> v14) & v10;
      v16 = 1;
      LODWORD(v5) = localClientNuma;
      v7 = v93;
    }
    else
    {
      while ( 1 )
      {
        v9 = (unsigned int)(v9 + 1);
        v87 = v9;
        if ( (unsigned int)v9 >= 0xC )
          break;
        v10 = v8->array[v9];
        v85 = v10;
        if ( v10 )
          goto LABEL_12;
      }
      v16 = 0;
      v15 = clientModelIdx;
    }
    if ( !v16 )
      break;
    v17 = &s_CG_ClientModel_Physics_RuntimeData[v7][v15];
    v94 = v17;
    if ( (v17->physicsInstances[0] == -1 || !Physics_IsRigidBodyValid(v6, v17->primaryBody)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 737, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[0] != 0xFFFFFFFF && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody ))", (const char *)&queryFormat, "runtimeData->physicsInstances[0] != PHYSICSINSTANCEID_INVALID && Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody )") )
      __debugbreak();
    if ( (*((_BYTE *)v17 + 12) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 738, ASSERT_TYPE_ASSERT, "(!runtimeData->primaryBodyIsDynamic)", (const char *)&queryFormat, "!runtimeData->primaryBodyIsDynamic") )
      __debugbreak();
    Pose = CG_ClientModel_GetPose((const LocalClientNum_t)v5, v15);
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 742, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( (*((_BYTE *)v17 + 12) & 2) != 0 )
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
        __asm
        {
          vmovd   xmm0, dword ptr [rsp+190h+position]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+190h+position], xmm2
          vmovd   xmm0, dword ptr [rsp+190h+position+4]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+190h+position+4], xmm2
          vmovd   xmm0, dword ptr [rsp+190h+position+8]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+190h+position+8], xmm2
        }
      }
      __asm
      {
        vmovss  [rsp+190h+var_158], xmm7
        vmovss  dword ptr [rsp+190h+fmt], xmm8
      }
      Physics_KeyframeRigidBodyTo(v6, v17->primaryBody, &position, &quat, fmt, 1, 0, v81);
      memset(&position, 0, sizeof(position));
    }
    v32 = 0;
    m_buffer = v17->keyframedOffsetMapping.m_data.m_buffer;
    if ( m_buffer != &m_buffer[v17->keyframedOffsetMapping.m_data.m_size] )
    {
      do
      {
        if ( !v32 )
        {
          v32 = 1;
          if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          if ( !Pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          v34 = ObfuscateGetFunctionPointer_origin(Pose->origin.Get_origin, Pose);
          v34(&Pose->origin.origin.origin, &origin);
          if ( Pose->isPosePrecise )
          {
            __asm
            {
              vmovd   xmm0, dword ptr [rsp+190h+origin]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rsp+190h+origin], xmm2
              vmovd   xmm0, dword ptr [rsp+190h+origin+4]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rsp+190h+origin+4], xmm2
              vmovd   xmm0, dword ptr [rsp+190h+origin+8]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rsp+190h+origin+8], xmm2
            }
          }
          AnglesAndOriginToMatrix43(&Pose->angles, &origin, &result);
          memset(&origin, 0, sizeof(origin));
        }
        MatrixMultiply43(&m_buffer->rootOffset, &result, &out);
        AxisToQuat((const tmat33_t<vec3_t> *)&out, &orientationAsQuat);
        __asm
        {
          vmovss  [rsp+190h+var_158], xmm7
          vmovss  dword ptr [rsp+190h+fmt], xmm8
        }
        Physics_KeyframeRigidBodyTo(v6, m_buffer->bodyId, &out.m[3], &orientationAsQuat, fmta, 1, 0, v82);
        ++m_buffer;
      }
      while ( m_buffer != &v17->keyframedOffsetMapping.m_data.m_buffer[v17->keyframedOffsetMapping.m_data.m_size] );
    }
    v47 = 0;
    v48 = v17->keyframedBoneMapping.m_data.m_buffer;
    LODWORD(v9) = v87;
    v10 = v85;
    LODWORD(v5) = localClientNuma;
    v8 = v92;
    v7 = localClientNuma;
    if ( v48 != &v48[v17->keyframedBoneMapping.m_data.m_size] )
    {
      do
      {
        if ( !v47 )
        {
          v47 = 1;
          CG_ClientModel_GetDObj(localClientNuma, clientModelIdx);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 803, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
            __debugbreak();
        }
        boneIndex = v48->boneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 86, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
          __debugbreak();
        Value = (char *)Sys_GetValue(0);
        v51 = (int *)(Value + 18936);
        if ( (unsigned int)(*((_DWORD *)Value + 4734) + 1) >= 3 )
        {
          LODWORD(updateBroadphaseIfWarping) = 3;
          LODWORD(canWarpa) = *((_DWORD *)Value + 4734) + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", canWarpa, updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( (unsigned int)++*v51 >= 3 )
        {
          LODWORD(updateBroadphaseIfWarping) = 3;
          LODWORD(canWarpa) = *v51;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", canWarpa, updateBroadphaseIfWarping) )
            __debugbreak();
        }
        v52 = Value + 2088;
        v53 = Value + 40;
        if ( *v52 < (unsigned __int64)v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
          __debugbreak();
        *v52 += 8i64;
        if ( *v52 >= (unsigned __int64)v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
          __debugbreak();
        *(_QWORD *)*v52 = v51;
        if ( *v52 <= (unsigned __int64)v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
          __debugbreak();
        v54 = *v51;
        v55 = __rdtsc();
        v51[v54 + 2] = v55;
        if ( Sys_HasValidCurrentThreadContext() )
          CurrentThreadContext = Sys_GetCurrentThreadContext();
        else
          CurrentThreadContext = THREAD_CONTEXT_COUNT;
        CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 421, NULL, 0);
        boneIndices = boneIndex;
        CG_DObjCalcBones(Pose, NULL, 1, &boneIndices);
        Profile_EndInternal(NULL);
        if ( DObjGetRotTransArray(NULL) )
          _RDI = DObjGetSkelBoneMatrix(NULL, boneIndex);
        else
          _RDI = NULL;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovss  [rsp+190h+boneIndices], xmm0
        }
        if ( (boneIndices & 0x7F800000) == 2139095040 )
          goto LABEL_96;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vmovss  [rsp+190h+boneIndices], xmm0
        }
        if ( (boneIndices & 0x7F800000) == 2139095040 )
          goto LABEL_96;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+8]
          vmovss  [rsp+190h+boneIndices], xmm0
        }
        if ( (boneIndices & 0x7F800000) == 2139095040 )
          goto LABEL_96;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vmovss  [rsp+190h+boneIndices], xmm0
        }
        if ( (boneIndices & 0x7F800000) == 2139095040 )
        {
LABEL_96:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 808, ASSERT_TYPE_ASSERT, "(!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] ))", (const char *)&queryFormat, "!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+10h]
          vmovss  [rsp+190h+boneIndices], xmm0
        }
        if ( (boneIndices & 0x7F800000) == 2139095040 )
          goto LABEL_97;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+14h]
          vmovss  [rsp+190h+boneIndices], xmm0
        }
        if ( (boneIndices & 0x7F800000) == 2139095040 )
          goto LABEL_97;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+18h]
          vmovss  [rsp+190h+boneIndices], xmm0
        }
        if ( (boneIndices & 0x7F800000) == 2139095040 )
        {
LABEL_97:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 809, ASSERT_TYPE_ASSERT, "(!IS_NAN( dobjMat->trans[0] ) && !IS_NAN( dobjMat->trans[1] ) && !IS_NAN( dobjMat->trans[2] ))", (const char *)&queryFormat, "!IS_NAN( dobjMat->trans[0] ) && !IS_NAN( dobjMat->trans[1] ) && !IS_NAN( dobjMat->trans[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+10h]
          vaddss  xmm1, xmm0, dword ptr [rax+7Ch]
          vmovss  dword ptr [rbp+90h+var_F0], xmm1
          vmovss  xmm2, dword ptr [rdi+14h]
          vaddss  xmm0, xmm2, dword ptr [rax+80h]
          vmovss  dword ptr [rbp+90h+var_F0+4], xmm0
          vmovss  xmm1, dword ptr [rdi+18h]
          vaddss  xmm2, xmm1, dword ptr [rax+84h]
          vmovss  dword ptr [rbp+90h+var_F0+8], xmm2
          vmovss  [rsp+190h+var_158], xmm7
          vmovss  dword ptr [rsp+190h+fmt], xmm8
        }
        Physics_KeyframeRigidBodyTo(worldId, v48->bodyId, &v96, &_RDI->quat, fmtb, 1, 0, v83);
        ++v48;
      }
      while ( v48 != &v94->keyframedBoneMapping.m_data.m_buffer[v94->keyframedBoneMapping.m_data.m_size] );
      LODWORD(v9) = v87;
      v10 = v85;
      LODWORD(v5) = localClientNuma;
      v8 = v92;
      v7 = v93;
    }
    v6 = worldId;
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v101;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_ClientModel_Physics_PropagateToDetailWorld
==============
*/
void CG_ClientModel_Physics_PropagateToDetailWorld(const LocalClientNum_t localClientNum)
{
  __int64 v8; 
  bitarray<384> *v11; 
  int v12; 
  __int64 v13; 
  Physics_WorldId v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v18; 
  int v19; 
  CG_ClientModel_Physics_RuntimeData *v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int m_serialAndIndex; 
  unsigned int v24; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v26; 
  unsigned int v27; 
  hknpBodyId *RigidBodyID; 
  int v29; 
  hknpBodyId v30; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v32; 
  __int64 activate; 
  __int64 v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  unsigned int v74; 
  unsigned int NumRigidBodys; 
  unsigned int v76; 
  bitarray<384> *v77; 
  __int64 v78; 
  hknpBodyId result; 
  hknpBodyId v80; 
  hknpBodyId v81; 
  hknpBodyId v82; 
  vec4_t out; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  v8 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Physics_PropagateToDetailWorld");
  if ( (unsigned int)v8 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 950, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 951, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, cs:__real@42000000
    vmovss  xmm10, cs:__real@3d000000
  }
  v78 = v8;
  v11 = &s_CG_ClientModel_Physics_NeedsPropagation[v8];
  v12 = 3 * v8 + 3;
  LODWORD(v13) = 0;
  v77 = v11;
  v14 = 3 * v8 + 4;
  v73 = 0;
  v15 = v8;
  v16 = v11->array[0];
  __asm { vxorps  xmm11, xmm11, xmm11 }
  while ( v16 )
  {
LABEL_12:
    v18 = __lzcnt(v16);
    v19 = v18 + 32 * v13;
    if ( v18 >= 0x20 )
    {
      LODWORD(v65) = 32;
      LODWORD(activate) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", activate, v65) )
        __debugbreak();
    }
    if ( (v16 & (0x80000000 >> v18)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v16 &= ~(0x80000000 >> v18);
    v74 = v16;
    v20 = &s_CG_ClientModel_Physics_RuntimeData[v15][v19];
    v21 = v20->physicsInstances[0];
    v22 = v20->physicsInstances[1];
    v76 = v22;
    if ( v20->physicsInstances[0] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 970, ASSERT_TYPE_ASSERT, "(physicsInstanceFrom != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstanceFrom != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( v22 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 971, ASSERT_TYPE_ASSERT, "(physicsInstanceTo != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstanceTo != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    NumRigidBodys = Physics_GetNumRigidBodys(v14, v22);
    if ( !NumRigidBodys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 974, ASSERT_TYPE_ASSERT, "(numDetailBodies > 0)", (const char *)&queryFormat, "numDetailBodies > 0") )
      __debugbreak();
    if ( Physics_IsInstanceDetailBounded(v14, v22) )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v12 > 7 )
      {
        LODWORD(v65) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
          __debugbreak();
      }
      if ( v21 == -1 )
      {
        LODWORD(v65) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v65) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
      {
        LODWORD(v65) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v65) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
      {
        LODWORD(v65) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v65) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v12, v21, 0)->m_serialAndIndex;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v14 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v65) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
          __debugbreak();
      }
      if ( v22 == -1 )
      {
        LODWORD(v65) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v65) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v14 - 2) <= 5 )
      {
        LODWORD(v65) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v65) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v14 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v65) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v65) )
          __debugbreak();
      }
      v24 = HavokPhysics_GetRigidBodyID(&v80, v14, v22, NumRigidBodys - 1)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 982, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( fromBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( fromBodyId )") )
        __debugbreak();
      if ( (v24 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 983, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( toBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( toBodyId )") )
        __debugbreak();
      Physics_GetRigidBodyTransform((const Physics_WorldId)v12, m_serialAndIndex, &v20->detailCache.position, &v20->detailCache.orientationAsQuat);
      v20->detailCache.cached = 0;
      Physics_WarpRigidBodyTo(v14, v24, &v20->detailCache.position, &v20->detailCache.orientationAsQuat, 0, 0);
      LODWORD(v13) = v73;
      v11 = v77;
      v16 = v74;
      goto LABEL_8;
    }
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v12 > 7 )
    {
      LODWORD(v65) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
        __debugbreak();
    }
    if ( v21 == -1 )
    {
      LODWORD(v65) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v65) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
    {
      LODWORD(v65) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v65) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      if ( v12 < 0 )
        goto LABEL_88;
      if ( v12 <= 1 )
      {
        LODWORD(v65) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v65) )
          __debugbreak();
      }
    }
    if ( (unsigned int)v12 > 7 )
    {
LABEL_88:
      LODWORD(v65) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
        __debugbreak();
    }
    if ( v21 == -1 )
    {
      LODWORD(v65) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v65) )
        __debugbreak();
    }
    ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v12);
    if ( !ConstWorld->world )
    {
      LODWORD(v65) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v65) )
        __debugbreak();
    }
    if ( NumRigidBodys != HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 996, ASSERT_TYPE_ASSERT, "( numDetailBodies == Physics_GetNumRigidBodys( clientAuthWorldId, physicsInstanceFrom ) )", (const char *)&queryFormat, "numDetailBodies == Physics_GetNumRigidBodys( clientAuthWorldId, physicsInstanceFrom )") )
      __debugbreak();
    LODWORD(v13) = v73;
    v11 = v77;
    v26 = 0;
    if ( NumRigidBodys )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
            __debugbreak();
        }
        if ( v21 == -1 )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v65) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v65) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v65) )
            __debugbreak();
        }
        v27 = HavokPhysics_GetRigidBodyID(&v81, (const Physics_WorldId)v12, v21, v26)->m_serialAndIndex;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v14 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v65) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
            __debugbreak();
        }
        if ( v22 == -1 )
        {
          LODWORD(v65) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v65) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v14 - 2) <= 5 )
        {
          LODWORD(v65) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v65) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v14 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v65) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v65) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&v82, v14, v22, v26);
        v29 = v27 & 0xFFFFFF;
        v30.m_serialAndIndex = RigidBodyID->m_serialAndIndex;
        if ( (v27 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 1004, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( fromBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( fromBodyId )") )
          __debugbreak();
        if ( (v30.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 1005, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( toBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( toBodyId )") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
            __debugbreak();
        }
        if ( v29 == 0xFFFFFF )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v65) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v65) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v65) )
            __debugbreak();
        }
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
            __debugbreak();
        }
        if ( v29 == 0xFFFFFF )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v65) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld((Physics_WorldId)v12)->world;
        if ( !world )
        {
          LODWORD(v65) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v65) )
            __debugbreak();
        }
        v32 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, v27);
        __asm
        {
          vmulss  xmm6, xmm9, dword ptr [rax+30h]
          vmulss  xmm7, xmm9, dword ptr [rax+34h]
          vmulss  xmm8, xmm9, dword ptr [rax+38h]
        }
        Axis34ToQuat(v32, &out);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v14 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v65) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
            __debugbreak();
        }
        if ( (v30.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v65) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v65) )
            __debugbreak();
        }
        __asm { vmovss  [rsp+148h+var_108], xmm6 }
        if ( (v66 & 0x7F800000) == 2139095040 )
          goto LABEL_191;
        __asm { vmovss  [rsp+148h+var_108], xmm7 }
        if ( (v67 & 0x7F800000) == 2139095040 )
          goto LABEL_191;
        __asm { vmovss  [rsp+148h+var_108], xmm8 }
        if ( (v68 & 0x7F800000) == 2139095040 )
        {
LABEL_191:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+148h+out]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v69 & 0x7F800000) == 2139095040 )
          goto LABEL_192;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+148h+out+4]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v70 & 0x7F800000) == 2139095040 )
          goto LABEL_192;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+148h+out+8]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v71 & 0x7F800000) == 2139095040 )
          goto LABEL_192;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+148h+out+0Ch]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v72 & 0x7F800000) == 2139095040 )
        {
LABEL_192:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm5, dword ptr [rsp+148h+out]
          vinsertps xmm5, xmm5, dword ptr [rsp+148h+out+4], 10h
          vinsertps xmm5, xmm5, dword ptr [rsp+148h+out+8], 20h
          vinsertps xmm5, xmm5, dword ptr [rsp+148h+out+0Ch], 30h
          vmulss  xmm0, xmm6, xmm10
          vmovss  dword ptr [rsp+148h+hkPosition.m_quad], xmm0
          vmulss  xmm0, xmm8, xmm10
          vmovss  dword ptr [rsp+148h+hkPosition.m_quad+8], xmm0
          vdpps   xmm0, xmm5, xmm5, 0FFh
          vrsqrtps xmm4, xmm0
          vmovups xmmword ptr [rsp+148h+hkOrientation.m_vec.m_quad], xmm0
          vmulss  xmm1, xmm7, xmm10
          vmulps  xmm0, xmm0, xmm4
          vmulps  xmm2, xmm0, xmm4
          vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
          vmovss  dword ptr [rsp+148h+hkPosition.m_quad+4], xmm1
          vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
          vsubps  xmm3, xmm1, xmm2
          vmulps  xmm2, xmm3, xmm0
          vmulps  xmm1, xmm2, xmm5
          vmovups xmmword ptr [rsp+148h+hkOrientation.m_vec.m_quad], xmm1
          vmovss  dword ptr [rsp+148h+hkPosition.m_quad+0Ch], xmm11
        }
        HavokPhysics_WarpRigidBodyTo(v14, v30, &hkPosition, &hkOrientation, 0, 0);
        v22 = v76;
        ++v26;
      }
      while ( v26 < NumRigidBodys );
      LODWORD(v13) = v73;
      v16 = v74;
      v11 = v77;
    }
LABEL_8:
    v15 = v78;
  }
  while ( 1 )
  {
    v13 = (unsigned int)(v13 + 1);
    v73 = v13;
    if ( (unsigned int)v13 >= 0xC )
      break;
    v16 = v11->array[v13];
    if ( v16 )
      goto LABEL_12;
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
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
  unsigned __int64 v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  unsigned __int64 v34; 
  __int64 v35; 
  unsigned int v36; 
  unsigned int v37; 
  bitarray<384> *v38; 
  PhysicsAsset *v39; 
  DObj *v40; 
  unsigned __int8 BoneIndex; 
  vec4_t *cachedOrientationAsQuat; 
  __int64 v43; 
  bitarray<384> *v44; 
  unsigned int v45; 
  PhysicsAsset *v46; 
  unsigned __int8 v47; 
  unsigned int v48; 
  unsigned __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  int v55; 
  int NumRigidBodys; 
  char v57; 
  int bodyIdx; 
  hknpBodyId v59; 
  PhysicsAsset *physicsAsset; 
  unsigned __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  DObj *dobja; 
  unsigned __int64 v65; 
  hknpBodyId v66; 
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
        LODWORD(v50) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
          __debugbreak();
      }
      if ( v16 == -1 )
      {
        LODWORD(v50) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v50) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
      {
        LODWORD(v50) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v50) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
      {
        LODWORD(v50) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v50) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v59, (const Physics_WorldId)v9, v16, v10)->m_serialAndIndex;
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
      _RBX = 0i64;
      do
      {
        if ( v18 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
        _RAX = runtimeData->dynamicBoneMapping.m_data.m_buffer;
        ++v18;
        _RAX[_RBX].bodyId = 0xFFFFFF;
        _RAX[_RBX].boneIndex = 0;
        *(_QWORD *)_RAX[_RBX].cachedPosition[0].v = 0i64;
        *(_QWORD *)&_RAX[_RBX].cachedPosition[0].z = 0i64;
        *(_QWORD *)&_RAX[_RBX].cachedPosition[1].y = 0i64;
        __asm
        {
          vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
          vmovss  dword ptr [rbx+rax+20h], xmm0
          vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
          vmovss  dword ptr [rbx+rax+24h], xmm1
          vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
          vmovss  dword ptr [rbx+rax+28h], xmm0
          vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
          vmovss  dword ptr [rbx+rax+2Ch], xmm1
          vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
          vmovss  dword ptr [rbx+rax+30h], xmm0
          vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
          vmovss  dword ptr [rbx+rax+34h], xmm1
          vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
          vmovss  dword ptr [rbx+rax+38h], xmm0
          vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
          vmovss  dword ptr [rbx+rax+3Ch], xmm1
        }
        _RAX[_RBX++].currentCache = 0;
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
      v29 = 0i64;
      runtimeData->keyframedOffsetMapping.m_data.m_buffer = (CG_ClientModel_Physics_OffsetMapping *)ntl::nxheap::allocate(&ntl::static_shared_allocator<CG_ClientModel_Physics_OffsetMappingAllocator,ntl::fixed_heap_allocator<39936,0>>::mp_allocator->m_heap, 52i64 * v14, 4ui64, 1);
      runtimeData->keyframedOffsetMapping.m_data.m_size = v14;
      v30 = 0i64;
      do
      {
        if ( v29 >= runtimeData->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
        ++v29;
        runtimeData->keyframedOffsetMapping.m_data.m_buffer[v30++].bodyId = 0xFFFFFF;
      }
      while ( v29 < v14 );
      v8 = localClientNum;
    }
    v7 = clientModelIdx;
    v11 = NumRigidBodys;
  }
  v55 = 0;
  v59.m_serialAndIndex = 0;
  if ( v11 > 1 )
  {
    v31 = 0i64;
    v65 = 0i64;
    v57 = v7 & 0x1F;
    v32 = 0i64;
    v33 = v8;
    v34 = 0i64;
    v35 = 0i64;
    v63 = v33;
    v62 = 0i64;
    v61 = 0i64;
    do
    {
      v36 = runtimeData->physicsInstances[0];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v9 > 7 )
      {
        LODWORD(v50) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
          __debugbreak();
      }
      if ( v36 == -1 )
      {
        LODWORD(v50) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v50) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
      {
        LODWORD(v50) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v50) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
      {
        LODWORD(v50) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v50) )
          __debugbreak();
      }
      v37 = HavokPhysics_GetRigidBodyID(&v66, (const Physics_WorldId)v9, v36, bodyIdx)->m_serialAndIndex;
      if ( (v37 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 288, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v9, v37) )
      {
        v38 = &s_CG_ClientModel_Physics_HasPhysAuthData[v63];
        if ( clientModelIdx >= 0x180 )
        {
          LODWORD(v52) = 384;
          LODWORD(v51) = clientModelIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v51, v52) )
            __debugbreak();
        }
        v39 = physicsAsset;
        v40 = dobja;
        v38->array[(unsigned __int64)clientModelIdx >> 5] |= 0x80000000 >> v57;
        BoneIndex = CG_ClientModel_Physics_FindBoneIndex((Physics_WorldId)v9, v37, v40, v39);
        if ( v32 >= runtimeData->dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v32 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        *(unsigned int *)((char *)&runtimeData->dynamicBoneMapping.m_data.m_buffer->bodyId + v35) = v37;
        if ( v32 >= runtimeData->dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v32 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        *(&runtimeData->dynamicBoneMapping.m_data.m_buffer->boneIndex + v35) = BoneIndex;
        if ( v55 >= runtimeData->dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v55 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        cachedOrientationAsQuat = runtimeData->dynamicBoneMapping.m_data.m_buffer[v55].cachedOrientationAsQuat;
        if ( v55 >= runtimeData->dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v55 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        Physics_GetRigidBodyTransform((const Physics_WorldId)v9, v37, runtimeData->dynamicBoneMapping.m_data.m_buffer[v55].cachedPosition, cachedOrientationAsQuat);
        if ( v32 >= runtimeData->dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v32 >= runtimeData->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v43 = v62;
        ++v32;
        ++v55;
        v31 = v65;
        *(float *)((char *)runtimeData->dynamicBoneMapping.m_data.m_buffer->cachedOrientationAsQuat[2].v + v62) = 0.0;
        v35 = v43 + 68;
        v62 = v35;
      }
      else if ( !Physics_IsRigidBodyStatic((Physics_WorldId)v9, v37) )
      {
        v44 = &s_CG_ClientModel_Physics_HasCGAuthData[v63];
        v45 = clientModelIdx;
        if ( clientModelIdx >= 0x180 )
        {
          LODWORD(v52) = 384;
          LODWORD(v51) = clientModelIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v51, v52) )
            __debugbreak();
          v45 = clientModelIdx;
        }
        v44->array[(unsigned __int64)v45 >> 5] |= 0x80000000 >> v57;
        v46 = physicsAsset;
        if ( Physics_IsAssetBodyAnimationDriven(physicsAsset, bodyIdx) )
        {
          v47 = CG_ClientModel_Physics_FindBoneIndex((Physics_WorldId)v9, v37, dobja, v46);
          if ( v34 >= runtimeData->keyframedBoneMapping.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v34 >= runtimeData->keyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          runtimeData->keyframedBoneMapping.m_data.m_buffer[v34].bodyId = v37;
          if ( v34 >= runtimeData->keyframedBoneMapping.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v34 >= runtimeData->keyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          runtimeData->keyframedBoneMapping.m_data.m_buffer[v34++].boneIndex = v47;
        }
        else
        {
          Physics_GetRigidBodyTransform((const Physics_WorldId)v9, v37, &origin, &quat);
          QuatAndOriginToMatrix43(&quat, &origin, &in1);
          if ( v31 >= runtimeData->keyframedOffsetMapping.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v31 >= runtimeData->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          runtimeData->keyframedOffsetMapping.m_data.m_buffer[v61 / 0x34].bodyId = v37;
          v48 = v59.m_serialAndIndex;
          v49 = (int)v59.m_serialAndIndex;
          if ( (int)v59.m_serialAndIndex >= runtimeData->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v49 >= runtimeData->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
          MatrixMultiply43(&in1, &out, &runtimeData->keyframedOffsetMapping.m_data.m_buffer[v49].rootOffset);
          ++v31;
          v61 += 52i64;
          v59.m_serialAndIndex = v48 + 1;
          v65 = v31;
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
  Physics_WorldId v26; 
  Physics_WorldId worldId; 
  vec3_t outOrigin; 
  cpose_t *pose; 
  DObj *dobj; 
  Physics_InstantiateShapeOverride shapeOverride; 
  Physics_InstantiateShapeOverride v32; 
  __int64 v33; 
  vec4_t quat; 

  v33 = -2i64;
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
  v26 = 3 * v3 + 4;
  _RBX = &s_CG_ClientModel_Physics_RuntimeData[v3][v2];
  if ( (_RBX->physicsInstances[0] != -1 || Physics_IsRigidBodyValid((Physics_WorldId)(3 * v3 + 3), _RBX->primaryBody)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 409, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[0] == 0xFFFFFFFF && !Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody ))", (const char *)&queryFormat, "runtimeData->physicsInstances[0] == PHYSICSINSTANCEID_INVALID && !Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody )") )
    __debugbreak();
  if ( _RBX->physicsInstances[1] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 410, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[1] == 0xFFFFFFFF)", (const char *)&queryFormat, "runtimeData->physicsInstances[1] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( _RBX->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 411, ASSERT_TYPE_ASSERT, "(runtimeData->dynamicBoneMapping.size() == 0)", (const char *)&queryFormat, "runtimeData->dynamicBoneMapping.size() == 0") )
    __debugbreak();
  if ( _RBX->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 412, ASSERT_TYPE_ASSERT, "(runtimeData->keyframedOffsetMapping.size() == 0)", (const char *)&queryFormat, "runtimeData->keyframedOffsetMapping.size() == 0") )
    __debugbreak();
  if ( _RBX->keyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 413, ASSERT_TYPE_ASSERT, "(runtimeData->keyframedBoneMapping.size() == 0)", (const char *)&queryFormat, "runtimeData->keyframedBoneMapping.size() == 0") )
    __debugbreak();
  if ( _RBX->detailBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 414, ASSERT_TYPE_ASSERT, "(runtimeData->detailBoneMapping.size() == 0)", (const char *)&queryFormat, "runtimeData->detailBoneMapping.size() == 0") )
    __debugbreak();
  if ( _RBX->detailCache.cached && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 415, ASSERT_TYPE_ASSERT, "(runtimeData->detailCache.cached == false)", (const char *)&queryFormat, "runtimeData->detailCache.cached == false") )
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
  v32.customShape = NULL;
  v32.shapeOverride = -1;
  v32.physicsAssetAddendum = NULL;
  v32.shapeAddendum = -1;
  v32.massProperties = NULL;
  *(_WORD *)&v32.overrideMass = 0;
  v32.overrideTensor = 0;
  v11 = Physics_InstantiateAsset(worldId, Model, physicsAsset, Ref, &outOrigin, &quat, 1, 0, 1, &shapeOverride, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeClientSimulation, 0);
  _RBX->physicsInstances[0] = v11;
  if ( v11 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 453, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[0] != 0xFFFFFFFF)", (const char *)&queryFormat, "runtimeData->physicsInstances[0] != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  ++physicsAsset->usageCounter.clientEnt;
  if ( Model->detailCollision )
  {
    v12 = Physics_InstantiateDetailModel(v26, Model, Ref, &outOrigin, &quat, 1, 1, 0, 0);
    _RBX->physicsInstances[1] = v12;
    if ( v12 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 459, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[1] != 0xFFFFFFFF)", (const char *)&queryFormat, "runtimeData->physicsInstances[1] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    ++Model->physicsUsageCounter.clientEnt;
  }
  else
  {
    v13 = Physics_InstantiateAsset(v26, Model, physicsAsset, Ref, &outOrigin, &quat, 1, 0, 1, &v32, Physics_InstantiationForceTypeStatic, Physics_InstantiationFilterTypeNone, 0);
    _RBX->physicsInstances[1] = v13;
    if ( v13 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 467, ASSERT_TYPE_ASSERT, "(runtimeData->physicsInstances[1] != 0xFFFFFFFF)", (const char *)&queryFormat, "runtimeData->physicsInstances[1] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
  }
  RigidBodyID = Physics_GetRigidBodyID(worldId, _RBX->physicsInstances[0], 0);
  _RBX->primaryBody = RigidBodyID;
  if ( !Physics_IsRigidBodyValid(worldId, RigidBodyID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 472, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( clientAuthWorldId, runtimeData->primaryBody )") )
    __debugbreak();
  v15 = *((_BYTE *)_RBX + 12) ^ (*((_BYTE *)_RBX + 12) ^ Physics_IsRigidBodyDynamic(worldId, _RBX->primaryBody)) & 1;
  *((_BYTE *)_RBX + 12) = v15;
  if ( (v15 & 1) != 0 || Physics_IsRigidBodyStatic(worldId, _RBX->primaryBody) )
    v16 = 0;
  else
    v16 = 2;
  v17 = v16 | *((_BYTE *)_RBX + 12) & 0xFD;
  *((_BYTE *)_RBX + 12) = v17;
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
  CG_ClientModel_Physics_SetupBoneMappings((const LocalClientNum_t)v3, v2, _RBX, dobj, physicsAsset);
  if ( (*((_BYTE *)_RBX + 12) & 1) != 0 )
  {
    if ( _RBX->keyframedOffsetMapping.m_data.m_size )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442E7320, 280i64, (unsigned int)v2, Model->name);
    if ( _RBX->keyframedBoneMapping.m_data.m_size )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442E73B0, 281i64, (unsigned int)v2, Model->name);
  }
  if ( Physics_IsInstanceDetailBounded(v26, _RBX->physicsInstances[1]) )
  {
    CG_ClientModel_Physics_SetupDetailBoneMapping((const LocalClientNum_t)v3, _RBX, v20, physicsAsset);
  }
  else
  {
    v21 = *((_BYTE *)_RBX + 12);
    if ( (v21 & 1) == 0 && (v21 & 2) != 0 && (_RBX->dynamicBoneMapping.m_data.m_size || _RBX->keyframedOffsetMapping.m_data.m_size || _RBX->keyframedBoneMapping.m_data.m_size) )
      bitarray_base<bitarray<384>>::setBit(&s_CG_ClientModel_Physics_NeedsPropagation[v3], v2);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+150h+outOrigin]
    vmovss  dword ptr [rbx+50h], xmm0
    vmovss  xmm1, dword ptr [rsp+150h+outOrigin+4]
    vmovss  dword ptr [rbx+54h], xmm1
    vmovss  xmm0, dword ptr [rbp+50h+outOrigin+8]
    vmovss  dword ptr [rbx+58h], xmm0
    vmovups xmm1, xmmword ptr [rbp+50h+quat]
    vmovups xmmword ptr [rbx+5Ch], xmm1
  }
  _RBX->detailCache.cached = 0;
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
  unsigned int bodyId; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
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
        _RAX = CG_DObjGetLocalBoneMatrix(Pose, DObj, m_buffer->boneIndex);
        _RBX = &_RAX->quat;
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  [rsp+88h+var_58], xmm0
        }
        if ( (v26 & 0x7F800000) == 2139095040 )
          goto LABEL_46;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+4]
          vmovss  [rsp+88h+var_58], xmm0
        }
        if ( (v27 & 0x7F800000) == 2139095040 )
          goto LABEL_46;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+8]
          vmovss  [rsp+88h+var_58], xmm0
        }
        if ( (v28 & 0x7F800000) == 2139095040 )
          goto LABEL_46;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0Ch]
          vmovss  [rsp+88h+var_58], xmm0
        }
        if ( (v29 & 0x7F800000) == 2139095040 )
        {
LABEL_46:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 696, ASSERT_TYPE_ASSERT, "(!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] ))", (const char *)&queryFormat, "!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+10h]
          vmovss  [rsp+88h+var_58], xmm0
        }
        if ( (v30 & 0x7F800000) == 2139095040 )
          goto LABEL_47;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+14h]
          vmovss  [rsp+88h+var_58], xmm0
        }
        if ( (v31 & 0x7F800000) == 2139095040 )
          goto LABEL_47;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+18h]
          vmovss  [rsp+88h+var_58], xmm0
        }
        if ( (v32 & 0x7F800000) == 2139095040 )
        {
LABEL_47:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_physics.cpp", 697, ASSERT_TYPE_ASSERT, "(!IS_NAN( dobjMat->trans[0] ) && !IS_NAN( dobjMat->trans[1] ) && !IS_NAN( dobjMat->trans[2] ))", (const char *)&queryFormat, "!IS_NAN( dobjMat->trans[0] ) && !IS_NAN( dobjMat->trans[1] ) && !IS_NAN( dobjMat->trans[2] )") )
            __debugbreak();
        }
        __asm { vmovss  xmm0, dword ptr [rbx+10h] }
        bodyId = m_buffer->bodyId;
        __asm
        {
          vaddss  xmm1, xmm0, dword ptr [rax+7Ch]
          vmovss  dword ptr [rsp+88h+position], xmm1
          vmovss  xmm2, dword ptr [rbx+14h]
          vaddss  xmm0, xmm2, dword ptr [rax+80h]
          vmovss  dword ptr [rsp+88h+position+4], xmm0
          vmovss  xmm1, dword ptr [rbx+18h]
          vaddss  xmm2, xmm1, dword ptr [rax+84h]
          vmovss  dword ptr [rsp+88h+position+8], xmm2
        }
        Physics_WarpLeafDetailRigidBodyTo(v4, bodyId, &position, _RBX, 0, 0);
        ++m_buffer;
      }
      while ( m_buffer != &s_CG_ClientModel_Physics_RuntimeData[0][v5].detailBoneMapping.m_data.m_buffer[s_CG_ClientModel_Physics_RuntimeData[0][v5].detailBoneMapping.m_data.m_size] );
    }
    s_CG_ClientModel_Physics_RuntimeData[0][v5].detailCache.cached = 1;
    Sys_ProfEndNamedEvent();
  }
  return s_CG_ClientModel_Physics_RuntimeData[0][v5].physicsInstances[1];
}

