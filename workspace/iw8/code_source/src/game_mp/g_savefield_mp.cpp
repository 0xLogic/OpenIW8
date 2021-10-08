/*
==============
G_SaveFieldMP_WriteStruct
==============
*/

void __fastcall G_SaveFieldMP_WriteStruct(const saveField_t *fields, const unsigned __int8 *original, unsigned __int8 *dest, int destSize, MemoryFile *memFile)
{
  ?G_SaveFieldMP_WriteStruct@@YAXPEBUsaveField_t@@PEBEPEAEHPEAUMemoryFile@@@Z(fields, original, dest, destSize, memFile);
}

/*
==============
G_SaveFieldMP_ReadStruct
==============
*/

void __fastcall G_SaveFieldMP_ReadStruct(const saveField_t *fields, unsigned __int8 *dest, int tempsize, SaveGame *save)
{
  ?G_SaveFieldMP_ReadStruct@@YAXPEBUsaveField_t@@PEAEHPEAUSaveGame@@@Z(fields, dest, tempsize, save);
}

/*
==============
G_SaveFieldMP_ReadField
==============
*/
char *G_SaveFieldMP_ReadField(const saveField_t *field, unsigned __int8 *base, SaveGame *save)
{
  __int64 ofs; 
  char *result; 
  __int64 v8; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_savefield_mp.cpp", 51, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  ofs = field->ofs;
  if ( field->type != 17 )
    return (char *)G_SaveField_ReadFieldCommon(field, base, save, G_SaveFieldMP_ReadStruct);
  v8 = *(unsigned int *)&base[ofs];
  if ( (int)v8 > level.maxagents || (int)v8 < 0 )
    return j_va("agent out of range (%i)", v8);
  if ( (_DWORD)v8 )
  {
    *(_QWORD *)&base[ofs] = &level.agents[(int)v8 - 1];
    return 0i64;
  }
  else
  {
    result = NULL;
    *(_QWORD *)&base[ofs] = 0i64;
  }
  return result;
}

/*
==============
G_SaveFieldMP_ReadStruct
==============
*/
void G_SaveFieldMP_ReadStruct(const saveField_t *fields, unsigned __int8 *dest, int tempsize, SaveGame *save)
{
  const saveField_t *v7; 
  char *Field; 
  unsigned int i; 

  v7 = fields;
  if ( !fields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_savefield_mp.cpp", 122, ASSERT_TYPE_ASSERT, "( fields )", (const char *)&queryFormat, "fields") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_savefield_mp.cpp", 123, ASSERT_TYPE_ASSERT, "( dest )", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_savefield_mp.cpp", 124, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  SaveMemory_LoadRead(dest, tempsize, save);
  for ( ; v7->type; ++v7 )
  {
    Field = G_SaveFieldMP_ReadField(v7, dest, save);
    if ( Field )
    {
      CrashReport_TriggerNow();
      for ( i = v7->type; i; ++v7 )
      {
        if ( i == 17 )
          *(_DWORD *)&dest[v7->ofs] = 0;
        else
          G_SaveField_ClearFieldCommon(v7, dest);
        i = v7[1].type;
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E4ABB8, 756i64, Field);
    }
  }
}

/*
==============
G_SaveFieldMP_WriteStruct
==============
*/
void G_SaveFieldMP_WriteStruct(const saveField_t *fields, const unsigned __int8 *original, unsigned __int8 *dest, int destSize, MemoryFile *memFile)
{
  const saveField_t *v6; 
  int v8; 
  MemoryFile *v9; 
  unsigned int type; 
  const saveField_t *v11; 
  __int64 ofs; 
  __int64 v13; 
  signed __int64 v14; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v16; 

  v6 = fields;
  v8 = destSize;
  if ( !fields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_savefield_mp.cpp", 98, ASSERT_TYPE_ASSERT, "( fields )", (const char *)&queryFormat, "fields") )
    __debugbreak();
  if ( !original && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_savefield_mp.cpp", 99, ASSERT_TYPE_ASSERT, "( original )", (const char *)&queryFormat, "original") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_savefield_mp.cpp", 100, ASSERT_TYPE_ASSERT, "( dest )", (const char *)&queryFormat, "dest") )
    __debugbreak();
  v9 = memFile;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_savefield_mp.cpp", 101, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  type = v6->type;
  v11 = v6;
  if ( type )
  {
    do
    {
      ofs = v11->ofs;
      if ( type == 17 )
      {
        v13 = *(_QWORD *)&dest[ofs];
        if ( v13 )
          v14 = (signed __int64)(v13 - (unsigned __int64)level.agents) / 55952 + 1;
        else
          v14 = 0i64;
        if ( v14 > level.maxagents || v14 < 0 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E4AAF0, 755i64, v14);
        if ( (unsigned __int64)(v14 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v14, "signed", v14) )
          __debugbreak();
        *(_DWORD *)&dest[ofs] = v14;
      }
      else
      {
        G_SaveField_WriteFixupFieldCommon(v11, dest, original);
      }
      type = v11[1].type;
      ++v11;
    }
    while ( type );
    v6 = fields;
    v9 = memFile;
    v8 = destSize;
  }
  UsedSize = MemFile_GetUsedSize(v9);
  ProfMem_Begin("writestruct struct", UsedSize);
  MemFile_WriteData(v9, v8, dest);
  v16 = MemFile_GetUsedSize(v9);
  ProfMem_End(v16);
  for ( ; v6->type; ++v6 )
    G_SaveField_WriteFieldCommon(v6, original, v9, G_SaveFieldMP_WriteStruct);
}

