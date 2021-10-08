/*
==============
GetArrivalNode
==============
*/

bool __fastcall GetArrivalNode(const AIScriptedInterface *pAI, ArrivalNode *outNode)
{
  return ?GetArrivalNode@@YA_NPEBVAIScriptedInterface@@AEAUArrivalNode@@@Z(pAI, outNode);
}

/*
==============
ArrivalNode::HasAngles
==============
*/

bool __fastcall ArrivalNode::HasAngles(ArrivalNode *this)
{
  return ?HasAngles@ArrivalNode@@QEBA_NXZ(this);
}

/*
==============
ASM_ShouldStartArrivalPassthroughSwitch
==============
*/

bool __fastcall ASM_ShouldStartArrivalPassthroughSwitch(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_ShouldStartArrivalPassthroughSwitch@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, toStateName, numParams, pParams, pOutValue);
}

/*
==============
ASM_ArrivalIsStopped
==============
*/

bool __fastcall ASM_ArrivalIsStopped(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_ArrivalIsStopped@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, toStateName, numParams, pParams, pOutValue);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetArrivalAnimData
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetArrivalAnimData(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetArrivalAnimData@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
ArrivalNode::GetOrigin
==============
*/

bool __fastcall ArrivalNode::GetOrigin(ArrivalNode *this, vec3_t *outOrigin)
{
  return ?GetOrigin@ArrivalNode@@QEBA_NAEATvec3_t@@@Z(this, outOrigin);
}

/*
==============
ArrivalNode::GetAngles
==============
*/

bool __fastcall ArrivalNode::GetAngles(ArrivalNode *this, vec3_t *outAngles)
{
  return ?GetAngles@ArrivalNode@@QEBA_NAEATvec3_t@@@Z(this, outAngles);
}

/*
==============
ASM_CalcArrivalType
==============
*/

bool __fastcall ASM_CalcArrivalType(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_CalcArrivalType@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, toStateName, numParams, pParams, pOutValue);
}

/*
==============
ASM_PlayAnim_Arrival_Terminate
==============
*/

bool __fastcall ASM_PlayAnim_Arrival_Terminate(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_PlayAnim_Arrival_Terminate@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, toStateName, numParams, pParams, pOutValue);
}

/*
==============
ASM_Arrival_NoteHandler
==============
*/

bool __fastcall ASM_Arrival_NoteHandler(int entNum, const scr_string_t asmName, const scr_string_t notetrackName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_Arrival_NoteHandler@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, notetrackName, numParams, pParams, pOutValue);
}

/*
==============
ASM_PlayAnim_Arrival
==============
*/

bool __fastcall ASM_PlayAnim_Arrival(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_PlayAnim_Arrival@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, toStateName, numParams, pParams, pOutValue);
}

/*
==============
ASM_ChooseAnim_Arrival
==============
*/

bool __fastcall ASM_ChooseAnim_Arrival(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_ChooseAnim_Arrival@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, toStateName, numParams, pParams, pOutValue);
}

/*
==============
ASM_PlayAnim_Arrival
==============
*/
bool ASM_PlayAnim_Arrival(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams)
{
  __int64 v14; 
  const gentity_s *v16; 
  int v17; 
  AIScriptedInterface *m_pAI; 
  scr_string_t v23; 
  scr_string_t AnimsetName; 
  const Animset *v25; 
  const char *name; 
  const char *v27; 
  XAnimSubTreeID v28; 
  const XAnimTree *v29; 
  const XAnim_s *SubTreeAnims; 
  AIScriptedInterface_vtbl *v33; 
  unsigned int v74; 
  char v81; 
  char v82; 
  char v91; 
  bool v92; 
  bool v94; 
  bool result; 
  float fmt; 
  int fmta; 
  float fmtb; 
  int fmtc; 
  float fmtd; 
  float fmte; 
  float pOutAnimSubtreeID; 
  float pOutAnimSubtreeIDa; 
  float pOutAnimSubtreeIDb; 
  float pOutAnimSubtreeIDc; 
  float pOutAnimSubtreeIDd; 
  unsigned int pOutAnimIndex; 
  int pOutStateIndex; 
  scr_string_t asmNamea[2]; 
  vec3_t v129; 
  scr_string_t toStateNamea[2]; 
  AnimsetState *outState; 
  unsigned int pOutGraftNode[2]; 
  __int64 v133; 
  AIWrapper v134; 
  vec3_t trans; 
  vec3_t v136; 
  vec4_t v137; 
  vec4_t rot; 
  char v139; 
  void *retaddr; 

  _RAX = &retaddr;
  v133 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  toStateNamea[0] = toStateName;
  asmNamea[1] = asmName;
  v14 = entNum;
  _R14 = pParams;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 323, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v16 = &g_entities[v14];
  AIActorInterface::AIActorInterface(&v134.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v134.m_newAgentInterface);
  v134.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v17 = 0;
  v134.m_pAI = NULL;
  AIWrapper::Setup(&v134, v16);
  m_pAI = v134.m_pAI;
  if ( !v134.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 324, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  _RDI = m_pAI->GetAI(m_pAI);
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmm6, xmm8
  }
  if ( numParams > 0 )
  {
    if ( !pParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 368, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
      __debugbreak();
    if ( (unsigned int)(pParams->m_Type - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 370, ASSERT_TYPE_ASSERT, "(pParams[ iParam ].m_Type == ParamType_Int || pParams[ iParam ].m_Type == ParamType_Float)", (const char *)&queryFormat, "pParams[ iParam ].m_Type == ParamType_Int || pParams[ iParam ].m_Type == ParamType_Float") )
      __debugbreak();
    if ( pParams->m_Type == ParamType_Int )
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, dword ptr [r14]
      }
    }
    else
    {
      __asm { vmovss  xmm6, dword ptr [r14] }
    }
  }
  AIScriptedInterface::ResetASMInstanceData(m_pAI);
  v23 = toStateNamea[0];
  ASM_GetAnimID(v14, asmNamea[1], toStateNamea[0]);
  m_pAI->OrientMode_FaceAngles(m_pAI, (const vec3_t *)(*(_QWORD *)_RDI + 316i64), 0, 0);
  AnimsetName = BG_AnimationState_GetAnimsetName(*(const entityState_t **)_RDI);
  v25 = Animset_Find(AnimsetName);
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 399, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  outState = NULL;
  BG_Animset_GetStateInfoByName(v25, toStateNamea[0], &outState, &pOutStateIndex);
  if ( !outState )
  {
    name = v25->name;
    v27 = SL_ConvertToString(v23);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 404, ASSERT_TYPE_ASSERT, "( pState )", "unable to find state %s in animset %s", v27, name) )
      __debugbreak();
  }
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(v25, pOutStateIndex, *(_DWORD *)(_RDI + 3492), &pOutAnimIndex, pOutGraftNode, (XAnimSubTreeID *)asmNamea, NULL);
  v28 = asmNamea[0];
  v29 = m_pAI->GetAnimTree(m_pAI);
  SubTreeAnims = XAnimGetSubTreeAnims(v29, v28);
  if ( !*(_BYTE *)(_RDI + 3533) )
    AIScriptedInterface::StartArrivalState(m_pAI, AIS_BEHAVE);
  *(double *)&_XMM0 = XAnimGetLength(SubTreeAnims, pOutAnimIndex);
  __asm { vmovaps xmm9, xmm0 }
  *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.code_move);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  v33 = m_pAI->__vftable;
  __asm { vcomiss xmm0, xmm7 }
  if ( !v81 )
  {
    v33->SetAnimMode(m_pAI, AI_ANIM_USE_BOTH_DELTAS_ZONLY_PHYSICS);
    *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.corner);
    __asm
    {
      vmovaps xmm6, xmm0
      vcomiss xmm0, xmm7
    }
    if ( v81 | v82 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 427, ASSERT_TYPE_ASSERT, "(cornerTime > 0.f)", (const char *)&queryFormat, "cornerTime > 0.f") )
      __debugbreak();
    __asm
    {
      vmovss  dword ptr [rsp+1C0h+pOutAnimSubtreeID], xmm6
      vmovss  dword ptr [rsp+1C0h+fmt], xmm7
    }
    XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &rot, &trans, fmt, pOutAnimSubtreeID);
    __asm
    {
      vmovsd  xmm0, qword ptr [rdi+0DB4h]
      vmovsd  qword ptr [rsp+1C0h+var_170], xmm0
    }
    v129.v[2] = *(float *)(_RDI + 3516);
    __asm
    {
      vmovsd  xmm0, qword ptr [rdi+0DA8h]
      vmovsd  qword ptr [rbp+0C0h+var_E0], xmm0
    }
    v136.v[2] = *(float *)(_RDI + 3504);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0C0h+rot]
      vmovdqa xmmword ptr [rbp+0C0h+var_D0], xmm0
      vmulss  xmm1, xmm6, xmm9
      vmovss  dword ptr [rsp+1C0h+pOutAnimSubtreeID], xmm1
    }
    SetupMotionWarp(v14, &trans, &v137, &v136, &v129, pOutAnimSubtreeIDa);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0C0h+trans]
      vmulss  xmm3, xmm0, xmm0
      vmovss  xmm1, dword ptr [rbp+0C0h+trans+4]
      vmulss  xmm2, xmm1, xmm1
      vaddss  xmm5, xmm3, xmm2
    }
    _RAX = *(const entityState_t **)_RDI;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vsubss  xmm4, xmm0, dword ptr [rdi+0DA8h]
      vmovss  xmm1, dword ptr [rax+134h]
      vsubss  xmm2, xmm1, dword ptr [rdi+0DACh]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vdivss  xmm3, xmm8, xmm2
      vsqrtss xmm0, xmm5, xmm5
      vmulss  xmm0, xmm3, xmm0; val
      vmovss  xmm2, cs:__real@40000000; max
      vmovss  xmm1, cs:__real@3f000000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rsp+1C0h+fmt], xmm0 }
    ((void (__fastcall *)(AIScriptedInterface *, const Animset *, _QWORD, _QWORD, int))m_pAI->SetAnim)(m_pAI, v25, (unsigned int)pOutStateIndex, *(unsigned int *)(_RDI + 3492), fmta);
    *(_BYTE *)(_RDI + 3534) = 1;
    goto LABEL_54;
  }
  v33->SetAnimMode(m_pAI, AI_ANIM_USE_BOTH_DELTAS_ZONLY_PHYSICS);
  ASM_PlayFacialAnim(v14, asmNamea[1], v25, pOutStateIndex, *(_DWORD *)(_RDI + 3492));
  if ( *(_BYTE *)(_RDI + 3532) )
  {
    __asm { vmovss  xmm6, dword ptr [rdi+0DC8h] }
  }
  else if ( *(_BYTE *)(_RDI + 3535) )
  {
    __asm
    {
      vmovss  dword ptr [rsp+1C0h+pOutAnimSubtreeID], xmm8
      vmovss  dword ptr [rsp+1C0h+fmt], xmm7
    }
    XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &v137, &v136, fmtb, pOutAnimSubtreeIDb);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0DA8h]
      vsubss  xmm4, xmm0, dword ptr [rax+130h]
      vmovss  xmm1, dword ptr [rdi+0DACh]
      vsubss  xmm2, xmm1, dword ptr [rax+134h]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vsqrtss xmm5, xmm1, xmm1
      vcomiss xmm5, xmm8
    }
    if ( !(v81 | v82) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C0h+var_E0]
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm1, dword ptr [rbp+0C0h+var_E0+4]
        vmulss  xmm2, xmm1, xmm1
        vaddss  xmm0, xmm3, xmm2
        vsqrtss xmm3, xmm0, xmm0
        vdivss  xmm0, xmm3, xmm5; val
        vmovss  xmm2, cs:__real@3fa66666; max
        vmovss  xmm1, cs:__real@3f4ccccd; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmulss  xmm6, xmm0, xmm6 }
    }
  }
  __asm { vmovss  dword ptr [rsp+1C0h+fmt], xmm6 }
  ((void (__fastcall *)(AIScriptedInterface *, const Animset *, _QWORD, _QWORD, int))m_pAI->SetAnim)(m_pAI, v25, (unsigned int)pOutStateIndex, *(unsigned int *)(_RDI + 3492), fmtc);
  __asm
  {
    vdivss  xmm11, xmm9, xmm6
    vmovss  dword ptr [rdi+0DC4h], xmm11
  }
  v74 = pOutAnimIndex;
  Sys_ProfBeginNamedEvent(0xFF808080, "ASM_FindTimeOfSettleStart");
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vdivss  xmm9, xmm1, xmm11
    vsubss  xmm6, xmm8, xmm9
    vcomiss xmm6, xmm7
  }
  if ( v81 | v82 )
  {
LABEL_39:
    Sys_ProfEndNamedEvent();
  }
  else
  {
    __asm { vmovss  xmm10, cs:__real@42800000 }
    while ( 1 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+1C0h+pOutAnimSubtreeID], xmm8
        vmovss  dword ptr [rsp+1C0h+fmt], xmm6
      }
      XAnimGetRelDelta3D(SubTreeAnims, v74, &v137, &trans, fmtd, pOutAnimSubtreeIDc);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C0h+trans]
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm1, dword ptr [rbp+0C0h+trans+4]
        vmulss  xmm2, xmm1, xmm1
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, dword ptr [rbp+0C0h+trans+8]
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm2, xmm4, xmm1
        vcomiss xmm2, xmm10
      }
      if ( !v81 )
        break;
      __asm
      {
        vsubss  xmm6, xmm6, xmm9
        vcomiss xmm6, xmm7
      }
      if ( v81 | v82 )
        goto LABEL_39;
    }
    __asm
    {
      vmulss  xmm0, xmm6, xmm11
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si r12d, xmm1
    }
    v17 = level.time + _ER12;
    Sys_ProfEndNamedEvent();
  }
  *(_DWORD *)(_RDI + 3520) = v17;
  *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.warp_arrival_start);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.warp_arrival_end);
  __asm
  {
    vmovaps xmm9, xmm0
    vcomiss xmm6, xmm7
  }
  if ( v91 )
  {
    _EBX = 500;
    *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.start_aim);
    __asm { vcomiss xmm0, xmm7 }
    if ( !(v81 | v82) )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+0DC4h]
        vmulss  xmm0, xmm0, cs:__real@447a0000
        vmulss  xmm1, xmm0, xmm2
        vcvttss2si ebx, xmm1
      }
      if ( _EBX < 300 )
      {
        __asm { vcomiss xmm2, cs:__real@3e19999a }
        if ( (unsigned int)_EBX >= 0x12C )
          _EBX = 300;
      }
    }
    goto LABEL_53;
  }
  __asm { vcomiss xmm0, xmm7 }
  if ( v91 | v92 )
  {
    v94 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 495, ASSERT_TYPE_ASSERT, "(warpEndTime > 0.f)", (const char *)&queryFormat, "warpEndTime > 0.f");
    v92 = !v94;
    if ( v94 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( v92 )
  {
    __asm
    {
      vmulss  xmm0, xmm9, cs:__real@447a0000
      vmulss  xmm1, xmm0, dword ptr [rdi+0DC4h]
      vcvttss2si ebx, xmm1
    }
    _EBX = _EBX - _EBX % level.frameDuration;
    if ( _EBX < 50 )
      _EBX = 50;
LABEL_53:
    __asm
    {
      vmovss  dword ptr [rsp+1C0h+pOutAnimSubtreeID], xmm8
      vmovss  dword ptr [rsp+1C0h+fmt], xmm7
    }
    XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &v137, &trans, fmte, pOutAnimSubtreeIDd);
    __asm { vmovsd  xmm0, qword ptr [rdi+0DB4h] }
    v136.v[2] = *(float *)(_RDI + 3516);
    __asm
    {
      vmovsd  qword ptr [rbp+0C0h+var_E0], xmm0
      vmovsd  xmm0, qword ptr [rdi+0DA8h]
    }
    v129.v[2] = *(float *)(_RDI + 3504);
    __asm
    {
      vmovsd  qword ptr [rsp+1C0h+var_170], xmm0
      vmovups xmm0, xmmword ptr [rbp+0C0h+var_D0]
      vmovdqa xmmword ptr [rbp+0C0h+rot], xmm0
    }
    SetupMotionWarp(v14, &trans, &rot, &v129, &v136, _EBX);
  }
LABEL_54:
  result = 1;
  _R11 = &v139;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
  return result;
}

/*
==============
ASM_PlayAnim_Arrival_Terminate
==============
*/
char ASM_PlayAnim_Arrival_Terminate(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams)
{
  __int64 v4; 
  const gentity_s *v5; 
  AIScriptedInterface *m_pAI; 
  __int64 v7; 
  AIWrapper v9; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 554, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v5 = &g_entities[v4];
  AIActorInterface::AIActorInterface(&v9.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v9.m_newAgentInterface);
  v9.m_pAI = NULL;
  v9.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AIWrapper::Setup(&v9, v5);
  m_pAI = v9.m_pAI;
  if ( !v9.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 555, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  G_MotionWarp_Cancel(v4);
  v7 = m_pAI->GetAI(m_pAI);
  *(_DWORD *)(v7 + 1652) = 0;
  *(_BYTE *)(v7 + 2477) = 1;
  *(_BYTE *)(v7 + 1832) = 0;
  return 1;
}

/*
==============
ASM_Arrival_NoteHandler
==============
*/
bool ASM_Arrival_NoteHandler(int entNum, const scr_string_t asmName, const scr_string_t notetrackName, int numParams)
{
  __int64 v8; 
  const gentity_s *v10; 
  AIScriptedInterface *v11; 
  bool result; 
  gentity_s *v13; 
  AIScriptedInterface *m_pAI; 
  scr_string_t AnimsetName; 
  XAnimSubTreeID v17; 
  const XAnimTree *v18; 
  const XAnim_s *SubTreeAnims; 
  const XAnim_s *v21; 
  char v23; 
  char v24; 
  int v30; 
  float fmt; 
  float pOutAnimSubtreeID; 
  XAnimSubTreeID v46[2]; 
  unsigned int pOutAnimIndex[3]; 
  vec3_t pAnimset; 
  unsigned int pOutGraftNode[4]; 
  vec3_t v50; 
  AIWrapper v51; 
  vec4_t v52; 
  vec3_t trans; 
  vec4_t rot; 

  v8 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 573, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( notetrackName != scr_const.corner )
  {
    __asm
    {
      vmovaps [rsp+170h+var_40], xmm6
      vmovaps [rsp+170h+var_60], xmm9
    }
    if ( notetrackName == scr_const.warp_arrival_start )
    {
      v13 = &g_entities[v8];
      AIActorInterface::AIActorInterface(&v51.m_actorInterface);
      AIAgentInterface::AIAgentInterface(&v51.m_newAgentInterface);
      v51.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v51.m_pAI = NULL;
      AIWrapper::Setup(&v51, v13);
      m_pAI = v51.m_pAI;
      if ( !v51.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 589, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
        __debugbreak();
      _R13 = m_pAI->GetAI(m_pAI);
      AnimsetName = BG_AnimationState_GetAnimsetName(&v13->s);
      *(_QWORD *)pAnimset.v = Animset_Find(AnimsetName);
      if ( !*(_QWORD *)pAnimset.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 595, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
        __debugbreak();
      BG_Animset_GetAnimIndexFromStateIndexAndEntry(*(const Animset **)pAnimset.v, (v13->s.animInfo.animData >> 1) & 0x3FF, (v13->s.animInfo.animData >> 11) & 0x7F, pOutAnimIndex, pOutGraftNode, v46, NULL);
      v17 = v46[0];
      v18 = m_pAI->GetAnimTree(m_pAI);
      SubTreeAnims = XAnimGetSubTreeAnims(v18, v17);
      __asm { vmovss  xmm6, dword ptr [r13+0DC4h] }
      v21 = SubTreeAnims;
      *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex[0], notetrackName);
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vcomiss xmm0, xmm9
      }
      if ( !(v23 | v24) )
      {
        __asm
        {
          vmovss  xmm2, cs:__real@3f800000
          vmulss  xmm0, xmm0, xmm6
          vmulss  xmm0, xmm0, cs:__real@447a0000
          vcvttss2si ebx, xmm0
          vmovaps [rsp+170h+var_50], xmm8
          vxorps  xmm0, xmm0, xmm0
        }
        v30 = _EBX - _EBX % level.frameDuration;
        __asm
        {
          vcvtsi2ss xmm0, xmm0, ebx
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vdivss  xmm3, xmm1, xmm6
          vmovss  dword ptr [rsp+170h+pOutAnimSubtreeID], xmm2
          vmovss  dword ptr [rsp+170h+fmt], xmm3
        }
        XAnimGetRelDelta3D(v21, pOutAnimIndex[0], &rot, &trans, fmt, pOutAnimSubtreeID);
        *(double *)&_XMM0 = XAnimGetNotetrackTime(v21, pOutAnimIndex[0], scr_const.warp_arrival_end);
        __asm
        {
          vcomiss xmm0, xmm9
          vmovaps xmm8, xmm0
        }
        if ( v23 | v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 620, ASSERT_TYPE_ASSERT, "(warpEndTime > 0.f)", (const char *)&queryFormat, "warpEndTime > 0.f") )
          __debugbreak();
        pAnimset.v[2] = *(float *)(_R13 + 3516);
        v50.v[2] = *(float *)(_R13 + 3504);
        __asm
        {
          vmulss  xmm0, xmm8, xmm6
          vmulss  xmm1, xmm0, cs:__real@447a0000
          vmovsd  xmm0, qword ptr [r13+0DB4h]
          vcvttss2si r9d, xmm1
          vmovsd  [rsp+170h+pAnimset], xmm0
          vmovsd  xmm0, qword ptr [r13+0DA8h]
          vmovsd  [rsp+170h+var_100], xmm0
          vmovups xmm0, xmmword ptr [rbp+70h+rot]
          vmovdqa [rbp+70h+var_A0], xmm0
        }
        SetupMotionWarp(v8, &trans, &v52, &v50, &pAnimset, _ER9 + level.frameDuration - _ER9 % level.frameDuration - v30);
        __asm { vmovaps xmm8, [rsp+170h+var_50] }
        result = 1;
        goto LABEL_24;
      }
    }
    else if ( notetrackName != scr_const.warp_arrival_end )
    {
      result = 0;
      goto LABEL_24;
    }
    result = 1;
LABEL_24:
    __asm
    {
      vmovaps xmm6, [rsp+170h+var_40]
      vmovaps xmm9, [rsp+170h+var_60]
    }
    return result;
  }
  v10 = &g_entities[v8];
  AIActorInterface::AIActorInterface(&v51.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v51.m_newAgentInterface);
  v51.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v51.m_pAI = NULL;
  AIWrapper::Setup(&v51, v10);
  v11 = v51.m_pAI;
  if ( !v51.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 576, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v11->GetAI(v11);
  return 1;
}

/*
==============
ASM_ArrivalIsStopped
==============
*/
bool ASM_ArrivalIsStopped(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams)
{
  __int64 v4; 
  const gentity_s *v5; 
  AIScriptedInterface *m_pAI; 
  __int64 v7; 
  int v8; 
  bool result; 
  AIWrapper v10; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 283, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v5 = &g_entities[v4];
  AIActorInterface::AIActorInterface(&v10.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v10.m_newAgentInterface);
  v10.m_pAI = NULL;
  v10.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AIWrapper::Setup(&v10, v5);
  m_pAI = v10.m_pAI;
  if ( !v10.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 284, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v7 = m_pAI->GetAI(m_pAI);
  result = 0;
  if ( *(_DWORD *)(v7 + 1652) )
  {
    v8 = *(_DWORD *)(v7 + 3520);
    if ( v8 > 0 && level.time >= v8 )
      return 1;
  }
  return result;
}

/*
==============
ASM_ShouldStartArrivalPassthroughSwitch
==============
*/
bool ASM_ShouldStartArrivalPassthroughSwitch(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams)
{
  __int64 v9; 
  const gentity_s *v10; 
  bool m_Bool; 
  AIScriptedInterface *m_pAI; 
  int v26; 
  bool v27; 
  bool v28; 
  scr_string_t NearestSpeedThresholdString; 
  const char *speedString; 
  scrContext_t *v51; 
  int v52; 
  Ai_Asm *v53; 
  ASM_Instance *Instance; 
  Ai_Asm *v55; 
  unsigned int ArrayVariable; 
  bool v63; 
  bool result; 
  float v73; 
  float v74; 
  char v75; 
  scr_string_t nodeType; 
  scr_string_t endNoteTrack; 
  int intValue; 
  unsigned int outVar; 
  scr_string_t startNoteTrack; 
  scr_string_t arrivalStateName; 
  VariableValue out; 
  ArrivalNode outNode; 
  AIWrapper v84; 
  vec3_t vFinalGoal; 
  vec3_t codeApproachDir; 
  AIAnimStopData outStopData; 

  v9 = entNum;
  arrivalStateName = toStateName;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 960, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v10 = &g_entities[v9];
  AIActorInterface::AIActorInterface(&v84.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v84.m_newAgentInterface);
  m_Bool = 0;
  v84.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v84.m_pAI = NULL;
  AIWrapper::Setup(&v84, v10);
  m_pAI = v84.m_pAI;
  if ( !v84.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 961, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  _RDI = (__int16 **)m_pAI->GetAI(m_pAI);
  nodeType = scr_const.exposed_cc;
  if ( numParams > 0 )
  {
    if ( !pParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 349, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
      __debugbreak();
    if ( pParams->m_Type != ParamType_String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 351, ASSERT_TYPE_ASSERT, "(pParams[ iParam ].m_Type == ParamType_String)", (const char *)&queryFormat, "pParams[ iParam ].m_Type == ParamType_String") )
      __debugbreak();
    nodeType = pParams->u.m_Int;
  }
  __asm { vmovaps [rsp+1F0h+var_50], xmm7 }
  if ( !AICommonInterface::HasPath(m_pAI) )
    goto LABEL_48;
  AICommonInterface::GetPathFinalGoal(m_pAI, &vFinalGoal);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0F0h+vFinalGoal]
    vmovss  xmm1, dword ptr [rbp+0F0h+vFinalGoal+4]
    vsubss  xmm3, xmm0, dword ptr [rax]
    vmovss  xmm0, dword ptr [rbp+0F0h+vFinalGoal+8]
    vsubss  xmm2, xmm1, dword ptr [rax+4]
    vsubss  xmm4, xmm0, dword ptr [rax+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm7, xmm3, xmm0
    vcomiss xmm7, cs:__real@47800000
  }
  if ( (unsigned __int64)*_RDI >= 0xFFFFFFFFFFFFFED0ui64 || *_RDI + 152 == NULL )
  {
    __asm
    {
      vmovaps [rsp+1F0h+var_60], xmm8
      vmovss  xmm8, cs:__real@3f800000
    }
    v75 = 0;
    AIScriptedInterface::GetDefaultSpeed(m_pAI);
    v26 = *((_DWORD *)_RDI + 762);
    if ( v26 && v26 != 5 )
      goto LABEL_25;
    v27 = *((_DWORD *)_RDI + 120) < scr_const.combat;
    v28 = *((_DWORD *)_RDI + 120) <= scr_const.combat;
    if ( *((_DWORD *)_RDI + 120) != scr_const.combat )
      goto LABEL_25;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+838h]
      vmovss  xmm2, dword ptr [rdi+83Ch]
      vmovss  xmm3, dword ptr [rdi+840h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@42800000
      vsqrtss xmm0, xmm7, xmm7
      vcomiss xmm0, xmm1
      vmovaps [rsp+1F0h+var_40], xmm6
      vsqrtss xmm6, xmm2, xmm2
    }
    if ( !v27 )
    {
      __asm { vcomiss xmm0, cs:__real@42dc0000 }
      if ( v28 )
      {
        __asm
        {
          vsubss  xmm0, xmm0, xmm1
          vmulss  xmm3, xmm0, cs:__real@3cb21643
          vsubss  xmm1, xmm8, xmm3
          vmulss  xmm2, xmm1, dword ptr [rdi+0D4Ch]
          vmulss  xmm0, xmm3, xmm6
          vaddss  xmm6, xmm2, xmm0
        }
      }
    }
    __asm { vmovaps xmm1, xmm6; desiredSpeed }
    NearestSpeedThresholdString = GetNearestSpeedThresholdString(*((scr_string_t *)_RDI + 866), *(float *)&_XMM1);
    GetAnimSpeedThresholdValue(*((scr_string_t *)_RDI + 866), NearestSpeedThresholdString);
    v75 = 1;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm1, xmm6, xmm0
      vmovaps xmm6, [rsp+1F0h+var_40]
      vmaxss  xmm8, xmm1, cs:__real@3f4ccccd
    }
    if ( NearestSpeedThresholdString )
      speedString = SL_ConvertToString(NearestSpeedThresholdString);
    else
LABEL_25:
      speedString = NULL;
    if ( numParams > 1 )
    {
      if ( !pParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 379, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
        __debugbreak();
      if ( pParams[1].m_Type != ParamType_Bool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 381, ASSERT_TYPE_ASSERT, "(pParams[ iParam ].m_Type == ParamType_Bool)", (const char *)&queryFormat, "pParams[ iParam ].m_Type == ParamType_Bool") )
        __debugbreak();
      m_Bool = pParams[1].u.m_Bool;
    }
    v51 = ScriptContext_Server();
    v52 = **_RDI;
    v53 = Ai_Asm::Singleton();
    Instance = Ai_Asm::GetInstance(v53, NULL, v52);
    v55 = Ai_Asm::Singleton();
    if ( Ai_Asm::GetEventData(v55, **_RDI, Instance, scr_const.cover_approach, &outVar, &intValue) )
    {
      ArrayVariable = FindArrayVariable(v51, outVar, intValue);
      if ( ArrayVariable )
      {
        Scr_EvalVariable_Out(v51, ArrayVariable, &out);
        if ( out.type != VAR_VECTOR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1024, ASSERT_TYPE_ASSERT, "( data.type == VAR_VECTOR )", (const char *)&queryFormat, "data.type == VAR_VECTOR") )
          __debugbreak();
        _R8 = out.u;
        __asm
        {
          vmovss  xmm2, dword ptr [r8+8]
          vmovss  xmm1, dword ptr [r8+4]
          vmovss  xmm0, dword ptr [r8]
          vmovss  dword ptr [rbp+0F0h+codeApproachDir], xmm0
          vmovss  dword ptr [rbp+0F0h+codeApproachDir+4], xmm1
          vmovss  dword ptr [rbp+0F0h+codeApproachDir+8], xmm2
        }
        RemoveRefToValue(v51, (unsigned __int8)out.type, out.u);
      }
    }
    __asm { vmovss  xmm1, cs:__real@bf800000 }
    startNoteTrack = 0;
    endNoteTrack = 0;
    __asm { vmovaps xmm0, xmm1 }
    if ( nodeType == scr_const.exposed_moving_cc )
    {
      __asm { vmovss  xmm0, cs:__real@3d8f5c29 }
      endNoteTrack = scr_const.code_move;
    }
    __asm
    {
      vmovss  [rsp+1F0h+var_1B0], xmm1
      vmovss  [rsp+1F0h+var_1B8], xmm0
    }
    v63 = CalculateStopData(m_pAI, &arrivalStateName, &nodeType, m_Bool, &codeApproachDir, 0, NULL, v73, v74, &startNoteTrack, &endNoteTrack, speedString, &outStopData);
    if ( v63 )
    {
      *((_DWORD *)_RDI + 873) = outStopData.stopAnimIndex;
      outNode.m_Type = UNDEFINED;
      GetArrivalNode(m_pAI, &outNode);
      if ( outNode.m_Type )
      {
        ArrivalNode::GetOrigin(&outNode, (vec3_t *)(_RDI + 437));
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0F0h+vFinalGoal]
          vmovss  dword ptr [rdi+0DA8h], xmm0
          vmovss  xmm1, dword ptr [rbp+0F0h+vFinalGoal+4]
          vmovss  dword ptr [rdi+0DACh], xmm1
          vmovss  xmm0, dword ptr [rbp+0F0h+vFinalGoal+8]
          vmovss  dword ptr [rdi+0DB0h], xmm0
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0F0h+var_B0.finalAngles]
        vmovss  dword ptr [rdi+0DB4h], xmm0
        vmovss  xmm1, dword ptr [rbp+0F0h+var_B0.finalAngles+4]
        vmovss  dword ptr [rdi+0DB8h], xmm1
        vmovss  xmm0, dword ptr [rbp+0F0h+var_B0.finalAngles+8]
        vmovss  dword ptr [rdi+0DBCh], xmm0
        vmovss  dword ptr [rdi+0DC8h], xmm8
      }
      *((_BYTE *)_RDI + 3532) = v75;
      *((_BYTE *)_RDI + 3535) = 1;
    }
    __asm { vmovaps xmm8, [rsp+1F0h+var_60] }
    result = v63;
  }
  else
  {
LABEL_48:
    result = 0;
  }
  __asm { vmovaps xmm7, [rsp+1F0h+var_50] }
  return result;
}

/*
==============
ASM_CalcArrivalType
==============
*/
char ASM_CalcArrivalType(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams)
{
  __int64 v4; 
  ai_scripted_t *AIScripted; 
  scr_string_t ArrivalType; 
  int v9; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v9 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1434, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v9) )
      __debugbreak();
  }
  AIScripted = AI_GetAIScripted(&g_entities[v4]);
  ArrivalType = GetArrivalType(v4);
  Scr_SetString(&AIScripted->blackboard.m_RunPassthroughType, ArrivalType);
  return 1;
}

/*
==============
ASM_ChooseAnim_Arrival
==============
*/
char ASM_ChooseAnim_Arrival(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams)
{
  return 1;
}

/*
==============
CalculateStopData
==============
*/
bool CalculateStopData(AIScriptedInterface *pAI, const scr_string_t *arrivalStateName, const scr_string_t *nodeType, bool bUseFootDown, const vec3_t *codeApproachDir, bool bCodeApproachValid, const char *optionalPrefix, float maxLerpScalar, float overShootRatio, const scr_string_t *startNoteTrack, const scr_string_t *endNoteTrack, const char *speedString, AIAnimStopData *outStopData)
{
  scr_string_t *v24; 
  gentity_s *v27; 
  char v35; 
  char v36; 
  const entityState_t *v37; 
  bool result; 
  const char *v56; 
  char v67; 
  gentity_s *TargetEntity; 
  scr_string_t AnimsetName; 
  __int64 v108; 
  __int64 v109; 
  int v127; 
  float v128; 
  float v129; 
  scr_string_t stateName; 
  AIAnimStopData *v131; 
  char *v132; 
  scr_string_t *endNotetrack; 
  scr_string_t *startNotetrack; 
  vec3_t *v135; 
  __int64 v136; 
  vec3_t angles; 
  vec3_t v138; 
  vec3_t animTargetAngles; 
  vec3_t outOrigin; 
  vec4_t vFinalGoal; 
  vec3_t vec; 
  vec4_t quat; 
  vec4_t v144; 
  ArrivalNode outNode; 
  vec3_t forward; 
  char dest[32]; 
  char v148; 
  void *retaddr; 

  _RAX = &retaddr;
  v136 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  v24 = (scr_string_t *)arrivalStateName;
  *(_QWORD *)v138.v = arrivalStateName;
  v135 = (vec3_t *)codeApproachDir;
  startNotetrack = (scr_string_t *)startNoteTrack;
  endNotetrack = (scr_string_t *)endNoteTrack;
  v132 = (char *)speedString;
  v131 = outStopData;
  _RDI = pAI->GetAI(pAI);
  outNode.m_Type = UNDEFINED;
  GetArrivalNode(pAI, &outNode);
  if ( outNode.m_Type )
  {
    if ( !AIScriptedInterface::IsBTGoalValid(pAI) )
    {
      if ( EntHandle::isDefined((EntHandle *)(_RDI + 1660)) )
      {
        v27 = EntHandle::ent((EntHandle *)(_RDI + 1660));
        if ( v27 )
        {
          if ( outNode.m_Type == SHAPE_CAST && outNode.m_pEnt == v27 )
          {
            EntHandle::ent((EntHandle *)(_RDI + 1660));
            AICommonInterface::GetPathFinalGoal(pAI, (vec3_t *)&vFinalGoal);
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+160h+vFinalGoal]
              vsubss  xmm4, xmm0, dword ptr [rbx+130h]
              vmovss  xmm1, dword ptr [rbp+160h+vFinalGoal+4]
              vsubss  xmm2, xmm1, dword ptr [rbx+134h]
              vmulss  xmm3, xmm2, xmm2
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm1, xmm3, xmm0
              vcomiss xmm1, cs:__real@45800000
            }
            if ( !(v35 | v36) )
              AIScriptedInterface::PathPending(pAI);
            v24 = *(scr_string_t **)v138.v;
          }
        }
      }
    }
    ArrivalNode::GetOrigin(&outNode, &outOrigin);
  }
  else
  {
    AICommonInterface::GetPathFinalGoal(pAI, &outOrigin);
  }
  v37 = *(const entityState_t **)_RDI;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+160h+outOrigin]
    vsubss  xmm8, xmm0, dword ptr [rcx+130h]
    vmovss  xmm1, dword ptr [rbp+160h+outOrigin+4]
    vsubss  xmm7, xmm1, dword ptr [rcx+134h]
    vmulss  xmm2, xmm7, xmm7
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm3, xmm1, xmm1
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm2, xmm0
    vmovss  dword ptr [rbp+160h+var_198], xmm1
    vdivss  xmm6, xmm2, xmm1
  }
  AngleVectors((const vec3_t *)&v37[1].lerp.apos.trBase.v[1], &forward, NULL, NULL);
  __asm
  {
    vmulss  xmm0, xmm7, xmm6
    vmulss  xmm3, xmm0, dword ptr [rbp+160h+forward+4]
    vmulss  xmm1, xmm8, xmm6
    vmulss  xmm2, xmm1, dword ptr [rbp+160h+forward]
    vaddss  xmm0, xmm3, xmm2
    vcomiss xmm0, cs:__real@3f34fdf4
  }
  if ( v35 )
  {
    result = 0;
    goto LABEL_47;
  }
  stateName = *v24;
  if ( *nodeType == scr_const.custom )
    bUseFootDown = *(_BYTE *)(_RDI + 1677);
  dest[0] = 0;
  if ( !bUseFootDown )
  {
    if ( !optionalPrefix || !*optionalPrefix )
      goto LABEL_28;
    v56 = optionalPrefix;
    goto LABEL_27;
  }
  v56 = "right";
  if ( *(_BYTE *)(_RDI + 3540) != 1 )
    v56 = "left";
  if ( !optionalPrefix || !*optionalPrefix )
  {
LABEL_27:
    Core_strncpy(dest, 0x20ui64, v56, 0x20ui64);
    goto LABEL_28;
  }
  Com_sprintf(dest, 0x20ui64, "%s%s", optionalPrefix, v56);
LABEL_28:
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+160h+outOrigin]
    vsubss  xmm1, xmm0, dword ptr [rax+130h]
    vmovss  dword ptr [rbp+160h+vec], xmm1
    vmovss  xmm2, dword ptr [rbp+160h+outOrigin+4]
    vsubss  xmm0, xmm2, dword ptr [rax+134h]
    vmovss  dword ptr [rbp+160h+vec+4], xmm0
    vmovss  xmm1, dword ptr [rbp+160h+outOrigin+8]
    vsubss  xmm2, xmm1, dword ptr [rax+138h]
    vmovss  dword ptr [rbp+160h+vec+8], xmm2
  }
  vectoangles(&vec, &angles);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbp+160h+angles]
    vmovsd  qword ptr [rbp+160h+animTargetAngles], xmm0
  }
  animTargetAngles.v[2] = angles.v[2];
  if ( *(_BYTE *)(_RDI + 1676) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+680h]
      vmovss  dword ptr [rbp+160h+angles], xmm0
      vmovss  xmm1, dword ptr [rdi+684h]
      vmovss  dword ptr [rbp+160h+angles+4], xmm1
      vmovss  xmm0, dword ptr [rdi+688h]
      vmovss  dword ptr [rbp+160h+angles+8], xmm0
    }
  }
  else
  {
    v67 = 0;
    TargetEntity = AICommonInterface::GetTargetEntity(pAI);
    __asm { vxorps  xmm13, xmm13, xmm13 }
    if ( (*nodeType == scr_const.exposed_cc || *nodeType == scr_const.exposed_crouch_cc) && (TargetEntity && AICommonInterface::RecentlySeeEnemy(pAI) || *(_BYTE *)(_RDI + 574)) )
    {
      if ( ShootParamsValid(pAI) || *(_BYTE *)(_RDI + 3062) )
      {
        *(float *)&_XMM0 = GetTurnDesiredYaw(pAI);
        __asm
        {
          vmovss  dword ptr [rbp+160h+angles], xmm13
          vmovss  dword ptr [rbp+160h+angles+4], xmm0
          vmovss  dword ptr [rbp+160h+angles+8], xmm13
          vmovss  dword ptr [rbp+160h+animTargetAngles], xmm13
          vmovss  dword ptr [rbp+160h+animTargetAngles+4], xmm0
          vmovss  dword ptr [rbp+160h+animTargetAngles+8], xmm13
        }
      }
      else if ( ArrivalNode::HasAngles(&outNode) )
      {
        ArrivalNode::GetAngles(&outNode, &angles);
        __asm
        {
          vmovsd  xmm0, qword ptr [rbp+160h+angles]
          vmovsd  qword ptr [rbp+160h+animTargetAngles], xmm0
        }
        animTargetAngles.v[2] = angles.v[2];
      }
    }
    else if ( ArrivalNode::HasAngles(&outNode) )
    {
      v67 = 1;
      ArrivalNode::GetAngles(&outNode, &angles);
      AnimsetName = BG_AnimationState_GetAnimsetName(*(const entityState_t **)_RDI);
      *(double *)&_XMM0 = BG_Animset_GetNodeHideYawOffset(AnimsetName, *nodeType);
      __asm
      {
        vmovss  dword ptr [rbp+160h+var_198], xmm13
        vmovss  dword ptr [rbp+160h+var_198+4], xmm0
        vmovss  dword ptr [rbp+160h+var_198+8], xmm13
      }
      AnglesToQuat(&angles, &quat);
      AnglesToQuat(&v138, &vFinalGoal);
      __asm
      {
        vmovss  xmm12, dword ptr [rbp+160h+quat]
        vmovss  xmm11, [rbp+160h+var_15C]
        vmulss  xmm1, xmm12, xmm11
        vmovss  xmm10, dword ptr [rbp+160h+vFinalGoal]
        vmovss  xmm7, dword ptr [rbp+160h+quat+0Ch]
        vmulss  xmm0, xmm10, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm8, dword ptr [rbp+160h+vFinalGoal+4]
        vmovss  xmm9, dword ptr [rbp+160h+quat+8]
        vmulss  xmm0, xmm8, xmm9
        vaddss  xmm1, xmm2, xmm0
        vmovss  xmm6, dword ptr [rbp+160h+vFinalGoal+8]
        vmovss  xmm5, dword ptr [rbp+160h+quat+4]
        vmulss  xmm0, xmm6, xmm5
        vsubss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rbp+160h+var_138], xmm1
        vmulss  xmm2, xmm5, xmm11
        vmulss  xmm0, xmm9, xmm10
        vsubss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm8, xmm7
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm0, xmm6, xmm12
        vaddss  xmm2, xmm4, xmm0
        vmovss  dword ptr [rbp+160h+var_138+4], xmm2
        vmulss  xmm1, xmm9, xmm11
        vmulss  xmm0, xmm5, xmm10
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm12
        vsubss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm7
        vaddss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rbp+160h+var_138+8], xmm2
        vmulss  xmm1, xmm11, xmm7
        vmulss  xmm0, xmm12, xmm10
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm8
        vsubss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm9
        vsubss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rbp+160h+var_138+0Ch], xmm2
      }
      QuatToAngles(&v144, &animTargetAngles);
    }
    if ( (*nodeType == scr_const.exposed_cc || *nodeType == scr_const.exposed_crouch_cc) && !v67 )
    {
      *(double *)&_XMM0 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(_RDI + 392) + 200i64))(*(_QWORD *)(_RDI + 392));
      __asm { vmovaps xmm6, xmm0 }
      bfx::AreaHandle::AreaHandle((bfx::AreaHandle *)&outNode.m_FakeNode.m_Angles.z);
      bfx::LinkHandle::LinkHandle((bfx::LinkHandle *)(&outNode.m_Type + 1));
      __asm { vmulss  xmm1, xmm6, cs:__real@3ecccccd }
      LOBYTE(v127) = 0;
      LOBYTE(v108) = 1;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, ArrivalNode *, int))(**(_QWORD **)(_RDI + 392) + 416i64))(*(_QWORD *)(_RDI + 392), v109, v108, &outNode, v127);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+160h+outOrigin]
        vsubss  xmm1, xmm0, dword ptr [rbp+160h+outNode.___u0]
        vmovss  dword ptr [rbp+160h+var_198], xmm1
        vmovss  xmm2, dword ptr [rbp+160h+outOrigin+4]
        vsubss  xmm0, xmm2, dword ptr [rbp+160h+outNode.___u0+4]
        vmovss  dword ptr [rbp+160h+var_198+4], xmm0
        vmovss  xmm1, dword ptr [rbp+160h+outOrigin+8]
        vsubss  xmm2, xmm1, dword ptr [rbp+160h+outNode.___u0+8]
        vmovss  dword ptr [rbp+160h+var_198+8], xmm2
      }
      *(double *)&_XMM0 = vectoyaw((const vec2_t *)&v138);
      __asm
      {
        vmovss  dword ptr [rbp+160h+animTargetAngles], xmm13
        vmovss  dword ptr [rbp+160h+animTargetAngles+4], xmm0
        vmovss  dword ptr [rbp+160h+animTargetAngles+8], xmm13
        vmovss  dword ptr [rbp+160h+angles], xmm13
        vmovss  dword ptr [rbp+160h+angles+4], xmm0
        vmovss  dword ptr [rbp+160h+angles+8], xmm13
      }
      bfx::LinkHandle::~LinkHandle((bfx::LinkHandle *)(&outNode.m_Type + 1));
      bfx::AreaHandle::~AreaHandle((bfx::AreaHandle *)&outNode.m_FakeNode.m_Angles.z);
    }
  }
  __asm
  {
    vmovss  xmm0, [rbp+160h+overShootRatio]
    vmovss  dword ptr [rsp+260h+var_210], xmm0
    vmovss  xmm1, [rbp+160h+maxLerpScalar]
    vmovss  [rsp+260h+var_218], xmm1
  }
  result = AIScriptedInterface::CalcStopData(pAI, &outOrigin, &angles, &animTargetAngles, v135, bCodeApproachValid, &stateName, dest, optionalPrefix, v128, v129, nodeType, startNotetrack, endNotetrack, v132, v131);
LABEL_47:
  _R11 = &v148;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
  return result;
}

/*
==============
ArrivalNode::GetAngles
==============
*/
char ArrivalNode::GetAngles(ArrivalNode *this, vec3_t *outAngles)
{
  ArrivalNode::ObjType m_Type; 
  __int32 v5; 
  __int32 v6; 
  gentity_s *m_pEnt; 

  m_Type = this->m_Type;
  if ( m_Type == UNDEFINED )
    return 0;
  v5 = m_Type - 1;
  if ( !v5 )
  {
    if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 186, ASSERT_TYPE_ASSERT, "(m_pNode)", (const char *)&queryFormat, "m_pNode") )
      __debugbreak();
    pathnode_t::GetAngles(this->m_pNode, outAngles);
    return 1;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( this->m_FakeNode.m_bHasAngles )
      {
        *outAngles = this->m_FakeNode.m_Angles;
        return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 182, ASSERT_TYPE_ASSERT, "(m_pEnt)", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  m_pEnt = this->m_pEnt;
  outAngles->v[0] = this->m_pEnt->r.currentAngles.v[0];
  outAngles->v[1] = m_pEnt->r.currentAngles.v[1];
  outAngles->v[2] = m_pEnt->r.currentAngles.v[2];
  return 1;
}

/*
==============
GetArrivalNode
==============
*/
bool GetArrivalNode(const AIScriptedInterface *pAI, ArrivalNode *outNode)
{
  __int64 v4; 
  gentity_s *v5; 
  bool result; 
  __int64 v7; 
  gentity_s *v8; 
  char v16; 
  vec3_t vFinalGoal; 
  vec3_t pos; 

  v4 = pAI->GetAI(&pAI->AICommonInterface);
  if ( EntHandle::isDefined((EntHandle *)(v4 + 1660)) && !AIScriptedInterface::IsBTGoalValid((AIScriptedInterface *)pAI) )
  {
    v5 = EntHandle::ent((EntHandle *)(v4 + 1660));
    outNode->m_pEnt = v5;
    outNode->m_Type = v5 != NULL ? SHAPE_CAST : UNDEFINED;
    return 1;
  }
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(gentity_s **)(v7 + 112);
  if ( v8 )
    goto LABEL_10;
  if ( *(_QWORD *)(v7 + 120) )
  {
    if ( AICommonInterface::HasPath(&pAI->AICommonInterface) && !*(_BYTE *)(v4 + 2981) )
    {
      pathnode_t::GetPos(*(pathnode_t **)(*(_QWORD *)(v4 + 8) + 120i64), &pos);
      AICommonInterface::GetPathFinalGoal(&pAI->AICommonInterface, &vFinalGoal);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+68h+vFinalGoal]
        vmovss  xmm1, dword ptr [rsp+68h+vFinalGoal+4]
        vsubss  xmm2, xmm1, dword ptr [rsp+68h+pos+4]
        vsubss  xmm4, xmm0, dword ptr [rsp+68h+pos]
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, cs:__real@42100000
      }
      if ( v16 )
      {
        v8 = *(gentity_s **)(*(_QWORD *)(v4 + 8) + 120i64);
LABEL_10:
        outNode->m_pEnt = v8;
        outNode->m_Type = v8 != NULL;
        return 1;
      }
    }
  }
  result = 0;
  outNode->m_pEnt = NULL;
  outNode->m_Type = UNDEFINED;
  return result;
}

/*
==============
GetArrivalType
==============
*/

__int64 __fastcall GetArrivalType(int entNum, __int64 a2, double _XMM2_8)
{
  __int64 v3; 
  const gentity_s *v4; 
  AIScriptedInterface *m_pAI; 
  __int64 v6; 
  __int64 v7; 
  pathnode_t *v8; 
  __int64 result; 
  unsigned __int16 BestCoverMultiNodeType; 
  __int16 type; 
  __int16 turretEntNumber; 
  const gentity_s *v13; 
  AIScriptedInterface *v14; 
  _DWORD *v15; 
  const Weapon *v16; 
  char v17; 
  _DWORD *v18; 
  int v19; 
  scr_string_t exposed_cc; 
  int v21; 
  scr_string_t cover_right_cc; 
  int v23; 
  scr_string_t cover_left_cc; 
  AIWrapper outNode; 
  AIWrapper v35; 
  vec3_t pos; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1293, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v4 = &g_entities[v3];
  AIActorInterface::AIActorInterface(&v35.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v35.m_newAgentInterface);
  v35.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v35.m_pAI = NULL;
  AIWrapper::Setup(&v35, v4);
  m_pAI = v35.m_pAI;
  if ( !v35.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1294, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v6 = m_pAI->GetAI(m_pAI);
  LODWORD(outNode.m_newAgentInterface.__vftable) = 0;
  v7 = v6;
  GetArrivalNode(m_pAI, (ArrivalNode *)&outNode);
  if ( LODWORD(outNode.m_newAgentInterface.__vftable) != 1 || *(_DWORD *)(v7 + 1632) == 3 )
  {
    if ( AIScriptedInterface::GetCoverTacPoint(m_pAI) )
    {
      if ( AIScriptedInterface::IsStanceAllowed(m_pAI, STANCE_CROUCH) && *(_DWORD *)(v7 + 480) == scr_const.combat )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vaddss  xmm1, xmm0, dword ptr [rbx]
          vaddss  xmm3, xmm1, dword ptr [rbx+8]
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, ebp
          vaddss  xmm0, xmm3, xmm2
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcvttss2si eax, xmm0
        }
        if ( (_EAX & 1) != 0 )
          return (unsigned int)scr_const.exposed_crouch_cc;
      }
    }
    else if ( *(_DWORD *)(v7 + 484) == 2 )
    {
      return (unsigned int)scr_const.exposed_crouch_cc;
    }
    return (unsigned int)scr_const.exposed_cc;
  }
  v8 = (pathnode_t *)outNode.m_actorInterface.__vftable;
  if ( !outNode.m_actorInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1327, ASSERT_TYPE_ASSERT, "(arrivalNode.IsNode() && pArrivalNode)", (const char *)&queryFormat, "arrivalNode.IsNode() && pArrivalNode") )
    __debugbreak();
  if ( AICommonInterface::GetTargetEntity(m_pAI) && IsCoverInvalidAgainstEnemy((ai_scripted_t *)v7, v8) || *(_BYTE *)(v7 + 574) )
  {
    if ( !Path_DoesNodeAllowStance(v8, (const scr_string_t)scr_const.stand) || !AIScriptedInterface::IsStanceAllowed(m_pAI, STANCE_STAND) )
    {
      if ( !Path_DoesNodeAllowStance(v8, (const scr_string_t)scr_const.crouch) || !AIScriptedInterface::IsStanceAllowed(m_pAI, STANCE_CROUCH) )
        return (unsigned int)scr_const.cover_prone_cc;
      return (unsigned int)scr_const.exposed_crouch_cc;
    }
    return (unsigned int)scr_const.exposed_cc;
  }
  if ( v8->constant.type == 31 )
  {
    BestCoverMultiNodeType = GetBestCoverMultiNodeType((ai_scripted_t *)v7, v8);
    if ( BestCoverMultiNodeType != 1 )
    {
      type = v8->constant.type;
      if ( type == 31 )
        type = v8->dynamic.turretEntNumber;
      if ( BestCoverMultiNodeType != type )
        v8->dynamic.turretEntNumber = BestCoverMultiNodeType;
    }
  }
  turretEntNumber = v8->constant.type;
  if ( turretEntNumber == 31 )
    turretEntNumber = v8->dynamic.turretEntNumber;
  AIActorInterface::AIActorInterface(&outNode.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&outNode.m_newAgentInterface);
  v13 = *(const gentity_s **)v7;
  outNode.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  outNode.m_pAI = NULL;
  AIWrapper::Setup(&outNode, v13);
  v14 = outNode.m_pAI;
  if ( !outNode.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1209, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v15 = *(_DWORD **)(*(_QWORD *)(v7 + 8) + 112i64);
  v16 = v14->GetEquippedWeapon(v14);
  if ( BG_GetWeaponClass(v16, 0) == WEAPCLASS_MG )
  {
    if ( v15 && (*v15 & 0x10000) == 0 )
    {
LABEL_34:
      v17 = 0;
      goto LABEL_35;
    }
  }
  else
  {
    v18 = *(_DWORD **)(v7 + 552);
    if ( !v18 || !v15 || v18 != v15 || (*v15 & 0x10000) == 0 )
      goto LABEL_34;
  }
  v17 = 1;
  if ( turretEntNumber == 2 )
    return (unsigned int)scr_const.cover_stand_lmg_cc;
  if ( turretEntNumber == 3 || turretEntNumber == 5 )
    return (unsigned int)scr_const.cover_crouch_lmg_cc;
LABEL_35:
  result = *(unsigned int *)(v7 + 540);
  if ( !(_DWORD)result || v17 )
  {
    pathnode_t::GetPos(v8, &pos);
    switch ( turretEntNumber )
    {
      case 1:
      case 9:
        v19 = ChooseArrivalPose(m_pAI, v8, &pos);
        if ( v19 == 4 )
          goto $LN44_2;
        exposed_cc = scr_const.exposed_cc;
        if ( v19 == 2 )
          exposed_cc = scr_const.exposed_crouch_cc;
        result = (unsigned int)exposed_cc;
        break;
      case 2:
      case 10:
        result = (unsigned int)scr_const.cover_stand_cc;
        break;
      case 3:
      case 4:
      case 11:
        result = (unsigned int)scr_const.cover_crouch_cc;
        break;
      case 5:
      case 12:
$LN44_2:
        result = (unsigned int)scr_const.cover_prone_cc;
        break;
      case 6:
        v21 = ChooseArrivalPose(m_pAI, v8, &pos);
        cover_right_cc = scr_const.cover_right_cc;
        if ( v21 == 2 )
          cover_right_cc = scr_const.cover_right_crouch_cc;
        result = (unsigned int)cover_right_cc;
        break;
      case 7:
        v23 = ChooseArrivalPose(m_pAI, v8, &pos);
        cover_left_cc = scr_const.cover_left_cc;
        if ( v23 == 2 )
          cover_left_cc = scr_const.cover_left_crouch_cc;
        result = (unsigned int)cover_left_cc;
        break;
      default:
        result = (unsigned int)scr_const.exposed_cc;
        break;
    }
  }
  return result;
}

/*
==============
GetBestCoverMultiNodeType
==============
*/
__int64 GetBestCoverMultiNodeType(ai_scripted_t *pScripted, const pathnode_t *pNode)
{
  gentity_s *ent; 
  AIScriptedInterface *m_pAI; 
  const sentient_s *sentient; 
  unsigned int spawnflags; 
  unsigned int v32; 
  bool v33; 
  bool v34; 
  __int64 v35; 
  bool v36; 
  char v37; 
  AIWrapper v39; 
  vec3_t outLastKnownPos; 
  vec3_t pos; 
  vec2_t vec; 

  AIActorInterface::AIActorInterface(&v39.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v39.m_newAgentInterface);
  ent = pScripted->ent;
  v39.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v39.m_pAI = NULL;
  AIWrapper::Setup(&v39, ent);
  m_pAI = v39.m_pAI;
  if ( !v39.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1224, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  _RAX = AICommonInterface::GetTargetEntity(m_pAI);
  _RBX = _RAX;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( _RAX )
  {
    __asm { vmovss  xmm0, dword ptr [rax+130h] }
    sentient = _RAX->sentient;
    __asm
    {
      vmovaps [rsp+0D8h+var_18], xmm6
      vmovss  xmm1, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+0D8h+outLastKnownPos], xmm0
      vmovss  xmm0, dword ptr [rax+138h]
      vmovss  dword ptr [rsp+0D8h+outLastKnownPos+8], xmm0
      vmovss  dword ptr [rsp+0D8h+outLastKnownPos+4], xmm1
    }
    if ( sentient && Sentient_GetSentientInfo(pScripted->sentient, sentient)->lastKnownPosTime > 0 )
      Sentient_GetLastKnownEnemyPos(pScripted->sentient, _RBX, &outLastKnownPos);
    pathnode_t::GetPos((pathnode_t *)pNode, &pos);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vsubss  xmm1, xmm0, dword ptr [rsp+0D8h+pos]
      vmovss  xmm2, dword ptr [rbx+134h]
      vsubss  xmm0, xmm2, dword ptr [rsp+0D8h+pos+4]
      vmovss  dword ptr [rsp+0D8h+vec], xmm1
      vmovss  xmm1, dword ptr [rbx+138h]
      vsubss  xmm2, xmm1, dword ptr [rsp+0D8h+pos+8]
      vmovss  [rsp+0D8h+var_30], xmm2
      vmovss  dword ptr [rsp+0D8h+vec+4], xmm0
    }
    *(double *)&_XMM0 = vectoyaw(&vec);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = pathnode_t::GetAngle((pathnode_t *)pNode);
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vmulss  xmm5, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vmovaps xmm6, [rsp+0D8h+var_18]
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm3, xmm0, xmm2
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm4, xmm1, xmm3, 1
      vsubss  xmm0, xmm5, xmm4
      vmulss  xmm0, xmm0, cs:__real@43b40000
    }
  }
  spawnflags = pNode->constant.spawnflags;
  v32 = pNode->constant.spawnflags & 0x204;
  v33 = (pNode->constant.spawnflags & 0x400) != 0 && !v32 || (spawnflags & 0x200000) != 0 && (spawnflags & 8) == 0;
  v34 = (spawnflags & 0x800) != 0 && !v32 || (spawnflags & 0x400000) != 0 && (spawnflags & 8) == 0;
  LOBYTE(v35) = (spawnflags & 0x100000) != 0 && (spawnflags & 8) == 0;
  if ( (spawnflags & 0x200) == 0 || (v36 = (spawnflags & 4) == 0, (spawnflags & 4) != 0) )
  {
    v37 = 0;
    v36 = 1;
  }
  else
  {
    v37 = 1;
  }
  __asm { vcomiss xmm0, cs:__real@41f00000 }
  if ( v36 )
  {
    __asm { vcomiss xmm0, cs:__real@c1f00000 }
    if ( (_BYTE)v35 )
      return 3i64;
    if ( v37 )
      return 2i64;
  }
  else if ( v33 )
  {
    return 7i64;
  }
  if ( (_BYTE)v35 )
    LOWORD(outLastKnownPos.v[0]) = 3;
  v35 = (unsigned __int8)v35;
  if ( v37 )
  {
    *((_WORD *)outLastKnownPos.v + v35) = 2;
    v35 = (unsigned int)(v35 + 1);
  }
  if ( v34 )
  {
    *((_WORD *)outLastKnownPos.v + v35) = 6;
    v35 = (unsigned int)(v35 + 1);
  }
  if ( v33 )
  {
    *((_WORD *)outLastKnownPos.v + v35) = 7;
    LODWORD(v35) = v35 + 1;
  }
  if ( (_DWORD)v35 )
    return *((unsigned __int16 *)outLastKnownPos.v + pScripted->ent->s.number % (int)v35);
  else
    return 1i64;
}

/*
==============
ArrivalNode::GetOrigin
==============
*/
char ArrivalNode::GetOrigin(ArrivalNode *this, vec3_t *outOrigin)
{
  ArrivalNode::ObjType m_Type; 
  __int32 v5; 
  __int32 v6; 
  gentity_s *m_pEnt; 

  m_Type = this->m_Type;
  if ( m_Type == UNDEFINED )
    return 0;
  v5 = m_Type - 1;
  if ( !v5 )
  {
    if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 164, ASSERT_TYPE_ASSERT, "(m_pNode)", (const char *)&queryFormat, "m_pNode") )
      __debugbreak();
    pathnode_t::GetPos(this->m_pNode, outOrigin);
    return 1;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      *outOrigin = *(vec3_t *)&this->m_pEnt;
      return 1;
    }
    return 1;
  }
  if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 160, ASSERT_TYPE_ASSERT, "(m_pEnt)", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  m_pEnt = this->m_pEnt;
  outOrigin->v[0] = this->m_pEnt->r.currentOrigin.v[0];
  outOrigin->v[1] = m_pEnt->r.currentOrigin.v[1];
  outOrigin->v[2] = m_pEnt->r.currentOrigin.v[2];
  return 1;
}

/*
==============
GetTurnDesiredYaw
==============
*/
float GetTurnDesiredYaw(AIScriptedInterface *pAI)
{
  pathnode_t *v14; 
  __int16 type; 
  char v27; 
  vec3_t pos; 
  vec2_t vec; 

  _RAX = pAI->GetAI(pAI);
  _RBX = _RAX;
  if ( *(_BYTE *)(_RAX + 3061) )
  {
    __asm { vmovss  xmm0, dword ptr [rax+0C14h] }
    return *(float *)&_XMM0;
  }
  _R14 = 0i64;
  _RSI = NULL;
  if ( ShootParamsValid(pAI) )
  {
    if ( *(_BYTE *)(_RBX + 525) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1F0h]
        vmovss  xmm1, dword ptr [rbx+1F4h]
        vmovss  xmm2, dword ptr [rbx+1F8h]
      }
LABEL_16:
      __asm
      {
        vsubss  xmm0, xmm0, dword ptr [rax+130h]
        vmovss  dword ptr [rsp+98h+pos], xmm0
        vsubss  xmm1, xmm1, dword ptr [rax+134h]
        vmovss  dword ptr [rsp+98h+pos+4], xmm1
        vsubss  xmm0, xmm2, dword ptr [rax+138h]
        vmovss  dword ptr [rsp+98h+pos+8], xmm0
      }
      *(double *)&_XMM0 = vectoyaw((const vec2_t *)&pos);
      return *(float *)&_XMM0;
    }
    if ( EntHandle::isDefined((EntHandle *)(_RBX + 508)) )
      _RSI = EntHandle::ent((EntHandle *)(_RBX + 508));
  }
  else if ( *(_BYTE *)(_RBX + 3062) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0BF8h]
      vmovss  xmm1, dword ptr [rbx+0BFCh]
      vmovss  xmm2, dword ptr [rbx+0C00h]
    }
    goto LABEL_16;
  }
  v14 = *(pathnode_t **)(*(_QWORD *)(_RBX + 8) + 112i64);
  if ( !v14 )
    goto LABEL_17;
  type = v14->constant.type;
  if ( type == 31 )
    type = v14->dynamic.turretEntNumber;
  if ( type != 9 )
    goto LABEL_17;
  pathnode_t::GetPos(v14, &pos);
  _RBP = *(_QWORD *)_RBX;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+130h]
    vsubss  xmm3, xmm0, dword ptr [rsp+98h+pos]
    vmovss  xmm1, dword ptr [rbp+134h]
    vsubss  xmm2, xmm1, dword ptr [rsp+98h+pos+4]
    vmovss  xmm0, dword ptr [rbp+138h]
    vsubss  xmm4, xmm0, dword ptr [rsp+98h+pos+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@42100000
  }
  if ( v27 )
  {
    *(double *)&_XMM0 = pathnode_t::GetAngle(v14);
    __asm
    {
      vsubss  xmm1, xmm0, dword ptr [rbp+140h]
      vmulss  xmm5, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm3, xmm0, xmm2
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm4, xmm1, xmm3, 1
      vsubss  xmm0, xmm5, xmm4
      vmulss  xmm0, xmm0, cs:__real@43b40000
    }
  }
  else
  {
LABEL_17:
    if ( _RSI )
    {
      _RCX = _RSI->sentient;
      __asm
      {
        vmovaps [rsp+98h+var_28], xmm6
        vmovaps [rsp+98h+var_38], xmm7
        vmovaps [rsp+98h+var_48], xmm8
        vmovss  xmm2, cs:__real@3fc00000
        vmovss  xmm6, dword ptr [rsi+130h]
        vmovss  xmm7, dword ptr [rsi+134h]
        vmovss  xmm8, dword ptr [rsi+138h]
        vmovq   xmm0, rcx
        vmovq   xmm1, r14
        vpcmpeqq xmm3, xmm0, xmm1
        vmovss  xmm1, cs:__real@3e800000
        vblendvps xmm0, xmm1, xmm2, xmm3
        vmovss  [rsp+98h+var_78], xmm0
      }
      if ( _RCX )
      {
        Sentient_GetVelocity(_RCX, &pos);
        __asm
        {
          vmovss  xmm2, [rsp+98h+var_78]
          vmulss  xmm0, xmm2, dword ptr [rsp+98h+pos]
          vmulss  xmm1, xmm2, dword ptr [rsp+98h+pos+4]
          vaddss  xmm6, xmm0, xmm6
          vmulss  xmm0, xmm2, dword ptr [rsp+98h+pos+8]
          vaddss  xmm8, xmm0, xmm8
          vaddss  xmm7, xmm1, xmm7
        }
      }
      __asm
      {
        vsubss  xmm0, xmm6, dword ptr [rax+130h]
        vmovss  dword ptr [rsp+98h+vec], xmm0
        vsubss  xmm1, xmm7, dword ptr [rax+134h]
        vmovss  dword ptr [rsp+98h+vec+4], xmm1
        vsubss  xmm0, xmm8, dword ptr [rax+138h]
        vmovss  [rsp+98h+var_58], xmm0
      }
      *(double *)&_XMM0 = vectoyaw(&vec);
      __asm
      {
        vmovaps xmm8, [rsp+98h+var_48]
        vmovaps xmm7, [rsp+98h+var_38]
        vmovaps xmm6, [rsp+98h+var_28]
      }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
ArrivalNode::HasAngles
==============
*/
bool ArrivalNode::HasAngles(ArrivalNode *this)
{
  ArrivalNode::ObjType m_Type; 
  __int32 v3; 
  __int32 v4; 
  __int16 y_high; 

  m_Type = this->m_Type;
  if ( m_Type )
  {
    v3 = m_Type - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          return this->m_FakeNode.m_bHasAngles;
        return 0;
      }
      return 1;
    }
    if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 209, ASSERT_TYPE_ASSERT, "(m_pNode)", (const char *)&queryFormat, "m_pNode") )
      __debugbreak();
    y_high = HIWORD(this->m_pEnt->s.lerp.apos.trDelta.y);
    if ( ((1 << y_high) & 0x2000200) == 0 && y_high != 1 )
      return 1;
  }
  return 0;
}

/*
==============
IsCoverInvalidAgainstEnemy
==============
*/
bool IsCoverInvalidAgainstEnemy(ai_scripted_t *pScripted, const pathnode_t *pNode)
{
  gentity_s *ent; 
  AIScriptedInterface *m_pAI; 
  gentity_s *v6; 
  AIScriptedInterface *v7; 
  gentity_s *v8; 
  AIScriptedInterface *v9; 
  sentient_s *TargetSentient; 
  const pathnode_t *pClaimedNode; 
  AIWrapper v13; 
  AIWrapper v14; 
  AIWrapper v15; 

  AIActorInterface::AIActorInterface(&v13.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v13.m_newAgentInterface);
  ent = pScripted->ent;
  v13.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v13.m_pAI = NULL;
  AIWrapper::Setup(&v13, ent);
  m_pAI = v13.m_pAI;
  if ( !v13.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1193, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( AIScriptedInterface::Cover_IsValidAgainstEnemy(m_pAI, pNode, 1) )
    return 0;
  AIActorInterface::AIActorInterface(&v14.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v14.m_newAgentInterface);
  v6 = pScripted->ent;
  v14.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v14.m_pAI = NULL;
  AIWrapper::Setup(&v14, v6);
  v7 = v14.m_pAI;
  if ( !v14.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1181, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( !AICommonInterface::GetTargetSentient(v7) )
    return 0;
  if ( pScripted->fixedNode )
  {
    AIActorInterface::AIActorInterface(&v15.m_actorInterface);
    AIAgentInterface::AIAgentInterface(&v15.m_newAgentInterface);
    v8 = pScripted->ent;
    v15.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v15.m_pAI = NULL;
    AIWrapper::Setup(&v15, v8);
    v9 = v15.m_pAI;
    if ( !v15.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1131, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    TargetSentient = AICommonInterface::GetTargetSentient(v9);
    if ( TargetSentient )
    {
      if ( v9->Is3D(v9) )
        return 0;
      if ( pNode || (pNode = pScripted->sentient->pClaimedNode) != NULL )
      {
        pClaimedNode = TargetSentient->pClaimedNode;
        if ( pClaimedNode )
        {
          if ( !Path_NodesVisible(pNode, pClaimedNode) )
            return 0;
        }
        if ( !AICommonInterface::RecentlySeeSentient(v9, TargetSentient, 8000) )
          return 0;
      }
    }
  }
  return AIScriptedInterface::CanShootEnemyFromExposedAtNode(v7, 1000, 0);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetArrivalAnimData
==============
*/
void AIScriptedInterface::OnScrCmd_SetArrivalAnimData(AIScriptedInterface *this, scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  scr_string_t AnimsetName; 
  const Animset *v9; 
  const char *name; 
  const char *String; 
  XAnimSubTreeID v12; 
  const XAnimTree *v13; 
  const XAnim_s *SubTreeAnims; 
  int NumParam; 
  float fmt; 
  float pOutAnimSubtreeID; 
  XAnimSubTreeID v26[2]; 
  int pOutStateIndex; 
  unsigned int pOutAnimIndex; 
  AnimsetState *outState; 
  unsigned int pOutGraftNode; 
  vec3_t trans; 
  vec4_t quat; 
  vec4_t rot; 

  _RSI = this->m_pAI;
  ConstString = Scr_GetConstString(scrContext, 0);
  _RSI->asmInstanceData.u.m_Arrival.m_AnimEntry = Scr_GetInt(scrContext, 1u);
  if ( Scr_GetType(scrContext, 2u) )
  {
    Scr_GetVector(scrContext, 2u, &_RSI->asmInstanceData.u.m_Arrival.m_TargetPos);
  }
  else
  {
    AnimsetName = BG_AnimationState_GetAnimsetName((const entityState_t *)this->m_pAI->ent);
    v9 = Animset_Find(AnimsetName);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 54, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
      __debugbreak();
    outState = NULL;
    BG_Animset_GetStateInfoByName(v9, ConstString, &outState, &pOutStateIndex);
    if ( !outState )
    {
      name = v9->name;
      String = Scr_GetString(scrContext, 0);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 59, ASSERT_TYPE_ASSERT, "( pState )", "unable to find state %s in animset %s", String, name) )
        __debugbreak();
    }
    BG_Animset_GetAnimIndexFromStateIndexAndEntry(v9, pOutStateIndex, _RSI->asmInstanceData.u.m_Arrival.m_AnimEntry, &pOutAnimIndex, &pOutGraftNode, v26, NULL);
    v12 = v26[0];
    v13 = this->GetAnimTree(this);
    SubTreeAnims = XAnimGetSubTreeAnims(v13, v12);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vmovss  dword ptr [rsp+0B8h+pOutAnimSubtreeID], xmm0
      vmovss  dword ptr [rsp+0B8h+fmt], xmm1
    }
    XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &rot, &trans, fmt, pOutAnimSubtreeID);
    AnglesToQuat(&this->m_pAI->ent->r.currentAngles, &quat);
    QuatTransform(&quat, &trans, &_RSI->asmInstanceData.u.m_Arrival.m_TargetPos);
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vaddss  xmm1, xmm0, dword ptr [rsi+0DA8h]
      vmovss  dword ptr [rsi+0DA8h], xmm1
      vmovss  xmm2, dword ptr [rcx+134h]
      vaddss  xmm0, xmm2, dword ptr [rsi+0DACh]
      vmovss  dword ptr [rsi+0DACh], xmm0
      vmovss  xmm1, dword ptr [rcx+138h]
      vaddss  xmm2, xmm1, dword ptr [rsi+0DB0h]
      vmovss  dword ptr [rsi+0DB0h], xmm2
    }
  }
  Scr_GetVector(scrContext, 3u, &_RSI->asmInstanceData.u.m_Arrival.m_TargetAngles);
  NumParam = Scr_GetNumParam(scrContext);
  _RSI->asmInstanceData.u.m_Arrival.m_bUseAnimRateOverride = 0;
  if ( NumParam > 4 && Scr_GetType(scrContext, 4u) )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 4u);
    __asm { vmovss  dword ptr [rsi+0DC8h], xmm0 }
    _RSI->asmInstanceData.u.m_Arrival.m_bUseAnimRateOverride = 1;
  }
  _RSI->asmInstanceData.u.m_Arrival.m_bRateScaleBasedOnWarp = 1;
  if ( NumParam > 5 )
  {
    if ( Scr_GetType(scrContext, 5u) )
      _RSI->asmInstanceData.u.m_Arrival.m_bRateScaleBasedOnWarp = Scr_GetInt(scrContext, 5u) != 0;
  }
}

/*
==============
ShootParamsValid
==============
*/
bool ShootParamsValid(AIScriptedInterface *pAI)
{
  __int64 v2; 
  __int64 v3; 
  gentity_s *TargetEntity; 

  if ( !pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 663, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v2 = pAI->GetAI(pAI);
  v3 = v2;
  if ( !*(_BYTE *)(v2 + 529) )
    return 0;
  if ( *(_BYTE *)(v2 + 525) && !*(_BYTE *)(v2 + 528) && !EntHandle::isDefined((EntHandle *)(v2 + 508)) )
    return 1;
  return !*(_BYTE *)(v3 + 1745) && (TargetEntity = AICommonInterface::GetTargetEntity(pAI)) != NULL && EntHandle::isDefined((EntHandle *)(v3 + 508)) && EntHandle::ent((EntHandle *)(v3 + 508)) == TargetEntity && AIScriptedInterface::IsCurrentEnemyValid(pAI);
}

