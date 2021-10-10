/*
==============
Scr_GetSourcePos3
==============
*/

void __fastcall Scr_GetSourcePos3(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos, char *outBuf, int outBufLen)
{
  ?Scr_GetSourcePos3@@YAXAEBUscrContext_t@@IIPEADH@Z(scrContext, bufferIndex, sourcePos, outBuf, outBufLen);
}

/*
==============
Scr_GetFileAndLine
==============
*/

void __fastcall Scr_GetFileAndLine(const scrContext_t *scrContext, const char *codePos, const char **filename, int *linenum)
{
  ?Scr_GetFileAndLine@@YAXAEBUscrContext_t@@PEBDPEAPEBDPEAH@Z(scrContext, codePos, filename, linenum);
}

/*
==============
Scr_ScriptProfilePrintUsageReportToBlackBox
==============
*/

void __fastcall Scr_ScriptProfilePrintUsageReportToBlackBox(scrContext_t *scrContext)
{
  ?Scr_ScriptProfilePrintUsageReportToBlackBox@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_LoadedImpureScript
==============
*/

bool __fastcall Scr_LoadedImpureScript()
{
  return ?Scr_LoadedImpureScript@@YA_NXZ();
}

/*
==============
Scr_GetLineInfo
==============
*/

int __fastcall Scr_GetLineInfo(const char *buf, unsigned int sourcePos, int *col, char *line)
{
  return ?Scr_GetLineInfo@@YAHPEBDIPEAHPEAD@Z(buf, sourcePos, col, line);
}

/*
==============
Scr_GetClosestOpcodePosOfType
==============
*/

const char *__fastcall Scr_GetClosestOpcodePosOfType(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos, unsigned int startSourcePos, unsigned int endSourcePos, Scr_SourceType_t type, unsigned int cumulOffset)
{
  return ?Scr_GetClosestOpcodePosOfType@@YAPEBDAEBUscrContext_t@@IIIIW4Scr_SourceType_t@@I@Z(scrContext, bufferIndex, sourcePos, startSourcePos, endSourcePos, type, cumulOffset);
}

/*
==============
Scr_ShutdownOpcodeLookup
==============
*/

void __fastcall Scr_ShutdownOpcodeLookup(scrContext_t *scrContext)
{
  ?Scr_ShutdownOpcodeLookup@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_PrintPrevCodePosSpreadSheet
==============
*/

void __fastcall Scr_PrintPrevCodePosSpreadSheet(const scrContext_t *scrContext, int channel, ScriptCodePos scriptCodePos, bool summary, bool functionSummary)
{
  ?Scr_PrintPrevCodePosSpreadSheet@@YAXAEBUscrContext_t@@HUScriptCodePos@@_N2@Z(scrContext, channel, scriptCodePos, summary, functionSummary);
}

/*
==============
Scr_GetSourcePosOfType
==============
*/

int __fastcall Scr_GetSourcePosOfType(const scrContext_t *scrContext, const char *codePos, Scr_SourceType_t type, int currentSourcePos, Scr_SourcePos_t *pos)
{
  return ?Scr_GetSourcePosOfType@@YAHAEBUscrContext_t@@PEBDW4Scr_SourceType_t@@HPEAUScr_SourcePos_t@@@Z(scrContext, codePos, type, currentSourcePos, pos);
}

/*
==============
Scr_GetSourceInfo
==============
*/

SourceBufferInfo *__fastcall Scr_GetSourceInfo(const scrContext_t *scrContext, const char *name)
{
  return ?Scr_GetSourceInfo@@YAPEAUSourceBufferInfo@@AEBUscrContext_t@@PEBD@Z(scrContext, name);
}

/*
==============
Scr_PrintPrevCodePosToBufferWOptions
==============
*/

int __fastcall Scr_PrintPrevCodePosToBufferWOptions(const scrContext_t *scrContext, char *msg, int msgSize, int *msgPos, ScriptCodePos codePos, unsigned int index, bool bFileNline, bool bSource, bool bPosOnLine)
{
  return ?Scr_PrintPrevCodePosToBufferWOptions@@YAHAEBUscrContext_t@@PEADHPEAHUScriptCodePos@@I_N44@Z(scrContext, msg, msgSize, msgPos, codePos, index, bFileNline, bSource, bPosOnLine);
}

/*
==============
Scr_GetLineNum
==============
*/

int __fastcall Scr_GetLineNum(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos)
{
  return ?Scr_GetLineNum@@YAHAEBUscrContext_t@@II@Z(scrContext, bufferIndex, sourcePos);
}

/*
==============
OpcodeLookup::SetLocalVars
==============
*/

void __fastcall OpcodeLookup::SetLocalVars(OpcodeLookup *this, const scrContext_t *scrContext, unsigned __int16 *lv)
{
  ?SetLocalVars@OpcodeLookup@@QEAAXAEBUscrContext_t@@PEAG@Z(this, scrContext, lv);
}

/*
==============
Scr_GetSPGoldScriptName
==============
*/

void __fastcall Scr_GetSPGoldScriptName(const char *name, char *goldname, const unsigned __int64 goldnameLength)
{
  ?Scr_GetSPGoldScriptName@@YAXPEBDPEAD_K@Z(name, goldname, goldnameLength);
}

/*
==============
OpcodeLookup::GetLocalVars
==============
*/

unsigned __int16 *__fastcall OpcodeLookup::GetLocalVars(OpcodeLookup *this, const scrContext_t *scrContext)
{
  return ?GetLocalVars@OpcodeLookup@@QEBAPEAGAEBUscrContext_t@@@Z(this, scrContext);
}

/*
==============
CompileError
==============
*/

void CompileError(scrContext_t *scrContext, unsigned int sourcePos, const char *msg, ...)
{
  ?CompileError@@YAXAEAUscrContext_t@@IPEBDZZ(scrContext, sourcePos, msg);
}

/*
==============
Scr_SendSourceFile
==============
*/

void __fastcall Scr_SendSourceFile(scrContext_t *scrContext, const _ScrRequestScript *request)
{
  ?Scr_SendSourceFile@@YAXAEAUscrContext_t@@PEBU_ScrRequestScript@@@Z(scrContext, request);
}

/*
==============
Scr_PrintPrevCodePos
==============
*/

void __fastcall Scr_PrintPrevCodePos(const scrContext_t *scrContext, int channel, ScriptCodePos codePos, unsigned int index, bool bError)
{
  ?Scr_PrintPrevCodePos@@YAXAEBUscrContext_t@@HUScriptCodePos@@I_N@Z(scrContext, channel, codePos, index, bError);
}

/*
==============
Scr_ScriptProfileTimesReset
==============
*/

void __fastcall Scr_ScriptProfileTimesReset(scrContext_t *scrContext)
{
  ?Scr_ScriptProfileTimesReset@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_TrackServerTimeSetMaxScriptOps
==============
*/

void __fastcall Scr_TrackServerTimeSetMaxScriptOps(scrContext_t *scrContext)
{
  ?Scr_TrackServerTimeSetMaxScriptOps@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetOpcodePosOfType
==============
*/

const char *__fastcall Scr_GetOpcodePosOfType(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int startSourcePos, unsigned int endSourcePos, Scr_SourceType_t type, unsigned int *sourcePos)
{
  return ?Scr_GetOpcodePosOfType@@YAPEBDAEBUscrContext_t@@IIIW4Scr_SourceType_t@@PEAI@Z(scrContext, bufferIndex, startSourcePos, endSourcePos, type, sourcePos);
}

/*
==============
Scr_PrintLookupBufferUsage
==============
*/

void __fastcall Scr_PrintLookupBufferUsage(const scrContext_t *scrContext)
{
  ?Scr_PrintLookupBufferUsage@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetSourceBuffer
==============
*/

unsigned int __fastcall Scr_GetSourceBuffer(const scrContext_t *scrContext, const char *codePos)
{
  return ?Scr_GetSourceBuffer@@YAIAEBUscrContext_t@@PEBD@Z(scrContext, codePos);
}

/*
==============
Scr_ScriptProfileResetUsageReport
==============
*/

void __fastcall Scr_ScriptProfileResetUsageReport(scrContext_t *scrContext)
{
  ?Scr_ScriptProfileResetUsageReport@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetLineNumInternal
==============
*/

int __fastcall Scr_GetLineNumInternal(const char *buf, unsigned int sourcePos, const char **startLine, int *col)
{
  return ?Scr_GetLineNumInternal@@YAHPEBDIPEAPEBDPEAH@Z(buf, sourcePos, startLine, col);
}

/*
==============
Scr_ShutdownCodeOffsetMap
==============
*/

void __fastcall Scr_ShutdownCodeOffsetMap(scrContext_t *scrContext)
{
  ?Scr_ShutdownCodeOffsetMap@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_PrintProfileTimes
==============
*/

bool __fastcall Scr_PrintProfileTimes(const scrContext_t *scrContext, float minTime)
{
  return ?Scr_PrintProfileTimes@@YA_NAEBUscrContext_t@@M@Z(scrContext, minTime);
}

/*
==============
Scr_InitSourceFuncInfo
==============
*/

void __fastcall Scr_InitSourceFuncInfo(scrContext_t *scrContext)
{
  ?Scr_InitSourceFuncInfo@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_TrackServerTimeAccumScriptTime
==============
*/

void __fastcall Scr_TrackServerTimeAccumScriptTime(scrContext_t *scrContext, bool newScriptMax)
{
  ?Scr_TrackServerTimeAccumScriptTime@@YAXAEAUscrContext_t@@_N@Z(scrContext, newScriptMax);
}

/*
==============
Scr_ParseIntegerString
==============
*/

bool __fastcall Scr_ParseIntegerString(const char *str, int *result)
{
  return ?Scr_ParseIntegerString@@YA_NPEBDAEAH@Z(str, result);
}

/*
==============
Scr_AddSourceBuffer
==============
*/

char *__fastcall Scr_AddSourceBuffer(scrContext_t *scrContext, const char *extFilename, const char *codePos, bool archive, const ScrThreadMode threadMode, int prevIndex)
{
  return ?Scr_AddSourceBuffer@@YAPEADAEAUscrContext_t@@PEBD1_NW4ScrThreadMode@@H@Z(scrContext, extFilename, codePos, archive, threadMode, prevIndex);
}

/*
==============
Scr_GetPrevSourcePos
==============
*/

unsigned int __fastcall Scr_GetPrevSourcePos(const scrContext_t *scrContext, const char *codePos, unsigned int index)
{
  return ?Scr_GetPrevSourcePos@@YAIAEBUscrContext_t@@PEBDI@Z(scrContext, codePos, index);
}

/*
==============
Scr_PrevCodePosFileName
==============
*/

const char *__fastcall Scr_PrevCodePosFileName(const scrContext_t *scrContext, ScriptCodePos scriptCodePos)
{
  return ?Scr_PrevCodePosFileName@@YAPEBDAEBUscrContext_t@@UScriptCodePos@@@Z(scrContext, scriptCodePos);
}

/*
==============
AddThreadStartOpcodePos
==============
*/

void __fastcall AddThreadStartOpcodePos(scrContext_t *scrContext, unsigned int sourcePos)
{
  ?AddThreadStartOpcodePos@@YAXAEAUscrContext_t@@I@Z(scrContext, sourcePos);
}

/*
==============
Scr_Parser_ShutdownHunkUsers
==============
*/

void __fastcall Scr_Parser_ShutdownHunkUsers(scrContext_t *scrContext)
{
  ?Scr_Parser_ShutdownHunkUsers@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
OpcodeLookup::SetCodePos
==============
*/

void __fastcall OpcodeLookup::SetCodePos(OpcodeLookup *this, const scrContext_t *scrContext, const char *pos)
{
  ?SetCodePos@OpcodeLookup@@QEAAXAEBUscrContext_t@@PEBD@Z(this, scrContext, pos);
}

/*
==============
Scr_GetFunctionLineNum
==============
*/

int __fastcall Scr_GetFunctionLineNum(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos)
{
  return ?Scr_GetFunctionLineNum@@YAHAEBUscrContext_t@@II@Z(scrContext, bufferIndex, sourcePos);
}

/*
==============
Scr_PrintPrevCodePosToBuffer
==============
*/

void __fastcall Scr_PrintPrevCodePosToBuffer(const scrContext_t *scrContext, char *msg, int msgSize, int *msgPos, ScriptCodePos codePos, unsigned int index)
{
  ?Scr_PrintPrevCodePosToBuffer@@YAXAEBUscrContext_t@@PEADHPEAHUScriptCodePos@@I@Z(scrContext, msg, msgSize, msgPos, codePos, index);
}

/*
==============
Scr_Parser_InitHunkUsers
==============
*/

void __fastcall Scr_Parser_InitHunkUsers(scrContext_t *scrContext)
{
  ?Scr_Parser_InitHunkUsers@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetSourcePos2
==============
*/

void __fastcall Scr_GetSourcePos2(const scrContext_t *scrContext, unsigned int bufferIndex, int lineNum, char *outBuf, int outBufLen)
{
  ?Scr_GetSourcePos2@@YAXAEBUscrContext_t@@IHPEADH@Z(scrContext, bufferIndex, lineNum, outBuf, outBufLen);
}

/*
==============
Scr_GetSourceBuffer_Fast
==============
*/

unsigned int __fastcall Scr_GetSourceBuffer_Fast(const scrContext_t *scrContext, const char *codePos)
{
  return ?Scr_GetSourceBuffer_Fast@@YAIAEBUscrContext_t@@PEBD@Z(scrContext, codePos);
}

/*
==============
AddOpcodePos
==============
*/

void __fastcall AddOpcodePos(scrContext_t *scrContext, unsigned int sourcePos, Scr_SourceType_t type)
{
  ?AddOpcodePos@@YAXAEAUscrContext_t@@IW4Scr_SourceType_t@@@Z(scrContext, sourcePos, type);
}

/*
==============
Scr_GetNewSourceBuffer
==============
*/

SourceBufferInfo *__fastcall Scr_GetNewSourceBuffer(scrContext_t *scrContext)
{
  return ?Scr_GetNewSourceBuffer@@YAPEAUSourceBufferInfo@@AEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_FixLocalVariables
==============
*/

void __fastcall Scr_FixLocalVariables(scrContext_t *scrContext, VariableStackBuffer *stackValue)
{
  ?Scr_FixLocalVariables@@YAXAEAUscrContext_t@@PEAUVariableStackBuffer@@@Z(scrContext, stackValue);
}

/*
==============
Scr_PrintScriptCanonicalStringUsage
==============
*/

void Scr_PrintScriptCanonicalStringUsage(void)
{
  ?Scr_PrintScriptCanonicalStringUsage@@YAXXZ();
}

/*
==============
Scr_CalcScriptFileProfile
==============
*/

void __fastcall Scr_CalcScriptFileProfile(scrContext_t *scrContext)
{
  ?Scr_CalcScriptFileProfile@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetNewCodeOffset
==============
*/

int __fastcall Scr_GetNewCodeOffset(const scrContext_t *scrContext, int offset)
{
  return ?Scr_GetNewCodeOffset@@YAHAEBUscrContext_t@@H@Z(scrContext, offset);
}

/*
==============
Scr_GetSourcePos
==============
*/

int __fastcall Scr_GetSourcePos(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos, char *outBuf, int outBufLen)
{
  return ?Scr_GetSourcePos@@YAHAEBUscrContext_t@@IIPEADH@Z(scrContext, bufferIndex, sourcePos, outBuf, outBufLen);
}

/*
==============
Scr_Parser_DecommitUnusedHunkUsers
==============
*/

void __fastcall Scr_Parser_DecommitUnusedHunkUsers(const scrContext_t *scrContext)
{
  ?Scr_Parser_DecommitUnusedHunkUsers@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_SendSourceNames
==============
*/

int __fastcall Scr_SendSourceNames(scrContext_t *scrContext)
{
  return ?Scr_SendSourceNames@@YAHAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_UseSPGoldScript
==============
*/

bool __fastcall Scr_UseSPGoldScript(const char *name, char *goldname, const unsigned __int64 goldnameLength)
{
  return ?Scr_UseSPGoldScript@@YA_NPEBDPEAD_K@Z(name, goldname, goldnameLength);
}

/*
==============
Scr_IgnoreDebugChecks
==============
*/

void __fastcall Scr_IgnoreDebugChecks(scrContext_t *scrContext)
{
  ?Scr_IgnoreDebugChecks@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ScriptProfileResetUsageTimes
==============
*/

void __fastcall Scr_ScriptProfileResetUsageTimes(scrContext_t *scrContext)
{
  ?Scr_ScriptProfileResetUsageTimes@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_SetLoadedImpureScript
==============
*/

void __fastcall Scr_SetLoadedImpureScript(bool loadedImpureScript)
{
  ?Scr_SetLoadedImpureScript@@YAX_N@Z(loadedImpureScript);
}

/*
==============
Scr_SortTrackedProfileData
==============
*/

void __fastcall Scr_SortTrackedProfileData(scrContext_t *scrContext)
{
  ?Scr_SortTrackedProfileData@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_CalcAnimscriptProfile
==============
*/

void __fastcall Scr_CalcAnimscriptProfile(const scrContext_t *scrContext, int *total, int *totalNonBuiltIn)
{
  ?Scr_CalcAnimscriptProfile@@YAXAEBUscrContext_t@@PEAH1@Z(scrContext, total, totalNonBuiltIn);
}

/*
==============
Scr_GetNextSourceBufData
==============
*/

SourceBufferInfo *__fastcall Scr_GetNextSourceBufData(const scrContext_t *scrContext, unsigned int bufferIndex)
{
  return ?Scr_GetNextSourceBufData@@YAPEAUSourceBufferInfo@@AEBUscrContext_t@@I@Z(scrContext, bufferIndex);
}

/*
==============
Scr_PrintScriptFunctionNames
==============
*/

void __fastcall Scr_PrintScriptFunctionNames(const scrContext_t *scrContext, const char *scriptFileName)
{
  ?Scr_PrintScriptFunctionNames@@YAXAEBUscrContext_t@@PEBD@Z(scrContext, scriptFileName);
}

/*
==============
Scr_InitOpcodeLookup
==============
*/

void __fastcall Scr_InitOpcodeLookup(scrContext_t *scrContext)
{
  ?Scr_InitOpcodeLookup@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_PrintScriptProfileTimesForScriptFile
==============
*/

void __fastcall Scr_PrintScriptProfileTimesForScriptFile(const scrContext_t *scrContext)
{
  ?Scr_PrintScriptProfileTimesForScriptFile@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetClosestSourcePosOfType
==============
*/

unsigned int __fastcall Scr_GetClosestSourcePosOfType(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos, Scr_SourceType_t type)
{
  return ?Scr_GetClosestSourcePosOfType@@YAIAEBUscrContext_t@@IIW4Scr_SourceType_t@@@Z(scrContext, bufferIndex, sourcePos, type);
}

/*
==============
Scr_AddProfileTime
==============
*/

void __fastcall Scr_AddProfileTime(const scrContext_t *scrContext, ScriptCodePos scriptCodePos, unsigned __int64 time, unsigned __int64 builtInTime)
{
  ?Scr_AddProfileTime@@YAXAEBUscrContext_t@@UScriptCodePos@@_K2@Z(scrContext, scriptCodePos, time, builtInTime);
}

/*
==============
RemoveOpcodePos
==============
*/

void __fastcall RemoveOpcodePos(scrContext_t *scrContext)
{
  ?RemoveOpcodePos@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetSourceBufferLookup
==============
*/

SourceBufferInfo *__fastcall Scr_GetSourceBufferLookup(const scrContext_t *scrContext)
{
  return ?Scr_GetSourceBufferLookup@@YAPEAUSourceBufferInfo@@AEBUscrContext_t@@@Z(scrContext);
}

/*
==============
CompileErrorWithSourceLine
==============
*/

void CompileErrorWithSourceLine(scrContext_t *scrContext, unsigned int sourcePos, const char *msg, ...)
{
  ?CompileErrorWithSourceLine@@YAXAEAUscrContext_t@@IPEBDZZ(scrContext, sourcePos, msg);
}

/*
==============
CompileError2_WithSourceLine
==============
*/

void __fastcall CompileError2_WithSourceLine(scrContext_t *scrContext, const char *codePos, const char *msg)
{
  ?CompileError2_WithSourceLine@@YAXAEAUscrContext_t@@PEBD1@Z(scrContext, codePos, msg);
}

/*
==============
CompileError2
==============
*/

void CompileError2(scrContext_t *scrContext, const char *codePos, const char *msg, ...)
{
  ?CompileError2@@YAXAEAUscrContext_t@@PEBD1ZZ(scrContext, codePos, msg);
}

/*
==============
OpcodeLookup::GetCodePos
==============
*/

const char *__fastcall OpcodeLookup::GetCodePos(OpcodeLookup *this, const scrContext_t *scrContext)
{
  return ?GetCodePos@OpcodeLookup@@QEBAPEBDAEBUscrContext_t@@@Z(this, scrContext);
}

/*
==============
Scr_GetCodePos
==============
*/

void __fastcall Scr_GetCodePos(const scrContext_t *scrContext, const char *codePos, unsigned int index, char *outBuf, int outBufLen)
{
  ?Scr_GetCodePos@@YAXAEBUscrContext_t@@PEBDIPEADH@Z(scrContext, codePos, index, outBuf, outBufLen);
}

/*
==============
Scr_PrevCodePosFileNameMatches
==============
*/

bool __fastcall Scr_PrevCodePosFileNameMatches(const scrContext_t *scrContext, ScriptCodePos scriptCodePos, const char *fileName)
{
  return ?Scr_PrevCodePosFileNameMatches@@YA_NAEBUscrContext_t@@UScriptCodePos@@PEBD@Z(scrContext, scriptCodePos, fileName);
}

/*
==============
Scr_PrevCodePosFunctionName
==============
*/

const char *__fastcall Scr_PrevCodePosFunctionName(const scrContext_t *scrContext, ScriptCodePos scriptCodePos)
{
  return ?Scr_PrevCodePosFunctionName@@YAPEBDAEBUscrContext_t@@UScriptCodePos@@@Z(scrContext, scriptCodePos);
}

/*
==============
Scr_Parser_PreCommitHunkUsers
==============
*/

void __fastcall Scr_Parser_PreCommitHunkUsers(const scrContext_t *scrContext)
{
  ?Scr_Parser_PreCommitHunkUsers@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ScriptProfilePrintUsageReportToLog
==============
*/

void __fastcall Scr_ScriptProfilePrintUsageReportToLog(scrContext_t *scrContext)
{
  ?Scr_ScriptProfilePrintUsageReportToLog@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
DumpLoadedScripts
==============
*/

void __fastcall DumpLoadedScripts(scrContext_t *scrContext)
{
  ?DumpLoadedScripts@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
AddOpcodePos
==============
*/
void AddOpcodePos(scrContext_t *scrContext, unsigned int sourcePos, Scr_SourceType_t type)
{
  int developer_statement; 
  char v6; 
  unsigned int v7; 
  void *v8; 
  unsigned int v9; 
  void *v10; 
  unsigned __int8 *opcodePos; 
  OpcodeLookup *v12; 
  int v13; 
  __int64 opcodeLookupLen; 
  const unsigned __int8 *currentCodePos; 
  int v16; 
  unsigned __int16 *PauseLocalVars; 
  int v18; 
  SourceLookup *sourcePosLookup; 
  SourceLookup *v20; 
  __int64 delayedSourceIndex; 
  __int64 v22; 
  __int64 v23; 
  int UsedSize; 

  if ( scrContext->m_varPub.developer )
  {
    developer_statement = scrContext->m_compilePub.developer_statement;
    if ( developer_statement == 2 )
    {
      if ( scrContext->m_varPub.developer_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 378, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.developer_script )", (const char *)&queryFormat, "!scrContext.m_varPub.developer_script") )
        __debugbreak();
    }
    else if ( developer_statement != 3 )
    {
      v6 = type & 0xFE;
      if ( scrContext->m_compilePub.allowedBreakpoint )
        v6 = type;
      if ( !scrContext->m_parserGlob.opcodeLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 392, ASSERT_TYPE_ASSERT, "( pScrParserGlob->opcodeLookup )", (const char *)&queryFormat, "pScrParserGlob->opcodeLookup") )
        __debugbreak();
      if ( !scrContext->m_parserGlob.sourcePosLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 393, ASSERT_TYPE_ASSERT, "( pScrParserGlob->sourcePosLookup )", (const char *)&queryFormat, "pScrParserGlob->sourcePosLookup") )
        __debugbreak();
      if ( !scrContext->m_compilePub.opcodePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 394, ASSERT_TYPE_ASSERT, "( pScrCompilePub->opcodePos )", (const char *)&queryFormat, "pScrCompilePub->opcodePos") )
        __debugbreak();
      v7 = 8 * (3 * scrContext->m_parserGlob.opcodeLookupLen + 3);
      if ( v7 > Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.opcodeLookupUser) )
      {
        v8 = Mem_HunkUser_AllocInternal(scrContext->m_parserGlob.opcodeLookupUser, 0x10000ui64, 1ui64, "AddOpcodePos");
        memset_0(v8, 0, 0x10000ui64);
        if ( v7 > Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.opcodeLookupUser) )
        {
          UsedSize = Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.opcodeLookupUser);
          LODWORD(v22) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 402, ASSERT_TYPE_ASSERT, "( size ) <= ( Mem_HunkUser_GetUsedSize( pScrParserGlob->opcodeLookupUser ) )", "size <= Mem_HunkUser_GetUsedSize( pScrParserGlob->opcodeLookupUser )\n\t%i, %i", v22, UsedSize) )
            __debugbreak();
        }
      }
      v9 = 4 * scrContext->m_parserGlob.sourcePosLookupLen + 4;
      if ( v9 > Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourcePosLookupUser) )
      {
        v10 = Mem_HunkUser_AllocInternal(scrContext->m_parserGlob.sourcePosLookupUser, 0x10000ui64, 1ui64, "AddOpcodePos");
        memset_0(v10, 0, 0x10000ui64);
        if ( v9 > Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourcePosLookupUser) )
        {
          LODWORD(v23) = Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourcePosLookupUser);
          LODWORD(v22) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 411, ASSERT_TYPE_ASSERT, "( size ) <= ( Mem_HunkUser_GetUsedSize( pScrParserGlob->sourcePosLookupUser ) )", "size <= Mem_HunkUser_GetUsedSize( pScrParserGlob->sourcePosLookupUser )\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
      }
      opcodePos = scrContext->m_compilePub.opcodePos;
      if ( scrContext->m_parserGlob.currentCodePos == opcodePos )
      {
        if ( !scrContext->m_parserGlob.currentSourcePosCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 416, ASSERT_TYPE_ASSERT, "( pScrParserGlob->currentSourcePosCount )", (const char *)&queryFormat, "pScrParserGlob->currentSourcePosCount") )
          __debugbreak();
        v12 = &scrContext->m_parserGlob.opcodeLookup[--scrContext->m_parserGlob.opcodeLookupLen];
        if ( v12->sourcePosIndex + scrContext->m_parserGlob.currentSourcePosCount != scrContext->m_parserGlob.sourcePosLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 422, ASSERT_TYPE_ASSERT, "( opcodeLookup->sourcePosIndex + pScrParserGlob->currentSourcePosCount == pScrParserGlob->sourcePosLookupLen )", (const char *)&queryFormat, "opcodeLookup->sourcePosIndex + pScrParserGlob->currentSourcePosCount == pScrParserGlob->sourcePosLookupLen") )
          __debugbreak();
        if ( OpcodeLookup::GetCodePos(v12, scrContext) != (const char *)scrContext->m_parserGlob.currentCodePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 423, ASSERT_TYPE_ASSERT, "( opcodeLookup->GetCodePos( scrContext ) == reinterpret_cast<const char *>( pScrParserGlob->currentCodePos ) )", (const char *)&queryFormat, "opcodeLookup->GetCodePos( scrContext ) == reinterpret_cast<const char *>( pScrParserGlob->currentCodePos )") )
          __debugbreak();
      }
      else
      {
        scrContext->m_parserGlob.currentCodePos = opcodePos;
        v13 = 0;
        opcodeLookupLen = scrContext->m_parserGlob.opcodeLookupLen;
        scrContext->m_parserGlob.currentSourcePosCount = 0;
        v12 = &scrContext->m_parserGlob.opcodeLookup[opcodeLookupLen];
        v12->sourcePosIndex = scrContext->m_parserGlob.sourcePosLookupLen;
        currentCodePos = scrContext->m_parserGlob.currentCodePos;
        if ( currentCodePos )
          v16 = truncate_cast<int,__int64>((__int64)&currentCodePos[-scrContext->m_parserBasePointer]);
        else
          v16 = 0;
        v12->codePosI = v16;
        v12->cumulOffset = Scr_GetCumulOffset(scrContext);
        PauseLocalVars = Scr_GetPauseLocalVars(scrContext);
        if ( PauseLocalVars )
          v13 = truncate_cast<int,__int64>((__int64)PauseLocalVars - scrContext->m_parserBasePointer);
        v12->localVarsI = v13;
      }
      v18 = v12->sourcePosIndex + scrContext->m_parserGlob.currentSourcePosCount;
      sourcePosLookup = scrContext->m_parserGlob.sourcePosLookup;
      *(_DWORD *)&sourcePosLookup[v18] &= 0xFF000000;
      *(_DWORD *)&sourcePosLookup[v18] |= sourcePos & 0xFFFFFF;
      v20 = &sourcePosLookup[v18];
      if ( sourcePos == -1 )
      {
        if ( scrContext->m_parserGlob.delayedSourceIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 447, ASSERT_TYPE_ASSERT, "( pScrParserGlob->delayedSourceIndex == -1 )", (const char *)&queryFormat, "pScrParserGlob->delayedSourceIndex == -1") )
          __debugbreak();
        if ( (v6 & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 448, ASSERT_TYPE_ASSERT, "( type & SOURCE_TYPE_BREAKPOINT )", (const char *)&queryFormat, "type & SOURCE_TYPE_BREAKPOINT") )
          __debugbreak();
        scrContext->m_parserGlob.delayedSourceIndex = v18;
      }
      else if ( sourcePos == -2 )
      {
        scrContext->m_parserGlob.threadStartSourceIndex = v18;
      }
      else
      {
        delayedSourceIndex = scrContext->m_parserGlob.delayedSourceIndex;
        if ( (int)delayedSourceIndex >= 0 && (v6 & 1) != 0 )
        {
          scrContext->m_parserGlob.sourcePosLookup[delayedSourceIndex] = (SourceLookup)(sourcePos & 0xFFFFFF | *(_DWORD *)&scrContext->m_parserGlob.sourcePosLookup[delayedSourceIndex] & 0xFF000000);
          scrContext->m_parserGlob.delayedSourceIndex = -1;
        }
      }
      *((_BYTE *)v20 + 3) |= v6;
      v12->sourcePosCount = ++scrContext->m_parserGlob.currentSourcePosCount;
      ++scrContext->m_parserGlob.opcodeLookupLen;
      ++scrContext->m_parserGlob.sourcePosLookupLen;
    }
  }
}

/*
==============
AddThreadStartOpcodePos
==============
*/
void AddThreadStartOpcodePos(scrContext_t *scrContext, unsigned int sourcePos)
{
  SourceLookup *v4; 
  unsigned int v5; 

  if ( scrContext->m_varPub.developer )
  {
    if ( scrContext->m_compilePub.developer_statement == 2 )
    {
      if ( scrContext->m_varPub.developer_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 529, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.developer_script )", (const char *)&queryFormat, "!scrContext.m_varPub.developer_script") )
        __debugbreak();
    }
    else
    {
      if ( scrContext->m_parserGlob.threadStartSourceIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 533, ASSERT_TYPE_ASSERT, "( scrContext.m_parserGlob.threadStartSourceIndex >= 0 )", (const char *)&queryFormat, "scrContext.m_parserGlob.threadStartSourceIndex >= 0") )
        __debugbreak();
      v4 = &scrContext->m_parserGlob.sourcePosLookup[scrContext->m_parserGlob.threadStartSourceIndex];
      v5 = *(_DWORD *)v4 ^ (sourcePos ^ *(_DWORD *)v4) & 0xFFFFFF;
      *v4 = (SourceLookup)v5;
      if ( HIBYTE(v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 536, ASSERT_TYPE_ASSERT, "( !sourcePosLookup->type )", (const char *)&queryFormat, "!sourcePosLookup->type") )
        __debugbreak();
      *((_BYTE *)v4 + 3) = 8;
      scrContext->m_parserGlob.threadStartSourceIndex = -1;
    }
  }
}

/*
==============
CompileError2
==============
*/
void CompileError2(scrContext_t *scrContext, const char *codePos, const char *msg, ...)
{
  ScriptCodePos v5; 
  char dest[1024]; 
  char line[1024]; 
  va_list va; 

  va_start(va, msg);
  Com_vsprintf_truncate(dest, 0x400ui64, 0x400ui64, msg, va);
  if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4360, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate", 0i64) )
    __debugbreak();
  if ( !Scr_IsInOpcodeMemory(scrContext, codePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4361, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
    __debugbreak();
  if ( scrStringDebugGlob )
    scrStringDebugGlob->ignoreChecks = 1;
  scrContext->m_varDebugPub.m_Inited = 0;
  Com_PrintError(23, "\n");
  Com_PrintError(23, "******* script compile error *******\n");
  Com_PrintError(23, "%s: ", dest);
  v5.m_scriptPos = ScriptCodePos::CreateScriptPos(codePos).m_scriptPos;
  Scr_PrintPrevCodePos(scrContext, 23, v5, 0, 1);
  Com_PrintError(23, "************************************\n");
  Scr_GetTextSourcePos(scrContext, scrContext->m_parserPub.sourceBuf, codePos, line);
  Com_Error_impl(ERR_SCRIPT_DROP, (const ObfuscateErrorText)&stru_1440A1BC0, 814i64, dest, line);
}

/*
==============
CompileError2_WithSourceLine
==============
*/
void CompileError2_WithSourceLine(scrContext_t *scrContext, const char *codePos, const char *msg)
{
  char line[1024]; 
  char dest[1024]; 

  Scr_GetTextSourcePos(scrContext, scrContext->m_parserPub.sourceBuf, codePos, line);
  Com_sprintf(dest, 0x400ui64, "%s -> %s", msg, line);
  CompileError2(scrContext, codePos, dest);
}

/*
==============
CompileError
==============
*/
void CompileError(scrContext_t *scrContext, unsigned int sourcePos, const char *msg, ...)
{
  bool v5; 
  int col; 
  char *startLine; 
  char dest[1024]; 
  char line[1024]; 
  va_list va; 

  va_start(va, msg);
  Com_vsprintf_truncate(dest, 0x400ui64, 0x400ui64, msg, va);
  v5 = !scrContext->m_varPub.evaluate;
  scrContext->m_compilePub.pauseBlock = NULL;
  if ( v5 )
  {
    if ( scrStringDebugGlob )
      scrStringDebugGlob->ignoreChecks = 1;
    scrContext->m_varDebugPub.m_Inited = 0;
    Scr_ShutdownAllocNode(scrContext);
    Com_PrintError(23, "\n");
    Com_PrintError(23, "******* script compile error *******\n");
    if ( scrContext->m_varPub.developer && scrContext->m_parserPub.sourceBuf )
    {
      Com_PrintError(23, "%s: ", dest);
      Scr_PrintSourcePos(scrContext, 23, scrContext->m_parserPub.scriptExtFilename, scrContext->m_parserPub.sourceBuf, sourcePos, 0, 1);
      Scr_GetLineNumInternal(scrContext->m_parserPub.sourceBuf, sourcePos, (const char **)&startLine, &col);
      Scr_CopyFormattedLine(line, startLine);
    }
    else
    {
      Com_PrintError(23, "%s\n", dest);
      line[0] = 0;
    }
    Com_PrintError(23, "************************************\n");
    Com_Error_impl(ERR_SCRIPT_DROP, (const ObfuscateErrorText)&stru_1440A1BC0, 813i64, dest, line);
  }
  else if ( !scrContext->m_varPub.error_message )
  {
    scrContext->m_varPub.error_message = j_va((const char *)&queryFormat, dest);
  }
}

/*
==============
CompileErrorWithSourceLine
==============
*/
void CompileErrorWithSourceLine(scrContext_t *scrContext, unsigned int sourcePos, const char *msg, ...)
{
  int col; 
  char *startLine; 
  char line[1024]; 
  char dest[1024]; 

  Scr_GetLineNumInternal(scrContext->m_parserPub.sourceBuf, sourcePos, (const char **)&startLine, &col);
  Scr_CopyFormattedLine(line, startLine);
  Com_sprintf(dest, 0x400ui64, "%s -> %s", msg, line);
  CompileError(scrContext, sourcePos, dest);
}

/*
==============
DumpLoadedScripts
==============
*/
void DumpLoadedScripts(scrContext_t *scrContext)
{
  unsigned int i; 
  ChildVariableValue *v3; 
  const char *v4; 

  if ( !scrContext->m_compilePub.script_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 348, ASSERT_TYPE_ASSERT, "(scrContext.m_compilePub.script_loading)", (const char *)&queryFormat, "scrContext.m_compilePub.script_loading") )
    __debugbreak();
  if ( scrContext->m_varPub.developer )
  {
    Com_Printf(24, "** Scripts currently loaded: **\n");
    for ( i = FindFirstSibling(scrContext, scrContext->m_compilePub.loadedscripts); i; i = FindNextSibling(scrContext, i) )
    {
      v3 = &scrContext->m_varGlob.childVariableValue[i];
      if ( v3->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
        __debugbreak();
      v4 = SL_ConvertToString((scr_string_t)(((v3->k.match & 0x3FFF) << 10) + (*(_WORD *)&v3->tn >> 6)));
      Com_Printf(24, "%s\n", v4);
    }
  }
}

/*
==============
OpcodeLookup::GetCodePos
==============
*/
const char *OpcodeLookup::GetCodePos(OpcodeLookup *this, const scrContext_t *scrContext)
{
  __int64 codePosI; 

  codePosI = this->codePosI;
  if ( (_DWORD)codePosI )
    return (const char *)(scrContext->m_parserBasePointer + codePosI);
  else
    return 0i64;
}

/*
==============
OpcodeLookup::GetLocalVars
==============
*/
unsigned __int16 *OpcodeLookup::GetLocalVars(OpcodeLookup *this, const scrContext_t *scrContext)
{
  __int64 localVarsI; 

  localVarsI = this->localVarsI;
  if ( (_DWORD)localVarsI )
    return (unsigned __int16 *)(scrContext->m_parserBasePointer + localVarsI);
  else
    return 0i64;
}

/*
==============
RemoveOpcodePos
==============
*/
void RemoveOpcodePos(scrContext_t *scrContext)
{
  __int64 opcodeLookupLen; 
  OpcodeLookup *v3; 
  unsigned int currentSourcePosCount; 

  if ( scrContext->m_varPub.developer )
  {
    if ( scrContext->m_compilePub.developer_statement == 2 )
    {
      if ( scrContext->m_varPub.developer_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 487, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.developer_script )", (const char *)&queryFormat, "!scrContext.m_varPub.developer_script") )
        __debugbreak();
    }
    else
    {
      if ( !scrContext->m_parserGlob.opcodeLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 491, ASSERT_TYPE_ASSERT, "( pScrParserGlob->opcodeLookup )", (const char *)&queryFormat, "pScrParserGlob->opcodeLookup") )
        __debugbreak();
      if ( !scrContext->m_parserGlob.sourcePosLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 492, ASSERT_TYPE_ASSERT, "( pScrParserGlob->sourcePosLookup )", (const char *)&queryFormat, "pScrParserGlob->sourcePosLookup") )
        __debugbreak();
      if ( !scrContext->m_compilePub.opcodePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 493, ASSERT_TYPE_ASSERT, "( pScrCompilePub->opcodePos )", (const char *)&queryFormat, "pScrCompilePub->opcodePos") )
        __debugbreak();
      if ( !scrContext->m_parserGlob.sourcePosLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 495, ASSERT_TYPE_ASSERT, "( pScrParserGlob->sourcePosLookupLen )", (const char *)&queryFormat, "pScrParserGlob->sourcePosLookupLen") )
        __debugbreak();
      --scrContext->m_parserGlob.sourcePosLookupLen;
      if ( !scrContext->m_parserGlob.opcodeLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 498, ASSERT_TYPE_ASSERT, "( pScrParserGlob->opcodeLookupLen )", (const char *)&queryFormat, "pScrParserGlob->opcodeLookupLen") )
        __debugbreak();
      --scrContext->m_parserGlob.opcodeLookupLen;
      if ( !scrContext->m_parserGlob.currentSourcePosCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 501, ASSERT_TYPE_ASSERT, "( pScrParserGlob->currentSourcePosCount )", (const char *)&queryFormat, "pScrParserGlob->currentSourcePosCount") )
        __debugbreak();
      opcodeLookupLen = scrContext->m_parserGlob.opcodeLookupLen;
      --scrContext->m_parserGlob.currentSourcePosCount;
      v3 = &scrContext->m_parserGlob.opcodeLookup[opcodeLookupLen];
      if ( scrContext->m_parserGlob.currentCodePos != scrContext->m_compilePub.opcodePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 506, ASSERT_TYPE_ASSERT, "( pScrParserGlob->currentCodePos == pScrCompilePub->opcodePos )", (const char *)&queryFormat, "pScrParserGlob->currentCodePos == pScrCompilePub->opcodePos") )
        __debugbreak();
      if ( scrContext->m_parserGlob.currentSourcePosCount + v3->sourcePosIndex != scrContext->m_parserGlob.sourcePosLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 507, ASSERT_TYPE_ASSERT, "( opcodeLookup->sourcePosIndex + pScrParserGlob->currentSourcePosCount == pScrParserGlob->sourcePosLookupLen )", (const char *)&queryFormat, "opcodeLookup->sourcePosIndex + pScrParserGlob->currentSourcePosCount == pScrParserGlob->sourcePosLookupLen") )
        __debugbreak();
      if ( OpcodeLookup::GetCodePos(v3, scrContext) != (const char *)scrContext->m_parserGlob.currentCodePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 508, ASSERT_TYPE_ASSERT, "( opcodeLookup->GetCodePos( scrContext ) == reinterpret_cast<const char *>( pScrParserGlob->currentCodePos ) )", (const char *)&queryFormat, "opcodeLookup->GetCodePos( scrContext ) == reinterpret_cast<const char *>( pScrParserGlob->currentCodePos )") )
        __debugbreak();
      currentSourcePosCount = scrContext->m_parserGlob.currentSourcePosCount;
      if ( !currentSourcePosCount )
      {
        LOWORD(currentSourcePosCount) = 0;
        scrContext->m_parserGlob.currentCodePos = NULL;
      }
      v3->sourcePosCount = currentSourcePosCount;
    }
  }
}

/*
==============
Scr_AddProfileTime
==============
*/
void Scr_AddProfileTime(const scrContext_t *scrContext, ScriptCodePos scriptCodePos, unsigned __int64 time, unsigned __int64 builtInTime)
{
  const char *ScriptPos; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 codePosI; 
  unsigned __int64 v13; 
  OpcodeLookup *opcodeLookup; 
  __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  OpcodeLookup *v19; 
  __int64 v20; 
  OpcodeLookup *v21; 
  unsigned __int64 v22; 
  ScriptCodePos v23; 

  v23.m_scriptPos = scriptCodePos.m_scriptPos;
  if ( builtInTime > time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2550, ASSERT_TYPE_ASSERT, "( builtInTime ) <= ( time )", "%s <= %s\n\t%lli, %lli", "builtInTime", "time", builtInTime, time) )
    __debugbreak();
  if ( ScriptCodePos::IsScriptPos(&v23) && scrContext->m_parserGlob.opcodeLookupLen )
  {
    ScriptPos = ScriptCodePos::GetScriptPos(&v23, scrContext);
    if ( !Scr_IsInOpcodeMemory(scrContext, ScriptPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2564, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
      __debugbreak();
    if ( !scrContext->m_parserGlob.opcodeLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2565, ASSERT_TYPE_ASSERT, "( pScrParserGlob->opcodeLookup )", (const char *)&queryFormat, "pScrParserGlob->opcodeLookup") )
      __debugbreak();
    LODWORD(v8) = 0;
    v9 = scrContext->m_parserGlob.opcodeLookupLen - 1;
    do
    {
      v10 = (v9 + (unsigned int)v8) >> 1;
      v11 = v10;
      codePosI = scrContext->m_parserGlob.opcodeLookup[v10].codePosI;
      if ( (_DWORD)codePosI )
        v13 = scrContext->m_parserBasePointer + codePosI;
      else
        v13 = 0i64;
      if ( (unsigned __int64)ScriptPos <= v13 )
      {
        v9 = v10 - 1;
      }
      else
      {
        v8 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v8 >= scrContext->m_parserGlob.opcodeLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2584, ASSERT_TYPE_ASSERT, "( low < pScrParserGlob->opcodeLookupLen )", (const char *)&queryFormat, "low < pScrParserGlob->opcodeLookupLen") )
          __debugbreak();
        opcodeLookup = scrContext->m_parserGlob.opcodeLookup;
        v15 = opcodeLookup[v8].codePosI;
        if ( (_DWORD)v15 )
          v16 = scrContext->m_parserBasePointer + v15;
        else
          v16 = 0i64;
        if ( (unsigned __int64)ScriptPos <= v16 )
        {
          v17 = 0x7FFFFFFi64;
          v18 = 0x7FFFFFFi64;
          if ( (time >> 4) + (*(_QWORD *)&opcodeLookup[v11] & 0x7FFFFFFi64) < 0x7FFFFFF )
            v18 = (time >> 4) + (*(_QWORD *)&opcodeLookup[v11] & 0x7FFFFFFi64);
          *(_QWORD *)&opcodeLookup[v11] ^= (*(_QWORD *)&opcodeLookup[v11] ^ v18) & 0x7FFFFFF;
          v19 = scrContext->m_parserGlob.opcodeLookup;
          if ( (builtInTime >> 4) + ((*(_QWORD *)&v19[v11] >> 27) & 0x7FFFFFFi64) < 0x7FFFFFF )
            v17 = (builtInTime >> 4) + ((*(_QWORD *)&v19[v11] >> 27) & 0x7FFFFFFi64);
          v20 = 1023i64;
          *(_QWORD *)&v19[v11] ^= (*(_QWORD *)&v19[v11] ^ (v17 << 27)) & 0x3FFFFFF8000000i64;
          v21 = scrContext->m_parserGlob.opcodeLookup;
          v22 = (unsigned __int64)v21[v11];
          if ( (v22 >> 54) + 1 < 0x3FF )
            v20 = (*(_QWORD *)&v21[v11] >> 54) + 1i64;
          *(_QWORD *)&v21[v11] = v22 & 0x3FFFFFFFFFFFFFi64 | (v20 << 54);
          return;
        }
      }
    }
    while ( (unsigned int)v8 <= v9 );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2599, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
      __debugbreak();
  }
}

/*
==============
Scr_AddSourceBuffer
==============
*/
char *Scr_AddSourceBuffer(scrContext_t *scrContext, const char *extFilename, const char *codePos, bool archive, const ScrThreadMode threadMode, int prevIndex)
{
  SourceBufferInfo *v10; 
  char *sourceBuf; 
  int len; 
  SaveSourceBufferInfo *saveSourceBufferLookup; 
  char *v15; 
  int v17; 
  char *v18; 
  char *v19; 
  _OWORD *v20; 
  __int64 v21; 
  signed __int64 v43; 
  __int64 v44; 
  char v45; 

  if ( !archive || !scrContext->m_parserGlob.saveSourceBufferLookup )
    return Scr_ReadFile(scrContext, extFilename, codePos, archive, threadMode, prevIndex);
  if ( prevIndex <= -1 )
  {
    if ( !scrContext->m_parserGlob.saveSourceBufferLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1700, ASSERT_TYPE_ASSERT, "( scrContext.m_parserGlob.saveSourceBufferLookupLen > 0 )", (const char *)&queryFormat, "scrContext.m_parserGlob.saveSourceBufferLookupLen > 0") )
      __debugbreak();
    --scrContext->m_parserGlob.saveSourceBufferLookupLen;
    saveSourceBufferLookup = scrContext->m_parserGlob.saveSourceBufferLookup;
    sourceBuf = saveSourceBufferLookup[scrContext->m_parserGlob.saveSourceBufferLookupLen].sourceBuf;
    len = saveSourceBufferLookup[scrContext->m_parserGlob.saveSourceBufferLookupLen].len;
  }
  else
  {
    if ( prevIndex >= scrContext->m_parserPub.sourceBufferLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1692, ASSERT_TYPE_ASSERT, "(unsigned)( prevIndex ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "prevIndex doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", prevIndex, scrContext->m_parserPub.sourceBufferLookupLen) )
      __debugbreak();
    v10 = &scrContext->m_parserPub.sourceBufferLookup[prevIndex];
    sourceBuf = (char *)v10->sourceBuf;
    len = v10->len;
  }
  if ( len < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1707, ASSERT_TYPE_ASSERT, "( len >= -1 )", (const char *)&queryFormat, "len >= -1") )
    __debugbreak();
  if ( len >= 0 )
  {
    v15 = (char *)Scr_Mem_TempAlloc(scrContext, len + 1, "Scr_AddSourceBuffer1");
    v17 = 0;
    v18 = v15;
    v19 = sourceBuf;
    v20 = v15;
    if ( len > 0 )
    {
      if ( (unsigned int)len >= 0x40 )
      {
        v21 = len - 1;
        if ( v15 > &sourceBuf[v21] || &v15[v21] < sourceBuf )
        {
          __asm { vpxor   xmm4, xmm4, xmm4 }
          do
          {
            __asm
            {
              vpcmpeqb xmm0, xmm4, xmmword ptr [r10]
              vpandn  xmm2, xmm0, xmm6
              vpand   xmm0, xmm2, xmmword ptr [r10]
              vpandn  xmm1, xmm2, xmm5
              vpor    xmm2, xmm1, xmm0
              vpcmpeqb xmm0, xmm4, xmmword ptr [r10+10h]
            }
            *v20 = _XMM2;
            __asm
            {
              vpandn  xmm2, xmm0, xmm6
              vpand   xmm0, xmm2, xmmword ptr [r10+10h]
              vpandn  xmm1, xmm2, xmm5
              vpor    xmm2, xmm1, xmm0
              vpcmpeqb xmm0, xmm4, xmmword ptr [r10+20h]
            }
            v20[1] = _XMM2;
            __asm
            {
              vpandn  xmm2, xmm0, xmm6
              vpand   xmm0, xmm2, xmmword ptr [r10+20h]
              vpandn  xmm1, xmm2, xmm5
              vpor    xmm2, xmm1, xmm0
            }
            v20[2] = _XMM2;
            __asm
            {
              vpcmpeqb xmm0, xmm4, xmm3
              vpandn  xmm2, xmm0, xmm6
              vpandn  xmm1, xmm2, xmm5
              vpand   xmm0, xmm2, xmm3
              vpor    xmm2, xmm1, xmm0
            }
            v20[3] = _XMM2;
            v20 += 4;
            v19 += 64;
            v17 += 64;
          }
          while ( v17 < len - (len & 0x3F) );
        }
      }
      if ( v17 < len )
      {
        v43 = v19 - (char *)v20;
        v44 = (unsigned int)(len - v17);
        do
        {
          v45 = 10;
          if ( *((_BYTE *)v20 + v43) )
            v45 = *((_BYTE *)v20 + v43);
          *(_BYTE *)v20 = v45;
          v20 = (_OWORD *)((char *)v20 + 1);
          --v44;
        }
        while ( v44 );
      }
    }
    *(_BYTE *)v20 = 0;
    Scr_AddSourceBufferInternal(scrContext, extFilename, codePos, sourceBuf, len, 0, archive, 0, prevIndex);
    return v18;
  }
  else
  {
    Scr_AddSourceBufferInternal(scrContext, extFilename, codePos, NULL, len, 1, archive, 0, prevIndex);
    return 0i64;
  }
}

/*
==============
Scr_AddSourceBufferInternal
==============
*/
void Scr_AddSourceBufferInternal(scrContext_t *scrContext, const char *extFilename, const char *codePos, char *sourceBuf, int len, bool doEolFixup, bool archive, bool newBuffer, int prevIndex)
{
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  __int64 v18; 
  signed __int64 v19; 
  char v20; 
  __int64 v21; 
  char v22; 
  char *v23; 
  char *v24; 
  signed __int64 v25; 
  char v26; 
  char *v27; 
  __int64 v28; 
  char v29; 
  SourceBufferInfo *v30; 
  unsigned int v31; 
  void *v32; 
  __int64 sourceBufferLookupLen; 
  __int64 v34; 
  __int64 v35; 
  char *buf; 

  if ( !scrContext->m_parserPub.sourceBufferLookup )
  {
    scrContext->m_parserPub.sourceBuf = NULL;
    return;
  }
  v12 = len;
  if ( len < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1210, ASSERT_TYPE_ASSERT, "( ( len >= -1 ) )", "%s\n\t( len ) = %i", "( len >= -1 )", len) )
    __debugbreak();
  if ( len < 0 && sourceBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1211, ASSERT_TYPE_ASSERT, "( (len >= 0) || !sourceBuf )", (const char *)&queryFormat, "(len >= 0) || !sourceBuf") )
    __debugbreak();
  v13 = -1i64;
  do
    ++v13;
  while ( extFilename[v13] );
  v14 = len + 1;
  v15 = v13 + 1;
  v16 = len + 1;
  if ( !newBuffer )
    v16 = 0;
  v17 = v15 + v16;
  if ( prevIndex < 0 )
  {
    v23 = (char *)Scr_Mem_DebugAlloc(scrContext, v17, "Scr_AddSourceBufferInternal");
    buf = v23;
    v25 = v23 - extFilename;
    do
    {
      v26 = *extFilename;
      extFilename[v25] = *extFilename;
      ++extFilename;
    }
    while ( v26 );
  }
  else
  {
    v18 = 0x7FFFFFFFi64;
    buf = scrContext->m_parserPub.sourceBufferLookup[prevIndex].buf;
    if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !extFilename && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v19 = buf - extFilename;
    do
    {
      v20 = extFilename[v19];
      v21 = v18;
      v22 = *extFilename++;
      --v18;
      if ( !v21 )
        break;
      if ( v20 != v22 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1220, ASSERT_TYPE_ASSERT, "( !I_strcmp( buf, extFilename ) )", (const char *)&queryFormat, "!I_strcmp( buf, extFilename )") )
          __debugbreak();
        break;
      }
    }
    while ( v20 );
    v23 = buf;
    v12 = len;
  }
  if ( !sourceBuf )
  {
    v24 = NULL;
LABEL_36:
    if ( newBuffer )
    {
      v27 = v24;
      if ( doEolFixup )
      {
        if ( v12 >= 0 )
        {
          v28 = v14;
          do
          {
            v29 = *sourceBuf++;
            if ( v29 == 10 || v29 == 13 && *sourceBuf != 10 )
              v29 = 0;
            *v27++ = v29;
            --v28;
          }
          while ( v28 );
        }
      }
      else
      {
        memcpy_0(v24, sourceBuf, v14);
      }
    }
    goto LABEL_47;
  }
  if ( newBuffer )
  {
    v24 = &v23[v15];
    goto LABEL_36;
  }
  v24 = sourceBuf;
LABEL_47:
  if ( prevIndex < 0 )
  {
    if ( !scrContext->m_parserPub.sourceBufferLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1146, ASSERT_TYPE_ASSERT, "( pScrParserPub->sourceBufferLookup )", (const char *)&queryFormat, "pScrParserPub->sourceBufferLookup") )
      __debugbreak();
    v31 = 120 * (scrContext->m_parserPub.sourceBufferLookupLen + 1);
    if ( v31 > Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferLookupUser) )
    {
      v32 = Mem_HunkUser_AllocInternal(scrContext->m_parserGlob.sourceBufferLookupUser, 0x10000ui64, 1ui64, "Scr_GetNewSourceBuffer");
      memset_0(v32, 0, 0x10000ui64);
      if ( v31 > Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferLookupUser) )
      {
        LODWORD(v35) = Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferLookupUser);
        LODWORD(v34) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1154, ASSERT_TYPE_ASSERT, "( size ) <= ( Mem_HunkUser_GetUsedSize( scrContext.m_parserGlob.sourceBufferLookupUser ) )", "size <= Mem_HunkUser_GetUsedSize( scrContext.m_parserGlob.sourceBufferLookupUser )\n\t%i, %i", v34, v35) )
          __debugbreak();
      }
    }
    sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
    scrContext->m_parserPub.sourceBufferLookupLen = sourceBufferLookupLen + 1;
    v30 = &scrContext->m_parserPub.sourceBufferLookup[sourceBufferLookupLen];
    v30->codePos = codePos;
    v30->buf = buf;
    v30->archive = archive;
    v30->gshFile = 0;
    v30->gshFile = prevIndex < -1;
    v30->sourceBuf = v24;
    v30->len = v12;
    v30->sortedIndex = -1;
  }
  else
  {
    v30 = &scrContext->m_parserPub.sourceBufferLookup[prevIndex];
  }
  *(_QWORD *)&v30->functionLookupLen = 0i64;
  if ( v24 )
    scrContext->m_parserPub.sourceBuf = v24;
}

/*
==============
Scr_CalcAnimscriptProfile
==============
*/
void Scr_CalcAnimscriptProfile(const scrContext_t *scrContext, int *total, int *totalNonBuiltIn)
{
  __int64 i; 
  OpcodeLookup *opcodeLookup; 
  unsigned __int64 v8; 
  int v9; 
  __int64 v10; 
  __int64 codePosI; 
  __int64 v12; 
  char *v13; 
  const char *programBuffer; 
  bool v15; 
  unsigned int SourceBuffer; 

  *total = 0;
  *totalNonBuiltIn = 0;
  if ( scrContext->m_varPub.developer )
  {
    for ( i = 0i64; (unsigned int)i < scrContext->m_parserGlob.opcodeLookupLen; i = (unsigned int)(i + 1) )
    {
      opcodeLookup = scrContext->m_parserGlob.opcodeLookup;
      v8 = (unsigned __int64)opcodeLookup[i];
      v9 = (16 * v8) & 0x7FFFFFF0;
      if ( v8 >> 54 )
      {
        *(_QWORD *)&opcodeLookup[i] = 0i64;
        v10 = (v8 >> 23) & 0x7FFFFFF0;
        codePosI = scrContext->m_parserGlob.opcodeLookup[i].codePosI;
        if ( (_DWORD)codePosI )
          v12 = scrContext->m_parserBasePointer + codePosI;
        else
          v12 = 0i64;
        v13 = (char *)(v12 + 1);
        if ( (v12 == -1 || v13 == &g_EndPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4009, ASSERT_TYPE_ASSERT, "( codePos && codePos != &g_EndPos )", (const char *)&queryFormat, "codePos && codePos != &g_EndPos") )
          __debugbreak();
        programBuffer = scrContext->m_varPub.programBuffer;
        v15 = Scr_IsInOpcodeMemory(scrContext, v13) != 0;
        if ( (!programBuffer || !v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4010, ASSERT_TYPE_ASSERT, "( Scr_HasSourceBuffer( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_HasSourceBuffer( scrContext, codePos )") )
          __debugbreak();
        SourceBuffer = Scr_GetSourceBuffer(scrContext, v13 - 1);
        if ( !strncmp(scrContext->m_parserPub.sourceBufferLookup[SourceBuffer].buf, "animscript", 0xAui64) )
        {
          *total += v9;
          *totalNonBuiltIn += v9 - v10;
        }
      }
      else if ( v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4000, ASSERT_TYPE_ASSERT, "( !pScrParserGlob->opcodeLookup[i].GetProfileTime() )", (const char *)&queryFormat, "!pScrParserGlob->opcodeLookup[i].GetProfileTime()") )
          __debugbreak();
      }
    }
  }
}

/*
==============
Scr_CalcScriptFileProfile
==============
*/
void Scr_CalcScriptFileProfile(scrContext_t *scrContext)
{
  unsigned int v2; 
  ProfileScript *Profile; 
  unsigned __int64 srcTotal; 
  __int64 v5; 
  OpcodeLookup *opcodeLookup; 
  unsigned __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 codePosI; 
  __int64 v11; 
  char *v12; 
  const char *programBuffer; 
  bool v14; 
  SourceBufferInfo *v15; 
  int avgTime; 
  __int64 sourceBufferLookupLen; 
  unsigned int v18; 
  __int64 v28; 
  int *v32; 
  int i; 
  int _First[8]; 
  __m256i v35; 
  __m256i v36; 
  __m256i v37; 

  if ( scrContext->m_varPub.developer )
  {
    v2 = 0;
    Profile = ScriptContext_GetProfile(scrContext);
    srcTotal = 0i64;
    Profile->srcTotal = 0i64;
    v5 = 0i64;
    for ( i = 0; (unsigned int)v5 < scrContext->m_parserGlob.opcodeLookupLen; i = v5 )
    {
      opcodeLookup = scrContext->m_parserGlob.opcodeLookup;
      v7 = (unsigned __int64)opcodeLookup[v5];
      v8 = (16 * v7) & 0x7FFFFFF0;
      if ( v7 >> 54 )
      {
        *(_QWORD *)&opcodeLookup[v5] = 0i64;
        v9 = (v7 >> 23) & 0x7FFFFFF0;
        codePosI = scrContext->m_parserGlob.opcodeLookup[v5].codePosI;
        if ( (_DWORD)codePosI )
          v11 = scrContext->m_parserBasePointer + codePosI;
        else
          v11 = 0i64;
        v12 = (char *)(v11 + 1);
        if ( (v11 == -1 || v12 == &g_EndPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2662, ASSERT_TYPE_ASSERT, "( codePos && codePos != &g_EndPos )", (const char *)&queryFormat, "codePos && codePos != &g_EndPos") )
          __debugbreak();
        programBuffer = scrContext->m_varPub.programBuffer;
        v14 = Scr_IsInOpcodeMemory(scrContext, v12) != 0;
        if ( (!programBuffer || !v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2663, ASSERT_TYPE_ASSERT, "( Scr_HasSourceBuffer( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_HasSourceBuffer( scrContext, codePos )") )
          __debugbreak();
        v15 = &scrContext->m_parserPub.sourceBufferLookup[Scr_GetSourceBuffer(scrContext, v12 - 1)];
        avgTime = v15->avgTime;
        v15->time = v8;
        v15->avgTime = (v8 + 4 * avgTime) / 5;
        if ( v8 > v15->maxTime )
          v15->maxTime = v8;
        v15->totalTime = (float)((float)v8 * *((float *)Sys_GetValue(0) + 8915)) + v15->totalTime;
        v15->totalBuiltIn = (float)((float)(int)v9 * *((float *)Sys_GetValue(0) + 8915)) + v15->totalBuiltIn;
        Profile->srcTotal += (unsigned int)v8;
      }
      else if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2653, ASSERT_TYPE_ASSERT, "( !pScrParserGlob->opcodeLookup[i].GetProfileTime() )", (const char *)&queryFormat, "!pScrParserGlob->opcodeLookup[i].GetProfileTime()") )
      {
        __debugbreak();
      }
      srcTotal = Profile->srcTotal;
      v5 = (unsigned int)(i + 1);
    }
    Profile->srcAvgTime = (srcTotal + 4 * Profile->srcAvgTime) / 5;
    if ( srcTotal > Profile->srcMaxTime )
      Profile->srcMaxTime = srcTotal;
    if ( scrContext->m_parserPub.sourceBufferLookupLen >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2683, ASSERT_TYPE_ASSERT, "(pScrParserPub->sourceBufferLookupLen < MAX_SCRIPT_FILES)", (const char *)&queryFormat, "pScrParserPub->sourceBufferLookupLen < MAX_SCRIPT_FILES") )
      __debugbreak();
    sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
    if ( (_DWORD)sourceBufferLookupLen )
    {
      if ( (unsigned int)sourceBufferLookupLen >= 0x10 )
      {
        v18 = 8;
        do
        {
          _XMM0 = v2;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v2] = _XMM1;
          v2 += 16;
          _XMM0 = v18 - 4;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v18 - 4] = _XMM1;
          _XMM0 = v18;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v18] = _XMM1;
          v28 = v18 + 4;
          v18 += 16;
          _XMM0 = (unsigned int)v28;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v28] = _XMM1;
        }
        while ( v2 < ((unsigned int)sourceBufferLookupLen & 0xFFFFFFF0) );
      }
      if ( v2 < (unsigned int)sourceBufferLookupLen )
      {
        v32 = &_First[v2];
        do
          *v32++ = v2++;
        while ( v2 < (unsigned int)sourceBufferLookupLen );
      }
    }
    if ( scrContext->m_Instance )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2700, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_CalcScriptFileProfile: Invalid script instance.") )
        __debugbreak();
    }
    else
    {
      std::_Sort_unchecked<int *,bool (*)(int,int)>(_First, &_First[sourceBufferLookupLen], sourceBufferLookupLen, Scr_CompareScriptSourceProfileTimes_Server);
    }
    *(__m256i *)Profile->scriptSrcBufferIndex = *(__m256i *)_First;
    *(__m256i *)&Profile->scriptSrcBufferIndex[8] = v35;
    *(__m256i *)&Profile->scriptSrcBufferIndex[16] = v36;
    *(__m256i *)&Profile->scriptSrcBufferIndex[24] = v37;
  }
}

/*
==============
Scr_CompareProfileTimes
==============
*/
bool Scr_CompareProfileTimes(const OpcodeLookup *opcodeLookup1, const OpcodeLookup *opcodeLookup2)
{
  return ((16 * (unsigned int)*(_QWORD *)opcodeLookup1) & 0x7FFFFFF0) < ((16 * (unsigned int)*(_QWORD *)opcodeLookup2) & 0x7FFFFFF0);
}

/*
==============
Scr_CompareScriptProfileCurrentTimeFuncBuiltIn_Internal
==============
*/
bool Scr_CompareScriptProfileCurrentTimeFuncBuiltIn_Internal(const scrContext_t *scrContext, const int *index1, const int *index2)
{
  int v3; 
  unsigned int sourceBufferLookupLen; 
  SourceBufferInfo *v8; 
  int v9; 
  __int64 v10; 
  __int64 v12; 
  __int64 v13; 

  v3 = currentSrcFileIndexForFuncSorting;
  sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
  if ( currentSrcFileIndexForFuncSorting >= sourceBufferLookupLen )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2748, ASSERT_TYPE_ASSERT, "(unsigned)( currentSrcFileIndexForFuncSorting ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "currentSrcFileIndexForFuncSorting doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", currentSrcFileIndexForFuncSorting, sourceBufferLookupLen) )
      __debugbreak();
    v3 = currentSrcFileIndexForFuncSorting;
  }
  v8 = &scrContext->m_parserPub.sourceBufferLookup[v3];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2750, ASSERT_TYPE_ASSERT, "( srcBuffer )", (const char *)&queryFormat, "srcBuffer") )
    __debugbreak();
  if ( !v8->functionLookupLen )
  {
    LODWORD(v12) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2751, ASSERT_TYPE_ASSERT, "( srcBuffer->functionLookupLen ) > ( 0 )", "srcBuffer->functionLookupLen > 0\n\t%i, %i", v12, 0i64) )
      __debugbreak();
  }
  v9 = currentFuncInfoIndexForFuncSorting;
  if ( currentFuncInfoIndexForFuncSorting >= v8->functionLookupLen )
  {
    LODWORD(v13) = v8->functionLookupLen;
    LODWORD(v12) = currentFuncInfoIndexForFuncSorting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2753, ASSERT_TYPE_ASSERT, "(unsigned)( currentFuncInfoIndexForFuncSorting ) < (unsigned)( srcBuffer->functionLookupLen )", "currentFuncInfoIndexForFuncSorting doesn't index srcBuffer->functionLookupLen\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
    v9 = currentFuncInfoIndexForFuncSorting;
  }
  v10 = (__int64)&v8->functionLookupDynamic[v9];
  if ( *index1 >= 0x10u )
  {
    LODWORD(v13) = 16;
    LODWORD(v12) = *index1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2756, ASSERT_TYPE_ASSERT, "(unsigned)( index1 ) < (unsigned)( 16 )", "index1 doesn't index SCR_DEBUG_FUNCTION_BUILT_IN_PER_FUNCTION\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( *index2 >= 0x10u )
  {
    LODWORD(v13) = 16;
    LODWORD(v12) = *index2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2757, ASSERT_TYPE_ASSERT, "(unsigned)( index2 ) < (unsigned)( 16 )", "index2 doesn't index SCR_DEBUG_FUNCTION_BUILT_IN_PER_FUNCTION\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  return *(_QWORD *)(v10 + 16i64 * *index1 + 24) > *(_QWORD *)(v10 + 16i64 * *index2 + 24);
}

/*
==============
Scr_CompareScriptProfileCurrentTimeFuncBuiltIn_Server
==============
*/
bool Scr_CompareScriptProfileCurrentTimeFuncBuiltIn_Server(const int *index1, const int *index2)
{
  const scrContext_t *v4; 

  v4 = ScriptContext_Server();
  return Scr_CompareScriptProfileCurrentTimeFuncBuiltIn_Internal(v4, index1, index2);
}

/*
==============
Scr_CompareScriptProfileCurrentTimeFunc_Server
==============
*/
bool Scr_CompareScriptProfileCurrentTimeFunc_Server(const int *index1, const int *index2)
{
  scrContext_t *v4; 
  int v5; 
  scrContext_t *v6; 
  unsigned int sourceBufferLookupLen; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 

  v4 = ScriptContext_Server();
  v5 = currentSrcFileIndexForFuncSorting;
  v6 = v4;
  sourceBufferLookupLen = v4->m_parserPub.sourceBufferLookupLen;
  if ( currentSrcFileIndexForFuncSorting >= sourceBufferLookupLen )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2713, ASSERT_TYPE_ASSERT, "(unsigned)( currentSrcFileIndexForFuncSorting ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "currentSrcFileIndexForFuncSorting doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", currentSrcFileIndexForFuncSorting, sourceBufferLookupLen) )
      __debugbreak();
    v5 = currentSrcFileIndexForFuncSorting;
  }
  v8 = (__int64)&v6->m_parserPub.sourceBufferLookup[v5];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2717, ASSERT_TYPE_ASSERT, "( srcBuffer )", (const char *)&queryFormat, "srcBuffer") )
    __debugbreak();
  if ( !*(_DWORD *)(v8 + 64) )
  {
    LODWORD(v10) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2718, ASSERT_TYPE_ASSERT, "( srcBuffer->functionLookupLen ) > ( 0 )", "srcBuffer->functionLookupLen > 0\n\t%i, %i", v10, 0i64) )
      __debugbreak();
  }
  if ( *index1 >= *(_DWORD *)(v8 + 64) )
  {
    LODWORD(v11) = *(_DWORD *)(v8 + 64);
    LODWORD(v10) = *index1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2719, ASSERT_TYPE_ASSERT, "(unsigned)( index1 ) < (unsigned)( srcBuffer->functionLookupLen )", "index1 doesn't index srcBuffer->functionLookupLen\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( *index2 >= *(_DWORD *)(v8 + 64) )
  {
    LODWORD(v11) = *(_DWORD *)(v8 + 64);
    LODWORD(v10) = *index2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2720, ASSERT_TYPE_ASSERT, "(unsigned)( index2 ) < (unsigned)( srcBuffer->functionLookupLen )", "index2 doesn't index srcBuffer->functionLookupLen\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return *(_QWORD *)(280i64 * *index1 + *(_QWORD *)(v8 + 56)) > *(_QWORD *)(280i64 * *index2 + *(_QWORD *)(v8 + 56));
}

/*
==============
Scr_CompareScriptProfileExceedSummaryEntryFunc
==============
*/
bool Scr_CompareScriptProfileExceedSummaryEntryFunc(const PrfofileScrExceedSummaryFunc *func1, const PrfofileScrExceedSummaryFunc *func2)
{
  __int64 funcCount; 
  float v3; 
  float v4; 
  float v5; 
  __int64 v6; 
  float v7; 

  funcCount = func1->funcCount;
  v3 = 0.0;
  if ( (_DWORD)funcCount )
  {
    v4 = (float)funcCount;
    v5 = func1->funcTime / v4;
  }
  else
  {
    v5 = 0.0;
  }
  v6 = func2->funcCount;
  if ( (_DWORD)v6 )
  {
    v7 = (float)v6;
    v3 = func2->funcTime / v7;
  }
  return v5 > v3;
}

/*
==============
Scr_CompareScriptProfileExceedSummaryEntryFuncBuiltIn
==============
*/
bool Scr_CompareScriptProfileExceedSummaryEntryFuncBuiltIn(const PrfofileScrExceedSummaryBuilInFunc *builtInFunc1, const PrfofileScrExceedSummaryBuilInFunc *builtInFunc2)
{
  return builtInFunc2->builtInTime < builtInFunc1->builtInTime;
}

/*
==============
Scr_CompareScriptProfileExceedTimeFunc
==============
*/
bool Scr_CompareScriptProfileExceedTimeFunc(const ProfileScrExceedSummaryFile *entry1, const ProfileScrExceedSummaryFile *entry2)
{
  __int64 funcCount; 
  float v3; 
  float v4; 
  float v5; 
  __int64 v6; 
  float v7; 

  funcCount = entry1->funcSummary[0].funcCount;
  v3 = 0.0;
  if ( (_DWORD)funcCount )
  {
    v4 = (float)funcCount;
    v5 = entry1->funcSummary[0].funcTime / v4;
  }
  else
  {
    v5 = 0.0;
  }
  v6 = entry2->funcSummary[0].funcCount;
  if ( (_DWORD)v6 )
  {
    v7 = (float)v6;
    v3 = entry2->funcSummary[0].funcTime / v7;
  }
  return v5 > v3;
}

/*
==============
Scr_CompareScriptSourceProfileTimes_Server
==============
*/
bool Scr_CompareScriptSourceProfileTimes_Server(int index1, int index2)
{
  __int64 v2; 
  __int64 v3; 
  scrContext_t *v4; 

  v2 = index2;
  v3 = index1;
  v4 = ScriptContext_Server();
  return v4->m_parserPub.sourceBufferLookup[v2].totalTime < v4->m_parserPub.sourceBufferLookup[v3].totalTime;
}

/*
==============
Scr_CompareScriptSourceUsageOps_Server
==============
*/
bool Scr_CompareScriptSourceUsageOps_Server(int index1, int index2)
{
  __int64 v2; 
  __int64 v3; 
  scrContext_t *v4; 

  v2 = index2;
  v3 = index1;
  v4 = ScriptContext_Server();
  return v4->m_parserPub.sourceBufferLookup[v3].totalOps > v4->m_parserPub.sourceBufferLookup[v2].totalOps;
}

/*
==============
Scr_CopyFormattedLine
==============
*/
void Scr_CopyFormattedLine(char *line, const char *rawLine)
{
  __int64 v4; 
  int v5; 
  __int64 v6; 
  char *v8; 
  __int64 v29; 
  signed __int64 v30; 
  char *v31; 
  __int64 v32; 
  char v33; 
  char v34; 

  v4 = -1i64;
  do
    ++v4;
  while ( rawLine[v4] );
  if ( (int)v4 >= 1024 )
    LODWORD(v4) = 1023;
  v5 = 0;
  if ( (int)v4 > 0 && (unsigned int)v4 >= 0x40 )
  {
    v6 = (int)v4 - 1;
    if ( line > &rawLine[v6] || &line[v6] < rawLine )
    {
      _XMM4 = _xmm;
      v8 = line;
      do
      {
        __asm
        {
          vpcmpeqb xmm0, xmm4, xmmword ptr [rdx+r10]
          vpandn  xmm2, xmm0, xmm6
          vpand   xmm0, xmm2, xmmword ptr [rdx+r10]
          vpandn  xmm1, xmm2, xmm5
          vpor    xmm2, xmm1, xmm0
          vpcmpeqb xmm0, xmm4, xmmword ptr [rdx+r10+10h]
        }
        *(_OWORD *)v8 = _XMM2;
        __asm
        {
          vpandn  xmm2, xmm0, xmm6
          vpand   xmm0, xmm2, xmmword ptr [rdx+r10+10h]
          vpandn  xmm1, xmm2, xmm5
          vpor    xmm2, xmm1, xmm0
          vpcmpeqb xmm0, xmm4, xmmword ptr [rdx+r10+20h]
        }
        *((_OWORD *)v8 + 1) = _XMM2;
        __asm
        {
          vpandn  xmm2, xmm0, xmm6
          vpand   xmm0, xmm2, xmmword ptr [rdx+r10+20h]
          vpandn  xmm1, xmm2, xmm5
          vpor    xmm2, xmm1, xmm0
          vpcmpeqb xmm0, xmm4, xmmword ptr [rdx+r10+30h]
        }
        *((_OWORD *)v8 + 2) = _XMM2;
        __asm
        {
          vpandn  xmm2, xmm0, xmm6
          vpand   xmm0, xmm2, xmmword ptr [rdx+r10+30h]
          vpandn  xmm1, xmm2, xmm5
          vpor    xmm2, xmm1, xmm0
        }
        *((_OWORD *)v8 + 3) = _XMM2;
        v8 += 64;
        v5 += 64;
      }
      while ( v8 - line < (int)(v4 - (v4 & 0x3F)) );
    }
  }
  v29 = v5;
  if ( v5 < (__int64)(int)v4 )
  {
    v30 = rawLine - line;
    v31 = &line[v5];
    v32 = (int)v4 - v29;
    do
    {
      v33 = v31[v30];
      ++v31;
      v34 = 32;
      if ( v33 != 9 )
        v34 = v33;
      *(v31 - 1) = v34;
      --v32;
    }
    while ( v32 );
  }
  if ( line[(int)v4 - 1] == 13 )
    *(_WORD *)&line[(int)v4 - 1] = 0;
  else
    line[(int)v4] = 0;
}

/*
==============
Scr_FOpenFileRead_LoadObj
==============
*/
__int64 Scr_FOpenFileRead_LoadObj(const char *extFilename, fileHandle_t *fileHandle, const ScrThreadMode threadMode)
{
  const dvar_t *v3; 

  v3 = DCONST_DVARBOOL_developer_looseScriptLoadConsole;
  if ( !DCONST_DVARBOOL_developer_looseScriptLoadConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseScriptLoadConsole") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1452, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_developer_looseScriptLoadConsole, \"developer_looseScriptLoadConsole\" ))", (const char *)&queryFormat, "Dconst_GetBool( developer_looseScriptLoadConsole )") )
    __debugbreak();
  return FS_FOpenFileReadScriptLoose(extFilename, fileHandle);
}

/*
==============
Scr_FixLocalVariables
==============
*/
void Scr_FixLocalVariables(scrContext_t *scrContext, VariableStackBuffer *stackValue)
{
  unsigned int i; 
  char *ThreadPos; 
  __int64 localVarsI; 
  unsigned __int16 *v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int Variable; 
  unsigned int NewVariable; 
  int v13; 
  unsigned int j; 
  unsigned int SiblingName; 
  VariableValue out; 

  if ( !stackValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 875, ASSERT_TYPE_ASSERT, "( stackValue )", (const char *)&queryFormat, "stackValue") )
    __debugbreak();
  for ( i = stackValue->localId; i; i = GetSafeParentLocalId(scrContext, i) )
  {
    ThreadPos = (char *)Scr_GetThreadPos(scrContext, i);
    if ( ThreadPos != &g_EndPos && (localVarsI = Scr_GetPrevSourcePosOpcodeLookup(scrContext, ThreadPos - 1)->localVarsI, (_DWORD)localVarsI) && (v7 = (unsigned __int16 *)(scrContext->m_parserBasePointer + localVarsI)) != NULL )
    {
      v8 = *v7;
      v9 = scrContext->m_parserBasePointer + localVarsI;
      if ( *v7 )
      {
        do
        {
          v10 = v8;
          Variable = FindVariable(scrContext, i, v8);
          if ( Variable )
          {
            Scr_EvalVariable_Out(scrContext, Variable, &out);
            RemoveVariable(scrContext, i, v10);
            NewVariable = GetNewVariable(scrContext, i, v10);
            SetNewVariableValue(scrContext, NewVariable, &out);
          }
          else
          {
            GetNewVariable(scrContext, i, v10);
          }
          v8 = *(_WORD *)(v9 + 2);
          v9 += 2i64;
        }
        while ( v8 );
        v8 = *v7;
      }
      v13 = v8;
    }
    else
    {
      v13 = 0;
    }
    for ( j = FindLastSibling(scrContext, i); j; j = FindLastSibling(scrContext, i) )
    {
      SiblingName = GetSiblingName(scrContext, j);
      if ( SiblingName == v13 )
        break;
      RemoveVariable(scrContext, i, SiblingName);
    }
  }
}

/*
==============
Scr_GetClosestOpcodePosOfType
==============
*/
const char *Scr_GetClosestOpcodePosOfType(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos, unsigned int startSourcePos, unsigned int endSourcePos, Scr_SourceType_t type, unsigned int cumulOffset)
{
  __int64 v8; 
  unsigned int sourceBufferLookupLen; 
  unsigned int v10; 
  SourceBufferInfo *sourceBufferLookup; 
  __int64 v12; 
  SourceBufferInfo *v13; 
  const char *codePos; 
  __int64 v16; 
  const char *v17; 
  signed int opcodeLookupLen; 
  const char *v19; 
  int v20; 
  int v21; 
  OpcodeLookup *opcodeLookup; 
  __int64 v23; 
  unsigned int v24; 
  __int64 codePosI; 
  unsigned __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  OpcodeLookup *v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  int sourcePosCount; 
  int v34; 
  unsigned int sourcePosIndex; 
  SourceLookup *sourcePosLookup; 
  __int64 v37; 
  SourceLookup v38; 
  unsigned int v39; 
  __int64 v40; 
  __int64 v41; 
  SourceBufferInfo *v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  unsigned int v46; 

  v8 = bufferIndex;
  if ( type == SOURCE_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 658, ASSERT_TYPE_ASSERT, "( type )", (const char *)&queryFormat, "type") )
    __debugbreak();
  sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
  v10 = v8 + 1;
  sourceBufferLookup = scrContext->m_parserPub.sourceBufferLookup;
  if ( (int)v8 + 1 >= sourceBufferLookupLen )
  {
LABEL_7:
    v13 = NULL;
  }
  else
  {
    while ( 1 )
    {
      v12 = v10;
      if ( !sourceBufferLookup[v12].gshFile )
        break;
      if ( ++v10 >= sourceBufferLookupLen )
        goto LABEL_7;
    }
    v13 = &sourceBufferLookup[v12];
  }
  codePos = sourceBufferLookup[v8].codePos;
  v42 = v13;
  v44 = codePos;
  if ( !codePos )
    return 0i64;
  v16 = 0i64;
  v45 = NULL;
  v41 = 0x7FFFFFFFFFFFFFFFi64;
  if ( v13 )
    v17 = v13->codePos;
  else
    v17 = NULL;
  opcodeLookupLen = scrContext->m_parserGlob.opcodeLookupLen;
  v19 = v17 - 1;
  v20 = 0;
  v43 = v17 - 1;
  v21 = opcodeLookupLen;
  if ( opcodeLookupLen <= 0 )
    return (const char *)v16;
  opcodeLookup = scrContext->m_parserGlob.opcodeLookup;
  while ( 1 )
  {
    v23 = (unsigned int)((v21 + v20) / 2);
    v24 = (v21 + v20) / 2;
    v46 = v24;
    codePosI = opcodeLookup[v23].codePosI;
    if ( (_DWORD)codePosI )
    {
      v26 = scrContext->m_parserBasePointer + codePosI;
      if ( v26 > (unsigned __int64)v19 )
      {
        v21 = (v21 + v20) / 2;
        goto LABEL_20;
      }
    }
    else
    {
      v26 = 0i64;
    }
    if ( v26 >= (unsigned __int64)codePos )
      break;
    v20 = v23 + 1;
LABEL_20:
    if ( v20 >= v21 )
      return (const char *)v16;
  }
  if ( (_DWORD)v23 )
  {
    do
    {
      v27 = v24 - 1;
      v28 = opcodeLookup[v27].codePosI;
      if ( (_DWORD)v28 )
        v29 = scrContext->m_parserBasePointer + v28;
      else
        v29 = 0i64;
      if ( v29 < (unsigned __int64)codePos )
        break;
      --v24;
    }
    while ( (_DWORD)v27 );
    v46 = v24;
  }
  if ( v24 < opcodeLookupLen )
  {
    while ( 1 )
    {
      v30 = &scrContext->m_parserGlob.opcodeLookup[v24];
      v31 = v30->codePosI;
      if ( (_DWORD)v31 )
        v32 = scrContext->m_parserBasePointer + v31;
      else
        v32 = 0i64;
      if ( v32 < (unsigned __int64)codePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 699, ASSERT_TYPE_ASSERT, "( opcodePos >= startBufferCodePos )", (const char *)&queryFormat, "opcodePos >= startBufferCodePos") )
        __debugbreak();
      if ( v32 > (unsigned __int64)v19 )
        break;
      sourcePosCount = v30->sourcePosCount;
      v34 = 0;
      sourcePosIndex = v30->sourcePosIndex;
      if ( v30->sourcePosCount )
      {
        sourcePosLookup = scrContext->m_parserGlob.sourcePosLookup;
        v37 = v41;
        do
        {
          v38 = sourcePosLookup[v34 + sourcePosIndex];
          v39 = *(_DWORD *)&v38 & 0xFFFFFF;
          if ( (*(unsigned int *)&v38 & 0xFFFFFF) >= startSourcePos && v39 < endSourcePos && (*((_BYTE *)&v38 + 3) & (unsigned __int8)type) != 0 && v30->cumulOffset == cumulOffset )
          {
            v40 = v39 - sourcePos;
            if ( v40 < v37 )
            {
              v37 = (unsigned int)v40;
              v45 = OpcodeLookup::GetCodePos(v30, scrContext);
            }
          }
          ++v34;
        }
        while ( v34 < sourcePosCount );
        v19 = v43;
        v41 = v37;
        v24 = v46;
      }
      codePos = v44;
      v46 = ++v24;
      if ( v24 >= scrContext->m_parserGlob.opcodeLookupLen )
        return v45;
    }
    if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 703, ASSERT_TYPE_ASSERT, "( nextSourceBufData )", (const char *)&queryFormat, "nextSourceBufData") )
      __debugbreak();
    return v45;
  }
  return (const char *)v16;
}

/*
==============
Scr_GetClosestSourcePosOfType
==============
*/
const char *Scr_GetClosestSourcePosOfType(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos, Scr_SourceType_t type)
{
  unsigned int sourceBufferLookupLen; 
  unsigned int v5; 
  SourceBufferInfo *sourceBufferLookup; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  SourceBufferInfo *v11; 
  const char *result; 
  const char *codePos; 
  __int64 v14; 
  unsigned __int64 v15; 
  OpcodeLookup *opcodeLookup; 
  int sourcePosCount; 
  OpcodeLookup *v18; 
  int v19; 
  const char *v20; 
  SourceLookup v21; 
  unsigned int v22; 
  unsigned __int64 v23; 
  int i; 

  sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
  v5 = 0;
  sourceBufferLookup = scrContext->m_parserPub.sourceBufferLookup;
  v8 = bufferIndex;
  v9 = bufferIndex + 1;
  if ( v9 >= sourceBufferLookupLen )
  {
LABEL_4:
    v11 = NULL;
  }
  else
  {
    while ( 1 )
    {
      v10 = v9;
      if ( !sourceBufferLookup[v10].gshFile )
        break;
      if ( ++v9 >= sourceBufferLookupLen )
        goto LABEL_4;
    }
    v11 = &sourceBufferLookup[v10];
  }
  result = sourceBufferLookup[v8].codePos;
  v23 = (unsigned __int64)result;
  if ( result )
  {
    if ( v11 )
      codePos = v11->codePos;
    else
      codePos = NULL;
    v14 = 0i64;
    v15 = (unsigned __int64)(codePos - 1);
    for ( i = 0; (unsigned int)v14 < scrContext->m_parserGlob.opcodeLookupLen; i = v14 )
    {
      opcodeLookup = scrContext->m_parserGlob.opcodeLookup;
      sourcePosCount = opcodeLookup[v14].sourcePosCount;
      v18 = &opcodeLookup[v14];
      v19 = 0;
      if ( v18->sourcePosCount )
      {
        do
        {
          v20 = OpcodeLookup::GetCodePos(v18, scrContext);
          if ( (unsigned __int64)v20 >= v23 )
          {
            if ( (unsigned __int64)v20 <= v15 )
            {
              v21 = scrContext->m_parserGlob.sourcePosLookup[v19 + v18->sourcePosIndex];
              if ( ((unsigned __int8)type & HIBYTE(*(unsigned int *)&v21)) == (unsigned __int8)type )
              {
                v22 = *(_DWORD *)&v21 & 0xFFFFFF;
                if ( v22 >= v5 && v22 <= sourcePos )
                  v5 = v22;
              }
            }
            else if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 777, ASSERT_TYPE_ASSERT, "( nextSourceBufData )", (const char *)&queryFormat, "nextSourceBufData") )
            {
              __debugbreak();
            }
          }
          ++v19;
        }
        while ( v19 < sourcePosCount );
        LODWORD(v14) = i;
      }
      v14 = (unsigned int)(v14 + 1);
    }
    return (const char *)v5;
  }
  return result;
}

/*
==============
Scr_GetCodePos
==============
*/
void Scr_GetCodePos(const scrContext_t *scrContext, const char *codePos, unsigned int index, char *outBuf, int outBufLen)
{
  __int64 bufferIndex; 
  int v9; 
  const char *v10; 
  int v11; 
  int col; 
  char *startLine; 
  Scr_SourcePos_t pos; 
  char line[1024]; 

  if ( scrContext->m_varPub.developer )
  {
    Scr_GetSourcePosOfType(scrContext, codePos, SOURCE_TYPE_THREAD_START, 1, &pos);
    if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1908, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
      __debugbreak();
    bufferIndex = pos.bufferIndex;
    v9 = Scr_GetLineNumInternal(scrContext->m_parserPub.sourceBufferLookup[bufferIndex].sourceBuf, pos.sourcePos, (const char **)&startLine, &col) + 1;
    Scr_CopyFormattedLine(line, startLine);
    v10 = (char *)&queryFormat.fmt + 3;
    if ( scrContext->m_parserGlob.saveSourceBufferLookup )
      v10 = " (savegame)";
    v11 = v9;
    Com_sprintf_truncate(outBuf, outBufLen, "%s 
  }
  else
  {
    if ( !Scr_IsInOpcodeMemory(scrContext, codePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2510, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
      __debugbreak();
    Com_sprintf(outBuf, outBufLen, "@ %zd", codePos - scrContext->m_varPub.programBuffer);
  }
}

/*
==============
Scr_GetFileAndLine
==============
*/
void Scr_GetFileAndLine(const scrContext_t *scrContext, const char *codePos, const char **filename, int *linenum)
{
  OpcodeLookup *PrevSourcePosOpcodeLookup; 
  int v9; 
  unsigned int SourceBuffer; 
  __int64 v11; 

  if ( !Scr_IsInOpcodeMemory(scrContext, codePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2523, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
    __debugbreak();
  PrevSourcePosOpcodeLookup = Scr_GetPrevSourcePosOpcodeLookup(scrContext, codePos);
  if ( PrevSourcePosOpcodeLookup )
  {
    v9 = *(_DWORD *)&scrContext->m_parserGlob.sourcePosLookup[PrevSourcePosOpcodeLookup->sourcePosIndex] & 0xFFFFFF;
    SourceBuffer = Scr_GetSourceBuffer(scrContext, codePos);
    v11 = SourceBuffer;
    *linenum = Scr_GetLineNum(scrContext, SourceBuffer, v9) + 1;
    *filename = scrContext->m_parserPub.sourceBufferLookup[v11].buf;
  }
  else
  {
    *linenum = 0;
    *filename = (char *)&queryFormat.fmt + 3;
  }
}

/*
==============
Scr_GetFunctionLineNum
==============
*/
int Scr_GetFunctionLineNum(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos)
{
  __int64 v4; 
  char *startLine; 

  v4 = bufferIndex;
  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1106, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  return Scr_GetFunctionLineNumInternal(scrContext->m_parserPub.sourceBufferLookup[v4].sourceBuf, sourcePos, (const char **)&startLine);
}

/*
==============
Scr_GetFunctionLineNumInternal
==============
*/
__int64 Scr_GetFunctionLineNumInternal(const char *buf, unsigned int sourcePos, const char **startLine)
{
  const char *v5; 
  unsigned int v6; 
  __int64 result; 
  const char *v8; 
  char v9; 
  unsigned int v10; 

  v5 = buf;
  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1035, ASSERT_TYPE_ASSERT, "( buf )", (const char *)&queryFormat, "buf") )
    __debugbreak();
  v6 = 0;
  *startLine = v5;
  result = 0i64;
  if ( sourcePos )
  {
    v8 = v5 + 1;
    do
    {
      if ( !*(v8 - 1) )
      {
        v9 = *v8;
        if ( *v8 == 123 )
          v5 = *startLine;
        *startLine = v8;
        v10 = v6;
        if ( v9 != 123 )
          v10 = result;
        ++v6;
        result = v10;
      }
      ++v8;
      --sourcePos;
    }
    while ( sourcePos );
  }
  *startLine = v5;
  return result;
}

/*
==============
Scr_GetLineInfo
==============
*/
__int64 Scr_GetLineInfo(const char *buf, unsigned int sourcePos, int *col, char *line)
{
  unsigned int LineNumInternal; 
  char *startLine; 

  LineNumInternal = Scr_GetLineNumInternal(buf, sourcePos, (const char **)&startLine, col);
  Scr_CopyFormattedLine(line, startLine);
  return LineNumInternal;
}

/*
==============
Scr_GetLineNum
==============
*/
int Scr_GetLineNum(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos)
{
  __int64 v4; 
  char *startLine; 
  int col; 

  v4 = bufferIndex;
  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1096, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  return Scr_GetLineNumInternal(scrContext->m_parserPub.sourceBufferLookup[v4].sourceBuf, sourcePos, (const char **)&startLine, &col);
}

/*
==============
Scr_GetLineNumInternal
==============
*/
__int64 Scr_GetLineNumInternal(const char *buf, unsigned int sourcePos, const char **startLine, int *col)
{
  const char *v7; 
  unsigned int v8; 
  const char *v9; 
  const char *v10; 

  v7 = buf;
  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1068, ASSERT_TYPE_ASSERT, "( buf )", (const char *)&queryFormat, "buf") )
    __debugbreak();
  v8 = 0;
  *startLine = v7;
  if ( sourcePos )
  {
    v9 = v7 + 1;
    do
    {
      if ( *v7 )
      {
        v10 = *startLine;
      }
      else
      {
        *startLine = v9;
        ++v8;
        v10 = v9;
      }
      ++v7;
      ++v9;
      --sourcePos;
    }
    while ( sourcePos );
    if ( v7 < v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1084, ASSERT_TYPE_ASSERT, "( buf >= *startLine )", (const char *)&queryFormat, "buf >= *startLine") )
      __debugbreak();
  }
  *col = truncate_cast<int,__int64>(v7 - *startLine);
  return v8;
}

/*
==============
Scr_GetNewCodeOffset
==============
*/
__int64 Scr_GetNewCodeOffset(const scrContext_t *scrContext, int offset)
{
  signed int v4; 
  signed int v5; 
  CodeOffsetMap *codeOffsetMap; 
  int v7; 

  if ( !scrContext->m_parserPub.codeOffsetMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 943, ASSERT_TYPE_ASSERT, "( pScrParserPub->codeOffsetMap )", (const char *)&queryFormat, "pScrParserPub->codeOffsetMap") )
    __debugbreak();
  v4 = 0;
  v5 = scrContext->m_parserPub.codeOffsetMapLen - 1;
  if ( v5 < 0 )
    return 0xFFFFFFFFi64;
  codeOffsetMap = scrContext->m_parserPub.codeOffsetMap;
  while ( 1 )
  {
    v7 = (v5 + v4) / 2;
    if ( offset < codeOffsetMap[v7].codeOffset )
    {
      v5 = v7 - 1;
      goto LABEL_10;
    }
    if ( offset == codeOffsetMap[v7].codeOffset )
      return (unsigned int)codeOffsetMap[v7].newCodeOffest;
    v4 = v7 + 1;
LABEL_10:
    if ( v4 > v5 )
      return 0xFFFFFFFFi64;
  }
}

/*
==============
Scr_GetNewSourceBuffer
==============
*/
SourceBufferInfo *Scr_GetNewSourceBuffer(scrContext_t *scrContext)
{
  unsigned int v2; 
  void *v3; 
  __int64 sourceBufferLookupLen; 
  __int64 v6; 
  int UsedSize; 

  if ( !scrContext->m_parserPub.sourceBufferLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1146, ASSERT_TYPE_ASSERT, "( pScrParserPub->sourceBufferLookup )", (const char *)&queryFormat, "pScrParserPub->sourceBufferLookup") )
    __debugbreak();
  v2 = 120 * (scrContext->m_parserPub.sourceBufferLookupLen + 1);
  if ( v2 > Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferLookupUser) )
  {
    v3 = Mem_HunkUser_AllocInternal(scrContext->m_parserGlob.sourceBufferLookupUser, 0x10000ui64, 1ui64, "Scr_GetNewSourceBuffer");
    memset_0(v3, 0, 0x10000ui64);
    if ( v2 > Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferLookupUser) )
    {
      UsedSize = Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferLookupUser);
      LODWORD(v6) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1154, ASSERT_TYPE_ASSERT, "( size ) <= ( Mem_HunkUser_GetUsedSize( scrContext.m_parserGlob.sourceBufferLookupUser ) )", "size <= Mem_HunkUser_GetUsedSize( scrContext.m_parserGlob.sourceBufferLookupUser )\n\t%i, %i", v6, UsedSize) )
        __debugbreak();
    }
  }
  sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
  scrContext->m_parserPub.sourceBufferLookupLen = sourceBufferLookupLen + 1;
  return &scrContext->m_parserPub.sourceBufferLookup[sourceBufferLookupLen];
}

/*
==============
Scr_GetNextSourceBufData
==============
*/
SourceBufferInfo *Scr_GetNextSourceBufData(const scrContext_t *scrContext, unsigned int bufferIndex)
{
  unsigned int sourceBufferLookupLen; 
  unsigned int v3; 
  SourceBufferInfo *sourceBufferLookup; 
  __int64 v5; 

  sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
  v3 = bufferIndex + 1;
  if ( v3 >= sourceBufferLookupLen )
    return 0i64;
  sourceBufferLookup = scrContext->m_parserPub.sourceBufferLookup;
  while ( 1 )
  {
    v5 = v3;
    if ( !sourceBufferLookup[v5].gshFile )
      break;
    if ( ++v3 >= sourceBufferLookupLen )
      return 0i64;
  }
  return &sourceBufferLookup[v5];
}

/*
==============
Scr_GetOpcodePosOfType
==============
*/
const char *Scr_GetOpcodePosOfType(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int startSourcePos, unsigned int endSourcePos, Scr_SourceType_t type, unsigned int *sourcePos)
{
  __int64 v6; 
  const scrContext_t *v8; 
  unsigned int sourceBufferLookupLen; 
  unsigned int v10; 
  SourceBufferInfo *sourceBufferLookup; 
  __int64 v12; 
  SourceBufferInfo *v13; 
  const char *codePos; 
  const char *result; 
  const char *v16; 
  int v17; 
  const char *v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  const char *v23; 
  int v24; 
  int v25; 
  int v26; 
  SourceLookup v27; 
  const char *v28; 
  unsigned __int64 v29; 

  v6 = bufferIndex;
  v8 = scrContext;
  if ( type == SOURCE_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 579, ASSERT_TYPE_ASSERT, "( type )", (const char *)&queryFormat, "type") )
    __debugbreak();
  sourceBufferLookupLen = v8->m_parserPub.sourceBufferLookupLen;
  v10 = v6 + 1;
  sourceBufferLookup = v8->m_parserPub.sourceBufferLookup;
  if ( (int)v6 + 1 >= sourceBufferLookupLen )
  {
LABEL_7:
    v13 = NULL;
  }
  else
  {
    while ( 1 )
    {
      v12 = v10;
      if ( !sourceBufferLookup[v12].gshFile )
        break;
      if ( ++v10 >= sourceBufferLookupLen )
        goto LABEL_7;
    }
    v13 = &sourceBufferLookup[v12];
  }
  codePos = sourceBufferLookup[v6].codePos;
  v28 = codePos;
  if ( !codePos )
  {
    *sourcePos = 0;
    return 0i64;
  }
  v16 = NULL;
  v17 = 0;
  if ( v13 )
    v18 = v13->codePos;
  else
    v18 = NULL;
  v19 = 0i64;
  v20 = (unsigned __int64)(v18 - 1);
  v29 = (unsigned __int64)(v18 - 1);
  if ( v8->m_parserGlob.opcodeLookupLen )
  {
    while ( 1 )
    {
      v21 = (__int64)&v8->m_parserGlob.opcodeLookup[v19];
      v22 = *(int *)(v21 + 8);
      if ( (_DWORD)v22 )
        v23 = (const char *)(v8->m_parserBasePointer + v22);
      else
        v23 = NULL;
      if ( v23 < codePos )
        goto LABEL_34;
      if ( (unsigned __int64)v23 <= v20 )
        break;
      if ( !v13 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 604, ASSERT_TYPE_ASSERT, "( nextSourceBufData )", (const char *)&queryFormat, "nextSourceBufData") )
          __debugbreak();
LABEL_33:
        v20 = v29;
        codePos = v28;
      }
LABEL_34:
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= v8->m_parserGlob.opcodeLookupLen )
        goto LABEL_35;
    }
    v24 = *(unsigned __int16 *)(v21 + 20);
    v25 = 0;
    v26 = *(_DWORD *)(v21 + 16);
    if ( *(_WORD *)(v21 + 20) )
    {
      do
      {
        v27 = v8->m_parserGlob.sourcePosLookup[v25 + v26];
        if ( (*(unsigned int *)&v27 & 0xFFFFFF) >= startSourcePos && (*(unsigned int *)&v27 & 0xFFFFFF) < endSourcePos && (*((_BYTE *)&v27 + 3) & (unsigned __int8)type) != 0 && (!v16 || v23 < v16) )
        {
          v16 = v23;
          v17 = *(_DWORD *)&v27 & 0xFFFFFF;
        }
        ++v25;
      }
      while ( v25 < v24 );
      v8 = scrContext;
    }
    goto LABEL_33;
  }
LABEL_35:
  result = v16;
  *sourcePos = v17;
  return result;
}

/*
==============
Scr_GetPrevSourcePos
==============
*/
__int64 Scr_GetPrevSourcePos(const scrContext_t *scrContext, const char *codePos, unsigned int index)
{
  SourceLookup *sourcePosLookup; 

  sourcePosLookup = scrContext->m_parserGlob.sourcePosLookup;
  return *(_DWORD *)&sourcePosLookup[index + Scr_GetPrevSourcePosOpcodeLookup(scrContext, codePos)->sourcePosIndex] & 0xFFFFFF;
}

/*
==============
Scr_GetPrevSourcePosOpcodeLookup
==============
*/
OpcodeLookup *Scr_GetPrevSourcePosOpcodeLookup(const scrContext_t *scrContext, const char *codePos)
{
  unsigned int opcodeLookupLen; 
  __int64 v5; 
  OpcodeLookup *opcodeLookup; 
  unsigned int v7; 
  __int64 v8; 
  __int64 codePosI; 
  __int64 v10; 

  if ( !Scr_IsInOpcodeMemory(scrContext, codePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 802, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
    __debugbreak();
  if ( !scrContext->m_parserGlob.opcodeLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 803, ASSERT_TYPE_ASSERT, "( pScrParserGlob->opcodeLookup )", (const char *)&queryFormat, "pScrParserGlob->opcodeLookup") )
    __debugbreak();
  opcodeLookupLen = scrContext->m_parserGlob.opcodeLookupLen;
  LODWORD(v5) = 0;
  opcodeLookup = scrContext->m_parserGlob.opcodeLookup;
  v7 = opcodeLookupLen - 1;
  do
  {
    v8 = (v7 + (unsigned int)v5) >> 1;
    codePosI = opcodeLookup[v8].codePosI;
    if ( (_DWORD)codePosI && (unsigned __int64)codePos < scrContext->m_parserBasePointer + codePosI )
    {
      v7 = v8 - 1;
    }
    else
    {
      v5 = (unsigned int)(v8 + 1);
      if ( (_DWORD)v5 == opcodeLookupLen )
        return &opcodeLookup[v8];
      v10 = opcodeLookup[v5].codePosI;
      if ( (_DWORD)v10 )
      {
        if ( (unsigned __int64)codePos < scrContext->m_parserBasePointer + v10 )
          return &opcodeLookup[v8];
      }
    }
  }
  while ( (unsigned int)v5 <= v7 );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 822, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
    __debugbreak();
  return 0i64;
}

/*
==============
Scr_GetSPGoldScriptName
==============
*/
void Scr_GetSPGoldScriptName(const char *name, char *goldname, const unsigned __int64 goldnameLength)
{
  const char *v3; 
  unsigned __int64 v7; 

  v3 = "goldscript";
  if ( g_currentRegion == China )
    v3 = "goldscript_cn";
  v7 = -1i64;
  do
    ++v7;
  while ( v3[v7] );
  if ( I_strnicmp(v3, name, v7) )
    Com_sprintf(goldname, goldnameLength, "%s/%s", v3, name);
  else
    strncpy(goldname, name, goldnameLength);
}

/*
==============
Scr_GetSourceBuffer
==============
*/
__int64 Scr_GetSourceBuffer(const scrContext_t *scrContext, const char *codePos)
{
  __int64 result; 
  SourceBufferInfo *sourceBufferLookup; 
  __int64 v6; 
  unsigned __int64 v7; 
  bool v8; 

  if ( !Scr_IsInOpcodeMemory(scrContext, codePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1941, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
    __debugbreak();
  if ( !scrContext->m_parserPub.sourceBufferLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1942, ASSERT_TYPE_ASSERT, "( scrContext.m_parserPub.sourceBufferLookupLen > 0 )", (const char *)&queryFormat, "scrContext.m_parserPub.sourceBufferLookupLen > 0") )
    __debugbreak();
  result = scrContext->m_parserPub.sourceBufferLookupLen - 1;
  if ( scrContext->m_parserPub.sourceBufferLookupLen != 1 )
  {
    sourceBufferLookup = scrContext->m_parserPub.sourceBufferLookup;
    do
    {
      v6 = (unsigned int)result;
      if ( !sourceBufferLookup[v6].gshFile )
      {
        v7 = (unsigned __int64)sourceBufferLookup[v6].codePos;
        if ( v7 )
        {
          if ( v7 <= (unsigned __int64)codePos )
            break;
        }
      }
      v8 = (_DWORD)result == 1;
      result = (unsigned int)(result - 1);
    }
    while ( !v8 );
  }
  return result;
}

/*
==============
Scr_GetSourceBufferLookup
==============
*/
SourceBufferInfo *Scr_GetSourceBufferLookup(const scrContext_t *scrContext)
{
  if ( scrContext->m_parserPub.sourceBufferLookup )
    return scrContext->m_parserPub.sourceBufferLookup;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4415, ASSERT_TYPE_ASSERT, "(scrContext.m_parserPub.sourceBufferLookup)", (const char *)&queryFormat, "scrContext.m_parserPub.sourceBufferLookup") )
    __debugbreak();
  return scrContext->m_parserPub.sourceBufferLookup;
}

/*
==============
Scr_GetSourceBuffer_Fast
==============
*/
__int64 Scr_GetSourceBuffer_Fast(const scrContext_t *scrContext, const char *codePos)
{
  SourceBufferInfo *sourceBufferLookup; 
  unsigned int v5; 
  SourceBufferCode *sourceBufferCodeLookup; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 sourceBufferIndex; 

  if ( !Scr_IsInOpcodeMemory(scrContext, codePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1979, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
    __debugbreak();
  if ( !scrContext->m_parserPub.sourceBufferLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1980, ASSERT_TYPE_ASSERT, "( pScrParserPub->sourceBufferLookupLen > 0 )", (const char *)&queryFormat, "pScrParserPub->sourceBufferLookupLen > 0") )
    __debugbreak();
  if ( codePos < scrContext->m_parserPub.sourceBufferLookup->codePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1983, ASSERT_TYPE_ASSERT, "( codePos >= pScrParserPub->sourceBufferLookup[0].codePos )", (const char *)&queryFormat, "codePos >= pScrParserPub->sourceBufferLookup[0].codePos") )
    __debugbreak();
  sourceBufferLookup = scrContext->m_parserPub.sourceBufferLookup;
  v5 = 0;
  sourceBufferCodeLookup = scrContext->m_parserPub.sourceBufferCodeLookup;
  v7 = (_DWORD)codePos - LODWORD(sourceBufferLookup->codePos);
  v8 = scrContext->m_parserPub.sourceBufferCodeLookupLen - 1;
  do
  {
    v9 = (v8 + v5) >> 1;
    if ( sourceBufferCodeLookup[v9].start > v7 )
    {
      v8 = v9 - 1;
    }
    else
    {
      if ( sourceBufferCodeLookup[v9].end >= v7 )
        break;
      v5 = v9 + 1;
    }
  }
  while ( v5 <= v8 );
  sourceBufferIndex = sourceBufferCodeLookup[v9].sourceBufferIndex;
  if ( (sourceBufferLookup[sourceBufferIndex].codePos > codePos || codePos > sourceBufferLookup[sourceBufferIndex].codePosEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2011, ASSERT_TYPE_ASSERT, "(( pScrParserPub->sourceBufferLookup[index].codePos <= codePos ) && ( codePos <= pScrParserPub->sourceBufferLookup[index].codePosEnd ))", (const char *)&queryFormat, "( pScrParserPub->sourceBufferLookup[index].codePos <= codePos ) && ( codePos <= pScrParserPub->sourceBufferLookup[index].codePosEnd )") )
    __debugbreak();
  return (unsigned int)sourceBufferIndex;
}

/*
==============
Scr_GetSourceInfo
==============
*/
SourceBufferInfo *Scr_GetSourceInfo(const scrContext_t *scrContext, const char *name)
{
  int v4; 
  SourceBufferInfo *v5; 
  const char *buf; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 974, ASSERT_TYPE_ASSERT, "(name != nullptr)", (const char *)&queryFormat, "name != nullptr") )
    __debugbreak();
  v4 = 0;
  if ( !scrContext->m_parserPub.sourceBufferLookupLen )
    return 0i64;
  while ( 1 )
  {
    v5 = &scrContext->m_parserPub.sourceBufferLookup[v4];
    buf = v5->buf;
    if ( buf )
    {
      if ( !I_strnicmp(buf, name, 0x7FFFFFFFui64) )
        break;
    }
    if ( ++v4 >= scrContext->m_parserPub.sourceBufferLookupLen )
      return 0i64;
  }
  return v5;
}

/*
==============
Scr_GetSourcePos2
==============
*/
void Scr_GetSourcePos2(const scrContext_t *scrContext, unsigned int bufferIndex, int lineNum, char *outBuf, int outBufLen)
{
  __int64 v7; 
  const char *v9; 
  __int64 v10; 

  v7 = bufferIndex;
  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1918, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  v9 = (char *)&queryFormat.fmt + 3;
  if ( scrContext->m_parserGlob.saveSourceBufferLookup )
    v9 = " (savegame)";
  LODWORD(v10) = lineNum + 1;
  Com_sprintf_truncate(outBuf, outBufLen, "%s%s %d", scrContext->m_parserPub.sourceBufferLookup[v7].buf, v9, v10);
}

/*
==============
Scr_GetSourcePos3
==============
*/
void Scr_GetSourcePos3(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos, char *outBuf, int outBufLen)
{
  __int64 v7; 
  __int64 v9; 
  int v10; 
  const char *v11; 
  __int64 v12; 
  int col; 
  char *startLine; 
  char line[1024]; 

  v7 = bufferIndex;
  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1930, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  v9 = v7;
  v10 = Scr_GetLineNumInternal(scrContext->m_parserPub.sourceBufferLookup[v7].sourceBuf, sourcePos, (const char **)&startLine, &col) + 1;
  Scr_CopyFormattedLine(line, startLine);
  v11 = (char *)&queryFormat.fmt + 3;
  if ( scrContext->m_parserGlob.saveSourceBufferLookup )
    v11 = " (savegame)";
  LODWORD(v12) = v10;
  Com_sprintf_truncate(outBuf, outBufLen, "%s%s %d", scrContext->m_parserPub.sourceBufferLookup[v9].buf, v11, v12);
}

/*
==============
Scr_GetSourcePos
==============
*/
__int64 Scr_GetSourcePos(const scrContext_t *scrContext, unsigned int bufferIndex, unsigned int sourcePos, char *outBuf, int outBufLen)
{
  __int64 v7; 
  __int64 v9; 
  unsigned int LineNumInternal; 
  const char *v11; 
  unsigned int v13; 
  int col; 
  char *startLine; 
  char line[1024]; 

  v7 = bufferIndex;
  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1908, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  v9 = v7;
  LineNumInternal = Scr_GetLineNumInternal(scrContext->m_parserPub.sourceBufferLookup[v7].sourceBuf, sourcePos, (const char **)&startLine, &col);
  Scr_CopyFormattedLine(line, startLine);
  v11 = (char *)&queryFormat.fmt + 3;
  if ( scrContext->m_parserGlob.saveSourceBufferLookup )
    v11 = " (savegame)";
  v13 = LineNumInternal + 1;
  Com_sprintf_truncate(outBuf, outBufLen, "%s 
  return LineNumInternal;
}

/*
==============
Scr_GetSourcePosOfType
==============
*/
__int64 Scr_GetSourcePosOfType(const scrContext_t *scrContext, const char *codePos, Scr_SourceType_t type, int currentSourcePos, Scr_SourcePos_t *pos)
{
  signed int v8; 
  signed int v9; 
  OpcodeLookup *opcodeLookup; 
  int v11; 
  __int64 codePosI; 
  OpcodeLookup *PrevSourcePosOpcodeLookup; 
  const char *v14; 
  bool v15; 
  int v16; 
  unsigned int SourceBuffer; 
  unsigned int sourcePos; 

  if ( currentSourcePos )
  {
    if ( !Scr_IsInOpcodeMemory(scrContext, codePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 835, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
      __debugbreak();
    if ( !scrContext->m_parserGlob.opcodeLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 836, ASSERT_TYPE_ASSERT, "( pScrParserGlob->opcodeLookup )", (const char *)&queryFormat, "pScrParserGlob->opcodeLookup") )
      __debugbreak();
    v8 = 0;
    v9 = scrContext->m_parserGlob.opcodeLookupLen - 1;
    if ( v9 >= 0 )
    {
      opcodeLookup = scrContext->m_parserGlob.opcodeLookup;
      while ( 1 )
      {
        v11 = (v9 + v8) / 2;
        codePosI = opcodeLookup[v11].codePosI;
        PrevSourcePosOpcodeLookup = &opcodeLookup[v11];
        if ( !(_DWORD)codePosI )
          break;
        v14 = (const char *)(scrContext->m_parserBasePointer + codePosI);
        v15 = codePos == v14;
        if ( codePos >= v14 )
          goto LABEL_14;
        v9 = v11 - 1;
LABEL_16:
        if ( v8 > v9 )
          goto LABEL_17;
      }
      v15 = codePos == NULL;
LABEL_14:
      if ( v15 )
        goto LABEL_19;
      v8 = v11 + 1;
      goto LABEL_16;
    }
LABEL_17:
    PrevSourcePosOpcodeLookup = NULL;
  }
  else
  {
    PrevSourcePosOpcodeLookup = Scr_GetPrevSourcePosOpcodeLookup(scrContext, codePos);
  }
LABEL_19:
  if ( PrevSourcePosOpcodeLookup && (v16 = 0, PrevSourcePosOpcodeLookup->sourcePosCount) )
  {
    while ( type && ((unsigned __int8)type & *((_BYTE *)&scrContext->m_parserGlob.sourcePosLookup[v16 + PrevSourcePosOpcodeLookup->sourcePosIndex] + 3)) == 0 )
    {
      if ( ++v16 >= (unsigned int)PrevSourcePosOpcodeLookup->sourcePosCount )
        goto LABEL_24;
    }
    pos->sourcePos = *(_DWORD *)&scrContext->m_parserGlob.sourcePosLookup[v16 + PrevSourcePosOpcodeLookup->sourcePosIndex] & 0xFFFFFF;
    SourceBuffer = Scr_GetSourceBuffer(scrContext, codePos);
    sourcePos = pos->sourcePos;
    pos->bufferIndex = SourceBuffer;
    pos->lineNum = Scr_GetLineNum(scrContext, SourceBuffer, sourcePos);
    return 1i64;
  }
  else
  {
LABEL_24:
    *(_QWORD *)&pos->lineNum = 0i64;
    pos->bufferIndex = 0;
    return 0i64;
  }
}

/*
==============
Scr_GetTextSourcePos
==============
*/
void Scr_GetTextSourcePos(const scrContext_t *scrContext, const char *buf, const char *codePos, char *line)
{
  const char *programBuffer; 
  bool v8; 
  const char *v9; 
  unsigned int SourceBuffer; 
  SourceLookup *sourcePosLookup; 
  __int64 v12; 
  OpcodeLookup *PrevSourcePosOpcodeLookup; 
  char *startLine; 
  int col; 

  if ( scrContext->m_varPub.developer && codePos && (programBuffer = scrContext->m_varPub.programBuffer, v8 = Scr_IsInOpcodeMemory(scrContext, codePos) != 0, programBuffer) && v8 && codePos != &g_EndPos )
  {
    v9 = codePos - 1;
    SourceBuffer = Scr_GetSourceBuffer(scrContext, codePos - 1);
    sourcePosLookup = scrContext->m_parserGlob.sourcePosLookup;
    v12 = SourceBuffer;
    PrevSourcePosOpcodeLookup = Scr_GetPrevSourcePosOpcodeLookup(scrContext, v9);
    Scr_GetLineNumInternal(scrContext->m_parserPub.sourceBufferLookup[v12].sourceBuf, *(_DWORD *)&sourcePosLookup[PrevSourcePosOpcodeLookup->sourcePosIndex] & 0xFFFFFF, (const char **)&startLine, &col);
    Scr_CopyFormattedLine(line, startLine);
  }
  else
  {
    *line = 0;
  }
}

/*
==============
Scr_HasSourceBuffer
==============
*/
bool Scr_HasSourceBuffer(const scrContext_t *scrContext, const char *codePos)
{
  const char *programBuffer; 
  bool v3; 

  programBuffer = scrContext->m_varPub.programBuffer;
  v3 = Scr_IsInOpcodeMemory(scrContext, codePos) != 0;
  return programBuffer && v3;
}

/*
==============
Scr_IgnoreDebugChecks
==============
*/
void Scr_IgnoreDebugChecks(scrContext_t *scrContext)
{
  if ( scrStringDebugGlob )
    scrStringDebugGlob->ignoreChecks = 1;
  scrContext->m_varDebugPub.m_Inited = 0;
}

/*
==============
Scr_InitOpcodeLookup
==============
*/
void Scr_InitOpcodeLookup(scrContext_t *scrContext)
{
  HunkUser *opcodeLookupUser; 
  HunkUser *v3; 
  OpcodeLookup *Pos; 
  HunkUser *sourcePosLookupUser; 
  SourceLookup *v6; 
  HunkUser *sourceBufferLookupUser; 

  if ( scrContext->m_parserGlob.opcodeLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 218, ASSERT_TYPE_ASSERT, "( !pScrParserGlob->opcodeLookup )", (const char *)&queryFormat, "!pScrParserGlob->opcodeLookup") )
    __debugbreak();
  if ( scrContext->m_parserGlob.sourcePosLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 219, ASSERT_TYPE_ASSERT, "( !pScrParserGlob->sourcePosLookup )", (const char *)&queryFormat, "!pScrParserGlob->sourcePosLookup") )
    __debugbreak();
  if ( scrContext->m_parserPub.sourceBufferLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 220, ASSERT_TYPE_ASSERT, "( !pScrParserPub->sourceBufferLookup )", (const char *)&queryFormat, "!pScrParserPub->sourceBufferLookup") )
    __debugbreak();
  if ( scrContext->m_parserPub.codeOffsetMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 222, ASSERT_TYPE_ASSERT, "( !pScrParserPub->codeOffsetMap )", (const char *)&queryFormat, "!pScrParserPub->codeOffsetMap") )
    __debugbreak();
  if ( scrContext->m_parserPub.useCodeOffsetMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 223, ASSERT_TYPE_ASSERT, "( !pScrParserPub->useCodeOffsetMap )", (const char *)&queryFormat, "!pScrParserPub->useCodeOffsetMap") )
    __debugbreak();
  if ( scrContext->m_varPub.developer )
  {
    opcodeLookupUser = scrContext->m_parserGlob.opcodeLookupUser;
    scrContext->m_parserGlob.delayedSourceIndex = -1;
    Mem_HunkUser_Reset(opcodeLookupUser);
    v3 = scrContext->m_parserGlob.opcodeLookupUser;
    scrContext->m_parserGlob.opcodeLookupLen = 0;
    Pos = (OpcodeLookup *)Mem_HunkUser_GetPos(v3);
    scrContext->m_parserGlob.opcodeLookup = Pos;
    scrContext->m_parserBasePointer = (__int64)Pos;
    Mem_HunkUser_Reset(scrContext->m_parserGlob.sourcePosLookupUser);
    sourcePosLookupUser = scrContext->m_parserGlob.sourcePosLookupUser;
    scrContext->m_parserGlob.sourcePosLookupLen = 0;
    v6 = (SourceLookup *)Mem_HunkUser_GetPos(sourcePosLookupUser);
    sourceBufferLookupUser = scrContext->m_parserGlob.sourceBufferLookupUser;
    scrContext->m_parserGlob.sourcePosLookup = v6;
    scrContext->m_parserGlob.currentCodePos = NULL;
    scrContext->m_parserGlob.currentSourcePosCount = 0;
    Mem_HunkUser_Reset(sourceBufferLookupUser);
    scrContext->m_parserPub.sourceBufferLookupLen = 0;
    scrContext->m_parserPub.sourceBufferLookup = (SourceBufferInfo *)Mem_HunkUser_GetPos(scrContext->m_parserGlob.sourceBufferLookupUser);
    Mem_HunkUser_Reset(scrContext->m_parserGlob.sourceBufferCodeLookupUser);
    scrContext->m_parserPub.sourceBufferCodeLookupLen = 0;
    scrContext->m_parserPub.sourceBufferCodeLookup = (SourceBufferCode *)Mem_HunkUser_GetPos(scrContext->m_parserGlob.sourceBufferCodeLookupUser);
  }
}

/*
==============
Scr_InitSourceFuncInfo
==============
*/
void Scr_InitSourceFuncInfo(scrContext_t *scrContext)
{
  SourceBufferInfo *sourceBufferLookup; 
  unsigned int v2; 
  unsigned int sourceBufferLookupLen; 
  unsigned int v4; 
  SourceBufferInfo *v6; 
  unsigned int v7; 
  SourceBufferInfo *v8; 
  unsigned int v9; 
  const char *codePos; 
  const unsigned __int8 *v11; 
  unsigned int v12; 
  void *v13; 
  __int64 sourceBufferCodeLookupLen; 
  SourceBufferCode *sourceBufferCodeLookup; 
  unsigned int *v16; 
  unsigned int v17; 
  __int64 v18; 
  char *buf; 
  const char *filenameExt; 
  signed __int64 v21; 
  char v22; 
  __int64 v23; 
  char v24; 
  __int64 v25; 
  __int64 v26; 
  SourceFunctionInfoStatic *v27; 
  SourceFunctionInfoDynamic *v28; 
  unsigned int v29; 
  __int64 v30; 
  __int64 functionLookupLen; 
  scrDebugFunctionInfo *functionList; 
  __int64 v33; 
  const char *codePosValue; 
  __int64 v35; 
  __int64 v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  SourceBufferInfo *v41; 

  sourceBufferLookup = scrContext->m_parserPub.sourceBufferLookup;
  v2 = 0;
  sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
  v4 = 0;
  v37 = 0;
  v41 = sourceBufferLookup;
  scrContext->m_parserPub.sourceBufferCodeLookupLen = 0;
  if ( sourceBufferLookupLen )
  {
    while ( 1 )
    {
      if ( v2 >= scrContext->m_parserPub.functionCount )
        return;
      if ( v4 >= sourceBufferLookupLen )
      {
        LODWORD(v36) = sourceBufferLookupLen;
        LODWORD(v35) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3432, ASSERT_TYPE_ASSERT, "(unsigned)( bufferIndex ) < (unsigned)( pScrParserPub->sourceBufferLookupLen )", "bufferIndex doesn't index pScrParserPub->sourceBufferLookupLen\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      v40 = v4 + 1;
      v6 = &scrContext->m_parserPub.sourceBufferLookup[v4];
      v6->codePosEnd = NULL;
      v7 = scrContext->m_parserPub.sourceBufferLookupLen;
      if ( v4 + 1 >= v7 )
        break;
      if ( !v6->gshFile )
      {
        v8 = scrContext->m_parserPub.sourceBufferLookup;
        v9 = v4 + 1;
        while ( v8[v9].gshFile )
        {
          if ( ++v9 >= v7 )
            goto LABEL_18;
        }
        if ( v9 >= v7 )
          goto LABEL_18;
        codePos = v8[v9].codePos;
        if ( v6->codePos == codePos )
        {
          v6->codePosEnd = v6->codePos;
LABEL_18:
          if ( !v6->gshFile && v6->codePosEnd != v6->codePos )
          {
            if ( !scrContext->m_parserPub.sourceBufferCodeLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1172, ASSERT_TYPE_ASSERT, "( pScrParserPub->sourceBufferCodeLookup )", (const char *)&queryFormat, "pScrParserPub->sourceBufferCodeLookup") )
              __debugbreak();
            v12 = 4 * (3 * scrContext->m_parserPub.sourceBufferCodeLookupLen + 3);
            if ( v12 > Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferCodeLookupUser) )
            {
              v13 = Mem_HunkUser_AllocInternal(scrContext->m_parserGlob.sourceBufferCodeLookupUser, 0x10000ui64, 1ui64, "Scr_GetNewSourceBufferCode");
              memset_0(v13, 0, 0x10000ui64);
              if ( v12 > Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferCodeLookupUser) )
              {
                LODWORD(v36) = Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferCodeLookupUser);
                LODWORD(v35) = v12;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1180, ASSERT_TYPE_ASSERT, "( size ) <= ( Mem_HunkUser_GetUsedSize( scrContext.m_parserGlob.sourceBufferCodeLookupUser ) )", "size <= Mem_HunkUser_GetUsedSize( scrContext.m_parserGlob.sourceBufferCodeLookupUser )\n\t%i, %i", v35, v36) )
                  __debugbreak();
              }
            }
            sourceBufferCodeLookupLen = scrContext->m_parserPub.sourceBufferCodeLookupLen;
            scrContext->m_parserPub.sourceBufferCodeLookupLen = sourceBufferCodeLookupLen + 1;
            sourceBufferCodeLookupLen *= 3i64;
            sourceBufferCodeLookup = scrContext->m_parserPub.sourceBufferCodeLookup;
            *(&sourceBufferCodeLookup->sourceBufferIndex + sourceBufferCodeLookupLen) = v4;
            v16 = &sourceBufferCodeLookup->start + sourceBufferCodeLookupLen;
            *v16 = LODWORD(v6->codePos) - LODWORD(sourceBufferLookup->codePos);
            if ( v4 + 1 >= scrContext->m_parserPub.sourceBufferLookupLen )
              v16[1] = -1;
            else
              v16[1] = LODWORD(v6->codePosEnd) - LODWORD(sourceBufferLookup->codePos);
          }
          goto LABEL_30;
        }
        v11 = (const unsigned __int8 *)(codePos - 1);
LABEL_17:
        v6->codePosEnd = (const char *)v11;
        goto LABEL_18;
      }
LABEL_30:
      v17 = v2;
      v38 = v2;
      if ( v2 < scrContext->m_parserPub.functionCount )
      {
        do
        {
          v18 = 0x7FFFFFFFi64;
          buf = v6->buf;
          filenameExt = scrContext->m_parserPub.functionList[v2].filenameExt;
          if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( !filenameExt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v21 = buf - filenameExt;
          do
          {
            v22 = filenameExt[v21];
            v23 = v18;
            v24 = *filenameExt++;
            --v18;
            if ( !v23 )
              break;
            if ( v22 != v24 )
              goto LABEL_42;
          }
          while ( v22 );
          ++v6->functionCountTotal;
          ++v2;
        }
        while ( v2 < scrContext->m_parserPub.functionCount );
LABEL_42:
        v17 = v38;
        sourceBufferLookup = v41;
        v37 = v2;
      }
      v25 = v2 - v17;
      v39 = v2 - v17;
      if ( v2 == v17 )
      {
        Com_Printf(23, "Scr_InitSourceFuncInfo: No Functions found in %s \n", v6->buf);
      }
      else
      {
        v26 = (unsigned int)v25;
        v27 = (SourceFunctionInfoStatic *)Scr_Mem_DebugAlloc(scrContext, 48 * v25, "Scr_InitSourceFuncInfo");
        v6->functionLookupStatic = v27;
        memset_0(v27, 0, 48 * v25);
        if ( (unsigned int)v25 >= 0x400 )
        {
          LODWORD(v36) = 1024;
          LODWORD(v35) = v2 - v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3511, ASSERT_TYPE_ASSERT, "( currentFuncIndex - startCurrentFuncIndex ) < ( 1024 )", "currentFuncIndex - startCurrentFuncIndex < SCR_DEBUG_FUNCTION_COUNT_PER_FILE\n\t%i, %i", v35, v36) )
            __debugbreak();
        }
        v28 = (SourceFunctionInfoDynamic *)Scr_Mem_DebugAlloc(scrContext, 280i64 * (unsigned int)v25, "Scr_InitSourceFuncInfo");
        v6->functionLookupDynamic = v28;
        memset_0(v28, 0, 280i64 * (unsigned int)v25);
        if ( v17 < v2 )
        {
          v29 = v17 + 1;
          v30 = v17;
          do
          {
            functionLookupLen = v6->functionLookupLen;
            functionList = scrContext->m_parserPub.functionList;
            v33 = (__int64)&v6->functionLookupStatic[functionLookupLen];
            v6->functionLookupLen = functionLookupLen + 1;
            Core_strcpy_truncate((char *)(v33 + 16), 0x20ui64, functionList[v30].name);
            codePosValue = functionList[v30].codePosValue;
            *(_QWORD *)v33 = codePosValue;
            if ( !codePosValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3525, ASSERT_TYPE_ASSERT, "( funcInfoStatic->codePos )", (const char *)&queryFormat, "funcInfoStatic->codePos") )
              __debugbreak();
            *(_QWORD *)(v33 + 8) = 0i64;
            if ( v29 < scrContext->m_parserPub.functionCount )
              *(_QWORD *)(v33 + 8) = scrContext->m_parserPub.functionList[v29].codePosValue - 1;
            ++v29;
            ++v30;
            --v26;
          }
          while ( v26 );
          LODWORD(v25) = v39;
          v2 = v37;
        }
        if ( v6->functionLookupLen != (_DWORD)v25 )
        {
          LODWORD(v36) = v25;
          LODWORD(v35) = v6->functionLookupLen;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3534, ASSERT_TYPE_ASSERT, "( srcBuffer->functionLookupLen ) == ( allocCount )", "srcBuffer->functionLookupLen == allocCount\n\t%i, %i", v35, v36) )
            __debugbreak();
        }
        sourceBufferLookup = v41;
      }
      v4 = v40;
      sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
      if ( v40 >= sourceBufferLookupLen )
        return;
    }
    v11 = scrContext->m_parserGlob.currentCodePos - 1;
    goto LABEL_17;
  }
}

/*
==============
Scr_LoadedImpureScript
==============
*/
_BOOL8 Scr_LoadedImpureScript()
{
  return g_loadedImpureScript;
}

/*
==============
Scr_ParseIntegerString
==============
*/
char Scr_ParseIntegerString(const char *str, int *result)
{
  int v4; 

  *_errno() = 0;
  v4 = strtol(str, NULL, 10);
  if ( *_errno() == 34 )
    return 0;
  *result = v4;
  return 1;
}

/*
==============
Scr_Parser_DecommitUnusedHunkUsers
==============
*/
void Scr_Parser_DecommitUnusedHunkUsers(const scrContext_t *scrContext)
{
  if ( !scrContext->m_parserGlob.opcodeLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 197, ASSERT_TYPE_ASSERT, "(pScrParserGlob->opcodeLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->opcodeLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_DecommitUnused(scrContext->m_parserGlob.opcodeLookupUser);
  if ( !scrContext->m_parserGlob.sourcePosLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 200, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourcePosLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourcePosLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_DecommitUnused(scrContext->m_parserGlob.sourcePosLookupUser);
  if ( !scrContext->m_parserGlob.sourceBufferLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 203, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourceBufferLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourceBufferLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_DecommitUnused(scrContext->m_parserGlob.sourceBufferLookupUser);
  if ( !scrContext->m_parserGlob.sourceBufferCodeLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 207, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourceBufferCodeLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourceBufferCodeLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_DecommitUnused(scrContext->m_parserGlob.sourceBufferCodeLookupUser);
}

/*
==============
Scr_Parser_InitHunkUsers
==============
*/
void Scr_Parser_InitHunkUsers(scrContext_t *scrContext)
{
  HunkUser *v2; 
  bool v3; 
  HunkUser *v4; 
  HunkUser *v5; 

  if ( scrContext->m_parserGlob.opcodeLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 133, ASSERT_TYPE_ASSERT, "(pScrParserGlob->opcodeLookupUser == nullptr)", (const char *)&queryFormat, "pScrParserGlob->opcodeLookupUser == nullptr") )
    __debugbreak();
  v2 = Mem_HunkUser_Create(0x2200000ui64, "scrParserOpcodeLookup", TRACK_MISC, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
  v3 = scrContext->m_parserGlob.sourcePosLookupUser == NULL;
  scrContext->m_parserGlob.opcodeLookupUser = v2;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 136, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourcePosLookupUser == nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourcePosLookupUser == nullptr") )
    __debugbreak();
  v4 = Mem_HunkUser_Create(0x900000ui64, "scrParserSourcePosLookup", TRACK_MISC, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
  v3 = scrContext->m_parserGlob.sourceBufferLookupUser == NULL;
  scrContext->m_parserGlob.sourcePosLookupUser = v4;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 139, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourceBufferLookupUser == nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourceBufferLookupUser == nullptr") )
    __debugbreak();
  v5 = Mem_HunkUser_Create(0x40000ui64, "scrParserSourceBufLookup", TRACK_MISC, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
  v3 = scrContext->m_parserGlob.sourceBufferCodeLookupUser == NULL;
  scrContext->m_parserGlob.sourceBufferLookupUser = v5;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 143, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourceBufferCodeLookupUser == nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourceBufferCodeLookupUser == nullptr") )
    __debugbreak();
  scrContext->m_parserGlob.sourceBufferCodeLookupUser = Mem_HunkUser_Create(0x40000ui64, "scrParserSourceBufCodeLookup", TRACK_MISC, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
}

/*
==============
Scr_Parser_PreCommitHunkUsers
==============
*/
void Scr_Parser_PreCommitHunkUsers(const scrContext_t *scrContext)
{
  if ( !scrContext->m_parserGlob.opcodeLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 177, ASSERT_TYPE_ASSERT, "(pScrParserGlob->opcodeLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->opcodeLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_CommitReserve(scrContext->m_parserGlob.opcodeLookupUser);
  if ( !scrContext->m_parserGlob.sourcePosLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 180, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourcePosLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourcePosLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_CommitReserve(scrContext->m_parserGlob.sourcePosLookupUser);
  if ( !scrContext->m_parserGlob.sourceBufferLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 183, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourceBufferLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourceBufferLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_CommitReserve(scrContext->m_parserGlob.sourceBufferLookupUser);
  if ( !scrContext->m_parserGlob.sourceBufferCodeLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 187, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourceBufferCodeLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourceBufferCodeLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_CommitReserve(scrContext->m_parserGlob.sourceBufferCodeLookupUser);
}

/*
==============
Scr_Parser_ShutdownHunkUsers
==============
*/
void Scr_Parser_ShutdownHunkUsers(scrContext_t *scrContext)
{
  if ( !scrContext->m_parserGlob.opcodeLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 153, ASSERT_TYPE_ASSERT, "(pScrParserGlob->opcodeLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->opcodeLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_Destroy(scrContext->m_parserGlob.opcodeLookupUser);
  scrContext->m_parserGlob.opcodeLookupUser = NULL;
  if ( !scrContext->m_parserGlob.sourcePosLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 157, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourcePosLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourcePosLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_Destroy(scrContext->m_parserGlob.sourcePosLookupUser);
  scrContext->m_parserGlob.sourcePosLookupUser = NULL;
  if ( !scrContext->m_parserGlob.sourceBufferLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 161, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourceBufferLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourceBufferLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_Destroy(scrContext->m_parserGlob.sourceBufferLookupUser);
  scrContext->m_parserGlob.sourceBufferLookupUser = NULL;
  if ( !scrContext->m_parserGlob.sourceBufferCodeLookupUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 166, ASSERT_TYPE_ASSERT, "(pScrParserGlob->sourceBufferCodeLookupUser != nullptr)", (const char *)&queryFormat, "pScrParserGlob->sourceBufferCodeLookupUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_Destroy(scrContext->m_parserGlob.sourceBufferCodeLookupUser);
  scrContext->m_parserGlob.sourceBufferCodeLookupUser = NULL;
}

/*
==============
Scr_PrevCodePosFileName
==============
*/
char *Scr_PrevCodePosFileName(const scrContext_t *scrContext, ScriptCodePos scriptCodePos)
{
  const char *VarUsagePos; 
  const char *programBuffer; 
  const char *v6; 
  bool v7; 
  ScriptCodePos v8; 

  v8.m_scriptPos = scriptCodePos.m_scriptPos;
  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2298, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  if ( !ScriptCodePos::GetVarUsagePos(&v8) )
    return "<frozen thread>";
  if ( ScriptCodePos::IsEndPos(&v8) )
    return "<removed thread>";
  VarUsagePos = ScriptCodePos::GetVarUsagePos(&v8);
  programBuffer = scrContext->m_varPub.programBuffer;
  v6 = VarUsagePos;
  v7 = Scr_IsInOpcodeMemory(scrContext, VarUsagePos) != 0;
  if ( programBuffer && v7 )
    return scrContext->m_parserPub.sourceBufferLookup[Scr_GetSourceBuffer(scrContext, v6 - 1)].buf;
  else
    return (char *)v6;
}

/*
==============
Scr_PrevCodePosFileNameMatches
==============
*/
bool Scr_PrevCodePosFileNameMatches(const scrContext_t *scrContext, ScriptCodePos scriptCodePos, const char *fileName)
{
  bool v6; 
  char *buf; 
  const char *VarUsagePos; 
  const char *programBuffer; 
  bool v10; 
  ScriptCodePos v12; 

  if ( !fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2387, ASSERT_TYPE_ASSERT, "( fileName )", (const char *)&queryFormat, "fileName") )
    __debugbreak();
  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2388, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  v6 = !scrContext->m_varPub.developer;
  v12.m_scriptPos = scriptCodePos.m_scriptPos;
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2298, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  if ( ScriptCodePos::GetVarUsagePos(&v12) )
  {
    if ( ScriptCodePos::IsEndPos(&v12) )
    {
      buf = "<removed thread>";
    }
    else
    {
      VarUsagePos = ScriptCodePos::GetVarUsagePos(&v12);
      programBuffer = scrContext->m_varPub.programBuffer;
      buf = (char *)VarUsagePos;
      v10 = Scr_IsInOpcodeMemory(scrContext, VarUsagePos) != 0;
      if ( programBuffer )
      {
        if ( v10 )
          buf = scrContext->m_parserPub.sourceBufferLookup[Scr_GetSourceBuffer(scrContext, buf - 1)].buf;
      }
      if ( !buf )
        return 0;
    }
  }
  else
  {
    buf = "<frozen thread>";
  }
  return I_stristr(buf, fileName) != NULL;
}

/*
==============
Scr_PrevCodePosFunctionName
==============
*/
char *Scr_PrevCodePosFunctionName(const scrContext_t *scrContext, ScriptCodePos scriptCodePos)
{
  const char *VarUsagePos; 
  const char *programBuffer; 
  const char *v6; 
  int v7; 
  const char *v8; 
  unsigned int SourceBuffer; 
  SourceLookup *sourcePosLookup; 
  __int64 v11; 
  OpcodeLookup *PrevSourcePosOpcodeLookup; 
  char *startLine; 
  ScriptCodePos v14; 

  v14.m_scriptPos = scriptCodePos.m_scriptPos;
  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2339, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  if ( !ScriptCodePos::GetVarUsagePos(&v14) )
    return "<frozen thread>";
  if ( ScriptCodePos::IsEndPos(&v14) )
    return "<removed thread>";
  VarUsagePos = ScriptCodePos::GetVarUsagePos(&v14);
  programBuffer = scrContext->m_varPub.programBuffer;
  v6 = VarUsagePos;
  v7 = Scr_IsInOpcodeMemory(scrContext, VarUsagePos);
  if ( !programBuffer || !v7 )
    return "<unknown>";
  v8 = v6 - 1;
  SourceBuffer = Scr_GetSourceBuffer(scrContext, v6 - 1);
  sourcePosLookup = scrContext->m_parserGlob.sourcePosLookup;
  v11 = SourceBuffer;
  PrevSourcePosOpcodeLookup = Scr_GetPrevSourcePosOpcodeLookup(scrContext, v8);
  Scr_GetFunctionLineNumInternal(scrContext->m_parserPub.sourceBufferLookup[v11].sourceBuf, *(_DWORD *)&sourcePosLookup[PrevSourcePosOpcodeLookup->sourcePosIndex] & 0xFFFFFF, (const char **)&startLine);
  return startLine;
}

/*
==============
Scr_PrintLookupBufferUsage
==============
*/
void Scr_PrintLookupBufferUsage(const scrContext_t *scrContext)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  bool v4; 
  void (*v5)(int, const char *, ...); 
  int UsedSize; 
  int v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 

  v2 = 100 * Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.opcodeLookupUser) / 0x2200000;
  v3 = 100 * Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourcePosLookupUser) / 0x900000;
  v4 = (int)v2 >= 90 || (int)v3 >= 90;
  v5 = Com_PrintWarning;
  if ( !v4 )
    v5 = Com_Printf;
  v5(24, "Script Lookup Buffer Usage (used/available in kb)\n");
  UsedSize = Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.opcodeLookupUser);
  v5(24, "\tOpcodeBufferUsage: %i/%i (%i %%)\n", (unsigned int)(UsedSize / 1024), 34816i64, v2);
  v7 = Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourcePosLookupUser);
  LODWORD(v10) = v3;
  v5(24, "\tSourcePosLookup: %i/%i (%i %%)\n", (unsigned int)(v7 / 1024), 9216i64, v10);
  v8 = (int)(100 * Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferLookupUser)) / 0x40000;
  v9 = Mem_HunkUser_GetUsedSize(scrContext->m_parserGlob.sourceBufferLookupUser);
  LODWORD(v11) = v8;
  v5(24, "\tSourceBufferLookup: %i/%i (%i %%)\n", (unsigned int)(v9 / 1024), 256i64, v11);
}

/*
==============
Scr_PrintPrevCodePos
==============
*/
void Scr_PrintPrevCodePos(const scrContext_t *scrContext, int channel, ScriptCodePos codePos, unsigned int index, bool bError)
{
  bool developer; 
  const char *m_scriptPos; 
  __int64 SourceBuffer; 
  const char *v11; 
  unsigned int offset; 
  unsigned int sourcePos; 
  const char *v14; 
  const char *v15; 
  int v16; 
  const char *v17; 
  ScriptCodePos v18; 

  v18.m_scriptPos = codePos.m_scriptPos;
  if ( !codePos.m_scriptPos )
  {
    Com_PrintError(channel, "<frozen thread>\n");
    return;
  }
  if ( ScriptCodePos::IsEndPos(&v18) || (developer = scrContext->m_varPub.developer, !ScriptCodePos::IsScriptPos(&v18)) )
  {
    if ( bError )
      Com_PrintError(channel, "<removed thread>\n");
    else
      Com_Printf(channel, "<removed thread>\n");
  }
  else
  {
    if ( developer )
    {
      m_scriptPos = v18.m_scriptPos;
      if ( Scr_HasSourceBuffer(scrContext, v18.m_scriptPos) )
      {
        SourceBuffer = Scr_GetSourceBuffer(scrContext, m_scriptPos - 1);
        v11 = m_scriptPos - 1;
        offset = (_DWORD)m_scriptPos - LODWORD(scrContext->m_parserPub.sourceBufferLookup[SourceBuffer].codePos);
        sourcePos = Scr_GetPrevSourcePos(scrContext, v11, index);
        Scr_PrintSourcePos(scrContext, channel, scrContext->m_parserPub.sourceBufferLookup[SourceBuffer].buf, scrContext->m_parserPub.sourceBufferLookup[SourceBuffer].sourceBuf, sourcePos, offset, bError);
        return;
      }
      v14 = "%p\n\n";
      v15 = m_scriptPos;
      v16 = channel;
      if ( !bError )
      {
        Com_Printf(channel, "%p\n\n", m_scriptPos);
        return;
      }
      goto LABEL_14;
    }
    v17 = v18.m_scriptPos;
    if ( Scr_IsInOpcodeMemory(scrContext, v18.m_scriptPos - 1) )
    {
      v17 -= (__int64)scrContext->m_varPub.programBuffer;
      v14 = "@ %lld\n";
    }
    else
    {
      v14 = "%p\n\n";
    }
    v15 = v17;
    v16 = channel;
    if ( bError )
    {
LABEL_14:
      Com_PrintError(v16, v14, v15);
      return;
    }
    Com_Printf(channel, v14, v17);
  }
}

/*
==============
Scr_PrintPrevCodePosSpreadSheet
==============
*/
void Scr_PrintPrevCodePosSpreadSheet(const scrContext_t *scrContext, int channel, ScriptCodePos scriptCodePos, bool summary, bool functionSummary)
{
  bool v5; 
  const char *VarUsagePos; 
  const char *programBuffer; 
  const char *v11; 
  bool v12; 
  unsigned int SourceBuffer; 
  const char *v14; 
  unsigned __int64 v15; 
  char *buf; 
  const char *v17; 
  const char *v18; 
  SourceLookup *sourcePosLookup; 
  __int64 sourcePosIndex; 
  SourceBufferInfo *sourceBufferLookup; 
  const char *sourceBuf; 
  int v23; 
  const char *v24; 
  int FunctionLineNumInternal; 
  const char *v26; 
  int LineNumInternal; 
  const char *v28; 
  const char *v29; 
  __int64 v30; 
  ScriptCodePos v31; 
  char *startLine; 
  char *rawLine; 
  char line[1024]; 

  v5 = !scrContext->m_varPub.developer;
  v31.m_scriptPos = scriptCodePos.m_scriptPos;
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2403, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer", v31.m_scriptPos) )
    __debugbreak();
  if ( ScriptCodePos::GetVarUsagePos(&v31) )
  {
    if ( ScriptCodePos::IsEndPos(&v31) )
    {
      Com_PrintMessage(channel, "<removed thread>\n", 0);
    }
    else if ( ScriptCodePos::IsScriptPos(&v31) )
    {
      VarUsagePos = ScriptCodePos::GetVarUsagePos(&v31);
      programBuffer = scrContext->m_varPub.programBuffer;
      v11 = VarUsagePos;
      v12 = Scr_IsInOpcodeMemory(scrContext, VarUsagePos) != 0;
      if ( programBuffer && v12 )
      {
        SourceBuffer = Scr_GetSourceBuffer(scrContext, v11 - 1);
        v14 = v11 - 1;
        v15 = SourceBuffer;
        if ( summary )
        {
          Scr_GetPrevSourcePosOpcodeLookup(scrContext, v14);
          buf = scrContext->m_parserPub.sourceBufferLookup[v15].buf;
          if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1896, ASSERT_TYPE_ASSERT, "( filename )", (const char *)&queryFormat, "filename") )
            __debugbreak();
          v17 = (char *)&queryFormat.fmt + 3;
          if ( scrContext->m_parserGlob.saveSourceBufferLookup )
            v17 = "(savegame)";
          v18 = j_va("%s%s\t\n", buf, v17);
        }
        else
        {
          sourcePosLookup = scrContext->m_parserGlob.sourcePosLookup;
          sourcePosIndex = Scr_GetPrevSourcePosOpcodeLookup(scrContext, v14)->sourcePosIndex;
          sourceBufferLookup = scrContext->m_parserPub.sourceBufferLookup;
          sourceBuf = sourceBufferLookup[v15].sourceBuf;
          v23 = *(_DWORD *)&sourcePosLookup[sourcePosIndex] & 0xFFFFFF;
          v24 = sourceBufferLookup[v15].buf;
          if ( functionSummary )
          {
            if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1886, ASSERT_TYPE_ASSERT, "( filename )", (const char *)&queryFormat, "filename") )
              __debugbreak();
            FunctionLineNumInternal = Scr_GetFunctionLineNumInternal(sourceBuf, v23, (const char **)&startLine);
            Scr_CopyFormattedLine(line, startLine);
            v26 = (char *)&queryFormat.fmt + 3;
            if ( scrContext->m_parserGlob.saveSourceBufferLookup )
              v26 = "(savegame)";
            v18 = j_va("%s%s\t%d\t%s\n", v24, v26, (unsigned int)(FunctionLineNumInternal + 1), line);
          }
          else
          {
            if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1873, ASSERT_TYPE_ASSERT, "( filename )", (const char *)&queryFormat, "filename") )
              __debugbreak();
            LineNumInternal = Scr_GetLineNumInternal(sourceBuf, v23, (const char **)&rawLine, (int *)&startLine);
            Scr_CopyFormattedLine(line, rawLine);
            v28 = (char *)&queryFormat.fmt + 3;
            if ( scrContext->m_parserGlob.saveSourceBufferLookup )
              v28 = "(savegame)";
            LODWORD(v30) = (_DWORD)startLine;
            v18 = j_va("%s%s\t%d\t%s\t%d\n", v24, v28, (unsigned int)(LineNumInternal + 1), line, v30);
          }
        }
        Com_PrintMessage(channel, v18, 0);
      }
      else
      {
        v29 = j_va("%s\n", v11);
        Com_PrintMessage(channel, v29, 0);
      }
    }
  }
  else
  {
    Com_PrintMessage(channel, "<frozen thread>\n", 0);
  }
}

/*
==============
Scr_PrintPrevCodePosToBuffer
==============
*/
void Scr_PrintPrevCodePosToBuffer(const scrContext_t *scrContext, char *msg, int msgSize, int *msgPos, ScriptCodePos codePos, unsigned int index)
{
  Scr_PrintPrevCodePosToBufferWOptions(scrContext, msg, msgSize, msgPos, codePos, index, 1, 1, 1);
}

/*
==============
Scr_PrintPrevCodePosToBufferWOptions
==============
*/
__int64 Scr_PrintPrevCodePosToBufferWOptions(const scrContext_t *scrContext, char *msg, int msgSize, int *msgPos, ScriptCodePos codePos, unsigned int index, bool bFileNline, bool bSource, bool bPosOnLine)
{
  unsigned __int64 v10; 
  bool developer; 
  bool v15; 
  const char *m_scriptPos; 
  __int64 SourceBuffer; 
  unsigned int PrevSourcePos; 
  SourceBufferInfo *sourceBufferLookup; 
  unsigned int v20; 
  const char *buf; 
  const char *sourceBuf; 
  unsigned int LineNumInternal; 
  __int64 v24; 
  const char *v25; 
  int v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  ScriptCodePos v34; 
  int col; 
  char *startLine; 
  char line[1024]; 

  v10 = msgSize;
  v34.m_scriptPos = codePos.m_scriptPos;
  if ( !codePos.m_scriptPos )
  {
    Com_sprintfPos_truncate(msg, msgSize, msgPos, "<frozen thread>\n");
    return 0xFFFFFFFFi64;
  }
  if ( ScriptCodePos::IsEndPos(&v34) )
  {
    Com_sprintfPos_truncate(msg, v10, msgPos, "<removed thread>\n");
    return 0xFFFFFFFFi64;
  }
  developer = scrContext->m_varPub.developer;
  if ( !ScriptCodePos::IsScriptPos(&v34) )
    return 0xFFFFFFFFi64;
  v15 = !developer;
  m_scriptPos = v34.m_scriptPos;
  if ( v15 )
  {
    v31 = Scr_IsInOpcodeMemory(scrContext, v34.m_scriptPos - 1);
    v30 = v10;
    if ( v31 )
    {
      Com_sprintfPos_truncate(msg, v10, msgPos, "@ %lld\n", m_scriptPos - scrContext->m_varPub.programBuffer);
      return 0xFFFFFFFFi64;
    }
LABEL_28:
    Com_sprintfPos_truncate(msg, v30, msgPos, "%p\n\n", m_scriptPos);
    return 0xFFFFFFFFi64;
  }
  if ( !Scr_HasSourceBuffer(scrContext, v34.m_scriptPos) )
  {
    v30 = v10;
    goto LABEL_28;
  }
  SourceBuffer = Scr_GetSourceBuffer(scrContext, m_scriptPos - 1);
  PrevSourcePos = Scr_GetPrevSourcePos(scrContext, m_scriptPos - 1, index);
  sourceBufferLookup = scrContext->m_parserPub.sourceBufferLookup;
  v20 = PrevSourcePos;
  buf = sourceBufferLookup[SourceBuffer].buf;
  sourceBuf = sourceBufferLookup[SourceBuffer].sourceBuf;
  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1843, ASSERT_TYPE_ASSERT, "( filename )", (const char *)&queryFormat, "filename") )
    __debugbreak();
  LineNumInternal = Scr_GetLineNumInternal(sourceBuf, v20, (const char **)&startLine, &col);
  Scr_CopyFormattedLine(line, startLine);
  if ( bFileNline )
  {
    v25 = (char *)&queryFormat.fmt + 3;
    if ( scrContext->m_parserGlob.saveSourceBufferLookup )
      v25 = " (savegame)";
    Com_sprintfPos_truncate(msg, v10, msgPos, "%s: %s, line %u\n", v25, buf, LineNumInternal + 1);
  }
  if ( bSource )
    Com_sprintfPos_truncate(msg, v10, msgPos, "%s\n", line);
  if ( bPosOnLine )
  {
    v26 = 0;
    if ( col > 0 )
    {
      v26 = col;
      memset(line, 32, col);
      v24 = 0i64;
    }
    v27 = v26;
    v28 = v26 + 1;
    line[v27] = 42;
    v29 = v27 + 1;
    if ( v29 >= 0x400 )
    {
      j___report_rangecheckfailure(v24);
      JUMPOUT(0x1415679DCi64);
    }
    line[v29] = 0;
    if ( v28 >= 0x400 )
    {
      LODWORD(v33) = 1024;
      LODWORD(v32) = v28;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1859, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( line ) ) + 0 ) )", "i doesn't index ARRAY_COUNT( line )\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    Com_sprintfPos_truncate(msg, v10, msgPos, "%s\n", line);
  }
  return LineNumInternal;
}

/*
==============
Scr_PrintProfileTimes
==============
*/
char Scr_PrintProfileTimes(const scrContext_t *scrContext, float minTime)
{
  int v4; 
  unsigned int opcodeLookupLen; 
  __int64 v8; 
  unsigned int v9; 
  OpcodeLookup *opcodeLookup; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v32; 
  __int64 v33; 
  OpcodeLookup *v34; 
  __int64 v35; 
  unsigned int v36; 
  __int64 v37; 
  __int64 v38; 
  float *Value; 
  float v40; 
  float v41; 
  unsigned int j; 
  __int64 v43; 
  unsigned int v45; 
  int i; 
  __int64 v47; 
  signed __int64 m_scriptPos; 
  OpcodeLookup *v49; 
  __int64 v50; 
  OpcodeLookup *v51; 
  OpcodeLookup *v52; 
  OpcodeLookup *v53; 
  const ProfileScript *ProfileConst; 
  __int64 v55; 
  unsigned int v56; 
  __int64 v57; 
  const char *v58; 
  char (*profileScriptNames)[20]; 
  __int64 v60; 
  unsigned int *p_totalTime; 
  float *v62; 
  float v63; 
  OpcodeLookup *v64; 
  unsigned __int64 v65; 
  double v66; 
  float v67; 
  double v68; 
  __int64 codePosI; 
  __int64 v70; 
  bool developer; 
  const char *v72; 
  const char *programBuffer; 
  bool v74; 
  unsigned int SourceBuffer; 
  SourceLookup *sourcePosLookup; 
  const char *v77; 
  __int64 v78; 
  unsigned int offset; 
  OpcodeLookup *PrevSourcePosOpcodeLookup; 
  const char *v81; 
  char *fmt; 
  ScriptCodePos v83; 

  v4 = 0;
  if ( minTime <= 0.0 )
    goto LABEL_19;
  opcodeLookupLen = scrContext->m_parserGlob.opcodeLookupLen;
  v8 = 0i64;
  v9 = 0;
  if ( opcodeLookupLen >= 4 )
  {
    opcodeLookup = scrContext->m_parserGlob.opcodeLookup;
    __asm
    {
      vpxor   xmm4, xmm4, xmm4
      vpxor   xmm5, xmm5, xmm5
    }
    v13 = 2;
    do
    {
      v14 = v9;
      v9 += 4;
      _XMM0 = (__int128)opcodeLookup[v14];
      __asm
      {
        vmovhpd xmm0, xmm0, qword ptr [r10+rax*8]
        vpsllq  xmm1, xmm0, xmm7
        vpshufb xmm1, xmm1, cs:__xmm@0b0a0908030201000b0a090803020100
        vpmovsxdq xmm2, xmm1
      }
      _XMM0 = (__int128)opcodeLookup[v13];
      __asm { vpand   xmm3, xmm2, xmm8 }
      v13 += 4;
      __asm
      {
        vmovhpd xmm0, xmm0, qword ptr [r10+rax*8]
        vpsllq  xmm1, xmm0, xmm7
        vpshufb xmm1, xmm1, cs:__xmm@0b0a0908030201000b0a090803020100
        vpmovsxdq xmm2, xmm1
        vpaddq  xmm4, xmm3, xmm4
        vpand   xmm3, xmm2, xmm8
        vpaddq  xmm5, xmm3, xmm5
      }
    }
    while ( v9 < (opcodeLookupLen & 0xFFFFFFFC) );
    __asm
    {
      vpaddq  xmm1, xmm5, xmm4
      vpsrldq xmm0, xmm1, 8
      vpaddq  xmm1, xmm1, xmm0
    }
    v8 = _XMM1;
  }
  v32 = 0i64;
  v33 = 0i64;
  if ( v9 < opcodeLookupLen )
  {
    if ( opcodeLookupLen - v9 >= 2 )
    {
      v34 = scrContext->m_parserGlob.opcodeLookup;
      v35 = v9;
      v36 = ((opcodeLookupLen - v9 - 2) >> 1) + 1;
      v37 = v36;
      v9 += 2 * v36;
      do
      {
        v38 = (__int64)v34[v35];
        v35 += 2i64;
        v32 += (16 * (_DWORD)v38) & 0x7FFFFFF0;
        v33 += (16 * (unsigned int)*(_QWORD *)&v34[v35 - 1]) & 0x7FFFFFF0;
        --v37;
      }
      while ( v37 );
    }
    if ( v9 < opcodeLookupLen )
      v8 += (16 * (unsigned int)*(_QWORD *)&scrContext->m_parserGlob.opcodeLookup[v9]) & 0x7FFFFFF0;
    v8 += v33 + v32;
  }
  Value = (float *)Sys_GetValue(0);
  v40 = (float)v8;
  if ( v8 < 0 )
  {
    v41 = (float)v8;
    v40 = v41 + 1.8446744e19;
  }
  if ( (float)(v40 * Value[8915]) >= minTime )
  {
LABEL_19:
    v45 = 0;
    for ( i = 0; v45 < scrContext->m_parserGlob.opcodeLookupLen; ++v45 )
    {
      if ( *(_QWORD *)&scrContext->m_parserGlob.opcodeLookup[v45] >> 54 )
      {
        ++i;
      }
      else if ( ((16 * *(_DWORD *)&scrContext->m_parserGlob.opcodeLookup[v45]) & 0x7FFFFFF0) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4107, ASSERT_TYPE_ASSERT, "( !pScrParserGlob->opcodeLookup[i].GetProfileTime() )", (const char *)&queryFormat, "!pScrParserGlob->opcodeLookup[i].GetProfileTime()") )
      {
        __debugbreak();
      }
    }
    v47 = i;
    m_scriptPos = 24i64 * i;
    v83.m_scriptPos = (const char *)m_scriptPos;
    v49 = (OpcodeLookup *)Mem_Virtual_Alloc(m_scriptPos, "Scr_PrintProfileTimes", TRACK_DEBUG);
    v50 = 0i64;
    v51 = v49;
    if ( scrContext->m_parserGlob.opcodeLookupLen )
    {
      v52 = v49;
      do
      {
        v53 = scrContext->m_parserGlob.opcodeLookup;
        if ( *(_QWORD *)&v53[v50] >> 54 )
        {
          *(_OWORD *)v52 = v53[v50];
          *(double *)&v52->sourcePosIndex = *(double *)&v53[v50].sourcePosIndex;
          ++v4;
          ++v52;
          *(_QWORD *)&scrContext->m_parserGlob.opcodeLookup[v50] = 0i64;
        }
        else if ( ((16 * *(_DWORD *)&v53[v50]) & 0x7FFFFFF0) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4120, ASSERT_TYPE_ASSERT, "( !pScrParserGlob->opcodeLookup[i].GetProfileTime() )", (const char *)&queryFormat, "!pScrParserGlob->opcodeLookup[i].GetProfileTime()") )
        {
          __debugbreak();
        }
        v50 = (unsigned int)(v50 + 1);
      }
      while ( (unsigned int)v50 < scrContext->m_parserGlob.opcodeLookupLen );
      m_scriptPos = (signed __int64)v83.m_scriptPos;
      v47 = i;
    }
    if ( v4 != i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4128, ASSERT_TYPE_ASSERT, "( profileIndex == profileCount )", (const char *)&queryFormat, "profileIndex == profileCount") )
      __debugbreak();
    std::_Sort_unchecked<OpcodeLookup *,bool (*)(OpcodeLookup const &,OpcodeLookup const &)>(v51, (OpcodeLookup *)((char *)v51 + m_scriptPos), m_scriptPos / 24, Scr_CompareProfileTimes);
    Com_Printf(23, "\n");
    ProfileConst = ScriptContext_GetProfileConst(scrContext);
    v55 = 128i64;
    v56 = 0;
    v57 = 128i64;
    v58 = ProfileConst->profileScriptNames[0];
    profileScriptNames = ProfileConst->profileScriptNames;
    do
    {
      v60 = -1i64;
      do
        ++v60;
      while ( (*profileScriptNames)[v60] );
      if ( (unsigned int)v60 <= v56 )
        LODWORD(v60) = v56;
      ++profileScriptNames;
      v56 = v60;
      --v57;
    }
    while ( v57 );
    p_totalTime = &ProfileConst->write[0].totalTime;
    do
    {
      if ( *v58 )
      {
        v62 = (float *)Sys_GetValue(0);
        v63 = (float)*p_totalTime;
        Com_Printf(23, "%-*s %6.2f\n", v56, v58, (float)(v63 * v62[8915]));
      }
      v58 += 20;
      p_totalTime += 4;
      --v55;
    }
    while ( v55 );
    Com_Printf(23, "\n");
    if ( v47 > 0 )
    {
      v64 = v51;
      do
      {
        v65 = *(_QWORD *)v64;
        v66 = (float)((float)((*(_QWORD *)v64 >> 23) & 0x7FFFFFF0) * *((float *)Sys_GetValue(0) + 8915));
        v67 = (float)((16 * *(_QWORD *)v64) & 0x7FFFFFF0);
        v68 = (float)(v67 * *((float *)Sys_GetValue(0) + 8915));
        LODWORD(fmt) = v65 >> 54;
        Com_Printf(23, "time: %f, builtin: %f, usage: %d\n", v68, v66, fmt);
        codePosI = v64->codePosI;
        if ( (_DWORD)codePosI )
          v70 = scrContext->m_parserBasePointer + codePosI;
        else
          v70 = 0i64;
        v83.m_scriptPos = ScriptCodePos::CreateScriptPos((const char *)(v70 + 1)).m_scriptPos;
        if ( v83.m_scriptPos )
        {
          if ( ScriptCodePos::IsEndPos(&v83) || (developer = scrContext->m_varPub.developer, !ScriptCodePos::IsScriptPos(&v83)) )
          {
            Com_PrintError(23, "<removed thread>\n");
          }
          else if ( developer )
          {
            v72 = v83.m_scriptPos;
            programBuffer = scrContext->m_varPub.programBuffer;
            v74 = Scr_IsInOpcodeMemory(scrContext, v83.m_scriptPos) != 0;
            if ( programBuffer && v74 )
            {
              SourceBuffer = Scr_GetSourceBuffer(scrContext, v72 - 1);
              sourcePosLookup = scrContext->m_parserGlob.sourcePosLookup;
              v77 = v72 - 1;
              v78 = SourceBuffer;
              offset = (_DWORD)v72 - LODWORD(scrContext->m_parserPub.sourceBufferLookup[v78].codePos);
              PrevSourcePosOpcodeLookup = Scr_GetPrevSourcePosOpcodeLookup(scrContext, v77);
              Scr_PrintSourcePos(scrContext, 23, scrContext->m_parserPub.sourceBufferLookup[v78].buf, scrContext->m_parserPub.sourceBufferLookup[v78].sourceBuf, *(_DWORD *)&sourcePosLookup[PrevSourcePosOpcodeLookup->sourcePosIndex + 1] & 0xFFFFFF, offset, 1);
            }
            else
            {
              Com_PrintError(23, "%p\n\n", v72);
            }
          }
          else
          {
            v81 = v83.m_scriptPos;
            if ( Scr_IsInOpcodeMemory(scrContext, v83.m_scriptPos - 1) )
              Com_PrintError(23, "@ %lld\n", v81 - scrContext->m_varPub.programBuffer);
            else
              Com_PrintError(23, "%p\n\n", v81);
          }
        }
        else
        {
          Com_PrintError(23, "<frozen thread>\n");
        }
        ++v64;
        --v47;
      }
      while ( v47 );
    }
    Com_Printf(23, "\n");
    Mem_Virtual_Free(v51);
    return 1;
  }
  else
  {
    for ( j = 0; j < scrContext->m_parserGlob.opcodeLookupLen; *(_QWORD *)&scrContext->m_parserGlob.opcodeLookup[v43] = 0i64 )
      v43 = j++;
    return 0;
  }
}

/*
==============
Scr_PrintScriptCanonicalStringUsage
==============
*/
void Scr_PrintScriptCanonicalStringUsage(void)
{
  Com_Printf(23, "CANONICAL_STRING_BUFFER_SIZE: %u / %u", g_scrCanonicalStringPub.canonicalStringBufferSize, 409600i64);
}

/*
==============
Scr_PrintScriptFunctionNames
==============
*/
void Scr_PrintScriptFunctionNames(const scrContext_t *scrContext, const char *scriptFileName)
{
  bool v4; 
  unsigned int i; 
  SourceBufferInfo *v6; 
  __int64 j; 
  __int64 v8; 

  if ( scrContext->m_varPub.developer )
  {
    v4 = I_strcmp(scriptFileName, "all") == 0;
    for ( i = 0; i < scrContext->m_parserPub.sourceBufferLookupLen; ++i )
    {
      v6 = &scrContext->m_parserPub.sourceBufferLookup[i];
      if ( v4 || I_stristr(v6->buf, scriptFileName) )
      {
        LODWORD(v8) = v6->functionCountTotal;
        Com_Printf(23, "[%d] [%d/%d] %s: \n", i, v6->functionLookupLen, v8, v6->buf);
        for ( j = 0i64; (unsigned int)j < v6->functionLookupLen; j = (unsigned int)(j + 1) )
          Com_Printf(23, "   [%d] %s @ [%lx]\n", (unsigned int)j, v6->functionLookupStatic[j].funcName, v6->functionLookupStatic[j].codePos);
      }
    }
  }
}

/*
==============
Scr_PrintScriptProfileTimesForScriptFile
==============
*/
void Scr_PrintScriptProfileTimesForScriptFile(const scrContext_t *scrContext)
{
  unsigned int i; 
  SourceBufferInfo *v3; 
  float totalTime; 
  float totalBuiltIn; 
  double v6; 
  double v7; 
  float v8; 

  Com_Printf(23, "name:           time,   avg,    max,   total,   builtin,  total - builtin\n");
  for ( i = 0; i < scrContext->m_parserPub.sourceBufferLookupLen; ++i )
  {
    v3 = &scrContext->m_parserPub.sourceBufferLookup[i];
    totalTime = v3->totalTime;
    if ( totalTime != 0.0 )
    {
      totalBuiltIn = v3->totalBuiltIn;
      v6 = (float)((float)v3->maxTime * *((float *)Sys_GetValue(0) + 8915));
      v7 = (float)((float)v3->avgTime * *((float *)Sys_GetValue(0) + 8915));
      v8 = (float)v3->time * *((float *)Sys_GetValue(0) + 8915);
      Com_Printf(23, "%s: %0.3f, %0.3f, %0.3f, %0.3f, %0.3f, %0.3f\n", v3->buf, v8, v7, v6, totalTime, totalBuiltIn, (float)(totalTime - totalBuiltIn));
    }
  }
}

/*
==============
Scr_PrintSourcePos
==============
*/
void Scr_PrintSourcePos(const scrContext_t *scrContext, int channel, const char *filename, const char *buf, unsigned int sourcePos, const unsigned int offset, bool bError)
{
  int v11; 
  SaveSourceBufferInfo *saveSourceBufferLookup; 
  const char *v13; 
  __int64 v14; 
  const char *v15; 
  int v16; 
  unsigned __int64 v17; 
  char *fmt; 
  __int64 v19; 
  int col; 
  char *startLine; 
  char line[1024]; 

  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1795, ASSERT_TYPE_ASSERT, "( filename )", (const char *)&queryFormat, "filename") )
    __debugbreak();
  v11 = Scr_GetLineNumInternal(buf, sourcePos, (const char **)&startLine, &col) + 1;
  Scr_CopyFormattedLine(line, startLine);
  Com_MapLoadErrors_PushIgnore();
  saveSourceBufferLookup = scrContext->m_parserGlob.saveSourceBufferLookup;
  if ( bError )
  {
    v13 = (char *)&queryFormat.fmt + 3;
    if ( saveSourceBufferLookup )
      v13 = " (savegame)";
    LODWORD(v19) = offset;
    LODWORD(fmt) = v11;
    Com_PrintError(channel, "(file '%s'%s, line %d, offset %d)\n", filename, v13, fmt, v19);
    Com_PrintError(channel, "%s\n", line);
  }
  else
  {
    v15 = (char *)&queryFormat.fmt + 3;
    if ( saveSourceBufferLookup )
      v15 = " (savegame)";
    LODWORD(v19) = offset;
    LODWORD(fmt) = v11;
    Com_Printf(channel, "%s: c:\\trees\\iw5\\game\\share\\raw\\%s, line %d, offset %d\n", v15, filename, fmt, v19);
    Com_Printf(channel, "%s\n", line);
  }
  v16 = 0;
  if ( col > 0 )
  {
    v16 = col;
    memset(line, 32, col);
    v14 = 0i64;
  }
  line[v16] = 42;
  v17 = v16 + 1i64;
  if ( v17 >= 0x400 )
  {
    j___report_rangecheckfailure(v14);
    JUMPOUT(0x1415688CEi64);
  }
  line[v17] = 0;
  if ( v16 + 1 >= 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1819, ASSERT_TYPE_ASSERT, "(i < static_cast<int>( ( sizeof( *array_counter( line ) ) + 0 ) ))", (const char *)&queryFormat, "i < static_cast<int>( ARRAY_COUNT( line ) )") )
    __debugbreak();
  if ( bError )
    Com_PrintError(channel, "%s\n", line);
  else
    Com_Printf(channel, "%s\n", line);
  Com_MapLoadErrors_PopIgnore();
}

/*
==============
Scr_ReadFile
==============
*/
char *Scr_ReadFile(scrContext_t *scrContext, const char *extFilename, const char *codePos, bool archive, const ScrThreadMode threadMode, int prevIndex)
{
  const dvar_t *v6; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  int v13; 
  __int64 v14; 
  const dvar_t *v15; 
  __int64 v16; 
  __int64 handle; 
  char *v18; 
  fileHandle_t fileHandle; 
  fileHandle_t file; 
  char goldname[128]; 

  v6 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer )
  {
    v11 = DCONST_DVARBOOL_developer_looseScriptLoadConsole;
    if ( !DCONST_DVARBOOL_developer_looseScriptLoadConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseScriptLoadConsole") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      v12 = DCONST_DVARBOOL_developer_looseScriptLoadConsole;
      if ( !DCONST_DVARBOOL_developer_looseScriptLoadConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseScriptLoadConsole") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( !v12->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1554, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_developer_looseScriptLoadConsole, \"developer_looseScriptLoadConsole\" ))", (const char *)&queryFormat, "Dconst_GetBool( developer_looseScriptLoadConsole )") )
        __debugbreak();
      if ( FS_FOpenFileReadScriptLoose(extFilename, &file) >= 0 )
      {
        FS_FCloseFile(file);
        v13 = -1;
        fileHandle.handle.handle = -1i64;
        v14 = -1i64;
        if ( Scr_UseSPGoldScript(extFilename, goldname, 0x80ui64) )
        {
          v15 = DCONST_DVARBOOL_developer_looseScriptLoadConsole;
          if ( !DCONST_DVARBOOL_developer_looseScriptLoadConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseScriptLoadConsole") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v15);
          if ( !v15->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1452, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_developer_looseScriptLoadConsole, \"developer_looseScriptLoadConsole\" ))", (const char *)&queryFormat, "Dconst_GetBool( developer_looseScriptLoadConsole )") )
            __debugbreak();
          v16 = FS_FOpenFileReadScriptLoose(goldname, &fileHandle);
          handle = fileHandle.handle.handle;
          v14 = v16;
          if ( fileHandle.handle.handle == -1 )
          {
LABEL_27:
            v14 = Scr_FOpenFileRead_LoadObj(extFilename, &fileHandle, threadMode);
            if ( v14 < 0 )
            {
              v18 = NULL;
LABEL_30:
              Scr_AddSourceBufferInternal(scrContext, extFilename, codePos, v18, v13, 1, archive, 1, prevIndex);
              return v18;
            }
LABEL_29:
            g_loadedImpureScript = 1;
            v18 = (char *)Scr_Mem_TempAlloc(scrContext, v14 + 1, "Scr_ReadFile");
            FS_Read(v18, v14, fileHandle);
            v18[v14] = 0;
            FS_FCloseFile(fileHandle);
            v13 = truncate_cast<int,__int64>(v14);
            goto LABEL_30;
          }
          extFilename = goldname;
        }
        else
        {
          handle = fileHandle.handle.handle;
        }
        if ( handle != -1 )
          goto LABEL_29;
        goto LABEL_27;
      }
    }
  }
  return Scr_ReadFile_FastFile(scrContext, extFilename, codePos, archive, threadMode, prevIndex);
}

/*
==============
Scr_ReadFile_FastFile
==============
*/
char *Scr_ReadFile_FastFile(scrContext_t *scrContext, const char *extFilename, const char *codePos, bool archive, const ScrThreadMode threadMode, int prevIndex)
{
  const char *v6; 
  int v10; 
  char *v11; 
  const RawFile *rawfile; 
  int RawFileLen; 
  char *v15; 
  char goldname[128]; 

  v6 = extFilename;
  if ( Scr_UseSPGoldScript(extFilename, goldname, 0x80ui64) )
  {
    v10 = DB_XAssetExists(ASSET_TYPE_RAWFILE, goldname);
    v11 = goldname;
    if ( !v10 )
      v11 = (char *)v6;
    v6 = v11;
  }
  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, v6, 1).rawfile;
  if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, v6) )
  {
    Scr_AddSourceBufferInternal(scrContext, v6, codePos, NULL, -1, 1, archive, 1, prevIndex);
    return 0i64;
  }
  else
  {
    RawFileLen = DB_GetRawFileLen(rawfile);
    v15 = (char *)Scr_Mem_TempAlloc(scrContext, RawFileLen, "Scr_ReadFile_FastFile");
    DB_GetRawBuffer(rawfile, v15, RawFileLen);
    Scr_AddSourceBufferInternal(scrContext, v6, codePos, v15, RawFileLen - 1, 1, archive, 1, prevIndex);
    return v15;
  }
}

/*
==============
Scr_ScriptProfilePrintUsageReportToBlackBox
==============
*/
void Scr_ScriptProfilePrintUsageReportToBlackBox(scrContext_t *scrContext)
{
  scrContext_t *v1; 
  const ServerTiming *Current; 
  float serverTimeTarget; 
  SvGameGlobals *SvGameGlobalsCommon; 
  ProfileScript *Profile; 
  SourceBufferInfo *SourceBufferLookup; 
  int serverTimeExceedCount; 
  SourceBufferInfo *v8; 
  __int64 serverTimeCount; 
  float v10; 
  float v11; 
  float v12; 
  unsigned int v13; 
  int v14; 
  float v15; 
  __int64 v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v26; 
  int clientMsgCount; 
  __int128 v29; 
  __int128 v33; 
  __int128 v35; 
  float v37; 
  float *p_fileTimeBuiltIn; 
  float *v39; 
  SourceBufferInfo *v40; 
  unsigned int v41; 
  __int64 v42; 
  unsigned int *v43; 
  unsigned int i; 
  __int64 v45; 
  float v46; 
  float v47; 
  float v48; 
  const char *BuiltInName; 
  __int64 v50; 
  const char *v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  __int64 v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  __int64 v61; 
  char *v62; 
  unsigned int v63; 
  unsigned int v65; 
  SourceBufferInfo *v66; 
  SourceBufferInfo *v67; 

  v1 = scrContext;
  if ( scrContext->m_varPub.developer )
  {
    if ( Com_IsAnyLocalServerRunning() )
    {
      Current = SV_Timing_GetCurrent();
      serverTimeTarget = Current->serverTimeTarget;
      SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
      Profile = ScriptContext_GetProfile(v1);
      SourceBufferLookup = Scr_GetSourceBufferLookup(v1);
      serverTimeExceedCount = Current->serverTimeExceedCount;
      v8 = SourceBufferLookup;
      serverTimeCount = Current->serverTimeCount;
      v67 = SourceBufferLookup;
      if ( serverTimeExceedCount <= 0 )
        v10 = 0.0;
      else
        v10 = (float)(Current->serverTimeTotalExceed / (float)serverTimeExceedCount) - serverTimeTarget;
      if ( (_DWORD)serverTimeCount )
      {
        v11 = (float)serverTimeCount;
        v12 = Current->serverTimeTotal / v11;
      }
      else
      {
        v12 = 0.0;
      }
      v13 = 0;
      DLog_RecordEvent<4096,char const *,float,char const *,float,char const *,int,char const *,float,char const *,float,char const *,unsigned int,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t>(0i64, "scr_usage", "servertimeavg", v12, "serverttimemax", Current->serverTimeMax, "servertimeexceededcount", serverTimeExceedCount, "servertimeexceededavg", v10, "servertimethreshold", serverTimeTarget, "matchframecount", serverTimeCount, "scrtimeavg", 0, "scrtimemax", 0, "scrttimeexceededavg", 0, "msgtimeavg", 0, "msgtimemax", 0, "proftimeavg", 0, "proftimemax", 0, "proftimemaxatframe", 0, "usagecallcountavg", 0, "usagecallcountmax", 0, "usagethreadcountavg", 0, "usagethreadcountmax", 0, "filenum", 0, "filename", 0, "fileavgtime", 0, "fileavgscrtime", 0, "fileavgbuiltin", 0, "filemaxops", 0, "funcnum", 0, "funcname", 0, "funcavgtime", 0, "funcmaxtime", 0, "functimeatspike", 0, "funcavgscrtime", 0, "funcavgbuiltin", 0, "funccalls", 0, "funcmaxops", 0, "builtinnum", 0, "builtinname", 0, "builtinavgtime", 0, "builtinmaxtime", 0, "builtincalls", 0);
      v14 = Current->serverTimeExceedCount;
      if ( v14 <= 0 )
        v15 = 0.0;
      else
        v15 = SvGameGlobalsCommon->timeStats.serverScriptTimeExceedTotal / (float)v14;
      v16 = Current->serverTimeCount;
      if ( (_DWORD)v16 )
      {
        v17 = (float)v16;
        v18 = SvGameGlobalsCommon->timeStats.serverScriptTimeTotal / v17;
      }
      else
      {
        v18 = 0.0;
      }
      DLog_RecordEvent<4096,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,float,char const *,float,char const *,float,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t>(0i64, "scr_usage", "servertimeavg", 0, "serverttimemax", 0, "servertimeexceededcount", 0, "servertimeexceededavg", 0, "servertimethreshold", 0, "matchframecount", 0, "scrtimeavg", v18, "scrtimemax", SvGameGlobalsCommon->timeStats.serverScriptTimeMax, "scrttimeexceededavg", v15, "msgtimeavg", 0, "msgtimemax", 0, "proftimeavg", 0, "proftimemax", 0, "proftimemaxatframe", 0, "usagecallcountavg", 0, "usagecallcountmax", 0, "usagethreadcountavg", 0, "usagethreadcountmax", 0, "filenum", 0, "filename", 0, "fileavgtime", 0, "fileavgscrtime", 0, "fileavgbuiltin", 0, "filemaxops", 0, "funcnum", 0, "funcname", 0, "funcavgtime", 0, "funcmaxtime", 0, "functimeatspike", 0, "funcavgscrtime", 0, "funcavgbuiltin");
      v19 = Current->serverTimeCount;
      v20 = 0.0;
      if ( (_DWORD)v19 )
        v20 = (float)(SvGameGlobalsCommon->timeStats.serverScriptUsageThreadResumeTotal / (unsigned int)v19);
      v21 = 0.0;
      if ( (_DWORD)v19 )
        v21 = (float)(SvGameGlobalsCommon->timeStats.serverScriptUsageOpTotal / (unsigned int)v19);
      if ( (_DWORD)v19 )
      {
        v22 = (float)v19;
        v23 = SvGameGlobalsCommon->timeStats.serverScriptProfileCalcTimeTotal / v22;
      }
      else
      {
        v23 = 0.0;
      }
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      if ( (Current->clientMsgTicksMax & 0x8000000000000000ui64) != 0i64 )
      {
        *((_QWORD *)&v26 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v26 = *(double *)&_XMM0 + 1.844674407370955e19;
        _XMM0 = v26;
      }
      clientMsgCount = Current->clientMsgCount;
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v29 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM0 = v29;
      __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
      if ( clientMsgCount <= 0 )
      {
        v37 = 0.0;
      }
      else
      {
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, rax }
        if ( (Current->clientMsgTicksTotal & 0x8000000000000000ui64) != 0i64 )
        {
          *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v33 = *(double *)&_XMM0 + 1.844674407370955e19;
          _XMM0 = v33;
        }
        *((_QWORD *)&v35 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v35 = *(double *)&_XMM0 * msecPerRawTimerTick;
        _XMM0 = v35;
        __asm { vcvtsd2ss xmm2, xmm0, xmm0 }
        v37 = *(float *)&_XMM2 / (float)clientMsgCount;
      }
      DLog_RecordEvent<4096,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,float,char const *,float,char const *,float,char const *,float,char const *,unsigned int,char const *,float,char const *,unsigned int,char const *,float,char const *,unsigned int,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t>(0i64, "scr_usage", "servertimeavg", 0, "serverttimemax", 0, "servertimeexceededcount", 0, "servertimeexceededavg", 0, "servertimethreshold", 0, "matchframecount", 0, "scrtimeavg", 0, "scrtimemax", 0, "scrttimeexceededavg", 0, "msgtimeavg", v37, "msgtimemax", *(float *)&_XMM7, "proftimeavg", v23, "proftimemax", SvGameGlobalsCommon->timeStats.serverScriptProfileCalcTimeMax, "proftimemaxatframe", SvGameGlobalsCommon->timeStats.serverScriptProfileCalcTimeMaxAtFrame, "usagecallcountavg", v21, "usagecallcountmax", SvGameGlobalsCommon->timeStats.serverScriptUsageOpCountMax, "usagethreadcountavg", v20, "usagethreadcountmax", SvGameGlobalsCommon->timeStats.serverScriptUsageThreadResumeMax, "filenum", 0, "filename", 0, "fileavgtime", 0, "fileavgscrtime", 0, "fileavgbuiltin", 0, "filemaxops", 0, "funcnum", 0, "funcname", 0, "funcavgtime", 0, "funcmaxtime", 0, "functimeatspike", 0, "funcavgscrtime", 0, "funcavgbuiltin", 0, "funccalls", 0, "funcmaxops", 0, "builtinnum", 0, "builtinname", 0, "builtinavgtime", 0, "builtinmaxtime", 0, "builtincalls", 0);
      if ( script_usage_tracking && script_usage_tracking->current.integer )
      {
        Scr_SortTrackedProfileData(v1);
        v65 = 0;
        p_fileTimeBuiltIn = &Profile->scrFileTimeTracking[0].fileTimeBuiltIn;
        do
        {
          if ( *((_DWORD *)p_fileTimeBuiltIn + 1) )
          {
            if ( *((unsigned __int16 *)p_fileTimeBuiltIn + 10) >= v1->m_parserPub.sourceBufferLookupLen )
            {
              LODWORD(v62) = v1->m_parserPub.sourceBufferLookupLen;
              LODWORD(v61) = *((unsigned __int16 *)p_fileTimeBuiltIn + 10);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3741, ASSERT_TYPE_ASSERT, "(unsigned)( fileSummary->srcBufferIdx ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "fileSummary->srcBufferIdx doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v61, v62) )
                __debugbreak();
            }
            v39 = p_fileTimeBuiltIn - 2206;
            v40 = &v8[*((unsigned __int16 *)p_fileTimeBuiltIn + 10)];
            v41 = 0;
            v66 = v40;
            do
            {
              if ( v39 == (float *)268 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3749, ASSERT_TYPE_ASSERT, "( funcSummary )", (const char *)&queryFormat, "funcSummary") )
                __debugbreak();
              if ( *((unsigned __int16 *)v39 + 6) >= v40->functionLookupLen )
              {
                LODWORD(v62) = v40->functionLookupLen;
                LODWORD(v61) = *((unsigned __int16 *)v39 + 6);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3750, ASSERT_TYPE_ASSERT, "(unsigned)( funcSummary->funcIndex ) < (unsigned)( srcBuffer->functionLookupLen )", "funcSummary->funcIndex doesn't index srcBuffer->functionLookupLen\n\t%i not in [0, %i)", v61, v62) )
                  __debugbreak();
              }
              v42 = (__int64)&v40->functionLookupStatic[*((unsigned __int16 *)v39 + 6)];
              if ( *((_BYTE *)v39 + 14) )
              {
                v43 = (unsigned int *)(v39 - 65);
                for ( i = 0; i < 0x10; ++i )
                {
                  if ( v43 == (unsigned int *)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3761, ASSERT_TYPE_ASSERT, "( builtInFuncSummary )", (const char *)&queryFormat, "builtInFuncSummary") )
                    __debugbreak();
                  if ( *((_BYTE *)v43 + 6) )
                  {
                    if ( !*((_WORD *)v43 + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3766, ASSERT_TYPE_ASSERT, "( builtInFuncSummary->builtInIndex )", (const char *)&queryFormat, "builtInFuncSummary->builtInIndex") )
                      __debugbreak();
                    v45 = *v43;
                    v46 = *((float *)v43 - 1);
                    if ( (_DWORD)v45 )
                    {
                      v47 = (float)v45;
                      v48 = *((float *)v43 - 2) / v47;
                    }
                    else
                    {
                      v48 = 0.0;
                    }
                    BuiltInName = GetBuiltInName(scrContext, *((unsigned __int16 *)v43 + 2));
                    v50 = *((unsigned int *)v39 + 1);
                    v51 = BuiltInName;
                    v52 = (float)v50;
                    if ( (_DWORD)v50 )
                      v53 = *v39 / v52;
                    else
                      v53 = 0.0;
                    if ( (_DWORD)v50 )
                      v54 = (float)(*(v39 - 3) - *v39) / v52;
                    else
                      v54 = 0.0;
                    if ( (_DWORD)v50 )
                      v55 = *(v39 - 3) / v52;
                    else
                      v55 = 0.0;
                    v56 = *((unsigned int *)p_fileTimeBuiltIn + 1);
                    v57 = (float)v56;
                    if ( (_DWORD)v56 )
                      v58 = *p_fileTimeBuiltIn / v57;
                    else
                      v58 = 0.0;
                    if ( (_DWORD)v56 )
                      v59 = (float)(*(p_fileTimeBuiltIn - 1) - *p_fileTimeBuiltIn) / v57;
                    else
                      v59 = 0.0;
                    if ( (_DWORD)v56 )
                      v60 = *(p_fileTimeBuiltIn - 1) / v57;
                    else
                      v60 = 0.0;
                    v63 = v45;
                    v13 = v65;
                    DLog_RecordEvent<4096,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,unsigned int,char const *,char *,char const *,float,char const *,float,char const *,float,char const *,unsigned __int64,char const *,unsigned int,char const *,char *,char const *,float,char const *,float,char const *,float,char const *,float,char const *,float,char const *,unsigned int,char const *,unsigned int,char const *,unsigned int,char const *,char const *,char const *,float,char const *,float,char const *,unsigned int>(0i64, "scr_usage", "servertimeavg", 0, "serverttimemax", 0, "servertimeexceededcount", 0, "servertimeexceededavg", 0, "servertimethreshold", 0, "matchframecount", 0, "scrtimeavg", 0, "scrtimemax", 0, "scrttimeexceededavg", 0, "msgtimeavg", 0, "msgtimemax", 0, "proftimeavg", 0, "proftimemax", 0, "proftimemaxatframe", 0, "usagecallcountavg", 0, "usagecallcountmax", 0, "usagethreadcountavg", 0, "usagethreadcountmax", 0, "filenum", v65, "filename", v66->buf, "fileavgtime", v60, "fileavgscrtime", v59, "fileavgbuiltin", v58, "filemaxops", *(_QWORD *)(p_fileTimeBuiltIn + 3), "funcnum", v41, "funcname", (char *)(v42 + 16), "funcavgtime", v55, "funcmaxtime", *(v39 - 2), "functimeatspike", *(v39 - 1), "funcavgscrtime", v54, "funcavgbuiltin", v53, "funccalls", v50, "funcmaxops", *((_DWORD *)v39 + 2), "builtinnum", i, "builtinname", v51, "builtinavgtime", v48, "builtinmaxtime", v46, "builtincalls", v63);
                  }
                  v43 += 4;
                }
                v40 = v66;
              }
              ++v41;
              v39 += 71;
            }
            while ( v41 < 0x20 );
            v1 = scrContext;
            v8 = v67;
          }
          ++v13;
          p_fileTimeBuiltIn += 2280;
          v65 = v13;
        }
        while ( v13 < 0x40 );
      }
    }
    else
    {
      Com_PrintWarning(23, "Scr_ScriptProfilePrintUsageReport: Script Usage Summary only available when hosting a game. \n");
    }
  }
}

/*
==============
Scr_ScriptProfilePrintUsageReportToLog
==============
*/
void Scr_ScriptProfilePrintUsageReportToLog(scrContext_t *scrContext)
{
  ProfileScript *Profile; 
  SourceBufferInfo *SourceBufferLookup; 
  float *p_funcTimeSpike; 
  __int64 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  scriptTimeStats_t *p_timeStats; 
  const ServerTiming *Current; 
  const ServerTiming *v41; 
  int serverTimeExceedCount; 
  float v43; 
  __int64 serverTimeCount; 
  double v45; 
  float v46; 
  float v47; 
  __int64 serverScriptUsageThreadCreateTimeCount; 
  float v49; 
  float v50; 
  __int64 v51; 
  double v52; 
  float v53; 
  float serverScriptUsageThreadResumeTotal; 
  float v55; 
  double v56; 
  float serverScriptUsageOpTotal; 
  float v58; 
  int v59; 
  double v60; 
  float v61; 
  float serverScriptTimeMax; 
  double v63; 
  float v64; 
  double v65; 
  double v66; 
  float v67; 
  __int128 v70; 
  int clientMsgCount; 
  __int128 v73; 
  __int128 v77; 
  __int128 v79; 
  float v81; 
  __int64 v82; 
  float v83; 
  float v84; 
  unsigned __int64 *p_opCountMax; 
  unsigned int v86; 
  SourceBufferInfo *v87; 
  __int64 serverScriptUsageOpCountMax; 
  __int64 v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  __int64 v95; 
  double v96; 
  float v97; 
  float v98; 
  double v99; 
  float v100; 
  double v101; 
  float v102; 
  unsigned int v103; 
  float *v104; 
  __int64 v105; 
  float v106; 
  float v107; 
  double v108; 
  float v109; 
  float v110; 
  unsigned int v111; 
  unsigned __int16 *v112; 
  const char *BuiltInName; 
  __int64 v114; 
  float v115; 
  float v116; 
  char *fmt; 
  __int64 v118; 
  __int64 v119; 
  __int64 v120; 
  __int64 v121; 
  __int64 v122; 
  SourceBufferInfo *v123; 
  scriptTimeStats_t *v124; 
  SourceBufferInfo *v125; 
  unsigned int v126; 
  unsigned int v127; 
  float *v128; 
  unsigned __int64 *v129; 

  if ( scrContext->m_varPub.developer )
  {
    if ( Com_IsAnyLocalServerRunning() )
    {
      Profile = ScriptContext_GetProfile(scrContext);
      SourceBufferLookup = Scr_GetSourceBufferLookup(scrContext);
      v125 = SourceBufferLookup;
      p_funcTimeSpike = &Profile->scrFileTimeTracking[0].funcSummary[1].funcTimeSpike;
      v5 = 64i64;
      v6 = 0i64;
      do
      {
        if ( *((_DWORD *)p_funcTimeSpike + 2137) )
        {
          if ( *((_BYTE *)p_funcTimeSpike - 266) )
          {
            v7 = v6;
            *(float *)&v7 = *(float *)&v6 + *(p_funcTimeSpike - 71);
            v6 = v7;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 18) )
          {
            v8 = v6;
            *(float *)&v8 = *(float *)&v6 + *p_funcTimeSpike;
            v6 = v8;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 302) )
          {
            v9 = v6;
            *(float *)&v9 = *(float *)&v6 + p_funcTimeSpike[71];
            v6 = v9;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 586) )
          {
            v10 = v6;
            *(float *)&v10 = *(float *)&v6 + p_funcTimeSpike[142];
            v6 = v10;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 870) )
          {
            v11 = v6;
            *(float *)&v11 = *(float *)&v6 + p_funcTimeSpike[213];
            v6 = v11;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 1154) )
          {
            v12 = v6;
            *(float *)&v12 = *(float *)&v6 + p_funcTimeSpike[284];
            v6 = v12;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 1438) )
          {
            v13 = v6;
            *(float *)&v13 = *(float *)&v6 + p_funcTimeSpike[355];
            v6 = v13;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 1722) )
          {
            v14 = v6;
            *(float *)&v14 = *(float *)&v6 + p_funcTimeSpike[426];
            v6 = v14;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 2006) )
          {
            v15 = v6;
            *(float *)&v15 = *(float *)&v6 + p_funcTimeSpike[497];
            v6 = v15;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 2290) )
          {
            v16 = v6;
            *(float *)&v16 = *(float *)&v6 + p_funcTimeSpike[568];
            v6 = v16;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 2574) )
          {
            v17 = v6;
            *(float *)&v17 = *(float *)&v6 + p_funcTimeSpike[639];
            v6 = v17;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 2858) )
          {
            v18 = v6;
            *(float *)&v18 = *(float *)&v6 + p_funcTimeSpike[710];
            v6 = v18;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 3142) )
          {
            v19 = v6;
            *(float *)&v19 = *(float *)&v6 + p_funcTimeSpike[781];
            v6 = v19;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 3426) )
          {
            v20 = v6;
            *(float *)&v20 = *(float *)&v6 + p_funcTimeSpike[852];
            v6 = v20;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 3710) )
          {
            v21 = v6;
            *(float *)&v21 = *(float *)&v6 + p_funcTimeSpike[923];
            v6 = v21;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 3994) )
          {
            v22 = v6;
            *(float *)&v22 = *(float *)&v6 + p_funcTimeSpike[994];
            v6 = v22;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 4278) )
          {
            v23 = v6;
            *(float *)&v23 = *(float *)&v6 + p_funcTimeSpike[1065];
            v6 = v23;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 4562) )
          {
            v24 = v6;
            *(float *)&v24 = *(float *)&v6 + p_funcTimeSpike[1136];
            v6 = v24;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 4846) )
          {
            v25 = v6;
            *(float *)&v25 = *(float *)&v6 + p_funcTimeSpike[1207];
            v6 = v25;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 5130) )
          {
            v26 = v6;
            *(float *)&v26 = *(float *)&v6 + p_funcTimeSpike[1278];
            v6 = v26;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 5414) )
          {
            v27 = v6;
            *(float *)&v27 = *(float *)&v6 + p_funcTimeSpike[1349];
            v6 = v27;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 5698) )
          {
            v28 = v6;
            *(float *)&v28 = *(float *)&v6 + p_funcTimeSpike[1420];
            v6 = v28;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 5982) )
          {
            v29 = v6;
            *(float *)&v29 = *(float *)&v6 + p_funcTimeSpike[1491];
            v6 = v29;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 6266) )
          {
            v30 = v6;
            *(float *)&v30 = *(float *)&v6 + p_funcTimeSpike[1562];
            v6 = v30;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 6550) )
          {
            v31 = v6;
            *(float *)&v31 = *(float *)&v6 + p_funcTimeSpike[1633];
            v6 = v31;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 6834) )
          {
            v32 = v6;
            *(float *)&v32 = *(float *)&v6 + p_funcTimeSpike[1704];
            v6 = v32;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 7118) )
          {
            v33 = v6;
            *(float *)&v33 = *(float *)&v6 + p_funcTimeSpike[1775];
            v6 = v33;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 7402) )
          {
            v34 = v6;
            *(float *)&v34 = *(float *)&v6 + p_funcTimeSpike[1846];
            v6 = v34;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 7686) )
          {
            v35 = v6;
            *(float *)&v35 = *(float *)&v6 + p_funcTimeSpike[1917];
            v6 = v35;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 7970) )
          {
            v36 = v6;
            *(float *)&v36 = *(float *)&v6 + p_funcTimeSpike[1988];
            v6 = v36;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 8254) )
          {
            v37 = v6;
            *(float *)&v37 = *(float *)&v6 + p_funcTimeSpike[2059];
            v6 = v37;
          }
          if ( *((_BYTE *)p_funcTimeSpike + 8538) )
          {
            v38 = v6;
            *(float *)&v38 = *(float *)&v6 + p_funcTimeSpike[2130];
            v6 = v38;
          }
        }
        p_funcTimeSpike += 2280;
        --v5;
      }
      while ( v5 );
      Com_Printf(23, "\n===== Script Usage Summary (time in ms)=====\n\n");
      p_timeStats = &SvGameGlobals::GetSvGameGlobalsCommon()->timeStats;
      v124 = p_timeStats;
      Current = SV_Timing_GetCurrent();
      v41 = Current;
      serverTimeExceedCount = Current->serverTimeExceedCount;
      if ( serverTimeExceedCount <= 0 )
        v43 = 0.0;
      else
        v43 = (float)(Current->serverTimeTotalExceed / (float)serverTimeExceedCount) - Current->serverTimeTarget;
      serverTimeCount = Current->serverTimeCount;
      v45 = v43;
      if ( (_DWORD)serverTimeCount )
      {
        v46 = (float)serverTimeCount;
        v47 = Current->serverTimeTotal / v46;
      }
      else
      {
        v47 = 0.0;
      }
      Com_Printf(23, "Server Time:\t\t Avg:%0.2f\t Max:%0.2f\t Exceed Frames:%d\t Frames:%u\t Exceed Avg:%0.2f above %0.1f\n", v47, Current->serverTimeMax, Current->serverTimeExceedCount, serverTimeCount, v45, Current->serverTimeTarget);
      serverScriptUsageThreadCreateTimeCount = p_timeStats->serverScriptUsageThreadCreateTimeCount;
      if ( (_DWORD)serverScriptUsageThreadCreateTimeCount )
      {
        v49 = (float)serverScriptUsageThreadCreateTimeCount;
        v50 = p_timeStats->serverScriptUsageThreadCreateTimeTotal / v49;
      }
      else
      {
        v50 = 0.0;
      }
      v51 = v41->serverTimeCount;
      v52 = v50;
      v53 = (float)v51;
      if ( (_DWORD)v51 )
      {
        serverScriptUsageThreadResumeTotal = (float)p_timeStats->serverScriptUsageThreadResumeTotal;
        v55 = serverScriptUsageThreadResumeTotal / v53;
      }
      else
      {
        v55 = 0.0;
      }
      v56 = v55;
      if ( (_DWORD)v51 )
      {
        serverScriptUsageOpTotal = (float)p_timeStats->serverScriptUsageOpTotal;
        v58 = serverScriptUsageOpTotal / v53;
      }
      else
      {
        v58 = 0.0;
      }
      v59 = v41->serverTimeExceedCount;
      v60 = v58;
      if ( v59 <= 0 )
        v61 = 0.0;
      else
        v61 = p_timeStats->serverScriptTimeExceedTotal / (float)v59;
      serverScriptTimeMax = p_timeStats->serverScriptTimeMax;
      v63 = v61;
      if ( serverScriptTimeMax <= 0.0 )
        v64 = 0.0;
      else
        v64 = (float)(*(float *)&v6 * 100.0) / serverScriptTimeMax;
      v65 = v64;
      v66 = serverScriptTimeMax;
      if ( (_DWORD)v51 )
        v67 = p_timeStats->serverScriptTimeTotal / v53;
      else
        v67 = 0.0;
      LODWORD(v120) = p_timeStats->serverScriptUsageOpCountMax;
      Com_Printf(23, "Script Time:\t\t Avg:%0.2f\t Max:%0.2f (Coverage:%0.1f%%)\t Exceed Avg:%0.2f\t OpCount:(Avg:%0.2f Max:%d)\t ThreadCount:(Avg:%0.2f Max:%d)\t ThreadCreateTime:(Avg:%0.2f Max:%0.2f Count:%d)\n", v67, v66, v65, v63, v60, v120, v56, p_timeStats->serverScriptUsageThreadResumeMax, v52, p_timeStats->serverScriptUsageThreadCreateTimeMax, serverScriptUsageThreadCreateTimeCount);
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      if ( (v41->clientMsgTicksMax & 0x8000000000000000ui64) != 0i64 )
      {
        *((_QWORD *)&v70 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v70 = *(double *)&_XMM0 + 1.844674407370955e19;
        _XMM0 = v70;
      }
      clientMsgCount = v41->clientMsgCount;
      *((_QWORD *)&v73 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v73 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM0 = v73;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      if ( clientMsgCount <= 0 )
      {
        v81 = 0.0;
      }
      else
      {
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, rax }
        if ( (v41->clientMsgTicksTotal & 0x8000000000000000ui64) != 0i64 )
        {
          *((_QWORD *)&v77 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v77 = *(double *)&_XMM0 + 1.844674407370955e19;
          _XMM0 = v77;
        }
        *((_QWORD *)&v79 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v79 = *(double *)&_XMM0 * msecPerRawTimerTick;
        _XMM0 = v79;
        __asm { vcvtsd2ss xmm2, xmm0, xmm0 }
        v81 = *(float *)&_XMM2 / (float)clientMsgCount;
      }
      Com_Printf(23, "Msg Time:\t\t Avg= %0.2f\t Max= %0.2f\n", v81, *(float *)&_XMM1);
      v82 = v41->serverTimeCount;
      if ( (_DWORD)v82 )
      {
        v83 = (float)v82;
        v84 = p_timeStats->serverScriptProfileCalcTimeTotal / v83;
      }
      else
      {
        v84 = 0.0;
      }
      LODWORD(fmt) = p_timeStats->serverScriptProfileCalcTimeMaxAtFrame;
      Com_Printf(23, "Profile Cost:\t\t Avg= %0.2f\t Max= %0.2f @ Frame# %d\t\n", v84, p_timeStats->serverScriptProfileCalcTimeMax, fmt);
      if ( script_usage_tracking && script_usage_tracking->current.integer )
      {
        Scr_SortTrackedProfileData(scrContext);
        Com_Printf(23, "Script time breakdown: \n");
        p_opCountMax = &Profile->scrFileTimeTracking[0].opCountMax;
        v86 = 0;
        v127 = 0;
        v129 = &Profile->scrFileTimeTracking[0].opCountMax;
        do
        {
          if ( *((_DWORD *)p_opCountMax - 2) )
          {
            if ( *((unsigned __int16 *)p_opCountMax + 4) >= scrContext->m_parserPub.sourceBufferLookupLen )
            {
              LODWORD(v119) = scrContext->m_parserPub.sourceBufferLookupLen;
              LODWORD(v118) = *((unsigned __int16 *)p_opCountMax + 4);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3921, ASSERT_TYPE_ASSERT, "(unsigned)( fileSummary->srcBufferIdx ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "fileSummary->srcBufferIdx doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v118, v119) )
                __debugbreak();
            }
            v87 = &SourceBufferLookup[*((unsigned __int16 *)p_opCountMax + 4)];
            v123 = v87;
            Com_Printf(23, "{%d} %s: ", v86, v87->buf);
            serverScriptUsageOpCountMax = p_timeStats->serverScriptUsageOpCountMax;
            v89 = *p_opCountMax;
            if ( (_DWORD)serverScriptUsageOpCountMax )
            {
              v90 = (float)v89;
              if ( v89 < 0 )
              {
                v91 = (float)v89;
                v90 = v91 + 1.8446744e19;
              }
              v92 = v90 * 100.0;
              v93 = (float)serverScriptUsageOpCountMax;
              v94 = v92 / v93;
            }
            else
            {
              v94 = 0.0;
            }
            v95 = *((unsigned int *)p_opCountMax - 2);
            v96 = v94;
            v97 = (float)v95;
            if ( (_DWORD)v95 )
              v98 = *((float *)p_opCountMax - 3) / v97;
            else
              v98 = 0.0;
            v99 = v98;
            if ( (_DWORD)v95 )
              v100 = (float)(*((float *)p_opCountMax - 4) - *((float *)p_opCountMax - 3)) / v97;
            else
              v100 = 0.0;
            v101 = v100;
            if ( (_DWORD)v95 )
              v102 = *((float *)p_opCountMax - 4) / v97;
            else
              v102 = 0.0;
            Com_Printf(23, "\tAvg:%1.3f (Script:%1.3f Built-In:%1.3f)\t OpCountMax:%llu [%1.1f%%]\n", v102, v101, v99, v89, v96);
            v103 = 0;
            v104 = (float *)(p_opCountMax - 1103);
            v126 = 0;
            v128 = (float *)(p_opCountMax - 1103);
            do
            {
              if ( *((_BYTE *)v104 + 2) )
              {
                if ( *(unsigned __int16 *)v104 >= v87->functionLookupLen )
                {
                  LODWORD(v119) = v87->functionLookupLen;
                  LODWORD(v118) = *(unsigned __int16 *)v104;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3942, ASSERT_TYPE_ASSERT, "(unsigned)( funcSummary->funcIndex ) < (unsigned)( srcBuffer->functionLookupLen )", "funcSummary->funcIndex doesn't index srcBuffer->functionLookupLen\n\t%i not in [0, %i)", v118, v119) )
                    __debugbreak();
                }
                v105 = *((unsigned int *)v104 - 2);
                v106 = (float)v105;
                if ( (_DWORD)v105 )
                  v107 = *(v104 - 3) / v106;
                else
                  v107 = 0.0;
                v108 = v107;
                if ( (_DWORD)v105 )
                  v109 = (float)(*(v104 - 6) - *(v104 - 3)) / v106;
                else
                  v109 = 0.0;
                if ( (_DWORD)v105 )
                  v110 = *(v104 - 6) / v106;
                else
                  v110 = 0.0;
                *(float *)&v122 = *(v104 - 2);
                *(float *)&v121 = *(v104 - 1);
                Com_Printf(23, "\t\t (%d)\t Avg:%1.3f\t (Scr:%1.3f Blt-in:%1.3f)\t Max:%1.3f\t TimeAtSpike:%1.3f\t SpikeOps:%*d\t Calls:%d\t '%s'\n", v103, v110, v109, v108, *(v104 - 5), *(v104 - 4), 6, v121, v122, v87->functionLookupStatic[*(unsigned __int16 *)v104].funcName);
                v111 = 0;
                v112 = (unsigned __int16 *)(v104 - 67);
                do
                {
                  if ( v112 == (unsigned __int16 *)12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3961, ASSERT_TYPE_ASSERT, "( builtInFuncSummary )", (const char *)&queryFormat, "builtInFuncSummary") )
                    __debugbreak();
                  if ( *((_BYTE *)v112 + 2) )
                  {
                    if ( !*v112 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3966, ASSERT_TYPE_ASSERT, "( builtInFuncSummary->builtInIndex )", (const char *)&queryFormat, "builtInFuncSummary->builtInIndex") )
                      __debugbreak();
                    BuiltInName = GetBuiltInName(scrContext, *v112);
                    v114 = *((unsigned int *)v112 - 1);
                    if ( (_DWORD)v114 )
                    {
                      v115 = (float)v114;
                      v116 = *((float *)v112 - 3) / v115;
                    }
                    else
                    {
                      v116 = 0.0;
                    }
                    LODWORD(v118) = *((_DWORD *)v112 - 1);
                    Com_Printf(23, "\t\t\t\t\t [%d]\t Avg:%1.3f\t Max:%1.3f\t Calls:%d\t '%s'\n", v111, v116, *((float *)v112 - 2), v118, BuiltInName);
                  }
                  ++v111;
                  v112 += 8;
                }
                while ( v111 < 0x10 );
                v104 = v128;
                v103 = v126;
                v87 = v123;
              }
              ++v103;
              v104 += 71;
              v126 = v103;
              v128 = v104;
            }
            while ( v103 < 0x20 );
            p_opCountMax = v129;
            p_timeStats = v124;
            v86 = v127;
            SourceBufferLookup = v125;
          }
          ++v86;
          p_opCountMax += 1140;
          v127 = v86;
          v129 = p_opCountMax;
        }
        while ( v86 < 0x40 );
      }
    }
    else
    {
      Com_PrintWarning(23, "Scr_ScriptProfilePrintUsageReportToLog: Script Usage Summary only available when hosting a game. \n");
    }
  }
}

/*
==============
Scr_ScriptProfileResetUsageReport
==============
*/
void Scr_ScriptProfileResetUsageReport(scrContext_t *scrContext)
{
  SvGameGlobals *SvGameGlobalsCommon; 

  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  *(_QWORD *)&SvGameGlobalsCommon->timeStats.serverScriptTimeTotal = 0i64;
  *(_QWORD *)&SvGameGlobalsCommon->timeStats.serverScriptProfileCalcTimeTotal = 0i64;
  *(_QWORD *)&SvGameGlobalsCommon->timeStats.serverScriptProfileCalcTimeMaxAtFrame = 0i64;
  *(_QWORD *)&SvGameGlobalsCommon->timeStats.serverScriptUsageOpTotal = 0i64;
  *(_QWORD *)&SvGameGlobalsCommon->timeStats.serverScriptUsageThreadResumeTotal = 0i64;
  *(_QWORD *)&SvGameGlobalsCommon->timeStats.serverScriptUsageThreadCreateTimeTotal = 0i64;
  SvGameGlobalsCommon->timeStats.serverScriptUsageThreadCreateTimeMax = 0.0;
  Profile_ClearScriptUsageValues(scrContext);
}

/*
==============
Scr_ScriptProfileResetUsageTimes
==============
*/
void Scr_ScriptProfileResetUsageTimes(scrContext_t *scrContext)
{
  int v2; 
  ProfileScript *Profile; 
  unsigned int i; 
  SourceBufferInfo *v5; 
  __int64 functionLookupLen; 
  unsigned __int64 v7; 

  v2 = __rdtsc();
  Profile = ScriptContext_GetProfile(scrContext);
  for ( i = 0; i < scrContext->m_parserPub.sourceBufferLookupLen; ++i )
  {
    v5 = &scrContext->m_parserPub.sourceBufferLookup[i];
    functionLookupLen = v5->functionLookupLen;
    v5->allOpTotal = 0i64;
    v5->allOpTotalBuiltIn = 0i64;
    v5->totalOps = 0i64;
    memset_0(v5->functionLookupDynamic, 0, 280 * functionLookupLen);
  }
  *(_QWORD *)&Profile->scrProfileScriptUsageOpCount = 0i64;
  Profile->scrProfileScriptThreadCreateTime = 0i64;
  Profile->scrProfileScriptThreadCreateCount = 0;
  v7 = __rdtsc();
  Profile->scrProfileCalcTimeTotal = (int)v7 - v2;
}

/*
==============
Scr_ScriptProfileTimesReset
==============
*/
void Scr_ScriptProfileTimesReset(scrContext_t *scrContext)
{
  unsigned int i; 
  __int64 v2; 
  SourceBufferInfo *v3; 
  ProfileScript *Profile; 

  for ( i = 0; i < scrContext->m_parserPub.sourceBufferLookupLen; v3->totalBuiltIn = 0.0 )
  {
    v2 = i++;
    v3 = &scrContext->m_parserPub.sourceBufferLookup[v2];
    *(_QWORD *)&v3->time = 0i64;
    *(_QWORD *)&v3->maxTime = 0i64;
  }
  Profile = ScriptContext_GetProfile(scrContext);
  Profile->srcTotal = 0i64;
  Profile->srcAvgTime = 0i64;
  Profile->srcMaxTime = 0i64;
}

/*
==============
Scr_SendSourceFile
==============
*/
void Scr_SendSourceFile(scrContext_t *scrContext, const _ScrRequestScript *request)
{
  const char *filename; 
  int v3; 
  SourceBufferInfo *v5; 
  char *buf; 
  __int64 v7; 
  signed __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  int v12; 
  unsigned __int8 *sourceBuf; 
  ProtobufCBinaryData v14; 
  _DebugMessage message; 
  _ScrReadFile v16; 

  filename = request->filename;
  v3 = 0;
  if ( scrContext->m_parserPub.sourceBufferLookupLen )
  {
    while ( 1 )
    {
      v5 = &scrContext->m_parserPub.sourceBufferLookup[v3];
      if ( v5->codePos )
      {
        buf = v5->buf;
        v7 = 0x7FFFFFFFi64;
        if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v8 = filename - buf;
        while ( 1 )
        {
          v9 = buf[v8];
          v10 = v7;
          v11 = *buf++;
          --v7;
          if ( !v10 )
          {
LABEL_13:
            v12 = 0;
            goto LABEL_14;
          }
          if ( v9 != v11 )
            break;
          if ( !v9 )
            goto LABEL_13;
        }
        v12 = 1;
        if ( v9 < v11 )
          v12 = -1;
LABEL_14:
        if ( !v12 )
          break;
      }
      if ( ++v3 >= scrContext->m_parserPub.sourceBufferLookupLen )
        return;
    }
    _DebugMessage::_DebugMessage(&message);
    _ScrReadFile::_ScrReadFile(&v16);
    sourceBuf = (unsigned __int8 *)v5->sourceBuf;
    message.scrreadfile = &v16;
    v16.filename = v5->buf;
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_READ_FILE;
    if ( sourceBuf )
    {
      if ( v5->len > 0 )
      {
        v14.len = v5->len;
        v14.data = sourceBuf;
        v16.sourcebuf = v14;
        v16.has_sourcebuf = 1;
      }
    }
    Sys_WriteDebugSocketMessage(scrContext, &message);
  }
}

/*
==============
Scr_SendSourceNames
==============
*/
__int64 Scr_SendSourceNames(scrContext_t *scrContext)
{
  unsigned __int64 v2; 
  unsigned int v3; 
  unsigned int sourceBufferLookupLen; 
  SourceBufferInfo *sourceBufferLookup; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  SourceBufferInfo *v9; 
  _DebugMessage message; 
  _ScrLoadScriptNames v12; 
  __int64 v13[1024]; 
  unsigned __int64 v14; 

  _DebugMessage::_DebugMessage(&message);
  _ScrLoadScriptNames::_ScrLoadScriptNames(&v12);
  message.scrreadfile = (const _ScrReadFile *)&v12;
  message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_LOAD_SCRIPT_NAMES;
  v2 = 0i64;
  v14 = 0i64;
  if ( !Sys_IsRemoteDebugServer(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1305, ASSERT_TYPE_ASSERT, "( Sys_IsRemoteDebugServer( scrContext ) )", (const char *)&queryFormat, "Sys_IsRemoteDebugServer( scrContext )", -2i64) )
    __debugbreak();
  v3 = 0;
  if ( scrContext->m_varPub.developer )
  {
    sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
    if ( sourceBufferLookupLen )
    {
      sourceBufferLookup = scrContext->m_parserPub.sourceBufferLookup;
      v6 = sourceBufferLookupLen;
      do
      {
        v7 = v3 + 1;
        if ( !sourceBufferLookup->codePos )
          v7 = v3;
        v3 = v7;
        ++sourceBufferLookup;
        --v6;
      }
      while ( v6 );
    }
    v8 = 0;
    if ( sourceBufferLookupLen )
    {
      do
      {
        v9 = &scrContext->m_parserPub.sourceBufferLookup[v8];
        if ( v9->codePos )
        {
          if ( v14 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
            __debugbreak();
          v13[v14++] = (__int64)v9->buf;
        }
        ++v8;
      }
      while ( v8 < scrContext->m_parserPub.sourceBufferLookupLen );
    }
    v12.sourcenames = (const char **)v13;
    v12.n_sourcenames = v14;
    Sys_WriteDebugSocketMessage(scrContext, &message);
    Sys_FlushDebugSocketData(scrContext);
  }
  if ( v14 )
  {
    do
    {
      if ( v2 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v2;
    }
    while ( v2 < v14 );
  }
  return v3;
}

/*
==============
Scr_SetLoadedImpureScript
==============
*/
void Scr_SetLoadedImpureScript(bool loadedImpureScript)
{
  g_loadedImpureScript = loadedImpureScript;
}

/*
==============
Scr_ShutdownCodeOffsetMap
==============
*/
void Scr_ShutdownCodeOffsetMap(scrContext_t *scrContext)
{
  CodeOffsetMap *codeOffsetMap; 

  codeOffsetMap = scrContext->m_parserPub.codeOffsetMap;
  if ( codeOffsetMap )
  {
    Scr_Mem_DebugFree(scrContext, codeOffsetMap);
    scrContext->m_parserPub.codeOffsetMap = NULL;
    *(_QWORD *)&scrContext->m_parserPub.codeOffsetMapLen = 0i64;
  }
}

/*
==============
Scr_ShutdownOpcodeLookup
==============
*/
void Scr_ShutdownOpcodeLookup(scrContext_t *scrContext)
{
  unsigned int i; 
  __int64 v3; 
  SaveSourceBufferInfo *saveSourceBufferLookup; 
  unsigned int j; 
  CodeOffsetMap *codeOffsetMap; 

  if ( scrContext->m_parserGlob.opcodeLookup )
  {
    Mem_HunkUser_Reset(scrContext->m_parserGlob.opcodeLookupUser);
    scrContext->m_parserGlob.opcodeLookup = NULL;
    scrContext->m_parserGlob.opcodeLookupLen = 0;
  }
  if ( scrContext->m_parserGlob.sourcePosLookup )
  {
    Mem_HunkUser_Reset(scrContext->m_parserGlob.sourcePosLookupUser);
    scrContext->m_parserGlob.sourcePosLookup = NULL;
    scrContext->m_parserGlob.sourcePosLookupLen = 0;
  }
  if ( scrContext->m_parserPub.sourceBufferLookup )
  {
    for ( i = 0; i < scrContext->m_parserPub.sourceBufferLookupLen; ++i )
    {
      v3 = i;
      Scr_Mem_DebugFree(scrContext, scrContext->m_parserPub.sourceBufferLookup[v3].buf);
      Scr_Mem_DebugFree(scrContext, scrContext->m_parserPub.sourceBufferLookup[v3].functionLookupStatic);
      Scr_Mem_DebugFree(scrContext, scrContext->m_parserPub.sourceBufferLookup[v3].functionLookupDynamic);
    }
    Mem_HunkUser_Reset(scrContext->m_parserGlob.sourceBufferLookupUser);
    scrContext->m_parserPub.sourceBufferLookup = NULL;
    scrContext->m_parserPub.sourceBufferLookupLen = 0;
  }
  saveSourceBufferLookup = scrContext->m_parserGlob.saveSourceBufferLookup;
  if ( saveSourceBufferLookup )
  {
    for ( j = 0; j < scrContext->m_parserGlob.saveSourceBufferLookupLen; ++j )
    {
      saveSourceBufferLookup = scrContext->m_parserGlob.saveSourceBufferLookup;
      if ( saveSourceBufferLookup[j].buf )
      {
        Scr_Mem_DebugFree(scrContext, saveSourceBufferLookup[j].buf);
        saveSourceBufferLookup = scrContext->m_parserGlob.saveSourceBufferLookup;
      }
    }
    Scr_Mem_DebugFree(scrContext, saveSourceBufferLookup);
    scrContext->m_parserGlob.saveSourceBufferLookup = NULL;
    scrContext->m_parserGlob.saveSourceBufferLookupLen = 0;
  }
  if ( scrContext->m_parserPub.sourceBufferLookup )
  {
    Mem_HunkUser_Reset(scrContext->m_parserGlob.sourceBufferCodeLookupUser);
    scrContext->m_parserPub.sourceBufferCodeLookup = NULL;
    scrContext->m_parserPub.sourceBufferCodeLookupLen = 0;
  }
  codeOffsetMap = scrContext->m_parserPub.codeOffsetMap;
  if ( codeOffsetMap )
  {
    Scr_Mem_DebugFree(scrContext, codeOffsetMap);
    scrContext->m_parserPub.codeOffsetMap = NULL;
    *(_QWORD *)&scrContext->m_parserPub.codeOffsetMapLen = 0i64;
  }
}

/*
==============
Scr_SortTrackedProfileData
==============
*/
void Scr_SortTrackedProfileData(scrContext_t *scrContext)
{
  ProfileScript *Profile; 
  __int64 v2; 
  PrfofileScrExceedSummaryFunc *funcSummary; 
  PrfofileScrExceedSummaryBuilInFunc *v4; 
  __int64 v5; 

  Profile = ScriptContext_GetProfile(scrContext);
  v2 = 64i64;
  funcSummary = Profile->scrFileTimeTracking[0].funcSummary;
  do
  {
    std::_Sort_unchecked<PrfofileScrExceedSummaryFunc *,bool (*)(PrfofileScrExceedSummaryFunc const &,PrfofileScrExceedSummaryFunc const &)>(funcSummary, funcSummary + 31, 31i64, Scr_CompareScriptProfileExceedSummaryEntryFunc);
    v4 = (PrfofileScrExceedSummaryBuilInFunc *)funcSummary;
    v5 = 32i64;
    do
    {
      std::_Sort_unchecked<PrfofileScrExceedSummaryBuilInFunc *,bool (*)(PrfofileScrExceedSummaryBuilInFunc const &,PrfofileScrExceedSummaryBuilInFunc const &)>(v4, v4 + 15, 15i64, Scr_CompareScriptProfileExceedSummaryEntryFuncBuiltIn);
      v4 = (PrfofileScrExceedSummaryBuilInFunc *)((char *)v4 + 284);
      --v5;
    }
    while ( v5 );
    funcSummary = (PrfofileScrExceedSummaryFunc *)((char *)funcSummary + 9120);
    --v2;
  }
  while ( v2 );
  std::_Sort_unchecked<ProfileScrExceedSummaryFile *,bool (*)(ProfileScrExceedSummaryFile const &,ProfileScrExceedSummaryFile const &)>(Profile->scrFileTimeTracking, &Profile->scrFileTimeTracking[63], 63i64, Scr_CompareScriptProfileExceedTimeFunc);
}

/*
==============
Scr_TrackServerTimeAccumScriptTime
==============
*/
void Scr_TrackServerTimeAccumScriptTime(scrContext_t *scrContext, bool newScriptMax)
{
  scrContext_t *v3; 
  ProfileScript *Profile; 
  unsigned __int16 v5; 
  ProfileScript *v6; 
  float *p_funcTimeSpike; 
  __int64 v8; 
  SourceBufferInfo *sourceBufferLookup; 
  __int64 v10; 
  unsigned int v11; 
  SourceBufferInfo *v12; 
  float *Value; 
  __int64 allOpTotal; 
  float v15; 
  float v16; 
  float v17; 
  unsigned int *p_fileCount; 
  unsigned int v19; 
  unsigned int *v20; 
  unsigned __int16 *p_srcBufferIdx; 
  bool v22; 
  const dvar_t *v23; 
  __int64 v24; 
  float v25; 
  float *v26; 
  __int64 allOpTotalBuiltIn; 
  float v28; 
  float v29; 
  unsigned int functionLookupLen; 
  unsigned int v31; 
  unsigned __int16 j; 
  bool v33; 
  unsigned int v34; 
  unsigned int v35; 
  __int64 v36; 
  __int64 v37; 
  float *v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  _BYTE *v43; 
  unsigned int v44; 
  _BYTE *v45; 
  _WORD *v46; 
  bool v47; 
  const dvar_t *v48; 
  __int64 v49; 
  float v50; 
  int v51; 
  unsigned int v52; 
  float *v53; 
  __int64 v54; 
  float v55; 
  float v56; 
  float v57; 
  int *v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  float *v66; 
  __int64 v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  __int64 v72; 
  __int64 v73; 
  bool v74; 
  _BYTE *v75; 
  const dvar_t *v76; 
  const char *BuiltInName; 
  __int64 v78; 
  float v79; 
  bool v80; 
  unsigned __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  __int16 v85; 
  unsigned int i; 
  SourceBufferInfo *v87; 
  __int64 v89; 
  __int64 v90; 
  SourceBufferInfo *v91; 
  ProfileScript *v92; 
  int v93; 
  int v94[4]; 
  __int128 v95; 
  __int128 v96; 
  int _Last[4]; 
  unsigned __int16 _First[1024]; 

  v3 = scrContext;
  if ( scrContext->m_varPub.developer )
  {
    v93 = __rdtsc();
    Profile = ScriptContext_GetProfile(scrContext);
    v5 = 0;
    v92 = Profile;
    v6 = Profile;
    if ( newScriptMax )
    {
      p_funcTimeSpike = &Profile->scrFileTimeTracking[0].funcSummary[1].funcTimeSpike;
      v8 = 64i64;
      do
      {
        if ( *((_DWORD *)p_funcTimeSpike + 2137) )
        {
          if ( *((_BYTE *)p_funcTimeSpike - 266) )
            *(p_funcTimeSpike - 71) = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 18) )
            *p_funcTimeSpike = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 302) )
            p_funcTimeSpike[71] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 586) )
            p_funcTimeSpike[142] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 870) )
            p_funcTimeSpike[213] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 1154) )
            p_funcTimeSpike[284] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 1438) )
            p_funcTimeSpike[355] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 1722) )
            p_funcTimeSpike[426] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 2006) )
            p_funcTimeSpike[497] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 2290) )
            p_funcTimeSpike[568] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 2574) )
            p_funcTimeSpike[639] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 2858) )
            p_funcTimeSpike[710] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 3142) )
            p_funcTimeSpike[781] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 3426) )
            p_funcTimeSpike[852] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 3710) )
            p_funcTimeSpike[923] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 3994) )
            p_funcTimeSpike[994] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 4278) )
            p_funcTimeSpike[1065] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 4562) )
            p_funcTimeSpike[1136] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 4846) )
            p_funcTimeSpike[1207] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 5130) )
            p_funcTimeSpike[1278] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 5414) )
            p_funcTimeSpike[1349] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 5698) )
            p_funcTimeSpike[1420] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 5982) )
            p_funcTimeSpike[1491] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 6266) )
            p_funcTimeSpike[1562] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 6550) )
            p_funcTimeSpike[1633] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 6834) )
            p_funcTimeSpike[1704] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 7118) )
            p_funcTimeSpike[1775] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 7402) )
            p_funcTimeSpike[1846] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 7686) )
            p_funcTimeSpike[1917] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 7970) )
            p_funcTimeSpike[1988] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 8254) )
            p_funcTimeSpike[2059] = 0.0;
          if ( *((_BYTE *)p_funcTimeSpike + 8538) )
            p_funcTimeSpike[2130] = 0.0;
        }
        p_funcTimeSpike += 2280;
        --v8;
      }
      while ( v8 );
    }
    if ( !v3->m_parserPub.sourceBufferLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4415, ASSERT_TYPE_ASSERT, "(scrContext.m_parserPub.sourceBufferLookup)", (const char *)&queryFormat, "scrContext.m_parserPub.sourceBufferLookup") )
      __debugbreak();
    sourceBufferLookup = v3->m_parserPub.sourceBufferLookup;
    v10 = 0i64;
    v87 = sourceBufferLookup;
    v89 = 0i64;
    for ( i = 0; i < 0x10; ++i )
    {
      v11 = LOWORD(v6->scriptSrcBufferIndex[v10]);
      if ( v11 >= v3->m_parserPub.sourceBufferLookupLen )
      {
        LODWORD(v83) = v3->m_parserPub.sourceBufferLookupLen;
        LODWORD(v82) = LOWORD(v6->scriptSrcBufferIndex[v10]);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2846, ASSERT_TYPE_ASSERT, "(unsigned)( srcBufferIndex ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "srcBufferIndex doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v82, v83) )
          __debugbreak();
      }
      v12 = &sourceBufferLookup[(unsigned __int16)v11];
      v91 = v12;
      Value = (float *)Sys_GetValue(0);
      allOpTotal = v12->allOpTotal;
      v15 = (float)allOpTotal;
      if ( allOpTotal < 0 )
      {
        v16 = (float)allOpTotal;
        v15 = v16 + 1.8446744e19;
      }
      v17 = v15 * Value[8915];
      if ( v17 > script_usage_track_src_min_time->current.value )
      {
        p_fileCount = &v6->scrFileTimeTracking[0].fileCount;
        v19 = 0;
        v20 = &v6->scrFileTimeTracking[0].fileCount;
        p_srcBufferIdx = &v6->scrFileTimeTracking[0].srcBufferIdx;
        while ( !*v20 || *p_srcBufferIdx != (_WORD)v11 )
        {
          if ( v20[2280] && p_srcBufferIdx[4560] == (_WORD)v11 )
          {
            ++v19;
            break;
          }
          if ( v20[4560] && p_srcBufferIdx[9120] == (_WORD)v11 )
          {
            v19 += 2;
            break;
          }
          if ( v20[6840] && p_srcBufferIdx[13680] == (_WORD)v11 )
          {
            v19 += 3;
            break;
          }
          v20 += 9120;
          p_srcBufferIdx += 18240;
          v19 += 4;
          if ( v19 >= 0x40 )
            break;
        }
        v22 = v19 < 0x40;
        if ( v19 != 64 )
          goto LABEL_235;
        v19 = 0;
        while ( *p_fileCount )
        {
          if ( !p_fileCount[2280] )
          {
            ++v19;
            break;
          }
          if ( !p_fileCount[4560] )
          {
            v19 += 2;
            break;
          }
          if ( !p_fileCount[6840] )
          {
            v19 += 3;
            break;
          }
          p_fileCount += 9120;
          v19 += 4;
          if ( v19 >= 0x40 )
            break;
        }
        v22 = v19 < 0x40;
        if ( v19 == 64 )
        {
          v23 = DVARBOOL_sv_debugTrackServerTime;
          if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v23);
          if ( v23->current.enabled )
            Com_Printf(23, "Scr_TrackServerTimeAccumScriptTime: Ran out of room to track script file. File '%s' with total OpTime of %f will not be tracked.\n", v12->buf, v17);
        }
        else
        {
LABEL_235:
          if ( !v22 )
          {
            LODWORD(v83) = 64;
            LODWORD(v82) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2884, ASSERT_TYPE_ASSERT, "(unsigned)( srcBufferIndexTrack ) < (unsigned)( 64 )", "srcBufferIndexTrack doesn't index PROF_SCRIPT_SOURCE_TRACK_COUNT_FILE\n\t%i not in [0, %i)", v82, v83) )
              __debugbreak();
          }
          v24 = (__int64)&v6->scrFileTimeTracking[v19];
          v90 = v24;
          if ( v6->scrFileTimeTracking[v19].srcBufferIdx != (_WORD)v11 && v6->scrFileTimeTracking[v19].fileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2887, ASSERT_TYPE_ASSERT, "( fileSummary->srcBufferIdx == srcBufferIndex || fileSummary->fileCount == 0 )", (const char *)&queryFormat, "fileSummary->srcBufferIdx == srcBufferIndex || fileSummary->fileCount == 0") )
            __debugbreak();
          v25 = v17 + v6->scrFileTimeTracking[v19].fileTime;
          ++v6->scrFileTimeTracking[v19].fileCount;
          v6->scrFileTimeTracking[v19].fileTime = v25;
          v6->scrFileTimeTracking[v19].srcBufferIdx = v11;
          v26 = (float *)Sys_GetValue(0);
          allOpTotalBuiltIn = v12->allOpTotalBuiltIn;
          v28 = (float)allOpTotalBuiltIn;
          if ( allOpTotalBuiltIn < 0 )
          {
            v29 = (float)allOpTotalBuiltIn;
            v28 = v29 + 1.8446744e19;
          }
          v6->scrFileTimeTracking[v19].fileTimeBuiltIn = (float)(v28 * v26[8915]) + v6->scrFileTimeTracking[v19].fileTimeBuiltIn;
          functionLookupLen = v12->functionLookupLen;
          if ( functionLookupLen )
          {
            if ( functionLookupLen > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2897, ASSERT_TYPE_ASSERT, "( srcBuffer->functionLookupLen <= 1024 )", (const char *)&queryFormat, "srcBuffer->functionLookupLen <= SCR_DEBUG_FUNCTION_COUNT_PER_FILE") )
              __debugbreak();
            v31 = v12->functionLookupLen;
            for ( j = 0; j < v31; v31 = v12->functionLookupLen )
            {
              _First[j] = j;
              ++j;
            }
            v33 = v3->m_Instance == SCRIPTINSTANCE_SERVER;
            currentSrcFileIndexForFuncSorting = v11;
            if ( v33 )
            {
              std::_Sort_unchecked<unsigned short *,bool (*)(int const &,int const &)>(_First, &_First[v31 - 1], v31 - 1, Scr_CompareScriptProfileCurrentTimeFunc_Server);
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2919, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_TrackServerTimeAccumScriptTime: Invalid script instance.") )
            {
              __debugbreak();
            }
            v34 = v12->functionLookupLen;
            v85 = 0;
            if ( v34 )
            {
              do
              {
                v35 = _First[v5];
                if ( v35 >= v34 )
                {
                  LODWORD(v83) = v34;
                  LODWORD(v82) = _First[v5];
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2925, ASSERT_TYPE_ASSERT, "(unsigned)( currentFuncInfoIndex ) < (unsigned)( srcBuffer->functionLookupLen )", "currentFuncInfoIndex doesn't index srcBuffer->functionLookupLen\n\t%i not in [0, %i)", v82, v83) )
                    __debugbreak();
                }
                v36 = (__int64)&v12->functionLookupDynamic[(unsigned __int16)v35];
                v37 = (__int64)&v12->functionLookupStatic[(unsigned __int16)v35];
                v38 = (float *)Sys_GetValue(0);
                v39 = (float)*(__int64 *)v36;
                if ( *(__int64 *)v36 < 0 )
                {
                  v40 = (float)*(__int64 *)v36;
                  v39 = v40 + 1.8446744e19;
                }
                v42 = v39 * v38[8915];
                v41 = v42;
                if ( v42 >= script_usage_track_func_min_time->current.value )
                {
                  v43 = (_BYTE *)(v24 + 282);
                  v44 = 0;
                  v45 = (_BYTE *)(v24 + 282);
                  v46 = (_WORD *)(v24 + 280);
                  while ( !*v45 || *v46 != (_WORD)v35 )
                  {
                    if ( v45[284] && v46[142] == (_WORD)v35 )
                    {
                      ++v44;
                      break;
                    }
                    if ( v45[568] && v46[284] == (_WORD)v35 )
                    {
                      v44 += 2;
                      break;
                    }
                    if ( v45[852] && v46[426] == (_WORD)v35 )
                    {
                      v44 += 3;
                      break;
                    }
                    v45 += 1136;
                    v46 += 568;
                    v44 += 4;
                    if ( v44 >= 0x20 )
                      break;
                  }
                  v47 = v44 < 0x20;
                  if ( v44 != 32 )
                    goto LABEL_236;
                  v44 = 0;
                  while ( *v43 )
                  {
                    if ( !v43[284] )
                    {
                      ++v44;
                      break;
                    }
                    if ( !v43[568] )
                    {
                      v44 += 2;
                      break;
                    }
                    if ( !v43[852] )
                    {
                      v44 += 3;
                      break;
                    }
                    v43 += 1136;
                    v44 += 4;
                    if ( v44 >= 0x20 )
                      break;
                  }
                  v47 = v44 < 0x20;
                  if ( v44 == 32 )
                  {
                    v48 = DVARBOOL_sv_debugTrackServerTime;
                    if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v48);
                    if ( v48->current.enabled )
                      Com_Printf(23, "Scr_TrackServerTimeAccumScriptTime: Ran out of room to track function. Func '%s' with total OpTime of %f will not be tracked.\n", (const char *)(v37 + 16), v42);
                  }
                  else
                  {
LABEL_236:
                    if ( !v47 )
                    {
                      LODWORD(v83) = 32;
                      LODWORD(v82) = v44;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2962, ASSERT_TYPE_ASSERT, "(unsigned)( funcIndexTrack ) < (unsigned)( 32 )", "funcIndexTrack doesn't index PROF_SCRIPT_SOURCE_TRACK_COUNT_FUNC\n\t%i not in [0, %i)", v82, v83) )
                        __debugbreak();
                    }
                    v49 = v24 + 284i64 * v44;
                    if ( *(_WORD *)(v49 + 280) != (_WORD)v35 && *(_BYTE *)(v49 + 282) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2965, ASSERT_TYPE_ASSERT, "( funcSummary->funcIndex == currentFuncInfoIndex || !funcSummary->inUse )", (const char *)&queryFormat, "funcSummary->funcIndex == currentFuncInfoIndex || !funcSummary->inUse") )
                      __debugbreak();
                    v50 = v42 + *(float *)(v49 + 256);
                    v51 = 1;
                    *(_BYTE *)(v49 + 282) = 1;
                    *(_WORD *)(v49 + 280) = v35;
                    v52 = *(unsigned __int16 *)(v36 + 20);
                    *(float *)(v49 + 256) = v50;
                    if ( v52 > 1 )
                      v51 = v52;
                    *(_DWORD *)(v49 + 272) += v51;
                    if ( v41 > *(float *)(v49 + 260) )
                      *(float *)(v49 + 260) = v41;
                    if ( newScriptMax )
                      *(float *)(v49 + 264) = v41;
                    v53 = (float *)Sys_GetValue(0);
                    v54 = *(_QWORD *)(v36 + 8);
                    v55 = (float)v54;
                    if ( v54 < 0 )
                    {
                      v56 = (float)v54;
                      v55 = v56 + 1.8446744e19;
                    }
                    v57 = (float)(v55 * v53[8915]) + *(float *)(v49 + 268);
                    _XMM3 = _xmm;
                    __asm
                    {
                      vpaddd  xmm0, xmm3, cs:__xmm@00000004000000040000000400000004
                      vpaddd  xmm2, xmm3, cs:__xmm@00000008000000080000000800000008
                    }
                    *(float *)(v49 + 268) = v57;
                    v33 = scrContext->m_Instance == SCRIPTINSTANCE_SERVER;
                    __asm { vpaddd  xmm1, xmm3, cs:__xmm@0000000c0000000c0000000c0000000c }
                    *(_OWORD *)_Last = _XMM1;
                    *(_OWORD *)v94 = _xmm;
                    v95 = _XMM0;
                    v96 = _XMM2;
                    currentFuncInfoIndexForFuncSorting = v35;
                    if ( v33 )
                    {
                      std::_Sort_unchecked<int *,bool (*)(int const &,int const &)>(v94, &_Last[3], 15i64, Scr_CompareScriptProfileCurrentTimeFuncBuiltIn_Server);
                    }
                    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3004, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_TrackServerTimeAccumScriptTime: Invalid script instance.") )
                    {
                      __debugbreak();
                    }
                    v62 = v94;
                    v63 = 16i64;
                    do
                    {
                      v64 = (unsigned int)*v62;
                      if ( (unsigned int)v64 >= 0x10 )
                      {
                        LODWORD(v83) = 16;
                        LODWORD(v82) = *v62;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3011, ASSERT_TYPE_ASSERT, "(unsigned)( currentBuiltInInfoIndex ) < (unsigned)( 16 )", "currentBuiltInInfoIndex doesn't index SCR_DEBUG_FUNCTION_BUILT_IN_PER_FUNCTION\n\t%i not in [0, %i)", v82, v83) )
                          __debugbreak();
                      }
                      v65 = 16 * v64;
                      if ( *(_WORD *)(16 * v64 + v36 + 34) )
                      {
                        v66 = (float *)Sys_GetValue(0);
                        v67 = *(_QWORD *)(v65 + v36 + 24);
                        v68 = (float)v67;
                        if ( v67 < 0 )
                        {
                          v69 = (float)v67;
                          v68 = v69 + 1.8446744e19;
                        }
                        v71 = v68 * v66[8915];
                        v70 = v71;
                        if ( v71 >= script_usage_track_func_min_time_built_in->current.value )
                        {
                          v72 = 0i64;
                          v73 = v49 + 12;
                          do
                          {
                            if ( *(_BYTE *)(v73 + 2) && *(_WORD *)v73 == *(_WORD *)(v65 + v36 + 34) )
                              break;
                            v72 = (unsigned int)(v72 + 1);
                            v73 += 16i64;
                          }
                          while ( (unsigned int)v72 < 0x10 );
                          v74 = (unsigned int)v72 < 0x10;
                          if ( (_DWORD)v72 != 16 )
                            goto LABEL_237;
                          v72 = 0i64;
                          v75 = (_BYTE *)(v49 + 14);
                          while ( *v75 )
                          {
                            if ( !v75[16] )
                            {
                              v72 = (unsigned int)(v72 + 1);
                              break;
                            }
                            if ( !v75[32] )
                            {
                              v72 = (unsigned int)(v72 + 2);
                              break;
                            }
                            if ( !v75[48] )
                            {
                              v72 = (unsigned int)(v72 + 3);
                              break;
                            }
                            v75 += 64;
                            v72 = (unsigned int)(v72 + 4);
                            if ( (unsigned int)v72 >= 0x10 )
                              break;
                          }
                          v74 = (unsigned int)v72 < 0x10;
                          if ( (_DWORD)v72 == 16 )
                          {
                            v76 = DVARBOOL_sv_debugTrackServerTime;
                            if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
                              __debugbreak();
                            Dvar_CheckFrontendServerThread(v76);
                            if ( v76->current.enabled )
                            {
                              BuiltInName = GetBuiltInName(scrContext, *(unsigned __int16 *)(v65 + v36 + 34));
                              Com_Printf(23, "Scr_TrackServerTimeAccumScriptTime: Ran out of room to track built in function. Func '%s' with total OpTime of %f will not be tracked.\n", BuiltInName, v71);
                            }
                          }
                          else
                          {
LABEL_237:
                            if ( !v74 )
                            {
                              LODWORD(v83) = 16;
                              LODWORD(v82) = v72;
                              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3054, ASSERT_TYPE_ASSERT, "(unsigned)( funcIndexTrackBuiltIn ) < (unsigned)( 16 )", "funcIndexTrackBuiltIn doesn't index PROF_SCRIPT_SOURCE_TRACK_COUNT_BUILTIN_FUNC\n\t%i not in [0, %i)", v82, v83) )
                                __debugbreak();
                            }
                            v78 = v49 + 16 * v72;
                            if ( *(_WORD *)(v78 + 12) != *(_WORD *)(v65 + v36 + 34) && *(_BYTE *)(v78 + 14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3057, ASSERT_TYPE_ASSERT, "( funcSummaryBuiltIn->builtInIndex == funcBuiltInInfo->builtInIndex || !funcSummaryBuiltIn->inUse )", (const char *)&queryFormat, "funcSummaryBuiltIn->builtInIndex == funcBuiltInInfo->builtInIndex || !funcSummaryBuiltIn->inUse") )
                              __debugbreak();
                            v79 = v71 + *(float *)v78;
                            *(_BYTE *)(v78 + 14) = 1;
                            *(_WORD *)(v78 + 12) = *(_WORD *)(v65 + v36 + 34);
                            *(_DWORD *)(v78 + 8) += *(unsigned __int16 *)(v65 + v36 + 32);
                            v80 = v70 <= *(float *)(v78 + 4);
                            *(float *)v78 = v79;
                            if ( !v80 )
                              *(float *)(v78 + 4) = v70;
                          }
                        }
                      }
                      ++v62;
                      --v63;
                    }
                    while ( v63 );
                    v5 = v85;
                    v24 = v90;
                    v12 = v91;
                  }
                }
                v34 = v12->functionLookupLen;
                v85 = ++v5;
              }
              while ( v5 < v34 );
              v3 = scrContext;
              v6 = v92;
            }
            v5 = 0;
          }
        }
        sourceBufferLookup = v87;
      }
      v10 = ++v89;
    }
    v81 = __rdtsc();
    v6->scrProfileCalcTimeTotal += (int)v81 - v93;
  }
}

/*
==============
Scr_TrackServerTimeSetMaxScriptOps
==============
*/
void Scr_TrackServerTimeSetMaxScriptOps(scrContext_t *scrContext)
{
  scrContext_t *v1; 
  ProfileScript *v2; 
  SourceBufferInfo *SourceBufferLookup; 
  unsigned int *p_funcOpCountMax; 
  __int64 v5; 
  __int64 sourceBufferLookupLen; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v18; 
  int *v22; 
  unsigned int v23; 
  __int64 v24; 
  unsigned int v25; 
  SourceBufferInfo *v26; 
  unsigned int *p_fileCount; 
  unsigned int v28; 
  unsigned int *v29; 
  unsigned __int16 *p_srcBufferIdx; 
  bool v31; 
  const dvar_t *v32; 
  __int64 v33; 
  bool v34; 
  unsigned int functionLookupLen; 
  unsigned __int16 v36; 
  __int64 v37; 
  __int64 v38; 
  _BYTE *v39; 
  unsigned int v40; 
  _BYTE *v41; 
  _WORD *v42; 
  bool v43; 
  __int64 v44; 
  const dvar_t *v45; 
  __int64 v46; 
  unsigned __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  unsigned int v50; 
  SourceBufferInfo *v52; 
  __int64 v53; 
  ProfileScript *Profile; 
  int v55; 
  int _First[8]; 
  __m256i v57; 
  __m256i v58; 
  __m256i v59; 

  v1 = scrContext;
  if ( scrContext->m_varPub.developer )
  {
    v55 = __rdtsc();
    Profile = ScriptContext_GetProfile(scrContext);
    v2 = Profile;
    SourceBufferLookup = Scr_GetSourceBufferLookup(v1);
    v52 = SourceBufferLookup;
    p_funcOpCountMax = &Profile->scrFileTimeTracking[0].funcSummary[1].funcOpCountMax;
    v5 = 64i64;
    do
    {
      if ( p_funcOpCountMax[2134] )
      {
        *((_QWORD *)p_funcOpCountMax + 1068) = 0i64;
        if ( *((_BYTE *)p_funcOpCountMax - 278) )
          *(p_funcOpCountMax - 71) = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 6) )
          *p_funcOpCountMax = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 290) )
          p_funcOpCountMax[71] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 574) )
          p_funcOpCountMax[142] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 858) )
          p_funcOpCountMax[213] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 1142) )
          p_funcOpCountMax[284] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 1426) )
          p_funcOpCountMax[355] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 1710) )
          p_funcOpCountMax[426] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 1994) )
          p_funcOpCountMax[497] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 2278) )
          p_funcOpCountMax[568] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 2562) )
          p_funcOpCountMax[639] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 2846) )
          p_funcOpCountMax[710] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 3130) )
          p_funcOpCountMax[781] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 3414) )
          p_funcOpCountMax[852] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 3698) )
          p_funcOpCountMax[923] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 3982) )
          p_funcOpCountMax[994] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 4266) )
          p_funcOpCountMax[1065] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 4550) )
          p_funcOpCountMax[1136] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 4834) )
          p_funcOpCountMax[1207] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 5118) )
          p_funcOpCountMax[1278] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 5402) )
          p_funcOpCountMax[1349] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 5686) )
          p_funcOpCountMax[1420] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 5970) )
          p_funcOpCountMax[1491] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 6254) )
          p_funcOpCountMax[1562] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 6538) )
          p_funcOpCountMax[1633] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 6822) )
          p_funcOpCountMax[1704] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 7106) )
          p_funcOpCountMax[1775] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 7390) )
          p_funcOpCountMax[1846] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 7674) )
          p_funcOpCountMax[1917] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 7958) )
          p_funcOpCountMax[1988] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 8242) )
          p_funcOpCountMax[2059] = 0;
        if ( *((_BYTE *)p_funcOpCountMax + 8526) )
          p_funcOpCountMax[2130] = 0;
      }
      p_funcOpCountMax += 2280;
      --v5;
    }
    while ( v5 );
    if ( v1->m_parserPub.sourceBufferLookupLen >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3159, ASSERT_TYPE_ASSERT, "(scrContext.m_parserPub.sourceBufferLookupLen < MAX_SCRIPT_FILES)", (const char *)&queryFormat, "scrContext.m_parserPub.sourceBufferLookupLen < MAX_SCRIPT_FILES") )
      __debugbreak();
    sourceBufferLookupLen = v1->m_parserPub.sourceBufferLookupLen;
    v7 = 0;
    if ( (_DWORD)sourceBufferLookupLen )
    {
      if ( (unsigned int)sourceBufferLookupLen >= 0x10 )
      {
        v8 = 8;
        do
        {
          _XMM0 = v7;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v7] = _XMM1;
          v7 += 16;
          _XMM0 = v8 - 4;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v8 - 4] = _XMM1;
          _XMM0 = v8;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v8] = _XMM1;
          v18 = v8 + 4;
          v8 += 16;
          _XMM0 = (unsigned int)v18;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v18] = _XMM1;
        }
        while ( v7 < ((unsigned int)sourceBufferLookupLen & 0xFFFFFFF0) );
      }
      if ( v7 < (unsigned int)sourceBufferLookupLen )
      {
        v22 = &_First[v7];
        do
          *v22++ = v7++;
        while ( v7 < (unsigned int)sourceBufferLookupLen );
      }
    }
    if ( v1->m_Instance )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3176, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_TrackServerTimeSetMaxScriptOps: Invalid script instance.") )
        __debugbreak();
    }
    else
    {
      std::_Sort_unchecked<int *,bool (*)(int,int)>(_First, &_First[sourceBufferLookupLen], sourceBufferLookupLen, Scr_CompareScriptSourceUsageOps_Server);
    }
    *(__m256i *)Profile->scriptSrcBufferIndex = *(__m256i *)_First;
    *(__m256i *)&Profile->scriptSrcBufferIndex[8] = v57;
    *(__m256i *)&Profile->scriptSrcBufferIndex[16] = v58;
    v23 = 0;
    v53 = 0i64;
    *(__m256i *)&Profile->scriptSrcBufferIndex[24] = v59;
    v50 = 0;
    v24 = 0i64;
    do
    {
      v25 = LOWORD(v2->scriptSrcBufferIndex[v24]);
      if ( v25 >= v1->m_parserPub.sourceBufferLookupLen )
      {
        LODWORD(v49) = v1->m_parserPub.sourceBufferLookupLen;
        LODWORD(v48) = LOWORD(v2->scriptSrcBufferIndex[v24]);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3185, ASSERT_TYPE_ASSERT, "(unsigned)( srcBufferIndex ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "srcBufferIndex doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
        v23 = v50;
      }
      v26 = &SourceBufferLookup[(unsigned __int16)v25];
      if ( v26->totalOps >= 0x3E8 )
      {
        p_fileCount = &v2->scrFileTimeTracking[0].fileCount;
        v28 = 0;
        v29 = &v2->scrFileTimeTracking[0].fileCount;
        p_srcBufferIdx = &v2->scrFileTimeTracking[0].srcBufferIdx;
        while ( !*v29 || *p_srcBufferIdx != (_WORD)v25 )
        {
          if ( v29[2280] && p_srcBufferIdx[4560] == (_WORD)v25 )
          {
            ++v28;
            break;
          }
          if ( v29[4560] && p_srcBufferIdx[9120] == (_WORD)v25 )
          {
            v28 += 2;
            break;
          }
          if ( v29[6840] && p_srcBufferIdx[13680] == (_WORD)v25 )
          {
            v28 += 3;
            break;
          }
          v29 += 9120;
          p_srcBufferIdx += 18240;
          v28 += 4;
          if ( v28 >= 0x40 )
            break;
        }
        v31 = v28 < 0x40;
        if ( v28 != 64 )
          goto LABEL_189;
        v28 = 0;
        while ( *p_fileCount )
        {
          if ( !p_fileCount[2280] )
          {
            ++v28;
            break;
          }
          if ( !p_fileCount[4560] )
          {
            v28 += 2;
            break;
          }
          if ( !p_fileCount[6840] )
          {
            v28 += 3;
            break;
          }
          p_fileCount += 9120;
          v28 += 4;
          if ( v28 >= 0x40 )
            break;
        }
        v31 = v28 < 0x40;
        if ( v28 == 64 )
        {
          v32 = DVARBOOL_sv_debugTrackServerTime;
          if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v32);
          if ( v32->current.enabled )
            Com_Printf(23, "Scr_TrackServerTimeSetMaxScriptOps: Ran out of room to track script file. File '%s' will not be tracked.\n", v26->buf);
        }
        else
        {
LABEL_189:
          if ( !v31 )
          {
            LODWORD(v49) = 64;
            LODWORD(v48) = v28;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3221, ASSERT_TYPE_ASSERT, "(unsigned)( srcBufferIndexTrack ) < (unsigned)( 64 )", "srcBufferIndexTrack doesn't index PROF_SCRIPT_SOURCE_TRACK_COUNT_FILE\n\t%i not in [0, %i)", v48, v49) )
              __debugbreak();
          }
          v33 = (__int64)&v2->scrFileTimeTracking[v28];
          if ( v2->scrFileTimeTracking[v28].srcBufferIdx != (_WORD)v25 && v2->scrFileTimeTracking[v28].fileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3224, ASSERT_TYPE_ASSERT, "( fileSummary->srcBufferIdx == srcBufferIndex || fileSummary->fileCount == 0 )", (const char *)&queryFormat, "fileSummary->srcBufferIdx == srcBufferIndex || fileSummary->fileCount == 0") )
            __debugbreak();
          v34 = v2->scrFileTimeTracking[v28].fileCount == 0;
          v2->scrFileTimeTracking[v28].srcBufferIdx = v25;
          if ( v34 )
            v2->scrFileTimeTracking[v28].fileCount = 1;
          v2->scrFileTimeTracking[v28].opCountMax = v26->totalOps;
          functionLookupLen = v26->functionLookupLen;
          if ( functionLookupLen )
          {
            if ( functionLookupLen > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3236, ASSERT_TYPE_ASSERT, "( srcBuffer->functionLookupLen <= 1024 )", (const char *)&queryFormat, "srcBuffer->functionLookupLen <= SCR_DEBUG_FUNCTION_COUNT_PER_FILE") )
              __debugbreak();
            v36 = 0;
            if ( v26->functionLookupLen )
            {
              do
              {
                v37 = (__int64)&v26->functionLookupDynamic[v36];
                v38 = (__int64)&v26->functionLookupStatic[v36];
                if ( *(_DWORD *)(v37 + 16) >= 0x3E8u )
                {
                  v39 = (_BYTE *)(v33 + 282);
                  v40 = 0;
                  v41 = (_BYTE *)(v33 + 282);
                  v42 = (_WORD *)(v33 + 280);
                  while ( !*v41 || *v42 != v36 )
                  {
                    if ( v41[284] && v42[142] == v36 )
                    {
                      ++v40;
                      break;
                    }
                    if ( v41[568] && v42[284] == v36 )
                    {
                      v40 += 2;
                      break;
                    }
                    if ( v41[852] && v42[426] == v36 )
                    {
                      v40 += 3;
                      break;
                    }
                    v41 += 1136;
                    v42 += 568;
                    v40 += 4;
                    if ( v40 >= 0x20 )
                      break;
                  }
                  v43 = v40 < 0x20;
                  if ( v40 != 32 )
                    goto LABEL_190;
                  v40 = 0;
                  v44 = v33 + 272;
                  while ( !*(_BYTE *)(v44 + 10) || *(_DWORD *)v44 )
                  {
                    ++v40;
                    v44 += 284i64;
                    if ( v40 >= 0x20 )
                      goto LABEL_156;
                  }
                  *(_BYTE *)(284i64 * v40 + v33 + 282) = 0;
                  v43 = v40 < 0x20;
                  if ( v40 != 32 )
                    goto LABEL_190;
LABEL_156:
                  v40 = 0;
                  while ( *v39 )
                  {
                    if ( !v39[284] )
                    {
                      ++v40;
                      break;
                    }
                    if ( !v39[568] )
                    {
                      v40 += 2;
                      break;
                    }
                    if ( !v39[852] )
                    {
                      v40 += 3;
                      break;
                    }
                    v39 += 1136;
                    v40 += 4;
                    if ( v40 >= 0x20 )
                      break;
                  }
                  v43 = v40 < 0x20;
                  if ( v40 == 32 )
                  {
                    v45 = DVARBOOL_sv_debugTrackServerTime;
                    if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v45);
                    if ( v45->current.enabled )
                      Com_Printf(23, "Scr_TrackServerTimeSetMaxScriptOps: Ran out of room to track function. Func '%s' with total Op count %d will not be tracked.\n", (const char *)(v38 + 16), *(unsigned int *)(v37 + 16));
                  }
                  else
                  {
LABEL_190:
                    if ( !v43 )
                    {
                      LODWORD(v49) = 32;
                      LODWORD(v48) = v40;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3291, ASSERT_TYPE_ASSERT, "(unsigned)( funcIndexTrack ) < (unsigned)( 32 )", "funcIndexTrack doesn't index PROF_SCRIPT_SOURCE_TRACK_COUNT_FUNC\n\t%i not in [0, %i)", v48, v49) )
                        __debugbreak();
                    }
                    v46 = v33 + 284i64 * v40;
                    if ( *(_WORD *)(v46 + 280) != v36 && *(_BYTE *)(v46 + 282) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3294, ASSERT_TYPE_ASSERT, "( funcSummary->funcIndex == funcIndex || !funcSummary->inUse )", (const char *)&queryFormat, "funcSummary->funcIndex == funcIndex || !funcSummary->inUse") )
                      __debugbreak();
                    *(_BYTE *)(v46 + 282) = 1;
                    *(_WORD *)(v46 + 280) = v36;
                    *(_DWORD *)(v46 + 276) = *(_DWORD *)(v37 + 16);
                  }
                }
                ++v36;
              }
              while ( v36 < v26->functionLookupLen );
              v24 = v53;
              v2 = Profile;
            }
          }
          SourceBufferLookup = v52;
        }
        v23 = v50;
        v1 = scrContext;
      }
      ++v23;
      ++v24;
      v50 = v23;
      v53 = v24;
    }
    while ( v23 < 0x20 );
    v47 = __rdtsc();
    v2->scrProfileCalcTimeTotal += (int)v47 - v55;
  }
}

/*
==============
Scr_UseSPGoldScript
==============
*/
char Scr_UseSPGoldScript(const char *name, char *goldname, const unsigned __int64 goldnameLength)
{
  const dvar_t *v3; 
  const char *v7; 
  unsigned __int64 v8; 

  v3 = DCONST_DVARBOOL_developer_looseLoadGoldScripts;
  if ( !DCONST_DVARBOOL_developer_looseLoadGoldScripts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseLoadGoldScripts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled || (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    return 0;
  v7 = "goldscript";
  v8 = -1i64;
  if ( g_currentRegion == China )
    v7 = "goldscript_cn";
  do
    ++v8;
  while ( v7[v8] );
  if ( I_strnicmp(v7, name, v8) )
    Com_sprintf(goldname, goldnameLength, "%s/%s", v7, name);
  else
    strncpy(goldname, name, goldnameLength);
  return 1;
}

/*
==============
OpcodeLookup::SetCodePos
==============
*/
void OpcodeLookup::SetCodePos(OpcodeLookup *this, const scrContext_t *scrContext, const char *pos)
{
  if ( pos )
    this->codePosI = truncate_cast<int,__int64>((__int64)&pos[-scrContext->m_parserBasePointer]);
  else
    this->codePosI = 0;
}

/*
==============
OpcodeLookup::SetLocalVars
==============
*/
void OpcodeLookup::SetLocalVars(OpcodeLookup *this, const scrContext_t *scrContext, unsigned __int16 *lv)
{
  if ( lv )
    this->localVarsI = truncate_cast<int,__int64>((__int64)lv - scrContext->m_parserBasePointer);
  else
    this->localVarsI = 0;
}

