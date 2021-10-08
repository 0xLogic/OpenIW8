/*
==============
bdAlignedOffsetMalloc
==============
*/

void *__fastcall bdAlignedOffsetMalloc(const unsigned __int64 size, const unsigned __int64 align, const unsigned __int64 offset)
{
  return ?bdAlignedOffsetMalloc@@YAPEAX_K00@Z(size, align, offset);
}

/*
==============
bdAlignedOffsetRealloc
==============
*/

void *__fastcall bdAlignedOffsetRealloc(void *p, const unsigned __int64 origSize, const unsigned __int64 size, const unsigned __int64 align, const unsigned __int64 offset)
{
  return ?bdAlignedOffsetRealloc@@YAPEAXPEAX_K111@Z(p, origSize, size, align, offset);
}

/*
==============
bdAlignedOffsetFree
==============
*/

void __fastcall bdAlignedOffsetFree(void *p)
{
  ?bdAlignedOffsetFree@@YAXPEAX@Z(p);
}

/*
==============
bdAlignedOffsetFree
==============
*/
void bdAlignedOffsetFree(void *p)
{
  free(*((void **)p - 1));
}

/*
==============
bdAlignedOffsetMalloc
==============
*/
void *bdAlignedOffsetMalloc(const unsigned __int64 size, const unsigned __int64 align, const unsigned __int64 offset)
{
  unsigned __int64 v3; 
  void *result; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 

  v3 = align - 1;
  if ( ((align - 1) & align) != 0 )
  {
    bdHandleAssert(0, "BD_IS_POWER_OF_2(align)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdmemory\\bdalignedoffsetmemory.cpp", "bdAlignedOffsetMalloc", 0x15u, "bdAlignedOffsetMalloc, alignment must a power of 2.");
    return 0i64;
  }
  else
  {
    v6 = align + offset + 8;
    result = malloc(v6 + size);
    if ( result )
    {
      v7 = ~v3 & ((unsigned __int64)result + v6);
      v8 = v7 - offset;
      *(_QWORD *)(v7 - offset - 8) = result;
      if ( (v3 & v7) != 0 )
        bdHandleAssert((v3 & v8) == 0, "BD_IS_MULTIPLE_OF_M(dataPtr, align)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdmemory\\bdalignedoffsetmemory.cpp", "bdAlignedOffsetMalloc", 0x2Bu, "bdAlignedOffsetMalloc, incorrect alignment.");
      return (void *)v8;
    }
  }
  return result;
}

/*
==============
bdAlignedOffsetRealloc
==============
*/
unsigned __int64 bdAlignedOffsetRealloc(void *p, const unsigned __int64 origSize, const unsigned __int64 size, const unsigned __int64 align, const unsigned __int64 offset)
{
  unsigned __int64 v5; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  void *v11; 
  unsigned __int64 v12; 

  v5 = align - 1;
  if ( ((align - 1) & align) != 0 )
  {
    bdHandleAssert(0, "BD_IS_POWER_OF_2(align)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdmemory\\bdalignedoffsetmemory.cpp", "bdAlignedOffsetMalloc", 0x15u, "bdAlignedOffsetMalloc, alignment must a power of 2.");
    v9 = 0i64;
  }
  else
  {
    v10 = align + offset + 8;
    v11 = malloc(v10 + size);
    if ( v11 )
    {
      v12 = ~v5 & ((unsigned __int64)v11 + v10);
      v9 = v12 - offset;
      *(_QWORD *)(v12 - offset - 8) = v11;
      if ( (v5 & v12) != 0 )
        bdHandleAssert((v5 & v9) == 0, "BD_IS_MULTIPLE_OF_M(dataPtr, align)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdmemory\\bdalignedoffsetmemory.cpp", "bdAlignedOffsetMalloc", 0x2Bu, "bdAlignedOffsetMalloc, incorrect alignment.");
    }
    else
    {
      v9 = 0i64;
    }
  }
  if ( size < origSize )
    origSize = size;
  memcpy_0((void *)v9, p, origSize);
  free(*((void **)p - 1));
  return v9;
}

