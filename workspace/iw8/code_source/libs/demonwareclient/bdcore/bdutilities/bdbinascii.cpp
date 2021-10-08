/*
==============
bdBinASCII::hexlify
==============
*/

void __fastcall bdBinASCII::hexlify(const unsigned __int8 *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  ?hexlify@bdBinASCII@@SAXPEBEIPEADI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBinASCII::unhexlify
==============
*/

unsigned int __fastcall bdBinASCII::unhexlify(const char *src, const unsigned int srcLen, unsigned __int8 *dest, const unsigned int destLen)
{
  return ?unhexlify@bdBinASCII@@SAIPEBDIPEAEI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBinASCII::hexlify
==============
*/
void bdBinASCII::hexlify(const unsigned __int8 *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  const unsigned __int8 *v4; 
  __int64 v8; 
  unsigned int v9; 
  const char *v10; 
  __int64 v11; 
  unsigned __int64 v12; 

  v4 = src;
  bdHandleAssert(src != NULL, "src != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbinascii.cpp", "bdBinASCII::hexlify", 0x3Cu, "bdBinASCII::hexlify() src may not be NULL");
  bdHandleAssert(dest != NULL, "dest != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbinascii.cpp", "bdBinASCII::hexlify", 0x3Du, "bdBinASCII::hexlify() dest may not be NULL");
  v8 = 2 * srcLen;
  bdHandleAssert(destLen >= (int)v8 + 1, "destLen >= BD_BIN_TO_HEXIFIED_SIZE(srcLen)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbinascii.cpp", "bdBinASCII::hexlify", 0x40u, "bdBinASCII::hexlify() Dest buffer too small: [%d]bytes vs [%d] minimum", destLen, v8 + 1);
  v9 = 0;
  if ( srcLen )
  {
    v10 = hexLookup;
    do
    {
      v11 = 2 * v9;
      v12 = (unsigned __int64)*v4 >> 4;
      ++v9;
      ++v4;
      dest[v11] = v10[v12];
      dest[(unsigned int)(v11 + 1)] = v10[*(v4 - 1) & 0xF];
    }
    while ( v9 < srcLen );
    dest[v8] = 0;
  }
  else
  {
    dest[v8] = 0;
  }
}

/*
==============
bdBinASCII::unhexlify
==============
*/
__int64 bdBinASCII::unhexlify(const char *src, const unsigned int srcLen, unsigned __int8 *dest, const unsigned int destLen)
{
  __int64 v8; 
  __int64 v9; 
  char v10; 
  const char *v11; 
  char v12; 
  char v13; 
  char v14; 
  char *v16; 

  bdHandleAssert(src != NULL, "src != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbinascii.cpp", "bdBinASCII::unhexlify", 0x53u, "bdBinASCII::unhexlify() src may not be NULL");
  bdHandleAssert(dest != NULL, "dest != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbinascii.cpp", "bdBinASCII::unhexlify", 0x54u, "bdBinASCII::unhexlify() dest may not be NULL");
  bdHandleAssert((srcLen & 1) == 0, "(srcLen % 2 == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbinascii.cpp", "bdBinASCII::unhexlify", 0x55u, "bdBinASCII::unhexlify() srcLen must be an even number");
  bdHandleAssert(destLen >= srcLen >> 1, "destLen >= BD_HEXIFIED_TO_BIN_SIZE(srcLen)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbinascii.cpp", "bdBinASCII::unhexlify", 0x58u, "bdBinASCII::hexlify() Dest buffer too small: [%d]bytes vs [%d] minimum", destLen, srcLen >> 1);
  v8 = 0i64;
  v9 = 0i64;
  if ( !srcLen )
    return 0i64;
  while ( 1 )
  {
    v10 = src[v9];
    v11 = &src[(unsigned int)(v9 + 1)];
    if ( (unsigned __int8)(v10 - 48) > 9u && (unsigned __int8)(v10 - 65) > 5u && (unsigned __int8)(v10 - 97) > 5u )
      break;
    v12 = *v11;
    if ( (unsigned __int8)(*v11 - 48) > 9u && (unsigned __int8)(v12 - 65) > 5u && (unsigned __int8)(v12 - 97) > 5u )
      break;
    v13 = 0;
    if ( (unsigned __int8)(v10 - 48) > 9u )
    {
      if ( (unsigned __int8)(v10 - 65) > 5u )
      {
        if ( (unsigned __int8)(v10 - 97) > 5u )
        {
          LODWORD(v16) = v10;
          bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbinascii.cpp", "bdHexValueFromDigit", 0x30u, "Non-hexadecimal digit found [%c]", v16);
          v12 = *v11;
        }
        else
        {
          v13 = v10 - 87;
        }
      }
      else
      {
        v13 = v10 - 55;
      }
    }
    else
    {
      v13 = src[v9];
    }
    v14 = 0;
    if ( (unsigned __int8)(v12 - 48) > 9u )
    {
      if ( (unsigned __int8)(v12 - 65) > 5u )
      {
        if ( (unsigned __int8)(v12 - 97) > 5u )
        {
          LODWORD(v16) = v12;
          bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbinascii.cpp", "bdHexValueFromDigit", 0x30u, "Non-hexadecimal digit found [%c]", v16);
        }
        else
        {
          v14 = v12 - 87;
        }
      }
      else
      {
        v14 = v12 - 55;
      }
    }
    else
    {
      v14 = v12 - 48;
    }
    v9 = (unsigned int)(v9 + 2);
    dest[v8] = v14 | (16 * v13);
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v9 >= srcLen )
      return (unsigned int)v8;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bdUtilities/bdBinASCII", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbinascii.cpp", "bdBinASCII::unhexlify", 0x66u, "Non-hexadecimal digit found");
  return 0i64;
}

