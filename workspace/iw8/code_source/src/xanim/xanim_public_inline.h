/*
==============
DObjGetBoneAndModelIndex
==============
*/

int __fastcall DObjGetBoneAndModelIndex(const DObj *obj, scr_string_t name, DObjBoneInfo *boneInfo)
{
  return ?DObjGetBoneAndModelIndex@@YAHPEBUDObj@@W4scr_string_t@@PEAUDObjBoneInfo@@@Z(obj, name, boneInfo);
}

/*
==============
DObjGetBoneIndexInternal
==============
*/
__int64 DObjGetBoneIndexInternal(const DObj *obj, scr_string_t name, unsigned __int8 *inOutIndex, int *modelIndex)
{
  unsigned __int8 *v5; 
  const char *v8; 
  __int64 v9; 
  __int64 result; 
  const XModel **models; 
  __int64 numModels; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  const XModel *v16; 
  int v17; 
  __int64 v18; 
  const XModel *v19; 

  v5 = inOutIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 19, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 20, ASSERT_TYPE_ASSERT, "(inOutIndex)", (const char *)&queryFormat, "inOutIndex") )
    __debugbreak();
  if ( !modelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 21, ASSERT_TYPE_ASSERT, "(modelIndex)", (const char *)&queryFormat, "modelIndex") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 22, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(name) )
  {
    DObjDumpInfo(obj);
    v8 = SL_ConvertToString(name);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C7CA80, 655i64, v8);
  }
  v9 = *v5;
  if ( (_DWORD)v9 == 255 )
    return 0i64;
  models = obj->models;
  if ( !models )
    goto LABEL_34;
  numModels = obj->numModels;
  v13 = 0;
  if ( (unsigned int)v9 < obj->numBones )
  {
    v14 = 0;
    if ( obj->numModels )
    {
      v15 = 0i64;
      while ( 1 )
      {
        v16 = models[v15];
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( (unsigned int)v9 < v16->numBones )
          break;
        v9 = (unsigned int)(v9 - XModelNumBones(v16));
        ++v14;
        if ( ++v15 >= numModels )
          goto LABEL_26;
      }
      if ( name == v16->boneNames[v9] )
      {
        result = 1i64;
        *modelIndex = v14;
        return result;
      }
    }
LABEL_26:
    v5 = inOutIndex;
  }
  v17 = 0;
  if ( numModels )
  {
    v18 = 0i64;
    while ( 1 )
    {
      v19 = models[v18];
      if ( XModelGetBoneIndex(v19, name, v13, v5) )
        break;
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      ++v17;
      v13 += v19->numBones;
      if ( ++v18 >= numModels )
        goto LABEL_34;
    }
    result = 1i64;
    *modelIndex = v17;
  }
  else
  {
LABEL_34:
    *v5 = -1;
    return 0i64;
  }
  return result;
}

/*
==============
DObjGetBoneAndModelIndex
==============
*/
int DObjGetBoneAndModelIndex(const DObj *obj, scr_string_t name, DObjBoneInfo *boneInfo)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 89, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 90, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !boneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public_inline.h", 91, ASSERT_TYPE_ASSERT, "(boneInfo)", (const char *)&queryFormat, "boneInfo") )
    __debugbreak();
  boneInfo->boneIndex = -2;
  boneInfo->modelIndex = 0;
  return DObjGetBoneIndexInternal_0(obj, name, &boneInfo->boneIndex, (int *)boneInfo);
}

