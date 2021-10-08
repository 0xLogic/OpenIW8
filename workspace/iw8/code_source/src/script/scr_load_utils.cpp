/*
==============
Scr_SpawnString
==============
*/

int __fastcall Scr_SpawnString(const SpawnVar *spawnVar, unsigned int key, const char *defaultString, const char **out)
{
  return ?Scr_SpawnString@@YAHPEBUSpawnVar@@IPEBDPEAPEBD@Z(spawnVar, key, defaultString, out);
}

/*
==============
Scr_AddSpawnVarToken
==============
*/

char *__fastcall Scr_AddSpawnVarToken(const char *string, SpawnVar *spawnVar)
{
  return ?Scr_AddSpawnVarToken@@YAPEADPEBDPEAUSpawnVar@@@Z(string, spawnVar);
}

/*
==============
Scr_ResetEntityParsePoint
==============
*/

void Scr_ResetEntityParsePoint(void)
{
  ?Scr_ResetEntityParsePoint@@YAXXZ();
}

/*
==============
Scr_ParseSpawnVars
==============
*/

int __fastcall Scr_ParseSpawnVars(SpawnVar *spawnVar)
{
  return ?Scr_ParseSpawnVars@@YAHPEAUSpawnVar@@@Z(spawnVar);
}

/*
==============
Scr_GetEntityParsePoint
==============
*/

const char *__fastcall Scr_GetEntityParsePoint()
{
  return ?Scr_GetEntityParsePoint@@YAPEBDXZ();
}

/*
==============
Scr_GetEntityToken
==============
*/

int __fastcall Scr_GetEntityToken(char *buffer, int bufferSize)
{
  return ?Scr_GetEntityToken@@YAHPEADH@Z(buffer, bufferSize);
}

/*
==============
Scr_NewString
==============
*/

scr_string_t __fastcall Scr_NewString(const char *string)
{
  return ?Scr_NewString@@YA?AW4scr_string_t@@PEBD@Z(string);
}

/*
==============
Scr_ParsingAddonEntities
==============
*/

int __fastcall Scr_ParsingAddonEntities()
{
  return ?Scr_ParsingAddonEntities@@YAHXZ();
}

/*
==============
Scr_ParseSpawnVars2
==============
*/

int __fastcall Scr_ParseSpawnVars2(SpawnVar *spawnVar)
{
  return ?Scr_ParseSpawnVars2@@YAHPEAUSpawnVar@@@Z(spawnVar);
}

/*
==============
Scr_AddSpawnVarToken
==============
*/
char *Scr_AddSpawnVarToken(const char *string, SpawnVar *spawnVar)
{
  unsigned __int64 v4; 
  int numSpawnVarChars; 
  int v6; 
  char *v7; 
  char *result; 
  char *fmt; 

  v4 = -1i64;
  do
    ++v4;
  while ( string[v4] );
  if ( (v4 > 0x7FFFFFFFFFFFFFFFi64 || v4 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v4, "unsigned", v4) )
    __debugbreak();
  numSpawnVarChars = spawnVar->numSpawnVarChars;
  v6 = numSpawnVarChars + v4 + 1;
  if ( v6 > 0x2000 )
  {
    LODWORD(fmt) = 0x2000;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057470, 468i64, (unsigned int)v6, fmt);
    numSpawnVarChars = spawnVar->numSpawnVarChars;
  }
  v7 = &spawnVar->spawnVarChars[numSpawnVarChars];
  memcpy_0(v7, string, (int)v4 + 1);
  result = v7;
  spawnVar->numSpawnVarChars = v6;
  return result;
}

/*
==============
Scr_EntityParseToken
==============
*/
__int64 Scr_EntityParseToken(char *buffer, int bufferSize)
{
  unsigned __int64 v3; 
  const char *v4; 
  __int64 result; 

  v3 = bufferSize;
  v4 = Com_Parse(&g_entityBeginParsePoint);
  Core_strcpy(buffer, v3, v4);
  result = (__int64)g_entityBeginParsePoint;
  if ( g_entityBeginParsePoint )
  {
    g_entityEndParsePoint = g_entityBeginParsePoint;
    return 1i64;
  }
  return result;
}

/*
==============
Scr_GetEntityParsePoint
==============
*/
const char *Scr_GetEntityParsePoint()
{
  return g_entityEndParsePoint;
}

/*
==============
Scr_GetEntityToken
==============
*/
_BOOL8 Scr_GetEntityToken(char *buffer, int bufferSize)
{
  unsigned __int64 v3; 
  const char *v4; 

  v3 = bufferSize;
  v4 = Com_Parse(&g_entityBeginParsePoint);
  Core_strcpy(buffer, v3, v4);
  if ( !g_entityBeginParsePoint )
    return g_addonMapEnts && g_addonMapEnts->entityString && !g_parsingAddonEntities && (g_entityBeginParsePoint = g_addonMapEnts->entityString, g_parsingAddonEntities = 1, (unsigned int)Scr_EntityParseToken(buffer, v3));
  g_entityEndParsePoint = g_entityBeginParsePoint;
  return 1i64;
}

/*
==============
Scr_NewString
==============
*/
scr_string_t Scr_NewString(const char *string)
{
  return SL_GetString(string, 0);
}

/*
==============
Scr_ParseSpawnVars2
==============
*/
__int64 Scr_ParseSpawnVars2(SpawnVar *spawnVar)
{
  const char *v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  int v7; 
  const char *v8; 
  const char *v9; 
  const char *CanonicalStringAtIndex; 
  const char *v11; 
  const char *v12; 
  unsigned __int64 v13; 
  int numSpawnVarChars; 
  int v15; 
  char *v16; 
  __int64 numSpawnVars; 
  unsigned __int64 v18; 
  int v19; 
  int v20; 
  char *v21; 
  __int64 v22; 
  __int64 result; 
  char *fmt; 
  char Src[1024]; 
  char dest[1024]; 

  spawnVar->spawnVarsValid = 0;
  spawnVar->numSpawnVars = 0;
  spawnVar->numSpawnVarChars = 0;
  v2 = Com_Parse(&g_entityBeginParsePoint);
  Core_strcpy(dest, 0x400ui64, v2);
  v3 = g_entityBeginParsePoint;
  if ( !g_entityBeginParsePoint )
  {
    if ( !g_addonMapEnts )
      return 0i64;
    if ( !g_addonMapEnts->entityString )
      return 0i64;
    if ( g_parsingAddonEntities )
      return 0i64;
    g_entityBeginParsePoint = g_addonMapEnts->entityString;
    g_parsingAddonEntities = 1;
    v4 = Com_Parse(&g_entityBeginParsePoint);
    Core_strcpy(dest, 0x400ui64, v4);
    v3 = g_entityBeginParsePoint;
    if ( !g_entityBeginParsePoint )
      return 0i64;
  }
  g_entityEndParsePoint = v3;
  if ( dest[0] != 123 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440574D0, 474i64, dest);
  while ( 1 )
  {
    v5 = Com_Parse(&g_entityBeginParsePoint);
    Core_strcpy(Src, 0x400ui64, v5);
    if ( g_entityBeginParsePoint )
    {
      g_entityEndParsePoint = g_entityBeginParsePoint;
    }
    else if ( g_addonMapEnts && g_addonMapEnts->entityString && !g_parsingAddonEntities && (g_entityBeginParsePoint = g_addonMapEnts->entityString, g_parsingAddonEntities = 1, v6 = Com_Parse(&g_entityBeginParsePoint), Core_strcpy(Src, 0x400ui64, v6), g_entityBeginParsePoint) )
    {
      g_entityEndParsePoint = g_entityBeginParsePoint;
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057520, 475i64);
    }
    if ( Src[0] == 125 )
      break;
    v7 = atoi(Src);
    if ( v7 )
    {
      CanonicalStringAtIndex = Scr_GetCanonicalStringAtIndex(v7);
      Core_strcpy(Src, 0x400ui64, CanonicalStringAtIndex);
    }
    else
    {
      v8 = Com_Parse(&g_entityBeginParsePoint);
      Core_strcpy(Src, 0x400ui64, v8);
      if ( g_entityBeginParsePoint )
      {
        g_entityEndParsePoint = g_entityBeginParsePoint;
      }
      else if ( g_addonMapEnts && g_addonMapEnts->entityString && !g_parsingAddonEntities && (g_entityBeginParsePoint = g_addonMapEnts->entityString, g_parsingAddonEntities = 1, v9 = Com_Parse(&g_entityBeginParsePoint), Core_strcpy(Src, 0x400ui64, v9), g_entityBeginParsePoint) )
      {
        g_entityEndParsePoint = g_entityBeginParsePoint;
      }
      else
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057520, 476i64);
      }
    }
    v11 = Com_Parse(&g_entityBeginParsePoint);
    Core_strcpy(dest, 0x400ui64, v11);
    if ( g_entityBeginParsePoint )
    {
      g_entityEndParsePoint = g_entityBeginParsePoint;
    }
    else if ( g_addonMapEnts && g_addonMapEnts->entityString && !g_parsingAddonEntities && (g_entityBeginParsePoint = g_addonMapEnts->entityString, g_parsingAddonEntities = 1, v12 = Com_Parse(&g_entityBeginParsePoint), Core_strcpy(dest, 0x400ui64, v12), g_entityBeginParsePoint) )
    {
      g_entityEndParsePoint = g_entityBeginParsePoint;
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057520, 477i64);
    }
    if ( dest[0] == 125 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440575B0, 478i64);
    if ( spawnVar->numSpawnVars == 64 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057570, 479i64);
    v13 = -1i64;
    do
      ++v13;
    while ( Src[v13] );
    if ( (v13 > 0x7FFFFFFFFFFFFFFFi64 || v13 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v13, "unsigned", v13) )
      __debugbreak();
    numSpawnVarChars = spawnVar->numSpawnVarChars;
    v15 = numSpawnVarChars + v13 + 1;
    if ( v15 > 0x2000 )
    {
      LODWORD(fmt) = 0x2000;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057470, 468i64, (unsigned int)v15, fmt);
      numSpawnVarChars = spawnVar->numSpawnVarChars;
    }
    v16 = &spawnVar->spawnVarChars[numSpawnVarChars];
    memcpy_0(v16, Src, (int)v13 + 1);
    numSpawnVars = spawnVar->numSpawnVars;
    v18 = -1i64;
    spawnVar->numSpawnVarChars = v15;
    spawnVar->spawnVars[numSpawnVars][0] = v16;
    do
      ++v18;
    while ( dest[v18] );
    if ( (v18 > 0x7FFFFFFFFFFFFFFFi64 || v18 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v18, "unsigned", v18) )
      __debugbreak();
    v19 = spawnVar->numSpawnVarChars;
    v20 = v19 + v18 + 1;
    if ( v20 > 0x2000 )
    {
      LODWORD(fmt) = 0x2000;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057470, 468i64, (unsigned int)v20, fmt);
      v19 = spawnVar->numSpawnVarChars;
    }
    v21 = &spawnVar->spawnVarChars[v19];
    memcpy_0(v21, dest, (int)v18 + 1);
    v22 = spawnVar->numSpawnVars + 1i64;
    spawnVar->numSpawnVarChars = v20;
    *((_QWORD *)&spawnVar->spawnVarsValid + 2 * v22) = v21;
    ++spawnVar->numSpawnVars;
  }
  result = 1i64;
  spawnVar->spawnVarsValid = 1;
  return result;
}

/*
==============
Scr_ParseSpawnVars
==============
*/
__int64 Scr_ParseSpawnVars(SpawnVar *spawnVar)
{
  const char *v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  unsigned __int64 v9; 
  int numSpawnVarChars; 
  int v11; 
  char *v12; 
  __int64 numSpawnVars; 
  unsigned __int64 v14; 
  int v15; 
  int v16; 
  char *v17; 
  __int64 v18; 
  __int64 result; 
  char *fmt; 
  char dest[1024]; 
  char s[1024]; 

  spawnVar->spawnVarsValid = 0;
  spawnVar->numSpawnVars = 0;
  spawnVar->numSpawnVarChars = 0;
  v2 = Com_Parse(&g_entityBeginParsePoint);
  Core_strcpy(dest, 0x400ui64, v2);
  v3 = g_entityBeginParsePoint;
  if ( !g_entityBeginParsePoint )
  {
    if ( !g_addonMapEnts )
      return 0i64;
    if ( !g_addonMapEnts->entityString )
      return 0i64;
    if ( g_parsingAddonEntities )
      return 0i64;
    g_entityBeginParsePoint = g_addonMapEnts->entityString;
    g_parsingAddonEntities = 1;
    v4 = Com_Parse(&g_entityBeginParsePoint);
    Core_strcpy(dest, 0x400ui64, v4);
    v3 = g_entityBeginParsePoint;
    if ( !g_entityBeginParsePoint )
      return 0i64;
  }
  g_entityEndParsePoint = v3;
  if ( dest[0] != 123 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440574D0, 469i64, dest);
  while ( 1 )
  {
    v5 = Com_Parse(&g_entityBeginParsePoint);
    Core_strcpy(s, 0x400ui64, v5);
    if ( g_entityBeginParsePoint )
    {
      g_entityEndParsePoint = g_entityBeginParsePoint;
    }
    else if ( g_addonMapEnts && g_addonMapEnts->entityString && !g_parsingAddonEntities && (g_entityBeginParsePoint = g_addonMapEnts->entityString, g_parsingAddonEntities = 1, v6 = Com_Parse(&g_entityBeginParsePoint), Core_strcpy(s, 0x400ui64, v6), g_entityBeginParsePoint) )
    {
      g_entityEndParsePoint = g_entityBeginParsePoint;
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057520, 470i64);
    }
    if ( s[0] == 125 )
      break;
    I_strlwr(s);
    v7 = Com_Parse(&g_entityBeginParsePoint);
    Core_strcpy(dest, 0x400ui64, v7);
    if ( g_entityBeginParsePoint )
    {
      g_entityEndParsePoint = g_entityBeginParsePoint;
    }
    else if ( g_addonMapEnts && g_addonMapEnts->entityString && !g_parsingAddonEntities && (g_entityBeginParsePoint = g_addonMapEnts->entityString, g_parsingAddonEntities = 1, v8 = Com_Parse(&g_entityBeginParsePoint), Core_strcpy(dest, 0x400ui64, v8), g_entityBeginParsePoint) )
    {
      g_entityEndParsePoint = g_entityBeginParsePoint;
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057520, 471i64);
    }
    if ( spawnVar->numSpawnVars == 64 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057570, 473i64);
    v9 = -1i64;
    do
      ++v9;
    while ( s[v9] );
    if ( (v9 > 0x7FFFFFFFFFFFFFFFi64 || v9 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v9, "unsigned", v9) )
      __debugbreak();
    numSpawnVarChars = spawnVar->numSpawnVarChars;
    v11 = numSpawnVarChars + v9 + 1;
    if ( v11 > 0x2000 )
    {
      LODWORD(fmt) = 0x2000;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057470, 468i64, (unsigned int)v11, fmt);
      numSpawnVarChars = spawnVar->numSpawnVarChars;
    }
    v12 = &spawnVar->spawnVarChars[numSpawnVarChars];
    memcpy_0(v12, s, (int)v9 + 1);
    numSpawnVars = spawnVar->numSpawnVars;
    spawnVar->numSpawnVarChars = v11;
    spawnVar->spawnVars[numSpawnVars][0] = v12;
    v14 = -1i64;
    do
      ++v14;
    while ( dest[v14] );
    if ( (v14 > 0x7FFFFFFFFFFFFFFFi64 || v14 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v14, "unsigned", v14) )
      __debugbreak();
    v15 = spawnVar->numSpawnVarChars;
    v16 = v15 + v14 + 1;
    if ( v16 > 0x2000 )
    {
      LODWORD(fmt) = 0x2000;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144057470, 468i64, (unsigned int)v16, fmt);
      v15 = spawnVar->numSpawnVarChars;
    }
    v17 = &spawnVar->spawnVarChars[v15];
    memcpy_0(v17, dest, (int)v14 + 1);
    v18 = spawnVar->numSpawnVars + 1i64;
    spawnVar->numSpawnVarChars = v16;
    *((_QWORD *)&spawnVar->spawnVarsValid + 2 * v18) = v17;
    ++spawnVar->numSpawnVars;
  }
  result = 1i64;
  spawnVar->spawnVarsValid = 1;
  return result;
}

/*
==============
Scr_ParsingAddonEntities
==============
*/
__int64 Scr_ParsingAddonEntities()
{
  return (unsigned int)g_parsingAddonEntities;
}

/*
==============
Scr_ResetEntityParsePoint
==============
*/
void Scr_ResetEntityParsePoint(void)
{
  g_entityBeginParsePoint = CM_EntityString();
  g_entityEndParsePoint = g_entityBeginParsePoint;
  g_parsingAddonEntities = 0;
}

/*
==============
Scr_SpawnString
==============
*/
__int64 Scr_SpawnString(const SpawnVar *spawnVar, unsigned int key, const char *defaultString, const char **out)
{
  int v8; 
  const char *CanonicalStringAtIndex; 
  char *(*spawnVars)[2]; 
  const char *v11; 
  __int64 v12; 
  signed __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  __int64 result; 

  if ( !spawnVar->spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_load_utils.cpp", 335, ASSERT_TYPE_ASSERT, "(spawnVar->spawnVarsValid)", (const char *)&queryFormat, "spawnVar->spawnVarsValid") )
    __debugbreak();
  v8 = 0;
  CanonicalStringAtIndex = Scr_GetCanonicalStringAtIndex(key);
  if ( spawnVar->numSpawnVars > 0 )
  {
    spawnVars = spawnVar->spawnVars;
    do
    {
      v11 = (*spawnVars)[0];
      v12 = 0x7FFFFFFFi64;
      if ( !CanonicalStringAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v13 = CanonicalStringAtIndex - v11;
      while ( 1 )
      {
        v14 = (unsigned __int8)v11[v13];
        v15 = v12;
        v16 = *(unsigned __int8 *)v11++;
        --v12;
        if ( !v15 )
        {
LABEL_21:
          result = 1i64;
          *out = spawnVar->spawnVars[v8][1];
          return result;
        }
        if ( v14 != v16 )
        {
          v17 = v14 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v17 = v14;
          v14 = v17;
          v18 = v16 + 32;
          if ( (unsigned int)(v16 - 65) > 0x19 )
            v18 = v16;
          if ( v14 != v18 )
            break;
        }
        if ( !v14 )
          goto LABEL_21;
      }
      ++v8;
      ++spawnVars;
    }
    while ( v8 < spawnVar->numSpawnVars );
  }
  *out = defaultString;
  return 0i64;
}

