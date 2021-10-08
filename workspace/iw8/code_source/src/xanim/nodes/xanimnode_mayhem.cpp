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
  char v9; 
  scr_string_t v10; 
  int entnum; 
  const char *v12; 
  scr_string_t String; 
  int DoesInstanceExist; 
  scr_string_t v24; 
  char *fmt; 
  vec3_t spawnPos; 
  vec4_t spawnQuat; 
  char dest[272]; 

  __asm { vmovaps [rsp+198h+var_28], xmm6 }
  _RBX = animInfo;
  if ( !XAnimIsClientOnlyNode(animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_mayhem.cpp", 98, ASSERT_TYPE_ASSERT, "(XAnimIsClientOnlyNode( animInfo ))", (const char *)&queryFormat, "XAnimIsClientOnlyNode( animInfo )") )
    __debugbreak();
  Sys_LockWrite(&s_xanimMayhemFastCS);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+3Ch]
  }
  if ( !v9 || (v10 = *((_DWORD *)nodeData + 3)) != 0 && Mayhem_DoesInstanceExist(v10) )
  {
    Mayhem_FlagForTransfer(*((scr_string_t *)nodeData + 3), 0);
  }
  else
  {
    entnum = obj->entnum;
    v12 = SL_ConvertToString((scr_string_t)*(_DWORD *)nodeData);
    LODWORD(fmt) = entnum;
    Com_sprintf(dest, 0x104ui64, "%s%d", v12, fmt);
    String = SL_GetString(dest, 0);
    *((_DWORD *)nodeData + 3) = String;
    if ( obj->skel.mat )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+10h]
        vmovss  dword ptr [rsp+198h+spawnPos], xmm0
        vmovss  xmm1, dword ptr [rcx+14h]
        vmovss  dword ptr [rsp+198h+spawnPos+4], xmm1
        vmovss  xmm0, dword ptr [rcx+18h]
        vmovss  dword ptr [rsp+198h+spawnPos+8], xmm0
        vmovss  xmm1, dword ptr [rcx]
        vmovss  dword ptr [rsp+198h+spawnQuat], xmm1
        vmovss  xmm0, dword ptr [rcx+4]
        vmovss  dword ptr [rsp+198h+spawnQuat+4], xmm0
        vmovss  xmm1, dword ptr [rcx+8]
        vmovss  dword ptr [rsp+198h+spawnQuat+8], xmm1
        vmovss  xmm0, dword ptr [rcx+0Ch]
        vmovss  dword ptr [rsp+198h+spawnQuat+0Ch], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
        vmovups xmmword ptr [rsp+198h+spawnQuat], xmm0
        vmovss  dword ptr [rsp+198h+spawnPos], xmm6
        vmovss  dword ptr [rsp+198h+spawnPos+4], xmm6
        vmovss  dword ptr [rsp+198h+spawnPos+8], xmm6
      }
    }
    DoesInstanceExist = Mayhem_DoesInstanceExist(String);
    v24 = *((_DWORD *)nodeData + 3);
    if ( DoesInstanceExist )
      Mayhem_FlagForTransfer(v24, 1);
    else
      Mayhem_SpawnInstance(v24, *(scr_string_t *)nodeData, &spawnPos, &spawnQuat);
    Mayhem_HideInstance(*((scr_string_t *)nodeData + 3));
    Mayhem_SetDelayedUpdate(*((scr_string_t *)nodeData + 3));
  }
  Sys_UnlockWrite(&s_xanimMayhemFastCS);
  __asm { vmovaps xmm6, [rsp+198h+var_28] }
}

/*
==============
XAnimNode_MayhemLink_Calc
==============
*/
void XAnimNode_MayhemLink_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  DObjPartBits *v16; 
  scr_string_t v17; 
  unsigned __int8 v18; 
  unsigned __int8 v19; 
  unsigned int i; 
  XAnimCalcBuffer *v26; 
  int v29; 
  const char *v63; 
  const char *v64; 
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
      v16 = (DObjPartBits *)((char *)nodeData + 24);
    }
    else
    {
      v16 = (DObjPartBits *)((char *)nodeData + 24);
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits((bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)nodeData + 24));
      v17 = *((_DWORD *)nodeData + 1);
      *((_QWORD *)nodeData + 2) = obj;
      *(_WORD *)((char *)nodeData + 9) = -512;
      DObjGetBoneIndexInternal_32(obj, v17, (unsigned __int8 *)nodeData + 10, &modelIndex);
      v18 = *((_BYTE *)nodeData + 10);
      if ( v18 == 0xFF )
      {
        v63 = SL_ConvertToString((scr_string_t)*(_DWORD *)nodeData);
        v64 = SL_ConvertToString((scr_string_t)*((_DWORD *)nodeData + 1));
        Com_PrintError(19, "Failed to find bone %s to link Mayhem %s to.", v64, v63);
        *((_BYTE *)nodeData + 8) = 0;
        return;
      }
      *((_BYTE *)nodeData + 9) = 1;
      bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)nodeData + 24, v18);
      DObjCompleteHierarchyBits(obj, (DObjPartBits *)((char *)nodeData + 24));
      *((_BYTE *)nodeData + 8) = 1;
    }
    __asm { vmovaps [rsp+138h+var_58], xmm6 }
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(v16);
    v19 = *((_BYTE *)nodeData + 10);
    if ( v19 != 0xFF )
    {
      bitarray_base<bitarray<256>>::setBit(v16, v19);
      DObjCompleteHierarchyBits(obj, v16);
    }
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, animCalcInfo->partBits);
    _RSI = animCalcInfo->partBits;
    _RBP = (char *)v16 - (char *)_RSI;
    for ( i = 0; i < 2; ++i )
    {
      __asm
      {
        vlddqu  xmm6, xmmword ptr [rsi+rbp]
        vlddqu  xmm0, xmmword ptr [rsi]
        vpor    xmm6, xmm0, xmm6
        vmovdqu xmmword ptr [rsi], xmm6
      }
      _RSI = (DObjPartBits *)((char *)_RSI + 16);
    }
    v26 = buffer;
    __asm { vmovss  xmm3, [rsp+138h+weightScale]; weightScale }
    XAnimCalcDefaultBlendNode(animCalcInfo, obj, animInfo, *(float *)&_XMM3, bNormQuat, buffer, LINEAR);
    if ( Mayhem_DoesInstanceExist(*((scr_string_t *)nodeData + 3)) )
    {
      v29 = *((unsigned __int8 *)nodeData + 10);
      __asm
      {
        vmovaps [rsp+138h+var_68], xmm7
        vmovaps [rsp+138h+var_78], xmm8
      }
      XAnimGetLocalBoneTransform(animCalcInfo, obj, v26, v29, &outModelQuat, &outModelTranslation);
      __asm { vmovups xmm3, xmmword ptr [rsp+138h+outModelTranslation.v] }
      _RAX = g_activeRefDef;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+138h+outModelQuat.v]
        vshufps xmm5, xmm3, xmm3, 55h ; 'U'
        vshufps xmm6, xmm3, xmm3, 0AAh ; 'ª'
        vmovups xmmword ptr [rsp+138h+newQuat], xmm0
        vxorps  xmm4, xmm4, xmm4
      }
      if ( g_activeRefDef )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+7Ch]
          vmovss  xmm1, dword ptr [rax+80h]
          vmovss  xmm2, dword ptr [rax+84h]
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm2, xmm2, xmm2
        }
      }
      __asm
      {
        vmovss  xmm7, dword ptr [rsp+138h+newQuat+8]
        vmovss  xmm8, dword ptr [rsp+138h+newQuat+0Ch]
        vaddss  xmm0, xmm0, xmm3
        vaddss  xmm1, xmm1, xmm5
        vmovss  xmm5, dword ptr [rsp+138h+newQuat]
        vmovss  dword ptr [rsp+138h+newPos], xmm0
        vaddss  xmm0, xmm2, xmm6
        vmovss  xmm6, dword ptr [rsp+138h+newQuat+4]
        vmovss  dword ptr [rsp+138h+newPos+4], xmm1
        vmovss  dword ptr [rsp+138h+newPos+8], xmm0
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm8, xmm8
        vaddss  xmm1, xmm3, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vucomiss xmm2, xmm4
      }
      if ( g_activeRefDef )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vdivss  xmm2, xmm0, xmm2
          vmulss  xmm1, xmm5, xmm2
          vmulss  xmm0, xmm6, xmm2
          vmovss  dword ptr [rsp+138h+newQuat], xmm1
          vmovss  dword ptr [rsp+138h+newQuat+4], xmm0
          vmulss  xmm1, xmm7, xmm2
          vmulss  xmm0, xmm8, xmm2
          vmovss  dword ptr [rsp+138h+newQuat+8], xmm1
          vmovss  dword ptr [rsp+138h+newQuat+0Ch], xmm0
        }
      }
      Sys_LockWrite(&s_xanimMayhemFastCS);
      Mayhem_ShowInstance(*((scr_string_t *)nodeData + 3));
      Mayhem_UpdatePlacement(*((scr_string_t *)nodeData + 3), &newPos, &newQuat);
      Mayhem_FlagForTransfer(*((scr_string_t *)nodeData + 3), 0);
      Sys_UnlockWrite(&s_xanimMayhemFastCS);
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(animCalcInfo->partBits, &otherBitSet);
      __asm
      {
        vmovaps xmm8, [rsp+138h+var_78]
        vmovaps xmm7, [rsp+138h+var_68]
      }
    }
    else
    {
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(animCalcInfo->partBits, &otherBitSet);
    }
    __asm { vmovaps xmm6, [rsp+138h+var_58] }
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

