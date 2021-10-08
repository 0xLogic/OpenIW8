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
  const dvar_t *v9; 
  char *v14; 
  unsigned int i; 
  bool v16; 
  unsigned int GraftAnimIndex; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 children; 
  __int64 v24; 
  bool v25; 
  bool v26; 
  __int64 goalWeight; 
  float goalWeighta; 
  __int64 goalTime; 
  float goalTimea; 
  float v34; 

  v9 = DCONST_DVARBOOL_xanim_disableMountNodes;
  _RDI = animInfo;
  if ( !DCONST_DVARBOOL_xanim_disableMountNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableMountNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
    if ( !*((_BYTE *)nodeData + 100) )
    {
      *((_QWORD *)nodeData + 7) = 0i64;
      v14 = (char *)nodeData + 98;
      *((_BYTE *)nodeData + 96) = -2;
      for ( i = 0; i < 3; i += 3 )
      {
        *(_WORD *)(v14 - 1) = -258;
        v14[1] = -2;
        v14 += 3;
      }
      *((_BYTE *)nodeData + 100) = 1;
    }
    v16 = !isInstantInit;
    if ( isInstantInit || (v16 = _RDI->children == 0, _RDI->children) )
    {
      __asm
      {
        vmovaps [rsp+88h+var_28], xmm6
        vxorps  xmm6, xmm6, xmm6
        vucomiss xmm6, dword ptr [rdi+3Ch]
      }
      if ( !v16 )
        goto LABEL_15;
      __asm { vucomiss xmm6, dword ptr [rdi+38h] }
      if ( v16 )
      {
        __asm { vxorps  xmm2, xmm2, xmm2; blendTime }
        XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 1, LINEAR);
      }
      else
      {
LABEL_15:
        GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
        InfoIndex = XAnimGetInfoIndex(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)_RDI->subTreeID, _RDI->animIndex);
        __asm { vucomiss xmm6, dword ptr [rdi+38h] }
        if ( !v16 || InfoIndex == animInfoIndex )
        {
          if ( !*((_BYTE *)nodeData + 48) )
            goto LABEL_34;
          children = _RDI->children;
          if ( (children & 0x8000u) != 0 )
          {
            v24 = 32 * (children & 0x7FFFu);
            if ( (unsigned int)v24 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
            {
              LODWORD(goalTime) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
              LODWORD(goalWeight) = 32 * (children & 0x7FFF);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", goalWeight, goalTime) )
                __debugbreak();
            }
            _RBX = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v24];
          }
          else
          {
            if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
            {
              LODWORD(goalTime) = g_xanimMemoryGlobals.infoPoolSize;
              LODWORD(goalWeight) = _RDI->children;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", goalWeight, goalTime) )
                __debugbreak();
            }
            _RBX = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
          }
          v25 = _RBX == NULL;
          if ( !_RBX )
          {
            v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 110, ASSERT_TYPE_ASSERT, "(childAnimInfo)", (const char *)&queryFormat, "childAnimInfo");
            v25 = !v26;
            if ( v26 )
              __debugbreak();
          }
          __asm { vucomiss xmm6, dword ptr [rbx+38h] }
          if ( v25 )
            goto LABEL_32;
          __asm { vucomiss xmm6, dword ptr [rbx+3Ch] }
          if ( v25 )
          {
LABEL_32:
            __asm { vucomiss xmm6, dword ptr [rbx+3Ch] }
            if ( v25 )
            {
              __asm { vxorps  xmm2, xmm2, xmm2; blendTime }
              XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 1, LINEAR);
            }
          }
          else
          {
LABEL_34:
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+3Ch]
              vcomiss xmm0, xmm6
              vmovss  [rsp+88h+var_50], xmm6
              vmovss  [rsp+88h+goalTime], xmm6
              vmovss  [rsp+88h+goalWeight], xmm0
            }
            XAnimSetChildGoalWeights(obj, obj->tree, GraftAnimIndex, (const XAnimSubTreeID)_RDI->subTreeID, _RDI->animIndex, goalWeighta, goalTimea, v34, (scr_string_t)0, 0, LINEAR, modelNameMap);
          }
        }
      }
      __asm { vmovaps xmm6, [rsp+88h+var_28] }
    }
    else
    {
      __asm { vxorps  xmm2, xmm2, xmm2; blendTime }
      XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 1, LINEAR);
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
  const dvar_t *v10; 
  XAnimCalcAnimInfo *v11; 
  XAnimCalcBuffer *v12; 
  unsigned int v16; 
  unsigned int v17; 
  _BYTE *v18; 
  scr_string_t **v19; 
  scr_string_t *v20; 
  char v21; 
  unsigned int DescendantWithGreatest; 
  bool v36; 
  char v44; 
  char v45; 
  _BYTE *v57; 
  const dvar_t *v58; 
  XAnimCalcBuffer *v65; 
  double calcMode; 
  float calcModea; 
  double v68; 
  double v69; 
  double v70; 
  int modelIndex; 
  XAnimCalcAnimInfo *v72; 
  vec4_t angles; 
  vec4_t v74; 
  tmat43_t<vec3_t> boneToTagOrigin; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> outBoneToTagOrigin; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> in1; 

  v10 = DCONST_DVARBOOL_xanim_disableMountNodes;
  v11 = animCalcInfo;
  v12 = destBuffer;
  _RDI = (unsigned __int8 *)nodeData;
  v72 = animCalcInfo;
  *(_QWORD *)v74.v = destBuffer;
  if ( !DCONST_DVARBOOL_xanim_disableMountNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableMountNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled && _RDI[100] )
  {
    v16 = 0;
    __asm { vmovaps [rsp+250h+var_70], xmm8 }
    if ( obj != *((const DObj **)_RDI + 7) )
    {
      *((_QWORD *)_RDI + 7) = obj;
      _RDI[96] = -2;
      DObjGetBoneIndexInternal_36(obj, scr_const.tag_origin, _RDI + 96, &modelIndex);
      bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)_RDI + 64, _RDI[96]);
      v17 = 0;
      v18 = _RDI + 97;
      v19 = (scr_string_t **)s_boneNames;
      do
      {
        v20 = *v19;
        *v18 = -2;
        if ( v20 )
        {
          DObjGetBoneIndexInternal_36(obj, *v20, &_RDI[v17 + 97], &modelIndex);
          bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)_RDI + 64, (unsigned __int8)*v18);
        }
        ++v17;
        ++v19;
        ++v18;
      }
      while ( v17 < 3 );
      DObjCompleteHierarchyBits(obj, (DObjPartBits *)_RDI + 2);
      v11 = v72;
      v12 = *(XAnimCalcBuffer **)v74.v;
    }
    if ( _RDI[96] > 0xFDu || _RDI[97] > 0xFDu )
    {
      v21 = 0;
    }
    else
    {
      v21 = 1;
      XAnimCalcAddPartBits(v11, obj, (const DObjPartBits *)_RDI + 2, v12);
    }
    __asm
    {
      vmovss  xmm8, [rbp+150h+weightScale]
      vmovaps xmm3, xmm8; weightScale
    }
    XAnimCalcDefaultBlendNode(v11, obj, animInfo, *(float *)&_XMM3, bNormQuat, v12, LINEAR);
    if ( v21 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+14h]
        vmovaps [rsp+250h+var_50], xmm6
        vxorps  xmm6, xmm6, xmm6
        vmovss  dword ptr [rsp+250h+angles], xmm6
        vmovss  dword ptr [rsp+250h+angles+8], xmm6
        vmovss  dword ptr [rsp+250h+angles+4], xmm0
      }
      AnglesAndOriginToMatrix43((const vec3_t *)&angles, (const vec3_t *)(_RDI + 8), &result);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmovss  xmm1, dword ptr [rdi+1Ch]
        vmovss  dword ptr [rsp+250h+var_1E0+4], xmm0
        vmovss  xmm0, dword ptr [rdi+18h]
        vmovss  dword ptr [rsp+250h+angles], xmm0
        vmovss  xmm0, dword ptr [rdi+20h]
        vsubss  xmm2, xmm0, dword ptr [rdi+24h]
        vmovss  dword ptr [rsp+250h+angles+8], xmm2
        vmovss  dword ptr [rsp+250h+var_1E0], xmm6
        vmovss  dword ptr [rsp+250h+var_1E0+8], xmm6
        vmovss  dword ptr [rsp+250h+angles+4], xmm1
      }
      AnglesAndOriginToMatrix43((const vec3_t *)&v74, (const vec3_t *)&angles, &in2);
      DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<0>(animInfo->children);
      if ( DescendantWithGreatest )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rdi]
          vmovss  xmm0, dword ptr [rdi+4]
          vcomiss xmm1, xmm0
          vmovaps [rsp+250h+var_60], xmm7
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+250h+var_210], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+250h+var_218], xmm1
        }
        v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 347, ASSERT_TYPE_ASSERT, "( node->timeRange[0] ) <= ( node->timeRange[1] )", "%s <= %s\n\t%g, %g", "node->timeRange[0]", "node->timeRange[1]", v68, v70);
        if ( v36 )
          __debugbreak();
        __asm
        {
          vmovss  xmm1, dword ptr [rdi]
          vmovss  xmm0, dword ptr [rdi+4]
          vsubss  xmm2, xmm0, xmm1
          vcomiss xmm2, xmm6
        }
        if ( v36 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+2Ch]
            vsubss  xmm1, xmm0, xmm1
            vdivss  xmm0, xmm1, xmm2; val
            vmovss  xmm2, cs:__real@3f800000; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vcomiss xmm0, xmm6
            vmovaps xmm7, xmm0
          }
          if ( v44 )
            goto LABEL_43;
          __asm { vcomiss xmm0, cs:__real@3f800000 }
          if ( !(v44 | v45) )
          {
LABEL_43:
            __asm
            {
              vmovsd  xmm1, cs:__real@3ff0000000000000
              vmovsd  [rsp+250h+var_218], xmm1
              vxorpd  xmm2, xmm2, xmm2
              vmovsd  qword ptr [rsp+250h+calcMode], xmm2
              vcvtss2sd xmm3, xmm7, xmm7
              vmovsd  [rsp+250h+var_228], xmm3
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 351, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( timeValue ) && ( timeValue ) <= ( 1.0f )", "timeValue not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v65, calcMode, v69) )
              __debugbreak();
          }
        }
        else
        {
          __asm { vxorps  xmm7, xmm7, xmm7 }
        }
        __asm { vmovaps xmm2, xmm7; time }
        XAnimMount_CalcRootAbs(obj, DescendantWithGreatest, *(const float *)&_XMM2, &out);
        __asm { vmovaps xmm7, [rsp+250h+var_60] }
      }
      else
      {
        MatrixIdentity33((tmat33_t<vec3_t> *)&out);
        __asm
        {
          vmovss  [rbp+150h+var_17C], xmm6
          vmovss  [rbp+150h+var_178], xmm6
          vmovss  [rbp+150h+var_174], xmm6
        }
      }
      MatrixMultiply43(&out, &in2, &in1);
      MatrixInverseOrthogonal43(&result, &outBoneToTagOrigin);
      MatrixMultiply43(&in1, &outBoneToTagOrigin, &boneToTagOrigin);
      AxisToQuat((const tmat33_t<vec3_t> *)&boneToTagOrigin, &angles);
      __asm { vmovaps xmm2, xmm8; frac }
      QuatSlerp(&quat_identity, &angles, *(float *)&_XMM2, &v74);
      QuatToAxis(&v74, (tmat33_t<vec3_t> *)&axis);
      __asm
      {
        vmulss  xmm1, xmm8, dword ptr [rbp+150h+boneToTagOrigin+24h]
        vmulss  xmm0, xmm8, dword ptr [rbp+150h+boneToTagOrigin+28h]
        vmulss  xmm2, xmm8, dword ptr [rbp+150h+boneToTagOrigin+2Ch]
        vmovss  [rbp+150h+var_14C], xmm1
        vmovss  [rbp+150h+var_148], xmm0
        vmovss  [rbp+150h+var_144], xmm2
      }
      v57 = _RDI + 97;
      do
      {
        if ( *v57 <= 0xFDu )
        {
          XAnimMount_GetBoneTransform(v11, obj, v12, (unsigned __int8)*v57, &result, &outBoneToTagOrigin);
          MatrixMultiply43(&outBoneToTagOrigin, &axis, &boneToTagOrigin);
          __asm { vmovss  dword ptr [rsp+250h+calcMode], xmm8 }
          XAnimMount_SetBoneTransform(v11, obj, v12, (unsigned __int8)*v57, &result, &boneToTagOrigin, calcModea);
        }
        ++v16;
        ++v57;
      }
      while ( v16 < 3 );
      if ( !obj->tree->owner[0] )
      {
        v58 = DCONST_DVARINT_mount_debug;
        if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v58);
        if ( v58->current.integer == 3 )
        {
          __asm
          {
            vmovss  xmm6, cs:__real@40000000
            vmovaps xmm3, xmm6; radius
          }
          XAnimMount_DebugDraw(obj, &in2, &colorBlue, *(const float *)&_XMM3);
          __asm { vmovaps xmm3, xmm6; radius }
          XAnimMount_DebugDraw(obj, &result, &colorRed, *(const float *)&_XMM3);
          __asm { vmovaps xmm3, xmm6; radius }
          XAnimMount_DebugDraw(obj, &in1, &colorGreen, *(const float *)&_XMM3);
        }
      }
      __asm { vmovaps xmm6, [rsp+250h+var_50] }
    }
    __asm { vmovaps xmm8, [rsp+250h+var_70] }
  }
}

/*
==============
XAnimMount_Read
==============
*/
void XAnimMount_Read(void *nodeData, MemoryFile *memFile)
{
  unsigned int v3; 
  char *v4; 
  char p; 

  v3 = 0;
  *((_BYTE *)nodeData + 96) = -2;
  *((_QWORD *)nodeData + 7) = 0i64;
  v4 = (char *)nodeData + 98;
  _RBX = nodeData;
  do
  {
    *(_WORD *)(v4 - 1) = -258;
    v3 += 3;
    v4[1] = -2;
    v4 += 3;
  }
  while ( v3 < 3 );
  *((_BYTE *)nodeData + 100) = 1;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+10h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+14h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+18h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+1Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+20h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+24h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+28h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+2Ch], xmm0 }
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX[48] = p;
}

/*
==============
XAnimMount_Write
==============
*/
void XAnimMount_Write(void *nodeData, MemoryFile *memFile)
{
  char p; 

  __asm { vmovss  xmm1, dword ptr [rcx]; value }
  _RBX = nodeData;
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+4]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+8]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+0Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+10h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+14h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+18h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+1Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+20h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+24h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+28h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+2Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  p = _RBX[48];
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
  unsigned __int64 v8; 
  const XAnimParts *Parts; 
  unsigned int DescendantWithGreatest; 
  const XAnim_s *SubTreeAnims; 
  __int64 v15; 
  const char *name; 
  char *fmt; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 

  v8 = size;
  _RDI = (const XAnimTree ***)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 486, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *((_BYTE *)_RDI + 100) )
  {
    Parts = NULL;
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovaps [rsp+0A8h+var_38], xmm7
    }
    DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<0>(animInfo->children);
    if ( DescendantWithGreatest )
    {
      SubTreeAnims = XAnimGetSubTreeAnims(*_RDI[7], (const XAnimSubTreeID)animInfo->subTreeID);
      if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 499, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
        __debugbreak();
      Parts = XAnimGetParts(SubTreeAnims, DescendantWithGreatest);
    }
    if ( depth > 0 )
    {
      v15 = (unsigned int)depth;
      do
      {
        Com_sprintfPos_truncate(buffer, v8, inoutPos, "  ");
        --v15;
      }
      while ( v15 );
    }
    if ( Parts )
      name = Parts->name;
    else
      name = (char *)&queryFormat.fmt + 3;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  xmm1, dword ptr [rdi+24h]
      vmovss  xmm2, dword ptr [rdi+20h]
      vmovss  xmm3, dword ptr [rdi+1Ch]
      vmovss  xmm4, dword ptr [rdi+18h]
      vmovss  xmm5, dword ptr [rdi+10h]
      vmovss  xmm6, dword ptr [rdi+0Ch]
      vmovss  xmm7, dword ptr [rdi+8]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0A8h+var_50], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0A8h+var_58], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+0A8h+var_60], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0A8h+var_68], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0A8h+var_70], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+0A8h+var_78], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vmovsd  [rsp+0A8h+var_80], xmm6
      vmovsd  [rsp+0A8h+fmt], xmm7
    }
    Com_sprintfPos_truncate(buffer, v8, inoutPos, "   ^5origin={%.1f,%.1f,%.1f}, pivotOrg={%.1f,%.1f,%.1f}, pivotHeight=%.2f, pivotYaw=%.2f, rootParts='%s'\n", *(double *)&fmt, v36, v37, v38, v39, v40, v41, v42, name);
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_38]
      vmovaps xmm6, [rsp+0A8h+var_28]
    }
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

void __fastcall XAnimMount_CalcRootAbs(const DObj *const obj, unsigned int animIndex, double time, tmat43_t<vec3_t> *outRootTransform)
{
  bool v11; 
  bool v12; 
  float fmt; 
  double v19; 
  double v20; 
  __int64 v21; 
  double v22; 
  vec3_t trans; 
  vec4_t rot; 

  __asm
  {
    vmovaps [rsp+0D8h+var_48], xmm6
    vmovaps xmm6, xmm2
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_Execution_CalcRootAbs");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 138, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  v11 = animIndex == 0;
  if ( !animIndex )
  {
    LODWORD(v21) = 0;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 139, ASSERT_TYPE_ASSERT, "( animIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "animIndex", "0", v21, 0i64);
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, cs:__real@3f800000
  }
  if ( !v11 )
  {
    __asm
    {
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 140, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( time ) && ( time ) <= ( 1.0f )", "time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v19, v20, v22) )
      __debugbreak();
  }
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 142, ASSERT_TYPE_ASSERT, "( obj->tree ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !obj->tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 143, ASSERT_TYPE_ASSERT, "( obj->tree->anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree->anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !XAnimIsLeafNode(obj->tree->anims, animIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 144, ASSERT_TYPE_ASSERT, "(XAnimIsLeafNode( obj->tree->anims, animIndex ))", (const char *)&queryFormat, "XAnimIsLeafNode( obj->tree->anims, animIndex )") )
    __debugbreak();
  __asm { vmovss  dword ptr [rsp+0D8h+fmt], xmm6 }
  XAnimGetAbsDelta(obj->tree->anims, animIndex, &rot, &trans, fmt);
  QuatAndOriginToMatrix43(&rot, &trans, outRootTransform);
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
}

/*
==============
XAnimMount_DebugDraw
==============
*/

void __fastcall XAnimMount_DebugDraw(const DObj *const obj, const tmat43_t<vec3_t> *transform, const vec4_t *color, double radius)
{
  const dvar_t *v8; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !obj->tree->owner[0] )
  {
    v8 = DCONST_DVARINT_mount_debug;
    if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.integer == 3 )
    {
      __asm { vmovaps xmm1, xmm6; radius }
      G_DebugSphere(&transform->m[3], *(float *)&_XMM1, color, 1, 0);
      __asm { vmovaps xmm2, xmm6; length }
      G_DebugAxis((const tmat33_t<vec3_t> *)transform, &transform->m[3], *(float *)&_XMM2, 1, 0);
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0F8h+var_C8.v]
    vcmpneqps xmm1, xmm0, xmm0
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 159, ASSERT_TYPE_SANITY, "( !Float4IsNaN( quat4 ) )", (const char *)&queryFormat, "!Float4IsNaN( quat4 )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0F8h+var_B8.v]
    vcmpneqps xmm1, xmm0, xmm0
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 160, ASSERT_TYPE_SANITY, "( !Float4IsNaN( trans4 ) )", (const char *)&queryFormat, "!Float4IsNaN( trans4 )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0F8h+var_C8.v]
    vmovups xmmword ptr [rsp+0F8h+quat], xmm0
  }
  QuatToAxis(&quat, (tmat33_t<vec3_t> *)outBoneToTagOrigin);
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+0F8h+var_B8.v]
    vmovss  dword ptr [rbx+24h], xmm1
    vextractps dword ptr [rbx+28h], xmm1, 1
    vextractps dword ptr [rbx+2Ch], xmm1, 2
  }
  if ( obj->tree->owner[0] )
  {
    MatrixCopy33((const tmat33_t<vec3_t> *)outBoneToTagOrigin, (tmat33_t<vec3_t> *)&dst);
    _RAX = g_activeRefDef;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+24h]
      vaddss  xmm1, xmm0, dword ptr [rax+7Ch]
      vmovss  [rsp+0F8h+var_74], xmm1
      vmovss  xmm2, dword ptr [rax+80h]
      vaddss  xmm0, xmm2, dword ptr [rbx+28h]
      vmovss  [rsp+0F8h+var_70], xmm0
      vmovss  xmm1, dword ptr [rax+84h]
      vaddss  xmm2, xmm1, dword ptr [rbx+2Ch]
      vmovss  [rsp+0F8h+var_6C], xmm2
    }
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
  const float4 *fmt; 
  const float4 *v38; 
  float v39; 
  vec4_t out; 
  tmat43_t<vec3_t> dst; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( obj->tree->owner[0] )
  {
    MatrixMultiply43(boneToTagOrigin, tagOriginToWorld, &dst);
    if ( !g_activeRefDef )
    {
      v38 = (const float4 *)"g_activeRefDef";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 213, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+dst+24h]
      vmovss  xmm1, dword ptr [rsp+0D8h+dst+28h]
      vsubss  xmm2, xmm0, dword ptr [rax+7Ch]
      vmovss  xmm0, dword ptr [rsp+0D8h+dst+2Ch]
      vmovss  dword ptr [rsp+0D8h+dst+24h], xmm2
      vsubss  xmm1, xmm1, dword ptr [rax+80h]
      vmovss  dword ptr [rsp+0D8h+dst+28h], xmm1
      vsubss  xmm0, xmm0, dword ptr [rax+84h]
      vmovss  dword ptr [rsp+0D8h+dst+2Ch], xmm0
    }
  }
  else
  {
    MatrixCopy43(boneToTagOrigin, &dst);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+dst+2Ch]
      vmovss  xmm1, dword ptr [rsp+0D8h+dst+28h]
      vmovss  xmm2, dword ptr [rsp+0D8h+dst+24h]
    }
  }
  out.v[3] = 0.0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+40h]
    vmovss  xmm6, xmm6, xmm2
    vinsertps xmm6, xmm6, xmm1, 10h
    vinsertps xmm6, xmm6, xmm0, 20h ; ' '
    vcmpneqps xmm0, xmm6, xmm6
    vmovmskps eax, xmm0
    vmovups xmmword ptr [rsp+40h], xmm6
  }
  if ( _EAX )
  {
    v38 = (const float4 *)"!Float4IsNaN( origin4 )";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 223, ASSERT_TYPE_SANITY, "( !Float4IsNaN( origin4 ) )", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !Mat33IsOrthonormal((const tmat33_t<vec3_t> *)&dst) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 226, ASSERT_TYPE_ASSERT, "( Mat33IsOrthonormal( leading_submatrix<mat33_t>( boneTransform ) ) )", "mat3 isn't orthonormal") )
    __debugbreak();
  AxisToQuat((const tmat33_t<vec3_t> *)&dst, &out);
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+0D8h+out]
    vcmpneqps xmm0, xmm7, xmm7
    vmovmskps eax, xmm0
  }
  if ( _EAX )
  {
    v38 = (const float4 *)"!Float4IsNaN( quat4 )";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mount.cpp", 229, ASSERT_TYPE_SANITY, "( !Float4IsNaN( quat4 ) )", (const char *)&queryFormat) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, [rsp+0D8h+weightScale]
    vmovups xmm1, xmm6
    vmovups xmm0, xmm7
    vmovss  [rsp+0D8h+var_A8], xmm2
  }
  XAnimSetLocalBoneTransform(animCalcInfo, obj, buffer, boneIndex, fmt, v38, v39);
  __asm
  {
    vmovaps xmm6, [rsp+0D8h+var_38]
    vmovaps xmm7, [rsp+0D8h+var_48]
  }
}

