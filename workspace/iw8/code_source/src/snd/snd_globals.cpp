/*
==============
SND_GetWhizby
==============
*/

const SndWhizby *__fastcall SND_GetWhizby(unsigned int id)
{
  return ?SND_GetWhizby@@YAPEBUSndWhizby@@I@Z(id);
}

/*
==============
SND_GetContextValue
==============
*/

SndContextValue *__fastcall SND_GetContextValue(int index)
{
  return ?SND_GetContextValue@@YAPEAUSndContextValue@@H@Z(index);
}

/*
==============
SND_GetContext
==============
*/

SndContext *__fastcall SND_GetContext(unsigned int type)
{
  return ?SND_GetContext@@YAPEAUSndContext@@I@Z(type);
}

/*
==============
SND_FindContextIndex
==============
*/

int __fastcall SND_FindContextIndex(unsigned int type)
{
  return ?SND_FindContextIndex@@YAHI@Z(type);
}

/*
==============
SND_FindRowWhizby
==============
*/

void *__fastcall SND_FindRowWhizby(unsigned int id)
{
  return ?SND_FindRowWhizby@@YAPEAXI@Z(id);
}

/*
==============
SND_GetContextFromIndex
==============
*/

bool __fastcall SND_GetContextFromIndex(int contextIndex, unsigned int *outType, unsigned int *outValue)
{
  return ?SND_GetContextFromIndex@@YA_NHPEAI0@Z(contextIndex, outType, outValue);
}

/*
==============
SND_SV_FindContextIndex
==============
*/

int __fastcall SND_SV_FindContextIndex(const char *type, const char *value)
{
  return ?SND_SV_FindContextIndex@@YAHPEBD0@Z(type, value);
}

/*
==============
SND_GetWhizby
==============
*/

const SndWhizby *__fastcall SND_GetWhizby(const WeaponSFXPackage *sfxPackage)
{
  return ?SND_GetWhizby@@YAPEBUSndWhizby@@PEBUWeaponSFXPackage@@@Z(sfxPackage);
}

/*
==============
SND_GetMaster
==============
*/

const SndMaster *__fastcall SND_GetMaster(unsigned int id)
{
  return ?SND_GetMaster@@YAPEBUSndMaster@@I@Z(id);
}

/*
==============
SND_FindRowSndContext
==============
*/

void *__fastcall SND_FindRowSndContext(unsigned int id)
{
  return ?SND_FindRowSndContext@@YAPEAXI@Z(id);
}

/*
==============
SND_GetContextNames
==============
*/

bool __fastcall SND_GetContextNames(const SndAlias *alias, const char **typeName, const char **valueName)
{
  return ?SND_GetContextNames@@YA_NPEBUSndAlias@@PEAPEBD1@Z(alias, typeName, valueName);
}

/*
==============
SND_IsValidContext
==============
*/

bool __fastcall SND_IsValidContext(unsigned int type, unsigned int value)
{
  return ?SND_IsValidContext@@YA_NII@Z(type, value);
}

/*
==============
SND_FindRowMaster
==============
*/

void *__fastcall SND_FindRowMaster(unsigned int id)
{
  return ?SND_FindRowMaster@@YAPEAXI@Z(id);
}

/*
==============
SND_FindContextIndex
==============
*/
__int64 SND_FindContextIndex(unsigned int type)
{
  __int64 result; 
  const SndGlobals *globals; 
  unsigned int contextCount; 
  SndContext *contexts; 
  unsigned int *i; 

  if ( !SND_ShouldInit() )
    return 0i64;
  if ( !type )
    return 0xFFFFFFFFi64;
  globals = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_globals.cpp", LODWORD(g_snd.globals) + 45, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
    if ( !g_snd.globals )
      return 0xFFFFFFFFi64;
  }
  contextCount = globals->contextCount;
  result = 0i64;
  if ( !contextCount )
    return 0xFFFFFFFFi64;
  contexts = globals->contexts;
  for ( i = &contexts->typeId; !contexts || *i != type; i += 6 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= contextCount )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
SND_FindRowMaster
==============
*/
SndMaster *SND_FindRowMaster(unsigned int id)
{
  const SndGlobals *globals; 
  unsigned int masterCount; 
  __int64 v4; 
  SndMaster *masters; 
  unsigned int *i; 

  globals = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_globals.cpp", 212, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
    if ( !g_snd.globals )
      return 0i64;
  }
  masterCount = globals->masterCount;
  v4 = 0i64;
  if ( !masterCount )
    return 0i64;
  masters = globals->masters;
  for ( i = &masters->id; *i != id; i += 143 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= masterCount )
      return 0i64;
  }
  return &masters[v4];
}

/*
==============
SND_FindRowSndContext
==============
*/
SndContext *SND_FindRowSndContext(unsigned int id)
{
  unsigned int contextCount; 
  __int64 v2; 
  SndContext *contexts; 
  unsigned int *i; 

  if ( !g_snd.globals )
    return 0i64;
  contextCount = g_snd.globals->contextCount;
  v2 = 0i64;
  if ( !contextCount )
    return 0i64;
  contexts = g_snd.globals->contexts;
  for ( i = &contexts->typeId; *i != id; i += 6 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= contextCount )
      return 0i64;
  }
  return &contexts[v2];
}

/*
==============
SND_FindRowWhizby
==============
*/
SndWhizby *SND_FindRowWhizby(unsigned int id)
{
  const SndGlobals *globals; 
  unsigned int whizbyCount; 
  __int64 v4; 
  SndWhizby *whizbys; 
  unsigned int *i; 

  globals = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_globals.cpp", 255, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
    if ( !g_snd.globals )
      return 0i64;
  }
  whizbyCount = globals->whizbyCount;
  v4 = 0i64;
  if ( !whizbyCount )
    return 0i64;
  whizbys = globals->whizbys;
  for ( i = &whizbys->id; *i != id; i += 33 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= whizbyCount )
      return 0i64;
  }
  return &whizbys[v4];
}

/*
==============
SND_GetContext
==============
*/
SndContext *SND_GetContext(unsigned int type)
{
  const SndGlobals *globals; 
  unsigned int contextCount; 
  int v5; 
  SndContext *contexts; 
  unsigned int *i; 

  if ( !SND_ShouldInit() )
    return g_snd.globals->contexts;
  if ( type )
  {
    globals = g_snd.globals;
    if ( g_snd.globals )
      goto LABEL_8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_globals.cpp", 45, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
    if ( g_snd.globals )
    {
LABEL_8:
      contextCount = globals->contextCount;
      v5 = 0;
      if ( contextCount )
      {
        contexts = globals->contexts;
        for ( i = &contexts->typeId; !contexts || *i != type; i += 6 )
        {
          if ( ++v5 >= contextCount )
            return 0i64;
        }
        if ( v5 >= 0 )
          return &globals->contexts[v5];
      }
    }
  }
  return 0i64;
}

/*
==============
SND_GetContextFromIndex
==============
*/
char SND_GetContextFromIndex(int contextIndex, unsigned int *outType, unsigned int *outValue)
{
  __int64 v3; 
  __int64 v6; 
  unsigned int contextCount; 
  SndContext *contexts; 
  int *p_numValues; 
  int v10; 

  v3 = contextIndex;
  if ( contextIndex < 0 )
    return 0;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v6 = 0i64;
  contextCount = g_snd.globals->contextCount;
  if ( !contextCount )
  {
LABEL_7:
    Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
    return 0;
  }
  contexts = g_snd.globals->contexts;
  p_numValues = &contexts->numValues;
  while ( 1 )
  {
    v10 = p_numValues[1];
    if ( v10 <= (int)v3 && *p_numValues + v10 > (int)v3 )
      break;
    v6 = (unsigned int)(v6 + 1);
    p_numValues += 6;
    if ( (unsigned int)v6 >= contextCount )
      goto LABEL_7;
  }
  *outType = contexts[v6].typeId;
  *outValue = g_snd.globals->contextValues[v3].valueId;
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return 1;
}

/*
==============
SND_GetContextNames
==============
*/
bool SND_GetContextNames(const SndAlias *alias, const char **typeName, const char **valueName)
{
  bool result; 
  __int64 v7; 
  unsigned int contextType; 
  unsigned int contextValue; 
  unsigned int contextCount; 
  int *p_startIndex; 
  unsigned int v12; 
  int v13; 
  __int64 v14; 

  result = SND_ShouldInit();
  if ( result )
  {
    Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
    v7 = 0i64;
    contextType = alias->contextType;
    contextValue = alias->contextValue;
    contextCount = g_snd.globals->contextCount;
    if ( contextCount )
    {
      p_startIndex = &g_snd.globals->contexts->startIndex;
      while ( 1 )
      {
        if ( *(p_startIndex - 2) == contextType )
        {
          v12 = *(p_startIndex - 1);
          v13 = 0;
          if ( v12 )
            break;
        }
LABEL_8:
        v7 = (unsigned int)(v7 + 1);
        p_startIndex += 6;
        if ( (unsigned int)v7 >= contextCount )
          goto LABEL_9;
      }
      while ( 1 )
      {
        v14 = (unsigned int)(v13 + *p_startIndex);
        if ( g_snd.globals->contextValues[v14].valueId == contextValue )
          break;
        if ( ++v13 >= v12 )
          goto LABEL_8;
      }
      Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
      *typeName = g_snd.globals->contexts[v7].type;
      *valueName = g_snd.globals->contextValues[v14].value;
      return 1;
    }
    else
    {
LABEL_9:
      Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
      return 0;
    }
  }
  return result;
}

/*
==============
SND_GetContextValue
==============
*/
SndContextValue *SND_GetContextValue(int index)
{
  return &g_snd.globals->contextValues[index];
}

/*
==============
SND_GetMaster
==============
*/
SndMaster *SND_GetMaster(unsigned int id)
{
  const SndGlobals *globals; 
  unsigned int masterCount; 
  unsigned int v4; 
  SndMaster *masters; 
  unsigned int *p_id; 

  globals = g_snd.globals;
  while ( 1 )
  {
    if ( globals )
      goto LABEL_16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_globals.cpp", 231, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
    if ( g_snd.globals )
    {
LABEL_16:
      masterCount = globals->masterCount;
      v4 = 0;
      if ( masterCount )
        break;
    }
LABEL_10:
    if ( g_snd.defaultHash == id )
      return 0i64;
    id = g_snd.defaultHash;
  }
  masters = globals->masters;
  p_id = &masters->id;
  while ( *p_id != id )
  {
    ++v4;
    p_id += 143;
    if ( v4 >= masterCount )
      goto LABEL_10;
  }
  return &masters[v4];
}

/*
==============
SND_GetWhizby
==============
*/
SndWhizby *SND_GetWhizby(unsigned int id)
{
  const SndGlobals *globals; 
  unsigned int whizbyCount; 
  __int64 v4; 
  SndWhizby *whizbys; 
  unsigned int *i; 

  globals = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_globals.cpp", 274, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
    if ( !g_snd.globals )
      return 0i64;
  }
  whizbyCount = globals->whizbyCount;
  v4 = 0i64;
  if ( !whizbyCount )
    return 0i64;
  whizbys = globals->whizbys;
  for ( i = &whizbys->id; *i != id; i += 33 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= whizbyCount )
      return 0i64;
  }
  return &whizbys[v4];
}

/*
==============
SND_GetWhizby
==============
*/
const SndWhizby *SND_GetWhizby(const WeaponSFXPackage *sfxPackage)
{
  unsigned int defaultHash; 

  if ( !sfxPackage || (defaultHash = sfxPackage->whizbyType) == 0 )
    defaultHash = g_snd.defaultHash;
  return SND_GetWhizby(defaultHash);
}

/*
==============
SND_IsValidContext
==============
*/
char SND_IsValidContext(unsigned int type, unsigned int value)
{
  int v2; 
  unsigned int contextCount; 
  int *i; 
  unsigned int v5; 
  int v6; 

  v2 = 0;
  contextCount = g_snd.globals->contextCount;
  if ( !contextCount )
    return 0;
  for ( i = &g_snd.globals->contexts->startIndex; ; i += 6 )
  {
    if ( *(i - 2) == type )
    {
      v5 = *(i - 1);
      v6 = 0;
      if ( v5 )
        break;
    }
LABEL_7:
    if ( ++v2 >= contextCount )
      return 0;
  }
  while ( g_snd.globals->contextValues[v6 + *i].valueId != value )
  {
    if ( ++v6 >= v5 )
      goto LABEL_7;
  }
  return 1;
}

/*
==============
SND_SV_FindContextIndex
==============
*/
__int64 SND_SV_FindContextIndex(const char *type, const char *value)
{
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int contextCount; 
  int *p_startIndex; 
  unsigned int v10; 
  unsigned int v11; 

  if ( !SND_ShouldInit() )
    return 0i64;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v5 = SND_HashName(type);
  v6 = SND_HashName(value);
  v7 = 0;
  contextCount = g_snd.globals->contextCount;
  if ( contextCount )
  {
    p_startIndex = &g_snd.globals->contexts->startIndex;
    while ( 1 )
    {
      if ( *(p_startIndex - 2) == v5 )
      {
        v10 = *(p_startIndex - 1);
        if ( v10 )
          break;
      }
LABEL_10:
      ++v7;
      p_startIndex += 6;
      if ( v7 >= contextCount )
        goto LABEL_11;
    }
    v11 = *p_startIndex;
    while ( g_snd.globals->contextValues[v11].valueId != v6 )
    {
      if ( ++v11 - *p_startIndex >= v10 )
        goto LABEL_10;
    }
    Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
    return v11;
  }
  else
  {
LABEL_11:
    Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
    return 0xFFFFFFFFi64;
  }
}

