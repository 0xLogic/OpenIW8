/*
==============
BG_TransientsInfilMP_InitOmnVars
==============
*/

void __fastcall BG_TransientsInfilMP_InitOmnVars(const char *mapName)
{
  ?BG_TransientsInfilMP_InitOmnVars@@YAXPEBD@Z(mapName);
}

/*
==============
BG_TransientsInfilMP_GetInfilOmnvarIndexByName
==============
*/

bool __fastcall BG_TransientsInfilMP_GetInfilOmnvarIndexByName(const char *infilName, InfilTransientType *outType, unsigned int *outIndex)
{
  return ?BG_TransientsInfilMP_GetInfilOmnvarIndexByName@@YA_NPEBDAEAW4InfilTransientType@@AEAI@Z(infilName, outType, outIndex);
}

/*
==============
BG_TransientsInfilMP_GetInfilCount
==============
*/

unsigned int __fastcall BG_TransientsInfilMP_GetInfilCount()
{
  return ?BG_TransientsInfilMP_GetInfilCount@@YAIXZ();
}

/*
==============
BG_TransientsInfilMP_GetInfilOmnvarIndexByIndex
==============
*/

unsigned int __fastcall BG_TransientsInfilMP_GetInfilOmnvarIndexByIndex(unsigned int infilIndex)
{
  return ?BG_TransientsInfilMP_GetInfilOmnvarIndexByIndex@@YAII@Z(infilIndex);
}

/*
==============
BG_TransientsInfilMP_InitTableForMap
==============
*/

void __fastcall BG_TransientsInfilMP_InitTableForMap(const char *mapName)
{
  ?BG_TransientsInfilMP_InitTableForMap@@YAXPEBD@Z(mapName);
}

/*
==============
BG_TransientsInfilMP_GetInfilType
==============
*/

InfilTransientType __fastcall BG_TransientsInfilMP_GetInfilType(unsigned int infilIndex)
{
  return ?BG_TransientsInfilMP_GetInfilType@@YA?AW4InfilTransientType@@I@Z(infilIndex);
}

/*
==============
BG_TransientsInfilMP_IsOmnvarsInited
==============
*/

bool __fastcall BG_TransientsInfilMP_IsOmnvarsInited()
{
  return ?BG_TransientsInfilMP_IsOmnvarsInited@@YA_NXZ();
}

/*
==============
BG_TransientsInfilMP_Shutdown
==============
*/

void BG_TransientsInfilMP_Shutdown(void)
{
  ?BG_TransientsInfilMP_Shutdown@@YAXXZ();
}

/*
==============
BG_TransientsInfilMP_IsTableInited
==============
*/

bool __fastcall BG_TransientsInfilMP_IsTableInited(const char *mapName)
{
  return ?BG_TransientsInfilMP_IsTableInited@@YA_NPEBD@Z(mapName);
}

/*
==============
BG_TransientsInfilMP_GetInfilName
==============
*/

const char *__fastcall BG_TransientsInfilMP_GetInfilName(unsigned int infilIndex)
{
  return ?BG_TransientsInfilMP_GetInfilName@@YAPEBDI@Z(infilIndex);
}

/*
==============
BG_TransientsInfilMP_GetInfilCount
==============
*/
__int64 BG_TransientsInfilMP_GetInfilCount()
{
  return s_bgTransientsInfil.totalCount;
}

/*
==============
BG_TransientsInfilMP_GetInfilName
==============
*/
char *BG_TransientsInfilMP_GetInfilName(unsigned int infilIndex)
{
  __int64 v1; 
  unsigned int totalCount; 

  v1 = infilIndex;
  if ( infilIndex >= s_bgTransientsInfil.totalCount )
  {
    totalCount = s_bgTransientsInfil.totalCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 239, ASSERT_TYPE_ASSERT, "(unsigned)( infilIndex ) < (unsigned)( s_bgTransientsInfil.totalCount )", "infilIndex doesn't index s_bgTransientsInfil.totalCount\n\t%i not in [0, %i)", infilIndex, totalCount) )
      __debugbreak();
  }
  return s_bgTransientsInfil.names[v1];
}

/*
==============
BG_TransientsInfilMP_GetInfilOmnvarIndexByIndex
==============
*/
__int64 BG_TransientsInfilMP_GetInfilOmnvarIndexByIndex(unsigned int infilIndex)
{
  __int64 v1; 
  unsigned int totalCount; 

  v1 = infilIndex;
  if ( infilIndex >= s_bgTransientsInfil.totalCount )
  {
    totalCount = s_bgTransientsInfil.totalCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( infilIndex ) < (unsigned)( s_bgTransientsInfil.totalCount )", "infilIndex doesn't index s_bgTransientsInfil.totalCount\n\t%i not in [0, %i)", infilIndex, totalCount) )
      __debugbreak();
  }
  return s_bgTransientsInfil.states[v1].omnVarIndex;
}

/*
==============
BG_TransientsInfilMP_GetInfilOmnvarIndexByName
==============
*/
char BG_TransientsInfilMP_GetInfilOmnvarIndexByName(const char *infilName, InfilTransientType *outType, unsigned int *outIndex)
{
  unsigned int v6; 
  __int64 v7; 
  __int64 v9; 

  if ( !infilName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 207, ASSERT_TYPE_ASSERT, "(infilName)", (const char *)&queryFormat, "infilName") )
    __debugbreak();
  v6 = BG_TransientsMP_SearchForInfilIndexByName(infilName);
  v7 = v6;
  if ( v6 == -1 )
    return 0;
  if ( v6 >= s_bgTransientsInfil.totalCount )
  {
    LODWORD(v9) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 216, ASSERT_TYPE_ASSERT, "(unsigned)( findInfil ) < (unsigned)( s_bgTransientsInfil.totalCount )", "findInfil doesn't index s_bgTransientsInfil.totalCount\n\t%i not in [0, %i)", v9, s_bgTransientsInfil.totalCount) )
      __debugbreak();
  }
  *outIndex = s_bgTransientsInfil.states[v7].omnVarIndex;
  *outType = s_bgTransientsInfil.states[v7].type;
  return 1;
}

/*
==============
BG_TransientsInfilMP_GetInfilType
==============
*/
__int64 BG_TransientsInfilMP_GetInfilType(unsigned int infilIndex)
{
  __int64 v1; 
  unsigned int totalCount; 

  v1 = infilIndex;
  if ( infilIndex >= s_bgTransientsInfil.totalCount )
  {
    totalCount = s_bgTransientsInfil.totalCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 246, ASSERT_TYPE_ASSERT, "(unsigned)( infilIndex ) < (unsigned)( s_bgTransientsInfil.totalCount )", "infilIndex doesn't index s_bgTransientsInfil.totalCount\n\t%i not in [0, %i)", infilIndex, totalCount) )
      __debugbreak();
  }
  return (unsigned __int8)s_bgTransientsInfil.states[v1].type;
}

/*
==============
BG_TransientsInfilMP_InitOmnVars
==============
*/
void BG_TransientsInfilMP_InitOmnVars(const char *mapName)
{
  __int64 i; 
  __int64 v3; 
  unsigned int IndexByName; 
  char dest[64]; 

  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 160, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  if ( s_bgTransientsInfil.omnvarsInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 161, ASSERT_TYPE_ASSERT, "(!s_bgTransientsInfil.omnvarsInited)", (const char *)&queryFormat, "!s_bgTransientsInfil.omnvarsInited") )
    __debugbreak();
  BG_TransientsInfilMP_InitTableForMap(mapName);
  for ( i = 0i64; (unsigned int)i < s_bgTransientsInfil.totalCount; s_bgTransientsInfil.states[v3].omnVarIndex = IndexByName )
  {
    v3 = i;
    Com_sprintf<64>((char (*)[64])dest, BG_INFILS_OMNVAR_FMT[(unsigned __int8)s_bgTransientsInfil.states[i].type], s_bgTransientsInfil.states[i].typeIndex);
    IndexByName = BG_Omnvar_GetIndexByName(dest);
    if ( IndexByName == -1 )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143CE9688, 0i64, dest);
    if ( s_bgTransientsInfil.states[v3].omnVarIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 178, ASSERT_TYPE_ASSERT, "(state.omnVarIndex == ((uint)-1))", (const char *)&queryFormat, "state.omnVarIndex == OMNVAR_NONE") )
      __debugbreak();
    i = (unsigned int)(i + 1);
  }
  s_bgTransientsInfil.omnvarsInited = 1;
}

/*
==============
BG_TransientsInfilMP_InitTableForMap
==============
*/
void BG_TransientsInfilMP_InitTableForMap(const char *mapName)
{
  __int64 v2; 
  const char *v3; 
  char v4; 
  __int64 v5; 
  char v6; 
  unsigned int v7; 
  const char **v8; 
  int v9; 
  int v10; 
  int ColumnCount; 
  const char *ColumnValueForRow; 
  TempThreadPriority tempPriority; 
  StringTable *tablePtr; 

  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 138, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  Sys_LockWrite(&s_bgTransientsTableInitLock);
  v2 = 0x7FFFFFFFi64;
  v3 = mapName;
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v4 = v3[s_bgTransientsInfil.tableInitMap - mapName];
    v5 = v2;
    v6 = *v3++;
    --v2;
    if ( !v5 )
      break;
    if ( v4 != v6 )
    {
      memset_0(&s_bgTransientsInfil, 0, sizeof(s_bgTransientsInfil));
      v7 = 0;
      v8 = (const char **)BG_INFILS_CSV_FILES;
      do
      {
        StringTable_GetAsset(*v8, (const StringTable **)&tablePtr);
        v9 = StringTable_LookupRowNumForValue(tablePtr, 0, mapName);
        if ( v9 >= 0 )
        {
          v10 = 1;
          ColumnCount = StringTable_GetColumnCount(tablePtr);
          if ( ColumnCount > 1 )
          {
            do
            {
              ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v9, v10);
              if ( ColumnValueForRow )
              {
                if ( *ColumnValueForRow )
                  BG_TransientsMP_AddInfilTransient((const InfilTransientType)v7, ColumnValueForRow);
              }
              else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(val)", (const char *)&queryFormat, "val") )
              {
                __debugbreak();
              }
              ++v10;
            }
            while ( v10 < ColumnCount );
          }
        }
        ++v7;
        ++v8;
      }
      while ( v7 < 2 );
      Core_strcpy(s_bgTransientsInfil.tableInitMap, 0x40ui64, mapName);
      break;
    }
  }
  while ( v4 );
  if ( s_bgTransientsTableInitLock.writeCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", s_bgTransientsTableInitLock.writeCount, 1) )
    __debugbreak();
  if ( s_bgTransientsTableInitLock.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr cs:s_bgTransientsTableInitLock.tempPriority.threadHandle }
  s_bgTransientsTableInitLock.writeThreadId = 0;
  __asm { vmovups xmmword ptr [rsp+88h+tempPriority.threadHandle], xmm0 }
  if ( ((unsigned __int8)&s_bgTransientsTableInitLock.writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_bgTransientsTableInitLock.writeCount) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_bgTransientsTableInitLock.writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
    __debugbreak();
  Sys_TempThreadPriorityEnd(&tempPriority);
}

/*
==============
BG_TransientsInfilMP_IsOmnvarsInited
==============
*/
_BOOL8 BG_TransientsInfilMP_IsOmnvarsInited()
{
  return s_bgTransientsInfil.omnvarsInited;
}

/*
==============
BG_TransientsInfilMP_IsTableInited
==============
*/
bool BG_TransientsInfilMP_IsTableInited(const char *mapName)
{
  const char *v1; 
  __int64 v2; 
  int v3; 
  char *v4; 
  char v5; 
  __int64 v6; 
  char v7; 

  v1 = mapName;
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 194, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  v2 = 0x7FFFFFFFi64;
  v3 = 1;
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v4 = (char *)(s_bgTransientsInfil.tableInitMap - v1);
  while ( 1 )
  {
    v5 = v1[(_QWORD)v4];
    v6 = v2;
    v7 = *v1++;
    --v2;
    if ( !v6 )
    {
LABEL_11:
      v3 = 0;
      return v3 == 0;
    }
    if ( v5 != v7 )
      break;
    if ( !v5 )
      goto LABEL_11;
  }
  if ( v5 < v7 )
    v3 = -1;
  return v3 == 0;
}

/*
==============
BG_TransientsInfilMP_Shutdown
==============
*/
void BG_TransientsInfilMP_Shutdown(void)
{
  memset_0(&s_bgTransientsInfil, 0, sizeof(s_bgTransientsInfil));
}

/*
==============
BG_TransientsMP_AddInfilTransient
==============
*/
void BG_TransientsMP_AddInfilTransient(const InfilTransientType type, const char *const infilName)
{
  const char *v4; 
  char v5; 
  __int64 v6; 
  char v7; 
  unsigned int *v8; 
  BGTransientInfilState *v9; 
  int v10; 
  unsigned __int8 i; 
  unsigned int v12; 
  char *fmt; 

  if ( (unsigned __int8)type >= INFIL_TRTYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( s_bgTransientsInfil.counts ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( s_bgTransientsInfil.counts )\n\t%i not in [0, %i)", (unsigned __int8)type, 2) )
    __debugbreak();
  if ( !infilName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v4 = infilName;
  if ( *infilName && *infilName > 32 )
  {
    v5 = *infilName;
    v6 = 0x1000000000001001i64;
    while ( 1 )
    {
      v7 = v5;
      if ( (unsigned __int8)(v5 - 65) <= 0x19u || (unsigned __int8)(v5 - 32) <= 0x3Cu && _bittest64(&v6, (char)(v5 - 32)) )
        break;
      if ( v5 == 124 )
        break;
      v5 = *++v4;
      if ( !v5 )
      {
        if ( v7 > 32 )
          goto LABEL_18;
        break;
      }
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 86, ASSERT_TYPE_ASSERT, "( DB_IsAssetNameValid( infilName ) )", "Infil name '%s' is invalid, use lowercase names", infilName) )
    __debugbreak();
LABEL_18:
  v8 = &s_bgTransientsInfil.counts[(unsigned __int8)type];
  if ( *v8 == BG_INFILS_MAX_COUNTS[(unsigned __int8)type] )
  {
    LODWORD(fmt) = BG_INFILS_MAX_COUNTS[(unsigned __int8)type];
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143CE9538, 0i64, (unsigned __int8)type, fmt);
  }
  if ( BG_TransientsMP_SearchForInfilIndexByName(infilName) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 95, ASSERT_TYPE_ASSERT, "( BG_TransientsMP_SearchForInfilIndexByName( infilName ) == 0xffffffff )", "Infil %s listed twice!", infilName) )
    __debugbreak();
  v9 = &s_bgTransientsInfil.states[s_bgTransientsInfil.totalCount];
  Core_strcpy(s_bgTransientsInfil.names[(unsigned __int64)s_bgTransientsInfil.totalCount], 0x40ui64, infilName);
  v9->type = type;
  v10 = 0;
  for ( i = *infilName; *infilName; i = *infilName )
  {
    ++infilName;
    v10 = i ^ (16777619 * v10);
  }
  v9->nameHash = v10;
  v9->omnVarIndex = -1;
  v12 = *v8;
  if ( *v8 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v12, "unsigned", *v8) )
    __debugbreak();
  v9->typeIndex = v12;
  ++*v8;
  ++s_bgTransientsInfil.totalCount;
}

/*
==============
BG_TransientsMP_SearchForInfilIndexByName
==============
*/
__int64 BG_TransientsMP_SearchForInfilIndexByName(const char *const infilName)
{
  const char *v2; 
  char v3; 
  __int64 v4; 
  char v5; 
  unsigned __int8 v6; 
  __int64 v7; 
  int v8; 
  const char *i; 
  unsigned __int64 v11; 
  __int64 v12; 
  const char *v13; 
  const char *v14; 
  char v15; 
  __int64 v16; 
  char v17; 

  if ( !infilName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v2 = infilName;
  if ( *infilName && *infilName > 32 )
  {
    v3 = *infilName;
    v4 = 0x1000000000001001i64;
    while ( 1 )
    {
      v5 = v3;
      if ( (unsigned __int8)(v3 - 65) <= 0x19u || (unsigned __int8)(v3 - 32) <= 0x3Cu && _bittest64(&v4, (char)(v3 - 32)) )
        break;
      if ( v3 == 124 )
        break;
      v3 = *++v2;
      if ( !v3 )
      {
        if ( v5 > 32 )
          goto LABEL_15;
        break;
      }
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 66, ASSERT_TYPE_ASSERT, "( DB_IsAssetNameValid( infilName ) )", "Infil name '%s' is invalid, use lowercase names", infilName) )
    __debugbreak();
LABEL_15:
  v6 = *infilName;
  v7 = 0i64;
  v8 = 0;
  for ( i = infilName; *i; v6 = *i )
  {
    ++i;
    v8 = v6 ^ (16777619 * v8);
  }
  if ( !s_bgTransientsInfil.totalCount )
    return 0xFFFFFFFFi64;
  while ( s_bgTransientsInfil.states[v7].nameHash != v8 )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= s_bgTransientsInfil.totalCount )
      return 0xFFFFFFFFi64;
  }
  v11 = (unsigned __int64)(unsigned int)v7 << 6;
  v12 = 0x7FFFFFFFi64;
  v13 = &s_bgTransientsInfil.names[0][v11];
  v14 = v13;
  if ( (BGTransientsGlob *)((char *)&s_bgTransientsInfil + v11) == (BGTransientsGlob *)-212i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, (AssertType)((_DWORD)v13 + 1), "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v15 = v14[infilName - v13];
    v16 = v12;
    v17 = *v14++;
    --v12;
    if ( !v16 )
      break;
    if ( v15 != v17 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_transients_infil_mp.cpp", 74, ASSERT_TYPE_ASSERT, "( I_strcmp( infilName, s_bgTransientsInfil.names[i] ) == 0 )", "Hash collision %s == %s", infilName, v13) )
        __debugbreak();
      return (unsigned int)v7;
    }
  }
  while ( v15 );
  return (unsigned int)v7;
}

