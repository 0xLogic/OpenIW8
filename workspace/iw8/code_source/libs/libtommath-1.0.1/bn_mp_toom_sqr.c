/*
==============
mp_toom_sqr
==============
*/
int mp_toom_sqr(mp_int *a, mp_int *b)
{
  int result; 
  int v5; 
  int v6; 
  mp_int v7; 
  mp_int v8; 
  mp_int v9; 
  mp_int v10; 
  mp_int ba; 
  mp_int aa; 
  mp_int v13; 
  mp_int c; 
  mp_int mp; 

  result = j_mp_init_multi(&mp, &v10, &v8, &v9, &v13, &c, &ba, &aa, &v7, 0i64);
  if ( !result )
  {
    v5 = a->used / 3;
    v6 = j_mp_mod_2d(a, 28 * v5, &c);
    if ( !v6 )
    {
      v6 = j_mp_copy(a, &ba);
      if ( !v6 )
      {
        j_mp_rshd(&ba, v5);
        v6 = j_mp_mod_2d(&ba, 28 * v5, &ba);
        if ( !v6 )
        {
          v6 = j_mp_copy(a, &aa);
          if ( !v6 )
          {
            j_mp_rshd(&aa, 2 * v5);
            v6 = j_mp_sqr(&c, &mp);
            if ( !v6 )
            {
              v6 = j_mp_sqr(&aa, &v13);
              if ( !v6 )
              {
                v6 = j_mp_mul_2(&c, &v7);
                if ( !v6 )
                {
                  v6 = j_mp_add(&v7, &ba, &v7);
                  if ( !v6 )
                  {
                    v6 = j_mp_mul_2(&v7, &v7);
                    if ( !v6 )
                    {
                      v6 = j_mp_add(&v7, &aa, &v7);
                      if ( !v6 )
                      {
                        v6 = j_mp_sqr(&v7, &v10);
                        if ( !v6 )
                        {
                          v6 = j_mp_mul_2(&aa, &v7);
                          if ( !v6 )
                          {
                            v6 = j_mp_add(&v7, &ba, &v7);
                            if ( !v6 )
                            {
                              v6 = j_mp_mul_2(&v7, &v7);
                              if ( !v6 )
                              {
                                v6 = j_mp_add(&v7, &c, &v7);
                                if ( !v6 )
                                {
                                  v6 = j_mp_sqr(&v7, &v9);
                                  if ( !v6 )
                                  {
                                    v6 = j_mp_add(&aa, &ba, &v7);
                                    if ( !v6 )
                                    {
                                      v6 = j_mp_add(&v7, &c, &v7);
                                      if ( !v6 )
                                      {
                                        v6 = j_mp_sqr(&v7, &v8);
                                        if ( !v6 )
                                        {
                                          v6 = j_mp_sub(&v10, &v13, &v10);
                                          if ( !v6 )
                                          {
                                            v6 = j_mp_sub(&v9, &mp, &v9);
                                            if ( !v6 )
                                            {
                                              v6 = j_mp_div_2(&v10, &v10);
                                              if ( !v6 )
                                              {
                                                v6 = j_mp_div_2(&v9, &v9);
                                                if ( !v6 )
                                                {
                                                  v6 = j_mp_sub(&v8, &mp, &v8);
                                                  if ( !v6 )
                                                  {
                                                    v6 = j_mp_sub(&v8, &v13, &v8);
                                                    if ( !v6 )
                                                    {
                                                      v6 = j_mp_sub(&v10, &v8, &v10);
                                                      if ( !v6 )
                                                      {
                                                        v6 = j_mp_sub(&v9, &v8, &v9);
                                                        if ( !v6 )
                                                        {
                                                          v6 = j_mp_mul_2d(&mp, 3, &v7);
                                                          if ( !v6 )
                                                          {
                                                            v6 = j_mp_sub(&v10, &v7, &v10);
                                                            if ( !v6 )
                                                            {
                                                              v6 = j_mp_mul_2d(&v13, 3, &v7);
                                                              if ( !v6 )
                                                              {
                                                                v6 = j_mp_sub(&v9, &v7, &v9);
                                                                if ( !v6 )
                                                                {
                                                                  v6 = j_mp_mul_d(&v8, 3u, &v8);
                                                                  if ( !v6 )
                                                                  {
                                                                    v6 = j_mp_sub(&v8, &v10, &v8);
                                                                    if ( !v6 )
                                                                    {
                                                                      v6 = j_mp_sub(&v8, &v9, &v8);
                                                                      if ( !v6 )
                                                                      {
                                                                        v6 = j_mp_sub(&v10, &v8, &v10);
                                                                        if ( !v6 )
                                                                        {
                                                                          v6 = j_mp_sub(&v9, &v8, &v9);
                                                                          if ( !v6 )
                                                                          {
                                                                            v6 = j_mp_div_3(&v10, &v10, NULL);
                                                                            if ( !v6 )
                                                                            {
                                                                              v6 = j_mp_div_3(&v9, &v9, NULL);
                                                                              if ( !v6 )
                                                                              {
                                                                                v6 = j_mp_lshd(&v10, v5);
                                                                                if ( !v6 )
                                                                                {
                                                                                  v6 = j_mp_lshd(&v8, 2 * v5);
                                                                                  if ( !v6 )
                                                                                  {
                                                                                    v6 = j_mp_lshd(&v9, 3 * v5);
                                                                                    if ( !v6 )
                                                                                    {
                                                                                      v6 = j_mp_lshd(&v13, 4 * v5);
                                                                                      if ( !v6 )
                                                                                      {
                                                                                        v6 = j_mp_add(&mp, &v10, b);
                                                                                        if ( !v6 )
                                                                                        {
                                                                                          v6 = j_mp_add(&v8, &v9, &v7);
                                                                                          if ( !v6 )
                                                                                          {
                                                                                            v6 = j_mp_add(&v13, &v7, &v7);
                                                                                            if ( !v6 )
                                                                                              v6 = j_mp_add(&v7, b, b);
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    j_mp_clear_multi(&mp, &v10, &v8, &v9, &v13, &c, &ba, &aa, &v7, 0i64);
    return v6;
  }
  return result;
}

