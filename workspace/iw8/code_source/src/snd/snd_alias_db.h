/*
==============
Com_IsSoundAliasLooping
==============
*/

bool __fastcall Com_IsSoundAliasLooping(const SndAliasList *aliasList)
{
  return ?Com_IsSoundAliasLooping@@YA_NPEBUSndAliasList@@@Z(aliasList);
}

/*
==============
Com_IsSoundAliasLooping
==============
*/
bool Com_IsSoundAliasLooping(const SndAliasList *aliasList)
{
  if ( !aliasList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 339, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
    __debugbreak();
  if ( !aliasList->head && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 340, ASSERT_TYPE_ASSERT, "(aliasList->head)", (const char *)&queryFormat, "aliasList->head") )
    __debugbreak();
  return aliasList->head->flags & 1;
}

