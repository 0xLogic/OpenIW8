/*
==============
CG_DObjCalcBones
==============
*/

void __fastcall CG_DObjCalcBones(const cpose_t *pose, const DObj *obj, const int boneCount, const int *boneIndices)
{
  ?CG_DObjCalcBones@@YAXPEBUcpose_t@@PEBUDObj@@HPEBH@Z(pose, obj, boneCount, boneIndices);
}

/*
==============
CG_DObjGetWorldTagPos
==============
*/

int __fastcall CG_DObjGetWorldTagPos(const cpose_t *pose, const DObj *obj, scr_string_t tagName, vec3_t *outPos)
{
  return ?CG_DObjGetWorldTagPos@@YAHPEBUcpose_t@@PEBUDObj@@W4scr_string_t@@AEATvec3_t@@@Z(pose, obj, tagName, outPos);
}

/*
==============
CG_DObjGetLocalBoneMatrix
==============
*/

DObjAnimMat *__fastcall CG_DObjGetLocalBoneMatrix(const cpose_t *pose, const DObj *obj, int boneIndex)
{
  return ?CG_DObjGetLocalBoneMatrix@@YAPEAUDObjAnimMat@@PEBUcpose_t@@PEBUDObj@@H@Z(pose, obj, boneIndex);
}

/*
==============
CG_DObjGetWorldTagMatrix
==============
*/

int __fastcall CG_DObjGetWorldTagMatrix(const cpose_t *pose, const DObj *obj, scr_string_t tagName, tmat33_t<vec3_t> *outTagMat, vec3_t *outOrigin)
{
  return ?CG_DObjGetWorldTagMatrix@@YAHPEBUcpose_t@@PEBUDObj@@W4scr_string_t@@AEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(pose, obj, tagName, outTagMat, outOrigin);
}

/*
==============
CG_DObjGetLocalTagMatrix
==============
*/

DObjAnimMat *__fastcall CG_DObjGetLocalTagMatrix(const cpose_t *pose, const DObj *obj, scr_string_t tagName)
{
  return ?CG_DObjGetLocalTagMatrix@@YAPEAUDObjAnimMat@@PEBUcpose_t@@PEBUDObj@@W4scr_string_t@@@Z(pose, obj, tagName);
}

/*
==============
CG_DObjCalcBones
==============
*/
void CG_DObjCalcBones(const cpose_t *pose, const DObj *obj, const int boneCount, const int *boneIndices)
{
  __int64 v5; 
  const DObj *v7; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  DObjPartBits *p_partBits; 
  unsigned __int64 v15; 
  bool v16; 
  __int64 v17; 
  __int64 v18; 
  bool IsHierarchyFlattened; 
  DObjPartBits partBits; 
  __int128 v23; 

  v5 = boneCount;
  v7 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 15, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 16, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  DObjLock(v7);
  CG_Pose_ValidateEntityPoseOrigin(v7, pose);
  IsHierarchyFlattened = CG_Pose_IsHierarchyFlattened(pose);
  v9 = v5;
  if ( (int)v5 > 0 )
  {
    v10 = 0i64;
    v11 = 0i64;
    while ( CL_DObjCreateSkelForBone(v7, boneIndices[v11]) )
    {
      if ( ++v11 >= v9 )
        goto LABEL_26;
    }
    v12 = 0;
    v23 = _XMM6;
    p_partBits = &partBits;
    __asm { vpxor   xmm6, xmm6, xmm6 }
    do
    {
      *(_OWORD *)p_partBits->array = _XMM6;
      p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
      ++v12;
    }
    while ( v12 < 2 );
    do
    {
      v15 = (unsigned int)boneIndices[v10];
      if ( (boneIndices[v10] & 0x8000) != 0 )
      {
        partBits.array[7] |= 2u;
      }
      else
      {
        if ( (unsigned int)v15 >= 0x100 )
        {
          LODWORD(v18) = 256;
          LODWORD(v17) = boneIndices[v10];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v17, v18) )
            __debugbreak();
        }
        partBits.array[v15 >> 5] |= 0x80000000 >> (v15 & 0x1F);
      }
      ++v10;
    }
    while ( v10 < v9 );
    v16 = 0;
    v7 = obj;
    if ( !IsHierarchyFlattened )
      v16 = DObjCompleteHierarchyBits(obj, &partBits);
    CG_Pose_DoControllers(pose, obj, &partBits);
    if ( v16 && !IsHierarchyFlattened )
      DObjCalcSkel(obj, &partBits);
  }
LABEL_26:
  DObjUnlock(v7);
}

/*
==============
CG_DObjGetLocalBoneMatrix
==============
*/
DObjAnimMat *CG_DObjGetLocalBoneMatrix(const cpose_t *pose, const DObj *obj, int boneIndex)
{
  char *Value; 
  int *v7; 
  _QWORD *v8; 
  char *v9; 
  int *v10; 
  unsigned __int64 v11; 
  ThreadContext CurrentThreadContext; 
  DObjAnimMat *result; 
  __int64 v14; 
  __int64 v15; 
  int boneIndices; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 86, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  Value = (char *)Sys_GetValue(0);
  v7 = (int *)(Value + 18936);
  if ( (unsigned int)(*((_DWORD *)Value + 4734) + 1) >= 3 )
  {
    LODWORD(v14) = *((_DWORD *)Value + 4734) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v14, 3) )
      __debugbreak();
  }
  if ( (unsigned int)++*v7 >= 3 )
  {
    LODWORD(v15) = 3;
    LODWORD(v14) = *v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v8 = Value + 2088;
  v9 = Value + 40;
  if ( *v8 < (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v8 += 8i64;
  if ( *v8 >= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v8 = v7;
  if ( *v8 <= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v10 = &v7[*v7 + 2];
  v11 = __rdtsc();
  *v10 = v11;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 421, NULL, 0);
  boneIndices = boneIndex;
  CG_DObjCalcBones(pose, obj, 1, &boneIndices);
  Profile_EndInternal(NULL);
  result = DObjGetRotTransArray(obj);
  if ( result )
    return DObjGetSkelBoneMatrix(obj, boneIndex);
  return result;
}

/*
==============
CG_DObjGetWorldTagMatrix
==============
*/
__int64 CG_DObjGetWorldTagMatrix(const cpose_t *pose, const DObj *obj, scr_string_t tagName, tmat33_t<vec3_t> *outTagMat, vec3_t *outOrigin)
{
  int *LocalBoneMatrix; 
  int *v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int64 result; 
  refdef_t *v23; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex[3]; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 131, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 132, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 133, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 101, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  inOutIndex[0] = -2;
  if ( !DObjGetBoneIndexInternal(obj, tagName, inOutIndex, modelIndex) )
    return 0i64;
  LocalBoneMatrix = (int *)CG_DObjGetLocalBoneMatrix(pose, obj, inOutIndex[0]);
  v10 = LocalBoneMatrix;
  if ( !LocalBoneMatrix )
    return 0i64;
  modelIndex[0] = *LocalBoneMatrix;
  if ( (modelIndex[0] & 0x7F800000) == 2139095040 || (modelIndex[0] = LocalBoneMatrix[1], (modelIndex[0] & 0x7F800000) == 2139095040) || (modelIndex[0] = LocalBoneMatrix[2], (modelIndex[0] & 0x7F800000) == 2139095040) || (modelIndex[0] = LocalBoneMatrix[3], (modelIndex[0] & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
      __debugbreak();
  }
  modelIndex[0] = v10[7];
  if ( (modelIndex[0] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
    __debugbreak();
  v11 = *((float *)v10 + 2);
  v12 = *((float *)v10 + 7);
  v13 = v12 * *(float *)v10;
  v14 = v13 * *(float *)v10;
  v15 = *((float *)v10 + 1);
  v16 = v15 * v12;
  v17 = v11 * v12;
  v18 = *((float *)v10 + 3);
  v19 = v16 * v15;
  v20 = v16 * v11;
  v21 = v16 * v18;
  result = 1i64;
  outTagMat->m[0].v[0] = 1.0 - (float)((float)(v17 * v11) + v19);
  outTagMat->m[0].v[1] = (float)(v17 * v18) + (float)(v13 * v15);
  outTagMat->m[0].v[2] = (float)(v13 * v11) - v21;
  outTagMat->m[1].v[0] = (float)(v13 * v15) - (float)(v17 * v18);
  outTagMat->m[1].v[1] = 1.0 - (float)((float)(v17 * v11) + v14);
  outTagMat->m[1].v[2] = v20 + (float)(v13 * v18);
  outTagMat->m[2].v[0] = v21 + (float)(v13 * v11);
  outTagMat->m[2].v[1] = v20 - (float)(v13 * v18);
  outTagMat->m[2].v[2] = 1.0 - (float)(v19 + v14);
  v23 = g_activeRefDef;
  outOrigin->v[0] = *((float *)v10 + 4) + g_activeRefDef->viewOffset.v[0];
  outOrigin->v[1] = *((float *)v10 + 5) + v23->viewOffset.v[1];
  outOrigin->v[2] = *((float *)v10 + 6) + v23->viewOffset.v[2];
  return result;
}

/*
==============
CG_DObjGetLocalTagMatrix
==============
*/
DObjAnimMat *CG_DObjGetLocalTagMatrix(const cpose_t *pose, const DObj *obj, scr_string_t tagName)
{
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 101, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  inOutIndex = -2;
  if ( DObjGetBoneIndexInternal_2(obj, tagName, &inOutIndex, &modelIndex) )
    return CG_DObjGetLocalBoneMatrix(pose, obj, inOutIndex);
  else
    return 0i64;
}

/*
==============
CG_DObjGetWorldTagPos
==============
*/
DObjAnimMat *CG_DObjGetWorldTagPos(const cpose_t *pose, const DObj *obj, scr_string_t tagName, vec3_t *outPos)
{
  DObjAnimMat *result; 
  float *v9; 
  refdef_t *v10; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 115, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 116, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  result = CG_DObjGetLocalTagMatrix(pose, obj, tagName);
  v9 = (float *)result;
  if ( result )
  {
    v10 = g_activeRefDef;
    outPos->v[0] = g_activeRefDef->viewOffset.v[0] + v9[4];
    outPos->v[1] = v9[5] + v10->viewOffset.v[1];
    outPos->v[2] = v9[6] + v10->viewOffset.v[2];
    return (DObjAnimMat *)1;
  }
  return result;
}

