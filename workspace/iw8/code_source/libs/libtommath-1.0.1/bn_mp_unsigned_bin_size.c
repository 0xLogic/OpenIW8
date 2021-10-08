/*
==============
mp_unsigned_bin_size
==============
*/
__int64 mp_unsigned_bin_size(mp_int *a)
{
  int v1; 

  v1 = j_mp_count_bits(a);
  return (unsigned int)((v1 & 7) != 0) + v1 / 8;
}

