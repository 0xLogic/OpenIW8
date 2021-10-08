/*
==============
mp_prime_miller_rabin
==============
*/
int mp_prime_miller_rabin(mp_int *a, mp_int *b, int *result)
{
  int inited; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  mp_int v11; 
  mp_int aa; 
  mp_int c; 

  *result = 0;
  if ( j_mp_cmp_d(b, 1u) != 1 )
    return -3;
  inited = j_mp_init_copy(&aa, a);
  if ( !inited )
  {
    v7 = j_mp_sub_d(&aa, 1u, &aa);
    if ( !v7 )
    {
      v7 = j_mp_init_copy(&c, &aa);
      if ( !v7 )
      {
        v8 = j_mp_cnt_lsb(&c);
        v7 = j_mp_div_2d(&c, v8, &c, NULL);
        if ( !v7 )
        {
          v7 = j_mp_init(&v11);
          if ( !v7 )
          {
            v7 = j_mp_exptmod(b, &c, a, &v11);
            if ( !v7 )
            {
              if ( !j_mp_cmp_d(&v11, 1u) || !j_mp_cmp(&v11, &aa) )
                goto LABEL_17;
              v9 = 1;
              v10 = v8 - 1;
              if ( v10 >= 1 )
              {
                while ( j_mp_cmp(&v11, &aa) )
                {
                  v7 = j_mp_sqrmod(&v11, a, &v11);
                  if ( v7 || !j_mp_cmp_d(&v11, 1u) )
                    goto $LBL_Y_0;
                  if ( ++v9 > v10 )
                    break;
                }
              }
              if ( !j_mp_cmp(&v11, &aa) )
LABEL_17:
                *result = 1;
            }
$LBL_Y_0:
            j_mp_clear(&v11);
          }
        }
        j_mp_clear(&c);
      }
    }
    j_mp_clear(&aa);
    return v7;
  }
  return inited;
}

