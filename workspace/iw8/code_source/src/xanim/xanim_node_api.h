/*
==============
XAnimNode_GetFloatFieldArray
==============
*/

const XAnimFieldArray<float> *__fastcall XAnimNode_GetFloatFieldArray(scr_string_t hash)
{
  return ?XAnimNode_GetFloatFieldArray@@YAPEBU?$XAnimFieldArray@M@@W4scr_string_t@@@Z(hash);
}

/*
==============
XAnimRegisterGameStructType<centity_t>
==============
*/

__int64 XAnimRegisterGameStructType<centity_t>()
{
  return ??$XAnimRegisterGameStructType@Ucentity_t@@@@YAXXZ();
}

/*
==============
XAnimNode_GetUIntFieldArray
==============
*/

const XAnimFieldArray<unsigned int> *__fastcall XAnimNode_GetUIntFieldArray(scr_string_t hash)
{
  return ?XAnimNode_GetUIntFieldArray@@YAPEBU?$XAnimFieldArray@I@@W4scr_string_t@@@Z(hash);
}

/*
==============
XAnimSetStructGameParameterByIndex<centity_t>
==============
*/

void __fastcall XAnimSetStructGameParameterByIndex<centity_t>(DObj *obj, unsigned __int16 parameterIndex, const centity_t *structurePointer)
{
  ??$XAnimSetStructGameParameterByIndex@Ucentity_t@@@@YAXPEAUDObj@@GPEBUcentity_t@@@Z(obj, parameterIndex, structurePointer);
}

/*
==============
XAnimNode_GetFloatFieldArray
==============
*/
const XAnimFieldArray<float> *XAnimNode_GetFloatFieldArray(scr_string_t hash)
{
  if ( !hash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
    __debugbreak();
  return (const XAnimFieldArray<float> *)SL_ConvertToString(hash);
}

/*
==============
XAnimNode_GetUIntFieldArray
==============
*/
const XAnimFieldArray<unsigned int> *XAnimNode_GetUIntFieldArray(scr_string_t hash)
{
  if ( !hash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
    __debugbreak();
  return (const XAnimFieldArray<unsigned int> *)SL_ConvertToString(hash);
}

/*
==============
XAnimRegisterGameStructType<centity_t>
==============
*/
unsigned __int8 XAnimRegisterGameStructType<centity_t>()
{
  return XAnimRegisterStructTypeInternal(XAnimGameStructTypeDeclaration<centity_t>::ms_typeInfo);
}

/*
==============
XAnimSetStructGameParameterByIndex<centity_t>
==============
*/
void XAnimSetStructGameParameterByIndex<centity_t>(DObj *obj, unsigned __int16 parameterIndex, const centity_t *structurePointer)
{
  XAnimSetStructGameParameterByIndex(obj, parameterIndex, XAnimGameStructTypeDeclaration<centity_t>::ms_typeInfo->typeID, structurePointer);
}

