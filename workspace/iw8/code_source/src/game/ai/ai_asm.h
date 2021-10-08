/*
==============
AI_ASM_GetInstance
==============
*/

ASM_Instance *__fastcall AI_ASM_GetInstance(int entNum)
{
  return ?AI_ASM_GetInstance@@YAPEAUASM_Instance@@H@Z(entNum);
}

/*
==============
AI_ASM_Tick
==============
*/

bool __fastcall AI_ASM_Tick(int entNum, bool bCheckTransitionsOnly)
{
  return ?AI_ASM_Tick@@YA_NH_N@Z(entNum, bCheckTransitionsOnly);
}

/*
==============
ASM_Builtin_GetBoolParam
==============
*/

bool __fastcall ASM_Builtin_GetBoolParam(int iParam, ASM_Function_Param *pParams, int numParams)
{
  return ?ASM_Builtin_GetBoolParam@@YA_NHPEAUASM_Function_Param@@H@Z(iParam, pParams, numParams);
}

/*
==============
ASM_Builtin_GetStringParam
==============
*/

scr_string_t __fastcall ASM_Builtin_GetStringParam(int iParam, ASM_Function_Param *pParams, int numParams)
{
  return ?ASM_Builtin_GetStringParam@@YA?AW4scr_string_t@@HPEAUASM_Function_Param@@H@Z(iParam, pParams, numParams);
}

/*
==============
AI_ASM_GetInstance
==============
*/
ASM_Instance *AI_ASM_GetInstance(int entNum)
{
  if ( !Ai_Asm::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 279, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  return Ai_Asm::GetInstance(Ai_Asm::ms_instance, NULL, entNum);
}

/*
==============
ASM_Builtin_GetStringParam
==============
*/
__int64 ASM_Builtin_GetStringParam(int iParam, ASM_Function_Param *pParams, int numParams)
{
  __int64 v3; 
  __int64 v7; 

  v3 = iParam;
  if ( !pParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 349, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
    __debugbreak();
  if ( (unsigned int)v3 >= numParams )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 350, ASSERT_TYPE_ASSERT, "(unsigned)( iParam ) < (unsigned)( numParams )", "iParam doesn't index numParams\n\t%i not in [0, %i)", v7, numParams) )
      __debugbreak();
  }
  if ( pParams[v3].m_Type != ParamType_String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 351, ASSERT_TYPE_ASSERT, "(pParams[ iParam ].m_Type == ParamType_String)", (const char *)&queryFormat, "pParams[ iParam ].m_Type == ParamType_String") )
    __debugbreak();
  return (unsigned int)pParams[v3].u.m_Int;
}

/*
==============
ASM_Builtin_GetBoolParam
==============
*/
_BOOL8 ASM_Builtin_GetBoolParam(int iParam, ASM_Function_Param *pParams, int numParams)
{
  __int64 v3; 
  __int64 v7; 

  v3 = iParam;
  if ( !pParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 379, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
    __debugbreak();
  if ( (unsigned int)v3 >= numParams )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 380, ASSERT_TYPE_ASSERT, "(unsigned)( iParam ) < (unsigned)( numParams )", "iParam doesn't index numParams\n\t%i not in [0, %i)", v7, numParams) )
      __debugbreak();
  }
  if ( pParams[v3].m_Type != ParamType_Bool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.h", 381, ASSERT_TYPE_ASSERT, "(pParams[ iParam ].m_Type == ParamType_Bool)", (const char *)&queryFormat, "pParams[ iParam ].m_Type == ParamType_Bool") )
    __debugbreak();
  return pParams[v3].u.m_Bool;
}

/*
==============
AI_ASM_Tick
==============
*/
_BOOL8 AI_ASM_Tick(int entNum, bool bCheckTransitionsOnly)
{
  Ai_Asm *v4; 
  bool v5; 

  SV_Profile_BeginEvent(SVPROF_AI_ASM_TICK);
  v4 = Ai_Asm::Singleton();
  v5 = Common_Asm::Tick(v4, NULL, entNum, bCheckTransitionsOnly, 0);
  SV_Profile_EndEvent(SVPROF_AI_ASM_TICK);
  return v5;
}

