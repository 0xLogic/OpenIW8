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
  __int64 v9; 
  bool BoolParam; 
  scr_string_t NextLowestSpeedThresholdName; 
  bool v12; 
  double v13; 
  float AnimSpeedThresholdValue; 
  __int64 v15; 
  int v16; 
  double DefaultSpeed; 
  AINavigator *Navigator; 
  int started; 
  AIWrapper v25; 

  AIWrapper::AIWrapper(&v25, &g_entities[entNum]);
  m_pAI = v25.m_pAI;
  if ( !v25.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 327, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v9 = m_pAI->GetAI(m_pAI);
  BoolParam = 0;
  NextLowestSpeedThresholdName = 0;
  if ( numParams > 0 )
    BoolParam = ASM_Builtin_GetBoolParam(0, pParams, numParams);
  v12 = 0;
  if ( numParams > 1 )
    v12 = ASM_Builtin_GetBoolParam(1, pParams, numParams);
  if ( BoolParam && *(_DWORD *)(v9 + 480) == scr_const.combat )
  {
    v13 = AIScriptedInterface::DetermineDesiredExitSpeed(m_pAI);
    NextLowestSpeedThresholdName = GetNextLowestSpeedThresholdName(*(scr_string_t *)(v9 + 3464), *(float *)&v13);
    AnimSpeedThresholdValue = (float)GetAnimSpeedThresholdValue(*(scr_string_t *)(v9 + 3464), NextLowestSpeedThresholdName);
  }
  else
  {
    AnimSpeedThresholdValue = FLOAT_N1_0;
  }
  *(float *)(v9 + 3516) = AnimSpeedThresholdValue;
  v15 = m_pAI->GetAI(m_pAI);
  if ( !AICommonInterface::HasPath(m_pAI) || *(_BYTE *)(v15 + 2981) || !*(_BYTE *)(v15 + 330) || *(_BYTE *)(v15 + 1751) || *(_DWORD *)(v15 + 2376) )
    goto LABEL_24;
  v16 = *(_DWORD *)(v15 + 480);
  if ( v16 == scr_const.casual || v16 == scr_const.casual_gun || (DefaultSpeed = AIScriptedInterface::GetDefaultSpeed(m_pAI), *(float *)&DefaultSpeed <= 60.0) )
  {
    _XMM0 = *(unsigned __int8 *)(v15 + 1752);
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_25_0);
    __asm { vblendvps xmm6, xmm1, xmm3, xmm2 }
  }
  Navigator = AICommonInterface::GetNavigator(m_pAI);
  if ( !((unsigned __int8 (__fastcall *)(AINavigator *))Navigator->IsPathDistToGoalOrLinkAtLeast)(Navigator) || (started = DetermineStartAnim(m_pAI, toStateName, v12, NextLowestSpeedThresholdName), started < 0) )
  {
LABEL_24:
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
  __int64 v5; 
  AIScriptedInterface *m_pAI; 
  int AnimID; 
  __int64 v11; 
  double DefaultSpeed; 
  float v13; 
  Ai_Asm *v14; 
  ASM_Instance *Instance; 
  Ai_Asm *v17; 
  float v18; 
  AIWrapper v19; 

  v5 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 551, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  AIWrapper::AIWrapper(&v19, &g_entities[v5]);
  m_pAI = v19.m_pAI;
  if ( !v19.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 552, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AnimID = ASM_GetAnimID(v5, asmName, toStateName);
  v11 = m_pAI->GetAI(m_pAI);
  if ( AnimID == -12345 )
  {
    DefaultSpeed = AIScriptedInterface::GetDefaultSpeed(m_pAI);
    v13 = FLOAT_50_0;
    if ( *(float *)&DefaultSpeed < 50.0 )
      v13 = *(float *)&DefaultSpeed * 0.5;
    *(float *)(v11 + 3404) = v13;
    v14 = Ai_Asm::Singleton();
    Instance = Ai_Asm::GetInstance(v14, NULL, v5);
    AI_ASM_FireEvent(Instance, (const scr_string_t)scr_const.abort);
    AI_ASM_FireEvent(Instance, (const scr_string_t)scr_const.code_move);
    AI_ASM_FireEvent(Instance, (const scr_string_t)scr_const.end);
    AI_ASM_FireEvent(Instance, (const scr_string_t)scr_const.finish);
    return 0;
  }
  else
  {
    AIScriptedInterface::ResetASMInstanceData(m_pAI);
    v17 = Ai_Asm::Singleton();
    Ai_Asm::RunDoorThread(v17, asmName, v5, toStateName, 1);
    if ( numParams > 0 )
      *(_BYTE *)(v11 + 3528) = ASM_Builtin_GetBoolParam(0, pParams, numParams);
    PlayStartAnim(m_pAI, asmName, toStateName, AnimID);
    v18 = *(float *)(v11 + 3516);
    if ( v18 > 0.0 && *(_DWORD *)(v11 + 480) == scr_const.combat )
      *(float *)(v11 + 3404) = v18;
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
char ASM_Exit_NoteHandler(int entNum, const scr_string_t asmName, const scr_string_t notetrackName, int numParams)
{
  __int64 v4; 
  AIScriptedInterface *m_pAI; 
  __int64 v6; 
  __int64 v7; 
  scr_string_t corner; 
  scr_string_t AnimsetName; 
  XAnimSubTreeID v10; 
  const XAnimTree *v11; 
  const XAnim_s *SubTreeAnims; 
  scr_string_t v13; 
  double NotetrackTime; 
  float v15; 
  double v16; 
  const char *AnimDebugName; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  unsigned __int16 v21; 
  gentity_s *v22; 
  AIScriptedInterface *v24; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  XAnimCurveID *pOutAnimCurveID; 
  unsigned int pOutAnimIndex; 
  XAnimSubTreeID v28; 
  scr_string_t name; 
  unsigned int pOutGraftNode; 
  __int64 v31; 
  AIWrapper v32; 
  Animset *pAnimset; 
  float v34; 
  vec3_t v35; 
  vec3_t angles; 
  vec4_t quat; 
  vec4_t out; 
  vec3_t trans; 
  vec4_t in2; 
  vec4_t rot; 

  v31 = -2i64;
  name = notetrackName;
  v4 = entNum;
  if ( notetrackName == scr_const.warp_exit_start )
  {
    if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 632, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
      __debugbreak();
    AIWrapper::AIWrapper(&v32, &g_entities[v4]);
    m_pAI = v32.m_pAI;
    if ( !v32.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 633, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    v6 = m_pAI->GetAI(m_pAI);
    v7 = v6 + 3492;
    if ( !*(_BYTE *)(v6 + 3527) )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "ASM_Exit_NoteHandler");
      if ( *(_BYTE *)(v6 + 3526) )
      {
        if ( *(_BYTE *)(v6 + 3526) == 1 )
        {
          corner = scr_const.corner;
        }
        else if ( *(_BYTE *)(v6 + 3526) == 2 )
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
      AnimsetName = BG_AnimationState_GetAnimsetName(*(const entityState_t **)v6);
      *(double *)&pAnimset = COERCE_DOUBLE(Animset_Find(AnimsetName));
      if ( *(double *)&pAnimset == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 645, ASSERT_TYPE_ASSERT, "( pAnimset )", (const char *)&queryFormat, "pAnimset") )
        __debugbreak();
      BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, (*(_DWORD *)(*(_QWORD *)v6 + 208i64) >> 1) & 0x3FF, (*(_DWORD *)(*(_QWORD *)v6 + 208i64) >> 11) & 0x7F, &pOutAnimIndex, &pOutGraftNode, &v28, NULL);
      v10 = v28;
      v11 = m_pAI->GetAnimTree(m_pAI);
      SubTreeAnims = XAnimGetSubTreeAnims(v11, v10);
      v13 = name;
      NotetrackTime = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, name);
      v15 = *(float *)&NotetrackTime;
      v16 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, corner);
      if ( v15 < 0.0 )
      {
        AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, pOutAnimIndex);
        v18 = SL_ConvertToString(v13);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 656, ASSERT_TYPE_ASSERT, "( startTime >= 0.f )", "Unable to find notetrack %s in anim %s", v18, AnimDebugName) )
          __debugbreak();
      }
      if ( *(float *)&v16 < 0.0 )
      {
        v19 = XAnimGetAnimDebugName(SubTreeAnims, pOutAnimIndex);
        v20 = SL_ConvertToString(corner);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 657, ASSERT_TYPE_ASSERT, "( endTime >= 0.f )", "Unable to find notetrack %s in anim %s", v20, v19) )
          __debugbreak();
      }
      XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &rot, &trans, v15, *(float *)&v16);
      pAnimset = *(Animset **)v7;
      v34 = *(float *)(v7 + 8);
      angles = *(vec3_t *)(v7 + 12);
      v21 = *(_WORD *)(v7 + 32);
      if ( v21 != 2047 )
      {
        if ( v21 >= 0x800u )
        {
          LODWORD(pOutAnimCurveID) = 2048;
          LODWORD(pOutAnimSubtreeID) = (__int16)v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 669, ASSERT_TYPE_ASSERT, "(unsigned)( pExitParams->m_GroundEntNum ) < (unsigned)( ( 2048 ) )", "pExitParams->m_GroundEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
            __debugbreak();
        }
        v22 = &g_entities[*(__int16 *)(v7 + 32)];
        AnglesToQuat(&v22->r.currentAngles, &quat);
        AnglesToQuat((const vec3_t *)(v7 + 12), &in2);
        QuatMultiply(&quat, &in2, &out);
        QuatToAngles(&out, &angles);
        QuatTransform(&quat, (const vec3_t *)v7, &v35);
        *(float *)&pAnimset = v35.v[0] + v22->r.currentOrigin.v[0];
        *((float *)&pAnimset + 1) = v35.v[1] + v22->r.currentOrigin.v[1];
        v34 = v35.v[2] + v22->r.currentOrigin.v[2];
      }
      v35 = angles;
      *(double *)quat.v = *(double *)&pAnimset;
      quat.v[2] = v34;
      out = rot;
      SetupMotionWarp(v4, &trans, &out, (const vec3_t *)&quat, &v35, *(float *)(v7 + 28));
      Sys_ProfEndNamedEvent();
    }
    return 1;
  }
  else
  {
    if ( notetrackName != scr_const.code_move )
      return 0;
    if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 693, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
      __debugbreak();
    AIWrapper::AIWrapper(&v32, &g_entities[v4]);
    v24 = v32.m_pAI;
    if ( !v32.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 694, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    if ( *(_BYTE *)(v24->GetAI(v24) + 3528) )
    {
      G_MotionWarp_Cancel(v4);
      v24->SetAnimMode(v24, AI_ANIM_MOVE_CODE);
      AIScriptedInterface::SetOrientMode(v24, AI_ORIENT_TO_MOTION);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

/*
==============
DetermineStartAnim
==============
*/
int DetermineStartAnim(const AIScriptedInterface *pAI, const scr_string_t stateName, bool forceUseSelfAngles, const scr_string_t optionalSuffix)
{
  __int64 v7; 
  pathnode_t *StartNodeFromLink; 
  double DistToNextCorner; 
  float *v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float *v17; 
  float v18; 
  float v19; 
  double v20; 
  float v21; 
  pathnode_t *v22; 
  pathnode_t *v27; 
  float *v28; 
  pathnode_t *v29; 
  double Angle; 
  float v31; 
  float v34; 
  float v36; 
  double v37; 
  double v40; 
  __int64 v42; 
  scr_string_t AnimsetName; 
  const char *v44; 
  float v45; 
  double v46; 
  float v47; 
  double v48; 
  float v49; 
  __int128 v50; 
  __int128 v54; 
  float v60; 
  __int64 v61; 
  float v62; 
  unsigned int v64; 
  unsigned int outAngleIndexCount; 
  unsigned int v66; 
  __int64 v67; 
  vec3_t inOutMoveDelta; 
  vec3_t angles; 
  vec3_t outLookaheadDir; 
  vec2_t vec; 
  float v72; 
  vec2_t v73; 
  float v74; 
  vec3_t forward; 
  vec3_t velocity; 
  nav_posAlongPathResults_t v77; 
  vec3_t vFinalGoal; 
  char v79[16]; 
  vec3_t v80; 
  vec3_t pos; 
  int outAngleIndices[4]; 

  v67 = -2i64;
  v7 = pAI->GetAI(&pAI->AICommonInterface);
  if ( !AICommonInterface::HasPath(&pAI->AICommonInterface) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 133, ASSERT_TYPE_ASSERT, "(pAI->HasPath())", (const char *)&queryFormat, "pAI->HasPath()") )
    __debugbreak();
  AICommonInterface::GetPathFinalGoal(&pAI->AICommonInterface, &vFinalGoal);
  if ( bfx::LinkHandle::IsValid((bfx::LinkHandle *)(*(_QWORD *)(v7 + 392) + 176i64)) )
  {
    StartNodeFromLink = Nav_GetStartNodeFromLink((const bfx::LinkHandle *)(*(_QWORD *)(v7 + 392) + 176i64));
    pathnode_t::GetPos(StartNodeFromLink, &vFinalGoal);
  }
  Nav_GetLookaheadDir(*(const AINavigator **)(v7 + 392), &outLookaheadDir);
  if ( forceUseSelfAngles )
  {
    DistToNextCorner = Nav_GetDistToNextCorner(*(const AINavigator **)(v7 + 392));
    v10 = *(float **)v7;
    v11 = (float)(*(float *)&DistToNextCorner * outLookaheadDir.v[0]) + *(float *)(*(_QWORD *)v7 + 304i64);
    v12 = (float)(*(float *)&DistToNextCorner * outLookaheadDir.v[1]) + *(float *)(*(_QWORD *)v7 + 308i64);
    v13 = (float)(*(float *)&DistToNextCorner * outLookaheadDir.v[2]) + *(float *)(*(_QWORD *)v7 + 312i64);
    v14 = v11;
    v15 = v12;
    v16 = v13;
  }
  else
  {
    bfx::AreaHandle::AreaHandle(&v77.m_hArea);
    bfx::LinkHandle::LinkHandle(&v77.m_hLink);
    Nav_GetPosAlongPath(*(const AINavigator **)(v7 + 392), 128.0, 1, &v77);
    v11 = v77.m_Pos.v[0];
    v12 = v77.m_Pos.v[1];
    v13 = v77.m_Pos.v[2];
    Nav_GetPosAlongPath(*(const AINavigator **)(v7 + 392), 32.0, 1, &v77);
    v14 = v77.m_Pos.v[0];
    v15 = v77.m_Pos.v[1];
    v16 = v77.m_Pos.v[2];
    bfx::LinkHandle::~LinkHandle(&v77.m_hLink);
    bfx::AreaHandle::~AreaHandle(&v77.m_hArea);
    v10 = *(float **)v7;
  }
  vec.v[0] = v11 - v10[76];
  vec.v[1] = v12 - v10[77];
  v72 = v13 - v10[78];
  v17 = *(float **)v7;
  v73.v[0] = v14 - *(float *)(*(_QWORD *)v7 + 304i64);
  v73.v[1] = v15 - v17[77];
  v74 = v16 - v17[78];
  v18 = v74;
  vectoyaw(&vec);
  v19 = v18;
  v20 = vectoyaw(&v73);
  v21 = *(float *)&v20;
  v22 = NULL;
  _XMM1 = *(unsigned __int8 *)(v7 + 2254);
  __asm { vpcmpeqd xmm4, xmm1, xmm2 }
  _XMM2 = LODWORD(FLOAT_1024_0);
  __asm { vblendvps xmm6, xmm2, xmm3, xmm4 }
  v27 = *(pathnode_t **)(*(_QWORD *)(v7 + 8) + 112i64);
  v64 = _XMM6;
  if ( v27 && (pathnode_t::GetPos(v27, &pos), v28 = *(float **)v7, (float)((float)((float)((float)(pos.v[1] - *(float *)(*(_QWORD *)v7 + 308i64)) * (float)(pos.v[1] - *(float *)(*(_QWORD *)v7 + 308i64))) + (float)((float)(pos.v[0] - *(float *)(*(_QWORD *)v7 + 304i64)) * (float)(pos.v[0] - *(float *)(*(_QWORD *)v7 + 304i64)))) + (float)((float)(pos.v[2] - *(float *)(*(_QWORD *)v7 + 312i64)) * (float)(pos.v[2] - *(float *)(*(_QWORD *)v7 + 312i64)))) < *(float *)&_XMM6) )
  {
    v22 = *(pathnode_t **)(*(_QWORD *)(v7 + 8) + 112i64);
  }
  else
  {
    v29 = *(pathnode_t **)(*(_QWORD *)(v7 + 8) + 120i64);
    if ( !v29 || (pathnode_t::GetPos(v29, &v80), v28 = *(float **)v7, (float)((float)((float)((float)(v80.v[1] - *(float *)(*(_QWORD *)v7 + 308i64)) * (float)(v80.v[1] - *(float *)(*(_QWORD *)v7 + 308i64))) + (float)((float)(v80.v[0] - *(float *)(*(_QWORD *)v7 + 304i64)) * (float)(v80.v[0] - *(float *)(*(_QWORD *)v7 + 304i64)))) + (float)((float)(v80.v[2] - *(float *)(*(_QWORD *)v7 + 312i64)) * (float)(v80.v[2] - *(float *)(*(_QWORD *)v7 + 312i64)))) >= *(float *)&_XMM6) )
    {
      v28 = *(float **)v7;
LABEL_19:
      v31 = v28[80];
      goto LABEL_20;
    }
    v22 = *(pathnode_t **)(*(_QWORD *)(v7 + 8) + 120i64);
  }
  if ( !v22 || forceUseSelfAngles )
    goto LABEL_19;
  Angle = pathnode_t::GetAngle(v22);
  v31 = *(float *)&Angle;
LABEL_20:
  _XMM10 = 0i64;
  __asm { vroundss xmm2, xmm10, xmm1, 1 }
  v34 = (float)((float)((float)(v18 - v31) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm3, xmm10, xmm0, 1 }
  v36 = (float)((float)((float)(v21 - v31) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  v37 = vectoyaw((const vec2_t *)&outLookaheadDir);
  __asm { vroundss xmm3, xmm10, xmm1, 1 }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v37 - v31) * 0.0027777778) - *(float *)&_XMM3) * 360.0) & _xmm) > 135.0 && COERCE_FLOAT(LODWORD(v34) & _xmm) < 90.0 )
    return -1;
  if ( (float)((float)(*(float *)(v7 + 2104) * *(float *)(v7 + 2104)) + (float)(*(float *)(v7 + 2108) * *(float *)(v7 + 2108))) > 16.0 )
  {
    v40 = vectoyaw((const vec2_t *)(v7 + 2104));
    __asm { vroundss xmm3, xmm10, xmm1, 1 }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v40 - v19) * 0.0027777778) - *(float *)&_XMM3) * 360.0) & _xmm) < 45.0 )
      return -1;
  }
  G_GetAngleIndices(v34, 10.0, outAngleIndices, &outAngleIndexCount);
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v7 + 392) + 16i64))(*(_QWORD *)(v7 + 392), v79);
  v42 = outAngleIndices[0];
  AnimsetName = BG_AnimationState_GetAnimsetName(*(const entityState_t **)v7);
  v44 = SL_ConvertToString(stateName);
  if ( I_strstr(v44, "cover") && v22 )
  {
    *(__m256i *)v77.m_Pos.v = _ymm;
    *((float *)&v77.m_hArea.m_pSpace + 1) = FLOAT_N180_0;
    v45 = v77.m_Pos.v[v42];
    if ( I_strstr(v44, "left") && (_DWORD)v42 == 4 )
      LODWORD(v45) ^= _xmm;
    v46 = pathnode_t::GetAngle(v22);
    v47 = *(float *)&v46 + v45;
  }
  else
  {
    *(__m256i *)v77.m_Pos.v = _ymm;
    *((float *)&v77.m_hArea.m_pSpace + 1) = FLOAT_180_0;
    v47 = v77.m_Pos.v[v42] + *(float *)(*(_QWORD *)v7 + 320i64);
  }
  v48 = AngleNormalize360(v47);
  angles.v[2] = 0.0;
  angles.v[1] = *(float *)&v48;
  angles.v[0] = 0.0;
  AngleVectors(&angles, &forward, NULL, NULL);
  v49 = *(float *)(v7 + 3404);
  velocity.v[0] = v49 * forward.v[0];
  velocity.v[1] = v49 * forward.v[1];
  velocity.v[2] = v49 * forward.v[2];
  inOutMoveDelta.v[0] = 5.0 * forward.v[0];
  inOutMoveDelta.v[1] = 5.0 * forward.v[1];
  inOutMoveDelta.v[2] = 5.0 * forward.v[2];
  if ( AIScriptedInterface::GetAvoidanceDelta((AIScriptedInterface *)pAI, 20.0, 0, &velocity, &inOutMoveDelta) )
    return -1;
  if ( *(_BYTE *)(v7 + 2908) )
  {
    v50 = LODWORD(inOutMoveDelta.v[1]);
    *(float *)&v50 = fsqrt((float)((float)(*(float *)&v50 * *(float *)&v50) + (float)(inOutMoveDelta.v[0] * inOutMoveDelta.v[0])) + (float)(inOutMoveDelta.v[2] * inOutMoveDelta.v[2]));
    _XMM3 = v50;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    inOutMoveDelta.v[0] = inOutMoveDelta.v[0] * (float)(1.0 / *(float *)&_XMM0);
    inOutMoveDelta.v[1] = inOutMoveDelta.v[1] * (float)(1.0 / *(float *)&_XMM0);
    v54 = LODWORD(inOutMoveDelta.v[2]);
    inOutMoveDelta.v[2] = inOutMoveDelta.v[2] * (float)(1.0 / *(float *)&_XMM0);
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&inOutMoveDelta);
    __asm { vroundss xmm3, xmm10, xmm1, 1 }
    *(float *)&v54 = (float)((float)((float)(*(float *)&_XMM0 - v31) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    _XMM1 = v54;
    _XMM0 = LODWORD(FLOAT_179_0);
    if ( *(float *)&v54 >= -179.0 )
    {
      __asm
      {
        vcmpltss xmm2, xmm0, xmm1
        vblendvps xmm0, xmm1, xmm5, xmm2; angle
      }
    }
    G_GetAngleIndices(*(const float *)&_XMM0, 45.0, (int *)&v80, &v64);
    __asm { vroundss xmm4, xmm10, xmm3, 1 }
    G_GetAngleIndices((float)((float)((float)(angles.v[1] - v31) * 0.0027777778) - *(float *)&_XMM4) * 360.0, 10.0, (int *)&pos, &v66);
    v60 = v80.v[0];
    if ( (int)(v64 - 1) >= 0 )
    {
      v61 = (int)(v64 - 1);
      while ( 1 )
      {
        v62 = v80.v[v61];
        if ( LODWORD(v62) != LODWORD(pos.v[0]) && ((v42 & 0xFFFFFFF7) != 0 || (LODWORD(v62) & 0xFFFFFFF7) != 0) && LODWORD(v62) != (_DWORD)v42 )
          break;
        if ( --v61 < 0 )
          goto LABEL_45;
      }
      v60 = v80.v[v61];
    }
LABEL_45:
    *(_BYTE *)(v7 + 3527) = 1;
  }
  else
  {
    v60 = *(float *)&v42;
  }
  return GetStartAnim(AnimsetName, stateName, optionalSuffix, SLODWORD(v60), v36);
}

/*
==============
GetStartAnim
==============
*/
__int64 GetStartAnim(scr_string_t animsetName, scr_string_t stateName, scr_string_t optionalSuffix, int idx, float nearAngleDiff)
{
  unsigned int v7; 
  const char *v8; 
  const char *v9; 
  scr_string_t String; 
  unsigned int IndexOfRandomAnimFromAlias; 
  __m256i v13; 
  int v14; 
  char dest[128]; 

  v14 = 2;
  v13 = _ymm;
  v7 = v13.m256i_u32[idx];
  v8 = (char *)&queryFormat.fmt + 3;
  if ( optionalSuffix )
    v8 = SL_ConvertToString(optionalSuffix);
  if ( v7 == 8 )
  {
    v9 = "r";
    if ( nearAngleDiff >= 0.0 )
      v9 = "l";
    Com_sprintf(dest, 0x80ui64, "%d%s%s", 8i64, v9, v8);
  }
  else
  {
    Com_sprintf(dest, 0x80ui64, "%d%s", v7, v8);
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
  __int128 v4; 
  __int16 **v8; 
  __int64 v9; 
  scr_string_t AnimsetName; 
  const Animset *v11; 
  XAnimSubTreeID v12; 
  const XAnimTree *v13; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v15; 
  float v18; 
  float v20; 
  Ai_Asm *v22; 
  scr_string_t v23; 
  scr_string_t v24; 
  float v25; 
  __int64 v26; 
  __int64 v27; 
  float v29; 
  float v30; 
  __int64 v31; 
  __int64 v32; 
  double v33; 
  float v34; 
  double Length; 
  float v36; 
  float v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float *v48; 
  vec3_t *v49; 
  float v51; 
  const char *AnimDebugName; 
  __int64 GroundEntNum; 
  gentity_s *v58; 
  int fmtb; 
  int fmt; 
  int fmtc; 
  int fmta; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  XAnimCurveID *pOutAnimCurveID; 
  unsigned int pOutAnimIndex; 
  scr_string_t asmNamea; 
  float v67; 
  XAnimSubTreeID v68[2]; 
  int pOutStateIndex; 
  float v70; 
  float v71; 
  float v72; 
  AnimsetState *outState; 
  unsigned int pOutGraftNode[2]; 
  __int64 v75; 
  vec3_t in; 
  vec4_t v77; 
  vec4_t in1; 
  vec4_t quat; 
  float v80; 
  float v81; 
  float v82; 
  vec2_t vec; 
  float v84; 
  vec3_t angles; 
  vec4_t v86; 
  vec3_t trans; 
  vec4_t in2; 
  float v89; 
  float v90; 
  float v91; 
  bfx::AreaHandle v92; 
  bfx::LinkHandle v93; 
  vec4_t rot; 

  v75 = -2i64;
  asmNamea = asmName;
  v8 = (__int16 **)pAI->GetAI(pAI);
  bfx::AreaHandle::AreaHandle(&v92);
  bfx::LinkHandle::LinkHandle(&v93);
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(__int16 *, __int16 *, __int64, float *, _BYTE))(*(_QWORD *)v8[49] + 416i64))(v8[49], v8[49], v9, &v89, 0);
  AnimsetName = BG_AnimationState_GetAnimsetName((const entityState_t *)*v8);
  v11 = Animset_Find(AnimsetName);
  outState = NULL;
  BG_Animset_GetStateInfoByName(v11, stateName, &outState, &pOutStateIndex);
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 388, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(v11, pOutStateIndex, animID, &pOutAnimIndex, pOutGraftNode, v68, NULL);
  v12 = v68[0];
  v13 = pAI->GetAnimTree(pAI);
  SubTreeAnims = XAnimGetSubTreeAnims(v13, v12);
  v15 = pOutAnimIndex;
  if ( pOutAnimIndex >= SubTreeAnims->size )
  {
    LODWORD(pOutAnimCurveID) = SubTreeAnims->size;
    LODWORD(pOutAnimSubtreeID) = pOutAnimIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 396, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( pAnims->size )", "animIndex doesn't index pAnims->size\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
      __debugbreak();
    v15 = pOutAnimIndex;
  }
  *(double *)&v4 = XAnimGetNotetrackTime(SubTreeAnims, v15, scr_const.code_move);
  _XMM10 = v4;
  *(double *)&v4 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.corner);
  _XMM9 = v4;
  *(double *)&v4 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.warp_exit_start);
  v18 = *(float *)&v4;
  *(double *)&v4 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.warp_exit_end);
  _XMM8 = v4;
  v20 = FLOAT_1_0;
  _XMM7 = 0i64;
  if ( *(float *)&_XMM10 <= 0.0 )
  {
    v24 = asmNamea;
  }
  else
  {
    v22 = Ai_Asm::Singleton();
    v23 = stateName;
    v24 = asmNamea;
    Ai_Asm::RunMoveThreads(v22, asmNamea, **v8, v23);
    v20 = *(float *)&_XMM10;
  }
  pAI->SetAnimMode(pAI, AI_ANIM_USE_BOTH_DELTAS_ZONLY_PHYSICS);
  *((_BYTE *)v8 + 1833) = 1;
  XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &rot, &trans, 0.0, v20);
  v25 = fsqrt((float)((float)(trans.v[0] * trans.v[0]) + (float)(trans.v[1] * trans.v[1])) + (float)(trans.v[2] * trans.v[2]));
  v72 = v25;
  LOBYTE(fmtb) = 0;
  LOBYTE(v26) = 1;
  (*(void (__fastcall **)(__int16 *, __int64, __int64, float *, int))(*(_QWORD *)v8[49] + 416i64))(v8[49], v27, v26, &v89, fmtb);
  _XMM6 = LODWORD(v89);
  *(float *)&asmNamea = v89;
  v29 = v90;
  v70 = v90;
  v30 = v91;
  v71 = v91;
  in.v[2] = v91;
  (*(void (__fastcall **)(__int16 *, float *))(*(_QWORD *)v8[49] + 16i64))(v8[49], &v80);
  if ( v25 <= 1.0 )
  {
    LOBYTE(fmt) = 0;
    LOBYTE(v32) = 1;
    (*(void (__fastcall **)(__int16 *, __int64, __int64, float *, int))(*(_QWORD *)v8[49] + 416i64))(v8[49], v31, v32, &v89, fmt);
    vec.v[0] = v89 - v80;
    vec.v[1] = v90 - v81;
    v84 = v91 - v82;
  }
  else
  {
    vec.v[0] = *(float *)&_XMM6 - v80;
    vec.v[1] = v29 - v81;
    v84 = v30 - v82;
  }
  v33 = vectoyaw(&vec);
  v34 = *(float *)&v33;
  v67 = *(float *)&v33;
  ASM_PlayFacialAnim(**v8, v24, v11, pOutStateIndex, animID);
  ((void (__fastcall *)(AIScriptedInterface *, const Animset *, _QWORD, _QWORD, _DWORD))pAI->SetAnim)(pAI, v11, (unsigned int)pOutStateIndex, (unsigned int)animID, LODWORD(FLOAT_1_0));
  Length = XAnimGetLength(SubTreeAnims, pOutAnimIndex);
  v36 = *(float *)&Length;
  if ( !*((_BYTE *)v8 + 3527) )
  {
    if ( *(float *)&_XMM9 < 0.0 )
    {
      if ( v18 <= 0.0 )
      {
        if ( *(float *)&_XMM10 <= 0.0 )
        {
          AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, pOutAnimIndex);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_exit.cpp", 503, ASSERT_TYPE_ASSERT, "( codeMoveTime > 0.f )", "Animation requires code_move for motion warp: %s.", AnimDebugName) )
            __debugbreak();
        }
        v77.v[0] = 0.0;
        v77.v[1] = v34;
        v77.v[2] = 0.0;
        _XMM1 = _XMM10;
        if ( *(float *)&_XMM8 > 0.0 )
        {
          __asm
          {
            vcmpltss xmm0, xmm8, xmm10
            vblendvps xmm1, xmm1, xmm8, xmm0
          }
        }
        *(double *)in1.v = *(double *)v77.v;
        in1.v[2] = v77.v[2];
        __asm { vunpcklps xmm0, xmm6, xmm13 }
        *(double *)quat.v = *(double *)&_XMM0;
        quat.v[2] = in.v[2];
        in2 = rot;
        SetupMotionWarp(**v8, &trans, &in2, (const vec3_t *)&quat, (const vec3_t *)&in1, *(float *)&_XMM1 * v36);
      }
    }
    else
    {
      XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &in2, (vec3_t *)&v77, 0.0, *(float *)&_XMM9);
      v37 = fsqrt((float)((float)(v77.v[0] * v77.v[0]) + (float)(v77.v[1] * v77.v[1])) + (float)(v77.v[2] * v77.v[2]));
      LOBYTE(fmtc) = 0;
      LOBYTE(v38) = 1;
      (*(void (__fastcall **)(__int16 *, __int64, __int64, float *, int))(*(_QWORD *)v8[49] + 416i64))(v8[49], v39, v38, &v89, fmtc);
      v42 = v89;
      v86.v[0] = v89;
      v43 = v90;
      v86.v[1] = v90;
      v44 = v91;
      v86.v[2] = v91;
      v45 = *(float *)&asmNamea;
      v46 = v70;
      v47 = v71;
      if ( (float)(v72 - v37) < 2.0 )
      {
        LOBYTE(fmta) = 0;
        LOBYTE(v41) = 1;
        (*(void (__fastcall **)(__int16 *, __int64, __int64, float *, int))(*(_QWORD *)v8[49] + 416i64))(v8[49], v40, v41, &v89, fmta);
        v45 = v89;
        v46 = v90;
        v47 = v91;
      }
      in.v[0] = v45 - v42;
      in.v[1] = v46 - v43;
      in.v[2] = v47 - v44;
      vectoangles(&in, &angles);
      angles.v[2] = 0.0;
      angles.v[0] = 0.0;
      if ( v18 > 0.0 && v18 < *(float *)&_XMM9 )
      {
        *((float *)v8 + 873) = v42;
        v48 = (float *)(v8 + 437);
        *((float *)v8 + 874) = v43;
        *((float *)v8 + 875) = v44;
        v49 = (vec3_t *)(v8 + 438);
        *((_DWORD *)v8 + 876) = 0;
        *((float *)v8 + 877) = angles.v[1];
        *((_DWORD *)v8 + 878) = 0;
        *((_BYTE *)v8 + 3526) = 1;
        if ( *(float *)&_XMM8 > 0.0 )
        {
          __asm
          {
            vcmpltss xmm0, xmm8, xmm9
            vblendvps xmm9, xmm9, xmm8, xmm0
          }
        }
        v51 = *(float *)&_XMM9 - v18;
        goto LABEL_34;
      }
      quat.xyz = angles;
      *(double *)in1.v = *(double *)v86.v;
      in1.v[2] = v86.v[2];
      v86 = in2;
      SetupMotionWarp(**v8, (const vec3_t *)&v77, &v86, (const vec3_t *)&in1, (const vec3_t *)&quat, *(float *)&Length * *(float *)&_XMM9);
      LODWORD(_XMM6) = asmNamea;
      v29 = v70;
      v34 = v67;
    }
  }
  *((float *)v8 + 873) = *(float *)&_XMM6;
  v48 = (float *)(v8 + 437);
  *((float *)v8 + 874) = v29;
  *((float *)v8 + 875) = v71;
  v49 = (vec3_t *)(v8 + 438);
  *((_DWORD *)v8 + 876) = 0;
  *((float *)v8 + 877) = v34;
  *((_DWORD *)v8 + 878) = 0;
  *((_BYTE *)v8 + 3526) = 2;
  if ( v18 >= 0.0 )
  {
    __asm
    {
      vcmpltss xmm0, xmm7, xmm8
      vblendvps xmm10, xmm10, xmm8, xmm0
    }
  }
  v51 = *(float *)&_XMM10 - v18;
LABEL_34:
  *((float *)v8 + 880) = v51 * v36;
  GroundEntNum = AIScriptedInterface::GetGroundEntNum(pAI);
  if ( (unsigned int)(GroundEntNum - 2046) <= 1 )
  {
    *((_WORD *)v8 + 1762) = 2047;
  }
  else
  {
    v58 = &g_entities[GroundEntNum];
    AnglesToQuat(&v58->r.currentAngles, &quat);
    LODWORD(in1.v[0]) = LODWORD(quat.v[0]) ^ _xmm;
    LODWORD(in1.v[1]) = LODWORD(quat.v[1]) ^ _xmm;
    LODWORD(in1.v[2]) = LODWORD(quat.v[2]) ^ _xmm;
    in1.v[3] = quat.v[3];
    in.v[0] = *((float *)v8 + 873) - v58->r.currentOrigin.v[0];
    in.v[1] = *v48 - v58->r.currentOrigin.v[1];
    in.v[2] = *((float *)v8 + 875) - v58->r.currentOrigin.v[2];
    QuatTransform(&in1, &in, (vec3_t *)v8 + 291);
    AnglesToQuat(v49, &in2);
    QuatMultiply(&in1, &in2, &v77);
    QuatToAngles(&v77, v49);
    *((_WORD *)v8 + 1762) = GroundEntNum;
  }
  bfx::LinkHandle::~LinkHandle(&v93);
  bfx::AreaHandle::~AreaHandle(&v92);
}

