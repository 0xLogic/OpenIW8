/*
==============
XAnimBlendSpace_GetTriangleCoordFieldArray
==============
*/

const XAnimFieldArray<unsigned int> *__fastcall XAnimBlendSpace_GetTriangleCoordFieldArray(scr_string_t hash)
{
  return ?XAnimBlendSpace_GetTriangleCoordFieldArray@@YAPEBU?$XAnimFieldArray@I@@W4scr_string_t@@@Z(hash);
}

/*
==============
XAnimBlendSpace2D_GetXCoord
==============
*/

double __fastcall XAnimBlendSpace2D_GetXCoord(const XAnimFieldArray<float> *coords, unsigned int index)
{
  double result; 

  *(float *)&result = ?XAnimBlendSpace2D_GetXCoord@@YAMPEBU?$XAnimFieldArray@M@@I@Z(coords, index);
  return result;
}

/*
==============
XAnimBlendSpace2D_GetYCoord
==============
*/

double __fastcall XAnimBlendSpace2D_GetYCoord(const XAnimFieldArray<float> *coords, unsigned int index)
{
  double result; 

  *(float *)&result = ?XAnimBlendSpace2D_GetYCoord@@YAMPEBU?$XAnimFieldArray@M@@I@Z(coords, index);
  return result;
}

/*
==============
XAnimBlendSpace2D_GetTriangleCoordIndexes
==============
*/

const unsigned int *__fastcall XAnimBlendSpace2D_GetTriangleCoordIndexes(const XAnimFieldArray<unsigned int> *triangleCoord, unsigned int index)
{
  return ?XAnimBlendSpace2D_GetTriangleCoordIndexes@@YAPEBIPEBU?$XAnimFieldArray@I@@I@Z(triangleCoord, index);
}

/*
==============
XAnimBlendSpace_ValidateChildAnims
==============
*/

bool __fastcall XAnimBlendSpace_ValidateChildAnims(const XAnim_s *anims, const unsigned int animIndex, const XAnimFieldArray<unsigned int> *childAnims)
{
  return ?XAnimBlendSpace_ValidateChildAnims@@YA_NPEBUXAnim_s@@IPEBU?$XAnimFieldArray@I@@@Z(anims, animIndex, childAnims);
}

/*
==============
XAnimBlendSpace_ValidateChildAnims
==============
*/
char XAnimBlendSpace_ValidateChildAnims(const XAnim_s *anims, const unsigned int animIndex, const XAnimFieldArray<unsigned int> *childAnims)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int16 *p_parent; 
  const char *AnimDebugName; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 

  v3 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 153, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !childAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 154, ASSERT_TYPE_ASSERT, "(childAnims)", (const char *)&queryFormat, "childAnims") )
    __debugbreak();
  v6 = 0i64;
  if ( !childAnims->size )
    return 1;
  while ( 1 )
  {
    v7 = childAnims->values[v6];
    if ( (unsigned int)v7 >= anims->size )
    {
      LODWORD(v13) = anims->size;
      LODWORD(v12) = childAnims->values[v6];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 160, ASSERT_TYPE_ASSERT, "(unsigned)( childAnimIndex ) < (unsigned)( anims->size )", "childAnimIndex doesn't index anims->size\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    p_parent = &anims->entries[v7].parent;
    if ( !*p_parent )
      break;
    while ( 1 )
    {
      if ( (unsigned int)v3 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v3, "unsigned", v3) )
        __debugbreak();
      if ( *p_parent == (_WORD)v3 )
        break;
      p_parent = &anims->entries[*p_parent].parent;
      if ( !*p_parent )
        goto LABEL_20;
    }
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= childAnims->size )
      return 1;
  }
LABEL_20:
  AnimDebugName = XAnimGetAnimDebugName(anims, v3);
  v11 = XAnimGetAnimDebugName(anims, v7);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 179, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Child animation '%s' is not part of the blendspace '%s' node's subtree.", v11, AnimDebugName) )
    __debugbreak();
  return 0;
}

/*
==============
XAnimBlendSpace2D_GetTriangleCoordIndexes
==============
*/
unsigned int *XAnimBlendSpace2D_GetTriangleCoordIndexes(const XAnimFieldArray<unsigned int> *triangleCoord, unsigned int index)
{
  __int64 v2; 
  unsigned int v5; 
  unsigned int size; 

  v2 = 3 * index;
  if ( (unsigned int)v2 >= triangleCoord->size )
  {
    size = triangleCoord->size;
    v5 = 3 * index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 141, ASSERT_TYPE_ASSERT, "(unsigned)( index * 3 ) < (unsigned)( triangleCoord->size )", "index * 3 doesn't index triangleCoord->size\n\t%i not in [0, %i)", v5, size) )
      __debugbreak();
  }
  return &triangleCoord->values[v2];
}

/*
==============
XAnimBlendSpace2D_GetXCoord
==============
*/
float XAnimBlendSpace2D_GetXCoord(const XAnimFieldArray<float> *coords, unsigned int index)
{
  __int64 v2; 
  unsigned int v5; 
  unsigned int size; 

  v2 = 2 * index;
  if ( (unsigned int)v2 < coords->size )
    return coords->values[v2];
  size = coords->size;
  v5 = 2 * index;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v5, size) )
    __debugbreak();
  return coords->values[v2];
}

/*
==============
XAnimBlendSpace2D_GetYCoord
==============
*/
float XAnimBlendSpace2D_GetYCoord(const XAnimFieldArray<float> *coords, unsigned int index)
{
  unsigned int v2; 
  unsigned int v5; 
  unsigned int size; 

  v2 = 2 * index;
  if ( 2 * index >= coords->size )
  {
    size = coords->size;
    v5 = 2 * index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v5, size) )
      __debugbreak();
  }
  return coords->values[v2 + 1];
}

/*
==============
XAnimBlendSpace_GetTriangleCoordFieldArray
==============
*/
const XAnimFieldArray<unsigned int> *XAnimBlendSpace_GetTriangleCoordFieldArray(scr_string_t hash)
{
  if ( !hash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
    __debugbreak();
  return (const XAnimFieldArray<unsigned int> *)SL_ConvertToString(hash);
}

