/*
==============
Scr_GenerateCodePosMap
==============
*/

int __fastcall Scr_GenerateCodePosMap(scrContext_t *scrContext, MemCardFileHandle fileHandle)
{
  return ?Scr_GenerateCodePosMap@@YAHAEAUscrContext_t@@UMemCardFileHandle@@@Z(scrContext, fileHandle);
}

/*
==============
Scr_SetUseCodePosMap
==============
*/

void __fastcall Scr_SetUseCodePosMap(scrContext_t *scrContext, int useCodePosMap)
{
  ?Scr_SetUseCodePosMap@@YAXAEAUscrContext_t@@H@Z(scrContext, useCodePosMap);
}

/*
==============
Scr_GetOpcodeTypeInfo
==============
*/

int __fastcall Scr_GetOpcodeTypeInfo(const scrContext_t *scrContext, Scr_SourceType_t type, const char *codePos, int *codeOffset, int *sourceIndex)
{
  return ?Scr_GetOpcodeTypeInfo@@YAHAEBUscrContext_t@@W4Scr_SourceType_t@@PEBDPEAH3@Z(scrContext, type, codePos, codeOffset, sourceIndex);
}

/*
==============
Scr_SkipCanonicalStrings
==============
*/

void __fastcall Scr_SkipCanonicalStrings(MemCardFileHandle fileHandle)
{
  ?Scr_SkipCanonicalStrings@@YAXUMemCardFileHandle@@@Z(fileHandle);
}

/*
==============
Scr_LoadCanonicalStrings
==============
*/

void __fastcall Scr_LoadCanonicalStrings(const scrContext_t *scrContext, MemCardFileHandle fileHandle)
{
  ?Scr_LoadCanonicalStrings@@YAXAEBUscrContext_t@@UMemCardFileHandle@@@Z(scrContext, fileHandle);
}

/*
==============
Scr_CodePos_CheckClearTempMemory
==============
*/
void Scr_CodePos_CheckClearTempMemory(const scrContext_t *scrContext)
{
  if ( !scrContext->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 72, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.readWriteTempHunkUser )", (const char *)&queryFormat, "scrContext.m_varPub.readWriteTempHunkUser") )
    __debugbreak();
  if ( Mem_HunkUser_GetUsedSize(scrContext->m_varPub.readWriteTempHunkUser) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 73, ASSERT_TYPE_ASSERT, "( Mem_HunkUser_GetUsedSize( scrContext.m_varPub.readWriteTempHunkUser ) == 0 )", (const char *)&queryFormat, "Mem_HunkUser_GetUsedSize( scrContext.m_varPub.readWriteTempHunkUser ) == 0") )
      __debugbreak();
  }
}

/*
==============
Scr_CodePos_ClearTempMemory
==============
*/
void Scr_CodePos_ClearTempMemory(const scrContext_t *scrContext)
{
  if ( !scrContext->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 56, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.readWriteTempHunkUser )", (const char *)&queryFormat, "scrContext.m_varPub.readWriteTempHunkUser") )
    __debugbreak();
  Mem_HunkUser_Reset(scrContext->m_varPub.readWriteTempHunkUser);
}

/*
==============
Scr_GenerateCodePosMap
==============
*/
__int64 Scr_GenerateCodePosMap(scrContext_t *scrContext, MemCardFileHandle fileHandle)
{
  bool v2; 
  __int64 handle; 
  scrContext_t *v4; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  CodeOffsetMap *v9; 
  unsigned int v10; 
  MemOwnershipType v11; 
  int v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  _BYTE *v15; 
  int v16; 
  _BYTE *v17; 
  SourceBufferInfo *SourceInfo; 
  SourceBufferInfo *v19; 
  int codeOffset; 
  const char *codePos; 
  char *sourceBuf; 
  int v23; 
  int len; 
  int v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  _BYTE *v31; 
  unsigned int v32; 
  unsigned int v33; 
  __int64 v34; 
  const char *v35; 
  unsigned __int64 v36; 
  CodeOffsetMap *codeOffsetMap; 
  int v38; 
  __int64 v39; 
  __int64 v40; 
  int v41; 
  _BYTE *i; 
  _BYTE *j; 
  _BYTE *v44; 
  SourceBufferInfo *v45; 
  __int64 v46; 
  scrContext_t *v47; 
  __int64 v48; 
  __int64 v49; 
  unsigned int v50; 
  const char *ClosestOpcodePosOfType; 
  const char *v52; 
  __int64 v53; 
  Scr_SourceType_t v54; 
  unsigned int v55; 
  int v56; 
  int v57; 
  unsigned int ProgramBufferOffset; 
  unsigned int v59; 
  __int64 toLen; 
  _ScrDiffFiles *request; 
  int v62; 
  unsigned int v63; 
  unsigned int v64; 
  int v65; 
  int v66; 
  unsigned int buffer; 
  int v68; 
  int v69; 
  unsigned int v70; 
  SourceBufferInfo *v71; 
  _DWORD *v72; 
  int v73; 
  const char *v74; 
  __int64 v75; 
  __int64 v76; 
  scrContext_t *scrContexta; 
  __int64 v78; 
  int *DiffLineMap; 
  Scr_SourceType_t v80[4]; 
  unsigned int v81; 
  int v82; 
  int v83; 
  char name[128]; 

  v2 = !scrContext->m_varPub.developer;
  handle = fileHandle.handle;
  v76 = fileHandle.handle;
  v4 = scrContext;
  scrContexta = scrContext;
  if ( v2 )
    return 0i64;
  LOBYTE(scrContext) = 2;
  Mem_Ownership_AllocAcquire((MemOwnershipType)scrContext);
  Scr_RestartDebuggerRemote(v4);
  Scr_CodePos_CheckClearTempMemory(v4);
  if ( v4->m_parserPub.codeOffsetMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 202, ASSERT_TYPE_ASSERT, "( !pScrParserPub->codeOffsetMap )", (const char *)&queryFormat, "!pScrParserPub->codeOffsetMap") )
    __debugbreak();
  if ( v4->m_parserPub.codeOffsetMapLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 203, ASSERT_TYPE_ASSERT, "( !pScrParserPub->codeOffsetMapLen )", (const char *)&queryFormat, "!pScrParserPub->codeOffsetMapLen") )
    __debugbreak();
  if ( v4->m_parserPub.useCodeOffsetMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 204, ASSERT_TYPE_ASSERT, "( !pScrParserPub->useCodeOffsetMap )", (const char *)&queryFormat, "!pScrParserPub->useCodeOffsetMap") )
    __debugbreak();
  ReadFromDevice(&buffer, 4ui64, (MemCardFileHandle)handle);
  ReadFromDevice(&v64, 4ui64, (MemCardFileHandle)handle);
  if ( v64 - 1 > 0x6FFE )
    Com_PrintError(15, "Invalid canonicalStringOffsetCount (%d). Save format may have changed, replace save game.\n", v64);
  ReadFromDevice(NULL, buffer, (MemCardFileHandle)handle);
  ReadFromDevice(NULL, 4i64 * v64, (MemCardFileHandle)handle);
  ReadFromDevice(&v68, 4ui64, (MemCardFileHandle)handle);
  v6 = v68;
  v4->m_parserPub.codeOffsetMapLen = v68;
  v7 = 0;
  v4->m_parserPub.codeOffsetMap = (CodeOffsetMap *)Scr_Mem_DebugAlloc(v4, 20 * v6, "Scr_GenerateCodePosMap");
  v4->m_parserPub.useCodeOffsetMap = 1;
  if ( v68 > 0 )
  {
    v8 = 0i64;
    do
    {
      v9 = &v4->m_parserPub.codeOffsetMap[v8];
      ReadFromDevice(v80, 0x10ui64, (MemCardFileHandle)handle);
      ++v7;
      v9->type = v80[0];
      ++v8;
      v9->cumulOffset = v81;
      v9->codeOffset = v82;
      v9->sourcePos = v83;
      v9->newCodeOffest = -1;
    }
    while ( v7 < v68 );
  }
  ReadFromDevice(&v73, 4ui64, (MemCardFileHandle)handle);
  v10 = 0;
  LOBYTE(v11) = 2;
  v63 = 0;
  Mem_Ownership_AllocRelease(v11);
  buffer = v73 - 1;
  if ( v73 - 1 < 0 )
    goto LABEL_159;
  while ( 1 )
  {
    ReadFromDevice(&v62, 4ui64, (MemCardFileHandle)handle);
    if ( v62 < 0 )
      goto LABEL_158;
    ReadFromDevice(&v65, 4ui64, (MemCardFileHandle)handle);
    v12 = v65;
    if ( (unsigned __int64)v65 > 0x80 )
    {
      LODWORD(toLen) = v65;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 241, ASSERT_TYPE_ASSERT, "( ( nameLen <= sizeof( filename ) ) )", "( nameLen ) = %i", toLen) )
        __debugbreak();
      v12 = v65;
    }
    ReadFromDevice(name, v12, (MemCardFileHandle)handle);
    v13 = -1i64;
    do
      ++v13;
    while ( name[v13] );
    if ( v65 != (_DWORD)v13 + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 244, ASSERT_TYPE_ASSERT, "( nameLen == ( int )strlen( filename ) + 1 )", (const char *)&queryFormat, "nameLen == ( int )strlen( filename ) + 1") )
      __debugbreak();
    v62 -= v65;
    v14 = v62 + 1;
    if ( !v4->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 47, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.readWriteTempHunkUser )", (const char *)&queryFormat, "scrContext.m_varPub.readWriteTempHunkUser") )
      __debugbreak();
    v15 = Mem_HunkUser_AllocInternal(v4->m_varPub.readWriteTempHunkUser, v14, 0x10ui64, "Scr_CodePos_AllocTempMemory");
    v16 = v62;
    v17 = v15;
    v75 = (__int64)v15;
    if ( v62 > 0 )
    {
      ReadFromDevice(v15, v62, (MemCardFileHandle)handle);
      v16 = v62;
    }
    v17[v16] = 0;
    ReadFromDevice(&v66, 4ui64, (MemCardFileHandle)handle);
    ReadFromDevice(&v69, 4ui64, (MemCardFileHandle)handle);
    if ( v66 < 0 )
    {
      if ( !v4->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 56, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.readWriteTempHunkUser )", (const char *)&queryFormat, "scrContext.m_varPub.readWriteTempHunkUser") )
        __debugbreak();
      goto LABEL_157;
    }
    SourceInfo = Scr_GetSourceInfo(v4, name);
    v71 = SourceInfo;
    v19 = SourceInfo;
    if ( !SourceInfo )
    {
      if ( v10 < v4->m_parserPub.codeOffsetMapLen )
      {
        do
        {
          codeOffset = v4->m_parserPub.codeOffsetMap[v10].codeOffset;
          if ( codeOffset >= v69 )
            break;
          if ( codeOffset < v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 267, ASSERT_TYPE_ASSERT, "( pScrParserPub->codeOffsetMap[fromEndCodeIndex].codeOffset >= startBufferCodeOffset )", (const char *)&queryFormat, "pScrParserPub->codeOffsetMap[fromEndCodeIndex].codeOffset >= startBufferCodeOffset") )
            __debugbreak();
          ++v10;
        }
        while ( v10 < v4->m_parserPub.codeOffsetMapLen );
        v63 = v10;
      }
      if ( !v4->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 56, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.readWriteTempHunkUser )", (const char *)&queryFormat, "scrContext.m_varPub.readWriteTempHunkUser") )
        __debugbreak();
      goto LABEL_157;
    }
    if ( !SourceInfo->codePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 275, ASSERT_TYPE_ASSERT, "( toInfo->codePos )", (const char *)&queryFormat, "toInfo->codePos") )
      __debugbreak();
    codePos = v19->codePos;
    if ( v19->codePos < v4->m_varPub.programBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 197, ASSERT_TYPE_ASSERT, "( codePos >= scrContext.m_varPub.programBuffer )", (const char *)&queryFormat, "codePos >= scrContext.m_varPub.programBuffer") )
      __debugbreak();
    if ( (unsigned __int64)(codePos - v4->m_varPub.programBuffer) > 0x7FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 199, ASSERT_TYPE_ASSERT, "( ( codePos - scrContext.m_varPub.programBuffer ) <= MAX_SCRIPT_OFFSET )", (const char *)&queryFormat, "( codePos - scrContext.m_varPub.programBuffer ) <= MAX_SCRIPT_OFFSET") )
      __debugbreak();
    sourceBuf = (char *)v19->sourceBuf;
    v23 = (_DWORD)codePos - LODWORD(v4->m_varPub.programBuffer);
    v72 = sourceBuf;
    if ( !sourceBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 281, ASSERT_TYPE_ASSERT, "( toBuf )", (const char *)&queryFormat, "toBuf") )
      __debugbreak();
    len = v19->len;
    v25 = v62;
    if ( v62 == len && !memcmp_0(v17, sourceBuf, v62) )
    {
      v26 = v66;
      v27 = v23 - v66;
      v10 = v63;
      if ( v63 < v4->m_parserPub.codeOffsetMapLen )
      {
        while ( 1 )
        {
          v28 = v10;
          v29 = v4->m_parserPub.codeOffsetMap[v28].codeOffset;
          if ( v29 >= v69 )
            break;
          if ( v29 < v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 300, ASSERT_TYPE_ASSERT, "( pScrParserPub->codeOffsetMap[fromEndCodeIndex].codeOffset >= startBufferCodeOffset )", (const char *)&queryFormat, "pScrParserPub->codeOffsetMap[fromEndCodeIndex].codeOffset >= startBufferCodeOffset") )
            __debugbreak();
          ++v10;
          v4->m_parserPub.codeOffsetMap[v28].newCodeOffest = v27 + v4->m_parserPub.codeOffsetMap[v28].codeOffset;
          if ( v10 >= v4->m_parserPub.codeOffsetMapLen )
            break;
          v26 = v66;
        }
        handle = v76;
        v63 = v10;
      }
      Scr_CodePos_ClearTempMemory(v4);
      goto LABEL_158;
    }
    DiffLineMap = Scr_GetDiffLineMap(v4, name, v17, v25, (unsigned __int8 *)sourceBuf, len, NULL);
    if ( !DiffLineMap )
      break;
    v30 = (__int64)v17;
    v70 = 0;
    v31 = v17;
    if ( v62 > 0 )
    {
      v32 = 0;
      do
      {
        ++v32;
        for ( ; *v31; ++v31 )
          ;
        ++v31;
      }
      while ( v31 - v17 < v62 );
      v70 = v32;
      handle = v76;
    }
    v10 = v63;
    v33 = 0;
    v34 = 0i64;
    v78 = 0i64;
    v35 = v17;
    v74 = v17;
    if ( v63 >= v4->m_parserPub.codeOffsetMapLen )
      goto LABEL_154;
    v36 = (unsigned __int64)v72;
    while ( 1 )
    {
      codeOffsetMap = v4->m_parserPub.codeOffsetMap;
      v38 = codeOffsetMap[v10].codeOffset;
      v39 = (__int64)&codeOffsetMap[v10];
      v72 = (_DWORD *)v39;
      if ( v38 >= v69 )
        break;
      v40 = *(int *)(v39 + 12);
      if ( (__int64)&v17[-v30] <= v40 )
      {
        do
        {
          v2 = *v17 == 0;
          v35 = v17;
          v74 = v17;
          if ( !v2 )
          {
            do
              ++v17;
            while ( *v17 );
          }
          ++v17;
          ++v33;
          ++v34;
        }
        while ( (__int64)&v17[-v30] <= v40 );
        v78 = v34;
      }
      if ( v38 < v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 337, ASSERT_TYPE_ASSERT, "( codeOffsetEntry->codeOffset >= startBufferCodeOffset )", (const char *)&queryFormat, "codeOffsetEntry->codeOffset >= startBufferCodeOffset") )
        __debugbreak();
      if ( v33 - 1 >= v70 )
      {
        LODWORD(request) = v70;
        LODWORD(toLen) = v33 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 339, ASSERT_TYPE_ASSERT, "(unsigned)( fromLine - 1 ) < (unsigned)( fromLineCount )", "fromLine - 1 doesn't index fromLineCount\n\t%i not in [0, %i)", toLen, request) )
          __debugbreak();
      }
      v41 = DiffLineMap[v34 - 1];
      if ( v41 < 0 )
        goto LABEL_149;
      for ( i = (_BYTE *)v36; ; i = j + 1 )
      {
        for ( j = i; *j; ++j )
          ;
        v44 = j + 1;
        if ( !v41 )
          break;
        --v41;
      }
      v45 = v71;
      v46 = *(int *)(v39 + 12) - (_QWORD)v35;
      v47 = scrContexta;
      v48 = (__int64)&i[v46 - v36 + v75];
      if ( v71 < scrContexta->m_parserPub.sourceBufferLookup )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 362, ASSERT_TYPE_ASSERT, "( toInfo >= pScrParserPub->sourceBufferLookup )", (const char *)&queryFormat, "toInfo >= pScrParserPub->sourceBufferLookup") )
          __debugbreak();
        v45 = v71;
      }
      if ( (char *)v45 - (char *)v47->m_parserPub.sourceBufferLookup >= 0x3C00000000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 363, ASSERT_TYPE_ASSERT, "( ( toInfo - pScrParserPub->sourceBufferLookup ) <= 2147483647 )", (const char *)&queryFormat, "( toInfo - pScrParserPub->sourceBufferLookup ) <= INT_MAX") )
        __debugbreak();
      v49 = v71 - v47->m_parserPub.sourceBufferLookup;
      if ( (unsigned __int64)i < v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 366, ASSERT_TYPE_ASSERT, "( toStartPos >= toBuf )", (const char *)&queryFormat, "toStartPos >= toBuf") )
        __debugbreak();
      if ( (__int64)&i[-v36] > 0xFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 367, ASSERT_TYPE_ASSERT, "( ( toStartPos - toBuf ) <= 0xffffffff )", (const char *)&queryFormat, "( toStartPos - toBuf ) <= UINT_MAX") )
        __debugbreak();
      if ( (unsigned __int64)v44 < v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 368, ASSERT_TYPE_ASSERT, "( toEndPos >= toBuf )", (const char *)&queryFormat, "toEndPos >= toBuf") )
        __debugbreak();
      if ( (__int64)&v44[-v36] > 0xFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 369, ASSERT_TYPE_ASSERT, "( ( toEndPos - toBuf ) <= 0xffffffff )", (const char *)&queryFormat, "( toEndPos - toBuf ) <= UINT_MAX") )
        __debugbreak();
      if ( v48 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 370, ASSERT_TYPE_ASSERT, "( newSourcePos >= 0 )", (const char *)&queryFormat, "newSourcePos >= 0") )
        __debugbreak();
      if ( v48 > 0xFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 371, ASSERT_TYPE_ASSERT, "( newSourcePos <= 0xffffffff )", (const char *)&queryFormat, "newSourcePos <= UINT_MAX") )
        __debugbreak();
      v50 = (_DWORD)i - v36;
      v4 = scrContexta;
      ClosestOpcodePosOfType = Scr_GetClosestOpcodePosOfType(scrContexta, v49, v48, v50, (int)v44 - (int)v36, (Scr_SourceType_t)*(_BYTE *)v72, v72[1]);
      v52 = ClosestOpcodePosOfType;
      if ( !ClosestOpcodePosOfType )
      {
        v35 = v74;
LABEL_149:
        Com_Printf(23, "Deleted thread in file '%s', line %d:\n", name, v33);
        Com_Printf(23, "%s\n\n\n", v35);
        goto LABEL_150;
      }
      if ( !Scr_IsInOpcodeMemory(v4, ClosestOpcodePosOfType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 375, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
        __debugbreak();
      v53 = (__int64)v72;
      v54 = *(_BYTE *)v72;
      if ( (*(_BYTE *)v72 & 0x9E) == 0 )
        goto LABEL_140;
      if ( (v54 & 8) == 0 )
      {
        if ( (v54 & 0x96) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 410, ASSERT_TYPE_ASSERT, "( type & SOURCE_TYPE_STACK0 )", (const char *)&queryFormat, "type & SOURCE_TYPE_STACK0") )
          __debugbreak();
        v56 = *(unsigned __int8 *)v52++;
        v57 = v56 - 5;
        while ( 2 )
        {
          switch ( v57 )
          {
            case 0:
            case 18:
            case 36:
            case 48:
            case 67:
            case 96:
            case 105:
            case 133:
              v52 += 3;
              goto LABEL_131;
            case 6:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 121:
            case 122:
            case 123:
            case 124:
            case 125:
            case 126:
              goto LABEL_146;
            case 15:
            case 47:
            case 65:
            case 99:
            case 111:
            case 142:
              goto LABEL_131;
            case 30:
            case 127:
              ++v52;
LABEL_146:
              v52 += 2;
              goto LABEL_147;
            case 46:
            case 74:
            case 91:
            case 112:
            case 145:
            case 147:
              ProgramBufferOffset = GetProgramBufferOffset(v4, v52 + 3);
              v35 = v74;
              v64 = ProgramBufferOffset;
              *(_DWORD *)(v53 + 16) = ProgramBufferOffset;
              goto LABEL_150;
            case 69:
            case 88:
            case 89:
            case 100:
            case 115:
            case 116:
LABEL_147:
              v59 = GetProgramBufferOffset(v4, v52);
              v35 = v74;
              v64 = v59;
              *(_DWORD *)(v53 + 16) = v59;
              goto LABEL_150;
            case 157:
            case 158:
            case 159:
              v56 = (unsigned __int8)*Scr_FindBreakpointInfo(v4, v52 - 1);
              v57 = v56 - 5;
              if ( (unsigned int)(v56 - 5) <= 0x9F )
                continue;
              goto LABEL_138;
            default:
LABEL_138:
              LODWORD(toLen) = v56;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 493, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled opcode %d", toLen) )
                __debugbreak();
              break;
          }
          break;
        }
LABEL_140:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 377, ASSERT_TYPE_ASSERT, "( success )", (const char *)&queryFormat, "success") )
          __debugbreak();
        v35 = v74;
        *(_DWORD *)(v53 + 16) = v64;
        goto LABEL_150;
      }
LABEL_131:
      v55 = GetProgramBufferOffset(v4, v52 + 1);
      v35 = v74;
      v64 = v55;
      *(_DWORD *)(v53 + 16) = v55;
LABEL_150:
      v34 = v78;
      v10 = v63 + 1;
      v30 = v75;
      v63 = v10;
      if ( v10 >= v4->m_parserPub.codeOffsetMapLen )
        goto LABEL_153;
    }
    v10 = v63;
LABEL_153:
    handle = v76;
LABEL_154:
    if ( !v4->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 56, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.readWriteTempHunkUser )", (const char *)&queryFormat, "scrContext.m_varPub.readWriteTempHunkUser") )
      __debugbreak();
LABEL_157:
    Mem_HunkUser_Reset(v4->m_varPub.readWriteTempHunkUser);
LABEL_158:
    if ( (--buffer & 0x80000000) != 0 )
    {
LABEL_159:
      Scr_CodePos_CheckClearTempMemory(v4);
      return 1i64;
    }
  }
  Scr_CodePos_ClearTempMemory(v4);
  return 0i64;
}

/*
==============
Scr_GetDiffLineMap
==============
*/
int *Scr_GetDiffLineMap(scrContext_t *scrContext, const char *filename, unsigned __int8 *fromBuf, int fromLen, unsigned __int8 *toBuf, int toLen, const _ScrDiffFiles *request)
{
  __int64 v7; 
  int v13; 
  unsigned __int8 *v14; 
  int v15; 
  void *v16; 
  __int128 v18; 
  _DebugMessage message; 
  _ScrDiffFiles v20; 

  v7 = fromLen;
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 824, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
      __debugbreak();
    _DebugMessage::_DebugMessage(&message);
    _ScrDiffFiles::_ScrDiffFiles(&v20);
    *(_QWORD *)&v18 = v7;
    message.scrreadfile = (const _ScrReadFile *)&v20;
    *((_QWORD *)&v18 + 1) = fromBuf;
    __asm { vmovups xmm0, [rsp+0D8h+var_A8] }
    *(_QWORD *)&v18 = toLen;
    *((_QWORD *)&v18 + 1) = toBuf;
    __asm
    {
      vmovups xmmword ptr [rsp+0D8h+var_70.frombuf.len], xmm0
      vmovups xmm0, [rsp+0D8h+var_A8]
      vmovups xmmword ptr [rsp+0D8h+var_70.tobuf.len], xmm0
    }
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_DIFF_FILES;
    v20.filename = filename;
    v20.has_frombuf = 1;
    v20.has_tobuf = 1;
    Sys_WriteDebugSocketMessage(scrContext, &message);
    v13 = 0;
    v14 = fromBuf;
    if ( v7 > 0 )
    {
      do
      {
        ++v13;
        for ( ; *v14; ++v14 )
          ;
        ++v14;
      }
      while ( v14 - fromBuf < v7 );
    }
    v15 = 4 * v13;
    if ( !scrContext->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 47, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.readWriteTempHunkUser )", (const char *)&queryFormat, "scrContext.m_varPub.readWriteTempHunkUser") )
      __debugbreak();
    v16 = Mem_HunkUser_AllocInternal(scrContext->m_varPub.readWriteTempHunkUser, v15 + 4i64, 0x10ui64, "Scr_CodePos_AllocTempMemory");
    memset_0(v16, 0, v15 + 4i64);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 842, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "todo") )
      __debugbreak();
    if ( !scrContext->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 56, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.readWriteTempHunkUser )", (const char *)&queryFormat, "scrContext.m_varPub.readWriteTempHunkUser") )
      __debugbreak();
    Mem_HunkUser_Reset(scrContext->m_varPub.readWriteTempHunkUser);
  }
  return 0i64;
}

/*
==============
Scr_GetOpcodeTypeInfo
==============
*/
__int64 Scr_GetOpcodeTypeInfo(const scrContext_t *scrContext, Scr_SourceType_t type, const char *codePos, int *codeOffset, int *sourceIndex)
{
  __int64 result; 
  int v9; 
  const char *v10; 
  int v11; 
  __int64 v12; 

  if ( (type & 0x9E) != 0 )
  {
    if ( (type & 8) != 0 )
    {
      *codeOffset = GetProgramBufferOffset(scrContext, codePos + 1);
      result = 1i64;
      *sourceIndex = 1;
      return result;
    }
    if ( (type & 0x96) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 410, ASSERT_TYPE_ASSERT, "( type & SOURCE_TYPE_STACK0 )", (const char *)&queryFormat, "type & SOURCE_TYPE_STACK0") )
      __debugbreak();
    v9 = *(unsigned __int8 *)codePos;
    v10 = codePos + 1;
    v11 = v9 - 5;
    while ( 2 )
    {
      switch ( v11 )
      {
        case 0:
        case 18:
        case 36:
        case 48:
        case 67:
        case 96:
        case 105:
        case 133:
          v10 += 3;
          goto $LN16_50;
        case 6:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 121:
        case 122:
        case 123:
        case 124:
        case 125:
        case 126:
          goto $LN21_54;
        case 15:
        case 47:
        case 65:
        case 99:
        case 111:
        case 142:
$LN16_50:
          ++v10;
          goto $LN5_48;
        case 30:
        case 127:
          ++v10;
$LN21_54:
          v10 += 2;
          goto $LN5_48;
        case 46:
        case 74:
        case 91:
        case 112:
        case 145:
        case 147:
          v10 += 3;
          goto $LN5_48;
        case 69:
        case 88:
        case 89:
        case 100:
        case 115:
        case 116:
$LN5_48:
          *codeOffset = GetProgramBufferOffset(scrContext, v10);
          *sourceIndex = 0;
          return 1i64;
        case 157:
        case 158:
        case 159:
          v9 = (unsigned __int8)*Scr_FindBreakpointInfo(scrContext, v10 - 1);
          v11 = v9 - 5;
          if ( (unsigned int)(v9 - 5) <= 0x9F )
            continue;
          goto LABEL_10;
        default:
LABEL_10:
          LODWORD(v12) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 493, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled opcode %d", v12) )
            __debugbreak();
          break;
      }
      break;
    }
  }
  return 0i64;
}

/*
==============
Scr_LoadCanonicalStrings
==============
*/
void Scr_LoadCanonicalStrings(const scrContext_t *scrContext, MemCardFileHandle fileHandle)
{
  CanonicalStringData *canonicalStringData; 
  unsigned int buffer; 
  unsigned int v6; 

  if ( scrContext->m_Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 83, ASSERT_TYPE_ASSERT, "( scrContext.m_Instance == SCRIPTINSTANCE_SERVER )", (const char *)&queryFormat, "scrContext.m_Instance == SCRIPTINSTANCE_SERVER") )
    __debugbreak();
  if ( scrContext->m_varPub.developer )
  {
    if ( g_canonicalStrCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 88, ASSERT_TYPE_ASSERT, "( !g_canonicalStrCount )", (const char *)&queryFormat, "!g_canonicalStrCount") )
      __debugbreak();
    if ( !g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 89, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData != nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData != nullptr") )
      __debugbreak();
    if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_codepos.cpp", 90, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
      __debugbreak();
    canonicalStringData = g_scrCanonicalStringPub.canonicalStringData;
    ReadFromDevice(&buffer, 4ui64, fileHandle);
    if ( buffer <= 0x64000 )
    {
      ReadFromDevice(&v6, 4ui64, fileHandle);
      if ( v6 <= 0x1C000 )
      {
        if ( v6 == g_scrCanonicalStringPub.canonicalStringLimit )
        {
          g_scrCanonicalStringPub.canonicalStringBufferSize = buffer;
          ReadFromDevice(canonicalStringData->stringBuffer, buffer, fileHandle);
          ReadFromDevice(canonicalStringData, 4i64 * g_scrCanonicalStringPub.canonicalStringLimit, fileHandle);
        }
        else
        {
          Com_PrintError(15, "Invalid canonicalStringOffsetCount (%d, expected %d). Save format may have changed, replace save game.\n", v6, g_scrCanonicalStringPub.canonicalStringLimit);
        }
      }
      else
      {
        Com_PrintError(15, "Could not load canonical string offets, too large. %d > %d \n", v6, 114688i64);
      }
    }
    else
    {
      Com_PrintError(15, "Could not load canonical string buffer, too large. %d > %d \n", buffer, 409600i64);
    }
  }
}

/*
==============
Scr_SetUseCodePosMap
==============
*/
void Scr_SetUseCodePosMap(scrContext_t *scrContext, int useCodePosMap)
{
  scrContext->m_parserPub.useCodeOffsetMap = useCodePosMap && scrContext->m_parserPub.codeOffsetMap;
}

/*
==============
Scr_SkipCanonicalStrings
==============
*/
void Scr_SkipCanonicalStrings(MemCardFileHandle fileHandle)
{
  unsigned int v2; 
  unsigned int buffer; 

  ReadFromDevice(&buffer, 4ui64, fileHandle);
  ReadFromDevice(&v2, 4ui64, fileHandle);
  if ( v2 - 1 > 0x6FFE )
    Com_PrintError(15, "Invalid canonicalStringOffsetCount (%d). Save format may have changed, replace save game.\n", v2);
  ReadFromDevice(NULL, buffer, fileHandle);
  ReadFromDevice(NULL, 4i64 * v2, fileHandle);
}

