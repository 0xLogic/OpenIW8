/*
==============
Omnvar_GetFloat
==============
*/

double __fastcall Omnvar_GetFloat(const OmnvarDef *def, const OmnvarData *data)
{
  double result; 

  *(float *)&result = ?Omnvar_GetFloat@@YAMPEBUOmnvarDef@@PEBUOmnvarData@@@Z(def, data);
  return result;
}

/*
==============
Omnvar_GetInteger
==============
*/

int __fastcall Omnvar_GetInteger(const OmnvarDef *def, const OmnvarData *data)
{
  return ?Omnvar_GetInteger@@YAHPEBUOmnvarDef@@PEBUOmnvarData@@@Z(def, data);
}

/*
==============
Omnvar_GetBool
==============
*/

bool __fastcall Omnvar_GetBool(const OmnvarDef *def, const OmnvarData *data)
{
  return ?Omnvar_GetBool@@YA_NPEBUOmnvarDef@@PEBUOmnvarData@@@Z(def, data);
}

/*
==============
Omnvar_GetInteger
==============
*/
__int64 Omnvar_GetInteger(const OmnvarDef *def, const OmnvarData *data)
{
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
    __debugbreak();
  return (unsigned int)(data->current.integer + def->minvalue);
}

/*
==============
Omnvar_GetFloat
==============
*/
float Omnvar_GetFloat(const OmnvarDef *def, const OmnvarData *data)
{
  _RDI = data;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 215, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 216, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( def->type == OMNVAR_TYPE_FLOAT )
    goto LABEL_11;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 217, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_FLOAT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_FLOAT") )
    __debugbreak();
  if ( def->type == OMNVAR_TYPE_FLOAT )
LABEL_11:
    __asm { vmovss  xmm0, dword ptr [rdi+4] }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
Omnvar_GetBool
==============
*/
bool Omnvar_GetBool(const OmnvarDef *def, const OmnvarData *data)
{
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( def->type == OMNVAR_TYPE_BOOL )
    return data->current.enabled;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
    __debugbreak();
  return def->type == OMNVAR_TYPE_BOOL && data->current.enabled;
}

