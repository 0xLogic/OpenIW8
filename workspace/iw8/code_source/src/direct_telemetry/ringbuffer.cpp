/*
==============
Com_Memcpy_ToRing
==============
*/

unsigned __int64 __fastcall Com_Memcpy_ToRing(void *_dest, unsigned __int64 destSize, unsigned __int64 destOffset, const void *_src, unsigned __int64 count)
{
  return ?Com_Memcpy_ToRing@@YA_KPEAX_K1PEBX1@Z(_dest, destSize, destOffset, _src, count);
}

/*
==============
Com_Memcpy_FromRing
==============
*/

unsigned __int64 __fastcall Com_Memcpy_FromRing(void *_dest, const void *_src, unsigned __int64 srcSize, unsigned __int64 srcOffset, unsigned __int64 count)
{
  return ?Com_Memcpy_FromRing@@YA_KPEAXPEBX_K22@Z(_dest, _src, srcSize, srcOffset, count);
}

/*
==============
Com_Memcpy_FromRing
==============
*/
unsigned __int64 Com_Memcpy_FromRing(void *_dest, const void *_src, unsigned __int64 srcSize, unsigned __int64 srcOffset, unsigned __int64 count)
{
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  size_t v11; 
  char *v12; 
  unsigned __int64 v13; 
  char *v14; 

  if ( count > srcSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\direct_telemetry\\ringbuffer.cpp", 33, ASSERT_TYPE_ASSERT, "(count <= srcSize)", (const char *)&queryFormat, "count <= srcSize") )
    __debugbreak();
  v9 = srcOffset % srcSize;
  v10 = srcOffset % srcSize;
  if ( srcOffset % srcSize + count <= srcSize )
  {
    v14 = (char *)_src + v9;
    v13 = count;
    v12 = (char *)_dest;
  }
  else
  {
    v11 = srcSize - v9;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\direct_telemetry\\ringbuffer.cpp", 40, ASSERT_TYPE_ASSERT, "(firstBlockSize > 0)", (const char *)&queryFormat, "firstBlockSize > 0") )
      __debugbreak();
    memcpy_0(_dest, (char *)_src + v10, v11);
    v12 = (char *)_dest + v11;
    v13 = count - v11;
    v14 = (char *)_src;
  }
  memcpy_0(v12, v14, v13);
  return srcOffset + count;
}

/*
==============
Com_Memcpy_ToRing
==============
*/
unsigned __int64 Com_Memcpy_ToRing(void *_dest, unsigned __int64 destSize, unsigned __int64 destOffset, const void *_src, unsigned __int64 count)
{
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  size_t v11; 
  char *v12; 
  unsigned __int64 v13; 
  char *v14; 

  if ( count > destSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\direct_telemetry\\ringbuffer.cpp", 9, ASSERT_TYPE_ASSERT, "(count <= destSize)", (const char *)&queryFormat, "count <= destSize") )
    __debugbreak();
  v9 = destOffset % destSize;
  v10 = destOffset % destSize;
  if ( destOffset % destSize + count <= destSize )
  {
    v14 = (char *)_dest + v9;
    v13 = count;
    v12 = (char *)_src;
  }
  else
  {
    v11 = destSize - v9;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\direct_telemetry\\ringbuffer.cpp", 16, ASSERT_TYPE_ASSERT, "(firstBlockSize > 0)", (const char *)&queryFormat, "firstBlockSize > 0") )
      __debugbreak();
    memcpy_0((char *)_dest + v10, _src, v11);
    v12 = (char *)_src + v11;
    v13 = count - v11;
    v14 = (char *)_dest;
  }
  memcpy_0(v14, v12, v13);
  return destOffset + count;
}

