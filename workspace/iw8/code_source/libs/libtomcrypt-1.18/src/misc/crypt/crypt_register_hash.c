/*
==============
register_hash
==============
*/
__int64 register_hash(const ltc_hash_descriptor *hash)
{
  unsigned int v1; 
  int i; 
  ltc_hash_descriptor *v4; 
  __int64 result; 
  __int64 v6; 

  v1 = 0;
  for ( i = 0; i < 32; ++i )
  {
    if ( !memcmp_0(&hash_descriptor[(__int64)i], hash, 0x80ui64) )
      return (unsigned int)i;
  }
  v4 = hash_descriptor;
  while ( v4->name )
  {
    ++v1;
    if ( (__int64)++v4 >= (__int64)&unk_156675820 )
      return 0xFFFFFFFFi64;
  }
  result = v1;
  v6 = (__int64)(int)v1 << 7;
  *(__m256i *)((char *)&hash_descriptor[0].name + v6) = *(__m256i *)&hash->name;
  *(__m256i *)((char *)&hash_descriptor[0].OID[3] + v6) = *(__m256i *)&hash->OID[3];
  *(__m256i *)((char *)&hash_descriptor[0].OID[11] + v6) = *(__m256i *)&hash->OID[11];
  *(__m256i *)((char *)&hash_descriptor[0].process + v6) = *(__m256i *)&hash->process;
  return result;
}

