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
  const DObj *v8; 
  XAnimCalcAnimInfo *v9; 
  __int64 v11; 
  DObjPartBits *p_animPartBits; 
  unsigned int i; 
  bool HasClientFlag; 
  LocalClientNum_t v15; 
  __int64 v16; 
  double CurrentTimestep; 
  unsigned int v18; 
  float v19; 
  unsigned int v20; 
  const bitarray<768> *v21; 
  unsigned int *array; 
  bitarray<768> *p_requestedBones; 
  __int64 v24; 
  unsigned int numBones; 
  __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  DObjPartBits *partBits; 
  unsigned __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int *v41; 
  signed __int64 v42; 
  __int64 v43; 
  unsigned int v44; 
  bitarray<768> *v45; 
  char v46; 
  __int64 v47; 
  unsigned int v48; 
  __int64 v49; 
  int v50; 
  __int64 v51; 
  _DWORD *v52; 
  unsigned int v54; 
  int v57; 
  unsigned int v58; 
  unsigned int v62; 
  unsigned int v67; 
  __int128 *v68; 
  unsigned int v69; 
  char v70; 
  unsigned int v71; 
  char v72; 
  unsigned __int16 v73; 
  unsigned __int16 v74; 
  int v75; 
  unsigned int v76; 
  DObj *v77; 
  __int64 v78; 
  const char *BoneName; 
  const char *v80; 
  const char *v81; 
  const ClothAsset *ClothAsset; 
  float v83; 
  __m128 v85; 
  DObj *v88; 
  unsigned int v89; 
  unsigned int v90; 
  unsigned int *v91; 
  int v92; 
  unsigned int v93; 
  const XModel *v94; 
  int v95; 
  __int64 v96; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned __int16 v99; 
  unsigned int v100; 
  const char *v101; 
  char *fmt; 
  float4 *viewOffset; 
  __int64 v104; 
  float4 *v105; 
  __int64 v106; 
  unsigned int globalWorldId; 
  bool InstanceBindPoseBased; 
  int v109; 
  unsigned int v110; 
  unsigned int v111; 
  unsigned int v112; 
  unsigned int v113; 
  const bitarray<768> *WrittenBones; 
  DObj *obj; 
  unsigned int v116; 
  unsigned int v117; 
  XAnimCalcAnimInfo *v118; 
  XAnimCalcBuffer *animCalcBuffer; 
  __int64 v120; 
  __int64 v121; 
  const bitarray<768> *Bones; 
  _BYTE *v123; 
  __int128 v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  __m128 v129; 
  bitarray<768> requestedBones; 
  float4 v131; 
  __int128 v132[2]; 
  DObjHierarchyIterator iter; 

  animCalcBuffer = destBuffer;
  v8 = dObj;
  obj = (DObj *)dObj;
  v9 = animCalcInfo;
  v118 = animCalcInfo;
  v123 = nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 109, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 110, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 111, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 112, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !destBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 113, ASSERT_TYPE_ASSERT, "(destBuffer)", (const char *)&queryFormat, "destBuffer") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Cloth_XAnimNode_Link_Calc");
  LODWORD(v11) = 0;
  p_animPartBits = &v9->animPartBits;
  v121 = 0i64;
  for ( i = 0; i < 8; ++i )
  {
    if ( p_animPartBits->array[0] )
      goto LABEL_20;
    p_animPartBits = (DObjPartBits *)((char *)p_animPartBits + 4);
  }
  if ( (v9->animPartBits.array[7] & 2) != 0 )
  {
LABEL_20:
    HasClientFlag = DObjHasClientFlag(v8);
    v15 = *(unsigned __int8 *)nodeData;
    v16 = 0i64;
    v117 = v15;
    v111 = 0;
    if ( !HasClientFlag )
      v16 = 1i64;
    v120 = 0i64;
    if ( !s_Cloth_XAnimNode_DObjToClothFns[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 136, ASSERT_TYPE_ASSERT, "(s_Cloth_XAnimNode_DObjToClothFns[user])", (const char *)&queryFormat, "s_Cloth_XAnimNode_DObjToClothFns[user]") )
      __debugbreak();
    s_Cloth_XAnimNode_DObjToClothFns[v16]((const LocalClientNum_t)v15, v8, &globalWorldId, &v111, (unsigned int **)&v120);
    CurrentTimestep = Cloth_Update_GetCurrentTimestep(globalWorldId);
    v18 = 0;
    v113 = 0;
    v19 = *(float *)&CurrentTimestep;
    if ( !v111 )
    {
LABEL_157:
      Sys_ProfEndNamedEvent();
      return;
    }
    while ( 1 )
    {
      v20 = *(_DWORD *)(v120 + 4i64 * v18);
      v112 = v20;
      if ( v20 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 147, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
        __debugbreak();
      WrittenBones = Cloth_GetWrittenBones(globalWorldId, v20);
      v21 = WrittenBones;
      if ( !WrittenBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 151, ASSERT_TYPE_ASSERT, "(writtenBones)", (const char *)&queryFormat, "writtenBones") )
        __debugbreak();
      array = v9->partBits->array;
      p_requestedBones = &requestedBones;
      v24 = 24i64;
      if ( (array[7] & 2) != 0 )
      {
        numBones = v8->numBones;
        while ( v24 )
        {
          p_requestedBones->array[0] = -1;
          p_requestedBones = (bitarray<768> *)((char *)p_requestedBones + 4);
          --v24;
        }
        v26 = 0i64;
        v27 = numBones >> 5;
        if ( numBones >> 5 )
        {
          do
          {
            requestedBones.array[v26] = array[v26];
            ++v26;
          }
          while ( v26 < v27 );
        }
        v28 = 32 * v27;
        if ( v28 < numBones )
        {
          do
          {
            partBits = v9->partBits;
            if ( v28 >= 0x100 )
            {
              LODWORD(v104) = 256;
              LODWORD(viewOffset) = v28;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", viewOffset, v104) )
                __debugbreak();
            }
            v30 = (unsigned __int64)v28 >> 5;
            v31 = 0x80000000 >> (v28 & 0x1F);
            if ( (v31 & partBits->array[v30]) != 0 )
            {
              if ( v28 >= 0x300 )
              {
                LODWORD(v106) = 768;
                LODWORD(v105) = v28;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v105, v106) )
                  __debugbreak();
              }
              requestedBones.array[v30] |= v31;
            }
            else
            {
              if ( v28 >= 0x300 )
              {
                LODWORD(v106) = 768;
                LODWORD(v105) = v28;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v105, v106) )
                  __debugbreak();
              }
              requestedBones.array[v30] &= ~v31;
            }
            ++v28;
          }
          while ( (int)v28 < v8->numBones );
          v21 = WrittenBones;
          LODWORD(v11) = 0;
          v20 = v112;
        }
      }
      else
      {
        while ( v24 )
        {
          p_requestedBones->array[0] = 0;
          p_requestedBones = (bitarray<768> *)((char *)p_requestedBones + 4);
          --v24;
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
      v32 = 0;
      if ( &requestedBones > (bitarray<768> *)&v21->array[23] || &requestedBones.array[23] < (unsigned int *)v21 )
      {
        _XMM0 = *(_OWORD *)requestedBones.array;
        __asm { vpand   xmm1, xmm0, xmmword ptr [r15] }
        *(_OWORD *)requestedBones.array = _XMM1;
        _XMM0 = *(_OWORD *)&v21->array[4];
        __asm { vpand   xmm1, xmm0, xmmword ptr [rbp+930h+requestedBones.array+10h] }
        *(_OWORD *)&requestedBones.array[4] = _XMM1;
        _XMM0 = *(_OWORD *)&v21->array[8];
        __asm { vpand   xmm1, xmm0, xmmword ptr [rbp+930h+requestedBones.array+20h] }
        *(_OWORD *)&requestedBones.array[8] = _XMM1;
        _XMM0 = *(_OWORD *)&v21->array[12];
        __asm { vpand   xmm1, xmm0, xmmword ptr [rbp+930h+requestedBones.array+30h] }
        *(_OWORD *)&requestedBones.array[12] = _XMM1;
        v32 = 16;
      }
      v41 = &requestedBones.array[v32];
      v42 = (char *)v21 - (char *)&requestedBones;
      v43 = 24 - v32;
      do
      {
        *v41 &= *(unsigned int *)((char *)v41 + v42);
        ++v41;
        --v43;
      }
      while ( v43 );
      v44 = 0;
      v45 = &requestedBones;
      while ( !v45->array[0] )
      {
        ++v44;
        v45 = (bitarray<768> *)((char *)v45 + 4);
        if ( v44 >= 0x18 )
          goto LABEL_133;
      }
      InstanceBindPoseBased = Cloth_GetInstanceBindPoseBased(globalWorldId, v20);
      v46 = InstanceBindPoseBased;
      if ( InstanceBindPoseBased )
        goto LABEL_121;
      Bones = Cloth_GetReadBones(globalWorldId, v20);
      v47 = (__int64)Bones;
      v48 = DObjNumBones(v8);
      v124 = *(_OWORD *)v47;
      v125 = *(_DWORD *)(v47 + 16);
      v126 = *(_DWORD *)(v47 + 20);
      v109 = v48;
      v49 = v48 >> 5;
      v127 = *(_DWORD *)(v47 + 24);
      v128 = *(_DWORD *)(v47 + 28);
      if ( (v48 & 0x1F) != 0 )
      {
        v50 = 1 << (32 - (v48 & 0x1F));
        if ( (unsigned int)v49 >= 8 )
        {
          LODWORD(v104) = 8;
          LODWORD(viewOffset) = v48 >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_public_db.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( indexHigh ) < (unsigned)( ( sizeof( *array_counter( super::array ) ) + 0 ) )", "indexHigh doesn't index ARRAY_COUNT( super::array )\n\t%i not in [0, %i)", viewOffset, v104) )
            __debugbreak();
        }
        *((_DWORD *)&v124 + v49) &= -v50;
        v49 = (unsigned int)(v49 + 1);
        if ( (unsigned int)v49 < 8 )
        {
LABEL_73:
          v51 = (unsigned int)(8 - v49);
          v52 = (_DWORD *)&v124 + v49;
          while ( v51 )
          {
            *v52++ = 0;
            --v51;
          }
        }
      }
      else if ( (unsigned int)v49 < 8 )
      {
        goto LABEL_73;
      }
      _R15 = v118;
      v54 = 0;
      _RBX = 0i64;
      do
      {
        __asm { vlddqu  xmm6, xmmword ptr [r15+rbx+0BE80h] }
        v132[_RBX++] = _XMM6;
        ++v54;
      }
      while ( v54 < 2 );
      v57 = v109;
      v58 = 0;
      _RBX = v132;
      do
      {
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rbx]
          vpxor   xmm6, xmm0, xmm7
        }
        *_RBX++ = _XMM6;
        ++v58;
      }
      while ( v58 < 2 );
      v62 = 0;
      _RBX = 0i64;
      do
      {
        __asm
        {
          vlddqu  xmm6, [rbp+rbx+930h+var_8D0]
          vlddqu  xmm0, [rbp+rbx+930h+var_978]
          vpand   xmm6, xmm0, xmm6
        }
        *(__int128 *)((char *)&v124 + _RBX) = _XMM6;
        _RBX += 16i64;
        ++v62;
      }
      while ( v62 < 2 );
      v67 = 0;
      v68 = &v124;
      do
      {
        if ( *(_DWORD *)v68 )
          break;
        ++v67;
        v68 = (__int128 *)((char *)v68 + 4);
      }
      while ( v67 < 8 );
      v69 = *(_DWORD *)v47;
      v70 = 0;
      v110 = *(_DWORD *)v47;
      LODWORD(WrittenBones) = 0;
      while ( 1 )
      {
        if ( v69 )
        {
LABEL_90:
          v71 = __lzcnt(v69);
          v116 = v71 + 32 * v11;
          if ( v71 >= 0x20 )
          {
            LODWORD(v104) = 32;
            LODWORD(viewOffset) = v71;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", viewOffset, v104) )
              __debugbreak();
          }
          if ( (v69 & (0x80000000 >> v71)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
            __debugbreak();
          v72 = 1;
          v69 &= ~(0x80000000 >> v71);
          v110 = v69;
        }
        else
        {
          while ( 1 )
          {
            v11 = (unsigned int)(v11 + 1);
            LODWORD(WrittenBones) = v11;
            if ( (unsigned int)v11 >= 0x18 )
              break;
            v69 = *(_DWORD *)(v47 + 4 * v11);
            v110 = v69;
            if ( v69 )
              goto LABEL_90;
          }
          v72 = 0;
        }
        if ( !v72 )
          break;
        v73 = v116;
        if ( v116 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v116, "unsigned", v116) )
          __debugbreak();
        v74 = v73 | 0x8000;
        if ( v73 < v57 )
          v74 = v73;
        v75 = v74;
        v76 = DObjHierarchyIterator_Begin(&iter, obj, v74);
        if ( v76 != 255 )
        {
          v77 = obj;
          v78 = (__int64)v118;
          while ( (v76 & 0x8000) != 0 )
          {
            if ( (*(_DWORD *)(v78 + 48796) & 2) == 0 )
            {
              Com_PrintError(14, "Cloth expected client bones to be animated, but they weren't.\n");
LABEL_116:
              v70 = 1;
            }
LABEL_117:
            v76 = DObjHierarchyIterator_NextParent(&iter);
            if ( v76 == 255 )
            {
              LODWORD(v11) = (_DWORD)WrittenBones;
              v69 = v110;
              v47 = (__int64)Bones;
              goto LABEL_86;
            }
          }
          if ( v76 >= 0x100 )
          {
            LODWORD(v104) = 256;
            LODWORD(viewOffset) = v76;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", viewOffset, v104) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v76 & 0x1F)) & *(_DWORD *)(v78 + 4 * ((unsigned __int64)v76 >> 5) + 48768)) != 0 )
            goto LABEL_117;
          BoneName = DObjGetBoneName(v77, v75);
          v80 = BoneName;
          if ( v76 == v75 )
          {
            Com_PrintError(14, "Cloth requires bone %s and needs it to be animated, but it wasn't.\n", BoneName);
          }
          else
          {
            v81 = DObjGetBoneName(v77, v76);
            Com_PrintError(14, "Cloth requires bone %s from hierarchy for cloth input bone %s and needs it to be animated, but it wasn't.\n", v81, v80);
          }
          goto LABEL_116;
        }
LABEL_86:
        v57 = v109;
      }
      if ( v70 )
      {
        v88 = obj;
        DObjDisplayAnim(obj, "AnimTree");
        v89 = *(_DWORD *)v47;
        Com_PrintError(14, "  LCN %i DObj %p\n", v117, v88);
        Com_PrintError(14, "  globalWorldId %i Instance %i\n", globalWorldId, v112);
        v90 = 0;
        v91 = (unsigned int *)v47;
        do
          Com_PrintError(14, "  Word %i %x\n", v90++, *v91++);
        while ( v90 < 0x18 );
        Com_PrintError(14, "Cloth required bones %i %i\n", v88->numModels, v88->numBones);
        v92 = 0;
        v93 = 0;
        if ( v88->numModels )
        {
          do
          {
            v94 = v88->models[v93];
            LODWORD(viewOffset) = v94->numClientBones;
            LODWORD(fmt) = v94->numBones;
            Com_PrintError(14, "  Model %i %s %i %i\n", v93++, v94->name, fmt, viewOffset);
          }
          while ( v93 < v88->numModels );
          v92 = 0;
        }
        v95 = v109;
        while ( v89 )
        {
LABEL_144:
          v97 = __lzcnt(v89);
          v98 = v97 + 32 * v92;
          if ( v97 >= 0x20 )
          {
            LODWORD(v104) = 32;
            LODWORD(viewOffset) = v97;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", viewOffset, v104) )
              __debugbreak();
          }
          if ( (v89 & (0x80000000 >> v97)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
            __debugbreak();
          v89 &= ~(0x80000000 >> v97);
          if ( v98 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v98, "unsigned", v98) )
            __debugbreak();
          v99 = v98 | 0x8000;
          if ( (unsigned __int16)v98 < v95 )
            v99 = v98;
          v100 = v99;
          v101 = DObjGetBoneName(v88, v99);
          Com_PrintError(14, "  %i %s\n", v100, v101);
          v92 = v121;
        }
        while ( 1 )
        {
          v96 = (unsigned int)(v92 + 1);
          v92 = v96;
          v121 = (unsigned int)v96;
          if ( (unsigned int)v96 >= 0x18 )
            return;
          v89 = *(_DWORD *)(v47 + 4 * v96);
          if ( v89 )
            goto LABEL_144;
        }
      }
      v8 = obj;
      LODWORD(v11) = 0;
      v46 = InstanceBindPoseBased;
      v9 = v118;
      v20 = v112;
LABEL_121:
      ClothAsset = Cloth_GetClothAsset(globalWorldId, v20);
      if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 307, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
        __debugbreak();
      Sys_ProfBeginNamedEvent(0xFFFA8072, ClothAsset->name);
      if ( v123[1] && !v46 )
      {
        Cloth_Update_HideByCollapsing(globalWorldId, v20, v9, v8, &requestedBones, animCalcBuffer, weightScale);
        Sys_ProfEndNamedEvent();
        goto LABEL_157;
      }
      v131.v = 0i64;
      if ( g_activeRefDef )
      {
        v83 = g_activeRefDef->viewOffset.v[0];
        v129.m128_i32[3] = 0;
        v85 = v129;
        v85.m128_f32[0] = v83;
        _XMM3 = v85;
        __asm
        {
          vinsertps xmm3, xmm3, xmm1, 10h
          vinsertps xmm3, xmm3, xmm2, 20h ; ' '
        }
        v129 = _XMM3;
        v131.v = _XMM3;
      }
      if ( !Cloth_Update_InstanceUpdatedThisFrame(globalWorldId, v20) )
      {
        if ( v19 > 0.0 )
        {
          Cloth_Update_InstanceState(globalWorldId, v20);
          Cloth_Update_SetBoneTransforms(globalWorldId, v20, v9, v8, animCalcBuffer, &v131);
          Cloth_Update_InstanceStateTransition(globalWorldId, v20);
        }
        Cloth_Update_Instance(globalWorldId, v20);
      }
      Cloth_Update_GetBoneTransforms(globalWorldId, v20, v9, v8, &requestedBones, animCalcBuffer, weightScale, &v131);
      Sys_ProfEndNamedEvent();
LABEL_133:
      v18 = v113 + 1;
      v113 = v18;
      if ( v18 >= v111 )
        goto LABEL_157;
    }
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
  __int64 v2; 
  XAnimTree *tree; 
  XAnimSubTreeID subTreeID; 
  __int64 v6; 
  __int64 v7; 
  __int64 goalTime; 
  __int64 rate; 

  v2 = user;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 510, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(goalTime) = v2;
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
    v6 = (unsigned __int16)subTreeID + 130 * v2;
    v7 = v6;
    if ( !s_Cloth_XAnimNode_Lookup[0][v6].setup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 526, ASSERT_TYPE_ASSERT, "(lookup->setup)", (const char *)&queryFormat, "lookup->setup") )
      __debugbreak();
    if ( s_Cloth_XAnimNode_Lookup[0][v7].found )
      XAnimSetCompleteGoalWeight(dobj, 0, XANIM_SUBTREE_DEFAULT, s_Cloth_XAnimNode_Lookup[0][v7].clothNode.index, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 1, LINEAR, NULL);
  }
}

/*
==============
Cloth_AnimTreeNode_EnableClothNode
==============
*/
void Cloth_AnimTreeNode_EnableClothNode(const char *ownerDesc, DObj *dobj, const int user)
{
  __int64 v3; 
  XAnimTree *tree; 
  XAnimSubTreeID subTreeID; 
  __int64 v8; 
  __int64 v9; 
  __int64 goalTime; 
  __int64 rate; 

  v3 = user;
  if ( !ownerDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 475, ASSERT_TYPE_ASSERT, "(ownerDesc)", (const char *)&queryFormat, "ownerDesc") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothxanimnode.cpp", 476, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(goalTime) = v3;
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
  v8 = (unsigned __int16)subTreeID + 130 * v3;
  v9 = v8;
  if ( s_Cloth_XAnimNode_Lookup[0][v8].setup )
  {
    if ( !s_Cloth_XAnimNode_Lookup[0][v8].found )
      Sys_Error((const ObfuscateErrorText)&stru_143D191E0, ownerDesc);
    XAnimSetCompleteGoalWeight(dobj, 0, XANIM_SUBTREE_DEFAULT, s_Cloth_XAnimNode_Lookup[0][v9].clothNode.index, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 1, LINEAR, NULL);
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
  Cloth_XAnimNode_Lookup (*v0)[130]; 
  __int64 v1; 
  double v2; 

  v0 = s_Cloth_XAnimNode_Lookup;
  v1 = 130i64;
  do
  {
    if ( (*v0)[130].setup && !*(_BYTE *)v0 )
    {
      v2 = *(double *)&(*v0)[130].found;
      *(_OWORD *)v0 = *(_OWORD *)&(*v0)[130].setup;
      *(double *)&(*v0)[0].found = v2;
    }
    v0 = (Cloth_XAnimNode_Lookup (*)[130])((char *)v0 + 24);
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

