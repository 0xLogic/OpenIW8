/*
==============
DObjGetBoneAndModelIndexClient
==============
*/

int __fastcall DObjGetBoneAndModelIndexClient(const DObj *obj, scr_string_t name, unsigned __int16 *outBoneIndex, int *outModelIndex)
{
  return ?DObjGetBoneAndModelIndexClient@@YAHPEBUDObj@@W4scr_string_t@@PEAGPEAH@Z(obj, name, outBoneIndex, outModelIndex);
}

/*
==============
DObjGetBoneAndModelIndexClient
==============
*/
__int64 DObjGetBoneAndModelIndexClient(const DObj *obj, scr_string_t name, unsigned __int16 *outBoneIndex, int *outModelIndex)
{
  unsigned int v8; 
  int NumModels; 
  unsigned int v10; 
  int v11; 
  const XModel *Model; 
  const XModel *v13; 
  unsigned __int8 index; 
  scr_string_t namea; 
  bool HasClientFlag; 

  namea = name;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client_inline.h", 11, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client_inline.h", 12, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !outBoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client_inline.h", 13, ASSERT_TYPE_ASSERT, "(outBoneIndex)", (const char *)&queryFormat, "outBoneIndex") )
    __debugbreak();
  if ( !outModelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client_inline.h", 14, ASSERT_TYPE_ASSERT, "(outModelIndex)", (const char *)&queryFormat, "outModelIndex") )
    __debugbreak();
  *outBoneIndex = 255;
  v8 = 0;
  *outModelIndex = 0;
  NumModels = DObjGetNumModels(obj);
  if ( !NumModels )
    return 0i64;
  HasClientFlag = DObjHasClientFlag(obj);
  v10 = DObjNumBones(obj);
  v11 = 0;
  if ( NumModels <= 0 )
    return 0i64;
  while ( 1 )
  {
    Model = DObjGetModel(obj, v11);
    index = -2;
    v13 = Model;
    if ( XModelGetBoneIndex(Model, namea, v8, &index) )
      break;
    if ( HasClientFlag && XModelGetClientBoneIndex(v13, namea, v10, outBoneIndex) )
      goto LABEL_25;
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    ++v11;
    v8 += v13->numBones;
    v10 += v13->numClientBones;
    if ( v11 >= NumModels )
      return 0i64;
  }
  *outBoneIndex = index;
LABEL_25:
  *outModelIndex = v11;
  return 1i64;
}

