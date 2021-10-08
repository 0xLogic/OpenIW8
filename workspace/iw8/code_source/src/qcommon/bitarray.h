/*
==============
bitarray_base<bitarray_dynamic>::setAllBits
==============
*/

void __fastcall bitarray_base<bitarray_dynamic>::setAllBits(bitarray_base<bitarray_dynamic> *this)
{
  ?setAllBits@?$bitarray_base@Vbitarray_dynamic@@@@QEAAXXZ(this);
}

/*
==============
bitarray_base<bitarray_dynamic>::setBit
==============
*/

void __fastcall bitarray_base<bitarray_dynamic>::setBit(bitarray_base<bitarray_dynamic> *this, unsigned int pos)
{
  ?setBit@?$bitarray_base@Vbitarray_dynamic@@@@QEAAXI@Z(this, pos);
}

/*
==============
bitarray_base<bitarray_dynamic>::resetAllBits
==============
*/

void __fastcall bitarray_base<bitarray_dynamic>::resetAllBits(bitarray_base<bitarray_dynamic> *this)
{
  ?resetAllBits@?$bitarray_base@Vbitarray_dynamic@@@@QEAAXXZ(this);
}

/*
==============
bitarray_base<bitarray_dynamic>::testBit
==============
*/

bool __fastcall bitarray_base<bitarray_dynamic>::testBit(bitarray_base<bitarray_dynamic> *this, unsigned int pos)
{
  return ?testBit@?$bitarray_base@Vbitarray_dynamic@@@@QEBA_NI@Z(this, pos);
}

/*
==============
bitarray_base<bitarray_dynamic>::setAllBits
==============
*/
void bitarray_base<bitarray_dynamic>::setAllBits(bitarray_base<bitarray_dynamic> *this)
{
  unsigned int v1; 
  __int64 v2; 
  _DWORD *v4; 
  unsigned int v5; 
  unsigned __int64 i; 
  __int64 v7; 
  __int64 v8; 

  v1 = *(_DWORD *)&this[8];
  v2 = 0i64;
  if ( v1 )
  {
    if ( v1 >= 4 )
    {
      v4 = *(_DWORD **)this;
      if ( *(_QWORD *)this > (unsigned __int64)this || *(_QWORD *)this + 4 * (unsigned __int64)(v1 - 1) < (unsigned __int64)this )
      {
        v5 = v1 & 0xFFFFFFFC;
        do
          v2 = (unsigned int)(v2 + 4);
        while ( (unsigned int)v2 < v5 );
        for ( i = (16 * ((unsigned __int64)v5 >> 2)) >> 2; i; --i )
          *v4++ = -1;
      }
    }
    if ( (unsigned int)v2 < v1 )
    {
      v7 = 4 * v2;
      v8 = v1 - (unsigned int)v2;
      do
      {
        v7 += 4i64;
        *(_DWORD *)(v7 + *(_QWORD *)this - 4) = -1;
        --v8;
      }
      while ( v8 );
    }
  }
}

/*
==============
bitarray_base<bitarray_dynamic>::testBit
==============
*/
bool bitarray_base<bitarray_dynamic>::testBit(bitarray_base<bitarray_dynamic> *this, unsigned int pos)
{
  unsigned __int64 v3; 
  int v6; 

  v3 = pos;
  if ( pos >= *(_DWORD *)&this[12] )
  {
    v6 = *(_DWORD *)&this[12];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", pos, v6) )
      __debugbreak();
  }
  return ((0x80000000 >> (v3 & 0x1F)) & *(_DWORD *)(*(_QWORD *)this + 4 * (v3 >> 5))) != 0;
}

/*
==============
bitarray_base<bitarray_dynamic>::setBit
==============
*/
void bitarray_base<bitarray_dynamic>::setBit(bitarray_base<bitarray_dynamic> *this, unsigned int pos)
{
  unsigned __int64 v3; 
  int v5; 

  v3 = pos;
  if ( pos >= *(_DWORD *)&this[12] )
  {
    v5 = *(_DWORD *)&this[12];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", pos, v5) )
      __debugbreak();
  }
  *(_DWORD *)(*(_QWORD *)this + 4 * (v3 >> 5)) |= 0x80000000 >> (v3 & 0x1F);
}

/*
==============
bitarray_base<bitarray_dynamic>::resetAllBits
==============
*/
void bitarray_base<bitarray_dynamic>::resetAllBits(bitarray_base<bitarray_dynamic> *this)
{
  unsigned int v1; 
  unsigned int v3; 
  _DWORD *v4; 
  unsigned int v5; 
  unsigned __int64 i; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v1 = *(_DWORD *)&this[8];
  v3 = 0;
  if ( v1 )
  {
    if ( v1 >= 4 )
    {
      v4 = *(_DWORD **)this;
      if ( *(_QWORD *)this > (unsigned __int64)this || *(_QWORD *)this + 4 * (unsigned __int64)(v1 - 1) < (unsigned __int64)this )
      {
        v5 = v1 & 0xFFFFFFFC;
        do
          v3 += 4;
        while ( v3 < v5 );
        for ( i = (16 * ((unsigned __int64)v5 >> 2)) >> 2; i; --i )
          *v4++ = 0;
      }
    }
    if ( v3 < v1 )
    {
      v7 = v3;
      v8 = v1 - v3;
      v9 = 4 * v7;
      do
      {
        v9 += 4i64;
        *(_DWORD *)(v9 + *(_QWORD *)this - 4) = 0;
        --v8;
      }
      while ( v8 );
    }
  }
}

