/*
==============
Scr_GetTokenOpaqueString_Internal
==============
*/

unsigned int __fastcall Scr_GetTokenOpaqueString_Internal(scrContext_t *scrContext, ScriptProcessContext *processContext, int offset)
{
  return ?Scr_GetTokenOpaqueString_Internal@@YAIAEAUscrContext_t@@AEAUScriptProcessContext@@H@Z(scrContext, processContext, offset);
}

/*
==============
Scr_SetRelativeCodepos
==============
*/

void __fastcall Scr_SetRelativeCodepos(unsigned __int8 *codePos, const char *pos)
{
  ?Scr_SetRelativeCodepos@@YAXPEAEPEBD@Z(codePos, pos);
}

/*
==============
Scr_GetTokenString
==============
*/

const char *__fastcall Scr_GetTokenString(int *pReadLen, ScriptProcessContext *processContext)
{
  return ?Scr_GetTokenString@@YAPEBDPEAHAEAUScriptProcessContext@@@Z(pReadLen, processContext);
}

/*
==============
Scr_ReadNativeCodePos
==============
*/

unsigned __int16 __fastcall Scr_ReadNativeCodePos(const char **pos)
{
  return ?Scr_ReadNativeCodePos@@YAGPEAPEBD@Z(pos);
}

/*
==============
Scr_GetTokenFilenameString
==============
*/

scr_string_t __fastcall Scr_GetTokenFilenameString(scrContext_t *scrContext, ScriptProcessContext *processContext)
{
  return ?Scr_GetTokenFilenameString@@YA?AW4scr_string_t@@AEAUscrContext_t@@AEAUScriptProcessContext@@@Z(scrContext, processContext);
}

/*
==============
Scr_GetTokenInt
==============
*/

int __fastcall Scr_GetTokenInt(scrContext_t *scrContext, ScriptProcessContext *processContext)
{
  return ?Scr_GetTokenInt@@YAHAEAUscrContext_t@@AEAUScriptProcessContext@@@Z(scrContext, processContext);
}

/*
==============
Scr_ReadNativeCodePos
==============
*/
__int64 Scr_ReadNativeCodePos(const char **pos)
{
  const char *v2; 
  unsigned __int16 v3; 
  __int64 result; 

  v2 = *pos + 2;
  v3 = *(_WORD *)*pos;
  *pos = v2;
  if ( *v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 141, ASSERT_TYPE_ASSERT, "( *codePos == 0 )", (const char *)&queryFormat, "*codePos == 0") )
    __debugbreak();
  result = v3;
  *pos = v2 + 1;
  return result;
}

/*
==============
Scr_SetRelativeCodepos
==============
*/
void Scr_SetRelativeCodepos(unsigned __int8 *codePos, const char *pos)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 

  v3 = truncate_cast<int,__int64>(pos - (const char *)codePos);
  v4 = v3;
  if ( (unsigned int)(v3 + 0x800000) > 0xFFFFFF )
  {
    v7 = 0x7FFFFF;
    v6 = -8388608;
    v5 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 321, ASSERT_TYPE_ASSERT, "( SCR_CODE_OFFSET_MIN ) <= ( codeOffset ) && ( codeOffset ) <= ( SCR_CODE_OFFSET_MAX )", "codeOffset not in [SCR_CODE_OFFSET_MIN, SCR_CODE_OFFSET_MAX]\n\t%i not in [%i, %i]", v5, v6, v7) )
      __debugbreak();
  }
  if ( v4 != v4 << 8 >> 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 322, ASSERT_TYPE_ASSERT, "(Scr_IsEncodedCodeOffsetLossless( codeOffset ))", (const char *)&queryFormat, "Scr_IsEncodedCodeOffsetLossless( codeOffset )") )
    __debugbreak();
  *codePos = v4;
  codePos[2] = BYTE2(v4);
  codePos[1] = BYTE1(v4);
}

/*
==============
Scr_GetTokenFilenameString
==============
*/
scr_string_t Scr_GetTokenFilenameString(scrContext_t *scrContext, ScriptProcessContext *processContext)
{
  __int64 readPos; 
  unsigned int v5; 
  int v6; 
  int length; 
  char *TokenString; 
  char dest[16]; 

  readPos = processContext->readPos;
  v5 = *(_DWORD *)&processContext->sourceBuf[readPos];
  v6 = readPos + 4;
  length = processContext->length;
  processContext->readPos = v6;
  if ( v6 >= length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 280, ASSERT_TYPE_ASSERT, "( processContext.readPos ) < ( processContext.length )", "%s < %s\n\t%i, %i", "processContext.readPos", "processContext.length", v6, length) )
    __debugbreak();
  if ( v5 )
  {
    scrContext->m_varPub.checksum = v5 + 31 * scrContext->m_varPub.checksum;
    Com_sprintf(dest, 0x10ui64, "%d", v5);
    TokenString = dest;
  }
  else
  {
    TokenString = (char *)Scr_GetTokenString(NULL, processContext);
  }
  return SL_GetString(TokenString, 0);
}

/*
==============
Scr_GetTokenInt
==============
*/
__int64 Scr_GetTokenInt(scrContext_t *scrContext, ScriptProcessContext *processContext)
{
  int length; 
  const char *v4; 
  int v5; 
  __int64 result; 
  int v7; 
  int v8; 

  length = processContext->length;
  v4 = &processContext->sourceBuf[processContext->readPos];
  v5 = processContext->readPos + 4;
  processContext->readPos = v5;
  if ( v5 >= length )
  {
    v8 = length;
    v7 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 209, ASSERT_TYPE_ASSERT, "( processContext.readPos ) < ( processContext.length )", "%s < %s\n\t%i, %i", "processContext.readPos", "processContext.length", v7, v8) )
      __debugbreak();
  }
  result = *(unsigned int *)v4;
  scrContext->m_varPub.checksum = result + 31 * scrContext->m_varPub.checksum;
  return result;
}

/*
==============
Scr_GetTokenOpaqueString_Internal
==============
*/
__int64 Scr_GetTokenOpaqueString_Internal(scrContext_t *scrContext, ScriptProcessContext *processContext, int offset)
{
  __int64 readPos; 
  unsigned int v7; 
  int v8; 
  int length; 
  const char *TokenString; 
  __int64 result; 
  int v12; 
  int v13; 

  readPos = processContext->readPos;
  v7 = *(_DWORD *)&processContext->sourceBuf[readPos];
  v8 = readPos + 4;
  length = processContext->length;
  processContext->readPos = v8;
  if ( v8 >= length )
  {
    v13 = length;
    v12 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 243, ASSERT_TYPE_ASSERT, "( processContext.readPos ) < ( processContext.length )", "%s < %s\n\t%i, %i", "processContext.readPos", "processContext.length", v12, v13) )
      __debugbreak();
  }
  if ( !v7 )
  {
    TokenString = Scr_GetTokenString(NULL, processContext);
    v7 = offset + SL_GetCanonicalString(TokenString);
  }
  result = v7;
  scrContext->m_varPub.checksum = v7 + 31 * scrContext->m_varPub.checksum;
  return result;
}

/*
==============
Scr_GetTokenString
==============
*/
const char *Scr_GetTokenString(int *pReadLen, ScriptProcessContext *processContext)
{
  const char *v3; 
  __int64 v5; 
  int v6; 
  int v7; 
  const char *result; 
  int readPos; 
  int length; 

  v3 = &processContext->sourceBuf[processContext->readPos];
  v5 = -1i64;
  do
    ++v5;
  while ( v3[v5] );
  v6 = truncate_cast<int,unsigned __int64>(v5 + 1);
  processContext->readPos += v6;
  v7 = v6;
  if ( processContext->readPos >= processContext->length )
  {
    length = processContext->length;
    readPos = processContext->readPos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 225, ASSERT_TYPE_ASSERT, "( processContext.readPos ) < ( processContext.length )", "%s < %s\n\t%i, %i", "processContext.readPos", "processContext.length", readPos, length) )
      __debugbreak();
  }
  result = v3;
  if ( pReadLen )
    *pReadLen = v7;
  return result;
}

