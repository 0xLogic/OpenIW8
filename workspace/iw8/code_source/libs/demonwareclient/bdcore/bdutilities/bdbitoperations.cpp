/*
==============
bdBitOperations::nextPowerOf2
==============
*/

unsigned int __fastcall bdBitOperations::nextPowerOf2(const unsigned int v)
{
  return ?nextPowerOf2@bdBitOperations@@SAII@Z(v);
}

/*
==============
bdBitOperations::highBitNumber
==============
*/

unsigned int __fastcall bdBitOperations::highBitNumber(unsigned int v)
{
  return ?highBitNumber@bdBitOperations@@SAII@Z(v);
}

/*
==============
bdBitOperations::highBitNumber
==============
*/
__int64 bdBitOperations::highBitNumber(unsigned int v)
{
  unsigned int v2; 
  int v3; 
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  int v8; 
  int v9; 
  unsigned int v10; 

  bdHandleAssert(v != 0, "v != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbitoperations.cpp", "bdBitOperations::highBitNumber", 0x23u, "bdBitOperations::highBitNumber, no bits set, so cannot find highest.");
  v2 = v & 0xFFFF0000;
  v3 = (v & 0xFFFF0000) != 0 ? 0x10 : 0;
  v4 = v >> ((v & 0xFFFF0000) != 0 ? 0x10 : 0);
  if ( (v4 & 0xFF00) != 0 )
  {
    v3 = 8;
    if ( v2 )
      v3 = 24;
    v4 >>= 8;
  }
  v5 = v4 >> 4;
  if ( (v4 & 0xF0) == 0 )
    v5 = v4;
  v6 = v3 | 4;
  if ( (v4 & 0xF0) == 0 )
    v6 = v3;
  v7 = v5 >> 2;
  v8 = v5 & 0xC;
  if ( (v5 & 0xC) == 0 )
    v7 = v5;
  v9 = v6 | 2;
  v10 = v7 >> 1;
  if ( !v8 )
    v9 = v6;
  return v9 | v10;
}

/*
==============
bdBitOperations::nextPowerOf2
==============
*/
__int64 bdBitOperations::nextPowerOf2(const unsigned int v)
{
  unsigned int v2; 
  __int64 result; 

  v2 = (((((((((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 4) | ((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 8) | ((((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 4) | ((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 16) | ((((((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 4) | ((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 8) | ((((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 4) | ((v | (v >> 1)) >> 2) | v | (v >> 1)) & ~((((((((((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 4) | ((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 8) | ((((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 4) | ((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 16) | ((((((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 4) | ((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 8) | ((((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 4) | ((v | (v >> 1)) >> 2) | v | (v >> 1)) >> 1);
  result = 2 * v2;
  if ( v2 == v )
    return v2;
  return result;
}

