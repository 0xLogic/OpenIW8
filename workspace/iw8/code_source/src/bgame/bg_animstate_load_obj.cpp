/*
==============
BG_AnimationState_Get5PointAimsetNode
==============
*/

const char *__fastcall BG_AnimationState_Get5PointAimsetNode(unsigned int index)
{
  return ?BG_AnimationState_Get5PointAimsetNode@@YAPEBDI@Z(index);
}

/*
==============
BG_AnimationState_Get9PointAimsetNode
==============
*/

const char *__fastcall BG_AnimationState_Get9PointAimsetNode(unsigned int index)
{
  return ?BG_AnimationState_Get9PointAimsetNode@@YAPEBDI@Z(index);
}

/*
==============
BG_AnimationState_Get5PointAimsetNode
==============
*/
const char *BG_AnimationState_Get5PointAimsetNode(unsigned int index)
{
  __int64 v1; 

  v1 = index;
  if ( index >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate_load_obj.cpp", 39, ASSERT_TYPE_ASSERT, "(index < 5)", (const char *)&queryFormat, "index < AIMSET_ENTRY_COUNT_5POINT") )
    __debugbreak();
  return aimsetNodeNames_5point[v1];
}

/*
==============
BG_AnimationState_Get9PointAimsetNode
==============
*/
const char *BG_AnimationState_Get9PointAimsetNode(unsigned int index)
{
  __int64 v1; 

  v1 = index;
  if ( index >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate_load_obj.cpp", 45, ASSERT_TYPE_ASSERT, "(index < 8)", (const char *)&queryFormat, "index < AIMSET_ENTRY_COUNT_9POINT") )
    __debugbreak();
  return aimsetNodeNames_9point[v1];
}

