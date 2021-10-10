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
char ASM_PlayAnim_Arrival(int entNum, const scr_string_t asmName, const scr_string_t toStateName, int numParams, ASM_Function_Param *pParams)
{
  __int64 v6; 
  const gentity_s *v7; 
  int v8; 
  AIScriptedInterface *m_pAI; 
  __int64 v10; 
  float m_Int; 
  scr_string_t v12; 
  scr_string_t AnimsetName; 
  const Animset *v14; 
  const char *name; 
  const char *v16; 
  XAnimSubTreeID v17; 
  const XAnimTree *v18; 
  const XAnim_s *SubTreeAnims; 
  double Length; 
  float v21; 
  double NotetrackTime; 
  AIScriptedInterface_vtbl *v23; 
  double v24; 
  float v25; 
  float v26; 
  double v27; 
  float v28; 
  float v29; 
  float v30; 
  double v31; 
  float v32; 
  unsigned int v33; 
  float v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  double v38; 
  float v39; 
  double v40; 
  int v41; 
  double v42; 
  float v43; 
  double v44; 
  double v45; 
  unsigned int pOutAnimIndex; 
  int pOutStateIndex; 
  scr_string_t asmNamea[2]; 
  vec3_t v50; 
  scr_string_t toStateNamea[2]; 
  AnimsetState *outState; 
  unsigned int pOutGraftNode[2]; 
  __int64 v54; 
  AIWrapper v55; 
  vec3_t trans; 
  vec3_t v57; 
  vec4_t v58; 
  vec4_t rot; 

  v54 = -2i64;
  toStateNamea[0] = toStateName;
  asmNamea[1] = asmName;
  v6 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 323, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v7 = &g_entities[v6];
  AIActorInterface::AIActorInterface(&v55.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v55.m_newAgentInterface);
  v55.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v8 = 0;
  v55.m_pAI = NULL;
  AIWrapper::Setup(&v55, v7);
  m_pAI = v55.m_pAI;
  if ( !v55.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 324, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v10 = m_pAI->GetAI(m_pAI);
  m_Int = FLOAT_1_0;
  if ( numParams > 0 )
  {
    if ( !pParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 368, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
      __debugbreak();
    if ( (unsigned int)(pParams->m_Type - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 370, ASSERT_TYPE_ASSERT, "(pParams[ iParam ].m_Type == ParamType_Int || pParams[ iParam ].m_Type == ParamType_Float)", (const char *)&queryFormat, "pParams[ iParam ].m_Type == ParamType_Int || pParams[ iParam ].m_Type == ParamType_Float") )
      __debugbreak();
    if ( pParams->m_Type == ParamType_Int )
      m_Int = (float)pParams->u.m_Int;
    else
      m_Int = pParams->u.m_Float;
  }
  AIScriptedInterface::ResetASMInstanceData(m_pAI);
  v12 = toStateNamea[0];
  ASM_GetAnimID(v6, asmNamea[1], toStateNamea[0]);
  m_pAI->OrientMode_FaceAngles(m_pAI, (const vec3_t *)(*(_QWORD *)v10 + 316i64), 0, 0);
  AnimsetName = BG_AnimationState_GetAnimsetName(*(const entityState_t **)v10);
  v14 = Animset_Find(AnimsetName);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 399, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  outState = NULL;
  BG_Animset_GetStateInfoByName(v14, toStateNamea[0], &outState, &pOutStateIndex);
  if ( !outState )
  {
    name = v14->name;
    v16 = SL_ConvertToString(v12);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 404, ASSERT_TYPE_ASSERT, "( pState )", "unable to find state %s in animset %s", v16, name) )
      __debugbreak();
  }
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(v14, pOutStateIndex, *(_DWORD *)(v10 + 3492), &pOutAnimIndex, pOutGraftNode, (XAnimSubTreeID *)asmNamea, NULL);
  v17 = asmNamea[0];
  v18 = m_pAI->GetAnimTree(m_pAI);
  SubTreeAnims = XAnimGetSubTreeAnims(v18, v17);
  if ( !*(_BYTE *)(v10 + 3533) )
    AIScriptedInterface::StartArrivalState(m_pAI, AIS_BEHAVE);
  Length = XAnimGetLength(SubTreeAnims, pOutAnimIndex);
  v21 = *(float *)&Length;
  NotetrackTime = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.code_move);
  v23 = m_pAI->__vftable;
  if ( *(float *)&NotetrackTime >= 0.0 )
  {
    v23->SetAnimMode(m_pAI, AI_ANIM_USE_BOTH_DELTAS_ZONLY_PHYSICS);
    v24 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.corner);
    if ( *(float *)&v24 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 427, ASSERT_TYPE_ASSERT, "(cornerTime > 0.f)", (const char *)&queryFormat, "cornerTime > 0.f") )
      __debugbreak();
    XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &rot, &trans, 0.0, *(float *)&v24);
    v50 = *(vec3_t *)(v10 + 3508);
    v57 = *(vec3_t *)(v10 + 3496);
    v58 = rot;
    SetupMotionWarp(v6, &trans, &v58, &v57, &v50, *(float *)&v24 * v21);
    v25 = *(float *)(*(_QWORD *)v10 + 304i64) - *(float *)(v10 + 3496);
    v26 = *(float *)(*(_QWORD *)v10 + 308i64) - *(float *)(v10 + 3500);
    v27 = I_fclamp((float)(1.0 / fsqrt((float)(v26 * v26) + (float)(v25 * v25))) * fsqrt((float)(trans.v[0] * trans.v[0]) + (float)(trans.v[1] * trans.v[1])), 0.5, 2.0);
    ((void (__fastcall *)(AIScriptedInterface *, const Animset *, _QWORD, _QWORD, _DWORD))m_pAI->SetAnim)(m_pAI, v14, (unsigned int)pOutStateIndex, *(unsigned int *)(v10 + 3492), LODWORD(v27));
    *(_BYTE *)(v10 + 3534) = 1;
    return 1;
  }
  v23->SetAnimMode(m_pAI, AI_ANIM_USE_BOTH_DELTAS_ZONLY_PHYSICS);
  ASM_PlayFacialAnim(v6, asmNamea[1], v14, pOutStateIndex, *(_DWORD *)(v10 + 3492));
  if ( *(_BYTE *)(v10 + 3532) )
  {
    m_Int = *(float *)(v10 + 3528);
  }
  else if ( *(_BYTE *)(v10 + 3535) )
  {
    XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &v58, &v57, 0.0, 1.0);
    v28 = *(float *)(v10 + 3496) - *(float *)(*(_QWORD *)v10 + 304i64);
    v29 = *(float *)(v10 + 3500) - *(float *)(*(_QWORD *)v10 + 308i64);
    v30 = fsqrt((float)(v29 * v29) + (float)(v28 * v28));
    if ( v30 > 1.0 )
    {
      v31 = I_fclamp(fsqrt((float)(v57.v[0] * v57.v[0]) + (float)(v57.v[1] * v57.v[1])) / v30, 0.80000001, 1.3);
      m_Int = *(float *)&v31 * m_Int;
    }
  }
  m_pAI->SetAnim(m_pAI, v14, pOutStateIndex, *(_DWORD *)(v10 + 3492), COERCE_FLOAT(LODWORD(m_Int)));
  v32 = v21 / m_Int;
  *(float *)(v10 + 3524) = v21 / m_Int;
  v33 = pOutAnimIndex;
  Sys_ProfBeginNamedEvent(0xFF808080, "ASM_FindTimeOfSettleStart");
  v34 = (float)((float)level.frameDuration * 0.001) / (float)(v21 / m_Int);
  v36 = LODWORD(FLOAT_1_0);
  *(float *)&v36 = 1.0 - v34;
  v35 = v36;
  if ( (float)(1.0 - v34) <= 0.0 )
  {
LABEL_38:
    Sys_ProfEndNamedEvent();
  }
  else
  {
    while ( 1 )
    {
      XAnimGetRelDelta3D(SubTreeAnims, v33, &v58, &trans, *(float *)&v35, 1.0);
      if ( (float)((float)((float)(trans.v[0] * trans.v[0]) + (float)(trans.v[1] * trans.v[1])) + (float)(trans.v[2] * trans.v[2])) >= 64.0 )
        break;
      v37 = v35;
      *(float *)&v37 = *(float *)&v35 - v34;
      v35 = v37;
      if ( *(float *)&v37 <= 0.0 )
        goto LABEL_38;
    }
    v8 = level.time + (int)(float)((float)(*(float *)&v35 * v32) * 1000.0);
    Sys_ProfEndNamedEvent();
  }
  *(_DWORD *)(v10 + 3520) = v8;
  v38 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.warp_arrival_start);
  v39 = *(float *)&v38;
  v40 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.warp_arrival_end);
  if ( v39 < 0.0 )
  {
    v41 = 500;
    v42 = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex, scr_const.start_aim);
    if ( *(float *)&v42 > 0.0 )
    {
      v43 = *(float *)(v10 + 3524);
      v41 = (int)(float)((float)(*(float *)&v42 * 1000.0) * v43);
      if ( v41 < 300 && v43 >= 0.15000001 )
        v41 = 300;
    }
    goto LABEL_52;
  }
  if ( *(float *)&v40 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 495, ASSERT_TYPE_ASSERT, "(warpEndTime > 0.f)", (const char *)&queryFormat, "warpEndTime > 0.f") )
    __debugbreak();
  if ( v39 == 0.0 )
  {
    v41 = (int)(float)((float)(*(float *)&v40 * 1000.0) * *(float *)(v10 + 3524)) - (int)(float)((float)(*(float *)&v40 * 1000.0) * *(float *)(v10 + 3524)) % level.frameDuration;
    if ( v41 < 50 )
      v41 = 50;
LABEL_52:
    XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &v58, &trans, 0.0, 1.0);
    v44 = *(double *)(v10 + 3508);
    v57.v[2] = *(float *)(v10 + 3516);
    *(double *)v57.v = v44;
    v45 = *(double *)(v10 + 3496);
    v50.v[2] = *(float *)(v10 + 3504);
    *(double *)v50.v = v45;
    rot = v58;
    SetupMotionWarp(v6, &trans, &rot, &v50, &v57, v41);
  }
  return 1;
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
  __int64 v4; 
  const gentity_s *v6; 
  AIScriptedInterface *m_pAI; 
  gentity_s *v9; 
  AIScriptedInterface *v10; 
  __int64 v11; 
  scr_string_t AnimsetName; 
  XAnimSubTreeID v13; 
  const XAnimTree *v14; 
  const XAnim_s *SubTreeAnims; 
  float v16; 
  const XAnim_s *v17; 
  double NotetrackTime; 
  int v19; 
  double v20; 
  XAnimSubTreeID pOutAnimSubtreeID[2]; 
  unsigned int pOutAnimIndex[3]; 
  vec3_t pAnimset; 
  unsigned int pOutGraftNode[4]; 
  vec3_t v25; 
  AIWrapper v26; 
  vec4_t v27; 
  vec3_t trans; 
  vec4_t rot; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 573, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( notetrackName == scr_const.corner )
  {
    v6 = &g_entities[v4];
    AIActorInterface::AIActorInterface(&v26.m_actorInterface);
    AIAgentInterface::AIAgentInterface(&v26.m_newAgentInterface);
    v26.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v26.m_pAI = NULL;
    AIWrapper::Setup(&v26, v6);
    m_pAI = v26.m_pAI;
    if ( !v26.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 576, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    m_pAI->GetAI(m_pAI);
    return 1;
  }
  if ( notetrackName != scr_const.warp_arrival_start )
    return notetrackName == scr_const.warp_arrival_end;
  v9 = &g_entities[v4];
  AIActorInterface::AIActorInterface(&v26.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v26.m_newAgentInterface);
  v26.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v26.m_pAI = NULL;
  AIWrapper::Setup(&v26, v9);
  v10 = v26.m_pAI;
  if ( !v26.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 589, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v11 = v10->GetAI(v10);
  AnimsetName = BG_AnimationState_GetAnimsetName(&v9->s);
  *(_QWORD *)pAnimset.v = Animset_Find(AnimsetName);
  if ( !*(_QWORD *)pAnimset.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 595, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(*(const Animset **)pAnimset.v, (v9->s.animInfo.animData >> 1) & 0x3FF, (v9->s.animInfo.animData >> 11) & 0x7F, pOutAnimIndex, pOutGraftNode, pOutAnimSubtreeID, NULL);
  v13 = pOutAnimSubtreeID[0];
  v14 = v10->GetAnimTree(v10);
  SubTreeAnims = XAnimGetSubTreeAnims(v14, v13);
  v16 = *(float *)(v11 + 3524);
  v17 = SubTreeAnims;
  NotetrackTime = XAnimGetNotetrackTime(SubTreeAnims, pOutAnimIndex[0], notetrackName);
  if ( *(float *)&NotetrackTime <= 0.0 )
    return 1;
  v19 = (int)(float)((float)(*(float *)&NotetrackTime * v16) * 1000.0) - (int)(float)((float)(*(float *)&NotetrackTime * v16) * 1000.0) % level.frameDuration;
  XAnimGetRelDelta3D(v17, pOutAnimIndex[0], &rot, &trans, (float)((float)v19 * 0.001) / v16, 1.0);
  v20 = XAnimGetNotetrackTime(v17, pOutAnimIndex[0], scr_const.warp_arrival_end);
  if ( *(float *)&v20 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 620, ASSERT_TYPE_ASSERT, "(warpEndTime > 0.f)", (const char *)&queryFormat, "warpEndTime > 0.f") )
    __debugbreak();
  pAnimset.v[2] = *(float *)(v11 + 3516);
  v25.v[2] = *(float *)(v11 + 3504);
  *(_QWORD *)pAnimset.v = *(_QWORD *)(v11 + 3508);
  *(_QWORD *)v25.v = *(_QWORD *)(v11 + 3496);
  v27 = rot;
  SetupMotionWarp(v4, &trans, &v27, &v25, &pAnimset, (int)(float)((float)(*(float *)&v20 * v16) * 1000.0) + level.frameDuration - (int)(float)((float)(*(float *)&v20 * v16) * 1000.0) % level.frameDuration - v19);
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
  __int128 v5; 
  __int64 v7; 
  const gentity_s *v8; 
  bool m_Bool; 
  AIScriptedInterface *m_pAI; 
  __int16 **v11; 
  float v12; 
  int v14; 
  __int128 v15; 
  float v16; 
  __int128 v17; 
  __int128 v18; 
  scr_string_t NearestSpeedThresholdString; 
  __int128 v21; 
  const char *speedString; 
  scrContext_t *v23; 
  int v24; 
  Ai_Asm *v25; 
  ASM_Instance *Instance; 
  Ai_Asm *v27; 
  unsigned int ArrayVariable; 
  float v29; 
  float v30; 
  float v31; 
  bool v32; 
  char v34; 
  scr_string_t nodeType; 
  scr_string_t endNoteTrack; 
  int intValue; 
  unsigned int outVar; 
  scr_string_t startNoteTrack; 
  scr_string_t arrivalStateName; 
  VariableValue out; 
  ArrivalNode outNode; 
  AIWrapper v43; 
  vec3_t vFinalGoal; 
  vec3_t codeApproachDir; 
  AIAnimStopData outStopData; 
  __int128 v47; 

  v7 = entNum;
  arrivalStateName = toStateName;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 960, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v8 = &g_entities[v7];
  AIActorInterface::AIActorInterface(&v43.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v43.m_newAgentInterface);
  m_Bool = 0;
  v43.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v43.m_pAI = NULL;
  AIWrapper::Setup(&v43, v8);
  m_pAI = v43.m_pAI;
  if ( !v43.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 961, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v11 = (__int16 **)m_pAI->GetAI(m_pAI);
  nodeType = scr_const.exposed_cc;
  if ( numParams > 0 )
  {
    if ( !pParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 349, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
      __debugbreak();
    if ( pParams->m_Type != ParamType_String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 351, ASSERT_TYPE_ASSERT, "(pParams[ iParam ].m_Type == ParamType_String)", (const char *)&queryFormat, "pParams[ iParam ].m_Type == ParamType_String") )
      __debugbreak();
    nodeType = pParams->u.m_Int;
  }
  if ( !AICommonInterface::HasPath(m_pAI) )
    return 0;
  AICommonInterface::GetPathFinalGoal(m_pAI, &vFinalGoal);
  v12 = (float)((float)((float)(vFinalGoal.v[1] - *((float *)*v11 + 77)) * (float)(vFinalGoal.v[1] - *((float *)*v11 + 77))) + (float)((float)(vFinalGoal.v[0] - *((float *)*v11 + 76)) * (float)(vFinalGoal.v[0] - *((float *)*v11 + 76)))) + (float)((float)(vFinalGoal.v[2] - *((float *)*v11 + 78)) * (float)(vFinalGoal.v[2] - *((float *)*v11 + 78)));
  if ( v12 > 65536.0 )
    return 0;
  *(float *)&_XMM8 = FLOAT_1_0;
  v34 = 0;
  AIScriptedInterface::GetDefaultSpeed(m_pAI);
  v14 = *((_DWORD *)v11 + 762);
  if ( v14 && v14 != 5 || *((_DWORD *)v11 + 120) != scr_const.combat )
    goto LABEL_25;
  v15 = *((unsigned int *)v11 + 526);
  *(float *)&v15 = (float)((float)(*((float *)v11 + 526) * *((float *)v11 + 526)) + (float)(*((float *)v11 + 527) * *((float *)v11 + 527))) + (float)(*((float *)v11 + 528) * *((float *)v11 + 528));
  v16 = fsqrt(v12);
  v47 = v5;
  *(float *)&v15 = fsqrt(*(float *)&v15);
  v17 = v15;
  if ( v16 >= 64.0 && v16 <= 110.0 )
  {
    v18 = LODWORD(FLOAT_1_0);
    *(float *)&v18 = (float)((float)(1.0 - (float)((float)(v16 - 64.0) * 0.021739131)) * *((float *)v11 + 851)) + (float)((float)((float)(v16 - 64.0) * 0.021739131) * *(float *)&v17);
    v17 = v18;
  }
  NearestSpeedThresholdString = GetNearestSpeedThresholdString(*((scr_string_t *)v11 + 866), *(float *)&v17);
  v34 = 1;
  v21 = v17;
  *(float *)&v21 = *(float *)&v17 / (float)GetAnimSpeedThresholdValue(*((scr_string_t *)v11 + 866), NearestSpeedThresholdString);
  _XMM1 = v21;
  __asm { vmaxss  xmm8, xmm1, cs:__real@3f4ccccd }
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
  v23 = ScriptContext_Server();
  v24 = **v11;
  v25 = Ai_Asm::Singleton();
  Instance = Ai_Asm::GetInstance(v25, NULL, v24);
  v27 = Ai_Asm::Singleton();
  if ( Ai_Asm::GetEventData(v27, **v11, Instance, scr_const.cover_approach, &outVar, &intValue) )
  {
    ArrayVariable = FindArrayVariable(v23, outVar, intValue);
    if ( ArrayVariable )
    {
      Scr_EvalVariable_Out(v23, ArrayVariable, &out);
      if ( out.type != VAR_VECTOR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1024, ASSERT_TYPE_ASSERT, "( data.type == VAR_VECTOR )", (const char *)&queryFormat, "data.type == VAR_VECTOR") )
        __debugbreak();
      v29 = *(float *)(out.u.scriptCodePosValue + 8);
      v30 = *(float *)(out.u.scriptCodePosValue + 4);
      codeApproachDir.v[0] = *out.u.vectorValue;
      codeApproachDir.v[1] = v30;
      codeApproachDir.v[2] = v29;
      RemoveRefToValue(v23, (unsigned __int8)out.type, out.u);
    }
  }
  startNoteTrack = 0;
  endNoteTrack = 0;
  v31 = FLOAT_N1_0;
  if ( nodeType == scr_const.exposed_moving_cc )
  {
    v31 = FLOAT_0_07;
    endNoteTrack = scr_const.code_move;
  }
  v32 = CalculateStopData(m_pAI, &arrivalStateName, &nodeType, m_Bool, &codeApproachDir, 0, NULL, v31, -1.0, &startNoteTrack, &endNoteTrack, speedString, &outStopData);
  if ( v32 )
  {
    *((_DWORD *)v11 + 873) = outStopData.stopAnimIndex;
    outNode.m_Type = UNDEFINED;
    GetArrivalNode(m_pAI, &outNode);
    if ( outNode.m_Type )
      ArrivalNode::GetOrigin(&outNode, (vec3_t *)(v11 + 437));
    else
      *(vec3_t *)(v11 + 437) = vFinalGoal;
    *(vec3_t *)((char *)v11 + 3508) = outStopData.finalAngles;
    *((float *)v11 + 882) = *(float *)&_XMM8;
    *((_BYTE *)v11 + 3532) = v34;
    *((_BYTE *)v11 + 3535) = 1;
  }
  return v32;
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
  scr_string_t *v15; 
  __int64 v17; 
  gentity_s *v18; 
  gentity_s *v19; 
  __int64 v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  const char *v28; 
  __int64 v29; 
  char v30; 
  gentity_s *TargetEntity; 
  float TurnDesiredYaw; 
  scr_string_t AnimsetName; 
  double NodeHideYawOffset; 
  __int64 v35; 
  __int64 v36; 
  double v37; 
  int v38; 
  scr_string_t stateName; 
  AIAnimStopData *v40; 
  char *v41; 
  scr_string_t *endNotetrack; 
  scr_string_t *startNotetrack; 
  vec3_t *v44; 
  __int64 v45; 
  vec3_t angles; 
  vec3_t v47; 
  vec3_t animTargetAngles; 
  vec3_t outOrigin; 
  vec4_t vFinalGoal; 
  vec3_t vec; 
  vec4_t quat; 
  vec4_t v53; 
  ArrivalNode outNode; 
  vec3_t forward; 
  char dest[32]; 

  v45 = -2i64;
  v15 = (scr_string_t *)arrivalStateName;
  *(_QWORD *)v47.v = arrivalStateName;
  v44 = (vec3_t *)codeApproachDir;
  startNotetrack = (scr_string_t *)startNoteTrack;
  endNotetrack = (scr_string_t *)endNoteTrack;
  v41 = (char *)speedString;
  v40 = outStopData;
  v17 = pAI->GetAI(pAI);
  outNode.m_Type = UNDEFINED;
  GetArrivalNode(pAI, &outNode);
  if ( outNode.m_Type )
  {
    if ( !AIScriptedInterface::IsBTGoalValid(pAI) )
    {
      if ( EntHandle::isDefined((EntHandle *)(v17 + 1660)) )
      {
        v18 = EntHandle::ent((EntHandle *)(v17 + 1660));
        if ( v18 )
        {
          if ( outNode.m_Type == SHAPE_CAST && outNode.m_pEnt == v18 )
          {
            v19 = EntHandle::ent((EntHandle *)(v17 + 1660));
            AICommonInterface::GetPathFinalGoal(pAI, (vec3_t *)&vFinalGoal);
            if ( (float)((float)((float)(vFinalGoal.v[1] - v19->r.currentOrigin.v[1]) * (float)(vFinalGoal.v[1] - v19->r.currentOrigin.v[1])) + (float)((float)(vFinalGoal.v[0] - v19->r.currentOrigin.v[0]) * (float)(vFinalGoal.v[0] - v19->r.currentOrigin.v[0]))) > 4096.0 )
              AIScriptedInterface::PathPending(pAI);
            v15 = *(scr_string_t **)v47.v;
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
  v20 = *(_QWORD *)v17;
  v21 = outOrigin.v[0] - *(float *)(*(_QWORD *)v17 + 304i64);
  v23 = LODWORD(outOrigin.v[1]);
  v22 = outOrigin.v[1] - *(float *)(*(_QWORD *)v17 + 308i64);
  *(float *)&v23 = fsqrt((float)(v22 * v22) + (float)(v21 * v21));
  _XMM3 = v23;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm2, xmm0
  }
  v47.v[0] = *(float *)&_XMM1;
  AngleVectors((const vec3_t *)(v20 + 316), &forward, NULL, NULL);
  if ( (float)((float)((float)(v22 * (float)(1.0 / *(float *)&_XMM1)) * forward.v[1]) + (float)((float)(v21 * (float)(1.0 / *(float *)&_XMM1)) * forward.v[0])) < 0.70700002 )
    return 0;
  stateName = *v15;
  if ( *nodeType == scr_const.custom )
    bUseFootDown = *(_BYTE *)(v17 + 1677);
  dest[0] = 0;
  if ( !bUseFootDown )
  {
    if ( !optionalPrefix || !*optionalPrefix )
      goto LABEL_28;
    v28 = optionalPrefix;
    goto LABEL_27;
  }
  v28 = "right";
  if ( *(_BYTE *)(v17 + 3540) != 1 )
    v28 = "left";
  if ( !optionalPrefix || !*optionalPrefix )
  {
LABEL_27:
    Core_strncpy(dest, 0x20ui64, v28, 0x20ui64);
    goto LABEL_28;
  }
  Com_sprintf(dest, 0x20ui64, "%s%s", optionalPrefix, v28);
LABEL_28:
  v29 = *(_QWORD *)v17;
  vec.v[0] = outOrigin.v[0] - *(float *)(*(_QWORD *)v17 + 304i64);
  vec.v[1] = outOrigin.v[1] - *(float *)(v29 + 308);
  vec.v[2] = outOrigin.v[2] - *(float *)(v29 + 312);
  vectoangles(&vec, &angles);
  animTargetAngles = angles;
  if ( *(_BYTE *)(v17 + 1676) )
  {
    angles = *(vec3_t *)(v17 + 1664);
  }
  else
  {
    v30 = 0;
    TargetEntity = AICommonInterface::GetTargetEntity(pAI);
    if ( (*nodeType == scr_const.exposed_cc || *nodeType == scr_const.exposed_crouch_cc) && (TargetEntity && AICommonInterface::RecentlySeeEnemy(pAI) || *(_BYTE *)(v17 + 574)) )
    {
      if ( ShootParamsValid(pAI) || *(_BYTE *)(v17 + 3062) )
      {
        TurnDesiredYaw = GetTurnDesiredYaw(pAI);
        angles.v[0] = 0.0;
        angles.v[1] = TurnDesiredYaw;
        angles.v[2] = 0.0;
        animTargetAngles.v[0] = 0.0;
        animTargetAngles.v[1] = TurnDesiredYaw;
        animTargetAngles.v[2] = 0.0;
      }
      else if ( ArrivalNode::HasAngles(&outNode) )
      {
        ArrivalNode::GetAngles(&outNode, &angles);
        animTargetAngles = angles;
      }
    }
    else if ( ArrivalNode::HasAngles(&outNode) )
    {
      v30 = 1;
      ArrivalNode::GetAngles(&outNode, &angles);
      AnimsetName = BG_AnimationState_GetAnimsetName(*(const entityState_t **)v17);
      NodeHideYawOffset = BG_Animset_GetNodeHideYawOffset(AnimsetName, *nodeType);
      v47.v[0] = 0.0;
      v47.v[1] = *(float *)&NodeHideYawOffset;
      v47.v[2] = 0.0;
      AnglesToQuat(&angles, &quat);
      AnglesToQuat(&v47, &vFinalGoal);
      v53.v[0] = (float)((float)((float)(quat.v[0] * vFinalGoal.v[3]) + (float)(vFinalGoal.v[0] * quat.v[3])) + (float)(vFinalGoal.v[1] * quat.v[2])) - (float)(vFinalGoal.v[2] * quat.v[1]);
      v53.v[1] = (float)((float)((float)(quat.v[1] * vFinalGoal.v[3]) - (float)(quat.v[2] * vFinalGoal.v[0])) + (float)(vFinalGoal.v[1] * quat.v[3])) + (float)(vFinalGoal.v[2] * quat.v[0]);
      v53.v[2] = (float)((float)((float)(quat.v[2] * vFinalGoal.v[3]) + (float)(quat.v[1] * vFinalGoal.v[0])) - (float)(vFinalGoal.v[1] * quat.v[0])) + (float)(vFinalGoal.v[2] * quat.v[3]);
      v53.v[3] = (float)((float)((float)(vFinalGoal.v[3] * quat.v[3]) - (float)(quat.v[0] * vFinalGoal.v[0])) - (float)(quat.v[1] * vFinalGoal.v[1])) - (float)(vFinalGoal.v[2] * quat.v[2]);
      QuatToAngles(&v53, &animTargetAngles);
    }
    if ( (*nodeType == scr_const.exposed_cc || *nodeType == scr_const.exposed_crouch_cc) && !v30 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 392) + 200i64))(*(_QWORD *)(v17 + 392));
      bfx::AreaHandle::AreaHandle((bfx::AreaHandle *)&outNode.m_FakeNode.m_Angles.z);
      bfx::LinkHandle::LinkHandle((bfx::LinkHandle *)(&outNode.m_Type + 1));
      LOBYTE(v38) = 0;
      LOBYTE(v35) = 1;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, ArrivalNode *, int))(**(_QWORD **)(v17 + 392) + 416i64))(*(_QWORD *)(v17 + 392), v36, v35, &outNode, v38);
      v47.v[0] = outOrigin.v[0] - outNode.m_FakeNode.m_Origin.v[0];
      v47.v[1] = outOrigin.v[1] - outNode.m_FakeNode.m_Origin.v[1];
      v47.v[2] = outOrigin.v[2] - outNode.m_FakeNode.m_Origin.v[2];
      v37 = vectoyaw((const vec2_t *)&v47);
      animTargetAngles.v[0] = 0.0;
      animTargetAngles.v[1] = *(float *)&v37;
      animTargetAngles.v[2] = 0.0;
      angles.v[0] = 0.0;
      angles.v[1] = *(float *)&v37;
      angles.v[2] = 0.0;
      bfx::LinkHandle::~LinkHandle((bfx::LinkHandle *)(&outNode.m_Type + 1));
      bfx::AreaHandle::~AreaHandle((bfx::AreaHandle *)&outNode.m_FakeNode.m_Angles.z);
    }
  }
  return AIScriptedInterface::CalcStopData(pAI, &outOrigin, &angles, &animTargetAngles, v44, bCodeApproachValid, &stateName, dest, optionalPrefix, maxLerpScalar, overShootRatio, nodeType, startNotetrack, endNotetrack, v41, v40);
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
      if ( (float)((float)((float)(vFinalGoal.v[1] - pos.v[1]) * (float)(vFinalGoal.v[1] - pos.v[1])) + (float)((float)(vFinalGoal.v[0] - pos.v[0]) * (float)(vFinalGoal.v[0] - pos.v[0]))) < 36.0 )
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
__int64 GetArrivalType(int entNum)
{
  __int64 v1; 
  const gentity_s *v2; 
  AIScriptedInterface *m_pAI; 
  __int64 v4; 
  __int64 v5; 
  pathnode_t *v6; 
  __int64 result; 
  unsigned __int16 BestCoverMultiNodeType; 
  __int16 type; 
  __int16 turretEntNumber; 
  const gentity_s *v11; 
  AIScriptedInterface *v12; 
  _DWORD *v13; 
  const Weapon *v14; 
  char v15; 
  _DWORD *v16; 
  int v17; 
  scr_string_t exposed_cc; 
  int v19; 
  scr_string_t cover_right_cc; 
  int v21; 
  scr_string_t cover_left_cc; 
  const tacpoint_t *CoverTacPoint; 
  AIWrapper outNode; 
  AIWrapper v25; 
  vec3_t pos; 

  v1 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1293, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v2 = &g_entities[v1];
  AIActorInterface::AIActorInterface(&v25.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v25.m_newAgentInterface);
  v25.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v25.m_pAI = NULL;
  AIWrapper::Setup(&v25, v2);
  m_pAI = v25.m_pAI;
  if ( !v25.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1294, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v4 = m_pAI->GetAI(m_pAI);
  LODWORD(outNode.m_newAgentInterface.__vftable) = 0;
  v5 = v4;
  GetArrivalNode(m_pAI, (ArrivalNode *)&outNode);
  if ( LODWORD(outNode.m_newAgentInterface.__vftable) != 1 || *(_DWORD *)(v5 + 1632) == 3 )
  {
    CoverTacPoint = AIScriptedInterface::GetCoverTacPoint(m_pAI);
    if ( CoverTacPoint )
    {
      if ( AIScriptedInterface::IsStanceAllowed(m_pAI, STANCE_CROUCH) && *(_DWORD *)(v5 + 480) == scr_const.combat && ((int)COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(CoverTacPoint->m_Pos.v[1] + CoverTacPoint->m_Pos.v[0]) + CoverTacPoint->m_Pos.v[2]) + (float)(int)v1) & _xmm) & 1) != 0 )
        return (unsigned int)scr_const.exposed_crouch_cc;
    }
    else if ( *(_DWORD *)(v5 + 484) == 2 )
    {
      return (unsigned int)scr_const.exposed_crouch_cc;
    }
    return (unsigned int)scr_const.exposed_cc;
  }
  v6 = (pathnode_t *)outNode.m_actorInterface.__vftable;
  if ( !outNode.m_actorInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1327, ASSERT_TYPE_ASSERT, "(arrivalNode.IsNode() && pArrivalNode)", (const char *)&queryFormat, "arrivalNode.IsNode() && pArrivalNode") )
    __debugbreak();
  if ( AICommonInterface::GetTargetEntity(m_pAI) && IsCoverInvalidAgainstEnemy((ai_scripted_t *)v5, v6) || *(_BYTE *)(v5 + 574) )
  {
    if ( !Path_DoesNodeAllowStance(v6, (const scr_string_t)scr_const.stand) || !AIScriptedInterface::IsStanceAllowed(m_pAI, STANCE_STAND) )
    {
      if ( !Path_DoesNodeAllowStance(v6, (const scr_string_t)scr_const.crouch) || !AIScriptedInterface::IsStanceAllowed(m_pAI, STANCE_CROUCH) )
        return (unsigned int)scr_const.cover_prone_cc;
      return (unsigned int)scr_const.exposed_crouch_cc;
    }
    return (unsigned int)scr_const.exposed_cc;
  }
  if ( v6->constant.type == 31 )
  {
    BestCoverMultiNodeType = GetBestCoverMultiNodeType((ai_scripted_t *)v5, v6);
    if ( BestCoverMultiNodeType != 1 )
    {
      type = v6->constant.type;
      if ( type == 31 )
        type = v6->dynamic.turretEntNumber;
      if ( BestCoverMultiNodeType != type )
        v6->dynamic.turretEntNumber = BestCoverMultiNodeType;
    }
  }
  turretEntNumber = v6->constant.type;
  if ( turretEntNumber == 31 )
    turretEntNumber = v6->dynamic.turretEntNumber;
  AIActorInterface::AIActorInterface(&outNode.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&outNode.m_newAgentInterface);
  v11 = *(const gentity_s **)v5;
  outNode.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  outNode.m_pAI = NULL;
  AIWrapper::Setup(&outNode, v11);
  v12 = outNode.m_pAI;
  if ( !outNode.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1209, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v13 = *(_DWORD **)(*(_QWORD *)(v5 + 8) + 112i64);
  v14 = v12->GetEquippedWeapon(v12);
  if ( BG_GetWeaponClass(v14, 0) == WEAPCLASS_MG )
  {
    if ( v13 && (*v13 & 0x10000) == 0 )
    {
LABEL_34:
      v15 = 0;
      goto LABEL_35;
    }
  }
  else
  {
    v16 = *(_DWORD **)(v5 + 552);
    if ( !v16 || !v13 || v16 != v13 || (*v13 & 0x10000) == 0 )
      goto LABEL_34;
  }
  v15 = 1;
  if ( turretEntNumber == 2 )
    return (unsigned int)scr_const.cover_stand_lmg_cc;
  if ( turretEntNumber == 3 || turretEntNumber == 5 )
    return (unsigned int)scr_const.cover_crouch_lmg_cc;
LABEL_35:
  result = *(unsigned int *)(v5 + 540);
  if ( !(_DWORD)result || v15 )
  {
    pathnode_t::GetPos(v6, &pos);
    switch ( turretEntNumber )
    {
      case 1:
      case 9:
        v17 = ChooseArrivalPose(m_pAI, v6, &pos);
        if ( v17 == 4 )
          goto $LN44_2;
        exposed_cc = scr_const.exposed_cc;
        if ( v17 == 2 )
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
        v19 = ChooseArrivalPose(m_pAI, v6, &pos);
        cover_right_cc = scr_const.cover_right_cc;
        if ( v19 == 2 )
          cover_right_cc = scr_const.cover_right_crouch_cc;
        result = (unsigned int)cover_right_cc;
        break;
      case 7:
        v21 = ChooseArrivalPose(m_pAI, v6, &pos);
        cover_left_cc = scr_const.cover_left_cc;
        if ( v21 == 2 )
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
  gentity_s *TargetEntity; 
  const gentity_s *v7; 
  float v8; 
  const sentient_s *sentient; 
  float v10; 
  float v11; 
  float v12; 
  double Angle; 
  unsigned int spawnflags; 
  unsigned int v17; 
  bool v18; 
  bool v19; 
  __int64 v20; 
  bool v21; 
  AIWrapper v23; 
  vec3_t outLastKnownPos; 
  vec3_t pos; 
  vec2_t vec; 
  float v27; 

  AIActorInterface::AIActorInterface(&v23.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v23.m_newAgentInterface);
  ent = pScripted->ent;
  v23.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v23.m_pAI = NULL;
  AIWrapper::Setup(&v23, ent);
  m_pAI = v23.m_pAI;
  if ( !v23.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 1224, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(m_pAI);
  v7 = TargetEntity;
  v8 = 0.0;
  if ( TargetEntity )
  {
    sentient = TargetEntity->sentient;
    v10 = TargetEntity->r.currentOrigin.v[1];
    outLastKnownPos.v[0] = TargetEntity->r.currentOrigin.v[0];
    outLastKnownPos.v[2] = TargetEntity->r.currentOrigin.v[2];
    outLastKnownPos.v[1] = v10;
    if ( sentient && Sentient_GetSentientInfo(pScripted->sentient, sentient)->lastKnownPosTime > 0 )
      Sentient_GetLastKnownEnemyPos(pScripted->sentient, v7, &outLastKnownPos);
    pathnode_t::GetPos((pathnode_t *)pNode, &pos);
    v11 = v7->r.currentOrigin.v[1] - pos.v[1];
    vec.v[0] = v7->r.currentOrigin.v[0] - pos.v[0];
    v27 = v7->r.currentOrigin.v[2] - pos.v[2];
    vec.v[1] = v11;
    v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(vectoyaw(&vec)));
    Angle = pathnode_t::GetAngle((pathnode_t *)pNode);
    _XMM1 = 0i64;
    __asm { vroundss xmm4, xmm1, xmm3, 1 }
    v8 = (float)((float)((float)(v12 - *(float *)&Angle) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  }
  spawnflags = pNode->constant.spawnflags;
  v17 = pNode->constant.spawnflags & 0x204;
  v18 = (pNode->constant.spawnflags & 0x400) != 0 && !v17 || (spawnflags & 0x200000) != 0 && (spawnflags & 8) == 0;
  v19 = (spawnflags & 0x800) != 0 && !v17 || (spawnflags & 0x400000) != 0 && (spawnflags & 8) == 0;
  LOBYTE(v20) = (spawnflags & 0x100000) != 0 && (spawnflags & 8) == 0;
  v21 = (spawnflags & 0x200) != 0 && (spawnflags & 4) == 0;
  if ( v8 <= 30.0 )
  {
    if ( v8 >= -30.0 )
    {
      if ( (_BYTE)v20 )
        return 3i64;
      if ( v21 )
        return 2i64;
    }
    else if ( v19 )
    {
      return 6i64;
    }
  }
  else if ( v18 )
  {
    return 7i64;
  }
  if ( (_BYTE)v20 )
    LOWORD(outLastKnownPos.v[0]) = 3;
  v20 = (unsigned __int8)v20;
  if ( v21 )
  {
    *((_WORD *)outLastKnownPos.v + v20) = 2;
    v20 = (unsigned int)(v20 + 1);
  }
  if ( v19 )
  {
    *((_WORD *)outLastKnownPos.v + v20) = 6;
    v20 = (unsigned int)(v20 + 1);
  }
  if ( v18 )
  {
    *((_WORD *)outLastKnownPos.v + v20) = 7;
    LODWORD(v20) = v20 + 1;
  }
  if ( (_DWORD)v20 )
    return *((unsigned __int16 *)outLastKnownPos.v + pScripted->ent->s.number % (int)v20);
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
  __int64 v2; 
  __int64 v3; 
  double Angle; 
  gentity_s *v5; 
  float v6; 
  float v7; 
  float v8; 
  pathnode_t *v9; 
  __int16 type; 
  __int64 v11; 
  __int64 v14; 
  const sentient_s *sentient; 
  float v16; 
  float v17; 
  float v18; 
  __int64 v23; 
  vec3_t pos; 
  vec2_t vec; 
  float v27; 

  v2 = pAI->GetAI(pAI);
  v3 = v2;
  if ( *(_BYTE *)(v2 + 3061) )
  {
    LODWORD(Angle) = *(_DWORD *)(v2 + 3092);
    return *(float *)&Angle;
  }
  v5 = NULL;
  if ( ShootParamsValid(pAI) )
  {
    if ( *(_BYTE *)(v3 + 525) )
    {
      v6 = *(float *)(v3 + 496);
      v7 = *(float *)(v3 + 500);
      v8 = *(float *)(v3 + 504);
LABEL_16:
      v14 = *(_QWORD *)v3;
      pos.v[0] = v6 - *(float *)(*(_QWORD *)v3 + 304i64);
      pos.v[1] = v7 - *(float *)(v14 + 308);
      pos.v[2] = v8 - *(float *)(v14 + 312);
      Angle = vectoyaw((const vec2_t *)&pos);
      return *(float *)&Angle;
    }
    if ( EntHandle::isDefined((EntHandle *)(v3 + 508)) )
      v5 = EntHandle::ent((EntHandle *)(v3 + 508));
  }
  else if ( *(_BYTE *)(v3 + 3062) )
  {
    v6 = *(float *)(v3 + 3064);
    v7 = *(float *)(v3 + 3068);
    v8 = *(float *)(v3 + 3072);
    goto LABEL_16;
  }
  v9 = *(pathnode_t **)(*(_QWORD *)(v3 + 8) + 112i64);
  if ( !v9 )
    goto LABEL_17;
  type = v9->constant.type;
  if ( type == 31 )
    type = v9->dynamic.turretEntNumber;
  if ( type == 9 && (pathnode_t::GetPos(v9, &pos), v11 = *(_QWORD *)v3, (float)((float)((float)((float)(*(float *)(*(_QWORD *)v3 + 308i64) - pos.v[1]) * (float)(*(float *)(*(_QWORD *)v3 + 308i64) - pos.v[1])) + (float)((float)(*(float *)(*(_QWORD *)v3 + 304i64) - pos.v[0]) * (float)(*(float *)(*(_QWORD *)v3 + 304i64) - pos.v[0]))) + (float)((float)(*(float *)(*(_QWORD *)v3 + 312i64) - pos.v[2]) * (float)(*(float *)(*(_QWORD *)v3 + 312i64) - pos.v[2]))) < 36.0) )
  {
    Angle = pathnode_t::GetAngle(v9);
    _XMM1 = 0i64;
    __asm { vroundss xmm4, xmm1, xmm3, 1 }
    *(float *)&Angle = (float)((float)((float)(*(float *)&Angle - *(float *)(v11 + 320)) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  }
  else
  {
LABEL_17:
    if ( v5 )
    {
      sentient = v5->sentient;
      v16 = v5->r.currentOrigin.v[0];
      v17 = v5->r.currentOrigin.v[1];
      v18 = v5->r.currentOrigin.v[2];
      _XMM0 = (unsigned __int64)sentient;
      __asm { vpcmpeqq xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_0_25);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      if ( sentient )
      {
        Sentient_GetVelocity(sentient, &pos);
        v16 = (float)(*(float *)&_XMM0 * pos.v[0]) + v16;
        v18 = (float)(*(float *)&_XMM0 * pos.v[2]) + v18;
        v17 = (float)(*(float *)&_XMM0 * pos.v[1]) + v17;
      }
      v23 = *(_QWORD *)v3;
      vec.v[0] = v16 - *(float *)(*(_QWORD *)v3 + 304i64);
      vec.v[1] = v17 - *(float *)(v23 + 308);
      v27 = v18 - *(float *)(v23 + 312);
      Angle = vectoyaw(&vec);
    }
    else
    {
      LODWORD(Angle) = 0;
    }
  }
  return *(float *)&Angle;
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
  ai_scripted_t *m_pAI; 
  scr_string_t ConstString; 
  scr_string_t AnimsetName; 
  const Animset *v7; 
  const char *name; 
  const char *String; 
  XAnimSubTreeID v10; 
  const XAnimTree *v11; 
  const XAnim_s *SubTreeAnims; 
  ai_scripted_t *v13; 
  gentity_s *ent; 
  int NumParam; 
  double Float; 
  XAnimSubTreeID pOutAnimSubtreeID[2]; 
  int pOutStateIndex; 
  unsigned int pOutAnimIndex; 
  AnimsetState *outState; 
  unsigned int pOutGraftNode; 
  vec3_t trans; 
  vec4_t quat; 
  vec4_t rot; 

  m_pAI = this->m_pAI;
  ConstString = Scr_GetConstString(scrContext, 0);
  m_pAI->asmInstanceData.u.m_Arrival.m_AnimEntry = Scr_GetInt(scrContext, 1u);
  if ( Scr_GetType(scrContext, 2u) )
  {
    Scr_GetVector(scrContext, 2u, &m_pAI->asmInstanceData.u.m_Arrival.m_TargetPos);
  }
  else
  {
    AnimsetName = BG_AnimationState_GetAnimsetName((const entityState_t *)this->m_pAI->ent);
    v7 = Animset_Find(AnimsetName);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 54, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
      __debugbreak();
    outState = NULL;
    BG_Animset_GetStateInfoByName(v7, ConstString, &outState, &pOutStateIndex);
    if ( !outState )
    {
      name = v7->name;
      String = Scr_GetString(scrContext, 0);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_builtin_arrival.cpp", 59, ASSERT_TYPE_ASSERT, "( pState )", "unable to find state %s in animset %s", String, name) )
        __debugbreak();
    }
    BG_Animset_GetAnimIndexFromStateIndexAndEntry(v7, pOutStateIndex, m_pAI->asmInstanceData.u.m_Arrival.m_AnimEntry, &pOutAnimIndex, &pOutGraftNode, pOutAnimSubtreeID, NULL);
    v10 = pOutAnimSubtreeID[0];
    v11 = this->GetAnimTree(this);
    SubTreeAnims = XAnimGetSubTreeAnims(v11, v10);
    XAnimGetRelDelta3D(SubTreeAnims, pOutAnimIndex, &rot, &trans, 0.0, 1.0);
    AnglesToQuat(&this->m_pAI->ent->r.currentAngles, &quat);
    QuatTransform(&quat, &trans, &m_pAI->asmInstanceData.u.m_Arrival.m_TargetPos);
    v13 = this->m_pAI;
    ent = v13->ent;
    m_pAI->asmInstanceData.u.m_Exit.m_TargetPos.v[1] = v13->ent->r.currentOrigin.v[0] + m_pAI->asmInstanceData.u.m_Exit.m_TargetPos.v[1];
    m_pAI->asmInstanceData.u.m_Exit.m_TargetPos.v[2] = ent->r.currentOrigin.v[1] + m_pAI->asmInstanceData.u.m_Exit.m_TargetPos.v[2];
    m_pAI->asmInstanceData.u.m_Exit.m_TargetAngles.v[0] = ent->r.currentOrigin.v[2] + m_pAI->asmInstanceData.u.m_Exit.m_TargetAngles.v[0];
  }
  Scr_GetVector(scrContext, 3u, &m_pAI->asmInstanceData.u.m_Arrival.m_TargetAngles);
  NumParam = Scr_GetNumParam(scrContext);
  m_pAI->asmInstanceData.u.m_Arrival.m_bUseAnimRateOverride = 0;
  if ( NumParam > 4 && Scr_GetType(scrContext, 4u) )
  {
    Float = Scr_GetFloat(scrContext, 4u);
    m_pAI->asmInstanceData.u.m_Arrival.m_AnimRateOverride = *(float *)&Float;
    m_pAI->asmInstanceData.u.m_Arrival.m_bUseAnimRateOverride = 1;
  }
  m_pAI->asmInstanceData.u.m_Arrival.m_bRateScaleBasedOnWarp = 1;
  if ( NumParam > 5 )
  {
    if ( Scr_GetType(scrContext, 5u) )
      m_pAI->asmInstanceData.u.m_Arrival.m_bRateScaleBasedOnWarp = Scr_GetInt(scrContext, 5u) != 0;
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

