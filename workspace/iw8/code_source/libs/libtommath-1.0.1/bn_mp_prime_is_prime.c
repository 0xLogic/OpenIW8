/*
==============
mp_prime_is_prime
==============
*/
int mp_prime_is_prime(mp_int *a, int t, int *result)
{
  __int64 v3; 
  __int64 v4; 
  unsigned int *v7; 
  int is_divisible; 
  int v9; 
  mp_int aa; 
  int resulta; 

  v3 = 0i64;
  v4 = t;
  *result = 0;
  if ( (unsigned int)(t - 1) > 0xFF )
    return -3;
  v7 = (unsigned int *)ltm_prime_tab;
  do
  {
    if ( !j_mp_cmp_d(a, *v7) )
    {
      *result = 1;
      return 0;
    }
    ++v7;
  }
  while ( (__int64)v7 < (__int64)&unk_144734470 );
  is_divisible = j_mp_prime_is_divisible(a, &resulta);
  if ( is_divisible )
    return is_divisible;
  if ( resulta == 1 )
    return 0;
  is_divisible = j_mp_init(&aa);
  v9 = is_divisible;
  if ( !is_divisible )
  {
    if ( v4 <= 0 )
    {
LABEL_12:
      *result = 1;
    }
    else
    {
      while ( 1 )
      {
        j_mp_set(&aa, ltm_prime_tab[v3]);
        v9 = j_mp_prime_miller_rabin(a, &aa, &resulta);
        if ( v9 || !resulta )
          break;
        if ( ++v3 >= v4 )
          goto LABEL_12;
      }
    }
    j_mp_clear(&aa);
    return v9;
  }
  return is_divisible;
}

