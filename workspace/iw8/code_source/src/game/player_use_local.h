/*
==============
UsableEntity_IsLookAtNeeded
==============
*/

bool __fastcall UsableEntity_IsLookAtNeeded(const gentity_s *const ent)
{
  return ?UsableEntity_IsLookAtNeeded@@YA_NQEBUgentity_s@@@Z(ent);
}

/*
==============
UsableEntity_IsLookAtNeeded
==============
*/
bool UsableEntity_IsLookAtNeeded(const gentity_s *const ent)
{
  scr_string_t classname; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.h", 166, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  classname = ent->classname;
  return (classname == scr_const.trigger_use_touch || classname == scr_const.trigger_use) && ent->c.trigger.requireLookAt;
}

