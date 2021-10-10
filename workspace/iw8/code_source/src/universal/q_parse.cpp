/*
==============
Com_ParseRestOfLine
==============
*/

const char *__fastcall Com_ParseRestOfLine(const char **data_p)
{
  return ?Com_ParseRestOfLine@@YAPEBDPEAPEBD@Z(data_p);
}

/*
==============
Com_GetLastTokenPos
==============
*/

const char *__fastcall Com_GetLastTokenPos()
{
  return ?Com_GetLastTokenPos@@YAPEBDXZ();
}

/*
==============
Com_ResetParseSessions
==============
*/

void Com_ResetParseSessions(void)
{
  ?Com_ResetParseSessions@@YAXXZ();
}

/*
==============
Com_MatchToken
==============
*/

int __fastcall Com_MatchToken(const char **buf_p, const char *match, int warning)
{
  return ?Com_MatchToken@@YAHPEAPEBDPEBDH@Z(buf_p, match, warning);
}

/*
==============
Com_SetCSV
==============
*/

void __fastcall Com_SetCSV(int csv)
{
  ?Com_SetCSV@@YAXH@Z(csv);
}

/*
==============
Com_ParseIntOnLine
==============
*/

int __fastcall Com_ParseIntOnLine(const char **buf_p)
{
  return ?Com_ParseIntOnLine@@YAHPEAPEBD@Z(buf_p);
}

/*
==============
Com_ParseReturnToMark
==============
*/

void __fastcall Com_ParseReturnToMark(const char **text, com_parse_mark_t *mark)
{
  ?Com_ParseReturnToMark@@YAXPEAPEBDPEAUcom_parse_mark_t@@@Z(text, mark);
}

/*
==============
Com_ParseFloat
==============
*/

double __fastcall Com_ParseFloat(const char **buf_p)
{
  double result; 

  *(float *)&result = ?Com_ParseFloat@@YAMPEAPEBD@Z(buf_p);
  return result;
}

/*
==============
Com_Parse2DMatrix
==============
*/

void __fastcall Com_Parse2DMatrix(const char **buf_p, int y, int x, float *m)
{
  ?Com_Parse2DMatrix@@YAXPEAPEBDHHPEAM@Z(buf_p, y, x, m);
}

/*
==============
Com_BeginParseSession
==============
*/

void __fastcall Com_BeginParseSession(const char *filename)
{
  ?Com_BeginParseSession@@YAXPEBD@Z(filename);
}

/*
==============
Com_GetArgCountOnLine
==============
*/

int __fastcall Com_GetArgCountOnLine(const char **data_p)
{
  return ?Com_GetArgCountOnLine@@YAHPEAPEBD@Z(data_p);
}

/*
==============
Com_GetMaxArgColumnOnLine
==============
*/

int __fastcall Com_GetMaxArgColumnOnLine(const char **data_p)
{
  return ?Com_GetMaxArgColumnOnLine@@YAHPEAPEBD@Z(data_p);
}

/*
==============
Com_EndParseSession
==============
*/

void Com_EndParseSession(void)
{
  ?Com_EndParseSession@@YAXXZ();
}

/*
==============
Com_SetScriptErrorPrefix
==============
*/

void __fastcall Com_SetScriptErrorPrefix(const char *prefix)
{
  ?Com_SetScriptErrorPrefix@@YAXPEBD@Z(prefix);
}

/*
==============
Com_GetCurrentParseFile
==============
*/

const char *__fastcall Com_GetCurrentParseFile()
{
  return ?Com_GetCurrentParseFile@@YAPEBDXZ();
}

/*
==============
Com_ParseInt
==============
*/

int __fastcall Com_ParseInt(const char **buf_p)
{
  return ?Com_ParseInt@@YAHPEAPEBD@Z(buf_p);
}

/*
==============
Com_SetParseNegativeNumbers
==============
*/

void __fastcall Com_SetParseNegativeNumbers(int negativeNumbers)
{
  ?Com_SetParseNegativeNumbers@@YAXH@Z(negativeNumbers);
}

/*
==============
Com_ScriptError
==============
*/

void Com_ScriptError(const char *msg, ...)
{
  ?Com_ScriptError@@YAXPEBDZZ(msg);
}

/*
==============
Com_SetSpaceDelimited
==============
*/

void __fastcall Com_SetSpaceDelimited(int spaceDelimited)
{
  ?Com_SetSpaceDelimited@@YAXH@Z(spaceDelimited);
}

/*
==============
Com_ScriptErrorDrop
==============
*/

void Com_ScriptErrorDrop(const char *msg, ...)
{
  ?Com_ScriptErrorDrop@@YAXPEBDZZ(msg);
}

/*
==============
Com_UngetToken
==============
*/

void Com_UngetToken(void)
{
  ?Com_UngetToken@@YAXXZ();
}

/*
==============
Com_InitParse
==============
*/

void Com_InitParse(void)
{
  ?Com_InitParse@@YAXXZ();
}

/*
==============
Com_GetCurrentParseLine
==============
*/

int __fastcall Com_GetCurrentParseLine()
{
  return ?Com_GetCurrentParseLine@@YAHXZ();
}

/*
==============
Com_ParseOnLine
==============
*/

const char *__fastcall Com_ParseOnLine(const char **data_p)
{
  return ?Com_ParseOnLine@@YAPEBDPEAPEBD@Z(data_p);
}

/*
==============
Com_SkipBracedSection
==============
*/

int __fastcall Com_SkipBracedSection(const char **program, unsigned int startDepth, const int iMaxNesting)
{
  return ?Com_SkipBracedSection@@YAHPEAPEBDIH@Z(program, startDepth, iMaxNesting);
}

/*
==============
Com_ParseFloatOnLine
==============
*/

double __fastcall Com_ParseFloatOnLine(const char **buf_p)
{
  double result; 

  *(float *)&result = ?Com_ParseFloatOnLine@@YAMPEAPEBD@Z(buf_p);
  return result;
}

/*
==============
Com_SetScriptWarningPrefix
==============
*/

void __fastcall Com_SetScriptWarningPrefix(const char *prefix)
{
  ?Com_SetScriptWarningPrefix@@YAXPEBD@Z(prefix);
}

/*
==============
Com_ParseSetMark
==============
*/

void __fastcall Com_ParseSetMark(const char **text, com_parse_mark_t *mark)
{
  ?Com_ParseSetMark@@YAXPEAPEBDPEAUcom_parse_mark_t@@@Z(text, mark);
}

/*
==============
Com_Parse
==============
*/

const char *__fastcall Com_Parse(const char **data_p)
{
  return ?Com_Parse@@YAPEBDPEAPEBD@Z(data_p);
}

/*
==============
Com_SetKeepStringQuotes
==============
*/

void __fastcall Com_SetKeepStringQuotes(int keepStringQuotes)
{
  ?Com_SetKeepStringQuotes@@YAXH@Z(keepStringQuotes);
}

/*
==============
Com_Parse3DMatrix
==============
*/

void __fastcall Com_Parse3DMatrix(const char **buf_p, int z, int y, int x, float *m)
{
  ?Com_Parse3DMatrix@@YAXPEAPEBDHHHPEAM@Z(buf_p, z, y, x, m);
}

/*
==============
Com_Parse1DMatrix
==============
*/

void __fastcall Com_Parse1DMatrix(const char **buf_p, int x, float *m)
{
  ?Com_Parse1DMatrix@@YAXPEAPEBDHPEAM@Z(buf_p, x, m);
}

/*
==============
Com_SkipRestOfLine
==============
*/

void __fastcall Com_SkipRestOfLine(const char **data)
{
  ?Com_SkipRestOfLine@@YAXPEAPEBD@Z(data);
}

/*
==============
Com_BeginParseSession
==============
*/
void Com_BeginParseSession(const char *filename)
{
  ParseThreadInfo *ParseThreadInfo; 
  int parseInfoNum; 
  int v4; 
  const char **p_parseFile; 
  parseInfo_t *v6; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  parseInfoNum = ParseThreadInfo->parseInfoNum;
  if ( parseInfoNum == 11 )
  {
    Com_Printf(23, "Already parsing:\n");
    v4 = 0;
    if ( ParseThreadInfo->parseInfoNum > 0 )
    {
      p_parseFile = &ParseThreadInfo->parseInfo[0].parseFile;
      do
      {
        Com_Printf(23, "%i. %s\n", (unsigned int)v4++, *p_parseFile);
        p_parseFile += 135;
      }
      while ( v4 < ParseThreadInfo->parseInfoNum );
    }
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144186D00, 1333i64, filename);
    parseInfoNum = ParseThreadInfo->parseInfoNum;
  }
  ParseThreadInfo->parseInfoNum = parseInfoNum + 1;
  v6 = &ParseThreadInfo->parseInfo[parseInfoNum + 1];
  v6->parseFile = filename;
  v6->lines = 1;
  *(_DWORD *)&v6->ungetToken = 256;
  v6->negativeNumbers = 0;
  v6->errorPrefix = (char *)&queryFormat.fmt + 3;
  v6->warningPrefix = (char *)&queryFormat.fmt + 3;
  v6->backup_lines = 0;
  v6->backup_text = NULL;
}

/*
==============
Com_EndParseSession
==============
*/
void Com_EndParseSession(void)
{
  ParseThreadInfo *ParseThreadInfo; 
  ParseThreadInfo *v1; 
  int parseInfoNum; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v1 = ParseThreadInfo;
  parseInfoNum = ParseThreadInfo->parseInfoNum;
  if ( parseInfoNum )
  {
    ParseThreadInfo->parseInfoNum = parseInfoNum - 1;
  }
  else
  {
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144186D60, 1334i64);
    --v1->parseInfoNum;
  }
}

/*
==============
Com_GetArgCountOnLine
==============
*/
__int64 Com_GetArgCountOnLine(const char **data_p)
{
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v3; 
  unsigned int v4; 
  int lines; 
  const char *v6; 
  char ungetToken; 
  int backup_lines; 
  int v9; 
  int v10; 
  ParseThreadInfo *v11; 
  char *token; 
  bool v13; 
  ParseThreadInfo *v14; 
  parseInfo_t *v15; 
  __int64 result; 
  const char *backup_text; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v3 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( !data_p && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 513, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  v4 = 0;
  lines = v3->lines;
  v6 = *data_p;
  ungetToken = v3->ungetToken;
  backup_lines = v3->backup_lines;
  backup_text = v3->backup_text;
LABEL_5:
  v9 = 0;
  do
  {
    v10 = v9;
    v11 = Com_GetParseThreadInfo();
    token = v11->parseInfo[v11->parseInfoNum].token;
    if ( token[1028] )
    {
      v13 = token[1029] == 0;
      token[1028] = 0;
      if ( v13 )
        goto LABEL_10;
      *data_p = (const char *)*((_QWORD *)token + 133);
      *((_DWORD *)token + 256) = *((_DWORD *)token + 264);
    }
    token = Com_ParseExt(data_p, 0);
LABEL_10:
    if ( *token )
    {
      v4 += v9 + 1;
      goto LABEL_5;
    }
    ++v9;
  }
  while ( v10 < 4 );
  v14 = Com_GetParseThreadInfo();
  v15 = &v14->parseInfo[v14->parseInfoNum];
  v15->lines = lines;
  *data_p = v6;
  v15->backup_text = backup_text;
  result = v4;
  v15->ungetToken = ungetToken != 0;
  v15->backup_lines = backup_lines;
  return result;
}

/*
==============
Com_GetCurrentParseFile
==============
*/
const char *Com_GetCurrentParseFile()
{
  ParseThreadInfo *ParseThreadInfo; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  return ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum].parseFile;
}

/*
==============
Com_GetCurrentParseLine
==============
*/
__int64 Com_GetCurrentParseLine()
{
  ParseThreadInfo *ParseThreadInfo; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  return (unsigned int)ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum].lines;
}

/*
==============
Com_GetLastTokenPos
==============
*/
const char *Com_GetLastTokenPos()
{
  return Com_GetParseThreadInfo()->tokenPos;
}

/*
==============
Com_GetMaxArgColumnOnLine
==============
*/
__int64 Com_GetMaxArgColumnOnLine(const char **data_p)
{
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v3; 
  const char *v4; 
  int lines; 
  char ungetToken; 
  int backup_lines; 
  const char *backup_text; 
  __int64 result; 
  const char *v10; 
  int v11; 
  unsigned int v12; 
  ParseThreadInfo *v13; 
  char *token; 
  bool v15; 
  ParseThreadInfo *v16; 
  parseInfo_t *v17; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v3 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( !data_p && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 513, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  v4 = *data_p;
  lines = v3->lines;
  ungetToken = v3->ungetToken;
  backup_lines = v3->backup_lines;
  backup_text = v3->backup_text;
  if ( !*data_p )
    return 0i64;
  v10 = *data_p;
  v11 = 0;
  v12 = 0;
  while ( *v10 != 13 && *v10 != 10 )
  {
    v13 = Com_GetParseThreadInfo();
    token = v13->parseInfo[v13->parseInfoNum].token;
    if ( !token[1028] )
      goto LABEL_12;
    v15 = token[1029] == 0;
    token[1028] = 0;
    if ( !v15 )
    {
      *data_p = (const char *)*((_QWORD *)token + 133);
      *((_DWORD *)token + 256) = *((_DWORD *)token + 264);
LABEL_12:
      token = Com_ParseExt(data_p, 0);
    }
    ++v11;
    if ( *token )
    {
      if ( v11 > (int)v12 )
        v12 = v11;
    }
    v10 = *data_p;
    if ( !*data_p )
      break;
  }
  v16 = Com_GetParseThreadInfo();
  v17 = &v16->parseInfo[v16->parseInfoNum];
  result = v12;
  v17->lines = lines;
  *data_p = v4;
  v17->ungetToken = ungetToken != 0;
  v17->backup_lines = backup_lines;
  v17->backup_text = backup_text;
  return result;
}

/*
==============
Com_GetParseThreadInfo
==============
*/
ParseThreadInfo *Com_GetParseThreadInfo()
{
  if ( Sys_IsMainThread() )
    return g_parse;
  if ( Sys_IsRenderThread() )
    return &g_parse[1];
  if ( Sys_IsServerThread() )
    return &g_parse[2];
  if ( Sys_IsDatabaseThread() )
    return &g_parse[3];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No parse context for current thread.") )
    __debugbreak();
  return 0i64;
}

/*
==============
Com_InitParse
==============
*/
void Com_InitParse(void)
{
  TokenFlagType *v0; 
  __int64 v1; 
  TokenFlagType *v2; 
  _WORD *v3; 
  __int64 i; 

  if ( !byte_14FF24370 )
  {
    v0 = s_tblToken;
    v1 = 26i64;
    byte_14FF24370 = 1;
    v2 = s_tblToken + 97;
    while ( v1 )
    {
      *v2++ = TOKEN_FLAG_LOWER;
      --v1;
    }
    v3 = v0 + 65;
    for ( i = 26i64; i; --i )
      *v3++ = 2;
    *((_DWORD *)v0 + 24) = 262148;
    *((_DWORD *)v0 + 25) = 262148;
    *((_DWORD *)v0 + 26) = 262148;
    *((_DWORD *)v0 + 27) = 262148;
    *((_DWORD *)v0 + 28) = 262148;
    *((_WORD *)v0 + 95) = 8;
    *((_WORD *)v0 + 92) = 32;
    *((_WORD *)v0 + 34) = 64;
    *((_WORD *)v0 + 101) = 1025;
    *((_WORD *)v0 + 69) = 1026;
    *v0 = TOKEN_FLAG_NULL;
    *((_DWORD *)v0 + 23) = 1048704;
  }
  g_parse[0].parseInfo[0].lines = 1;
  g_parse[0].parseInfo[0].backup_lines = 0;
  g_parse[0].parseInfo[0].errorPrefix = (char *)&queryFormat.fmt + 3;
  g_parse[0].parseInfo[0].warningPrefix = (char *)&queryFormat.fmt + 3;
  g_parse[0].parseInfo[0].backup_text = NULL;
  g_parse[1].parseInfo[0].negativeNumbers = 0;
  g_parse[1].parseInfo[0].errorPrefix = (char *)&queryFormat.fmt + 3;
  g_parse[1].parseInfo[0].warningPrefix = (char *)&queryFormat.fmt + 3;
  g_parse[1].parseInfo[0].backup_lines = 0;
  g_parse[1].parseInfo[0].backup_text = NULL;
  g_parse[2].parseInfo[0].negativeNumbers = 0;
  g_parse[2].parseInfo[0].errorPrefix = (char *)&queryFormat.fmt + 3;
  g_parse[2].parseInfo[0].warningPrefix = (char *)&queryFormat.fmt + 3;
  g_parse[2].parseInfo[0].backup_lines = 0;
  g_parse[2].parseInfo[0].backup_text = NULL;
  g_parse[3].parseInfo[0].negativeNumbers = 0;
  g_parse[3].parseInfo[0].errorPrefix = (char *)&queryFormat.fmt + 3;
  g_parse[3].parseInfo[0].warningPrefix = (char *)&queryFormat.fmt + 3;
  g_parse[3].parseInfo[0].backup_lines = 0;
  g_parse[3].parseInfo[0].backup_text = NULL;
  *(_DWORD *)&g_parse[0].parseInfo[0].ungetToken = 256;
  g_parse[0].parseInfo[0].negativeNumbers = 0;
  g_parse[1].parseInfo[0].lines = 1;
  *(_DWORD *)&g_parse[1].parseInfo[0].ungetToken = 256;
  g_parse[2].parseInfo[0].lines = 1;
  *(_DWORD *)&g_parse[2].parseInfo[0].ungetToken = 256;
  g_parse[3].parseInfo[0].lines = 1;
  *(_DWORD *)&g_parse[3].parseInfo[0].ungetToken = 256;
}

/*
==============
Com_MatchToken
==============
*/
__int64 Com_MatchToken(const char **buf_p, const char *match, int warning)
{
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v7; 
  const char *backup_text; 
  const char *v9; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v7 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( v7->ungetToken )
  {
    backup_text = v7->backup_text;
    v7->ungetToken = 0;
    *buf_p = backup_text;
    v7->lines = v7->backup_lines;
  }
  v9 = Com_ParseExt(buf_p, 1);
  if ( !strcmp(v9, match) )
    return 1i64;
  if ( warning )
    Com_ScriptError("MatchToken: got '%s', expected '%s'\n", v9, match);
  else
    Com_ScriptErrorDrop("MatchToken: got '%s', expected '%s'\n", v9, match);
  return 0i64;
}

/*
==============
Com_Parse1DMatrix
==============
*/
void Com_Parse1DMatrix(const char **buf_p, int x, float *m)
{
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v10; 
  const char *backup_text; 
  const char *v12; 
  ParseThreadInfo *v14; 
  parseInfo_t *v15; 
  const char *v16; 
  char *v17; 

  v5 = x;
  Com_MatchToken(buf_p, "(", 0);
  v7 = v5;
  if ( (int)v5 > 0 )
  {
    v8 = 0i64;
    do
    {
      ParseThreadInfo = Com_GetParseThreadInfo();
      v10 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
      if ( v10->ungetToken )
      {
        backup_text = v10->backup_text;
        v10->ungetToken = 0;
        *buf_p = backup_text;
        v10->lines = v10->backup_lines;
      }
      v12 = Com_ParseExt(buf_p, 1);
      *(double *)&_XMM0 = atof(v12);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      m[v8++] = *(float *)&_XMM1;
    }
    while ( v8 < v7 );
  }
  v14 = Com_GetParseThreadInfo();
  v15 = &v14->parseInfo[v14->parseInfoNum];
  if ( v15->ungetToken )
  {
    v16 = v15->backup_text;
    v15->ungetToken = 0;
    *buf_p = v16;
    v15->lines = v15->backup_lines;
  }
  v17 = Com_ParseExt(buf_p, 1);
  if ( *v17 != asc_143F7E4C0[0] || v17[1] != asc_143F7E4C0[1] )
    Com_ScriptErrorDrop("MatchToken: got '%s', expected '%s'\n", v17, ")");
}

/*
==============
Com_Parse2DMatrix
==============
*/
void Com_Parse2DMatrix(const char **buf_p, int y, int x, float *m)
{
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v13; 
  const char *backup_text; 
  char *v15; 
  float *v16; 
  __int64 v17; 
  ParseThreadInfo *v18; 
  parseInfo_t *v19; 
  const char *v20; 
  const char *v21; 
  ParseThreadInfo *v23; 
  parseInfo_t *v24; 
  const char *v25; 
  char *v26; 
  ParseThreadInfo *v27; 
  parseInfo_t *v28; 
  const char *v29; 
  char *v30; 

  v8 = x;
  Com_MatchToken(buf_p, "(", 0);
  if ( y > 0 )
  {
    v9 = 4 * v8;
    v10 = v8;
    v11 = (unsigned int)y;
    do
    {
      ParseThreadInfo = Com_GetParseThreadInfo();
      v13 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
      if ( v13->ungetToken )
      {
        backup_text = v13->backup_text;
        v13->ungetToken = 0;
        *buf_p = backup_text;
        v13->lines = v13->backup_lines;
      }
      v15 = Com_ParseExt(buf_p, 1);
      if ( *v15 != asc_144093254[0] || v15[1] != asc_144093254[1] )
        Com_ScriptErrorDrop("MatchToken: got '%s', expected '%s'\n", v15, "(");
      if ( v10 > 0 )
      {
        v16 = m;
        v17 = v10;
        do
        {
          if ( Sys_IsMainThread() )
          {
            v18 = g_parse;
          }
          else if ( Sys_IsRenderThread() )
          {
            v18 = &g_parse[1];
          }
          else if ( Sys_IsServerThread() )
          {
            v18 = &g_parse[2];
          }
          else if ( Sys_IsDatabaseThread() )
          {
            v18 = &g_parse[3];
          }
          else
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No parse context for current thread.") )
              __debugbreak();
            v18 = NULL;
          }
          v19 = &v18->parseInfo[v18->parseInfoNum];
          if ( v19->ungetToken )
          {
            v20 = v19->backup_text;
            v19->ungetToken = 0;
            *buf_p = v20;
            v19->lines = v19->backup_lines;
          }
          v21 = Com_ParseExt(buf_p, 1);
          *(double *)&_XMM0 = atof(v21);
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          *v16++ = *(float *)&_XMM1;
          --v17;
        }
        while ( v17 );
        v9 = 4 * v10;
      }
      if ( Sys_IsMainThread() )
      {
        v23 = g_parse;
      }
      else if ( Sys_IsRenderThread() )
      {
        v23 = &g_parse[1];
      }
      else if ( Sys_IsServerThread() )
      {
        v23 = &g_parse[2];
      }
      else if ( Sys_IsDatabaseThread() )
      {
        v23 = &g_parse[3];
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No parse context for current thread.") )
          __debugbreak();
        v23 = NULL;
      }
      v24 = &v23->parseInfo[v23->parseInfoNum];
      if ( v24->ungetToken )
      {
        v25 = v24->backup_text;
        v24->ungetToken = 0;
        *buf_p = v25;
        v24->lines = v24->backup_lines;
      }
      v26 = Com_ParseExt(buf_p, 1);
      if ( *v26 != asc_143F7E4C0[0] || v26[1] != asc_143F7E4C0[1] )
        Com_ScriptErrorDrop("MatchToken: got '%s', expected '%s'\n", v26, ")");
      m = (float *)((char *)m + v9);
      --v11;
    }
    while ( v11 );
  }
  v27 = Com_GetParseThreadInfo();
  v28 = &v27->parseInfo[v27->parseInfoNum];
  if ( v28->ungetToken )
  {
    v29 = v28->backup_text;
    v28->ungetToken = 0;
    *buf_p = v29;
    v28->lines = v28->backup_lines;
  }
  v30 = Com_ParseExt(buf_p, 1);
  if ( *v30 != asc_143F7E4C0[0] || v30[1] != asc_143F7E4C0[1] )
    Com_ScriptErrorDrop("MatchToken: got '%s', expected '%s'\n", v30, ")");
}

/*
==============
Com_Parse3DMatrix
==============
*/
void Com_Parse3DMatrix(const char **buf_p, int z, int y, int x, float *m)
{
  __int64 v7; 
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v11; 
  const char *backup_text; 
  char *v13; 

  v7 = (unsigned int)z;
  Com_MatchToken(buf_p, "(", 0);
  if ( (int)v7 > 0 )
  {
    do
    {
      Com_Parse2DMatrix(buf_p, y, x, m);
      m += x * y;
      --v7;
    }
    while ( v7 );
  }
  ParseThreadInfo = Com_GetParseThreadInfo();
  v11 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( v11->ungetToken )
  {
    backup_text = v11->backup_text;
    v11->ungetToken = 0;
    *buf_p = backup_text;
    v11->lines = v11->backup_lines;
  }
  v13 = Com_ParseExt(buf_p, 1);
  if ( *v13 != asc_143F7E4C0[0] || v13[1] != asc_143F7E4C0[1] )
    Com_ScriptErrorDrop("MatchToken: got '%s', expected '%s'\n", v13, ")");
}

/*
==============
Com_Parse
==============
*/
char *Com_Parse(const char **data_p)
{
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v3; 
  const char *backup_text; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v3 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( v3->ungetToken )
  {
    backup_text = v3->backup_text;
    v3->ungetToken = 0;
    *data_p = backup_text;
    v3->lines = v3->backup_lines;
  }
  return Com_ParseExt(data_p, 1);
}

/*
==============
Com_ParseCSV
==============
*/
parseInfo_t *Com_ParseCSV(const char **data_p, int allowLineBreaks)
{
  ParseThreadInfo *ParseThreadInfo; 
  const char *v5; 
  const char *v6; 
  unsigned int v7; 
  parseInfo_t *v8; 
  char v10; 
  char v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  const char *v16; 
  char v17; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v5 = *data_p;
  v6 = NULL;
  v7 = 0;
  v8 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  v8->token[0] = 0;
  if ( allowLineBreaks )
  {
    while ( *v5 == 13 || *v5 == 10 )
      ++v5;
LABEL_8:
    ParseThreadInfo->prevTokenPos = ParseThreadInfo->tokenPos;
    ParseThreadInfo->tokenPos = v5;
    v10 = *v5;
    if ( *v5 )
    {
      v11 = *v5;
      do
      {
        v10 = v11;
        if ( v11 == 44 || v11 == 10 )
          break;
        if ( v11 == 13 )
        {
          v10 = *++v5;
          goto LABEL_30;
        }
        if ( v11 == 34 )
        {
          v10 = *++v5;
          if ( !v10 )
            goto LABEL_30;
          while ( 1 )
          {
            if ( v10 == 34 )
            {
              v10 = v5[1];
              if ( v10 != 34 )
              {
                ++v5;
                goto LABEL_30;
              }
              if ( v7 < 0x3FF )
              {
                v13 = v7++;
                v8->token[v13] = 34;
              }
              v14 = 2i64;
            }
            else
            {
              if ( v7 < 0x3FF )
              {
                v15 = v7++;
                v8->token[v15] = v10;
              }
              v14 = 1i64;
            }
            v5 += v14;
            v10 = *v5;
            if ( !*v5 )
              goto LABEL_30;
          }
        }
        if ( v7 < 0x3FF )
        {
          v12 = v7++;
          v8->token[v12] = *v5;
        }
        v10 = *++v5;
LABEL_30:
        v11 = v10;
      }
      while ( v10 );
    }
    v16 = v5;
    if ( v10 )
    {
      v17 = v10;
      if ( v10 != 10 )
        v17 = v5[1];
      ++v5;
      if ( v10 == 10 )
        v5 = v16;
      if ( v17 )
        goto LABEL_38;
    }
    if ( v7 )
LABEL_38:
      v6 = v5;
    *data_p = v6;
    v8->token[v7] = 0;
    return v8;
  }
  if ( *v5 != 13 )
  {
    if ( *v5 == 10 )
    {
      ++v8->lines;
      return v8;
    }
    goto LABEL_8;
  }
  return v8;
}

/*
==============
Com_ParseExt
==============
*/
parseInfo_t *Com_ParseExt(const char **data_p, int allowLineBreaks)
{
  int v2; 
  int v4; 
  parseInfo_t *v6; 
  const char *v7; 
  int v8; 
  int lines; 
  const char *v11; 
  ParseThreadInfo *v12; 
  parseInfo_t *v13; 
  int i; 
  __int64 v15; 
  const char *v16; 
  const char *v17; 
  TokenFlagType *v18; 
  __int64 v19; 
  char v20; 
  __int64 v21; 
  __int64 v22; 
  TokenFlagType *v23; 
  TokenFlagType v24; 
  __int64 v25; 
  const char *v26; 
  const char **j; 
  int v28; 
  _BYTE *v29; 
  const char *v30; 
  char v31; 
  __int64 v32; 
  __int64 v33; 
  TokenFlagType v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  ParseThreadInfo *ParseThreadInfo; 

  v2 = 0;
  v4 = 0;
  ParseThreadInfo = Com_GetParseThreadInfo();
  v6 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( !data_p && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 734, ASSERT_TYPE_ASSERT, "(data_p)", (const char *)&queryFormat, "data_p") )
    __debugbreak();
  v7 = *data_p;
  v8 = 0;
  v6->token[0] = 0;
  if ( !v7 )
  {
    *data_p = NULL;
    return v6;
  }
  v6->backup_lines = v6->lines;
  v6->backup_text = *data_p;
  if ( v6->csv )
    return Com_ParseCSV(data_p, allowLineBreaks);
  while ( 1 )
  {
    lines = v6->lines;
    v11 = v7;
    v12 = Com_GetParseThreadInfo();
    v13 = &v12->parseInfo[v12->parseInfoNum];
    for ( i = *v7; i <= 32; ++v11 )
    {
      if ( !i )
      {
        *data_p = NULL;
        return v6;
      }
      if ( i == 10 )
      {
        ++v13->lines;
        v4 = 1;
      }
      i = v11[1];
    }
    v7 = v11;
    if ( v4 && !allowLineBreaks )
    {
      v6->lines = lines;
      return v6;
    }
    LOBYTE(v15) = *v11;
    v16 = v11 + 1;
    if ( *v11 != 47 )
      break;
    if ( *v16 == 47 )
    {
      do
      {
        if ( (_BYTE)v15 == 10 )
          break;
        LOBYTE(v15) = *++v7;
      }
      while ( (_BYTE)v15 );
    }
    else
    {
      if ( *v16 != 42 )
        break;
      do
      {
        if ( (_BYTE)v15 == 42 )
        {
          if ( v7[1] == 47 )
            break;
        }
        else if ( (_BYTE)v15 == 10 )
        {
          ++v6->lines;
        }
        LOBYTE(v15) = *++v7;
      }
      while ( (_BYTE)v15 );
      v17 = v7 + 2;
      if ( !(_BYTE)v15 )
        v17 = v7;
      v7 = v17;
    }
  }
  ParseThreadInfo->prevTokenPos = ParseThreadInfo->tokenPos;
  ParseThreadInfo->tokenPos = v11;
  if ( (_BYTE)v15 == 34 )
  {
    if ( v6->keepStringQuotes )
    {
      v6->token[0] = 34;
      v8 = 1;
    }
    v18 = s_tblToken;
    v19 = (unsigned int)v8;
    while ( 1 )
    {
      v20 = *v16++;
      if ( v20 == 92 && (v18[*v16] & 0x60) != 0 )
      {
        v20 = *v16++;
      }
      else
      {
        if ( (v18[v20] & 0x840) != 0 )
        {
          if ( v6->keepStringQuotes )
          {
            v21 = v8++;
            v6->token[v21] = 34;
          }
          v6->token[v8] = 0;
          *data_p = v16;
          return v6;
        }
        if ( *v16 == 10 )
          ++v6->lines;
      }
      if ( v19 < 1023 )
      {
        ++v8;
        v6->token[v19++] = v20;
      }
    }
  }
  if ( v6->spaceDelimited )
  {
    v22 = 0i64;
    do
    {
      if ( v22 < 1023 )
      {
        ++v8;
        v6->token[v22++] = v15;
      }
      LOBYTE(v15) = *++v7;
    }
    while ( (char)v15 > 32 );
  }
  else
  {
    v23 = s_tblToken;
    v24 = s_tblToken[(char)v15];
    if ( (v24 & 4) != 0 || (s_tblToken[v11[1]] & 4) != 0 && (v6->negativeNumbers && (_BYTE)v15 == 45 || (_BYTE)v15 == 46) )
    {
      v33 = 0i64;
      do
      {
        if ( v33 < 1023 )
        {
          ++v8;
          v6->token[v33++] = v15;
        }
        v15 = *++v7;
        v34 = v23[v15];
      }
      while ( (v34 & 0x84) != 0 );
      if ( (v34 & 0x400) != 0 )
      {
        if ( v8 < 1023 )
        {
          v35 = v8++;
          v6->token[v35] = v15;
        }
        v36 = *++v7;
        if ( (v23[v36] & 0x300) != 0 )
        {
          if ( v8 < 1023 )
          {
            v37 = v8++;
            v6->token[v37] = v36;
          }
          LOBYTE(v36) = *++v7;
        }
        v38 = v8;
        do
        {
          if ( v38 < 1023 )
          {
            ++v8;
            v6->token[v38++] = v36;
          }
          v36 = *++v7;
        }
        while ( (v23[v36] & 4) != 0 );
      }
    }
    else
    {
      if ( (v24 & 0x3B) == 0 )
      {
        v26 = punctuation[0];
        for ( j = punctuation; v26; ++j )
        {
          v28 = 0;
          v29 = v11;
          v30 = (const char *)(v26 - v11);
          while ( 1 )
          {
            v31 = v29[(_QWORD)v30];
            if ( !v31 )
            {
              v32 = v28;
              memcpy_0(v6, *j, v28);
              v6->token[v32] = 0;
              *data_p = &v11[v32];
              return v6;
            }
            if ( *v29 != v31 )
              break;
            ++v28;
            ++v29;
          }
          v26 = j[1];
        }
        v6->token[0] = *v11;
        v6->token[1] = 0;
        *data_p = v11 + 1;
        return v6;
      }
      v25 = 0i64;
      do
      {
        if ( v25 < 1023 )
        {
          ++v8;
          v6->token[v25++] = v15;
        }
        v15 = *++v7;
      }
      while ( (v23[v15] & 0xF) != 0 );
    }
  }
  if ( v8 != 1024 )
    v2 = v8;
  v6->token[v2] = 0;
  *data_p = v7;
  return v6;
}

/*
==============
Com_ParseFloat
==============
*/
float Com_ParseFloat(const char **buf_p)
{
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v4; 
  const char *backup_text; 
  parseInfo_t *v6; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v4 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( v4->ungetToken )
  {
    backup_text = v4->backup_text;
    v4->ungetToken = 0;
    *buf_p = backup_text;
    v4->lines = v4->backup_lines;
  }
  v6 = Com_ParseExt(buf_p, 1);
  *(double *)&_XMM0 = atof(v6->token);
  __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
Com_ParseFloatOnLine
==============
*/
float Com_ParseFloatOnLine(const char **buf_p)
{
  const char *v2; 

  v2 = Com_ParseOnLine(buf_p);
  *(double *)&_XMM0 = atof(v2);
  __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
Com_ParseInt
==============
*/
int Com_ParseInt(const char **buf_p)
{
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v3; 
  const char *backup_text; 
  parseInfo_t *v5; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v3 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( v3->ungetToken )
  {
    backup_text = v3->backup_text;
    v3->ungetToken = 0;
    *buf_p = backup_text;
    v3->lines = v3->backup_lines;
  }
  v5 = Com_ParseExt(buf_p, 1);
  return atoi(v5->token);
}

/*
==============
Com_ParseIntOnLine
==============
*/
int Com_ParseIntOnLine(const char **buf_p)
{
  const char *v1; 

  v1 = Com_ParseOnLine(buf_p);
  return atoi(v1);
}

/*
==============
Com_ParseOnLine
==============
*/
parseInfo_t *Com_ParseOnLine(const char **data_p)
{
  ParseThreadInfo *ParseThreadInfo; 
  __int64 parseInfoNum; 
  parseInfo_t *v4; 
  bool v5; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  parseInfoNum = ParseThreadInfo->parseInfoNum;
  v4 = &ParseThreadInfo->parseInfo[parseInfoNum];
  if ( v4->ungetToken )
  {
    v5 = !v4->spaceDelimited;
    v4->ungetToken = 0;
    if ( v5 )
      return (parseInfo_t *)((char *)ParseThreadInfo + 1080 * parseInfoNum);
    *data_p = v4->backup_text;
    v4->lines = v4->backup_lines;
  }
  return Com_ParseExt(data_p, 0);
}

/*
==============
Com_ParseRestOfLine
==============
*/
char *Com_ParseRestOfLine(const char **data_p)
{
  char *line; 
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v4; 
  bool v5; 

  line = Com_GetParseThreadInfo()->line;
  *line = 0;
  while ( 1 )
  {
    ParseThreadInfo = Com_GetParseThreadInfo();
    v4 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
    if ( v4->ungetToken )
    {
      v5 = !v4->spaceDelimited;
      v4->ungetToken = 0;
      if ( v5 )
        goto LABEL_6;
      *data_p = v4->backup_text;
      v4->lines = v4->backup_lines;
    }
    v4 = Com_ParseExt(data_p, 0);
LABEL_6:
    if ( !v4->token[0] )
      return line;
    if ( *line )
      I_strcat(line, 0x400ui64, " ");
    I_strcat(line, 0x400ui64, v4->token);
  }
}

/*
==============
Com_ParseReturnToMark
==============
*/
void Com_ParseReturnToMark(const char **text, com_parse_mark_t *mark)
{
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v5; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v5 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 537, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !mark && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 538, ASSERT_TYPE_ASSERT, "(mark)", (const char *)&queryFormat, "mark") )
    __debugbreak();
  v5->lines = mark->lines;
  *text = mark->text;
  v5->ungetToken = mark->ungetToken != 0;
  v5->backup_lines = mark->backup_lines;
  v5->backup_text = mark->backup_text;
}

/*
==============
Com_ParseSetMark
==============
*/
void Com_ParseSetMark(const char **text, com_parse_mark_t *mark)
{
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v5; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v5 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 513, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !mark && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 514, ASSERT_TYPE_ASSERT, "(mark)", (const char *)&queryFormat, "mark") )
    __debugbreak();
  mark->lines = v5->lines;
  mark->text = *text;
  mark->ungetToken = v5->ungetToken;
  mark->backup_lines = v5->backup_lines;
  mark->backup_text = v5->backup_text;
}

/*
==============
Com_ResetParseSessions
==============
*/
void Com_ResetParseSessions(void)
{
  Com_GetParseThreadInfo()->parseInfoNum = 0;
}

/*
==============
Com_ScriptError
==============
*/
void Com_ScriptError(const char *msg, ...)
{
  ParseThreadInfo *ParseThreadInfo; 
  __int64 parseInfoNum; 
  char *ap; 
  char dest[4096]; 
  va_list va; 

  va_start(va, msg);
  ParseThreadInfo = Com_GetParseThreadInfo();
  parseInfoNum = ParseThreadInfo->parseInfoNum;
  Com_vsprintf_truncate(dest, 0x1000ui64, 0x1000ui64, msg, va);
  if ( ParseThreadInfo->parseInfoNum )
  {
    LODWORD(ap) = ParseThreadInfo->parseInfo[parseInfoNum].lines;
    Com_PrintError(23, "%sFile %s, line %i: %s", ParseThreadInfo->parseInfo[parseInfoNum].warningPrefix, ParseThreadInfo->parseInfo[parseInfoNum].parseFile, ap, dest);
  }
  else
  {
    Com_PrintError(23, (const char *)&queryFormat, dest);
  }
}

/*
==============
Com_ScriptErrorDrop
==============
*/
void Com_ScriptErrorDrop(const char *msg, ...)
{
  ParseThreadInfo *ParseThreadInfo; 
  __int64 parseInfoNum; 
  char dest[4096]; 
  va_list va; 

  va_start(va, msg);
  ParseThreadInfo = Com_GetParseThreadInfo();
  parseInfoNum = ParseThreadInfo->parseInfoNum;
  Com_vsprintf_truncate(dest, 0x1000ui64, 0x1000ui64, msg, va);
  if ( ParseThreadInfo->parseInfoNum )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144186DF8, 1335i64, ParseThreadInfo->parseInfo[parseInfoNum].errorPrefix, ParseThreadInfo->parseInfo[parseInfoNum].parseFile, ParseThreadInfo->parseInfo[parseInfoNum].lines, dest);
  else
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FB69FC, dest);
}

/*
==============
Com_SetCSV
==============
*/
void Com_SetCSV(int csv)
{
  ParseThreadInfo *ParseThreadInfo; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum].csv = csv != 0;
}

/*
==============
Com_SetKeepStringQuotes
==============
*/
void Com_SetKeepStringQuotes(int keepStringQuotes)
{
  ParseThreadInfo *ParseThreadInfo; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum].keepStringQuotes = keepStringQuotes != 0;
}

/*
==============
Com_SetParseNegativeNumbers
==============
*/
void Com_SetParseNegativeNumbers(int negativeNumbers)
{
  ParseThreadInfo *ParseThreadInfo; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum].negativeNumbers = negativeNumbers != 0;
}

/*
==============
Com_SetScriptErrorPrefix
==============
*/
void Com_SetScriptErrorPrefix(const char *prefix)
{
  ParseThreadInfo *ParseThreadInfo; 
  __int64 parseInfoNum; 
  __int64 v4; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  parseInfoNum = ParseThreadInfo->parseInfoNum;
  if ( !prefix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 409, ASSERT_TYPE_ASSERT, "(prefix)", (const char *)&queryFormat, "prefix") )
    __debugbreak();
  if ( ParseThreadInfo->parseInfoNum <= 0 )
  {
    LODWORD(v4) = ParseThreadInfo->parseInfoNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 410, ASSERT_TYPE_ASSERT, "( ( parse->parseInfoNum > 0 ) )", "( parse->parseInfoNum ) = %i", v4) )
      __debugbreak();
  }
  ParseThreadInfo->parseInfo[parseInfoNum].errorPrefix = prefix;
}

/*
==============
Com_SetScriptWarningPrefix
==============
*/
void Com_SetScriptWarningPrefix(const char *prefix)
{
  ParseThreadInfo *ParseThreadInfo; 
  __int64 parseInfoNum; 
  __int64 v4; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  parseInfoNum = ParseThreadInfo->parseInfoNum;
  if ( !prefix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 423, ASSERT_TYPE_ASSERT, "(prefix)", (const char *)&queryFormat, "prefix") )
    __debugbreak();
  if ( ParseThreadInfo->parseInfoNum <= 0 )
  {
    LODWORD(v4) = ParseThreadInfo->parseInfoNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_parse.cpp", 424, ASSERT_TYPE_ASSERT, "( ( parse->parseInfoNum > 0 ) )", "( parse->parseInfoNum ) = %i", v4) )
      __debugbreak();
  }
  ParseThreadInfo->parseInfo[parseInfoNum].warningPrefix = prefix;
}

/*
==============
Com_SetSpaceDelimited
==============
*/
void Com_SetSpaceDelimited(int spaceDelimited)
{
  ParseThreadInfo *ParseThreadInfo; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum].spaceDelimited = spaceDelimited != 0;
}

/*
==============
Com_SkipBracedSection
==============
*/
__int64 Com_SkipBracedSection(const char **program, unsigned int startDepth, const int iMaxNesting)
{
  unsigned int v6; 
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v8; 
  const char *backup_text; 
  char v10; 
  const char *v11; 
  char v12; 
  char v14; 
  char v15; 

  v6 = 0;
  ParseThreadInfo = Com_GetParseThreadInfo();
  v8 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  if ( v8->ungetToken )
  {
    v8->lines = v8->backup_lines;
    backup_text = v8->backup_text;
    v8->ungetToken = 0;
    if ( !backup_text[1] )
    {
      v10 = *backup_text;
      if ( v10 == 123 )
      {
        ++startDepth;
      }
      else if ( v10 == 125 )
      {
        return 0i64;
      }
    }
  }
  v11 = *program;
  v12 = **program;
  while ( v12 == 123 )
  {
    if ( startDepth == iMaxNesting )
      v6 = 1;
    if ( startDepth != iMaxNesting )
      ++startDepth;
LABEL_36:
    v12 = *++v11;
    if ( !v12 )
    {
      *program = NULL;
      return v6;
    }
  }
  if ( v12 != 125 )
  {
    if ( v12 == 10 )
    {
      ++v8->lines;
      goto LABEL_36;
    }
    v14 = *v11;
    if ( v12 == 47 )
    {
      v15 = v11[1];
      if ( v15 == 47 )
      {
        for ( ; v14; v14 = *++v11 )
        {
          if ( v14 == 10 )
            break;
        }
      }
      else if ( v15 == 42 && v14 )
      {
        while ( 1 )
        {
          if ( v14 == 42 )
          {
            if ( v11[1] == 47 )
            {
              v11 += 2;
              goto LABEL_36;
            }
          }
          else if ( v14 == 10 )
          {
            ++v8->lines;
          }
          v14 = *++v11;
          if ( !v14 )
            goto LABEL_36;
        }
      }
    }
    else if ( v12 == 34 )
    {
      ++v11;
    }
    goto LABEL_36;
  }
  if ( --startDepth )
    goto LABEL_36;
  *program = v11 + 1;
  return v6;
}

/*
==============
Com_SkipRestOfLine
==============
*/
void Com_SkipRestOfLine(const char **data)
{
  ParseThreadInfo *ParseThreadInfo; 
  parseInfo_t *v3; 
  const char *v4; 
  int v5; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  v3 = &ParseThreadInfo->parseInfo[ParseThreadInfo->parseInfoNum];
  v4 = *data;
  if ( *data )
  {
    v5 = *v4;
    if ( *v4 )
    {
      while ( 1 )
      {
        ++v4;
        if ( v5 == 10 )
          break;
        v5 = *v4;
        if ( !*v4 )
        {
          *data = v4;
          return;
        }
      }
      ++v3->lines;
    }
    *data = v4;
  }
}

/*
==============
Com_UngetToken
==============
*/
void Com_UngetToken(void)
{
  ParseThreadInfo *ParseThreadInfo; 
  __int64 parseInfoNum; 

  ParseThreadInfo = Com_GetParseThreadInfo();
  parseInfoNum = ParseThreadInfo->parseInfoNum;
  if ( ParseThreadInfo->parseInfo[parseInfoNum].ungetToken )
    Com_ScriptErrorDrop("UngetToken called twice");
  ParseThreadInfo->parseInfo[parseInfoNum].ungetToken = 1;
  ParseThreadInfo->tokenPos = ParseThreadInfo->prevTokenPos;
}

