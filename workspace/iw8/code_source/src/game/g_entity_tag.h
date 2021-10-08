/*
==============
G_GetTagInfoLinkedRotation
==============
*/

TagInfoLinkedRotation *__fastcall G_GetTagInfoLinkedRotation(const gentity_s *ent)
{
  return ?G_GetTagInfoLinkedRotation@@YAPEAUTagInfoLinkedRotation@@PEBUgentity_s@@@Z(ent);
}

/*
==============
G_GetTagInfoAnimScripted
==============
*/

TagInfoAnimScripted *__fastcall G_GetTagInfoAnimScripted(const gentity_s *ent)
{
  return ?G_GetTagInfoAnimScripted@@YAPEAUTagInfoAnimScripted@@PEBUgentity_s@@@Z(ent);
}

/*
==============
G_GetTagInfoLinkedRotation
==============
*/
TagInfoUnion *G_GetTagInfoLinkedRotation(const gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 58, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 59, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  if ( ent->tagInfo->animScriptedDataInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 60, ASSERT_TYPE_ASSERT, "(!ent->tagInfo->animScriptedDataInUse)", "%s\n\tLinked rotation data is not valid on linked entities that are animscripted.  They share the same memory space.\n", "!ent->tagInfo->animScriptedDataInUse") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 61, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ))", "%s\n\tLinked rotation data is not available in this game mode", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
    __debugbreak();
  return &ent->tagInfo->extraDataUnion;
}

/*
==============
G_GetTagInfoAnimScripted
==============
*/
TagInfoUnion *G_GetTagInfoAnimScripted(const gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 47, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 48, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  if ( !ent->tagInfo->animScriptedDataInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 49, ASSERT_TYPE_ASSERT, "(ent->tagInfo->animScriptedDataInUse)", "%s\n\tAttemping to use animScripted data of a linked entity that is not animscripted.\n", "ent->tagInfo->animScriptedDataInUse") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 50, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ))", "%s\n\tScripted animation data is not available in this game mode", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  return &ent->tagInfo->extraDataUnion;
}

