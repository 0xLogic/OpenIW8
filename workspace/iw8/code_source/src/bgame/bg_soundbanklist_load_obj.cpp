/*
==============
SoundBankList_Register
==============
*/

SoundBankListDef *__fastcall SoundBankList_Register(const char *name)
{
  return ?SoundBankList_Register@@YAPEAUSoundBankListDef@@PEBD@Z(name);
}

/*
==============
SoundBankList_Register
==============
*/
SoundBankListDef *SoundBankList_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_soundbanklist_load_obj.cpp", 242, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_soundbanklist_load_obj.cpp", 229, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_SOUNDBANKLIST, name, 0).soundBankListDef;
}

