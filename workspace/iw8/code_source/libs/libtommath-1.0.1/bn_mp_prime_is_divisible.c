/*
==============
mp_prime_is_divisible
==============
*/
int mp_prime_is_divisible(mp_int *a, int *result)
{
  unsigned int *v4; 
  int v5; 
  unsigned int c; 

  *result = 0;
  v4 = (unsigned int *)ltm_prime_tab;
  while ( 1 )
  {
    v5 = j_mp_mod_d(a, *v4, &c);
    if ( v5 )
      break;
    if ( !c )
    {
      *result = 1;
      return 0;
    }
    if ( (__int64)++v4 >= (__int64)&unk_144734470 )
      return 0;
  }
  return v5;
}

