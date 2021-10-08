/*
==============
der_length_integer
==============
*/
__int64 der_length_integer(void *num, unsigned int *outlen)
{
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  int v7; 
  unsigned int v8; 

  if ( ltc_mp.compare_d(num, 0) == -1 )
  {
    v5 = ltc_mp.count_bits(num);
    v6 = 8 - (v5 & 7) + v5;
    v7 = ltc_mp.count_lsb_bits(num) + 1;
    if ( v7 == ltc_mp.count_bits(num) && (ltc_mp.count_bits(num) & 7) == 0 )
      --v6;
    v4 = v6 >> 3;
  }
  else if ( (ltc_mp.count_bits(num) & 7) != 0 && ltc_mp.compare_d(num, 0) )
  {
    v4 = ltc_mp.unsigned_size(num);
  }
  else
  {
    v4 = ltc_mp.unsigned_size(num) + 1;
  }
  v8 = v4 + 1;
  if ( v4 >= 0x80 )
  {
    do
    {
      ++v8;
      v4 >>= 8;
    }
    while ( v4 );
  }
  *outlen = v8 + 1;
  return 0i64;
}

