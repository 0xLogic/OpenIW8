/*
==============
DObjFreeProceduralBones
==============
*/

void __fastcall DObjFreeProceduralBones(DObj *dobj)
{
  ?DObjFreeProceduralBones@@YAXPEAUDObj@@@Z(dobj);
}

/*
==============
DObjCloneProceduralBones
==============
*/

void __fastcall DObjCloneProceduralBones(const DObj *srcDObj, DObj *destDObj)
{
  ?DObjCloneProceduralBones@@YAXPEBUDObj@@PEAU1@@Z(srcDObj, destDObj);
}

/*
==============
DObjTouchProceduralBones
==============
*/

void __fastcall DObjTouchProceduralBones(const DObj *obj)
{
  ?DObjTouchProceduralBones@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjReinitializeProceduralBones
==============
*/

void __fastcall DObjReinitializeProceduralBones(DObj *dobj)
{
  ?DObjReinitializeProceduralBones@@YAXPEAUDObj@@@Z(dobj);
}

/*
==============
DObjProceduralBones_TryLock
==============
*/

DObjProceduralBones *__fastcall DObjProceduralBones_TryLock(const DObj *obj)
{
  return ?DObjProceduralBones_TryLock@@YAPEAUDObjProceduralBones@@PEBUDObj@@@Z(obj);
}

/*
==============
DObjHasProceduralBones
==============
*/

bool __fastcall DObjHasProceduralBones(const DObj *dobj)
{
  return ?DObjHasProceduralBones@@YA_NPEBUDObj@@@Z(dobj);
}

/*
==============
DObjInitializeProceduralBones
==============
*/

void __fastcall DObjInitializeProceduralBones(DObj *dobj)
{
  ?DObjInitializeProceduralBones@@YAXPEAUDObj@@@Z(dobj);
}

/*
==============
DObjProceduralBones_Unlock
==============
*/

void __fastcall DObjProceduralBones_Unlock(const DObj *obj)
{
  ?DObjProceduralBones_Unlock@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjLockProceduralBones
==============
*/

DObjProceduralBones *__fastcall DObjLockProceduralBones(const DObj *obj)
{
  return ?DObjLockProceduralBones@@YAPEAUDObjProceduralBones@@PEBUDObj@@@Z(obj);
}

/*
==============
DObjUnlockProceduralBones
==============
*/

void __fastcall DObjUnlockProceduralBones(const DObj *obj)
{
  ?DObjUnlockProceduralBones@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjCloneProceduralBones
==============
*/
void DObjCloneProceduralBones(const DObj *srcDObj, DObj *destDObj)
{
  DObjProceduralBones *v4; 
  bool HasClientFlag; 
  unsigned int *v6; 
  DObjProceduralBonesHandle v7; 
  DObjProceduralBones *Instance; 
  DObjProceduralBones *v9; 
  signed __int64 v10; 
  DObjProceduralBonesModelInfo *modelInfo; 
  signed __int64 v12; 
  unsigned __int16 *pinConstraintBoneIndices; 
  signed __int64 v14; 
  bool isClientDObj; 

  if ( !srcDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 223, ASSERT_TYPE_ASSERT, "(srcDObj != 0)", (const char *)&queryFormat, "srcDObj != NULL") )
    __debugbreak();
  if ( !destDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 224, ASSERT_TYPE_ASSERT, "(destDObj != 0)", (const char *)&queryFormat, "destDObj != NULL") )
    __debugbreak();
  if ( !DObjHasClientFlag(srcDObj) && DObjHasClientFlag(destDObj) )
    goto LABEL_18;
  destDObj->proceduralBonesHandle.m_value = 0;
  if ( !srcDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1225, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( srcDObj->proceduralBonesHandle.m_value )
  {
    v4 = XAnimProceduralBonesAllocator_TryLock(srcDObj->proceduralBonesHandle);
    if ( v4 )
    {
      HasClientFlag = DObjHasClientFlag(destDObj);
      LODWORD(v6) = XAnimProceduralBonesAllocator_CreateHandle((bool)&isClientDObj, HasClientFlag);
      v7.m_value = *v6;
      destDObj->proceduralBonesHandle.m_value = *v6;
      Instance = XAnimProceduralBonesAllocator_AllocateInstance(v7, v4->allocationSize);
      v9 = Instance;
      if ( Instance )
      {
        memcpy_0(Instance, v4, v4->allocationSize);
        v10 = (char *)v4->physicsBones - (char *)v4;
        modelInfo = v4->modelInfo;
        v12 = (char *)v4->targetBoneInfo - (char *)v4;
        pinConstraintBoneIndices = v4->pinConstraintBoneIndices;
        v14 = (char *)v4->collidableBoneInfo - (char *)v4;
        v9->sourceBoneIndices = (unsigned __int16 *)((char *)v9 + (char *)v4->sourceBoneIndices - (char *)v4);
        v9->physicsBones = (XAnimPhysicsBone *)((char *)v9 + v10);
        v9->targetBoneInfo = (XAnimConstraintTargetBone *)((char *)v9 + v12);
        v9->modelInfo = (DObjProceduralBonesModelInfo *)((char *)v9 + (char *)modelInfo - (char *)v4);
        v9->collidableBoneInfo = (XAnimCollidableBoneInfo *)((char *)v9 + v14);
        v9->pinConstraintBoneIndices = (unsigned __int16 *)((char *)v9 + (char *)pinConstraintBoneIndices - (char *)v4);
        DObjPhysicsState_CloneRootTrans(&v4->physicsState, &v9->physicsState);
        DObjPhysicsState_ClonePrevRootTrans(&v4->physicsState, &v9->physicsState);
      }
      if ( srcDObj->proceduralBonesHandle.m_value )
        XAnimProceduralBonesAllocator_Unlock(srcDObj->proceduralBonesHandle);
      return;
    }
LABEL_18:
    DObjInitializeProceduralBones(destDObj);
  }
}

/*
==============
DObjFreeProceduralBones
==============
*/
void DObjFreeProceduralBones(DObj *dobj)
{
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1206, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  XAnimProceduralBonesAllocator_DestroyHandle(dobj->proceduralBonesHandle);
  dobj->proceduralBonesHandle.m_value = 0;
}

/*
==============
DObjGetProceduralBonesMemoryLayout
==============
*/
unsigned __int64 DObjGetProceduralBonesMemoryLayout(const DObj *dobj, const bool enablePhysicsBones, DObjProceduralBonesMemoryLayout *outLayout)
{
  unsigned int v6; 
  int NumModels; 
  int v8; 
  unsigned int totalDynamicBones; 
  unsigned int totalCustomPinConstraints; 
  const XModel *Model; 
  XAnimProceduralBones *proceduralBones; 
  XAnimDynamicBones *dynamicBones; 
  const char *Name; 
  const char *v15; 
  unsigned int totalConstraints; 
  bool v17; 
  unsigned int v18; 
  unsigned int sourceBonesAllocSize; 
  unsigned int v20; 
  unsigned int targetBonesAllocSize; 
  unsigned int v22; 
  unsigned int collidableBonesAllocSize; 
  unsigned int v24; 
  unsigned int dynamicBonesAllocSize; 
  unsigned int v26; 
  unsigned int boneIndicesAllocSize; 
  unsigned int v28; 
  unsigned int postPhysicsConstraintBitsAllocSize; 
  char *fmt; 

  v6 = 0;
  NumModels = DObjGetNumModels(dobj);
  *(_QWORD *)&outLayout->numActiveModels = 0i64;
  v8 = 0;
  *(_QWORD *)&outLayout->totalConstraints = 0i64;
  totalDynamicBones = 0;
  *(_QWORD *)&outLayout->totalDynamicBones = 0i64;
  totalCustomPinConstraints = 0;
  outLayout->totalCustomPinConstraints = 0;
  if ( NumModels > 0 )
  {
    do
    {
      Model = DObjGetModel(dobj, v8);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 92, ASSERT_TYPE_ASSERT, "(model != 0)", (const char *)&queryFormat, "model != NULL") )
        __debugbreak();
      proceduralBones = Model->proceduralBones;
      dynamicBones = Model->dynamicBones;
      if ( proceduralBones || dynamicBones )
      {
        ++outLayout->numActiveModels;
        if ( proceduralBones )
        {
          outLayout->totalTargetBones += proceduralBones->numTargetBones;
          outLayout->totalConstraints += proceduralBones->numConstraints;
        }
        if ( enablePhysicsBones && dynamicBones )
        {
          outLayout->totalDynamicBones += dynamicBones->numDynamicBones;
          outLayout->totalCollidableBones += dynamicBones->numCollidableBones;
          outLayout->totalBoneIndices += dynamicBones->numPinConstraintBoneNames;
          outLayout->totalCustomPinConstraints += dynamicBones->numCustomPinConstraints;
        }
      }
      ++v8;
    }
    while ( v8 < NumModels );
    totalDynamicBones = outLayout->totalDynamicBones;
    v6 = 0;
    totalCustomPinConstraints = outLayout->totalCustomPinConstraints;
  }
  outLayout->totalAllocSize = 0;
  if ( totalDynamicBones > 0x46 )
  {
    Name = DObjGetName(dobj);
    LODWORD(fmt) = 69;
    Com_PrintWarning(19, "Exceeded max. dynamic bones on dobj '%s' (%d, max %d) - dynamic bones will be disabled\n", Name, totalDynamicBones, fmt);
    *(_QWORD *)&outLayout->totalDynamicBones = 0i64;
    totalCustomPinConstraints = 0;
    outLayout->totalCustomPinConstraints = 0;
    totalDynamicBones = 0;
  }
  if ( totalCustomPinConstraints > 0x32 )
  {
    v15 = DObjGetName(dobj);
    LODWORD(fmt) = 50;
    Com_PrintWarning(19, "Exceeded max. pin constraints on dobj '%s' (%d, max %d) - extra pin constraints for straps etc. will be disabled\n", v15, totalCustomPinConstraints, fmt);
    totalDynamicBones = outLayout->totalDynamicBones;
    *(_QWORD *)&outLayout->totalBoneIndices = 0i64;
  }
  totalConstraints = outLayout->totalConstraints;
  if ( totalDynamicBones )
  {
    ++totalDynamicBones;
    v6 = outLayout->totalConstraints;
    outLayout->totalDynamicBones = totalDynamicBones;
  }
  else
  {
    outLayout->totalCollidableBones = 0;
    *(_QWORD *)&outLayout->totalBoneIndices = 0i64;
    if ( !totalConstraints )
      *(_QWORD *)&outLayout->numActiveModels = 0i64;
  }
  if ( outLayout->numActiveModels )
  {
    outLayout->activeModelsAllocSize = 32 * outLayout->numActiveModels;
    outLayout->sourceBonesAllocSize = 4 * totalConstraints;
    outLayout->targetBonesAllocSize = 4 * outLayout->totalTargetBones;
    outLayout->dynamicBonesAllocSize = 264 * totalDynamicBones;
    outLayout->collidableBonesAllocSize = 4 * outLayout->totalCollidableBones;
    outLayout->boneIndicesAllocSize = 2 * outLayout->totalBoneIndices;
    outLayout->postPhysicsConstraintBitsAllocSize = 4 * ((v6 + 31) >> 5);
    v17 = ((outLayout->totalAllocSize + 7) & 0xFFFFFFF8) == 0;
    outLayout->totalAllocSize = ((outLayout->totalAllocSize + 7) & 0xFFFFFFF8) + 448;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 178, ASSERT_TYPE_ASSERT, "(DObjProceduralBonesMemoryLayoutReserve( outLayout, sizeof( DObjProceduralBones ), alignof( DObjProceduralBones ) ) == 0)", (const char *)&queryFormat, "DObjProceduralBonesMemoryLayoutReserve( outLayout, sizeof( DObjProceduralBones ), alignof( DObjProceduralBones ) ) == 0") )
      __debugbreak();
    v18 = DObjProceduralBonesMemoryLayoutReserve(outLayout, outLayout->activeModelsAllocSize, 8u);
    sourceBonesAllocSize = outLayout->sourceBonesAllocSize;
    outLayout->activeModelsOffset = v18;
    v20 = DObjProceduralBonesMemoryLayoutReserve(outLayout, sourceBonesAllocSize, 2u);
    targetBonesAllocSize = outLayout->targetBonesAllocSize;
    outLayout->sourceBonesOffset = v20;
    v22 = DObjProceduralBonesMemoryLayoutReserve(outLayout, targetBonesAllocSize, 2u);
    collidableBonesAllocSize = outLayout->collidableBonesAllocSize;
    outLayout->targetBonesOffset = v22;
    v24 = DObjProceduralBonesMemoryLayoutReserve(outLayout, collidableBonesAllocSize, 2u);
    dynamicBonesAllocSize = outLayout->dynamicBonesAllocSize;
    outLayout->collidableBonesOffset = v24;
    v26 = DObjProceduralBonesMemoryLayoutReserve(outLayout, dynamicBonesAllocSize, 8u);
    boneIndicesAllocSize = outLayout->boneIndicesAllocSize;
    outLayout->dynamicBonesOffset = v26;
    v28 = DObjProceduralBonesMemoryLayoutReserve(outLayout, boneIndicesAllocSize, 2u);
    postPhysicsConstraintBitsAllocSize = outLayout->postPhysicsConstraintBitsAllocSize;
    outLayout->boneIndicesOffset = v28;
    outLayout->postPhysicsConstraintBitsOffset = DObjProceduralBonesMemoryLayoutReserve(outLayout, postPhysicsConstraintBitsAllocSize, 4u);
  }
  return outLayout->totalAllocSize;
}

/*
==============
DObjHasProceduralBones
==============
*/
bool DObjHasProceduralBones(const DObj *dobj)
{
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1225, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  return dobj->proceduralBonesHandle.m_value != 0;
}

/*
==============
DObjInitializeProceduralBones
==============
*/
void DObjInitializeProceduralBones(DObj *dobj)
{
  bool HasClientFlag; 
  bool v3; 
  unsigned int *v4; 
  DObjProceduralBonesMemoryLayout outLayout; 
  bool isClientDObj; 

  if ( !dobj )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1118, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 57, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
  }
  HasClientFlag = DObjHasClientFlag(dobj);
  if ( DObjGetProceduralBonesMemoryLayout(dobj, HasClientFlag, &outLayout) )
  {
    v3 = DObjHasClientFlag(dobj);
    LODWORD(v4) = XAnimProceduralBonesAllocator_CreateHandle((bool)&isClientDObj, v3);
    dobj->proceduralBonesHandle.m_value = *v4;
  }
  else
  {
    dobj->proceduralBonesHandle.m_value = 0;
  }
}

/*
==============
DObjLockProceduralBones
==============
*/
DObjProceduralBones *DObjLockProceduralBones(const DObj *obj)
{
  unsigned int m_value; 
  DObjProceduralBones *result; 
  DObjProceduralBones *outProcBones; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1163, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->proceduralBonesHandle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1164, ASSERT_TYPE_ASSERT, "(obj->proceduralBonesHandle.IsValid())", (const char *)&queryFormat, "obj->proceduralBonesHandle.IsValid()") )
    __debugbreak();
  XAnimProceduralBonesAllocator_Lock(obj->proceduralBonesHandle);
  m_value = obj->proceduralBonesHandle.m_value;
  outProcBones = NULL;
  if ( !XAnimProceduralBonesAllocator_TryGetProceduralBones((DObjProceduralBonesHandle)m_value, &outProcBones) )
    return outProcBones;
  if ( outProcBones )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1171, ASSERT_TYPE_ASSERT, "(procBones == nullptr)", (const char *)&queryFormat, "procBones == nullptr") )
      __debugbreak();
  }
  result = DObjProceduralBones_Create(obj);
  outProcBones = result;
  if ( result )
  {
    result->settlingEnabled = (obj->proceduralBonesHandle.m_value & 0x20000000) != 0;
    return outProcBones;
  }
  return result;
}

/*
==============
DObjProceduralBonesMemoryLayoutReserve
==============
*/
__int64 DObjProceduralBonesMemoryLayoutReserve(DObjProceduralBonesMemoryLayout *inoutLayout, unsigned int size, unsigned int alignment)
{
  unsigned int totalAllocSize; 
  __int64 result; 

  totalAllocSize = inoutLayout->totalAllocSize;
  if ( (!alignment || ((alignment - 1i64) & alignment) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 679, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  result = -alignment & (totalAllocSize + alignment - 1);
  inoutLayout->totalAllocSize = result + size;
  return result;
}

/*
==============
DObjProceduralBones_Create
==============
*/

DObjProceduralBones *__fastcall DObjProceduralBones_Create(const DObj *dobj, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  signed __int64 v4; 
  void *v6; 
  const DObj *v7; 
  DObjClientPartBits *p_ignoreBits; 
  __int64 i; 
  DObjClientPartBits *p_inoutInputBits; 
  __int64 j; 
  unsigned __int64 ProceduralBonesMemoryLayout; 
  DObjProceduralBones *Instance; 
  __int64 v14; 
  const XModel *Model; 
  const char *Name; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  const XModel *v23; 
  const XAnimProceduralBones *proceduralBones; 
  const XAnimDynamicBones *dynamicBones; 
  unsigned int v26; 
  __int64 v27; 
  unsigned __int8 v28; 
  unsigned int numTargetBones; 
  unsigned int v30; 
  __int64 v31; 
  scr_string_t v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  DObjClientPartBits *p_outChildPartBits; 
  __int64 k; 
  unsigned int v38; 
  __int64 v39; 
  __int64 v40; 
  __int16 v41; 
  unsigned int v42; 
  const DObj *v43; 
  __int64 v47; 
  __int64 v48; 
  size_t v60; 
  DObjClientPartBits *p_outLayout; 
  __int64 m; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  unsigned int v66; 
  const XAnimConstraintTargetBone *v67; 
  unsigned int v68; 
  __int64 v69; 
  int v70; 
  __int64 v71; 
  __int64 v72; 
  unsigned __int16 boneIndex; 
  unsigned int v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  int v78; 
  __int64 v79; 
  unsigned int v80; 
  __int64 v81; 
  int v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  const char *v86; 
  const char *BoneName; 
  __int64 v88; 
  __int64 v89; 
  const char *v101; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned __int64 v104; 
  int v105; 
  const char *v106; 
  __int64 v107; 
  __int64 v108; 
  __int64 v109; 
  int v110; 
  __int64 v111; 
  unsigned int v112; 
  __int64 v113; 
  int v114; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  const char *v118; 
  const char *v119; 
  char *fmt; 
  __int64 modelBoneOffset; 
  __int64 dynamicBoneOffset; 
  __int64 collidableBoneOffset; 
  __int64 boneIndexOffset; 
  bool HasClientFlag; 
  unsigned int v126; 
  unsigned int v128; 
  unsigned int v129; 
  int NumModels; 
  __int64 v131; 
  __int64 v132; 
  unsigned int v133; 
  unsigned int val; 
  unsigned int v135; 
  __int64 v136; 
  __int64 v137; 
  unsigned int v138; 
  int v139; 
  unsigned int inoutCollisionShapesOffset; 
  DObjProceduralBones *v141; 
  __int64 v142; 
  DObjClientPartBits outLayout; 
  DObjClientPartBits outChildPartBits; 
  DObjClientPartBits ignoreBits; 
  DObjClientPartBits inoutInputBits; 
  DObjBoneParentMap outParentMap; 
  __int128 v148; 

  v6 = alloca(v4);
  v142 = -2i64;
  v148 = _XMM6;
  v7 = dobj;
  Sys_ProfBeginNamedEvent(0xFF4588FF, "DObjProceduralBones_Create");
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 782, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  p_ignoreBits = &ignoreBits;
  for ( i = 24i64; i; --i )
  {
    p_ignoreBits->array[0] = 0;
    p_ignoreBits = (DObjClientPartBits *)((char *)p_ignoreBits + 4);
  }
  p_inoutInputBits = &inoutInputBits;
  for ( j = 24i64; j; --j )
  {
    p_inoutInputBits->array[0] = 0;
    p_inoutInputBits = (DObjClientPartBits *)((char *)p_inoutInputBits + 4);
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 57, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  HasClientFlag = DObjHasClientFlag(v7);
  ProceduralBonesMemoryLayout = DObjGetProceduralBonesMemoryLayout(v7, HasClientFlag, (DObjProceduralBonesMemoryLayout *)&outLayout);
  if ( ProceduralBonesMemoryLayout >= 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 796, ASSERT_TYPE_ASSERT, "(allocationSize < 131072)", (const char *)&queryFormat, "allocationSize < MT_MAX_SIZE") )
    __debugbreak();
  if ( !ProceduralBonesMemoryLayout )
    goto LABEL_20;
  DObjBuildBoneParentMap(v7, &outParentMap);
  Instance = XAnimProceduralBonesAllocator_AllocateInstance(v7->proceduralBonesHandle, ProceduralBonesMemoryLayout);
  v14 = (__int64)Instance;
  v141 = Instance;
  if ( !Instance )
  {
    if ( !DObjHasClientFlag(v7) )
    {
      XAnimProceduralBonesAllocator_PrintDebugInfoToConsole();
      Model = DObjGetModel(v7, 0);
      Name = XModelGetName(Model);
      LODWORD(fmt) = v7->entnum - 1;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441A3010, 5966i64, "DObjProceduralBones_Create: not enough memory for procedural bones on server entity %d\n(alloc size %zu, model '%s')", fmt, ProceduralBonesMemoryLayout, Name);
    }
LABEL_20:
    v14 = 0i64;
    goto LABEL_21;
  }
  Instance->sourceBoneIndices = (unsigned __int16 *)((char *)Instance + outLayout.array[15]);
  Instance->physicsBones = (XAnimPhysicsBone *)((char *)Instance + outLayout.array[18]);
  Instance->targetBoneInfo = (XAnimConstraintTargetBone *)((char *)Instance + outLayout.array[16]);
  Instance->modelInfo = (DObjProceduralBonesModelInfo *)((char *)Instance + outLayout.array[14]);
  Instance->collidableBoneInfo = (XAnimCollidableBoneInfo *)((char *)Instance + outLayout.array[17]);
  Instance->pinConstraintBoneIndices = (unsigned __int16 *)((char *)Instance + outLayout.array[19]);
  Instance->postPhysicsConstraintBits = (unsigned int *)((char *)&Instance->allocationSize + outLayout.array[20]);
  Instance->allocationSize = outLayout.array[21];
  Instance->numConstraints = outLayout.array[2];
  v18 = outLayout.array[0];
  Instance->numModels = truncate_cast<unsigned char,unsigned int>(outLayout.array[0]);
  *(_DWORD *)(v14 + 40) = outLayout.array[1];
  v19 = outLayout.array[4];
  *(_DWORD *)(v14 + 48) = outLayout.array[4];
  *(_DWORD *)(v14 + 52) = outLayout.array[3];
  *(_DWORD *)(v14 + 76) = outLayout.array[5];
  *(_DWORD *)(v14 + 88) = outLayout.array[6];
  v20 = 0;
  v21 = 0;
  val = 0;
  v126 = 0;
  inoutCollisionShapesOffset = 0;
  v128 = 0;
  v133 = 0;
  v129 = 0;
  v135 = 0;
  v138 = 0;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits((bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)(v14 + 384));
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits((bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)(v14 + 416));
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits((bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)(v14 + 320));
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits((bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)(v14 + 352));
  if ( v19 )
  {
    v22 = *(_QWORD *)(v14 + 56);
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 483, ASSERT_TYPE_ASSERT, "(worldBone != 0)", (const char *)&queryFormat, "worldBone != NULL") )
      __debugbreak();
    *(_QWORD *)(v22 + 44) = 0i64;
    *(_DWORD *)(v22 + 52) = 0;
    *(_QWORD *)(v22 + 28) = 0i64;
    *(_DWORD *)(v22 + 36) = 0;
    *(_DWORD *)(v22 + 40) = 1065353216;
    *(_QWORD *)(v22 + 84) = 0i64;
    *(_QWORD *)(v22 + 92) = 0i64;
    *(_QWORD *)(v22 + 100) = 0i64;
    *(_QWORD *)(v22 + 20) = 0i64;
    *(_QWORD *)(v22 + 184) = 0i64;
    *(_DWORD *)(v22 + 192) = 0;
    *(_DWORD *)v22 = 16711935;
    *(_WORD *)(v22 + 17) = 255;
    v128 = 1;
  }
  *(_WORD *)(v14 + 5) = 256;
  NumModels = DObjGetNumModels(v7);
  v139 = 0;
  if ( NumModels > 0 )
  {
    v136 = 0i64;
    do
    {
      v23 = DObjGetModel(v7, v20);
      if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 854, ASSERT_TYPE_ASSERT, "(model != 0)", (const char *)&queryFormat, "model != NULL") )
        __debugbreak();
      proceduralBones = v23->proceduralBones;
      dynamicBones = v23->dynamicBones;
      v26 = v138;
      v138 += v23->numBones;
      if ( proceduralBones || dynamicBones )
      {
        v27 = *(_QWORD *)(v14 + 8) + 32i64 * v126;
        *(_QWORD *)v27 = proceduralBones;
        *(_QWORD *)(v27 + 8) = dynamicBones;
        if ( (v20 < 0 || (unsigned int)v20 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v20, "signed", v136) )
          __debugbreak();
        *(_BYTE *)(v27 + 16) = v20;
        *(_BYTE *)(v27 + 19) = truncate_cast<unsigned char,unsigned int>(val);
        *(_BYTE *)(v27 + 18) = truncate_cast<unsigned char,unsigned int>(v21);
        if ( proceduralBones )
          v28 = truncate_cast<unsigned char,unsigned int>(proceduralBones->numConstraints);
        else
          v28 = 0;
        *(_BYTE *)(v27 + 17) = v28;
        *(_DWORD *)(v27 + 20) = 0;
        *(_WORD *)(v27 + 25) = 0;
        *(_BYTE *)(v27 + 24) = 0;
        if ( dynamicBones )
        {
          if ( outLayout.array[4] && HasClientFlag )
          {
            *(_BYTE *)(v27 + 21) = truncate_cast<unsigned char,unsigned int>(dynamicBones->numDynamicBones);
            *(_BYTE *)(v27 + 20) = truncate_cast<unsigned char,unsigned int>(v128);
            *(_BYTE *)(v27 + 22) = truncate_cast<unsigned char,unsigned int>(v133);
            if ( outLayout.array[6] )
            {
              *(_BYTE *)(v27 + 23) = truncate_cast<unsigned char,unsigned int>(v129);
              *(_BYTE *)(v27 + 24) = truncate_cast<unsigned char,unsigned int>(dynamicBones->numCustomPinConstraints);
              *(_BYTE *)(v27 + 25) = truncate_cast<unsigned char,unsigned int>(v135);
            }
            *(_BYTE *)(v27 + 26) = 1;
          }
          DObjProceduralBones_InitializePhysicsBones(dobj, (DObjProceduralBones *)v14, dynamicBones, &outParentMap, v20, v26, v128, v133, v129, &inoutCollisionShapesOffset, &ignoreBits);
          if ( outLayout.array[4] )
          {
            if ( HasClientFlag )
            {
              v128 += dynamicBones->numDynamicBones;
              v133 += dynamicBones->numCollidableBones;
              if ( outLayout.array[6] )
              {
                v129 += dynamicBones->numPinConstraintBoneNames;
                v135 += dynamicBones->numCustomPinConstraints;
              }
            }
          }
        }
        if ( proceduralBones )
        {
          numTargetBones = proceduralBones->numTargetBones;
          v30 = 0;
          if ( numTargetBones )
          {
            v31 = 0i64;
            do
            {
              v32 = proceduralBones->targetBoneNames[v31];
              if ( v32 )
                DObjProceduralBones_InitializeTargetBone(dobj, (DObjProceduralBones *)v14, v30 + v21, v32, &outParentMap, &inoutInputBits);
              ++v30;
              ++v31;
            }
            while ( v30 < numTargetBones );
            v20 = v139;
          }
          DObjProceduralBones_InitializeConstraintBoneIndices(dobj, (DObjProceduralBones *)v14, proceduralBones, v21, val, &outParentMap, &inoutInputBits);
          v21 += numTargetBones;
          v33 = proceduralBones->numConstraints + val;
          val = v33;
        }
        else
        {
          v33 = val;
        }
        v34 = ++v126;
        if ( v21 > outLayout.array[1] )
        {
          LODWORD(dynamicBoneOffset) = outLayout.array[1];
          LODWORD(modelBoneOffset) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 939, ASSERT_TYPE_ASSERT, "( targetBonesOffset ) <= ( layout.totalTargetBones )", "targetBonesOffset not in [0, layout.totalTargetBones]\n\t%u not in [0, %u]", modelBoneOffset, dynamicBoneOffset) )
            __debugbreak();
        }
        if ( v33 > outLayout.array[2] )
        {
          LODWORD(dynamicBoneOffset) = outLayout.array[2];
          LODWORD(modelBoneOffset) = v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 940, ASSERT_TYPE_ASSERT, "( sourceBoneIndicesOffset ) <= ( layout.totalConstraints )", "sourceBoneIndicesOffset not in [0, layout.totalConstraints]\n\t%u not in [0, %u]", modelBoneOffset, dynamicBoneOffset) )
            __debugbreak();
        }
        v18 = outLayout.array[0];
        if ( v34 > outLayout.array[0] )
        {
          LODWORD(dynamicBoneOffset) = outLayout.array[0];
          LODWORD(modelBoneOffset) = v34;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 941, ASSERT_TYPE_ASSERT, "( numActiveModels ) <= ( layout.numActiveModels )", "numActiveModels not in [0, layout.numActiveModels]\n\t%u not in [0, %u]", modelBoneOffset, dynamicBoneOffset) )
            __debugbreak();
        }
        if ( v128 > outLayout.array[4] )
        {
          LODWORD(dynamicBoneOffset) = outLayout.array[4];
          LODWORD(modelBoneOffset) = v128;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 942, ASSERT_TYPE_ASSERT, "( dynamicBoneOffset ) <= ( layout.totalDynamicBones )", "dynamicBoneOffset not in [0, layout.totalDynamicBones]\n\t%u not in [0, %u]", modelBoneOffset, dynamicBoneOffset) )
            __debugbreak();
        }
        if ( v129 > outLayout.array[5] )
        {
          LODWORD(dynamicBoneOffset) = outLayout.array[5];
          LODWORD(modelBoneOffset) = v129;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 943, ASSERT_TYPE_ASSERT, "( boneIndexOffset ) <= ( layout.totalBoneIndices )", "boneIndexOffset not in [0, layout.totalBoneIndices]\n\t%u not in [0, %u]", modelBoneOffset, dynamicBoneOffset) )
            __debugbreak();
        }
      }
      else
      {
        v18 = outLayout.array[0];
      }
      v139 = ++v20;
      ++v136;
      v7 = dobj;
    }
    while ( v20 < NumModels );
  }
  v35 = v126;
  if ( v126 != v18 )
  {
    LODWORD(boneIndexOffset) = v18;
    LODWORD(collidableBoneOffset) = v126;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 946, ASSERT_TYPE_ASSERT, "( numActiveModels ) == ( layout.numActiveModels )", "%s == %s\n\t%i, %i", "numActiveModels", "layout.numActiveModels", collidableBoneOffset, boneIndexOffset) )
      __debugbreak();
  }
  p_outChildPartBits = &outChildPartBits;
  for ( k = 24i64; k; --k )
  {
    p_outChildPartBits->array[0] = 0;
    p_outChildPartBits = (DObjClientPartBits *)((char *)p_outChildPartBits + 4);
  }
  v38 = *(_DWORD *)(v14 + 48);
  if ( v38 )
  {
    v39 = 0i64;
    v40 = v38;
    do
    {
      v41 = *(_WORD *)(v39 + *(_QWORD *)(v14 + 56));
      if ( v41 != 255 )
      {
        v42 = v41 & 0x7FFF;
        if ( v42 >= 0x300 )
        {
          LODWORD(boneIndexOffset) = 768;
          LODWORD(collidableBoneOffset) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", collidableBoneOffset, boneIndexOffset) )
            __debugbreak();
        }
        outChildPartBits.array[(unsigned __int64)v42 >> 5] |= 0x80000000 >> (v42 & 0x1F);
      }
      v39 += 264i64;
      --v40;
    }
    while ( v40 );
    v35 = v126;
  }
  v43 = dobj;
  XAnimProceduralBone_CompleteChildBits(dobj, &outParentMap, &ignoreBits, &outChildPartBits);
  *(_BYTE *)(v14 + 5) = 0;
  __asm
  {
    vpxor   xmm6, xmm6, xmm6
    vpxor   xmm2, xmm2, xmm2
    vpxor   xmm3, xmm3, xmm3
  }
  v47 = 0i64;
  v48 = 3i64;
  do
  {
    _XMM1 = *(_OWORD *)&outChildPartBits.array[v47];
    __asm
    {
      vpand   xmm1, xmm1, xmmword ptr [rbp+rax+2390h+inoutInputBits.baseclass_0.array]
      vpor    xmm2, xmm1, xmm2
    }
    _XMM1 = *(_OWORD *)&outChildPartBits.array[v47 + 4];
    __asm
    {
      vpand   xmm1, xmm1, xmmword ptr [rbp+rax+2390h+inoutInputBits.baseclass_0.array+10h]
      vpor    xmm3, xmm1, xmm3
    }
    v47 += 8i64;
    --v48;
  }
  while ( v48 );
  __asm
  {
    vpor    xmm1, xmm3, xmm2
    vpsrldq xmm0, xmm1, 8
    vpor    xmm2, xmm1, xmm0
    vpsrldq xmm0, xmm2, 4
    vpor    xmm0, xmm2, xmm0
  }
  if ( (_DWORD)_XMM0 )
  {
    *(_BYTE *)(v14 + 5) = 1;
    if ( !*(_DWORD *)(v14 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 961, ASSERT_TYPE_ASSERT, "(dobjProceduralBones->numPhysicsBones > 0)", (const char *)&queryFormat, "dobjProceduralBones->numPhysicsBones > 0") )
      __debugbreak();
    v60 = outLayout.array[13];
    if ( !outLayout.array[13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 962, ASSERT_TYPE_ASSERT, "(layout.postPhysicsConstraintBitsAllocSize > 0)", (const char *)&queryFormat, "layout.postPhysicsConstraintBitsAllocSize > 0") )
      __debugbreak();
    memset_0(*(void **)(v14 + 32), 0, v60);
    p_outLayout = &outLayout;
    for ( m = 24i64; m; --m )
    {
      p_outLayout->array[0] = 0;
      p_outLayout = (DObjClientPartBits *)((char *)p_outLayout + 4);
    }
    if ( v35 )
    {
      v63 = 0i64;
      v64 = v35;
      v137 = v35;
      do
      {
        v65 = *(_QWORD *)(v14 + 8);
        if ( *(_BYTE *)(v63 + v65 + 17) )
        {
          if ( !*(_QWORD *)(v63 + v65) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 976, ASSERT_TYPE_ASSERT, "(modelInfo->asset != nullptr)", (const char *)&queryFormat, "modelInfo->asset != nullptr") )
            __debugbreak();
          v66 = *(unsigned __int8 *)(v63 + v65 + 19);
          v67 = (const XAnimConstraintTargetBone *)(*(_QWORD *)(v14 + 24) + 4i64 * *(unsigned __int8 *)(v63 + v65 + 18));
          DObjProceduralBones_InitializePostPhysicsConstraintBits(*(const XAnimProceduralBones **)(v63 + v65), v66, &outChildPartBits, v67, (const unsigned __int16 *)(*(_QWORD *)(v14 + 16) + 4i64 * v66), *(unsigned int **)(v14 + 32));
          v68 = 0;
          if ( *(_BYTE *)(v63 + v65 + 17) )
          {
            do
            {
              v69 = *(_QWORD *)(v14 + 32);
              if ( !v69 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                __debugbreak();
              v70 = *(_DWORD *)(v69 + 4 * ((__int64)(int)(v68 + v66) >> 5));
              if ( _bittest(&v70, ((_BYTE)v68 + (_BYTE)v66) & 0x1F) )
              {
                v71 = *(_QWORD *)(v63 + v65);
                v72 = *(_QWORD *)(v71 + 8) + 88i64 * v68;
                if ( (unsigned int)*(unsigned __int8 *)(v72 + 1) >= *(_DWORD *)(v71 + 20) )
                {
                  LODWORD(dynamicBoneOffset) = *(_DWORD *)(v71 + 20);
                  LODWORD(modelBoneOffset) = *(unsigned __int8 *)(v72 + 1);
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 992, ASSERT_TYPE_ASSERT, "(unsigned)( constraint->localTargetBoneIndex ) < (unsigned)( modelInfo->asset->numTargetBones )", "constraint->localTargetBoneIndex doesn't index modelInfo->asset->numTargetBones\n\t%i not in [0, %i)", modelBoneOffset, dynamicBoneOffset) )
                    __debugbreak();
                }
                boneIndex = v67[*(unsigned __int8 *)(v72 + 1)].boneIndex;
                if ( boneIndex != 255 )
                {
                  v74 = boneIndex & 0x7FFF;
                  if ( v74 >= 0x300 )
                  {
                    LODWORD(boneIndexOffset) = 768;
                    LODWORD(collidableBoneOffset) = v74;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", collidableBoneOffset, boneIndexOffset) )
                      __debugbreak();
                  }
                  outLayout.array[(unsigned __int64)v74 >> 5] |= 0x80000000 >> (v74 & 0x1F);
                }
              }
              ++v68;
            }
            while ( v68 < *(unsigned __int8 *)(v63 + v65 + 17) );
            v64 = v137;
          }
        }
        v63 += 32i64;
        v137 = --v64;
      }
      while ( v64 );
      v43 = dobj;
      v35 = v126;
    }
    XAnimProceduralBone_CompleteChildBits(v43, &outParentMap, NULL, &outLayout);
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_dumpPostPhysicsConstraints, "xanim_dumpPostPhysicsConstraints") )
    {
      Com_Printf(19, "Post-physics constraints:\n");
      if ( v35 )
      {
        v75 = 0i64;
        v76 = v35;
        v131 = v35;
        do
        {
          v77 = *(_QWORD *)(v14 + 8);
          if ( *(_BYTE *)(v75 + v77 + 17) )
          {
            if ( !*(_QWORD *)(v75 + v77) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1016, ASSERT_TYPE_ASSERT, "(modelInfo->asset != nullptr)", (const char *)&queryFormat, "modelInfo->asset != nullptr") )
                __debugbreak();
              v76 = v131;
            }
            v78 = *(unsigned __int8 *)(v75 + v77 + 19);
            v79 = *(_QWORD *)(v14 + 24) + 4i64 * *(unsigned __int8 *)(v75 + v77 + 18);
            v80 = 0;
            if ( *(_BYTE *)(v75 + v77 + 17) )
            {
              do
              {
                v81 = *(_QWORD *)(v14 + 32);
                if ( !v81 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                  __debugbreak();
                v82 = *(_DWORD *)(v81 + 4 * ((__int64)(int)(v80 + v78) >> 5));
                if ( _bittest(&v82, ((_BYTE)v80 + (_BYTE)v78) & 0x1F) )
                {
                  v83 = *(_QWORD *)(v75 + v77);
                  v84 = *(_QWORD *)(v83 + 8) + 88i64 * v80;
                  if ( (unsigned int)*(unsigned __int8 *)(v84 + 1) >= *(_DWORD *)(v83 + 20) )
                  {
                    LODWORD(dynamicBoneOffset) = *(_DWORD *)(v83 + 20);
                    LODWORD(modelBoneOffset) = *(unsigned __int8 *)(v84 + 1);
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1028, ASSERT_TYPE_ASSERT, "(unsigned)( constraint->localTargetBoneIndex ) < (unsigned)( modelInfo->asset->numTargetBones )", "constraint->localTargetBoneIndex doesn't index modelInfo->asset->numTargetBones\n\t%i not in [0, %i)", modelBoneOffset, dynamicBoneOffset) )
                      __debugbreak();
                  }
                  v85 = *(unsigned __int8 *)(v84 + 1);
                  if ( *(_WORD *)(v79 + 4 * v85) != 255 )
                  {
                    v86 = DObjGetModel(dobj, *(unsigned __int8 *)(v75 + v77 + 16))->name;
                    BoneName = DObjGetBoneName(dobj, *(unsigned __int16 *)(v79 + 4 * v85));
                    Com_Printf(19, "\t%s (%s)\n", BoneName, v86);
                  }
                  v14 = (__int64)v141;
                }
                ++v80;
              }
              while ( v80 < *(unsigned __int8 *)(v75 + v77 + 17) );
              v76 = v131;
            }
          }
          v75 += 32i64;
          v131 = --v76;
        }
        while ( v76 );
        v43 = dobj;
        v35 = v126;
      }
      Com_Printf(19, "======\n");
    }
    v88 = 0i64;
    v89 = 3i64;
    do
    {
      _XMM1 = *(_OWORD *)&outLayout.array[v88];
      __asm
      {
        vpand   xmm1, xmm1, xmmword ptr [rbp+rax+2390h+ignoreBits.baseclass_0.array]
        vpor    xmm6, xmm1, xmm6
      }
      _XMM1 = *(_OWORD *)&outLayout.array[v88 + 4];
      __asm
      {
        vpand   xmm1, xmm1, xmmword ptr [rbp+rax+2390h+ignoreBits.baseclass_0.array+10h]
        vpor    xmm2, xmm1, xmm2
      }
      v88 += 8i64;
      --v89;
    }
    while ( v89 );
    __asm
    {
      vpor    xmm1, xmm6, xmm2
      vpsrldq xmm0, xmm1, 8
      vpor    xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpor    xmm0, xmm2, xmm0
    }
    if ( (_DWORD)_XMM0 )
    {
      v101 = DObjGetName(v43);
      Com_PrintWarning(19, "WARNING: inconsistent procedural/dynamic bone calculation order on DObj '%s'\n", v101);
      Com_PrintWarning(19, "Dynamic bones dependent on post-physics constraints:\n");
      v102 = 0;
      if ( DObjTotalNumBones(v43) > 0 )
      {
        do
        {
          if ( v102 >= 0x300 )
          {
            LODWORD(dynamicBoneOffset) = 768;
            LODWORD(modelBoneOffset) = v102;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", modelBoneOffset, dynamicBoneOffset) )
              __debugbreak();
          }
          v103 = 0x80000000 >> (v102 & 0x1F);
          v104 = (unsigned __int64)v102 >> 5;
          if ( (v103 & ignoreBits.array[v104]) != 0 )
          {
            if ( v102 >= 0x300 )
            {
              LODWORD(dynamicBoneOffset) = 768;
              LODWORD(modelBoneOffset) = v102;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", modelBoneOffset, dynamicBoneOffset) )
                __debugbreak();
            }
            if ( (v103 & outLayout.array[v104]) != 0 )
            {
              v105 = v102 | 0x8000;
              if ( (int)v102 < DObjNumBones(v43) )
                v105 = v102;
              if ( (v105 < 0 || (unsigned int)v105 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v105, "signed", v105) )
                __debugbreak();
              v106 = DObjGetBoneName(v43, (unsigned __int16)v105);
              Com_PrintWarning(19, "\t%s\n", v106);
            }
          }
          ++v102;
        }
        while ( (int)v102 < DObjTotalNumBones(v43) );
        v14 = (__int64)v141;
        v35 = v126;
      }
      Com_PrintWarning(19, "Post-physics constraints:\n");
      if ( v35 )
      {
        v107 = 0i64;
        v108 = v35;
        v132 = v35;
        do
        {
          v109 = *(_QWORD *)(v14 + 8);
          if ( *(_BYTE *)(v107 + v109 + 17) )
          {
            if ( !*(_QWORD *)(v107 + v109) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1065, ASSERT_TYPE_ASSERT, "(modelInfo->asset != nullptr)", (const char *)&queryFormat, "modelInfo->asset != nullptr") )
                __debugbreak();
              v108 = v132;
            }
            v110 = *(unsigned __int8 *)(v107 + v109 + 19);
            v111 = *(_QWORD *)(v14 + 24) + 4i64 * *(unsigned __int8 *)(v107 + v109 + 18);
            v112 = 0;
            if ( *(_BYTE *)(v107 + v109 + 17) )
            {
              do
              {
                v113 = *(_QWORD *)(v14 + 32);
                if ( !v113 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                  __debugbreak();
                v114 = *(_DWORD *)(v113 + 4 * ((__int64)(int)(v112 + v110) >> 5));
                if ( _bittest(&v114, ((_BYTE)v112 + (_BYTE)v110) & 0x1F) )
                {
                  v115 = *(_QWORD *)(v107 + v109);
                  v116 = *(_QWORD *)(v115 + 8) + 88i64 * v112;
                  if ( (unsigned int)*(unsigned __int8 *)(v116 + 1) >= *(_DWORD *)(v115 + 20) )
                  {
                    LODWORD(dynamicBoneOffset) = *(_DWORD *)(v115 + 20);
                    LODWORD(modelBoneOffset) = *(unsigned __int8 *)(v116 + 1);
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1077, ASSERT_TYPE_ASSERT, "(unsigned)( constraint->localTargetBoneIndex ) < (unsigned)( modelInfo->asset->numTargetBones )", "constraint->localTargetBoneIndex doesn't index modelInfo->asset->numTargetBones\n\t%i not in [0, %i)", modelBoneOffset, dynamicBoneOffset) )
                      __debugbreak();
                  }
                  v117 = *(unsigned __int8 *)(v116 + 1);
                  if ( *(_WORD *)(v111 + 4 * v117) != 255 )
                  {
                    v118 = DObjGetModel(dobj, *(unsigned __int8 *)(v107 + v109 + 16))->name;
                    v119 = DObjGetBoneName(dobj, *(unsigned __int16 *)(v111 + 4 * v117));
                    Com_PrintWarning(19, "\t%s (%s)\n", v119, v118);
                  }
                  v14 = (__int64)v141;
                }
                ++v112;
              }
              while ( v112 < *(unsigned __int8 *)(v107 + v109 + 17) );
              v108 = v132;
            }
          }
          v107 += 32i64;
          v132 = --v108;
        }
        while ( v108 );
        v43 = dobj;
      }
    }
  }
  *(_DWORD *)(v14 + 72) = inoutCollisionShapesOffset;
  *(_WORD *)(v14 + 297) = 257;
  *(_BYTE *)(v14 + 299) = 0;
  *(_DWORD *)(v14 + 300) = 0;
  *(_BYTE *)(v14 + 304) = 0;
  *(_QWORD *)(v14 + 308) = 0i64;
  *(_DWORD *)(v14 + 316) = 0;
  DObjCompleteHierarchyBits(v43, (DObjPartBits *)(v14 + 416));
  if ( *(_DWORD *)(v14 + 48) )
  {
    DObjCompleteHierarchyBits(v43, (DObjPartBits *)(v14 + 352));
    XAnimBonePhysicsResetInternal((DObjProceduralBones *)v14);
  }
LABEL_21:
  Sys_ProfEndNamedEvent();
  return (DObjProceduralBones *)v14;
}

/*
==============
DObjProceduralBones_InitializeConstraintBoneIndices
==============
*/
void DObjProceduralBones_InitializeConstraintBoneIndices(const DObj *dobj, DObjProceduralBones *dobjProceduralBones, const XAnimProceduralBones *procBones, unsigned int targetBonesOffset, unsigned int sourceBoneIndicesOffset, const DObjBoneParentMap *dobjBoneParents, DObjClientPartBits *inoutConstraintInputBits)
{
  unsigned int v7; 
  const XAnimProceduralBones *v8; 
  DObjProceduralBones *v9; 
  const DObj *v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int numTargetBones; 
  __int16 *v15; 
  unsigned __int16 *v16; 
  __int64 v17; 
  scr_string_t *v18; 
  scr_string_t v19; 
  int NumModels; 
  bool HasClientFlag; 
  unsigned int v22; 
  int v23; 
  unsigned int v24; 
  const XModel *Model; 
  const XModel *v26; 
  __int16 v27; 
  const char *v28; 
  const char *v29; 
  const dvar_t *v30; 
  unsigned int flags; 
  const char *Name; 
  const char *v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned __int8 index[4]; 
  unsigned int v37; 
  __int16 *v38; 
  int v39; 
  unsigned int numConstraints; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 

  v7 = targetBonesOffset;
  v8 = procBones;
  v9 = dobjProceduralBones;
  v10 = dobj;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 397, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 398, ASSERT_TYPE_ASSERT, "(dobjProceduralBones != 0)", (const char *)&queryFormat, "dobjProceduralBones != NULL") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 399, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  if ( !inoutConstraintInputBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 400, ASSERT_TYPE_ASSERT, "(inoutConstraintInputBits != 0)", (const char *)&queryFormat, "inoutConstraintInputBits != NULL") )
    __debugbreak();
  v11 = 0;
  numConstraints = v8->numConstraints;
  v37 = 0;
  if ( !numConstraints )
    return;
  v12 = 0i64;
  v44 = 0i64;
  do
  {
    v13 = (__int64)v8->constraints + v12;
    numTargetBones = v8->numTargetBones;
    v43 = v13;
    if ( *(unsigned __int8 *)(v13 + 1) >= numTargetBones )
    {
      LODWORD(v35) = numTargetBones;
      LODWORD(v34) = *(unsigned __int8 *)(v13 + 1);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( constraint->localTargetBoneIndex ) < (unsigned)( procBones->numTargetBones )", "constraint->localTargetBoneIndex doesn't index procBones->numTargetBones\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    v15 = (__int16 *)&v9->targetBoneInfo[v7 + *(unsigned __int8 *)(v13 + 1)];
    v38 = v15;
    v16 = &v9->sourceBoneIndices[2 * v11 + 2 * sourceBoneIndicesOffset];
    if ( *v15 == 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 412, ASSERT_TYPE_ASSERT, "(targetBoneInfo->boneIndex != 254)", (const char *)&queryFormat, "targetBoneInfo->boneIndex != UNDEFINED_BONEINDEX") )
      __debugbreak();
    if ( *v15 == 255 )
      goto LABEL_67;
    v17 = 0i64;
    v18 = (scr_string_t *)(v13 + 4);
    v41 = 0i64;
    v42 = v13 + 4;
    while ( 1 )
    {
      v19 = *v18;
      if ( v17 > 0 && v19 == *((_DWORD *)v18 - 1) )
      {
        *v16 = *(v16 - 1);
        goto LABEL_50;
      }
      if ( v19 == v8->targetBoneNames[*(unsigned __int8 *)(v13 + 1)] )
      {
        *v16 = *v15;
        goto LABEL_50;
      }
      *v16 = 254;
      if ( !v19 )
        goto LABEL_50;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client_inline.h", 11, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client_inline.h", 13, ASSERT_TYPE_ASSERT, "(outBoneIndex)", (const char *)&queryFormat, "outBoneIndex") )
        __debugbreak();
      *v16 = 255;
      v39 = 0;
      NumModels = DObjGetNumModels(v10);
      if ( !NumModels )
        goto LABEL_54;
      HasClientFlag = DObjHasClientFlag(v10);
      v22 = 0;
      v23 = 0;
      v24 = DObjNumBones(v10);
      if ( NumModels <= 0 )
        break;
      while ( 1 )
      {
        Model = DObjGetModel(v10, v23);
        index[0] = -2;
        v26 = Model;
        if ( XModelGetBoneIndex(Model, v19, v22, index) )
          break;
        if ( HasClientFlag && XModelGetClientBoneIndex(v26, v19, v24, v16) )
        {
          v27 = *v16;
          goto LABEL_47;
        }
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        ++v23;
        v22 += v26->numBones;
        v24 += v26->numClientBones;
        if ( v23 >= NumModels )
          goto LABEL_53;
        v10 = dobj;
      }
      v27 = index[0];
      *v16 = index[0];
LABEL_47:
      v15 = v38;
      if ( v27 < 0 && *v38 >= 0 )
      {
        v8 = procBones;
        v28 = SL_ConvertToString(v19);
        v29 = SL_ConvertToString(procBones->targetBoneNames[*(unsigned __int8 *)(v43 + 1)]);
        Com_PrintError(19, "%s: server bone '%s' depends on client-only bone '%s'\n", procBones->name, v29, v28);
        *v15 = 255;
        goto LABEL_67;
      }
      XAnimSetPartBit(&dobjProceduralBones->proceduralBoneCompletePartBits, (unsigned __int16)v27);
      bitarray_base<bitarray<768>>::setBit(inoutConstraintInputBits, *v16 & 0x7FFF);
      v17 = v41;
      v10 = dobj;
      v13 = v43;
      v8 = procBones;
LABEL_50:
      ++v17;
      v18 = (scr_string_t *)(v42 + 4);
      v41 = v17;
      ++v16;
      v42 += 4i64;
      if ( v17 >= 2 )
        goto LABEL_67;
    }
LABEL_53:
    v15 = v38;
LABEL_54:
    v30 = DCONST_DVARBOOL_xanim_missingProceduralBonesWarning;
    if ( !DCONST_DVARBOOL_xanim_missingProceduralBonesWarning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_missingProceduralBonesWarning") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v30->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v30->name) )
        __debugbreak();
    }
    if ( v30->current.enabled && DObjHasClientFlag(dobj) )
    {
      Name = DObjGetName(dobj);
      v33 = SL_ConvertToString(v19);
      Com_PrintWarning(19, "Procedural bone source bone '%s' not found on dobj '%s'\n", v33, Name);
    }
    v8 = procBones;
    *v15 = 255;
LABEL_67:
    v10 = dobj;
    v9 = dobjProceduralBones;
    v11 = v37 + 1;
    v7 = targetBonesOffset;
    v12 = v44 + 88;
    v37 = v11;
    v44 += 88i64;
  }
  while ( v11 < numConstraints );
}

/*
==============
DObjProceduralBones_InitializePhysicsBones
==============
*/
void DObjProceduralBones_InitializePhysicsBones(const DObj *dobj, DObjProceduralBones *dobjProceduralBones, const XAnimDynamicBones *dynamicBones, const DObjBoneParentMap *dobjBoneParents, int dobjModelIndex, unsigned int modelBoneOffset, unsigned int dynamicBoneOffset, unsigned int collidableBoneOffset, unsigned int boneIndexOffset, unsigned int *inoutCollisionShapesOffset, DObjClientPartBits *inoutDynamicBoneBits)
{
  const XAnimDynamicBones *v11; 
  const DObj *v13; 
  unsigned int v14; 
  unsigned int numDynamicBones; 
  unsigned int v16; 
  __int64 v17; 
  XAnimPhysicsBone *v18; 
  const XAnimDynamicBoneProperties *v19; 
  unsigned __int8 parentPhysicsBoneIndex; 
  const XModel *Model; 
  const char *Name; 
  const char *BoneName; 
  unsigned int numCollidableBones; 
  __int64 v26; 
  __int64 v27; 
  XAnimCollidableBone *collidableBones; 
  XAnimCollidableBoneInfo *v29; 
  int BoneIndexFromStartModelClient; 
  unsigned __int16 boneIndex; 
  unsigned __int64 v32; 
  unsigned int v33; 
  unsigned int numCollisionShapes; 
  unsigned int numPinConstraintBoneNames; 
  __int64 v36; 
  scr_string_t v37; 
  __int64 v38; 
  unsigned __int64 v39; 
  __int64 v40; 
  DObjBoneParentMap *dobjBoneParentsa; 
  __int64 v42; 
  __int64 v43; 

  v11 = dynamicBones;
  v13 = dobj;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 620, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( !dobjProceduralBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 621, ASSERT_TYPE_ASSERT, "(dobjProceduralBones != 0)", (const char *)&queryFormat, "dobjProceduralBones != NULL") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 622, ASSERT_TYPE_ASSERT, "(dynamicBones != 0)", (const char *)&queryFormat, "dynamicBones != NULL") )
    __debugbreak();
  if ( !inoutCollisionShapesOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 623, ASSERT_TYPE_ASSERT, "(inoutCollisionShapesOffset != 0)", (const char *)&queryFormat, "inoutCollisionShapesOffset != NULL") )
    __debugbreak();
  if ( !inoutDynamicBoneBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 624, ASSERT_TYPE_ASSERT, "(inoutDynamicBoneBits != 0)", (const char *)&queryFormat, "inoutDynamicBoneBits != NULL") )
    __debugbreak();
  v14 = 0;
  if ( dobjProceduralBones->numPhysicsBones )
  {
    numDynamicBones = v11->numDynamicBones;
    if ( numDynamicBones )
    {
      v16 = dynamicBoneOffset;
      do
      {
        v17 = (__int64)&v11->dynamicBoneProperties[v16 - dynamicBoneOffset];
        v18 = &dobjProceduralBones->physicsBones[v16];
        if ( v16 >= dobjProceduralBones->numPhysicsBones )
        {
          LODWORD(dobjBoneParentsa) = dobjProceduralBones->numPhysicsBones;
          LODWORD(v40) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 636, ASSERT_TYPE_ASSERT, "(unsigned)( dynamicBoneOffset + dynamicBoneIndex ) < (unsigned)( dobjProceduralBones->numPhysicsBones )", "dynamicBoneOffset + dynamicBoneIndex doesn't index dobjProceduralBones->numPhysicsBones\n\t%i not in [0, %i)", v40, dobjBoneParentsa) )
            __debugbreak();
        }
        v19 = (const XAnimDynamicBoneProperties *)v17;
        v13 = dobj;
        if ( XAnimBonePhysicsInitializePhysicsBone(dobj, v18, v19, dobjModelIndex, modelBoneOffset, dynamicBoneOffset, dobjBoneParents) )
        {
          if ( (unsigned __int16)(v18->boneIndex - 254) <= 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 640, ASSERT_TYPE_ASSERT, "(physicsBone->boneIndex != 255 && physicsBone->boneIndex != 254)", (const char *)&queryFormat, "physicsBone->boneIndex != NO_BONEINDEX && physicsBone->boneIndex != UNDEFINED_BONEINDEX") )
            __debugbreak();
          parentPhysicsBoneIndex = v18->parentPhysicsBoneIndex;
          if ( parentPhysicsBoneIndex == 0xFF || dobjProceduralBones->physicsBones[parentPhysicsBoneIndex].boneIndex != 255 )
          {
            XAnimSetPartBit(&dobjProceduralBones->dynamicBonePartBits, v18->boneIndex);
            XAnimSetPartBit(&dobjProceduralBones->physicsBoneCompletePartBits, v18->boneIndex);
            bitarray_base<bitarray<768>>::setBit(inoutDynamicBoneBits, v18->boneIndex & 0x7FFF);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_dynamicServerBonesWarning, "xanim_dynamicServerBonesWarning") && (v18->boneIndex & 0x8000u) == 0 )
            {
              Model = DObjGetModel(dobj, dobjModelIndex);
              if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 659, ASSERT_TYPE_ASSERT, "(model != 0)", (const char *)&queryFormat, "model != NULL") )
                __debugbreak();
              Name = XModelGetName(Model);
              BoneName = DObjGetBoneName(dobj, v18->boneIndex);
              Com_PrintWarning(19, "Dynamic bone '%s' on xmodel '%s' is not client-only\n", BoneName, Name);
              v13 = dobj;
            }
          }
          else
          {
            v18->boneIndex = 255;
          }
        }
        v11 = dynamicBones;
        ++v16;
      }
      while ( v16 - dynamicBoneOffset < numDynamicBones );
      v14 = 0;
    }
    numCollidableBones = v11->numCollidableBones;
    if ( numCollidableBones )
    {
      v26 = 0i64;
      v27 = numCollidableBones;
      do
      {
        collidableBones = v11->collidableBones;
        v29 = &dobjProceduralBones->collidableBoneInfo[collidableBoneOffset];
        if ( collidableBoneOffset >= dobjProceduralBones->numCollidableBones )
        {
          LODWORD(dobjBoneParentsa) = dobjProceduralBones->numCollidableBones;
          LODWORD(v40) = collidableBoneOffset;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 673, ASSERT_TYPE_ASSERT, "(unsigned)( collidableBoneOffset + collidableBoneIndex ) < (unsigned)( dobjProceduralBones->numCollidableBones )", "collidableBoneOffset + collidableBoneIndex doesn't index dobjProceduralBones->numCollidableBones\n\t%i not in [0, %i)", v40, dobjBoneParentsa) )
            __debugbreak();
        }
        v29->boneIndex = 254;
        BoneIndexFromStartModelClient = DObjGetBoneIndexFromStartModelClient(v13, collidableBones[v26].boneName, dobjModelIndex, &v29->boneIndex);
        boneIndex = v29->boneIndex;
        if ( BoneIndexFromStartModelClient )
        {
          v32 = boneIndex;
          if ( boneIndex >> 15 )
          {
            dobjProceduralBones->physicsBoneCompletePartBits.array[7] |= 2u;
          }
          else
          {
            if ( boneIndex >= 0x100u )
            {
              LODWORD(v43) = 256;
              LODWORD(v42) = boneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v42, v43) )
                __debugbreak();
            }
            dobjProceduralBones->physicsBoneCompletePartBits.array[v32 >> 5] |= 0x80000000 >> (v32 & 0x1F);
          }
          v33 = *inoutCollisionShapesOffset;
          if ( *inoutCollisionShapesOffset > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v33, "unsigned", *inoutCollisionShapesOffset) )
            __debugbreak();
          v29->firstCollisionShapeIndex = v33;
          numCollisionShapes = collidableBones[v26].numCollisionShapes;
          if ( numCollisionShapes > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)numCollisionShapes, "unsigned", collidableBones[v26].numCollisionShapes) )
            __debugbreak();
          v29->numCollisionShapes = numCollisionShapes;
          *inoutCollisionShapesOffset += collidableBones[v26].numCollisionShapes;
          v13 = dobj;
        }
        else if ( boneIndex != 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 679, ASSERT_TYPE_ASSERT, "(collidableBoneInfo->boneIndex == 255)", (const char *)&queryFormat, "collidableBoneInfo->boneIndex == NO_BONEINDEX") )
        {
          __debugbreak();
        }
        v11 = dynamicBones;
        ++collidableBoneOffset;
        ++v26;
        --v27;
      }
      while ( v27 );
      v14 = 0;
    }
  }
  if ( dobjProceduralBones->numCustomPinConstraints )
  {
    numPinConstraintBoneNames = v11->numPinConstraintBoneNames;
    if ( numPinConstraintBoneNames )
    {
      v36 = 0i64;
      do
      {
        v37 = v11->pinConstraintBoneNames[v36];
        if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 700, ASSERT_TYPE_ASSERT, "(boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneName != NULL_SCR_STRING") )
          __debugbreak();
        v38 = v14 + boneIndexOffset;
        dobjProceduralBones->pinConstraintBoneIndices[v38] = 254;
        if ( DObjGetBoneIndexFromStartModelClient(dobj, v37, dobjModelIndex, &dobjProceduralBones->pinConstraintBoneIndices[v38]) )
        {
          v39 = dobjProceduralBones->pinConstraintBoneIndices[v38];
          if ( (unsigned __int8)((unsigned int)v39 >> 15) )
          {
            dobjProceduralBones->physicsBoneCompletePartBits.array[7] |= 2u;
          }
          else
          {
            if ( (unsigned int)v39 >= 0x100 )
            {
              LODWORD(v43) = 256;
              LODWORD(v42) = v39;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v42, v43) )
                __debugbreak();
            }
            dobjProceduralBones->physicsBoneCompletePartBits.array[v39 >> 5] |= 0x80000000 >> (v39 & 0x1F);
          }
        }
        v11 = dynamicBones;
        ++v14;
        ++v36;
      }
      while ( v14 < numPinConstraintBoneNames );
    }
  }
}

/*
==============
DObjProceduralBones_InitializePostPhysicsConstraintBits
==============
*/
void DObjProceduralBones_InitializePostPhysicsConstraintBits(const XAnimProceduralBones *procBones, unsigned int constraintOffset, const DObjClientPartBits *dynamicBoneOutputBits, const XAnimConstraintTargetBone *constraintTargetBones, const unsigned __int16 *constraintSourceBones, unsigned int *outPostPhysicsConstraintBits)
{
  const XAnimConstraintTargetBone *v6; 
  const XAnimProceduralBones *v8; 
  const unsigned __int16 *v9; 
  unsigned int v11; 
  __int64 v12; 
  XAnimConstraint *constraints; 
  const XAnimConstraintTargetBone *v14; 
  const unsigned __int16 *v15; 
  __int64 i; 
  unsigned __int16 v17; 
  unsigned int v18; 
  unsigned int *v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v24; 
  unsigned int outPostPhysicsConstraintBitsa; 

  v6 = constraintTargetBones;
  v8 = procBones;
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 740, ASSERT_TYPE_ASSERT, "(procBones != nullptr)", (const char *)&queryFormat, "procBones != nullptr") )
    __debugbreak();
  if ( !dynamicBoneOutputBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 741, ASSERT_TYPE_ASSERT, "(dynamicBoneOutputBits != nullptr)", (const char *)&queryFormat, "dynamicBoneOutputBits != nullptr") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 742, ASSERT_TYPE_ASSERT, "(constraintTargetBones != nullptr)", (const char *)&queryFormat, "constraintTargetBones != nullptr") )
    __debugbreak();
  v9 = constraintSourceBones;
  if ( !constraintSourceBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 743, ASSERT_TYPE_ASSERT, "(constraintSourceBones != nullptr)", (const char *)&queryFormat, "constraintSourceBones != nullptr") )
    __debugbreak();
  if ( !outPostPhysicsConstraintBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 744, ASSERT_TYPE_ASSERT, "(outPostPhysicsConstraintBits != nullptr)", (const char *)&queryFormat, "outPostPhysicsConstraintBits != nullptr") )
    __debugbreak();
  v11 = 0;
  outPostPhysicsConstraintBitsa = v8->numConstraints;
  if ( outPostPhysicsConstraintBitsa )
  {
    v12 = 0i64;
    v24 = 0i64;
    do
    {
      constraints = v8->constraints;
      if ( *(&constraints->localTargetBoneIndex + v12) >= v8->numTargetBones )
      {
        LODWORD(v21) = v8->numTargetBones;
        LODWORD(v20) = *(&constraints->localTargetBoneIndex + v12);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 750, ASSERT_TYPE_ASSERT, "(unsigned)( constraint->localTargetBoneIndex ) < (unsigned)( procBones->numTargetBones )", "constraint->localTargetBoneIndex doesn't index procBones->numTargetBones\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v14 = &v6[*(&constraints->localTargetBoneIndex + v12)];
      v15 = &v9[2 * v11];
      if ( v14->boneIndex == 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 754, ASSERT_TYPE_ASSERT, "(targetBoneInfo->boneIndex != 254)", (const char *)&queryFormat, "targetBoneInfo->boneIndex != UNDEFINED_BONEINDEX") )
        __debugbreak();
      if ( v14->boneIndex != 255 )
      {
        for ( i = 0i64; i < 2; ++i )
        {
          v17 = v15[i];
          if ( v17 != 255 )
          {
            v18 = v17 & 0x7FFF;
            if ( v18 >= 0x300 )
            {
              LODWORD(v21) = 768;
              LODWORD(v20) = v17 & 0x7FFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v20, v21) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v18 & 0x1F)) & dynamicBoneOutputBits->array[(unsigned __int64)v18 >> 5]) != 0 )
            {
              if ( !outPostPhysicsConstraintBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                __debugbreak();
              v19 = &outPostPhysicsConstraintBits[(__int64)(int)(v11 + constraintOffset) >> 5];
              *v19 |= 1 << ((v11 + constraintOffset) & 0x1F);
            }
          }
        }
        v12 = v24;
        v8 = procBones;
        v9 = constraintSourceBones;
      }
      v6 = constraintTargetBones;
      v12 += 88i64;
      ++v11;
      v24 = v12;
    }
    while ( v11 < outPostPhysicsConstraintBitsa );
  }
}

/*
==============
DObjProceduralBones_InitializeTargetBone
==============
*/
char DObjProceduralBones_InitializeTargetBone(const DObj *dobj, DObjProceduralBones *dobjProceduralBones, unsigned int targetBoneIndex, scr_string_t targetBoneName, const DObjBoneParentMap *dobjBoneParents, DObjClientPartBits *inoutInputBits)
{
  __int64 v6; 
  XAnimConstraintTargetBone *targetBoneInfo; 
  unsigned __int16 *p_boneIndex; 
  int BoneAndModelIndexClient; 
  unsigned __int16 v13; 
  const char *Name; 
  const char *v15; 
  unsigned __int16 OriginalNonDuplicate; 
  __int64 v18; 
  int outModelIndex; 

  v6 = targetBoneIndex;
  if ( !targetBoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 358, ASSERT_TYPE_ASSERT, "(targetBoneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "targetBoneName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 359, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( !dobjProceduralBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 360, ASSERT_TYPE_ASSERT, "(dobjProceduralBones)", (const char *)&queryFormat, "dobjProceduralBones") )
    __debugbreak();
  if ( (unsigned int)v6 >= dobjProceduralBones->numTargetBones )
  {
    LODWORD(v18) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 361, ASSERT_TYPE_ASSERT, "(unsigned)( targetBoneIndex ) < (unsigned)( dobjProceduralBones->numTargetBones )", "targetBoneIndex doesn't index dobjProceduralBones->numTargetBones\n\t%i not in [0, %i)", v18, dobjProceduralBones->numTargetBones) )
      __debugbreak();
  }
  if ( !inoutInputBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 362, ASSERT_TYPE_ASSERT, "(inoutInputBits != 0)", (const char *)&queryFormat, "inoutInputBits != NULL") )
    __debugbreak();
  targetBoneInfo = dobjProceduralBones->targetBoneInfo;
  targetBoneInfo[v6] = (XAnimConstraintTargetBone)16711935;
  p_boneIndex = &targetBoneInfo[v6].boneIndex;
  BoneAndModelIndexClient = DObjGetBoneAndModelIndexClient(dobj, targetBoneName, p_boneIndex, &outModelIndex);
  v13 = *p_boneIndex;
  if ( BoneAndModelIndexClient )
  {
    XAnimSetPartBit(&dobjProceduralBones->proceduralBonePartBits, v13);
    XAnimSetPartBit(&dobjProceduralBones->proceduralBoneCompletePartBits, *p_boneIndex);
    OriginalNonDuplicate = DObjBoneParentMap_GetOriginalNonDuplicate(dobjBoneParents, *p_boneIndex);
    p_boneIndex[1] = DObjBoneParentMap_GetParentOrDuplicate(dobjBoneParents, OriginalNonDuplicate);
    return 1;
  }
  else
  {
    if ( v13 == 255 && DObjHasClientFlag(dobj) && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_missingProceduralBonesWarning, "xanim_missingProceduralBonesWarning") )
    {
      Name = DObjGetName(dobj);
      v15 = SL_ConvertToString(targetBoneName);
      Com_PrintWarning(19, "Procedural bone '%s' not found on dobj '%s'\n", v15, Name);
    }
    *p_boneIndex = 255;
    return 0;
  }
}

/*
==============
DObjProceduralBones_TryLock
==============
*/
DObjProceduralBones *DObjProceduralBones_TryLock(const DObj *obj)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1136, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( obj->proceduralBonesHandle.m_value )
    return XAnimProceduralBonesAllocator_TryLock(obj->proceduralBonesHandle);
  else
    return 0i64;
}

/*
==============
DObjProceduralBones_Unlock
==============
*/
void DObjProceduralBones_Unlock(const DObj *obj)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1148, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( obj->proceduralBonesHandle.m_value )
    XAnimProceduralBonesAllocator_Unlock(obj->proceduralBonesHandle);
}

/*
==============
DObjReinitializeProceduralBones
==============
*/
void DObjReinitializeProceduralBones(DObj *dobj)
{
  if ( !dobj )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1215, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1206, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
      __debugbreak();
  }
  XAnimProceduralBonesAllocator_DestroyHandle(dobj->proceduralBonesHandle);
  dobj->proceduralBonesHandle.m_value = 0;
  DObjInitializeProceduralBones(dobj);
}

/*
==============
DObjTouchProceduralBones
==============
*/
void DObjTouchProceduralBones(const DObj *obj, __int64 a2, double a3, double a4)
{
  unsigned int m_value; 
  __int64 v6; 
  DObjProceduralBones *v7; 
  DObjProceduralBones *outProcBones; 

  if ( !obj )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1197, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1163, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
  }
  if ( !obj->proceduralBonesHandle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1164, ASSERT_TYPE_ASSERT, "(obj->proceduralBonesHandle.IsValid())", (const char *)&queryFormat, "obj->proceduralBonesHandle.IsValid()") )
    __debugbreak();
  XAnimProceduralBonesAllocator_Lock(obj->proceduralBonesHandle);
  m_value = obj->proceduralBonesHandle.m_value;
  outProcBones = NULL;
  if ( XAnimProceduralBonesAllocator_TryGetProceduralBones((DObjProceduralBonesHandle)m_value, &outProcBones) )
  {
    if ( outProcBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1171, ASSERT_TYPE_ASSERT, "(procBones == nullptr)", (const char *)&queryFormat, "procBones == nullptr") )
      __debugbreak();
    v7 = DObjProceduralBones_Create(obj, v6, a3, a4);
    if ( v7 )
      v7->settlingEnabled = (obj->proceduralBonesHandle.m_value & 0x20000000) != 0;
  }
  XAnimProceduralBonesAllocator_Unlock(obj->proceduralBonesHandle);
}

/*
==============
DObjUnlockProceduralBones
==============
*/
void DObjUnlockProceduralBones(const DObj *obj)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 1189, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  XAnimProceduralBonesAllocator_Unlock(obj->proceduralBonesHandle);
}

/*
==============
XAnimBonePhysicsInitializePhysicsBone
==============
*/
char XAnimBonePhysicsInitializePhysicsBone(const DObj *dobj, XAnimPhysicsBone *physicsBone, const XAnimDynamicBoneProperties *properties, int dobjModelIndex, int modelBoneOffset, unsigned int dynamicBoneOffset, const DObjBoneParentMap *dobjBoneParents)
{
  unsigned __int8 v12; 
  vec3_t *p_twistU; 
  vec3_t *p_twistV; 
  int boneIndex; 
  unsigned __int16 OriginalNonDuplicate; 
  int parentDynamicBoneIndex; 
  unsigned __int8 v18; 
  const XAnimDynamicBoneProperties *v19; 
  float start; 
  float v21; 
  XAnimCurve *curve; 
  XAnimCurve *v23; 
  const XAnimDynamicBoneProperties *v24; 
  float v25; 
  float v26; 
  XAnimCurve *v27; 
  XAnimCurve *v28; 
  const XAnimDynamicBoneProperties *v29; 
  float v30; 
  float v31; 
  XAnimCurve *v32; 
  XAnimCurve *v33; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 533, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( !physicsBone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 534, ASSERT_TYPE_ASSERT, "(physicsBone != 0)", (const char *)&queryFormat, "physicsBone != NULL") )
    __debugbreak();
  if ( !properties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 535, ASSERT_TYPE_ASSERT, "(properties != 0)", (const char *)&queryFormat, "properties != NULL") )
    __debugbreak();
  physicsBone->XAnimProceduralBone = (XAnimProceduralBone)16711934;
  physicsBone->properties = properties;
  if ( DObjGetBoneIndexFromStartModelClient(dobj, properties->boneName, dobjModelIndex, &physicsBone->boneIndex) )
  {
    physicsBone->invMass = properties->invMass;
    physicsBone->invInertiaTensor = properties->invInertiaTensor;
    physicsBone->jointOffset.v[0] = COERCE_FLOAT(LODWORD(properties->centerOfMass.v[0]) ^ _xmm);
    physicsBone->jointOffset.v[1] = COERCE_FLOAT(LODWORD(properties->centerOfMass.v[1]) ^ _xmm);
    physicsBone->jointOffset.v[2] = COERCE_FLOAT(LODWORD(properties->centerOfMass.v[2]) ^ _xmm);
    physicsBone->flags = 8;
    if ( properties->enableSwingLimit || (v12 = 8, properties->rotationalSpring.swingStrength != 0.0) )
    {
      physicsBone->flags = 9;
      v12 = 9;
    }
    if ( properties->enableTwistLimit || properties->rotationalSpring.twistStrength != 0.0 )
    {
      v12 |= 2u;
      physicsBone->flags = v12;
    }
    if ( (v12 & 3) != 0 )
    {
      p_twistU = &physicsBone->twistU;
      PerpendicularVector(&properties->twistAxis, &physicsBone->twistU);
      p_twistV = &physicsBone->twistV;
      if ( &properties->twistAxis == &physicsBone->twistV && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
        __debugbreak();
      if ( p_twistU == p_twistV && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
        __debugbreak();
      p_twistV->v[0] = (float)(physicsBone->twistU.v[2] * properties->twistAxis.v[1]) - (float)(properties->twistAxis.v[2] * physicsBone->twistU.v[1]);
      physicsBone->twistV.v[1] = (float)(properties->twistAxis.v[2] * physicsBone->twistU.v[0]) - (float)(properties->twistAxis.v[0] * physicsBone->twistU.v[2]);
      physicsBone->twistV.v[2] = (float)(properties->twistAxis.v[0] * physicsBone->twistU.v[1]) - (float)(p_twistU->v[0] * properties->twistAxis.v[1]);
    }
    if ( properties->enableTranslationalSpring )
      physicsBone->flags |= 0x20u;
    if ( !properties->numCollisionShapes )
      physicsBone->flags |= 4u;
    if ( properties->heavyHitSound.name || properties->lightHitSound.name )
      physicsBone->flags |= 0x10u;
    physicsBone->localBasePoseTrans.v[0] = properties->localBasePoseTrans.v[0];
    physicsBone->localBasePoseTrans.v[1] = properties->localBasePoseTrans.v[1];
    physicsBone->localBasePoseTrans.v[2] = properties->localBasePoseTrans.v[2];
    *(_QWORD *)physicsBone->state.rotationQuat.v = 0i64;
    physicsBone->state.rotationQuat.v[2] = 0.0;
    *(_QWORD *)(&physicsBone->state.rotationQuat.xyz + 1) = 1065353216i64;
    *(_QWORD *)&physicsBone->state.position.y = 0i64;
    physicsBone->state.prevRotationQuat.v[0] = physicsBone->state.rotationQuat.v[0];
    physicsBone->state.prevRotationQuat.v[1] = physicsBone->state.rotationQuat.v[1];
    physicsBone->state.prevRotationQuat.v[2] = physicsBone->state.rotationQuat.v[2];
    physicsBone->state.prevRotationQuat.v[3] = physicsBone->state.rotationQuat.v[3];
    physicsBone->state.prevPosition.v[0] = physicsBone->state.position.v[0];
    physicsBone->state.prevPosition.v[1] = physicsBone->state.position.v[1];
    physicsBone->state.prevPosition.v[2] = physicsBone->state.position.v[2];
    *(_QWORD *)physicsBone->state.velocity.v = 0i64;
    *(_QWORD *)&physicsBone->state.velocity.z = 0i64;
    *(_QWORD *)&physicsBone->state.angularVelocity.y = 0i64;
    boneIndex = physicsBone->boneIndex;
    physicsBone->state.audioEventTimer = 0;
    OriginalNonDuplicate = DObjBoneParentMap_GetOriginalNonDuplicate(dobjBoneParents, boneIndex);
    physicsBone->parentBoneIndex = DObjBoneParentMap_GetParentOrDuplicate(dobjBoneParents, OriginalNonDuplicate);
    physicsBone->rootPhysicsBoneIndex = truncate_cast<unsigned char,unsigned int>(dynamicBoneOffset + properties->dynamicBoneChainRootIndex);
    parentDynamicBoneIndex = properties->parentDynamicBoneIndex;
    if ( parentDynamicBoneIndex == -1 )
      v18 = -1;
    else
      v18 = truncate_cast<unsigned char,unsigned int>(parentDynamicBoneIndex + dynamicBoneOffset);
    physicsBone->parentPhysicsBoneIndex = v18;
    v19 = physicsBone->properties;
    start = v19->noise.translation.axis[0].start;
    v21 = v19->noise.rotation.axis[0].start;
    curve = v19->noise.translation.axis[0].curve;
    v23 = v19->noise.rotation.axis[0].curve;
    physicsBone->state.noise.translation[0].rateMul = 1.0;
    physicsBone->state.noise.translation[0].strengthMul = 1.0;
    physicsBone->state.noise.translation[0].timer = 0.0;
    if ( start > 0.0 && curve )
      physicsBone->state.noise.translation[0].timer = start * curve->duration;
    physicsBone->state.noise.rotation[0].rateMul = 1.0;
    physicsBone->state.noise.rotation[0].strengthMul = 1.0;
    physicsBone->state.noise.rotation[0].timer = 0.0;
    if ( v21 > 0.0 && v23 )
      physicsBone->state.noise.rotation[0].timer = v21 * v23->duration;
    v24 = physicsBone->properties;
    v25 = v24->noise.translation.axis[1].start;
    v26 = v24->noise.rotation.axis[1].start;
    v27 = v24->noise.translation.axis[1].curve;
    v28 = v24->noise.rotation.axis[1].curve;
    physicsBone->state.noise.translation[1].rateMul = 1.0;
    physicsBone->state.noise.translation[1].strengthMul = 1.0;
    physicsBone->state.noise.translation[1].timer = 0.0;
    if ( v25 > 0.0 && v27 )
      physicsBone->state.noise.translation[1].timer = v25 * v27->duration;
    physicsBone->state.noise.rotation[1].rateMul = 1.0;
    physicsBone->state.noise.rotation[1].strengthMul = 1.0;
    physicsBone->state.noise.rotation[1].timer = 0.0;
    if ( v26 > 0.0 && v28 )
      physicsBone->state.noise.rotation[1].timer = v26 * v28->duration;
    v29 = physicsBone->properties;
    v30 = v29->noise.translation.axis[2].start;
    v31 = v29->noise.rotation.axis[2].start;
    v32 = v29->noise.translation.axis[2].curve;
    v33 = v29->noise.rotation.axis[2].curve;
    physicsBone->state.noise.translation[2].rateMul = 1.0;
    physicsBone->state.noise.translation[2].strengthMul = 1.0;
    physicsBone->state.noise.translation[2].timer = 0.0;
    if ( v30 > 0.0 && v32 )
      physicsBone->state.noise.translation[2].timer = v30 * v32->duration;
    physicsBone->state.noise.rotation[2].rateMul = 1.0;
    physicsBone->state.noise.rotation[2].strengthMul = 1.0;
    physicsBone->state.noise.rotation[2].timer = 0.0;
    if ( v31 > 0.0 && v33 )
      physicsBone->state.noise.rotation[2].timer = v31 * v33->duration;
    return 1;
  }
  else
  {
    if ( physicsBone->boneIndex != 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 543, ASSERT_TYPE_ASSERT, "(physicsBone->boneIndex == 255)", (const char *)&queryFormat, "physicsBone->boneIndex == NO_BONEINDEX") )
      __debugbreak();
    return 0;
  }
}

/*
==============
XAnimProceduralBone_CompleteChildBits
==============
*/
void XAnimProceduralBone_CompleteChildBits(const DObj *dobj, const DObjBoneParentMap *dobjBoneParents, const DObjClientPartBits *ignoreBits, DObjClientPartBits *outChildPartBits)
{
  const DObj *v6; 
  unsigned int v7; 
  DObjClientPartBits *v8; 
  unsigned int i; 
  unsigned int v10; 
  int v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  const DObj *obj; 
  int v15; 
  __int16 v16; 
  unsigned __int16 v17; 
  int v18; 
  int v19; 
  unsigned int j; 
  const DObj *v21; 
  unsigned int v22; 
  unsigned __int16 v23; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 

  v6 = dobj;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 286, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( !dobjBoneParents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 287, ASSERT_TYPE_ASSERT, "(dobjBoneParents != 0)", (const char *)&queryFormat, "dobjBoneParents != NULL") )
    __debugbreak();
  v7 = 0;
  v8 = outChildPartBits;
  for ( i = 0; i < 0x18; ++i )
  {
    v10 = __lzcnt(v8->array[0]);
    v7 += v10;
    if ( v10 < 0x20 )
      break;
    v8 = (DObjClientPartBits *)((char *)v8 + 4);
  }
  if ( v7 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v7, "unsigned", v7) )
    __debugbreak();
  if ( (_WORD)v7 != 768 )
  {
    v11 = DObjNumBones(v6);
    v12 = truncate_cast<unsigned short,int>(v11);
    v13 = v7 + 1;
    if ( v13 >= v12 )
      v13 |= 0x8000u;
    if ( (v13 & 0x8000u) == 0 && v13 < v12 )
    {
      do
      {
        if ( !dobjBoneParents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 311, ASSERT_TYPE_ASSERT, "(parentMap)", (const char *)&queryFormat, "parentMap") )
          __debugbreak();
        obj = dobjBoneParents->obj;
        if ( (unsigned int)v13 - 254 <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 278, ASSERT_TYPE_ASSERT, "(boneIndex != 255 && boneIndex != 254)", (const char *)&queryFormat, "boneIndex != NO_BONEINDEX && boneIndex != UNDEFINED_BONEINDEX") )
          __debugbreak();
        v15 = v13 & 0x7FFF;
        if ( v15 >= (unsigned int)DObjTotalNumBones(obj) )
        {
          LODWORD(v26) = DObjTotalNumBones(obj);
          LODWORD(v25) = v13 & 0x7FFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex & ((1 << 15) - 1) ) < (unsigned)( DObjTotalNumBones( obj ) )", "boneIndex & CLIENT_BONEINDEX_MASK doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        if ( (v13 & 0x8000) != 0 && v15 < DObjNumBones(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 280, ASSERT_TYPE_ASSERT, "(!(boneIndex & (1 << 15)) || ((boneIndex & ((1 << 15) - 1)) >= DObjNumBones( obj )))", (const char *)&queryFormat, "!(boneIndex & CLIENT_BONEINDEX_FLAG) || ((boneIndex & CLIENT_BONEINDEX_MASK) >= DObjNumBones( obj ))") )
          __debugbreak();
        v16 = dobjBoneParents->parents[v13 & 0xFFF];
        if ( v16 != 255 )
        {
          if ( v16 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_dobj.cpp", 317, ASSERT_TYPE_ASSERT, "(!(parentIndex & (1 << 15)))", (const char *)&queryFormat, "!(parentIndex & CLIENT_BONEINDEX_FLAG)") )
            __debugbreak();
          if ( bitarray_base<bitarray<768>>::testBit(outChildPartBits, (unsigned __int16)v16) && (!ignoreBits || !bitarray_base<bitarray<768>>::testBit((bitarray_base<bitarray<768> > *)ignoreBits, v13)) )
            bitarray_base<bitarray<768>>::setBit(outChildPartBits, v13);
        }
        ++v13;
      }
      while ( v13 < v12 );
      v6 = dobj;
    }
    v17 = v12 + 0x8000;
    v18 = DObjNumClientOnlyBones(v6);
    v19 = v17;
    for ( j = truncate_cast<unsigned short,int>(v18) + v12 + 0x8000; v17 < j; v19 = v17 )
    {
      if ( !dobjBoneParents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 311, ASSERT_TYPE_ASSERT, "(parentMap)", (const char *)&queryFormat, "parentMap") )
        __debugbreak();
      v21 = dobjBoneParents->obj;
      if ( (unsigned int)(v19 - 254) <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 278, ASSERT_TYPE_ASSERT, "(boneIndex != 255 && boneIndex != 254)", (const char *)&queryFormat, "boneIndex != NO_BONEINDEX && boneIndex != UNDEFINED_BONEINDEX") )
        __debugbreak();
      v22 = v19 & 0x7FFF;
      if ( v22 >= DObjTotalNumBones(v21) )
      {
        LODWORD(v26) = DObjTotalNumBones(v21);
        LODWORD(v25) = v19 & 0x7FFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex & ((1 << 15) - 1) ) < (unsigned)( DObjTotalNumBones( obj ) )", "boneIndex & CLIENT_BONEINDEX_MASK doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      if ( (v19 & 0x8000) != 0 && (int)v22 < DObjNumBones(v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 280, ASSERT_TYPE_ASSERT, "(!(boneIndex & (1 << 15)) || ((boneIndex & ((1 << 15) - 1)) >= DObjNumBones( obj )))", (const char *)&queryFormat, "!(boneIndex & CLIENT_BONEINDEX_FLAG) || ((boneIndex & CLIENT_BONEINDEX_MASK) >= DObjNumBones( obj ))") )
        __debugbreak();
      v23 = dobjBoneParents->parents[v19 & 0xFFF];
      if ( v23 != 255 )
      {
        v24 = v23 & 0x7FFF;
        if ( v24 >= 0x300 )
        {
          LODWORD(v26) = 768;
          LODWORD(v25) = v23 & 0x7FFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v25, v26) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v24 & 0x1F)) & outChildPartBits->array[(unsigned __int64)v24 >> 5]) != 0 )
        {
          if ( !ignoreBits )
            goto LABEL_65;
          if ( v22 >= 0x300 )
          {
            LODWORD(v26) = 768;
            LODWORD(v25) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v25, v26) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v22 & 0x1F)) & ignoreBits->array[(unsigned __int64)v22 >> 5]) == 0 )
          {
LABEL_65:
            if ( v22 >= 0x300 )
            {
              LODWORD(v28) = 768;
              LODWORD(v27) = v22;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v27, v28) )
                __debugbreak();
            }
            outChildPartBits->array[(unsigned __int64)v22 >> 5] |= 0x80000000 >> (v22 & 0x1F);
          }
        }
      }
      ++v17;
    }
  }
}

