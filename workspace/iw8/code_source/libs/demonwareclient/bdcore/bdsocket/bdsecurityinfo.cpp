/*
==============
bdSecurityInfo::toString
==============
*/

unsigned int __fastcall bdSecurityInfo::toString(const bdSecurityKey *key, char *buffer, unsigned int len)
{
  return ?toString@bdSecurityInfo@@SAIAEBVbdSecurityKey@@PEADI@Z(key, buffer, len);
}

/*
==============
bdSecurityInfo::toString
==============
*/

unsigned int __fastcall bdSecurityInfo::toString(const bdSecurityID *id, char *buffer, unsigned int len)
{
  return ?toString@bdSecurityInfo@@SAIAEBVbdSecurityID@@PEADI@Z(id, buffer, len);
}

/*
==============
bdSecurityInfo::bufferToString
==============
*/

unsigned int __fastcall bdSecurityInfo::bufferToString(const unsigned __int8 *buffer, const unsigned int bufferLen, char *outBuffer, const unsigned int outBufferLen)
{
  return ?bufferToString@bdSecurityInfo@@KAIPEBEIPEADI@Z(buffer, bufferLen, outBuffer, outBufferLen);
}

/*
==============
bdSecurityInfo::bufferToString
==============
*/
__int64 bdSecurityInfo::bufferToString(const unsigned __int8 *buffer, const unsigned int bufferLen, char *outBuffer, const unsigned int outBufferLen)
{
  unsigned int v4; 
  char *v8; 
  __int64 v9; 

  v4 = 0;
  v8 = outBuffer;
  if ( !bufferLen )
    return (unsigned int)((_DWORD)v8 - (_DWORD)outBuffer);
  v9 = outBufferLen;
  while ( 1 )
  {
    if ( (v4 & 3) == 0 )
    {
      if ( v4 )
        v8 += bdSnprintf(v8, (const unsigned __int64)&outBuffer[v9 - (_QWORD)v8], " ");
    }
    if ( bdSnprintf(v8, (const unsigned __int64)&outBuffer[v9 - (_QWORD)v8], "%02hhx", *buffer) != 2 )
      break;
    v8 += 2;
    ++v4;
    ++buffer;
    if ( v4 >= bufferLen )
      return (unsigned int)((_DWORD)v8 - (_DWORD)outBuffer);
  }
  return 0i64;
}

/*
==============
bdSecurityInfo::toString
==============
*/
unsigned int bdSecurityInfo::toString(const bdSecurityID *id, char *buffer, unsigned int len)
{
  return bdSecurityInfo::bufferToString((const unsigned __int8 *)id, 8u, buffer, len);
}

/*
==============
bdSecurityInfo::toString
==============
*/
unsigned int bdSecurityInfo::toString(const bdSecurityKey *key, char *buffer, unsigned int len)
{
  return bdSecurityInfo::bufferToString(key->ab, 0x10u, buffer, len);
}

