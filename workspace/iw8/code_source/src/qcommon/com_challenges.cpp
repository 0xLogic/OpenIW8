/*
==============
Com_Challenges_BeginWriteEvent
==============
*/

bool __fastcall Com_Challenges_BeginWriteEvent(const XUID playerXuid, const char *const eventName, const unsigned int eventNameLength)
{
  return ?Com_Challenges_BeginWriteEvent@@YA_NUXUID@@QEBDI@Z(playerXuid, eventName, eventNameLength);
}

/*
==============
Com_Challenges_WriteParam
==============
*/

bool __fastcall Com_Challenges_WriteParam(const char *const param, const unsigned int paramLength)
{
  return ?Com_Challenges_WriteParam@@YA_NQEBDI@Z(param, paramLength);
}

/*
==============
Com_Challenges_FinishWriteEvent
==============
*/

void Com_Challenges_FinishWriteEvent(void)
{
  ?Com_Challenges_FinishWriteEvent@@YAXXZ();
}

/*
==============
Com_Challenges_BeginReadEvent
==============
*/

bool __fastcall Com_Challenges_BeginReadEvent(XUID *outXuid, char *outEventName, const unsigned int eventNameSize, unsigned int *outParamCount)
{
  return ?Com_Challenges_BeginReadEvent@@YA_NPEAUXUID@@PEADIPEAI@Z(outXuid, outEventName, eventNameSize, outParamCount);
}

/*
==============
Com_Challenges_ShutdownMemory
==============
*/

void Com_Challenges_ShutdownMemory(void)
{
  ?Com_Challenges_ShutdownMemory@@YAXXZ();
}

/*
==============
Com_Challenges_GetAllocationSize
==============
*/

unsigned int __fastcall Com_Challenges_GetAllocationSize()
{
  return ?Com_Challenges_GetAllocationSize@@YAIXZ();
}

/*
==============
Com_Challenges_DiscardReadEvent
==============
*/

void Com_Challenges_DiscardReadEvent(void)
{
  ?Com_Challenges_DiscardReadEvent@@YAXXZ();
}

/*
==============
Com_Challenges_DiscardWriteEvent
==============
*/

void Com_Challenges_DiscardWriteEvent(void)
{
  ?Com_Challenges_DiscardWriteEvent@@YAXXZ();
}

/*
==============
Com_Challenges_ReadParam
==============
*/

bool __fastcall Com_Challenges_ReadParam(char *outParam, const unsigned int paramSize, unsigned int *outParamLen)
{
  return ?Com_Challenges_ReadParam@@YA_NPEADIPEAI@Z(outParam, paramSize, outParamLen);
}

/*
==============
Com_Challenges_EndReadEvent
==============
*/

bool __fastcall Com_Challenges_EndReadEvent()
{
  return ?Com_Challenges_EndReadEvent@@YA_NXZ();
}

/*
==============
Com_Challenges_AllocateMemory
==============
*/

void __fastcall Com_Challenges_AllocateMemory(HunkUser *hunkUser)
{
  ?Com_Challenges_AllocateMemory@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
Com_Challenges_AllocateMemory
==============
*/
void Com_Challenges_AllocateMemory(HunkUser *hunkUser)
{
  if ( s_comEventBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 142, ASSERT_TYPE_ASSERT, "( s_comEventBuffer == nullptr )", (const char *)&queryFormat, "s_comEventBuffer == nullptr") )
    __debugbreak();
  s_comEventBuffer = (ChallengeEventBuffer *)Mem_HunkUser_AllocInternal(hunkUser, 0x20018ui64, 0x80ui64, "Com_Challenges_AllocateMemory");
  memset_0(s_comEventBuffer, 0, sizeof(ChallengeEventBuffer));
}

/*
==============
Com_Challenges_BeginReadEvent
==============
*/
char Com_Challenges_BeginReadEvent(XUID *outXuid, char *outEventName, const unsigned int eventNameSize, unsigned int *outParamCount)
{
  ChallengeEventBuffer *v8; 
  const XUID *v9; 
  unsigned int writeDataSize; 
  unsigned int readEventOffset; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  const XUID *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  XUID result; 
  char xuidString[24]; 

  if ( !outXuid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 287, ASSERT_TYPE_ASSERT, "(outXuid != nullptr)", (const char *)&queryFormat, "outXuid != nullptr") )
    __debugbreak();
  if ( !outEventName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 288, ASSERT_TYPE_ASSERT, "(outEventName != nullptr)", (const char *)&queryFormat, "outEventName != nullptr") )
    __debugbreak();
  if ( !outParamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 289, ASSERT_TYPE_ASSERT, "(outParamCount != nullptr)", (const char *)&queryFormat, "outParamCount != nullptr") )
    __debugbreak();
  v8 = s_comEventBuffer;
  v9 = XUID::NullXUID(&result);
  XUID::operator=(outXuid, v9);
  if ( !v8 )
    return 0;
  if ( v8->writeDataSize < v8->readDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 301, ASSERT_TYPE_ASSERT, "( buffer->writeDataSize ) >= ( buffer->readDataSize )", "%s >= %s\n\t%i, %i", "buffer->writeDataSize", "buffer->readDataSize", v8->writeDataSize, v8->readDataSize) )
    __debugbreak();
  if ( v8->readEventOffset != v8->readDataSize )
  {
    LODWORD(v20) = v8->readDataSize;
    LODWORD(v19) = v8->readEventOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 302, ASSERT_TYPE_ASSERT, "( buffer->readEventOffset ) == ( buffer->readDataSize )", "%s == %s\n\t%i, %i", "buffer->readEventOffset", "buffer->readDataSize", v19, v20) )
      __debugbreak();
  }
  if ( v8->readParamCount )
  {
    LODWORD(v18) = v8->readParamCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 303, ASSERT_TYPE_ASSERT, "( ( buffer->readParamCount == 0 ) )", "( buffer->readParamCount ) = %i", v18) )
      __debugbreak();
  }
  writeDataSize = v8->writeDataSize;
  if ( v8->readDataSize >= writeDataSize )
    return 0;
  readEventOffset = v8->readEventOffset;
  if ( readEventOffset + 4 <= writeDataSize )
  {
    CircularBuffer<131072>::Read(&v8->data, &result, 4, readEventOffset);
    v8->readEventOffset += 4;
    v12 = v8->readEventOffset;
    if ( v12 + 4 <= v8->writeDataSize )
    {
      CircularBuffer<131072>::Read(&v8->data, &result, 4, v12);
      v8->readEventOffset += 4;
      if ( Com_Challenges_ReadData(v8, outParamCount, 4u) && LODWORD(result.m_id) == -840246291 )
      {
        v13 = v8->readEventOffset;
        v14 = 0i64;
        LODWORD(result.m_id) = 0;
        if ( v13 < v8->writeDataSize )
        {
          while ( (unsigned int)v14 < 0x15 )
          {
            xuidString[v14] = v8->data.m_data[v13 & 0x1FFFF];
            v15 = v8->writeDataSize;
            v13 = v8->readEventOffset + 1;
            v8->readEventOffset = v13;
            if ( !xuidString[v14] )
            {
              if ( v13 > v15 )
              {
                LODWORD(v20) = v15;
                LODWORD(v19) = v13;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 116, ASSERT_TYPE_ASSERT, "( buffer->readEventOffset ) <= ( buffer->writeDataSize )", "%s <= %s\n\t%i, %i", "buffer->readEventOffset", "buffer->writeDataSize", v19, v20) )
                  __debugbreak();
              }
              if ( Com_Challenges_ReadString(v8, outEventName, (unsigned int *)&result, eventNameSize) )
              {
                v17 = XUID::FromString(&result, xuidString);
                XUID::operator=(outXuid, v17);
              }
              return 1;
            }
            v14 = (unsigned int)(v14 + 1);
            LODWORD(result.m_id) = v14;
            if ( v13 >= v15 )
              return 1;
          }
        }
      }
    }
  }
  return 1;
}

/*
==============
Com_Challenges_BeginWriteEvent
==============
*/
bool Com_Challenges_BeginWriteEvent(const XUID playerXuid, const char *const eventName, const unsigned int eventNameLength)
{
  ChallengeEventBuffer *v5; 
  unsigned __int64 v6; 
  signed int v7; 
  bool result; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int data; 
  char dest[21]; 
  XUID v14; 

  v14.m_id = playerXuid.m_id;
  if ( !eventName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 159, ASSERT_TYPE_ASSERT, "(eventName != nullptr)", (const char *)&queryFormat, "eventName != nullptr") )
    __debugbreak();
  v5 = s_comEventBuffer;
  if ( !s_comEventBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 162, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  if ( v5->writeDataSize < v5->readDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 163, ASSERT_TYPE_ASSERT, "( buffer->writeDataSize ) >= ( buffer->readDataSize )", "%s >= %s\n\t%i, %i", "buffer->writeDataSize", "buffer->readDataSize", v5->writeDataSize, v5->readDataSize) )
    __debugbreak();
  if ( v5->writeEventOffset != v5->writeDataSize )
  {
    LODWORD(v11) = v5->writeDataSize;
    LODWORD(v10) = v5->writeEventOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 164, ASSERT_TYPE_ASSERT, "( buffer->writeEventOffset ) == ( buffer->writeDataSize )", "%s == %s\n\t%i, %i", "buffer->writeEventOffset", "buffer->writeDataSize", v10, v11) )
      __debugbreak();
  }
  if ( v5->writeParamCount )
  {
    LODWORD(v9) = v5->writeParamCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 165, ASSERT_TYPE_ASSERT, "( ( buffer->writeParamCount == 0 ) )", "( buffer->writeParamCount ) = %i", v9) )
      __debugbreak();
  }
  data = 0;
  result = 0;
  if ( Com_Challenges_WriteData(v5, &data, 4u) && Com_Challenges_WriteData(v5, &data, 4u) && Com_Challenges_WriteData(v5, &data, 4u) )
  {
    v6 = XUID::ToUint64(&v14);
    v7 = Com_sprintf<21>((char (*)[21])dest, "%zu", v6);
    if ( v7 >= 0 && Com_Challenges_WriteString(v5, dest, v7) && Com_Challenges_WriteString(v5, eventName, eventNameLength) )
      return 1;
  }
  return result;
}

/*
==============
Com_Challenges_DiscardReadEvent
==============
*/
void Com_Challenges_DiscardReadEvent(void)
{
  ChallengeEventBuffer *v0; 
  unsigned int writeDataSize; 
  unsigned int readDataSize; 
  int v3; 
  int v4; 
  int v5; 
  signed __int32 v6[8]; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  int v10; 

  v0 = s_comEventBuffer;
  if ( !s_comEventBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 411, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  writeDataSize = v0->writeDataSize;
  if ( writeDataSize < v0->readDataSize )
  {
    LODWORD(v8) = v0->readDataSize;
    LODWORD(v7) = writeDataSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 412, ASSERT_TYPE_ASSERT, "( buffer->writeDataSize ) >= ( buffer->readDataSize )", "%s >= %s\n\t%i, %i", "buffer->writeDataSize", "buffer->readDataSize", v7, v8) )
      __debugbreak();
  }
  readDataSize = v0->readDataSize;
  if ( v0->readEventOffset > readDataSize )
  {
    v3 = 0x20000 - (readDataSize & 0x1FFFF);
    if ( v3 > 4 )
      v3 = 4;
    memcpy_0(&v9, &v0->data.m_data[readDataSize & 0x1FFFF], v3);
    memcpy_0((char *)&v9 + v3, v0, 4 - v3);
    v4 = v9;
    if ( v9 > 0x20000 )
    {
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143ED59A8, 5748i64);
      readDataSize = v0->readDataSize;
    }
    v5 = 0x20000 - ((readDataSize + 4) & 0x1FFFF);
    if ( v5 > 4 )
      v5 = 4;
    memcpy_0(&v10, &v0->data.m_data[(readDataSize + 4) & 0x1FFFF], v5);
    memcpy_0((char *)&v10 + v5, v0, 4 - v5);
    if ( v10 != -840246291 )
    {
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143ED59A8, 5893i64);
      readDataSize = v0->readDataSize;
    }
    v0->readEventOffset = readDataSize + v4;
    CircularBuffer<131072>::Clear(&v0->data, v4, readDataSize);
    _InterlockedOr(v6, 0);
    v0->readDataSize = v0->readEventOffset;
  }
}

/*
==============
Com_Challenges_DiscardWriteEvent
==============
*/
void Com_Challenges_DiscardWriteEvent(void)
{
  ChallengeEventBuffer *v0; 
  unsigned int writeDataSize; 
  unsigned int writeEventOffset; 
  unsigned int v3; 
  signed __int32 v4[8]; 
  __int64 v5; 
  __int64 v6; 

  v0 = s_comEventBuffer;
  if ( !s_comEventBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 265, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  writeDataSize = v0->writeDataSize;
  if ( writeDataSize < v0->readDataSize )
  {
    LODWORD(v6) = v0->readDataSize;
    LODWORD(v5) = writeDataSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 266, ASSERT_TYPE_ASSERT, "( buffer->writeDataSize ) >= ( buffer->readDataSize )", "%s >= %s\n\t%i, %i", "buffer->writeDataSize", "buffer->readDataSize", v5, v6) )
      __debugbreak();
  }
  writeEventOffset = v0->writeEventOffset;
  v3 = v0->writeDataSize;
  if ( writeEventOffset > v3 )
  {
    CircularBuffer<131072>::Clear(&v0->data, writeEventOffset - v3, v3);
    _InterlockedOr(v4, 0);
    v0->writeEventOffset = v0->writeDataSize;
    v0->writeParamCount = 0;
  }
}

/*
==============
Com_Challenges_EndReadEvent
==============
*/
char Com_Challenges_EndReadEvent()
{
  ChallengeEventBuffer *v0; 
  unsigned int writeDataSize; 
  unsigned int readEventOffset; 
  unsigned int readDataSize; 
  int v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  unsigned __int8 *v8; 
  signed __int32 v10[8]; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  v0 = s_comEventBuffer;
  if ( !s_comEventBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 379, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  writeDataSize = v0->writeDataSize;
  if ( writeDataSize < v0->readDataSize )
  {
    LODWORD(v12) = v0->readDataSize;
    LODWORD(v11) = writeDataSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 380, ASSERT_TYPE_ASSERT, "( buffer->writeDataSize ) >= ( buffer->readDataSize )", "%s >= %s\n\t%i, %i", "buffer->writeDataSize", "buffer->readDataSize", v11, v12) )
      __debugbreak();
  }
  readEventOffset = v0->readEventOffset;
  if ( readEventOffset <= v0->readDataSize )
  {
    LODWORD(v12) = v0->readDataSize;
    LODWORD(v11) = readEventOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 381, ASSERT_TYPE_ASSERT, "( buffer->readEventOffset ) > ( buffer->readDataSize )", "%s > %s\n\t%i, %i", "buffer->readEventOffset", "buffer->readDataSize", v11, v12) )
      __debugbreak();
  }
  readDataSize = v0->readDataSize;
  v4 = v0->readEventOffset - readDataSize;
  v5 = readDataSize & 0x1FFFF;
  v6 = 0x20000 - v5;
  v7 = 0x20000 - v5;
  if ( 0x20000 - (int)v5 > 4 )
    v7 = 4;
  v8 = &v0->data.m_data[v5];
  memcpy_0(&v13, &v0->data.m_data[v5], v7);
  memcpy_0((char *)&v13 + v7, v0, 4 - v7);
  if ( v4 != v13 )
    return 0;
  if ( v4 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 42, ASSERT_TYPE_ASSERT, "(length <= CAPACITY)", (const char *)&queryFormat, "length <= CAPACITY") )
    __debugbreak();
  if ( v4 < v6 )
    v6 = v4;
  memset_0(v8, 0, v6);
  memset_0(v0, 0, v4 - v6);
  _InterlockedOr(v10, 0);
  v0->readDataSize = v0->readEventOffset;
  return 1;
}

/*
==============
Com_Challenges_FinishWriteEvent
==============
*/
void Com_Challenges_FinishWriteEvent(void)
{
  ChallengeEventBuffer *v0; 
  unsigned int writeDataSize; 
  unsigned int writeEventOffset; 
  unsigned int v3; 
  int v4; 
  int v5; 
  int v6; 
  signed __int32 v7[8]; 
  __int64 v8; 
  __int64 v9; 
  unsigned int Src; 

  v0 = s_comEventBuffer;
  if ( !s_comEventBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 233, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  writeDataSize = v0->writeDataSize;
  if ( writeDataSize < v0->readDataSize )
  {
    LODWORD(v9) = v0->readDataSize;
    LODWORD(v8) = writeDataSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 234, ASSERT_TYPE_ASSERT, "( buffer->writeDataSize ) >= ( buffer->readDataSize )", "%s >= %s\n\t%i, %i", "buffer->writeDataSize", "buffer->readDataSize", v8, v9) )
      __debugbreak();
  }
  writeEventOffset = v0->writeEventOffset;
  if ( writeEventOffset <= v0->writeDataSize )
  {
    LODWORD(v9) = v0->writeDataSize;
    LODWORD(v8) = writeEventOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 235, ASSERT_TYPE_ASSERT, "( buffer->writeEventOffset ) > ( buffer->writeDataSize )", "%s > %s\n\t%i, %i", "buffer->writeEventOffset", "buffer->writeDataSize", v8, v9) )
      __debugbreak();
  }
  v3 = v0->writeDataSize;
  Src = v0->writeEventOffset - v3;
  v4 = 0x20000 - (v3 & 0x1FFFF);
  if ( v4 > 4 )
    v4 = 4;
  memcpy_0(&v0->data.m_data[v3 & 0x1FFFF], &Src, v4);
  memcpy_0(v0, (char *)&Src + v4, 4 - v4);
  v5 = 0x20000 - ((v3 + 4) & 0x1FFFF);
  if ( v5 > 4 )
    v5 = 4;
  memcpy_0(&v0->data.m_data[(v3 + 4) & 0x1FFFF], &COM_CHALLENGE_EVENT_MAGIC, v5);
  memcpy_0(v0, (char *)&COM_CHALLENGE_EVENT_MAGIC + v5, 4 - v5);
  v6 = 0x20000 - ((v3 + 8) & 0x1FFFF);
  if ( v6 > 4 )
    v6 = 4;
  memcpy_0(&v0->data.m_data[(v3 + 8) & 0x1FFFF], &v0->writeParamCount, v6);
  memcpy_0(v0, (char *)&v0->writeParamCount + v6, 4 - v6);
  _InterlockedOr(v7, 0);
  v0->writeDataSize = v0->writeEventOffset;
  v0->writeParamCount = 0;
}

/*
==============
Com_Challenges_GetAllocationSize
==============
*/
__int64 Com_Challenges_GetAllocationSize()
{
  return 131200i64;
}

/*
==============
Com_Challenges_ReadData
==============
*/
char Com_Challenges_ReadData(ChallengeEventBuffer *const buffer, void *const data, const unsigned int length)
{
  unsigned int readEventOffset; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 58, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 59, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  readEventOffset = buffer->readEventOffset;
  if ( readEventOffset + length > buffer->writeDataSize )
    return 0;
  CircularBuffer<131072>::Read(&buffer->data, data, length, readEventOffset);
  buffer->readEventOffset += length;
  return 1;
}

/*
==============
Com_Challenges_ReadParam
==============
*/
bool Com_Challenges_ReadParam(char *outParam, const unsigned int paramSize, unsigned int *outParamLen)
{
  ChallengeEventBuffer *v6; 
  __int64 v8; 
  __int64 v9; 

  if ( !outParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 357, ASSERT_TYPE_ASSERT, "(outParam != nullptr)", (const char *)&queryFormat, "outParam != nullptr") )
    __debugbreak();
  if ( !outParamLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 358, ASSERT_TYPE_ASSERT, "(outParamLen != nullptr)", (const char *)&queryFormat, "outParamLen != nullptr") )
    __debugbreak();
  v6 = s_comEventBuffer;
  if ( !s_comEventBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 361, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  if ( v6->writeDataSize < v6->readDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 362, ASSERT_TYPE_ASSERT, "( buffer->writeDataSize ) >= ( buffer->readDataSize )", "%s >= %s\n\t%i, %i", "buffer->writeDataSize", "buffer->readDataSize", v6->writeDataSize, v6->readDataSize) )
    __debugbreak();
  if ( v6->readEventOffset <= v6->readDataSize )
  {
    LODWORD(v9) = v6->readDataSize;
    LODWORD(v8) = v6->readEventOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 363, ASSERT_TYPE_ASSERT, "( buffer->readEventOffset ) > ( buffer->readDataSize )", "%s > %s\n\t%i, %i", "buffer->readEventOffset", "buffer->readDataSize", v8, v9) )
      __debugbreak();
  }
  return Com_Challenges_ReadString(v6, outParam, outParamLen, paramSize);
}

/*
==============
Com_Challenges_ReadString
==============
*/
char Com_Challenges_ReadString(ChallengeEventBuffer *const buffer, char *const outStr, unsigned int *outLength, const unsigned int maxStrLength)
{
  __int64 v8; 
  unsigned int readEventOffset; 
  unsigned int v10; 
  __int64 v11; 

  if ( !outStr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 99, ASSERT_TYPE_ASSERT, "(outStr != nullptr)", (const char *)&queryFormat, "outStr != nullptr") )
    __debugbreak();
  if ( !outLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 100, ASSERT_TYPE_ASSERT, "(outLength != nullptr)", (const char *)&queryFormat, "outLength != nullptr") )
    __debugbreak();
  v8 = 0i64;
  *outLength = 0;
  readEventOffset = buffer->readEventOffset;
  if ( readEventOffset < buffer->writeDataSize )
  {
    while ( (unsigned int)v8 < maxStrLength )
    {
      outStr[v8] = buffer->data.m_data[readEventOffset & 0x1FFFF];
      v10 = buffer->readEventOffset + 1;
      buffer->readEventOffset = v10;
      v11 = *outLength;
      if ( !outStr[v11] )
      {
        if ( v10 > buffer->writeDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 116, ASSERT_TYPE_ASSERT, "( buffer->readEventOffset ) <= ( buffer->writeDataSize )", "%s <= %s\n\t%i, %i", "buffer->readEventOffset", "buffer->writeDataSize", v10, buffer->writeDataSize) )
          __debugbreak();
        return 1;
      }
      v8 = (unsigned int)(v11 + 1);
      *outLength = v8;
      readEventOffset = buffer->readEventOffset;
      if ( readEventOffset >= buffer->writeDataSize )
        return 0;
    }
  }
  return 0;
}

/*
==============
Com_Challenges_ShutdownMemory
==============
*/
void Com_Challenges_ShutdownMemory(void)
{
  s_comEventBuffer = NULL;
}

/*
==============
Com_Challenges_WriteData
==============
*/
char Com_Challenges_WriteData(ChallengeEventBuffer *const buffer, const void *const data, const unsigned int length)
{
  unsigned int writeEventOffset; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 39, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 40, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  if ( buffer->writeDataSize < buffer->readDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 41, ASSERT_TYPE_ASSERT, "( buffer->writeDataSize ) >= ( buffer->readDataSize )", "%s >= %s\n\t%i, %i", "buffer->writeDataSize", "buffer->readDataSize", buffer->writeDataSize, buffer->readDataSize) )
    __debugbreak();
  writeEventOffset = buffer->writeEventOffset;
  if ( writeEventOffset + length > buffer->readDataSize + 0x20000 )
    return 0;
  CircularBuffer<131072>::Write(&buffer->data, data, length, writeEventOffset);
  buffer->writeEventOffset += length;
  return 1;
}

/*
==============
Com_Challenges_WriteParam
==============
*/
bool Com_Challenges_WriteParam(const char *const param, const unsigned int paramLength)
{
  ChallengeEventBuffer *v4; 
  bool result; 
  __int64 v6; 
  __int64 v7; 

  if ( !param && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 209, ASSERT_TYPE_ASSERT, "(param != nullptr)", (const char *)&queryFormat, "param != nullptr") )
    __debugbreak();
  v4 = s_comEventBuffer;
  if ( !s_comEventBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 212, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  if ( v4->writeDataSize < v4->readDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 213, ASSERT_TYPE_ASSERT, "( buffer->writeDataSize ) >= ( buffer->readDataSize )", "%s >= %s\n\t%i, %i", "buffer->writeDataSize", "buffer->readDataSize", v4->writeDataSize, v4->readDataSize) )
    __debugbreak();
  if ( v4->writeEventOffset <= v4->writeDataSize )
  {
    LODWORD(v7) = v4->writeDataSize;
    LODWORD(v6) = v4->writeEventOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 214, ASSERT_TYPE_ASSERT, "( buffer->writeEventOffset ) > ( buffer->writeDataSize )", "%s > %s\n\t%i, %i", "buffer->writeEventOffset", "buffer->writeDataSize", v6, v7) )
      __debugbreak();
  }
  result = Com_Challenges_WriteString(v4, param, paramLength);
  if ( result )
  {
    ++v4->writeParamCount;
    return 1;
  }
  return result;
}

/*
==============
Com_Challenges_WriteString
==============
*/
char Com_Challenges_WriteString(ChallengeEventBuffer *const buffer, const char *const str, const unsigned int length)
{
  __int64 v3; 
  unsigned int writeEventOffset; 
  int v7; 

  v3 = length;
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 78, ASSERT_TYPE_ASSERT, "(str != nullptr)", (const char *)&queryFormat, "str != nullptr") )
    __debugbreak();
  if ( str[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 79, ASSERT_TYPE_ASSERT, "(str[length] == '\\0')", (const char *)&queryFormat, "str[length] == '\\0'") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 80, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  if ( buffer->writeDataSize < buffer->readDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_challenges.cpp", 81, ASSERT_TYPE_ASSERT, "( buffer->writeDataSize ) >= ( buffer->readDataSize )", "%s >= %s\n\t%i, %i", "buffer->writeDataSize", "buffer->readDataSize", buffer->writeDataSize, buffer->readDataSize) )
    __debugbreak();
  writeEventOffset = buffer->writeEventOffset;
  v7 = v3 + 1;
  if ( writeEventOffset + v7 > buffer->readDataSize + 0x20000 )
    return 0;
  CircularBuffer<131072>::Write(&buffer->data, str, v7, writeEventOffset);
  buffer->writeEventOffset += v7;
  return 1;
}

