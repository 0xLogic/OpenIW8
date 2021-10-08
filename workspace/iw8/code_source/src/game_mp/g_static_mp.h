/*
==============
GStaticMP::GetGameStaticsMP
==============
*/

GStaticMP *__fastcall GStaticMP::GetGameStaticsMP()
{
  return ?GetGameStaticsMP@GStaticMP@@SAPEAV1@XZ();
}

/*
==============
GStaticMP::BuildReferenceCharacterModels
==============
*/

int __fastcall GStaticMP::BuildReferenceCharacterModels(GStaticMP *this, const int entNum, const int attachIgnoreCollision, DObjModel (*outDobjModels)[32], CharacterModelType (*outModelTypes)[32])
{
  return ?BuildReferenceCharacterModels@GStaticMP@@UEBAHHHAEAY0CA@UDObjModel@@AEAY0CA@W4CharacterModelType@@@Z(this, entNum, attachIgnoreCollision, outDobjModels, outModelTypes);
}

/*
==============
GStaticMP::BuildReferenceCorpseModels
==============
*/

int __fastcall GStaticMP::BuildReferenceCorpseModels(GStaticMP *this, const int entNum, const int attachIgnoreCollision, DObjModel (*outDobjModels)[32], CharacterModelType (*outModelTypes)[32])
{
  return ?BuildReferenceCorpseModels@GStaticMP@@UEBAHHHAEAY0CA@UDObjModel@@AEAY0CA@W4CharacterModelType@@@Z(this, entNum, attachIgnoreCollision, outDobjModels, outModelTypes);
}

/*
==============
GStaticMP::BuildReferenceCharacterModels
==============
*/
__int64 GStaticMP::BuildReferenceCharacterModels(GStaticMP *this, const int entNum, const int attachIgnoreCollision, DObjModel (*outDobjModels)[32])
{
  return 0i64;
}

/*
==============
GStaticMP::BuildReferenceCorpseModels
==============
*/
__int64 GStaticMP::BuildReferenceCorpseModels(GStaticMP *this, const int entNum, const int attachIgnoreCollision, DObjModel (*outDobjModels)[32])
{
  return 0i64;
}

/*
==============
GStaticMP::GetGameStaticsMP
==============
*/
GStaticMP *GStaticMP::GetGameStaticsMP()
{
  GStaticMP *result; 

  result = *(GStaticMP **)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    return *(GStaticMP **)&GStatic::ms_gameStatics;
  }
  return result;
}

