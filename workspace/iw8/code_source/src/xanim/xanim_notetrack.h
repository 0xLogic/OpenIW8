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
  XAnimParts *parts; 
  unsigned __int8 fingerPoseType; 
  unsigned __int8 v17; 
  int v18; 
  scr_string_t xanim_finger_pose_in_start_right; 
  scr_string_t xanim_finger_pose_in_end_right; 
  scr_string_t xanim_finger_pose_out_start_right; 
  scr_string_t xanim_finger_pose_out_end_right; 
  int v25; 
  unsigned __int16 children; 
  int v31; 
  bool v32; 
  char *v33; 
  XAnimInfo *AnimInfo; 
  unsigned int flags; 
  char v36; 
  bool v38; 
  __int64 v48; 
  __int64 v49; 
  __int64 v51; 
  bool v89; 
  int v90; 
  int v91; 
  int v92; 
  __int64 v93; 
  __int64 v100; 
  __int64 v107; 
  __int64 v108; 
  __int64 v109; 
  float *v110; 
  float parentAnimWeightsa; 
  char v112; 
  float parentNTWeightsa[64]; 
  __int64 v114[4]; 
  __int64 v115[4]; 

  v38 = info->animToModel == NULL;
  _R14 = parentAnimWeights;
  v110 = parentNTWeights;
  _R15 = parentNTWeights;
  if ( v38 )
  {
    __asm
    {
      vmovaps [rsp+350h+var_50], xmm6
      vmovaps [rsp+350h+var_60], xmm7
      vmovaps [rsp+350h+var_70], xmm8
      vmovaps [rsp+350h+var_80], xmm9
      vmovaps [rsp+350h+var_90], xmm10
    }
    memset_0(parentNTWeightsa, 0, sizeof(parentNTWeightsa));
    memset_0(&parentAnimWeightsa, 0, 0x100ui64);
    _ESI = 0;
    memset(v114, 0, sizeof(v114));
    memset(v115, 0, sizeof(v115));
    v93 = 0i64;
    v100 = 0i64;
    v107 = 0i64;
    v109 = 0i64;
    v25 = IsInfoAdditive(info);
    children = info->children;
    __asm
    {
      vmovss  xmm9, dword ptr [rsp+350h+var_318+4]
      vmovss  xmm7, dword ptr [rsp+350h+var_318]
      vmovss  xmm10, dword ptr [rsp+350h+var_310+4]
      vmovss  xmm8, dword ptr [rsp+350h+var_310]
    }
    v31 = 0;
    v90 = 0;
    v32 = v25 != 0;
    v89 = v25 != 0;
    if ( children )
    {
      v33 = &v112;
      v108 = 0i64;
      while ( v31 < 32 )
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
          v36 = 0;
        }
        else
        {
          v36 = 1;
          if ( (flags & 0x210) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 590, ASSERT_TYPE_ASSERT, "(!isAdditiveIKScale || IsInfoAdditive( info ))", (const char *)&queryFormat, "!isAdditiveIKScale || IsInfoAdditive( info )") )
            __debugbreak();
        }
        v38 = AnimInfo->animToModel == NULL;
        *((_BYTE *)v115 + v108) = v36;
        if ( !v38 || (AnimInfo->animParent.flags & 0x210) == 0 || v36 )
        {
          XAnimCalcNotetrackWeights<2,XAnimFingerNotetrackLeafFunctor>(AnimInfo, &parentNTWeightsa[2 * v90], &parentAnimWeightsa + 2 * v90, calcLeafFunctor);
          if ( AnimInfo->animToModel || (AnimInfo->animParent.flags & 0x100) == 0 || info->children == children )
          {
            if ( v36 || v89 )
            {
              __asm
              {
                vaddss  xmm8, xmm8, dword ptr [r15-4]
                vaddss  xmm10, xmm10, dword ptr [r15]
              }
            }
            else
            {
              __asm
              {
                vaddss  xmm7, xmm7, dword ptr [r15-4]
                vaddss  xmm9, xmm9, dword ptr [r15]
              }
            }
          }
          else
          {
            *((_BYTE *)v114 + v108) = 1;
          }
        }
        v33 += 8;
        ++v108;
        v31 = v90 + 1;
        children = AnimInfo->next;
        ++v90;
        if ( !children )
          goto LABEL_44;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 84, ASSERT_TYPE_ASSERT, "(childIndex < 32)", "%s\n\tXANIM_WEIGHTS_NUM_CHILDREN exceeded, this value can be increased, but doing so increases stack memory.", "childIndex < XANIM_WEIGHTS_NUM_CHILDREN") )
        __debugbreak();
      v31 = 32;
LABEL_44:
      v32 = v89;
      _ESI = 0;
    }
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    v38 = (info->animParent.flags & 0x20) != 0;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm7, xmm1
    }
    if ( (info->animParent.flags & 0x20) != 0 )
    {
      __asm { vmovss  dword ptr [rsp+350h+var_318], xmm1 }
    }
    else
    {
      v38 = (info->animParent.flags & 0x20) != 0;
      if ( (info->animParent.flags & 0x20) != 0 )
      {
        __asm { vmovss  dword ptr [rsp+350h+var_318], xmm6 }
      }
      else
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm7
          vmovss  dword ptr [rsp+350h+var_318], xmm0
        }
      }
    }
    __asm
    {
      vcomiss xmm8, xmm1
      vmovaps xmm7, [rsp+350h+var_60]
    }
    if ( v38 )
    {
      __asm { vmovss  dword ptr [rsp+350h+var_310], xmm1 }
    }
    else
    {
      v38 = (info->animParent.flags & 0x20) != 0;
      if ( (info->animParent.flags & 0x20) != 0 )
      {
        __asm { vmovss  dword ptr [rsp+350h+var_310], xmm6 }
      }
      else
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm8
          vmovss  dword ptr [rsp+350h+var_310], xmm0
        }
      }
    }
    __asm
    {
      vcomiss xmm9, xmm1
      vmovaps xmm8, [rsp+350h+var_70]
    }
    if ( v38 )
    {
      __asm { vmovss  dword ptr [rsp+350h+var_318+4], xmm1 }
    }
    else
    {
      v38 = (info->animParent.flags & 0x20) != 0;
      if ( (info->animParent.flags & 0x20) != 0 )
      {
        __asm { vmovss  dword ptr [rsp+350h+var_318+4], xmm6 }
      }
      else
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm9
          vmovss  dword ptr [rsp+350h+var_318+4], xmm0
        }
      }
    }
    __asm
    {
      vcomiss xmm10, xmm1
      vmovaps xmm9, [rsp+350h+var_80]
    }
    if ( v38 )
    {
      __asm { vmovss  dword ptr [rsp+350h+var_310+4], xmm1 }
    }
    else if ( (info->animParent.flags & 0x20) != 0 )
    {
      __asm { vmovss  dword ptr [rsp+350h+var_310+4], xmm6 }
    }
    else
    {
      __asm
      {
        vdivss  xmm0, xmm6, xmm10
        vmovss  dword ptr [rsp+350h+var_310+4], xmm0
      }
    }
    __asm { vmovaps xmm10, [rsp+350h+var_90] }
    v48 = 2i64;
    v49 = v31;
    _RBX = 0i64;
    v108 = 2i64;
LABEL_66:
    v51 = 0i64;
    if ( v49 <= 0 )
      goto LABEL_84;
    _RSI = _RBX;
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm3, [rbp+rsi+250h+parentNTWeights]
        vmovss  xmm1, [rsp+rsi+350h+parentAnimWeights]
      }
      if ( *((_BYTE *)v114 + v51) )
      {
        __asm
        {
          vsubss  xmm0, xmm6, xmm1
          vmulss  xmm2, xmm0, dword ptr [rsp+rbx+350h+var_308]
          vmulss  xmm1, xmm1, xmm3
          vaddss  xmm2, xmm2, xmm1
          vmovss  dword ptr [rsp+rbx+350h+var_308], xmm2
        }
        goto LABEL_76;
      }
      if ( *((_BYTE *)v115 + v51) || v32 )
      {
        __asm
        {
          vmulss  xmm4, xmm1, dword ptr [rsp+rbx+350h+var_310]
          vsubss  xmm0, xmm6, xmm3
          vmulss  xmm1, xmm0, xmm4
          vaddss  xmm2, xmm1, dword ptr [rsp+rbx+350h+var_2F8]
          vmovss  dword ptr [rsp+rbx+350h+var_2F8], xmm2
        }
        if ( !v32 )
          goto LABEL_76;
        __asm { vmulss  xmm0, xmm4, dword ptr [r13+3Ch] }
      }
      else
      {
        __asm
        {
          vmulss  xmm2, xmm1, dword ptr [rsp+rbx+350h+var_318]
          vmulss  xmm0, xmm2, xmm3
          vaddss  xmm1, xmm0, dword ptr [rsp+rbx+350h+var_308]
          vmulss  xmm0, xmm2, dword ptr [r13+3Ch]
          vmovss  dword ptr [rsp+rbx+350h+var_308], xmm1
        }
      }
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rbx+r14]
        vmovss  dword ptr [rbx+r14], xmm1
      }
LABEL_76:
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+rbx+350h+var_308]
        vmovss  [rsp+350h+var_31C], xmm0
      }
      if ( (v91 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 164, ASSERT_TYPE_ASSERT, "(!IS_NAN( accumNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( accumNTWeights[notetrackType] )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+rbx+350h+var_2F8]
        vmovss  [rsp+350h+var_31C], xmm0
      }
      if ( (v92 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 165, ASSERT_TYPE_ASSERT, "(!IS_NAN( additiveAccumInvNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( additiveAccumInvNTWeights[notetrackType] )") )
        __debugbreak();
      v32 = v89;
      ++v51;
      _RSI += 8i64;
      if ( v51 >= v49 )
      {
        v48 = v108;
        _ESI = 0;
LABEL_84:
        v32 = v89;
        _RBX += 4i64;
        v108 = --v48;
        if ( !v48 )
        {
          _ECX = v89;
          _RDX = v110;
          __asm
          {
            vmovd   xmm0, ecx
            vmovd   xmm1, esi
            vpcmpeqd xmm2, xmm0, xmm1
            vsubss  xmm0, xmm6, dword ptr [rsp+350h+var_2F8]
            vmovss  xmm1, dword ptr [rsp+350h+var_308]
            vblendvps xmm3, xmm6, xmm1, xmm2
            vmulss  xmm0, xmm0, xmm3
            vaddss  xmm1, xmm0, dword ptr [rdx]
            vmovd   xmm0, ecx
            vmovd   xmm2, esi
            vpcmpeqd xmm3, xmm0, xmm2
            vsubss  xmm0, xmm6, dword ptr [rsp+350h+var_2F8+4]
            vmovss  dword ptr [rdx], xmm1
            vmovss  xmm1, dword ptr [rsp+350h+var_308+4]
            vblendvps xmm2, xmm6, xmm1, xmm3
            vmovaps xmm6, [rsp+350h+var_50]
            vmulss  xmm0, xmm0, xmm2
            vaddss  xmm1, xmm0, dword ptr [rdx+4]
            vmovss  dword ptr [rdx+4], xmm1
          }
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
    v17 = 0;
    v18 = fingerPoseType;
    do
    {
      _RDI = v17;
      _R14[v17] = info->state.weight;
      if ( _bittest(&v18, v17) )
      {
        if ( v17 )
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
        *(double *)&_XMM0 = XAnimCalcNotetrackWeight(info, xanim_finger_pose_in_start_right, xanim_finger_pose_in_end_right, xanim_finger_pose_out_start_right, xanim_finger_pose_out_end_right);
        __asm { vmovss  dword ptr [r15+rdi*4], xmm0 }
      }
      ++v17;
    }
    while ( v17 < 2u );
  }
}

/*
==============
XAnimCalcNotetrackWeights<2,AIAnim_XAnimFingerNotetrackLeafFunctor>
==============
*/
void XAnimCalcNotetrackWeights<2,AIAnim_XAnimFingerNotetrackLeafFunctor>(const XAnimInfo *info, float *parentNTWeights, float *parentAnimWeights, AIAnim_XAnimFingerNotetrackLeafFunctor calcLeafFunctor)
{
  XAnimParts *parts; 
  unsigned __int8 ikType; 
  unsigned __int8 i; 
  scr_string_t xanim_ik_in_start_right_hand; 
  scr_string_t xanim_ik_in_end_right_hand; 
  scr_string_t xanim_ik_out_start_right_hand; 
  scr_string_t xanim_ik_out_end_right_hand; 
  int v24; 
  unsigned __int16 children; 
  int v30; 
  bool v31; 
  char *v32; 
  XAnimInfo *AnimInfo; 
  unsigned int flags; 
  char v35; 
  bool v37; 
  __int64 v47; 
  __int64 v48; 
  __int64 v50; 
  bool v88; 
  int v89; 
  int v90; 
  int v91; 
  __int64 v92; 
  __int64 v99; 
  __int64 v106; 
  __int64 v107; 
  __int64 v108; 
  float *v109; 
  float parentAnimWeightsa; 
  char v111; 
  float parentNTWeightsa[64]; 
  __int64 v113[4]; 
  __int64 v114[4]; 

  v37 = info->animToModel == NULL;
  _R14 = parentAnimWeights;
  v109 = parentNTWeights;
  _R15 = parentNTWeights;
  if ( v37 )
  {
    __asm
    {
      vmovaps [rsp+350h+var_50], xmm6
      vmovaps [rsp+350h+var_60], xmm7
      vmovaps [rsp+350h+var_70], xmm8
      vmovaps [rsp+350h+var_80], xmm9
      vmovaps [rsp+350h+var_90], xmm10
    }
    memset_0(parentNTWeightsa, 0, sizeof(parentNTWeightsa));
    memset_0(&parentAnimWeightsa, 0, 0x100ui64);
    _ESI = 0;
    memset(v113, 0, sizeof(v113));
    memset(v114, 0, sizeof(v114));
    v92 = 0i64;
    v99 = 0i64;
    v106 = 0i64;
    v108 = 0i64;
    v24 = IsInfoAdditive(info);
    children = info->children;
    __asm
    {
      vmovss  xmm9, dword ptr [rsp+350h+var_318+4]
      vmovss  xmm7, dword ptr [rsp+350h+var_318]
      vmovss  xmm10, dword ptr [rsp+350h+var_310+4]
      vmovss  xmm8, dword ptr [rsp+350h+var_310]
    }
    v30 = 0;
    v89 = 0;
    v31 = v24 != 0;
    v88 = v24 != 0;
    if ( children )
    {
      v32 = &v111;
      v107 = 0i64;
      while ( v30 < 32 )
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
          v35 = 0;
        }
        else
        {
          v35 = 1;
          if ( (flags & 0x210) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 590, ASSERT_TYPE_ASSERT, "(!isAdditiveIKScale || IsInfoAdditive( info ))", (const char *)&queryFormat, "!isAdditiveIKScale || IsInfoAdditive( info )") )
            __debugbreak();
        }
        v37 = AnimInfo->animToModel == NULL;
        *((_BYTE *)v114 + v107) = v35;
        if ( !v37 || (AnimInfo->animParent.flags & 0x210) == 0 || v35 )
        {
          XAnimCalcNotetrackWeights<2,AIAnim_XAnimFingerNotetrackLeafFunctor>(AnimInfo, &parentNTWeightsa[2 * v89], &parentAnimWeightsa + 2 * v89, calcLeafFunctor);
          if ( AnimInfo->animToModel || (AnimInfo->animParent.flags & 0x100) == 0 || info->children == children )
          {
            if ( v35 || v88 )
            {
              __asm
              {
                vaddss  xmm8, xmm8, dword ptr [r15-4]
                vaddss  xmm10, xmm10, dword ptr [r15]
              }
            }
            else
            {
              __asm
              {
                vaddss  xmm7, xmm7, dword ptr [r15-4]
                vaddss  xmm9, xmm9, dword ptr [r15]
              }
            }
          }
          else
          {
            *((_BYTE *)v113 + v107) = 1;
          }
        }
        v32 += 8;
        ++v107;
        v30 = v89 + 1;
        children = AnimInfo->next;
        ++v89;
        if ( !children )
          goto LABEL_45;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 84, ASSERT_TYPE_ASSERT, "(childIndex < 32)", "%s\n\tXANIM_WEIGHTS_NUM_CHILDREN exceeded, this value can be increased, but doing so increases stack memory.", "childIndex < XANIM_WEIGHTS_NUM_CHILDREN") )
        __debugbreak();
      v30 = 32;
LABEL_45:
      v31 = v88;
      _ESI = 0;
    }
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    v37 = (info->animParent.flags & 0x20) != 0;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm7, xmm1
    }
    if ( (info->animParent.flags & 0x20) != 0 )
    {
      __asm { vmovss  dword ptr [rsp+350h+var_318], xmm1 }
    }
    else
    {
      v37 = (info->animParent.flags & 0x20) != 0;
      if ( (info->animParent.flags & 0x20) != 0 )
      {
        __asm { vmovss  dword ptr [rsp+350h+var_318], xmm6 }
      }
      else
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm7
          vmovss  dword ptr [rsp+350h+var_318], xmm0
        }
      }
    }
    __asm
    {
      vcomiss xmm8, xmm1
      vmovaps xmm7, [rsp+350h+var_60]
    }
    if ( v37 )
    {
      __asm { vmovss  dword ptr [rsp+350h+var_310], xmm1 }
    }
    else
    {
      v37 = (info->animParent.flags & 0x20) != 0;
      if ( (info->animParent.flags & 0x20) != 0 )
      {
        __asm { vmovss  dword ptr [rsp+350h+var_310], xmm6 }
      }
      else
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm8
          vmovss  dword ptr [rsp+350h+var_310], xmm0
        }
      }
    }
    __asm
    {
      vcomiss xmm9, xmm1
      vmovaps xmm8, [rsp+350h+var_70]
    }
    if ( v37 )
    {
      __asm { vmovss  dword ptr [rsp+350h+var_318+4], xmm1 }
    }
    else
    {
      v37 = (info->animParent.flags & 0x20) != 0;
      if ( (info->animParent.flags & 0x20) != 0 )
      {
        __asm { vmovss  dword ptr [rsp+350h+var_318+4], xmm6 }
      }
      else
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm9
          vmovss  dword ptr [rsp+350h+var_318+4], xmm0
        }
      }
    }
    __asm
    {
      vcomiss xmm10, xmm1
      vmovaps xmm9, [rsp+350h+var_80]
    }
    if ( v37 )
    {
      __asm { vmovss  dword ptr [rsp+350h+var_310+4], xmm1 }
    }
    else if ( (info->animParent.flags & 0x20) != 0 )
    {
      __asm { vmovss  dword ptr [rsp+350h+var_310+4], xmm6 }
    }
    else
    {
      __asm
      {
        vdivss  xmm0, xmm6, xmm10
        vmovss  dword ptr [rsp+350h+var_310+4], xmm0
      }
    }
    __asm { vmovaps xmm10, [rsp+350h+var_90] }
    v47 = 2i64;
    v48 = v30;
    _RBX = 0i64;
    v107 = 2i64;
LABEL_67:
    v50 = 0i64;
    if ( v48 <= 0 )
      goto LABEL_85;
    _RSI = _RBX;
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm3, [rbp+rsi+250h+parentNTWeights]
        vmovss  xmm1, [rsp+rsi+350h+parentAnimWeights]
      }
      if ( *((_BYTE *)v113 + v50) )
      {
        __asm
        {
          vsubss  xmm0, xmm6, xmm1
          vmulss  xmm2, xmm0, dword ptr [rsp+rbx+350h+var_308]
          vmulss  xmm1, xmm1, xmm3
          vaddss  xmm2, xmm2, xmm1
          vmovss  dword ptr [rsp+rbx+350h+var_308], xmm2
        }
        goto LABEL_77;
      }
      if ( *((_BYTE *)v114 + v50) || v31 )
      {
        __asm
        {
          vmulss  xmm4, xmm1, dword ptr [rsp+rbx+350h+var_310]
          vsubss  xmm0, xmm6, xmm3
          vmulss  xmm1, xmm0, xmm4
          vaddss  xmm2, xmm1, dword ptr [rsp+rbx+350h+var_2F8]
          vmovss  dword ptr [rsp+rbx+350h+var_2F8], xmm2
        }
        if ( !v31 )
          goto LABEL_77;
        __asm { vmulss  xmm0, xmm4, dword ptr [r13+3Ch] }
      }
      else
      {
        __asm
        {
          vmulss  xmm2, xmm1, dword ptr [rsp+rbx+350h+var_318]
          vmulss  xmm0, xmm2, xmm3
          vaddss  xmm1, xmm0, dword ptr [rsp+rbx+350h+var_308]
          vmulss  xmm0, xmm2, dword ptr [r13+3Ch]
          vmovss  dword ptr [rsp+rbx+350h+var_308], xmm1
        }
      }
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rbx+r14]
        vmovss  dword ptr [rbx+r14], xmm1
      }
LABEL_77:
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+rbx+350h+var_308]
        vmovss  [rsp+350h+var_31C], xmm0
      }
      if ( (v90 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 164, ASSERT_TYPE_ASSERT, "(!IS_NAN( accumNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( accumNTWeights[notetrackType] )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+rbx+350h+var_2F8]
        vmovss  [rsp+350h+var_31C], xmm0
      }
      if ( (v91 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 165, ASSERT_TYPE_ASSERT, "(!IS_NAN( additiveAccumInvNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( additiveAccumInvNTWeights[notetrackType] )") )
        __debugbreak();
      v31 = v88;
      ++v50;
      _RSI += 8i64;
      if ( v50 >= v48 )
      {
        v47 = v107;
        _ESI = 0;
LABEL_85:
        v31 = v88;
        _RBX += 4i64;
        v107 = --v47;
        if ( !v47 )
        {
          _ECX = v88;
          _RDX = v109;
          __asm
          {
            vmovd   xmm0, ecx
            vmovd   xmm1, esi
            vpcmpeqd xmm2, xmm0, xmm1
            vsubss  xmm0, xmm6, dword ptr [rsp+350h+var_2F8]
            vmovss  xmm1, dword ptr [rsp+350h+var_308]
            vblendvps xmm3, xmm6, xmm1, xmm2
            vmulss  xmm0, xmm0, xmm3
            vaddss  xmm1, xmm0, dword ptr [rdx]
            vmovd   xmm0, ecx
            vmovd   xmm2, esi
            vpcmpeqd xmm3, xmm0, xmm2
            vsubss  xmm0, xmm6, dword ptr [rsp+350h+var_2F8+4]
            vmovss  dword ptr [rdx], xmm1
            vmovss  xmm1, dword ptr [rsp+350h+var_308+4]
            vblendvps xmm2, xmm6, xmm1, xmm3
            vmovaps xmm6, [rsp+350h+var_50]
            vmulss  xmm0, xmm0, xmm2
            vaddss  xmm1, xmm0, dword ptr [rdx+4]
            vmovss  dword ptr [rdx+4], xmm1
          }
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
      _RDI = i;
      _R14[i] = info->state.weight;
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
        *(double *)&_XMM0 = XAnimCalcNotetrackWeight(info, xanim_ik_in_start_right_hand, xanim_ik_in_end_right_hand, xanim_ik_out_start_right_hand, xanim_ik_out_end_right_hand);
        __asm { vmovss  dword ptr [r15+rdi*4], xmm0 }
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
  XAnimParts *parts; 
  unsigned __int8 ikType; 
  const XAnimIKSettings *settingsArray; 
  int v14; 
  unsigned __int8 v15; 
  scr_string_t *p_blendOutStartNotetrack; 
  int v18; 
  unsigned __int16 children; 
  bool v20; 
  int v22; 
  XAnimInfo *AnimInfo; 
  unsigned int flags; 
  char v27; 
  __int64 v28; 
  bool v34; 
  bool v35; 
  __int64 v52; 
  __int64 v54; 
  bool v108; 
  __int64 v109; 
  int v110; 
  int v111; 
  int *v112; 
  __int64 v113; 
  XAnimIKNotetrackLeafFunctor v116; 
  __int128 v117; 
  __int128 v118; 
  __int64 v119; 
  __int64 v120; 
  __int64 v121[2]; 
  float v122[128]; 
  float v123[128]; 
  __int64 v124[4]; 
  __int64 v125[4]; 

  _R14 = parentAnimWeights;
  if ( !info->animToModel )
  {
    __asm { vmovaps [rsp+560h+var_50], xmm6 }
    memset_0(v123, 0, sizeof(v123));
    memset_0(v122, 0, sizeof(v122));
    v117 = 0ui64;
    v118 = 0ui64;
    v119 = 0i64;
    v120 = 0i64;
    v121[0] = 0i64;
    v121[1] = 0i64;
    memset(v124, 0, sizeof(v124));
    memset(v125, 0, sizeof(v125));
    v18 = IsInfoAdditive(info);
    children = info->children;
    v20 = v18 != 0;
    _ER9 = 0;
    v108 = v18 != 0;
    v22 = 0;
    if ( children )
    {
      __asm
      {
        vmovups xmm6, [rsp+560h+var_4F0]
        vmovaps [rsp+560h+var_60], xmm7
        vmovups xmm7, [rbp+460h+var_4E0]
      }
      v112 = (int *)v122;
      v109 = 0i64;
      while ( v22 < 32 )
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
          v27 = 0;
        }
        else
        {
          v27 = 1;
          if ( (flags & 0x210) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 590, ASSERT_TYPE_ASSERT, "(!isAdditiveIKScale || IsInfoAdditive( info ))", (const char *)&queryFormat, "!isAdditiveIKScale || IsInfoAdditive( info )") )
            __debugbreak();
        }
        v34 = AnimInfo->animToModel == NULL;
        v28 = v109;
        *((_BYTE *)v125 + v109) = v27;
        if ( !v34 || (AnimInfo->animParent.flags & 0x210) == 0 || v27 )
        {
          _RAX = calcLeafFunctor;
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups [rsp+560h+var_500], xmm0
          }
          XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>(AnimInfo, &v123[4 * v22], &v122[4 * v22], &v116);
          if ( AnimInfo->animToModel || (AnimInfo->animParent.flags & 0x100) == 0 || info->children == children )
          {
            if ( v27 || v108 )
            {
              __asm
              {
                vaddps  xmm7, xmm7, xmmword ptr [rax]
                vmovups [rbp+460h+var_4E0], xmm7
              }
            }
            else
            {
              __asm
              {
                vaddps  xmm6, xmm6, xmmword ptr [rax]
                vmovups [rsp+560h+var_4F0], xmm6
              }
            }
            v28 = v109;
          }
          else
          {
            v28 = v109;
            *((_BYTE *)v124 + v109) = 1;
          }
        }
        v112 += 4;
        children = AnimInfo->next;
        ++v22;
        v109 = v28 + 1;
        if ( !children )
          goto LABEL_50;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 84, ASSERT_TYPE_ASSERT, "(childIndex < 32)", "%s\n\tXANIM_WEIGHTS_NUM_CHILDREN exceeded, this value can be increased, but doing so increases stack memory.", "childIndex < XANIM_WEIGHTS_NUM_CHILDREN") )
        __debugbreak();
      v22 = 32;
LABEL_50:
      v20 = v108;
      _ER9 = 0;
      __asm { vmovaps xmm7, [rsp+560h+var_60] }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+560h+var_4F0]
      vmovss  xmm6, cs:__real@3f800000
    }
    v35 = (info->animParent.flags & 0x20) == 0;
    v34 = (info->animParent.flags & 0x20) != 0;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    if ( (info->animParent.flags & 0x20) != 0 )
    {
      __asm { vmovss  dword ptr [rsp+560h+var_4F0], xmm1 }
    }
    else
    {
      v34 = (info->animParent.flags & 0x20) != 0;
      if ( (info->animParent.flags & 0x20) != 0 )
      {
        __asm { vmovss  dword ptr [rsp+560h+var_4F0], xmm6 }
      }
      else
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm0
          vmovss  dword ptr [rsp+560h+var_4F0], xmm0
        }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+560h+var_4F0+4]
      vcomiss xmm0, xmm1
    }
    if ( v34 )
    {
      __asm { vmovss  dword ptr [rsp+560h+var_4F0+4], xmm1 }
    }
    else
    {
      v34 = !v35;
      if ( v35 )
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm0
          vmovss  dword ptr [rsp+560h+var_4F0+4], xmm0
        }
      }
      else
      {
        __asm { vmovss  dword ptr [rsp+560h+var_4F0+4], xmm6 }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+560h+var_4F0+8]
      vcomiss xmm0, xmm1
    }
    if ( v34 )
    {
      __asm { vmovss  dword ptr [rsp+560h+var_4F0+8], xmm1 }
    }
    else
    {
      v34 = !v35;
      if ( v35 )
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm0
          vmovss  dword ptr [rsp+560h+var_4F0+8], xmm0
        }
      }
      else
      {
        __asm { vmovss  dword ptr [rsp+560h+var_4F0+8], xmm6 }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+560h+var_4F0+0Ch]
      vcomiss xmm0, xmm1
    }
    if ( v34 )
    {
      __asm { vmovss  dword ptr [rsp+560h+var_4F0+0Ch], xmm1 }
    }
    else
    {
      v34 = !v35;
      if ( v35 )
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm0
          vmovss  dword ptr [rsp+560h+var_4F0+0Ch], xmm0
        }
      }
      else
      {
        __asm { vmovss  dword ptr [rsp+560h+var_4F0+0Ch], xmm6 }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+460h+var_4E0]
      vcomiss xmm0, xmm1
    }
    if ( v34 )
    {
      __asm { vmovss  dword ptr [rbp+460h+var_4E0], xmm1 }
    }
    else
    {
      v34 = !v35;
      if ( v35 )
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm0
          vmovss  dword ptr [rbp+460h+var_4E0], xmm0
        }
      }
      else
      {
        __asm { vmovss  dword ptr [rbp+460h+var_4E0], xmm6 }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+460h+var_4E0+4]
      vcomiss xmm0, xmm1
    }
    if ( v34 )
    {
      __asm { vmovss  dword ptr [rbp+460h+var_4E0+4], xmm1 }
    }
    else
    {
      v34 = !v35;
      if ( v35 )
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm0
          vmovss  dword ptr [rbp+460h+var_4E0+4], xmm0
        }
      }
      else
      {
        __asm { vmovss  dword ptr [rbp+460h+var_4E0+4], xmm6 }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+460h+var_4E0+8]
      vcomiss xmm0, xmm1
    }
    if ( v34 )
    {
      __asm { vmovss  dword ptr [rbp+460h+var_4E0+8], xmm1 }
    }
    else
    {
      v34 = !v35;
      if ( v35 )
      {
        __asm
        {
          vdivss  xmm0, xmm6, xmm0
          vmovss  dword ptr [rbp+460h+var_4E0+8], xmm0
        }
      }
      else
      {
        __asm { vmovss  dword ptr [rbp+460h+var_4E0+8], xmm6 }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+460h+var_4E0+0Ch]
      vcomiss xmm0, xmm1
    }
    if ( v34 )
    {
      __asm { vmovss  dword ptr [rbp+460h+var_4E0+0Ch], xmm1 }
    }
    else if ( v35 )
    {
      __asm
      {
        vdivss  xmm0, xmm6, xmm0
        vmovss  dword ptr [rbp+460h+var_4E0+0Ch], xmm0
      }
    }
    else
    {
      __asm { vmovss  dword ptr [rbp+460h+var_4E0+0Ch], xmm6 }
    }
    v52 = 4i64;
    v113 = 4i64;
    _RBX = 0i64;
LABEL_92:
    v54 = 0i64;
    if ( v22 <= 0i64 )
      goto LABEL_110;
    _RSI = _RBX;
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm3, [rbp+rsi+460h+var_2B0]
        vmovss  xmm1, [rbp+rsi+460h+var_4B0]
      }
      if ( *((_BYTE *)v124 + v54) )
      {
        __asm
        {
          vsubss  xmm0, xmm6, xmm1
          vmulss  xmm2, xmm0, dword ptr [rbp+rbx+460h+var_4D0]
          vmulss  xmm1, xmm1, xmm3
          vaddss  xmm2, xmm2, xmm1
          vmovss  dword ptr [rbp+rbx+460h+var_4D0], xmm2
        }
        goto LABEL_102;
      }
      if ( *((_BYTE *)v125 + v54) || v20 )
      {
        __asm
        {
          vmulss  xmm4, xmm1, dword ptr [rbp+rbx+460h+var_4E0]
          vsubss  xmm0, xmm6, xmm3
          vmulss  xmm1, xmm0, xmm4
          vaddss  xmm2, xmm1, dword ptr [rbp+rbx+460h+var_4C0]
          vmovss  dword ptr [rbp+rbx+460h+var_4C0], xmm2
        }
        if ( !v20 )
          goto LABEL_102;
        __asm { vmulss  xmm0, xmm4, dword ptr [r15+3Ch] }
      }
      else
      {
        __asm
        {
          vmulss  xmm2, xmm1, dword ptr [rsp+rbx+560h+var_4F0]
          vmulss  xmm0, xmm2, xmm3
          vaddss  xmm1, xmm0, dword ptr [rbp+rbx+460h+var_4D0]
          vmulss  xmm0, xmm2, dword ptr [r15+3Ch]
          vmovss  dword ptr [rbp+rbx+460h+var_4D0], xmm1
        }
      }
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rbx+r14]
        vmovss  dword ptr [rbx+r14], xmm1
      }
LABEL_102:
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+rbx+460h+var_4D0]
        vmovss  dword ptr [rsp+560h+var_528], xmm0
      }
      if ( (v110 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 164, ASSERT_TYPE_ASSERT, "(!IS_NAN( accumNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( accumNTWeights[notetrackType] )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+rbx+460h+var_4C0]
        vmovss  dword ptr [rsp+560h+var_528], xmm0
      }
      if ( (v111 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_notetrack.h", 165, ASSERT_TYPE_ASSERT, "(!IS_NAN( additiveAccumInvNTWeights[notetrackType] ))", (const char *)&queryFormat, "!IS_NAN( additiveAccumInvNTWeights[notetrackType] )") )
        __debugbreak();
      v20 = v108;
      ++v54;
      _RSI += 16i64;
      if ( v54 >= v22 )
      {
        v52 = v113;
        _ER9 = 0;
LABEL_110:
        v20 = v108;
        _RBX += 4i64;
        v113 = --v52;
        if ( !v52 )
        {
          _RDX = parentNTWeights;
          _ECX = v108;
          __asm
          {
            vmovd   xmm0, ecx
            vmovd   xmm1, r9d
            vpcmpeqd xmm2, xmm0, xmm1
            vsubss  xmm0, xmm6, dword ptr [rbp+460h+var_4C0]
            vmovss  xmm1, dword ptr [rbp+460h+var_4D0]
            vblendvps xmm3, xmm6, xmm1, xmm2
            vmulss  xmm0, xmm0, xmm3
            vaddss  xmm1, xmm0, dword ptr [rdx]
            vmovss  dword ptr [rdx], xmm1
            vmovss  xmm1, dword ptr [rbp+460h+var_4D0+4]
            vmovd   xmm2, r9d
            vmovd   xmm0, ecx
            vpcmpeqd xmm3, xmm0, xmm2
            vsubss  xmm0, xmm6, dword ptr [rbp+460h+var_4C0+4]
            vblendvps xmm2, xmm6, xmm1, xmm3
            vmulss  xmm0, xmm0, xmm2
            vaddss  xmm1, xmm0, dword ptr [rdx+4]
            vmovss  dword ptr [rdx+4], xmm1
            vmovss  xmm1, dword ptr [rbp+460h+var_4C8]
            vmovd   xmm2, r9d
            vmovd   xmm0, ecx
            vpcmpeqd xmm3, xmm0, xmm2
            vsubss  xmm0, xmm6, dword ptr [rbp+460h+var_4B8]
            vblendvps xmm2, xmm6, xmm1, xmm3
            vmulss  xmm0, xmm0, xmm2
            vaddss  xmm1, xmm0, dword ptr [rdx+8]
            vmovd   xmm0, ecx
            vmovd   xmm2, r9d
            vpcmpeqd xmm3, xmm0, xmm2
            vsubss  xmm0, xmm6, dword ptr [rbp+460h+var_4B8+4]
            vmovss  dword ptr [rdx+8], xmm1
            vmovss  xmm1, dword ptr [rbp+460h+var_4C8+4]
            vblendvps xmm2, xmm6, xmm1, xmm3
            vmovaps xmm6, [rsp+560h+var_50]
            vmulss  xmm0, xmm0, xmm2
            vaddss  xmm1, xmm0, dword ptr [rdx+0Ch]
            vmovss  dword ptr [rdx+0Ch], xmm1
          }
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
  if ( XAnimIKCalcAnimWeights(info, calcLeafFunctor->m_ikData, calcLeafFunctor->m_dObjData, _R14) && ikType )
  {
    v14 = ikType;
    v15 = 0;
    p_blendOutStartNotetrack = &settingsArray->blendOutStartNotetrack;
    do
    {
      if ( _bittest(&v14, v15) )
      {
        *(double *)&_XMM0 = XAnimCalcNotetrackWeight(info, (scr_string_t)*((_DWORD *)p_blendOutStartNotetrack - 2), (scr_string_t)*((_DWORD *)p_blendOutStartNotetrack - 1), *p_blendOutStartNotetrack, (scr_string_t)*((_DWORD *)p_blendOutStartNotetrack + 1));
        _RAX = parentNTWeights;
        __asm { vmovss  dword ptr [rax], xmm0 }
      }
      else
      {
        _RAX = parentNTWeights;
      }
      ++v15;
      p_blendOutStartNotetrack += 24;
      parentNTWeights = _RAX + 1;
    }
    while ( v15 < 4u );
  }
}

