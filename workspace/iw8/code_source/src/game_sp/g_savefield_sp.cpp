/*
==============
G_SaveFieldSP_WriteStruct
==============
*/

void __fastcall G_SaveFieldSP_WriteStruct(const saveField_t *fields, const unsigned __int8 *original, unsigned __int8 *dest, int destSize, MemoryFile *memFile)
{
  ?G_SaveFieldSP_WriteStruct@@YAXPEBUsaveField_t@@PEBEPEAEHPEAUMemoryFile@@@Z(fields, original, dest, destSize, memFile);
}

/*
==============
G_SaveFieldSP_ReadStruct
==============
*/

void __fastcall G_SaveFieldSP_ReadStruct(const saveField_t *fields, unsigned __int8 *dest, int tempsize, SaveGame *save)
{
  ?G_SaveFieldSP_ReadStruct@@YAXPEBUsaveField_t@@PEAEHPEAUSaveGame@@@Z(fields, dest, tempsize, save);
}

/*
==============
G_SaveFieldSP_WriteFixupField
==============
*/

void __fastcall G_SaveFieldSP_WriteFixupField(const saveField_t *field, unsigned __int8 *base, const unsigned __int8 *original)
{
  ?G_SaveFieldSP_WriteFixupField@@YAXPEBUsaveField_t@@PEAEPEBE@Z(field, base, original);
}

/*
==============
G_SaveFieldSP_WriteField
==============
*/

void __fastcall G_SaveFieldSP_WriteField(const saveField_t *field, const unsigned __int8 *base, MemoryFile *memFile)
{
  ?G_SaveFieldSP_WriteField@@YAXPEBUsaveField_t@@PEBEPEAUMemoryFile@@@Z(field, base, memFile);
}

/*
==============
G_SaveFieldSP_ClearField
==============
*/

void __fastcall G_SaveFieldSP_ClearField(const saveField_t *field, unsigned __int8 *base)
{
  ?G_SaveFieldSP_ClearField@@YAXPEBUsaveField_t@@PEAE@Z(field, base);
}

/*
==============
G_SaveFieldSP_ReadField
==============
*/

const char *__fastcall G_SaveFieldSP_ReadField(const saveField_t *field, unsigned __int8 *base, SaveGame *save)
{
  return ?G_SaveFieldSP_ReadField@@YAPEBDPEBUsaveField_t@@PEAEPEAUSaveGame@@@Z(field, base, save);
}

/*
==============
G_SaveFieldSP_ClearField
==============
*/
void G_SaveFieldSP_ClearField(const saveField_t *field, unsigned __int8 *base)
{
  __int64 ofs; 

  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savefield_sp.cpp", 176, ASSERT_TYPE_ASSERT, "( field )", (const char *)&queryFormat, "field") )
    __debugbreak();
  ofs = field->ofs;
  switch ( field->type )
  {
    case 0xDu:
    case 0x11u:
    case 0x12u:
    case 0x14u:
      *(_DWORD *)&base[ofs] = 0;
      break;
    case 0x13u:
      *(_WORD *)&base[ofs] = 0;
      break;
    case 0x15u:
      *(_DWORD *)&base[ofs] = 127;
      break;
    default:
      G_SaveField_ClearFieldCommon(field, base);
      break;
  }
}

/*
==============
G_SaveFieldSP_ReadField
==============
*/
char *G_SaveFieldSP_ReadField(const saveField_t *field, unsigned __int8 *base, SaveGame *save)
{
  unsigned __int8 *v6; 
  char *result; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savefield_sp.cpp", 99, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  v6 = &base[field->ofs];
  switch ( field->type )
  {
    case 0x11u:
      v12 = *(unsigned int *)v6;
      if ( (unsigned int)v12 > 0x26 )
        return j_va("actor out of range (%i)", v12);
      if ( (_DWORD)v12 )
      {
        *(_QWORD *)v6 = &level.actors[(int)v12 - 1];
        return 0i64;
      }
      goto LABEL_24;
    case 0x12u:
      v11 = *(int *)v6;
      if ( (unsigned int)(v11 + 1) > 0x455 )
        return j_va("animscript out of range (%i)", (unsigned int)v11);
      if ( (_DWORD)v11 )
      {
        if ( (_DWORD)v11 == -1 )
          *(_QWORD *)v6 = base + 2408;
        else
          *(_QWORD *)v6 = &GameScriptDataSP::GetGameScriptDataSP()->lui_callback + 3 * v11;
        return 0i64;
      }
LABEL_24:
      result = NULL;
      *(_QWORD *)v6 = 0i64;
      return result;
    case 0x13u:
      v10 = *(unsigned __int16 *)v6;
      if ( (unsigned int)v10 >= 0x800 )
      {
        LODWORD(v13) = *(unsigned __int16 *)v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savefield_sp.cpp", 137, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( level.modelMap ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( level.modelMap )\n\t%i not in [0, %i)", v13, 2048) )
          __debugbreak();
      }
      *(_WORD *)v6 = level.modelMap[v10];
      return 0i64;
    case 0x14u:
      v9 = *(int *)v6;
      if ( (unsigned int)v9 >= 0x800 )
      {
        LODWORD(v13) = *(_DWORD *)v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savefield_sp.cpp", 143, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( level.modelMap ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( level.modelMap )\n\t%i not in [0, %i)", v13, 2048) )
          __debugbreak();
      }
      *(_DWORD *)v6 = level.modelMap[v9];
      return 0i64;
    case 0x15u:
      v8 = *(_DWORD *)v6;
      if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN|0x80) && v8 >= 0x3F )
        v8 = 127;
      *(_DWORD *)v6 = v8;
      return 0i64;
    default:
      return (char *)G_SaveField_ReadFieldCommon(field, base, save, G_SaveFieldSP_ReadStruct);
  }
}

/*
==============
G_SaveFieldSP_ReadStruct
==============
*/
void G_SaveFieldSP_ReadStruct(const saveField_t *fields, unsigned __int8 *dest, int tempsize, SaveGame *save)
{
  const saveField_t *v7; 
  const char *Field; 
  unsigned int i; 
  __int64 ofs; 

  v7 = fields;
  if ( !fields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savefield_sp.cpp", 231, ASSERT_TYPE_ASSERT, "( fields )", (const char *)&queryFormat, "fields") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savefield_sp.cpp", 232, ASSERT_TYPE_ASSERT, "( dest )", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savefield_sp.cpp", 233, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  SaveMemory_LoadRead(dest, tempsize, save);
  for ( ; v7->type; ++v7 )
  {
    Field = G_SaveFieldSP_ReadField(v7, dest, save);
    if ( Field )
    {
      for ( i = v7->type; i; ++v7 )
      {
        ofs = v7->ofs;
        switch ( i )
        {
          case 0xDu:
          case 0x11u:
          case 0x12u:
          case 0x14u:
            *(_DWORD *)&dest[ofs] = 0;
            break;
          case 0x13u:
            *(_WORD *)&dest[ofs] = 0;
            break;
          case 0x15u:
            *(_DWORD *)&dest[ofs] = 127;
            break;
          default:
            G_SaveField_ClearFieldCommon(v7, dest);
            break;
        }
        i = v7[1].type;
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144357C58, 502i64, Field);
    }
  }
}

/*
==============
G_SaveFieldSP_WriteField
==============
*/
void G_SaveFieldSP_WriteField(const saveField_t *field, const unsigned __int8 *base, MemoryFile *memFile)
{
  G_SaveField_WriteFieldCommon(field, base, memFile, G_SaveFieldSP_WriteStruct);
}

/*
==============
G_SaveFieldSP_WriteFixupField
==============
*/
void G_SaveFieldSP_WriteFixupField(const saveField_t *field, unsigned __int8 *base, const unsigned __int8 *original)
{
  unsigned __int8 *v3; 
  __int64 v4; 
  __int64 v5; 
  signed __int64 v6; 

  v3 = &base[field->ofs];
  if ( field->type == 17 )
  {
    if ( *(_QWORD *)v3 )
    {
      v6 = *(_QWORD *)v3 - (unsigned __int64)level.actors;
      v4 = v6 / 3808 + 1;
      if ( (unsigned __int64)v4 > 0x26 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1443579F0, 501i64, v6 / 3808 + 1);
      goto LABEL_18;
    }
    goto LABEL_15;
  }
  if ( field->type == 18 )
  {
    if ( *(_QWORD *)v3 )
    {
      if ( *(const unsigned __int8 **)v3 == original + 2408 )
      {
        v4 = -1i64;
      }
      else
      {
        v5 = *(_QWORD *)v3 - (_QWORD)GameScriptDataSP::GetGameScriptDataSP() - 76i64;
        v4 = v5 / 12 + 1;
        if ( (v4 <= 0 || (unsigned __int64)v4 > 0x454) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savefield_sp.cpp", 63, ASSERT_TYPE_ASSERT, "( ( index > 0 && index <= ( sizeof( GScrAnimScriptListSP ) * MAX_AI_SPECIES / sizeof( GScrAnimScriptFunc ) ) ) )", "( index ) = 0x%llx", v5 / 12 + 1) )
          __debugbreak();
      }
      goto LABEL_18;
    }
LABEL_15:
    v4 = 0i64;
LABEL_18:
    *(_DWORD *)v3 = truncate_cast<int,__int64>(v4);
    return;
  }
  if ( field->type != 19 && field->type != 20 && field->type != 21 )
    G_SaveField_WriteFixupFieldCommon(field, base, original);
}

/*
==============
G_SaveFieldSP_WriteStruct
==============
*/
void G_SaveFieldSP_WriteStruct(const saveField_t *fields, const unsigned __int8 *original, unsigned __int8 *dest, int destSize, MemoryFile *memFile)
{
  MemoryFile *v5; 
  int v8; 
  const saveField_t *v9; 
  unsigned int type; 
  const saveField_t *v11; 
  unsigned __int8 *v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  signed __int64 v19; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v21; 

  v5 = memFile;
  v8 = destSize;
  v9 = fields;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savefield_sp.cpp", 210, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  type = v9->type;
  v11 = v9;
  if ( type )
  {
    while ( 1 )
    {
      v12 = &dest[v11->ofs];
      v13 = type - 17;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 != 1 )
                G_SaveField_WriteFixupFieldCommon(v11, dest, original);
            }
          }
          goto LABEL_24;
        }
        if ( *(_QWORD *)v12 )
        {
          if ( *(const unsigned __int8 **)v12 == original + 2408 )
          {
            v17 = -1i64;
          }
          else
          {
            v18 = *(_QWORD *)v12 - (_QWORD)GameScriptDataSP::GetGameScriptDataSP() - 76i64;
            v17 = v18 / 12 + 1;
            if ( (v17 <= 0 || (unsigned __int64)v17 > 0x454) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savefield_sp.cpp", 63, ASSERT_TYPE_ASSERT, "( ( index > 0 && index <= ( sizeof( GScrAnimScriptListSP ) * MAX_AI_SPECIES / sizeof( GScrAnimScriptFunc ) ) ) )", "( index ) = 0x%llx", v18 / 12 + 1) )
              __debugbreak();
          }
        }
        else
        {
          v17 = 0i64;
        }
      }
      else if ( *(_QWORD *)v12 )
      {
        v19 = *(_QWORD *)v12 - (unsigned __int64)level.actors;
        v17 = v19 / 3808 + 1;
        if ( (unsigned __int64)v17 > 0x26 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1443579F0, 501i64, v19 / 3808 + 1);
      }
      else
      {
        v17 = 0i64;
      }
      *(_DWORD *)v12 = truncate_cast<int,__int64>(v17);
LABEL_24:
      type = v11[1].type;
      ++v11;
      if ( !type )
      {
        v9 = fields;
        v5 = memFile;
        v8 = destSize;
        break;
      }
    }
  }
  UsedSize = MemFile_GetUsedSize(v5);
  ProfMem_Begin("writestruct struct", UsedSize);
  MemFile_WriteData(v5, v8, dest);
  v21 = MemFile_GetUsedSize(v5);
  ProfMem_End(v21);
  for ( ; v9->type; ++v9 )
    G_SaveField_WriteFieldCommon(v9, original, v5, G_SaveFieldSP_WriteStruct);
}

