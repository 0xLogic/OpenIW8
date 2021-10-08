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
  SourceBufferInfo *v11; 
  char *sourceBuf; 
  int len; 
  SaveSourceBufferInfo *saveSourceBufferLookup; 
  char *v16; 
  signed int v18; 
  char *v19; 
  __int64 v22; 
  signed __int64 v48; 
  __int64 v49; 
  char v50; 

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
    v11 = &scrContext->m_parserPub.sourceBufferLookup[prevIndex];
    sourceBuf = (char *)v11->sourceBuf;
    len = v11->len;
  }
  if ( len < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 1707, ASSERT_TYPE_ASSERT, "( len >= -1 )", (const char *)&queryFormat, "len >= -1") )
    __debugbreak();
  if ( len >= 0 )
  {
    v16 = (char *)Scr_Mem_TempAlloc(scrContext, len + 1, "Scr_AddSourceBuffer1");
    v18 = 0;
    v19 = v16;
    _R10 = sourceBuf;
    _RCX = v16;
    if ( len > 0 )
    {
      if ( (unsigned int)len >= 0x40 )
      {
        v22 = len - 1;
        if ( v16 > &sourceBuf[v22] || &v16[v22] < sourceBuf )
        {
          __asm
          {
            vmovaps [rsp+88h+var_38], xmm6
            vmovdqu xmm5, cs:__xmm@0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a
            vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff
            vpxor   xmm4, xmm4, xmm4
          }
          do
          {
            __asm
            {
              vpcmpeqb xmm0, xmm4, xmmword ptr [r10]
              vmovdqu xmm3, xmmword ptr [r10+30h]
              vpandn  xmm2, xmm0, xmm6
              vpand   xmm0, xmm2, xmmword ptr [r10]
              vpandn  xmm1, xmm2, xmm5
              vpor    xmm2, xmm1, xmm0
              vpcmpeqb xmm0, xmm4, xmmword ptr [r10+10h]
              vmovdqu xmmword ptr [rcx], xmm2
              vpandn  xmm2, xmm0, xmm6
              vpand   xmm0, xmm2, xmmword ptr [r10+10h]
              vpandn  xmm1, xmm2, xmm5
              vpor    xmm2, xmm1, xmm0
              vpcmpeqb xmm0, xmm4, xmmword ptr [r10+20h]
              vmovdqu xmmword ptr [rcx+10h], xmm2
              vpandn  xmm2, xmm0, xmm6
              vpand   xmm0, xmm2, xmmword ptr [r10+20h]
              vpandn  xmm1, xmm2, xmm5
              vpor    xmm2, xmm1, xmm0
              vmovdqu xmmword ptr [rcx+20h], xmm2
              vpcmpeqb xmm0, xmm4, xmm3
              vpandn  xmm2, xmm0, xmm6
              vpandn  xmm1, xmm2, xmm5
              vpand   xmm0, xmm2, xmm3
              vpor    xmm2, xmm1, xmm0
              vmovdqu xmmword ptr [rcx+30h], xmm2
            }
            _RCX += 64;
            _R10 += 64;
            v18 += 64;
          }
          while ( v18 < (int)(len - (len & 0x8000003F)) );
          __asm { vmovaps xmm6, [rsp+88h+var_38] }
        }
      }
      if ( v18 < len )
      {
        v48 = _R10 - _RCX;
        v49 = (unsigned int)(len - v18);
        do
        {
          v50 = 10;
          if ( _RCX[v48] )
            v50 = _RCX[v48];
          *_RCX++ = v50;
          --v49;
        }
        while ( v49 );
      }
    }
    *_RCX = 0;
    Scr_AddSourceBufferInternal(scrContext, extFilename, codePos, sourceBuf, len, 0, archive, 0, prevIndex);
    return v19;
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
  unsigned __int64 srcTotal; 
  unsigned __int64 v6; 
  OpcodeLookup *opcodeLookup; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  int v10; 
  __int64 codePosI; 
  __int64 v12; 
  char *v13; 
  const char *programBuffer; 
  bool v15; 
  int avgTime; 
  __int64 sourceBufferLookupLen; 
  int *v44; 
  int i; 
  int _First[8]; 

  if ( scrContext->m_varPub.developer )
  {
    _EDI = 0;
    _R13 = ScriptContext_GetProfile(scrContext);
    srcTotal = 0i64;
    _R13->srcTotal = 0i64;
    v6 = 0i64;
    for ( i = 0; (unsigned int)v6 < scrContext->m_parserGlob.opcodeLookupLen; i = v6 )
    {
      opcodeLookup = scrContext->m_parserGlob.opcodeLookup;
      v8 = v6;
      v9 = (unsigned __int64)opcodeLookup[v6];
      v10 = (16 * v9) & 0x7FFFFFF0;
      if ( v9 >> 54 )
      {
        *(_QWORD *)&opcodeLookup[v8] = 0i64;
        codePosI = scrContext->m_parserGlob.opcodeLookup[v8].codePosI;
        if ( (_DWORD)codePosI )
          v12 = scrContext->m_parserBasePointer + codePosI;
        else
          v12 = 0i64;
        v13 = (char *)(v12 + 1);
        if ( (v12 == -1 || v13 == &g_EndPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2662, ASSERT_TYPE_ASSERT, "( codePos && codePos != &g_EndPos )", (const char *)&queryFormat, "codePos && codePos != &g_EndPos") )
          __debugbreak();
        programBuffer = scrContext->m_varPub.programBuffer;
        v15 = Scr_IsInOpcodeMemory(scrContext, v13) != 0;
        if ( (!programBuffer || !v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2663, ASSERT_TYPE_ASSERT, "( Scr_HasSourceBuffer( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_HasSourceBuffer( scrContext, codePos )") )
          __debugbreak();
        _RBX = &scrContext->m_parserPub.sourceBufferLookup[Scr_GetSourceBuffer(scrContext, v13 - 1)];
        avgTime = _RBX->avgTime;
        _RBX->time = v10;
        _RBX->avgTime = (v10 + 4 * avgTime) / 5;
        if ( v10 > _RBX->maxTime )
          _RBX->maxTime = v10;
        Sys_GetValue(0);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r14d
          vmulss  xmm0, xmm0, dword ptr [rax+8B4Ch]
          vaddss  xmm1, xmm0, dword ptr [rbx+6Ch]
          vmovss  dword ptr [rbx+6Ch], xmm1
        }
        Sys_GetValue(0);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r12d
          vmulss  xmm0, xmm0, dword ptr [rax+8B4Ch]
          vaddss  xmm1, xmm0, dword ptr [rbx+70h]
          vmovss  dword ptr [rbx+70h], xmm1
        }
        _R13->srcTotal += (unsigned int)v10;
      }
      else if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2653, ASSERT_TYPE_ASSERT, "( !pScrParserGlob->opcodeLookup[i].GetProfileTime() )", (const char *)&queryFormat, "!pScrParserGlob->opcodeLookup[i].GetProfileTime()") )
      {
        __debugbreak();
      }
      srcTotal = _R13->srcTotal;
      v6 = (unsigned int)(i + 1);
    }
    _R13->srcAvgTime = (srcTotal + 4 * _R13->srcAvgTime) / 5;
    if ( srcTotal > _R13->srcMaxTime )
      _R13->srcMaxTime = srcTotal;
    if ( scrContext->m_parserPub.sourceBufferLookupLen >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2683, ASSERT_TYPE_ASSERT, "(pScrParserPub->sourceBufferLookupLen < MAX_SCRIPT_FILES)", (const char *)&queryFormat, "pScrParserPub->sourceBufferLookupLen < MAX_SCRIPT_FILES") )
      __debugbreak();
    sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
    if ( (_DWORD)sourceBufferLookupLen )
    {
      if ( (unsigned int)sourceBufferLookupLen >= 0x10 )
      {
        __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
        _EDX = 8;
        do
        {
          _RAX = _EDI;
          __asm
          {
            vmovd   xmm0, edi
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
            vmovdqu xmmword ptr [rsp+rax*4+1078h+_First], xmm1
          }
          LODWORD(_RAX) = _EDX - 4;
          _EDI += 16;
          __asm
          {
            vmovd   xmm0, eax
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          _RAX = _EDX - 4;
          __asm { vmovdqu xmmword ptr [rsp+rax*4+1078h+_First], xmm1 }
          _RAX = _EDX;
          __asm
          {
            vmovd   xmm0, edx
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
            vmovdqu xmmword ptr [rsp+rax*4+1078h+_First], xmm1
          }
          _RAX = _EDX + 4;
          _EDX += 16;
          __asm
          {
            vmovd   xmm0, eax
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
            vmovdqu xmmword ptr [rsp+rax*4+1078h+_First], xmm1
          }
        }
        while ( _EDI < ((unsigned int)sourceBufferLookupLen & 0xFFFFFFF0) );
      }
      if ( _EDI < (unsigned int)sourceBufferLookupLen )
      {
        v44 = &_First[_EDI];
        do
          *v44++ = _EDI++;
        while ( _EDI < (unsigned int)sourceBufferLookupLen );
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
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+1078h+_First]
      vmovups ymmword ptr [r13+9B04h], ymm0
      vmovups ymm1, [rsp+1078h+var_1018]
      vmovups ymmword ptr [r13+9B24h], ymm1
      vmovups ymm0, [rsp+1078h+var_FF8]
      vmovups ymmword ptr [r13+9B44h], ymm0
      vmovups ymm1, [rsp+1078h+var_FD8]
      vmovups ymmword ptr [r13+9B64h], ymm1
    }
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

bool __fastcall Scr_CompareScriptProfileExceedSummaryEntryFunc(const PrfofileScrExceedSummaryFunc *func1, const PrfofileScrExceedSummaryFunc *func2, double _XMM2_8, double _XMM3_8)
{
  unsigned int funcCount; 

  __asm { vxorps  xmm2, xmm2, xmm2 }
  if ( func1->funcCount )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+100h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm3, xmm0, xmm1
    }
  }
  else
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
  }
  funcCount = func2->funcCount;
  if ( funcCount )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+100h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm2, xmm0, xmm1
    }
  }
  __asm { vcomiss xmm3, xmm2 }
  return funcCount != 0;
}

/*
==============
Scr_CompareScriptProfileExceedSummaryEntryFuncBuiltIn
==============
*/
bool Scr_CompareScriptProfileExceedSummaryEntryFuncBuiltIn(const PrfofileScrExceedSummaryBuilInFunc *builtInFunc1, const PrfofileScrExceedSummaryBuilInFunc *builtInFunc2)
{
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vcomiss xmm0, dword ptr [rcx]
  }
  return v2;
}

/*
==============
Scr_CompareScriptProfileExceedTimeFunc
==============
*/

bool __fastcall Scr_CompareScriptProfileExceedTimeFunc(const ProfileScrExceedSummaryFile *entry1, const ProfileScrExceedSummaryFile *entry2, double _XMM2_8, double _XMM3_8)
{
  unsigned int funcCount; 

  __asm { vxorps  xmm2, xmm2, xmm2 }
  if ( entry1->funcSummary[0].funcCount )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+100h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm3, xmm0, xmm1
    }
  }
  else
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
  }
  funcCount = entry2->funcSummary[0].funcCount;
  if ( funcCount )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+100h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm2, xmm0, xmm1
    }
  }
  __asm { vcomiss xmm3, xmm2 }
  return funcCount != 0;
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
  _RCX = 120 * v2;
  _R8 = 120 * v3;
  _R9 = v4->m_parserPub.sourceBufferLookup;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+r9+6Ch]
    vcomiss xmm0, dword ptr [r8+r9+6Ch]
  }
  return (unsigned __int128)(120 * (__int128)v3) >> 64 != 0;
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
  __int64 v5; 
  int v6; 
  __int64 v7; 
  __int64 v33; 
  signed __int64 v34; 
  char *v35; 
  __int64 v36; 
  char v37; 
  char v38; 

  v5 = -1i64;
  do
    ++v5;
  while ( rawLine[v5] );
  if ( (int)v5 >= 1024 )
    LODWORD(v5) = 1023;
  v6 = 0;
  if ( (int)v5 > 0 && (unsigned int)v5 >= 0x40 )
  {
    v7 = (int)v5 - 1;
    if ( line > &rawLine[v7] || &line[v7] < rawLine )
    {
      __asm
      {
        vmovaps [rsp+18h+var_18], xmm6
        vmovdqu xmm4, cs:__xmm@09090909090909090909090909090909
        vmovdqu xmm5, cs:__xmm@20202020202020202020202020202020
        vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff
      }
      _R10 = line;
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
          vmovdqu xmmword ptr [r10], xmm2
          vpandn  xmm2, xmm0, xmm6
          vpand   xmm0, xmm2, xmmword ptr [rdx+r10+10h]
          vpandn  xmm1, xmm2, xmm5
          vpor    xmm2, xmm1, xmm0
          vpcmpeqb xmm0, xmm4, xmmword ptr [rdx+r10+20h]
          vmovdqu xmmword ptr [r10+10h], xmm2
          vpandn  xmm2, xmm0, xmm6
          vpand   xmm0, xmm2, xmmword ptr [rdx+r10+20h]
          vpandn  xmm1, xmm2, xmm5
          vpor    xmm2, xmm1, xmm0
          vpcmpeqb xmm0, xmm4, xmmword ptr [rdx+r10+30h]
          vmovdqu xmmword ptr [r10+20h], xmm2
          vpandn  xmm2, xmm0, xmm6
          vpand   xmm0, xmm2, xmmword ptr [rdx+r10+30h]
          vpandn  xmm1, xmm2, xmm5
          vpor    xmm2, xmm1, xmm0
          vmovdqu xmmword ptr [r10+30h], xmm2
        }
        _R10 += 64;
        v6 += 64;
      }
      while ( _R10 - line < (int)(v5 - (v5 & 0x8000003F)) );
      __asm { vmovaps xmm6, [rsp+18h+var_18] }
    }
  }
  v33 = v6;
  if ( v6 < (__int64)(int)v5 )
  {
    v34 = rawLine - line;
    v35 = &line[v6];
    v36 = (int)v5 - v33;
    do
    {
      v37 = v35[v34];
      ++v35;
      v38 = 32;
      if ( v37 != 9 )
        v38 = v37;
      *(v35 - 1) = v38;
      --v36;
    }
    while ( v36 );
  }
  if ( line[(int)v5 - 1] == 13 )
    *(_WORD *)&line[(int)v5 - 1] = 0;
  else
    line[(int)v5] = 0;
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

bool __fastcall Scr_PrintProfileTimes(const scrContext_t *scrContext, double minTime)
{
  int v5; 
  unsigned int v8; 
  int i; 
  __int64 v10; 
  signed __int64 m_scriptPos; 
  OpcodeLookup *v12; 
  __int64 v13; 
  OpcodeLookup *v14; 
  const ProfileScript *ProfileConst; 
  __int64 v20; 
  unsigned int v21; 
  __int64 v22; 
  const char *v23; 
  char (*profileScriptNames)[20]; 
  __int64 v25; 
  unsigned int *p_totalTime; 
  OpcodeLookup *v30; 
  unsigned __int64 v31; 
  __int64 codePosI; 
  __int64 v43; 
  bool developer; 
  const char *v45; 
  const char *programBuffer; 
  bool v47; 
  unsigned int SourceBuffer; 
  SourceLookup *sourcePosLookup; 
  const char *v50; 
  __int64 v51; 
  unsigned int offset; 
  OpcodeLookup *PrevSourcePosOpcodeLookup; 
  const char *v54; 
  bool result; 
  char *fmt; 
  char *fmta; 
  ScriptCodePos v60; 

  __asm { vxorps  xmm0, xmm0, xmm0 }
  v5 = 0;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vcomiss xmm1, xmm0
    vmovaps xmm6, xmm1
  }
  v8 = 0;
  for ( i = 0; v8 < scrContext->m_parserGlob.opcodeLookupLen; ++v8 )
  {
    if ( *(_QWORD *)&scrContext->m_parserGlob.opcodeLookup[v8] >> 54 )
    {
      ++i;
    }
    else if ( ((16 * *(_DWORD *)&scrContext->m_parserGlob.opcodeLookup[v8]) & 0x7FFFFFF0) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4107, ASSERT_TYPE_ASSERT, "( !pScrParserGlob->opcodeLookup[i].GetProfileTime() )", (const char *)&queryFormat, "!pScrParserGlob->opcodeLookup[i].GetProfileTime()") )
    {
      __debugbreak();
    }
  }
  v10 = i;
  m_scriptPos = 24i64 * i;
  v60.m_scriptPos = (const char *)m_scriptPos;
  v12 = (OpcodeLookup *)Mem_Virtual_Alloc(m_scriptPos, "Scr_PrintProfileTimes", TRACK_DEBUG);
  v13 = 0i64;
  v14 = v12;
  if ( scrContext->m_parserGlob.opcodeLookupLen )
  {
    _RDI = v12;
    do
    {
      _R8 = scrContext->m_parserGlob.opcodeLookup;
      _RDX = 3 * v13;
      if ( *(_QWORD *)&_R8[v13] >> 54 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r8+rdx*8]
          vmovups xmmword ptr [rdi], xmm0
          vmovsd  xmm1, qword ptr [r8+rdx*8+10h]
          vmovsd  qword ptr [rdi+10h], xmm1
        }
        ++v5;
        ++_RDI;
        *(_QWORD *)&scrContext->m_parserGlob.opcodeLookup[v13] = 0i64;
      }
      else if ( ((16 * *(_DWORD *)&_R8[v13]) & 0x7FFFFFF0) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4120, ASSERT_TYPE_ASSERT, "( !pScrParserGlob->opcodeLookup[i].GetProfileTime() )", (const char *)&queryFormat, "!pScrParserGlob->opcodeLookup[i].GetProfileTime()") )
      {
        __debugbreak();
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < scrContext->m_parserGlob.opcodeLookupLen );
    m_scriptPos = (signed __int64)v60.m_scriptPos;
    v10 = i;
  }
  if ( v5 != i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4128, ASSERT_TYPE_ASSERT, "( profileIndex == profileCount )", (const char *)&queryFormat, "profileIndex == profileCount") )
    __debugbreak();
  std::_Sort_unchecked<OpcodeLookup *,bool (*)(OpcodeLookup const &,OpcodeLookup const &)>(v14, (OpcodeLookup *)((char *)v14 + m_scriptPos), m_scriptPos / 24, Scr_CompareProfileTimes);
  Com_Printf(23, "\n");
  ProfileConst = ScriptContext_GetProfileConst(scrContext);
  v20 = 128i64;
  v21 = 0;
  v22 = 128i64;
  v23 = ProfileConst->profileScriptNames[0];
  profileScriptNames = ProfileConst->profileScriptNames;
  do
  {
    v25 = -1i64;
    do
      ++v25;
    while ( (*profileScriptNames)[v25] );
    if ( (unsigned int)v25 <= v21 )
      LODWORD(v25) = v21;
    ++profileScriptNames;
    v21 = v25;
    --v22;
  }
  while ( v22 );
  p_totalTime = &ProfileConst->write[0].totalTime;
  do
  {
    if ( *v23 )
    {
      Sys_GetValue(0);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
        vmulss  xmm0, xmm0, dword ptr [rax+8B4Ch]
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+98h+fmt], xmm1
      }
      Com_Printf(23, "%-*s %6.2f\n", v21, v23, *(double *)&fmta);
    }
    v23 += 20;
    p_totalTime += 4;
    --v20;
  }
  while ( v20 );
  Com_Printf(23, "\n");
  if ( v10 > 0 )
  {
    v30 = v14;
    do
    {
      v31 = *(_QWORD *)v30;
      Sys_GetValue(0);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
        vcvtss2sd xmm6, xmm1, xmm1
      }
      Sys_GetValue(0);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovaps xmm3, xmm6
        vcvtsi2ss xmm0, xmm0, ebx
        vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
        vcvtss2sd xmm2, xmm1, xmm1
        vmovq   r8, xmm2
        vmovq   r9, xmm3
      }
      LODWORD(fmt) = v31 >> 54;
      Com_Printf(23, "time: %f, builtin: %f, usage: %d\n", *(double *)&_XMM2, *(double *)&_XMM3, fmt);
      codePosI = v30->codePosI;
      if ( (_DWORD)codePosI )
        v43 = scrContext->m_parserBasePointer + codePosI;
      else
        v43 = 0i64;
      v60.m_scriptPos = ScriptCodePos::CreateScriptPos((const char *)(v43 + 1)).m_scriptPos;
      if ( v60.m_scriptPos )
      {
        if ( ScriptCodePos::IsEndPos(&v60) || (developer = scrContext->m_varPub.developer, !ScriptCodePos::IsScriptPos(&v60)) )
        {
          Com_PrintError(23, "<removed thread>\n");
        }
        else if ( developer )
        {
          v45 = v60.m_scriptPos;
          programBuffer = scrContext->m_varPub.programBuffer;
          v47 = Scr_IsInOpcodeMemory(scrContext, v60.m_scriptPos) != 0;
          if ( programBuffer && v47 )
          {
            SourceBuffer = Scr_GetSourceBuffer(scrContext, v45 - 1);
            sourcePosLookup = scrContext->m_parserGlob.sourcePosLookup;
            v50 = v45 - 1;
            v51 = SourceBuffer;
            offset = (_DWORD)v45 - LODWORD(scrContext->m_parserPub.sourceBufferLookup[v51].codePos);
            PrevSourcePosOpcodeLookup = Scr_GetPrevSourcePosOpcodeLookup(scrContext, v50);
            Scr_PrintSourcePos(scrContext, 23, scrContext->m_parserPub.sourceBufferLookup[v51].buf, scrContext->m_parserPub.sourceBufferLookup[v51].sourceBuf, *(_DWORD *)&sourcePosLookup[PrevSourcePosOpcodeLookup->sourcePosIndex + 1] & 0xFFFFFF, offset, 1);
          }
          else
          {
            Com_PrintError(23, "%p\n\n", v45);
          }
        }
        else
        {
          v54 = v60.m_scriptPos;
          if ( Scr_IsInOpcodeMemory(scrContext, v60.m_scriptPos - 1) )
            Com_PrintError(23, "@ %lld\n", v54 - scrContext->m_varPub.programBuffer);
          else
            Com_PrintError(23, "%p\n\n", v54);
        }
      }
      else
      {
        Com_PrintError(23, "<frozen thread>\n");
      }
      ++v30;
      --v10;
    }
    while ( v10 );
  }
  Com_Printf(23, "\n");
  Mem_Virtual_Free(v14);
  result = 1;
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  return result;
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
  unsigned int v8; 
  __int64 v10; 
  bool v11; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 

  Com_Printf(23, "name:           time,   avg,    max,   total,   builtin,  total - builtin\n");
  v8 = 0;
  if ( scrContext->m_parserPub.sourceBufferLookupLen )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_48], xmm9
      vmovaps [rsp+0A8h+var_58], xmm10
      vmovaps [rsp+0A8h+var_18], xmm6
      vmovaps [rsp+0A8h+var_28], xmm7
      vmovaps [rsp+0A8h+var_38], xmm8
      vxorps  xmm10, xmm10, xmm10
    }
    do
    {
      v10 = v8;
      v11 = &scrContext->m_parserPub.sourceBufferLookup[v10] == NULL;
      _RDI = &scrContext->m_parserPub.sourceBufferLookup[v10];
      __asm
      {
        vmovss  xmm9, dword ptr [rdi+6Ch]
        vucomiss xmm9, xmm10
      }
      if ( !v11 )
      {
        __asm { vmovss  xmm7, dword ptr [rdi+70h] }
        Sys_GetValue(0);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rdi+68h]
          vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
          vcvtss2sd xmm8, xmm1, xmm1
        }
        Sys_GetValue(0);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rdi+64h]
          vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
          vcvtss2sd xmm6, xmm1, xmm1
        }
        Sys_GetValue(0);
        __asm
        {
          vsubss  xmm0, xmm9, xmm7
          vcvtss2sd xmm2, xmm0, xmm0
          vmovsd  [rsp+0A8h+var_68], xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rdi+60h]
          vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
          vcvtss2sd xmm4, xmm7, xmm7
          vmovsd  [rsp+0A8h+var_70], xmm4
          vcvtss2sd xmm5, xmm9, xmm9
          vmovsd  [rsp+0A8h+var_78], xmm5
          vcvtss2sd xmm3, xmm1, xmm1
          vmovq   r9, xmm3
          vmovsd  [rsp+0A8h+var_80], xmm8
          vmovsd  [rsp+0A8h+var_88], xmm6
        }
        Com_Printf(23, "%s: %0.3f, %0.3f, %0.3f, %0.3f, %0.3f, %0.3f\n", _RDI->buf, *(double *)&_XMM3, v36, v37, v38, v39, v40);
      }
      ++v8;
    }
    while ( v8 < scrContext->m_parserPub.sourceBufferLookupLen );
    __asm
    {
      vmovaps xmm10, [rsp+0A8h+var_58]
      vmovaps xmm9, [rsp+0A8h+var_48]
      vmovaps xmm8, [rsp+0A8h+var_38]
      vmovaps xmm7, [rsp+0A8h+var_28]
      vmovaps xmm6, [rsp+0A8h+var_18]
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

void __fastcall Scr_ScriptProfilePrintUsageReportToBlackBox(scrContext_t *scrContext, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  scrContext_t *v11; 
  ProfileScript *Profile; 
  SourceBufferInfo *SourceBufferLookup; 
  int serverTimeExceedCount; 
  SourceBufferInfo *v18; 
  unsigned int serverTimeCount; 
  unsigned int v26; 
  unsigned int v34; 
  SourceBufferInfo *v54; 
  unsigned int v55; 
  __int64 v56; 
  unsigned int i; 
  unsigned int v60; 
  const char *BuiltInName; 
  unsigned int v67; 
  const char *v68; 
  int v77; 
  float v89; 
  __int64 v90; 
  char *v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  unsigned int v113; 
  unsigned int v121; 
  SourceBufferInfo *v122; 
  SourceBufferInfo *v123; 

  v11 = scrContext;
  if ( scrContext->m_varPub.developer )
  {
    if ( Com_IsAnyLocalServerRunning() )
    {
      __asm
      {
        vmovaps [rsp+318h+var_58], xmm6
        vmovaps [rsp+318h+var_68], xmm7
        vmovaps [rsp+318h+var_78], xmm8
      }
      _RBX = SV_Timing_GetCurrent();
      __asm { vmovss  xmm6, dword ptr [rax] }
      _RDI = SvGameGlobals::GetSvGameGlobalsCommon();
      Profile = ScriptContext_GetProfile(v11);
      SourceBufferLookup = Scr_GetSourceBufferLookup(v11);
      serverTimeExceedCount = _RBX->serverTimeExceedCount;
      v18 = SourceBufferLookup;
      serverTimeCount = _RBX->serverTimeCount;
      v123 = SourceBufferLookup;
      if ( serverTimeExceedCount <= 0 )
      {
        __asm { vxorps  xmm2, xmm2, xmm2 }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, edx
          vdivss  xmm1, xmm0, xmm1
          vsubss  xmm2, xmm1, xmm6
        }
      }
      __asm { vmovss  xmm4, dword ptr [rbx+0Ch] }
      if ( serverTimeCount )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rcx
          vdivss  xmm3, xmm0, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm3, xmm3, xmm3; <args_1> }
      }
      v26 = 0;
      __asm
      {
        vmovss  dword ptr [rsp+318h+var_2C0], xmm6
        vmovss  dword ptr [rsp+318h+var_2D0], xmm2
        vmovss  dword ptr [rsp+318h+var_2F0], xmm4
      }
      DLog_RecordEvent<4096,char const *,float,char const *,float,char const *,int,char const *,float,char const *,float,char const *,unsigned int,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t>(0i64, "scr_usage", "servertimeavg", *(float *)&_XMM3, "serverttimemax", v89, "servertimeexceededcount", serverTimeExceedCount, "servertimeexceededavg", v92, "servertimethreshold", v93, "matchframecount", serverTimeCount, "scrtimeavg", 0, "scrtimemax", 0, "scrttimeexceededavg", 0, "msgtimeavg", 0, "msgtimemax", 0, "proftimeavg", 0, "proftimemax", 0, "proftimemaxatframe", 0, "usagecallcountavg", 0, "usagecallcountmax", 0, "usagethreadcountavg", 0, "usagethreadcountmax", 0, "filenum", 0, "filename", 0, "fileavgtime", 0, "fileavgscrtime", 0, "fileavgbuiltin", 0, "filemaxops", 0, "funcnum", 0, "funcname", 0, "funcavgtime", 0, "funcmaxtime", 0, "functimeatspike", 0, "funcavgscrtime", 0, "funcavgbuiltin", 0, "funccalls", 0, "funcmaxops", 0, "builtinnum", 0, "builtinname", 0, "builtinavgtime", 0, "builtinmaxtime", 0, "builtincalls", 0);
      if ( _RBX->serverTimeExceedCount <= 0 )
      {
        __asm { vxorps  xmm3, xmm3, xmm3 }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+84h]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vdivss  xmm3, xmm0, xmm1
        }
      }
      __asm { vmovss  xmm4, dword ptr [rdi+94h] }
      if ( _RBX->serverTimeCount )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+80h]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm2, xmm0, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm2, xmm2, xmm2 }
      }
      __asm
      {
        vmovss  [rsp+318h+var_280], xmm3
        vmovss  [rsp+318h+var_290], xmm4
        vmovss  [rsp+318h+var_2A0], xmm2
      }
      DLog_RecordEvent<4096,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,float,char const *,float,char const *,float,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t>(0i64, "scr_usage", "servertimeavg", 0, "serverttimemax", 0, "servertimeexceededcount", 0, "servertimeexceededavg", 0, "servertimethreshold", 0, "matchframecount", 0, "scrtimeavg", v94, "scrtimemax", v95, "scrttimeexceededavg", v96, "msgtimeavg", 0, "msgtimemax", 0, "proftimeavg", 0, "proftimemax", 0, "proftimemaxatframe", 0, "usagecallcountavg", 0, "usagecallcountmax", 0, "usagethreadcountavg", 0, "usagethreadcountmax", 0, "filenum", 0, "filename", 0, "fileavgtime", 0, "fileavgscrtime", 0, "fileavgbuiltin", 0, "filemaxops", 0, "funcnum", 0, "funcname", 0, "funcavgtime", 0, "funcmaxtime", 0, "functimeatspike", 0, "funcavgscrtime", 0, "funcavgbuiltin");
      v34 = _RBX->serverTimeCount;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      if ( v34 )
        __asm { vcvtsi2ss xmm6, xmm6, rcx }
      __asm { vxorps  xmm5, xmm5, xmm5 }
      if ( v34 )
        __asm { vcvtsi2ss xmm5, xmm5, rcx }
      __asm { vmovss  xmm8, dword ptr [rdi+8Ch] }
      if ( v34 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+88h]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, r8
          vdivss  xmm4, xmm0, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm4, xmm4, xmm4 }
      }
      __asm
      {
        vmovsd  xmm1, cs:__real@43f0000000000000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (_RBX->clientMsgTicksMax & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddsd  xmm0, xmm0, xmm1 }
      __asm
      {
        vmovsd  xmm2, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vmulsd  xmm0, xmm0, xmm2
        vcvtsd2ss xmm7, xmm0, xmm0
      }
      if ( _RBX->clientMsgCount <= 0 )
      {
        __asm { vxorps  xmm3, xmm3, xmm3 }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, rax
        }
        if ( (_RBX->clientMsgTicksTotal & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddsd  xmm0, xmm0, xmm1 }
        __asm
        {
          vmulsd  xmm0, xmm0, xmm2
          vxorps  xmm1, xmm1, xmm1
          vcvtsd2ss xmm2, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, ecx
          vdivss  xmm3, xmm2, xmm1
        }
      }
      __asm
      {
        vmovss  [rsp+318h+var_200], xmm6
        vmovss  [rsp+318h+var_220], xmm5
        vmovss  [rsp+318h+var_240], xmm8
        vmovss  [rsp+318h+var_250], xmm4
        vmovss  [rsp+318h+var_260], xmm7
        vmovss  [rsp+318h+var_270], xmm3
      }
      DLog_RecordEvent<4096,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,float,char const *,float,char const *,float,char const *,float,char const *,unsigned int,char const *,float,char const *,unsigned int,char const *,float,char const *,unsigned int,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t>(0i64, "scr_usage", "servertimeavg", 0, "serverttimemax", 0, "servertimeexceededcount", 0, "servertimeexceededavg", 0, "servertimethreshold", 0, "matchframecount", 0, "scrtimeavg", 0, "scrtimemax", 0, "scrttimeexceededavg", 0, "msgtimeavg", v97, "msgtimemax", v98, "proftimeavg", v99, "proftimemax", v100, "proftimemaxatframe", _RDI->timeStats.serverScriptProfileCalcTimeMaxAtFrame, "usagecallcountavg", v101, "usagecallcountmax", _RDI->timeStats.serverScriptUsageOpCountMax, "usagethreadcountavg", v102, "usagethreadcountmax", _RDI->timeStats.serverScriptUsageThreadResumeMax, "filenum", 0, "filename", 0, "fileavgtime", 0, "fileavgscrtime", 0, "fileavgbuiltin", 0, "filemaxops", 0, "funcnum", 0, "funcname", 0, "funcavgtime", 0, "funcmaxtime", 0, "functimeatspike", 0, "funcavgscrtime", 0, "funcavgbuiltin", 0, "funccalls", 0, "funcmaxops", 0, "builtinnum", 0, "builtinname", 0, "builtinavgtime", 0, "builtinmaxtime", 0, "builtincalls", 0);
      if ( script_usage_tracking && script_usage_tracking->current.integer )
      {
        __asm
        {
          vmovaps [rsp+318h+var_88], xmm9
          vmovaps [rsp+318h+var_98], xmm10
          vmovaps [rsp+318h+var_A8], xmm11
        }
        Scr_SortTrackedProfileData(v11);
        v121 = 0;
        _R15 = &Profile->scrFileTimeTracking[0].fileTimeBuiltIn;
        do
        {
          if ( *((_DWORD *)_R15 + 1) )
          {
            if ( *((unsigned __int16 *)_R15 + 10) >= v11->m_parserPub.sourceBufferLookupLen )
            {
              LODWORD(v91) = v11->m_parserPub.sourceBufferLookupLen;
              LODWORD(v90) = *((unsigned __int16 *)_R15 + 10);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3741, ASSERT_TYPE_ASSERT, "(unsigned)( fileSummary->srcBufferIdx ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "fileSummary->srcBufferIdx doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v90, v91) )
                __debugbreak();
            }
            _RBX = _R15 - 2206;
            v54 = &v18[*((unsigned __int16 *)_R15 + 10)];
            v55 = 0;
            v122 = v54;
            do
            {
              if ( _RBX == (float *)268 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3749, ASSERT_TYPE_ASSERT, "( funcSummary )", (const char *)&queryFormat, "funcSummary") )
                __debugbreak();
              if ( *((unsigned __int16 *)_RBX + 6) >= v54->functionLookupLen )
              {
                LODWORD(v91) = v54->functionLookupLen;
                LODWORD(v90) = *((unsigned __int16 *)_RBX + 6);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3750, ASSERT_TYPE_ASSERT, "(unsigned)( funcSummary->funcIndex ) < (unsigned)( srcBuffer->functionLookupLen )", "funcSummary->funcIndex doesn't index srcBuffer->functionLookupLen\n\t%i not in [0, %i)", v90, v91) )
                  __debugbreak();
              }
              v56 = (__int64)&v54->functionLookupStatic[*((unsigned __int16 *)_RBX + 6)];
              if ( *((_BYTE *)_RBX + 14) )
              {
                _RDI = _RBX - 65;
                for ( i = 0; i < 0x10; ++i )
                {
                  _RSI = _RDI - 2;
                  if ( _RDI == (float *)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3761, ASSERT_TYPE_ASSERT, "( builtInFuncSummary )", (const char *)&queryFormat, "builtInFuncSummary") )
                    __debugbreak();
                  if ( *((_BYTE *)_RDI + 6) )
                  {
                    if ( !*((_WORD *)_RDI + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3766, ASSERT_TYPE_ASSERT, "( builtInFuncSummary->builtInIndex )", (const char *)&queryFormat, "builtInFuncSummary->builtInIndex") )
                      __debugbreak();
                    v60 = *(_DWORD *)_RDI;
                    __asm { vmovss  xmm11, dword ptr [rdi-4] }
                    if ( *(_DWORD *)_RDI )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rsi]
                        vxorps  xmm1, xmm1, xmm1
                        vcvtsi2ss xmm1, xmm1, r14
                        vdivss  xmm10, xmm0, xmm1
                      }
                    }
                    else
                    {
                      __asm { vxorps  xmm10, xmm10, xmm10 }
                    }
                    BuiltInName = GetBuiltInName(scrContext, *((unsigned __int16 *)_RDI + 2));
                    v67 = *((_DWORD *)_RBX + 1);
                    v68 = BuiltInName;
                    __asm
                    {
                      vxorps  xmm2, xmm2, xmm2
                      vcvtsi2ss xmm2, xmm2, rdx
                    }
                    if ( v67 )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rbx]
                        vdivss  xmm7, xmm0, xmm2
                      }
                    }
                    else
                    {
                      __asm { vxorps  xmm7, xmm7, xmm7 }
                    }
                    if ( v67 )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rbx-0Ch]
                        vsubss  xmm1, xmm0, dword ptr [rbx]
                        vdivss  xmm6, xmm1, xmm2
                      }
                    }
                    else
                    {
                      __asm { vxorps  xmm6, xmm6, xmm6 }
                    }
                    __asm
                    {
                      vmovss  xmm8, dword ptr [rbx-4]
                      vmovss  xmm9, dword ptr [rbx-8]
                    }
                    if ( v67 )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rbx-0Ch]
                        vdivss  xmm5, xmm0, xmm2
                      }
                    }
                    else
                    {
                      __asm { vxorps  xmm5, xmm5, xmm5 }
                    }
                    v77 = *((_DWORD *)_R15 + 1);
                    __asm
                    {
                      vxorps  xmm2, xmm2, xmm2
                      vcvtsi2ss xmm2, xmm2, rax
                    }
                    if ( v77 )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [r15]
                        vdivss  xmm4, xmm0, xmm2
                      }
                    }
                    else
                    {
                      __asm { vxorps  xmm4, xmm4, xmm4 }
                    }
                    if ( v77 )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [r15-4]
                        vsubss  xmm1, xmm0, dword ptr [r15]
                        vdivss  xmm3, xmm1, xmm2
                      }
                    }
                    else
                    {
                      __asm { vxorps  xmm3, xmm3, xmm3 }
                    }
                    if ( v77 )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [r15-4]
                        vdivss  xmm1, xmm0, xmm2
                      }
                    }
                    else
                    {
                      __asm { vxorps  xmm1, xmm1, xmm1 }
                    }
                    v113 = v60;
                    __asm { vmovss  [rsp+318h+var_C0], xmm11 }
                    v26 = v121;
                    __asm
                    {
                      vmovss  [rsp+318h+var_D0], xmm10
                      vmovss  [rsp+318h+var_120], xmm7
                      vmovss  [rsp+318h+var_130], xmm6
                      vmovss  [rsp+318h+var_140], xmm8
                      vmovss  [rsp+318h+var_150], xmm9
                      vmovss  [rsp+318h+var_160], xmm5
                      vmovss  [rsp+318h+var_1A0], xmm4
                      vmovss  [rsp+318h+var_1B0], xmm3
                      vmovss  [rsp+318h+var_1C0], xmm1
                    }
                    DLog_RecordEvent<4096,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,std::nullptr_t,char const *,unsigned int,char const *,char *,char const *,float,char const *,float,char const *,float,char const *,unsigned __int64,char const *,unsigned int,char const *,char *,char const *,float,char const *,float,char const *,float,char const *,float,char const *,float,char const *,unsigned int,char const *,unsigned int,char const *,unsigned int,char const *,char const *,char const *,float,char const *,float,char const *,unsigned int>(0i64, "scr_usage", "servertimeavg", 0, "serverttimemax", 0, "servertimeexceededcount", 0, "servertimeexceededavg", 0, "servertimethreshold", 0, "matchframecount", 0, "scrtimeavg", 0, "scrtimemax", 0, "scrttimeexceededavg", 0, "msgtimeavg", 0, "msgtimemax", 0, "proftimeavg", 0, "proftimemax", 0, "proftimemaxatframe", 0, "usagecallcountavg", 0, "usagecallcountmax", 0, "usagethreadcountavg", 0, "usagethreadcountmax", 0, "filenum", v121, "filename", v122->buf, "fileavgtime", v103, "fileavgscrtime", v104, "fileavgbuiltin", v105, "filemaxops", *(_QWORD *)(_R15 + 3), "funcnum", v55, "funcname", (char *)(v56 + 16), "funcavgtime", v106, "funcmaxtime", v107, "functimeatspike", v108, "funcavgscrtime", v109, "funcavgbuiltin", v110, "funccalls", v67, "funcmaxops", *((_DWORD *)_RBX + 2), "builtinnum", i, "builtinname", v68, "builtinavgtime", v111, "builtinmaxtime", v112, "builtincalls", v113);
                  }
                  _RDI += 4;
                }
                v54 = v122;
              }
              ++v55;
              _RBX += 71;
            }
            while ( v55 < 0x20 );
            v11 = scrContext;
            v18 = v123;
          }
          ++v26;
          _R15 += 2280;
          v121 = v26;
        }
        while ( v26 < 0x40 );
        __asm
        {
          vmovaps xmm11, [rsp+318h+var_A8]
          vmovaps xmm10, [rsp+318h+var_98]
          vmovaps xmm9, [rsp+318h+var_88]
        }
      }
      __asm
      {
        vmovaps xmm7, [rsp+318h+var_68]
        vmovaps xmm6, [rsp+318h+var_58]
        vmovaps xmm8, [rsp+318h+var_78]
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

void __fastcall Scr_ScriptProfilePrintUsageReportToLog(scrContext_t *scrContext, double _XMM1_8)
{
  ProfileScript *Profile; 
  SourceBufferInfo *SourceBufferLookup; 
  float *p_funcTimeSpike; 
  __int64 v14; 
  const ServerTiming *v19; 
  unsigned int serverTimeCount; 
  int serverTimeExceedCount; 
  unsigned int v91; 
  SourceBufferInfo *v92; 
  __int64 v93; 
  int v99; 
  unsigned int v112; 
  int v119; 
  unsigned int v128; 
  const char *BuiltInName; 
  char *fmta; 
  char *fmt; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  double v147; 
  __int64 v148; 
  double v149; 
  double v150; 
  double v151; 
  __int64 v152; 
  double v153; 
  double v154; 
  double v155; 
  __int64 v156; 
  double v157; 
  double v158; 
  __int64 v159; 
  double v160; 
  __int64 v161; 
  double v162; 
  SourceBufferInfo *v163; 
  scriptTimeStats_t *v164; 
  SourceBufferInfo *v165; 
  unsigned int v173; 
  unsigned int v174; 
  unsigned __int64 *v175; 
  unsigned __int64 *p_opCountMax; 

  if ( scrContext->m_varPub.developer )
  {
    if ( Com_IsAnyLocalServerRunning() )
    {
      __asm
      {
        vmovaps [rsp+148h+var_58], xmm6
        vmovaps [rsp+148h+var_68], xmm7
        vmovaps [rsp+148h+var_78], xmm8
        vmovaps [rsp+148h+var_88], xmm9
        vmovaps [rsp+148h+var_98], xmm10
        vmovaps [rsp+148h+var_A8], xmm11
        vmovaps [rsp+148h+var_B8], xmm12
      }
      Profile = ScriptContext_GetProfile(scrContext);
      SourceBufferLookup = Scr_GetSourceBufferLookup(scrContext);
      v165 = SourceBufferLookup;
      p_funcTimeSpike = &Profile->scrFileTimeTracking[0].funcSummary[1].funcTimeSpike;
      v14 = 64i64;
      __asm
      {
        vxorps  xmm11, xmm11, xmm11
        vxorps  xmm6, xmm6, xmm6
      }
      do
      {
        if ( *((_DWORD *)p_funcTimeSpike + 2137) )
        {
          if ( *((_BYTE *)p_funcTimeSpike - 266) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx-11Ch] }
          if ( *((_BYTE *)p_funcTimeSpike + 18) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx] }
          if ( *((_BYTE *)p_funcTimeSpike + 302) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+11Ch] }
          if ( *((_BYTE *)p_funcTimeSpike + 586) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+238h] }
          if ( *((_BYTE *)p_funcTimeSpike + 870) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+354h] }
          if ( *((_BYTE *)p_funcTimeSpike + 1154) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+470h] }
          if ( *((_BYTE *)p_funcTimeSpike + 1438) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+58Ch] }
          if ( *((_BYTE *)p_funcTimeSpike + 1722) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+6A8h] }
          if ( *((_BYTE *)p_funcTimeSpike + 2006) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+7C4h] }
          if ( *((_BYTE *)p_funcTimeSpike + 2290) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+8E0h] }
          if ( *((_BYTE *)p_funcTimeSpike + 2574) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+9FCh] }
          if ( *((_BYTE *)p_funcTimeSpike + 2858) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+0B18h] }
          if ( *((_BYTE *)p_funcTimeSpike + 3142) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+0C34h] }
          if ( *((_BYTE *)p_funcTimeSpike + 3426) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+0D50h] }
          if ( *((_BYTE *)p_funcTimeSpike + 3710) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+0E6Ch] }
          if ( *((_BYTE *)p_funcTimeSpike + 3994) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+0F88h] }
          if ( *((_BYTE *)p_funcTimeSpike + 4278) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+10A4h] }
          if ( *((_BYTE *)p_funcTimeSpike + 4562) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+11C0h] }
          if ( *((_BYTE *)p_funcTimeSpike + 4846) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+12DCh] }
          if ( *((_BYTE *)p_funcTimeSpike + 5130) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+13F8h] }
          if ( *((_BYTE *)p_funcTimeSpike + 5414) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+1514h] }
          if ( *((_BYTE *)p_funcTimeSpike + 5698) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+1630h] }
          if ( *((_BYTE *)p_funcTimeSpike + 5982) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+174Ch] }
          if ( *((_BYTE *)p_funcTimeSpike + 6266) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+1868h] }
          if ( *((_BYTE *)p_funcTimeSpike + 6550) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+1984h] }
          if ( *((_BYTE *)p_funcTimeSpike + 6834) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+1AA0h] }
          if ( *((_BYTE *)p_funcTimeSpike + 7118) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+1BBCh] }
          if ( *((_BYTE *)p_funcTimeSpike + 7402) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+1CD8h] }
          if ( *((_BYTE *)p_funcTimeSpike + 7686) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+1DF4h] }
          if ( *((_BYTE *)p_funcTimeSpike + 7970) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+1F10h] }
          if ( *((_BYTE *)p_funcTimeSpike + 8254) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+202Ch] }
          if ( *((_BYTE *)p_funcTimeSpike + 8538) )
            __asm { vaddss  xmm6, xmm6, dword ptr [rcx+2148h] }
        }
        p_funcTimeSpike += 2280;
        --v14;
      }
      while ( v14 );
      Com_Printf(23, "\n===== Script Usage Summary (time in ms)=====\n\n");
      _RSI = &SvGameGlobals::GetSvGameGlobalsCommon()->timeStats;
      v164 = _RSI;
      _RAX = SV_Timing_GetCurrent();
      v19 = _RAX;
      __asm
      {
        vmovss  xmm2, dword ptr [rax]
        vcvtss2sd xmm5, xmm2, xmm2
      }
      if ( _RAX->serverTimeExceedCount <= 0 )
      {
        __asm { vmovaps xmm2, xmm11 }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+8]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, edx
          vdivss  xmm1, xmm0, xmm1
          vsubss  xmm2, xmm1, xmm2
        }
      }
      __asm
      {
        vmovss  xmm4, dword ptr [rax+0Ch]
        vcvtss2sd xmm3, xmm2, xmm2
        vcvtss2sd xmm4, xmm4, xmm4
      }
      if ( _RAX->serverTimeCount )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+4]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rcx
          vdivss  xmm2, xmm0, xmm1
        }
      }
      else
      {
        __asm { vmovaps xmm2, xmm11 }
      }
      __asm
      {
        vmovsd  [rsp+148h+var_110], xmm5
        vmovsd  [rsp+148h+var_118], xmm3
        vmovaps xmm3, xmm4
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_Printf(23, "Server Time:\t\t Avg:%0.2f\t Max:%0.2f\t Exceed Frames:%d\t Frames:%u\t Exceed Avg:%0.2f above %0.1f\n", *(double *)&_XMM2, *(double *)&_XMM3, _RAX->serverTimeExceedCount, _RAX->serverTimeCount, v150, v155);
      __asm
      {
        vmovss  xmm10, dword ptr [rsi+30h]
        vcvtss2sd xmm10, xmm10, xmm10
      }
      if ( _RSI->serverScriptUsageThreadCreateTimeCount )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+28h]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rdx
          vdivss  xmm2, xmm0, xmm1
        }
      }
      else
      {
        __asm { vmovaps xmm2, xmm11 }
      }
      serverTimeCount = v19->serverTimeCount;
      __asm
      {
        vcvtss2sd xmm9, xmm2, xmm2
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, rcx
      }
      if ( serverTimeCount )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm1, xmm0, xmm2
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm11 }
      }
      __asm { vcvtss2sd xmm8, xmm1, xmm1 }
      if ( serverTimeCount )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm1, xmm0, xmm2
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm11 }
      }
      serverTimeExceedCount = v19->serverTimeExceedCount;
      __asm { vcvtss2sd xmm7, xmm1, xmm1 }
      if ( serverTimeExceedCount <= 0 )
      {
        __asm { vmovaps xmm3, xmm11 }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+4]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vdivss  xmm3, xmm0, xmm1
        }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+14h]
        vcomiss xmm1, xmm11
        vmovss  xmm12, cs:__real@42c80000
        vcvtss2sd xmm5, xmm3, xmm3
      }
      if ( serverTimeExceedCount )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm12
          vdivss  xmm3, xmm0, xmm1
        }
      }
      else
      {
        __asm { vmovaps xmm3, xmm11 }
      }
      __asm
      {
        vcvtss2sd xmm4, xmm3, xmm3
        vcvtss2sd xmm3, xmm1, xmm1
      }
      if ( serverTimeCount )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vdivss  xmm1, xmm0, xmm2
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm11 }
      }
      __asm
      {
        vmovsd  [rsp+148h+var_F0], xmm10
        vmovsd  [rsp+148h+var_F8], xmm9
        vmovsd  [rsp+148h+var_108], xmm8
      }
      LODWORD(v156) = _RSI->serverScriptUsageOpCountMax;
      __asm
      {
        vcvtss2sd xmm2, xmm1, xmm1
        vmovsd  [rsp+148h+var_118], xmm7
        vmovsd  [rsp+148h+var_120], xmm5
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+148h+fmt], xmm4
      }
      Com_Printf(23, "Script Time:\t\t Avg:%0.2f\t Max:%0.2f (Coverage:%0.1f%%)\t Exceed Avg:%0.2f\t OpCount:(Avg:%0.2f Max:%d)\t ThreadCount:(Avg:%0.2f Max:%d)\t ThreadCreateTime:(Avg:%0.2f Max:%0.2f Count:%d)\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta, v147, v151, v156, v158, _RSI->serverScriptUsageThreadResumeMax, v160, v162, _RSI->serverScriptUsageThreadCreateTimeCount);
      __asm
      {
        vmovaps xmm10, [rsp+148h+var_98]
        vmovaps xmm9, [rsp+148h+var_88]
        vmovsd  xmm3, cs:__real@43f0000000000000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (v19->clientMsgTicksMax & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddsd  xmm0, xmm0, xmm3 }
      __asm
      {
        vmovsd  xmm2, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vmulsd  xmm0, xmm0, xmm2
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtss2sd xmm4, xmm1, xmm1
      }
      if ( v19->clientMsgCount <= 0 )
      {
        __asm { vmovaps xmm3, xmm11 }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, rax
        }
        if ( (v19->clientMsgTicksTotal & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddsd  xmm0, xmm0, xmm3 }
        __asm
        {
          vmulsd  xmm0, xmm0, xmm2
          vxorps  xmm1, xmm1, xmm1
          vcvtsd2ss xmm2, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, ecx
          vdivss  xmm3, xmm2, xmm1
        }
      }
      __asm
      {
        vcvtss2sd xmm2, xmm3, xmm3
        vmovaps xmm3, xmm4
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_Printf(23, "Msg Time:\t\t Avg= %0.2f\t Max= %0.2f\n", *(double *)&_XMM2, *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm3, dword ptr [rsi+0Ch]
        vcvtss2sd xmm3, xmm3, xmm3
      }
      if ( v19->serverTimeCount )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+8]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm2, xmm0, xmm1
        }
      }
      else
      {
        __asm { vmovaps xmm2, xmm11 }
      }
      __asm { vcvtss2sd xmm2, xmm2, xmm2 }
      LODWORD(fmt) = _RSI->serverScriptProfileCalcTimeMaxAtFrame;
      __asm
      {
        vmovq   r8, xmm2
        vmovq   r9, xmm3
      }
      Com_Printf(23, "Profile Cost:\t\t Avg= %0.2f\t Max= %0.2f @ Frame# %d\t\n", *(double *)&_XMM2, *(double *)&_XMM3, fmt);
      if ( script_usage_tracking && script_usage_tracking->current.integer )
      {
        Scr_SortTrackedProfileData(scrContext);
        Com_Printf(23, "Script time breakdown: \n");
        __asm { vmovss  xmm8, cs:__real@5f800000 }
        _R12 = &Profile->scrFileTimeTracking[0].opCountMax;
        v91 = 0;
        v174 = 0;
        p_opCountMax = &Profile->scrFileTimeTracking[0].opCountMax;
        do
        {
          if ( *((_DWORD *)_R12 - 2) )
          {
            if ( *((unsigned __int16 *)_R12 + 4) >= scrContext->m_parserPub.sourceBufferLookupLen )
            {
              LODWORD(v152) = scrContext->m_parserPub.sourceBufferLookupLen;
              LODWORD(v148) = *((unsigned __int16 *)_R12 + 4);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3921, ASSERT_TYPE_ASSERT, "(unsigned)( fileSummary->srcBufferIdx ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "fileSummary->srcBufferIdx doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v148, v152) )
                __debugbreak();
            }
            v92 = &SourceBufferLookup[*((unsigned __int16 *)_R12 + 4)];
            v163 = v92;
            Com_Printf(23, "{%d} %s: ", v91, v92->buf);
            v93 = *_R12;
            if ( _RSI->serverScriptUsageOpCountMax )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rcx
              }
              if ( v93 < 0 )
                __asm { vaddss  xmm0, xmm0, xmm8 }
              __asm
              {
                vmulss  xmm1, xmm0, xmm12
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rax
                vdivss  xmm2, xmm1, xmm0
              }
            }
            else
            {
              __asm { vmovaps xmm2, xmm11 }
            }
            v99 = *((_DWORD *)_R12 - 2);
            __asm
            {
              vcvtss2sd xmm5, xmm2, xmm2
              vxorps  xmm2, xmm2, xmm2
              vcvtsi2ss xmm2, xmm2, rax
            }
            if ( v99 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [r12-0Ch]
                vdivss  xmm1, xmm0, xmm2
              }
            }
            else
            {
              __asm { vmovaps xmm1, xmm11 }
            }
            __asm { vcvtss2sd xmm4, xmm1, xmm1 }
            if ( v99 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [r12-10h]
                vsubss  xmm1, xmm0, dword ptr [r12-0Ch]
                vdivss  xmm3, xmm1, xmm2
              }
            }
            else
            {
              __asm { vmovaps xmm3, xmm11 }
            }
            __asm { vcvtss2sd xmm3, xmm3, xmm3 }
            if ( v99 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [r12-10h]
                vdivss  xmm1, xmm0, xmm2
              }
            }
            else
            {
              __asm { vmovaps xmm1, xmm11 }
            }
            __asm
            {
              vmovsd  [rsp+148h+var_118], xmm5
              vcvtss2sd xmm2, xmm1, xmm1
              vmovq   r8, xmm2
              vmovq   r9, xmm3
              vmovsd  [rsp+148h+fmt], xmm4
            }
            Com_Printf(23, "\tAvg:%1.3f (Script:%1.3f Built-In:%1.3f)\t OpCountMax:%llu [%1.1f%%]\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtb, v93, v153);
            v112 = 0;
            _RBP = _R12 - 1103;
            v173 = 0;
            v175 = _R12 - 1103;
            do
            {
              if ( *((_BYTE *)_RBP + 2) )
              {
                if ( *(unsigned __int16 *)_RBP >= v92->functionLookupLen )
                {
                  LODWORD(v152) = v92->functionLookupLen;
                  LODWORD(v148) = *(unsigned __int16 *)_RBP;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3942, ASSERT_TYPE_ASSERT, "(unsigned)( funcSummary->funcIndex ) < (unsigned)( srcBuffer->functionLookupLen )", "funcSummary->funcIndex doesn't index srcBuffer->functionLookupLen\n\t%i not in [0, %i)", v148, v152) )
                    __debugbreak();
                }
                __asm
                {
                  vmovss  xmm6, dword ptr [rbp-10h]
                  vmovss  xmm7, dword ptr [rbp-14h]
                  vxorps  xmm2, xmm2, xmm2
                  vcvtss2sd xmm6, xmm6, xmm6
                  vcvtss2sd xmm7, xmm7, xmm7
                }
                v119 = *((_DWORD *)_RBP - 2);
                __asm { vcvtsi2ss xmm2, xmm2, rax }
                if ( v119 )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp-0Ch]
                    vdivss  xmm1, xmm0, xmm2
                  }
                }
                else
                {
                  __asm { vmovaps xmm1, xmm11 }
                }
                __asm { vcvtss2sd xmm5, xmm1, xmm1 }
                if ( v119 )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp-18h]
                    vsubss  xmm1, xmm0, dword ptr [rbp-0Ch]
                    vdivss  xmm3, xmm1, xmm2
                  }
                }
                else
                {
                  __asm { vmovaps xmm3, xmm11 }
                }
                __asm { vcvtss2sd xmm4, xmm3, xmm3 }
                if ( v119 )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp-18h]
                    vdivss  xmm1, xmm0, xmm2
                  }
                }
                else
                {
                  __asm { vmovaps xmm1, xmm11 }
                }
                LODWORD(v161) = *((_DWORD *)_RBP - 2);
                LODWORD(v159) = *((_DWORD *)_RBP - 1);
                __asm
                {
                  vmovsd  [rsp+148h+var_110], xmm6
                  vcvtss2sd xmm3, xmm1, xmm1
                  vmovsd  [rsp+148h+var_118], xmm7
                  vmovsd  [rsp+148h+var_120], xmm5
                  vmovq   r9, xmm3
                  vmovsd  [rsp+148h+fmt], xmm4
                }
                Com_Printf(23, "\t\t (%d)\t Avg:%1.3f\t (Scr:%1.3f Blt-in:%1.3f)\t Max:%1.3f\t TimeAtSpike:%1.3f\t SpikeOps:%*d\t Calls:%d\t '%s'\n", v112, *(double *)&_XMM3, *(double *)&fmtc, v149, v154, v157, 6, v159, v161, v92->functionLookupStatic[*(unsigned __int16 *)_RBP].funcName);
                v128 = 0;
                _RBX = (unsigned __int16 *)_RBP - 134;
                do
                {
                  _RSI = _RBX - 6;
                  if ( _RBX == (unsigned __int16 *)12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3961, ASSERT_TYPE_ASSERT, "( builtInFuncSummary )", (const char *)&queryFormat, "builtInFuncSummary") )
                    __debugbreak();
                  if ( *((_BYTE *)_RBX + 2) )
                  {
                    if ( !*_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3966, ASSERT_TYPE_ASSERT, "( builtInFuncSummary->builtInIndex )", (const char *)&queryFormat, "builtInFuncSummary->builtInIndex") )
                      __debugbreak();
                    BuiltInName = GetBuiltInName(scrContext, *_RBX);
                    __asm
                    {
                      vmovss  xmm4, dword ptr [rbx-8]
                      vcvtss2sd xmm4, xmm4, xmm4
                    }
                    if ( *((_DWORD *)_RBX - 1) )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rsi]
                        vxorps  xmm1, xmm1, xmm1
                        vcvtsi2ss xmm1, xmm1, rdx
                        vdivss  xmm2, xmm0, xmm1
                      }
                    }
                    else
                    {
                      __asm { vmovaps xmm2, xmm11 }
                    }
                    LODWORD(v148) = *((_DWORD *)_RBX - 1);
                    __asm
                    {
                      vcvtss2sd xmm3, xmm2, xmm2
                      vmovq   r9, xmm3
                      vmovsd  [rsp+148h+fmt], xmm4
                    }
                    Com_Printf(23, "\t\t\t\t\t [%d]\t Avg:%1.3f\t Max:%1.3f\t Calls:%d\t '%s'\n", v128, *(double *)&_XMM3, *(double *)&fmtd, v148, BuiltInName);
                  }
                  ++v128;
                  _RBX += 8;
                }
                while ( v128 < 0x10 );
                _RBP = v175;
                v112 = v173;
                v92 = v163;
              }
              ++v112;
              _RBP = (unsigned __int64 *)((char *)_RBP + 284);
              v173 = v112;
              v175 = _RBP;
            }
            while ( v112 < 0x20 );
            _R12 = p_opCountMax;
            _RSI = v164;
            v91 = v174;
            SourceBufferLookup = v165;
          }
          ++v91;
          _R12 += 1140;
          v174 = v91;
          p_opCountMax = _R12;
        }
        while ( v91 < 0x40 );
      }
      __asm
      {
        vmovaps xmm11, [rsp+148h+var_A8]
        vmovaps xmm8, [rsp+148h+var_78]
        vmovaps xmm7, [rsp+148h+var_68]
        vmovaps xmm6, [rsp+148h+var_58]
        vmovaps xmm12, [rsp+148h+var_B8]
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
  const char *sourceBuf; 
  __int128 v15; 
  _DebugMessage message; 
  _ScrReadFile v17; 

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
    _ScrReadFile::_ScrReadFile(&v17);
    sourceBuf = v5->sourceBuf;
    message.scrreadfile = &v17;
    v17.filename = v5->buf;
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_READ_FILE;
    if ( sourceBuf )
    {
      if ( v5->len > 0 )
      {
        *(_QWORD *)&v15 = v5->len;
        *((_QWORD *)&v15 + 1) = sourceBuf;
        __asm
        {
          vmovups xmm0, [rsp+0C8h+var_98]
          vmovups xmmword ptr [rsp+0C8h+var_60.sourcebuf.len], xmm0
        }
        v17.has_sourcebuf = 1;
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
    std::_Sort_unchecked<PrfofileScrExceedSummaryFunc *,bool (*)(PrfofileScrExceedSummaryFunc const &,PrfofileScrExceedSummaryFunc const &)>(funcSummary, funcSummary + 31, 31i64, (bool (__fastcall *)(const PrfofileScrExceedSummaryFunc *, const PrfofileScrExceedSummaryFunc *))Scr_CompareScriptProfileExceedSummaryEntryFunc);
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
  std::_Sort_unchecked<ProfileScrExceedSummaryFile *,bool (*)(ProfileScrExceedSummaryFile const &,ProfileScrExceedSummaryFile const &)>(Profile->scrFileTimeTracking, &Profile->scrFileTimeTracking[63], 63i64, (bool (__fastcall *)(const ProfileScrExceedSummaryFile *, const ProfileScrExceedSummaryFile *))Scr_CompareScriptProfileExceedTimeFunc);
}

/*
==============
Scr_TrackServerTimeAccumScriptTime
==============
*/
void Scr_TrackServerTimeAccumScriptTime(scrContext_t *scrContext, bool newScriptMax)
{
  scrContext_t *v7; 
  ProfileScript *Profile; 
  unsigned __int16 v9; 
  ProfileScript *v10; 
  float *p_funcTimeSpike; 
  __int64 v12; 
  SourceBufferInfo *sourceBufferLookup; 
  __int64 v15; 
  unsigned int v16; 
  SourceBufferInfo *v17; 
  __int64 allOpTotal; 
  unsigned int *p_fileCount; 
  unsigned int v23; 
  unsigned int *v24; 
  unsigned __int16 *p_srcBufferIdx; 
  bool v26; 
  const dvar_t *v27; 
  unsigned int functionLookupLen; 
  unsigned int v36; 
  unsigned __int16 j; 
  bool v38; 
  unsigned int v39; 
  unsigned int v40; 
  __int64 v41; 
  __int64 v42; 
  _BYTE *v46; 
  unsigned int v47; 
  _BYTE *v48; 
  _WORD *v49; 
  bool v50; 
  const dvar_t *v51; 
  int v56; 
  unsigned int v57; 
  bool v58; 
  int *v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v73; 
  __int64 v74; 
  bool v75; 
  _BYTE *v76; 
  const dvar_t *v77; 
  const char *BuiltInName; 
  int v83; 
  unsigned __int64 v84; 
  __int64 v87; 
  __int64 v88; 
  __int16 v90; 
  unsigned int i; 
  SourceBufferInfo *v92; 
  __int64 v94; 
  __int64 v95; 
  SourceBufferInfo *v96; 
  ProfileScript *v97; 
  int v98; 
  int v99[4]; 
  int _Last[4]; 
  unsigned __int16 _First[1024]; 
  void *retaddr; 

  _R11 = &retaddr;
  v7 = scrContext;
  if ( scrContext->m_varPub.developer )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
    }
    v98 = __rdtsc();
    Profile = ScriptContext_GetProfile(scrContext);
    v9 = 0;
    v97 = Profile;
    v10 = Profile;
    if ( newScriptMax )
    {
      p_funcTimeSpike = &Profile->scrFileTimeTracking[0].funcSummary[1].funcTimeSpike;
      v12 = 64i64;
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
        --v12;
      }
      while ( v12 );
    }
    if ( !v7->m_parserPub.sourceBufferLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 4415, ASSERT_TYPE_ASSERT, "(scrContext.m_parserPub.sourceBufferLookup)", (const char *)&queryFormat, "scrContext.m_parserPub.sourceBufferLookup") )
      __debugbreak();
    sourceBufferLookup = v7->m_parserPub.sourceBufferLookup;
    __asm { vmovss  xmm7, cs:__real@5f800000 }
    v15 = 0i64;
    v92 = sourceBufferLookup;
    v94 = 0i64;
    for ( i = 0; i < 0x10; ++i )
    {
      v16 = LOWORD(v10->scriptSrcBufferIndex[v15]);
      if ( v16 >= v7->m_parserPub.sourceBufferLookupLen )
      {
        LODWORD(v88) = v7->m_parserPub.sourceBufferLookupLen;
        LODWORD(v87) = LOWORD(v10->scriptSrcBufferIndex[v15]);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2846, ASSERT_TYPE_ASSERT, "(unsigned)( srcBufferIndex ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "srcBufferIndex doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v87, v88) )
          __debugbreak();
      }
      v17 = &sourceBufferLookup[(unsigned __int16)v16];
      v96 = v17;
      Sys_GetValue(0);
      allOpTotal = v17->allOpTotal;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
      }
      if ( allOpTotal < 0 )
        __asm { vaddss  xmm0, xmm0, xmm7 }
      __asm { vmulss  xmm6, xmm0, dword ptr [rax+8B4Ch] }
      _RAX = script_usage_track_src_min_time;
      __asm { vcomiss xmm6, dword ptr [rax+28h] }
      if ( allOpTotal )
      {
        p_fileCount = &v10->scrFileTimeTracking[0].fileCount;
        v23 = 0;
        v24 = &v10->scrFileTimeTracking[0].fileCount;
        p_srcBufferIdx = &v10->scrFileTimeTracking[0].srcBufferIdx;
        while ( !*v24 || *p_srcBufferIdx != (_WORD)v16 )
        {
          if ( v24[2280] && p_srcBufferIdx[4560] == (_WORD)v16 )
          {
            ++v23;
            break;
          }
          if ( v24[4560] && p_srcBufferIdx[9120] == (_WORD)v16 )
          {
            v23 += 2;
            break;
          }
          if ( v24[6840] && p_srcBufferIdx[13680] == (_WORD)v16 )
          {
            v23 += 3;
            break;
          }
          v24 += 9120;
          p_srcBufferIdx += 18240;
          v23 += 4;
          if ( v23 >= 0x40 )
            break;
        }
        v26 = v23 < 0x40;
        if ( v23 != 64 )
          goto LABEL_233;
        v23 = 0;
        while ( *p_fileCount )
        {
          if ( !p_fileCount[2280] )
          {
            ++v23;
            break;
          }
          if ( !p_fileCount[4560] )
          {
            v23 += 2;
            break;
          }
          if ( !p_fileCount[6840] )
          {
            v23 += 3;
            break;
          }
          p_fileCount += 9120;
          v23 += 4;
          if ( v23 >= 0x40 )
            break;
        }
        v26 = v23 < 0x40;
        if ( v23 == 64 )
        {
          v27 = DVARBOOL_sv_debugTrackServerTime;
          if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v27);
          if ( v27->current.enabled )
          {
            __asm
            {
              vcvtss2sd xmm3, xmm6, xmm6
              vmovq   r9, xmm3
            }
            Com_Printf(23, "Scr_TrackServerTimeAccumScriptTime: Ran out of room to track script file. File '%s' with total OpTime of %f will not be tracked.\n", v17->buf, *(double *)&_XMM3);
          }
        }
        else
        {
LABEL_233:
          if ( !v26 )
          {
            LODWORD(v88) = 64;
            LODWORD(v87) = v23;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2884, ASSERT_TYPE_ASSERT, "(unsigned)( srcBufferIndexTrack ) < (unsigned)( 64 )", "srcBufferIndexTrack doesn't index PROF_SCRIPT_SOURCE_TRACK_COUNT_FILE\n\t%i not in [0, %i)", v87, v88) )
              __debugbreak();
          }
          _R13 = (__int64)&v10->scrFileTimeTracking[v23];
          v95 = _R13;
          if ( v10->scrFileTimeTracking[v23].srcBufferIdx != (_WORD)v16 && v10->scrFileTimeTracking[v23].fileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2887, ASSERT_TYPE_ASSERT, "( fileSummary->srcBufferIdx == srcBufferIndex || fileSummary->fileCount == 0 )", (const char *)&queryFormat, "fileSummary->srcBufferIdx == srcBufferIndex || fileSummary->fileCount == 0") )
            __debugbreak();
          __asm { vaddss  xmm0, xmm6, dword ptr [r13+2380h] }
          ++v10->scrFileTimeTracking[v23].fileCount;
          __asm { vmovss  dword ptr [r13+2380h], xmm0 }
          v10->scrFileTimeTracking[v23].srcBufferIdx = v16;
          Sys_GetValue(0);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rcx
          }
          if ( (v17->allOpTotalBuiltIn & 0x8000000000000000ui64) != 0i64 )
            __asm { vaddss  xmm0, xmm0, xmm7 }
          __asm
          {
            vmulss  xmm0, xmm0, dword ptr [rax+8B4Ch]
            vaddss  xmm1, xmm0, dword ptr [r13+2384h]
            vmovss  dword ptr [r13+2384h], xmm1
          }
          functionLookupLen = v17->functionLookupLen;
          if ( functionLookupLen )
          {
            if ( functionLookupLen > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2897, ASSERT_TYPE_ASSERT, "( srcBuffer->functionLookupLen <= 1024 )", (const char *)&queryFormat, "srcBuffer->functionLookupLen <= SCR_DEBUG_FUNCTION_COUNT_PER_FILE") )
              __debugbreak();
            v36 = v17->functionLookupLen;
            for ( j = 0; j < v36; v36 = v17->functionLookupLen )
            {
              _First[j] = j;
              ++j;
            }
            v38 = v7->m_Instance == SCRIPTINSTANCE_SERVER;
            currentSrcFileIndexForFuncSorting = v16;
            if ( v38 )
            {
              std::_Sort_unchecked<unsigned short *,bool (*)(int const &,int const &)>(_First, &_First[v36 - 1], v36 - 1, Scr_CompareScriptProfileCurrentTimeFunc_Server);
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2919, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_TrackServerTimeAccumScriptTime: Invalid script instance.") )
            {
              __debugbreak();
            }
            v39 = v17->functionLookupLen;
            v90 = 0;
            if ( v39 )
            {
              do
              {
                v40 = _First[v9];
                if ( v40 >= v39 )
                {
                  LODWORD(v88) = v39;
                  LODWORD(v87) = _First[v9];
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2925, ASSERT_TYPE_ASSERT, "(unsigned)( currentFuncInfoIndex ) < (unsigned)( srcBuffer->functionLookupLen )", "currentFuncInfoIndex doesn't index srcBuffer->functionLookupLen\n\t%i not in [0, %i)", v87, v88) )
                    __debugbreak();
                }
                v41 = (__int64)&v17->functionLookupDynamic[(unsigned __int16)v40];
                v42 = (__int64)&v17->functionLookupStatic[(unsigned __int16)v40];
                Sys_GetValue(0);
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, rcx
                }
                if ( *(__int64 *)v41 < 0 )
                  __asm { vaddss  xmm0, xmm0, xmm7 }
                __asm { vmulss  xmm6, xmm0, dword ptr [rax+8B4Ch] }
                _RAX = script_usage_track_func_min_time;
                __asm { vcomiss xmm6, dword ptr [rax+28h] }
                v46 = (_BYTE *)(_R13 + 282);
                v47 = 0;
                v48 = (_BYTE *)(_R13 + 282);
                v49 = (_WORD *)(_R13 + 280);
                while ( !*v48 || *v49 != (_WORD)v40 )
                {
                  if ( v48[284] && v49[142] == (_WORD)v40 )
                  {
                    ++v47;
                    break;
                  }
                  if ( v48[568] && v49[284] == (_WORD)v40 )
                  {
                    v47 += 2;
                    break;
                  }
                  if ( v48[852] && v49[426] == (_WORD)v40 )
                  {
                    v47 += 3;
                    break;
                  }
                  v48 += 1136;
                  v49 += 568;
                  v47 += 4;
                  if ( v47 >= 0x20 )
                    break;
                }
                v50 = v47 < 0x20;
                if ( v47 != 32 )
                  goto LABEL_234;
                v47 = 0;
                while ( *v46 )
                {
                  if ( !v46[284] )
                  {
                    ++v47;
                    break;
                  }
                  if ( !v46[568] )
                  {
                    v47 += 2;
                    break;
                  }
                  if ( !v46[852] )
                  {
                    v47 += 3;
                    break;
                  }
                  v46 += 1136;
                  v47 += 4;
                  if ( v47 >= 0x20 )
                    break;
                }
                v50 = v47 < 0x20;
                if ( v47 == 32 )
                {
                  v51 = DVARBOOL_sv_debugTrackServerTime;
                  if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v51);
                  if ( v51->current.enabled )
                  {
                    __asm
                    {
                      vcvtss2sd xmm3, xmm6, xmm6
                      vmovq   r9, xmm3
                    }
                    Com_Printf(23, "Scr_TrackServerTimeAccumScriptTime: Ran out of room to track function. Func '%s' with total OpTime of %f will not be tracked.\n", (const char *)(v42 + 16), *(double *)&_XMM3);
                  }
                }
                else
                {
LABEL_234:
                  if ( !v50 )
                  {
                    LODWORD(v88) = 32;
                    LODWORD(v87) = v47;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2962, ASSERT_TYPE_ASSERT, "(unsigned)( funcIndexTrack ) < (unsigned)( 32 )", "funcIndexTrack doesn't index PROF_SCRIPT_SOURCE_TRACK_COUNT_FUNC\n\t%i not in [0, %i)", v87, v88) )
                      __debugbreak();
                  }
                  _RSI = _R13 + 284i64 * v47;
                  if ( *(_WORD *)(_RSI + 280) != (_WORD)v40 && *(_BYTE *)(_RSI + 282) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 2965, ASSERT_TYPE_ASSERT, "( funcSummary->funcIndex == currentFuncInfoIndex || !funcSummary->inUse )", (const char *)&queryFormat, "funcSummary->funcIndex == currentFuncInfoIndex || !funcSummary->inUse") )
                    __debugbreak();
                  __asm { vaddss  xmm0, xmm6, dword ptr [rsi+100h] }
                  v56 = 1;
                  *(_BYTE *)(_RSI + 282) = 1;
                  *(_WORD *)(_RSI + 280) = v40;
                  v57 = *(unsigned __int16 *)(v41 + 20);
                  __asm { vmovss  dword ptr [rsi+100h], xmm0 }
                  if ( v57 > 1 )
                    v56 = v57;
                  v58 = __CFADD__(v56, *(_DWORD *)(_RSI + 272)) || v56 + *(_DWORD *)(_RSI + 272) == 0;
                  *(_DWORD *)(_RSI + 272) += v56;
                  __asm { vcomiss xmm6, dword ptr [rsi+104h] }
                  if ( !v58 )
                    __asm { vmovss  dword ptr [rsi+104h], xmm6 }
                  if ( newScriptMax )
                    __asm { vmovss  dword ptr [rsi+108h], xmm6 }
                  Sys_GetValue(0);
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, rcx
                  }
                  if ( *(__int64 *)(v41 + 8) < 0 )
                    __asm { vaddss  xmm0, xmm0, xmm7 }
                  __asm
                  {
                    vmulss  xmm0, xmm0, dword ptr [rax+8B4Ch]
                    vaddss  xmm1, xmm0, dword ptr [rsi+10Ch]
                    vmovdqu xmm3, cs:__xmm@00000003000000020000000100000000
                    vpaddd  xmm0, xmm3, cs:__xmm@00000004000000040000000400000004
                    vpaddd  xmm2, xmm3, cs:__xmm@00000008000000080000000800000008
                    vmovss  dword ptr [rsi+10Ch], xmm1
                  }
                  v38 = scrContext->m_Instance == SCRIPTINSTANCE_SERVER;
                  __asm
                  {
                    vpaddd  xmm1, xmm3, cs:__xmm@0000000c0000000c0000000c0000000c
                    vmovdqu xmmword ptr [rsp+918h+_Last], xmm1
                    vmovdqu xmmword ptr [rsp+918h+var_898], xmm3
                    vmovdqu [rsp+918h+var_888], xmm0
                    vmovdqu [rsp+918h+var_878], xmm2
                  }
                  currentFuncInfoIndexForFuncSorting = v40;
                  if ( v38 )
                  {
                    std::_Sort_unchecked<int *,bool (*)(int const &,int const &)>(v99, &_Last[3], 15i64, Scr_CompareScriptProfileCurrentTimeFuncBuiltIn_Server);
                  }
                  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3004, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_TrackServerTimeAccumScriptTime: Invalid script instance.") )
                  {
                    __debugbreak();
                  }
                  v66 = v99;
                  v67 = 16i64;
                  do
                  {
                    v68 = (unsigned int)*v66;
                    if ( (unsigned int)v68 >= 0x10 )
                    {
                      LODWORD(v88) = 16;
                      LODWORD(v87) = *v66;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3011, ASSERT_TYPE_ASSERT, "(unsigned)( currentBuiltInInfoIndex ) < (unsigned)( 16 )", "currentBuiltInInfoIndex doesn't index SCR_DEBUG_FUNCTION_BUILT_IN_PER_FUNCTION\n\t%i not in [0, %i)", v87, v88) )
                        __debugbreak();
                    }
                    v69 = 16 * v68;
                    if ( *(_WORD *)(16 * v68 + v41 + 34) )
                    {
                      Sys_GetValue(0);
                      __asm
                      {
                        vxorps  xmm0, xmm0, xmm0
                        vcvtsi2ss xmm0, xmm0, rcx
                      }
                      if ( *(__int64 *)(v69 + v41 + 24) < 0 )
                        __asm { vaddss  xmm0, xmm0, xmm7 }
                      __asm { vmulss  xmm6, xmm0, dword ptr [rax+8B4Ch] }
                      _RAX = script_usage_track_func_min_time_built_in;
                      __asm { vcomiss xmm6, dword ptr [rax+28h] }
                      v73 = 0i64;
                      v74 = _RSI + 12;
                      do
                      {
                        if ( *(_BYTE *)(v74 + 2) && *(_WORD *)v74 == *(_WORD *)(v69 + v41 + 34) )
                          break;
                        v73 = (unsigned int)(v73 + 1);
                        v74 += 16i64;
                      }
                      while ( (unsigned int)v73 < 0x10 );
                      v75 = (unsigned int)v73 < 0x10;
                      if ( (_DWORD)v73 != 16 )
                        goto LABEL_235;
                      v73 = 0i64;
                      v76 = (_BYTE *)(_RSI + 14);
                      while ( *v76 )
                      {
                        if ( !v76[16] )
                        {
                          v73 = (unsigned int)(v73 + 1);
                          break;
                        }
                        if ( !v76[32] )
                        {
                          v73 = (unsigned int)(v73 + 2);
                          break;
                        }
                        if ( !v76[48] )
                        {
                          v73 = (unsigned int)(v73 + 3);
                          break;
                        }
                        v76 += 64;
                        v73 = (unsigned int)(v73 + 4);
                        if ( (unsigned int)v73 >= 0x10 )
                          break;
                      }
                      v75 = (unsigned int)v73 < 0x10;
                      if ( (_DWORD)v73 == 16 )
                      {
                        v77 = DVARBOOL_sv_debugTrackServerTime;
                        if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
                          __debugbreak();
                        Dvar_CheckFrontendServerThread(v77);
                        if ( v77->current.enabled )
                        {
                          __asm { vcvtss2sd xmm6, xmm6, xmm6 }
                          BuiltInName = GetBuiltInName(scrContext, *(unsigned __int16 *)(v69 + v41 + 34));
                          __asm
                          {
                            vmovaps xmm3, xmm6
                            vmovq   r9, xmm3
                          }
                          Com_Printf(23, "Scr_TrackServerTimeAccumScriptTime: Ran out of room to track built in function. Func '%s' with total OpTime of %f will not be tracked.\n", BuiltInName, *(double *)&_XMM3);
                        }
                      }
                      else
                      {
LABEL_235:
                        if ( !v75 )
                        {
                          LODWORD(v88) = 16;
                          LODWORD(v87) = v73;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3054, ASSERT_TYPE_ASSERT, "(unsigned)( funcIndexTrackBuiltIn ) < (unsigned)( 16 )", "funcIndexTrackBuiltIn doesn't index PROF_SCRIPT_SOURCE_TRACK_COUNT_BUILTIN_FUNC\n\t%i not in [0, %i)", v87, v88) )
                            __debugbreak();
                        }
                        _RBX = _RSI + 16 * v73;
                        if ( *(_WORD *)(_RBX + 12) != *(_WORD *)(v69 + v41 + 34) && *(_BYTE *)(_RBX + 14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3057, ASSERT_TYPE_ASSERT, "( funcSummaryBuiltIn->builtInIndex == funcBuiltInInfo->builtInIndex || !funcSummaryBuiltIn->inUse )", (const char *)&queryFormat, "funcSummaryBuiltIn->builtInIndex == funcBuiltInInfo->builtInIndex || !funcSummaryBuiltIn->inUse") )
                          __debugbreak();
                        __asm { vaddss  xmm0, xmm6, dword ptr [rbx] }
                        *(_BYTE *)(_RBX + 14) = 1;
                        *(_WORD *)(_RBX + 12) = *(_WORD *)(v69 + v41 + 34);
                        v83 = *(unsigned __int16 *)(v69 + v41 + 32);
                        v58 = __CFADD__(v83, *(_DWORD *)(_RBX + 8)) || v83 + *(_DWORD *)(_RBX + 8) == 0;
                        *(_DWORD *)(_RBX + 8) += v83;
                        __asm
                        {
                          vcomiss xmm6, dword ptr [rbx+4]
                          vmovss  dword ptr [rbx], xmm0
                        }
                        if ( !v58 )
                          __asm { vmovss  dword ptr [rbx+4], xmm6 }
                      }
                    }
                    ++v66;
                    --v67;
                  }
                  while ( v67 );
                  v9 = v90;
                  _R13 = v95;
                  v17 = v96;
                }
                v39 = v17->functionLookupLen;
                v90 = ++v9;
              }
              while ( v9 < v39 );
              v7 = scrContext;
              v10 = v97;
            }
            v9 = 0;
          }
        }
        sourceBufferLookup = v92;
      }
      v15 = ++v94;
    }
    v84 = __rdtsc();
    __asm
    {
      vmovaps xmm7, [rsp+918h+var_48]
      vmovaps xmm6, [rsp+918h+var_38]
    }
    v10->scrProfileCalcTimeTotal += (int)v84 - v98;
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
  SourceBufferInfo *SourceBufferLookup; 
  unsigned int *p_funcOpCountMax; 
  __int64 v5; 
  __int64 sourceBufferLookupLen; 
  int *v26; 
  unsigned int v31; 
  __int64 v32; 
  unsigned int v33; 
  SourceBufferInfo *v34; 
  unsigned int *p_fileCount; 
  unsigned int v36; 
  unsigned int *v37; 
  unsigned __int16 *p_srcBufferIdx; 
  bool v39; 
  const dvar_t *v40; 
  __int64 v41; 
  bool v42; 
  unsigned int functionLookupLen; 
  unsigned __int16 v44; 
  __int64 v45; 
  __int64 v46; 
  _BYTE *v47; 
  unsigned int v48; 
  _BYTE *v49; 
  _WORD *v50; 
  bool v51; 
  __int64 v52; 
  const dvar_t *v53; 
  __int64 v54; 
  unsigned __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  unsigned int v58; 
  SourceBufferInfo *v60; 
  __int64 v61; 
  ProfileScript *Profile; 
  int v63; 
  int _First[8]; 

  v1 = scrContext;
  if ( scrContext->m_varPub.developer )
  {
    v63 = __rdtsc();
    Profile = ScriptContext_GetProfile(scrContext);
    _RSI = Profile;
    SourceBufferLookup = Scr_GetSourceBufferLookup(v1);
    v60 = SourceBufferLookup;
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
    _EDX = 0;
    if ( (_DWORD)sourceBufferLookupLen )
    {
      if ( (unsigned int)sourceBufferLookupLen >= 0x10 )
      {
        __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
        _ER8 = 8;
        do
        {
          _RAX = _EDX;
          __asm
          {
            vmovd   xmm0, edx
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
            vmovdqu xmmword ptr [rsp+rax*4+10A8h+_First], xmm1
          }
          LODWORD(_RAX) = _ER8 - 4;
          _EDX += 16;
          __asm
          {
            vmovd   xmm0, eax
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          _RAX = _ER8 - 4;
          __asm { vmovdqu xmmword ptr [rsp+rax*4+10A8h+_First], xmm1 }
          _RAX = _ER8;
          __asm
          {
            vmovd   xmm0, r8d
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
            vmovdqu xmmword ptr [rsp+rax*4+10A8h+_First], xmm1
          }
          _RAX = _ER8 + 4;
          _ER8 += 16;
          __asm
          {
            vmovd   xmm0, eax
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
            vmovdqu xmmword ptr [rsp+rax*4+10A8h+_First], xmm1
          }
        }
        while ( _EDX < ((unsigned int)sourceBufferLookupLen & 0xFFFFFFF0) );
      }
      if ( _EDX < (unsigned int)sourceBufferLookupLen )
      {
        v26 = &_First[_EDX];
        do
          *v26++ = _EDX++;
        while ( _EDX < (unsigned int)sourceBufferLookupLen );
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
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+10A8h+_First]
      vmovups ymmword ptr [rsi+9B04h], ymm0
      vmovups ymm1, [rsp+10A8h+var_1018]
      vmovups ymmword ptr [rsi+9B24h], ymm1
      vmovups ymm0, [rsp+10A8h+var_FF8]
      vmovups ymmword ptr [rsi+9B44h], ymm0
      vmovups ymm1, [rsp+10A8h+var_FD8]
    }
    v31 = 0;
    v61 = 0i64;
    __asm { vmovups ymmword ptr [rsi+9B64h], ymm1 }
    v58 = 0;
    v32 = 0i64;
    do
    {
      v33 = LOWORD(_RSI->scriptSrcBufferIndex[v32]);
      if ( v33 >= v1->m_parserPub.sourceBufferLookupLen )
      {
        LODWORD(v57) = v1->m_parserPub.sourceBufferLookupLen;
        LODWORD(v56) = LOWORD(_RSI->scriptSrcBufferIndex[v32]);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3185, ASSERT_TYPE_ASSERT, "(unsigned)( srcBufferIndex ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "srcBufferIndex doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v56, v57) )
          __debugbreak();
        v31 = v58;
      }
      v34 = &SourceBufferLookup[(unsigned __int16)v33];
      if ( v34->totalOps >= 0x3E8 )
      {
        p_fileCount = &_RSI->scrFileTimeTracking[0].fileCount;
        v36 = 0;
        v37 = &_RSI->scrFileTimeTracking[0].fileCount;
        p_srcBufferIdx = &_RSI->scrFileTimeTracking[0].srcBufferIdx;
        while ( !*v37 || *p_srcBufferIdx != (_WORD)v33 )
        {
          if ( v37[2280] && p_srcBufferIdx[4560] == (_WORD)v33 )
          {
            ++v36;
            break;
          }
          if ( v37[4560] && p_srcBufferIdx[9120] == (_WORD)v33 )
          {
            v36 += 2;
            break;
          }
          if ( v37[6840] && p_srcBufferIdx[13680] == (_WORD)v33 )
          {
            v36 += 3;
            break;
          }
          v37 += 9120;
          p_srcBufferIdx += 18240;
          v36 += 4;
          if ( v36 >= 0x40 )
            break;
        }
        v39 = v36 < 0x40;
        if ( v36 != 64 )
          goto LABEL_189;
        v36 = 0;
        while ( *p_fileCount )
        {
          if ( !p_fileCount[2280] )
          {
            ++v36;
            break;
          }
          if ( !p_fileCount[4560] )
          {
            v36 += 2;
            break;
          }
          if ( !p_fileCount[6840] )
          {
            v36 += 3;
            break;
          }
          p_fileCount += 9120;
          v36 += 4;
          if ( v36 >= 0x40 )
            break;
        }
        v39 = v36 < 0x40;
        if ( v36 == 64 )
        {
          v40 = DVARBOOL_sv_debugTrackServerTime;
          if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v40);
          if ( v40->current.enabled )
            Com_Printf(23, "Scr_TrackServerTimeSetMaxScriptOps: Ran out of room to track script file. File '%s' will not be tracked.\n", v34->buf);
        }
        else
        {
LABEL_189:
          if ( !v39 )
          {
            LODWORD(v57) = 64;
            LODWORD(v56) = v36;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3221, ASSERT_TYPE_ASSERT, "(unsigned)( srcBufferIndexTrack ) < (unsigned)( 64 )", "srcBufferIndexTrack doesn't index PROF_SCRIPT_SOURCE_TRACK_COUNT_FILE\n\t%i not in [0, %i)", v56, v57) )
              __debugbreak();
          }
          v41 = (__int64)&_RSI->scrFileTimeTracking[v36];
          if ( _RSI->scrFileTimeTracking[v36].srcBufferIdx != (_WORD)v33 && _RSI->scrFileTimeTracking[v36].fileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3224, ASSERT_TYPE_ASSERT, "( fileSummary->srcBufferIdx == srcBufferIndex || fileSummary->fileCount == 0 )", (const char *)&queryFormat, "fileSummary->srcBufferIdx == srcBufferIndex || fileSummary->fileCount == 0") )
            __debugbreak();
          v42 = _RSI->scrFileTimeTracking[v36].fileCount == 0;
          _RSI->scrFileTimeTracking[v36].srcBufferIdx = v33;
          if ( v42 )
            _RSI->scrFileTimeTracking[v36].fileCount = 1;
          _RSI->scrFileTimeTracking[v36].opCountMax = v34->totalOps;
          functionLookupLen = v34->functionLookupLen;
          if ( functionLookupLen )
          {
            if ( functionLookupLen > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3236, ASSERT_TYPE_ASSERT, "( srcBuffer->functionLookupLen <= 1024 )", (const char *)&queryFormat, "srcBuffer->functionLookupLen <= SCR_DEBUG_FUNCTION_COUNT_PER_FILE") )
              __debugbreak();
            v44 = 0;
            if ( v34->functionLookupLen )
            {
              do
              {
                v45 = (__int64)&v34->functionLookupDynamic[v44];
                v46 = (__int64)&v34->functionLookupStatic[v44];
                if ( *(_DWORD *)(v45 + 16) >= 0x3E8u )
                {
                  v47 = (_BYTE *)(v41 + 282);
                  v48 = 0;
                  v49 = (_BYTE *)(v41 + 282);
                  v50 = (_WORD *)(v41 + 280);
                  while ( !*v49 || *v50 != v44 )
                  {
                    if ( v49[284] && v50[142] == v44 )
                    {
                      ++v48;
                      break;
                    }
                    if ( v49[568] && v50[284] == v44 )
                    {
                      v48 += 2;
                      break;
                    }
                    if ( v49[852] && v50[426] == v44 )
                    {
                      v48 += 3;
                      break;
                    }
                    v49 += 1136;
                    v50 += 568;
                    v48 += 4;
                    if ( v48 >= 0x20 )
                      break;
                  }
                  v51 = v48 < 0x20;
                  if ( v48 != 32 )
                    goto LABEL_190;
                  v48 = 0;
                  v52 = v41 + 272;
                  while ( !*(_BYTE *)(v52 + 10) || *(_DWORD *)v52 )
                  {
                    ++v48;
                    v52 += 284i64;
                    if ( v48 >= 0x20 )
                      goto LABEL_156;
                  }
                  *(_BYTE *)(284i64 * v48 + v41 + 282) = 0;
                  v51 = v48 < 0x20;
                  if ( v48 != 32 )
                    goto LABEL_190;
LABEL_156:
                  v48 = 0;
                  while ( *v47 )
                  {
                    if ( !v47[284] )
                    {
                      ++v48;
                      break;
                    }
                    if ( !v47[568] )
                    {
                      v48 += 2;
                      break;
                    }
                    if ( !v47[852] )
                    {
                      v48 += 3;
                      break;
                    }
                    v47 += 1136;
                    v48 += 4;
                    if ( v48 >= 0x20 )
                      break;
                  }
                  v51 = v48 < 0x20;
                  if ( v48 == 32 )
                  {
                    v53 = DVARBOOL_sv_debugTrackServerTime;
                    if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v53);
                    if ( v53->current.enabled )
                      Com_Printf(23, "Scr_TrackServerTimeSetMaxScriptOps: Ran out of room to track function. Func '%s' with total Op count %d will not be tracked.\n", (const char *)(v46 + 16), *(unsigned int *)(v45 + 16));
                  }
                  else
                  {
LABEL_190:
                    if ( !v51 )
                    {
                      LODWORD(v57) = 32;
                      LODWORD(v56) = v48;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3291, ASSERT_TYPE_ASSERT, "(unsigned)( funcIndexTrack ) < (unsigned)( 32 )", "funcIndexTrack doesn't index PROF_SCRIPT_SOURCE_TRACK_COUNT_FUNC\n\t%i not in [0, %i)", v56, v57) )
                        __debugbreak();
                    }
                    v54 = v41 + 284i64 * v48;
                    if ( *(_WORD *)(v54 + 280) != v44 && *(_BYTE *)(v54 + 282) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_parser.cpp", 3294, ASSERT_TYPE_ASSERT, "( funcSummary->funcIndex == funcIndex || !funcSummary->inUse )", (const char *)&queryFormat, "funcSummary->funcIndex == funcIndex || !funcSummary->inUse") )
                      __debugbreak();
                    *(_BYTE *)(v54 + 282) = 1;
                    *(_WORD *)(v54 + 280) = v44;
                    *(_DWORD *)(v54 + 276) = *(_DWORD *)(v45 + 16);
                  }
                }
                ++v44;
              }
              while ( v44 < v34->functionLookupLen );
              v32 = v61;
              _RSI = Profile;
            }
          }
          SourceBufferLookup = v60;
        }
        v31 = v58;
        v1 = scrContext;
      }
      ++v31;
      ++v32;
      v58 = v31;
      v61 = v32;
    }
    while ( v31 < 0x20 );
    v55 = __rdtsc();
    _RSI->scrProfileCalcTimeTotal += (int)v55 - v63;
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

