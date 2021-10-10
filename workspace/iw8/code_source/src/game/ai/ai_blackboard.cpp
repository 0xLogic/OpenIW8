/*
==============
Scr_IsBlackboardFieldTrue
==============
*/

bool __fastcall Scr_IsBlackboardFieldTrue(int entnum, const scr_string_t fieldName)
{
  return ?Scr_IsBlackboardFieldTrue@@YA_NHW4scr_string_t@@@Z(entnum, fieldName);
}

/*
==============
Scr_GetBlackboardField
==============
*/

void __fastcall Scr_GetBlackboardField(int entnum, int offset)
{
  ?Scr_GetBlackboardField@@YAXHH@Z(entnum, offset);
}

/*
==============
Scr_ClearBlackboard
==============
*/

void __fastcall Scr_ClearBlackboard(int entnum)
{
  ?Scr_ClearBlackboard@@YAXH@Z(entnum);
}

/*
==============
Scr_AddFieldsForBlackboard
==============
*/

void Scr_AddFieldsForBlackboard(void)
{
  ?Scr_AddFieldsForBlackboard@@YAXXZ();
}

/*
==============
Scr_FreeBlackboard
==============
*/

void __fastcall Scr_FreeBlackboard(int entnum)
{
  ?Scr_FreeBlackboard@@YAXH@Z(entnum);
}

/*
==============
Scr_SetBlackboardField
==============
*/

void __fastcall Scr_SetBlackboardField(int entnum, int offset)
{
  ?Scr_SetBlackboardField@@YAXHH@Z(entnum, offset);
}

/*
==============
GetNumExpandedBlackboardFields
==============
*/

unsigned int __fastcall GetNumExpandedBlackboardFields()
{
  return ?GetNumExpandedBlackboardFields@@YAIXZ();
}

/*
==============
Scr_AddBlackboard
==============
*/

void __fastcall Scr_AddBlackboard(int entnum)
{
  ?Scr_AddBlackboard@@YAXH@Z(entnum);
}

/*
==============
AI_BB_Set_Clamp_Byte
==============
*/
void AI_BB_Set_Clamp_Byte(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v5; 
  VariableType Type; 
  double Float; 
  int Int; 
  char v9; 

  v5 = ScriptContext_Server();
  Type = Scr_GetType(v5, 0);
  if ( Type == VAR_FLOAT )
  {
    Float = Scr_GetFloat(v5, 0);
    Int = (int)*(float *)&Float;
  }
  else if ( Type == VAR_INTEGER )
  {
    Int = Scr_GetInt(v5, 0);
  }
  else
  {
    Int = 0;
    Scr_Error(COM_ERR_1767, v5, "Number value expected");
  }
  if ( Int > 255 )
    Int = 255;
  v9 = Int;
  if ( Int < 0 )
    v9 = 0;
  *((_BYTE *)&pBB->m_MoveType + pField->m_Ofs) = v9;
}

/*
==============
AI_BB_SetString_AllowUndefined
==============
*/
void AI_BB_SetString_AllowUndefined(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v5; 
  scr_string_t ConstString; 
  VariableType Type; 

  v5 = ScriptContext_Server();
  ConstString = 0;
  Type = Scr_GetType(v5, 0);
  if ( Type == VAR_STRING )
  {
    ConstString = Scr_GetConstString(v5, 0);
  }
  else if ( Type )
  {
    Scr_Error(COM_ERR_6177, v5, "String or undefined expected.");
  }
  Scr_SetString((scr_string_t *)((char *)&pBB->m_MoveType + pField->m_Ofs), ConstString);
}

/*
==============
AI_BB_GetString_AllowUndefined
==============
*/
void AI_BB_GetString_AllowUndefined(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v5; 
  scr_string_t v6; 

  v5 = ScriptContext_Server();
  v6 = *(scr_string_t *)((char *)&pBB->m_MoveType + pField->m_Ofs);
  if ( v6 )
    Scr_AddConstString(v5, v6);
  else
    Scr_AddUndefined(v5);
}

/*
==============
AI_BB_SetDesiredStance
==============
*/
void AI_BB_SetDesiredStance(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 
  scr_string_t ConstString; 
  ai_stance_e v6; 
  const char *v7; 
  const char *v8; 

  v4 = ScriptContext_Server();
  ConstString = Scr_GetConstString(v4, 0);
  v6 = AI_StringToStance(ConstString);
  pBB->m_DesiredStance = v6;
  if ( v6 == STANCE_BAD )
  {
    v7 = SL_ConvertToString(ConstString);
    v8 = j_va("Invalid stance %s", v7);
    Scr_Error(COM_ERR_1768, v4, v8);
    pBB->m_DesiredStance = STANCE_STAND;
  }
}

/*
==============
AI_BB_GetDesiredStance
==============
*/
void AI_BB_GetDesiredStance(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 
  scr_string_t v5; 

  v4 = ScriptContext_Server();
  v5 = AI_StanceToString(pBB->m_DesiredStance);
  Scr_AddConstString(v4, v5);
}

/*
==============
AI_BB_SetForceStrafeFacingPos
==============
*/
void AI_BB_SetForceStrafeFacingPos(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 

  v4 = ScriptContext_Server();
  if ( Scr_GetType(v4, 0) )
  {
    Scr_GetVector(v4, 0, &pBB->m_forceStrafeFacingPos);
    pBB->m_bStrafeFacingPosValid = 1;
  }
  else
  {
    pBB->m_bStrafeFacingPosValid = 0;
  }
}

/*
==============
AI_BB_GetForceStrafeFacingPos
==============
*/
void AI_BB_GetForceStrafeFacingPos(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 

  v4 = ScriptContext_Server();
  if ( pBB->m_bStrafeFacingPosValid )
    Scr_AddVector(v4, pBB->m_forceStrafeFacingPos.v);
  else
    Scr_AddUndefined(v4);
}

/*
==============
AI_BB_SetShootParamsObjective
==============
*/
void AI_BB_SetShootParamsObjective(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 
  scr_string_t ConstString; 
  int v6; 
  const char *String; 
  const char *v8; 

  v4 = ScriptContext_Server();
  ConstString = Scr_GetConstString(v4, 0);
  v6 = 0;
  while ( *shootObjectiveStrs[v6] != ConstString )
  {
    if ( ++v6 >= 3 )
    {
      String = Scr_GetString(v4, 0);
      v8 = j_va("Invalid shootparams objective %s", String);
      Scr_Error(COM_ERR_1769, v4, v8);
      return;
    }
  }
  pBB->m_ShootParams.m_Objective = v6;
}

/*
==============
AI_BB_GetShootParamsObjective
==============
*/
void AI_BB_GetShootParamsObjective(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 

  v4 = ScriptContext_Server();
  Scr_AddConstString(v4, *shootObjectiveStrs[(unsigned __int8)pBB->m_ShootParams.m_Objective]);
}

/*
==============
AI_BB_SetShootParamsStyle
==============
*/
void AI_BB_SetShootParamsStyle(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 
  scr_string_t ConstString; 
  int v6; 
  const char *String; 
  const char *v8; 

  v4 = ScriptContext_Server();
  ConstString = Scr_GetConstString(v4, 0);
  v6 = 0;
  while ( *shootStyleStrs[v6] != ConstString )
  {
    if ( ++v6 >= 7 )
    {
      String = Scr_GetString(v4, 0);
      v8 = j_va("Invalid shootparams style %s", String);
      Scr_Error(COM_ERR_1770, v4, v8);
      return;
    }
  }
  pBB->m_ShootParams.m_Style[0] = v6;
}

/*
==============
AI_BB_GetShootParamsStyle
==============
*/
void AI_BB_GetShootParamsStyle(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 

  v4 = ScriptContext_Server();
  Scr_AddConstString(v4, *shootStyleStrs[(unsigned __int8)pBB->m_ShootParams.m_Style[0]]);
}

/*
==============
AI_BB_SetShootParamsPos
==============
*/
void AI_BB_SetShootParamsPos(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 

  v4 = ScriptContext_Server();
  if ( Scr_GetType(v4, 0) )
  {
    Scr_GetVector(v4, 0, &pBB->m_ShootParams.m_Pos);
    pBB->m_ShootParams.m_bPosValid = 1;
  }
  else
  {
    pBB->m_ShootParams.m_bPosValid = 0;
  }
}

/*
==============
AI_BB_GetShootParamsPos
==============
*/
void AI_BB_GetShootParamsPos(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 

  v4 = ScriptContext_Server();
  if ( pBB->m_ShootParams.m_bPosValid )
    Scr_AddVector(v4, pBB->m_ShootParams.m_Pos.v);
}

/*
==============
AI_BB_SetWeaponRequest
==============
*/
void AI_BB_SetWeaponRequest(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 
  const char *String; 
  weapClass_t i; 
  __int64 v7; 
  const char *v8; 
  const char *WeaponClassName; 
  signed __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 

  v4 = ScriptContext_Server();
  String = Scr_GetString(v4, 0);
  for ( i = WEAPCLASS_RIFLE; i < WEAPCLASS_NUM; ++i )
  {
    v7 = 0x7FFFFFFFi64;
    v8 = String;
    WeaponClassName = BG_GetWeaponClassName(i);
    if ( !WeaponClassName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v10 = WeaponClassName - String;
    while ( 1 )
    {
      v11 = (unsigned __int8)v8[v10];
      v12 = v7;
      v13 = *(unsigned __int8 *)v8++;
      --v7;
      if ( !v12 )
      {
LABEL_17:
        pBB->m_WeaponRequest = i;
        return;
      }
      if ( v11 != v13 )
      {
        v14 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v14 = v11;
        v11 = v14;
        v15 = v13 + 32;
        if ( (unsigned int)(v13 - 65) > 0x19 )
          v15 = v13;
        if ( v11 != v15 )
          break;
      }
      if ( !v11 )
        goto LABEL_17;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 222, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid weapon class requested: %s", String) )
    __debugbreak();
}

/*
==============
AI_BB_GetWeaponRequest
==============
*/
void AI_BB_GetWeaponRequest(AIBlackboard *pBB, const ai_blackboard_field_t *pField, int offset)
{
  scrContext_t *v4; 
  const char *WeaponClassName; 
  weapClass_t m_WeaponRequest; 
  int v7; 

  v4 = ScriptContext_Server();
  if ( pBB->m_WeaponRequest >= (unsigned int)WEAPCLASS_NUM )
  {
    v7 = 15;
    m_WeaponRequest = pBB->m_WeaponRequest;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( pBB->m_WeaponRequest ) < (unsigned)( WEAPCLASS_NUM )", "pBB->m_WeaponRequest doesn't index WEAPCLASS_NUM\n\t%i not in [0, %i)", m_WeaponRequest, v7) )
      __debugbreak();
  }
  WeaponClassName = BG_GetWeaponClassName(pBB->m_WeaponRequest);
  Scr_AddString(v4, WeaponClassName);
}

/*
==============
GetNumExpandedBlackboardFields
==============
*/
__int64 GetNumExpandedBlackboardFields()
{
  return 40i64;
}

/*
==============
Scr_AddBlackboard
==============
*/
void Scr_AddBlackboard(int entnum)
{
  scrContext_t *v2; 

  v2 = ScriptContext_Server();
  Scr_AddEntityNum(v2, entnum, ENTITY_CLASS_BLACKBOARD);
}

/*
==============
Scr_AddFieldsForBlackboard
==============
*/
void Scr_AddFieldsForBlackboard(void)
{
  const ai_blackboard_field_t *v0; 
  scrContext_t *i; 
  __int64 v2; 
  unsigned int v3; 
  const ai_blackboard_field_t *j; 
  __int64 v5; 
  unsigned __int16 v6; 

  v0 = s_aiBlackboardFields;
  for ( i = ScriptContext_Server(); v0->m_Name; ++v0 )
  {
    v2 = (char *)&v0->m_CanonicalString - (char *)&s_aiBlackboardFields[0].m_CanonicalString;
    v3 = (unsigned __int16)(v2 / 48);
    if ( v2 / 48 != (unsigned __int16)(v2 / 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 306, ASSERT_TYPE_ASSERT, "((f - s_aiBlackboardFields) == (unsigned short)(f - s_aiBlackboardFields))", (const char *)&queryFormat, "(f - s_aiBlackboardFields) == (unsigned short)(f - s_aiBlackboardFields)") )
      __debugbreak();
    Scr_AddClassField(i, ENTITY_CLASS_BLACKBOARD, *v0->m_Name, v0->m_CanonicalString, v3);
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING|0x100) )
  {
    for ( j = s_aiBlackboardFieldsExpanded; j->m_Name; ++j )
    {
      v5 = (char *)&j->m_CanonicalString - (char *)&s_aiBlackboardFieldsExpanded[0].m_CanonicalString;
      v6 = v5 / 48;
      if ( v5 / 48 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 315, ASSERT_TYPE_ASSERT, "((f - s_aiBlackboardFieldsExpanded) == (unsigned short)(f - s_aiBlackboardFieldsExpanded))", (const char *)&queryFormat, "(f - s_aiBlackboardFieldsExpanded) == (unsigned short)(f - s_aiBlackboardFieldsExpanded)") )
        __debugbreak();
      Scr_AddClassField(i, ENTITY_CLASS_BLACKBOARD, *j->m_Name, j->m_CanonicalString, (unsigned __int16)(v6 + 39));
    }
  }
}

/*
==============
Scr_ClearBlackboard
==============
*/
void Scr_ClearBlackboard(int entnum)
{
  scrContext_t *v2; 

  v2 = ScriptContext_Server();
  Scr_ClearEntityNum(v2, entnum, ENTITY_CLASS_BLACKBOARD);
}

/*
==============
Scr_FreeBlackboard
==============
*/
void Scr_FreeBlackboard(int entnum)
{
  scrContext_t *v2; 

  v2 = ScriptContext_Server();
  Scr_FreeEntityNum(v2, entnum, ENTITY_CLASS_BLACKBOARD);
}

/*
==============
Scr_GetBlackboardField
==============
*/
void Scr_GetBlackboardField(int entnum, int offset)
{
  __int64 v2; 
  __int64 v3; 
  ai_scripted_t *AIScripted; 
  bool v5; 
  const ai_blackboard_field_t *v6; 
  __int64 v7; 
  const ai_blackboard_field_t *v8; 
  void (__fastcall *m_Getter)(AIBlackboard *, const ai_blackboard_field_t *, int); 
  scrContext_t *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = entnum;
  v3 = offset;
  if ( (unsigned int)entnum >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 398, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entnum, 2048) )
      __debugbreak();
    LODWORD(v14) = 2048;
    LODWORD(v12) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v2].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 399, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entnum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entnum )") )
    __debugbreak();
  AIScripted = AI_GetAIScripted(&g_entities[v2]);
  if ( !AIScripted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 403, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING|0x100) )
  {
    v5 = (unsigned int)v3 < 0x27;
    if ( (int)v3 >= 39 )
    {
      if ( (unsigned int)v3 >= 0x28 )
      {
        LODWORD(v13) = 40;
        LODWORD(v11) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 410, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( GetNumExpandedBlackboardFields() )", "offset doesn't index GetNumExpandedBlackboardFields()\n\t%i not in [0, %i)", v11, v13) )
          __debugbreak();
      }
      v6 = s_aiBlackboardFieldsExpanded;
      v7 = (int)v3 - 39;
      goto LABEL_24;
    }
  }
  else
  {
    v5 = (unsigned int)v3 < 0x27;
  }
  if ( !v5 )
  {
    LODWORD(v13) = 39;
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 420, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( numBaseFields )", "offset doesn't index numBaseFields\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v7 = v3;
  v6 = s_aiBlackboardFields;
LABEL_24:
  v8 = &v6[v7];
  m_Getter = v8->m_Getter;
  if ( m_Getter )
  {
    m_Getter(&AIScripted->blackboard, v8, v3);
  }
  else
  {
    v10 = ScriptContext_Server();
    Scr_GetGenericField(v10, (unsigned __int8 *)&AIScripted->blackboard, v8->m_Type, v8->m_Ofs);
  }
}

/*
==============
Scr_IsBlackboardFieldTrue
==============
*/
bool Scr_IsBlackboardFieldTrue(int entnum, const scr_string_t fieldName)
{
  __int64 v2; 
  int v4; 
  const ai_blackboard_field_t *v5; 
  int v6; 
  const ai_blackboard_field_t *v7; 
  const ai_blackboard_field_t *v8; 
  const char *v9; 
  unsigned __int64 v11; 
  const char *v12; 
  ai_scripted_t *AIScripted; 
  int v14; 
  const char *v15; 
  __int64 v16; 

  v2 = entnum;
  if ( !fieldName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 323, ASSERT_TYPE_ASSERT, "(fieldName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "fieldName != NULL_SCR_STRING") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v16) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 324, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, 2048) )
      __debugbreak();
  }
  v4 = 0;
  v5 = s_aiBlackboardFields;
  v6 = 0;
  v7 = s_aiBlackboardFields;
  do
  {
    if ( *v7->m_Name == fieldName )
    {
      v11 = v6;
      if ( s_aiBlackboardFields[v6].m_Type != F_BYTE )
      {
        v15 = SL_ConvertToString(fieldName);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 331, ASSERT_TYPE_ASSERT, "(s_aiBlackboardFields[ iField ].m_Type == F_BYTE)", "%s\n\tIsBlackboardTrue called on non-bool var %s", "s_aiBlackboardFields[ iField ].m_Type == F_BYTE", v15) )
          __debugbreak();
      }
      AIScripted = AI_GetAIScripted(&g_entities[v2]);
      if ( !AIScripted )
      {
        v14 = 334;
        goto LABEL_27;
      }
      return *((_BYTE *)&AIScripted->blackboard.m_MoveType + v5[v11].m_Ofs) != 0;
    }
    ++v6;
    ++v7;
  }
  while ( (__int64)v7 < (__int64)&s_aiBlackboardFields[39] );
  if ( Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING|0x100) )
  {
    v5 = s_aiBlackboardFieldsExpanded;
    v8 = s_aiBlackboardFieldsExpanded;
    while ( *v8->m_Name != fieldName )
    {
      ++v4;
      if ( (__int64)++v8 >= (__int64)&s_aiBlackboardFieldsExpanded[1] )
        goto LABEL_14;
    }
    v11 = v4;
    if ( s_aiBlackboardFieldsExpanded[v11].m_Type != F_BYTE )
    {
      v12 = SL_ConvertToString(fieldName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 346, ASSERT_TYPE_ASSERT, "(s_aiBlackboardFieldsExpanded[ iField ].m_Type == F_BYTE)", "%s\n\tIsBlackboardTrue called on non-bool var %s", "s_aiBlackboardFieldsExpanded[ iField ].m_Type == F_BYTE", v12) )
        __debugbreak();
    }
    AIScripted = AI_GetAIScripted(&g_entities[v2]);
    if ( !AIScripted )
    {
      v14 = 349;
LABEL_27:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", v14, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
        __debugbreak();
    }
    return *((_BYTE *)&AIScripted->blackboard.m_MoveType + v5[v11].m_Ofs) != 0;
  }
LABEL_14:
  v9 = SL_ConvertToString(fieldName);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 355, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "IsBlackboardTrue called on non-existent field %s", v9) )
    __debugbreak();
  return 0;
}

/*
==============
Scr_SetBlackboardField
==============
*/
void Scr_SetBlackboardField(int entnum, int offset)
{
  __int64 v2; 
  __int64 v3; 
  ai_scripted_t *AIScripted; 
  bool v5; 
  const ai_blackboard_field_t *v6; 
  __int64 v7; 
  const ai_blackboard_field_t *v8; 
  void (__fastcall *m_Setter)(AIBlackboard *, const ai_blackboard_field_t *, int); 
  scrContext_t *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = entnum;
  v3 = offset;
  if ( (unsigned int)entnum >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 361, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entnum, 2048) )
      __debugbreak();
    LODWORD(v14) = 2048;
    LODWORD(v12) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v2].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 362, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entnum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entnum )") )
    __debugbreak();
  AIScripted = AI_GetAIScripted(&g_entities[v2]);
  if ( !AIScripted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 366, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING|0x100) )
  {
    v5 = (unsigned int)v3 < 0x27;
    if ( (int)v3 >= 39 )
    {
      if ( (unsigned int)v3 >= 0x28 )
      {
        LODWORD(v13) = 40;
        LODWORD(v11) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 373, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( GetNumExpandedBlackboardFields() )", "offset doesn't index GetNumExpandedBlackboardFields()\n\t%i not in [0, %i)", v11, v13) )
          __debugbreak();
      }
      v6 = s_aiBlackboardFieldsExpanded;
      v7 = (int)v3 - 39;
      goto LABEL_24;
    }
  }
  else
  {
    v5 = (unsigned int)v3 < 0x27;
  }
  if ( !v5 )
  {
    LODWORD(v13) = 39;
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_blackboard.cpp", 383, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( numBaseFields )", "offset doesn't index numBaseFields\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v7 = v3;
  v6 = s_aiBlackboardFields;
LABEL_24:
  v8 = &v6[v7];
  m_Setter = v8->m_Setter;
  if ( m_Setter )
  {
    m_Setter(&AIScripted->blackboard, v8, v3);
  }
  else
  {
    v10 = ScriptContext_Server();
    Scr_SetGenericField(v10, (unsigned __int8 *)&AIScripted->blackboard, v8->m_Type, v8->m_Ofs);
  }
}

