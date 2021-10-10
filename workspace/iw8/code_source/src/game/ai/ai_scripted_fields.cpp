/*
==============
GScr_AddFieldsForAIScripted
==============
*/

void __fastcall GScr_AddFieldsForAIScripted(scrContext_t *scrContext)
{
  ?GScr_AddFieldsForAIScripted@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_SetAIScriptedField
==============
*/

void __fastcall Scr_SetAIScriptedField(scrContext_t *scrContext, ai_scripted_t *actor, int offset)
{
  ?Scr_SetAIScriptedField@@YAXAEAUscrContext_t@@PEAUai_scripted_t@@H@Z(scrContext, actor, offset);
}

/*
==============
Cmd_AIScripted_f
==============
*/

bool __fastcall Cmd_AIScripted_f(const char *szField, int argc)
{
  return ?Cmd_AIScripted_f@@YA_NPEBDH@Z(szField, argc);
}

/*
==============
AIScriptedScr_GetTakeDamage
==============
*/

void __fastcall AIScriptedScr_GetTakeDamage(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *field)
{
  ?AIScriptedScr_GetTakeDamage@@YAXAEAUscrContext_t@@PEAUai_scripted_t@@PEBUai_scripted_fields_s@@@Z(scrContext, self, field);
}

/*
==============
AIScripted_GetNumExpandedFields
==============
*/

unsigned int __fastcall AIScripted_GetNumExpandedFields()
{
  return ?AIScripted_GetNumExpandedFields@@YAIXZ();
}

/*
==============
Scr_GetAIScriptedField
==============
*/

void __fastcall Scr_GetAIScriptedField(scrContext_t *scrContext, ai_scripted_t *actor, int offset)
{
  ?Scr_GetAIScriptedField@@YAXAEAUscrContext_t@@PEAUai_scripted_t@@H@Z(scrContext, actor, offset);
}

/*
==============
AIScriptedScr_ReadOnly
==============
*/
void AIScriptedScr_ReadOnly(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  const char *v5; 
  const char *v6; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 37, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 38, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  v5 = SL_ConvertToString(*pField->name);
  v6 = j_va("ai_scripted field %s is read-only", v5);
  Scr_Error(COM_ERR_2934, scrContext, v6);
}

/*
==============
AIScriptedScr_Clamp_0_1
==============
*/
void AIScriptedScr_Clamp_0_1(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  double Float; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 51, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 55, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  Float = Scr_GetFloat(scrContext, 0);
  if ( *(float *)&Float <= 1.0 )
  {
    if ( *(float *)&Float >= 0.0 )
    {
      *(float *)((char *)&pSelf->ent + pField->ofs) = *(float *)&Float;
    }
    else
    {
      v9 = SL_ConvertToString(*pField->name);
      v10 = j_va("AI field %s clamped from %g to 0\n", v9, *(float *)&Float);
      Scr_Error(COM_ERR_2936, scrContext, v10);
      *(float *)((char *)&pSelf->ent + pField->ofs) = 0;
    }
  }
  else
  {
    v7 = SL_ConvertToString(*pField->name);
    v8 = j_va("AI field %s clamped from %g to 1\n", v7, *(float *)&Float);
    Scr_Error(COM_ERR_2935, scrContext, v8);
    *(const float *)((char *)&pSelf->ent + pField->ofs) = FLOAT_1_0;
  }
}

/*
==============
AIScriptedScr_Clamp_0_Positive
==============
*/
void AIScriptedScr_Clamp_0_Positive(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  double Float; 
  const char *v7; 
  const char *v8; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 81, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 85, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  Float = Scr_GetFloat(scrContext, 0);
  if ( *(float *)&Float >= 0.0 )
  {
    *(float *)((char *)&pSelf->ent + pField->ofs) = *(float *)&Float;
  }
  else
  {
    v7 = SL_ConvertToString(*pField->name);
    v8 = j_va("AI field %s clamped from %g to 0\n", v7, *(float *)&Float);
    Scr_Error(COM_ERR_2937, scrContext, v8);
    *(float *)((char *)&pSelf->ent + pField->ofs) = 0;
  }
}

/*
==============
AIScriptedScr_Clamp_Non0_Positive
==============
*/
void AIScriptedScr_Clamp_Non0_Positive(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  double Float; 
  const char *v7; 
  const char *v8; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 105, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 109, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  Float = Scr_GetFloat(scrContext, 0);
  if ( *(float *)&Float <= 0.0 )
  {
    v7 = SL_ConvertToString(*pField->name);
    v8 = j_va("AI field %s must be > 0, value: %g\n", v7, *(float *)&Float);
    Scr_Error(COM_ERR_5866, scrContext, v8);
    *(float *)&Float = FLOAT_1_1920929eN7;
  }
  *(float *)((char *)&pSelf->ent + pField->ofs) = *(float *)&Float;
}

/*
==============
AIScriptedScr_Clamp_Byte
==============
*/
void AIScriptedScr_Clamp_Byte(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  int Int; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 129, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  if ( Int >= 0 )
  {
    if ( Int <= 255 )
    {
      *((_BYTE *)&pSelf->ent + pField->ofs) = Int;
    }
    else
    {
      v9 = SL_ConvertToString(*pField->name);
      v10 = j_va("AI field %s clamped from %i to 255\n", v9, (unsigned int)Int);
      Scr_Error(COM_ERR_2939, scrContext, v10);
      *((_BYTE *)&pSelf->ent + pField->ofs) = -1;
    }
  }
  else
  {
    v7 = SL_ConvertToString(*pField->name);
    v8 = j_va("AI field %s clamped from %i to 0\n", v7, (unsigned int)Int);
    Scr_Error(COM_ERR_2938, scrContext, v8);
    *((_BYTE *)&pSelf->ent + pField->ofs) = 0;
  }
}

/*
==============
AIScriptedScr_Clamp_UnsignedShort
==============
*/
void AIScriptedScr_Clamp_UnsignedShort(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  int Int; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 157, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  if ( Int >= 0 )
  {
    if ( Int <= 0xFFFF )
    {
      *(_WORD *)((char *)&pSelf->ent + pField->ofs) = Int;
    }
    else
    {
      v9 = SL_ConvertToString(*pField->name);
      v10 = j_va("AI field %s clamped from %i to 65535\n", v9, (unsigned int)Int);
      Scr_Error(COM_ERR_2941, scrContext, v10);
      *(_WORD *)((char *)&pSelf->ent + pField->ofs) = -1;
    }
  }
  else
  {
    v7 = SL_ConvertToString(*pField->name);
    v8 = j_va("AI field %s clamped from %i to 0\n", v7, (unsigned int)Int);
    Scr_Error(COM_ERR_2940, scrContext, v8);
    *(_WORD *)((char *)&pSelf->ent + pField->ofs) = 0;
  }
}

/*
==============
AIScriptedScr_SetFixedNode
==============
*/
void AIScriptedScr_SetFixedNode(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *field)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 185, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 186, ASSERT_TYPE_ASSERT, "(field)", (const char *)&queryFormat, "field") )
    __debugbreak();
  if ( field->type != F_BYTE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 187, ASSERT_TYPE_ASSERT, "(field->type == F_BYTE)", (const char *)&queryFormat, "field->type == F_BYTE") )
    __debugbreak();
  self->fixedNode = Scr_GetInt(scrContext, 0) != 0;
}

/*
==============
AIScriptedScr_SetCombatMode
==============
*/
void AIScriptedScr_SetCombatMode(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  scr_string_t ConstString; 
  const char *v6; 
  const char *v7; 

  ConstString = Scr_GetConstString(scrContext, 0);
  if ( ConstString == scr_const.cover )
  {
    pSelf->combat.combatMode = AI_COMBAT_COVER;
    pSelf->combat.doingAmbush = 0;
    return;
  }
  if ( ConstString == scr_const.cover_lmg )
  {
    pSelf->combat.combatMode = AI_COMBAT_COVER_LMG;
    pSelf->combat.doingAmbush = 0;
    return;
  }
  if ( ConstString == scr_const.cover3d )
  {
    pSelf->combat.combatMode = AI_COMBAT_COVER_3D;
    pSelf->combat.doingAmbush = 0;
    return;
  }
  if ( ConstString == scr_const.no_cover )
  {
    pSelf->combat.combatMode = AI_COMBAT_NO_COVER;
    pSelf->combat.doingAmbush = 0;
    return;
  }
  if ( ConstString == scr_const.ambush )
  {
    pSelf->combat.combatMode = AI_COMBAT_AMBUSH;
LABEL_11:
    pSelf->combat.doingAmbush = 1;
    return;
  }
  if ( ConstString == scr_const.ambush_nodes_only )
  {
    pSelf->combat.combatMode = AI_COMBAT_AMBUSH_NODES_ONLY;
    pSelf->combat.doingAmbush = 1;
  }
  else
  {
    v6 = SL_ConvertToString(ConstString);
    v7 = j_va("unknown combat mode '%s', should be cover, cover3d, no_cover, ambush_nodes_only, or ambush\n", v6);
    Scr_Error(COM_ERR_2942, scrContext, v7);
    if ( (unsigned int)(pSelf->combat.combatMode - 4) <= 1 )
      goto LABEL_11;
    pSelf->combat.doingAmbush = 0;
  }
}

/*
==============
AIScriptedScr_GetCombatMode
==============
*/
void AIScriptedScr_GetCombatMode(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  switch ( pSelf->combat.combatMode )
  {
    case AI_COMBAT_COVER:
      Scr_AddConstString(scrContext, scr_const.cover);
      break;
    case AI_COMBAT_COVER_LMG:
      Scr_AddConstString(scrContext, scr_const.cover_lmg);
      break;
    case AI_COMBAT_COVER_3D:
      Scr_AddConstString(scrContext, scr_const.cover3d);
      break;
    case AI_COMBAT_NO_COVER:
      Scr_AddConstString(scrContext, scr_const.no_cover);
      break;
    case AI_COMBAT_AMBUSH:
      Scr_AddConstString(scrContext, scr_const.ambush);
      break;
    case AI_COMBAT_AMBUSH_NODES_ONLY:
      Scr_AddConstString(scrContext, scr_const.ambush_nodes_only);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 246, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid combatmode") )
        __debugbreak();
      break;
  }
}

/*
==============
AIScriptedScr_SetGoalRadius
==============
*/
void AIScriptedScr_SetGoalRadius(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  double Float; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 260, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Float = Scr_GetFloat(scrContext, 0);
  if ( *(float *)&Float < 0.0 )
    Scr_ParamError(COM_ERR_2943, scrContext, 0, "radius must be >= 0");
  AICommonInterface::SetGoalRadius(&pSelf->scriptGoal, *(float *)&Float);
}

/*
==============
AIScriptedScr_SetGoalHeight
==============
*/
void AIScriptedScr_SetGoalHeight(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  AIScriptedInterface *m_pAI; 
  bool v6; 
  double Float; 
  AIWrapper v8; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 277, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  AIWrapper::AIWrapper(&v8, pSelf);
  m_pAI = v8.m_pAI;
  if ( !v8.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 278, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v6 = !AICommonInterface::Use3DPathing(m_pAI);
  Float = Scr_GetFloat(scrContext, 0);
  AICommonInterface::SetGoalHeight(&pSelf->scriptGoal, *(float *)&Float, v6);
}

/*
==============
AIScriptedScr_SetAvoidanceBlocking
==============
*/
void AIScriptedScr_SetAvoidanceBlocking(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  AIScriptedInterface *m_pAI; 
  int Int; 
  AIWrapper v7; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 292, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  AIWrapper::AIWrapper(&v7, pSelf);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 293, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  pSelf->avoidanceBlockedData.enabled = Int != 0;
  if ( !Int )
    AIScriptedInterface::ClearBlockingEntity(m_pAI);
}

/*
==============
AIScriptedScr_SetLastEnemySightPos
==============
*/
void AIScriptedScr_SetLastEnemySightPos(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 311, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 312, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_VECTOR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 313, ASSERT_TYPE_ASSERT, "(pField->type == F_VECTOR)", (const char *)&queryFormat, "pField->type == F_VECTOR") )
    __debugbreak();
  if ( pField->ofs != 184 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 314, ASSERT_TYPE_ASSERT, "(pField->ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(ai_scripted_t,sight.lastEnemySightPos) ) ) ))", (const char *)&queryFormat, "pField->ofs == AISFOFS( sight.lastEnemySightPos )") )
    __debugbreak();
  if ( Scr_GetType(scrContext, 0) )
  {
    Scr_GetVector(scrContext, 0, &pSelf->sight.lastEnemySightPos);
    pSelf->sight.lastEnemySightPosValid = 1;
  }
  else
  {
    pSelf->sight.lastEnemySightPosValid = 0;
  }
}

/*
==============
AIScriptedScr_GetLastEnemySightPos
==============
*/
void AIScriptedScr_GetLastEnemySightPos(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 334, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 335, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_VECTOR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 336, ASSERT_TYPE_ASSERT, "(pField->type == F_VECTOR)", (const char *)&queryFormat, "pField->type == F_VECTOR") )
    __debugbreak();
  if ( pField->ofs != 184 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 337, ASSERT_TYPE_ASSERT, "(pField->ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(ai_scripted_t,sight.lastEnemySightPos) ) ) ))", (const char *)&queryFormat, "pField->ofs == AISFOFS( sight.lastEnemySightPos )") )
    __debugbreak();
  if ( pSelf->sight.lastEnemySightPosValid )
    Scr_AddVector(scrContext, pSelf->sight.lastEnemySightPos.v);
}

/*
==============
AIScriptedScr_GetBadPath
==============
*/
void AIScriptedScr_GetBadPath(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  AINavigator *pNavigator; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 352, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  pNavigator = pSelf->pNavigator;
  if ( pNavigator && pNavigator->m_TimeOfLastPathFindFail == level.time )
    Scr_AddBool(scrContext, 1);
  else
    Scr_AddBool(scrContext, 0);
}

/*
==============
AIScriptedScr_GetLookaheadDir
==============
*/
void AIScriptedScr_GetLookaheadDir(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  AINavigator *pNavigator; 
  vec3_t outLookaheadDir; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 370, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  pNavigator = pSelf->pNavigator;
  if ( pNavigator )
  {
    Nav_GetLookaheadDir(pNavigator, &outLookaheadDir);
    Scr_AddVector(scrContext, outLookaheadDir.v);
  }
}

/*
==============
AIScriptedScr_GetLookaheadDist
==============
*/
void AIScriptedScr_GetLookaheadDist(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  AINavigator *pNavigator; 
  float v6; 
  double DistToNextCorner; 

  pNavigator = pSelf->pNavigator;
  v6 = 0.0;
  if ( pNavigator && Nav_HasPath(pNavigator) )
  {
    DistToNextCorner = Nav_GetDistToNextCorner(pSelf->pNavigator);
    v6 = *(float *)&DistToNextCorner;
  }
  Scr_AddFloat(scrContext, v6);
}

/*
==============
AIScriptedScr_SetTime
==============
*/
void AIScriptedScr_SetTime(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 400, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 402, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 403, ASSERT_TYPE_ASSERT, "(pField->type == F_INT)", (const char *)&queryFormat, "pField->type == F_INT") )
    __debugbreak();
  Scr_GetFloat(scrContext, 0);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm4, 1 }
  *(_DWORD *)((char *)&pSelf->ent + pField->ofs) = (int)*(float *)&_XMM1;
}

/*
==============
AIScriptedScr_GetTime
==============
*/
void AIScriptedScr_GetTime(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 416, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 417, ASSERT_TYPE_ASSERT, "(pField->type == F_INT)", (const char *)&queryFormat, "pField->type == F_INT") )
    __debugbreak();
  Scr_AddFloat(scrContext, (float)*(int *)((char *)&pSelf->ent + pField->ofs) * 0.001);
}

/*
==============
AIScriptedScr_SetSqr
==============
*/
void AIScriptedScr_SetSqr(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  double Float; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 428, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 432, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_FLOAT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 433, ASSERT_TYPE_ASSERT, "(pField->type == F_FLOAT)", (const char *)&queryFormat, "pField->type == F_FLOAT") )
    __debugbreak();
  Float = Scr_GetFloat(scrContext, 0);
  *(float *)((char *)&pSelf->ent + pField->ofs) = *(float *)&Float * *(float *)&Float;
}

/*
==============
AIScriptedScr_GetSqrt
==============
*/
void AIScriptedScr_GetSqrt(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 447, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_FLOAT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 448, ASSERT_TYPE_ASSERT, "(pField->type == F_FLOAT)", (const char *)&queryFormat, "pField->type == F_FLOAT") )
    __debugbreak();
  Scr_AddFloat(scrContext, fsqrt(*(float *)((char *)&pSelf->ent + pField->ofs)));
}

/*
==============
AIScriptedScr_GetPathGoalPos
==============
*/
void AIScriptedScr_GetPathGoalPos(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *field)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v7; 
  vec3_t goalPos; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 461, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 462, ASSERT_TYPE_ASSERT, "(field)", (const char *)&queryFormat, "field") )
    __debugbreak();
  if ( field->type != F_VECTOR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 463, ASSERT_TYPE_ASSERT, "(field->type == F_VECTOR)", (const char *)&queryFormat, "field->type == F_VECTOR") )
    __debugbreak();
  AIWrapper::AIWrapper(&v7, self);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 465, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( AIScriptedInterface::GetPathGoalPos(m_pAI, &goalPos) )
    Scr_AddVector(scrContext, goalPos.v);
}

/*
==============
AIScriptedScr_GetPathPending
==============
*/
void AIScriptedScr_GetPathPending(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *field)
{
  AIScriptedInterface *m_pAI; 
  __int64 v7; 
  AIWrapper v8; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 481, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 482, ASSERT_TYPE_ASSERT, "(field)", (const char *)&queryFormat, "field") )
    __debugbreak();
  if ( field->type != F_BYTE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 483, ASSERT_TYPE_ASSERT, "(field->type == F_BYTE)", (const char *)&queryFormat, "field->type == F_BYTE") )
    __debugbreak();
  AIWrapper::AIWrapper(&v8, self);
  m_pAI = v8.m_pAI;
  if ( !v8.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 485, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v7 = m_pAI->GetAI(m_pAI);
  Scr_AddBool(scrContext, *(_BYTE *)(v7 + 3304) == 1);
}

/*
==============
AIScriptedScr_GetRequestedGoalPos
==============
*/
void AIScriptedScr_GetRequestedGoalPos(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *field)
{
  AIScriptedInterface *m_pAI; 
  __int64 v7; 
  AIWrapper v8; 
  float value[4]; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 500, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 501, ASSERT_TYPE_ASSERT, "(field)", (const char *)&queryFormat, "field") )
    __debugbreak();
  if ( field->type != F_VECTOR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 502, ASSERT_TYPE_ASSERT, "(field->type == F_VECTOR)", (const char *)&queryFormat, "field->type == F_VECTOR") )
    __debugbreak();
  AIWrapper::AIWrapper(&v8, self);
  m_pAI = v8.m_pAI;
  if ( !v8.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 504, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( AICommonInterface::HasPath(m_pAI) )
  {
    v7 = m_pAI->GetAI(m_pAI);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 510, ASSERT_TYPE_ASSERT, "(pScripted)", (const char *)&queryFormat, "pScripted") )
      __debugbreak();
    if ( !*(_QWORD *)(v7 + 392) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 511, ASSERT_TYPE_ASSERT, "(pScripted->pNavigator)", (const char *)&queryFormat, "pScripted->pNavigator") )
      __debugbreak();
    (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(v7 + 392) + 48i64))(*(_QWORD *)(v7 + 392), value);
    Scr_AddVector(scrContext, value);
  }
}

/*
==============
AIScriptedScr_GetVelocity
==============
*/
void AIScriptedScr_GetVelocity(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *field)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v7; 
  vec3_t value; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 519, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 520, ASSERT_TYPE_ASSERT, "(field)", (const char *)&queryFormat, "field") )
    __debugbreak();
  if ( field->type != F_VECTOR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 521, ASSERT_TYPE_ASSERT, "(field->type == F_VECTOR)", (const char *)&queryFormat, "field->type == F_VECTOR") )
    __debugbreak();
  AIWrapper::AIWrapper(&v7, self);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 523, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  m_pAI->GetVelocity(m_pAI, &value);
  Scr_AddVector(scrContext, value.v);
}

/*
==============
AIScriptedScr_GetGroundType
==============
*/
void AIScriptedScr_GetGroundType(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  int iSurfaceType; 
  const char *v7; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 538, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 539, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 540, ASSERT_TYPE_ASSERT, "(pField->type == F_STRING)", (const char *)&queryFormat, "pField->type == F_STRING") )
    __debugbreak();
  if ( pField->ofs != 2132 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 541, ASSERT_TYPE_ASSERT, "(pField->ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(ai_scripted_t,Physics.iSurfaceType) ) ) ))", (const char *)&queryFormat, "pField->ofs == AISFOFS( Physics.iSurfaceType )") )
    __debugbreak();
  iSurfaceType = pSelf->Physics.iSurfaceType;
  if ( iSurfaceType )
  {
    v7 = Com_SurfaceTypeToName(iSurfaceType);
    Scr_AddString(scrContext, v7);
  }
}

/*
==============
AIScriptedScr_GetStairsState
==============
*/
void AIScriptedScr_GetStairsState(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  __int64 v5; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 557, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( pSelf->Physics.stairsState >= (unsigned int)NUM_STAIRS_STATES )
  {
    LODWORD(v5) = pSelf->Physics.stairsState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 558, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->Physics.stairsState ) < (unsigned)( NUM_STAIRS_STATES )", "pSelf->Physics.stairsState doesn't index NUM_STAIRS_STATES\n\t%i not in [0, %i)", v5, 3) )
      __debugbreak();
  }
  Scr_AddConstString(scrContext, *AIStairsStates[pSelf->Physics.stairsState]);
}

/*
==============
AIScriptedScr_SetJumping
==============
*/
void AIScriptedScr_SetJumping(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *field)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 573, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  self->Physics.bJumping = Scr_GetInt(scrContext, 0) == 1;
}

/*
==============
AIScriptedScr_SetTrackMoverUp
==============
*/
void AIScriptedScr_SetTrackMoverUp(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *field)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 594, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  self->Physics.bTrackMoverUp = Scr_GetInt(scrContext, 0) == 1;
}

/*
==============
AIScriptedScr_GetTakeDamage
==============
*/
void AIScriptedScr_GetTakeDamage(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *field)
{
  bool v5; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 615, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  v5 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&self->ent->s.lerp.eFlags, ACTIVE, 0x10u);
  Scr_AddInt(scrContext, v5);
}

/*
==============
AIScriptedScr_SetAlertLevel
==============
*/
void AIScriptedScr_SetAlertLevel(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *pField)
{
  scr_string_t ConstString; 
  AIScriptedInterface *m_pAI; 
  const char *v7; 
  const char *v8; 
  AIWrapper v9; 

  ConstString = Scr_GetConstString(scrContext, 0);
  AIWrapper::AIWrapper(&v9, self);
  m_pAI = v9.m_pAI;
  if ( !v9.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 630, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( !AIScriptedInterface::SetAlertLevel(m_pAI, ConstString) )
  {
    v7 = SL_ConvertToString(ConstString);
    v8 = j_va("unknown alert level '%s'\n", v7);
    Scr_Error(COM_ERR_2944, scrContext, v8);
  }
}

/*
==============
AIScriptedScr_GetAlertLevel
==============
*/
void AIScriptedScr_GetAlertLevel(scrContext_t *scrContext, ai_scripted_t *self, const ai_scripted_fields_s *pField)
{
  AIScriptedInterface *m_pAI; 
  scr_string_t AlertLevel; 
  AIWrapper v6; 

  AIWrapper::AIWrapper(&v6, self);
  m_pAI = v6.m_pAI;
  if ( !v6.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 645, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AlertLevel = AIScriptedInterface::GetAlertLevel(m_pAI);
  Scr_AddConstString(scrContext, AlertLevel);
}

/*
==============
AIScriptedScr_SetUsable
==============
*/
void AIScriptedScr_SetUsable(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  gentity_s *ent; 
  int Int; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 657, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 661, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  ent = pSelf->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 665, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  G_PlayerUse_SetEntityUsable(ent, Int != 0);
}

/*
==============
AIScriptedScr_GetUsable
==============
*/
void AIScriptedScr_GetUsable(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  gentity_s *ent; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 678, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 679, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  ent = pSelf->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 682, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Scr_AddInt(scrContext, (ent->flags.m_flags[0] >> 29) & 1);
}

/*
==============
AIScriptedScr_SetUnitType
==============
*/
void AIScriptedScr_SetUnitType(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  const char *String; 
  scr_string_t LowercaseString; 
  AIScriptedInterface *m_pAI; 
  const char *v8; 
  AIWrapper v9; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 696, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  String = Scr_GetString(scrContext, 0);
  LowercaseString = SL_FindLowercaseString(String);
  AIWrapper::AIWrapper(&v9, pSelf);
  m_pAI = v9.m_pAI;
  if ( !v9.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 701, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( !AIScriptedInterface::SetUnitType(m_pAI, LowercaseString) )
  {
    v8 = j_va("unknown type '%s', should be soldier, civilian, dog, alien, zombie, juggernaut, suicidebomber\n", String);
    Scr_Error(COM_ERR_2945, scrContext, v8);
  }
}

/*
==============
AIScriptedScr_GetUnitType
==============
*/
void AIScriptedScr_GetUnitType(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  AIScriptedInterface *m_pAI; 
  scr_string_t UnitType; 
  AIWrapper v7; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 717, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  AIWrapper::AIWrapper(&v7, pSelf);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 719, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  UnitType = AIScriptedInterface::GetUnitType(m_pAI);
  Scr_AddConstString(scrContext, UnitType);
}

/*
==============
AIScriptedScr_GetMoveMode
==============
*/
void AIScriptedScr_GetMoveMode(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  scr_string_t stop; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 732, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 733, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 734, ASSERT_TYPE_ASSERT, "(pField->type == F_STRING)", (const char *)&queryFormat, "pField->type == F_STRING") )
    __debugbreak();
  if ( pField->ofs != 1835 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 735, ASSERT_TYPE_ASSERT, "(pField->ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(ai_scripted_t,moveMode) ) ) ))", (const char *)&queryFormat, "pField->ofs == AISFOFS( moveMode )") )
    __debugbreak();
  switch ( pSelf->moveMode )
  {
    case 0u:
      stop = scr_const.stop;
      goto LABEL_21;
    case 1u:
      stop = scr_const.walk;
      goto LABEL_21;
    case 2u:
      stop = scr_const.run;
LABEL_21:
      Scr_AddConstString(scrContext, stop);
      return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 752, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled") )
    __debugbreak();
}

/*
==============
AIScriptedScr_GetDamageMOD
==============
*/
void AIScriptedScr_GetDamageMOD(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 765, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 766, ASSERT_TYPE_ASSERT, "(pField->type == F_INT)", (const char *)&queryFormat, "pField->type == F_INT") )
    __debugbreak();
  Scr_AddConstString(scrContext, *g_combat_modNames[*(int *)((char *)&pSelf->ent + pField->ofs)]);
}

/*
==============
AIScriptedScr_SetCurrentWeapon
==============
*/
void AIScriptedScr_SetCurrentWeapon(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  AIScriptedInterface *m_pAI; 
  bool outIsAlternate; 
  AIWrapper v8; 
  Weapon outWeapon; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 778, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 779, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 780, ASSERT_TYPE_ASSERT, "(pField->type == F_WEAPON)", (const char *)&queryFormat, "pField->type == F_WEAPON") )
    __debugbreak();
  GScr_Main_GetWeaponParam(scrContext, 0, &outWeapon, &outIsAlternate);
  AIWrapper::AIWrapper(&v8, pSelf);
  m_pAI = v8.m_pAI;
  if ( !v8.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 786, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  m_pAI->SetEquippedWeapon(m_pAI, &outWeapon);
}

/*
==============
AIScriptedScr_GetCurrentStance
==============
*/
void AIScriptedScr_GetCurrentStance(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  scr_string_t stand; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 793, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 794, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 795, ASSERT_TYPE_ASSERT, "(pField->type == F_STRING)", (const char *)&queryFormat, "pField->type == F_STRING") )
    __debugbreak();
  if ( pField->ofs != 1728 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 796, ASSERT_TYPE_ASSERT, "(pField->ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(ai_scripted_t,eCurrentStance) ) ) ))", (const char *)&queryFormat, "pField->ofs == AISFOFS( eCurrentStance )") )
    __debugbreak();
  switch ( pSelf->eCurrentStance )
  {
    case STANCE_STAND:
      stand = scr_const.stand;
      goto LABEL_21;
    case STANCE_CROUCH:
      stand = scr_const.crouch;
      goto LABEL_21;
    case STANCE_PRONE:
      stand = scr_const.prone;
LABEL_21:
      Scr_AddConstString(scrContext, stand);
      return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 813, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled") )
    __debugbreak();
}

/*
==============
AIScriptedScr_SetCurrentStance
==============
*/
void AIScriptedScr_SetCurrentStance(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  AIScriptedInterface *m_pAI; 
  scr_string_t ConstString; 
  const char *String; 
  const char *v9; 
  AIWrapper v10; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 820, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 821, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 822, ASSERT_TYPE_ASSERT, "(pField->type == F_STRING)", (const char *)&queryFormat, "pField->type == F_STRING") )
    __debugbreak();
  if ( pField->ofs != 1728 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 823, ASSERT_TYPE_ASSERT, "(pField->ofs == ( static_cast< intptr_t >( ( __builtin_offsetof(ai_scripted_t,eCurrentStance) ) ) ))", (const char *)&queryFormat, "pField->ofs == AISFOFS( eCurrentStance )") )
    __debugbreak();
  AIWrapper::AIWrapper(&v10, pSelf);
  m_pAI = v10.m_pAI;
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( ConstString == scr_const.stand )
  {
    AIScriptedInterface::SetCurrentStance(m_pAI, STANCE_STAND);
  }
  else if ( ConstString == scr_const.crouch )
  {
    AIScriptedInterface::SetCurrentStance(m_pAI, STANCE_CROUCH);
  }
  else if ( ConstString == scr_const.prone )
  {
    AIScriptedInterface::SetCurrentStance(m_pAI, STANCE_PRONE);
  }
  else
  {
    String = Scr_GetString(scrContext, 0);
    v9 = j_va("Invalid stance %s.", String);
    Scr_Error(COM_ERR_2946, scrContext, v9);
  }
}

/*
==============
AIScriptedScr_GetPathNode
==============
*/
void AIScriptedScr_GetPathNode(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  unsigned __int16 v6; 
  const pathnode_t *v7; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 854, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 855, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_SHORT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 856, ASSERT_TYPE_ASSERT, "(pField->type == F_SHORT)", (const char *)&queryFormat, "pField->type == F_SHORT") )
    __debugbreak();
  v6 = *(_WORD *)((char *)&pSelf->ent + pField->ofs);
  if ( Path_NodeValid(v6) )
  {
    v7 = Path_ConvertIndexToNode(v6);
    Scr_AddPathnode(v7);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
AIScriptedScr_SetCoverNode
==============
*/
void AIScriptedScr_SetCoverNode(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  const pathnode_t *Pathnode; 
  unsigned __int16 v7; 
  unsigned __int16 nodeID; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 867, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 868, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type != F_SHORT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 869, ASSERT_TYPE_ASSERT, "(pField->type == F_SHORT)", (const char *)&queryFormat, "pField->type == F_SHORT") )
    __debugbreak();
  if ( Scr_GetType(scrContext, 0) && (Pathnode = Scr_GetPathnode(scrContext, 0)) != NULL )
    v7 = Path_ConvertNodeToIndex(Pathnode);
  else
    v7 = -1;
  nodeID = pSelf->coverInfo.nodeID;
  if ( v7 != nodeID )
  {
    pSelf->coverInfo.prevNodeID = nodeID;
    if ( v7 != 0xFFFF )
      pSelf->coverInfo.startTime = level.time;
  }
  pSelf->coverInfo.nodeID = v7;
}

/*
==============
AIScriptedScr_SetGunPoseOverride
==============
*/
void AIScriptedScr_SetGunPoseOverride(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  AIGunAdditiveOptions *v6; 
  scr_string_t ConstString; 
  AIGunAdditiveOptions v8; 
  const char *String; 
  const char *v10; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 889, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 890, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  v6 = (AIGunAdditiveOptions *)pSelf + pField->ofs;
  if ( Scr_GetType(scrContext, 0) )
  {
    ConstString = Scr_GetConstString(scrContext, 0);
    v8 = AI_StringToGunPose(ConstString);
    if ( v8 == 5 )
    {
      String = Scr_GetString(scrContext, 0);
      v10 = j_va("Invalid gun pose override %s", String);
      Scr_Error(COM_ERR_2947, scrContext, v10);
    }
    *v6 = v8;
  }
  else
  {
    *v6 = 5;
  }
}

/*
==============
AIScriptedScr_GetGunPoseOverride
==============
*/
void AIScriptedScr_GetGunPoseOverride(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  scr_string_t v6; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 911, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 912, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  v6 = AI_GunPoseToString((AIGunAdditiveOptions)*((_BYTE *)&pSelf->ent + pField->ofs));
  if ( v6 )
    Scr_AddConstString(scrContext, v6);
}

/*
==============
AIScriptedScr_SetShootStyleOverride
==============
*/
void AIScriptedScr_SetShootStyleOverride(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  scr_string_t ConstString; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 923, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    goto LABEL_19;
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( ConstString == scr_const.full )
  {
    pSelf->combat.shootStyleOverride[0] = 4;
    return;
  }
  if ( ConstString == scr_const.semi )
  {
    pSelf->combat.shootStyleOverride[0] = 2;
    return;
  }
  if ( ConstString == scr_const.single )
  {
    pSelf->combat.shootStyleOverride[0] = 0;
    return;
  }
  if ( ConstString == scr_const.burst )
  {
    pSelf->combat.shootStyleOverride[0] = 1;
    return;
  }
  if ( ConstString == scr_const.auto_shoot )
  {
    pSelf->combat.shootStyleOverride[0] = 3;
    return;
  }
  if ( ConstString == scr_const.mg )
  {
    pSelf->combat.shootStyleOverride[0] = 5;
    return;
  }
  if ( ConstString == scr_const.rack )
    pSelf->combat.shootStyleOverride[0] = 6;
  else
LABEL_19:
    pSelf->combat.shootStyleOverride[0] = 7;
}

/*
==============
AIScriptedScr_GetShootStyleOverride
==============
*/
void AIScriptedScr_GetShootStyleOverride(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  switch ( pSelf->combat.shootStyleOverride[0] )
  {
    case 0:
      Scr_AddConstString(scrContext, scr_const.single);
      break;
    case 1:
      Scr_AddConstString(scrContext, scr_const.burst);
      break;
    case 2:
      Scr_AddConstString(scrContext, scr_const.semi);
      break;
    case 3:
      Scr_AddConstString(scrContext, scr_const.auto_shoot);
      break;
    case 4:
      Scr_AddConstString(scrContext, scr_const.full);
      break;
    case 5:
      Scr_AddConstString(scrContext, scr_const.mg);
      break;
    case 6:
      Scr_AddConstString(scrContext, scr_const.rack);
      break;
    default:
      Scr_AddUndefined(scrContext);
      break;
  }
}

/*
==============
AIScriptedScr_SetInCombat
==============
*/
void AIScriptedScr_SetInCombat(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  bool v4; 
  AINavigator *pNavigator; 
  team_t eTeam; 

  v4 = Scr_GetInt(scrContext, 0) != 0;
  if ( v4 != pSelf->combat.bInCombat )
  {
    pNavigator = pSelf->pNavigator;
    if ( pNavigator )
    {
      if ( pNavigator->GetLinkUsageFlags(pNavigator) )
      {
        eTeam = pSelf->sentient->eTeam;
        if ( eTeam == TEAM_TWO || eTeam == TEAM_ONE || eTeam == TEAM_THREE )
          ((void (__fastcall *)(AINavigator *))pSelf->pNavigator->SetLinkUsageFlags)(pSelf->pNavigator);
      }
    }
  }
  pSelf->combat.bInCombat = v4;
}

/*
==============
AIScriptedScr_SetSmartFacingPos
==============
*/
void AIScriptedScr_SetSmartFacingPos(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( Scr_GetType(scrContext, 0) )
  {
    Scr_GetVector(scrContext, 0, &pSelf->smartFacingPos);
    pSelf->bSmartFacingPosValid = 1;
  }
  else
  {
    pSelf->bSmartFacingPosValid = 0;
  }
}

/*
==============
AIScriptedScr_GetSmartFacingPos
==============
*/
void AIScriptedScr_GetSmartFacingPos(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( pSelf->bSmartFacingPosValid )
    Scr_AddVector(scrContext, pSelf->smartFacingPos.v);
}

/*
==============
AIScriptedScr_SetStringAllowUndefined
==============
*/
void AIScriptedScr_SetStringAllowUndefined(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  scr_string_t ConstString; 

  ConstString = 0;
  if ( Scr_GetType(scrContext, 0) )
    ConstString = Scr_GetConstString(scrContext, 0);
  Scr_SetString((scr_string_t *)((char *)pSelf + pField->ofs), ConstString);
}

/*
==============
AIScriptedScr_GetStringAllowUndefined
==============
*/
void AIScriptedScr_GetStringAllowUndefined(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  scr_string_t v3; 

  v3 = *(_DWORD *)((char *)&pSelf->ent + pField->ofs);
  if ( v3 )
    Scr_AddConstString(scrContext, v3);
}

/*
==============
AIScriptedScr_SetFacialState
==============
*/
void AIScriptedScr_SetFacialState(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  scr_string_t ConstString; 
  const char *v6; 
  const char *v7; 

  ConstString = Scr_GetConstString(scrContext, 0);
  if ( ConstString == scr_const.ASM )
  {
    pSelf->facialState = ASM;
  }
  else if ( ConstString == scr_const.filler )
  {
    pSelf->facialState = FILLER;
  }
  else if ( ConstString == scr_const.animscripted )
  {
    pSelf->facialState = ANIMSCRIPTED;
  }
  else
  {
    v6 = SL_ConvertToString(ConstString);
    v7 = j_va("Invalid facial state %s", v6);
    Scr_Error(COM_ERR_6492, scrContext, v7);
  }
}

/*
==============
AIScriptedScr_GetFacialState
==============
*/
void AIScriptedScr_GetFacialState(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( pSelf->facialState )
  {
    if ( pSelf->facialState == FILLER )
    {
      Scr_AddConstString(scrContext, scr_const.filler);
    }
    else if ( pSelf->facialState == ANIMSCRIPTED )
    {
      Scr_AddConstString(scrContext, scr_const.animscripted);
    }
  }
  else
  {
    Scr_AddConstString(scrContext, scr_const.ASM);
  }
}

/*
==============
AIScriptedScr_SetGoodShootPos
==============
*/
void AIScriptedScr_SetGoodShootPos(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( Scr_GetType(scrContext, 0) )
  {
    pSelf->bGoodShootPos = 1;
    Scr_GetVector(scrContext, 0, &pSelf->vGoodShootPos);
  }
  else
  {
    pSelf->bGoodShootPos = 0;
  }
}

/*
==============
AIScriptedScr_GetGoodShootPos
==============
*/
void AIScriptedScr_GetGoodShootPos(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( pSelf->bGoodShootPos )
    Scr_AddVector(scrContext, pSelf->vGoodShootPos.v);
}

/*
==============
AIScriptedScr_SetDesiredTurnYaw
==============
*/
void AIScriptedScr_SetDesiredTurnYaw(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  double Float; 

  if ( Scr_GetType(scrContext, 0) )
  {
    Float = Scr_GetFloat(scrContext, 0);
    pSelf->desiredTurnYaw = *(float *)&Float;
    pSelf->bDesiredTurnYawValid = 1;
  }
  else
  {
    pSelf->bDesiredTurnYawValid = 0;
  }
}

/*
==============
AIScriptedScr_GetDesiredTurnYaw
==============
*/
void AIScriptedScr_GetDesiredTurnYaw(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( pSelf->bDesiredTurnYawValid )
    Scr_AddFloat(scrContext, pSelf->desiredTurnYaw);
}

/*
==============
AIScriptedScr_SetLastEnemySightPosOld
==============
*/
void AIScriptedScr_SetLastEnemySightPosOld(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( Scr_GetType(scrContext, 0) )
  {
    pSelf->sight.bLastEnemySightPosOld = 1;
    Scr_GetVector(scrContext, 0, &pSelf->sight.vLastEnemySightPosOld);
  }
  else
  {
    pSelf->sight.bLastEnemySightPosOld = 0;
  }
}

/*
==============
AIScriptedScr_GetLastEnemySightPosOld
==============
*/
void AIScriptedScr_GetLastEnemySightPosOld(scrContext_t *scrContext, ai_scripted_t *pSelf, const ai_scripted_fields_s *pField)
{
  if ( pSelf->sight.bLastEnemySightPosOld )
    Scr_AddVector(scrContext, pSelf->sight.vLastEnemySightPosOld.v);
}

/*
==============
AIScripted_GetNumExpandedFields
==============
*/
__int64 AIScripted_GetNumExpandedFields()
{
  return 212i64;
}

/*
==============
Cmd_AIScripted_f
==============
*/
char Cmd_AIScripted_f(const char *szField, int argc)
{
  scr_string_t LowercaseString; 
  scr_string_t *name; 
  int v6; 
  __int64 v7; 
  const ai_scripted_fields_s *v9; 
  char v10; 
  char *p_buffer; 
  char v12; 
  int v13; 
  __int64 v14; 
  bitarray<224> *v15; 
  actor_s *j; 
  actor_s *actor; 
  bitarray<224> *v18; 
  GUtils *Utils; 
  unsigned int v20; 
  unsigned __int64 v21; 
  __int64 v22; 
  bitarray<224> *AllTeamFlags; 
  actor_s *i; 
  scr_string_t to; 
  bitarray<224> iTeamFlags; 
  char buffer; 
  char s0; 

  if ( Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING|0x100) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4293, ASSERT_TYPE_ASSERT, "( !Com_GameMode_SupportsFeature( Com_GameMode_Feature::EXPANDED_AI_SCRIPTED_FIELDS ) )", "functionality has not been expanded to include expanded script fields.") )
    __debugbreak();
  LowercaseString = SL_FindLowercaseString(szField);
  name = ai_scripted_fields[0].name;
  v6 = 0;
  if ( !ai_scripted_fields[0].name )
    return 0;
  v7 = 0i64;
  while ( LowercaseString != *name )
  {
    ++v7;
    ++v6;
    name = ai_scripted_fields[v7].name;
    if ( !name )
      return 0;
  }
  v9 = &ai_scripted_fields[v6];
  if ( !v9 )
    return 0;
  SV_Cmd_ArgvBuffer(1, &buffer, 0x100ui64);
  v10 = buffer;
  p_buffer = &buffer;
  v12 = buffer;
  v13 = 0;
  if ( buffer == 33 )
    v12 = s0;
  LOBYTE(v13) = buffer == 33;
  if ( buffer == 33 )
    p_buffer = &s0;
  if ( (unsigned __int8)(v12 - 48) > 9u )
  {
    if ( I_stricmp(p_buffer, "all") )
    {
      Utils = GUtils::GetUtils();
      v20 = Utils->GetTeamFromDebugString(Utils, p_buffer);
      v21 = v20;
      if ( v20 )
      {
        memset(&iTeamFlags, 0, sizeof(iTeamFlags));
        if ( v20 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v20, 224) )
          __debugbreak();
        iTeamFlags.array[v21 >> 5] |= 0x80000000 >> (v21 & 0x1F);
        Cmd_AI_Team(argc, ai_scripted_fields, v9, &iTeamFlags, v13);
      }
      else
      {
        v22 = 404i64;
        if ( IsActorClassname(p_buffer) )
          v22 = 380i64;
        to = SL_GetString(p_buffer, 0);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
        else
          AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
        iTeamFlags = *AllTeamFlags;
        for ( i = AIActorInterface::FirstActor(&iTeamFlags); i; i = AIActorInterface::NextActor(i, &iTeamFlags) )
        {
          if ( (*(_DWORD *)((char *)&i->ent->s.number + v22) == to) == (v10 != 33) )
            Cmd_AI_Dispatch(argc, i, ai_scripted_fields, v9);
        }
        Scr_SetString(&to, (scr_string_t)0);
      }
    }
    else
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        v18 = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
      else
        v18 = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
      iTeamFlags = *v18;
      Cmd_AI_Team(argc, ai_scripted_fields, v9, &iTeamFlags, v13);
    }
  }
  else
  {
    v14 = atoi(p_buffer);
    if ( v10 == 33 )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        v15 = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
      else
        v15 = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
      iTeamFlags = *v15;
      for ( j = AIActorInterface::FirstActor(&iTeamFlags); j; j = AIActorInterface::NextActor(j, &iTeamFlags) )
      {
        if ( j->ent->s.number != (_DWORD)v14 )
          Cmd_AI_Dispatch(argc, j, ai_scripted_fields, v9);
      }
    }
    else if ( (unsigned int)v14 > 0x7FF )
    {
      Cmd_AI_PrintUsage();
      Com_PrintError(0, "%i is not a valid entity number\n", (unsigned int)v14);
    }
    else
    {
      actor = level.gentities[v14].actor;
      if ( actor )
      {
        Cmd_AI_Dispatch(argc, actor, ai_scripted_fields, v9);
      }
      else
      {
        Cmd_AI_PrintUsage();
        Com_PrintError(0, "entity number %i is not an actor\n", (unsigned int)v14);
      }
    }
  }
  return 1;
}

/*
==============
GScr_AddFieldsForAIScripted
==============
*/
void GScr_AddFieldsForAIScripted(scrContext_t *scrContext)
{
  scr_string_t *name; 
  const ai_scripted_fields_s *i; 
  __int64 v4; 
  scr_string_t *v5; 
  const ai_scripted_fields_s *j; 
  __int64 v7; 

  name = ai_scripted_fields[0].name;
  for ( i = ai_scripted_fields; name; ++i )
  {
    SL_ConvertToString(*name);
    v4 = ((char *)&i->canonicalString - (char *)&ai_scripted_fields[0].canonicalString) / 48;
    if ( (v4 & 0xE000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3680, ASSERT_TYPE_ASSERT, "(!((f - ai_scripted_fields) & ENTFIELD_MASK))", (const char *)&queryFormat, "!((f - ai_scripted_fields) & ENTFIELD_MASK)") )
      __debugbreak();
    if ( v4 != (unsigned __int16)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3681, ASSERT_TYPE_ASSERT, "((f - ai_scripted_fields) == (unsigned short)( f - ai_scripted_fields ))", (const char *)&queryFormat, "(f - ai_scripted_fields) == (unsigned short)( f - ai_scripted_fields )") )
      __debugbreak();
    Scr_AddClassField(scrContext, ENTITY_CLASS_GENTITY, *i->name, i->canonicalString, (unsigned __int16)v4 | 0xC000);
    name = i[1].name;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING|0x100) )
  {
    v5 = ai_scripted_fields_expanded[0].name;
    for ( j = ai_scripted_fields_expanded; v5; ++j )
    {
      SL_ConvertToString(*v5);
      v7 = ((char *)&j->canonicalString - (char *)&ai_scripted_fields_expanded[0].canonicalString) / 48;
      if ( (v7 & 0xE000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3692, ASSERT_TYPE_ASSERT, "(!((f - ai_scripted_fields_expanded) & ENTFIELD_MASK))", (const char *)&queryFormat, "!((f - ai_scripted_fields_expanded) & ENTFIELD_MASK)") )
        __debugbreak();
      if ( v7 != (unsigned __int16)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3693, ASSERT_TYPE_ASSERT, "((f - ai_scripted_fields_expanded) == (unsigned short)(f - ai_scripted_fields_expanded))", (const char *)&queryFormat, "(f - ai_scripted_fields_expanded) == (unsigned short)(f - ai_scripted_fields_expanded)") )
        __debugbreak();
      Scr_AddClassField(scrContext, ENTITY_CLASS_GENTITY, *j->name, j->canonicalString, (unsigned __int16)(v7 + 202) | 0xC000);
      v5 = j[1].name;
    }
  }
  Scr_AddFieldsForBlackboard();
}

/*
==============
Scr_GetAIScriptedField
==============
*/
void Scr_GetAIScriptedField(scrContext_t *scrContext, ai_scripted_t *actor, int offset)
{
  __int64 v3; 
  __int64 v6; 
  const ai_scripted_fields_s *v7; 
  const ai_scripted_fields_s *v8; 
  void (__fastcall *getter)(scrContext_t *, ai_scripted_t *, const ai_scripted_fields_s *); 

  v3 = offset;
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3748, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING|0x100) )
  {
    if ( (int)v3 >= 202 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3763, ASSERT_TYPE_ASSERT, "(offset < numGoldFields)", (const char *)&queryFormat, "offset < numGoldFields") )
      __debugbreak();
    goto LABEL_15;
  }
  if ( (int)v3 < 202 )
  {
LABEL_15:
    v6 = v3;
    v7 = ai_scripted_fields;
    goto LABEL_10;
  }
  if ( (unsigned int)v3 >= 0xD4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3753, ASSERT_TYPE_ASSERT, "((unsigned)offset < AIScripted_GetNumExpandedFields())", (const char *)&queryFormat, "(unsigned)offset < AIScripted_GetNumExpandedFields()") )
    __debugbreak();
  v6 = (int)v3 - 202;
  v7 = ai_scripted_fields_expanded;
LABEL_10:
  v8 = &v7[v6];
  getter = v8->getter;
  if ( getter )
    getter(scrContext, actor, v8);
  else
    Scr_GetGenericField(scrContext, (unsigned __int8 *)actor, v8->type, v8->ofs);
}

/*
==============
Scr_SetAIScriptedField
==============
*/
void Scr_SetAIScriptedField(scrContext_t *scrContext, ai_scripted_t *actor, int offset)
{
  __int64 v3; 
  bool v6; 
  __int64 v7; 
  const ai_scripted_fields_s *v8; 
  const ai_scripted_fields_s *v9; 
  void (__fastcall *setter)(scrContext_t *, ai_scripted_t *, const ai_scripted_fields_s *); 
  __int64 v11; 

  v3 = offset;
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3711, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING|0x100) )
  {
    v6 = (unsigned int)v3 < 0xCA;
    if ( (int)v3 >= 202 )
    {
      if ( (unsigned int)v3 >= 0xD4 )
      {
        LODWORD(v11) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3715, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( AIScripted_GetNumExpandedFields() )", "offset doesn't index AIScripted_GetNumExpandedFields()\n\t%i not in [0, %i)", v11, 212) )
          __debugbreak();
      }
      v7 = (int)v3 - 202;
      v8 = ai_scripted_fields_expanded;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = (unsigned int)v3 < 0xCA;
  }
  if ( !v6 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3725, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( numGoldFields )", "offset doesn't index numGoldFields\n\t%i not in [0, %i)", v11, 202) )
      __debugbreak();
  }
  v7 = v3;
  v8 = ai_scripted_fields;
LABEL_10:
  v9 = &v8[v7];
  setter = v9->setter;
  if ( setter )
    setter(scrContext, actor, v9);
  else
    Scr_SetGenericField(scrContext, (unsigned __int8 *)actor, v9->type, v9->ofs);
}

