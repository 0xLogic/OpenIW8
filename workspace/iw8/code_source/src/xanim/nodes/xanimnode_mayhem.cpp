/*
==============
XAnimNode_MayhemLink_Init
==============
*/

void XAnimNode_MayhemLink_Init(void)
{
  ?XAnimNode_MayhemLink_Init@@YAXXZ();
}

/*
==============
XAnimNode_MayhemLink_Destroy
==============
*/
void XAnimNode_MayhemLink_Destroy(void *nodeData)
{
  if ( !Sys_IsMainThread() && !Sys_HasPendingWorkerCmdsRange(WRKCMD_ENTITY_UPDATE, WRKCMD_ENTITY_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mayhem.cpp", 64, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_HasPendingWorkerCmdsRange( WRKCMD_ENTITY_UPDATE, WRKCMD_ENTITY_UPDATE ))", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_HasPendingWorkerCmdsRange( WRKCMD_ENTITY_UPDATE, WRKCMD_ENTITY_UPDATE )") )
    __debugbreak();
  Sys_LockWrite(&s_xanimMayhemFastCS);
  if ( *((_DWORD *)nodeData + 3) )
  {
    if ( Mayhem_IsInitialized() && Mayhem_DoesInstanceExist(*((scr_string_t *)nodeData + 3)) )
      Mayhem_KillInstance(*((scr_string_t *)nodeData + 3));
    SL_RemoveRefToString(*((scr_string_t *)nodeData + 3));
    *((_DWORD *)nodeData + 3) = 0;
  }
  Sys_UnlockWrite(&s_xanimMayhemFastCS);
}

/*
==============
XAnimNode_MayhemLink_Update
==============
*/
void XAnimNode_MayhemLink_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  scr_string_t v7; 
  int entnum; 
  const char *v9; 
  scr_string_t String; 
  DObjAnimMat *mat; 
  int DoesInstanceExist; 
  scr_string_t v13; 
  char *fmt; 
  vec3_t spawnPos; 
  vec4_t spawnQuat; 
  char dest[272]; 

  if ( !XAnimIsClientOnlyNode(animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mayhem.cpp", 98, ASSERT_TYPE_ASSERT, "(XAnimIsClientOnlyNode( animInfo ))", (const char *)&queryFormat, "XAnimIsClientOnlyNode( animInfo )") )
    __debugbreak();
  Sys_LockWrite(&s_xanimMayhemFastCS);
  if ( animInfo->state.weight <= 0.0 || (v7 = *((_DWORD *)nodeData + 3)) != 0 && Mayhem_DoesInstanceExist(v7) )
  {
    Mayhem_FlagForTransfer(*((scr_string_t *)nodeData + 3), 0);
  }
  else
  {
    entnum = obj->entnum;
    v9 = SL_ConvertToString((scr_string_t)*(_DWORD *)nodeData);
    LODWORD(fmt) = entnum;
    Com_sprintf(dest, 0x104ui64, "%s%d", v9, fmt);
    String = SL_GetString(dest, 0);
    *((_DWORD *)nodeData + 3) = String;
    mat = obj->skel.mat;
    if ( mat )
    {
      spawnPos = mat->trans;
      spawnQuat = mat->quat;
    }
    else
    {
      spawnQuat = (vec4_t)_xmm;
      spawnPos.v[0] = 0.0;
      spawnPos.v[1] = 0.0;
      spawnPos.v[2] = 0.0;
    }
    DoesInstanceExist = Mayhem_DoesInstanceExist(String);
    v13 = *((_DWORD *)nodeData + 3);
    if ( DoesInstanceExist )
      Mayhem_FlagForTransfer(v13, 1);
    else
      Mayhem_SpawnInstance(v13, *(scr_string_t *)nodeData, &spawnPos, &spawnQuat);
    Mayhem_HideInstance(*((scr_string_t *)nodeData + 3));
    Mayhem_SetDelayedUpdate(*((scr_string_t *)nodeData + 3));
  }
  Sys_UnlockWrite(&s_xanimMayhemFastCS);
}

/*
==============
XAnimNode_MayhemLink_Calc
==============
*/
void XAnimNode_MayhemLink_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  DObjPartBits *v11; 
  scr_string_t v12; 
  unsigned __int8 v13; 
  unsigned __int8 v14; 
  unsigned int i; 
  XAnimCalcBuffer *v21; 
  __m128 v; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  const char *v30; 
  const char *v31; 
  int modelIndex; 
  XAnimCalcBuffer *buffer; 
  vec4_t newQuat; 
  vec3_t newPos; 
  float4 outModelTranslation; 
  float4 outModelQuat; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 

  buffer = destBuffer;
  if ( !XAnimIsClientOnlyNode(animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mayhem.cpp", 171, ASSERT_TYPE_ASSERT, "(XAnimIsClientOnlyNode( animInfo ))", (const char *)&queryFormat, "XAnimIsClientOnlyNode( animInfo )") )
    __debugbreak();
  if ( XAnimShouldIgnoreClientOnlyNode(obj->tree, animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mayhem.cpp", 174, ASSERT_TYPE_ASSERT, "(!XAnimShouldIgnoreClientOnlyNode( obj->tree, animInfo ))", (const char *)&queryFormat, "!XAnimShouldIgnoreClientOnlyNode( obj->tree, animInfo )") )
    __debugbreak();
  if ( *((_DWORD *)nodeData + 3) )
  {
    if ( *((const DObj **)nodeData + 2) == obj && *((_BYTE *)nodeData + 8) )
    {
      v11 = (DObjPartBits *)((char *)nodeData + 24);
    }
    else
    {
      v11 = (DObjPartBits *)((char *)nodeData + 24);
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits((bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)nodeData + 24));
      v12 = *((_DWORD *)nodeData + 1);
      *((_QWORD *)nodeData + 2) = obj;
      *(_WORD *)((char *)nodeData + 9) = -512;
      DObjGetBoneIndexInternal_32(obj, v12, (unsigned __int8 *)nodeData + 10, &modelIndex);
      v13 = *((_BYTE *)nodeData + 10);
      if ( v13 == 0xFF )
      {
        v30 = SL_ConvertToString((scr_string_t)*(_DWORD *)nodeData);
        v31 = SL_ConvertToString((scr_string_t)*((_DWORD *)nodeData + 1));
        Com_PrintError(19, "Failed to find bone %s to link Mayhem %s to.", v31, v30);
        *((_BYTE *)nodeData + 8) = 0;
        return;
      }
      *((_BYTE *)nodeData + 9) = 1;
      bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)nodeData + 24, v13);
      DObjCompleteHierarchyBits(obj, (DObjPartBits *)((char *)nodeData + 24));
      *((_BYTE *)nodeData + 8) = 1;
    }
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(v11);
    v14 = *((_BYTE *)nodeData + 10);
    if ( v14 != 0xFF )
    {
      bitarray_base<bitarray<256>>::setBit(v11, v14);
      DObjCompleteHierarchyBits(obj, v11);
    }
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, animCalcInfo->partBits);
    _RSI = animCalcInfo->partBits;
    _RBP = (char *)v11 - (char *)_RSI;
    for ( i = 0; i < 2; ++i )
    {
      __asm
      {
        vlddqu  xmm6, xmmword ptr [rsi+rbp]
        vlddqu  xmm0, xmmword ptr [rsi]
        vpor    xmm6, xmm0, xmm6
      }
      *(_OWORD *)_RSI->array = _XMM6;
      _RSI = (DObjPartBits *)((char *)_RSI + 16);
    }
    v21 = buffer;
    XAnimCalcDefaultBlendNode(animCalcInfo, obj, animInfo, weightScale, bNormQuat, buffer, LINEAR);
    if ( Mayhem_DoesInstanceExist(*((scr_string_t *)nodeData + 3)) )
    {
      XAnimGetLocalBoneTransform(animCalcInfo, obj, v21, *((unsigned __int8 *)nodeData + 10), &outModelQuat, &outModelTranslation);
      v = outModelTranslation.v;
      LODWORD(v23) = _mm_shuffle_ps(v, v, 85).m128_u32[0];
      LODWORD(v24) = _mm_shuffle_ps(v, v, 170).m128_u32[0];
      newQuat = (vec4_t)outModelQuat.v;
      if ( g_activeRefDef )
      {
        v25 = g_activeRefDef->viewOffset.v[0];
        v26 = g_activeRefDef->viewOffset.v[1];
        v27 = g_activeRefDef->viewOffset.v[2];
      }
      else
      {
        v25 = 0.0;
        v26 = 0.0;
        v27 = 0.0;
      }
      newPos.v[0] = v25 + outModelTranslation.v.m128_f32[0];
      newPos.v[1] = v26 + v23;
      newPos.v[2] = v27 + v24;
      v28 = fsqrt((float)((float)((float)(newQuat.v[0] * newQuat.v[0]) + (float)(newQuat.v[1] * newQuat.v[1])) + (float)(newQuat.v[2] * newQuat.v[2])) + (float)(newQuat.v[3] * newQuat.v[3]));
      if ( v28 != 0.0 )
      {
        v29 = 1.0 / v28;
        newQuat.v[0] = newQuat.v[0] * v29;
        newQuat.v[1] = newQuat.v[1] * v29;
        newQuat.v[2] = newQuat.v[2] * v29;
        newQuat.v[3] = newQuat.v[3] * v29;
      }
      Sys_LockWrite(&s_xanimMayhemFastCS);
      Mayhem_ShowInstance(*((scr_string_t *)nodeData + 3));
      Mayhem_UpdatePlacement(*((scr_string_t *)nodeData + 3), &newPos, &newQuat);
      Mayhem_FlagForTransfer(*((scr_string_t *)nodeData + 3), 0);
      Sys_UnlockWrite(&s_xanimMayhemFastCS);
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(animCalcInfo->partBits, &otherBitSet);
    }
    else
    {
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(animCalcInfo->partBits, &otherBitSet);
    }
  }
}

/*
==============
XAnimNode_MayhemLink_Read
==============
*/
void XAnimNode_MayhemLink_Read(void *nodeData, MemoryFile *memFile)
{
  *(_DWORD *)nodeData = XAnimReadConstString(memFile);
  *((_DWORD *)nodeData + 1) = XAnimReadConstString(memFile);
  *((_BYTE *)nodeData + 8) = 0;
  *((_DWORD *)nodeData + 3) = 0;
}

/*
==============
XAnimNode_MayhemLink_Write
==============
*/
void XAnimNode_MayhemLink_Write(void *nodeData, MemoryFile *memFile)
{
  XAnimWriteConstString(memFile, *(scr_string_t *)nodeData);
  XAnimWriteConstString(memFile, *((scr_string_t *)nodeData + 1));
}

/*
==============
XAnimNode_MayhemLink_Init
==============
*/
void XAnimNode_MayhemLink_Init(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimNode_MayhemLink>::ms_typeInfo);
}

