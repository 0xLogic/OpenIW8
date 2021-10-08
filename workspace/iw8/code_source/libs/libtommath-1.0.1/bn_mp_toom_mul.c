/*
==============
mp_toom_mul
==============
*/
int mp_toom_mul(mp_int *a, mp_int *b, mp_int *c)
{
  int result; 
  int used; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  mp_int v12; 
  mp_int v13; 
  mp_int v14; 
  mp_int v15; 
  mp_int v16; 
  mp_int v17; 
  mp_int ba; 
  mp_int v19; 
  mp_int aa; 
  mp_int v21; 
  mp_int v22; 
  mp_int ca; 
  mp_int mp; 

  result = j_mp_init_multi(&mp, &v16, &v14, &v15, &v21, &ca, &ba, &aa, &v22, &v17, &v19, &v12, &v13, 0i64);
  if ( !result )
  {
    used = a->used;
    if ( a->used >= b->used )
      used = b->used;
    v8 = used / 3;
    v9 = 28 * (used / 3);
    v10 = j_mp_mod_2d(a, v9, &ca);
    if ( !v10 )
    {
      v10 = j_mp_copy(a, &ba);
      if ( !v10 )
      {
        j_mp_rshd(&ba, v8);
        v10 = j_mp_mod_2d(&ba, v9, &ba);
        if ( !v10 )
        {
          v10 = j_mp_copy(a, &aa);
          if ( !v10 )
          {
            v11 = 2 * v8;
            j_mp_rshd(&aa, 2 * v8);
            v10 = j_mp_mod_2d(b, v9, &v22);
            if ( !v10 )
            {
              v10 = j_mp_copy(b, &v17);
              if ( !v10 )
              {
                j_mp_rshd(&v17, v8);
                j_mp_mod_2d(&v17, v9, &v17);
                v10 = j_mp_copy(b, &v19);
                if ( !v10 )
                {
                  j_mp_rshd(&v19, v11);
                  v10 = j_mp_mul(&ca, &v22, &mp);
                  if ( !v10 )
                  {
                    v10 = j_mp_mul(&aa, &v19, &v21);
                    if ( !v10 )
                    {
                      v10 = j_mp_mul_2(&ca, &v12);
                      if ( !v10 )
                      {
                        v10 = j_mp_add(&v12, &ba, &v12);
                        if ( !v10 )
                        {
                          v10 = j_mp_mul_2(&v12, &v12);
                          if ( !v10 )
                          {
                            v10 = j_mp_add(&v12, &aa, &v12);
                            if ( !v10 )
                            {
                              v10 = j_mp_mul_2(&v22, &v13);
                              if ( !v10 )
                              {
                                v10 = j_mp_add(&v13, &v17, &v13);
                                if ( !v10 )
                                {
                                  v10 = j_mp_mul_2(&v13, &v13);
                                  if ( !v10 )
                                  {
                                    v10 = j_mp_add(&v13, &v19, &v13);
                                    if ( !v10 )
                                    {
                                      v10 = j_mp_mul(&v12, &v13, &v16);
                                      if ( !v10 )
                                      {
                                        v10 = j_mp_mul_2(&aa, &v12);
                                        if ( !v10 )
                                        {
                                          v10 = j_mp_add(&v12, &ba, &v12);
                                          if ( !v10 )
                                          {
                                            v10 = j_mp_mul_2(&v12, &v12);
                                            if ( !v10 )
                                            {
                                              v10 = j_mp_add(&v12, &ca, &v12);
                                              if ( !v10 )
                                              {
                                                v10 = j_mp_mul_2(&v19, &v13);
                                                if ( !v10 )
                                                {
                                                  v10 = j_mp_add(&v13, &v17, &v13);
                                                  if ( !v10 )
                                                  {
                                                    v10 = j_mp_mul_2(&v13, &v13);
                                                    if ( !v10 )
                                                    {
                                                      v10 = j_mp_add(&v13, &v22, &v13);
                                                      if ( !v10 )
                                                      {
                                                        v10 = j_mp_mul(&v12, &v13, &v15);
                                                        if ( !v10 )
                                                        {
                                                          v10 = j_mp_add(&aa, &ba, &v12);
                                                          if ( !v10 )
                                                          {
                                                            v10 = j_mp_add(&v12, &ca, &v12);
                                                            if ( !v10 )
                                                            {
                                                              v10 = j_mp_add(&v19, &v17, &v13);
                                                              if ( !v10 )
                                                              {
                                                                v10 = j_mp_add(&v13, &v22, &v13);
                                                                if ( !v10 )
                                                                {
                                                                  v10 = j_mp_mul(&v12, &v13, &v14);
                                                                  if ( !v10 )
                                                                  {
                                                                    v10 = j_mp_sub(&v16, &v21, &v16);
                                                                    if ( !v10 )
                                                                    {
                                                                      v10 = j_mp_sub(&v15, &mp, &v15);
                                                                      if ( !v10 )
                                                                      {
                                                                        v10 = j_mp_div_2(&v16, &v16);
                                                                        if ( !v10 )
                                                                        {
                                                                          v10 = j_mp_div_2(&v15, &v15);
                                                                          if ( !v10 )
                                                                          {
                                                                            v10 = j_mp_sub(&v14, &mp, &v14);
                                                                            if ( !v10 )
                                                                            {
                                                                              v10 = j_mp_sub(&v14, &v21, &v14);
                                                                              if ( !v10 )
                                                                              {
                                                                                v10 = j_mp_sub(&v16, &v14, &v16);
                                                                                if ( !v10 )
                                                                                {
                                                                                  v10 = j_mp_sub(&v15, &v14, &v15);
                                                                                  if ( !v10 )
                                                                                  {
                                                                                    v10 = j_mp_mul_2d(&mp, 3, &v12);
                                                                                    if ( !v10 )
                                                                                    {
                                                                                      v10 = j_mp_sub(&v16, &v12, &v16);
                                                                                      if ( !v10 )
                                                                                      {
                                                                                        v10 = j_mp_mul_2d(&v21, 3, &v12);
                                                                                        if ( !v10 )
                                                                                        {
                                                                                          v10 = j_mp_sub(&v15, &v12, &v15);
                                                                                          if ( !v10 )
                                                                                          {
                                                                                            v10 = j_mp_mul_d(&v14, 3u, &v14);
                                                                                            if ( !v10 )
                                                                                            {
                                                                                              v10 = j_mp_sub(&v14, &v16, &v14);
                                                                                              if ( !v10 )
                                                                                              {
                                                                                                v10 = j_mp_sub(&v14, &v15, &v14);
                                                                                                if ( !v10 )
                                                                                                {
                                                                                                  v10 = j_mp_sub(&v16, &v14, &v16);
                                                                                                  if ( !v10 )
                                                                                                  {
                                                                                                    v10 = j_mp_sub(&v15, &v14, &v15);
                                                                                                    if ( !v10 )
                                                                                                    {
                                                                                                      v10 = j_mp_div_3(&v16, &v16, NULL);
                                                                                                      if ( !v10 )
                                                                                                      {
                                                                                                        v10 = j_mp_div_3(&v15, &v15, NULL);
                                                                                                        if ( !v10 )
                                                                                                        {
                                                                                                          v10 = j_mp_lshd(&v16, v8);
                                                                                                          if ( !v10 )
                                                                                                          {
                                                                                                            v10 = j_mp_lshd(&v14, v11);
                                                                                                            if ( !v10 )
                                                                                                            {
                                                                                                              v10 = j_mp_lshd(&v15, 3 * v8);
                                                                                                              if ( !v10 )
                                                                                                              {
                                                                                                                v10 = j_mp_lshd(&v21, 4 * v8);
                                                                                                                if ( !v10 )
                                                                                                                {
                                                                                                                  v10 = j_mp_add(&mp, &v16, c);
                                                                                                                  if ( !v10 )
                                                                                                                  {
                                                                                                                    v10 = j_mp_add(&v14, &v15, &v12);
                                                                                                                    if ( !v10 )
                                                                                                                    {
                                                                                                                      v10 = j_mp_add(&v21, &v12, &v12);
                                                                                                                      if ( !v10 )
                                                                                                                        v10 = j_mp_add(&v12, c, c);
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
    j_mp_clear_multi(&mp, &v16, &v14, &v15, &v21, &ca, &ba, &aa, &v22, &v17, &v19, &v12, &v13, 0i64);
    return v10;
  }
  return result;
}

