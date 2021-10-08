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
  MemoryFile *MemoryFile; 
  const char *CString; 
  int v12; 
  int WeaponNameSize; 
  MemoryFile *v16; 
  int v21; 
  MemoryFile *v22; 
  GWeaponMap *Instance; 
  MemoryFile *v28; 
  const char *v29; 
  scrContext_t *v34; 
  const char *v35; 
  __int64 v36; 
  char v37; 
  __int64 v38; 
  char v39; 
  bool v40; 
  scr_weapon_t v41; 
  unsigned __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  scrContext_t *v47; 
  __int64 v48; 
  unsigned int v49; 
  const scrContext_t *v50; 
  XAnim_s *Anims; 
  unsigned __int8 *v52; 
  unsigned __int8 *v53; 
  Weapon result; 
  Weapon v57; 
  Weapon v58; 
  Weapon r_weapon; 
  Weapon v60; 
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
  _RDI = &base[field->ofs];
  switch ( field->type )
  {
    case 1u:
      if ( *(_DWORD *)_RDI )
      {
        MemoryFile = SaveMemory_GetMemoryFile(save);
        CString = MemFile_ReadCString(MemoryFile);
        *(_DWORD *)_RDI = SL_GetString(CString, 0);
      }
      return 0i64;
    case 2u:
      v44 = *(unsigned int *)_RDI;
      if ( (unsigned int)v44 > 0x800 )
        return j_va("entity out of range (%i)", v44);
      if ( (_DWORD)v44 )
        *(_QWORD *)_RDI = &g_entities[(int)v44 - 1];
      else
        *(_QWORD *)_RDI = 0i64;
      return 0i64;
    case 3u:
      v44 = *(unsigned int *)_RDI;
      if ( (unsigned int)v44 > 0x800 )
        return j_va("entity out of range (%i)", v44);
      *(_DWORD *)_RDI = 0;
      if ( (_DWORD)v44 )
        EntHandle::setEnt((EntHandle *)_RDI, &g_entities[(int)v44 - 1]);
      return 0i64;
    case 4u:
      UsableHandle::readFromSave((UsableHandle *)_RDI, *(_DWORD *)_RDI);
      return 0i64;
    case 5u:
      v45 = *(unsigned int *)_RDI;
      if ( (int)v45 > level.maxclients || (int)v45 < 0 )
        return j_va("client out of range (%i)", v45);
      if ( (_DWORD)v45 )
        *(_QWORD *)_RDI = &level.clients[(int)v45 - 1];
      else
        *(_QWORD *)_RDI = 0i64;
      return 0i64;
    case 6u:
      v46 = *(unsigned int *)_RDI;
      if ( (unsigned int)v46 > 0x80 )
        return j_va("vehicle out of range (%i)", v46);
      if ( (_DWORD)v46 )
        *(_QWORD *)_RDI = &level.vehicles[(int)v46 - 1];
      else
        *(_QWORD *)_RDI = 0i64;
      return 0i64;
    case 7u:
      v47 = ScriptContext_Server();
      *(_DWORD *)_RDI = Scr_ConvertThreadFromLoad(v47, *(_DWORD *)_RDI);
      return 0i64;
    case 8u:
      v48 = *(unsigned int *)_RDI;
      if ( (int)v48 > (int)level.maxSentients || (int)v48 < 0 )
        return j_va("sentient out of range (%i)", v48);
      if ( (_DWORD)v48 )
        *(_QWORD *)_RDI = &level.sentients[(int)v48 - 1];
      else
        *(_QWORD *)_RDI = 0i64;
      return 0i64;
    case 9u:
      v48 = *(unsigned int *)_RDI;
      if ( (int)v48 > (int)level.maxSentients || (int)v48 < 0 )
        return j_va("sentient out of range (%i)", v48);
      *(_DWORD *)_RDI = 0;
      if ( (_DWORD)v48 )
        SentientHandle::setSentient((SentientHandle *)_RDI, &level.sentients[(int)v48 - 1]);
      return 0i64;
    case 0xAu:
      *(_QWORD *)_RDI = Path_LoadNode(*(_WORD *)_RDI);
      return 0i64;
    case 0xBu:
      v49 = *(_DWORD *)_RDI;
      if ( *(_DWORD *)_RDI )
      {
        v50 = ScriptContext_Server();
        Anims = Scr_GetAnims(v50, v49);
        if ( !Anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 653, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
          __debugbreak();
        *(_QWORD *)_RDI = Com_XAnimCreateSmallTree(Anims, MOVEMENT);
      }
      else
      {
        *(_QWORD *)_RDI = 0i64;
      }
      return 0i64;
    case 0xCu:
      if ( *(_DWORD *)_RDI )
      {
        v52 = (unsigned __int8 *)G_AllocTagInfoMem();
        *(_QWORD *)_RDI = v52;
        readStructCallback(tagInfoFields, v52, 128, save);
      }
      return 0i64;
    case 0xDu:
      if ( *(_DWORD *)_RDI )
      {
        v53 = (unsigned __int8 *)MT_Alloc(0x60ui64, 18);
        *(_QWORD *)_RDI = v53;
        readStructCallback(animscriptedFields, v53, 96, save);
      }
      return 0i64;
    case 0xEu:
      __asm { vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON }
      v12 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      __asm
      {
        vmovups ymmword ptr [rsp+5D8h+r_weapon.weaponIdx], ymm0
        vmovups xmm0, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups [rsp+5D8h+var_5A0], xmm0
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  [rsp+5D8h+var_5A8], xmm0
      }
      WeaponNameSize = GSave::GetWeaponNameSize();
      v16 = SaveMemory_GetMemoryFile(save);
      G_SaveField_ReadCStyleString(psz, WeaponNameSize, v16);
      if ( psz[0] )
      {
        _RAX = G_Weapon_GetWeaponForName(&result, psz);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovsd  xmm2, qword ptr [rax+30h]
        }
        v12 = *(_DWORD *)&_RAX->weaponCamo;
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+5D8h+r_weapon.weaponIdx]
          vmovups xmm1, [rsp+5D8h+var_5A0]
          vmovsd  xmm2, [rsp+5D8h+var_5A8]
        }
      }
      __asm
      {
        vmovups ymmword ptr [rdi], ymm0
        vmovups xmmword ptr [rdi+20h], xmm1
        vmovsd  qword ptr [rdi+30h], xmm2
      }
      *((_DWORD *)_RDI + 14) = v12;
      return 0i64;
    case 0xFu:
      if ( *(_DWORD *)_RDI )
      {
        v21 = GSave::GetWeaponNameSize();
        *(_DWORD *)_RDI = 0;
        v22 = SaveMemory_GetMemoryFile(save);
        G_SaveField_ReadCStyleString(name, v21, v22);
        if ( name[0] )
        {
          _RAX = G_Weapon_GetWeaponForName(&v57, name);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rsp+5D8h+r_weapon.weaponIdx], ymm0
            vmovups xmm1, xmmword ptr [rax+20h]
            vmovups xmmword ptr [rsp+5D8h+r_weapon.attachmentVariationIndices+5], xmm1
            vmovsd  xmm0, qword ptr [rax+30h]
            vmovsd  qword ptr [rsp+5D8h+r_weapon.attachmentVariationIndices+15h], xmm0
          }
          *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
          Instance = GWeaponMap::GetInstance();
          GWeaponMap::SetWeapon(Instance, (BgWeaponHandle *)_RDI, &r_weapon);
        }
      }
      return 0i64;
    case 0x10u:
      if ( !*(_DWORD *)_RDI )
        return 0i64;
      v28 = SaveMemory_GetMemoryFile(save);
      v29 = MemFile_ReadCString(v28);
      _RAX = G_Weapon_GetWeaponForName(&v58, v29);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+5D8h+var_490.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsp+5D8h+var_490.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rsp+5D8h+var_490.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&v60.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      v34 = ScriptContext_Server();
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1138, ASSERT_TYPE_ASSERT, "(weaponName)", (const char *)&queryFormat, "weaponName") )
        __debugbreak();
      v35 = "none";
      v36 = 4i64;
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 678, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown field type") )
        __debugbreak();
      return 0i64;
  }
  while ( 1 )
  {
    v37 = v35[v29 - "none"];
    v38 = v36;
    v39 = *v35++;
    --v36;
    if ( !v38 )
      goto LABEL_33;
    if ( v37 != v39 )
      break;
    if ( !v37 )
      goto LABEL_33;
  }
  v43 = -1i64;
  do
    ++v43;
  while ( v29[v43] );
  if ( v43 <= 4 || *v29 != 97 || v29[1] != 108 || v29[2] != 116 || v29[3] != 95 )
  {
LABEL_33:
    v40 = 0;
    goto LABEL_34;
  }
  v40 = 1;
LABEL_34:
  v41 = GScr_Weapon_Create(v34, &v60, v40);
  *(_DWORD *)_RDI = v41;
  if ( !v41 )
    return "Invalid weapon read from save file";
  GScr_Weapon_AddReference(v34, v41);
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
  unsigned __int64 UsedSize; 
  const char *v11; 
  int WeaponNameSize; 
  int v14; 
  const char *WeaponName; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  int v21; 
  unsigned __int64 v22; 
  const scrContext_t *v23; 
  const Weapon *v24; 
  bool IsAlternate; 
  const char *WeaponNameComplete; 
  unsigned __int64 v32; 
  __int64 v33; 
  const saveField_t *v34; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  char r_weapon[64]; 
  char output[512]; 

  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 366, ASSERT_TYPE_ASSERT, "( field )", (const char *)&queryFormat, "field") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 367, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !writeStructCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savefield.cpp", 368, ASSERT_TYPE_ASSERT, "( writeStructCallback )", (const char *)&queryFormat, "writeStructCallback") )
    __debugbreak();
  _RSI = (BgWeaponHandle *)&base[field->ofs];
  switch ( field->type )
  {
    case 1u:
      UsedSize = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("string", UsedSize);
      if ( _RSI->m_mapEntryId )
      {
        v11 = SL_ConvertToString((scr_string_t)_RSI->m_mapEntryId);
        MemFile_WriteCString(memFile, v11);
      }
      goto LABEL_25;
    case 0xCu:
      _RAX = *(_QWORD *)&_RSI->m_mapEntryId;
      if ( !*(_QWORD *)&_RSI->m_mapEntryId )
        return;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+2E8h+r_weapon], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+2E8h+r_weapon+20h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups [rsp+2E8h+var_278], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups [rsp+2E8h+var_258], ymm1
      }
      v32 = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("tagInfo", v32);
      v33 = 128i64;
      v34 = tagInfoFields;
      break;
    case 0xDu:
      _RAX = *(_QWORD *)&_RSI->m_mapEntryId;
      if ( !*(_QWORD *)&_RSI->m_mapEntryId )
        return;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+2E8h+r_weapon], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+2E8h+r_weapon+20h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups [rsp+2E8h+var_278], ymm0
      }
      v39 = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("animscripted", v39);
      v33 = 96i64;
      v34 = animscriptedFields;
      break;
    case 0xEu:
      WeaponNameSize = GSave::GetWeaponNameSize();
      __asm { vmovups ymm2, ymmword ptr [rsi] }
      v14 = WeaponNameSize;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi+20h]
        vmovsd  xmm1, qword ptr [rsi+30h]
      }
      *(BgWeaponHandle *)&r_weapon[56] = _RSI[14];
      __asm
      {
        vmovd   ecx, xmm2
        vmovups ymmword ptr [rsp+2E8h+r_weapon], ymm2
        vmovups xmmword ptr [rsp+2E8h+r_weapon+20h], xmm0
        vmovsd  qword ptr [rsp+2E8h+r_weapon+30h], xmm1
      }
      if ( (_WORD)_ECX )
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
      if ( _RSI->m_mapEntryId )
      {
        Instance = GWeaponMap::GetInstance();
        Weapon = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)_RSI->m_mapEntryId);
        BG_GetWeaponName(Weapon, output, 0x200u);
        v21 = GSave::GetWeaponNameSize();
        G_SaveField_WriteCStyleString(output, v21, memFile);
      }
      return;
    case 0x10u:
      v22 = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("weapon", v22);
      if ( _RSI->m_mapEntryId )
      {
        v23 = ScriptContext_Server();
        v24 = GScr_Weapon_GetWeapon(v23, (const scr_weapon_t)_RSI->m_mapEntryId);
        IsAlternate = GScr_Weapon_IsAlternate(v23, (const scr_weapon_t)_RSI->m_mapEntryId);
        WeaponNameComplete = BG_GetWeaponNameComplete(v24, IsAlternate, output, 0x200u);
        MemFile_WriteCString(memFile, WeaponNameComplete);
      }
      goto LABEL_25;
    default:
      return;
  }
  writeStructCallback(v34, *(const unsigned __int8 **)&_RSI->m_mapEntryId, (unsigned __int8 *)r_weapon, v33, memFile);
LABEL_25:
  v40 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v40);
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

