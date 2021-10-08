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
  unsigned __int64 v16; 
  bool v17; 
  __int64 v18; 
  __int64 v19; 
  bool IsHierarchyFlattened; 
  DObjPartBits partBits; 

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
        goto LABEL_27;
    }
    v12 = 0;
    __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
    _RSI = &partBits;
    __asm { vpxor   xmm6, xmm6, xmm6 }
    do
    {
      __asm { vmovdqu xmmword ptr [rsi], xmm6 }
      _RSI = (DObjPartBits *)((char *)_RSI + 16);
      ++v12;
    }
    while ( v12 < 2 );
    __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
    do
    {
      v16 = (unsigned int)boneIndices[v10];
      if ( (boneIndices[v10] & 0x8000) != 0 )
      {
        partBits.array[7] |= 2u;
      }
      else
      {
        if ( (unsigned int)v16 >= 0x100 )
        {
          LODWORD(v19) = 256;
          LODWORD(v18) = boneIndices[v10];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v18, v19) )
            __debugbreak();
        }
        partBits.array[v16 >> 5] |= 0x80000000 >> (v16 & 0x1F);
      }
      ++v10;
    }
    while ( v10 < v9 );
    v17 = 0;
    v7 = obj;
    if ( !IsHierarchyFlattened )
      v17 = DObjCompleteHierarchyBits(obj, &partBits);
    CG_Pose_DoControllers(pose, obj, &partBits);
    if ( v17 && !IsHierarchyFlattened )
      DObjCalcSkel(obj, &partBits);
  }
LABEL_27:
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
  __int64 result; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex[3]; 

  _R14 = outOrigin;
  _RBP = outTagMat;
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
  _RAX = CG_DObjGetLocalBoneMatrix(pose, obj, inOutIndex[0]);
  _RBX = _RAX;
  if ( !_RAX )
    return 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovaps [rsp+0E8h+var_48], xmm6
    vmovaps [rsp+0E8h+var_58], xmm7
    vmovaps [rsp+0E8h+var_68], xmm8
    vmovaps [rsp+0E8h+var_78], xmm9
    vmovaps [rsp+0E8h+var_88], xmm10
    vmovss  [rsp+0E8h+modelIndex], xmm0
    vmovaps [rsp+0E8h+var_98], xmm11
    vmovaps [rsp+0E8h+var_A8], xmm12
  }
  if ( (modelIndex[0] & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  [rsp+0E8h+modelIndex], xmm0
  }
  if ( (modelIndex[0] & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0E8h+modelIndex], xmm0
  }
  if ( (modelIndex[0] & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+0E8h+modelIndex], xmm0
  }
  if ( (modelIndex[0] & 0x7F800000) == 2139095040 )
  {
LABEL_28:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+0E8h+modelIndex], xmm0
  }
  if ( (modelIndex[0] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmulss  xmm2, xmm0, dword ptr [rbx]
    vmulss  xmm12, xmm2, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+4]
    vmulss  xmm4, xmm3, xmm0
    vmulss  xmm6, xmm5, xmm0
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm10, xmm2, xmm0
    vmulss  xmm7, xmm2, xmm3
    vmulss  xmm9, xmm2, xmm5
    vmulss  xmm2, xmm6, xmm0
    vmulss  xmm11, xmm4, xmm3
    vmulss  xmm8, xmm4, xmm5
    vmulss  xmm4, xmm4, xmm0
    vaddss  xmm1, xmm2, xmm7
    vmulss  xmm3, xmm6, xmm5
    vmovss  xmm5, cs:__real@3f800000
    vmovaps xmm6, [rsp+0E8h+var_48]
  }
  result = 1i64;
  __asm
  {
    vaddss  xmm0, xmm3, xmm11
    vsubss  xmm0, xmm5, xmm0
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  dword ptr [rbp+4], xmm1
    vsubss  xmm1, xmm7, xmm2
    vmovaps xmm7, [rsp+0E8h+var_58]
    vsubss  xmm0, xmm9, xmm4
    vmovss  dword ptr [rbp+8], xmm0
    vmovss  dword ptr [rbp+0Ch], xmm1
    vaddss  xmm1, xmm8, xmm10
    vaddss  xmm0, xmm3, xmm12
    vsubss  xmm0, xmm5, xmm0
    vmovss  dword ptr [rbp+10h], xmm0
    vmovss  dword ptr [rbp+14h], xmm1
    vsubss  xmm1, xmm8, xmm10
    vmovaps xmm10, [rsp+0E8h+var_88]
    vmovaps xmm8, [rsp+0E8h+var_68]
    vaddss  xmm0, xmm4, xmm9
    vmovaps xmm9, [rsp+0E8h+var_78]
    vmovss  dword ptr [rbp+18h], xmm0
    vmovss  dword ptr [rbp+1Ch], xmm1
    vaddss  xmm0, xmm11, xmm12
    vmovaps xmm12, [rsp+0E8h+var_A8]
    vmovaps xmm11, [rsp+0E8h+var_98]
    vsubss  xmm0, xmm5, xmm0
    vmovss  dword ptr [rbp+20h], xmm0
    vmovss  xmm0, dword ptr [rbx+10h]
    vaddss  xmm1, xmm0, dword ptr [rcx+7Ch]
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm2, dword ptr [rbx+14h]
    vaddss  xmm0, xmm2, dword ptr [rcx+80h]
    vmovss  dword ptr [r14+4], xmm0
    vmovss  xmm1, dword ptr [rbx+18h]
    vaddss  xmm2, xmm1, dword ptr [rcx+84h]
    vmovss  dword ptr [r14+8], xmm2
  }
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

  _RDI = outPos;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 115, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 116, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  result = CG_DObjGetLocalTagMatrix(pose, obj, tagName);
  _RCX = result;
  if ( result )
  {
    _RAX = g_activeRefDef;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+7Ch]
      vaddss  xmm1, xmm0, dword ptr [rcx+10h]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rcx+14h]
      vaddss  xmm0, xmm2, dword ptr [rax+80h]
      vmovss  dword ptr [rdi+4], xmm0
      vmovss  xmm1, dword ptr [rcx+18h]
      vaddss  xmm2, xmm1, dword ptr [rax+84h]
      vmovss  dword ptr [rdi+8], xmm2
    }
    return (DObjAnimMat *)1;
  }
  return result;
}

