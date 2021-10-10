/*
==============
BG_MatchRulesHistory_ReadFromDisk
==============
*/

MatchRulesReturnCode __fastcall BG_MatchRulesHistory_ReadFromDisk(MatchRules *matchRules, int controllerIndex, MatchRulesSaveLocation saveLoc, int slotIndex)
{
  return ?BG_MatchRulesHistory_ReadFromDisk@@YA?AW4MatchRulesReturnCode@@PEAUMatchRules@@HW4MatchRulesSaveLocation@@H@Z(matchRules, controllerIndex, saveLoc, slotIndex);
}

/*
==============
BG_MatchRulesHistory_WriteToDisk
==============
*/

bool __fastcall BG_MatchRulesHistory_WriteToDisk(MatchRules *matchRules, int controllerIndex, MatchRulesSaveLocation saveLoc, int slotIndex)
{
  return ?BG_MatchRulesHistory_WriteToDisk@@YA_NPEAUMatchRules@@HW4MatchRulesSaveLocation@@H@Z(matchRules, controllerIndex, saveLoc, slotIndex);
}

/*
==============
BG_MatchRulesHistory_Save
==============
*/

void __fastcall BG_MatchRulesHistory_Save(LocalClientNum_t localClientNum)
{
  ?BG_MatchRulesHistory_Save@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
BG_MatchRulesHistory_ClearHeaderCache
==============
*/

void BG_MatchRulesHistory_ClearHeaderCache(void)
{
  ?BG_MatchRulesHistory_ClearHeaderCache@@YAXXZ();
}

/*
==============
BG_MatchRulesHistory_SaveAppendToFront
==============
*/

void __fastcall BG_MatchRulesHistory_SaveAppendToFront(MatchRules *matchRules, int controllerIndex, MatchRulesSaveLocation saveLoc, int saveDeviceSelected)
{
  ?BG_MatchRulesHistory_SaveAppendToFront@@YAXPEAUMatchRules@@HW4MatchRulesSaveLocation@@H@Z(matchRules, controllerIndex, saveLoc, saveDeviceSelected);
}

/*
==============
BG_MatchRulesHistory_Unload
==============
*/

void __fastcall BG_MatchRulesHistory_Unload(int controllerIndex)
{
  ?BG_MatchRulesHistory_Unload@@YAXH@Z(controllerIndex);
}

/*
==============
BG_MatchRulesHistory_DeleteSaveSlot
==============
*/

void __fastcall BG_MatchRulesHistory_DeleteSaveSlot(const int controllerIndex, const int slotIndex, MatchRulesSaveLocation saveLoc)
{
  ?BG_MatchRulesHistory_DeleteSaveSlot@@YAXHHW4MatchRulesSaveLocation@@@Z(controllerIndex, slotIndex, saveLoc);
}

/*
==============
BG_MatchRulesHistory_Frame
==============
*/

void __fastcall BG_MatchRulesHistory_Frame(const int controllerIndex)
{
  ?BG_MatchRulesHistory_Frame@@YAXH@Z(controllerIndex);
}

/*
==============
BG_MatchRulesHistory_Preload
==============
*/

void __fastcall BG_MatchRulesHistory_Preload(int controllerIndex)
{
  ?BG_MatchRulesHistory_Preload@@YAXH@Z(controllerIndex);
}

/*
==============
BG_MatchRulesHistory_UnregisterCommands
==============
*/

void BG_MatchRulesHistory_UnregisterCommands(void)
{
  ?BG_MatchRulesHistory_UnregisterCommands@@YAXXZ();
}

/*
==============
BG_MatchRulesHistory_IsPreloaded
==============
*/

bool __fastcall BG_MatchRulesHistory_IsPreloaded(int controllerIndex)
{
  return ?BG_MatchRulesHistory_IsPreloaded@@YA_NH@Z(controllerIndex);
}

/*
==============
BG_MatchRulesHistory_Shutdown
==============
*/

void BG_MatchRulesHistory_Shutdown(void)
{
  ?BG_MatchRulesHistory_Shutdown@@YAXXZ();
}

/*
==============
BG_MatchRulesHistory_RegisterCommands
==============
*/

void BG_MatchRulesHistory_RegisterCommands(void)
{
  ?BG_MatchRulesHistory_RegisterCommands@@YAXXZ();
}

/*
==============
BG_MatchRulesHistory_ReadMetadataFromDisk
==============
*/

int __fastcall BG_MatchRulesHistory_ReadMetadataFromDisk(MatchRules *matchRules, int controllerIndex, MatchRulesSaveLocation saveLoc, int slotIndex, MatchRulesSaveHeaderLookup lookup, int *intResult, char *stringResult, int stringResultSize)
{
  return ?BG_MatchRulesHistory_ReadMetadataFromDisk@@YAHPEAUMatchRules@@HW4MatchRulesSaveLocation@@HW4MatchRulesSaveHeaderLookup@@PEAHPEADH@Z(matchRules, controllerIndex, saveLoc, slotIndex, lookup, intResult, stringResult, stringResultSize);
}

/*
==============
BG_MatchRulesHistory_Init
==============
*/

void BG_MatchRulesHistory_Init(void)
{
  ?BG_MatchRulesHistory_Init@@YAXXZ();
}

/*
==============
HeaderCache_Reset
==============
*/
void *HeaderCache_Reset()
{
  return memset_0(g_matchRulesHeader, 0, sizeof(g_matchRulesHeader));
}

/*
==============
MatchRules_PrintSaveFileMetaData
==============
*/
void MatchRules_PrintSaveFileMetaData()
{
  __int64 v0; 
  LocalClientNum_t v1; 
  int ControllerFromClient; 
  MatchRulesSaveLocation v3; 
  int i; 
  __int64 v5; 
  int *intResult; 
  char *stringResult; 
  __int64 v8; 
  MatchRulesSaveLocation saveLoc[2]; 
  __int64 v10[2]; 
  MatchRulesSaveHeaderLookup v11[4]; 
  int v12[6]; 
  char dest; 
  char v14[1024]; 
  char v15[1024]; 

  saveLoc[1] = MR_SAVELOC_PLAYERHISTORY;
  v10[0] = (__int64)"Player Save";
  v0 = 0i64;
  saveLoc[0] = MR_SAVELOC_PLAYERSAVED;
  v10[1] = (__int64)"Player History";
  v11[0] = RECIPE_LOOKUP_TIMESTAMP;
  v11[1] = RECIPE_LOOKUP_GAMETYPE;
  v11[2] = RECIPE_LOOKUP_NAME;
  v1 = Cmd_LocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v1);
  do
  {
    Com_Printf(16, "[MR] SLOTS IN %s *******************\n", (const char *)v10[v0]);
    v3 = saveLoc[v0];
    for ( i = 0; i < 10; ++i )
    {
      v5 = 0i64;
      intResult = v12;
      stringResult = &dest;
      v8 = 3i64;
      do
      {
        v12[v5] = 0;
        Com_sprintf(stringResult, 0x400ui64, (const char *)&queryFormat.fmt + 3);
        if ( !BG_MatchRulesHistory_ReadMetadataFromDisk(NULL, ControllerFromClient, v3, i, v11[v5], intResult, stringResult, 1024) )
          Com_Printf(16, "[MR] Unable to load file.\n");
        stringResult += 1024;
        ++intResult;
        ++v5;
        --v8;
      }
      while ( v8 );
      Com_Printf(16, "[MR] %d. <%d> %s \"%s\"\n", (unsigned int)i, (unsigned int)v12[0], v14, v15);
    }
    Com_Printf(16, "\n\n");
    ++v0;
  }
  while ( v0 < 2 );
}

/*
==============
AssertHeaderIsValid
==============
*/
void AssertHeaderIsValid(MatchRulesSaveHeader *header, unsigned __int8 *bufferStart)
{
  const void **p_dataStart; 
  int i; 
  __int64 v6; 
  __int64 v7; 

  p_dataStart = (const void **)&header->slot[0].dataStart;
  for ( i = 0; i < 9; ++i )
  {
    if ( *p_dataStart <= bufferStart )
    {
      LODWORD(v6) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1351, ASSERT_TYPE_SANITY, "(header->slot[slotIndex].dataStart > bufferStart)", "%s\n\t\"%d: dataStart=0x%p\"", "header->slot[slotIndex].dataStart > bufferStart", v6, *p_dataStart) )
        __debugbreak();
    }
    if ( (char *)*p_dataStart + *((unsigned __int16 *)p_dataStart - 4) != p_dataStart[26] )
    {
      LODWORD(v7) = *((unsigned __int16 *)p_dataStart - 4);
      LODWORD(v6) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1353, ASSERT_TYPE_ASSERT, "(header->slot[slotIndex].dataStart + header->slot[slotIndex].dataLen == header->slot[slotIndex + 1].dataStart)", "%s\n\t%d: 0x%p + %d != 0x%p", "header->slot[slotIndex].dataStart + header->slot[slotIndex].dataLen == header->slot[slotIndex + 1].dataStart", v6, *p_dataStart, v7, p_dataStart[26]) )
        __debugbreak();
    }
    p_dataStart += 26;
  }
  if ( &bufferStart[header->fileLen] != &header->slot[9].dataStart[header->slot[9].dataLen] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1355, ASSERT_TYPE_ASSERT, "(bufferStart + header->fileLen == header->slot[10 - 1].dataStart + header->slot[10 - 1].dataLen)", (const char *)&queryFormat, "bufferStart + header->fileLen == header->slot[MATCH_RULES_MAX_SAVESLOTS - 1].dataStart + header->slot[MATCH_RULES_MAX_SAVESLOTS - 1].dataLen") )
    __debugbreak();
}

/*
==============
AssertMatchRulesVersionIsSet
==============
*/
void AssertMatchRulesVersionIsSet(MatchRules *matchRules)
{
  const DDLDef *Asset; 
  DDLHeader result; 

  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  _YMM0 = *(__m256i *)DDL_GetHeader(&result, matchRules, 0);
  __asm { vextractf128 xmm0, ymm0, 1 }
  if ( (_WORD)_XMM0 != Asset->version && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1370, ASSERT_TYPE_ASSERT, "(bufferHeader.version == def->version)", (const char *)&queryFormat, "bufferHeader.version == def->version") )
    __debugbreak();
}

/*
==============
BG_MatchRulesHistory_ClearHeaderCache
==============
*/
void BG_MatchRulesHistory_ClearHeaderCache(void)
{
  memset_0(g_matchRulesHeader, 0, sizeof(g_matchRulesHeader));
}

/*
==============
BG_MatchRulesHistory_DeleteSaveSlot
==============
*/
void BG_MatchRulesHistory_DeleteSaveSlot(const int controllerIndex, const int slotIndex, MatchRulesSaveLocation saveLoc)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int8 *buffer; 
  MatchRulesSaveHeader *p_header; 
  const char *LocalClientXuidString; 
  char out_filename[64]; 

  v3 = saveLoc;
  v5 = controllerIndex;
  if ( (unsigned int)slotIndex >= 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1069, ASSERT_TYPE_ASSERT, "(unsigned)( slotIndex ) < (unsigned)( 10 )", "slotIndex doesn't index MATCH_RULES_MAX_SAVESLOTS\n\t%i not in [0, %i)", slotIndex, 10) )
    __debugbreak();
  v6 = v5 + 8 * v3;
  buffer = s_recipeLoadBuffer[0][v6].buffer;
  p_header = &s_recipeLoadBuffer[0][v6].header;
  BG_MatchRulesHistory_SaveAppendToFront_DeleteSaveSlot(slotIndex, p_header, buffer);
  LocalClientXuidString = Live_GetLocalClientXuidString(v5);
  BuildFilename((MatchRulesSaveLocation)v3, LocalClientXuidString, out_filename, 0x40ui64);
  BG_MatchRulesHistory_WriteHeaderToBuffer(p_header, buffer, 0x5B780u);
  if ( WriteBufferToFile(out_filename, v5, buffer, p_header->fileLen, 0) == p_header->fileLen )
    HeaderCache_SaveFile(p_header, (MatchRulesSaveLocation)v3, LocalClientXuidString);
  else
    Com_PrintError(16, "[BG_MatchRulesHistory_DeleteSaveSlot] Failed to write file.\n");
}

/*
==============
BG_MatchRulesHistory_Frame
==============
*/
void BG_MatchRulesHistory_Frame(const int controllerIndex)
{
  __int64 v1; 
  const char *LocalClientXuidString; 
  MatchRulesSaveLocation v3; 
  RecipeBufferEntry *v4; 
  int saveDeviceSelected; 
  int v6; 
  char out_filename[64]; 

  v1 = controllerIndex;
  if ( Live_IsUserSignedInToLive(controllerIndex) && Com_GameMode_SupportsFeature(WEAPON_CHARGING_LOOP) )
  {
    if ( (unsigned int)v1 >= 8 )
    {
      v6 = 8;
      saveDeviceSelected = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 629, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", saveDeviceSelected, v6) )
        __debugbreak();
    }
    if ( !s_recipePreloadAttempted[v1] )
    {
      s_recipePreloadAttempted[v1] = 1;
      LocalClientXuidString = Live_GetLocalClientXuidString(v1);
      v3 = MR_SAVELOC_PLAYERSAVED;
      v4 = &s_recipeLoadBuffer[0][v1];
      do
      {
        if ( !v4->loaded )
        {
          BuildFilename(v3, LocalClientXuidString, out_filename, 0x40ui64);
          if ( BG_MatchRulesHistory_ReadFromSaveFile(out_filename, v1, &v4->header, v4->buffer, 44728, 0) == MR_RETCODE_TRUE )
            v4->loaded = 1;
        }
        ++v3;
        v4 += 8;
      }
      while ( (unsigned int)v3 < MR_SAVELOC_COUNT );
    }
  }
}

/*
==============
BG_MatchRulesHistory_GetHeaderSize
==============
*/
__int64 BG_MatchRulesHistory_GetHeaderSize(MatchRulesSaveHeader *header)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  unsigned int v18; 

  v2 = 198;
  if ( !header->slot[0].dataLen )
    v2 = 12;
  v3 = v2 + 186;
  if ( !header->slot[1].dataLen )
    v3 = v2;
  v4 = v3 + 188;
  if ( !header->slot[2].dataLen )
    v4 = v3 + 2;
  v5 = v4 + 2;
  v6 = v5 + 186;
  if ( !header->slot[3].dataLen )
    v6 = v5;
  v7 = v6 + 2;
  v8 = v6 + 188;
  if ( !header->slot[4].dataLen )
    v8 = v7;
  v9 = v8 + 2;
  v10 = v8 + 188;
  if ( !header->slot[5].dataLen )
    v10 = v9;
  v11 = v10 + 2;
  v12 = v10 + 188;
  if ( !header->slot[6].dataLen )
    v12 = v11;
  v13 = v12 + 2;
  v14 = v12 + 188;
  if ( !header->slot[7].dataLen )
    v14 = v13;
  v15 = v14 + 2;
  v16 = v14 + 188;
  if ( !header->slot[8].dataLen )
    v16 = v15;
  v17 = v16 + 2;
  v18 = v17 + 186;
  if ( !header->slot[9].dataLen )
    return v17;
  return v18;
}

/*
==============
BG_MatchRulesHistory_Init
==============
*/
void BG_MatchRulesHistory_Init(void)
{
  ;
}

/*
==============
BG_MatchRulesHistory_IsPreloaded
==============
*/
_BOOL8 BG_MatchRulesHistory_IsPreloaded(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 629, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_recipePreloadAttempted[v1];
}

/*
==============
BG_MatchRulesHistory_Preload
==============
*/
void BG_MatchRulesHistory_Preload(int controllerIndex)
{
  __int64 v1; 
  const char *LocalClientXuidString; 
  MatchRulesSaveLocation v3; 
  RecipeBufferEntry *v4; 
  char out_filename[64]; 

  v1 = controllerIndex;
  s_recipePreloadAttempted[controllerIndex] = 1;
  LocalClientXuidString = Live_GetLocalClientXuidString(controllerIndex);
  v3 = MR_SAVELOC_PLAYERSAVED;
  v4 = &s_recipeLoadBuffer[0][v1];
  do
  {
    if ( !v4->loaded )
    {
      BuildFilename(v3, LocalClientXuidString, out_filename, 0x40ui64);
      if ( BG_MatchRulesHistory_ReadFromSaveFile(out_filename, v1, &v4->header, v4->buffer, 44728, 0) == MR_RETCODE_TRUE )
        v4->loaded = 1;
    }
    ++v3;
    v4 += 8;
  }
  while ( (unsigned int)v3 < MR_SAVELOC_COUNT );
}

/*
==============
BG_MatchRulesHistory_ReadFromDisk
==============
*/
__int64 BG_MatchRulesHistory_ReadFromDisk(MatchRules *matchRules, int controllerIndex, MatchRulesSaveLocation saveLoc, int slotIndex)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  MatchRules *m_ptr; 
  RecipeBufferEntry *v9; 
  const char *LocalClientXuidString; 
  const char *v11; 
  unsigned int v12; 
  MatchRulesReturnCode v13; 
  unsigned __int16 dataLen; 
  unsigned __int8 *dataStart; 
  const DDLDef *Asset; 
  Mem_LargeLocal v19; 
  DDLContext ddlContext; 
  char out_filename[64]; 

  v4 = slotIndex;
  v5 = saveLoc;
  v6 = controllerIndex;
  Mem_LargeLocal::Mem_LargeLocal(&v19, 0x1000ui64, "MatchRulesBuffer tempBuffer");
  m_ptr = (MatchRules *)v19.m_ptr;
  v9 = &s_recipeLoadBuffer[v5][v6];
  if ( (unsigned int)v4 >= 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 700, ASSERT_TYPE_ASSERT, "(unsigned)( slotIndex ) < (unsigned)( 10 )", "slotIndex doesn't index MATCH_RULES_MAX_SAVESLOTS\n\t%i not in [0, %i)", v4, 10) )
    __debugbreak();
  LocalClientXuidString = Live_GetLocalClientXuidString(v6);
  v11 = LocalClientXuidString;
  v12 = 0;
  if ( !v9->loaded )
  {
    BuildFilename(saveLoc, LocalClientXuidString, out_filename, 0x40ui64);
    v13 = BG_MatchRulesHistory_ReadFromSaveFile(out_filename, v6, &v9->header, v9->buffer, 44728, 0);
    if ( v13 != MR_RETCODE_TRUE )
    {
      if ( v13 == MR_RETCODE_FALSE )
        Com_PrintError(10, "[BG_MatchRulesHistory_ReadFromDisk] Unable to load Custom Match Rules File '%s'\n", out_filename);
      goto LABEL_16;
    }
    v9->loaded = 1;
  }
  if ( !v9->header.fileLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 719, ASSERT_TYPE_ASSERT, "(header.fileLen > 0)", (const char *)&queryFormat, "header.fileLen > 0") )
    __debugbreak();
  dataLen = v9->header.slot[v4].dataLen;
  dataStart = v9->header.slot[v4].dataStart;
  if ( !dataLen )
  {
    Com_PrintError(16, "[BG_MatchRulesHistory_ReadFromDisk] Attempted loaded slot is empty.\n");
LABEL_16:
    Com_PrintError(13, "Recipe Load Failed!\n");
    goto LABEL_31;
  }
  HeaderCache_SaveFile(&v9->header, saveLoc, v11);
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  memcpy_0(m_ptr, dataStart, dataLen);
  if ( !Com_DDL_CreateContext(m_ptr, 4096, Asset, &ddlContext, NULL, NULL) )
  {
    Com_PrintError(16, "[BG_MatchRulesHistory_ReadFromDisk] Unable to load match rules from disk. check DDL channel for more info\n");
    goto LABEL_16;
  }
  if ( Asset->byteSize < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 745, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(def->byteSize))", "%s\n\tMemcpy has negative length. (def->byteSize)", "0 <= static_cast<int>(def->byteSize)") )
    __debugbreak();
  if ( m_ptr >= matchRules && &m_ptr->data[Asset->byteSize] <= &matchRules->data[Asset->byteSize] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 745, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((tempBuffer)) < reinterpret_cast<const byte*>((matchRules->data)) || reinterpret_cast<const byte*>((tempBuffer))+((def->byteSize)) > reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)))", "%s\n\tMemcpy from (tempBuffer) to (matchRules->data) is copying between overlapping ranges ", "reinterpret_cast<const byte*>((tempBuffer)) < reinterpret_cast<const byte*>((matchRules->data)) || reinterpret_cast<const byte*>((tempBuffer))+((def->byteSize)) > reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize))") )
    __debugbreak();
  if ( &m_ptr->data[Asset->byteSize] > &m_ptr->data[4096] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 745, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((tempBuffer)) >= reinterpret_cast<const byte*>((tempBuffer)) && reinterpret_cast<const byte*>((tempBuffer))+((def->byteSize)) <= reinterpret_cast<const byte*>((tempBuffer))+((sizeof( tempBuffer ))))", "%s\n\tMemcpy from (tempBuffer) exceeded bounds of tempBuffer", "reinterpret_cast<const byte*>((tempBuffer)) >= reinterpret_cast<const byte*>((tempBuffer)) && reinterpret_cast<const byte*>((tempBuffer))+((def->byteSize)) <= reinterpret_cast<const byte*>((tempBuffer))+((sizeof( tempBuffer )))") )
    __debugbreak();
  if ( &matchRules->data[Asset->byteSize] > &matchRules->data[4096] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 745, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((matchRules->data)) >= reinterpret_cast<const byte*>((matchRules->data)) && reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)) <= reinterpret_cast<const byte*>((matchRules->data))+(((1024*4))))", "%s\n\tMemcpy to (matchRules->data) exceeded bounds of matchRules->data", "reinterpret_cast<const byte*>((matchRules->data)) >= reinterpret_cast<const byte*>((matchRules->data)) && reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)) <= reinterpret_cast<const byte*>((matchRules->data))+(((1024*4)))") )
    __debugbreak();
  memcpy_0(matchRules, m_ptr, Asset->byteSize);
  v12 = 1;
LABEL_31:
  Mem_LargeLocal::~Mem_LargeLocal(&v19);
  return v12;
}

/*
==============
BG_MatchRulesHistory_ReadFromSaveFile
==============
*/
__int64 BG_MatchRulesHistory_ReadFromSaveFile(const char *filename, int controllerIndex, MatchRulesSaveHeader *header, unsigned __int8 *saveBuffer, int saveBuffSize)
{
  __int64 v9; 
  __int64 v10; 
  MemCardFileHandle *v11; 
  MemCardFileHandle v12; 
  unsigned int v13; 
  unsigned int fileLen; 
  unsigned __int8 *v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  __int64 v21; 
  unsigned __int8 *v22; 
  __int64 v23; 
  unsigned int *p_checksum; 
  __int64 i; 
  unsigned int v26; 
  int v27; 
  __int16 v28; 
  MatchRulesSaveHeader::SavedSlot *j; 
  int v30; 
  __int64 dataLen; 
  int fmt; 
  MemcardError error; 

  if ( saveBuffSize != 44728 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 392, ASSERT_TYPE_ASSERT, "(saveBuffSize == sizeof( max_matchrules_savefile ))", "%s\n\tTrying to read matchrules savefile into a buffer which isn't same size as 'max_matchrules_savefile'", "saveBuffSize == sizeof( max_matchrules_savefile )") )
    __debugbreak();
  memset_0(header, 0, sizeof(MatchRulesSaveHeader));
  v9 = 0i64;
  v10 = 0i64;
  v11 = MemCard_OpenFile((MemCardFileHandle *)filename, NULL, MEMCARD_READ, (MemcardSizeHint)controllerIndex, fmt);
  v12.handle = (__int64)v11;
  if ( v11 )
  {
    v10 = MemCard_ReadFile((MemCardFileHandle)v11, saveBuffer, saveBuffSize, &error);
    if ( v10 > saveBuffSize || error.isError )
      v10 = 0i64;
    MemCard_CloseFile(v12, 1);
  }
  v13 = truncate_cast<int,__int64>(v10);
  header->fileLen = v13;
  if ( v13 > 0xAEB8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 399, ASSERT_TYPE_SANITY, "( header->fileLen <= sizeof( max_matchrules_savefile ) )", (const char *)&queryFormat, "header->fileLen <= sizeof( max_matchrules_savefile )") )
    __debugbreak();
  fileLen = header->fileLen;
  if ( !fileLen )
    return 0xFFFFFFFFi64;
  v15 = saveBuffer + 4;
  v16 = -1;
  v17 = fileLen - 4i64;
  if ( fileLen != 4i64 )
  {
    do
    {
      v18 = *v15++;
      v16 = (v16 >> 8) ^ g_crc32Table[v18 ^ (unsigned __int8)v16];
      --v17;
    }
    while ( v17 );
  }
  v19 = ~v16;
  header->checksum = v19;
  if ( v19 != *(_DWORD *)saveBuffer )
  {
    Com_PrintError(16, "[BG_MatchRulesHistory_ReadFromSaveFile] Save file is corrupted\n", v15, v17);
    return 4294967293i64;
  }
  v21 = *((unsigned int *)saveBuffer + 1);
  v22 = saveBuffer + 8;
  header->fileVersion = v21;
  if ( (_DWORD)v21 != 8 )
  {
    Com_PrintError(16, "[BG_MatchRulesHistory_ReadFromSaveFile] Save file is of incorrect version, expected %d got %d.\n", 8i64, v21);
    return 0xFFFFFFFFi64;
  }
  v23 = 8i64;
  p_checksum = &header->slot[0].checksum;
  for ( i = 0i64; i < 10; ++i )
  {
    v26 = header->fileLen;
    v27 = 2;
    if ( v26 > saveBuffSize )
      v26 = saveBuffSize;
    if ( *((_WORD *)p_checksum - 10) )
      v27 = 188;
    if ( v23 >= (int)(v26 - v27) )
    {
      Com_PrintError(16, "[BG_MatchRulesHistory_ReadFromSaveFile] Tried to read past end of save file\n");
      return 0xFFFFFFFFi64;
    }
    v28 = *(_WORD *)v22;
    v23 += 2i64;
    v22 += 2;
    *((_WORD *)p_checksum - 10) = v28;
    if ( v28 )
    {
      *(p_checksum - 1) = *(_DWORD *)v22;
      *p_checksum = *((_DWORD *)v22 + 1);
      Core_strcpy((char *)p_checksum + 4, 0xAui64, (const char *)v22 + 8);
      Core_strcpy((char *)p_checksum + 14, 0x14ui64, (const char *)v22 + 18);
      Core_strcpy((char *)p_checksum + 34, 0x14ui64, (const char *)v22 + 38);
      Core_strcpy((char *)p_checksum + 54, 0x80ui64, (const char *)v22 + 58);
      v22 += 186;
      v23 += 186i64;
    }
    p_checksum += 52;
  }
  for ( j = header->slot; ; ++j )
  {
    v30 = header->fileLen;
    dataLen = j->dataLen;
    if ( saveBuffSize < v30 )
      v30 = saveBuffSize;
    if ( v22 - saveBuffer > v30 - (int)dataLen )
      break;
    j->dataStart = v22;
    ++v9;
    v22 += dataLen;
    if ( v9 >= 10 )
    {
      AssertHeaderIsValid(header, saveBuffer);
      return 1i64;
    }
  }
  Com_PrintError(16, "[BG_MatchRulesHistory_ReadFromSaveFile] Tried to read past end of savefile\n");
  return 0xFFFFFFFFi64;
}

/*
==============
BG_MatchRulesHistory_ReadMetadataFromDisk
==============
*/
__int64 BG_MatchRulesHistory_ReadMetadataFromDisk(MatchRules *matchRules, int controllerIndex, MatchRulesSaveLocation saveLoc, int slotIndex, MatchRulesSaveHeaderLookup lookup, int *intResult, char *stringResult, int stringResultSize)
{
  const char *LocalClientXuidString; 
  char *v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  char *v14; 
  char v15; 
  __int64 v16; 
  char v17; 
  MatchRulesSaveHeader *v18; 
  MatchRulesSaveHeader *p_header; 
  int v20; 
  int *v21; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  bool v32; 
  __int64 v33; 
  char *GameTypeDisplayName; 
  const char *CustomizedGameTypeDefaultDisplayName; 
  const char *v36; 
  unsigned int v37; 
  __int64 saveDeviceSelected; 
  char *xuid; 
  MatchRulesSaveHeader *header; 
  RecipeBufferEntry *v43; 
  char out_filename[1024]; 

  v43 = &s_recipeLoadBuffer[saveLoc][controllerIndex];
  header = &v43->header;
  LocalClientXuidString = Live_GetLocalClientXuidString(controllerIndex);
  xuid = (char *)LocalClientXuidString;
  v10 = g_matchRulesHeader[0].xuid;
  v11 = 0;
  v12 = LocalClientXuidString - (const char *)g_matchRulesHeader - 12;
  do
  {
    if ( *((_DWORD *)v10 - 3) && saveLoc == *((_DWORD *)v10 - 1) )
    {
      v13 = 0x7FFFFFFFi64;
      v14 = v10;
      if ( !LocalClientXuidString && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v15 = v14[v12];
        v16 = v13;
        v17 = *v14++;
        --v13;
        if ( !v16 )
          break;
        if ( v15 != v17 )
        {
          LocalClientXuidString = xuid;
          goto LABEL_22;
        }
      }
      while ( v15 );
      v18 = (MatchRulesSaveHeader *)(v10 + 68);
      *((_DWORD *)v10 - 2) = Sys_GetTimeAsSeconds();
      if ( v10 == (char *)-68i64 )
        break;
      v21 = intResult;
      goto LABEL_33;
    }
LABEL_22:
    ++v11;
    v12 -= 2176i64;
    v10 += 2176;
  }
  while ( v11 < 4 );
  if ( v43->loaded )
  {
    p_header = &v43->header;
    v21 = intResult;
  }
  else
  {
    BuildFilename(saveLoc, xuid, out_filename, 0x40ui64);
    p_header = &v43->header;
    v20 = BG_MatchRulesHistory_ReadFromSaveFile(out_filename, controllerIndex, header, v43->buffer, 44728);
    v21 = intResult;
    lastReadErrorCode = v20;
    if ( lookup == RECIPE_LOOKUP_ERROR_CODE )
      *intResult = v20;
    switch ( v20 )
    {
      case -3:
        memset_0(header, 0, sizeof(MatchRulesSaveHeader));
        HeaderCache_SaveFile(header, saveLoc, xuid);
        Com_PrintWarning(16, "Unable to load Custom Match Rules File '%s' - corrupt\n", out_filename);
        goto LABEL_19;
      case -1:
        memset_0(header, 0, sizeof(MatchRulesSaveHeader));
        HeaderCache_SaveFile(header, saveLoc, xuid);
        Com_PrintWarning(16, "Unable to load Custom Match Rules File '%s'\n", out_filename);
        return 0i64;
      case -2:
        memset_0(header, 0, sizeof(MatchRulesSaveHeader));
        HeaderCache_SaveFile(header, saveLoc, xuid);
        Com_PrintWarning(16, "[BG_MatchRulesHistory_ReadMetadataFromDisk] No save device selected and data not previously cached.\n");
LABEL_19:
        Com_PrintError(13, "Recipe Load Failed!\n");
        return 0i64;
    }
  }
  v43->loaded = 1;
  v18 = HeaderCache_SaveFile(p_header, saveLoc, xuid);
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 555, ASSERT_TYPE_ASSERT, "(cachedHeader)", (const char *)&queryFormat, "cachedHeader") )
    __debugbreak();
LABEL_33:
  if ( v18->fileLen )
  {
    if ( lookup == RECIPE_LOOKUP_COUNT )
    {
      v23 = (v18->slot[0].dataLen != 0) + 1;
      if ( !v18->slot[1].dataLen )
        v23 = v18->slot[0].dataLen != 0;
      v24 = v23 + 1;
      if ( !v18->slot[2].dataLen )
        v24 = v23;
      v25 = v24 + 1;
      if ( !v18->slot[3].dataLen )
        v25 = v24;
      v26 = v25 + 1;
      if ( !v18->slot[4].dataLen )
        v26 = v25;
      v27 = v26 + 1;
      if ( !v18->slot[5].dataLen )
        v27 = v26;
      v28 = v27 + 1;
      if ( !v18->slot[6].dataLen )
        v28 = v27;
      v29 = v28 + 1;
      if ( !v18->slot[7].dataLen )
        v29 = v28;
      v30 = v29 + 1;
      if ( !v18->slot[8].dataLen )
        v30 = v29;
      v31 = v30 + 1;
      if ( !v18->slot[9].dataLen )
        v31 = v30;
      *v21 = v31;
      return 1i64;
    }
    if ( (unsigned int)slotIndex >= 0xA )
    {
      LODWORD(saveDeviceSelected) = slotIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 582, ASSERT_TYPE_ASSERT, "(unsigned)( slotIndex ) < (unsigned)( 10 )", "slotIndex doesn't index MATCH_RULES_MAX_SAVESLOTS\n\t%i not in [0, %i)", saveDeviceSelected, 10) )
        __debugbreak();
    }
    v32 = v18->slot[slotIndex].dataLen == 0;
    v33 = (__int64)&v18->slot[slotIndex];
    if ( v32 )
    {
      Com_sprintf(stringResult, stringResultSize, (const char *)&queryFormat.fmt + 3);
      return 1i64;
    }
    switch ( lookup )
    {
      case RECIPE_LOOKUP_TIMESTAMP:
        if ( LiveStorage_IsTimeSynced() )
          v37 = *(_DWORD *)(v33 + 16) + LiveStorage_GetUTCOffset();
        else
          v37 = *(_DWORD *)(v33 + 16);
        Com_sprintf<1024>((char (*)[1024])out_filename, "%d", v37);
        GameTypeDisplayName = out_filename;
        goto LABEL_81;
      case RECIPE_LOOKUP_RAW_GAMETYPE:
        GameTypeDisplayName = (char *)(v33 + 24);
        goto LABEL_81;
      case RECIPE_LOOKUP_GAMETYPE:
        GameTypeDisplayName = (char *)UI_GetGameTypeDisplayName((const char *)(v33 + 24));
        goto LABEL_81;
    }
    if ( lookup != RECIPE_LOOKUP_NAME )
    {
      if ( lookup != RECIPE_LOOKUP_DESCRIPTION )
        return 0i64;
      GameTypeDisplayName = (char *)(v33 + 74);
      goto LABEL_81;
    }
    CustomizedGameTypeDefaultDisplayName = (const char *)(v33 + 54);
    if ( v33 == -54 || !*CustomizedGameTypeDefaultDisplayName )
    {
      if ( v33 != -34 && *(_BYTE *)(v33 + 34) )
      {
        v36 = UI_SafeTranslateString("PATCH_MENU/MATCHRULES_MLG_RECIPE_NAME");
        GameTypeDisplayName = (char *)UI_ReplaceConversionString(v36, (const char *)(v33 + 34));
LABEL_81:
        Core_strcpy(stringResult, stringResultSize, GameTypeDisplayName);
        return 1i64;
      }
      CustomizedGameTypeDefaultDisplayName = UI_GetCustomizedGameTypeDefaultDisplayName((const char *)(v33 + 24));
    }
    GameTypeDisplayName = (char *)CustomizedGameTypeDefaultDisplayName;
    goto LABEL_81;
  }
  if ( lookup == RECIPE_LOOKUP_ERROR_CODE )
    *v21 = lastReadErrorCode;
  Com_sprintf(stringResult, stringResultSize, (const char *)&queryFormat.fmt + 3);
  return 0i64;
}

/*
==============
BG_MatchRulesHistory_RegisterCommands
==============
*/
void BG_MatchRulesHistory_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_BG_MATCHRULESHISTORY_CMD, 2u);
}

/*
==============
BG_MatchRulesHistory_Save
==============
*/
void BG_MatchRulesHistory_Save(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  GameStateInfo *v3; 
  const char *GameType; 
  int ControllerFromClient; 

  v1 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled && Live_IsInRestrictedMatchmakingGame() )
  {
    Com_Printf(16, "BG_SaveMatchRulesToHistory while in a playlist game -- ignoring\n");
  }
  else
  {
    v3 = GameStateInfo_Get();
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1045, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
      __debugbreak();
    if ( v3->usingRecipe )
    {
      if ( !v3->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1051, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
        __debugbreak();
      GameType = BG_MatchRulesData_GetGameType(v3->matchRules);
      if ( Com_GameMode_IsCoopGameType(GameType) )
      {
        Com_Printf(16, "BG_SaveMatchRulesToHistory, not saving CP game %s. -- ignoring\n", GameType);
      }
      else
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
        BG_MatchRulesHistory_SaveAppendToFront(v3->matchRules, ControllerFromClient, MR_SAVELOC_PLAYERHISTORY, 1);
      }
    }
    else
    {
      Com_PrintWarning(16, "BG_SaveMatchRulesToHistory while not using custom match rules -- ignoring\n");
    }
  }
}

/*
==============
BG_MatchRulesHistory_SaveAppendToFront
==============
*/
void BG_MatchRulesHistory_SaveAppendToFront(MatchRules *matchRules, int controllerIndex, MatchRulesSaveLocation saveLoc, int saveDeviceSelected)
{
  __int64 v5; 
  __int64 v6; 
  RecipeBufferEntry *v8; 
  unsigned __int8 *buffer; 
  MatchRulesSaveHeader *p_header; 
  const DDLDef *Asset; 
  int v12; 
  int HeaderSize; 
  int v14; 
  int v15; 
  int v16; 
  MatchRulesSaveHeader::SavedSlot *slot; 
  __int64 v18; 
  unsigned __int64 dataStart; 
  unsigned __int8 *v20; 
  __int64 v21; 
  char *src; 
  char *MLGVersion; 
  char *RecipeName; 
  char *RecipeDescription; 
  char *xuid; 
  char out_filename[64]; 

  v5 = saveLoc;
  v6 = controllerIndex;
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1116, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  v8 = &s_recipeLoadBuffer[v5][v6];
  buffer = v8->buffer;
  p_header = &v8->header;
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  src = (char *)BG_MatchRulesData_GetGameType(matchRules);
  MLGVersion = (char *)BG_MatchRulesData_GetMLGVersion(matchRules);
  RecipeName = (char *)BG_MatchRulesData_GetRecipeName(matchRules);
  RecipeDescription = (char *)BG_MatchRulesData_GetRecipeDescription(matchRules);
  xuid = (char *)Live_GetLocalClientXuidString(v6);
  BuildFilename((MatchRulesSaveLocation)v5, xuid, out_filename, 0x40ui64);
  if ( v8->loaded )
    goto LABEL_15;
  v12 = BG_MatchRulesHistory_ReadFromSaveFile(out_filename, v6, &v8->header, v8->buffer, 44728);
  if ( saveDeviceSelected && v12 == -2 || v12 == -3 )
  {
    Com_PrintWarning(16, "[BG_MatchRulesHistory_WriteToDiskAppendToFront] No save device selected or file is corrupt.\n");
    return;
  }
  v8->loaded = 1;
  if ( v12 == 1 )
  {
LABEL_15:
    v16 = 0;
    slot = p_header->slot;
    v18 = 0i64;
    while ( !slot->dataLen || matchRules->checksum != slot->checksum )
    {
      ++v16;
      ++v18;
      ++slot;
      if ( v18 >= 10 )
        goto LABEL_21;
    }
    Com_Printf(13, "[BG_MatchRulesHistory_WriteToDiskAppendToFront] Tried to add custom matchrules recipe to front of file but identical recipe was already in history--removing duplicate.\n");
    BG_MatchRulesHistory_SaveAppendToFront_DeleteSaveSlot(v16, p_header, buffer);
LABEL_21:
    BG_MatchRulesHistory_Save_PushFirstSlot(p_header, Asset, buffer);
  }
  else
  {
    if ( v12 == -1 )
    {
      Com_PrintWarning(16, "[BG_MatchRulesHistory_WriteToDiskAppendToFront] Loading existing file failed, will overwrite instead.\n");
      memset_0(&v8->header, 0, sizeof(v8->header));
    }
    v8->header.slot[0].dataLen = Asset->byteSize;
    HeaderSize = BG_MatchRulesHistory_GetHeaderSize(&v8->header);
    v8->header.slot[0].dataStart = &buffer[HeaderSize];
    v8->header.fileLen = HeaderSize + v14;
    FixupDataStarts(&v8->header);
    if ( v8->header.fileLen > 0xAEB8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1159, ASSERT_TYPE_SANITY, "(header.fileLen <= sizeof( max_matchrules_savefile ))", "%s\n\t\"headerSize=%d, dataLen=%d\"", "header.fileLen <= sizeof( max_matchrules_savefile )", v15, v8->header.slot[0].dataLen) )
      __debugbreak();
  }
  if ( p_header->fileLen > 0x5B780 )
  {
    LODWORD(v21) = p_header->fileLen;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1178, ASSERT_TYPE_ASSERT, "( header.fileLen ) <= ( sizeof( s_recipeLoadBuffer[saveLoc] ) )", "%s <= %s\n\t%i, %i", "header.fileLen", "sizeof( s_recipeLoadBuffer[saveLoc] )", v21, 374656) )
      __debugbreak();
  }
  p_header->slot[0].timestamp = Sys_GetTimeAsSeconds();
  Core_strcpy(p_header->slot[0].gametype, 0xAui64, src);
  Core_strcpy(p_header->slot[0].mlgVersion, 0x14ui64, MLGVersion);
  Core_strcpy(p_header->slot[0].name, 0x14ui64, RecipeName);
  Core_strcpy(p_header->slot[0].description, 0x80ui64, RecipeDescription);
  p_header->slot[0].checksum = matchRules->checksum;
  AssertMatchRulesVersionIsSet(matchRules);
  if ( !p_header->slot[0].dataStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1190, ASSERT_TYPE_ASSERT, "(header.slot[0].dataStart)", (const char *)&queryFormat, "header.slot[0].dataStart") )
    __debugbreak();
  if ( Asset->byteSize < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1192, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(def->byteSize))", "%s\n\tMemcpy has negative length. (def->byteSize)", "0 <= static_cast<int>(def->byteSize)") )
    __debugbreak();
  dataStart = (unsigned __int64)p_header->slot[0].dataStart;
  if ( (unsigned __int64)matchRules >= dataStart && (unsigned __int64)&matchRules->data[Asset->byteSize] <= Asset->byteSize + dataStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1192, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((matchRules->data)) < reinterpret_cast<const byte*>((header.slot[0].dataStart)) || reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)) > reinterpret_cast<const byte*>((header.slot[0].dataStart))+((def->byteSize)))", "%s\n\tMemcpy from (matchRules->data) to (header.slot[0].dataStart) is copying between overlapping ranges ", "reinterpret_cast<const byte*>((matchRules->data)) < reinterpret_cast<const byte*>((header.slot[0].dataStart)) || reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)) > reinterpret_cast<const byte*>((header.slot[0].dataStart))+((def->byteSize))") )
    __debugbreak();
  if ( &matchRules->data[Asset->byteSize] > &matchRules->data[4096] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1192, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((matchRules->data)) >= reinterpret_cast<const byte*>((matchRules->data)) && reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)) <= reinterpret_cast<const byte*>((matchRules->data))+(((1024*4))))", "%s\n\tMemcpy from (matchRules->data) exceeded bounds of matchRules->data", "reinterpret_cast<const byte*>((matchRules->data)) >= reinterpret_cast<const byte*>((matchRules->data)) && reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)) <= reinterpret_cast<const byte*>((matchRules->data))+(((1024*4)))") )
    __debugbreak();
  v20 = p_header->slot[0].dataStart;
  if ( (v20 < buffer || &v20[Asset->byteSize] > buffer + 374656) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1192, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((header.slot[0].dataStart)) >= reinterpret_cast<const byte*>((loadBuffer)) && reinterpret_cast<const byte*>((header.slot[0].dataStart))+((def->byteSize)) <= reinterpret_cast<const byte*>((loadBuffer))+((sizeof( s_recipeLoadBuffer[saveLoc] ))))", "%s\n\tMemcpy to (header.slot[0].dataStart) exceeded bounds of loadBuffer", "reinterpret_cast<const byte*>((header.slot[0].dataStart)) >= reinterpret_cast<const byte*>((loadBuffer)) && reinterpret_cast<const byte*>((header.slot[0].dataStart))+((def->byteSize)) <= reinterpret_cast<const byte*>((loadBuffer))+((sizeof( s_recipeLoadBuffer[saveLoc] )))") )
    __debugbreak();
  memcpy_0(p_header->slot[0].dataStart, matchRules, Asset->byteSize);
  BG_MatchRulesHistory_WriteHeaderToBuffer(p_header, buffer, 0x5B780u);
  if ( WriteBufferToFile(out_filename, v6, buffer, p_header->fileLen, saveDeviceSelected) == p_header->fileLen )
    HeaderCache_SaveFile(p_header, (MatchRulesSaveLocation)v5, xuid);
  else
    Com_PrintError(16, "[BG_MatchRulesHistory_WriteToDiskAppendToFront] Failed to write file.\n");
}

/*
==============
BG_MatchRulesHistory_SaveAppendToFront_DeleteSaveSlot
==============
*/
void BG_MatchRulesHistory_SaveAppendToFront_DeleteSaveSlot(int deleteIdx, MatchRulesSaveHeader *header, unsigned __int8 *saveBuffer)
{
  int v6; 
  int v7; 
  __int64 v8; 
  MatchRulesSaveHeader::SavedSlot *v9; 
  MatchRulesSaveHeader::SavedSlot *v10; 
  __int64 v11; 
  unsigned __int8 **p_dataStart; 
  unsigned __int8 *dataStart; 
  __int64 v15; 
  int v16; 
  __m256i v17; 
  __int64 v18; 
  __int64 v19; 

  v19 = deleteIdx;
  v18 = deleteIdx;
  v17 = *(__m256i *)&header->slot[v18].dataLen;
  if ( (unsigned int)deleteIdx >= 0xA )
  {
    v16 = 10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 928, ASSERT_TYPE_ASSERT, "(unsigned)( deleteIdx ) < (unsigned)( 10 )", "deleteIdx doesn't index MATCH_RULES_MAX_SAVESLOTS\n\t%i not in [0, %i)", deleteIdx, v16) )
      __debugbreak();
  }
  AssertHeaderIsValid(header, saveBuffer);
  if ( deleteIdx < 9 )
  {
    v6 = 9 - deleteIdx;
    if ( 208 * (9 - deleteIdx) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 937, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(( 10 - ( deleteIdx + 1 ) ) * sizeof( MatchRulesSaveHeader::SavedSlot )))", "%s\n\tMemmove has negative length. (( MATCH_RULES_MAX_SAVESLOTS - ( deleteIdx + 1 ) ) * sizeof( MatchRulesSaveHeader::SavedSlot ))", "0 <= static_cast<int>(( 10 - ( deleteIdx + 1 ) ) * sizeof( MatchRulesSaveHeader::SavedSlot ))") )
      __debugbreak();
    v7 = deleteIdx + 1;
    v8 = v6;
    v9 = &header->slot[v7];
    if ( (v9 < header->slot || &header->slot[v7 + (__int64)v6] > (MatchRulesSaveHeader::SavedSlot *)&header[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 937, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((&header->slot[deleteIdx + 1])) >= reinterpret_cast<const byte*>((header->slot)) && reinterpret_cast<const byte*>((&header->slot[deleteIdx + 1]))+((( 10 - ( deleteIdx + 1 ) ) * sizeof( MatchRulesSaveHeader::SavedSlot ))) <= reinterpret_cast<const byte*>((header->slot))+((sizeof( header->slot ))))", "%s\n\tMemmove from (&header->slot[deleteIdx + 1]) exceeded bounds of header->slot", "reinterpret_cast<const byte*>((&header->slot[deleteIdx + 1])) >= reinterpret_cast<const byte*>((header->slot)) && reinterpret_cast<const byte*>((&header->slot[deleteIdx + 1]))+((( 10 - ( deleteIdx + 1 ) ) * sizeof( MatchRulesSaveHeader::SavedSlot ))) <= reinterpret_cast<const byte*>((header->slot))+((sizeof( header->slot )))") )
      __debugbreak();
    v10 = &header->slot[v18];
    if ( (v10 < header->slot || &header->slot[v19 + v8] > (MatchRulesSaveHeader::SavedSlot *)&header[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 937, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((&header->slot[deleteIdx])) >= reinterpret_cast<const byte*>((header->slot)) && reinterpret_cast<const byte*>((&header->slot[deleteIdx]))+((( 10 - ( deleteIdx + 1 ) ) * sizeof( MatchRulesSaveHeader::SavedSlot ))) <= reinterpret_cast<const byte*>((header->slot))+((sizeof( header->slot ))))", "%s\n\tMemmove to (&header->slot[deleteIdx]) exceeded bounds of header->slot", "reinterpret_cast<const byte*>((&header->slot[deleteIdx])) >= reinterpret_cast<const byte*>((header->slot)) && reinterpret_cast<const byte*>((&header->slot[deleteIdx]))+((( 10 - ( deleteIdx + 1 ) ) * sizeof( MatchRulesSaveHeader::SavedSlot ))) <= reinterpret_cast<const byte*>((header->slot))+((sizeof( header->slot )))") )
      __debugbreak();
    memmove_0(v10, v9, 208 * v8);
    if ( (signed int)((int)saveBuffer + header->fileLen - v17.m256i_u16[0] - v17.m256i_i32[2]) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 942, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(&saveBuffer[header->fileLen] - ( slot.dataStart + slot.dataLen )))", "%s\n\tMemmove has negative length. (&saveBuffer[header->fileLen] - ( slot.dataStart + slot.dataLen ))", "0 <= static_cast<int>(&saveBuffer[header->fileLen] - ( slot.dataStart + slot.dataLen ))") )
      __debugbreak();
    if ( (v17.m256i_i64[1] + (unsigned __int64)v17.m256i_u16[0] < (unsigned __int64)saveBuffer || &saveBuffer[header->fileLen] > saveBuffer + 44728) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 942, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((slot.dataStart + slot.dataLen)) >= reinterpret_cast<const byte*>((saveBuffer)) && reinterpret_cast<const byte*>((slot.dataStart + slot.dataLen))+((&saveBuffer[header->fileLen] - ( slot.dataStart + slot.dataLen ))) <= reinterpret_cast<const byte*>((saveBuffer))+((sizeof( max_matchrules_savefile ))))", "%s\n\tMemmove from (slot.dataStart + slot.dataLen) exceeded bounds of saveBuffer", "reinterpret_cast<const byte*>((slot.dataStart + slot.dataLen)) >= reinterpret_cast<const byte*>((saveBuffer)) && reinterpret_cast<const byte*>((slot.dataStart + slot.dataLen))+((&saveBuffer[header->fileLen] - ( slot.dataStart + slot.dataLen ))) <= reinterpret_cast<const byte*>((saveBuffer))+((sizeof( max_matchrules_savefile )))") )
      __debugbreak();
    if ( (v17.m256i_i64[1] < (unsigned __int64)saveBuffer || &saveBuffer[header->fileLen - (unsigned __int64)v17.m256i_u16[0]] > saveBuffer + 44728) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 942, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((slot.dataStart)) >= reinterpret_cast<const byte*>((saveBuffer)) && reinterpret_cast<const byte*>((slot.dataStart))+((&saveBuffer[header->fileLen] - ( slot.dataStart + slot.dataLen ))) <= reinterpret_cast<const byte*>((saveBuffer))+((sizeof( max_matchrules_savefile ))))", "%s\n\tMemmove to (slot.dataStart) exceeded bounds of saveBuffer", "reinterpret_cast<const byte*>((slot.dataStart)) >= reinterpret_cast<const byte*>((saveBuffer)) && reinterpret_cast<const byte*>((slot.dataStart))+((&saveBuffer[header->fileLen] - ( slot.dataStart + slot.dataLen ))) <= reinterpret_cast<const byte*>((saveBuffer))+((sizeof( max_matchrules_savefile )))") )
      __debugbreak();
    memmove_0((void *)v17.m256i_i64[1], (const void *)(v17.m256i_u16[0] + v17.m256i_i64[1]), (size_t)&saveBuffer[header->fileLen - (unsigned __int64)v17.m256i_u16[0] - v17.m256i_i64[1]]);
    if ( v19 < 9 )
    {
      v11 = 9 - v19;
      p_dataStart = &header->slot[v18].dataStart;
      do
      {
        *p_dataStart -= v17.m256i_u16[0];
        p_dataStart += 26;
        --v11;
      }
      while ( v11 );
    }
    if ( header->slot[v18].dataLen )
    {
      dataStart = header->slot[v18].dataStart;
      if ( dataStart != (unsigned __int8 *)v17.m256i_i64[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 951, ASSERT_TYPE_SANITY, "(header->slot[deleteIdx].dataLen == 0 || header->slot[deleteIdx].dataStart == slot.dataStart)", "%s\n\t\"0x%p != 0x%p\"", "header->slot[deleteIdx].dataLen == 0 || header->slot[deleteIdx].dataStart == slot.dataStart", dataStart, (const void *)v17.m256i_i64[1]) )
        __debugbreak();
    }
  }
  memset_0(&header->slot[9], 0, sizeof(header->slot[9]));
  header->slot[9].dataStart = &header->slot[8].dataStart[header->slot[8].dataLen];
  header->fileLen -= v17.m256i_u16[0];
  AssertHeaderIsValid(header, saveBuffer);
  if ( header->fileLen > 0xAEB8 )
  {
    LODWORD(v15) = v17.m256i_u16[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 964, ASSERT_TYPE_SANITY, "(header->fileLen <= sizeof( max_matchrules_savefile ))", "%s\n\t\"dataLen=%d\"", "header->fileLen <= sizeof( max_matchrules_savefile )", v15) )
      __debugbreak();
  }
}

/*
==============
BG_MatchRulesHistory_Save_PushFirstSlot
==============
*/
void BG_MatchRulesHistory_Save_PushFirstSlot(MatchRulesSaveHeader *header, const DDLDef *def, unsigned __int8 *saveBuffer)
{
  __int64 dataLen; 
  __int64 v7; 
  int v8; 
  int v9; 
  __int64 HeaderSize; 
  unsigned __int16 v11; 
  int v12; 
  int v13; 
  unsigned __int8 *dataStart; 
  size_t v15; 
  unsigned __int8 *v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 

  AssertHeaderIsValid(header, saveBuffer);
  dataLen = header->slot[1].dataLen;
  v7 = header->slot[0].dataLen;
  v26 = header->slot[3].dataLen;
  v21 = header->slot[8].dataLen;
  v24 = header->slot[7].dataLen;
  v23 = header->slot[6].dataLen;
  v25 = header->slot[5].dataLen;
  v22 = header->slot[4].dataLen;
  v20 = header->slot[2].dataLen;
  v8 = v21 + v24 + v23 + v25 + v22 + v26 + v20 + dataLen + v7;
  if ( v8 )
  {
    v9 = header->slot[9].dataLen;
    header->fileLen -= v9;
    if ( header->fileLen > 0xAEB8 )
    {
      v18 = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 988, ASSERT_TYPE_SANITY, "(header->fileLen <= sizeof( max_matchrules_savefile ))", "%s\n\t\"dataLen=%d\"", "header->fileLen <= sizeof( max_matchrules_savefile )", v18) )
        __debugbreak();
    }
    memmove_0(&header->slot[1], header->slot, 0x750ui64);
  }
  header->slot[0].dataLen = def->byteSize;
  HeaderSize = (int)BG_MatchRulesHistory_GetHeaderSize(header);
  if ( header->slot[1].dataLen )
  {
    if ( header->slot[1].dataStart <= saveBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1002, ASSERT_TYPE_ASSERT, "(header->slot[1].dataStart > saveBuffer)", (const char *)&queryFormat, "header->slot[1].dataStart > saveBuffer") )
      __debugbreak();
    v12 = truncate_cast<int,__int64>((__int64)&saveBuffer[HeaderSize - (unsigned __int64)header->slot[1].dataStart]);
    v11 = header->slot[0].dataLen;
    v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  header->slot[0].dataStart = &saveBuffer[HeaderSize];
  header->fileLen += v11 + v13;
  if ( header->fileLen > 0xAEB8 )
  {
    v19 = v13;
    LODWORD(v17) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1013, ASSERT_TYPE_SANITY, "(header->fileLen <= sizeof( max_matchrules_savefile ))", "%s\n\t\"dataLen=%d, headerDiffOffset=%d\"", "header->fileLen <= sizeof( max_matchrules_savefile )", v17, v19) )
      __debugbreak();
  }
  if ( v8 )
  {
    if ( !header->slot[0].dataStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1018, ASSERT_TYPE_ASSERT, "(header->slot[0].dataStart)", (const char *)&queryFormat, "header->slot[0].dataStart") )
      __debugbreak();
    dataStart = header->slot[1].dataStart;
    v15 = (unsigned __int16)v22 + (unsigned __int16)v21 + (unsigned __int16)v20 + (unsigned __int16)v26 + (unsigned __int16)v25 + (unsigned __int16)v24 + (unsigned __int16)v23 + dataLen + v7;
    if ( (dataStart < saveBuffer || &dataStart[v15] > saveBuffer + 44728) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1020, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((header->slot[1].dataStart)) >= reinterpret_cast<const byte*>((saveBuffer)) && reinterpret_cast<const byte*>((header->slot[1].dataStart))+((totalDataLen)) <= reinterpret_cast<const byte*>((saveBuffer))+((sizeof( max_matchrules_savefile ))))", "%s\n\tMemmove from (header->slot[1].dataStart) exceeded bounds of saveBuffer", "reinterpret_cast<const byte*>((header->slot[1].dataStart)) >= reinterpret_cast<const byte*>((saveBuffer)) && reinterpret_cast<const byte*>((header->slot[1].dataStart))+((totalDataLen)) <= reinterpret_cast<const byte*>((saveBuffer))+((sizeof( max_matchrules_savefile )))") )
      __debugbreak();
    v16 = &header->slot[0].dataStart[header->slot[0].dataLen];
    if ( (v16 < saveBuffer || &v16[v15] > saveBuffer + 44728) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1020, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((header->slot[0].dataStart + header->slot[0].dataLen)) >= reinterpret_cast<const byte*>((saveBuffer)) && reinterpret_cast<const byte*>((header->slot[0].dataStart + header->slot[0].dataLen))+((totalDataLen)) <= reinterpret_cast<const byte*>((saveBuffer))+((sizeof( max_matchrules_savefile ))))", "%s\n\tMemmove to (header->slot[0].dataStart + header->slot[0].dataLen) exceeded bounds of saveBuffer", "reinterpret_cast<const byte*>((header->slot[0].dataStart + header->slot[0].dataLen)) >= reinterpret_cast<const byte*>((saveBuffer)) && reinterpret_cast<const byte*>((header->slot[0].dataStart + header->slot[0].dataLen))+((totalDataLen)) <= reinterpret_cast<const byte*>((saveBuffer))+((sizeof( max_matchrules_savefile )))") )
      __debugbreak();
    memmove_0(&header->slot[0].dataStart[header->slot[0].dataLen], header->slot[1].dataStart, v15);
  }
  header->slot[1].dataStart += v13 + header->slot[0].dataLen;
  header->slot[2].dataStart += v13 + header->slot[0].dataLen;
  header->slot[3].dataStart += v13 + header->slot[0].dataLen;
  header->slot[4].dataStart += v13 + header->slot[0].dataLen;
  header->slot[5].dataStart += v13 + header->slot[0].dataLen;
  header->slot[6].dataStart += v13 + header->slot[0].dataLen;
  header->slot[7].dataStart += v13 + header->slot[0].dataLen;
  header->slot[8].dataStart += v13 + header->slot[0].dataLen;
  header->slot[9].dataStart += v13 + header->slot[0].dataLen;
  AssertHeaderIsValid(header, saveBuffer);
}

/*
==============
BG_MatchRulesHistory_Shutdown
==============
*/
void BG_MatchRulesHistory_Shutdown(void)
{
  ;
}

/*
==============
BG_MatchRulesHistory_Unload
==============
*/
void BG_MatchRulesHistory_Unload(int controllerIndex)
{
  unsigned __int64 v1; 
  int v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 670, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  if ( v1 >= 8 )
  {
    j___report_rangecheckfailure(v1);
    JUMPOUT(0x1402CAA77i64);
  }
  s_recipePreloadAttempted[v1] = 0;
  s_recipeLoadBuffer[0][v1].loaded = 0;
  s_recipeLoadBuffer[1][v1].loaded = 0;
}

/*
==============
BG_MatchRulesHistory_UnregisterCommands
==============
*/
void BG_MatchRulesHistory_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_BG_MATCHRULESHISTORY_CMD, 2u);
}

/*
==============
BG_MatchRulesHistory_WriteHeaderToBuffer
==============
*/
__int64 BG_MatchRulesHistory_WriteHeaderToBuffer(MatchRulesSaveHeader *header, unsigned __int8 *saveBuffer, unsigned int saveBuffSize)
{
  unsigned __int8 *v3; 
  __int64 v4; 
  unsigned __int8 *v5; 
  unsigned int *p_checksum; 
  __int64 v8; 
  unsigned int fileLen; 
  int v12; 
  __int16 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 

  v3 = saveBuffer + 4;
  v4 = 0i64;
  v5 = saveBuffer + 8;
  *((_DWORD *)saveBuffer + 1) = 8;
  p_checksum = &header->slot[0].checksum;
  v8 = 8i64;
  do
  {
    fileLen = header->fileLen;
    v12 = 2;
    v13 = *((_WORD *)p_checksum - 10);
    if ( fileLen > saveBuffSize )
      fileLen = saveBuffSize;
    if ( v13 )
      v12 = 188;
    if ( v8 >= (int)(fileLen - v12) )
    {
      Com_PrintError(16, "[BG_MatchRulesHistory_WriteHeaderToBuffer] Tried to write past end of savefile\n", 188i64);
      return 0xFFFFFFFFi64;
    }
    *(_WORD *)v5 = v13;
    v8 += 2i64;
    v5 += 2;
    if ( *((_WORD *)p_checksum - 10) )
    {
      *(_DWORD *)v5 = *(p_checksum - 1);
      *((_DWORD *)v5 + 1) = *p_checksum;
      Core_strcpy_and_fill_zero((char *)v5 + 8, 0xAui64, (const char *)p_checksum + 4);
      Core_strcpy_and_fill_zero((char *)v5 + 18, 0x14ui64, (const char *)p_checksum + 14);
      Core_strcpy_and_fill_zero((char *)v5 + 38, 0x14ui64, (const char *)p_checksum + 34);
      Core_strcpy_and_fill_zero((char *)v5 + 58, 0x80ui64, (const char *)p_checksum + 54);
      v5 += 186;
      v8 += 186i64;
    }
    ++v4;
    p_checksum += 52;
  }
  while ( v4 < 10 );
  v14 = -1;
  v15 = header->fileLen - 4i64;
  if ( header->fileLen != 4i64 )
  {
    do
    {
      v16 = *v3++;
      v14 = (v14 >> 8) ^ g_crc32Table[v16 ^ (unsigned __int8)v14];
      --v15;
    }
    while ( v15 );
  }
  v17 = ~v14;
  header->checksum = v17;
  *(_DWORD *)saveBuffer = v17;
  return 1i64;
}

/*
==============
BG_MatchRulesHistory_WriteToDisk
==============
*/
char BG_MatchRulesHistory_WriteToDisk(MatchRules *matchRules, int controllerIndex, MatchRulesSaveLocation saveLoc, int slotIndex)
{
  MatchRules *v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  RecipeBufferEntry *v8; 
  MatchRulesSaveHeader *p_header; 
  int v10; 
  char *v11; 
  const char *GameType; 
  const char *MLGVersion; 
  const char *RecipeName; 
  const char *RecipeDescription; 
  int HeaderSize; 
  __int64 v17; 
  __int64 v18; 
  unsigned int *p_fileLen; 
  unsigned __int8 *v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  char *buffer; 
  char *v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int8 *v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int8 *v32; 
  int v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  __int64 saveDeviceSelected; 
  __int64 v38; 
  __int64 v39; 
  unsigned __int16 v40; 
  const DDLDef *Asset; 
  char *xuid; 
  char out_filename[64]; 

  v4 = matchRules;
  v5 = saveLoc;
  v6 = controllerIndex;
  v7 = slotIndex;
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 772, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  if ( (unsigned int)v7 >= 0xA )
  {
    LODWORD(saveDeviceSelected) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 773, ASSERT_TYPE_ASSERT, "(unsigned)( slotIndex ) < (unsigned)( 10 )", "slotIndex doesn't index MATCH_RULES_MAX_SAVESLOTS\n\t%i not in [0, %i)", saveDeviceSelected, 10) )
      __debugbreak();
  }
  v39 = v6 + 8 * v5;
  v8 = &s_recipeLoadBuffer[0][v39];
  p_header = &s_recipeLoadBuffer[0][v39].header;
  v10 = 1;
  xuid = (char *)Live_GetLocalClientXuidString(v6);
  BuildFilename((MatchRulesSaveLocation)v5, xuid, out_filename, 0x40ui64);
  if ( !s_recipeLoadBuffer[0][v39].loaded )
  {
    v10 = BG_MatchRulesHistory_ReadFromSaveFile(out_filename, v6, p_header, v8->buffer, 44728);
    if ( ((v10 + 3) & 0xFFFFFFFD) == 0 )
    {
      Com_PrintWarning(16, "[BG_MatchRulesHistory_WriteToDisk] Loading existing file failed, will overwrite instead.\n");
      memset_0(p_header, 0, sizeof(MatchRulesSaveHeader));
    }
    v8->loaded = 1;
  }
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  v11 = (char *)p_header + 208 * v7;
  v40 = *((_WORD *)v11 + 8);
  *((_DWORD *)v11 + 8) = Sys_GetTimeAsSeconds();
  GameType = BG_MatchRulesData_GetGameType(v4);
  Core_strcpy(v11 + 40, 0xAui64, GameType);
  MLGVersion = BG_MatchRulesData_GetMLGVersion(v4);
  Core_strcpy(v11 + 50, 0x14ui64, MLGVersion);
  RecipeName = BG_MatchRulesData_GetRecipeName(v4);
  Core_strcpy(v11 + 70, 0x14ui64, RecipeName);
  RecipeDescription = BG_MatchRulesData_GetRecipeDescription(v4);
  Core_strcpy(v11 + 90, 0x80ui64, RecipeDescription);
  *((_DWORD *)v11 + 9) = v4->checksum;
  *((_WORD *)v11 + 8) = Asset->byteSize;
  HeaderSize = BG_MatchRulesHistory_GetHeaderSize(p_header);
  v17 = HeaderSize;
  v18 = HeaderSize;
  if ( v10 == 1 )
  {
    v21 = truncate_cast<int,__int64>((__int64)&v8->buffer[HeaderSize - (unsigned __int64)s_recipeLoadBuffer[0][v39].header.slot[0].dataStart]);
    LOWORD(v22) = v40;
    v23 = v21;
    if ( v40 == *((_WORD *)v11 + 8) )
    {
      if ( v21 )
      {
        v24 = v39 * 46832;
        if ( (signed int)((int)v8 - LODWORD(s_recipeLoadBuffer[0][v39].header.slot[0].dataStart) + s_recipeLoadBuffer[0][v39].header.fileLen + 2104) < 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 833, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(&recipeBuffer->buffer[header.fileLen] - header.slot[0].dataStart))", "%s\n\tMemmove has negative length. (&recipeBuffer->buffer[header.fileLen] - header.slot[0].dataStart)", "0 <= static_cast<int>(&recipeBuffer->buffer[header.fileLen] - header.slot[0].dataStart)") )
            __debugbreak();
          v24 = v39 * 46832;
        }
        buffer = (char *)v8->buffer;
        if ( (s_recipeLoadBuffer[0][v39].header.slot[0].dataStart < v8->buffer || &v8->buffer[*(unsigned int *)((char *)&s_recipeLoadBuffer[0][0].header.fileLen + v24)] > (unsigned __int8 *)&v8[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 833, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((header.slot[0].dataStart)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((header.slot[0].dataStart))+((&recipeBuffer->buffer[header.fileLen] - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemmove from (header.slot[0].dataStart) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((header.slot[0].dataStart)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((header.slot[0].dataStart))+((&recipeBuffer->buffer[header.fileLen] - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
          __debugbreak();
        v26 = (char *)&v8->buffer[v17];
        if ( (v26 < buffer || v18 + 2i64 * (_QWORD)buffer - (unsigned __int64)s_recipeLoadBuffer[0][v39].header.slot[0].dataStart + s_recipeLoadBuffer[0][v39].header.fileLen > (unsigned __int64)&v8[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 833, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize])) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize]))+((&recipeBuffer->buffer[header.fileLen] - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemmove to (&recipeBuffer->buffer[headerSize]) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize])) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize]))+((&recipeBuffer->buffer[header.fileLen] - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
          __debugbreak();
        memmove_0(v26, s_recipeLoadBuffer[0][v39].header.slot[0].dataStart, (size_t)&v8->buffer[s_recipeLoadBuffer[0][v39].header.fileLen - (unsigned __int64)s_recipeLoadBuffer[0][v39].header.slot[0].dataStart]);
      }
    }
    else if ( (_DWORD)v7 )
    {
      if ( !s_recipeLoadBuffer[0][v39].header.slot[0].dataStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 850, ASSERT_TYPE_ASSERT, "(header.slot[0].dataStart)", (const char *)&queryFormat, "header.slot[0].dataStart") )
        __debugbreak();
      if ( !*((_QWORD *)v11 + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 851, ASSERT_TYPE_ASSERT, "(slot->dataStart)", (const char *)&queryFormat, "slot->dataStart") )
        __debugbreak();
      if ( (int)v23 < 0 )
      {
        if ( *((_DWORD *)v11 + 6) - LODWORD(s_recipeLoadBuffer[0][v39].header.slot[0].dataStart) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 856, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(slot->dataStart - header.slot[0].dataStart))", "%s\n\tMemmove has negative length. (slot->dataStart - header.slot[0].dataStart)", "0 <= static_cast<int>(slot->dataStart - header.slot[0].dataStart)") )
          __debugbreak();
        if ( (s_recipeLoadBuffer[0][v39].header.slot[0].dataStart < v8->buffer || *((_QWORD *)v11 + 3) > (unsigned __int64)&v8[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 856, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((header.slot[0].dataStart)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((header.slot[0].dataStart))+((slot->dataStart - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemmove from (header.slot[0].dataStart) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((header.slot[0].dataStart)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((header.slot[0].dataStart))+((slot->dataStart - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
          __debugbreak();
        v29 = &v8->buffer[v18];
        if ( (v29 < v8->buffer || &v8->buffer[v18 + *((_QWORD *)v11 + 3) - (unsigned __int64)s_recipeLoadBuffer[0][v39].header.slot[0].dataStart] > (unsigned __int8 *)&v8[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 856, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize])) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize]))+((slot->dataStart - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemmove to (&recipeBuffer->buffer[headerSize]) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize])) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize]))+((slot->dataStart - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
          __debugbreak();
        memmove_0(&v8->buffer[v18], s_recipeLoadBuffer[0][v39].header.slot[0].dataStart, *((_QWORD *)v11 + 3) - (unsigned __int64)s_recipeLoadBuffer[0][v39].header.slot[0].dataStart);
        s_recipeLoadBuffer[0][v39].header.slot[0].dataStart += v23;
        if ( s_recipeLoadBuffer[0][v39].header.slot[0].dataStart != v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 859, ASSERT_TYPE_ASSERT, "(header.slot[0].dataStart == &recipeBuffer->buffer[headerSize])", (const char *)&queryFormat, "header.slot[0].dataStart == &recipeBuffer->buffer[headerSize]") )
          __debugbreak();
        LOWORD(v22) = v40;
      }
      if ( (_WORD)v22 != *((_WORD *)v11 + 8) || (_DWORD)v23 )
      {
        v30 = v39 * 46832;
        if ( (signed int)(s_recipeLoadBuffer[0][v39].header.fileLen - (unsigned __int16)v22 - *((_DWORD *)v11 + 6) + (int)v8 + 2104) < 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 865, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen )))", "%s\n\tMemmove has negative length. (&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))", "0 <= static_cast<int>(&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))") )
            __debugbreak();
          v30 = v39 * 46832;
        }
        v22 = (unsigned __int16)v22;
        if ( (unsigned __int64)(unsigned __int16)v22 + *((_QWORD *)v11 + 3) < (unsigned __int64)v8->buffer || &v8->buffer[*(unsigned int *)((char *)&s_recipeLoadBuffer[0][0].header.fileLen + v30)] > (unsigned __int8 *)&v8[1] )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 865, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((slot->dataStart + oldLen)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((slot->dataStart + oldLen))+((&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemmove from (slot->dataStart + oldLen) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((slot->dataStart + oldLen)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((slot->dataStart + oldLen))+((&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
            __debugbreak();
          v30 = v39 * 46832;
        }
        v31 = *((unsigned __int16 *)v11 + 8);
        if ( (v31 + v23 + *((_QWORD *)v11 + 3) < (unsigned __int64)v8->buffer || &v8->buffer[v31 + v23 + *(unsigned int *)((char *)&s_recipeLoadBuffer[0][0].header.fileLen + v30) - v22] > (unsigned __int8 *)&v8[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 865, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((slot->dataStart + slot->dataLen + headerDiffOffset)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((slot->dataStart + slot->dataLen + headerDiffOffset))+((&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemmove to (slot->dataStart + slot->dataLen + headerDiffOffset) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((slot->dataStart + slot->dataLen + headerDiffOffset)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((slot->dataStart + slot->dataLen + headerDiffOffset))+((&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
          __debugbreak();
        memmove_0((void *)(*((_QWORD *)v11 + 3) + v23 + *((unsigned __int16 *)v11 + 8)), (const void *)(v22 + *((_QWORD *)v11 + 3)), (size_t)&v8->buffer[s_recipeLoadBuffer[0][v39].header.fileLen - v22 - *((_QWORD *)v11 + 3)]);
        if ( (int)v23 > 0 )
        {
          if ( *((_DWORD *)v11 + 6) - LODWORD(s_recipeLoadBuffer[0][v39].header.slot[0].dataStart) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 872, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(slot->dataStart - header.slot[0].dataStart))", "%s\n\tMemmove has negative length. (slot->dataStart - header.slot[0].dataStart)", "0 <= static_cast<int>(slot->dataStart - header.slot[0].dataStart)") )
            __debugbreak();
          if ( (s_recipeLoadBuffer[0][v39].header.slot[0].dataStart < v8->buffer || *((_QWORD *)v11 + 3) > (unsigned __int64)&v8[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 872, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((header.slot[0].dataStart)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((header.slot[0].dataStart))+((slot->dataStart - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemmove from (header.slot[0].dataStart) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((header.slot[0].dataStart)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((header.slot[0].dataStart))+((slot->dataStart - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
            __debugbreak();
          v32 = &v8->buffer[v18];
          if ( (v32 < v8->buffer || &v8->buffer[v18 + *((_QWORD *)v11 + 3) - (unsigned __int64)s_recipeLoadBuffer[0][v39].header.slot[0].dataStart] > (unsigned __int8 *)&v8[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 872, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize])) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize]))+((slot->dataStart - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemmove to (&recipeBuffer->buffer[headerSize]) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize])) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((&recipeBuffer->buffer[headerSize]))+((slot->dataStart - header.slot[0].dataStart)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
            __debugbreak();
          memmove_0(&v8->buffer[v18], s_recipeLoadBuffer[0][v39].header.slot[0].dataStart, *((_QWORD *)v11 + 3) - (unsigned __int64)s_recipeLoadBuffer[0][v39].header.slot[0].dataStart);
          s_recipeLoadBuffer[0][v39].header.slot[0].dataStart += v23;
          if ( s_recipeLoadBuffer[0][v39].header.slot[0].dataStart != v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 875, ASSERT_TYPE_ASSERT, "(header.slot[0].dataStart == &recipeBuffer->buffer[headerSize])", (const char *)&queryFormat, "header.slot[0].dataStart == &recipeBuffer->buffer[headerSize]") )
            __debugbreak();
        }
      }
    }
    else
    {
      if ( !*((_QWORD *)v11 + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 842, ASSERT_TYPE_ASSERT, "(slot->dataStart)", (const char *)&queryFormat, "slot->dataStart") )
        __debugbreak();
      v27 = v39 * 46832;
      if ( (signed int)((int)v8 - v40 - *((_DWORD *)v11 + 6) + s_recipeLoadBuffer[0][v39].header.fileLen + 2104) < 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 844, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen )))", "%s\n\tMemmove has negative length. (&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))", "0 <= static_cast<int>(&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))") )
          __debugbreak();
        v27 = v39 * 46832;
      }
      if ( (unsigned __int64)v40 + *((_QWORD *)v11 + 3) < (unsigned __int64)v8->buffer || &v8->buffer[*(unsigned int *)((char *)&s_recipeLoadBuffer[0][0].header.fileLen + v27)] > (unsigned __int8 *)&v8[1] )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 844, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((slot->dataStart + oldLen)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((slot->dataStart + oldLen))+((&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemmove from (slot->dataStart + oldLen) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((slot->dataStart + oldLen)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((slot->dataStart + oldLen))+((&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
          __debugbreak();
        v27 = v39 * 46832;
      }
      v28 = *((unsigned __int16 *)v11 + 8);
      if ( (v28 + v23 + *((_QWORD *)v11 + 3) < (unsigned __int64)v8->buffer || &v8->buffer[v28 + v23 + *(unsigned int *)((char *)&s_recipeLoadBuffer[0][0].header.fileLen + v27) - (unsigned __int64)v40] > (unsigned __int8 *)&v8[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 844, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((slot->dataStart + slot->dataLen + headerDiffOffset)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((slot->dataStart + slot->dataLen + headerDiffOffset))+((&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemmove to (slot->dataStart + slot->dataLen + headerDiffOffset) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((slot->dataStart + slot->dataLen + headerDiffOffset)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((slot->dataStart + slot->dataLen + headerDiffOffset))+((&recipeBuffer->buffer[header.fileLen] - ( slot->dataStart + oldLen ))) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
        __debugbreak();
      memmove_0((void *)(*((_QWORD *)v11 + 3) + v23 + *((unsigned __int16 *)v11 + 8)), (const void *)(v40 + *((_QWORD *)v11 + 3)), (size_t)&v8->buffer[s_recipeLoadBuffer[0][v39].header.fileLen - (unsigned __int64)v40 - *((_QWORD *)v11 + 3)]);
    }
    p_fileLen = &s_recipeLoadBuffer[0][v39].header.fileLen;
    v33 = *((unsigned __int16 *)v11 + 8);
    *((_QWORD *)v11 + 3) += v23;
    *p_fileLen += v23 + v33 - v40;
    FixupDataStarts(p_header);
    v20 = v8->buffer;
    AssertHeaderIsValid(p_header, v8->buffer);
    if ( *p_fileLen > 0xAEB8 )
    {
      LODWORD(v38) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 887, ASSERT_TYPE_SANITY, "(header.fileLen <= sizeof( max_matchrules_savefile ))", "%s\n\t\"headerDiffOffset=%d, dataLen=%d, oldLen=%d\"", "header.fileLen <= sizeof( max_matchrules_savefile )", v38, *((unsigned __int16 *)v11 + 8), v40) )
        __debugbreak();
    }
    v4 = matchRules;
  }
  else
  {
    s_recipeLoadBuffer[0][v39].header.slot[0].dataStart = &v8->buffer[HeaderSize];
    p_fileLen = &s_recipeLoadBuffer[0][v39].header.fileLen;
    *p_fileLen = HeaderSize + *((unsigned __int16 *)v11 + 8);
    FixupDataStarts(p_header);
    v20 = v8->buffer;
    AssertHeaderIsValid(p_header, v8->buffer);
    if ( *p_fileLen > 0xAEB8 )
    {
      LODWORD(v38) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 821, ASSERT_TYPE_SANITY, "(header.fileLen <= sizeof( max_matchrules_savefile ))", "%s\n\t\"headerSize=%d, dataLen=%d\"", "header.fileLen <= sizeof( max_matchrules_savefile )", v38, *((unsigned __int16 *)v11 + 8)) )
        __debugbreak();
    }
  }
  if ( Asset->byteSize != *((unsigned __int16 *)v11 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 890, ASSERT_TYPE_ASSERT, "(def->byteSize == slot->dataLen)", (const char *)&queryFormat, "def->byteSize == slot->dataLen") )
    __debugbreak();
  AssertMatchRulesVersionIsSet(v4);
  if ( !*((_QWORD *)v11 + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 893, ASSERT_TYPE_ASSERT, "(slot->dataStart)", (const char *)&queryFormat, "slot->dataStart") )
    __debugbreak();
  if ( Asset->byteSize < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 895, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(def->byteSize))", "%s\n\tMemcpy has negative length. (def->byteSize)", "0 <= static_cast<int>(def->byteSize)") )
    __debugbreak();
  v34 = *((_QWORD *)v11 + 3);
  if ( (unsigned __int64)v4 >= v34 && (unsigned __int64)&v4->data[Asset->byteSize] <= Asset->byteSize + v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 895, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((matchRules->data)) < reinterpret_cast<const byte*>((slot->dataStart)) || reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)) > reinterpret_cast<const byte*>((slot->dataStart))+((def->byteSize)))", "%s\n\tMemcpy from (matchRules->data) to (slot->dataStart) is copying between overlapping ranges ", "reinterpret_cast<const byte*>((matchRules->data)) < reinterpret_cast<const byte*>((slot->dataStart)) || reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)) > reinterpret_cast<const byte*>((slot->dataStart))+((def->byteSize))") )
    __debugbreak();
  if ( &v4->data[Asset->byteSize] > &v4->data[4096] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 895, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((matchRules->data)) >= reinterpret_cast<const byte*>((matchRules->data)) && reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)) <= reinterpret_cast<const byte*>((matchRules->data))+(((1024*4))))", "%s\n\tMemcpy from (matchRules->data) exceeded bounds of matchRules->data", "reinterpret_cast<const byte*>((matchRules->data)) >= reinterpret_cast<const byte*>((matchRules->data)) && reinterpret_cast<const byte*>((matchRules->data))+((def->byteSize)) <= reinterpret_cast<const byte*>((matchRules->data))+(((1024*4)))") )
    __debugbreak();
  v35 = *((_QWORD *)v11 + 3);
  if ( (v35 < (unsigned __int64)v20 || v35 + Asset->byteSize > (unsigned __int64)&v8[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 895, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((slot->dataStart)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((slot->dataStart))+((def->byteSize)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer ))))", "%s\n\tMemcpy to (slot->dataStart) exceeded bounds of recipeBuffer->buffer", "reinterpret_cast<const byte*>((slot->dataStart)) >= reinterpret_cast<const byte*>((recipeBuffer->buffer)) && reinterpret_cast<const byte*>((slot->dataStart))+((def->byteSize)) <= reinterpret_cast<const byte*>((recipeBuffer->buffer))+((sizeof( recipeBuffer->buffer )))") )
    __debugbreak();
  memcpy_0(*((void **)v11 + 3), v4, Asset->byteSize);
  if ( *p_fileLen > 0xAEB8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 898, ASSERT_TYPE_SANITY, "( header.fileLen <= sizeof( max_matchrules_savefile ) )", (const char *)&queryFormat, "header.fileLen <= sizeof( max_matchrules_savefile )") )
    __debugbreak();
  BG_MatchRulesHistory_WriteHeaderToBuffer(p_header, v20, 0xAEB8u);
  if ( WriteBufferToFile(out_filename, controllerIndex, v20, *p_fileLen, 0) == *p_fileLen )
  {
    HeaderCache_SaveFile(p_header, saveLoc, xuid);
    return 1;
  }
  else
  {
    Com_PrintError(16, "[BG_MatchRulesHistory_WriteToDisk] Failed to write file.\n");
    Com_PrintError(13, "Recipe Save Failed!\n");
    return 0;
  }
}

/*
==============
BuildFilename
==============
*/
void BuildFilename(MatchRulesSaveLocation saveLoc, const char *xuid, char *out_filename, unsigned __int64 filenameSize)
{
  __int64 v8; 
  int v9; 
  const char *v10; 
  __int64 v11; 
  int v12; 

  if ( !xuid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 233, ASSERT_TYPE_ASSERT, "(xuid)", (const char *)&queryFormat, "xuid") )
    __debugbreak();
  if ( !out_filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 234, ASSERT_TYPE_ASSERT, "(out_filename)", (const char *)&queryFormat, "out_filename") )
    __debugbreak();
  if ( saveLoc == MR_SAVELOC_PLAYERHISTORY )
  {
    if ( *xuid )
    {
      v8 = -1i64;
      do
        ++v8;
      while ( xuid[v8] );
      v9 = v8 + 10;
    }
    else
    {
      v9 = 9;
    }
    if ( filenameSize < v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 238, ASSERT_TYPE_ASSERT, "(filenameSize >= static_cast< int >( sizeof( \"cmr_hist\" ) + ( xuid[0] ? I_strlen( xuid ) + 1 : 0 ) ))", (const char *)&queryFormat, "filenameSize >= static_cast< int >( sizeof( MATCH_RULES_HISTORY_FILENAME ) + ( xuid[0] ? I_strlen( xuid ) + 1 : 0 ) )") )
      __debugbreak();
    v10 = "cmr_hist";
  }
  else
  {
    if ( saveLoc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 244, ASSERT_TYPE_ASSERT, "(saveLoc == MR_SAVELOC_PLAYERSAVED)", (const char *)&queryFormat, "saveLoc == MR_SAVELOC_PLAYERSAVED") )
      __debugbreak();
    if ( *xuid )
    {
      v11 = -1i64;
      do
        ++v11;
      while ( xuid[v11] );
      v12 = v11 + 10;
    }
    else
    {
      v12 = 9;
    }
    if ( filenameSize < v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 245, ASSERT_TYPE_ASSERT, "(filenameSize >= static_cast< int >( sizeof( \"cmr_save\" ) + ( xuid[0] ? I_strlen( xuid ) + 1 : 0 ) ))", (const char *)&queryFormat, "filenameSize >= static_cast< int >( sizeof( MATCH_RULES_SAVE_FILENAME ) + ( xuid[0] ? I_strlen( xuid ) + 1 : 0 ) )") )
      __debugbreak();
    v10 = "cmr_save";
  }
  Core_strcpy(out_filename, filenameSize, v10);
  if ( *xuid )
    Com_sprintf(out_filename + 8, filenameSize - 8, "_%s", xuid);
}

/*
==============
FixupDataStarts
==============
*/
void FixupDataStarts(MatchRulesSaveHeader *header)
{
  unsigned __int8 *v2; 
  unsigned __int8 *v3; 
  unsigned __int8 *v4; 
  unsigned __int8 *v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 

  v2 = &header->slot[0].dataStart[header->slot[0].dataLen];
  header->slot[1].dataStart = v2;
  v3 = &v2[header->slot[1].dataLen];
  header->slot[2].dataStart = v3;
  v4 = &v3[header->slot[2].dataLen];
  header->slot[3].dataStart = v4;
  v5 = &v4[header->slot[3].dataLen];
  header->slot[4].dataStart = v5;
  v6 = &v5[header->slot[4].dataLen];
  header->slot[5].dataStart = v6;
  v7 = &v6[header->slot[5].dataLen];
  header->slot[6].dataStart = v7;
  v8 = &v7[header->slot[6].dataLen];
  header->slot[7].dataStart = v8;
  v9 = &v8[header->slot[7].dataLen];
  header->slot[8].dataStart = v9;
  header->slot[9].dataStart = &v9[header->slot[8].dataLen];
}

/*
==============
HeaderCache_SaveFile
==============
*/
MatchRulesSaveHeader *HeaderCache_SaveFile(MatchRulesSaveHeader *header, MatchRulesSaveLocation location, const char *xuid)
{
  int v5; 
  char *v6; 
  signed __int64 v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  char *v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  unsigned int lastAccessedTime; 
  __int64 v16; 
  MatchRulesHeaderCache *v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  __int64 v22; 
  __int64 v23; 

  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1229, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( !xuid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1230, ASSERT_TYPE_ASSERT, "(xuid)", (const char *)&queryFormat, "xuid") )
    __debugbreak();
  v5 = 0;
  v6 = g_matchRulesHeader[0].xuid;
  v7 = xuid - (const char *)g_matchRulesHeader - 12;
  v8 = 4;
  while ( 1 )
  {
    if ( !*((_DWORD *)v6 - 3) )
    {
      v9 = v5;
      if ( v8 != 4 )
        v9 = v8;
      v8 = v9;
      goto LABEL_23;
    }
    if ( location == *((_DWORD *)v6 - 1) )
      break;
LABEL_23:
    ++v5;
    v7 -= 2176i64;
    v6 += 2176;
    if ( v5 >= 4 )
      goto LABEL_24;
  }
  v10 = 0x7FFFFFFFi64;
  v11 = v6;
  if ( !xuid && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v12 = v11[v7];
    v13 = v10;
    v14 = *v11++;
    --v10;
    if ( !v13 )
      break;
    if ( v12 != v14 )
      goto LABEL_23;
  }
  while ( v12 );
LABEL_24:
  if ( v5 == 4 )
  {
    if ( v8 == 4 )
    {
      Com_PrintWarning(16, "[HeaderCache_SaveFile] MatchRulesHeaderCache is full, so overwriting oldest used file.\n");
      lastAccessedTime = -1;
      v5 = 4;
      if ( g_matchRulesHeader[0].lastAccessedTime != -1 )
      {
        lastAccessedTime = g_matchRulesHeader[0].lastAccessedTime;
        v5 = 0;
      }
      if ( g_matchRulesHeader[1].lastAccessedTime < lastAccessedTime )
      {
        lastAccessedTime = g_matchRulesHeader[1].lastAccessedTime;
        v5 = 1;
      }
      if ( g_matchRulesHeader[2].lastAccessedTime < lastAccessedTime )
      {
        lastAccessedTime = g_matchRulesHeader[2].lastAccessedTime;
        v5 = 2;
      }
      if ( g_matchRulesHeader[3].lastAccessedTime < lastAccessedTime )
        v5 = 3;
    }
    else
    {
      v5 = v8;
    }
    if ( (unsigned int)v5 >= 4 )
    {
      LODWORD(v22) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1269, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( MAX_CACHED )", "cacheIndex doesn't index MAX_CACHED\n\t%i not in [0, %i)", v22, 4) )
        __debugbreak();
    }
    v16 = v5;
    Core_strcpy(g_matchRulesHeader[v16].xuid, 0x40ui64, xuid);
    g_matchRulesHeader[v16].saveLocation = location;
    g_matchRulesHeader[v16].inUse = 1;
  }
  if ( (unsigned int)v5 >= 0x2200 )
  {
    LODWORD(v23) = 8704;
    LODWORD(v22) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1278, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( sizeof( g_matchRulesHeader ) )", "cacheIndex doesn't index sizeof( g_matchRulesHeader )\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  v17 = &g_matchRulesHeader[v5];
  if ( !v17->inUse )
    goto LABEL_53;
  v18 = v17->xuid - xuid;
  do
  {
    v19 = (unsigned __int8)xuid[v18];
    v20 = *(unsigned __int8 *)xuid - v19;
    if ( v20 )
      break;
    ++xuid;
  }
  while ( v19 );
  if ( v20 || location != v17->saveLocation )
  {
LABEL_53:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules_history.cpp", 1281, ASSERT_TYPE_ASSERT, "(cacheItem->inUse && strcmp( xuid, cacheItem->xuid ) == 0 && location == cacheItem->saveLocation)", (const char *)&queryFormat, "cacheItem->inUse && strcmp( xuid, cacheItem->xuid ) == 0 && location == cacheItem->saveLocation") )
      __debugbreak();
  }
  v17->lastAccessedTime = Sys_GetTimeAsSeconds();
  memcpy_0(&v17->header, header, sizeof(v17->header));
  return &v17->header;
}

/*
==============
WriteBufferToFile
==============
*/
int WriteBufferToFile(const char *filename, int controllerIndex, unsigned __int8 *buffer, unsigned __int64 len, int forceShow)
{
  __int64 v7; 
  MemCardFileHandle *v8; 
  bool isError; 
  int fmt; 

  v7 = 0i64;
  v8 = MemCard_OpenFile((MemCardFileHandle *)filename, (const char *)1, MEMCARD_READ, (MemcardSizeHint)controllerIndex, fmt);
  if ( v8 )
  {
    if ( len > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)len, "unsigned", len) )
      __debugbreak();
    MemCard_WriteFile((MemCardFileHandle)v8, buffer, len);
    isError = MemCard_GetWriteError()->isError;
    MemCard_CloseFile((MemCardFileHandle)v8, 1);
    if ( isError )
      len = 0i64;
    v7 = len;
  }
  return truncate_cast<int,__int64>(v7);
}

