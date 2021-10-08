/*
==============
CL_Anonymization_GetNameForIndex
==============
*/

bool __fastcall CL_Anonymization_GetNameForIndex(const int index, char *out_playerName)
{
  return ?CL_Anonymization_GetNameForIndex@@YA_NHPEAD@Z(index, out_playerName);
}

/*
==============
CL_Anonymization_InitAnonData
==============
*/

void CL_Anonymization_InitAnonData(void)
{
  ?CL_Anonymization_InitAnonData@@YAXXZ();
}

/*
==============
CL_Anonymization_HasValidAnonData
==============
*/

bool __fastcall CL_Anonymization_HasValidAnonData()
{
  return ?CL_Anonymization_HasValidAnonData@@YA_NXZ();
}

/*
==============
CL_Anonymization_GetGenericGameMessage
==============
*/

bool __fastcall CL_Anonymization_GetGenericGameMessage(const char *message, const char *messageType, char *outMsg, const unsigned int bufferSize)
{
  return ?CL_Anonymization_GetGenericGameMessage@@YA_NPEBD0PEADI@Z(message, messageType, outMsg, bufferSize);
}

/*
==============
CL_Anonymization_ClearAnonNameData
==============
*/

void CL_Anonymization_ClearAnonNameData(void)
{
  ?CL_Anonymization_ClearAnonNameData@@YAXXZ();
}

/*
==============
CL_Anonymization_ReadAnonNameData
==============
*/

void CL_Anonymization_ReadAnonNameData(void)
{
  ?CL_Anonymization_ReadAnonNameData@@YAXXZ();
}

/*
==============
CL_Anonymization_ShouldAnonymizeClient
==============
*/

bool __fastcall CL_Anonymization_ShouldAnonymizeClient(const LocalClientNum_t localClientNum, const int clientNum)
{
  return ?CL_Anonymization_ShouldAnonymizeClient@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, clientNum);
}

/*
==============
CL_Anonymization_GetAnonIndex
==============
*/

unsigned int __fastcall CL_Anonymization_GetAnonIndex()
{
  return ?CL_Anonymization_GetAnonIndex@@YAIXZ();
}

/*
==============
CL_Anonymization_IsAllowed
==============
*/

bool __fastcall CL_Anonymization_IsAllowed()
{
  return ?CL_Anonymization_IsAllowed@@YA_NXZ();
}

/*
==============
CL_Anonymization_IsEnabled
==============
*/

bool __fastcall CL_Anonymization_IsEnabled()
{
  return ?CL_Anonymization_IsEnabled@@YA_NXZ();
}

/*
==============
CL_Anonymization_SetAnonIndex
==============
*/

void __fastcall CL_Anonymization_SetAnonIndex(const unsigned int value)
{
  ?CL_Anonymization_SetAnonIndex@@YAXI@Z(value);
}

/*
==============
CL_Anonymization_ClearAnonNameData
==============
*/
void CL_Anonymization_ClearAnonNameData(void)
{
  *(_QWORD *)&anonData.firstBotNameIndex = -1i64;
}

/*
==============
CL_Anonymization_GetAnonIndex
==============
*/
__int64 CL_Anonymization_GetAnonIndex()
{
  int v1; 
  unsigned int v2; 
  StringTable *v3; 
  int v4; 
  const char *ColumnValueForRow; 
  const char *v6; 
  int firstBotNameIndex; 
  StringTable *tablePtr; 

  if ( !CL_Anonymization_IsAllowed() )
    return 0i64;
  if ( !anonData.anonIndex )
  {
    v1 = rand();
    v2 = 1;
    *(_QWORD *)&anonData.firstBotNameIndex = -1i64;
    if ( v1 > 1 )
      v2 = v1;
    anonData.anonIndex = v2;
    if ( CL_Anonymization_IsAllowed() )
    {
      StringTable_GetAsset(BOT_NAMES_TABLE_0, (const StringTable **)&tablePtr);
      v3 = tablePtr;
      if ( tablePtr )
      {
        v4 = 0;
        while ( 1 )
        {
          ColumnValueForRow = StringTable_GetColumnValueForRow(v3, v4, 0);
          v6 = ColumnValueForRow;
          if ( ColumnValueForRow && !strncmp(ColumnValueForRow, "bot", 3ui64) )
          {
            firstBotNameIndex = anonData.firstBotNameIndex;
            anonData.lastBotNameIndex = v4;
            if ( anonData.firstBotNameIndex == -1 )
              firstBotNameIndex = v4;
            anonData.firstBotNameIndex = firstBotNameIndex;
          }
          ++v4;
          if ( !v6 || !*v6 )
            break;
          v3 = tablePtr;
        }
      }
      else
      {
        Com_PrintError(1, "ERROR: bot name file %s not found!\n", BOT_NAMES_TABLE_0);
      }
    }
    else
    {
      *(_QWORD *)&anonData.firstBotNameIndex = -1i64;
    }
  }
  return anonData.anonIndex;
}

/*
==============
CL_Anonymization_GetGenericGameMessage
==============
*/
char CL_Anonymization_GetGenericGameMessage(const char *message, const char *messageType, char *outMsg, const unsigned int bufferSize)
{
  unsigned __int64 v4; 
  int v8; 
  const dvar_t *v10; 
  const char *v11; 
  __int64 v12; 
  signed __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 

  v4 = bufferSize;
  if ( !CL_Anonymization_IsAllowed() )
    return 0;
  v8 = 0;
  while ( !CL_Mgr_IsControllerActive(v8) || !GamerProfile_GetIsUsingAnonymization(v8) )
  {
    if ( ++v8 >= 8 )
      return 0;
  }
  v10 = DVARBOOL_cl_anonymization_genericGameMessages;
  if ( !DVARBOOL_cl_anonymization_genericGameMessages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_anonymization_genericGameMessages") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
    return 0;
  v11 = "game message";
  v12 = 0x7FFFFFFFi64;
  if ( !messageType && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v13 = messageType - "game message";
  do
  {
    v14 = v11[v13];
    v15 = v12;
    v16 = *v11++;
    --v12;
    if ( !v15 )
      break;
    if ( v14 != v16 )
      return 0;
  }
  while ( v14 );
  if ( I_strstr(message, "EXE/LEFTGAME") )
  {
    Core_strcpy(outMsg, v4, "EXE/ANONLEFTGAME");
    return 1;
  }
  if ( !I_strstr(message, "EXE/PLAYERKICKED_INACTIVE") )
    return 0;
  Core_strcpy(outMsg, v4, "EXE/ANONPLAYERKICKED_INACTIVE");
  return 1;
}

/*
==============
CL_Anonymization_GetNameForIndex
==============
*/
char CL_Anonymization_GetNameForIndex(const int index, char *out_playerName)
{
  unsigned int v4; 
  unsigned int anonIndex; 
  int v6; 
  unsigned int v7; 
  StringTable *v8; 
  int v9; 
  const char *ColumnValueForRow; 
  const char *v11; 
  int firstBotNameIndex; 
  const dvar_t *v13; 
  const char *v14; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  char *fmt; 
  StringTable *tablePtr; 
  StringTable *table; 
  char dest[48]; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_anonymization.cpp", 175, ASSERT_TYPE_ASSERT, "(!Com_GameMode_DvarIsSP())", (const char *)&queryFormat, "!Com_GameMode_DvarIsSP()") )
    __debugbreak();
  v4 = abs32(index) + 1;
  if ( CL_Anonymization_IsAllowed() )
  {
    if ( !anonData.anonIndex )
    {
      v6 = rand();
      v7 = 1;
      *(_QWORD *)&anonData.firstBotNameIndex = -1i64;
      if ( v6 > 1 )
        v7 = v6;
      anonData.anonIndex = v7;
      if ( CL_Anonymization_IsAllowed() )
      {
        StringTable_GetAsset(BOT_NAMES_TABLE_0, (const StringTable **)&tablePtr);
        v8 = tablePtr;
        if ( tablePtr )
        {
          v9 = 0;
          while ( 1 )
          {
            ColumnValueForRow = StringTable_GetColumnValueForRow(v8, v9, 0);
            v11 = ColumnValueForRow;
            if ( ColumnValueForRow && !strncmp(ColumnValueForRow, "bot", 3ui64) )
            {
              firstBotNameIndex = anonData.firstBotNameIndex;
              anonData.lastBotNameIndex = v9;
              if ( anonData.firstBotNameIndex == -1 )
                firstBotNameIndex = v9;
              anonData.firstBotNameIndex = firstBotNameIndex;
            }
            ++v9;
            if ( !v11 || !*v11 )
              break;
            v8 = tablePtr;
          }
        }
        else
        {
          Com_PrintError(1, "ERROR: bot name file %s not found!\n", BOT_NAMES_TABLE_0);
        }
      }
      else
      {
        *(_QWORD *)&anonData.firstBotNameIndex = -1i64;
      }
    }
    anonIndex = anonData.anonIndex;
  }
  else
  {
    anonIndex = 0;
  }
  if ( anonData.firstBotNameIndex < 0 || anonData.lastBotNameIndex < anonData.firstBotNameIndex )
    goto LABEL_37;
  v13 = DVARBOOL_cl_anonymization_useSimpleNames;
  if ( !DVARBOOL_cl_anonymization_useSimpleNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_anonymization_useSimpleNames") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
LABEL_37:
    v20 = UI_SafeTranslateString("MP/ANONYMOUSPLAYER");
    v21 = UI_ReplaceConversionInt(v20, v4 * anonIndex % 0x1869F + 1);
    Core_strcpy(out_playerName, 0x2Fui64, v21);
  }
  else
  {
    StringTable_GetAsset(BOT_NAMES_TABLE_0, (const StringTable **)&table);
    if ( !table )
    {
      Com_PrintError(1, "ERROR: bot name file %s not found!\n", BOT_NAMES_TABLE_0);
      v14 = UI_SafeTranslateString("MP/MATCHEDPLAYER");
      Core_strcpy(out_playerName, 0x2Fui64, v14);
      return 0;
    }
    v16 = anonData.lastBotNameIndex - anonData.firstBotNameIndex;
    if ( anonData.lastBotNameIndex - anonData.firstBotNameIndex <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_anonymization.cpp", 199, ASSERT_TYPE_ASSERT, "(botNameCount > 0)", (const char *)&queryFormat, "botNameCount > 0") )
      __debugbreak();
    v17 = anonIndex - 1;
    if ( anonIndex % v16 )
      v17 = anonIndex;
    v18 = v4 * v17;
    v19 = StringTable_GetColumnValueForRow(table, anonData.firstBotNameIndex + v18 % v16, 1);
    LODWORD(fmt) = v18 % 0x3E7 + 1;
    Com_sprintf(dest, 0x2Fui64, "%s#%03d", v19, fmt);
    Core_strcpy(out_playerName, 0x2Fui64, dest);
  }
  return 1;
}

/*
==============
CL_Anonymization_HasValidAnonData
==============
*/
bool CL_Anonymization_HasValidAnonData()
{
  return anonData.firstBotNameIndex >= 0 && anonData.lastBotNameIndex >= anonData.firstBotNameIndex;
}

/*
==============
CL_Anonymization_InitAnonData
==============
*/
void CL_Anonymization_InitAnonData(void)
{
  int v0; 
  unsigned int v1; 
  StringTable *v2; 
  int v3; 
  const char *ColumnValueForRow; 
  const char *v5; 
  int firstBotNameIndex; 
  StringTable *tablePtr; 

  v0 = rand();
  v1 = 1;
  *(_QWORD *)&anonData.firstBotNameIndex = -1i64;
  if ( v0 > 1 )
    v1 = v0;
  anonData.anonIndex = v1;
  if ( CL_Anonymization_IsAllowed() )
  {
    StringTable_GetAsset(BOT_NAMES_TABLE_0, (const StringTable **)&tablePtr);
    v2 = tablePtr;
    if ( tablePtr )
    {
      v3 = 0;
      while ( 1 )
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(v2, v3, 0);
        v5 = ColumnValueForRow;
        if ( ColumnValueForRow && !strncmp(ColumnValueForRow, "bot", 3ui64) )
        {
          firstBotNameIndex = anonData.firstBotNameIndex;
          anonData.lastBotNameIndex = v3;
          if ( anonData.firstBotNameIndex == -1 )
            firstBotNameIndex = v3;
          anonData.firstBotNameIndex = firstBotNameIndex;
        }
        ++v3;
        if ( !v5 || !*v5 )
          break;
        v2 = tablePtr;
      }
    }
    else
    {
      Com_PrintError(1, "ERROR: bot name file %s not found!\n", BOT_NAMES_TABLE_0);
    }
  }
  else
  {
    *(_QWORD *)&anonData.firstBotNameIndex = -1i64;
  }
}

/*
==============
CL_Anonymization_IsAllowed
==============
*/
bool CL_Anonymization_IsAllowed()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_cl_anonymization_enabled;
  if ( !DVARBOOL_cl_anonymization_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_anonymization_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled && (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF;
}

/*
==============
CL_Anonymization_IsEnabled
==============
*/
char CL_Anonymization_IsEnabled()
{
  int v0; 

  if ( !CL_Anonymization_IsAllowed() )
    return 0;
  v0 = 0;
  while ( !CL_Mgr_IsControllerActive(v0) || !GamerProfile_GetIsUsingAnonymization(v0) )
  {
    if ( ++v0 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
CL_Anonymization_ReadAnonNameData
==============
*/
void CL_Anonymization_ReadAnonNameData(void)
{
  StringTable *v0; 
  int v1; 
  const char *ColumnValueForRow; 
  const char *v3; 
  int firstBotNameIndex; 
  StringTable *tablePtr; 

  if ( CL_Anonymization_IsAllowed() )
  {
    StringTable_GetAsset(BOT_NAMES_TABLE_0, (const StringTable **)&tablePtr);
    v0 = tablePtr;
    if ( tablePtr )
    {
      v1 = 0;
      while ( 1 )
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(v0, v1, 0);
        v3 = ColumnValueForRow;
        if ( ColumnValueForRow && !strncmp(ColumnValueForRow, "bot", 3ui64) )
        {
          firstBotNameIndex = anonData.firstBotNameIndex;
          anonData.lastBotNameIndex = v1;
          if ( anonData.firstBotNameIndex == -1 )
            firstBotNameIndex = v1;
          anonData.firstBotNameIndex = firstBotNameIndex;
        }
        ++v1;
        if ( !v3 || !*v3 )
          break;
        v0 = tablePtr;
      }
    }
    else
    {
      Com_PrintError(1, "ERROR: bot name file %s not found!\n", BOT_NAMES_TABLE_0);
    }
  }
  else
  {
    *(_QWORD *)&anonData.firstBotNameIndex = -1i64;
  }
}

/*
==============
CL_Anonymization_SetAnonIndex
==============
*/
void CL_Anonymization_SetAnonIndex(const unsigned int value)
{
  anonData.anonIndex = value;
}

/*
==============
CL_Anonymization_ShouldAnonymizeClient
==============
*/
bool CL_Anonymization_ShouldAnonymizeClient(const LocalClientNum_t localClientNum, const int clientNum)
{
  __int64 v3; 
  int v4; 
  const clientInfo_t *v6; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  if ( !CL_Anonymization_IsAllowed() )
    return 0;
  v4 = 0;
  while ( !CL_Mgr_IsControllerActive(v4) || !GamerProfile_GetIsUsingAnonymization(v4) )
  {
    if ( ++v4 >= 8 )
      return 0;
  }
  if ( (unsigned int)v3 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v3, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v3] )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v8) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v8) )
      __debugbreak();
  }
  if ( cg_t::ms_cgArray[v3]->clientNum == clientNum || Party_ClientIsInMyParty(clientNum) )
    return 0;
  if ( !(_BYTE)CgStatic::ms_allocatedType )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v8 = CgStatic::ms_allocatedCount;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v3] )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v8) )
      __debugbreak();
  }
  v6 = CgStatic::ms_cgameStaticsArray[v3]->GetClientInfo(CgStatic::ms_cgameStaticsArray[v3], (unsigned int)clientNum);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_anonymization.cpp", 165, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  return !v6->isBot;
}

