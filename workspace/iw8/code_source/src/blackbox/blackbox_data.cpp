/*
==============
BB_MsgInit
==============
*/

void __fastcall BB_MsgInit(bb_msg_t *msg, void *data, int maxsize)
{
  ?BB_MsgInit@@YAXPEAUbb_msg_t@@PEAXH@Z(msg, data, maxsize);
}

/*
==============
BB_DefinePair
==============
*/

void __fastcall BB_DefinePair(const char *name, int parameter)
{
  ?BB_DefinePair@@YAXPEBDH@Z(name, parameter);
}

/*
==============
BB_ParseParamForDLog
==============
*/

void __fastcall BB_ParseParamForDLog(DLogContext *context, const char *columnName, const unsigned __int8 parameter, char *args)
{
  ?BB_ParseParamForDLog@@YAXPEAUDLogContext@@PEBDEPEAD@Z(context, columnName, parameter, args);
}

/*
==============
BB_DefineConstant
==============
*/

void __fastcall BB_DefineConstant(const char *constant, unsigned __int64 len)
{
  ?BB_DefineConstant@@YAXPEBD_K@Z(constant, len);
}

/*
==============
BB_HashString
==============
*/

unsigned int __fastcall BB_HashString(const char *str, unsigned __int64 len)
{
  return ?BB_HashString@@YAIPEBD_K@Z(str, len);
}

/*
==============
BB_InitDefinitions
==============
*/

void BB_InitDefinitions(void)
{
  ?BB_InitDefinitions@@YAXXZ();
}

/*
==============
BB_MsgReset
==============
*/

void __fastcall BB_MsgReset(bb_msg_t *msg)
{
  ?BB_MsgReset@@YAXPEAUbb_msg_t@@@Z(msg);
}

/*
==============
BB_BeginDefinition
==============
*/

int __fastcall BB_BeginDefinition(const char *name, const bool isBlackboxWhitelisted)
{
  return ?BB_BeginDefinition@@YAHPEBD_N@Z(name, isBlackboxWhitelisted);
}

/*
==============
BB_CacheString
==============
*/

unsigned int __fastcall BB_CacheString(const char *str, unsigned __int64 len)
{
  return ?BB_CacheString@@YAIPEBD_K@Z(str, len);
}

/*
==============
BB_WriteStringAlways
==============
*/

void __fastcall BB_WriteStringAlways(bb_msg_t *msg, const char *str, unsigned __int64 len)
{
  ?BB_WriteStringAlways@@YAXPEAUbb_msg_t@@PEBD_K@Z(msg, str, len);
}

/*
==============
BB_WriteFormatParameters
==============
*/

void __fastcall BB_WriteFormatParameters(bb_msg_t *msg, bool isProtoWhitelisted, bool isBlackboxWhitelisted, int parameterCount, const unsigned __int8 *parameters, char *args)
{
  ?BB_WriteFormatParameters@@YAXPEAUbb_msg_t@@_N1HPEBEPEAD@Z(msg, isProtoWhitelisted, isBlackboxWhitelisted, parameterCount, parameters, args);
}

/*
==============
BB_WriteString
==============
*/

void __fastcall BB_WriteString(bb_msg_t *msg, const char *str, unsigned __int64 len)
{
  ?BB_WriteString@@YAXPEAUbb_msg_t@@PEBD_K@Z(msg, str, len);
}

/*
==============
BB_EndDefinition
==============
*/

void BB_EndDefinition(void)
{
  ?BB_EndDefinition@@YAXXZ();
}

/*
==============
BB_ParseAndCacheFormatString
==============
*/

int __fastcall BB_ParseAndCacheFormatString(bb_msg_t *msg, const char *name, const char *fmt, int *parameterCount, const unsigned __int8 **parameters, bool isBlackboxWhitelisted)
{
  return ?BB_ParseAndCacheFormatString@@YAHPEAUbb_msg_t@@PEBD1PEAHPEAPEBE_N@Z(msg, name, fmt, parameterCount, parameters, isBlackboxWhitelisted);
}

/*
==============
BB_ClearStringCache
==============
*/

void BB_ClearStringCache(void)
{
  ?BB_ClearStringCache@@YAXXZ();
}

/*
==============
BB_InitStringCache
==============
*/

void BB_InitStringCache(void)
{
  ?BB_InitStringCache@@YAXXZ();
}

/*
==============
BB_RewriteDefinitions
==============
*/

void __fastcall BB_RewriteDefinitions(bb_msg_t *msg)
{
  ?BB_RewriteDefinitions@@YAXPEAUbb_msg_t@@@Z(msg);
}

/*
==============
BB_WriteDefinitions
==============
*/

void __fastcall BB_WriteDefinitions(bb_msg_t *msg)
{
  ?BB_WriteDefinitions@@YAXPEAUbb_msg_t@@@Z(msg);
}

/*
==============
BB_WriteKnownString
==============
*/

void __fastcall BB_WriteKnownString(bb_msg_t *msg, const char *str, unsigned __int64 len)
{
  ?BB_WriteKnownString@@YAXPEAUbb_msg_t@@PEBD_K@Z(msg, str, len);
}

/*
==============
BB_DlogParseAndWrite
==============
*/

void __fastcall BB_DlogParseAndWrite(const char *tableName, const char *formatString, char *args)
{
  ?BB_DlogParseAndWrite@@YAXPEBD0PEAD@Z(tableName, formatString, args);
}

/*
==============
BB_DefineParameter
==============
*/

void __fastcall BB_DefineParameter(int parameter)
{
  ?BB_DefineParameter@@YAXH@Z(parameter);
}

/*
==============
BB_GetDefinitionMap
==============
*/

DefinitionMap *__fastcall BB_GetDefinitionMap(unsigned int nameHash, unsigned int formatHash)
{
  return ?BB_GetDefinitionMap@@YAPEAUDefinitionMap@@II@Z(nameHash, formatHash);
}

/*
==============
BB_BeginDefinition
==============
*/
__int64 BB_BeginDefinition(const char *name, const bool isBlackboxWhitelisted)
{
  unsigned int v2; 
  unsigned __int64 v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  int i; 
  __int64 v10; 
  unsigned __int8 v11; 

  v2 = s_definitionId++;
  if ( (int)v2 >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 207, ASSERT_TYPE_ASSERT, "(definition_id < 256)", (const char *)&queryFormat, "definition_id < BB_MAX_DEFINITIONS") )
    __debugbreak();
  if ( !isBlackboxWhitelisted )
    return v2;
  BB_WriteVarUInt32_1(&s_definitionMsg, (16 * v2) | 1);
  v5 = -1i64;
  do
    ++v5;
  while ( name[v5] );
  v6 = truncate_cast<unsigned int,unsigned __int64>(v5);
  BB_WriteVarUInt32_1(&s_definitionMsg, v6);
  v7 = truncate_cast<unsigned int,unsigned __int64>(v5);
  if ( s_definitionMsg.pppHashTable )
    return v2;
  if ( s_definitionMsg.overflow || s_definitionMsg.cursize + v7 > s_definitionMsg.maxsize )
  {
    s_definitionMsg.overflow = 1;
    return v2;
  }
  v8 = truncate_cast<unsigned int,unsigned __int64>(s_definitionMsg.cursize);
  for ( i = 0; i < v7; s_definitionMsg.data[v10] = v11 )
  {
    v10 = i + v8;
    v11 = *name++;
    ++i;
  }
  s_definitionMsg.cursize += v7;
  return v2;
}

/*
==============
BB_CacheString
==============
*/
__int64 BB_CacheString(const char *str, unsigned __int64 len)
{
  unsigned __int64 v2; 
  unsigned int i; 
  int v4; 
  __int64 v5; 
  unsigned int v6; 

  v2 = len;
  for ( i = 5381; v2; --v2 )
  {
    v4 = *str++;
    i = v4 + 33 * i;
  }
  v5 = i & 0x3FF;
  v6 = s_stringHashTable[v5];
  if ( v6 == i )
  {
    ++s_stringHits;
    s_stringHitBytes += truncate_cast<unsigned int,unsigned __int64>(len);
    return (unsigned int)(2 * v5);
  }
  else
  {
    ++s_stringMisses;
    if ( v6 )
      ++s_stringCollisions;
    s_stringHashTable[v5] = i;
    return (2 * (_DWORD)v5) | 1u;
  }
}

/*
==============
BB_ClearStringCache
==============
*/
void BB_ClearStringCache(void)
{
  memset_0(s_stringHashTable, 0, sizeof(s_stringHashTable));
}

/*
==============
BB_DefineConstant
==============
*/
void BB_DefineConstant(const char *constant, unsigned __int64 len)
{
  unsigned int v4; 
  int v5; 
  unsigned __int8 *v6; 
  unsigned __int8 v7; 
  __int64 v8; 
  unsigned int i; 
  int v10; 
  char v11; 

  v11 = 35;
  if ( !s_definitionMsg.pppHashTable )
  {
    if ( s_definitionMsg.overflow || s_definitionMsg.cursize + 1 > s_definitionMsg.maxsize )
    {
      s_definitionMsg.overflow = 1;
    }
    else
    {
      v4 = truncate_cast<unsigned int,unsigned __int64>(s_definitionMsg.cursize);
      v5 = 0;
      v6 = (unsigned __int8 *)&v11;
      do
      {
        v7 = *v6;
        v8 = v5 + v4;
        ++v6;
        ++v5;
        s_definitionMsg.data[v8] = v7;
      }
      while ( !v5 );
      ++s_definitionMsg.cursize;
    }
  }
  for ( i = 5381; len; --len )
  {
    v10 = *constant++;
    i = v10 + 33 * i;
  }
  BB_WriteVarUInt32_1(&s_definitionMsg, i);
}

/*
==============
BB_DefinePair
==============
*/
void BB_DefinePair(const char *name, int parameter)
{
  unsigned __int64 v3; 

  v3 = -1i64;
  do
    ++v3;
  while ( name[v3] );
  BB_DefineConstant(name, v3);
  BB_DefineParameter(parameter);
}

/*
==============
BB_DefineParameter
==============
*/
void BB_DefineParameter(int parameter)
{
  unsigned int v1; 
  int v2; 
  unsigned __int8 *v3; 
  unsigned __int8 v4; 
  __int64 v5; 
  char v6; 

  v6 = parameter & 0xDF;
  if ( !s_definitionMsg.pppHashTable )
  {
    if ( s_definitionMsg.overflow || s_definitionMsg.cursize + 1 > s_definitionMsg.maxsize )
    {
      s_definitionMsg.overflow = 1;
    }
    else
    {
      v1 = truncate_cast<unsigned int,unsigned __int64>(s_definitionMsg.cursize);
      v2 = 0;
      v3 = (unsigned __int8 *)&v6;
      do
      {
        v4 = *v3;
        v5 = v2 + v1;
        ++v3;
        ++v2;
        s_definitionMsg.data[v5] = v4;
      }
      while ( !v2 );
      ++s_definitionMsg.cursize;
    }
  }
}

/*
==============
BB_DlogParseAndWrite
==============
*/
void BB_DlogParseAndWrite(const char *tableName, const char *formatString, char *args)
{
  const char *v6; 
  const char *v7; 
  unsigned __int64 v8; 
  const char *v9; 
  unsigned __int64 v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  DLogContext context; 
  char columnName[64]; 

  DLog_CreateContext(&context, 0i64, s_bbTempMsgBuffer, 64512);
  DLog_BeginEvent(&context, tableName);
  while ( 1 )
  {
    v6 = &formatString[strspn(formatString, ": \t\n,")];
    if ( !*v6 )
      break;
    v7 = v6;
    v8 = strcspn(v6, ": \t\n,");
    v9 = v6;
    v10 = v8;
    formatString = &v6[v8];
    v11 = BB_ParseParameter(v9, v8);
    if ( (v11 & 0x20) != 0 )
    {
      if ( v10 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 631, ASSERT_TYPE_ASSERT, "(tokenLength < MAX_COLUMN_NAME_LEN)", (const char *)&queryFormat, "tokenLength < MAX_COLUMN_NAME_LEN") )
        __debugbreak();
      if ( (v10 > 0x7FFFFFFFFFFFFFFFi64 || v10 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v10, "unsigned", v10) )
        __debugbreak();
      if ( (int)v10 > 63 )
        LODWORD(v10) = 63;
      memcpy_0(columnName, v7, (int)v10);
      if ( (unsigned __int64)(int)v10 >= 0x40 )
      {
        j___report_rangecheckfailure(v12);
        JUMPOUT(0x14180039Bi64);
      }
      columnName[(int)v10] = 0;
    }
    else
    {
      BB_ParseParamForDLog(&context, columnName, v11, args);
    }
  }
  DLog_EndEvent(&context);
  DLog_RecordContext(&context);
}

/*
==============
BB_EndDefinition
==============
*/
void BB_EndDefinition(void)
{
  unsigned __int64 cursize; 
  unsigned int v1; 
  int v2; 
  unsigned __int8 *v3; 
  unsigned __int8 v4; 
  __int64 v5; 
  char v6; 

  cursize = s_definitionMsg.cursize;
  v6 = -1;
  if ( !s_definitionMsg.pppHashTable )
  {
    if ( s_definitionMsg.overflow || s_definitionMsg.cursize + 1 > s_definitionMsg.maxsize )
    {
      s_definitionMsg.overflow = 1;
    }
    else
    {
      v1 = truncate_cast<unsigned int,unsigned __int64>(s_definitionMsg.cursize);
      v2 = 0;
      v3 = (unsigned __int8 *)&v6;
      do
      {
        v4 = *v3;
        v5 = v2 + v1;
        ++v3;
        ++v2;
        s_definitionMsg.data[v5] = v4;
      }
      while ( !v2 );
      cursize = ++s_definitionMsg.cursize;
    }
  }
  if ( cursize > s_definitionMsg.maxsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 238, ASSERT_TYPE_ASSERT, "(s_definitionMsg.cursize <= s_definitionMsg.maxsize)", (const char *)&queryFormat, "s_definitionMsg.cursize <= s_definitionMsg.maxsize") )
    __debugbreak();
}

/*
==============
BB_GetDefinitionMap
==============
*/
DefinitionMap *BB_GetDefinitionMap(unsigned int nameHash, unsigned int formatHash)
{
  unsigned int v3; 
  __int64 v5; 
  DefinitionMap *result; 
  __int16 v7; 

  v3 = formatHash & 0x1FF;
  LODWORD(v5) = v3;
  if ( s_definitionMapHashTable[formatHash & 0x1FF] == -1 )
  {
LABEL_8:
    v7 = s_definitionMapCount;
    if ( s_definitionMapCount == 256 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 486, ASSERT_TYPE_ASSERT, "(s_definitionMapCount != 256)", (const char *)&queryFormat, "s_definitionMapCount != MAX_DEFINITION_MAP_ENTRIES") )
        __debugbreak();
      v7 = s_definitionMapCount;
    }
    s_definitionMapHashTable[(unsigned int)v5] = v7;
    s_definitionMapCount = v7 + 1;
    result = &s_definitionMapPool[v7];
    *(_QWORD *)&result->nameHash = 0i64;
  }
  else
  {
    while ( 1 )
    {
      result = &s_definitionMapPool[s_definitionMapHashTable[(unsigned int)v5]];
      if ( result->nameHash == nameHash && result->formatHash == formatHash )
        break;
      v5 = ((_WORD)v5 + 1) & 0x1FF;
      if ( v3 == (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 483, ASSERT_TYPE_ASSERT, "(origCacheIndex != cacheIndex)", (const char *)&queryFormat, "origCacheIndex != cacheIndex") )
        __debugbreak();
      if ( s_definitionMapHashTable[v5] == -1 )
        goto LABEL_8;
    }
  }
  return result;
}

/*
==============
BB_HashString
==============
*/
__int64 BB_HashString(const char *str, unsigned __int64 len)
{
  __int64 result; 
  int v3; 

  for ( result = 5381i64; len; --len )
  {
    v3 = *str++;
    result = (unsigned int)(v3 + 33 * result);
  }
  return result;
}

/*
==============
BB_InitDefinitions
==============
*/
void BB_InitDefinitions(void)
{
  s_definitionId = 0;
  s_definitionSentOffset = 0i64;
  memset_0(s_definitionMapHashTable, 255, sizeof(s_definitionMapHashTable));
  s_definitionMsg.maxsize = 4096;
  s_definitionMsg.data = s_definitionData;
  s_definitionMsg.cursize = 0i64;
  s_definitionMsg.overflow = 0;
  s_definitionMsg.pppHashTable = NULL;
  s_definitionMsg.compressed_data_start = NULL;
  memset_0(s_definitionData, 0, sizeof(s_definitionData));
  overFlowCounter = 0;
}

/*
==============
BB_InitStringCache
==============
*/
void BB_InitStringCache(void)
{
  memset_0(s_stringHashTable, 0, sizeof(s_stringHashTable));
  s_stringHits = 0;
  s_stringMisses = 0;
  s_stringCollisions = 0;
  s_stringHitBytes = 0;
  s_definitionMapCollisions = 0;
}

/*
==============
BB_MsgInit
==============
*/
void BB_MsgInit(bb_msg_t *msg, void *data, int maxsize)
{
  msg->data = (unsigned __int8 *)data;
  msg->maxsize = maxsize;
  msg->cursize = 0i64;
  msg->overflow = 0;
  msg->pppHashTable = NULL;
  msg->compressed_data_start = NULL;
  memset_0(data, 0, maxsize);
  overFlowCounter = 0;
}

/*
==============
BB_MsgReset
==============
*/
void BB_MsgReset(bb_msg_t *msg)
{
  msg->cursize = 0i64;
  msg->overflow = 0;
  msg->pppHashTable = NULL;
  overFlowCounter = 0;
}

/*
==============
BB_ParseAndCacheFormatString
==============
*/
__int64 BB_ParseAndCacheFormatString(bb_msg_t *msg, const char *name, const char *fmt, int *parameterCount, const unsigned __int8 **parameters, bool isBlackboxWhitelisted)
{
  int v7; 
  unsigned __int64 v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  DefinitionMap *v16; 
  unsigned int nameHash; 
  __int16 v18; 
  int v19; 
  char v20; 
  const char *v21; 
  bool v22; 
  int v23; 
  unsigned int v24; 
  unsigned __int64 v25; 
  unsigned int v26; 
  int v27; 
  unsigned __int8 *v28; 
  unsigned __int8 v29; 
  __int64 v30; 
  char v31; 
  char v32; 
  char v33; 
  const char *v34; 
  const char *v35; 
  unsigned __int64 v36; 
  const char *v37; 
  unsigned __int64 v38; 
  unsigned __int8 v39; 
  unsigned __int8 v40; 
  bool v41; 
  int v42; 
  unsigned __int64 cursize; 
  unsigned int v44; 
  unsigned __int8 *v45; 
  unsigned __int8 v46; 
  __int64 v47; 
  __int64 v49; 
  const char *v51; 

  v51 = name;
  v7 = 5381;
  v8 = -1i64;
  LOBYTE(v49) = 0;
  v9 = fmt;
  v10 = 5381;
  v11 = -1i64;
  do
    ++v11;
  while ( fmt[v11] );
  for ( ; v11; --v11 )
  {
    v12 = *v9++;
    v10 = v12 + 33 * v10;
  }
  v13 = -1i64;
  do
    ++v13;
  while ( name[v13] );
  for ( ; v13; --v13 )
  {
    v14 = *name++;
    v7 = v14 + 33 * v7;
  }
  LODWORD(v15) = v10 & 0x1FF;
  if ( s_definitionMapHashTable[v10 & 0x1FF] == -1 )
  {
LABEL_15:
    v18 = s_definitionMapCount;
    if ( s_definitionMapCount == 256 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 486, ASSERT_TYPE_ASSERT, "(s_definitionMapCount != 256)", (const char *)&queryFormat, "s_definitionMapCount != MAX_DEFINITION_MAP_ENTRIES") )
        __debugbreak();
      v18 = s_definitionMapCount;
    }
    s_definitionMapHashTable[(unsigned int)v15] = v18;
    v16 = &s_definitionMapPool[v18];
    nameHash = 0;
    s_definitionMapCount = v18 + 1;
    *(_QWORD *)&v16->nameHash = 0i64;
  }
  else
  {
    while ( 1 )
    {
      v16 = &s_definitionMapPool[s_definitionMapHashTable[(unsigned int)v15]];
      nameHash = v16->nameHash;
      if ( *(_QWORD *)&v16->nameHash == __PAIR64__(v10, v7) )
        break;
      v15 = ((_WORD)v15 + 1) & 0x1FF;
      if ( (v10 & 0x1FF) == (_DWORD)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 483, ASSERT_TYPE_ASSERT, "(origCacheIndex != cacheIndex)", (const char *)&queryFormat, "origCacheIndex != cacheIndex") )
        __debugbreak();
      if ( s_definitionMapHashTable[v15] == -1 )
        goto LABEL_15;
    }
  }
  if ( nameHash == v7 && v16->formatHash == v10 )
  {
    v19 = v16->parameterCount;
    v20 = 1;
    LOBYTE(v49) = 1;
    *parameterCount = v19;
    *parameters = v16->parameters;
  }
  else
  {
    v20 = 0;
  }
  v21 = fmt;
  v22 = isBlackboxWhitelisted;
  if ( !v20 )
  {
    v16->nameHash = v7;
    v23 = s_definitionId;
    v16->formatHash = v10;
    v16->parameterCount = 0;
    s_definitionId = v23 + 1;
    if ( v23 >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 207, ASSERT_TYPE_ASSERT, "(definition_id < 256)", (const char *)&queryFormat, "definition_id < BB_MAX_DEFINITIONS") )
      __debugbreak();
    if ( isBlackboxWhitelisted )
    {
      BB_WriteVarUInt32_1(&s_definitionMsg, (16 * v23) | 1);
      do
        ++v8;
      while ( v51[v8] );
      v24 = truncate_cast<unsigned int,unsigned __int64>(v8);
      BB_WriteVarUInt32_1(&s_definitionMsg, v24);
      v25 = truncate_cast<unsigned int,unsigned __int64>(v8);
      if ( !s_definitionMsg.pppHashTable )
      {
        if ( s_definitionMsg.overflow || v25 + s_definitionMsg.cursize > s_definitionMsg.maxsize )
        {
          s_definitionMsg.overflow = 1;
        }
        else
        {
          v26 = truncate_cast<unsigned int,unsigned __int64>(s_definitionMsg.cursize);
          v27 = 0;
          if ( v25 )
          {
            v28 = (unsigned __int8 *)v51;
            do
            {
              v29 = *v28;
              v30 = v27 + v26;
              ++v28;
              ++v27;
              s_definitionMsg.data[v30] = v29;
            }
            while ( v27 < v25 );
          }
          s_definitionMsg.cursize += v25;
        }
      }
    }
    v16->definitionId = v23;
  }
  v31 = v49;
  v32 = 1;
  v33 = 0;
  while ( 1 )
  {
    v34 = &v21[strspn(v21, ": \t\n,")];
    if ( !*v34 )
      break;
    v35 = v34;
    v36 = strcspn(v34, ": \t\n,");
    v37 = v34;
    v38 = v36;
    v21 = &v34[v36];
    v39 = BB_ParseParameter(v37, v36);
    v40 = v39;
    if ( (v39 & 0x20) != 0 )
    {
      if ( !v31 && isBlackboxWhitelisted )
        BB_DefineConstant(v35, v38);
      v22 = isBlackboxWhitelisted;
      if ( !v32 )
        v33 = 1;
      v32 = 0;
    }
    else
    {
      v22 = isBlackboxWhitelisted;
      if ( !v31 )
      {
        if ( isBlackboxWhitelisted )
          BB_DefineParameter(v39);
        v16->parameters[v16->parameterCount++] = v40;
      }
      if ( v32 )
        v33 = 1;
      v32 = 1;
    }
  }
  v41 = v31 == 0;
  v42 = 0;
  if ( v41 )
  {
    if ( v22 )
    {
      cursize = s_definitionMsg.cursize;
      LOBYTE(v49) = -1;
      if ( !s_definitionMsg.pppHashTable )
      {
        if ( s_definitionMsg.overflow || s_definitionMsg.cursize + 1 > s_definitionMsg.maxsize )
        {
          s_definitionMsg.overflow = 1;
        }
        else
        {
          v44 = truncate_cast<unsigned int,unsigned __int64>(s_definitionMsg.cursize);
          v45 = (unsigned __int8 *)&v49;
          do
          {
            v46 = *v45;
            v47 = v42 + v44;
            ++v45;
            ++v42;
            s_definitionMsg.data[v47] = v46;
          }
          while ( !v42 );
          cursize = ++s_definitionMsg.cursize;
        }
      }
      if ( cursize > s_definitionMsg.maxsize )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 238, ASSERT_TYPE_ASSERT, "(s_definitionMsg.cursize <= s_definitionMsg.maxsize)", (const char *)&queryFormat, "s_definitionMsg.cursize <= s_definitionMsg.maxsize", v49) )
          __debugbreak();
        cursize = s_definitionMsg.cursize;
      }
      if ( s_definitionSentOffset < cursize )
      {
        BB_Copy_0(msg, &s_definitionMsg.data[s_definitionSentOffset], cursize - s_definitionSentOffset);
        s_definitionSentOffset = s_definitionMsg.cursize;
      }
    }
    *parameterCount = v16->parameterCount;
    *parameters = v16->parameters;
  }
  if ( v33 )
    Com_PrintWarning(16, "Blackbox format string '%s' does not contain the proper sequence of key and value pairs: %s\n", v51, fmt);
  return (unsigned int)v16->definitionId;
}

/*
==============
BB_ParseParamForDLog
==============
*/
void BB_ParseParamForDLog(DLogContext *context, const char *columnName, const unsigned __int8 parameter, char *args)
{
  char v11; 

  _RSI = args;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 500, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( (parameter & 3) != 0 )
  {
    if ( (parameter & 3) != 1 )
    {
      if ( (parameter & 3) == 2 )
      {
        __asm { vmovsd  xmm0, qword ptr [rsi] }
        if ( (parameter & 0x1C) == 12 )
        {
          __asm { vmovaps xmm2, xmm0; value }
          DLog_Float64(context, columnName, *(long double *)&_XMM2);
        }
        else
        {
          __asm { vcvtsd2ss xmm2, xmm0, xmm0; value }
          DLog_Float32(context, columnName, *(float *)&_XMM2);
        }
      }
      else if ( (parameter & 3) == 3 )
      {
        DLog_String(context, columnName, *(const char **)_RSI, 0);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 588, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown type!") )
      {
        __debugbreak();
      }
      return;
    }
    if ( (parameter & 0x1C) == 28 )
    {
      DLog_UInt64(context, columnName, *(_QWORD *)_RSI);
      return;
    }
    if ( (parameter & 0x10) != 0 )
    {
      DLog_UInt32(context, columnName, *(_DWORD *)_RSI);
      return;
    }
  }
  v11 = parameter & 0x1C;
  if ( (parameter & 0x1C) == 12 || v11 == 28 )
  {
    DLog_Int64(context, columnName, *(_QWORD *)_RSI);
  }
  else if ( (parameter & 0x10) != 0 || v11 == 8 || v11 == 4 || !v11 )
  {
    DLog_Int32(context, columnName, *(_DWORD *)_RSI);
  }
}

/*
==============
BB_ParseParameter
==============
*/
unsigned __int8 BB_ParseParameter(const char *string, unsigned __int64 len)
{
  int v2; 
  const char *v5; 
  int v6; 
  int v7; 
  const char *v8; 
  signed __int64 v9; 
  char v10; 
  int v11; 
  const char *v12; 
  char v13; 
  int v14; 
  unsigned __int8 result; 
  char v16; 

  v2 = 0;
  v16 = 0;
  v5 = string;
  v6 = 8;
  v7 = 32;
  while ( 1 )
  {
    v8 = "unsigned";
LABEL_3:
    v9 = v5 - string;
    if ( v5 - string < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned __int64 __cdecl truncate_cast_impl<unsigned __int64,__int64>(__int64)", v8, v5 - string, "signed", v5 - string) )
      __debugbreak();
    if ( v9 >= len )
      return 35;
    if ( v9 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox_data.cpp", 278, ASSERT_TYPE_ASSERT, "(( p - string ) >= 0)", (const char *)&queryFormat, "( p - string ) >= 0") )
      __debugbreak();
    v8 = (const char *)0x140000000i64;
    switch ( v2 )
    {
      case 0:
        v10 = *v5;
        if ( *v5 == 37 )
        {
          v2 = 6;
          v6 = 8;
        }
        v11 = 0;
        ++v5;
        if ( v10 != 37 )
          v11 = v7;
        v7 = v11;
        continue;
      case 1:
        switch ( *v5 )
        {
          case 'A':
          case 'E':
          case 'F':
          case 'G':
          case 'a':
          case 'e':
          case 'f':
          case 'g':
            v13 = 2;
            goto LABEL_44;
          case 'D':
            goto $LN44_20;
          case 'U':
          case 'p':
            goto $LN45_24;
          case 'X':
          case 'u':
          case 'x':
            v16 = 1;
$LN45_24:
            v13 = 1;
            goto LABEL_44;
          case 'c':
            v13 = 0;
            v6 = 0;
            goto LABEL_44;
          case 'd':
          case 'i':
          case 'o':
            v16 = 1;
$LN44_20:
            v13 = 0;
            goto LABEL_44;
          case 's':
            v6 = 0;
            goto LABEL_43;
          default:
            v7 = 32;
LABEL_43:
            v13 = 3;
LABEL_44:
            v14 = v6 | 0x10;
            ++v5;
            v8 = "unsigned";
            v2 = 0;
            if ( !v16 )
              v14 = v6;
            v6 = v14;
            if ( v7 == 32 )
              goto LABEL_3;
            result = v7 | v14 | v13;
            break;
        }
        return result;
      case 2:
        switch ( *v5 )
        {
          case 'L':
          case 't':
            v6 = 8;
            ++v5;
            v2 = 1;
            continue;
          case 'h':
            v2 = 1;
            v5 += (v5[1] == 104) + 1;
            continue;
          case 'j':
          case 'z':
            goto $LN33_38;
          case 'l':
            ++v5;
            v6 = 8;
            if ( *v5 == 108 )
            {
$LN33_38:
              v6 = 12;
              ++v5;
            }
            goto LABEL_33;
          default:
LABEL_33:
            v2 = 1;
            break;
        }
        continue;
      case 3:
        if ( (unsigned __int8)(*v5 - 48) <= 9u || *v5 == 45 )
          goto LABEL_17;
        v2 = 2;
        break;
      case 4:
        v12 = v5 + 1;
        v2 = (*v5 == 46) + 2;
        if ( *v5 != 46 )
          v12 = v5;
        v5 = v12;
        continue;
      case 5:
        if ( (unsigned __int8)(*v5 - 48) <= 9u || *v5 == 45 )
          goto LABEL_17;
        v2 = 4;
        break;
      case 6:
        if ( strchr_0("#0-+ ", *v5) )
LABEL_17:
          ++v5;
        else
          v2 = 5;
        break;
      default:
        goto LABEL_3;
    }
  }
}

/*
==============
BB_RewriteDefinitions
==============
*/
void BB_RewriteDefinitions(bb_msg_t *msg)
{
  s_definitionSentOffset = 0i64;
  if ( s_definitionMsg.cursize )
  {
    BB_Copy_0(msg, s_definitionMsg.data, s_definitionMsg.cursize);
    s_definitionSentOffset = s_definitionMsg.cursize;
  }
}

/*
==============
BB_WriteDefinitions
==============
*/
void BB_WriteDefinitions(bb_msg_t *msg)
{
  if ( s_definitionSentOffset < s_definitionMsg.cursize )
  {
    BB_Copy_0(msg, &s_definitionMsg.data[s_definitionSentOffset], s_definitionMsg.cursize - s_definitionSentOffset);
    s_definitionSentOffset = s_definitionMsg.cursize;
  }
}

/*
==============
BB_WriteFormatParameters
==============
*/
void BB_WriteFormatParameters(bb_msg_t *msg, bool isProtoWhitelisted, bool isBlackboxWhitelisted, int parameterCount, const unsigned __int8 *parameters, char *args)
{
  bool v7; 
  __int64 v8; 
  unsigned __int8 v10; 
  const char *v11; 
  const char *v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  const char *v15; 
  unsigned int i; 
  int v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  char v24; 
  bool v25; 
  unsigned __int64 cursize; 
  unsigned int v27; 
  char *v28; 
  unsigned int j; 
  unsigned __int8 v30; 
  __int64 v31; 
  unsigned __int64 v33; 
  unsigned int v34; 
  unsigned __int8 *v35; 
  unsigned int k; 
  unsigned __int8 v37; 
  unsigned __int8 v38; 
  __int64 v39; 
  unsigned __int64 v41; 
  unsigned int v42; 
  unsigned __int8 *v43; 
  unsigned int m; 
  unsigned __int8 v45; 
  unsigned __int8 v46; 
  __int64 v47; 
  char v48; 
  unsigned __int64 v49; 
  unsigned int v50; 
  char *v51; 
  unsigned int n; 
  unsigned __int8 v53; 
  __int64 v54; 
  __int64 v55; 
  int v56; 
  unsigned __int64 v57; 
  unsigned int v58; 
  unsigned __int8 *v59; 
  unsigned int jj; 
  unsigned __int8 v61; 
  unsigned __int8 v62; 
  __int64 v63; 
  unsigned __int64 v64; 
  unsigned int v65; 
  unsigned __int8 *v66; 
  unsigned int ii; 
  unsigned __int8 v68; 
  unsigned __int8 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  int v75; 

  v7 = isBlackboxWhitelisted;
  v72 = parameterCount;
  if ( parameterCount > 0 )
  {
    v8 = 0i64;
    _RDI = args;
    v73 = 0i64;
    while ( 1 )
    {
      v10 = parameters[v8];
      if ( (v10 & 3) != 0 )
      {
        if ( (parameters[v8] & 3) != 1 )
        {
          if ( (parameters[v8] & 3) != 2 )
          {
            if ( (parameters[v8] & 3) == 3 )
            {
              v11 = *(const char **)_RDI;
              v12 = "NULL";
              _RDI += 8;
              if ( v11 )
                v12 = v11;
              if ( v7 )
              {
                v13 = -1i64;
                do
                  ++v13;
                while ( v12[v13] );
                v14 = v13;
                v15 = v12;
                for ( i = 5381; v14; --v14 )
                {
                  v17 = *v15++;
                  i = v17 + 33 * i;
                }
                v18 = i & 0x3FF;
                v19 = s_stringHashTable[v18];
                if ( v19 == i )
                {
                  ++s_stringHits;
                  s_stringHitBytes += truncate_cast<unsigned int,unsigned __int64>(v13);
                  v20 = 2 * v18;
                }
                else
                {
                  ++s_stringMisses;
                  if ( v19 )
                    ++s_stringCollisions;
                  s_stringHashTable[v18] = i;
                  v20 = (2 * v18) | 1;
                }
                BB_WriteVarUInt32_1(msg, v20);
                if ( (v20 & 1) != 0 )
                {
                  v21 = truncate_cast<unsigned int,unsigned __int64>(v13);
                  BB_WriteVarUInt32_1(msg, v21);
                  v22 = truncate_cast<unsigned int,unsigned __int64>(v13);
                  BB_Copy_0(msg, v12, v22);
                }
              }
            }
            goto LABEL_84;
          }
          __asm { vmovsd  xmm0, qword ptr [rdi] }
          _RDI += 8;
          v24 = v10 & 0x1C;
          if ( v24 == 12 )
          {
            if ( !v7 )
              goto LABEL_84;
            v25 = msg->pppHashTable == NULL;
            __asm { vmovsd  [rsp+68h+var_48], xmm0 }
            if ( !v25 )
              goto LABEL_84;
            if ( !msg->overflow )
            {
              cursize = msg->cursize;
              if ( cursize + 8 <= msg->maxsize )
              {
                v27 = truncate_cast<unsigned int,unsigned __int64>(cursize);
                v28 = (char *)&v71 + 1;
                for ( j = 0; j < 8; j += 8 )
                {
                  v30 = *(v28 - 1);
                  v28 += 8;
                  msg->data[j + v27] = v30;
                  msg->data[v27 + 1 + j] = *(v28 - 8);
                  msg->data[v27 + 2 + j] = *(v28 - 7);
                  msg->data[v27 + 3 + j] = *(v28 - 6);
                  msg->data[v27 + 4 + j] = *(v28 - 5);
                  msg->data[v27 + 5 + j] = *(v28 - 4);
                  msg->data[v27 + 6 + j] = *(v28 - 3);
                  v31 = v27 + 7 + j;
                  msg->data[v31] = *(v28 - 2);
                }
                msg->cursize += 8i64;
                v7 = isBlackboxWhitelisted;
                goto LABEL_84;
              }
            }
          }
          else if ( v24 == 4 )
          {
            if ( !v7 )
              goto LABEL_84;
            v25 = msg->pppHashTable == NULL;
            __asm
            {
              vcvtsd2ss xmm0, xmm0, xmm0
              vmovss  [rsp+68h+arg_18], xmm0
            }
            if ( !v25 )
              goto LABEL_84;
            if ( !msg->overflow )
            {
              v33 = msg->cursize;
              if ( v33 + 4 <= msg->maxsize )
              {
                v34 = truncate_cast<unsigned int,unsigned __int64>(v33);
                v35 = (unsigned __int8 *)&v75 + 1;
                for ( k = 0; k < 4; k += 4 )
                {
                  v37 = *(v35 - 1);
                  v38 = *v35;
                  v35 += 4;
                  msg->data[k + v34] = v37;
                  msg->data[v34 + 1 + k] = v38;
                  msg->data[v34 + 2 + k] = *(v35 - 3);
                  v39 = v34 + k + 3;
                  msg->data[v39] = *(v35 - 2);
                }
                msg->cursize += 4i64;
                goto LABEL_84;
              }
            }
          }
          else
          {
            if ( !v7 )
              goto LABEL_84;
            v25 = msg->pppHashTable == NULL;
            __asm
            {
              vcvtsd2ss xmm0, xmm0, xmm0
              vmovss  [rsp+68h+arg_18], xmm0
            }
            if ( !v25 )
              goto LABEL_84;
            if ( !msg->overflow )
            {
              v41 = msg->cursize;
              if ( v41 + 4 <= msg->maxsize )
              {
                v42 = truncate_cast<unsigned int,unsigned __int64>(v41);
                v43 = (unsigned __int8 *)&v75 + 1;
                for ( m = 0; m < 4; m += 4 )
                {
                  v45 = *(v43 - 1);
                  v46 = *v43;
                  v43 += 4;
                  msg->data[m + v42] = v45;
                  msg->data[v42 + 1 + m] = v46;
                  msg->data[v42 + 2 + m] = *(v43 - 3);
                  v47 = v42 + m + 3;
                  msg->data[v47] = *(v43 - 2);
                }
                msg->cursize += 4i64;
                goto LABEL_84;
              }
            }
          }
          goto LABEL_58;
        }
        if ( (v10 & 0x1C) == 28 )
        {
          _RDI += 8;
          if ( v7 )
            BB_WriteVarUInt64_0(msg, *((_QWORD *)_RDI - 1));
          goto LABEL_84;
        }
        if ( (v10 & 0x10) != 0 )
        {
          _RDI += 8;
          if ( v7 )
            BB_WriteVarUInt32_1(msg, *((_DWORD *)_RDI - 2));
          goto LABEL_84;
        }
      }
      v48 = v10 & 0x1C;
      if ( (v10 & 0x1C) == 12 )
      {
        _RDI += 8;
        if ( !v7 )
          goto LABEL_84;
        v25 = msg->pppHashTable == NULL;
        v71 = *((_QWORD *)_RDI - 1);
        if ( !v25 )
          goto LABEL_84;
        if ( !msg->overflow )
        {
          v49 = msg->cursize;
          if ( v49 + 8 <= msg->maxsize )
          {
            v50 = truncate_cast<unsigned int,unsigned __int64>(v49);
            v51 = (char *)&v71 + 1;
            for ( n = 0; n < 8; n += 8 )
            {
              v53 = *(v51 - 1);
              v51 += 8;
              msg->data[n + v50] = v53;
              msg->data[v50 + 1 + n] = *(v51 - 8);
              msg->data[v50 + 2 + n] = *(v51 - 7);
              msg->data[v50 + 3 + n] = *(v51 - 6);
              msg->data[v50 + 4 + n] = *(v51 - 5);
              msg->data[v50 + 5 + n] = *(v51 - 4);
              msg->data[v50 + 6 + n] = *(v51 - 3);
              v54 = v50 + 7 + n;
              msg->data[v54] = *(v51 - 2);
            }
            msg->cursize += 8i64;
            v7 = isBlackboxWhitelisted;
            goto LABEL_84;
          }
        }
        goto LABEL_58;
      }
      if ( v48 == 28 )
      {
        v55 = *(_QWORD *)_RDI;
        _RDI += 8;
        if ( v7 )
          BB_WriteVarUInt64_0(msg, (2 * v55) ^ (v55 >> 63));
        goto LABEL_84;
      }
      if ( (v10 & 0x10) != 0 )
      {
        v56 = *(_DWORD *)_RDI;
        _RDI += 8;
        if ( v7 )
          BB_WriteVarUInt32_1(msg, (2 * v56) ^ ((unsigned __int64)v56 >> 31));
        goto LABEL_84;
      }
      if ( v48 == 8 )
        break;
      if ( v48 != 4 )
      {
        if ( !v48 )
        {
          _RDI += 8;
          if ( v7 )
            BB_WriteInt8(msg, *((_DWORD *)_RDI - 2));
        }
        goto LABEL_84;
      }
      _RDI += 8;
      if ( v7 )
      {
        v25 = msg->pppHashTable == NULL;
        LOWORD(v75) = *((_WORD *)_RDI - 4);
        if ( v25 )
        {
          if ( !msg->overflow )
          {
            v64 = msg->cursize;
            if ( v64 + 2 <= msg->maxsize )
            {
              v65 = truncate_cast<unsigned int,unsigned __int64>(v64);
              v66 = (unsigned __int8 *)&v75 + 1;
              for ( ii = 0; ii < 2; ii += 2 )
              {
                v68 = *(v66 - 1);
                v69 = *v66;
                v66 += 2;
                msg->data[ii + v65] = v68;
                v70 = v65 + ii + 1;
                msg->data[v70] = v69;
              }
              msg->cursize += 2i64;
              goto LABEL_84;
            }
          }
LABEL_58:
          msg->overflow = 1;
        }
      }
LABEL_84:
      v8 = v73 + 1;
      v73 = v8;
      if ( v8 >= v72 )
        goto LABEL_85;
    }
    _RDI += 8;
    if ( !v7 )
      goto LABEL_84;
    v25 = msg->pppHashTable == NULL;
    v75 = *((_DWORD *)_RDI - 2);
    if ( !v25 )
      goto LABEL_84;
    if ( !msg->overflow )
    {
      v57 = msg->cursize;
      if ( v57 + 4 <= msg->maxsize )
      {
        v58 = truncate_cast<unsigned int,unsigned __int64>(v57);
        v59 = (unsigned __int8 *)&v75 + 1;
        for ( jj = 0; jj < 4; jj += 4 )
        {
          v61 = *(v59 - 1);
          v62 = *v59;
          v59 += 4;
          msg->data[jj + v58] = v61;
          msg->data[v58 + 1 + jj] = v62;
          msg->data[v58 + 2 + jj] = *(v59 - 3);
          v63 = v58 + jj + 3;
          msg->data[v63] = *(v59 - 2);
        }
        msg->cursize += 4i64;
        goto LABEL_84;
      }
    }
    goto LABEL_58;
  }
LABEL_85:
  if ( msg->overflow )
    ++overFlowCounter;
}

/*
==============
BB_WriteKnownString
==============
*/
void BB_WriteKnownString(bb_msg_t *msg, const char *str, unsigned __int64 len)
{
  unsigned int i; 
  int v5; 

  for ( i = 5381; len; --len )
  {
    v5 = *str++;
    i = v5 + 33 * i;
  }
  BB_WriteVarUInt32_1(msg, i);
}

/*
==============
BB_WriteString
==============
*/
void BB_WriteString(bb_msg_t *msg, const char *str, unsigned __int64 len)
{
  unsigned __int64 v6; 
  const char *v7; 
  unsigned int i; 
  int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 

  v6 = len;
  v7 = str;
  for ( i = 5381; v6; --v6 )
  {
    v9 = *v7++;
    i = v9 + 33 * i;
  }
  v10 = i & 0x3FF;
  v11 = s_stringHashTable[v10];
  if ( v11 == i )
  {
    ++s_stringHits;
    s_stringHitBytes += truncate_cast<unsigned int,unsigned __int64>(len);
    v12 = 2 * v10;
  }
  else
  {
    ++s_stringMisses;
    if ( v11 )
      ++s_stringCollisions;
    s_stringHashTable[v10] = i;
    v12 = (2 * v10) | 1;
  }
  BB_WriteVarUInt32_1(msg, v12);
  if ( (v12 & 1) != 0 )
  {
    v13 = truncate_cast<unsigned int,unsigned __int64>(len);
    BB_WriteVarUInt32_1(msg, v13);
    v14 = truncate_cast<unsigned int,unsigned __int64>(len);
    BB_Copy_0(msg, str, v14);
  }
}

/*
==============
BB_WriteStringAlways
==============
*/
void BB_WriteStringAlways(bb_msg_t *msg, const char *str, unsigned __int64 len)
{
  unsigned int v6; 
  unsigned int v7; 

  v6 = truncate_cast<unsigned int,unsigned __int64>(len);
  BB_WriteVarUInt32_1(msg, v6);
  v7 = truncate_cast<unsigned int,unsigned __int64>(len);
  BB_Copy_0(msg, str, v7);
}

