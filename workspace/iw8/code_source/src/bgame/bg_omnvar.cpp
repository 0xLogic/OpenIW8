/*
==============
BG_Omnvar_GetDataAtPmoveTime
==============
*/

bool __fastcall BG_Omnvar_GetDataAtPmoveTime(const OmnvarPmoveData *pmoveData, unsigned int primaryIdx, int pmoveTime, OmnvarData *outData)
{
  return ?BG_Omnvar_GetDataAtPmoveTime@@YA_NPEBUOmnvarPmoveData@@IHPEAUOmnvarData@@@Z(pmoveData, primaryIdx, pmoveTime, outData);
}

/*
==============
BG_Omnvar_DumpList
==============
*/

void BG_Omnvar_DumpList(void)
{
  ?BG_Omnvar_DumpList@@YAXXZ();
}

/*
==============
BG_Omnvar_LoadGamescopeDefaults
==============
*/

void __fastcall BG_Omnvar_LoadGamescopeDefaults(OmnvarData *omnvars)
{
  ?BG_Omnvar_LoadGamescopeDefaults@@YAXPEAUOmnvarData@@@Z(omnvars);
}

/*
==============
BG_Omnvar_GetPlayerStateDefs
==============
*/

const OmnvarDef *__fastcall BG_Omnvar_GetPlayerStateDefs()
{
  return ?BG_Omnvar_GetPlayerStateDefs@@YAPEBUOmnvarDef@@XZ();
}

/*
==============
BG_Omnvar_GetTypeString
==============
*/

const char *__fastcall BG_Omnvar_GetTypeString(const OmnvarDef *const omnvarDef)
{
  return ?BG_Omnvar_GetTypeString@@YAPEBDQEBUOmnvarDef@@@Z(omnvarDef);
}

/*
==============
BG_Omnvar_GetDefs
==============
*/

const OmnvarDef *__fastcall BG_Omnvar_GetDefs()
{
  return ?BG_Omnvar_GetDefs@@YAPEBUOmnvarDef@@XZ();
}

/*
==============
BG_Omnvar_LoadClientscopeDefaults
==============
*/

void __fastcall BG_Omnvar_LoadClientscopeDefaults(OmnvarData *omnvars)
{
  ?BG_Omnvar_LoadClientscopeDefaults@@YAXPEAUOmnvarData@@@Z(omnvars);
}

/*
==============
BG_Omnvar_InitializeDefaultValues
==============
*/

void BG_Omnvar_InitializeDefaultValues(void)
{
  ?BG_Omnvar_InitializeDefaultValues@@YAXXZ();
}

/*
==============
BG_Omnvar_PerClientSpectateCount
==============
*/

unsigned int __fastcall BG_Omnvar_PerClientSpectateCount()
{
  return ?BG_Omnvar_PerClientSpectateCount@@YAIXZ();
}

/*
==============
BG_Omnvar_GetNCString
==============
*/

int __fastcall BG_Omnvar_GetNCString(const OmnvarDef *def, const OmnvarData *data, const char **outStringValue)
{
  return ?BG_Omnvar_GetNCString@@YAHPEBUOmnvarDef@@PEBUOmnvarData@@PEAPEBD@Z(def, data, outStringValue);
}

/*
==============
BG_Omnvar_PmoveCount
==============
*/

unsigned int __fastcall BG_Omnvar_PmoveCount()
{
  return ?BG_Omnvar_PmoveCount@@YAIXZ();
}

/*
==============
BG_Omnvar_LoadPlayerstateDefaults
==============
*/

void __fastcall BG_Omnvar_LoadPlayerstateDefaults(OmnvarData *omnvars)
{
  ?BG_Omnvar_LoadPlayerstateDefaults@@YAXPEAUOmnvarData@@@Z(omnvars);
}

/*
==============
BG_Omnvar_LoadTables
==============
*/

void __fastcall BG_Omnvar_LoadTables(GameModeType gameMode, const char *gameType, const char *mapname)
{
  ?BG_Omnvar_LoadTables@@YAXW4GameModeType@@PEBD1@Z(gameMode, gameType, mapname);
}

/*
==============
BG_Omnvar_GetDefaults
==============
*/

const OmnvarData *__fastcall BG_Omnvar_GetDefaults()
{
  return ?BG_Omnvar_GetDefaults@@YAPEBUOmnvarData@@XZ();
}

/*
==============
BG_Omnvar_GetDataAtPmoveTime
==============
*/

void __fastcall BG_Omnvar_GetDataAtPmoveTime(unsigned int clientEntIndex, const BgHandler *handler, unsigned int primaryIdx, int pmoveTime, OmnvarData *outData)
{
  ?BG_Omnvar_GetDataAtPmoveTime@@YAXIPEBVBgHandler@@IHPEAUOmnvarData@@@Z(clientEntIndex, handler, primaryIdx, pmoveTime, outData);
}

/*
==============
BG_Omnvar_PerPlayerstateMinBitsForIndex
==============
*/

unsigned int __fastcall BG_Omnvar_PerPlayerstateMinBitsForIndex()
{
  return ?BG_Omnvar_PerPlayerstateMinBitsForIndex@@YAIXZ();
}

/*
==============
BG_Omnvar_PerSnapMinBitsForIndex
==============
*/

unsigned int __fastcall BG_Omnvar_PerSnapMinBitsForIndex()
{
  return ?BG_Omnvar_PerSnapMinBitsForIndex@@YAIXZ();
}

/*
==============
BG_Omnvar_GetValueString
==============
*/

void __fastcall BG_Omnvar_GetValueString(const OmnvarDef *const omnvarDef, const OmnvarData *const data, char *valueBuf, const unsigned int valueBufLen)
{
  ?BG_Omnvar_GetValueString@@YAXQEBUOmnvarDef@@QEBUOmnvarData@@PEADI@Z(omnvarDef, data, valueBuf, valueBufLen);
}

/*
==============
BG_Omnvar_PerClientCount
==============
*/

unsigned int __fastcall BG_Omnvar_PerClientCount()
{
  return ?BG_Omnvar_PerClientCount@@YAIXZ();
}

/*
==============
BG_Omnvar_IsInitialized
==============
*/

bool __fastcall BG_Omnvar_IsInitialized()
{
  return ?BG_Omnvar_IsInitialized@@YA_NXZ();
}

/*
==============
BG_Omnvar_PerGameCount
==============
*/

unsigned int __fastcall BG_Omnvar_PerGameCount()
{
  return ?BG_Omnvar_PerGameCount@@YAIXZ();
}

/*
==============
BG_Omnvar_GetIndexByName
==============
*/

unsigned int __fastcall BG_Omnvar_GetIndexByName(const char *name)
{
  return ?BG_Omnvar_GetIndexByName@@YAIPEBD@Z(name);
}

/*
==============
BG_Omnvar_PerSnapCount
==============
*/

unsigned int __fastcall BG_Omnvar_PerSnapCount()
{
  return ?BG_Omnvar_PerSnapCount@@YAIXZ();
}

/*
==============
BG_Omnvar_PerPlayerstateCount
==============
*/

unsigned int __fastcall BG_Omnvar_PerPlayerstateCount()
{
  return ?BG_Omnvar_PerPlayerstateCount@@YAIXZ();
}

/*
==============
BG_Omnvar_PmoveIndexToPrimaryIndex
==============
*/

unsigned int __fastcall BG_Omnvar_PmoveIndexToPrimaryIndex(unsigned int pmoveIdx)
{
  return ?BG_Omnvar_PmoveIndexToPrimaryIndex@@YAII@Z(pmoveIdx);
}

/*
==============
BG_Omnvar_InsertPmoveValue
==============
*/

void __fastcall BG_Omnvar_InsertPmoveValue(const OmnvarData *data, unsigned int pmoveIdx, OmnvarPmoveData *pmoveData)
{
  ?BG_Omnvar_InsertPmoveValue@@YAXPEBUOmnvarData@@IPEAUOmnvarPmoveData@@@Z(data, pmoveIdx, pmoveData);
}

/*
==============
BG_Omnvar_GetDef
==============
*/

const OmnvarDef *__fastcall BG_Omnvar_GetDef(unsigned int idx)
{
  return ?BG_Omnvar_GetDef@@YAPEBUOmnvarDef@@I@Z(idx);
}

/*
==============
BG_Omnvar_GetDataChecksum
==============
*/

unsigned int __fastcall BG_Omnvar_GetDataChecksum()
{
  return ?BG_Omnvar_GetDataChecksum@@YAIXZ();
}

/*
==============
BG_Omnvar_ClearTables
==============
*/

void BG_Omnvar_ClearTables(void)
{
  ?BG_Omnvar_ClearTables@@YAXXZ();
}

/*
==============
BG_Omnvar_AddStringToStringBuffer
==============
*/
char *BG_Omnvar_AddStringToStringBuffer(char **const omnvarStringBufferTail, const char *const omnvarStringBufferEnd, const char *const str)
{
  char *v3; 
  __int64 v6; 
  size_t v7; 

  v3 = *omnvarStringBufferTail;
  v6 = -1i64;
  do
    ++v6;
  while ( str[v6] );
  v7 = v6 + 1;
  if ( v7 > omnvarStringBufferEnd - v3 )
    Sys_Error((const ObfuscateErrorText)&error);
  memcpy_0(v3, str, v7);
  *omnvarStringBufferTail += v7;
  return v3;
}

/*
==============
BG_Omnvar_BuildHashTable
==============
*/
void BG_Omnvar_BuildHashTable()
{
  __int64 v0; 
  IWHashTableN<2048,IWHashTable_Node32,IWHashTable_Node32::Hasher> *v1; 
  __int64 i; 
  const char *name; 
  OmnvarDef *v4; 
  int v5; 
  unsigned int j; 
  __int64 v7; 
  unsigned int headNodeIndex; 
  IWHashTable_Bucket<unsigned int> *v9; 
  unsigned int nextNodeIndex; 
  unsigned int v11; 
  const char *v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  v0 = 128i64;
  v1 = &s_omnvarHashTable;
  do
  {
    *(_QWORD *)&v1->buckets[0].headNodeIndex = -1i64;
    *(_QWORD *)&v1->buckets[2].headNodeIndex = -1i64;
    *(_QWORD *)&v1->buckets[4].headNodeIndex = -1i64;
    v1 = (IWHashTableN<2048,IWHashTable_Node32,IWHashTable_Node32::Hasher> *)((char *)v1 + 64);
    *(_QWORD *)&v1[-1].buckets[2038].headNodeIndex = -1i64;
    *(_QWORD *)&v1[-1].buckets[2040].headNodeIndex = -1i64;
    *(_QWORD *)&v1[-1].buckets[2042].headNodeIndex = -1i64;
    *(_QWORD *)&v1[-1].buckets[2044].headNodeIndex = -1i64;
    *(_QWORD *)&v1[-1].buckets[2046].headNodeIndex = -1i64;
    --v0;
  }
  while ( v0 );
  DebugWipe(s_omnvarHashNodes, 0x4000ui64);
  for ( i = 0i64; (unsigned int)i < (unsigned int)s_omnvarDefCount; i = (unsigned int)(i + 1) )
  {
    name = s_omnvarDefs[i].name;
    v4 = &s_omnvarDefs[i];
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 110, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    v5 = *name;
    for ( j = 0; *name; v5 = *name )
    {
      ++name;
      j = v5 + 33 * j;
    }
    v7 = j & 0x7FF;
    headNodeIndex = s_omnvarHashTable.buckets[v7].headNodeIndex;
    v9 = &s_omnvarHashTable.buckets[v7];
    if ( headNodeIndex != -1 )
    {
      while ( s_omnvarHashNodes[headNodeIndex].key != j )
      {
        headNodeIndex = s_omnvarHashNodes[headNodeIndex].nextNodeIndex;
        if ( headNodeIndex == -1 )
          goto LABEL_20;
      }
      if ( headNodeIndex >= 0x800 )
      {
        LODWORD(v14) = 2048;
        LODWORD(v13) = headNodeIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 708, ASSERT_TYPE_ASSERT, "(unsigned)( hashFindIndex ) < (unsigned)( ( sizeof( *array_counter( s_omnvarDefs ) ) + 0 ) )", "hashFindIndex doesn't index s_omnvarDefs\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( headNodeIndex == (_DWORD)i )
      {
        LODWORD(v16) = i;
        LODWORD(v15) = headNodeIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 709, ASSERT_TYPE_ASSERT, "( hashFindIndex ) != ( omnvarIdx )", "%s != %s\n\t%i, %i", "hashFindIndex", "omnvarIdx", v15, v16) )
          __debugbreak();
      }
      BG_Omnvar_DumpList();
      Sys_Error((const ObfuscateErrorText)&stru_143CC66C0, v4->name, s_omnvarDefs[headNodeIndex].name);
    }
LABEL_20:
    nextNodeIndex = v9->headNodeIndex;
    if ( v9->headNodeIndex != -1 )
    {
      while ( s_omnvarHashNodes[nextNodeIndex].key != j )
      {
        nextNodeIndex = s_omnvarHashNodes[nextNodeIndex].nextNodeIndex;
        if ( nextNodeIndex == -1 )
          goto LABEL_27;
      }
      if ( nextNodeIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\hash_table.h", 372, ASSERT_TYPE_ASSERT, "(this->Find( key, hash, nodes ) == Base::s_nullNodeIndex)", (const char *)&queryFormat, "this->Find( key, hash, nodes ) == Base::s_nullNodeIndex") )
        __debugbreak();
    }
LABEL_27:
    v11 = v9->headNodeIndex;
    v12 = v4->name;
    v9->headNodeIndex = i;
    s_omnvarHashNodes[i].nextNodeIndex = v11;
    s_omnvarHashNodes[i].key = j;
    if ( BG_Omnvar_GetIndexByName(v12) != (_DWORD)i )
    {
      LODWORD(v16) = i;
      LODWORD(v15) = BG_Omnvar_GetIndexByName(v4->name);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 719, ASSERT_TYPE_ASSERT, "( BG_Omnvar_GetIndexByName( addOmnvar.name ) ) == ( omnvarIdx )", "%s == %s\n\t%i, %i", "BG_Omnvar_GetIndexByName( addOmnvar.name )", "omnvarIdx", v15, v16) )
        __debugbreak();
    }
  }
}

/*
==============
BG_Omnvar_ClearTables
==============
*/
void BG_Omnvar_ClearTables(void)
{
  IWHashTableN<2048,IWHashTable_Node32,IWHashTable_Node32::Hasher> *v0; 
  __int64 v1; 

  memset_0(s_omnvarDefs, 0, sizeof(s_omnvarDefs));
  memset_0(s_omnvarDefaults, 0, sizeof(s_omnvarDefaults));
  v0 = &s_omnvarHashTable;
  v1 = 128i64;
  do
  {
    *(_QWORD *)&v0->buckets[0].headNodeIndex = -1i64;
    *(_QWORD *)&v0->buckets[2].headNodeIndex = -1i64;
    *(_QWORD *)&v0->buckets[4].headNodeIndex = -1i64;
    v0 = (IWHashTableN<2048,IWHashTable_Node32,IWHashTable_Node32::Hasher> *)((char *)v0 + 64);
    *(_QWORD *)&v0[-1].buckets[2038].headNodeIndex = -1i64;
    *(_QWORD *)&v0[-1].buckets[2040].headNodeIndex = -1i64;
    *(_QWORD *)&v0[-1].buckets[2042].headNodeIndex = -1i64;
    *(_QWORD *)&v0[-1].buckets[2044].headNodeIndex = -1i64;
    *(_QWORD *)&v0[-1].buckets[2046].headNodeIndex = -1i64;
    --v1;
  }
  while ( v1 );
  LODWORD(s_omnvarDefCount) = 0;
  s_omnvarStringBufferTail = s_omnvarStringBuffer;
  s_omnvarGamescopeCount = 0;
  s_omnvarPlayerstateCount = 0;
  s_omnvarClientscopeCount = 0;
  s_omnvarClientSpectateCount = 0;
  s_omnvarPmoveCount = 0;
  s_omnvarSnapCount = 0;
  s_omnvarSnapIndexBits = 0;
  s_omnvarPlayerstateIndexBits = 0;
  s_omnvarCountCap = 0;
  s_omnvarDataChecksum = 0;
}

/*
==============
BG_Omnvar_DefSort
==============
*/
int BG_Omnvar_DefSort(const void *a, const void *b)
{
  int v3; 
  int v5; 
  int v6; 
  int result; 

  v3 = ((*((unsigned __int8 *)a + 33) >> 2) & 1) - ((*((unsigned __int8 *)b + 33) >> 2) & 1);
  v5 = ((*((unsigned __int8 *)a + 33) >> 1) & 1) - ((*((unsigned __int8 *)b + 33) >> 1) & 1);
  v6 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) )
    v6 = (*((unsigned __int8 *)b + 33) >> 7) - (*((unsigned __int8 *)a + 33) >> 7);
  if ( (!*(_QWORD *)a || !*(_QWORD *)b) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 257, ASSERT_TYPE_ASSERT, "(lhs->name && rhs->name)", (const char *)&queryFormat, "lhs->name && rhs->name") )
    __debugbreak();
  result = I_strcmp(*(const char **)a, *(const char **)b);
  if ( v3 )
    return v3;
  if ( v5 )
    return v5;
  if ( v6 )
    return v6;
  return result;
}

/*
==============
BG_Omnvar_DumpList
==============
*/
void BG_Omnvar_DumpList(void)
{
  unsigned int v0; 
  unsigned int v1; 
  __int64 v2; 
  __int64 i; 
  const char *name; 
  int v5; 
  __int64 j; 
  signed __int8 flags; 
  const char *v8; 
  unsigned __int8 numbits; 
  int v10; 
  OmnvarType type; 
  unsigned int v12; 
  char v13; 
  unsigned int v14; 

  v0 = 0;
  v1 = 0;
  Com_Printf(16, "Dumping Omnvars\n");
  v2 = (unsigned int)s_omnvarDefCount;
  for ( i = 0i64; (unsigned int)i < (unsigned int)s_omnvarDefCount; i = (unsigned int)(i + 1) )
  {
    name = s_omnvarDefs[i].name;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 110, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    v5 = *name;
    for ( j = 0i64; *name; v5 = *name )
    {
      ++name;
      j = (unsigned int)(v5 + 33 * j);
    }
    Com_Printf(16, "%s (%u)", s_omnvarDefs[i].name, j);
    switch ( s_omnvarDefs[i].type )
    {
      case OMNVAR_TYPE_BOOL:
        Com_Printf(16, ", type = bool");
        break;
      case OMNVAR_TYPE_FLOAT:
        Com_Printf(16, ", type = float");
        break;
      case OMNVAR_TYPE_INT:
        Com_Printf(16, ", type = int");
        break;
      case OMNVAR_TYPE_UINT:
        Com_Printf(16, ", type = uint");
        break;
      case OMNVAR_TYPE_TIME:
        Com_Printf(16, ", type = time");
        break;
      case OMNVAR_TYPE_NCS_LUI:
        Com_Printf(16, ", type = ncs lui");
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 1075, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          __debugbreak();
        break;
    }
    flags = s_omnvarDefs[i].flags;
    if ( (flags & 4) != 0 )
    {
      Com_Printf(16, ", scope = client archived");
    }
    else
    {
      if ( (flags & 2) != 0 )
      {
        v8 = ", scope = client (see spectated player's values)";
        if ( flags >= 0 )
          v8 = ", scope = client";
      }
      else
      {
        v8 = ", scope = game";
      }
      Com_Printf(16, v8);
    }
    numbits = s_omnvarDefs[i].numbits;
    if ( numbits )
    {
      Com_Printf(16, ", numbits = %i\n", numbits);
      if ( (s_omnvarDefs[i].flags & 4) != 0 )
      {
        v10 = s_omnvarDefs[i].numbits;
        v0 += v10;
        v1 += v10;
      }
    }
    else
    {
      type = s_omnvarDefs[i].type;
      if ( type == OMNVAR_TYPE_FLOAT )
      {
        Com_Printf(16, ", numbits = 16 or 32\n");
        v12 = v0 + 16;
        v13 = s_omnvarDefs[i].flags & 4;
        if ( !v13 )
          v12 = v0;
        v0 = v12;
        v14 = v1 + 32;
        if ( !v13 )
          v14 = v1;
        v1 = v14;
      }
      else if ( type == OMNVAR_TYPE_TIME )
      {
        Com_Printf(16, ", numbits = 4 or 32\n");
        if ( (s_omnvarDefs[i].flags & 4) != 0 )
        {
          v0 += 4;
          v1 += 32;
        }
      }
    }
    v2 = (unsigned int)s_omnvarDefCount;
  }
  Com_Printf(16, "Total: %i of %i\n", v2, s_omnvarCountCap);
  Com_Printf(16, "Num Game Scope: %i\n", s_omnvarGamescopeCount);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) )
  {
    Com_Printf(16, "Num Client Scope: %i\n", s_omnvarClientscopeCount);
    Com_Printf(16, "Num Playerstate Archived: %i of %i\n", s_omnvarPlayerstateCount, 80i64);
    Com_Printf(16, "\tNum Archived Bits Min: %i\n", v0);
    Com_Printf(16, "\tNum Archived Bits Max: %i\n", v1);
  }
}

/*
==============
BG_Omnvar_GetDataAtPmoveTime
==============
*/
void BG_Omnvar_GetDataAtPmoveTime(unsigned int clientEntIndex, const BgHandler *handler, unsigned int primaryIdx, int pmoveTime, OmnvarData *outData)
{
  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 959, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  *outData = 0i64;
  handler->GetOmnvarDataAtPmoveTime((BgHandler *)handler, clientEntIndex, primaryIdx, pmoveTime, outData);
}

/*
==============
BG_Omnvar_GetDataAtPmoveTime
==============
*/
char BG_Omnvar_GetDataAtPmoveTime(const OmnvarPmoveData *pmoveData, unsigned int primaryIdx, int pmoveTime, OmnvarData *outData)
{
  __int64 v4; 
  __int64 v8; 
  __int64 pmoveIndex; 
  __int64 currentBufferIndex; 
  OmnvarData *v11; 
  unsigned int timeModified; 
  char *v13; 
  OmnvarData *v14; 
  OmnvarData *v15; 
  int v17; 
  signed int v18; 
  int v19; 
  float v20; 
  float v21; 
  double v22; 
  __int64 v23; 

  v4 = primaryIdx;
  if ( !pmoveData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 870, ASSERT_TYPE_ASSERT, "(pmoveData)", (const char *)&queryFormat, "pmoveData") )
    __debugbreak();
  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 871, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 872, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  *outData = 0i64;
  if ( (unsigned int)v4 >= (unsigned int)s_omnvarDefCount )
  {
    LODWORD(v23) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_omnvarDefCount )", "idx doesn't index s_omnvarDefCount\n\t%i not in [0, %i)", v23, s_omnvarDefCount) )
      __debugbreak();
  }
  v8 = v4;
  if ( s_omnvarDefs[v8].type != OMNVAR_TYPE_FLOAT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 880, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_FLOAT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_FLOAT") )
    __debugbreak();
  pmoveIndex = (unsigned int)s_omnvarDefs[v8].pmoveIndex;
  if ( (unsigned int)pmoveIndex >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 884, ASSERT_TYPE_ASSERT, "(pmoveIdx < 30)", (const char *)&queryFormat, "pmoveIdx < MAX_PMOVE_OMNVARS") )
    __debugbreak();
  currentBufferIndex = pmoveData->currentBufferIndex;
  v11 = pmoveData->omnvars[pmoveIndex];
  timeModified = v11[currentBufferIndex].timeModified;
  v13 = (char *)&v11[((int)currentBufferIndex + 1) % 0xAu];
  if ( !timeModified || !*(_DWORD *)v13 )
    return 0;
  v14 = NULL;
  v15 = NULL;
  if ( pmoveTime < timeModified )
  {
    if ( (unsigned int)pmoveTime > *(_DWORD *)v13 )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = ((int)currentBufferIndex - v17 + 10) % 0xAu;
        if ( pmoveTime > v11[v18].timeModified )
          break;
        if ( (unsigned int)++v17 >= 0xA )
          goto LABEL_28;
      }
      v14 = &v11[v18];
      v19 = 1;
      while ( 1 )
      {
        v13 = (char *)&v11[(v19 + v18) % 0xAu];
        if ( (unsigned int)pmoveTime <= *(_DWORD *)v13 )
          break;
        if ( (unsigned int)++v19 >= 0xA )
          goto LABEL_26;
      }
    }
    else
    {
      v14 = &v11[((int)currentBufferIndex + 1) % 0xAu];
    }
    v15 = (OmnvarData *)v13;
  }
  else
  {
    v14 = &v11[currentBufferIndex];
    v15 = v14;
  }
LABEL_26:
  if ( !v14 || !v15 )
  {
LABEL_28:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 940, ASSERT_TYPE_ASSERT, "(startKey && endKey)", (const char *)&queryFormat, "startKey && endKey") )
      __debugbreak();
  }
  if ( v14->timeModified == v15->timeModified )
  {
    *outData = *v14;
    return 1;
  }
  else
  {
    if ( v14->timeModified >= v15->timeModified && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 948, ASSERT_TYPE_ASSERT, "(endKey->timeModified > startKey->timeModified)", (const char *)&queryFormat, "endKey->timeModified > startKey->timeModified") )
      __debugbreak();
    v20 = (float)v15->timeModified;
    v21 = (float)v14->timeModified;
    v22 = ApplyLinearMap((float)pmoveTime, v21, v20);
    outData->current.value = (float)((float)(1.0 - *(float *)&v22) * v14->current.value) + (float)(*(float *)&v22 * v15->current.value);
    return 1;
  }
}

/*
==============
BG_Omnvar_GetDataChecksum
==============
*/
__int64 BG_Omnvar_GetDataChecksum()
{
  return s_omnvarDataChecksum;
}

/*
==============
BG_Omnvar_GetDef
==============
*/
OmnvarDef *BG_Omnvar_GetDef(unsigned int idx)
{
  __int64 v1; 
  int v4; 

  v1 = idx;
  if ( idx >= (unsigned int)s_omnvarDefCount )
  {
    v4 = s_omnvarDefCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_omnvarDefCount )", "idx doesn't index s_omnvarDefCount\n\t%i not in [0, %i)", idx, v4) )
      __debugbreak();
  }
  return &s_omnvarDefs[v1];
}

/*
==============
BG_Omnvar_GetDefaults
==============
*/
OmnvarData *BG_Omnvar_GetDefaults()
{
  return s_omnvarDefaults;
}

/*
==============
BG_Omnvar_GetDefs
==============
*/
OmnvarDef *BG_Omnvar_GetDefs()
{
  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 202, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  return s_omnvarDefs;
}

/*
==============
BG_Omnvar_GetIndexByName
==============
*/
__int64 BG_Omnvar_GetIndexByName(const char *name)
{
  unsigned int v2; 
  unsigned int headNodeIndex; 
  __int64 v5; 
  const char *v6; 
  const char *v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  __int64 v11; 

  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 824, ASSERT_TYPE_ASSERT, "( ( BG_Omnvar_IsInitialized() ) )", "( name ) = %s", name) )
    __debugbreak();
  v2 = BG_Omnvar_HashName(name);
  headNodeIndex = s_omnvarHashTable.buckets[v2 & 0x7FF].headNodeIndex;
  if ( headNodeIndex == -1 )
    return 0xFFFFFFFFi64;
  while ( s_omnvarHashNodes[headNodeIndex].key != v2 )
  {
    headNodeIndex = s_omnvarHashNodes[headNodeIndex].nextNodeIndex;
    if ( headNodeIndex == -1 )
      return 0xFFFFFFFFi64;
  }
  if ( headNodeIndex >= 0x800 )
  {
    LODWORD(v11) = headNodeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 832, ASSERT_TYPE_ASSERT, "(unsigned)( omnvarIdx ) < (unsigned)( ( sizeof( *array_counter( s_omnvarDefs ) ) + 0 ) )", "omnvarIdx doesn't index s_omnvarDefs\n\t%i not in [0, %i)", v11, 2048) )
      __debugbreak();
  }
  v5 = 0x7FFFFFFFi64;
  v6 = s_omnvarDefs[headNodeIndex].name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = (const char *)(name - v6);
  while ( 1 )
  {
    v8 = v6[(_QWORD)v7];
    v9 = v5;
    v10 = *v6++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 833, ASSERT_TYPE_ASSERT, "( ( !I_strcmp( name, s_omnvarDefs[omnvarIdx].name ) ) )", "( name ) = %s", name) )
        __debugbreak();
      return headNodeIndex;
    }
    if ( !v8 )
      return headNodeIndex;
  }
  return headNodeIndex;
}

/*
==============
BG_Omnvar_GetNCString
==============
*/
int BG_Omnvar_GetNCString(const OmnvarDef *def, const OmnvarData *data, const char **outStringValue)
{
  if ( def->type == OMNVAR_TYPE_NCS_LUI )
    return NetConstStrings_GetLuiStringName(data->current.unsignedInteger, outStringValue);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 849, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Omnvar %s is not a netconststring type", def->name) )
    __debugbreak();
  return 0;
}

/*
==============
BG_Omnvar_GetPlayerStateDefs
==============
*/
OmnvarDef *BG_Omnvar_GetPlayerStateDefs()
{
  __int64 v0; 
  __int64 v2; 

  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 209, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  v0 = s_omnvarSnapCount;
  if ( s_omnvarSnapCount >= 0x800 )
  {
    LODWORD(v2) = s_omnvarSnapCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( s_omnvarSnapCount ) < (unsigned)( ( sizeof( *array_counter( s_omnvarDefs ) ) + 0 ) )", "s_omnvarSnapCount doesn't index ARRAY_COUNT( s_omnvarDefs )\n\t%i not in [0, %i)", v2, 2048) )
      __debugbreak();
    v0 = s_omnvarSnapCount;
  }
  return &s_omnvarDefs[v0];
}

/*
==============
BG_Omnvar_GetTypeString
==============
*/
const char *BG_Omnvar_GetTypeString(const OmnvarDef *const omnvarDef)
{
  OmnvarType type; 
  __int64 v4; 
  __int64 v5[6]; 

  if ( !omnvarDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 1022, ASSERT_TYPE_ASSERT, "(omnvarDef)", (const char *)&queryFormat, "omnvarDef") )
    __debugbreak();
  v5[0] = (__int64)"bool";
  v5[1] = (__int64)"float";
  v5[2] = (__int64)"int";
  v5[3] = (__int64)"uint";
  v5[4] = (__int64)"time";
  v5[5] = (__int64)"lui";
  type = omnvarDef->type;
  if ( (unsigned __int8)type >= OMNVAR_TYPE_COUNT )
  {
    LODWORD(v4) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 1035, ASSERT_TYPE_ASSERT, "(unsigned)( omnvarDef->type ) < (unsigned)( ( sizeof( *array_counter( OMNVAR_TYPE_STRINGS ) ) + 0 ) )", "omnvarDef->type doesn't index OMNVAR_TYPE_STRINGS\n\t%i not in [0, %i)", v4, 6) )
      __debugbreak();
  }
  return (const char *)v5[omnvarDef->type];
}

/*
==============
BG_Omnvar_GetValueString
==============
*/
void BG_Omnvar_GetValueString(const OmnvarDef *const omnvarDef, const OmnvarData *const data, char *valueBuf, const unsigned int valueBufLen)
{
  unsigned __int64 v4; 
  char *outLuiString; 

  v4 = valueBufLen;
  if ( !omnvarDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 972, ASSERT_TYPE_ASSERT, "(omnvarDef)", (const char *)&queryFormat, "omnvarDef") )
    __debugbreak();
  if ( !valueBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 973, ASSERT_TYPE_ASSERT, "(valueBuf)", (const char *)&queryFormat, "valueBuf") )
    __debugbreak();
  if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 974, ASSERT_TYPE_ASSERT, "(valueBufLen > 0)", (const char *)&queryFormat, "valueBufLen > 0") )
    __debugbreak();
  if ( data )
  {
    switch ( omnvarDef->type )
    {
      case OMNVAR_TYPE_BOOL:
        Com_sprintf_truncate(valueBuf, v4, "%d", data->current.enabled);
        break;
      case OMNVAR_TYPE_FLOAT:
        Com_sprintf_truncate(valueBuf, v4, "%f", data->current.value);
        break;
      case OMNVAR_TYPE_INT:
        Com_sprintf_truncate(valueBuf, v4, "%i", data->current.unsignedInteger);
        break;
      case OMNVAR_TYPE_UINT:
      case OMNVAR_TYPE_TIME:
        goto $LN25_6;
      case OMNVAR_TYPE_NCS_LUI:
        if ( omnvarDef->type == OMNVAR_TYPE_NCS_LUI )
        {
          NetConstStrings_GetLuiStringName(data->current.unsignedInteger, (const char **)&outLuiString);
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 849, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Omnvar %s is not a netconststring type", omnvarDef->name) )
        {
          __debugbreak();
        }
        if ( outLuiString )
          Core_strcpy_truncate(valueBuf, v4, outLuiString);
        else
$LN25_6:
          Com_sprintf_truncate(valueBuf, v4, "%d", data->current.unsignedInteger);
        break;
      default:
        Com_sprintf_truncate(valueBuf, v4, "invalid type %d", omnvarDef->type);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 1015, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          __debugbreak();
        break;
    }
  }
  else
  {
    Core_strcpy(valueBuf, v4, "(none)");
  }
}

/*
==============
BG_Omnvar_HashName
==============
*/
__int64 BG_Omnvar_HashName(const char *name)
{
  const char *v1; 
  int v2; 
  __int64 result; 

  v1 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 110, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v2 = *v1;
  for ( result = 0i64; *v1; v2 = *v1 )
  {
    ++v1;
    result = (unsigned int)(v2 + 33 * result);
  }
  return result;
}

/*
==============
BG_Omnvar_InitializeDefaultValues
==============
*/
void BG_Omnvar_InitializeDefaultValues(void)
{
  unsigned int v0; 
  __int64 v1; 
  unsigned int LuiStringCount; 
  unsigned int v3; 
  int MinBitCountForNum; 
  unsigned __int8 v5; 
  const char *ncsString; 
  OmnvarValue initial; 
  bool v8; 

  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 794, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  v0 = 0;
  if ( (_DWORD)s_omnvarDefCount )
  {
    do
    {
      v1 = v0;
      if ( s_omnvarDefs[v0].type == OMNVAR_TYPE_NCS_LUI )
      {
        LuiStringCount = NetConstStrings_GetLuiStringCount();
        v3 = LuiStringCount;
        if ( LuiStringCount )
        {
          MinBitCountForNum = GetMinBitCountForNum(LuiStringCount - 1);
          v5 = MinBitCountForNum;
          if ( (MinBitCountForNum < 0 || (unsigned int)MinBitCountForNum > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)MinBitCountForNum, "signed", MinBitCountForNum) )
            __debugbreak();
          ncsString = s_omnvarDefs[v0].ncsString;
          s_omnvarDefs[v0].maxvalue = v3 - 1;
          s_omnvarDefs[v0].numbits = v5;
          s_omnvarDefs[v0].minvalue = 0;
          if ( !NetConstStrings_GetLuiStringIndex(ncsString, (unsigned int *)&s_omnvarDefs[v0].initial) )
            Com_PrintError(16, "Omnvar '%s', of NCS type, could not initialize its default value\n", s_omnvarDefs[v0].name);
        }
      }
      initial = s_omnvarDefs[v0++].initial;
      v8 = v0 < (unsigned int)s_omnvarDefCount;
      s_omnvarDefaults[v1].timeModified = 0;
      s_omnvarDefaults[v1].current = initial;
    }
    while ( v8 );
  }
}

/*
==============
BG_Omnvar_InsertPmoveValue
==============
*/
void BG_Omnvar_InsertPmoveValue(const OmnvarData *data, unsigned int pmoveIdx, OmnvarPmoveData *pmoveData)
{
  __int64 v3; 
  __int64 currentBufferIndex; 

  v3 = pmoveIdx;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 857, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !pmoveData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 858, ASSERT_TYPE_ASSERT, "(pmoveData)", (const char *)&queryFormat, "pmoveData") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 859, ASSERT_TYPE_ASSERT, "(pmoveIdx < 30)", (const char *)&queryFormat, "pmoveIdx < MAX_PMOVE_OMNVARS") )
    __debugbreak();
  currentBufferIndex = pmoveData->currentBufferIndex;
  if ( (unsigned int)currentBufferIndex >= 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 862, ASSERT_TYPE_ASSERT, "(bufferIdx < 10)", (const char *)&queryFormat, "bufferIdx < MAX_PMOVE_OMNVAR_BUFFER") )
    __debugbreak();
  pmoveData->omnvars[v3][currentBufferIndex] = *data;
}

/*
==============
BG_Omnvar_IsInitialized
==============
*/
bool BG_Omnvar_IsInitialized()
{
  return s_omnvarDataChecksum != 0;
}

/*
==============
BG_Omnvar_LoadClientscopeDefaults
==============
*/
void BG_Omnvar_LoadClientscopeDefaults(OmnvarData *omnvars)
{
  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 224, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 225, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
    __debugbreak();
  memcpy_0(omnvars, &s_omnvarDefaults[s_omnvarGamescopeCount], 8i64 * s_omnvarClientscopeCount);
}

/*
==============
BG_Omnvar_LoadGamescopeDefaults
==============
*/
void BG_Omnvar_LoadGamescopeDefaults(OmnvarData *omnvars)
{
  memcpy_0(omnvars, s_omnvarDefaults, 8i64 * s_omnvarGamescopeCount);
}

/*
==============
BG_Omnvar_LoadPlayerstateDefaults
==============
*/
void BG_Omnvar_LoadPlayerstateDefaults(OmnvarData *omnvars)
{
  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 232, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 233, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
    __debugbreak();
  memcpy_0(omnvars, &s_omnvarDefaults[s_omnvarSnapCount], 8i64 * s_omnvarPlayerstateCount);
}

/*
==============
BG_Omnvar_LoadTables
==============
*/
void BG_Omnvar_LoadTables(GameModeType gameMode, const char *gameType, const char *mapname)
{
  unsigned __int8 v5; 
  unsigned int v6; 
  const char *v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  __int64 IndexByName; 
  bool v12; 
  __int64 v13; 
  __int64 v14; 
  char dest[1024]; 

  v5 = gameMode;
  if ( s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 726, ASSERT_TYPE_ASSERT, "(!BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "!BG_Omnvar_IsInitialized()") )
    __debugbreak();
  if ( v5 >= 4u )
  {
    LODWORD(v13) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 727, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( GameModeType::COUNT )", "gameMode doesn't index GameModeType::COUNT\n\t%i not in [0, %i)", v13, 4) )
      __debugbreak();
  }
  if ( BG_GameInterface_GameModeIsMP((GameModeType)v5) && !gameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 728, ASSERT_TYPE_ASSERT, "(!BG_GameInterface_GameModeIsMP( gameMode ) || gameType)", (const char *)&queryFormat, "!BG_GameInterface_GameModeIsMP( gameMode ) || gameType") )
    __debugbreak();
  s_omnvarCountCap = S_OMNVAR_GAME_MODE_COUNT_CAP[v5];
  if ( s_omnvarCountCap > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 730, ASSERT_TYPE_ASSERT, "(s_omnvarCountCap <= 2048)", (const char *)&queryFormat, "s_omnvarCountCap <= OMNVAR_CAP_STATIC") )
    __debugbreak();
  s_omnvarDataChecksum = v5;
  BG_Omnvar_RegisterFromStringTable("omnvars/omnvars.csv", 1);
  v6 = 0;
  v7 = NULL;
  v8 = v5 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        BG_Omnvar_RegisterFromStringTable("omnvars/cp/omnvars.csv", 1);
        v7 = "omnvars/cp/levels/omnvars_";
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 764, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode type") )
      {
        __debugbreak();
      }
    }
    else
    {
      BG_Omnvar_RegisterFromStringTable("omnvars/mp/omnvars.csv", 1);
      Com_sprintf(dest, 0x400ui64, "%s%s.csv", "omnvars/mp/gametypes/omnvars_", gameType);
      BG_Omnvar_RegisterFromStringTable(dest, 0);
      v7 = "omnvars/mp/levels/omnvars_";
    }
  }
  else
  {
    BG_Omnvar_RegisterFromStringTable("omnvars/sp/omnvars.csv", 1);
    v7 = "omnvars/sp/levels/omnvars_";
  }
  if ( mapname && v7 )
  {
    Com_sprintf(dest, 0x400ui64, "%s%s.csv", v7, mapname);
    BG_Omnvar_RegisterFromStringTable(dest, 0);
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) )
  {
    qsort(s_omnvarDefs, (unsigned int)s_omnvarDefCount, 0x28ui64, (_CoreCrtNonSecureSearchSortCompareFunction)BG_Omnvar_DefSort);
    s_omnvarSnapCount = s_omnvarClientscopeCount + s_omnvarGamescopeCount;
    s_omnvarSnapIndexBits = GetMinBitCountForNum(s_omnvarClientscopeCount + s_omnvarGamescopeCount);
    s_omnvarPlayerstateIndexBits = GetMinBitCountForNum(s_omnvarPlayerstateCount);
  }
  else
  {
    s_omnvarGamescopeCount = s_omnvarDefCount;
  }
  BG_Omnvar_BuildHashTable();
  if ( s_omnvarPmoveCount )
  {
    do
    {
      v10 = v6;
      IndexByName = BG_Omnvar_GetIndexByName(s_omnvarPmoveIndexToPrimaryIndex[v6].name);
      if ( (unsigned int)IndexByName >= (unsigned int)s_omnvarDefCount )
      {
        LODWORD(v14) = s_omnvarDefCount;
        LODWORD(v13) = IndexByName;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_omnvarDefCount )", "idx doesn't index s_omnvarDefCount\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      s_omnvarPmoveIndexToPrimaryIndex[v6++].primaryIndex = IndexByName;
      v12 = v6 < s_omnvarPmoveCount;
      s_omnvarPmoveIndexToPrimaryIndex[v10].name = s_omnvarDefs[IndexByName].name;
    }
    while ( v12 );
  }
}

/*
==============
BG_Omnvar_PerClientCount
==============
*/
__int64 BG_Omnvar_PerClientCount()
{
  __int64 result; 

  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 186, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  result = s_omnvarClientscopeCount;
  if ( s_omnvarClientscopeCount )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 187, ASSERT_TYPE_ASSERT, "(s_omnvarClientscopeCount == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "s_omnvarClientscopeCount == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
      __debugbreak();
    return s_omnvarClientscopeCount;
  }
  return result;
}

/*
==============
BG_Omnvar_PerClientSpectateCount
==============
*/
__int64 BG_Omnvar_PerClientSpectateCount()
{
  __int64 result; 

  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 194, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  result = s_omnvarClientSpectateCount;
  if ( s_omnvarClientSpectateCount )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 195, ASSERT_TYPE_ASSERT, "(s_omnvarClientSpectateCount == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "s_omnvarClientSpectateCount == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
      __debugbreak();
    return s_omnvarClientSpectateCount;
  }
  return result;
}

/*
==============
BG_Omnvar_PerGameCount
==============
*/
__int64 BG_Omnvar_PerGameCount()
{
  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 96, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  return s_omnvarGamescopeCount;
}

/*
==============
BG_Omnvar_PerPlayerstateCount
==============
*/
__int64 BG_Omnvar_PerPlayerstateCount()
{
  __int64 result; 

  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 152, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  result = s_omnvarPlayerstateCount;
  if ( s_omnvarPlayerstateCount )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 153, ASSERT_TYPE_ASSERT, "(s_omnvarPlayerstateCount == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "s_omnvarPlayerstateCount == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
      __debugbreak();
    result = s_omnvarPlayerstateCount;
  }
  if ( (unsigned int)result > 0x50 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 154, ASSERT_TYPE_ASSERT, "(s_omnvarPlayerstateCount <= 80)", (const char *)&queryFormat, "s_omnvarPlayerstateCount <= MAX_ARCHIVED_OMNVARS") )
      __debugbreak();
    return s_omnvarPlayerstateCount;
  }
  return result;
}

/*
==============
BG_Omnvar_PerPlayerstateMinBitsForIndex
==============
*/
__int64 BG_Omnvar_PerPlayerstateMinBitsForIndex()
{
  __int64 result; 

  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 161, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  result = s_omnvarPlayerstateIndexBits;
  if ( s_omnvarPlayerstateIndexBits )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 162, ASSERT_TYPE_ASSERT, "(s_omnvarPlayerstateIndexBits == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "s_omnvarPlayerstateIndexBits == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
      __debugbreak();
    return s_omnvarPlayerstateIndexBits;
  }
  return result;
}

/*
==============
BG_Omnvar_PerSnapCount
==============
*/
__int64 BG_Omnvar_PerSnapCount()
{
  unsigned int v1; 
  unsigned int v2; 

  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 169, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  if ( s_omnvarSnapCount && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 170, ASSERT_TYPE_ASSERT, "(s_omnvarSnapCount == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "s_omnvarSnapCount == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
    __debugbreak();
  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 96, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  if ( s_omnvarSnapCount != s_omnvarClientscopeCount + s_omnvarGamescopeCount )
  {
    if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 96, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
      __debugbreak();
    v2 = s_omnvarClientscopeCount + s_omnvarGamescopeCount;
    v1 = s_omnvarSnapCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 171, ASSERT_TYPE_ASSERT, "( s_omnvarSnapCount ) == ( s_omnvarClientscopeCount + BG_Omnvar_PerGameCount() )", "%s == %s\n\t%i, %i", "s_omnvarSnapCount", "s_omnvarClientscopeCount + BG_Omnvar_PerGameCount()", v1, v2) )
      __debugbreak();
  }
  return s_omnvarSnapCount;
}

/*
==============
BG_Omnvar_PerSnapMinBitsForIndex
==============
*/
__int64 BG_Omnvar_PerSnapMinBitsForIndex()
{
  __int64 result; 

  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 178, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  result = s_omnvarSnapIndexBits;
  if ( s_omnvarSnapIndexBits )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 179, ASSERT_TYPE_ASSERT, "(s_omnvarSnapIndexBits == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "s_omnvarSnapIndexBits == 0 || Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
      __debugbreak();
    return s_omnvarSnapIndexBits;
  }
  return result;
}

/*
==============
BG_Omnvar_PmoveCount
==============
*/
__int64 BG_Omnvar_PmoveCount()
{
  __int64 result; 

  if ( !s_omnvarDataChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 123, ASSERT_TYPE_ASSERT, "(BG_Omnvar_IsInitialized())", (const char *)&queryFormat, "BG_Omnvar_IsInitialized()") )
    __debugbreak();
  result = s_omnvarPmoveCount;
  if ( s_omnvarPmoveCount > 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 124, ASSERT_TYPE_ASSERT, "(s_omnvarPmoveCount <= 30)", (const char *)&queryFormat, "s_omnvarPmoveCount <= MAX_PMOVE_OMNVARS") )
      __debugbreak();
    return s_omnvarPmoveCount;
  }
  return result;
}

/*
==============
BG_Omnvar_PmoveIndexToPrimaryIndex
==============
*/
__int64 BG_Omnvar_PmoveIndexToPrimaryIndex(unsigned int pmoveIdx)
{
  __int64 v1; 

  v1 = pmoveIdx;
  if ( pmoveIdx >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 131, ASSERT_TYPE_ASSERT, "(pmoveIdx < 30)", (const char *)&queryFormat, "pmoveIdx < MAX_PMOVE_OMNVARS") )
    __debugbreak();
  if ( (unsigned int)v1 >= s_omnvarPmoveCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 132, ASSERT_TYPE_ASSERT, "(pmoveIdx < s_omnvarPmoveCount)", (const char *)&queryFormat, "pmoveIdx < s_omnvarPmoveCount") )
    __debugbreak();
  return s_omnvarPmoveIndexToPrimaryIndex[v1].primaryIndex;
}

/*
==============
BG_Omnvar_RegisterFromStringTable
==============
*/
void BG_Omnvar_RegisterFromStringTable(const char *fileName, bool required)
{
  char v3; 
  const char *v4; 
  __int64 v5; 
  char v6; 
  unsigned int v7; 
  unsigned int RowCount; 
  unsigned int i; 
  const char *ColumnValueForRow; 
  const char *v11; 
  __int64 v12; 
  OmnvarDef *v13; 
  char *v14; 
  size_t v15; 
  char flags; 
  __int64 v17; 
  const char *name; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  char *fmt; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  StringTable *tablePtr; 
  char *omnvarStringBufferTail; 

  if ( required )
  {
LABEL_16:
    v7 = 0;
    StringTable_GetAsset(fileName, (const StringTable **)&tablePtr);
    RowCount = StringTable_GetRowCount(tablePtr);
    if ( RowCount )
    {
      for ( i = 0; i < RowCount; ++i )
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, i, 0);
        if ( *ColumnValueForRow )
        {
          if ( (_DWORD)s_omnvarDefCount == s_omnvarCountCap )
          {
            LODWORD(v26) = s_omnvarPmoveCount;
            LODWORD(v25) = s_omnvarPlayerstateCount;
            LODWORD(v24) = s_omnvarGamescopeCount;
            LODWORD(v23) = s_omnvarClientscopeCount;
            LODWORD(fmt) = s_omnvarDataChecksum;
            Com_Printf(16, "Registered %d omnvars from %s ( Error ). \tChecksum so far is 0x%x. \t(%i client, %i game, %i archived, %i pmove)\n", v7, fileName, fmt, v23, v24, v25, v26);
            BG_Omnvar_DumpList();
            Sys_Error((const ObfuscateErrorText)&stru_143CC6258, s_omnvarCountCap);
          }
          if ( I_strcmp(ColumnValueForRow, "include") )
          {
            v12 = -1i64;
            v13 = &s_omnvarDefs[(unsigned int)s_omnvarDefCount];
            v14 = s_omnvarStringBufferTail;
            do
              ++v12;
            while ( ColumnValueForRow[v12] );
            v15 = v12 + 1;
            if ( v15 > (char *)&s_omnvarStringBufferTail - s_omnvarStringBufferTail )
              Sys_Error((const ObfuscateErrorText)&error);
            memcpy_0(v14, ColumnValueForRow, v15);
            v13->name = v14;
            omnvarStringBufferTail = &v14[v15];
            if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 607, ASSERT_TYPE_ASSERT, "(record->name)", (const char *)&queryFormat, "record->name") )
              __debugbreak();
            BG_Omnvar_RegisterTypeFromStringTable(tablePtr, i, v13, &omnvarStringBufferTail, (const char *const)&s_omnvarStringBufferTail);
            Omnvar_RegisterFlagsFromStringTable(tablePtr, i, v13);
            s_omnvarStringBufferTail = omnvarStringBufferTail;
            flags = v13->flags;
            if ( (flags & 0x10) != 0 )
            {
              if ( s_omnvarPmoveCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 616, ASSERT_TYPE_ASSERT, "(s_omnvarPmoveCount < 30)", (const char *)&queryFormat, "s_omnvarPmoveCount < MAX_PMOVE_OMNVARS") )
                __debugbreak();
              v17 = s_omnvarPmoveCount;
              v13->pmoveIndex = s_omnvarPmoveCount;
              name = v13->name;
              ++s_omnvarPmoveCount;
              s_omnvarPmoveIndexToPrimaryIndex[v17].name = name;
              flags = v13->flags;
            }
            if ( flags < 0 )
            {
              if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 624, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
                __debugbreak();
              ++s_omnvarClientSpectateCount;
              flags = v13->flags;
            }
            if ( (flags & 4) != 0 )
            {
              if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 630, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
                __debugbreak();
              if ( (v13->flags & 2) == 0 )
              {
                LODWORD(v26) = s_omnvarPmoveCount;
                LODWORD(v25) = s_omnvarPlayerstateCount;
                LODWORD(v24) = s_omnvarGamescopeCount;
                LODWORD(v23) = s_omnvarClientscopeCount;
                LODWORD(fmt) = s_omnvarDataChecksum;
                Com_Printf(16, "Registered %d omnvars from %s ( Error ). \tChecksum so far is 0x%x. \t(%i client, %i game, %i archived, %i pmove)\n", v7, fileName, fmt, v23, v24, v25, v26);
                BG_Omnvar_DumpList();
                Sys_Error((const ObfuscateErrorText)&stru_143CC63B0, ColumnValueForRow);
              }
              if ( s_omnvarPlayerstateCount == 79 )
              {
                LODWORD(v26) = s_omnvarPmoveCount;
                LODWORD(v25) = s_omnvarPlayerstateCount;
                LODWORD(v24) = s_omnvarGamescopeCount;
                LODWORD(v23) = s_omnvarClientscopeCount;
                LODWORD(fmt) = s_omnvarDataChecksum;
                Com_Printf(16, "Registered %d omnvars from %s ( Error ). \tChecksum so far is 0x%x. \t(%i client, %i game, %i archived, %i pmove)\n", v7, fileName, fmt, v23, v24, v25, v26);
                BG_Omnvar_DumpList();
                Sys_Error((const ObfuscateErrorText)&stru_143CC6430, 80i64);
              }
              ++s_omnvarPlayerstateCount;
            }
            else if ( (flags & 2) != 0 )
            {
              if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 651, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
                __debugbreak();
              if ( s_omnvarCountCap > 0x1F4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 652, ASSERT_TYPE_ASSERT, "(s_omnvarCountCap <= ( sizeof( *array_counter( OmnvarClientData::omnvars ) ) + 0 ))", (const char *)&queryFormat, "s_omnvarCountCap <= ARRAY_COUNT( OmnvarClientData::omnvars )") )
                __debugbreak();
              ++s_omnvarClientscopeCount;
            }
            else
            {
              ++s_omnvarGamescopeCount;
            }
            v19 = -1i64;
            v20 = ~s_omnvarDataChecksum;
            do
              ++v19;
            while ( ColumnValueForRow[v19] );
            for ( ; v19; --v19 )
            {
              v21 = *(unsigned __int8 *)ColumnValueForRow++;
              v20 = (v20 >> 8) ^ g_crc32Table[v21 ^ (unsigned __int8)v20];
            }
            LODWORD(s_omnvarDefCount) = s_omnvarDefCount + 1;
            s_omnvarDataChecksum = ~v20;
            ++v7;
          }
          else
          {
            LODWORD(v26) = s_omnvarPmoveCount;
            LODWORD(v25) = s_omnvarPlayerstateCount;
            LODWORD(v24) = s_omnvarGamescopeCount;
            LODWORD(v23) = s_omnvarClientscopeCount;
            LODWORD(fmt) = s_omnvarDataChecksum;
            Com_Printf(16, "Registered %d omnvars from %s ( Include ). \tChecksum so far is 0x%x. \t(%i client, %i game, %i archived, %i pmove)\n", v7, fileName, fmt, v23, v24, v25, v26);
            v11 = StringTable_GetColumnValueForRow(tablePtr, i, 1);
            BG_Omnvar_RegisterFromStringTable(v11, 1);
          }
        }
      }
      LODWORD(v26) = s_omnvarPmoveCount;
      LODWORD(v25) = s_omnvarPlayerstateCount;
      LODWORD(v24) = s_omnvarGamescopeCount;
      LODWORD(v23) = s_omnvarClientscopeCount;
      LODWORD(fmt) = s_omnvarDataChecksum;
      Com_Printf(16, "Registered %d omnvars from %s ( Success ). \tChecksum so far is 0x%x. \t(%i client, %i game, %i archived, %i pmove)\n", v7, fileName, fmt, v23, v24, v25, v26);
    }
  }
  else
  {
    if ( !fileName )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 535, ASSERT_TYPE_ASSERT, "(fileName)", (const char *)&queryFormat, "fileName") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
        __debugbreak();
    }
    v3 = *fileName;
    v4 = fileName;
    if ( *fileName >= 33 )
    {
      v5 = 0x1000000000001001i64;
      while ( 1 )
      {
        v6 = v3;
        if ( (unsigned __int8)(v3 - 65) <= 0x19u || (unsigned __int8)(v3 - 32) <= 0x3Cu && _bittest64(&v5, (char)(v3 - 32)) )
          break;
        if ( v3 == 124 )
          break;
        v3 = *++v4;
        if ( !v3 )
        {
          if ( v6 <= 32 )
            break;
          if ( !DB_XAssetExists(ASSET_TYPE_STRINGTABLE, fileName) )
            return;
          goto LABEL_16;
        }
      }
    }
    Com_PrintError(16, "Omnvar filename '%s' is not a valid asset name. Possibly bad game mode or game type?\n", fileName);
  }
}

/*
==============
BG_Omnvar_RegisterTypeFromStringTable
==============
*/
void BG_Omnvar_RegisterTypeFromStringTable(const StringTable *omnvarsTable, unsigned int rowIdx, OmnvarDef *const record, char **const omnvarStringBufferTail, const char *const omnvarStringBufferEnd)
{
  char v10; 
  const char *ColumnValueForRow; 
  bool v12; 
  int v13; 
  unsigned int GameModeClientLimit; 
  int v15; 
  int v16; 
  int MinBitCountForNum; 
  __int64 v19; 
  const char *v20; 
  const char *v21; 
  signed __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  char *v26; 

  v10 = *StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 4);
  ColumnValueForRow = StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 5);
  if ( !*ColumnValueForRow && v10 != 101 && v10 != 110 )
    Sys_Error((const ObfuscateErrorText)&stru_143CC5990, record->name);
  switch ( v10 )
  {
    case 'a':
      *(_WORD *)&record->type = 1795;
      record->initial.integer = atoi(ColumnValueForRow);
      record->numbits = 32;
      break;
    case 'b':
      if ( (unsigned __int8)(*ColumnValueForRow - 48) > 1u )
        Sys_Error((const ObfuscateErrorText)&stru_143CC59B8, record->name);
      *(_WORD *)&record->type = 0;
      v12 = *ColumnValueForRow == 49;
      record->numbits = 1;
      record->initial.enabled = v12;
      break;
    case 'd':
      *(_WORD *)&record->type = 2305;
      goto LABEL_19;
    case 'e':
      *(_WORD *)&record->type = 1538;
      MinBitCountForNum = GetMinBitCountForNum(0x800u);
      record->numbits = truncate_cast<unsigned char,int>(MinBitCountForNum);
      record->minvalue = 0;
      record->maxvalue = 2048;
      record->initial.integer = 2047;
      break;
    case 'f':
      *(_WORD *)&record->type = 257;
LABEL_19:
      *(double *)&_XMM0 = atof(ColumnValueForRow);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      record->initial.value = *(float *)&_XMM1;
      break;
    case 'i':
      *(_WORD *)&record->type = 514;
      v19 = I_atoi64(ColumnValueForRow);
      v20 = StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 6);
      v21 = StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 7);
      v22 = I_atoi64(v20);
      v23 = I_atoi64(v21);
      if ( !*v20 )
        Sys_Error((const ObfuscateErrorText)&stru_143CC5AC0, record->name);
      if ( !*v21 )
        Sys_Error((const ObfuscateErrorText)&stru_143CC5B08, record->name);
      if ( v22 > v23 )
        Sys_Error((const ObfuscateErrorText)&stru_143CC5B50, record->name, v22, v23);
      if ( v23 > 0x7FFFFFFF || v22 < (__int64)0xFFFFFFFF80000000ui64 )
        Sys_Error((const ObfuscateErrorText)&stru_143CC5BC0, record->name, v22, v23);
      if ( v19 < v22 || v19 > v23 )
        Sys_Error((const ObfuscateErrorText)&stru_143CC5C40, record->name, v22, v23, v19);
      v24 = v23 - v22;
      if ( v23 - v22 > 0x7FFFFFFF )
        Sys_Error((const ObfuscateErrorText)&stru_143CC5CB0, record->name, v22, v23);
      if ( (v24 < 0 || (unsigned __int64)v24 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v24, "signed", v23 - v22) )
        __debugbreak();
      v25 = GetMinBitCountForNum(v24);
      record->numbits = truncate_cast<unsigned char,int>(v25);
      record->minvalue = truncate_cast<int,__int64>(v22);
      record->maxvalue = truncate_cast<int,__int64>(v23);
      record->initial.integer = truncate_cast<int,__int64>(v19 - v22);
      break;
    case 'n':
      *(_WORD *)&record->type = 2052;
      record->initial.integer = 0;
      break;
    case 'p':
      if ( !ComCharacterLimits::ms_modeData.m_clientMaxCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 78, ASSERT_TYPE_ASSERT, "(ms_modeData.m_clientMaxCount > 0)", (const char *)&queryFormat, "ms_modeData.m_clientMaxCount > 0") )
          __debugbreak();
        if ( !ComCharacterLimits::ms_modeData.m_clientMaxCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 311, ASSERT_TYPE_ASSERT, "(ComCharacterLimits::GetGameModeClientLimit())", "%s\n\tOmnvars must be initialized after the client limit", "ComCharacterLimits::GetGameModeClientLimit()") )
          __debugbreak();
      }
      *(_WORD *)&record->type = 1282;
      v13 = atoi(ColumnValueForRow);
      GameModeClientLimit = ComCharacterLimits::GetGameModeClientLimit();
      v15 = GameModeClientLimit - 1;
      v16 = GetMinBitCountForNum(GameModeClientLimit);
      record->numbits = truncate_cast<unsigned char,int>(v16);
      record->initial.integer = v13 + 1;
      record->minvalue = -1;
      record->maxvalue = v15;
      break;
    case 's':
      *(_WORD *)&record->type = 1029;
      v26 = BG_Omnvar_AddStringToStringBuffer(omnvarStringBufferTail, omnvarStringBufferEnd, ColumnValueForRow);
      record->ncsString = v26;
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.cpp", 414, ASSERT_TYPE_ASSERT, "(record->ncsString)", (const char *)&queryFormat, "record->ncsString") )
        __debugbreak();
      break;
    case 't':
      *(_WORD *)&record->type = 772;
      record->initial.integer = atoi(ColumnValueForRow);
      break;
    default:
      Sys_Error((const ObfuscateErrorText)&stru_143CC5D38, record->name);
      break;
  }
}

/*
==============
Omnvar_RegisterFlagsFromStringTable
==============
*/
void Omnvar_RegisterFlagsFromStringTable(const StringTable *omnvarsTable, unsigned int rowIdx, OmnvarDef *const record)
{
  char v6; 
  OmnvarType type; 
  const char *ColumnValueForRow; 
  unsigned __int8 flags; 
  char v10; 
  unsigned __int8 v11; 

  record->flags = 0;
  v6 = *StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 1);
  if ( v6 == 49 )
    record->flags |= 0x41u;
  if ( *StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 8) == 49 )
  {
    if ( record->userType == OMNVAR_USER_TYPE_NOTIFY || (type = record->type, ((type - 1) & 0xFC) != 0) || type == OMNVAR_TYPE_UINT )
      Sys_Error((const ObfuscateErrorText)&stru_143CC5D70);
    record->flags |= 8u;
  }
  if ( *StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 10) == 49 )
  {
    if ( (record->flags & 8) != 0 )
      Sys_Error((const ObfuscateErrorText)&stru_143CC5DE0);
    if ( record->type != OMNVAR_TYPE_FLOAT )
      Sys_Error((const ObfuscateErrorText)&stru_143CC5E50);
    record->flags |= 0x10u;
  }
  ColumnValueForRow = StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 11);
  flags = record->flags;
  if ( *ColumnValueForRow == 49 )
  {
    flags |= 0x40u;
    record->flags = flags;
  }
  if ( (flags & 0x40) != 0 && v6 != 49 )
    Sys_Error((const ObfuscateErrorText)&stru_143CC5EC0);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) )
  {
    if ( *StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 2) == 49 )
      record->flags |= 4u;
    v10 = *StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 3);
    if ( v10 == 99 )
    {
      record->flags |= 2u;
    }
    else if ( v10 != 103 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_143CC5F60, record->name, (unsigned int)v10);
    }
    if ( *StringTable_GetColumnValueForRow(omnvarsTable, rowIdx, 12) == 49 )
    {
      v11 = record->flags | 0x80;
      record->flags = v11;
      if ( (v11 & 2) == 0 )
      {
        Sys_Error((const ObfuscateErrorText)&stru_143CC5FA0);
        v11 = record->flags;
      }
      if ( (v11 & 4) != 0 )
        Sys_Error((const ObfuscateErrorText)&stru_143CC6070);
    }
  }
}

