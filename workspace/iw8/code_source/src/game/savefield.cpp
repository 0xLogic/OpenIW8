/*
==============
G_SaveField_WriteCStyleString
==============
*/

void __fastcall G_SaveField_WriteCStyleString(const char *psz, int maxlen, MemoryFile *memFile)
{
  ?G_SaveField_WriteCStyleString@@YAXPEBDHPEAUMemoryFile@@@Z(psz, maxlen, memFile);
}

/*
==============
G_SaveField_ReadCStyleString
==============
*/

void __fastcall G_SaveField_ReadCStyleString(char *psz, int maxlen, MemoryFile *memFile)
{
  ?G_SaveField_ReadCStyleString@@YAXPEADHPEAUMemoryFile@@@Z(psz, maxlen, memFile);
}

/*
==============
G_SaveField_WriteFieldCommon
==============
*/

void __fastcall G_SaveField_WriteFieldCommon(const saveField_t *field, const unsigned __int8 *base, MemoryFile *memFile, void (__fastcall *writeStructCallback)(const saveField_t *, const unsigned __int8 *, unsigned __int8 *, int, MemoryFile *))
{
  ?G_SaveField_WriteFieldCommon@@YAXPEBUsaveField_t@@PEBEPEAUMemoryFile@@P6AX01PEAEH2@Z@Z(field, base, memFile, writeStructCallback);
}

/*
==============
G_SaveField_FreeFields
==============
*/

void __fastcall G_SaveField_FreeFields(const saveField_t *fields, unsigned __int8 *base)
{
  ?G_SaveField_FreeFields@@YAXPEBUsaveField_t@@PEAE@Z(fields, base);
}

/*
==============
G_SaveField_WriteFixupFieldCommon
==============
*/

void __fastcall G_SaveField_WriteFixupFieldCommon(const saveField_t *field, unsigned __int8 *base, const unsigned __int8 *original)
{
  ?G_SaveField_WriteFixupFieldCommon@@YAXPEBUsaveField_t@@PEAEPEBE@Z(field, base, original);
}

/*
==============
G_SaveField_ReadFieldCommon
==============
*/

const char *__fastcall G_SaveField_ReadFieldCommon(const saveField_t *field, unsigned __int8 *base, SaveGame *save, void (__fastcall *readStructCallback)(const saveField_t *, unsigned __int8 *, int, SaveGame *))
{
  return ?G_SaveField_ReadFieldCommon@@YAPEBDPEBUsaveField_t@@PEAEPEAUSaveGame@@P6AX01H2@Z@Z(field, base, save, readStructCallback);
}

/*
==============
G_SaveField_ClearFieldCommon
==============
*/

void __fastcall G_SaveField_ClearFieldCommon(const saveField_t *field, unsigned __int8 *base)
{
  ?G_SaveField_ClearFieldCommon@@YAXPEBUsaveField_t@@PEAE@Z(field, base);
}

/*
==============
G_SaveField_WriteStruct
==============
*/

void __fastcall G_SaveField_WriteStruct(const saveField_t *fields, const unsigned __int8 *original, unsigned __int8 *dest, int destSize, MemoryFile *memFile)
{
  ?G_SaveField_WriteStruct@@YAXPEBUsaveField_t@@PEBEPEAEHPEAUMemoryFile@@@Z(fields, original, dest, destSize, memFile);
}

/*
==============
G_SaveField_ReadStruct
==============
*/

void __fastcall G_SaveField_ReadStruct(const saveField_t *fields, unsigned __int8 *dest, int tempsize, SaveGame *save)
{
  ?G_SaveField_ReadStruct@@YAXPEBUsaveField_t@@PEAEHPEAUSaveGame@@@Z(fields, dest, tempsize, save);
}

/*
==============
G_SaveField_ClearFieldCommon
==============
*/
void G_SaveField_ClearFieldCommon(const saveField_t *field, unsigned __int8 *base)
{
  unsigned __int8 *v4; 

  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 688, ASSERT_TYPE_ASSERT, "( field )", (const char *)&queryFormat, "field") )
    __debugbreak();
  v4 = &base[field->ofs];
  switch ( field->type )
  {
    case 1u:
      *(_WORD *)v4 = 0;
      break;
    case 2u:
    case 3u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
      *(_DWORD *)v4 = 0;
      break;
    case 4u:
      UsableHandle::clear((UsableHandle *)&base[field->ofs]);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 720, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown field type") )
        __debugbreak();
      break;
  }
}

/*
==============
G_SaveField_FreeFields
==============
*/
void G_SaveField_FreeFields(const saveField_t *fields, unsigned __int8 *base)
{
  unsigned int type; 
  const saveField_t *i; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  scrContext_t *v9; 
  unsigned __int8 *v10; 
  unsigned __int16 v11; 
  gentity_s *ent; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  type = fields->type;
  for ( i = fields; type; ++i )
  {
    v5 = type - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 5;
          if ( v8 )
          {
            if ( v8 == 7 )
            {
              v9 = ScriptContext_Server();
              GScr_Weapon_Set(v9, (scr_weapon_t *)&base[i->ofs], (const scr_weapon_t)0);
            }
          }
          else if ( level.sentients )
          {
            SentientHandle::setSentient((SentientHandle *)&base[i->ofs], NULL);
          }
          else
          {
            v10 = &base[i->ofs];
            v11 = *(_WORD *)v10;
            if ( *(_WORD *)v10 )
            {
              if ( !*(_QWORD *)(184i64 * v11 - 184) )
              {
                LODWORD(v16) = v11 - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 136, ASSERT_TYPE_ASSERT, "( ( !number || level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( !number || level.sentients[number - 1].ent )", v16) )
                  __debugbreak();
              }
              if ( *(_WORD *)v10 )
              {
                ent = level.sentients[*(unsigned __int16 *)v10 - 1].ent;
                if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                  __debugbreak();
                v13 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
                v14 = (v13 >> 63) + v13;
                if ( (unsigned int)v14 >= 0x800 )
                {
                  LODWORD(v16) = 2048;
                  LODWORD(v15) = v14;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
                    __debugbreak();
                }
                v14 = (__int16)v14;
                if ( (unsigned int)(__int16)v14 >= 0x800 )
                {
                  LODWORD(v16) = 2048;
                  LODWORD(v15) = v14;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
                    __debugbreak();
                }
                if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                  __debugbreak();
                if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
                  __debugbreak();
                if ( !g_entityIsInUse[v14] )
                {
                  LODWORD(v16) = *(unsigned __int16 *)v10 - 1;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 137, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v16) )
                    __debugbreak();
                }
                if ( *(_WORD *)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 144, ASSERT_TYPE_ASSERT, "(!( (SentientHandle *)( base + field->ofs ) )->isDefined())", (const char *)&queryFormat, "!( (SentientHandle *)( base + field->ofs ) )->isDefined()") )
                  __debugbreak();
              }
            }
          }
        }
        else
        {
          UsableHandle::setEnt((UsableHandle *)&base[i->ofs], NULL);
        }
      }
      else
      {
        EntHandle::setEnt((EntHandle *)&base[i->ofs], NULL);
      }
    }
    else
    {
      Scr_SetString((scr_string_t *)&base[i->ofs], (scr_string_t)0);
    }
    type = i[1].type;
  }
}

/*
==============
G_SaveField_ReadCStyleString
==============
*/
void G_SaveField_ReadCStyleString(char *psz, int maxlen, MemoryFile *memFile)
{
  __int64 v6; 
  unsigned __int16 v8; 
  unsigned __int8 p; 

  if ( maxlen > 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 93, ASSERT_TYPE_ASSERT, "( ( maxlen <= 65536 ) )", "( maxlen ) = %i", maxlen) )
    __debugbreak();
  if ( maxlen > 256 )
  {
    MemFile_ReadData(memFile, 2ui64, &v8);
    v6 = v8;
  }
  else
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    v6 = p;
  }
  if ( (int)v6 >= maxlen )
    Sys_Error((const ObfuscateErrorText)&stru_143FEFB68);
  MemFile_ReadData(memFile, (unsigned int)v6, psz);
  psz[v6] = 0;
}

/*
==============
G_SaveField_ReadFieldCommon
==============
*/
const char *G_SaveField_ReadFieldCommon(const saveField_t *field, unsigned __int8 *base, SaveGame *save, void (*readStructCallback)(const saveField_t *, unsigned __int8 *, int, SaveGame *))
{
  unsigned __int8 *v8; 
  MemoryFile *MemoryFile; 
  const char *CString; 
  int v11; 
  int WeaponNameSize; 
  MemoryFile *v13; 
  Weapon *WeaponForName; 
  __m256i v15; 
  __int128 v16; 
  double v17; 
  int v18; 
  MemoryFile *v19; 
  GWeaponMap *Instance; 
  MemoryFile *v21; 
  const char *v22; 
  scrContext_t *v23; 
  const char *v24; 
  __int64 v25; 
  char v26; 
  __int64 v27; 
  char v28; 
  bool v29; 
  scr_weapon_t v30; 
  unsigned __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  scrContext_t *v36; 
  __int64 v37; 
  unsigned int v38; 
  const scrContext_t *v39; 
  XAnim_s *Anims; 
  unsigned __int8 *v41; 
  unsigned __int8 *v42; 
  Weapon result; 
  Weapon v44; 
  Weapon v45; 
  Weapon r_weapon; 
  Weapon v47; 
  char psz[512]; 
  char name[512]; 

  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 489, ASSERT_TYPE_ASSERT, "( field )", (const char *)&queryFormat, "field") )
    __debugbreak();
  if ( !base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 490, ASSERT_TYPE_ASSERT, "( base )", (const char *)&queryFormat, "base") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 491, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !readStructCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 492, ASSERT_TYPE_ASSERT, "( readStructCallback )", (const char *)&queryFormat, "readStructCallback") )
    __debugbreak();
  v8 = &base[field->ofs];
  switch ( field->type )
  {
    case 1u:
      if ( *(_DWORD *)v8 )
      {
        MemoryFile = SaveMemory_GetMemoryFile(save);
        CString = MemFile_ReadCString(MemoryFile);
        *(_DWORD *)v8 = SL_GetString(CString, 0);
      }
      return 0i64;
    case 2u:
      v33 = *(unsigned int *)v8;
      if ( (unsigned int)v33 > 0x800 )
        return j_va("entity out of range (%i)", v33);
      if ( (_DWORD)v33 )
        *(_QWORD *)v8 = &g_entities[(int)v33 - 1];
      else
        *(_QWORD *)v8 = 0i64;
      return 0i64;
    case 3u:
      v33 = *(unsigned int *)v8;
      if ( (unsigned int)v33 > 0x800 )
        return j_va("entity out of range (%i)", v33);
      *(_DWORD *)v8 = 0;
      if ( (_DWORD)v33 )
        EntHandle::setEnt((EntHandle *)v8, &g_entities[(int)v33 - 1]);
      return 0i64;
    case 4u:
      UsableHandle::readFromSave((UsableHandle *)v8, *(_DWORD *)v8);
      return 0i64;
    case 5u:
      v34 = *(unsigned int *)v8;
      if ( (int)v34 > level.maxclients || (int)v34 < 0 )
        return j_va("client out of range (%i)", v34);
      if ( (_DWORD)v34 )
        *(_QWORD *)v8 = &level.clients[(int)v34 - 1];
      else
        *(_QWORD *)v8 = 0i64;
      return 0i64;
    case 6u:
      v35 = *(unsigned int *)v8;
      if ( (unsigned int)v35 > 0x80 )
        return j_va("vehicle out of range (%i)", v35);
      if ( (_DWORD)v35 )
        *(_QWORD *)v8 = &level.vehicles[(int)v35 - 1];
      else
        *(_QWORD *)v8 = 0i64;
      return 0i64;
    case 7u:
      v36 = ScriptContext_Server();
      *(_DWORD *)v8 = Scr_ConvertThreadFromLoad(v36, *(_DWORD *)v8);
      return 0i64;
    case 8u:
      v37 = *(unsigned int *)v8;
      if ( (int)v37 > (int)level.maxSentients || (int)v37 < 0 )
        return j_va("sentient out of range (%i)", v37);
      if ( (_DWORD)v37 )
        *(_QWORD *)v8 = &level.sentients[(int)v37 - 1];
      else
        *(_QWORD *)v8 = 0i64;
      return 0i64;
    case 9u:
      v37 = *(unsigned int *)v8;
      if ( (int)v37 > (int)level.maxSentients || (int)v37 < 0 )
        return j_va("sentient out of range (%i)", v37);
      *(_DWORD *)v8 = 0;
      if ( (_DWORD)v37 )
        SentientHandle::setSentient((SentientHandle *)v8, &level.sentients[(int)v37 - 1]);
      return 0i64;
    case 0xAu:
      *(_QWORD *)v8 = Path_LoadNode(*(_WORD *)v8);
      return 0i64;
    case 0xBu:
      v38 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
      {
        v39 = ScriptContext_Server();
        Anims = Scr_GetAnims(v39, v38);
        if ( !Anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 653, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
          __debugbreak();
        *(_QWORD *)v8 = Com_XAnimCreateSmallTree(Anims, MOVEMENT);
      }
      else
      {
        *(_QWORD *)v8 = 0i64;
      }
      return 0i64;
    case 0xCu:
      if ( *(_DWORD *)v8 )
      {
        v41 = (unsigned __int8 *)G_AllocTagInfoMem();
        *(_QWORD *)v8 = v41;
        readStructCallback(tagInfoFields, v41, 128, save);
      }
      return 0i64;
    case 0xDu:
      if ( *(_DWORD *)v8 )
      {
        v42 = (unsigned __int8 *)MT_Alloc(0x60ui64, 18);
        *(_QWORD *)v8 = v42;
        readStructCallback(animscriptedFields, v42, 96, save);
      }
      return 0i64;
    case 0xEu:
      v11 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      *(__m256i *)&r_weapon.weaponIdx = *(__m256i *)&NULL_WEAPON.weaponIdx;
      WeaponNameSize = GSave::GetWeaponNameSize();
      v13 = SaveMemory_GetMemoryFile(save);
      G_SaveField_ReadCStyleString(psz, WeaponNameSize, v13);
      if ( psz[0] )
      {
        WeaponForName = G_Weapon_GetWeaponForName(&result, psz);
        v15 = *(__m256i *)&WeaponForName->weaponIdx;
        v16 = *(_OWORD *)&WeaponForName->attachmentVariationIndices[5];
        v17 = *(double *)&WeaponForName->attachmentVariationIndices[21];
        v11 = *(_DWORD *)&WeaponForName->weaponCamo;
      }
      else
      {
        v15 = *(__m256i *)&r_weapon.weaponIdx;
        v16 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
        v17 = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
      }
      *(__m256i *)v8 = v15;
      *((_OWORD *)v8 + 2) = v16;
      *((double *)v8 + 6) = v17;
      *((_DWORD *)v8 + 14) = v11;
      return 0i64;
    case 0xFu:
      if ( *(_DWORD *)v8 )
      {
        v18 = GSave::GetWeaponNameSize();
        *(_DWORD *)v8 = 0;
        v19 = SaveMemory_GetMemoryFile(save);
        G_SaveField_ReadCStyleString(name, v18, v19);
        if ( name[0] )
        {
          r_weapon = *G_Weapon_GetWeaponForName(&v44, name);
          Instance = GWeaponMap::GetInstance();
          GWeaponMap::SetWeapon(Instance, (BgWeaponHandle *)v8, &r_weapon);
        }
      }
      return 0i64;
    case 0x10u:
      if ( !*(_DWORD *)v8 )
        return 0i64;
      v21 = SaveMemory_GetMemoryFile(save);
      v22 = MemFile_ReadCString(v21);
      v47 = *G_Weapon_GetWeaponForName(&v45, v22);
      v23 = ScriptContext_Server();
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1138, ASSERT_TYPE_ASSERT, "(weaponName)", (const char *)&queryFormat, "weaponName") )
        __debugbreak();
      v24 = "none";
      v25 = 4i64;
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 678, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown field type") )
        __debugbreak();
      return 0i64;
  }
  while ( 1 )
  {
    v26 = v24[v22 - "none"];
    v27 = v25;
    v28 = *v24++;
    --v25;
    if ( !v27 )
      goto LABEL_33;
    if ( v26 != v28 )
      break;
    if ( !v26 )
      goto LABEL_33;
  }
  v32 = -1i64;
  do
    ++v32;
  while ( v22[v32] );
  if ( v32 <= 4 || *v22 != 97 || v22[1] != 108 || v22[2] != 116 || v22[3] != 95 )
  {
LABEL_33:
    v29 = 0;
    goto LABEL_34;
  }
  v29 = 1;
LABEL_34:
  v30 = GScr_Weapon_Create(v23, &v47, v29);
  *(_DWORD *)v8 = v30;
  if ( !v30 )
    return "Invalid weapon read from save file";
  GScr_Weapon_AddReference(v23, v30);
  return 0i64;
}

/*
==============
G_SaveField_ReadStruct
==============
*/
void G_SaveField_ReadStruct(const saveField_t *fields, unsigned __int8 *dest, int tempsize, SaveGame *save)
{
  const saveField_t *v7; 
  const char *FieldCommon; 
  unsigned int i; 
  unsigned __int8 *v10; 

  v7 = fields;
  if ( !fields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 756, ASSERT_TYPE_ASSERT, "( fields )", (const char *)&queryFormat, "fields") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 757, ASSERT_TYPE_ASSERT, "( dest )", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 758, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  SaveMemory_LoadRead(dest, tempsize, save);
  for ( ; v7->type; ++v7 )
  {
    FieldCommon = G_SaveField_ReadFieldCommon(v7, dest, save, G_SaveField_ReadStruct);
    if ( FieldCommon )
    {
      for ( i = v7->type; i; ++v7 )
      {
        v10 = &dest[v7->ofs];
        switch ( i )
        {
          case 1u:
            *(_WORD *)v10 = 0;
            break;
          case 2u:
          case 3u:
          case 5u:
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            *(_DWORD *)v10 = 0;
            break;
          case 4u:
            UsableHandle::clear((UsableHandle *)&dest[v7->ofs]);
            break;
          default:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 720, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown field type") )
              __debugbreak();
            break;
        }
        i = v7[1].type;
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEFF40, 894i64, FieldCommon);
    }
  }
}

/*
==============
G_SaveField_WriteCStyleString
==============
*/
void G_SaveField_WriteCStyleString(const char *psz, int maxlen, MemoryFile *memFile)
{
  unsigned __int64 v6; 
  __int16 *p_p; 
  unsigned __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int16 p; 
  char v13; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 68, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !psz && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 69, ASSERT_TYPE_ASSERT, "(psz)", (const char *)&queryFormat, "psz") )
    __debugbreak();
  if ( maxlen > 0x10000 )
  {
    LODWORD(v9) = maxlen;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 70, ASSERT_TYPE_ASSERT, "( ( maxlen <= 65536 ) )", "( maxlen ) = %i", v9) )
      __debugbreak();
  }
  v6 = -1i64;
  do
    ++v6;
  while ( psz[v6] );
  if ( (v6 > 0x7FFFFFFFFFFFFFFFi64 || v6 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v6, "unsigned", v6) )
    __debugbreak();
  if ( (int)v6 >= maxlen )
  {
    LODWORD(v11) = maxlen;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 72, ASSERT_TYPE_ASSERT, "( len ) < ( maxlen )", "%s < %s\n\t%i, %i", "len", "maxlen", v10, v11) )
      __debugbreak();
  }
  if ( maxlen > 256 )
  {
    p = v6;
    p_p = &p;
    v8 = 2i64;
  }
  else
  {
    v13 = v6;
    p_p = (__int16 *)&v13;
    v8 = 1i64;
  }
  MemFile_WriteData(memFile, v8, p_p);
  MemFile_WriteData(memFile, (int)v6, psz);
}

/*
==============
G_SaveField_WriteFieldCommon
==============
*/
void G_SaveField_WriteFieldCommon(const saveField_t *field, const unsigned __int8 *base, MemoryFile *memFile, void (*writeStructCallback)(const saveField_t *, const unsigned __int8 *, unsigned __int8 *, int, MemoryFile *))
{
  __int16 v4; 
  const unsigned __int8 *v9; 
  unsigned __int64 UsedSize; 
  const char *v11; 
  int WeaponNameSize; 
  __m256i v13; 
  int v14; 
  __int128 v15; 
  double v16; 
  const char *WeaponName; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  int v20; 
  unsigned __int64 v21; 
  const scrContext_t *v22; 
  const Weapon *v23; 
  bool IsAlternate; 
  const char *WeaponNameComplete; 
  __m256i *v26; 
  unsigned __int64 v27; 
  __int64 v28; 
  const saveField_t *v29; 
  __m256i *v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  char r_weapon[64]; 
  __m256i v34; 
  __m256i v35; 
  char output[512]; 

  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 366, ASSERT_TYPE_ASSERT, "( field )", (const char *)&queryFormat, "field") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 367, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !writeStructCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 368, ASSERT_TYPE_ASSERT, "( writeStructCallback )", (const char *)&queryFormat, "writeStructCallback") )
    __debugbreak();
  v9 = &base[field->ofs];
  switch ( field->type )
  {
    case 1u:
      UsedSize = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("string", UsedSize);
      if ( *(_DWORD *)v9 )
      {
        v11 = SL_ConvertToString((scr_string_t)*(_DWORD *)v9);
        MemFile_WriteCString(memFile, v11);
      }
      goto LABEL_25;
    case 0xCu:
      v26 = *(__m256i **)v9;
      if ( !*(_QWORD *)v9 )
        return;
      *(__m256i *)r_weapon = *v26;
      *(__m256i *)&r_weapon[32] = v26[1];
      v34 = v26[2];
      v35 = v26[3];
      v27 = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("tagInfo", v27);
      v28 = 128i64;
      v29 = tagInfoFields;
      break;
    case 0xDu:
      v30 = *(__m256i **)v9;
      if ( !*(_QWORD *)v9 )
        return;
      *(__m256i *)r_weapon = *v30;
      *(__m256i *)&r_weapon[32] = v30[1];
      v34 = v30[2];
      v31 = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("animscripted", v31);
      v28 = 96i64;
      v29 = animscriptedFields;
      break;
    case 0xEu:
      WeaponNameSize = GSave::GetWeaponNameSize();
      v13 = *(__m256i *)v9;
      v14 = WeaponNameSize;
      v15 = *((_OWORD *)v9 + 2);
      v16 = *((double *)v9 + 6);
      *(_DWORD *)&r_weapon[56] = *((_DWORD *)v9 + 14);
      *(__m256i *)r_weapon = v13;
      *(_OWORD *)&r_weapon[32] = v15;
      *(double *)&r_weapon[48] = v16;
      if ( v4 )
      {
        WeaponName = BG_GetWeaponName((const Weapon *)r_weapon, output, 0x200u);
        G_SaveField_WriteCStyleString(WeaponName, v14, memFile);
      }
      else
      {
        G_SaveField_WriteCStyleString((const char *)&queryFormat.fmt + 3, WeaponNameSize, memFile);
      }
      return;
    case 0xFu:
      if ( *(_DWORD *)v9 )
      {
        Instance = GWeaponMap::GetInstance();
        Weapon = BgWeaponMap::GetWeapon(Instance, *(BgWeaponHandle *)v9);
        BG_GetWeaponName(Weapon, output, 0x200u);
        v20 = GSave::GetWeaponNameSize();
        G_SaveField_WriteCStyleString(output, v20, memFile);
      }
      return;
    case 0x10u:
      v21 = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("weapon", v21);
      if ( *(_DWORD *)v9 )
      {
        v22 = ScriptContext_Server();
        v23 = GScr_Weapon_GetWeapon(v22, (const scr_weapon_t)*(_DWORD *)v9);
        IsAlternate = GScr_Weapon_IsAlternate(v22, *(const scr_weapon_t *)v9);
        WeaponNameComplete = BG_GetWeaponNameComplete(v23, IsAlternate, output, 0x200u);
        MemFile_WriteCString(memFile, WeaponNameComplete);
      }
      goto LABEL_25;
    default:
      return;
  }
  writeStructCallback(v29, *(const unsigned __int8 **)v9, (unsigned __int8 *)r_weapon, v28, memFile);
LABEL_25:
  v32 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v32);
}

/*
==============
G_SaveField_WriteFixupFieldCommon
==============
*/
void G_SaveField_WriteFixupFieldCommon(const saveField_t *field, unsigned __int8 *base, const unsigned __int8 *original)
{
  UsableHandle *v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int16 number; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int16 v12; 
  __int64 number_low; 
  __int64 v14; 
  int v15; 
  signed __int64 v16; 
  scrContext_t *v17; 
  const XAnim_s *Anims; 
  __int64 v19; 
  __int64 v20; 

  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 198, ASSERT_TYPE_ASSERT, "( field )", (const char *)&queryFormat, "field") )
    __debugbreak();
  v5 = (UsableHandle *)&base[field->ofs];
  switch ( field->type )
  {
    case 1u:
    case 0x10u:
      if ( v5->m_info.number )
        v5->m_info.number = 1;
      return;
    case 2u:
      if ( !*(_QWORD *)&v5->m_info )
        goto LABEL_8;
      v6 = *(_QWORD *)&v5->m_info - (_QWORD)g_entities;
      v7 = v6 / 1456 + 1;
      if ( (unsigned __int64)v7 > 0x800 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEFC20, 887i64, v6 / 1456 + 1);
      goto LABEL_71;
    case 3u:
      number = v5->m_info.number;
      if ( !LOWORD(v5->m_info.number) )
        goto LABEL_43;
      v9 = number;
      v10 = number - 1;
      if ( v10 >= 0x800 )
      {
        LODWORD(v19) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, 2048) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v11 = v9 - 1;
      if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v11] )
      {
        LODWORD(v20) = LOWORD(v5->m_info.number) - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v20) )
          __debugbreak();
      }
      v12 = v5->m_info.number;
      if ( LOWORD(v5->m_info.number) )
      {
        if ( (unsigned int)v12 - 1 >= 0x7FF )
        {
          LODWORD(v20) = 2047;
          LODWORD(v19) = v12 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        number_low = LOWORD(v5->m_info.number);
        if ( (unsigned int)(number_low - 1) >= 0x800 )
        {
          LODWORD(v20) = 2048;
          LODWORD(v19) = number_low - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v14 = number_low - 1;
        if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v14] )
        {
          LODWORD(v20) = LOWORD(v5->m_info.number) - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v20) )
            __debugbreak();
        }
        v15 = (__int16)(LOWORD(v5->m_info.number) - 1) + 1;
        v7 = v15;
        if ( (unsigned __int64)v15 > 0x800 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEFC20, 888i64, v15);
      }
      else
      {
LABEL_43:
        v7 = 0i64;
      }
      goto LABEL_71;
    case 4u:
      v5->m_info.number = UsableHandle::writeToSave(v5);
      return;
    case 5u:
      if ( v5->m_info )
        v7 = (signed __int64)(*(_QWORD *)&v5->m_info - (unsigned __int64)level.clients) / 64592 + 1;
      else
        v7 = 0i64;
      if ( v7 > level.maxclients || v7 < 0 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEFC80, 889i64, v7);
      goto LABEL_71;
    case 6u:
      if ( v5->m_info )
      {
        v16 = *(_QWORD *)&v5->m_info - (unsigned __int64)level.vehicles;
        v7 = v16 / 2248 + 1;
        if ( (unsigned __int64)v7 > 0x80 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEFCE0, 890i64, v16 / 2248 + 1);
LABEL_71:
        v5->m_info.number = truncate_cast<int,__int64>(v7);
      }
      else
      {
LABEL_8:
        v5->m_info.number = truncate_cast<int,__int64>(0i64);
      }
      return;
    case 7u:
      v17 = ScriptContext_Server();
      v5->m_info.number = Scr_ConvertThreadToSave(v17, v5->m_info.number);
      return;
    case 8u:
      if ( v5->m_info )
        v7 = (signed __int64)(*(_QWORD *)&v5->m_info - (unsigned __int64)level.sentients) / 184 + 1;
      else
        v7 = 0i64;
      if ( v7 > level.maxSentients || v7 < 0 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEFD40, 891i64, v7);
      goto LABEL_71;
    case 9u:
      if ( SentientHandle::isDefined((SentientHandle *)v5) )
        v7 = SentientHandle::sentient((SentientHandle *)v5) - level.sentients + 1;
      else
        v7 = 0i64;
      if ( v7 > level.maxSentients || v7 < 0 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEFD40, 892i64, v7);
      goto LABEL_71;
    case 0xAu:
      LOWORD(v5->m_info.number) = Path_SaveIndex(*(const pathnode_t **)&v5->m_info);
      return;
    case 0xBu:
      if ( v5->m_info )
      {
        Anims = XAnimGetAnims(*(const XAnimTree **)&v5->m_info);
        if ( !Anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 313, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
          __debugbreak();
        v5->m_info.number = Scr_GetAnimsIndex(Anims, 1u);
      }
      else
      {
        v5->m_info.number = 0;
      }
      return;
    case 0xCu:
    case 0xDu:
      v5->m_info.number = *(_QWORD *)&v5->m_info != 0i64;
      return;
    case 0xEu:
      return;
    case 0xFu:
      v5->m_info.number = v5->m_info.number != 0;
      return;
    default:
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEFDA0, 893i64);
      return;
  }
}

/*
==============
G_SaveField_WriteStruct
==============
*/
void G_SaveField_WriteStruct(const saveField_t *fields, const unsigned __int8 *original, unsigned __int8 *dest, int destSize, MemoryFile *memFile)
{
  unsigned __int64 v6; 
  const saveField_t *i; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v11; 

  v6 = destSize;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 735, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  for ( i = fields; i->type; ++i )
    G_SaveField_WriteFixupFieldCommon(i, dest, original);
  UsedSize = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("writestruct struct", UsedSize);
  MemFile_WriteData(memFile, v6, dest);
  v11 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v11);
  for ( ; fields->type; ++fields )
    G_SaveField_WriteFieldCommon(fields, original, memFile, G_SaveField_WriteStruct);
}

