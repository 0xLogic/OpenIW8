/*
==============
Com_RleCompress
==============
*/

RleCompressResult __fastcall Com_RleCompress(const unsigned __int8 *data, unsigned int size, unsigned __int8 *outBuffer, unsigned int maxOutSize, unsigned int *outSize)
{
  return ?Com_RleCompress@@YA?AW4RleCompressResult@@PEBEIPEAEIPEAI@Z(data, size, outBuffer, maxOutSize, outSize);
}

/*
==============
Com_RleUncompress
==============
*/

RleUncompressResult __fastcall Com_RleUncompress(const unsigned __int8 *compressedData, unsigned int compressedSize, unsigned __int8 *uncompressedBuffer, unsigned int uncompressedSize)
{
  return ?Com_RleUncompress@@YA?AW4RleUncompressResult@@PEBEIPEAEI@Z(compressedData, compressedSize, uncompressedBuffer, uncompressedSize);
}

/*
==============
Com_RleCompress
==============
*/
__int64 Com_RleCompress(const unsigned __int8 *data, unsigned int size, unsigned __int8 *outBuffer, unsigned int maxOutSize, unsigned int *outSize)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  int v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  unsigned int i; 
  __int64 result; 

  v5 = 0i64;
  v6 = 0i64;
  v7 = 0i64;
  v10 = 8;
  if ( size )
  {
    while ( 1 )
    {
      if ( v10 == 8 )
      {
        v10 = 0;
        if ( (_DWORD)v6 == maxOutSize )
          break;
        v5 = (unsigned int)v6;
        v6 = (unsigned int)(v6 + 1);
        outBuffer[v5] = 0;
      }
      v11 = data[v7];
      v12 = (unsigned int)(v7 + 1);
      for ( i = 1; i != 256; ++i )
      {
        if ( (_DWORD)v12 == size )
          break;
        if ( data[v12] != v11 )
          break;
        v12 = (unsigned int)(v12 + 1);
      }
      if ( (_DWORD)v6 == maxOutSize )
        break;
      outBuffer[v6] = v11;
      v6 = (unsigned int)(v6 + 1);
      if ( i <= 1 )
      {
        outBuffer[v5] |= 1 << v10;
      }
      else
      {
        if ( (_DWORD)v6 == maxOutSize )
          break;
        outBuffer[v6] = i - 1;
        v6 = (unsigned int)(v6 + 1);
      }
      ++v10;
      v7 = i + (unsigned int)v7;
      if ( (_DWORD)v7 == size )
        goto LABEL_15;
    }
    result = 1i64;
    *outSize = v6;
  }
  else
  {
LABEL_15:
    *outSize = v6;
    return 0i64;
  }
  return result;
}

/*
==============
Com_RleUncompress
==============
*/
__int64 Com_RleUncompress(const unsigned __int8 *compressedData, unsigned int compressedSize, unsigned __int8 *uncompressedBuffer, unsigned int uncompressedSize)
{
  int v4; 
  __int64 v5; 
  __int64 v6; 
  int v8; 
  unsigned __int8 v9; 
  int v10; 

  v4 = 0;
  v5 = 0i64;
  v6 = 0i64;
  v8 = 8;
  if ( !uncompressedSize )
  {
LABEL_15:
    if ( (_DWORD)v5 != compressedSize )
      return 3i64;
    return 0i64;
  }
LABEL_2:
  if ( v8 == 8 )
  {
    v8 = 0;
    if ( (_DWORD)v5 == compressedSize )
      return 2i64;
    v4 = v5;
    v5 = (unsigned int)(v5 + 1);
  }
  if ( (_DWORD)v5 == compressedSize )
    return 2i64;
  v9 = compressedData[v5];
  v5 = (unsigned int)(v5 + 1);
  if ( (compressedData[v4] & (unsigned __int8)(1 << v8)) != 0 )
  {
    v10 = 1;
    goto LABEL_11;
  }
  if ( (_DWORD)v5 == compressedSize )
    return 2i64;
  v10 = compressedData[v5] + 1;
  if ( compressedData[v5] )
  {
    v5 = (unsigned int)(v5 + 1);
LABEL_11:
    ++v8;
    while ( (_DWORD)v6 != uncompressedSize )
    {
      uncompressedBuffer[v6] = v9;
      v6 = (unsigned int)(v6 + 1);
      if ( !--v10 )
      {
        if ( (_DWORD)v6 != uncompressedSize )
          goto LABEL_2;
        goto LABEL_15;
      }
    }
    return 3i64;
  }
  return 1i64;
}

