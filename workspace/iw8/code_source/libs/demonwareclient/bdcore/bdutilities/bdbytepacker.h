/*
==============
bdBytePacker::appendBasicType<unsigned __int64>
==============
*/

bool __fastcall bdBytePacker::appendBasicType<unsigned __int64>(void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int64 *var)
{
  return ??$appendBasicType@_K@bdBytePacker@@SA_NPEAXIIAEAIAEB_K@Z(buffer, bufferSize, offset, newOffset, var);
}

/*
==============
bdBytePacker::removeBasicType<unsigned __int64>
==============
*/

bool __fastcall bdBytePacker::removeBasicType<unsigned __int64>(const void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, unsigned __int64 *var)
{
  return ??$removeBasicType@_K@bdBytePacker@@SA_NPEBXIIAEAIAEA_K@Z(buffer, bufferSize, offset, newOffset, var);
}

/*
==============
bdBytePacker::removeBasicType<bool>
==============
*/

bool __fastcall bdBytePacker::removeBasicType<bool>(const void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, bool *var)
{
  return ??$removeBasicType@_N@bdBytePacker@@SA_NPEBXIIAEAIAEA_N@Z(buffer, bufferSize, offset, newOffset, var);
}

/*
==============
bdBytePacker::appendBasicType<bool>
==============
*/

bool __fastcall bdBytePacker::appendBasicType<bool>(void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, const bool *var)
{
  return ??$appendBasicType@_N@bdBytePacker@@SA_NPEAXIIAEAIAEB_N@Z(buffer, bufferSize, offset, newOffset, var);
}

/*
==============
bdBytePacker::appendBasicType<unsigned __int64>
==============
*/
char bdBytePacker::appendBasicType<unsigned __int64>(void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int64 *var)
{
  __int64 v5; 
  unsigned int v8; 
  bool v9; 

  v5 = offset;
  v8 = offset + 8;
  *newOffset = offset + 8;
  v9 = offset + 8 <= bufferSize || !buffer;
  bdHandleAssert(v9, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( !buffer )
  {
LABEL_8:
    if ( v8 <= bufferSize )
      return 1;
    return !buffer;
  }
  if ( v8 <= bufferSize )
  {
    *(double *)((char *)buffer + v5) = *(double *)var;
    goto LABEL_8;
  }
  return !buffer;
}

/*
==============
bdBytePacker::removeBasicType<unsigned __int64>
==============
*/
bool bdBytePacker::removeBasicType<unsigned __int64>(const void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, unsigned __int64 *var)
{
  unsigned int v5; 

  v5 = offset + 8;
  *newOffset = offset + 8;
  if ( buffer )
  {
    if ( v5 > bufferSize )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
    else
      *var = *(_QWORD *)((char *)buffer + offset);
  }
  return v5 <= bufferSize || !buffer;
}

/*
==============
bdBytePacker::appendBasicType<bool>
==============
*/
char bdBytePacker::appendBasicType<bool>(void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, const bool *var)
{
  __int64 v5; 
  unsigned int v8; 
  bool v9; 

  v5 = offset;
  v8 = offset + 1;
  *newOffset = offset + 1;
  v9 = offset + 1 <= bufferSize || !buffer;
  bdHandleAssert(v9, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !buffer )
  {
LABEL_8:
    if ( v8 <= bufferSize )
      return 1;
    return !buffer;
  }
  if ( v8 <= bufferSize )
  {
    *((_BYTE *)buffer + v5) = *var;
    goto LABEL_8;
  }
  return !buffer;
}

/*
==============
bdBytePacker::removeBasicType<bool>
==============
*/
bool bdBytePacker::removeBasicType<bool>(const void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset, bool *var)
{
  unsigned int v5; 

  v5 = offset + 1;
  *newOffset = offset + 1;
  if ( buffer )
  {
    if ( v5 > bufferSize )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      *var = *((_BYTE *)buffer + offset);
  }
  return v5 <= bufferSize || !buffer;
}

