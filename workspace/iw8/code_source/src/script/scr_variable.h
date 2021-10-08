/*
==============
Scr_SetStringValue
==============
*/

void __fastcall Scr_SetStringValue(VariableValue *variable, unsigned int stringValue)
{
  ?Scr_SetStringValue@@YAXPEAUVariableValue@@I@Z(variable, stringValue);
}

/*
==============
MakeVariableValueUnion_Out
==============
*/

void __fastcall MakeVariableValueUnion_Out(VariableType type, VariableUnion u, VariableValue *out)
{
  ?MakeVariableValueUnion_Out@@YAXW4VariableType@@TVariableUnion@@PEAUVariableValue@@@Z(type, u, out);
}

/*
==============
MakeVariableValue_Out
==============
*/

void __fastcall MakeVariableValue_Out(VariableType type, unsigned int val, VariableValue *out)
{
  ?MakeVariableValue_Out@@YAXW4VariableType@@IPEAUVariableValue@@@Z(type, val, out);
}

/*
==============
Scr_SetStringValue
==============
*/
void Scr_SetStringValue(VariableValue *variable, unsigned int stringValue)
{
  if ( !variable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 65, ASSERT_TYPE_ASSERT, "( variable )", (const char *)&queryFormat, "variable") )
    __debugbreak();
  if ( (unsigned __int8)(variable->type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 66, ASSERT_TYPE_ASSERT, "( variable->type == VAR_STRING || variable->type == VAR_ISTRING )", (const char *)&queryFormat, "variable->type == VAR_STRING || variable->type == VAR_ISTRING") )
    __debugbreak();
  if ( !stringValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 67, ASSERT_TYPE_ASSERT, "( stringValue != 0 )", (const char *)&queryFormat, "stringValue != 0") )
    __debugbreak();
  variable->u.intValue = stringValue;
}

/*
==============
MakeVariableValueUnion_Out
==============
*/
void MakeVariableValueUnion_Out(VariableType type, VariableUnion u, VariableValue *out)
{
  if ( out )
  {
    out->u = u;
    out->type = type;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 20, ASSERT_TYPE_ASSERT, "( out )", (const char *)&queryFormat, "out") )
      __debugbreak();
    MEMORY[0] = u.scriptCodePosValue;
    MEMORY[8] = type;
  }
}

/*
==============
MakeVariableValue_Out
==============
*/
void MakeVariableValue_Out(VariableType type, unsigned int val, VariableValue *out)
{
  if ( out )
  {
    out->type = type;
    out->u.intValue = val;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 11, ASSERT_TYPE_ASSERT, "( out )", (const char *)&queryFormat, "out") )
      __debugbreak();
    MEMORY[0] = val;
    MEMORY[8] = type;
  }
}

