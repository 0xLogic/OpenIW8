/*
==============
Cloth_AnimTreeNode_EnableClothNode
==============
*/

void __fastcall Cloth_AnimTreeNode_EnableClothNode(const char *ownerDesc, DObj *dobj, const int user)
{
  ?Cloth_AnimTreeNode_EnableClothNode@@YAXPEBDPEAUDObj@@H@Z(ownerDesc, dobj, user);
}

/*
==============
Cloth_XAnimNode_NoClothNodeFound
==============
*/

void __fastcall Cloth_XAnimNode_NoClothNodeFound(const XAnim_s *anims, const int user)
{
  ?Cloth_XAnimNode_NoClothNodeFound@@YAXPEBUXAnim_s@@H@Z(anims, user);
}

/*
==============
Cloth_AnimTreeNode_DisableClothNode
==============
*/

void __fastcall Cloth_AnimTreeNode_DisableClothNode(DObj *dobj, const int user)
{
  ?Cloth_AnimTreeNode_DisableClothNode@@YAXPEAUDObj@@H@Z(dobj, user);
}

/*
==============
Cloth_XAnimNode_Link_Init
==============
*/

void Cloth_XAnimNode_Link_Init(void)
{
  ?Cloth_XAnimNode_Link_Init@@YAXXZ();
}

/*
==============
Cloth_XAnimNode_Clear
==============
*/

void __fastcall Cloth_XAnimNode_Clear(const XAnimOwner owner)
{
  ?Cloth_XAnimNode_Clear@@YAXW4XAnimOwner@@@Z(owner);
}

/*
==============
Cloth_XAnimNode_RegisterAnimTree
==============
*/

void __fastcall Cloth_XAnimNode_RegisterAnimTree(const char *treeName, const XAnim_s *anims, const int user)
{
  ?Cloth_XAnimNode_RegisterAnimTree@@YAXPEBDPEBUXAnim_s@@H@Z(treeName, anims, user);
}

/*
==============
Cloth_XAnimNode_IsClothNodeName
==============
*/

bool __fastcall Cloth_XAnimNode_IsClothNodeName(const scr_string_t nodeName)
{
  return ?Cloth_XAnimNode_IsClothNodeName@@YA_NW4scr_string_t@@@Z(nodeName);
}

/*
==============
Cloth_XAnimNode_CloneRegistry
==============
*/

void Cloth_XAnimNode_CloneRegistry(void)
{
  ?Cloth_XAnimNode_CloneRegistry@@YAXXZ();
}

/*
==============
Cloth_XAnimNode_SetDObjToClothFn
==============
*/

void __fastcall Cloth_XAnimNode_SetDObjToClothFn(void (__fastcall *fn)(const LocalClientNum_t, const DObj *, unsigned int *, unsigned int *, unsigned int **), const int user)
{
  ?Cloth_XAnimNode_SetDObjToClothFn@@YAXP6AXW4LocalClientNum_t@@PEBUDObj@@PEAI2PEAPEAI@ZH@Z(fn, user);
}

/*
==============
Cloth_XAnimNode_Link_Destroy
==============
*/
void Cloth_XAnimNode_Link_Destroy(void *nodeData)
{
  ;
}

/*
==============
Cloth_XAnimNode_Link_Calc
==============
*/
void Cloth_XAnimNode_Link_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  const DObj *v14; 
  XAnimCalcAnimInfo *v15; 
  __int64 v17; 
  DObjPartBits *p_animPartBits; 
  unsigned int i; 
  bool HasClientFlag; 
  LocalClientNum_t v21; 
  __int64 v22; 
  unsigned int v23; 
  unsigned int v27; 
  unsigned int *array; 
  bitarray<768> *p_requestedBones; 
  __int64 v31; 
  unsigned int numBones; 
  __int64 v33; 
  __int64 v34; 
  unsigned int v35; 
  DObjPartBits *partBits; 
  unsigned __int64 v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int *v47; 
  signed __int64 v48; 
  __int64 v49; 
  unsigned int v50; 
  bitarray<768> *v51; 
  char v52; 
  __int64 v53; 
  unsigned int v54; 
  __int64 v55; 
  int v56; 
  __int64 v57; 
  _DWORD *v58; 
  unsigned int v60; 
  int v63; 
  unsigned int v64; 
  unsigned int v69; 
  unsigned int v73; 
  __int128 *v74; 
  unsigned int v75; 
  char v76; 
  unsigned int v77; 
  char v78; 
  unsigned __int16 v79; 
  unsigned __int16 v80; 
  int v81; 
  unsigned int v82; 
  DObj *v83; 
  __int64 v84; 
  const char *BoneName; 
  const char *v86; 
  const char *v87; 
  const ClothAsset *ClothAsset; 
  DObj *v96; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned int *v99; 
  int v100; 
  unsigned int v101; 
  const XModel *v102; 
  int v103; 
  __int64 v104; 
  unsigned int v105; 
  unsigned int v106; 
  unsigned __int16 v107; 
  unsigned int v108; 
  const char *v109; 
  char *fmt; 
  float4 *viewOffset; 
  __int64 v117; 
  float v118; 
  float v119; 
  float4 *v120; 
  __int64 v121; 
  unsigned int globalWorldId; 
  bool InstanceBindPoseBased; 
  int v124; 
  unsigned int v125; 
  unsigned int v126; 
  unsigned int v127; 
  unsigned int v128; 
  const bitarray<768> *WrittenBones; 
  DObj *obj; 
  unsigned int v131; 
  unsigned int v132; 
  XAnimCalcAnimInfo *v133; 
  XAnimCalcBuffer *animCalcBuffer; 
  __int64 v135; 
  __int64 v136; 
  const bitarray<768> *Bones; 
  _BYTE *v138; 
  __int128 v139; 
  int v140; 
  int v141; 
  int v142; 
  int v143; 
  __int128 v144; 
  bitarray<768> requestedBones; 
  float4 v146; 
  __int128 v147[2]; 
  DObjHierarchyIterator iter; 

  animCalcBuffer = destBuffer;
  v14 = dObj;
  obj = (DObj *)dObj;
  v15 = animCalcInfo;
  v133 = animCalcInfo;
  v138 = nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 109, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 110, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 111, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 112, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !destBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 113, ASSERT_TYPE_ASSERT, "(destBuffer)", (const char *)&queryFormat, "destBuffer") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Cloth_XAnimNode_Link_Calc");
  LODWORD(v17) = 0;
  p_animPartBits = &v15->animPartBits;
  v136 = 0i64;
  for ( i = 0; i < 8; ++i )
  {
    if ( p_animPartBits->array[0] )
      goto LABEL_20;
    p_animPartBits = (DObjPartBits *)((char *)p_animPartBits + 4);
  }
  if ( (v15->animPartBits.array[7] & 2) == 0 )
    return;
LABEL_20:
  __asm { vmovaps [rsp+0A30h+var_70], xmm9 }
  HasClientFlag = DObjHasClientFlag(v14);
  v21 = *(unsigned __int8 *)nodeData;
  v22 = 0i64;
  v132 = v21;
  v126 = 0;
  if ( !HasClientFlag )
    v22 = 1i64;
  v135 = 0i64;
  if ( !s_Cloth_XAnimNode_DObjToClothFns[v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 136, ASSERT_TYPE_ASSERT, "(s_Cloth_XAnimNode_DObjToClothFns[user])", (const char *)&queryFormat, "s_Cloth_XAnimNode_DObjToClothFns[user]") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0A30h+var_40], xmm6
    vmovaps [rsp+0A30h+var_50], xmm7
    vmovaps [rsp+0A30h+var_60], xmm8
    vmovaps [rsp+0A30h+var_80], xmm10
  }
  s_Cloth_XAnimNode_DObjToClothFns[v22]((const LocalClientNum_t)v21, v14, &globalWorldId, &v126, (unsigned int **)&v135);
  *(double *)&_XMM0 = Cloth_Update_GetCurrentTimestep(globalWorldId);
  v23 = 0;
  v128 = 0;
  __asm { vmovaps xmm9, xmm0 }
  if ( !v126 )
  {
LABEL_156:
    Sys_ProfEndNamedEvent();
    goto LABEL_157;
  }
  __asm
  {
    vmovss  xmm8, [rbp+930h+weightScale]
    vxorps  xmm10, xmm10, xmm10
  }
  while ( 1 )
  {
    v27 = *(_DWORD *)(v135 + 4i64 * v23);
    v127 = v27;
    if ( v27 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 147, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
    WrittenBones = Cloth_GetWrittenBones(globalWorldId, v27);
    _R15 = WrittenBones;
    if ( !WrittenBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 151, ASSERT_TYPE_ASSERT, "(writtenBones)", (const char *)&queryFormat, "writtenBones") )
      __debugbreak();
    array = v15->partBits->array;
    p_requestedBones = &requestedBones;
    v31 = 24i64;
    if ( (array[7] & 2) != 0 )
    {
      numBones = v14->numBones;
      while ( v31 )
      {
        p_requestedBones->array[0] = -1;
        p_requestedBones = (bitarray<768> *)((char *)p_requestedBones + 4);
        --v31;
      }
      v33 = 0i64;
      v34 = numBones >> 5;
      if ( numBones >> 5 )
      {
        do
        {
          requestedBones.array[v33] = array[v33];
          ++v33;
        }
        while ( v33 < v34 );
      }
      v35 = 32 * v34;
      if ( v35 < numBones )
      {
        do
        {
          partBits = v15->partBits;
          if ( v35 >= 0x100 )
          {
            LODWORD(v117) = 256;
            LODWORD(viewOffset) = v35;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", viewOffset, v117) )
              __debugbreak();
          }
          v37 = (unsigned __int64)v35 >> 5;
          v38 = 0x80000000 >> (v35 & 0x1F);
          if ( (v38 & partBits->array[v37]) != 0 )
          {
            if ( v35 >= 0x300 )
            {
              LODWORD(v121) = 768;
              LODWORD(v120) = v35;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v120, v121) )
                __debugbreak();
            }
            requestedBones.array[v37] |= v38;
          }
          else
          {
            if ( v35 >= 0x300 )
            {
              LODWORD(v121) = 768;
              LODWORD(v120) = v35;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v120, v121) )
                __debugbreak();
            }
            requestedBones.array[v37] &= ~v38;
          }
          ++v35;
        }
        while ( (int)v35 < v14->numBones );
        _R15 = WrittenBones;
        LODWORD(v17) = 0;
        v27 = v127;
      }
    }
    else
    {
      while ( v31 )
      {
        p_requestedBones->array[0] = 0;
        p_requestedBones = (bitarray<768> *)((char *)p_requestedBones + 4);
        --v31;
      }
      requestedBones.array[0] = *array;
      requestedBones.array[1] = array[1];
      requestedBones.array[2] = array[2];
      requestedBones.array[3] = array[3];
      requestedBones.array[4] = array[4];
      requestedBones.array[5] = array[5];
      requestedBones.array[6] = array[6];
      requestedBones.array[7] = array[7];
    }
    v39 = 0;
    if ( &requestedBones > (bitarray<768> *)&_R15->array[23] || &requestedBones.array[23] < (unsigned int *)_R15 )
    {
      __asm
      {
        vmovdqu xmm0, xmmword ptr [rbp+930h+requestedBones.array]
        vpand   xmm1, xmm0, xmmword ptr [r15]
        vmovdqu xmmword ptr [rbp+930h+requestedBones.array], xmm1
        vmovdqu xmm0, xmmword ptr [r15+10h]
        vpand   xmm1, xmm0, xmmword ptr [rbp+930h+requestedBones.array+10h]
        vmovdqu xmmword ptr [rbp+930h+requestedBones.array+10h], xmm1
        vmovdqu xmm0, xmmword ptr [r15+20h]
        vpand   xmm1, xmm0, xmmword ptr [rbp+930h+requestedBones.array+20h]
        vmovdqu xmmword ptr [rbp+930h+requestedBones.array+20h], xmm1
        vmovdqu xmm0, xmmword ptr [r15+30h]
        vpand   xmm1, xmm0, xmmword ptr [rbp+930h+requestedBones.array+30h]
        vmovdqu xmmword ptr [rbp+930h+requestedBones.array+30h], xmm1
      }
      v39 = 16;
    }
    v47 = &requestedBones.array[v39];
    v48 = (char *)_R15 - (char *)&requestedBones;
    v49 = 24 - v39;
    do
    {
      *v47 &= *(unsigned int *)((char *)v47 + v48);
      ++v47;
      --v49;
    }
    while ( v49 );
    v50 = 0;
    v51 = &requestedBones;
    while ( !v51->array[0] )
    {
      ++v50;
      v51 = (bitarray<768> *)((char *)v51 + 4);
      if ( v50 >= 0x18 )
        goto LABEL_132;
    }
    InstanceBindPoseBased = Cloth_GetInstanceBindPoseBased(globalWorldId, v27);
    v52 = InstanceBindPoseBased;
    if ( !InstanceBindPoseBased )
      break;
LABEL_122:
    ClothAsset = Cloth_GetClothAsset(globalWorldId, v27);
    if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 307, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFFFA8072, ClothAsset->name);
    if ( v138[1] && !v52 )
    {
      __asm { vmovss  [rsp+0A30h+var_A00], xmm8 }
      Cloth_Update_HideByCollapsing(globalWorldId, v27, v15, v14, &requestedBones, animCalcBuffer, v119);
      Sys_ProfEndNamedEvent();
      goto LABEL_156;
    }
    _RAX = g_activeRefDef;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [rbp+930h+var_8E0.v], xmm0
    }
    if ( g_activeRefDef )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+7Ch]
        vmovss  xmm1, dword ptr [rax+80h]
        vmovss  xmm2, dword ptr [rax+84h]
      }
      HIDWORD(v144) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rbp-20h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, xmm1, 10h
        vinsertps xmm3, xmm3, xmm2, 20h ; ' '
        vmovups xmmword ptr [rbp-20h], xmm3
        vmovups xmmword ptr [rbp+930h+var_8E0.v], xmm3
      }
    }
    if ( !Cloth_Update_InstanceUpdatedThisFrame(globalWorldId, v27) )
    {
      __asm { vcomiss xmm9, xmm10 }
      Cloth_Update_Instance(globalWorldId, v27);
    }
    __asm { vmovss  [rsp+0A30h+var_A00], xmm8 }
    Cloth_Update_GetBoneTransforms(globalWorldId, v27, v15, v14, &requestedBones, animCalcBuffer, v118, &v146);
    Sys_ProfEndNamedEvent();
LABEL_132:
    v23 = v128 + 1;
    v128 = v23;
    if ( v23 >= v126 )
      goto LABEL_156;
  }
  Bones = Cloth_GetReadBones(globalWorldId, v27);
  v53 = (__int64)Bones;
  v54 = DObjNumBones(v14);
  v139 = *(_OWORD *)v53;
  v140 = *(_DWORD *)(v53 + 16);
  v141 = *(_DWORD *)(v53 + 20);
  v124 = v54;
  v55 = v54 >> 5;
  v142 = *(_DWORD *)(v53 + 24);
  v143 = *(_DWORD *)(v53 + 28);
  if ( (v54 & 0x1F) != 0 )
  {
    v56 = 1 << (32 - (v54 & 0x1F));
    if ( (unsigned int)v55 >= 8 )
    {
      LODWORD(v117) = 8;
      LODWORD(viewOffset) = v54 >> 5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_public_db.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( indexHigh ) < (unsigned)( ( sizeof( *array_counter( super::array ) ) + 0 ) )", "indexHigh doesn't index ARRAY_COUNT( super::array )\n\t%i not in [0, %i)", viewOffset, v117) )
        __debugbreak();
    }
    *((_DWORD *)&v139 + v55) &= -v56;
    v55 = (unsigned int)(v55 + 1);
    if ( (unsigned int)v55 >= 8 )
      goto LABEL_77;
  }
  else if ( (unsigned int)v55 >= 8 )
  {
    goto LABEL_77;
  }
  v57 = (unsigned int)(8 - v55);
  v58 = (_DWORD *)&v139 + v55;
  while ( v57 )
  {
    *v58++ = 0;
    --v57;
  }
LABEL_77:
  _R15 = v133;
  v60 = 0;
  _RBX = 0i64;
  do
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [r15+rbx+0BE80h]
      vmovdqu [rbp+rbx+930h+var_8D0], xmm6
    }
    _RBX += 16i64;
    ++v60;
  }
  while ( v60 < 2 );
  v63 = v124;
  v64 = 0;
  _RBX = v147;
  __asm { vmovdqu xmm7, cs:__xmm@ffffffffffffffffffffffffffffffff }
  do
  {
    __asm
    {
      vlddqu  xmm0, xmmword ptr [rbx]
      vpxor   xmm6, xmm0, xmm7
      vmovdqu xmmword ptr [rbx], xmm6
    }
    ++_RBX;
    ++v64;
  }
  while ( v64 < 2 );
  v69 = 0;
  _RBX = 0i64;
  do
  {
    __asm
    {
      vlddqu  xmm6, [rbp+rbx+930h+var_8D0]
      vlddqu  xmm0, [rbp+rbx+930h+var_978]
      vpand   xmm6, xmm0, xmm6
      vmovdqu [rbp+rbx+930h+var_978], xmm6
    }
    _RBX += 16i64;
    ++v69;
  }
  while ( v69 < 2 );
  v73 = 0;
  v74 = &v139;
  do
  {
    if ( *(_DWORD *)v74 )
      break;
    ++v73;
    v74 = (__int128 *)((char *)v74 + 4);
  }
  while ( v73 < 8 );
  v75 = *(_DWORD *)v53;
  v76 = 0;
  v125 = *(_DWORD *)v53;
  LODWORD(WrittenBones) = 0;
  while ( 1 )
  {
    if ( v75 )
    {
LABEL_91:
      v77 = __lzcnt(v75);
      v131 = v77 + 32 * v17;
      if ( v77 >= 0x20 )
      {
        LODWORD(v117) = 32;
        LODWORD(viewOffset) = v77;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", viewOffset, v117) )
          __debugbreak();
      }
      if ( (v75 & (0x80000000 >> v77)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v78 = 1;
      v75 &= ~(0x80000000 >> v77);
      v125 = v75;
    }
    else
    {
      while ( 1 )
      {
        v17 = (unsigned int)(v17 + 1);
        LODWORD(WrittenBones) = v17;
        if ( (unsigned int)v17 >= 0x18 )
          break;
        v75 = *(_DWORD *)(v53 + 4 * v17);
        v125 = v75;
        if ( v75 )
          goto LABEL_91;
      }
      v78 = 0;
    }
    if ( !v78 )
      break;
    v79 = v131;
    if ( v131 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v131, "unsigned", v131) )
      __debugbreak();
    v80 = v79 | 0x8000;
    if ( v79 < v63 )
      v80 = v79;
    v81 = v80;
    v82 = DObjHierarchyIterator_Begin(&iter, obj, v80);
    if ( v82 != 255 )
    {
      v83 = obj;
      v84 = (__int64)v133;
      while ( (v82 & 0x8000) != 0 )
      {
        if ( (*(_DWORD *)(v84 + 48796) & 2) == 0 )
        {
          Com_PrintError(14, "Cloth expected client bones to be animated, but they weren't.\n");
LABEL_117:
          v76 = 1;
        }
LABEL_118:
        v82 = DObjHierarchyIterator_NextParent(&iter);
        if ( v82 == 255 )
        {
          LODWORD(v17) = (_DWORD)WrittenBones;
          v75 = v125;
          v53 = (__int64)Bones;
          goto LABEL_87;
        }
      }
      if ( v82 >= 0x100 )
      {
        LODWORD(v117) = 256;
        LODWORD(viewOffset) = v82;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", viewOffset, v117) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v82 & 0x1F)) & *(_DWORD *)(v84 + 4 * ((unsigned __int64)v82 >> 5) + 48768)) != 0 )
        goto LABEL_118;
      BoneName = DObjGetBoneName(v83, v81);
      v86 = BoneName;
      if ( v82 == v81 )
      {
        Com_PrintError(14, "Cloth requires bone %s and needs it to be animated, but it wasn't.\n", BoneName);
      }
      else
      {
        v87 = DObjGetBoneName(v83, v82);
        Com_PrintError(14, "Cloth requires bone %s from hierarchy for cloth input bone %s and needs it to be animated, but it wasn't.\n", v87, v86);
      }
      goto LABEL_117;
    }
LABEL_87:
    v63 = v124;
  }
  if ( !v76 )
  {
    v14 = obj;
    LODWORD(v17) = 0;
    v52 = InstanceBindPoseBased;
    v15 = v133;
    v27 = v127;
    goto LABEL_122;
  }
  v96 = obj;
  DObjDisplayAnim(obj, "AnimTree");
  v97 = *(_DWORD *)v53;
  Com_PrintError(14, "  LCN %i DObj %p\n", v132, v96);
  Com_PrintError(14, "  globalWorldId %i Instance %i\n", globalWorldId, v127);
  v98 = 0;
  v99 = (unsigned int *)v53;
  do
    Com_PrintError(14, "  Word %i %x\n", v98++, *v99++);
  while ( v98 < 0x18 );
  Com_PrintError(14, "Cloth required bones %i %i\n", v96->numModels, v96->numBones);
  v100 = 0;
  v101 = 0;
  if ( v96->numModels )
  {
    do
    {
      v102 = v96->models[v101];
      LODWORD(viewOffset) = v102->numClientBones;
      LODWORD(fmt) = v102->numBones;
      Com_PrintError(14, "  Model %i %s %i %i\n", v101++, v102->name, fmt, viewOffset);
    }
    while ( v101 < v96->numModels );
    v100 = 0;
  }
  v103 = v124;
  while ( v97 )
  {
LABEL_143:
    v105 = __lzcnt(v97);
    v106 = v105 + 32 * v100;
    if ( v105 >= 0x20 )
    {
      LODWORD(v117) = 32;
      LODWORD(viewOffset) = v105;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", viewOffset, v117) )
        __debugbreak();
    }
    if ( (v97 & (0x80000000 >> v105)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v97 &= ~(0x80000000 >> v105);
    if ( v106 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v106, "unsigned", v106) )
      __debugbreak();
    v107 = v106 | 0x8000;
    if ( (unsigned __int16)v106 < v103 )
      v107 = v106;
    v108 = v107;
    v109 = DObjGetBoneName(v96, v107);
    Com_PrintError(14, "  %i %s\n", v108, v109);
    v100 = v136;
  }
  while ( 1 )
  {
    v104 = (unsigned int)(v100 + 1);
    v100 = v104;
    v136 = (unsigned int)v104;
    if ( (unsigned int)v104 >= 0x18 )
      break;
    v97 = *(_DWORD *)(v53 + 4 * v104);
    if ( v97 )
      goto LABEL_143;
  }
LABEL_157:
  __asm
  {
    vmovaps xmm6, [rsp+0A30h+var_40]
    vmovaps xmm8, [rsp+0A30h+var_60]
    vmovaps xmm7, [rsp+0A30h+var_50]
    vmovaps xmm10, [rsp+0A30h+var_80]
    vmovaps xmm9, [rsp+0A30h+var_70]
  }
}

/*
==============
Cloth_XAnimNode_Link_Read
==============
*/
void Cloth_XAnimNode_Link_Read(void *nodeData, MemoryFile *memFile)
{
  ;
}

/*
==============
Cloth_XAnimNode_Link_Write
==============
*/
void Cloth_XAnimNode_Link_Write(void *nodeData, MemoryFile *memFile)
{
  ;
}

/*
==============
Cloth_XAnimNode_Link_PostParse
==============
*/
char Cloth_XAnimNode_Link_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  return 1;
}

/*
==============
Cloth_AnimTreeNode_DisableClothNode
==============
*/
void Cloth_AnimTreeNode_DisableClothNode(DObj *dobj, const int user)
{
  __int64 v3; 
  XAnimTree *tree; 
  XAnimSubTreeID subTreeID; 
  __int64 v7; 
  __int64 v8; 
  float fmt; 
  __int64 goalTime; 
  float goalTimea; 
  __int64 rate; 
  float ratea; 

  v3 = user;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 510, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(goalTime) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 511, ASSERT_TYPE_ASSERT, "(unsigned)( user ) < (unsigned)( SCR_XANIM_COUNT )", "user doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", goalTime, 2) )
      __debugbreak();
  }
  tree = dobj->tree;
  if ( dobj->tree && tree->anims && tree->children )
  {
    subTreeID = tree->anims->subTreeID;
    if ( (unsigned __int16)subTreeID >= XANIM_MAX_SUBTREES )
    {
      LODWORD(rate) = 130;
      LODWORD(goalTime) = (unsigned __int16)subTreeID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 522, ASSERT_TYPE_ASSERT, "(unsigned)( treeIdx ) < (unsigned)( CLOTH_XANIMNODE_LOOKUP_SIZE )", "treeIdx doesn't index CLOTH_XANIMNODE_LOOKUP_SIZE\n\t%i not in [0, %i)", goalTime, rate) )
        __debugbreak();
    }
    v7 = (unsigned __int16)subTreeID + 130 * v3;
    v8 = v7;
    if ( !s_Cloth_XAnimNode_Lookup[0][v7].setup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 526, ASSERT_TYPE_ASSERT, "(lookup->setup)", (const char *)&queryFormat, "lookup->setup") )
      __debugbreak();
    if ( s_Cloth_XAnimNode_Lookup[0][v8].found )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vxorps  xmm1, xmm1, xmm1
        vmovss  [rsp+68h+rate], xmm0
        vmovss  [rsp+68h+goalTime], xmm1
        vmovss  dword ptr [rsp+68h+fmt], xmm1
      }
      XAnimSetCompleteGoalWeight(dobj, 0, XANIM_SUBTREE_DEFAULT, s_Cloth_XAnimNode_Lookup[0][v8].clothNode.index, fmt, goalTimea, ratea, (scr_string_t)0, 0, 1, LINEAR, NULL);
    }
  }
}

/*
==============
Cloth_AnimTreeNode_EnableClothNode
==============
*/
void Cloth_AnimTreeNode_EnableClothNode(const char *ownerDesc, DObj *dobj, const int user)
{
  __int64 v4; 
  XAnimTree *tree; 
  XAnimSubTreeID subTreeID; 
  __int64 v9; 
  __int64 v10; 
  float fmt; 
  __int64 goalTime; 
  float goalTimea; 
  __int64 rate; 
  float ratea; 

  v4 = user;
  if ( !ownerDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 475, ASSERT_TYPE_ASSERT, "(ownerDesc)", (const char *)&queryFormat, "ownerDesc") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 476, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(goalTime) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 477, ASSERT_TYPE_ASSERT, "(unsigned)( user ) < (unsigned)( SCR_XANIM_COUNT )", "user doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", goalTime, 2) )
      __debugbreak();
  }
  tree = dobj->tree;
  if ( !dobj->tree || !tree->anims )
    Sys_Error((const ObfuscateErrorText)&stru_143D19198, ownerDesc);
  subTreeID = tree->anims->subTreeID;
  if ( (unsigned __int16)subTreeID >= XANIM_MAX_SUBTREES )
  {
    LODWORD(rate) = 130;
    LODWORD(goalTime) = (unsigned __int16)subTreeID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( treeIdx ) < (unsigned)( CLOTH_XANIMNODE_LOOKUP_SIZE )", "treeIdx doesn't index CLOTH_XANIMNODE_LOOKUP_SIZE\n\t%i not in [0, %i)", goalTime, rate) )
      __debugbreak();
  }
  v9 = (unsigned __int16)subTreeID + 130 * v4;
  v10 = v9;
  if ( s_Cloth_XAnimNode_Lookup[0][v9].setup )
  {
    if ( !s_Cloth_XAnimNode_Lookup[0][v9].found )
      Sys_Error((const ObfuscateErrorText)&stru_143D191E0, ownerDesc);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vmovss  [rsp+68h+rate], xmm1
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+68h+goalTime], xmm0
      vmovss  dword ptr [rsp+68h+fmt], xmm1
    }
    XAnimSetCompleteGoalWeight(dobj, 0, XANIM_SUBTREE_DEFAULT, s_Cloth_XAnimNode_Lookup[0][v10].clothNode.index, fmt, goalTimea, ratea, (scr_string_t)0, 0, 1, LINEAR, NULL);
  }
}

/*
==============
Cloth_XAnimNode_Clear
==============
*/
void Cloth_XAnimNode_Clear(const XAnimOwner owner)
{
  char v1; 
  __int64 v2; 

  v1 = owner;
  if ( (unsigned __int8)owner >= (unsigned int)COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 439, ASSERT_TYPE_ASSERT, "(unsigned)( owner ) < (unsigned)( XAnimOwner::COUNT )", "owner doesn't index XAnimOwner::COUNT\n\t%i not in [0, %i)", (unsigned __int8)owner, 2) )
    __debugbreak();
  v2 = 0i64;
  if ( !v1 )
    v2 = 1i64;
  memset_0(s_Cloth_XAnimNode_Lookup[v2], 0, sizeof(Cloth_XAnimNode_Lookup[130]));
}

/*
==============
Cloth_XAnimNode_CloneRegistry
==============
*/
void Cloth_XAnimNode_CloneRegistry(void)
{
  __int64 v1; 

  _RAX = s_Cloth_XAnimNode_Lookup;
  v1 = 130i64;
  do
  {
    if ( (*_RAX)[130].setup && !*(_BYTE *)_RAX )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rax+0C30h]
        vmovsd  xmm1, qword ptr [rax+0C40h]
        vmovups xmmword ptr [rax], xmm0
        vmovsd  qword ptr [rax+10h], xmm1
      }
    }
    _RAX = (Cloth_XAnimNode_Lookup (*)[130])((char *)_RAX + 24);
    --v1;
  }
  while ( v1 );
}

/*
==============
Cloth_XAnimNode_IsClothNodeName
==============
*/
bool Cloth_XAnimNode_IsClothNodeName(const scr_string_t nodeName)
{
  return nodeName == scr_const.clothnode;
}

/*
==============
Cloth_XAnimNode_Link_Init
==============
*/
void Cloth_XAnimNode_Link_Init(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<Cloth_XAnimNode_Link>::ms_typeInfo);
}

/*
==============
Cloth_XAnimNode_NoClothNodeFound
==============
*/
void Cloth_XAnimNode_NoClothNodeFound(const XAnim_s *anims, const int user)
{
  __int64 v2; 
  XAnimSubTreeID subTreeID; 
  __int64 v5; 
  __int64 v6; 

  v2 = user;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 421, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 422, ASSERT_TYPE_ASSERT, "(unsigned)( user ) < (unsigned)( SCR_XANIM_COUNT )", "user doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  subTreeID = anims->subTreeID;
  if ( (unsigned __int16)subTreeID >= XANIM_MAX_SUBTREES )
  {
    LODWORD(v6) = 130;
    LODWORD(v5) = (unsigned __int16)subTreeID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 426, ASSERT_TYPE_ASSERT, "(unsigned)( treeIdx ) < (unsigned)( CLOTH_XANIMNODE_LOOKUP_SIZE )", "treeIdx doesn't index CLOTH_XANIMNODE_LOOKUP_SIZE\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  s_Cloth_XAnimNode_Lookup[v2][(unsigned __int16)subTreeID].found = 0;
}

/*
==============
Cloth_XAnimNode_RegisterAnimTree
==============
*/
void Cloth_XAnimNode_RegisterAnimTree(const char *treeName, const XAnim_s *anims, const int user)
{
  __int64 v3; 
  XAnimSubTreeID subTreeID; 
  bool v7; 
  Cloth_XAnimNode_Lookup *v8; 
  __int64 v9; 
  __int64 v10; 

  v3 = user;
  if ( !treeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 390, ASSERT_TYPE_ASSERT, "(treeName)", (const char *)&queryFormat, "treeName") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 391, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 392, ASSERT_TYPE_ASSERT, "(unsigned)( user ) < (unsigned)( SCR_XANIM_COUNT )", "user doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  subTreeID = anims->subTreeID;
  if ( (unsigned __int16)subTreeID >= XANIM_MAX_SUBTREES )
  {
    LODWORD(v10) = 130;
    LODWORD(v9) = (unsigned __int16)subTreeID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 396, ASSERT_TYPE_ASSERT, "(unsigned)( treeIdx ) < (unsigned)( CLOTH_XANIMNODE_LOOKUP_SIZE )", "treeIdx doesn't index CLOTH_XANIMNODE_LOOKUP_SIZE\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v7 = !s_Cloth_XAnimNode_Lookup[v3][(unsigned __int16)subTreeID].setup;
  v8 = &s_Cloth_XAnimNode_Lookup[v3][(unsigned __int16)subTreeID];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 400, ASSERT_TYPE_ASSERT, "(!lookup->setup)", (const char *)&queryFormat, "!lookup->setup") )
    __debugbreak();
  Scr_FindAnim(treeName, CLOTH_XANIMNODE_NAME, &v8->clothNode, v3);
  v8->found = 1;
  v8->setup = 1;
}

/*
==============
Cloth_XAnimNode_SetDObjToClothFn
==============
*/
void Cloth_XAnimNode_SetDObjToClothFn(void (*fn)(const LocalClientNum_t, const DObj *, unsigned int *, unsigned int *, unsigned int **), const int user)
{
  __int64 v2; 
  int v5; 

  v2 = user;
  if ( (unsigned int)user >= 2 )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 466, ASSERT_TYPE_ASSERT, "(unsigned)( user ) < (unsigned)( SCR_XANIM_COUNT )", "user doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", user, v5) )
      __debugbreak();
  }
  s_Cloth_XAnimNode_DObjToClothFns[v2] = fn;
}

