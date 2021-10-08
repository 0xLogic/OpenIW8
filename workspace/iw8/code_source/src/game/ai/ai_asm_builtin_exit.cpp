/*
==============
ASM_PlayAnim_Exit_Terminate
==============
*/

bool __fastcall ASM_PlayAnim_Exit_Terminate(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_PlayAnim_Exit_Terminate@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, toStateName, numParams, pParams, pOutValue);
}

/*
==============
ASM_ChooseAnim_Exit
==============
*/

bool __fastcall ASM_ChooseAnim_Exit(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_ChooseAnim_Exit@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, toStateName, numParams, pParams, pOutValue);
}

/*
==============
ASM_Exit_NoteHandler
==============
*/

bool __fastcall ASM_Exit_NoteHandler(int entNum, const scr_string_t asmName, const scr_string_t notetrackName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_Exit_NoteHandler@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, notetrackName, numParams, pParams, pOutValue);
}

/*
==============
PlayStartAnim
==============
*/

void __fastcall PlayStartAnim(AIScriptedInterface *pAI, const scr_string_t asmName, const scr_string_t stateName, int animID)
{
  ?PlayStartAnim@@YAXPEAVAIScriptedInterface@@W4scr_string_t@@1H@Z(pAI, asmName, stateName, animID);
}

/*
==============
ASM_PlayAnim_Exit
==============
*/

bool __fastcall ASM_PlayAnim_Exit(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  return ?ASM_PlayAnim_Exit@@YA_NHW4scr_string_t@@0HPEAUASM_Function_Param@@PEAX@Z(entNum, asmName, toStateName, numParams, pParams, pOutValue);
}

/*
==============
ASM_ChooseAnim_Exit
==============
*/
char ASM_ChooseAnim_Exit(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams, void *pOutValue)
{
  AIScriptedInterface *m_pAI; 
  bool BoolParam; 
  scr_string_t NextLowestSpeedThresholdName; 
  bool v14; 
  __int64 v18; 
  int v19; 
  char v21; 
  char v22; 
  AINavigator *Navigator; 
  char v32; 
  int started; 
  AIWrapper v36; 

  AIWrapper::AIWrapper(&v36, &g_entities[entNum]);
  m_pAI = v36.m_pAI;
  if ( !v36.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 327, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  _RSI = m_pAI->GetAI(m_pAI);
  BoolParam = 0;
  NextLowestSpeedThresholdName = 0;
  if ( numParams > 0 )
    BoolParam = ASM_Builtin_GetBoolParam(0, pParams, numParams);
  v14 = 0;
  if ( numParams > 1 )
    v14 = ASM_Builtin_GetBoolParam(1, pParams, numParams);
  if ( BoolParam && *(_DWORD *)(_RSI + 480) == scr_const.combat )
  {
    *(double *)&_XMM0 = AIScriptedInterface::DetermineDesiredExitSpeed(m_pAI);
    __asm { vmovaps xmm1, xmm0; desiredSpeed }
    NextLowestSpeedThresholdName = GetNextLowestSpeedThresholdName(*(scr_string_t *)(_RSI + 3464), *(float *)&_XMM1);
    GetAnimSpeedThresholdValue(*(scr_string_t *)(_RSI + 3464), NextLowestSpeedThresholdName);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  }
  __asm { vmovss  dword ptr [rsi+0DBCh], xmm0 }
  v18 = m_pAI->GetAI(m_pAI);
  if ( !AICommonInterface::HasPath(m_pAI) || *(_BYTE *)(v18 + 2981) || !*(_BYTE *)(v18 + 330) || *(_BYTE *)(v18 + 1751) || *(_DWORD *)(v18 + 2376) )
    goto LABEL_26;
  v19 = *(_DWORD *)(v18 + 480);
  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovss  xmm6, cs:__real@42c80000
  }
  if ( v19 == scr_const.casual )
    goto LABEL_22;
  if ( v19 == scr_const.casual_gun )
    goto LABEL_22;
  *(double *)&_XMM0 = AIScriptedInterface::GetDefaultSpeed(m_pAI);
  __asm { vcomiss xmm0, cs:__real@42700000 }
  if ( v21 | v22 )
  {
LABEL_22:
    __asm { vmovss  xmm3, cs:__real@42480000 }
    _EAX = 0;
    __asm { vmovd   xmm1, eax }
    _EAX = *(unsigned __int8 *)(v18 + 1752);
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@41c80000
      vblendvps xmm6, xmm1, xmm3, xmm2
    }
  }
  else if ( *(_BYTE *)(v18 + 1752) )
  {
    __asm { vmovss  xmm6, cs:__real@42480000 }
  }
  Navigator = AICommonInterface::GetNavigator(m_pAI);
  __asm { vmovaps xmm1, xmm6 }
  v32 = ((__int64 (__fastcall *)(AINavigator *))Navigator->IsPathDistToGoalOrLinkAtLeast)(Navigator);
  __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
  if ( !v32 || (started = DetermineStartAnim(m_pAI, toStateName, v14, NextLowestSpeedThresholdName), started < 0) )
  {
LABEL_26:
    ASM_ReturnAnimIDUndefined(pOutValue);
    return 1;
  }
  else
  {
    ASM_ReturnAnimID(started, pOutValue);
    return 1;
  }
}

/*
==============
ASM_PlayAnim_Exit
==============
*/
char ASM_PlayAnim_Exit(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams)
{
  __int64 v6; 
  AIScriptedInterface *m_pAI; 
  int AnimID; 
  char v14; 
  Ai_Asm *v15; 
  ASM_Instance *Instance; 
  Ai_Asm *v18; 
  char v21; 
  AIWrapper v22; 

  v6 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 551, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  AIWrapper::AIWrapper(&v22, &g_entities[v6]);
  m_pAI = v22.m_pAI;
  if ( !v22.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 552, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AnimID = ASM_GetAnimID(v6, asmName, toStateName);
  _RBX = m_pAI->GetAI(m_pAI);
  if ( AnimID == -12345 )
  {
    *(double *)&_XMM0 = AIScriptedInterface::GetDefaultSpeed(m_pAI);
    __asm
    {
      vmovss  xmm1, cs:__real@42480000
      vcomiss xmm0, xmm1
    }
    if ( v14 )
      __asm { vmulss  xmm1, xmm0, cs:__real@3f000000 }
    __asm { vmovss  dword ptr [rbx+0D4Ch], xmm1 }
    v15 = Ai_Asm::Singleton();
    Instance = Ai_Asm::GetInstance(v15, NULL, v6);
    AI_ASM_FireEvent(Instance, (const scr_string_t)scr_const.abort);
    AI_ASM_FireEvent(Instance, (const scr_string_t)scr_const.code_move);
    AI_ASM_FireEvent(Instance, (const scr_string_t)scr_const.end);
    AI_ASM_FireEvent(Instance, (const scr_string_t)scr_const.finish);
    return 0;
  }
  else
  {
    AIScriptedInterface::ResetASMInstanceData(m_pAI);
    v18 = Ai_Asm::Singleton();
    Ai_Asm::RunDoorThread(v18, asmName, v6, toStateName, 1);
    if ( numParams > 0 )
      *(_BYTE *)(_RBX + 3528) = ASM_Builtin_GetBoolParam(0, pParams, numParams);
    PlayStartAnim(m_pAI, asmName, toStateName, AnimID);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+0DBCh]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
    }
    if ( !(v14 | v21) && *(_DWORD *)(_RBX + 480) == scr_const.combat )
      __asm { vmovss  dword ptr [rbx+0D4Ch], xmm1 }
    return 1;
  }
}

/*
==============
ASM_PlayAnim_Exit_Terminate
==============
*/
char ASM_PlayAnim_Exit_Terminate(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams)
{
  __int64 v4; 
  AIScriptedInterface *m_pAI; 
  AIWrapper v7; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 603, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  G_MotionWarp_Cancel(v4);
  AIWrapper::AIWrapper(&v7, &g_entities[v4]);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 606, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  *(_BYTE *)(m_pAI->GetAI(m_pAI) + 1833) = 0;
  return 1;
}

/*
==============
ASM_Exit_NoteHandler
==============
*/
bool ASM_Exit_NoteHandler(int entNum, const scr_string_t asmName, const scr_string_t notetrackName, int numParams)
{
  __int64 v9; 
  AIScriptedInterface *m_pAI; 
  __int64 v11; 
  scr_string_t corner; 
  scr_string_t AnimsetName; 
  XAnimSubTreeID v15; 
  const XAnimTree *v16; 
  const XAnim_s *SubTreeAnims; 
  scr_string_t v18; 
  char v20; 
  const char *AnimDebugName; 
  const char *v24; 
  bool v25; 
  const char *v26; 
  const char *v27; 
  unsigned __int16 v34; 
  bool result; 
  AIScriptedInterface *v46; 
  float fmt; 
  float pOutAnimSubtreeIDa; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  float pOutAnimSubtreeIDb; 
  XAnimCurveID *pOutAnimCurveID; 
  unsigned int pOutAnimIndex; 
  XAnimSubTreeID v57; 
  scr_string_t name; 
  unsigned int pOutGraftNode; 
  __int64 v60; 
  AIWrapper v61; 
  Animset *pAnimset; 
  float v63; 
  vec3_t v64; 
  vec3_t angles; 
  vec4_t quat; 
  vec4_t out; 
  vec3_t trans; 
  vec4_t in2; 
  vec4_t rot; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  v60 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  name = notetrackName;
  v9 = entNum;
  if ( notetrackName == scr_const.warp_exit_start )
  {
    if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 632, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
      __debugbreak();
    AIWrapper::AIWrapper(&v61, &g_entities[v9]);
    m_pAI = v61.m_pAI;
    if ( !v61.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 633, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    v11 = m_pAI->GetAI(m_pAI);
    _RSI = v11 + 3492;
    if ( !*(_BYTE *)(v11 + 3527) )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "ASM_Exit_NoteHandler");
      if ( *(_BYTE *)(v11 + 3526) )
      {
        if ( *(_BYTE *)(v11 + 3526) == 1 )
        {
          corner = scr_const.corner;
        }
        else if ( *(_BYTE *)(v11 + 3526) == 2 )
        {
          corner = scr_const.code_move;
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 623, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unimplemented warp end note type") )
            __debugbreak();
          corner = 0;
        }
      }
      else
      {
        corner = scr_const.warp_exit_end;
      }
      AnimsetName = BG_AnimationState_GetAnimsetName(*(const entityState_t **)v11);
      pAnimset = Animset_Find(AnimsetName);
      if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 645, ASSERT_TYPE_ASSERT, "( pAnimset )", (const char *)&queryFormat, "pAnimset") )
        __debugbreak();
      BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, (*(_DWORD *)(*(_QWORD *)v11 + 208i64) >> 1) & 0x3FF, (*(_DWORD *)(*(_QWORD *)v11 + 208i64) >> 11) & 0x7F, &pOutAnimIndex, &pOutGraftNode, &v57, NULL);
      v15 = v57;
      v16 = m_pAI->GetAnimTree(m_pAI);
      SubTreeAnims = XAnimGetSubTreeAnims(v16, v15);
      v18 = name;
      *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, name);
      __asm { vmovaps xmm8, xmm0 }
      *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, corner);
      __asm
      {
        vmovaps xmm6, xmm0
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm8, xmm7
      }
      if ( v20 )
      {
        AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, pOutAnimIndex);
        v24 = SL_ConvertToString(v18);
        v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 656, ASSERT_TYPE_ASSERT, "( startTime >= 0.f )", "Unable to find notetrack %s in anim %s", v24, AnimDebugName);
        v20 = 0;
        if ( v25 )
          __debugbreak();
      }
      __asm { vcomiss xmm6, xmm7 }
      if ( v20 )
      {
        v26 = XAnimGetAnimDebugName(SubTreeAnims, pOutAnimIndex);
        v27 = SL_ConvertToString(corner);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 657, ASSERT_TYPE_ASSERT, "( endTime >= 0.f )", "Unable to find notetrack %s in anim %s", v27, v26) )
          __debugbreak();
      }
      __asm
      {
        vmovss  dword ptr [rsp+1A0h+pOutAnimSubtreeID], xmm6
        vmovss  dword ptr [rsp+1A0h+fmt], xmm8
      }
      XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &rot, &trans, fmt, pOutAnimSubtreeIDa);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  dword ptr [rbp+0A0h+pAnimset], xmm0
        vmovss  xmm1, dword ptr [rsi+4]
        vmovss  dword ptr [rbp+0A0h+pAnimset+4], xmm1
        vmovss  xmm0, dword ptr [rsi+8]
        vmovss  [rbp+0A0h+var_E8], xmm0
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmovss  dword ptr [rbp+0A0h+angles], xmm0
        vmovss  xmm1, dword ptr [rsi+10h]
        vmovss  dword ptr [rbp+0A0h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rsi+14h]
        vmovss  dword ptr [rbp+0A0h+angles+8], xmm0
      }
      v34 = *(_WORD *)(_RSI + 32);
      if ( v34 != 2047 )
      {
        if ( v34 >= 0x800u )
        {
          LODWORD(pOutAnimCurveID) = 2048;
          LODWORD(pOutAnimSubtreeID) = (__int16)v34;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 669, ASSERT_TYPE_ASSERT, "(unsigned)( pExitParams->m_GroundEntNum ) < (unsigned)( ( 2048 ) )", "pExitParams->m_GroundEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
            __debugbreak();
        }
        AnglesToQuat(&g_entities[*(__int16 *)(_RSI + 32)].r.currentAngles, &quat);
        AnglesToQuat((const vec3_t *)(_RSI + 12), &in2);
        QuatMultiply(&quat, &in2, &out);
        QuatToAngles(&out, &angles);
        QuatTransform(&quat, (const vec3_t *)_RSI, &v64);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0A0h+var_E0]
          vaddss  xmm1, xmm0, dword ptr [rbx+130h]
          vmovss  dword ptr [rbp+0A0h+pAnimset], xmm1
          vmovss  xmm2, dword ptr [rbp+0A0h+var_E0+4]
          vaddss  xmm0, xmm2, dword ptr [rbx+134h]
          vmovss  dword ptr [rbp+0A0h+pAnimset+4], xmm0
          vmovss  xmm1, dword ptr [rbp+0A0h+var_E0+8]
          vaddss  xmm2, xmm1, dword ptr [rbx+138h]
          vmovss  [rbp+0A0h+var_E8], xmm2
        }
      }
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+0A0h+angles]
        vmovsd  qword ptr [rbp+0A0h+var_E0], xmm0
      }
      v64.v[2] = angles.v[2];
      __asm
      {
        vmovsd  xmm0, [rbp+0A0h+pAnimset]
        vmovsd  qword ptr [rbp+0A0h+quat], xmm0
      }
      quat.v[2] = v63;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+0A0h+rot]
        vmovdqa xmmword ptr [rbp+0A0h+out], xmm0
        vmovss  xmm1, dword ptr [rsi+1Ch]
        vmovss  dword ptr [rsp+1A0h+pOutAnimSubtreeID], xmm1
      }
      SetupMotionWarp(v9, &trans, &out, (const vec3_t *)&quat, &v64, pOutAnimSubtreeIDb);
      Sys_ProfEndNamedEvent();
    }
    result = 1;
  }
  else
  {
    if ( notetrackName != scr_const.code_move )
      goto LABEL_43;
    if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 693, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
      __debugbreak();
    AIWrapper::AIWrapper(&v61, &g_entities[v9]);
    v46 = v61.m_pAI;
    if ( !v61.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 694, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    if ( *(_BYTE *)(v46->GetAI(v46) + 3528) )
    {
      G_MotionWarp_Cancel(v9);
      v46->SetAnimMode(v46, AI_ANIM_MOVE_CODE);
      AIScriptedInterface::SetOrientMode(v46, AI_ORIENT_TO_MOTION);
      result = 1;
    }
    else
    {
LABEL_43:
      result = 0;
    }
  }
  _R11 = &v71;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
DetermineStartAnim
==============
*/
int DetermineStartAnim(const AIScriptedInterface *pAI, const scr_string_t stateName, bool forceUseSelfAngles, const scr_string_t optionalSuffix)
{
  pathnode_t *StartNodeFromLink; 
  pathnode_t *v48; 
  pathnode_t *v61; 
  char v94; 
  char v95; 
  int result; 
  scr_string_t AnimsetName; 
  const char *v129; 
  float v183; 
  __int64 v184; 
  float v185; 
  float fmt; 
  unsigned int v199; 
  unsigned int outAngleIndexCount; 
  unsigned int v201; 
  __int64 v202; 
  vec3_t inOutMoveDelta; 
  vec3_t angles; 
  vec3_t outLookaheadDir; 
  vec2_t vec; 
  vec2_t v208; 
  vec3_t forward; 
  vec3_t velocity; 
  nav_posAlongPathResults_t v212; 
  vec3_t vFinalGoal; 
  char v214[16]; 
  vec3_t v215; 
  vec3_t pos; 
  int outAngleIndices[4]; 
  char v218; 
  void *retaddr; 

  _RAX = &retaddr;
  v202 = -2i64;
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
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RBX = pAI->GetAI(&pAI->AICommonInterface);
  if ( !AICommonInterface::HasPath(&pAI->AICommonInterface) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 133, ASSERT_TYPE_ASSERT, "(pAI->HasPath())", (const char *)&queryFormat, "pAI->HasPath()") )
    __debugbreak();
  AICommonInterface::GetPathFinalGoal(&pAI->AICommonInterface, &vFinalGoal);
  if ( bfx::LinkHandle::IsValid((bfx::LinkHandle *)(*(_QWORD *)(_RBX + 392) + 176i64)) )
  {
    StartNodeFromLink = Nav_GetStartNodeFromLink((const bfx::LinkHandle *)(*(_QWORD *)(_RBX + 392) + 176i64));
    pathnode_t::GetPos(StartNodeFromLink, &vFinalGoal);
  }
  Nav_GetLookaheadDir(*(const AINavigator **)(_RBX + 392), &outLookaheadDir);
  if ( forceUseSelfAngles )
  {
    *(double *)&_XMM0 = Nav_GetDistToNextCorner(*(const AINavigator **)(_RBX + 392));
    __asm
    {
      vmulss  xmm2, xmm0, dword ptr [rsp+238h+outLookaheadDir]
      vaddss  xmm6, xmm2, dword ptr [rax+130h]
      vmulss  xmm2, xmm0, dword ptr [rsp+238h+outLookaheadDir+4]
      vaddss  xmm7, xmm2, dword ptr [rax+134h]
      vmulss  xmm0, xmm0, dword ptr [rsp+238h+outLookaheadDir+8]
      vaddss  xmm8, xmm0, dword ptr [rax+138h]
      vmovaps xmm9, xmm6
      vmovaps xmm10, xmm7
      vmovaps xmm11, xmm8
    }
  }
  else
  {
    bfx::AreaHandle::AreaHandle(&v212.m_hArea);
    bfx::LinkHandle::LinkHandle(&v212.m_hLink);
    __asm { vmovss  xmm1, cs:__real@43000000; dist }
    Nav_GetPosAlongPath(*(const AINavigator **)(_RBX + 392), *(float *)&_XMM1, 1, &v212);
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+238h+var_178.m_handleImpl]
      vmovss  xmm7, dword ptr [rsp+238h+var_178.m_handleImpl+4]
      vmovss  xmm8, dword ptr [rsp+238h+var_178.m_pSpace]
      vmovss  xmm1, cs:__real@42000000; dist
    }
    Nav_GetPosAlongPath(*(const AINavigator **)(_RBX + 392), *(float *)&_XMM1, 1, &v212);
    __asm
    {
      vmovss  xmm9, dword ptr [rsp+238h+var_178.m_handleImpl]
      vmovss  xmm10, dword ptr [rsp+238h+var_178.m_handleImpl+4]
      vmovss  xmm11, dword ptr [rsp+238h+var_178.m_pSpace]
    }
    bfx::LinkHandle::~LinkHandle(&v212.m_hLink);
    bfx::AreaHandle::~AreaHandle(&v212.m_hArea);
  }
  __asm
  {
    vsubss  xmm0, xmm6, dword ptr [rax+130h]
    vmovss  dword ptr [rsp+238h+vec], xmm0
    vsubss  xmm1, xmm7, dword ptr [rax+134h]
    vmovss  dword ptr [rsp+238h+vec+4], xmm1
    vsubss  xmm0, xmm8, dword ptr [rax+138h]
    vmovss  [rsp+238h+var_1B0], xmm0
    vsubss  xmm0, xmm9, dword ptr [rax+130h]
    vmovss  dword ptr [rsp+238h+var_1A8], xmm0
    vsubss  xmm1, xmm10, dword ptr [rax+134h]
    vmovss  dword ptr [rsp+238h+var_1A8+4], xmm1
    vsubss  xmm0, xmm11, dword ptr [rax+138h]
    vmovss  [rsp+238h+var_1A0], xmm0
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm { vmovaps xmm14, xmm0 }
  *(double *)&_XMM0 = vectoyaw(&v208);
  __asm { vmovaps xmm13, xmm0 }
  _RSI = NULL;
  __asm { vmovd   xmm2, esi }
  _EAX = *(unsigned __int8 *)(_RBX + 2254);
  __asm
  {
    vmovd   xmm1, eax
    vpcmpeqd xmm4, xmm1, xmm2
    vmovss  xmm3, cs:__real@43c80000
    vmovss  xmm2, cs:__real@44800000
    vblendvps xmm6, xmm2, xmm3, xmm4
  }
  v48 = *(pathnode_t **)(*(_QWORD *)(_RBX + 8) + 112i64);
  __asm { vmovss  [rsp+238h+var_204], xmm6 }
  if ( !v48 )
    goto LABEL_12;
  pathnode_t::GetPos(v48, &pos);
  _RCX = *(const entityState_t **)_RBX;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+238h+pos]
    vsubss  xmm3, xmm0, dword ptr [rcx+130h]
    vmovss  xmm1, dword ptr [rsp+238h+pos+4]
    vsubss  xmm2, xmm1, dword ptr [rcx+134h]
    vmovss  xmm0, dword ptr [rsp+238h+pos+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+138h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, xmm6
  }
  if ( v94 )
  {
    _RSI = *(pathnode_t **)(*(_QWORD *)(_RBX + 8) + 112i64);
  }
  else
  {
LABEL_12:
    v61 = *(pathnode_t **)(*(_QWORD *)(_RBX + 8) + 120i64);
    if ( !v61 )
      goto LABEL_18;
    pathnode_t::GetPos(v61, &v215);
    _RCX = *(const entityState_t **)_RBX;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+238h+var_118]
      vsubss  xmm3, xmm0, dword ptr [rcx+130h]
      vmovss  xmm1, dword ptr [rsp+238h+var_118+4]
      vsubss  xmm2, xmm1, dword ptr [rcx+134h]
      vmovss  xmm0, dword ptr [rsp+238h+var_118+8]
      vsubss  xmm4, xmm0, dword ptr [rcx+138h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, xmm6
    }
    if ( !v94 )
    {
LABEL_18:
      _RCX = *(const entityState_t **)_RBX;
LABEL_19:
      __asm { vmovss  xmm7, dword ptr [rcx+140h] }
      goto LABEL_20;
    }
    _RSI = *(pathnode_t **)(*(_QWORD *)(_RBX + 8) + 120i64);
  }
  if ( !_RSI || forceUseSelfAngles )
    goto LABEL_19;
  *(double *)&_XMM0 = pathnode_t::GetAngle(_RSI);
  __asm { vmovaps xmm7, xmm0 }
LABEL_20:
  __asm
  {
    vsubss  xmm0, xmm14, xmm7
    vmovss  xmm9, cs:__real@3b360b61
    vmulss  xmm3, xmm0, xmm9
    vxorps  xmm10, xmm10, xmm10
    vmovss  xmm11, cs:__real@3f000000
    vaddss  xmm1, xmm3, xmm11
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm10, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmovss  xmm12, cs:__real@43b40000
    vmulss  xmm8, xmm0, xmm12
    vsubss  xmm0, xmm13, xmm7
    vmulss  xmm4, xmm0, xmm9
    vaddss  xmm2, xmm4, xmm11
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm0, xmm1, xmm2
    vroundss xmm3, xmm10, xmm0, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm15, xmm1, xmm12
  }
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)&outLookaheadDir);
  __asm
  {
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm4, xmm1, xmm9
    vaddss  xmm2, xmm4, xmm11
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm2
    vroundss xmm3, xmm10, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm12
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm1, xmm1, xmm6
    vcomiss xmm1, cs:__real@43070000
  }
  if ( !(v94 | v95) )
  {
    __asm
    {
      vandps  xmm0, xmm8, xmm6
      vcomiss xmm0, cs:__real@42b40000
    }
    if ( v94 )
      goto LABEL_22;
  }
  _RCX = (const vec2_t *)(_RBX + 2104);
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm13, cs:__real@42340000
    vcomiss xmm3, cs:__real@41800000
  }
  if ( !(v94 | v95) )
  {
    *(double *)&_XMM0 = vectoyaw(_RCX);
    __asm
    {
      vsubss  xmm1, xmm0, xmm14
      vmulss  xmm4, xmm1, xmm9
      vaddss  xmm2, xmm4, xmm11
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm2
      vroundss xmm3, xmm10, xmm1, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm12
      vandps  xmm1, xmm1, xmm6
      vcomiss xmm1, xmm13
    }
    if ( v94 )
      goto LABEL_22;
  }
  __asm
  {
    vmovss  xmm14, cs:__real@41200000
    vmovaps xmm1, xmm14; threshold
    vmovaps xmm0, xmm8; angle
  }
  G_GetAngleIndices(*(const float *)&_XMM0, *(const float *)&_XMM1, outAngleIndices, &outAngleIndexCount);
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(_RBX + 392) + 16i64))(*(_QWORD *)(_RBX + 392), v214);
  _RDI = outAngleIndices[0];
  AnimsetName = BG_AnimationState_GetAnimsetName(*(const entityState_t **)_RBX);
  v129 = SL_ConvertToString(stateName);
  if ( !I_strstr(v129, "cover") )
    goto LABEL_31;
  if ( _RSI )
  {
    __asm
    {
      vmovups ymm0, cs:__ymm@4307000042b4000042b40000c2b40000c2b40000c2b40000c3070000c3340000
      vmovups ymmword ptr [rsp+238h+var_178.m_handleImpl], ymm0
      vmovss  xmm1, cs:__real@c3340000
      vmovss  [rsp+238h+var_158], xmm1
      vmovss  xmm6, dword ptr [rsp+rdi*4+238h+var_178.m_handleImpl]
    }
    if ( I_strstr(v129, "left") && (_DWORD)_RDI == 4 )
      __asm { vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000 }
    *(double *)&_XMM0 = pathnode_t::GetAngle(_RSI);
    __asm { vaddss  xmm0, xmm0, xmm6 }
  }
  else
  {
LABEL_31:
    __asm
    {
      vmovups ymm0, cs:__ymm@4307000042b400004234000000000000c2340000c2b40000c307000043340000
      vmovups ymmword ptr [rsp+238h+var_178.m_handleImpl], ymm0
      vmovss  xmm1, cs:__real@43340000
      vmovss  [rsp+238h+var_158], xmm1
      vmovss  xmm0, dword ptr [rsp+rdi*4+238h+var_178.m_handleImpl]
      vaddss  xmm0, xmm0, dword ptr [rcx+140h]; angle
    }
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rsp+238h+angles+8], xmm1
    vmovss  dword ptr [rsp+238h+angles+4], xmm0
    vmovss  dword ptr [rsp+238h+angles], xmm1
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+0D4Ch]
    vmulss  xmm0, xmm2, dword ptr [rsp+238h+forward]
    vmovss  dword ptr [rsp+238h+velocity], xmm0
    vmulss  xmm1, xmm2, dword ptr [rsp+238h+forward+4]
    vmovss  dword ptr [rsp+238h+velocity+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rsp+238h+forward+8]
    vmovss  dword ptr [rsp+238h+velocity+8], xmm0
    vmovss  xmm2, cs:__real@40a00000
    vmulss  xmm1, xmm2, dword ptr [rsp+238h+forward]
    vmovss  dword ptr [rsp+238h+inOutMoveDelta], xmm1
    vmulss  xmm0, xmm2, dword ptr [rsp+238h+forward+4]
    vmovss  dword ptr [rsp+238h+inOutMoveDelta+4], xmm0
    vmulss  xmm1, xmm2, dword ptr [rsp+238h+forward+8]
    vmovss  dword ptr [rsp+238h+inOutMoveDelta+8], xmm1
    vmovss  xmm1, cs:__real@41a00000; fMoveDist
  }
  if ( AIScriptedInterface::GetAvoidanceDelta((AIScriptedInterface *)pAI, *(const float *)&_XMM1, 0, &velocity, &inOutMoveDelta) )
  {
LABEL_22:
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(_RBX + 2908) )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+238h+inOutMoveDelta+4]
        vmulss  xmm1, xmm6, xmm6
        vmovss  xmm4, dword ptr [rsp+238h+inOutMoveDelta]
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm5, dword ptr [rsp+238h+inOutMoveDelta+8]
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vmovss  xmm1, cs:__real@3f800000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rsp+238h+inOutMoveDelta], xmm0
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rsp+238h+inOutMoveDelta+4], xmm1
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rsp+238h+inOutMoveDelta+8], xmm0
      }
      *(double *)&_XMM0 = vectoyaw((const vec2_t *)&inOutMoveDelta);
      __asm
      {
        vsubss  xmm1, xmm0, xmm7
        vmulss  xmm4, xmm1, xmm9
        vaddss  xmm2, xmm4, xmm11
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm2
        vroundss xmm3, xmm10, xmm1, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm12
        vmovss  xmm5, cs:__real@c3330000
        vmovss  xmm0, cs:__real@43330000
        vcomiss xmm1, xmm5
      }
      if ( !v94 )
      {
        __asm
        {
          vcmpltss xmm2, xmm0, xmm1
          vblendvps xmm0, xmm1, xmm5, xmm2; angle
        }
      }
      __asm { vmovaps xmm1, xmm13; threshold }
      G_GetAngleIndices(*(const float *)&_XMM0, *(const float *)&_XMM1, (int *)&v215, &v199);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+238h+angles+4]
        vsubss  xmm2, xmm0, xmm7
        vmulss  xmm5, xmm2, xmm9
        vaddss  xmm3, xmm5, xmm11
        vroundss xmm4, xmm10, xmm3, 1
        vsubss  xmm0, xmm5, xmm4
        vmulss  xmm0, xmm0, xmm12; angle
        vmovaps xmm1, xmm14; threshold
      }
      G_GetAngleIndices(*(const float *)&_XMM0, *(const float *)&_XMM1, (int *)&pos, &v201);
      v183 = v215.v[0];
      if ( (int)(v199 - 1) >= 0 )
      {
        v184 = (int)(v199 - 1);
        while ( 1 )
        {
          v185 = v215.v[v184];
          if ( LODWORD(v185) != LODWORD(pos.v[0]) && ((_RDI & 0xFFFFFFF7) != 0 || (LODWORD(v185) & 0xFFFFFFF7) != 0) && LODWORD(v185) != (_DWORD)_RDI )
            break;
          if ( --v184 < 0 )
            goto LABEL_45;
        }
        v183 = v215.v[v184];
      }
LABEL_45:
      *(_BYTE *)(_RBX + 3527) = 1;
    }
    else
    {
      v183 = *(float *)&_RDI;
    }
    __asm { vmovss  dword ptr [rsp+238h+fmt], xmm15 }
    result = GetStartAnim(AnimsetName, stateName, optionalSuffix, SLODWORD(v183), fmt);
  }
  _R11 = &v218;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
GetStartAnim
==============
*/
__int64 GetStartAnim(scr_string_t animsetName, scr_string_t stateName, scr_string_t optionalSuffix, int idx, float nearAngleDiff)
{
  unsigned int v9; 
  const char *v10; 
  scr_string_t String; 
  unsigned int IndexOfRandomAnimFromAlias; 
  __m256i v16; 
  int v17; 
  char dest[128]; 

  v17 = 2;
  __asm
  {
    vmovdqu ymm0, cs:__ymm@0000000100000004000000070000000800000009000000060000000300000002
    vmovdqu [rsp+118h+var_E8], ymm0
  }
  v9 = v16.m256i_u32[idx];
  v10 = (char *)&queryFormat.fmt + 3;
  if ( optionalSuffix )
    v10 = SL_ConvertToString(optionalSuffix);
  if ( v9 == 8 )
  {
    __asm
    {
      vmovss  xmm0, [rsp+118h+nearAngleDiff]
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    Com_sprintf(dest, 0x80ui64, "%d%s%s", v9, "l", v10);
  }
  else
  {
    Com_sprintf(dest, 0x80ui64, "%d%s", v9, v10);
  }
  String = SL_GetString(dest, 0);
  IndexOfRandomAnimFromAlias = G_Animset_GetIndexOfRandomAnimFromAlias(animsetName, stateName, String);
  SL_RemoveRefToString(String);
  return IndexOfRandomAnimFromAlias;
}

/*
==============
PlayStartAnim
==============
*/
void PlayStartAnim(AIScriptedInterface *pAI, const scr_string_t asmName, const scr_string_t stateName, int animID)
{
  __int64 v20; 
  scr_string_t AnimsetName; 
  const Animset *v23; 
  XAnimSubTreeID v24; 
  const XAnimTree *v25; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v27; 
  char v35; 
  Ai_Asm *v36; 
  scr_string_t v37; 
  scr_string_t v38; 
  __int64 v48; 
  __int64 v50; 
  __int64 v54; 
  __int64 v55; 
  __int64 v76; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  char v93; 
  __int64 GroundEntNum; 
  float fmtb; 
  int fmtc; 
  int fmt; 
  int fmtd; 
  float fmte; 
  int fmtf; 
  int fmta; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  float pOutAnimSubtreeIDa; 
  float pOutAnimSubtreeIDb; 
  float pOutAnimSubtreeIDc; 
  XAnimCurveID *pOutAnimCurveID; 
  unsigned int pOutAnimIndex; 
  scr_string_t asmNamea; 
  XAnimSubTreeID v147[2]; 
  int pOutStateIndex; 
  AnimsetState *outState; 
  unsigned int pOutGraftNode[2]; 
  __int64 v154; 
  vec3_t in; 
  vec4_t v156; 
  vec4_t in1; 
  vec4_t quat; 
  int v159; 
  vec2_t vec; 
  vec3_t angles; 
  vec4_t v163; 
  vec3_t trans; 
  vec4_t in2; 
  int v166; 
  bfx::AreaHandle v169; 
  bfx::LinkHandle v170; 
  vec4_t rot; 
  char v172; 
  void *retaddr; 

  _RAX = &retaddr;
  v154 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  asmNamea = asmName;
  _RDI = (__int16 **)pAI->GetAI(pAI);
  bfx::AreaHandle::AreaHandle(&v169);
  bfx::LinkHandle::LinkHandle(&v170);
  LOBYTE(v20) = 1;
  __asm { vmovss  xmm1, cs:__real@43000000 }
  (*(void (__fastcall **)(__int16 *, __int16 *, __int64, int *, _BYTE))(*(_QWORD *)_RDI[49] + 416i64))(_RDI[49], _RDI[49], v20, &v166, 0);
  AnimsetName = BG_AnimationState_GetAnimsetName((const entityState_t *)*_RDI);
  v23 = Animset_Find(AnimsetName);
  outState = NULL;
  BG_Animset_GetStateInfoByName(v23, stateName, &outState, &pOutStateIndex);
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 388, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(v23, pOutStateIndex, animID, &pOutAnimIndex, pOutGraftNode, v147, NULL);
  v24 = v147[0];
  v25 = pAI->GetAnimTree(pAI);
  SubTreeAnims = XAnimGetSubTreeAnims(v25, v24);
  v27 = pOutAnimIndex;
  if ( pOutAnimIndex >= SubTreeAnims->size )
  {
    LODWORD(pOutAnimCurveID) = SubTreeAnims->size;
    LODWORD(pOutAnimSubtreeID) = pOutAnimIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 396, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( pAnims->size )", "animIndex doesn't index pAnims->size\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
      __debugbreak();
    v27 = pOutAnimIndex;
  }
  *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, v27, scr_const.code_move);
  __asm { vmovaps xmm10, xmm0 }
  *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.corner);
  __asm { vmovaps xmm9, xmm0 }
  *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.warp_exit_start);
  __asm { vmovaps xmm11, xmm0 }
  *(double *)&_XMM0 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.warp_exit_end);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovss  xmm12, cs:__real@3f800000
    vmovaps xmm6, xmm12
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm10, xmm7
  }
  if ( v93 | v35 )
  {
    v38 = asmNamea;
  }
  else
  {
    v36 = Ai_Asm::Singleton();
    v37 = stateName;
    v38 = asmNamea;
    Ai_Asm::RunMoveThreads(v36, asmNamea, **_RDI, v37);
    __asm { vmovaps xmm6, xmm10 }
  }
  pAI->SetAnimMode(pAI, AI_ANIM_USE_BOTH_DELTAS_ZONLY_PHYSICS);
  *((_BYTE *)_RDI + 1833) = 1;
  __asm
  {
    vmovss  dword ptr [rsp+260h+pOutAnimSubtreeID], xmm6
    vmovss  dword ptr [rsp+260h+fmt], xmm7
  }
  XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &rot, &trans, fmtb, pOutAnimSubtreeIDa);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+160h+trans]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm1, dword ptr [rbp+160h+trans+4]
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm0, dword ptr [rbp+160h+trans+8]
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm2, xmm4, xmm1
    vsqrtss xmm15, xmm2, xmm2
    vmovss  dword ptr [rsp+260h+var_208+4], xmm15
  }
  LOBYTE(fmtc) = 0;
  LOBYTE(v48) = 1;
  __asm { vmovaps xmm1, xmm15 }
  (*(void (__fastcall **)(__int16 *, __int64, __int64, int *, int))(*(_QWORD *)_RDI[49] + 416i64))(_RDI[49], v50, v48, &v166, fmtc);
  __asm
  {
    vmovss  xmm6, [rbp+160h+var_140]
    vmovss  [rsp+260h+asmName], xmm6
    vmovss  xmm13, [rbp+160h+var_13C]
    vmovss  [rsp+260h+var_20C], xmm13
    vmovss  xmm14, [rbp+160h+var_138]
    vmovss  dword ptr [rsp+260h+var_208], xmm14
    vmovss  dword ptr [rbp+160h+in+8], xmm14
  }
  (*(void (__fastcall **)(__int16 *, int *))(*(_QWORD *)_RDI[49] + 16i64))(_RDI[49], &v159);
  __asm { vcomiss xmm15, xmm12 }
  if ( v93 | v35 )
  {
    LOBYTE(fmt) = 0;
    LOBYTE(v55) = 1;
    __asm { vmovss  xmm1, cs:__real@41400000 }
    (*(void (__fastcall **)(__int16 *, __int64, __int64, int *, int))(*(_QWORD *)_RDI[49] + 416i64))(_RDI[49], v54, v55, &v166, fmt);
    __asm
    {
      vmovss  xmm0, [rbp+160h+var_140]
      vsubss  xmm1, xmm0, [rbp+160h+var_1A0]
      vmovss  dword ptr [rbp+160h+vec], xmm1
      vmovss  xmm2, [rbp+160h+var_13C]
      vsubss  xmm0, xmm2, [rbp+160h+var_19C]
      vmovss  dword ptr [rbp+160h+vec+4], xmm0
      vmovss  xmm1, [rbp+160h+var_138]
      vsubss  xmm2, xmm1, [rbp+160h+var_198]
      vmovss  [rbp+160h+var_188], xmm2
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm6, [rbp+160h+var_1A0]
      vmovss  dword ptr [rbp+160h+vec], xmm0
      vsubss  xmm1, xmm13, [rbp+160h+var_19C]
      vmovss  dword ptr [rbp+160h+vec+4], xmm1
      vsubss  xmm0, xmm14, [rbp+160h+var_198]
      vmovss  [rbp+160h+var_188], xmm0
    }
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovss  [rsp+260h+var_218], xmm0
  }
  ASM_PlayFacialAnim(**_RDI, v38, v23, pOutStateIndex, animID);
  __asm { vmovss  dword ptr [rsp+260h+fmt], xmm12 }
  ((void (__fastcall *)(AIScriptedInterface *, const Animset *, _QWORD, _QWORD, int))pAI->SetAnim)(pAI, v23, (unsigned int)pOutStateIndex, (unsigned int)animID, fmtd);
  *(double *)&_XMM0 = XAnimGetLength(SubTreeAnims, pOutAnimIndex);
  __asm { vmovaps xmm12, xmm0 }
  if ( !*((_BYTE *)_RDI + 3527) )
  {
    __asm
    {
      vcomiss xmm9, xmm7
      vmovss  dword ptr [rsp+260h+pOutAnimSubtreeID], xmm9
      vmovss  dword ptr [rsp+260h+fmt], xmm7
    }
    XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &in2, (vec3_t *)&v156, fmte, pOutAnimSubtreeIDb);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+160h+var_1D8]
      vmulss  xmm3, xmm0, xmm0
      vmovss  xmm1, dword ptr [rbp+160h+var_1D8+4]
      vmulss  xmm2, xmm1, xmm1
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm0, dword ptr [rbp+160h+var_1D8+8]
      vmulss  xmm1, xmm0, xmm0
      vaddss  xmm2, xmm4, xmm1
      vsqrtss xmm6, xmm2, xmm2
    }
    LOBYTE(fmtf) = 0;
    LOBYTE(v76) = 1;
    __asm { vmovaps xmm1, xmm6 }
    (*(void (__fastcall **)(__int16 *, __int64, __int64, int *, int))(*(_QWORD *)_RDI[49] + 416i64))(_RDI[49], v78, v76, &v166, fmtf);
    __asm
    {
      vmovss  xmm13, [rbp+160h+var_140]
      vmovss  dword ptr [rbp+160h+var_170], xmm13
      vmovss  xmm14, [rbp+160h+var_13C]
      vmovss  dword ptr [rbp+160h+var_170+4], xmm14
      vmovss  xmm15, [rbp+160h+var_138]
      vmovss  dword ptr [rbp+160h+var_170+8], xmm15
      vmovss  xmm1, [rsp+260h+asmName]
      vmovss  xmm2, [rsp+260h+var_20C]
      vmovss  xmm3, dword ptr [rsp+260h+var_208]
      vmovss  xmm4, dword ptr [rsp+260h+var_208+4]
      vsubss  xmm0, xmm4, xmm6
      vcomiss xmm0, cs:__real@40000000
    }
    if ( v93 )
    {
      __asm { vaddss  xmm1, xmm4, cs:__real@40c00000 }
      LOBYTE(fmta) = 0;
      LOBYTE(v80) = 1;
      (*(void (__fastcall **)(__int16 *, __int64, __int64, int *, int))(*(_QWORD *)_RDI[49] + 416i64))(_RDI[49], v79, v80, &v166, fmta);
      __asm
      {
        vmovss  xmm1, [rbp+160h+var_140]
        vmovss  xmm2, [rbp+160h+var_13C]
        vmovss  xmm3, [rbp+160h+var_138]
      }
    }
    __asm
    {
      vsubss  xmm0, xmm1, xmm13
      vmovss  dword ptr [rsp+260h+in], xmm0
      vsubss  xmm1, xmm2, xmm14
      vmovss  dword ptr [rsp+260h+in+4], xmm1
      vsubss  xmm0, xmm3, xmm15
      vmovss  dword ptr [rbp+160h+in+8], xmm0
    }
    vectoangles(&in, &angles);
    __asm
    {
      vmovss  dword ptr [rbp+160h+angles+8], xmm7
      vmovss  dword ptr [rbp+160h+angles], xmm7
      vcomiss xmm11, xmm7
    }
    if ( !(v93 | v35) )
    {
      __asm { vcomiss xmm11, xmm9 }
      if ( v93 )
      {
        __asm { vmovss  dword ptr [rdi+0DA4h], xmm13 }
        _R14 = _RDI + 437;
        __asm
        {
          vmovss  dword ptr [r14], xmm14
          vmovss  dword ptr [rdi+0DACh], xmm15
        }
        _RSI = (vec3_t *)(_RDI + 438);
        *((_DWORD *)_RDI + 876) = 0;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+160h+angles+4]
          vmovss  dword ptr [rsi+4], xmm0
        }
        *((_DWORD *)_RDI + 878) = 0;
        *((_BYTE *)_RDI + 3526) = 1;
        __asm
        {
          vcomiss xmm8, xmm7
          vsubss  xmm0, xmm9, xmm11
        }
        goto LABEL_22;
      }
    }
    __asm
    {
      vmulss  xmm1, xmm12, xmm9
      vmovsd  xmm0, qword ptr [rbp+160h+angles]
      vmovsd  qword ptr [rbp+160h+quat], xmm0
    }
    quat.v[2] = angles.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+160h+var_170]
      vmovsd  qword ptr [rbp+160h+in1], xmm0
    }
    in1.v[2] = v163.v[2];
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+160h+in2]
      vmovdqa [rbp+160h+var_170], xmm0
      vmovss  dword ptr [rsp+260h+pOutAnimSubtreeID], xmm1
    }
    SetupMotionWarp(**_RDI, (const vec3_t *)&v156, &v163, (const vec3_t *)&in1, (const vec3_t *)&quat, pOutAnimSubtreeIDc);
    __asm
    {
      vmovss  xmm6, [rsp+260h+asmName]
      vmovss  xmm13, [rsp+260h+var_20C]
      vmovss  xmm14, [rsp+260h+var_218]
    }
  }
  __asm { vmovss  dword ptr [rdi+0DA4h], xmm6 }
  _R14 = _RDI + 437;
  __asm
  {
    vmovss  dword ptr [r14], xmm13
    vmovss  xmm0, dword ptr [rsp+260h+var_208]
    vmovss  dword ptr [rdi+0DACh], xmm0
  }
  _RSI = (vec3_t *)(_RDI + 438);
  *((_DWORD *)_RDI + 876) = 0;
  __asm { vmovss  dword ptr [rsi+4], xmm14 }
  *((_DWORD *)_RDI + 878) = 0;
  *((_BYTE *)_RDI + 3526) = 2;
  __asm
  {
    vcomiss xmm11, xmm7
    vcmpltss xmm0, xmm7, xmm8
    vblendvps xmm10, xmm10, xmm8, xmm0
    vsubss  xmm0, xmm10, xmm11
  }
LABEL_22:
  __asm
  {
    vmulss  xmm1, xmm0, xmm12
    vmovss  dword ptr [rdi+0DC0h], xmm1
  }
  GroundEntNum = AIScriptedInterface::GetGroundEntNum(pAI);
  if ( (unsigned int)(GroundEntNum - 2046) <= 1 )
  {
    *((_WORD *)_RDI + 1762) = 2047;
  }
  else
  {
    AnglesToQuat(&g_entities[GroundEntNum].r.currentAngles, &quat);
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rbp+160h+quat]
      vxorps  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbp+160h+in1], xmm1
      vmovss  xmm2, dword ptr [rbp+160h+quat+4]
      vxorps  xmm0, xmm2, xmm3
      vmovss  dword ptr [rbp+160h+in1+4], xmm0
      vmovss  xmm1, dword ptr [rbp+160h+quat+8]
      vxorps  xmm2, xmm1, xmm3
      vmovss  dword ptr [rbp+160h+in1+8], xmm2
      vmovss  xmm0, dword ptr [rbp+160h+quat+0Ch]
      vmovss  dword ptr [rbp+160h+in1+0Ch], xmm0
      vmovss  xmm1, dword ptr [rdi+0DA4h]
      vsubss  xmm0, xmm1, dword ptr [rbx+130h]
      vmovss  dword ptr [rsp+260h+in], xmm0
      vmovss  xmm2, dword ptr [r14]
      vsubss  xmm1, xmm2, dword ptr [rbx+134h]
      vmovss  dword ptr [rsp+260h+in+4], xmm1
      vmovss  xmm0, dword ptr [rdi+0DACh]
      vsubss  xmm2, xmm0, dword ptr [rbx+138h]
      vmovss  dword ptr [rbp+160h+in+8], xmm2
    }
    QuatTransform(&in1, &in, (vec3_t *)_RDI + 291);
    AnglesToQuat(_RSI, &in2);
    QuatMultiply(&in1, &in2, &v156);
    QuatToAngles(&v156, _RSI);
    *((_WORD *)_RDI + 1762) = GroundEntNum;
  }
  bfx::LinkHandle::~LinkHandle(&v170);
  bfx::AreaHandle::~AreaHandle(&v169);
  _R11 = &v172;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

