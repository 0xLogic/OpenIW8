/*
==============
register_hash
==============
*/
__int64 register_hash(const ltc_hash_descriptor *hash)
{
  unsigned int v1; 
  int v3; 
  ltc_hash_descriptor *v5; 
  __int64 result; 

  v1 = 0;
  _RBP = hash_descriptor;
  v3 = 0;
  _RSI = hash;
  do
  {
    if ( !memcmp_0(&hash_descriptor[(__int64)v3], _RSI, 0x80ui64) )
      return (unsigned int)v3;
    ++v3;
  }
  while ( v3 < 32 );
  v5 = hash_descriptor;
  while ( v5->name )
  {
    ++v1;
    if ( (__int64)++v5 >= (__int64)&unk_156675820 )
      return 0xFFFFFFFFi64;
  }
  __asm { vmovups ymm0, ymmword ptr [rsi] }
  result = v1;
  _RCX = (__int64)(int)v1 << 7;
  __asm
  {
    vmovups ymmword ptr [rcx+rbp], ymm0
    vmovups ymm1, ymmword ptr [rsi+20h]
    vmovups ymmword ptr [rcx+rbp+20h], ymm1
    vmovups ymm0, ymmword ptr [rsi+40h]
    vmovups ymmword ptr [rcx+rbp+40h], ymm0
    vmovups ymm1, ymmword ptr [rsi+60h]
    vmovups ymmword ptr [rcx+rbp+60h], ymm1
  }
  return result;
}

