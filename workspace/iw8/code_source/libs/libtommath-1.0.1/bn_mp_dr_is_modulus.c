/*
==============
mp_dr_is_modulus
==============
*/
__int64 mp_dr_is_modulus(mp_int *a)
{
  __int64 used; 
  __int64 v2; 
  unsigned int *i; 

  used = a->used;
  if ( (int)used >= 2 )
  {
    if ( (int)used <= 1 )
      return 1i64;
    v2 = 1i64;
    for ( i = a->dp + 1; *i == 0xFFFFFFF; ++i )
    {
      if ( ++v2 >= used )
        return 1i64;
    }
  }
  return 0i64;
}

