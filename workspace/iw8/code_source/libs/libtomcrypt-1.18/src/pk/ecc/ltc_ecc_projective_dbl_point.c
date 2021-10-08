/*
==============
ltc_ecc_projective_dbl_point
==============
*/
int ltc_ecc_projective_dbl_point(ecc_point *P, ecc_point *R, void *modulus, void *mp)
{
  int result; 
  int v9; 
  void *a; 
  void *v11; 

  result = j_ltc_init_multi(&a, &v11, 0i64);
  if ( !result )
  {
    if ( P == R || (v9 = ltc_mp.copy(P->x, R->x)) == 0 && (v9 = ltc_mp.copy(P->y, R->y)) == 0 && (v9 = ltc_mp.copy(P->z, R->z)) == 0 )
    {
      v9 = ltc_mp.sqr(R->z, a);
      if ( !v9 )
      {
        v9 = ltc_mp.montgomery_reduce(a, modulus, mp);
        if ( !v9 )
        {
          v9 = ltc_mp.mul(R->z, R->y, R->z);
          if ( !v9 )
          {
            v9 = ltc_mp.montgomery_reduce(R->z, modulus, mp);
            if ( !v9 )
            {
              v9 = ltc_mp.add(R->z, R->z, R->z);
              if ( !v9 && (ltc_mp.compare(R->z, modulus) == -1 || (v9 = ltc_mp.sub(R->z, modulus, R->z)) == 0) )
              {
                v9 = ltc_mp.sub(R->x, a, v11);
                if ( !v9 && (ltc_mp.compare_d(v11, 0) != -1 || (v9 = ltc_mp.add(v11, modulus, v11)) == 0) )
                {
                  v9 = ltc_mp.add(a, R->x, a);
                  if ( !v9 && (ltc_mp.compare(a, modulus) == -1 || (v9 = ltc_mp.sub(a, modulus, a)) == 0) )
                  {
                    v9 = ltc_mp.mul(a, v11, v11);
                    if ( !v9 )
                    {
                      v9 = ltc_mp.montgomery_reduce(v11, modulus, mp);
                      if ( !v9 )
                      {
                        v9 = ltc_mp.add(v11, v11, a);
                        if ( !v9 && (ltc_mp.compare(a, modulus) == -1 || (v9 = ltc_mp.sub(a, modulus, a)) == 0) )
                        {
                          v9 = ltc_mp.add(a, v11, a);
                          if ( !v9 && (ltc_mp.compare(a, modulus) == -1 || (v9 = ltc_mp.sub(a, modulus, a)) == 0) )
                          {
                            v9 = ltc_mp.add(R->y, R->y, R->y);
                            if ( !v9 && (ltc_mp.compare(R->y, modulus) == -1 || (v9 = ltc_mp.sub(R->y, modulus, R->y)) == 0) )
                            {
                              v9 = ltc_mp.sqr(R->y, R->y);
                              if ( !v9 )
                              {
                                v9 = ltc_mp.montgomery_reduce(R->y, modulus, mp);
                                if ( !v9 )
                                {
                                  v9 = ltc_mp.sqr(R->y, v11);
                                  if ( !v9 )
                                  {
                                    v9 = ltc_mp.montgomery_reduce(v11, modulus, mp);
                                    if ( !v9 && (ltc_mp.get_digit_count(v11) <= 0 || (ltc_mp.get_digit(v11, 0) & 1) == 0 || (v9 = ltc_mp.add(v11, modulus, v11)) == 0) )
                                    {
                                      v9 = ltc_mp.div_2(v11, v11);
                                      if ( !v9 )
                                      {
                                        v9 = ltc_mp.mul(R->y, R->x, R->y);
                                        if ( !v9 )
                                        {
                                          v9 = ltc_mp.montgomery_reduce(R->y, modulus, mp);
                                          if ( !v9 )
                                          {
                                            v9 = ltc_mp.sqr(a, R->x);
                                            if ( !v9 )
                                            {
                                              v9 = ltc_mp.montgomery_reduce(R->x, modulus, mp);
                                              if ( !v9 )
                                              {
                                                v9 = ltc_mp.sub(R->x, R->y, R->x);
                                                if ( !v9 && (ltc_mp.compare_d(R->x, 0) != -1 || (v9 = ltc_mp.add(R->x, modulus, R->x)) == 0) )
                                                {
                                                  v9 = ltc_mp.sub(R->x, R->y, R->x);
                                                  if ( !v9 && (ltc_mp.compare_d(R->x, 0) != -1 || (v9 = ltc_mp.add(R->x, modulus, R->x)) == 0) )
                                                  {
                                                    v9 = ltc_mp.sub(R->y, R->x, R->y);
                                                    if ( !v9 && (ltc_mp.compare_d(R->y, 0) != -1 || (v9 = ltc_mp.add(R->y, modulus, R->y)) == 0) )
                                                    {
                                                      v9 = ltc_mp.mul(R->y, a, R->y);
                                                      if ( !v9 )
                                                      {
                                                        v9 = ltc_mp.montgomery_reduce(R->y, modulus, mp);
                                                        if ( !v9 )
                                                        {
                                                          v9 = ltc_mp.sub(R->y, v11, R->y);
                                                          if ( !v9 && (ltc_mp.compare_d(R->y, 0) != -1 || (v9 = ltc_mp.add(R->y, modulus, R->y)) == 0) )
                                                            v9 = 0;
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
    j_ltc_deinit_multi(a, v11, 0i64);
    return v9;
  }
  return result;
}

