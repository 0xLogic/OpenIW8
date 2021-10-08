/*
==============
BG_GetScriptedSceneAnimTypeCount
==============
*/

int __fastcall BG_GetScriptedSceneAnimTypeCount()
{
  return ?BG_GetScriptedSceneAnimTypeCount@@YAHXZ();
}

/*
==============
BG_GetScriptedAnimTypeName
==============
*/

const char *__fastcall BG_GetScriptedAnimTypeName(int index)
{
  return ?BG_GetScriptedAnimTypeName@@YAPEBDH@Z(index);
}

/*
==============
BG_WeaponTypeIsOffhand
==============
*/

bool __fastcall BG_WeaponTypeIsOffhand(weapType_t weapType)
{
  return ?BG_WeaponTypeIsOffhand@@YA_NW4weapType_t@@@Z(weapType);
}

/*
==============
BG_WeaponCamo_FindImage
==============
*/

GfxImage *__fastcall BG_WeaponCamo_FindImage(Material *overrideMaterialTarget, const unsigned int hash)
{
  return ?BG_WeaponCamo_FindImage@@YAPEAUGfxImage@@PEAUMaterial@@I@Z(overrideMaterialTarget, hash);
}

/*
==============
BG_ShutdownPlayerAnimTypes
==============
*/

void BG_ShutdownPlayerAnimTypes(void)
{
  ?BG_ShutdownPlayerAnimTypes@@YAXXZ();
}

/*
==============
BG_GetScriptedSceneAnimTypeName
==============
*/

const char *__fastcall BG_GetScriptedSceneAnimTypeName(int index)
{
  return ?BG_GetScriptedSceneAnimTypeName@@YAPEBDH@Z(index);
}

/*
==============
BG_GetImpactTypeCount
==============
*/

int __fastcall BG_GetImpactTypeCount()
{
  return ?BG_GetImpactTypeCount@@YAHXZ();
}

/*
==============
BG_GetExecutionAnimTypeCount
==============
*/

int __fastcall BG_GetExecutionAnimTypeCount()
{
  return ?BG_GetExecutionAnimTypeCount@@YAHXZ();
}

/*
==============
BG_GetImpactTypeName
==============
*/

const char *__fastcall BG_GetImpactTypeName(int index)
{
  return ?BG_GetImpactTypeName@@YAPEBDH@Z(index);
}

/*
==============
BG_GetExecutionAnimTypeIndex
==============
*/

int __fastcall BG_GetExecutionAnimTypeIndex(const char *value)
{
  return ?BG_GetExecutionAnimTypeIndex@@YAHPEBD@Z(value);
}

/*
==============
BG_GetScriptedSceneAnimTypeIndex
==============
*/

int __fastcall BG_GetScriptedSceneAnimTypeIndex(const char *value)
{
  return ?BG_GetScriptedSceneAnimTypeIndex@@YAHPEBD@Z(value);
}

/*
==============
BG_GetImpactTypeNameSuffix
==============
*/

ImpactTypeSuffix __fastcall BG_GetImpactTypeNameSuffix(const char *name, const char **outSuffixBegin)
{
  return ?BG_GetImpactTypeNameSuffix@@YA?AW4ImpactTypeSuffix@@PEBDPEAPEBD@Z(name, outSuffixBegin);
}

/*
==============
BG_GetWeaponClassName
==============
*/

const char *__fastcall BG_GetWeaponClassName(weapClass_t type)
{
  return ?BG_GetWeaponClassName@@YAPEBDW4weapClass_t@@@Z(type);
}

/*
==============
BG_GetScriptedAnimTypeCount
==============
*/

int __fastcall BG_GetScriptedAnimTypeCount()
{
  return ?BG_GetScriptedAnimTypeCount@@YAHXZ();
}

/*
==============
BG_LoadPlayerAnimTypes
==============
*/

void BG_LoadPlayerAnimTypes(void)
{
  ?BG_LoadPlayerAnimTypes@@YAXXZ();
}

/*
==============
WeaponAnimPackage_Register
==============
*/

WeaponAnimPackage *__fastcall WeaponAnimPackage_Register(const char *name)
{
  return ?WeaponAnimPackage_Register@@YAPEAUWeaponAnimPackage@@PEBD@Z(name);
}

/*
==============
BG_GetPlayerAnimTypeCount
==============
*/

int __fastcall BG_GetPlayerAnimTypeCount()
{
  return ?BG_GetPlayerAnimTypeCount@@YAHXZ();
}

/*
==============
BG_ValidateImpactTypeNames
==============
*/

void __fastcall BG_ValidateImpactTypeNames(char **impactTypeNames, int impactTypeNamesCount)
{
  ?BG_ValidateImpactTypeNames@@YAXQEAPEADH@Z(impactTypeNames, impactTypeNamesCount);
}

/*
==============
BG_GetWeaponTypeName
==============
*/

const char *__fastcall BG_GetWeaponTypeName(weapType_t type)
{
  return ?BG_GetWeaponTypeName@@YAPEBDW4weapType_t@@@Z(type);
}

/*
==============
BG_GetWeaponOffhandClassName
==============
*/

const char *__fastcall BG_GetWeaponOffhandClassName(OffhandClass type)
{
  return ?BG_GetWeaponOffhandClassName@@YAPEBDW4OffhandClass@@@Z(type);
}

/*
==============
WeaponSFXPackage_Register
==============
*/

WeaponSFXPackage *__fastcall WeaponSFXPackage_Register(const char *name)
{
  return ?WeaponSFXPackage_Register@@YAPEAUWeaponSFXPackage@@PEBD@Z(name);
}

/*
==============
BG_LoadDefaultWeaponCompleteDef
==============
*/

WeaponCompleteDef *__fastcall BG_LoadDefaultWeaponCompleteDef()
{
  return ?BG_LoadDefaultWeaponCompleteDef@@YAPEAUWeaponCompleteDef@@XZ();
}

/*
==============
BG_GetPlayerAnimTypeName
==============
*/

const char *__fastcall BG_GetPlayerAnimTypeName(int index)
{
  return ?BG_GetPlayerAnimTypeName@@YAPEBDH@Z(index);
}

/*
==============
WeaponVFXPackage_Register
==============
*/

WeaponVFXPackage *__fastcall WeaponVFXPackage_Register(const char *name)
{
  return ?WeaponVFXPackage_Register@@YAPEAUWeaponVFXPackage@@PEBD@Z(name);
}

/*
==============
BG_GetImpactTypeIndex
==============
*/

int __fastcall BG_GetImpactTypeIndex(const char *value)
{
  return ?BG_GetImpactTypeIndex@@YAHPEBD@Z(value);
}

/*
==============
BG_LoadTypes
==============
*/

int __fastcall BG_LoadTypes(const char *filename, char **animTypeNames, const int size)
{
  return ?BG_LoadTypes@@YAHPEBDPEAPEADH@Z(filename, animTypeNames, size);
}

/*
==============
BG_GetScriptedAnimTypeIndex
==============
*/

int __fastcall BG_GetScriptedAnimTypeIndex(const char *value)
{
  return ?BG_GetScriptedAnimTypeIndex@@YAHPEBD@Z(value);
}

/*
==============
BG_GetExecutionAnimTypeName
==============
*/

const char *__fastcall BG_GetExecutionAnimTypeName(int index)
{
  return ?BG_GetExecutionAnimTypeName@@YAPEBDH@Z(index);
}

/*
==============
BG_GetWeaponInventoryTypeName
==============
*/

const char *__fastcall BG_GetWeaponInventoryTypeName(weapInventoryType_t type)
{
  return ?BG_GetWeaponInventoryTypeName@@YAPEBDW4weapInventoryType_t@@@Z(type);
}

/*
==============
BG_GetExecutionAnimTypeCount
==============
*/
__int64 BG_GetExecutionAnimTypeCount()
{
  return g_executionAnimTypeNamesCount;
}

/*
==============
BG_GetExecutionAnimTypeIndex
==============
*/
int BG_GetExecutionAnimTypeIndex(const char *value)
{
  return BG_GetNameIndex(value, (const char *const *)g_executionAnimTypeNames, g_executionAnimTypeNamesCount, 0);
}

/*
==============
BG_GetExecutionAnimTypeName
==============
*/
char *BG_GetExecutionAnimTypeName(int index)
{
  return g_executionAnimTypeNames[index];
}

/*
==============
BG_GetImpactTypeCount
==============
*/
__int64 BG_GetImpactTypeCount()
{
  return g_impactTypeNamesCount;
}

/*
==============
BG_GetImpactTypeIndex
==============
*/
__int64 BG_GetImpactTypeIndex(const char *value)
{
  const char *v1; 
  __int64 NameIndex; 
  char *v3; 
  int v4; 
  int v5; 
  __int64 result; 

  v1 = value;
  NameIndex = BG_GetNameIndex(value, (const char *const *)g_impactTypeNames, g_impactTypeNamesCount, 0);
  if ( (unsigned int)NameIndex >= g_impactTypeNamesCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 783, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_impactTypeNamesCount )", "index doesn't index g_impactTypeNamesCount\n\t%i not in [0, %i)", NameIndex, g_impactTypeNamesCount) )
    __debugbreak();
  v3 = (char *)(g_impactTypeNames[NameIndex] - v1);
  do
  {
    v4 = (unsigned __int8)v3[(_QWORD)v1];
    v5 = *(unsigned __int8 *)v1 - v4;
    if ( v5 )
      break;
    ++v1;
  }
  while ( v4 );
  result = 0xFFFFFFFFi64;
  if ( !v5 )
    return (unsigned int)NameIndex;
  return result;
}

/*
==============
BG_GetImpactTypeName
==============
*/
char *BG_GetImpactTypeName(int index)
{
  __int64 v1; 
  unsigned int v4; 

  v1 = index;
  if ( index >= g_impactTypeNamesCount )
  {
    v4 = g_impactTypeNamesCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 783, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_impactTypeNamesCount )", "index doesn't index g_impactTypeNamesCount\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return g_impactTypeNames[v1];
}

/*
==============
BG_GetImpactTypeNameSuffix
==============
*/
__int64 BG_GetImpactTypeNameSuffix(const char *name, const char **outSuffixBegin)
{
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  const char **i; 
  __int64 result; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 734, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !outSuffixBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 735, ASSERT_TYPE_ASSERT, "(outSuffixBegin)", (const char *)&queryFormat, "outSuffixBegin") )
    __debugbreak();
  v4 = -1i64;
  v5 = -1i64;
  do
    ++v5;
  while ( name[v5] );
  v6 = 1;
  for ( i = &g_impactTypeSuffixes[1]; !Core_EndsWith(name, *i); ++i )
  {
    if ( ++v6 >= 3 )
    {
      *outSuffixBegin = &name[(int)v5];
      return 0i64;
    }
  }
  do
    ++v4;
  while ( g_impactTypeSuffixes[v6][v4] );
  if ( (int)v4 > (int)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 748, ASSERT_TYPE_ASSERT, "( suffixLength ) <= ( length )", "%s <= %s\n\t%i, %i", "suffixLength", "length", v4, v5) )
    __debugbreak();
  result = v6;
  *outSuffixBegin = &name[(int)v5 - (__int64)(int)v4];
  return result;
}

/*
==============
BG_GetNameIndex
==============
*/
__int64 BG_GetNameIndex(const char *value, const char *const *names, unsigned int nameCount, int noneIndex)
{
  unsigned int i; 
  const char *v9; 
  __int64 v10; 
  const char *v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 690, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  if ( !names && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 691, ASSERT_TYPE_ASSERT, "(names)", (const char *)&queryFormat, "names") )
    __debugbreak();
  for ( i = 0; i < nameCount; ++names )
  {
    v9 = *names;
    v10 = 0x7FFFFFFFi64;
    if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v11 = (const char *)(value - v9);
    while ( 1 )
    {
      v12 = (unsigned __int8)v9[(_QWORD)v11];
      v13 = v10;
      v14 = *(unsigned __int8 *)v9++;
      --v10;
      if ( !v13 )
        return i;
      if ( v12 != v14 )
      {
        v15 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v15 = v12;
        v12 = v15;
        v16 = v14 + 32;
        if ( (unsigned int)(v14 - 65) > 0x19 )
          v16 = v14;
        if ( v12 != v16 )
          break;
      }
      if ( !v12 )
        return i;
    }
    ++i;
  }
  return (unsigned int)noneIndex;
}

/*
==============
BG_GetPlayerAnimTypeCount
==============
*/
__int64 BG_GetPlayerAnimTypeCount()
{
  return g_playerAnimTypeNamesCount;
}

/*
==============
BG_GetPlayerAnimTypeName
==============
*/
char *BG_GetPlayerAnimTypeName(int index)
{
  return g_playerAnimTypeNames[index];
}

/*
==============
BG_GetScriptedAnimTypeCount
==============
*/
__int64 BG_GetScriptedAnimTypeCount()
{
  return g_scriptedAnimTypeNamesCount;
}

/*
==============
BG_GetScriptedAnimTypeIndex
==============
*/
__int64 BG_GetScriptedAnimTypeIndex(const char *value)
{
  return BG_GetNameIndex(value, (const char *const *)g_scriptedAnimTypeNames, g_scriptedAnimTypeNamesCount, 0);
}

/*
==============
BG_GetScriptedAnimTypeName
==============
*/
char *BG_GetScriptedAnimTypeName(int index)
{
  return g_scriptedAnimTypeNames[index];
}

/*
==============
BG_GetScriptedSceneAnimTypeCount
==============
*/
__int64 BG_GetScriptedSceneAnimTypeCount()
{
  return g_scriptedSceneAnimTypeNamesCount;
}

/*
==============
BG_GetScriptedSceneAnimTypeIndex
==============
*/
__int64 BG_GetScriptedSceneAnimTypeIndex(const char *value)
{
  return BG_GetNameIndex(value, (const char *const *)g_scriptedSceneAnimTypeNames, g_scriptedSceneAnimTypeNamesCount, 0);
}

/*
==============
BG_GetScriptedSceneAnimTypeName
==============
*/
char *BG_GetScriptedSceneAnimTypeName(int index)
{
  return g_scriptedSceneAnimTypeNames[index];
}

/*
==============
BG_GetWeaponClassName
==============
*/
const char *BG_GetWeaponClassName(weapClass_t type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= WEAPCLASS_NUM )
  {
    v4 = 15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 3359, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( szWeapClassNames ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( szWeapClassNames )\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return szWeapClassNames[v1];
}

/*
==============
BG_GetWeaponInventoryTypeName
==============
*/
const char *BG_GetWeaponInventoryTypeName(weapInventoryType_t type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= WEAPINVENTORYCOUNT )
  {
    v4 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 3375, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( szWeapInventoryTypeNames ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( szWeapInventoryTypeNames )\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return szWeapInventoryTypeNames[v1];
}

/*
==============
BG_GetWeaponOffhandClassName
==============
*/
const char *BG_GetWeaponOffhandClassName(OffhandClass type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= OFFHAND_CLASS_COUNT )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 3367, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( szWeapOffhandClassNames ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( szWeapOffhandClassNames )\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return szWeapOffhandClassNames[v1];
}

/*
==============
BG_GetWeaponTypeName
==============
*/
const char *BG_GetWeaponTypeName(weapType_t type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= WEAPTYPE_NUM )
  {
    v4 = 11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 3351, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( szWeapTypeNames ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( szWeapTypeNames )\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return szWeapTypeNames[v1];
}

/*
==============
BG_LoadDefaultWeaponCompleteDef
==============
*/
WeaponCompleteDef *BG_LoadDefaultWeaponCompleteDef()
{
  return DB_FindXAssetHeader(ASSET_TYPE_WEAPON, "none", 1).weapon;
}

/*
==============
BG_LoadPlayerAnimTypes
==============
*/
void BG_LoadPlayerAnimTypes(void)
{
  s_playerAnimTypeBuf.mp_bottom_up = (char *)&s_playerAnimTypeBuf;
  g_playerAnimTypeNamesCount = BG_LoadTypes("mp/playeranimtypes.txt", g_playerAnimTypeNames, 256);
  g_scriptedAnimTypeNamesCount = BG_LoadTypes("mp/scriptedanimtypes.txt", g_scriptedAnimTypeNames, 256);
  g_scriptedSceneAnimTypeNamesCount = BG_LoadTypes("mp/scriptedsceneanimtypes.txt", g_scriptedSceneAnimTypeNames, 640);
  g_executionAnimTypeNamesCount = BG_LoadTypes("mp/executionanimtypes.txt", g_executionAnimTypeNames, 256);
  g_impactTypeNamesCount = BG_LoadTypes("impacttypes.txt", g_impactTypeNames, 64);
  BG_ValidateImpactTypeNames(g_impactTypeNames, g_impactTypeNamesCount);
  Com_Printf(16, "BG_LoadPlayerAnimTypes: Used %zu bytes\n", s_playerAnimTypeBuf.mp_bottom_up - (char *)&s_playerAnimTypeBuf);
}

/*
==============
BG_LoadTypes
==============
*/
__int64 BG_LoadTypes(const char *filename, char **animTypeNames, const int size)
{
  char *m_ptr; 
  int v7; 
  char *RawTextFile; 
  const char *i; 
  __int64 v10; 
  unsigned __int64 v11; 
  char *mp_bottom_up; 
  signed __int64 v13; 
  char v14; 
  Mem_LargeLocal v16; 
  char *data_p; 

  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 3463, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename", -2i64) )
    __debugbreak();
  if ( !animTypeNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 3464, ASSERT_TYPE_ASSERT, "(animTypeNames)", (const char *)&queryFormat, "animTypeNames") )
    __debugbreak();
  Mem_LargeLocal::Mem_LargeLocal(&v16, 0x18000ui64, "max_raw_buf rawbuf");
  m_ptr = (char *)v16.m_ptr;
  v7 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    RawTextFile = (char *)Com_LoadRawTextFile(filename, m_ptr, 98304);
    if ( !RawTextFile )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F53670, 1249i64, filename);
    data_p = RawTextFile;
    Com_BeginParseSession("BG_AnimParseAnimScript");
    for ( i = Com_Parse((const char **)&data_p); i; i = Com_Parse((const char **)&data_p) )
    {
      if ( !*i )
        break;
      if ( v7 >= size )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F536D0, 1250i64, (unsigned int)size, filename);
      v10 = -1i64;
      do
        ++v10;
      while ( i[v10] );
      v11 = v10 + 1;
      if ( !s_playerAnimTypeBuf.mp_bottom_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 53, ASSERT_TYPE_ASSERT, "( mp_bottom_up )", (const char *)&queryFormat, "mp_bottom_up") )
        __debugbreak();
      if ( s_playerAnimTypeBuf.mp_top_down < s_playerAnimTypeBuf.mp_bottom_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 92, ASSERT_TYPE_ASSERT, "( mp_top_down >= mp_bottom_up )", (const char *)&queryFormat, "mp_top_down >= mp_bottom_up") )
        __debugbreak();
      if ( s_playerAnimTypeBuf.mp_top_down - s_playerAnimTypeBuf.mp_bottom_up < v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 54, ASSERT_TYPE_ASSERT, "( available() >= size_bytes )", (const char *)&queryFormat, "available() >= size_bytes") )
        __debugbreak();
      mp_bottom_up = s_playerAnimTypeBuf.mp_bottom_up;
      s_playerAnimTypeBuf.mp_bottom_up += v11;
      *animTypeNames = mp_bottom_up;
      v13 = mp_bottom_up - i;
      do
      {
        v14 = *i;
        i[v13] = *i;
        ++i;
      }
      while ( v14 );
      ++v7;
      ++animTypeNames;
    }
    Com_EndParseSession();
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v16);
  return (unsigned int)v7;
}

/*
==============
BG_ShutdownPlayerAnimTypes
==============
*/
void BG_ShutdownPlayerAnimTypes(void)
{
  DebugWipe(g_playerAnimTypeNames, 0x800ui64);
  DebugWipe(g_scriptedAnimTypeNames, 0x800ui64);
  DebugWipe(g_scriptedSceneAnimTypeNames, 0x1400ui64);
  DebugWipe(g_executionAnimTypeNames, 0x800ui64);
  DebugWipe(g_impactTypeNames, 0x200ui64);
  g_playerAnimTypeNamesCount = 0;
  g_scriptedAnimTypeNamesCount = 0;
  g_scriptedSceneAnimTypeNamesCount = 0;
  g_executionAnimTypeNamesCount = 0;
  g_impactTypeNamesCount = 0;
}

/*
==============
BG_ValidateImpactTypeNames
==============
*/
void BG_ValidateImpactTypeNames(char **impactTypeNames, int impactTypeNamesCount)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  const char *v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  char **v13; 
  char *v14; 
  __int64 v15; 
  const char *v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  char v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  v3 = 0i64;
  v4 = impactTypeNamesCount;
  if ( impactTypeNamesCount > 0 )
  {
    v5 = 0i64;
    do
    {
      v6 = impactTypeNames[v5];
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 734, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
        __debugbreak();
      v7 = -1i64;
      do
        ++v7;
      while ( v6[v7] );
      v8 = 1;
      v9 = 1i64;
      while ( !Core_EndsWith(v6, g_impactTypeSuffixes[v9]) )
      {
        ++v8;
        ++v9;
        if ( v8 >= 3 )
          goto LABEL_19;
      }
      v10 = -1i64;
      do
        ++v10;
      while ( g_impactTypeSuffixes[v9][v10] );
      if ( (int)v10 > (int)v7 )
      {
        LODWORD(v26) = v7;
        LODWORD(v25) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 748, ASSERT_TYPE_ASSERT, "( suffixLength ) <= ( length )", "%s <= %s\n\t%i, %i", "suffixLength", "length", v25, v26) )
          __debugbreak();
      }
      if ( v9 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F53720, 6520i64, g_impactTypeSuffixes[v9], impactTypeNames);
LABEL_19:
      ++v5;
    }
    while ( v5 < v4 );
  }
  v11 = g_impactTypeNamesCount;
  v12 = 0;
  if ( g_impactTypeNamesCount )
  {
    v13 = g_impactTypeNames;
    do
    {
      v14 = *v13;
      v15 = 0x7FFFFFFFi64;
      if ( !*v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v16 = (const char *)("none" - v14);
      while ( 1 )
      {
        v17 = (unsigned __int8)v14[(_QWORD)v16];
        v18 = v15;
        v19 = (unsigned __int8)*v14++;
        --v15;
        if ( !v18 )
        {
LABEL_34:
          v11 = g_impactTypeNamesCount;
          goto LABEL_38;
        }
        if ( v17 != v19 )
        {
          v20 = v17 + 32;
          if ( (unsigned int)(v17 - 65) > 0x19 )
            v20 = v17;
          v17 = v20;
          v21 = v19 + 32;
          if ( (unsigned int)(v19 - 65) > 0x19 )
            v21 = v19;
          if ( v17 != v21 )
            break;
        }
        if ( !v17 )
          goto LABEL_34;
      }
      ++v12;
      ++v13;
    }
    while ( v12 < v11 );
    v11 = g_impactTypeNamesCount;
  }
  v12 = 0;
LABEL_38:
  if ( v12 >= v11 )
  {
    LODWORD(v24) = v11;
    LODWORD(v23) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 783, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_impactTypeNamesCount )", "index doesn't index g_impactTypeNamesCount\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  while ( 1 )
  {
    v22 = val[v3++];
    if ( v22 != g_impactTypeNames[v12][v3 - 1] )
      break;
    if ( v3 == 5 )
    {
      if ( !v12 )
        goto LABEL_45;
      break;
    }
  }
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F537E0, 6369i64);
LABEL_45:
  if ( impactTypeNamesCount > 64 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F53840, 6370i64);
}

/*
==============
BG_WeaponCamo_FindImage
==============
*/
GfxImage *BG_WeaponCamo_FindImage(Material *overrideMaterialTarget, const unsigned int hash)
{
  MaterialTextureDef *textureTable; 
  MaterialTextureDef *v5; 
  GfxImage *image; 

  if ( !overrideMaterialTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 791, ASSERT_TYPE_ASSERT, "(overrideMaterialTarget)", (const char *)&queryFormat, "overrideMaterialTarget") )
    __debugbreak();
  textureTable = overrideMaterialTarget->textureTable;
  v5 = &textureTable[overrideMaterialTarget->textureCount];
  if ( textureTable == v5 )
    return 0i64;
  while ( textureTable->index != hash )
  {
    if ( ++textureTable == v5 )
      return 0i64;
  }
  image = textureTable->image;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 799, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  return image;
}

/*
==============
BG_WeaponTypeIsOffhand
==============
*/
bool BG_WeaponTypeIsOffhand(weapType_t weapType)
{
  return weapType == WEAPTYPE_GRENADE || (unsigned int)(weapType - 6) <= 2;
}

/*
==============
WeaponAnimPackage_Register
==============
*/
WeaponAnimPackage *WeaponAnimPackage_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 8401, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 8376, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_ANIM_PACKAGE, name, 0).weaponAnimPackage;
}

/*
==============
WeaponSFXPackage_Register
==============
*/
WeaponSFXPackage *WeaponSFXPackage_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 8410, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 8381, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_SFX_PACKAGE, name, 0).weaponSFXPackage;
}

/*
==============
WeaponVFXPackage_Register
==============
*/
WeaponVFXPackage *WeaponVFXPackage_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 8420, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_load_obj.cpp", 8387, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_VFX_PACKAGE, name, 0).weaponVFXPackage;
}

