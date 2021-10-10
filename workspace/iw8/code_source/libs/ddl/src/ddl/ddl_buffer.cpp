/*
==============
DDL::DDL_Buffer_WriteBits64
==============
*/

bool __fastcall DDL::DDL_Buffer_WriteBits64(DDLContext *ddlContext, int offset, unsigned __int64 val)
{
  return ?DDL_Buffer_WriteBits64@DDL@@YA_NPEAUDDLContext@@H_K@Z(ddlContext, offset, val);
}

/*
==============
DDL::DDL_Buffer_LocallyUnObfuscateRangeIntoDest
==============
*/

void __fastcall DDL::DDL_Buffer_LocallyUnObfuscateRangeIntoDest(unsigned __int8 *dest, DDLContext *ddlContext, const unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  ?DDL_Buffer_LocallyUnObfuscateRangeIntoDest@DDL@@YAXPEAEPEAUDDLContext@@PEBEI2I@Z(dest, ddlContext, start, size, rangeStart, rangeSize);
}

/*
==============
DDL::DDL_Buffer_LocallyUnObfuscate
==============
*/

void __fastcall DDL::DDL_Buffer_LocallyUnObfuscate(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size)
{
  ?DDL_Buffer_LocallyUnObfuscate@DDL@@YAXPEAUDDLContext@@PEAEI@Z(ddlContext, start, size);
}

/*
==============
DDL::DDL_Buffer_ReadBits64
==============
*/

unsigned __int64 __fastcall DDL::DDL_Buffer_ReadBits64(const DDLContext *ddlContext, int offset)
{
  return ?DDL_Buffer_ReadBits64@DDL@@YA_KPEBUDDLContext@@H@Z(ddlContext, offset);
}

/*
==============
DDL::DDL_Buffer_WriteBits16
==============
*/

bool __fastcall DDL::DDL_Buffer_WriteBits16(DDLContext *ddlContext, int offset, unsigned __int16 val)
{
  return ?DDL_Buffer_WriteBits16@DDL@@YA_NPEAUDDLContext@@HG@Z(ddlContext, offset, val);
}

/*
==============
DDL::DDL_Buffer_LocallyObfuscate
==============
*/

void __fastcall DDL::DDL_Buffer_LocallyObfuscate(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned int randomInt)
{
  ?DDL_Buffer_LocallyObfuscate@DDL@@YAXPEAUDDLContext@@PEAEII@Z(ddlContext, start, size, randomInt);
}

/*
==============
DDL::DDL_Buffer_WriteBits8
==============
*/

bool __fastcall DDL::DDL_Buffer_WriteBits8(DDLContext *ddlContext, int offset, unsigned __int8 val)
{
  return ?DDL_Buffer_WriteBits8@DDL@@YA_NPEAUDDLContext@@HE@Z(ddlContext, offset, val);
}

/*
==============
DDL::DDL_Buffer_ReadHeaderBits
==============
*/

unsigned __int64 __fastcall DDL::DDL_Buffer_ReadHeaderBits(const void *buff, int offset, int bitSize)
{
  return ?DDL_Buffer_ReadHeaderBits@DDL@@YA_KPEBXHH@Z(buff, offset, bitSize);
}

/*
==============
DDL::DDL_Buffer_ReadBits16
==============
*/

unsigned __int16 __fastcall DDL::DDL_Buffer_ReadBits16(const DDLContext *ddlContext, int offset)
{
  return ?DDL_Buffer_ReadBits16@DDL@@YAGPEBUDDLContext@@H@Z(ddlContext, offset);
}

/*
==============
DDL::DDL_Buffer_CreateContext
==============
*/

bool __fastcall DDL::DDL_Buffer_CreateContext(void *buff, int len, const DDLDef *ddlDef, DDLContext *const ddlContext, void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  return ?DDL_Buffer_CreateContext@DDL@@YA_NPEAXHPEBUDDLDef@@QEAUDDLContext@@P6AXPEBU3@IIW4DDLAccessOp@@@Z0@Z(buff, len, ddlDef, ddlContext, accessCB, userData);
}

/*
==============
DDL::DDL_Buffer_ReadBits8
==============
*/

unsigned __int8 __fastcall DDL::DDL_Buffer_ReadBits8(const DDLContext *ddlContext, int offset)
{
  return ?DDL_Buffer_ReadBits8@DDL@@YAEPEBUDDLContext@@H@Z(ddlContext, offset);
}

/*
==============
DDL::DDL_Buffer_DirtySet
==============
*/

void __fastcall DDL::DDL_Buffer_DirtySet(const DDLContext *ddlContext, int startBit, int bitSize)
{
  ?DDL_Buffer_DirtySet@DDL@@YAXPEBUDDLContext@@HH@Z(ddlContext, startBit, bitSize);
}

/*
==============
DDL::DDL_Buffer_LocallyObfuscateRange
==============
*/

void __fastcall DDL::DDL_Buffer_LocallyObfuscateRange(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  ?DDL_Buffer_LocallyObfuscateRange@DDL@@YAXPEAUDDLContext@@PEAEIPEBEI@Z(ddlContext, start, size, rangeStart, rangeSize);
}

/*
==============
DDL::DDL_Buffer_ResetContext
==============
*/

bool __fastcall DDL::DDL_Buffer_ResetContext(void *buff, int len, const DDLDef *ddlDef, DDLContext *const ddlContext, void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  return ?DDL_Buffer_ResetContext@DDL@@YA_NPEAXHPEBUDDLDef@@QEAUDDLContext@@P6AXPEBU3@IIW4DDLAccessOp@@@Z0@Z(buff, len, ddlDef, ddlContext, accessCB, userData);
}

/*
==============
DDL::DDL_Buffer_LocallyUnObfuscateRange
==============
*/

void __fastcall DDL::DDL_Buffer_LocallyUnObfuscateRange(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  ?DDL_Buffer_LocallyUnObfuscateRange@DDL@@YAXPEAUDDLContext@@PEAEIPEBEI@Z(ddlContext, start, size, rangeStart, rangeSize);
}

/*
==============
DDL::DDL_Buffer_ReadBits
==============
*/

unsigned int __fastcall DDL::DDL_Buffer_ReadBits(const DDLContext *ddlContext, int offset, int bitSize, int limitSize)
{
  return ?DDL_Buffer_ReadBits@DDL@@YAIPEBUDDLContext@@HHH@Z(ddlContext, offset, bitSize, limitSize);
}

/*
==============
DDL::DDL_Buffer_WriteHeaderBits
==============
*/

bool __fastcall DDL::DDL_Buffer_WriteHeaderBits(const DDLContext *ddlContext, int offset, unsigned __int64 val, int bitSize, bool skipDirty)
{
  return ?DDL_Buffer_WriteHeaderBits@DDL@@YA_NPEBUDDLContext@@H_KH_N@Z(ddlContext, offset, val, bitSize, skipDirty);
}

/*
==============
DDL::DDL_Buffer_WriteBits
==============
*/

bool __fastcall DDL::DDL_Buffer_WriteBits(DDLContext *ddlContext, int offset, unsigned int val, int bitSize, int limitSize)
{
  return ?DDL_Buffer_WriteBits@DDL@@YA_NPEAUDDLContext@@HIHH@Z(ddlContext, offset, val, bitSize, limitSize);
}

/*
==============
DDL::DDL_Buffer_WriteBitsRaw
==============
*/

bool __fastcall DDL::DDL_Buffer_WriteBitsRaw(DDLContext *ddlContext, int offset, const unsigned __int8 *data, int bitSize, int limitSize)
{
  return ?DDL_Buffer_WriteBitsRaw@DDL@@YA_NPEAUDDLContext@@HPEBEHH@Z(ddlContext, offset, data, bitSize, limitSize);
}

/*
==============
DDL::DDL_Buffer_CommonObfuscateRange
==============
*/
void DDL::DDL_Buffer_CommonObfuscateRange(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize, const bool obfuscate)
{
  const unsigned __int8 *buff; 
  unsigned __int8 *v10; 
  int BitSize; 
  int v12; 
  __int64 v13; 
  int v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  unsigned __int8 *v17; 
  unsigned __int8 *v18; 

  if ( ddlContext->obfuscated )
  {
    buff = (const unsigned __int8 *)ddlContext->buff;
    if ( start == ddlContext->buff )
    {
      v10 = (unsigned __int8 *)&buff[ddlContext->len];
      if ( &start[size] == v10 && rangeStart >= buff && &rangeStart[rangeSize] <= v10 )
      {
        BitSize = DDL::DDL_Header_GetBitSize(ddlContext->def);
        v12 = (_DWORD)rangeStart - (_DWORD)buff;
        v13 = BitSize / 8;
        v14 = 0;
        v15 = (unsigned __int64)&buff[v13];
        if ( (unsigned __int64)rangeStart < v15 )
        {
          v14 = v15 - (_DWORD)rangeStart;
          v12 = v15 - (_DWORD)buff;
        }
        if ( (int)(rangeSize - v14) > 0 )
        {
          v16 = rangeSize - v14;
          if ( obfuscate )
          {
            v17 = &start[v12];
            do
            {
              *v17 ^= ((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v17) * ((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v17) + 6)) ^ ((unsigned __int16)((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v17) * ((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v17) + 6)) >> 8);
              ++v17;
              --v16;
            }
            while ( v16 );
          }
          else
          {
            v18 = &start[v12];
            do
            {
              *v18 ^= (unsigned __int8)((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v18) * ((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v18) + 6)) ^ ((unsigned __int16)((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v18) * ((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v18) + 6)) >> 8);
              ++v18;
              --v16;
            }
            while ( v16 );
          }
        }
      }
    }
  }
}

/*
==============
DDL::DDL_Buffer_CreateContext
==============
*/
bool DDL::DDL_Buffer_CreateContext(void *buff, int len, const DDLDef *ddlDef, DDLContext *const ddlContext, void (*accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  const DDLDef *Def; 
  DDLConfigParams *Config; 
  DDLHeader result; 

  if ( !buff )
    return 0;
  if ( !ddlContext )
    return 0;
  if ( len < ddlDef->byteSize )
    return 0;
  ddlContext->accessCB = accessCB;
  ddlContext->len = len;
  ddlContext->buff = buff;
  ddlContext->userData = userData;
  ddlContext->obfuscated = 0;
  ddlContext->randomInt = 0;
  result = *DDL::DDL_Header_Get(&result, buff, ddlDef->minimalHeader);
  __asm { vextractf128 xmm0, ymm0, 1 }
  if ( !(_WORD)_XMM0 || !result.isMinimal && (result.magic != 29558 || result.buildId != 7 || !result.guid) )
    return 0;
  if ( (_WORD)_XMM0 == ddlDef->version && (result.isMinimal || result.guid == ddlDef->guid) )
  {
    ddlContext->def = ddlDef;
    return 1;
  }
  Def = DDL_GetDef(ddlDef->name, (unsigned __int16)_XMM0);
  ddlContext->def = Def;
  return Def && (Config = DDL_GetConfig()) != NULL && DDL::DDL_Convert(ddlContext, ddlDef, Config->m_scratchBuff, Config->m_scratchBuffSize);
}

/*
==============
DDL::DDL_Buffer_DirtySet
==============
*/
void DDL::DDL_Buffer_DirtySet(const DDLContext *ddlContext, int startBit, int bitSize)
{
  void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 
  DDLConfigParams *Config; 
  void (__fastcall *f_accessCallback)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 

  DDL::DDL_Header_FlagSet(ddlContext, DDL_FLAG_DIRTY, 1);
  accessCB = ddlContext->accessCB;
  if ( accessCB )
    accessCB(ddlContext, startBit, bitSize, DDL_ACCESS_WRITE);
  Config = DDL_GetConfig();
  if ( Config )
  {
    f_accessCallback = Config->f_accessCallback;
    if ( f_accessCallback )
      f_accessCallback(ddlContext, startBit, bitSize, DDL_ACCESS_WRITE);
  }
}

/*
==============
DDL::DDL_Buffer_LocallyObfuscate
==============
*/
void DDL::DDL_Buffer_LocallyObfuscate(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned int randomInt)
{
  const DDLDef *def; 
  int v8; 
  int v9; 
  unsigned __int8 *v10; 
  __int64 v11; 

  if ( !ddlContext->obfuscated && start == ddlContext->buff && &start[size] == (unsigned __int8 *)ddlContext->buff + ddlContext->len )
  {
    def = ddlContext->def;
    ddlContext->randomInt = randomInt;
    v8 = DDL::DDL_Header_GetBitSize(def) / 8;
    v9 = size - v8;
    if ( v9 > 0 )
    {
      v10 = &start[v8];
      v11 = (unsigned int)v9;
      do
      {
        *v10 ^= (((unsigned __int8)v10 ^ LOBYTE(ddlContext->randomInt)) * (((unsigned __int8)v10 ^ LOBYTE(ddlContext->randomInt)) + 6)) ^ ((unsigned __int16)(((unsigned __int16)v10 ^ LOWORD(ddlContext->randomInt)) * (((unsigned __int16)v10 ^ LOWORD(ddlContext->randomInt)) + 6)) >> 8);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    ddlContext->obfuscated = 1;
  }
}

/*
==============
DDL::DDL_Buffer_LocallyObfuscateRange
==============
*/
void DDL::DDL_Buffer_LocallyObfuscateRange(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  DDL::DDL_Buffer_CommonObfuscateRange(ddlContext, start, size, rangeStart, rangeSize, 1);
}

/*
==============
DDL::DDL_Buffer_LocallyUnObfuscate
==============
*/
void DDL::DDL_Buffer_LocallyUnObfuscate(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size)
{
  int v6; 
  int v7; 
  unsigned __int8 *v8; 
  __int64 v9; 

  if ( ddlContext->obfuscated && start == ddlContext->buff && &start[size] == (unsigned __int8 *)ddlContext->buff + ddlContext->len )
  {
    v6 = DDL::DDL_Header_GetBitSize(ddlContext->def) / 8;
    v7 = size - v6;
    if ( v7 > 0 )
    {
      v8 = &start[v6];
      v9 = (unsigned int)v7;
      do
      {
        *v8 ^= (((unsigned __int8)v8 ^ LOBYTE(ddlContext->randomInt)) * (((unsigned __int8)v8 ^ LOBYTE(ddlContext->randomInt)) + 6)) ^ ((unsigned __int16)(((unsigned __int16)v8 ^ LOWORD(ddlContext->randomInt)) * (((unsigned __int16)v8 ^ LOWORD(ddlContext->randomInt)) + 6)) >> 8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    ddlContext->obfuscated = 0;
  }
}

/*
==============
DDL::DDL_Buffer_LocallyUnObfuscateRange
==============
*/
void DDL::DDL_Buffer_LocallyUnObfuscateRange(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  DDL::DDL_Buffer_CommonObfuscateRange(ddlContext, start, size, rangeStart, rangeSize, 0);
}

/*
==============
DDL::DDL_Buffer_LocallyUnObfuscateRangeIntoDest
==============
*/
void DDL::DDL_Buffer_LocallyUnObfuscateRangeIntoDest(unsigned __int8 *dest, DDLContext *ddlContext, const unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  const unsigned __int8 *buff; 
  const unsigned __int8 *v10; 
  int v11; 
  unsigned __int64 v12; 
  int v13; 
  unsigned __int8 *v14; 
  const unsigned __int8 *v15; 
  __int64 v16; 
  unsigned int v17; 
  char v18; 

  if ( ddlContext->obfuscated )
  {
    buff = (const unsigned __int8 *)ddlContext->buff;
    if ( start == ddlContext->buff )
    {
      v10 = &buff[ddlContext->len];
      if ( &start[size] == v10 && rangeStart >= buff && &rangeStart[rangeSize] <= v10 )
      {
        v11 = (_DWORD)rangeStart - (_DWORD)buff;
        v12 = (unsigned __int64)&buff[DDL::DDL_Header_GetBitSize(ddlContext->def) / 8];
        v13 = 0;
        if ( (unsigned __int64)rangeStart < v12 )
        {
          v13 = v12 - (_DWORD)rangeStart;
          memcpy_0(dest, &start[v11], (unsigned int)(v12 - (_DWORD)rangeStart));
          v11 += v13;
        }
        if ( (int)(rangeSize - v13) > 0 )
        {
          v14 = &dest[v13];
          v15 = &start[v11];
          v16 = rangeSize - v13;
          do
          {
            ++v14;
            v17 = ((unsigned int)v15 ^ ddlContext->randomInt) * (((unsigned int)v15 ^ ddlContext->randomInt) + 6);
            v18 = *v15 ^ ((unsigned __int16)(((unsigned __int16)v15 ^ LOWORD(ddlContext->randomInt)) * (((unsigned __int16)v15 ^ LOWORD(ddlContext->randomInt)) + 6)) >> 8);
            ++v15;
            *(v14 - 1) = v17 ^ v18;
            --v16;
          }
          while ( v16 );
        }
      }
    }
  }
}

/*
==============
DDL::DDL_Buffer_ReadBits16
==============
*/
unsigned __int64 DDL::DDL_Buffer_ReadBits16(const DDLContext *ddlContext, int offset)
{
  return DDL::ReadData(ddlContext, (unsigned __int8 *)ddlContext->buff, offset + ddlContext->def->headerBitSize, 16, 16);
}

/*
==============
DDL::DDL_Buffer_ReadBits64
==============
*/
unsigned __int64 DDL::DDL_Buffer_ReadBits64(const DDLContext *ddlContext, int offset)
{
  return DDL::ReadData(ddlContext, (unsigned __int8 *)ddlContext->buff, offset + ddlContext->def->headerBitSize, 64, 64);
}

/*
==============
DDL::DDL_Buffer_ReadBits8
==============
*/
unsigned __int64 DDL::DDL_Buffer_ReadBits8(const DDLContext *ddlContext, int offset)
{
  return DDL::ReadData(ddlContext, (unsigned __int8 *)ddlContext->buff, offset + ddlContext->def->headerBitSize, 8, 8);
}

/*
==============
DDL::DDL_Buffer_ReadBits
==============
*/
unsigned __int64 DDL::DDL_Buffer_ReadBits(const DDLContext *ddlContext, int offset, int bitSize, int limitSize)
{
  return DDL::ReadData(ddlContext, (unsigned __int8 *)ddlContext->buff, offset + ddlContext->def->headerBitSize, bitSize, limitSize);
}

/*
==============
DDL::DDL_Buffer_ReadHeaderBits
==============
*/
unsigned __int64 DDL::DDL_Buffer_ReadHeaderBits(const void *buff, int offset, int bitSize)
{
  return DDL::ReadData(NULL, (unsigned __int8 *)buff, offset, bitSize, bitSize);
}

/*
==============
DDL::DDL_Buffer_ResetContext
==============
*/
char DDL::DDL_Buffer_ResetContext(void *buff, int len, const DDLDef *ddlDef, DDLContext *const ddlContext, void (*accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  if ( !buff || !ddlContext || len < ddlDef->byteSize )
    return 0;
  memset_0(buff, 0, len);
  ddlContext->accessCB = accessCB;
  ddlContext->userData = userData;
  ddlContext->buff = buff;
  ddlContext->len = len;
  ddlContext->def = ddlDef;
  ddlContext->obfuscated = 0;
  ddlContext->randomInt = 0;
  DDL::DDL_Header_Init(ddlDef, ddlContext);
  return 1;
}

/*
==============
DDL::DDL_Buffer_WriteBits16
==============
*/
bool DDL::DDL_Buffer_WriteBits16(DDLContext *ddlContext, int offset, unsigned __int16 val)
{
  return DDL::WriteBitsInternal(ddlContext, offset, 16, 16, val, 0, 0);
}

/*
==============
DDL::DDL_Buffer_WriteBits64
==============
*/
bool DDL::DDL_Buffer_WriteBits64(DDLContext *ddlContext, int offset, unsigned __int64 val)
{
  return DDL::WriteBitsInternal(ddlContext, offset, 64, 64, val, 0, 0);
}

/*
==============
DDL::DDL_Buffer_WriteBits8
==============
*/
bool DDL::DDL_Buffer_WriteBits8(DDLContext *ddlContext, int offset, unsigned __int8 val)
{
  return DDL::WriteBitsInternal(ddlContext, offset, 8, 8, val, 0, 0);
}

/*
==============
DDL::DDL_Buffer_WriteBits
==============
*/
bool DDL::DDL_Buffer_WriteBits(DDLContext *ddlContext, int offset, unsigned int val, int bitSize, int limitSize)
{
  return DDL::WriteBitsInternal(ddlContext, offset, bitSize, limitSize, val, 0, 0);
}

/*
==============
DDL::DDL_Buffer_WriteBitsRaw
==============
*/
bool DDL::DDL_Buffer_WriteBitsRaw(DDLContext *ddlContext, int offset, const unsigned __int8 *data, int bitSize, int limitSize)
{
  return DDL::WriteBitsRawInternal(ddlContext, offset, bitSize, limitSize, data);
}

/*
==============
DDL::DDL_Buffer_WriteHeaderBits
==============
*/
bool DDL::DDL_Buffer_WriteHeaderBits(const DDLContext *ddlContext, int offset, unsigned __int64 val, int bitSize, bool skipDirty)
{
  return DDL::WriteBitsInternal(ddlContext, offset, bitSize, bitSize, val, 1, skipDirty);
}

/*
==============
DDL::ReadData
==============
*/
unsigned __int64 DDL::ReadData(const DDLContext *ddlContext, unsigned __int8 *data, int bitOffset, int bitSize, int limitSize)
{
  int v5; 
  void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 
  DDLConfigParams *Config; 
  void (__fastcall *f_accessCallback)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 
  unsigned __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned int randomInt; 
  __int64 i; 
  __int64 v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  unsigned __int8 *v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  unsigned __int8 *v26; 
  __int64 v27; 
  __int64 v28; 
  char v29; 
  unsigned __int8 *v30; 
  __int64 v31; 
  unsigned __int64 v33; 

  v5 = bitSize;
  if ( ddlContext )
  {
    accessCB = ddlContext->accessCB;
    if ( accessCB )
      accessCB(ddlContext, bitOffset, bitSize, DDL_ACCESS_READ);
    Config = DDL_GetConfig();
    if ( Config )
    {
      f_accessCallback = Config->f_accessCallback;
      if ( f_accessCallback )
        f_accessCallback(ddlContext, bitOffset, v5, DDL_ACCESS_READ);
    }
  }
  v12 = 0i64;
  v33 = 0i64;
  v13 = bitOffset / 8;
  v14 = bitOffset % 8;
  if ( bitOffset % 8 || (v15 = v5 / 8, ((((v5 >> 31) & 7) + v5) & 7) != ((v5 >> 31) & 7)) )
  {
    LOBYTE(v19) = 0;
    v20 = 0;
    v21 = v13;
    if ( ddlContext )
    {
      if ( ddlContext->obfuscated )
      {
        v20 = v5 / 8 + 1;
        if ( v20 > 0 )
        {
          v22 = &data[v13];
          v23 = (unsigned int)v20;
          do
          {
            *v22 ^= (unsigned __int8)(((unsigned __int8)v22 ^ LOBYTE(ddlContext->randomInt)) * (((unsigned __int8)v22 ^ LOBYTE(ddlContext->randomInt)) + 6)) ^ ((unsigned __int16)(((unsigned __int16)v22 ^ LOWORD(ddlContext->randomInt)) * (((unsigned __int16)v22 ^ LOWORD(ddlContext->randomInt)) + 6)) >> 8);
            ++v22;
            --v23;
          }
          while ( v23 );
        }
      }
    }
    if ( v14 )
    {
      v19 = v5;
      if ( v5 >= 8 - v14 )
        v19 = 8 - v14;
      v5 -= v19;
      v12 = ((1 << v19) - 1) & ((unsigned __int64)data[v13++] >> v14);
    }
    v24 = v5 % 8;
    v25 = (v5 - v5 % 8) / 8;
    if ( v25 > 0 )
    {
      v26 = &data[v13];
      v27 = (unsigned int)v25;
      v13 += v25;
      do
      {
        v28 = *v26++;
        v29 = v19;
        LOBYTE(v19) = v19 + 8;
        v12 |= v28 << v29;
        --v27;
      }
      while ( v27 );
    }
    if ( v24 )
      v12 |= (((1 << v24) - 1) & (unsigned __int64)data[v13]) << v19;
    if ( ddlContext && ddlContext->obfuscated && v20 > 0 )
    {
      v30 = &data[v21];
      v31 = (unsigned int)v20;
      do
      {
        *v30 ^= (unsigned __int8)(((unsigned __int8)v30 ^ LOBYTE(ddlContext->randomInt)) * (((unsigned __int8)v30 ^ LOBYTE(ddlContext->randomInt)) + 6)) ^ ((unsigned __int16)(((unsigned __int16)v30 ^ LOWORD(ddlContext->randomInt)) * (((unsigned __int16)v30 ^ LOWORD(ddlContext->randomInt)) + 6)) >> 8);
        ++v30;
        --v31;
      }
      while ( v31 );
    }
  }
  else
  {
    if ( ddlContext && ddlContext->obfuscated )
    {
      if ( v15 > 0 )
      {
        randomInt = ddlContext->randomInt;
        for ( i = 0i64; i < v15; *((_BYTE *)&v33 + i++) = data[v18] ^ ((((_BYTE)data + v18) ^ randomInt) * ((((_BYTE)data + v18) ^ randomInt) + 6)) ^ ((unsigned __int16)((((_WORD)data + v18) ^ randomInt) * ((((_WORD)data + v18) ^ randomInt) + 6)) >> 8) )
        {
          v18 = v13 + (__int64)(int)v12;
          LODWORD(v12) = v12 + 1;
        }
        v12 = v33;
      }
    }
    else
    {
      switch ( v15 )
      {
        case 1:
          LOBYTE(v33) = data[v13];
          v12 = v33;
          break;
        case 2:
          LOWORD(v33) = *(_WORD *)&data[v13];
          v12 = v33;
          break;
        case 3:
          LOWORD(v33) = *(_WORD *)&data[v13];
          BYTE2(v33) = data[v13 + 2];
          v12 = v33;
          break;
        case 4:
          LODWORD(v33) = *(_DWORD *)&data[v13];
          v12 = v33;
          break;
        case 5:
          LODWORD(v33) = *(_DWORD *)&data[v13];
          BYTE4(v33) = data[v13 + 4];
          v12 = v33;
          break;
        case 6:
          LODWORD(v33) = *(_DWORD *)&data[v13];
          WORD2(v33) = *(_WORD *)&data[v13 + 4];
          v12 = v33;
          break;
        case 7:
          LODWORD(v33) = *(_DWORD *)&data[v13];
          WORD2(v33) = *(_WORD *)&data[v13 + 4];
          BYTE6(v33) = data[v13 + 6];
          v12 = v33;
          break;
        case 8:
          v12 = *(_QWORD *)&data[v13];
          break;
        default:
          break;
      }
    }
    if ( limitSize > 0 && limitSize < v5 )
      v12 &= (1i64 << limitSize) - 1;
  }
  return v12;
}

/*
==============
DDL::WriteBitsInternal
==============
*/
char DDL::WriteBitsInternal(const DDLContext *ddlContext, int offset, int bitSize, int limitSize, unsigned __int64 val, bool headerBits, bool skipDirty)
{
  bool v7; 
  bool v8; 
  _BYTE *buff; 
  __int64 v11; 
  int v12; 
  int v14; 
  int v15; 
  unsigned __int64 v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  _BYTE *v20; 
  _BYTE *v21; 
  size_t v22; 
  __int64 v23; 
  _BYTE *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned __int64 v28; 
  int v29; 
  int v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  int v34; 
  _BYTE *v35; 
  __int64 v36; 
  void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 
  DDLConfigParams *Config; 
  void (__fastcall *f_accessCallback)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 
  __int64 v41; 

  v7 = headerBits;
  v8 = 0;
  buff = ddlContext->buff;
  v11 = (unsigned int)bitSize;
  v12 = offset;
  if ( !headerBits )
    v12 = ddlContext->def->headerBitSize + offset;
  v14 = v12 / 8;
  v15 = v12 % 8;
  if ( limitSize <= 0 || limitSize >= bitSize )
  {
    v16 = val;
  }
  else
  {
    v16 = ((1i64 << limitSize) - 1) & val;
    val = v16;
  }
  v17 = 0;
  if ( v15 % 8 || (v18 = bitSize / 8, bitSize % 8) )
  {
    if ( !headerBits && ddlContext->obfuscated )
    {
      v17 = bitSize / 8 + 1;
      if ( v17 > 0 )
      {
        v24 = &buff[v14];
        v25 = (unsigned int)v17;
        do
        {
          *v24 ^= (unsigned __int8)((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v24) * ((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v24) + 6)) ^ ((unsigned __int16)((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v24) * ((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v24) + 6)) >> 8);
          ++v24;
          --v25;
        }
        while ( v25 );
      }
    }
    if ( (int)v11 > 0 )
    {
      v26 = v14;
      v27 = 1i64;
      v41 = v11;
      do
      {
        v28 = v16 & v27;
        if ( !v8 )
          v8 = (v28 == 0) != (((unsigned __int8)(1 << v15) & buff[v26]) == 0);
        v29 = (unsigned __int8)buff[v26];
        if ( v28 )
          v30 = v29 | (1 << v15);
        else
          v30 = v29 & ~(1 << v15);
        buff[v26] = v30;
        v31 = v15 + 1;
        v32 = v26 + 1;
        if ( v15 != 7 )
          v32 = v26;
        v27 = __ROL8__(v27, 1);
        v26 = v32;
        v33 = v14 + 1;
        if ( v15 != 7 )
          v33 = v14;
        v14 = v33;
        v34 = v15;
        v15 = 0;
        if ( v34 != 7 )
          v15 = v31;
        --v41;
      }
      while ( v41 );
      v7 = headerBits;
    }
    if ( !v7 && ddlContext->obfuscated && v17 > 0 )
    {
      v35 = &buff[v12 / 8];
      v36 = (unsigned int)v17;
      do
      {
        *v35 ^= (unsigned __int8)((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v35) * ((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v35) + 6)) ^ ((unsigned __int16)((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v35) * ((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v35) + 6)) >> 8);
        ++v35;
        --v36;
      }
      while ( v36 );
    }
    if ( v8 )
    {
      DDL::DDL_Header_FlagSet(ddlContext, DDL_FLAG_DIRTY, 1);
      accessCB = ddlContext->accessCB;
      if ( accessCB )
        accessCB(ddlContext, v12, v11, DDL_ACCESS_WRITE);
      Config = DDL_GetConfig();
      if ( Config )
      {
        f_accessCallback = Config->f_accessCallback;
        if ( f_accessCallback )
          f_accessCallback(ddlContext, v12, v11, DDL_ACCESS_WRITE);
      }
    }
  }
  else
  {
    if ( !headerBits && ddlContext->obfuscated )
    {
      v17 = bitSize / 8;
      if ( v18 > 0 )
      {
        v19 = (unsigned int)v18;
        v20 = &buff[v14];
        do
        {
          *v20 ^= (unsigned __int8)((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v20) * ((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v20) + 6)) ^ ((unsigned __int16)((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v20) * ((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v20) + 6)) >> 8);
          ++v20;
          --v19;
        }
        while ( v19 );
      }
    }
    v21 = &buff[v14];
    v22 = v18;
    if ( memcmp_0(v21, &val, v18) )
    {
      memcpy_0(v21, &val, v22);
      if ( !skipDirty )
        DDL::DDL_Buffer_DirtySet(ddlContext, v12, v11);
    }
    if ( !v7 && ddlContext->obfuscated && v17 > 0 )
    {
      v23 = (unsigned int)v17;
      do
      {
        *v21 ^= ((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v21) * ((LOBYTE(ddlContext->randomInt) ^ (unsigned __int8)v21) + 6)) ^ ((unsigned __int16)((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v21) * ((LOWORD(ddlContext->randomInt) ^ (unsigned __int16)v21) + 6)) >> 8);
        ++v21;
        --v23;
      }
      while ( v23 );
    }
  }
  return 1;
}

/*
==============
DDL::WriteBitsRawInternal
==============
*/
char DDL::WriteBitsRawInternal(DDLContext *ddlContext, int offset, int bitSize, int limitSize, const unsigned __int8 *val)
{
  int v5; 
  DDLContext *v6; 
  bool v7; 
  int v8; 
  _BYTE *buff; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  _BYTE *v14; 
  size_t v15; 
  char *v16; 
  _BYTE *v17; 
  __int64 v18; 
  void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 
  DDLConfigParams *Config; 
  void (__fastcall *f_accessCallback)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 
  _BYTE *v23; 
  __int64 v24; 
  int v25; 
  char v26; 
  int v27; 
  int v28; 
  char v29; 
  char v30; 
  int v31; 
  int v32; 

  v5 = bitSize;
  v6 = ddlContext;
  v7 = 0;
  v8 = ddlContext->def->headerBitSize + offset;
  buff = ddlContext->buff;
  if ( limitSize > 0 && limitSize < bitSize )
    v5 = limitSize;
  v10 = 0;
  v11 = v8 / 8;
  if ( !(v8 % 8 % 8) )
  {
    v12 = v5 / 8;
    if ( !(v5 % 8) )
    {
      if ( ddlContext->obfuscated )
      {
        v10 = v5 / 8;
        if ( v12 > 0 )
        {
          v13 = (unsigned int)v12;
          v14 = &buff[v11];
          do
          {
            *v14 ^= (unsigned __int8)(((unsigned __int8)v14 ^ LOBYTE(ddlContext->randomInt)) * (((unsigned __int8)v14 ^ LOBYTE(ddlContext->randomInt)) + 6)) ^ ((unsigned __int16)(((unsigned __int16)v14 ^ LOWORD(ddlContext->randomInt)) * (((unsigned __int16)v14 ^ LOWORD(ddlContext->randomInt)) + 6)) >> 8);
            ++v14;
            --v13;
          }
          while ( v13 );
        }
      }
      v15 = v12;
      v16 = &buff[v11];
      if ( memcmp_0(v16, val, v12) )
      {
        memcpy_0(v16, val, v15);
        v7 = 1;
      }
LABEL_12:
      v11 = v8 / 8;
      goto LABEL_13;
    }
  }
  if ( ddlContext->obfuscated )
  {
    v10 = v5 / 8 + 1;
    if ( v10 > 0 )
    {
      v23 = &buff[v11];
      v24 = (unsigned int)v10;
      do
      {
        *v23 ^= (((unsigned __int8)v23 ^ LOBYTE(ddlContext->randomInt)) * (((unsigned __int8)v23 ^ LOBYTE(ddlContext->randomInt)) + 6)) ^ ((unsigned __int16)(((unsigned __int16)v23 ^ LOWORD(ddlContext->randomInt)) * (((unsigned __int16)v23 ^ LOWORD(ddlContext->randomInt)) + 6)) >> 8);
        ++v23;
        --v24;
      }
      while ( v24 );
    }
  }
  v25 = 0;
  if ( v5 > 0 )
  {
    v26 = 1;
    do
    {
      v27 = (v8 + v25) % 8;
      v28 = (v8 + v25) / 8;
      v29 = v26 & val[(unsigned __int64)(unsigned int)v25 >> 3];
      v30 = v27;
      if ( !v7 )
        v7 = (v29 == 0) != (((unsigned __int8)(1 << v27) & buff[v28]) == 0);
      v31 = (unsigned __int8)buff[v28];
      if ( v29 )
        v32 = v31 | (1 << v30);
      else
        v32 = v31 & ~(1 << v30);
      ++v25;
      v26 = __ROL1__(v26, 1);
      buff[v28] = v32;
    }
    while ( v25 < v5 );
    v6 = ddlContext;
    goto LABEL_12;
  }
LABEL_13:
  if ( v6->obfuscated && v10 > 0 )
  {
    v17 = &buff[v11];
    v18 = (unsigned int)v10;
    do
    {
      *v17 ^= (((unsigned __int8)v17 ^ LOBYTE(v6->randomInt)) * (((unsigned __int8)v17 ^ LOBYTE(v6->randomInt)) + 6)) ^ ((unsigned __int16)(((unsigned __int16)v17 ^ LOWORD(v6->randomInt)) * (((unsigned __int16)v17 ^ LOWORD(v6->randomInt)) + 6)) >> 8);
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  if ( v7 )
  {
    DDL::DDL_Header_FlagSet(v6, DDL_FLAG_DIRTY, 1);
    accessCB = v6->accessCB;
    if ( accessCB )
      accessCB(v6, v8, v5, DDL_ACCESS_WRITE);
    Config = DDL_GetConfig();
    if ( Config )
    {
      f_accessCallback = Config->f_accessCallback;
      if ( f_accessCallback )
        f_accessCallback(v6, v8, v5, DDL_ACCESS_WRITE);
    }
  }
  return 1;
}

