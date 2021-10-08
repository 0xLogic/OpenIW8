/*
==============
ltc_ecc_is_valid_idx
==============
*/
_BOOL8 ltc_ecc_is_valid_idx(int n)
{
  int v1; 
  const ltc_ecc_set_type *v2; 

  v1 = 0;
  if ( ltc_ecc_sets[0].size )
  {
    v2 = ltc_ecc_sets;
    do
    {
      ++v1;
      ++v2;
    }
    while ( v2->size );
  }
  return n >= -1 && n < v1;
}

