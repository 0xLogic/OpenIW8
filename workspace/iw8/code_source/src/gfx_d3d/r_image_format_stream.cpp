/*
==============
BufferedStream_ReadData
==============
*/

BufferedStreamStatus __fastcall BufferedStream_ReadData(BufferedStream *stream, unsigned __int8 *dst, unsigned __int64 bytesToRead)
{
  return ?BufferedStream_ReadData@@YA?AW4BufferedStreamStatus@@PEAUBufferedStream@@PEAE_K@Z(stream, dst, bytesToRead);
}

/*
==============
BufferedStream_WriteData
==============
*/

BufferedStreamStatus __fastcall BufferedStream_WriteData(BufferedStream *stream, unsigned __int8 *src, unsigned __int64 bytesToWrite)
{
  return ?BufferedStream_WriteData@@YA?AW4BufferedStreamStatus@@PEAUBufferedStream@@PEAE_K@Z(stream, src, bytesToWrite);
}

/*
==============
BufferedStreamReader::ReadData
==============
*/

BufferedStreamStatus __fastcall BufferedStreamReader::ReadData(BufferedStreamReader *this, unsigned __int8 *dst, unsigned __int64 bytesToRead)
{
  return ?ReadData@BufferedStreamReader@@QEAA?AW4BufferedStreamStatus@@PEAE_K@Z(this, dst, bytesToRead);
}

/*
==============
BufferedStreamReader::PeekU8
==============
*/

unsigned __int8 __fastcall BufferedStreamReader::PeekU8(BufferedStreamReader *this)
{
  return ?PeekU8@BufferedStreamReader@@QEAAEXZ(this);
}

/*
==============
BufferedStream_MemoryStreamInit
==============
*/

void __fastcall BufferedStream_MemoryStreamInit(BufferedStream *stream, unsigned __int8 *buffer, unsigned __int64 bufferSize)
{
  ?BufferedStream_MemoryStreamInit@@YAXPEAUBufferedStream@@PEAE_K@Z(stream, buffer, bufferSize);
}

/*
==============
BufferedStreamWriter::WriteString
==============
*/

BufferedStreamStatus __fastcall BufferedStreamWriter::WriteString(BufferedStreamWriter *this, const char *buffer)
{
  return ?WriteString@BufferedStreamWriter@@QEAA?AW4BufferedStreamStatus@@PEBD@Z(this, buffer);
}

/*
==============
BufferedStreamReader::ReadString
==============
*/

BufferedStreamStatus __fastcall BufferedStreamReader::ReadString(BufferedStreamReader *this, char *outBuffer, unsigned __int64 bufferSize)
{
  return ?ReadString@BufferedStreamReader@@QEAA?AW4BufferedStreamStatus@@PEAD_K@Z(this, outBuffer, bufferSize);
}

/*
==============
BufferedStreamWriter::WriteData
==============
*/

BufferedStreamStatus __fastcall BufferedStreamWriter::WriteData(BufferedStreamWriter *this, unsigned __int8 *src, unsigned __int64 bytesToWrite)
{
  return ?WriteData@BufferedStreamWriter@@QEAA?AW4BufferedStreamStatus@@PEAE_K@Z(this, src, bytesToWrite);
}

/*
==============
BufferedInputStream_RefillZeros
==============
*/
__int64 BufferedInputStream_RefillZeros(BufferedStream *stream)
{
  __int64 result; 

  memset_0(zeroBuffer, 0, sizeof(zeroBuffer));
  stream->start = zeroBuffer;
  stream->end = (unsigned __int8 *)&unk_152A814B0;
  result = *(unsigned int *)stream->status;
  stream->current = zeroBuffer;
  return result;
}

/*
==============
BufferedStream_MemoryStreamGetPosition
==============
*/
signed __int64 BufferedStream_MemoryStreamGetPosition(BufferedStream *stream)
{
  return stream->current - stream->start;
}

/*
==============
BufferedStream_MemoryStreamInit
==============
*/
void BufferedStream_MemoryStreamInit(BufferedStream *stream, unsigned __int8 *buffer, unsigned __int64 bufferSize)
{
  stream->start = buffer;
  stream->end = &buffer[bufferSize];
  stream->GetPosition = (unsigned __int64 (__fastcall *)(BufferedStream *))BufferedStream_MemoryStreamGetPosition;
  stream->SetPosition = BufferedStream_MemoryStreamSetPosition;
  stream->RefillBuffer = BufferedStream_MemoryStreamRefill;
  stream->current = buffer;
  *(_DWORD *)stream->status = 0;
}

/*
==============
BufferedStream_MemoryStreamRefill
==============
*/
__int64 BufferedStream_MemoryStreamRefill(BufferedStream *stream)
{
  *(_DWORD *)stream->status = 1;
  stream->RefillBuffer = (BufferedStreamStatus (__fastcall *)(BufferedStream *))BufferedInputStream_RefillZeros;
  return BufferedInputStream_RefillZeros(stream);
}

/*
==============
BufferedStream_MemoryStreamSetPosition
==============
*/
__int64 BufferedStream_MemoryStreamSetPosition(BufferedStream *stream, unsigned __int64 position)
{
  unsigned __int8 *start; 
  unsigned __int8 *v3; 

  start = stream->start;
  v3 = &stream->start[position];
  stream->current = v3;
  if ( v3 >= start && v3 < stream->end )
    return *(unsigned int *)stream->status;
  *(_DWORD *)stream->status = 3;
  return 3i64;
}

/*
==============
BufferedStream_ReadData
==============
*/
__int64 BufferedStream_ReadData(BufferedStream *stream, unsigned __int8 *dst, unsigned __int64 bytesToRead)
{
  unsigned __int8 *v4; 
  unsigned __int8 *current; 
  unsigned __int8 v7; 

  v4 = dst;
  if ( !dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_stream.cpp", 68, ASSERT_TYPE_ASSERT, "(dst)", (const char *)&queryFormat, "dst") )
    __debugbreak();
  for ( ; bytesToRead; --bytesToRead )
  {
    current = stream->current;
    if ( current >= stream->end )
    {
      stream->RefillBuffer(stream);
      current = stream->current;
    }
    v7 = *current;
    stream->current = current + 1;
    *v4++ = v7;
  }
  return *(unsigned int *)stream->status;
}

/*
==============
BufferedStream_WriteData
==============
*/
__int64 BufferedStream_WriteData(BufferedStream *stream, unsigned __int8 *src, unsigned __int64 bytesToWrite)
{
  unsigned __int8 *v4; 
  unsigned __int8 *current; 
  unsigned __int8 v7; 

  v4 = src;
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_stream.cpp", 86, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( bytesToWrite )
  {
    current = stream->current;
    do
    {
      if ( current >= stream->end )
      {
        stream->RefillBuffer(stream);
        current = stream->current;
      }
      v7 = *v4++;
      *current = v7;
      current = ++stream->current;
      --bytesToWrite;
    }
    while ( bytesToWrite );
  }
  return *(unsigned int *)stream->status;
}

/*
==============
BufferedStreamReader::PeekU8
==============
*/
__int64 BufferedStreamReader::PeekU8(BufferedStreamReader *this)
{
  BufferedStream *m_stream; 

  m_stream = this->m_stream;
  if ( this->m_stream->current < this->m_stream->end )
    return *m_stream->current;
  m_stream->RefillBuffer(this->m_stream);
  return *this->m_stream->current;
}

/*
==============
BufferedStreamReader::ReadData
==============
*/
__int64 BufferedStreamReader::ReadData(BufferedStreamReader *this, unsigned __int8 *dst, unsigned __int64 bytesToRead)
{
  BufferedStream *m_stream; 
  unsigned __int8 *v5; 
  unsigned __int8 *current; 
  unsigned __int8 v7; 

  m_stream = this->m_stream;
  v5 = dst;
  if ( !dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_stream.cpp", 68, ASSERT_TYPE_ASSERT, "(dst)", (const char *)&queryFormat, "dst") )
    __debugbreak();
  for ( ; bytesToRead; --bytesToRead )
  {
    current = m_stream->current;
    if ( current >= m_stream->end )
    {
      m_stream->RefillBuffer(m_stream);
      current = m_stream->current;
    }
    v7 = *current;
    m_stream->current = current + 1;
    *v5++ = v7;
  }
  return *(unsigned int *)m_stream->status;
}

/*
==============
BufferedStreamReader::ReadString
==============
*/
__int64 BufferedStreamReader::ReadString(BufferedStreamReader *this, char *outBuffer, unsigned __int64 bufferSize)
{
  unsigned __int64 i; 
  BufferedStream *m_stream; 
  unsigned __int8 *current; 
  char v9; 

  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_stream.cpp", 123, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  if ( !bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_stream.cpp", 124, ASSERT_TYPE_ASSERT, "(bufferSize > 0)", (const char *)&queryFormat, "bufferSize > 0") )
    __debugbreak();
  for ( i = 0i64; ; ++i )
  {
    m_stream = this->m_stream;
    if ( this->m_stream->current >= this->m_stream->end )
    {
      m_stream->RefillBuffer(this->m_stream);
      m_stream = this->m_stream;
    }
    current = m_stream->current;
    v9 = *current;
    m_stream->current = current + 1;
    if ( i >= bufferSize )
      break;
    outBuffer[i] = v9;
    if ( !v9 )
      return *(unsigned int *)this->m_stream->status;
  }
  outBuffer[bufferSize - 1] = 0;
  *(_DWORD *)this->m_stream->status = 4;
  return *(unsigned int *)this->m_stream->status;
}

/*
==============
BufferedStreamWriter::WriteData
==============
*/
__int64 BufferedStreamWriter::WriteData(BufferedStreamWriter *this, unsigned __int8 *src, unsigned __int64 bytesToWrite)
{
  BufferedStream *m_stream; 
  unsigned __int8 *v5; 
  unsigned __int8 *current; 
  unsigned __int8 v7; 

  m_stream = this->m_stream;
  v5 = src;
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_stream.cpp", 86, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( bytesToWrite )
  {
    current = m_stream->current;
    do
    {
      if ( current >= m_stream->end )
      {
        m_stream->RefillBuffer(m_stream);
        current = m_stream->current;
      }
      v7 = *v5++;
      *current = v7;
      current = ++m_stream->current;
      --bytesToWrite;
    }
    while ( bytesToWrite );
  }
  return *(unsigned int *)m_stream->status;
}

/*
==============
BufferedStreamWriter::WriteString
==============
*/
__int64 BufferedStreamWriter::WriteString(BufferedStreamWriter *this, const char *buffer)
{
  const char *v2; 
  BufferedStream *m_stream; 
  unsigned __int8 v5; 

  v2 = buffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_stream.cpp", 165, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  do
  {
    m_stream = this->m_stream;
    if ( this->m_stream->current >= this->m_stream->end )
    {
      m_stream->RefillBuffer(this->m_stream);
      m_stream = this->m_stream;
    }
    v5 = *v2++;
    *m_stream->current = v5;
    ++this->m_stream->current;
  }
  while ( v5 );
  return *(unsigned int *)this->m_stream->status;
}

