/*
==============
XAnimCalcNotetrackWeights<2,XAnimFingerNotetrackLeafFunctor>
==============
*/

void __fastcall XAnimCalcNotetrackWeights<2,XAnimFingerNotetrackLeafFunctor>(const XAnimInfo *info, float *parentNTWeights, float *parentAnimWeights, XAnimFingerNotetrackLeafFunctor calcLeafFunctor)
{
  ??$XAnimCalcNotetrackWeights@$01UXAnimFingerNotetrackLeafFunctor@@@@YAXPEIBUXAnimInfo@@PEAM1UXAnimFingerNotetrackLeafFunctor@@@Z(info, parentNTWeights, parentAnimWeights, calcLeafFunctor);
}

/*
==============
XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>
==============
*/

void __fastcall XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>(const XAnimInfo *info, float *parentNTWeights, float *parentAnimWeights, XAnimIKNotetrackLeafFunctor *calcLeafFunctor)
{
  ??$XAnimCalcNotetrackWeights@$03UXAnimIKNotetrackLeafFunctor@@@@YAXPEIBUXAnimInfo@@PEAM1UXAnimIKNotetrackLeafFunctor@@@Z(info, parentNTWeights, parentAnimWeights, calcLeafFunctor);
}

/*
==============
XAnimCalcNotetrackWeights<2,AIAnim_XAnimFingerNotetrackLeafFunctor>
==============
*/

void __fastcall XAnimCalcNotetrackWeights<2,AIAnim_XAnimFingerNotetrackLeafFunctor>(const XAnimInfo *info, float *parentNTWeights, float *parentAnimWeights, AIAnim_XAnimFingerNotetrackLeafFunctor calcLeafFunctor)
{
  ??$XAnimCalcNotetrackWeights@$01UAIAnim_XAnimFingerNotetrackLeafFunctor@@@@YAXPEIBUXAnimInfo@@PEAM1UAIAnim_XAnimFingerNotetrackLeafFunctor@@@Z(info, parentNTWeights, parentAnimWeights, calcLeafFunctor);
}

/*
==============
XAnimCalcNotetrackWeights<2,XAnimFingerNotetrackLeafFunctor>
==============
*/
void XAnimCalcNotetrackWeights<2,XAnimFingerNotetrackLeafFunctor>(const XAnimInfo *info, float *parentNTWeights, float *parentAnimWeights, XAnimFingerNotetrackLeafFunctor calcLeafFunctor)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  bool v8; 
  XAnimParts *parts; 
  unsigned __int8 fingerPoseType; 
  unsigned __int8 v15; 
  int v16; 
  scr_string_t xanim_finger_pose_in_start_right; 
  scr_string_t xanim_finger_pose_in_end_right; 
  scr_string_t xanim_finger_pose_out_start_right; 
  scr_string_t xanim_finger_pose_out_end_right; 
  double v21; 
  int v22; 
  unsigned __int16 children; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  int v28; 
  bool v29; 
  float *v30; 
  XAnimInfo *AnimInfo; 
  unsigned int flags; 
  char v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  bool v39; 
  __int64 v40; 
  __int64 v41; 
  unsigned __int64 v42; 
  __int64 v43; 
  unsigned __int64 v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float *v50; 
  float v54; 
  float v56; 
  bool v58; 
  int v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  float *v65; 
  float parentAnimWeightsa; 
  char v67; 
  float parentNTWeightsa[64]; 
  __int64 v69[4]; 
  __int64 v70[4]; 
  __int128 v71; 
  __int128 v72; 
  __int128 v73; 
  __int128 v74; 

  v8 = info->animToModel == NULL;
  v65 = parentNTWeights;
  if ( v8 )
  {
    v74 = v4;
    v73 = v5;
    v72 = v6;
    v71 = v7;
    memset_0(parentNTWeightsa, 0, sizeof(parentNTWeightsa));
    memset_0(&parentAnimWeightsa, 0, 0x100ui64);
    memset(v69, 0, sizeof(v69));
    memset(v70, 0, sizeof(v70));
    v60 = 0i64;
    v61 = 0i64;
    v62 = 0i64;
    v64 = 0i64;
    v22 = IsInfoAdditive(info);
    children = info->children;
    v24 = 0u;
    v25 = 0u;
    v26 = 0u;
    v27 = 0u;
    v28 = 0;
    v59 = 0;
    v29 = v22 != 0;
    v58 = v22 != 0;
    if ( children )
    {
      v30 = (float *)&v67;
      v63 = 0i64;
      while ( v28 < 32 )
      {
        AnimInfo = GetAnimInfo(children);
        if ( !AnimInfo )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 92, ASSERT_TYPE_ASSERT, "(childInfo)", (const char *)&queryFormat, "childInfo") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 588, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
            __debugbreak();
        }
        if ( AnimInfo->animToModel || (flags = AnimInfo->animParent.flags, (flags & 0x4000) == 0) )
        {
          v33 = 0;
        }
        else
        {
          v33 = 1;
          if ( (flags & 0x210) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 590, ASSERT_TYPE_ASSERT, "(!isAdditiveIKScale || IsInfoAdditive( info ))", (const char *)&queryFormat, "!isAdditiveIKScale || IsInfoAdditive( info )") )
            __debugbreak();
        }
        v8 = AnimInfo->animToModel == NULL;
        *((_BYTE *)v70 + v63) = v33;
        if ( !v8 || (AnimInfo->animParent.flags & 0x210) == 0 || v33 )
        {
          XAnimCalcNotetrackWeights<2,XAnimFingerNotetrackLeafFunctor>(AnimInfo, &parentNTWeightsa[2 * v59], &parentAnimWeightsa + 2 * v59, calcLeafFunctor);
          if ( AnimInfo->animToModel || (AnimInfo->animParent.flags & 0x100) == 0 || info->children == children )
          {
            if ( v33 || v58 )
            {
              v36 = v27;
              *(float *)&v36 = *(float *)&v27 + *(v30 - 1);
              v27 = v36;
              v37 = v26;
              *(float *)&v37 = *(float *)&v26 + *v30;
              v26 = v37;
            }
            else
            {
              v34 = v25;
              *(float *)&v34 = *(float *)&v25 + *(v30 - 1);
              v25 = v34;
              v35 = v24;
              *(float *)&v35 = *(float *)&v24 + *v30;
              v24 = v35;
            }
          }
          else
          {
            *((_BYTE *)v69 + v63) = 1;
          }
        }
        v30 += 2;
        ++v63;
        v28 = v59 + 1;
        children = AnimInfo->next;
        ++v59;
        if ( !children )
          goto LABEL_44;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 84, ASSERT_TYPE_ASSERT, "(childIndex < 32)", "%s\n\tXANIM_WEIGHTS_NUM_CHILDREN exceeded, this value can be increased, but doing so increases stack memory.", "childIndex < XANIM_WEIGHTS_NUM_CHILDREN") )
        __debugbreak();
      v28 = 32;
LABEL_44:
      v29 = v58;
    }
    _XMM6 = LODWORD(FLOAT_1_0);
    v39 = (info->animParent.flags & 0x20) == 0;
    if ( *(float *)&v25 <= 0.0 )
    {
      *(float *)&v60 = 0.0;
    }
    else if ( (info->animParent.flags & 0x20) != 0 )
    {
      *(float *)&v60 = FLOAT_1_0;
    }
    else
    {
      *(float *)&v60 = 1.0 / *(float *)&v25;
    }
    if ( *(float *)&v27 <= 0.0 )
    {
      *(float *)&v61 = 0.0;
    }
    else if ( v39 )
    {
      *(float *)&v61 = 1.0 / *(float *)&v27;
    }
    else
    {
      *(float *)&v61 = FLOAT_1_0;
    }
    if ( *(float *)&v24 <= 0.0 )
    {
      *((float *)&v60 + 1) = 0.0;
    }
    else if ( v39 )
    {
      *((float *)&v60 + 1) = 1.0 / *(float *)&v24;
    }
    else
    {
      *((float *)&v60 + 1) = FLOAT_1_0;
    }
    if ( *(float *)&v26 <= 0.0 )
    {
      *((float *)&v61 + 1) = 0.0;
    }
    else if ( v39 )
    {
      *((float *)&v61 + 1) = 1.0 / *(float *)&v26;
    }
    else
    {
      *((float *)&v61 + 1) = FLOAT_1_0;
    }
    v40 = 2i64;
    v41 = v28;
    v42 = 0i64;
    v63 = 2i64;
LABEL_66:
    v43 = 0i64;
    if ( v41 <= 0 )
      goto LABEL_84;
    v44 = v42;
    while ( 1 )
    {
      v45 = *(float *)((char *)parentNTWeightsa + v44);
      v46 = *(float *)((char *)&parentAnimWeightsa + v44);
      if ( *((_BYTE *)v69 + v43) )
      {
        *(float *)((char *)&v62 + v42) = (float)((float)(1.0 - v46) * *(float *)((char *)&v62 + v42)) + (float)(v46 * v45);
        goto LABEL_76;
      }
      if ( *((_BYTE *)v70 + v43) || v29 )
      {
        v49 = v46 * *(float *)((char *)&v61 + v42);
        *(float *)((char *)&v64 + v42) = (float)((float)(1.0 - v45) * v49) + *(float *)((char *)&v64 + v42);
        if ( !v29 )
          goto LABEL_76;
        v48 = v49 * info->state.weight;
      }
      else
      {
        v47 = v46 * *(float *)((char *)&v60 + v42);
        v48 = v47 * info->state.weight;
        *(float *)((char *)&v62 + v42) = (float)(v47 * v45) + *(float *)((char *)&v62 + v42);
      }
      parentAnimWeights[v42 / 4] = v48 + parentAnimWeights[v42 / 4];
LABEL_76:
      if ( (*(_DWORD *)((_BYTE *)&v62 + v42) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 164, ASSERT_TYPE_ASSERT, "(!IS_NAN( accumNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( accumNTWeights[notetrackType] )") )
        __debugbreak();
      if ( (*(_DWORD *)((_BYTE *)&v64 + v42) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 165, ASSERT_TYPE_ASSERT, "(!IS_NAN( additiveAccumInvNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( additiveAccumInvNTWeights[notetrackType] )") )
        __debugbreak();
      v29 = v58;
      ++v43;
      v44 += 8i64;
      if ( v43 >= v41 )
      {
        v40 = v63;
LABEL_84:
        v29 = v58;
        v42 += 4i64;
        v63 = --v40;
        if ( !v40 )
        {
          v50 = v65;
          _XMM0 = v58;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm6, xmm1, xmm2
          }
          v54 = (float)((float)(1.0 - *(float *)&v64) * *(float *)&_XMM3) + *v65;
          __asm { vpcmpeqd xmm3, xmm0, xmm2 }
          v56 = 1.0 - *((float *)&v64 + 1);
          *v65 = v54;
          __asm { vblendvps xmm2, xmm6, xmm1, xmm3 }
          v50[1] = (float)(v56 * *(float *)&_XMM2) + v50[1];
          return;
        }
        goto LABEL_66;
      }
    }
  }
  parts = info->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19151, ASSERT_TYPE_ASSERT, "(info->parts)", (const char *)&queryFormat, "info->parts") )
  {
    __debugbreak();
    parts = info->parts;
  }
  fingerPoseType = parts->fingerPoseType;
  if ( fingerPoseType )
  {
    v15 = 0;
    v16 = fingerPoseType;
    do
    {
      parentAnimWeights[v15] = info->state.weight;
      if ( _bittest(&v16, v15) )
      {
        if ( v15 )
        {
          xanim_finger_pose_in_start_right = scr_const.xanim_finger_pose_in_start_right;
          xanim_finger_pose_in_end_right = scr_const.xanim_finger_pose_in_end_right;
          xanim_finger_pose_out_start_right = scr_const.xanim_finger_pose_out_start_right;
          xanim_finger_pose_out_end_right = scr_const.xanim_finger_pose_out_end_right;
        }
        else
        {
          xanim_finger_pose_in_start_right = scr_const.xanim_finger_pose_in_start_left;
          xanim_finger_pose_in_end_right = scr_const.xanim_finger_pose_in_end_left;
          xanim_finger_pose_out_start_right = scr_const.xanim_finger_pose_out_start_left;
          xanim_finger_pose_out_end_right = scr_const.xanim_finger_pose_out_end_left;
        }
        v21 = XAnimCalcNotetrackWeight(info, xanim_finger_pose_in_start_right, xanim_finger_pose_in_end_right, xanim_finger_pose_out_start_right, xanim_finger_pose_out_end_right);
        parentNTWeights[v15] = *(float *)&v21;
      }
      ++v15;
    }
    while ( v15 < 2u );
  }
}

/*
==============
XAnimCalcNotetrackWeights<2,AIAnim_XAnimFingerNotetrackLeafFunctor>
==============
*/
void XAnimCalcNotetrackWeights<2,AIAnim_XAnimFingerNotetrackLeafFunctor>(const XAnimInfo *info, float *parentNTWeights, float *parentAnimWeights, AIAnim_XAnimFingerNotetrackLeafFunctor calcLeafFunctor)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  bool v8; 
  XAnimParts *parts; 
  unsigned __int8 ikType; 
  unsigned __int8 i; 
  scr_string_t xanim_ik_in_start_right_hand; 
  scr_string_t xanim_ik_in_end_right_hand; 
  scr_string_t xanim_ik_out_start_right_hand; 
  scr_string_t xanim_ik_out_end_right_hand; 
  double v20; 
  int v21; 
  unsigned __int16 children; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  int v27; 
  bool v28; 
  float *v29; 
  XAnimInfo *AnimInfo; 
  unsigned int flags; 
  char v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  bool v38; 
  __int64 v39; 
  __int64 v40; 
  unsigned __int64 v41; 
  __int64 v42; 
  unsigned __int64 v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float *v49; 
  float v53; 
  float v55; 
  bool v57; 
  int v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  float *v64; 
  float parentAnimWeightsa; 
  char v66; 
  float parentNTWeightsa[64]; 
  __int64 v68[4]; 
  __int64 v69[4]; 
  __int128 v70; 
  __int128 v71; 
  __int128 v72; 
  __int128 v73; 

  v8 = info->animToModel == NULL;
  v64 = parentNTWeights;
  if ( v8 )
  {
    v73 = v4;
    v72 = v5;
    v71 = v6;
    v70 = v7;
    memset_0(parentNTWeightsa, 0, sizeof(parentNTWeightsa));
    memset_0(&parentAnimWeightsa, 0, 0x100ui64);
    memset(v68, 0, sizeof(v68));
    memset(v69, 0, sizeof(v69));
    v59 = 0i64;
    v60 = 0i64;
    v61 = 0i64;
    v63 = 0i64;
    v21 = IsInfoAdditive(info);
    children = info->children;
    v23 = 0u;
    v24 = 0u;
    v25 = 0u;
    v26 = 0u;
    v27 = 0;
    v58 = 0;
    v28 = v21 != 0;
    v57 = v21 != 0;
    if ( children )
    {
      v29 = (float *)&v66;
      v62 = 0i64;
      while ( v27 < 32 )
      {
        AnimInfo = GetAnimInfo(children);
        if ( !AnimInfo )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 92, ASSERT_TYPE_ASSERT, "(childInfo)", (const char *)&queryFormat, "childInfo") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 588, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
            __debugbreak();
        }
        if ( AnimInfo->animToModel || (flags = AnimInfo->animParent.flags, (flags & 0x4000) == 0) )
        {
          v32 = 0;
        }
        else
        {
          v32 = 1;
          if ( (flags & 0x210) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 590, ASSERT_TYPE_ASSERT, "(!isAdditiveIKScale || IsInfoAdditive( info ))", (const char *)&queryFormat, "!isAdditiveIKScale || IsInfoAdditive( info )") )
            __debugbreak();
        }
        v8 = AnimInfo->animToModel == NULL;
        *((_BYTE *)v69 + v62) = v32;
        if ( !v8 || (AnimInfo->animParent.flags & 0x210) == 0 || v32 )
        {
          XAnimCalcNotetrackWeights<2,AIAnim_XAnimFingerNotetrackLeafFunctor>(AnimInfo, &parentNTWeightsa[2 * v58], &parentAnimWeightsa + 2 * v58, calcLeafFunctor);
          if ( AnimInfo->animToModel || (AnimInfo->animParent.flags & 0x100) == 0 || info->children == children )
          {
            if ( v32 || v57 )
            {
              v35 = v26;
              *(float *)&v35 = *(float *)&v26 + *(v29 - 1);
              v26 = v35;
              v36 = v25;
              *(float *)&v36 = *(float *)&v25 + *v29;
              v25 = v36;
            }
            else
            {
              v33 = v24;
              *(float *)&v33 = *(float *)&v24 + *(v29 - 1);
              v24 = v33;
              v34 = v23;
              *(float *)&v34 = *(float *)&v23 + *v29;
              v23 = v34;
            }
          }
          else
          {
            *((_BYTE *)v68 + v62) = 1;
          }
        }
        v29 += 2;
        ++v62;
        v27 = v58 + 1;
        children = AnimInfo->next;
        ++v58;
        if ( !children )
          goto LABEL_45;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 84, ASSERT_TYPE_ASSERT, "(childIndex < 32)", "%s\n\tXANIM_WEIGHTS_NUM_CHILDREN exceeded, this value can be increased, but doing so increases stack memory.", "childIndex < XANIM_WEIGHTS_NUM_CHILDREN") )
        __debugbreak();
      v27 = 32;
LABEL_45:
      v28 = v57;
    }
    _XMM6 = LODWORD(FLOAT_1_0);
    v38 = (info->animParent.flags & 0x20) == 0;
    if ( *(float *)&v24 <= 0.0 )
    {
      *(float *)&v59 = 0.0;
    }
    else if ( (info->animParent.flags & 0x20) != 0 )
    {
      *(float *)&v59 = FLOAT_1_0;
    }
    else
    {
      *(float *)&v59 = 1.0 / *(float *)&v24;
    }
    if ( *(float *)&v26 <= 0.0 )
    {
      *(float *)&v60 = 0.0;
    }
    else if ( v38 )
    {
      *(float *)&v60 = 1.0 / *(float *)&v26;
    }
    else
    {
      *(float *)&v60 = FLOAT_1_0;
    }
    if ( *(float *)&v23 <= 0.0 )
    {
      *((float *)&v59 + 1) = 0.0;
    }
    else if ( v38 )
    {
      *((float *)&v59 + 1) = 1.0 / *(float *)&v23;
    }
    else
    {
      *((float *)&v59 + 1) = FLOAT_1_0;
    }
    if ( *(float *)&v25 <= 0.0 )
    {
      *((float *)&v60 + 1) = 0.0;
    }
    else if ( v38 )
    {
      *((float *)&v60 + 1) = 1.0 / *(float *)&v25;
    }
    else
    {
      *((float *)&v60 + 1) = FLOAT_1_0;
    }
    v39 = 2i64;
    v40 = v27;
    v41 = 0i64;
    v62 = 2i64;
LABEL_67:
    v42 = 0i64;
    if ( v40 <= 0 )
      goto LABEL_85;
    v43 = v41;
    while ( 1 )
    {
      v44 = *(float *)((char *)parentNTWeightsa + v43);
      v45 = *(float *)((char *)&parentAnimWeightsa + v43);
      if ( *((_BYTE *)v68 + v42) )
      {
        *(float *)((char *)&v61 + v41) = (float)((float)(1.0 - v45) * *(float *)((char *)&v61 + v41)) + (float)(v45 * v44);
        goto LABEL_77;
      }
      if ( *((_BYTE *)v69 + v42) || v28 )
      {
        v48 = v45 * *(float *)((char *)&v60 + v41);
        *(float *)((char *)&v63 + v41) = (float)((float)(1.0 - v44) * v48) + *(float *)((char *)&v63 + v41);
        if ( !v28 )
          goto LABEL_77;
        v47 = v48 * info->state.weight;
      }
      else
      {
        v46 = v45 * *(float *)((char *)&v59 + v41);
        v47 = v46 * info->state.weight;
        *(float *)((char *)&v61 + v41) = (float)(v46 * v44) + *(float *)((char *)&v61 + v41);
      }
      parentAnimWeights[v41 / 4] = v47 + parentAnimWeights[v41 / 4];
LABEL_77:
      if ( (*(_DWORD *)((_BYTE *)&v61 + v41) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 164, ASSERT_TYPE_ASSERT, "(!IS_NAN( accumNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( accumNTWeights[notetrackType] )") )
        __debugbreak();
      if ( (*(_DWORD *)((_BYTE *)&v63 + v41) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 165, ASSERT_TYPE_ASSERT, "(!IS_NAN( additiveAccumInvNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( additiveAccumInvNTWeights[notetrackType] )") )
        __debugbreak();
      v28 = v57;
      ++v42;
      v43 += 8i64;
      if ( v42 >= v40 )
      {
        v39 = v62;
LABEL_85:
        v28 = v57;
        v41 += 4i64;
        v62 = --v39;
        if ( !v39 )
        {
          v49 = v64;
          _XMM0 = v57;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm6, xmm1, xmm2
          }
          v53 = (float)((float)(1.0 - *(float *)&v63) * *(float *)&_XMM3) + *v64;
          __asm { vpcmpeqd xmm3, xmm0, xmm2 }
          v55 = 1.0 - *((float *)&v63 + 1);
          *v64 = v53;
          __asm { vblendvps xmm2, xmm6, xmm1, xmm3 }
          v49[1] = (float)(v55 * *(float *)&_XMM2) + v49[1];
          return;
        }
        goto LABEL_67;
      }
    }
  }
  parts = info->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_replication.cpp", 475, ASSERT_TYPE_ASSERT, "(info->parts)", (const char *)&queryFormat, "info->parts") )
  {
    __debugbreak();
    parts = info->parts;
  }
  ikType = parts->ikType;
  if ( ikType )
  {
    for ( i = 0; i < 2u; ++i )
    {
      parentAnimWeights[i] = info->state.weight;
      if ( i )
      {
        if ( (ikType & 2) != 0 )
        {
          xanim_ik_in_start_right_hand = scr_const.xanim_ik_in_start_right_hand;
          xanim_ik_in_end_right_hand = scr_const.xanim_ik_in_end_right_hand;
          xanim_ik_out_start_right_hand = scr_const.xanim_ik_out_start_right_hand;
          xanim_ik_out_end_right_hand = scr_const.xanim_ik_out_end_right_hand;
          goto LABEL_12;
        }
      }
      else if ( (ikType & 1) != 0 )
      {
        xanim_ik_in_start_right_hand = scr_const.xanim_ik_in_start_left_hand;
        xanim_ik_in_end_right_hand = scr_const.xanim_ik_in_end_left_hand;
        xanim_ik_out_start_right_hand = scr_const.xanim_ik_out_start_left_hand;
        xanim_ik_out_end_right_hand = scr_const.xanim_ik_out_end_left_hand;
LABEL_12:
        v20 = XAnimCalcNotetrackWeight(info, xanim_ik_in_start_right_hand, xanim_ik_in_end_right_hand, xanim_ik_out_start_right_hand, xanim_ik_out_end_right_hand);
        parentNTWeights[i] = *(float *)&v20;
      }
    }
  }
}

/*
==============
XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>
==============
*/
void XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>(const XAnimInfo *info, float *parentNTWeights, float *parentAnimWeights, XAnimIKNotetrackLeafFunctor *calcLeafFunctor)
{
  __int128 v4; 
  XAnimParts *parts; 
  unsigned __int8 ikType; 
  const XAnimIKSettings *settingsArray; 
  int v11; 
  unsigned __int8 v12; 
  scr_string_t *p_blendOutStartNotetrack; 
  double v14; 
  float *v15; 
  int v16; 
  unsigned __int16 children; 
  bool v18; 
  int v19; 
  __m128 v20; 
  __m128 v21; 
  XAnimInfo *AnimInfo; 
  unsigned int flags; 
  char v24; 
  bool v25; 
  __int64 v26; 
  bool v28; 
  __int64 v29; 
  unsigned __int64 v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v49; 
  bool v51; 
  __int64 v52; 
  __m128 *v53; 
  __int64 v54; 
  XAnimIKNotetrackLeafFunctor v57; 
  __m128 v58; 
  __m128 v59; 
  __int64 v60[2]; 
  __int64 v61; 
  __int64 v62; 
  float v63[128]; 
  float v64[128]; 
  __int64 v65[4]; 
  __int64 v66[4]; 
  __int128 v67; 

  if ( !info->animToModel )
  {
    memset_0(v64, 0, sizeof(v64));
    memset_0(v63, 0, sizeof(v63));
    v58 = 0ui64;
    v59 = 0ui64;
    v60[0] = 0i64;
    v60[1] = 0i64;
    v61 = 0i64;
    v62 = 0i64;
    memset(v65, 0, sizeof(v65));
    memset(v66, 0, sizeof(v66));
    v16 = IsInfoAdditive(info);
    children = info->children;
    v18 = v16 != 0;
    v51 = v16 != 0;
    v19 = 0;
    if ( children )
    {
      v20 = v58;
      v67 = v4;
      v21 = v59;
      v53 = (__m128 *)v63;
      v52 = 0i64;
      while ( v19 < 32 )
      {
        AnimInfo = GetAnimInfo(children);
        if ( !AnimInfo )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 92, ASSERT_TYPE_ASSERT, "(childInfo)", (const char *)&queryFormat, "childInfo") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 588, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
            __debugbreak();
        }
        if ( AnimInfo->animToModel || (flags = AnimInfo->animParent.flags, (flags & 0x4000) == 0) )
        {
          v24 = 0;
        }
        else
        {
          v24 = 1;
          if ( (flags & 0x210) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 590, ASSERT_TYPE_ASSERT, "(!isAdditiveIKScale || IsInfoAdditive( info ))", (const char *)&queryFormat, "!isAdditiveIKScale || IsInfoAdditive( info )") )
            __debugbreak();
        }
        v25 = AnimInfo->animToModel == NULL;
        v26 = v52;
        *((_BYTE *)v66 + v52) = v24;
        if ( !v25 || (AnimInfo->animParent.flags & 0x210) == 0 || v24 )
        {
          v57 = *calcLeafFunctor;
          XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>(AnimInfo, &v64[4 * v19], &v63[4 * v19], &v57);
          if ( AnimInfo->animToModel || (AnimInfo->animParent.flags & 0x100) == 0 || info->children == children )
          {
            if ( v24 || v51 )
            {
              v21 = _mm128_add_ps(v21, *v53);
              v59 = v21;
            }
            else
            {
              v20 = _mm128_add_ps(v20, *v53);
              v58 = v20;
            }
            v26 = v52;
          }
          else
          {
            v26 = v52;
            *((_BYTE *)v65 + v52) = 1;
          }
        }
        ++v53;
        children = AnimInfo->next;
        ++v19;
        v52 = v26 + 1;
        if ( !children )
          goto LABEL_50;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 84, ASSERT_TYPE_ASSERT, "(childIndex < 32)", "%s\n\tXANIM_WEIGHTS_NUM_CHILDREN exceeded, this value can be increased, but doing so increases stack memory.", "childIndex < XANIM_WEIGHTS_NUM_CHILDREN") )
        __debugbreak();
      v19 = 32;
LABEL_50:
      v18 = v51;
    }
    _XMM6 = LODWORD(FLOAT_1_0);
    v28 = (info->animParent.flags & 0x20) == 0;
    if ( v58.m128_f32[0] <= 0.0 )
    {
      v58.m128_f32[0] = 0.0;
    }
    else if ( (info->animParent.flags & 0x20) != 0 )
    {
      v58.m128_f32[0] = FLOAT_1_0;
    }
    else
    {
      v58.m128_f32[0] = 1.0 / v58.m128_f32[0];
    }
    if ( v58.m128_f32[1] <= 0.0 )
    {
      v58.m128_f32[1] = 0.0;
    }
    else if ( v28 )
    {
      v58.m128_f32[1] = 1.0 / v58.m128_f32[1];
    }
    else
    {
      v58.m128_f32[1] = FLOAT_1_0;
    }
    if ( v58.m128_f32[2] <= 0.0 )
    {
      v58.m128_f32[2] = 0.0;
    }
    else if ( v28 )
    {
      v58.m128_f32[2] = 1.0 / v58.m128_f32[2];
    }
    else
    {
      v58.m128_f32[2] = FLOAT_1_0;
    }
    if ( v58.m128_f32[3] <= 0.0 )
    {
      v58.m128_f32[3] = 0.0;
    }
    else if ( v28 )
    {
      v58.m128_f32[3] = 1.0 / v58.m128_f32[3];
    }
    else
    {
      v58.m128_f32[3] = FLOAT_1_0;
    }
    if ( v59.m128_f32[0] <= 0.0 )
    {
      v59.m128_f32[0] = 0.0;
    }
    else if ( v28 )
    {
      v59.m128_f32[0] = 1.0 / v59.m128_f32[0];
    }
    else
    {
      v59.m128_f32[0] = FLOAT_1_0;
    }
    if ( v59.m128_f32[1] <= 0.0 )
    {
      v59.m128_f32[1] = 0.0;
    }
    else if ( v28 )
    {
      v59.m128_f32[1] = 1.0 / v59.m128_f32[1];
    }
    else
    {
      v59.m128_f32[1] = FLOAT_1_0;
    }
    if ( v59.m128_f32[2] <= 0.0 )
    {
      v59.m128_f32[2] = 0.0;
    }
    else if ( v28 )
    {
      v59.m128_f32[2] = 1.0 / v59.m128_f32[2];
    }
    else
    {
      v59.m128_f32[2] = FLOAT_1_0;
    }
    if ( v59.m128_f32[3] <= 0.0 )
    {
      v59.m128_f32[3] = 0.0;
    }
    else if ( v28 )
    {
      v59.m128_f32[3] = 1.0 / v59.m128_f32[3];
    }
    else
    {
      v59.m128_f32[3] = FLOAT_1_0;
    }
    v29 = 4i64;
    v54 = 4i64;
    v30 = 0i64;
LABEL_92:
    v31 = 0i64;
    if ( v19 <= 0i64 )
      goto LABEL_110;
    v32 = v30;
    while ( 1 )
    {
      v33 = *(float *)((char *)v64 + v32);
      v34 = *(float *)((char *)v63 + v32);
      if ( *((_BYTE *)v65 + v31) )
      {
        *(float *)((char *)v60 + v30) = (float)((float)(1.0 - v34) * *(float *)((char *)v60 + v30)) + (float)(v34 * v33);
        goto LABEL_102;
      }
      if ( *((_BYTE *)v66 + v31) || v18 )
      {
        v37 = v34 * v59.m128_f32[v30 / 4];
        *(float *)((char *)&v61 + v30) = (float)((float)(1.0 - v33) * v37) + *(float *)((char *)&v61 + v30);
        if ( !v18 )
          goto LABEL_102;
        v36 = v37 * info->state.weight;
      }
      else
      {
        v35 = v34 * v58.m128_f32[v30 / 4];
        v36 = v35 * info->state.weight;
        *(float *)((char *)v60 + v30) = (float)(v35 * v33) + *(float *)((char *)v60 + v30);
      }
      parentAnimWeights[v30 / 4] = v36 + parentAnimWeights[v30 / 4];
LABEL_102:
      if ( (*(_DWORD *)((_BYTE *)v60 + v30) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 164, ASSERT_TYPE_ASSERT, "(!IS_NAN( accumNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( accumNTWeights[notetrackType] )") )
        __debugbreak();
      if ( (*(_DWORD *)((_BYTE *)&v61 + v30) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 165, ASSERT_TYPE_ASSERT, "(!IS_NAN( additiveAccumInvNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( additiveAccumInvNTWeights[notetrackType] )") )
        __debugbreak();
      v18 = v51;
      ++v31;
      v32 += 16i64;
      if ( v31 >= v19 )
      {
        v29 = v54;
LABEL_110:
        v18 = v51;
        v30 += 4i64;
        v54 = --v29;
        if ( !v29 )
        {
          _XMM0 = v51;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm6, xmm1, xmm2
          }
          *parentNTWeights = (float)((float)(1.0 - *(float *)&v61) * *(float *)&_XMM3) + *parentNTWeights;
          _XMM0 = v51;
          __asm
          {
            vpcmpeqd xmm3, xmm0, xmm2
            vblendvps xmm2, xmm6, xmm1, xmm3
          }
          parentNTWeights[1] = (float)((float)(1.0 - *((float *)&v61 + 1)) * *(float *)&_XMM2) + parentNTWeights[1];
          _XMM0 = v51;
          __asm
          {
            vpcmpeqd xmm3, xmm0, xmm2
            vblendvps xmm2, xmm6, xmm1, xmm3
          }
          _XMM0 = v51;
          __asm { vpcmpeqd xmm3, xmm0, xmm2 }
          v49 = 1.0 - *((float *)&v62 + 1);
          parentNTWeights[2] = (float)((float)(1.0 - *(float *)&v62) * *(float *)&_XMM2) + parentNTWeights[2];
          __asm { vblendvps xmm2, xmm6, xmm1, xmm3 }
          parentNTWeights[3] = (float)(v49 * *(float *)&_XMM2) + parentNTWeights[3];
          return;
        }
        goto LABEL_92;
      }
    }
  }
  if ( !calcLeafFunctor->m_ikData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 938, ASSERT_TYPE_ASSERT, "(m_ikData)", (const char *)&queryFormat, "m_ikData") )
    __debugbreak();
  if ( !calcLeafFunctor->m_dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 939, ASSERT_TYPE_ASSERT, "(m_dObjData)", (const char *)&queryFormat, "m_dObjData") )
    __debugbreak();
  parts = info->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 943, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  ikType = parts->ikType;
  settingsArray = calcLeafFunctor->m_ikData->settingsArray;
  if ( XAnimIKCalcAnimWeights(info, calcLeafFunctor->m_ikData, calcLeafFunctor->m_dObjData, parentAnimWeights) && ikType )
  {
    v11 = ikType;
    v12 = 0;
    p_blendOutStartNotetrack = &settingsArray->blendOutStartNotetrack;
    do
    {
      if ( _bittest(&v11, v12) )
      {
        v14 = XAnimCalcNotetrackWeight(info, (scr_string_t)*((_DWORD *)p_blendOutStartNotetrack - 2), (scr_string_t)*((_DWORD *)p_blendOutStartNotetrack - 1), *p_blendOutStartNotetrack, (scr_string_t)*((_DWORD *)p_blendOutStartNotetrack + 1));
        v15 = parentNTWeights;
        *parentNTWeights = *(float *)&v14;
      }
      else
      {
        v15 = parentNTWeights;
      }
      ++v12;
      p_blendOutStartNotetrack += 24;
      parentNTWeights = v15 + 1;
    }
    while ( v12 < 4u );
  }
}

