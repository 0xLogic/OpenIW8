/*
==============
register_prng
==============
*/
__int64 register_prng(const ltc_prng_descriptor *prng)
{
  unsigned int v1; 
  int i; 
  ltc_prng_descriptor *v4; 
  __int64 result; 
  __int64 v6; 

  v1 = 0;
  for ( i = 0; i < 32; ++i )
  {
    if ( !memcmp_0(&prng_descriptor[i], prng, 0x50ui64) )
      return (unsigned int)i;
  }
  v4 = prng_descriptor;
  while ( v4->name )
  {
    ++v1;
    if ( (__int64)++v4 >= (__int64)&unk_156678230 )
      return 0xFFFFFFFFi64;
  }
  result = v1;
  v6 = (int)v1;
  *(__m256i *)&prng_descriptor[v6].name = *(__m256i *)&prng->name;
  *(__m256i *)&prng_descriptor[v6].ready = *(__m256i *)&prng->ready;
  *(_OWORD *)&prng_descriptor[v6].pimport = *(_OWORD *)&prng->pimport;
  return result;
}

