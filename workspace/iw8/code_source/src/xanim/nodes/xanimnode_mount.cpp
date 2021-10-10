/*
==============
XAnimMount_CalcRootAbs
==============
*/

void __fastcall XAnimMount_CalcRootAbs(const DObj *const obj, unsigned int animIndex, const float time, tmat43_t<vec3_t> *outRootTransform)
{
  ?XAnimMount_CalcRootAbs@@YAXQEBUDObj@@IMAEAT?$tmat43_t@Tvec3_t@@@@@Z(obj, animIndex, time, outRootTransform);
}

/*
==============
XAnimMount::Reset
==============
*/

void __fastcall XAnimMount::Reset(XAnimMount *this)
{
  ?Reset@XAnimMount@@QEAAXXZ(this);
}

/*
==============
XAnimMount_SetBoneTransform
==============
*/

void __fastcall XAnimMount_SetBoneTransform(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, XAnimCalcBuffer *buffer, int boneIndex, const tmat43_t<vec3_t> *tagOriginToWorld, const tmat43_t<vec3_t> *boneToTagOrigin, float weightScale)
{
  ?XAnimMount_SetBoneTransform@@YAXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEAUXAnimCalcBuffer@@HAEBT?$tmat43_t@Tvec3_t@@@@3M@Z(animCalcInfo, obj, buffer, boneIndex, tagOriginToWorld, boneToTagOrigin, weightScale);
}

/*
==============
XAnimMount_GetBoneTransform
==============
*/

void __fastcall XAnimMount_GetBoneTransform(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, const tmat43_t<vec3_t> *tagOriginToWorld, tmat43_t<vec3_t> *outBoneToTagOrigin)
{
  ?XAnimMount_GetBoneTransform@@YAXPEBUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimCalcBuffer@@HAEBT?$tmat43_t@Tvec3_t@@@@AEAT4@@Z(animCalcInfo, obj, buffer, boneIndex, tagOriginToWorld, outBoneToTagOrigin);
}

/*
==============
XAnimMount_Register
==============
*/

void XAnimMount_Register(void)
{
  ?XAnimMount_Register@@YAXXZ();
}

/*
==============
XAnimMount_DebugDraw
==============
*/

void __fastcall XAnimMount_DebugDraw(const DObj *const obj, const tmat43_t<vec3_t> *transform, const vec4_t *color, const float radius)
{
  ?XAnimMount_DebugDraw@@YAXQEBUDObj@@AEBT?$tmat43_t@Tvec3_t@@@@AEBTvec4_t@@M@Z(obj, transform, color, radius);
}

/*
==============
XAnimMount_Destroy
==============
*/
void XAnimMount_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimMount_Update
==============
*/
void XAnimMount_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  const dvar_t *v7; 
  char *v12; 
  unsigned int i; 
  unsigned int GraftAnimIndex; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 children; 
  unsigned __int8 *v17; 
  __int64 v18; 
  __int64 goalWeight; 
  __int64 goalTime; 

  v7 = DCONST_DVARBOOL_xanim_disableMountNodes;
  if ( !DCONST_DVARBOOL_xanim_disableMountNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableMountNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
  {
    if ( !*((_BYTE *)nodeData + 100) )
    {
      *((_QWORD *)nodeData + 7) = 0i64;
      v12 = (char *)nodeData + 98;
      *((_BYTE *)nodeData + 96) = -2;
      for ( i = 0; i < 3; i += 3 )
      {
        *(_WORD *)(v12 - 1) = -258;
        v12[1] = -2;
        v12 += 3;
      }
      *((_BYTE *)nodeData + 100) = 1;
    }
    if ( !isInstantInit && !animInfo->children || animInfo->state.weight == 0.0 && animInfo->state.goalWeight == 0.0 )
    {
LABEL_32:
      XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, 0.0, 1, LINEAR);
      return;
    }
    GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
    InfoIndex = XAnimGetInfoIndex(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, animInfo->animIndex);
    if ( animInfo->state.goalWeight != 0.0 || InfoIndex == animInfoIndex )
    {
      if ( *((_BYTE *)nodeData + 48) )
      {
        children = animInfo->children;
        if ( (children & 0x8000u) != 0 )
        {
          v18 = 32 * (children & 0x7FFFu);
          if ( (unsigned int)v18 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(goalTime) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(goalWeight) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", goalWeight, goalTime) )
              __debugbreak();
          }
          v17 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v18];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(goalTime) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(goalWeight) = animInfo->children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", goalWeight, goalTime) )
              __debugbreak();
          }
          v17 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 110, ASSERT_TYPE_ASSERT, "(childAnimInfo)", (const char *)&queryFormat, "childAnimInfo") )
          __debugbreak();
        if ( *((float *)v17 + 14) == 0.0 || *((float *)v17 + 15) == 0.0 )
        {
          if ( *((float *)v17 + 15) != 0.0 )
            return;
          goto LABEL_32;
        }
      }
      XAnimSetChildGoalWeights(obj, obj->tree, GraftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, animInfo->animIndex, animInfo->state.weight, 0.0, 0.0, (scr_string_t)0, animInfo->state.weight > 0.0, LINEAR, modelNameMap);
    }
  }
}

/*
==============
XAnimMount_Calc
==============
*/
void XAnimMount_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  __int128 v7; 
  const dvar_t *v8; 
  XAnimCalcAnimInfo *v9; 
  XAnimCalcBuffer *v10; 
  unsigned int v14; 
  unsigned int v15; 
  _BYTE *v16; 
  scr_string_t **v17; 
  scr_string_t *v18; 
  char v19; 
  float v20; 
  float v21; 
  unsigned int DescendantWithGreatest; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  double v28; 
  float v29; 
  _BYTE *v31; 
  const dvar_t *v32; 
  int modelIndex; 
  XAnimCalcAnimInfo *v34; 
  vec4_t angles; 
  vec4_t v36; 
  tmat43_t<vec3_t> boneToTagOrigin; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> outBoneToTagOrigin; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> in1; 
  __int128 v44; 

  v8 = DCONST_DVARBOOL_xanim_disableMountNodes;
  v9 = animCalcInfo;
  v10 = destBuffer;
  v34 = animCalcInfo;
  *(_QWORD *)v36.v = destBuffer;
  if ( !DCONST_DVARBOOL_xanim_disableMountNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableMountNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled && *((_BYTE *)nodeData + 100) )
  {
    v14 = 0;
    if ( obj != *((const DObj **)nodeData + 7) )
    {
      *((_QWORD *)nodeData + 7) = obj;
      *((_BYTE *)nodeData + 96) = -2;
      DObjGetBoneIndexInternal_36(obj, scr_const.tag_origin, (unsigned __int8 *)nodeData + 96, &modelIndex);
      bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)nodeData + 64, *((unsigned __int8 *)nodeData + 96));
      v15 = 0;
      v16 = (char *)nodeData + 97;
      v17 = (scr_string_t **)s_boneNames;
      do
      {
        v18 = *v17;
        *v16 = -2;
        if ( v18 )
        {
          DObjGetBoneIndexInternal_36(obj, *v18, (unsigned __int8 *)nodeData + (int)v15 + 97, &modelIndex);
          bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)nodeData + 64, (unsigned __int8)*v16);
        }
        ++v15;
        ++v17;
        ++v16;
      }
      while ( v15 < 3 );
      DObjCompleteHierarchyBits(obj, (DObjPartBits *)nodeData + 2);
      v9 = v34;
      v10 = *(XAnimCalcBuffer **)v36.v;
    }
    if ( *((_BYTE *)nodeData + 96) > 0xFDu || *((_BYTE *)nodeData + 97) > 0xFDu )
    {
      v19 = 0;
    }
    else
    {
      v19 = 1;
      XAnimCalcAddPartBits(v9, obj, (const DObjPartBits *)nodeData + 2, v10);
    }
    XAnimCalcDefaultBlendNode(v9, obj, animInfo, weightScale, bNormQuat, v10, LINEAR);
    if ( v19 )
    {
      v20 = *((float *)nodeData + 5);
      angles.v[0] = 0.0;
      angles.v[2] = 0.0;
      angles.v[1] = v20;
      AnglesAndOriginToMatrix43((const vec3_t *)&angles, (const vec3_t *)((char *)nodeData + 8), &result);
      v21 = *((float *)nodeData + 7);
      v36.v[1] = *((float *)nodeData + 10);
      angles.v[0] = *((float *)nodeData + 6);
      angles.v[2] = *((float *)nodeData + 8) - *((float *)nodeData + 9);
      v36.v[0] = 0.0;
      v36.v[2] = 0.0;
      angles.v[1] = v21;
      AnglesAndOriginToMatrix43((const vec3_t *)&v36, (const vec3_t *)&angles, &in2);
      DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<0>(animInfo->children);
      if ( DescendantWithGreatest )
      {
        v23 = *(float *)nodeData;
        v24 = *((float *)nodeData + 1);
        v44 = v7;
        if ( v23 > v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 347, ASSERT_TYPE_ASSERT, "( node->timeRange[0] ) <= ( node->timeRange[1] )", "%s <= %s\n\t%g, %g", "node->timeRange[0]", "node->timeRange[1]", v23, v24) )
          __debugbreak();
        v25 = *((float *)nodeData + 1) - *(float *)nodeData;
        if ( v25 <= 0.0 )
        {
          v29 = 0.0;
        }
        else
        {
          v26 = (float)(*((float *)nodeData + 11) - *(float *)nodeData) / v25;
          _XMM2 = LODWORD(FLOAT_1_0);
          v28 = I_fclamp(v26, 0.0, 1.0);
          v29 = v26;
          if ( *(float *)&v28 < 0.0 || *(float *)&v28 > 1.0 )
          {
            __asm { vxorpd  xmm2, xmm2, xmm2 }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 351, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( timeValue ) && ( timeValue ) <= ( 1.0f )", "timeValue not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v28, *(double *)&_XMM2, DOUBLE_1_0) )
              __debugbreak();
          }
        }
        XAnimMount_CalcRootAbs(obj, DescendantWithGreatest, v29, &out);
      }
      else
      {
        MatrixIdentity33((tmat33_t<vec3_t> *)&out);
        out.m[3].v[0] = 0.0;
        out.m[3].v[1] = 0.0;
        out.m[3].v[2] = 0.0;
      }
      MatrixMultiply43(&out, &in2, &in1);
      MatrixInverseOrthogonal43(&result, &outBoneToTagOrigin);
      MatrixMultiply43(&in1, &outBoneToTagOrigin, &boneToTagOrigin);
      AxisToQuat((const tmat33_t<vec3_t> *)&boneToTagOrigin, &angles);
      QuatSlerp(&quat_identity, &angles, weightScale, &v36);
      QuatToAxis(&v36, (tmat33_t<vec3_t> *)&axis);
      axis.m[3].v[0] = weightScale * boneToTagOrigin.m[3].v[0];
      axis.m[3].v[1] = weightScale * boneToTagOrigin.m[3].v[1];
      axis.m[3].v[2] = weightScale * boneToTagOrigin.m[3].v[2];
      v31 = (char *)nodeData + 97;
      do
      {
        if ( *v31 <= 0xFDu )
        {
          XAnimMount_GetBoneTransform(v9, obj, v10, (unsigned __int8)*v31, &result, &outBoneToTagOrigin);
          MatrixMultiply43(&outBoneToTagOrigin, &axis, &boneToTagOrigin);
          XAnimMount_SetBoneTransform(v9, obj, v10, (unsigned __int8)*v31, &result, &boneToTagOrigin, weightScale);
        }
        ++v14;
        ++v31;
      }
      while ( v14 < 3 );
      if ( !obj->tree->owner[0] )
      {
        v32 = DCONST_DVARINT_mount_debug;
        if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        if ( v32->current.integer == 3 )
        {
          XAnimMount_DebugDraw(obj, &in2, &colorBlue, 2.0);
          XAnimMount_DebugDraw(obj, &result, &colorRed, 2.0);
          XAnimMount_DebugDraw(obj, &in1, &colorGreen, 2.0);
        }
      }
    }
  }
}

/*
==============
XAnimMount_Read
==============
*/
void XAnimMount_Read(void *nodeData, MemoryFile *memFile)
{
  unsigned int v2; 
  char *v3; 
  double Float; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  char p; 

  v2 = 0;
  *((_BYTE *)nodeData + 96) = -2;
  *((_QWORD *)nodeData + 7) = 0i64;
  v3 = (char *)nodeData + 98;
  do
  {
    *(_WORD *)(v3 - 1) = -258;
    v2 += 3;
    v3[1] = -2;
    v3 += 3;
  }
  while ( v2 < 3 );
  *((_BYTE *)nodeData + 100) = 1;
  Float = MemFile_ReadFloat(memFile);
  *(float *)nodeData = *(float *)&Float;
  v7 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 1) = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 2) = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 3) = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 4) = *(float *)&v10;
  v11 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 5) = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 6) = *(float *)&v12;
  v13 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 7) = *(float *)&v13;
  v14 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 8) = *(float *)&v14;
  v15 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 9) = *(float *)&v15;
  v16 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 10) = *(float *)&v16;
  v17 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 11) = *(float *)&v17;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 48) = p;
}

/*
==============
XAnimMount_Write
==============
*/
void XAnimMount_Write(void *nodeData, MemoryFile *memFile)
{
  char p; 

  MemFile_WriteFloat(memFile, *(float *)nodeData);
  MemFile_WriteFloat(memFile, *((float *)nodeData + 1));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 2));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 3));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 4));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 5));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 6));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 7));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 8));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 9));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 10));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 11));
  p = *((_BYTE *)nodeData + 48);
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
XAnimMount_Init
==============
*/
void XAnimMount_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  unsigned int v4; 
  char *v5; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 468, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 469, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  v4 = 0;
  *((_BYTE *)nodeData + 96) = -2;
  *((_QWORD *)nodeData + 7) = 0i64;
  v5 = (char *)nodeData + 98;
  do
  {
    *(_WORD *)(v5 - 1) = -258;
    v4 += 3;
    v5[1] = -2;
    v5 += 3;
  }
  while ( v4 < 3 );
  *((_BYTE *)nodeData + 100) = 1;
}

/*
==============
XAnimMount_PostParse
==============
*/
char XAnimMount_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  return 1;
}

/*
==============
XAnimMount_PrintDebug
==============
*/
void XAnimMount_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v6; 
  const XAnimParts *Parts; 
  unsigned int DescendantWithGreatest; 
  const XAnim_s *SubTreeAnims; 
  __int64 v13; 
  const char *name; 

  v6 = size;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 486, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *((_BYTE *)nodeData + 100) )
  {
    Parts = NULL;
    DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<0>(animInfo->children);
    if ( DescendantWithGreatest )
    {
      SubTreeAnims = XAnimGetSubTreeAnims(**((const XAnimTree ***)nodeData + 7), (const XAnimSubTreeID)animInfo->subTreeID);
      if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 499, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
        __debugbreak();
      Parts = XAnimGetParts(SubTreeAnims, DescendantWithGreatest);
    }
    if ( depth > 0 )
    {
      v13 = (unsigned int)depth;
      do
      {
        Com_sprintfPos_truncate(buffer, v6, inoutPos, "  ");
        --v13;
      }
      while ( v13 );
    }
    if ( Parts )
      name = Parts->name;
    else
      name = (char *)&queryFormat.fmt + 3;
    Com_sprintfPos_truncate(buffer, v6, inoutPos, "   ^5origin={%.1f,%.1f,%.1f}, pivotOrg={%.1f,%.1f,%.1f}, pivotHeight=%.2f, pivotYaw=%.2f, rootParts='%s'\n", *((float *)nodeData + 2), *((float *)nodeData + 3), *((float *)nodeData + 4), *((float *)nodeData + 6), *((float *)nodeData + 7), *((float *)nodeData + 8), *((float *)nodeData + 9), *((float *)nodeData + 10), name);
  }
}

/*
==============
XAnimMount::Reset
==============
*/
void XAnimMount::Reset(XAnimMount *this)
{
  unsigned int v1; 
  unsigned __int8 *v2; 

  v1 = 0;
  this->originBoneIndex = -2;
  this->obj = NULL;
  v2 = &this->boneIndex[1];
  do
  {
    *(_WORD *)(v2 - 1) = -258;
    v1 += 3;
    v2[1] = -2;
    v2 += 3;
  }
  while ( v1 < 3 );
  this->initialized = 1;
}

/*
==============
XAnimMount_CalcRootAbs
==============
*/
void XAnimMount_CalcRootAbs(const DObj *const obj, unsigned int animIndex, const float time, tmat43_t<vec3_t> *outRootTransform)
{
  __int64 v9; 
  vec3_t trans; 
  vec4_t rot; 

  Sys_ProfBeginNamedEvent(0xFF808080, "BG_Execution_CalcRootAbs");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 138, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !animIndex )
  {
    LODWORD(v9) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 139, ASSERT_TYPE_ASSERT, "( animIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "animIndex", "0", v9, 0i64) )
      __debugbreak();
  }
  if ( time < 0.0 || time > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 140, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( time ) && ( time ) <= ( 1.0f )", "time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", time, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 142, ASSERT_TYPE_ASSERT, "( obj->tree ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !obj->tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 143, ASSERT_TYPE_ASSERT, "( obj->tree->anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree->anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !XAnimIsLeafNode(obj->tree->anims, animIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 144, ASSERT_TYPE_ASSERT, "(XAnimIsLeafNode( obj->tree->anims, animIndex ))", (const char *)&queryFormat, "XAnimIsLeafNode( obj->tree->anims, animIndex )") )
    __debugbreak();
  XAnimGetAbsDelta(obj->tree->anims, animIndex, &rot, &trans, time);
  QuatAndOriginToMatrix43(&rot, &trans, outRootTransform);
  Sys_ProfEndNamedEvent();
}

/*
==============
XAnimMount_DebugDraw
==============
*/
void XAnimMount_DebugDraw(const DObj *const obj, const tmat43_t<vec3_t> *transform, const vec4_t *color, const float radius)
{
  const dvar_t *v6; 

  if ( !obj->tree->owner[0] )
  {
    v6 = DCONST_DVARINT_mount_debug;
    if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.integer == 3 )
    {
      G_DebugSphere(&transform->m[3], radius, color, 1, 0);
      G_DebugAxis((const tmat33_t<vec3_t> *)transform, &transform->m[3], radius, 1, 0);
    }
  }
}

/*
==============
XAnimMount_GetBoneTransform
==============
*/
void XAnimMount_GetBoneTransform(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, const tmat43_t<vec3_t> *tagOriginToWorld, tmat43_t<vec3_t> *outBoneToTagOrigin)
{
  float4 outModelQuat; 
  float4 outModelTranslation; 
  vec4_t quat; 
  tmat43_t<vec3_t> dst; 
  tmat43_t<vec3_t> out; 

  _RBX = outBoneToTagOrigin;
  XAnimGetLocalBoneTransform(animCalcInfo, obj, buffer, boneIndex, &outModelQuat, &outModelTranslation);
  _XMM0 = outModelQuat.v;
  __asm
  {
    vcmpneqps xmm1, xmm0, xmm0
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 159, ASSERT_TYPE_SANITY, "( !Float4IsNaN( quat4 ) )", (const char *)&queryFormat, "!Float4IsNaN( quat4 )") )
    __debugbreak();
  _XMM0 = outModelTranslation.v;
  __asm
  {
    vcmpneqps xmm1, xmm0, xmm0
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 160, ASSERT_TYPE_SANITY, "( !Float4IsNaN( trans4 ) )", (const char *)&queryFormat, "!Float4IsNaN( trans4 )") )
    __debugbreak();
  quat = (vec4_t)outModelQuat.v;
  QuatToAxis(&quat, (tmat33_t<vec3_t> *)outBoneToTagOrigin);
  _XMM1 = outModelTranslation.v;
  outBoneToTagOrigin->m[3].v[0] = outModelTranslation.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+28h], xmm1, 1
    vextractps dword ptr [rbx+2Ch], xmm1, 2
  }
  if ( obj->tree->owner[0] )
  {
    MatrixCopy33((const tmat33_t<vec3_t> *)outBoneToTagOrigin, (tmat33_t<vec3_t> *)&dst);
    dst.m[3].v[0] = outBoneToTagOrigin->m[3].v[0] + g_activeRefDef->viewOffset.v[0];
    dst.m[3].v[1] = g_activeRefDef->viewOffset.v[1] + outBoneToTagOrigin->m[3].v[1];
    dst.m[3].v[2] = g_activeRefDef->viewOffset.v[2] + outBoneToTagOrigin->m[3].v[2];
    MatrixInverseOrthogonal43(tagOriginToWorld, &out);
    MatrixMultiply43(&dst, &out, outBoneToTagOrigin);
  }
  if ( !Mat33IsOrthonormal((const tmat33_t<vec3_t> *)outBoneToTagOrigin) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 188, ASSERT_TYPE_ASSERT, "( Mat33IsOrthonormal( leading_submatrix<mat33_t>( outBoneToTagOrigin ) ) )", "mat3 isn't orthonormal") )
    __debugbreak();
}

/*
==============
XAnimMount_Register
==============
*/
void XAnimMount_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimMount>::ms_typeInfo);
}

/*
==============
XAnimMount_SetBoneTransform
==============
*/
void XAnimMount_SetBoneTransform(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, XAnimCalcBuffer *buffer, int boneIndex, const tmat43_t<vec3_t> *tagOriginToWorld, const tmat43_t<vec3_t> *boneToTagOrigin, float weightScale)
{
  float v11; 
  vec4_t v13; 
  const float4 *fmt; 
  const float4 *v22; 
  vec4_t out; 
  tmat43_t<vec3_t> dst; 

  if ( obj->tree->owner[0] )
  {
    MatrixMultiply43(boneToTagOrigin, tagOriginToWorld, &dst);
    if ( !g_activeRefDef )
    {
      v22 = (const float4 *)"g_activeRefDef";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 213, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat) )
        __debugbreak();
    }
    v11 = dst.m[3].v[0] - g_activeRefDef->viewOffset.v[0];
    dst.m[3].v[0] = v11;
    dst.m[3].v[1] = dst.m[3].v[1] - g_activeRefDef->viewOffset.v[1];
    dst.m[3].v[2] = dst.m[3].v[2] - g_activeRefDef->viewOffset.v[2];
  }
  else
  {
    MatrixCopy43(boneToTagOrigin, &dst);
    v11 = dst.m[3].v[0];
  }
  out.v[3] = 0.0;
  v13 = out;
  v13.v[0] = v11;
  _XMM6 = v13;
  __asm
  {
    vinsertps xmm6, xmm6, xmm1, 10h
    vinsertps xmm6, xmm6, xmm0, 20h ; ' '
    vcmpneqps xmm0, xmm6, xmm6
    vmovmskps eax, xmm0
  }
  out = _XMM6;
  if ( _EAX )
  {
    v22 = (const float4 *)"!Float4IsNaN( origin4 )";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 223, ASSERT_TYPE_SANITY, "( !Float4IsNaN( origin4 ) )", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !Mat33IsOrthonormal((const tmat33_t<vec3_t> *)&dst) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 226, ASSERT_TYPE_ASSERT, "( Mat33IsOrthonormal( leading_submatrix<mat33_t>( boneTransform ) ) )", "mat3 isn't orthonormal") )
    __debugbreak();
  AxisToQuat((const tmat33_t<vec3_t> *)&dst, &out);
  _XMM7 = out;
  __asm
  {
    vcmpneqps xmm0, xmm7, xmm7
    vmovmskps eax, xmm0
  }
  if ( _EAX )
  {
    v22 = (const float4 *)"!Float4IsNaN( quat4 )";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 229, ASSERT_TYPE_SANITY, "( !Float4IsNaN( quat4 ) )", (const char *)&queryFormat) )
      __debugbreak();
  }
  XAnimSetLocalBoneTransform(animCalcInfo, obj, buffer, boneIndex, fmt, v22, weightScale);
}

