/*
==============
mp_reduce
==============
*/
int mp_reduce(mp_int *x, mp_int *m, mp_int *mu)
{
  unsigned int used; 
  int result; 
  int v8; 
  int v9; 
  mp_int a; 

  used = m->used;
  result = j_mp_init_copy(&a, x);
  if ( !result )
  {
    j_mp_rshd(&a, used - 1);
    if ( used <= 0x8000000 )
      v8 = j_s_mp_mul_high_digs(&a, mu, &a, used);
    else
      v8 = j_mp_mul(&a, mu, &a);
    v9 = v8;
    if ( !v8 )
    {
      j_mp_rshd(&a, used + 1);
      v9 = j_mp_mod_2d(x, 28 * (used + 1), x);
      if ( !v9 )
      {
        v9 = j_s_mp_mul_digs(&a, m, &a, used + 1);
        if ( !v9 )
        {
          v9 = j_mp_sub(x, &a, x);
          if ( !v9 )
          {
            if ( j_mp_cmp_d(x, 0) != -1 || (j_mp_set(&a, 1u), (v9 = j_mp_lshd(&a, used + 1)) == 0) && (v9 = j_mp_add(x, &a, x)) == 0 )
            {
              if ( j_mp_cmp(x, m) != -1 )
              {
                do
                  v9 = j_s_mp_sub(x, m, x);
                while ( !v9 && j_mp_cmp(x, m) != -1 );
              }
            }
          }
        }
      }
    }
    j_mp_clear(&a);
    return v9;
  }
  return result;
}

