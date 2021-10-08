/*
==============
register_prng
==============
*/
__int64 register_prng(const ltc_prng_descriptor *prng)
{
  unsigned int v1; 
  int v3; 
  ltc_prng_descriptor *v5; 
  __int64 result; 

  v1 = 0;
  _RBP = prng_descriptor;
  v3 = 0;
  _RSI = prng;
  do
  {
    if ( !memcmp_0(&prng_descriptor[v3], _RSI, 0x50ui64) )
      return (unsigned int)v3;
    ++v3;
  }
  while ( v3 < 32 );
  v5 = prng_descriptor;
  while ( v5->name )
  {
    ++v1;
    if ( (__int64)++v5 >= (__int64)&unk_156678230 )
      return 0xFFFFFFFFi64;
  }
  __asm { vmovups ymm0, ymmword ptr [rsi] }
  result = v1;
  _RDX = 10i64 * (int)v1;
  __asm
  {
    vmovups ymmword ptr [rbp+rdx*8+0], ymm0
    vmovups ymm1, ymmword ptr [rsi+20h]
    vmovups ymmword ptr [rbp+rdx*8+20h], ymm1
    vmovups xmm0, xmmword ptr [rsi+40h]
    vmovups xmmword ptr [rbp+rdx*8+40h], xmm0
  }
  return result;
}

