/*
==============
Online_GetEpochTimeFromAuth_ms
==============
*/

unsigned __int64 __fastcall Online_GetEpochTimeFromAuth_ms()
{
  return ?Online_GetEpochTimeFromAuth_ms@@YA_KXZ();
}

/*
==============
ByteBufferToHexString
==============
*/

bool __fastcall ByteBufferToHexString(const unsigned __int8 *inByteBuffer, int inSize, char *outHexString, int outSize)
{
  return ?ByteBufferToHexString@@YA_NPEBEHPEADH@Z(inByteBuffer, inSize, outHexString, outSize);
}

/*
==============
Online_GetUtcOffset
==============
*/

int __fastcall Online_GetUtcOffset(const int utcStart)
{
  return ?Online_GetUtcOffset@@YAHH@Z(utcStart);
}

/*
==============
Online_SetAuthTicketCreationTime
==============
*/

void __fastcall Online_SetAuthTicketCreationTime(const unsigned __int64 authTicketCreateTime)
{
  ?Online_SetAuthTicketCreationTime@@YAX_K@Z(authTicketCreateTime);
}

/*
==============
HexStringToByteBuffer
==============
*/

bool __fastcall HexStringToByteBuffer(const char *inHexString, int inSize, unsigned __int8 *outByteBuffer, int outSize)
{
  return ?HexStringToByteBuffer@@YA_NPEBDHPEAEH@Z(inHexString, inSize, outByteBuffer, outSize);
}

/*
==============
GuidToStr
==============
*/

void __fastcall GuidToStr(OnlineGUID *guid, char *toStr, unsigned int len)
{
  ?GuidToStr@@YAXAEAUOnlineGUID@@PEADI@Z(guid, toStr, len);
}

/*
==============
GetGUID
==============
*/

bool __fastcall GetGUID(OnlineGUID *guidToBeFilledIn)
{
  return ?GetGUID@@YA_NPEAUOnlineGUID@@@Z(guidToBeFilledIn);
}

/*
==============
Online_GetEpochTimeFromAuth_s
==============
*/

unsigned __int64 __fastcall Online_GetEpochTimeFromAuth_s()
{
  return ?Online_GetEpochTimeFromAuth_s@@YA_KXZ();
}

/*
==============
GenerateGUID_Type1
==============
*/

bool __fastcall GenerateGUID_Type1(OnlineGUID *guidToBeFilledIn)
{
  return ?GenerateGUID_Type1@@YA_NPEAUOnlineGUID@@@Z(guidToBeFilledIn);
}

/*
==============
Online_GetSystemTime_us
==============
*/

unsigned __int64 __fastcall Online_GetSystemTime_us()
{
  return ?Online_GetSystemTime_us@@YA_KXZ();
}

/*
==============
ByteBufferToHexString
==============
*/
char ByteBufferToHexString(const unsigned __int8 *inByteBuffer, int inSize, char *outHexString, int outSize)
{
  __int64 v6; 
  size_t v7; 
  Online_ErrorReporting *InstancePtr; 
  int v9; 
  __int64 v10; 
  Online_ErrorReporting *v11; 

  v6 = (unsigned int)inSize;
  v7 = outSize;
  if ( 2 * inSize >= outSize )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_common.cpp", 61, ASSERT_TYPE_ASSERT, "(inSize * 2 < outSize)", (const char *)&queryFormat, "inSize * 2 < outSize") )
      __debugbreak();
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)0x20000, NULL);
  }
  memset_0(outHexString, 0, v7);
  v9 = 0;
  if ( (int)v6 > 0 )
  {
    v10 = v6;
    do
    {
      v9 += j_sprintf_s(outHexString, 3ui64, "%02hhx", *inByteBuffer++);
      outHexString += 2;
      --v10;
    }
    while ( v10 );
  }
  if ( v9 == (_DWORD)v7 - 1 )
    return 1;
  v11 = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(v11, (Online_Error_CAT_CCS_t)0x40000, NULL);
  return 0;
}

/*
==============
GenerateGUID_Type1
==============
*/
char GenerateGUID_Type1(OnlineGUID *guidToBeFilledIn)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  bdRandom v7; 

  if ( !guidToBeFilledIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_common.cpp", 179, ASSERT_TYPE_ASSERT, "(guidToBeFilledIn)", (const char *)&queryFormat, "guidToBeFilledIn", -2i64) )
    __debugbreak();
  if ( !guidToBeFilledIn )
    return 0;
  if ( !s_guidGenerator.m_hasMacAddr )
  {
    if ( Live_GetMACAddress(s_guidGenerator.m_MACAddr) )
    {
      s_guidGenerator.m_hasMacAddr = 1;
    }
    else
    {
      bdRandom::bdRandom(&v7);
      v2 = Sys_Microseconds();
      bdRandom::setSeed(&v7, v2);
      bdRandom::nextUBytes(&v7, s_guidGenerator.m_MACAddr, 6);
      s_guidGenerator.m_MACAddr[5] |= 0x80u;
      bdRandom::~bdRandom(&v7);
    }
  }
  if ( !s_guidGenerator.m_uniqueifier )
  {
    bdRandom::bdRandom(&v7);
    v3 = Sys_Microseconds();
    bdRandom::setSeed(&v7, v3);
    bdRandom::nextUBytes(&v7, (unsigned __int8 *)&s_guidGenerator, 2);
    bdRandom::~bdRandom(&v7);
  }
  if ( bOnce_0 )
  {
    GetSystemTimeAsFileTime(&firstFileTime);
    firstUSecs = Sys_Microseconds();
    bOnce_0 = 0;
  }
  v4 = Sys_Microseconds();
  v5 = v4 + *(_QWORD *)&firstFileTime - firstUSecs;
  if ( v5 <= s_guidGenerator.m_lastSeenTimestamp )
    ++s_guidGenerator.m_uniqueifier;
  s_guidGenerator.m_lastSeenTimestamp = v4 + *(_QWORD *)&firstFileTime - firstUSecs;
  guidToBeFilledIn->u.s.data1 = v5;
  guidToBeFilledIn->u.s.data2 = WORD2(v5);
  guidToBeFilledIn->u.s.data3 = HIWORD(v5) & 0xFFF | 0x1000;
  guidToBeFilledIn->u.s.data4[0] = HIBYTE(s_guidGenerator.m_uniqueifier);
  guidToBeFilledIn->u.s.data4[1] = s_guidGenerator.m_uniqueifier;
  guidToBeFilledIn->u.s.data4[2] = s_guidGenerator.m_MACAddr[0];
  guidToBeFilledIn->u.s.data4[3] = s_guidGenerator.m_MACAddr[1];
  guidToBeFilledIn->u.s.data4[4] = s_guidGenerator.m_MACAddr[2];
  guidToBeFilledIn->u.s.data4[5] = s_guidGenerator.m_MACAddr[3];
  guidToBeFilledIn->u.s.data4[6] = s_guidGenerator.m_MACAddr[4];
  guidToBeFilledIn->u.s.data4[7] = s_guidGenerator.m_MACAddr[5];
  return 1;
}

/*
==============
GetGUID
==============
*/

bool __fastcall GetGUID(OnlineGUID *guidToBeFilledIn)
{
  return GenerateGUID_Type1(guidToBeFilledIn);
}

/*
==============
GuidToStr
==============
*/
void GuidToStr(OnlineGUID *guid, char *toStr, unsigned int len)
{
  unsigned __int64 v5; 
  char *fmt; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 

  if ( toStr )
  {
    v5 = len;
    if ( len < 0x25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_common.cpp", 103, ASSERT_TYPE_ASSERT, "(len >= ( ONLINE_GUID_STRING_LENGTH + 1 ))", (const char *)&queryFormat, "len >= ( ONLINE_GUID_STRING_LENGTH + 1 )") )
      __debugbreak();
    v15 = guid->u.s.data4[7];
    v14 = guid->u.s.data4[6];
    v13 = guid->u.s.data4[5];
    v12 = guid->u.s.data4[4];
    v11 = guid->u.s.data4[3];
    v10 = guid->u.s.data4[2];
    v9 = guid->u.s.data4[1];
    v8 = guid->u.s.data4[0];
    LODWORD(v7) = guid->u.s.data3;
    LODWORD(fmt) = guid->u.s.data2;
    if ( Com_sprintf(toStr, v5, "%08X-%04hX-%04hX-%02hhX%02hhX-%02hhX%02hhX%02hhX%02hhX%02hhX%02hhX", guid->u.s.data1, fmt, v7, v8, v9, v10, v11, v12, v13, v14, v15) != 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_common.cpp", 108, ASSERT_TYPE_ASSERT, "(Com_sprintf( toStr, len, \"%08\" \"X\" \"-%04hX-%04hX-%02hhX%02hhX-%02hhX%02hhX%02hhX%02hhX%02hhX%02hhX\", guid.u.s.data1, guid.u.s.data2, guid.u.s.data3, guid.u.s.data4[ 0 ], guid.u.s.data4[ 1 ], guid.u.s.data4[ 2 ], guid.u.s.data4[ 3 ], guid.u.s.data4[ 4 ], guid.u.s.data4[ 5 ], guid.u.s.data4[ 6 ], guid.u.s.data4[ 7 ] ) == ONLINE_GUID_STRING_LENGTH)", (const char *)&queryFormat, "Com_sprintf( toStr, len, \"%08\" \"X\" \"-%04hX-%04hX-%02hhX%02hhX-%02hhX%02hhX%02hhX%02hhX%02hhX%02hhX\", guid.u.s.data1, guid.u.s.data2, guid.u.s.data3, guid.u.s.data4[ 0 ], guid.u.s.data4[ 1 ], guid.u.s.data4[ 2 ], guid.u.s.data4[ 3 ], guid.u.s.data4[ 4 ], guid.u.s.data4[ 5 ], guid.u.s.data4[ 6 ], guid.u.s.data4[ 7 ] ) == ONLINE_GUID_STRING_LENGTH") )
      __debugbreak();
  }
}

/*
==============
HexStringToByteBuffer
==============
*/
char HexStringToByteBuffer(const char *inHexString, int inSize, unsigned __int8 *outByteBuffer, int outSize)
{
  Online_ErrorReporting *v7; 
  int v9; 
  __int64 v10; 
  Online_ErrorReporting *InstancePtr; 
  unsigned __int8 v12; 

  if ( inSize >= 2 * outSize )
  {
    v9 = 0;
    if ( outSize > 0 )
    {
      v10 = (unsigned int)outSize;
      do
      {
        v9 += j_sscanf(inHexString, "%2hhx", &v12);
        ++outByteBuffer;
        inHexString += 2;
        *(outByteBuffer - 1) = v12;
        --v10;
      }
      while ( v10 );
    }
    if ( v9 == outSize )
    {
      return 1;
    }
    else
    {
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)0x10000, NULL);
      return 0;
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_common.cpp", 32, ASSERT_TYPE_ASSERT, "(inSize >= 2 * outSize)", (const char *)&queryFormat, "inSize >= 2 * outSize") )
      __debugbreak();
    v7 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v7, (Online_Error_CAT_CCS_t)0x8000, NULL);
    return 0;
  }
}

/*
==============
Online_GetEpochTimeFromAuth_ms
==============
*/
__int64 Online_GetEpochTimeFromAuth_ms()
{
  return s_baseAuthTokenCreateEpochTimeDelta_ms + Xtime_get_ticks_0() / 10000;
}

/*
==============
Online_GetEpochTimeFromAuth_s
==============
*/
__int64 Online_GetEpochTimeFromAuth_s()
{
  return s_baseAuthTokenCreateEpochTimeDelta_s + Xtime_get_ticks_0() / 10000000;
}

/*
==============
Online_GetSystemTime_us
==============
*/
unsigned __int64 Online_GetSystemTime_us()
{
  if ( bOnce_0 )
  {
    GetSystemTimeAsFileTime(&firstFileTime);
    firstUSecs = Sys_Microseconds();
    bOnce_0 = 0;
  }
  return *(_QWORD *)&firstFileTime - firstUSecs + Sys_Microseconds();
}

/*
==============
Online_GetUtcOffset
==============
*/
__int64 Online_GetUtcOffset(const int utcStart)
{
  signed int v2; 

  v2 = 0;
  if ( LiveStorage_IsTimeSynced() && (v2 = LiveStorage_GetUTC() - utcStart, v2 < 0) )
    return 0i64;
  else
    return (unsigned int)v2;
}

/*
==============
Online_SetAuthTicketCreationTime
==============
*/
void Online_SetAuthTicketCreationTime(const unsigned __int64 authTicketCreateTime)
{
  s_baseAuthTokenCreateEpochTimeDelta_s = authTicketCreateTime - Xtime_get_ticks_0() / 10000000;
  s_baseAuthTokenCreateEpochTimeDelta_ms = 1000 * authTicketCreateTime - Xtime_get_ticks_0() / 10000;
}

