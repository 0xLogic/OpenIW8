/*
==============
G_Omnvar_SetUnsignedInteger
==============
*/

void __fastcall G_Omnvar_SetUnsignedInteger(const OmnvarDef *def, OmnvarData *data, unsigned int value)
{
  ?G_Omnvar_SetUnsignedInteger@@YAXPEBUOmnvarDef@@PEAUOmnvarData@@I@Z(def, data, value);
}

/*
==============
G_Omnvar_SetBool
==============
*/

void __fastcall G_Omnvar_SetBool(const OmnvarDef *def, OmnvarData *data, bool value)
{
  ?G_Omnvar_SetBool@@YAXPEBUOmnvarDef@@PEAUOmnvarData@@_N@Z(def, data, value);
}

/*
==============
G_Omnvar_SetUnsignedInteger
==============
*/
void G_Omnvar_SetUnsignedInteger(const OmnvarDef *def, OmnvarData *data, unsigned int value)
{
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 29, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 30, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( def->type != OMNVAR_TYPE_UINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 31, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_UINT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_UINT") )
    __debugbreak();
  data->current.integer = value;
}

/*
==============
G_Omnvar_SetBool
==============
*/
void G_Omnvar_SetBool(const OmnvarDef *def, OmnvarData *data, bool value)
{
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 47, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 48, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( def->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 49, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
    __debugbreak();
  data->current.enabled = value;
}

