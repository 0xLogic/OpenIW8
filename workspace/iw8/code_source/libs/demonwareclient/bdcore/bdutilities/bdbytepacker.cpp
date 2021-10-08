/*
==============
bdBytePacker::appendBuffer
==============
*/

bool __fastcall bdBytePacker::appendBuffer(void *dest, const unsigned int destSize, const unsigned int offset, unsigned int *newOffset, const void *const src, const unsigned int writeSize)
{
  return ?appendBuffer@bdBytePacker@@SA_NPEAXIIAEAIQEBXI@Z(dest, destSize, offset, newOffset, src, writeSize);
}

/*
==============
bdBytePacker::rewindBytes
==============
*/

bool __fastcall bdBytePacker::rewindBytes(const void *const buffer, const unsigned int __formal, const unsigned int offset, unsigned int *newOffset, const unsigned int bytes)
{
  return ?rewindBytes@bdBytePacker@@SA_NQEBXIIAEAII@Z(buffer, __formal, offset, newOffset, bytes);
}

/*
==============
bdBytePacker::skipBytes
==============
*/

bool __fastcall bdBytePacker::skipBytes(const void *const buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, const unsigned int bytes)
{
  return ?skipBytes@bdBytePacker@@SA_NQEBXIIAEAII@Z(buffer, bufferSize, offset, newOffset, bytes);
}

/*
==============
bdBytePacker::appendEncodedUInt16
==============
*/

bool __fastcall bdBytePacker::appendEncodedUInt16(void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int16 value)
{
  return ?appendEncodedUInt16@bdBytePacker@@SA_NPEAXIIAEAIG@Z(buffer, bufferSize, offset, newOffset, value);
}

/*
==============
bdBytePacker::removeEncodedUInt16
==============
*/

bool __fastcall bdBytePacker::removeEncodedUInt16(const unsigned __int8 *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, unsigned __int16 *value)
{
  return ?removeEncodedUInt16@bdBytePacker@@SA_NPEBEIIAEAIAEAG@Z(buffer, bufferSize, offset, newOffset, value);
}

/*
==============
bdBytePacker::removeBuffer
==============
*/

bool __fastcall bdBytePacker::removeBuffer(const void *src, const unsigned int srcSize, const unsigned int offset, unsigned int *newOffset, void *const dest, const unsigned int readSize)
{
  return ?removeBuffer@bdBytePacker@@SA_NPEBXIIAEAIQEAXI@Z(src, srcSize, offset, newOffset, dest, readSize);
}

/*
==============
bdBytePacker::appendBuffer
==============
*/
char bdBytePacker::appendBuffer(void *dest, const unsigned int destSize, const unsigned int offset, unsigned int *newOffset, const void *const src, const unsigned int writeSize)
{
  __int64 v7; 
  unsigned int v10; 

  v7 = offset;
  *newOffset = offset + writeSize;
  if ( !dest || !src )
    return 1;
  bdHandleAssert(offset <= destSize, "validStart", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.cpp", "bdBytePacker::appendBuffer", 0x1Cu, "Offset is past the end of the destination buffer.");
  v10 = *newOffset;
  if ( v10 > destSize )
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.cpp", "bdBytePacker::appendBuffer", 0x22u, "Not enough room left to write %u bytes.", writeSize);
  if ( (unsigned int)v7 <= destSize && v10 <= destSize )
  {
    memmove_0((char *)dest + v7, src, writeSize);
    return 1;
  }
  return 0;
}

/*
==============
bdBytePacker::appendEncodedUInt16
==============
*/
char bdBytePacker::appendEncodedUInt16(void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int16 value)
{
  unsigned __int16 v5; 
  __int64 v7; 
  unsigned int v11; 
  bool v12; 
  unsigned __int8 var[40]; 

  v5 = value;
  v7 = offset;
  if ( value <= 0x7Fu )
  {
    v11 = offset + 1;
    *newOffset = offset + 1;
    v12 = offset + 1 <= bufferSize || !buffer;
    bdHandleAssert(v12, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
    if ( buffer )
    {
      if ( v11 > bufferSize )
        return !buffer;
      *((_BYTE *)buffer + v7) = v5;
    }
    if ( v11 <= bufferSize )
      return 1;
    return !buffer;
  }
  bdHandleAssert(value < 0x8000u, "value < 0x8000u", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.cpp", "bdBytePacker::appendEncodedUInt16", 0x38u, "Integer is too big.");
  var[0] = v5;
  LOBYTE(value) = HIBYTE(v5) | 0x80;
  return bdBytePacker::appendBasicType<unsigned char>(buffer, bufferSize, v7, newOffset, (const unsigned __int8 *)&value) && bdBytePacker::appendBasicType<unsigned char>(buffer, bufferSize, *newOffset, newOffset, var);
}

/*
==============
bdBytePacker::removeBuffer
==============
*/
char bdBytePacker::removeBuffer(const void *src, const unsigned int srcSize, const unsigned int offset, unsigned int *newOffset, void *const dest, const unsigned int readSize)
{
  __int64 v8; 

  v8 = offset;
  *newOffset = offset + readSize;
  if ( !dest || !src )
    return 1;
  bdHandleAssert(offset <= srcSize, "validStart", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.cpp", "bdBytePacker::removeBuffer", 0x60u, "Offset is past the end of the source buffer.");
  if ( *newOffset <= srcSize )
  {
    if ( (unsigned int)v8 <= srcSize )
    {
      memmove_0(dest, (char *)src + v8, readSize);
      return 1;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.cpp", "bdBytePacker::removeBuffer", 0x66u, "Not enough data left to read %u bytes.", readSize);
  }
  return 0;
}

/*
==============
bdBytePacker::removeEncodedUInt16
==============
*/
bool bdBytePacker::removeEncodedUInt16(const unsigned __int8 *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, unsigned __int16 *value)
{
  bool result; 
  unsigned __int8 v9; 
  unsigned __int8 var[24]; 

  var[0] = 0;
  result = bdBytePacker::removeBasicType<unsigned char>(buffer, bufferSize, offset, newOffset, var);
  if ( var[0] < 0x80u )
  {
    *value = var[0];
  }
  else
  {
    v9 = var[0] & 0x7F;
    var[0] = 0;
    result = result && bdBytePacker::removeBasicType<unsigned char>(buffer, bufferSize, *newOffset, newOffset, var);
    *value = var[0] + (v9 << 8);
  }
  return result;
}

/*
==============
bdBytePacker::rewindBytes
==============
*/
bool bdBytePacker::rewindBytes(const void *const buffer, const unsigned int __formal, const unsigned int offset, unsigned int *newOffset, const unsigned int bytes)
{
  bool v5; 

  *newOffset = offset - bytes;
  if ( !buffer )
    return 0;
  v5 = offset >= bytes;
  bdHandleAssert(offset >= bytes, "canRewind", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.cpp", "bdBytePacker::rewindBytes", 0xB6u, "Rewinding past the start of the buffer.");
  return v5;
}

/*
==============
bdBytePacker::skipBytes
==============
*/
bool bdBytePacker::skipBytes(const void *const buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, const unsigned int bytes)
{
  unsigned int v5; 
  bool v6; 

  v5 = offset + bytes;
  *newOffset = offset + bytes;
  if ( !buffer )
    return 0;
  v6 = v5 <= bufferSize;
  if ( v5 > bufferSize )
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.cpp", "bdBytePacker::skipBytes", 0xA0u, "Skipping beyond the end of the buffer.");
  return v6;
}

