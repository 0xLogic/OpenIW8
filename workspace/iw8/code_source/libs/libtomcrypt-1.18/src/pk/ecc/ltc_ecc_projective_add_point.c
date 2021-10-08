/*
==============
ltc_ecc_projective_add_point
==============
*/
int ltc_ecc_projective_add_point(ecc_point *P, ecc_point *Q, ecc_point *R, void *modulus, void *mp)
{
  int result; 
  int v10; 
  void *z; 
  void *v12; 
  void *v13; 
  void *a; 
  void *v15; 
  void *v16; 
  void *v17; 
  void *v18; 

  result = j_ltc_init_multi(&a, &v16, &v15, &v17, &v18, 0i64);
  if ( !result )
  {
    v10 = ltc_mp.sub(modulus, Q->y, a);
    if ( !v10 )
    {
      if ( !ltc_mp.compare(P->x, Q->x) )
      {
        z = Q->z;
        if ( z )
        {
          if ( !ltc_mp.compare(P->z, z) && (!ltc_mp.compare(P->y, Q->y) || !ltc_mp.compare(P->y, a)) )
          {
            j_ltc_deinit_multi(a, v16, v15, v17, v18, 0i64);
            return j_ltc_ecc_projective_dbl_point(P, R, modulus, mp);
          }
        }
      }
      v10 = ltc_mp.copy(P->x, v15);
      if ( !v10 )
      {
        v10 = ltc_mp.copy(P->y, v17);
        if ( !v10 )
        {
          v10 = ltc_mp.copy(P->z, v18);
          if ( !v10 )
          {
            v12 = Q->z;
            if ( !v12 )
              goto LABEL_21;
            v10 = ltc_mp.sqr(v12, a);
            if ( !v10 )
            {
              v10 = ltc_mp.montgomery_reduce(a, modulus, mp);
              if ( !v10 )
              {
                v10 = ltc_mp.mul(a, v15, v15);
                if ( !v10 )
                {
                  v10 = ltc_mp.montgomery_reduce(v15, modulus, mp);
                  if ( !v10 )
                  {
                    v10 = ltc_mp.mul(Q->z, a, a);
                    if ( !v10 )
                    {
                      v10 = ltc_mp.montgomery_reduce(a, modulus, mp);
                      if ( !v10 )
                      {
                        v10 = ltc_mp.mul(a, v17, v17);
                        if ( !v10 )
                        {
                          v10 = ltc_mp.montgomery_reduce(v17, modulus, mp);
                          if ( !v10 )
                          {
LABEL_21:
                            v10 = ltc_mp.sqr(v18, a);
                            if ( !v10 )
                            {
                              v10 = ltc_mp.montgomery_reduce(a, modulus, mp);
                              if ( !v10 )
                              {
                                v10 = ltc_mp.mul(Q->x, a, v16);
                                if ( !v10 )
                                {
                                  v10 = ltc_mp.montgomery_reduce(v16, modulus, mp);
                                  if ( !v10 )
                                  {
                                    v10 = ltc_mp.mul(v18, a, a);
                                    if ( !v10 )
                                    {
                                      v10 = ltc_mp.montgomery_reduce(a, modulus, mp);
                                      if ( !v10 )
                                      {
                                        v10 = ltc_mp.mul(Q->y, a, a);
                                        if ( !v10 )
                                        {
                                          v10 = ltc_mp.montgomery_reduce(a, modulus, mp);
                                          if ( !v10 )
                                          {
                                            v10 = ltc_mp.sub(v17, a, v17);
                                            if ( !v10 && (ltc_mp.compare_d(v17, 0) != -1 || (v10 = ltc_mp.add(v17, modulus, v17)) == 0) )
                                            {
                                              v10 = ltc_mp.add(a, a, a);
                                              if ( !v10 && (ltc_mp.compare(a, modulus) == -1 || (v10 = ltc_mp.sub(a, modulus, a)) == 0) )
                                              {
                                                v10 = ltc_mp.add(a, v17, a);
                                                if ( !v10 && (ltc_mp.compare(a, modulus) == -1 || (v10 = ltc_mp.sub(a, modulus, a)) == 0) )
                                                {
                                                  v10 = ltc_mp.sub(v15, v16, v15);
                                                  if ( !v10 && (ltc_mp.compare_d(v15, 0) != -1 || (v10 = ltc_mp.add(v15, modulus, v15)) == 0) )
                                                  {
                                                    v10 = ltc_mp.add(v16, v16, v16);
                                                    if ( !v10 && (ltc_mp.compare(v16, modulus) == -1 || (v10 = ltc_mp.sub(v16, modulus, v16)) == 0) )
                                                    {
                                                      v10 = ltc_mp.add(v16, v15, v16);
                                                      if ( !v10 && (ltc_mp.compare(v16, modulus) == -1 || (v10 = ltc_mp.sub(v16, modulus, v16)) == 0) )
                                                      {
                                                        v13 = Q->z;
                                                        if ( !v13 || (v10 = ltc_mp.mul(v18, v13, v18)) == 0 && (v10 = ltc_mp.montgomery_reduce(v18, modulus, mp)) == 0 )
                                                        {
                                                          v10 = ltc_mp.mul(v18, v15, v18);
                                                          if ( !v10 )
                                                          {
                                                            v10 = ltc_mp.montgomery_reduce(v18, modulus, mp);
                                                            if ( !v10 )
                                                            {
                                                              v10 = ltc_mp.mul(a, v15, a);
                                                              if ( !v10 )
                                                              {
                                                                v10 = ltc_mp.montgomery_reduce(a, modulus, mp);
                                                                if ( !v10 )
                                                                {
                                                                  v10 = ltc_mp.sqr(v15, v15);
                                                                  if ( !v10 )
                                                                  {
                                                                    v10 = ltc_mp.montgomery_reduce(v15, modulus, mp);
                                                                    if ( !v10 )
                                                                    {
                                                                      v10 = ltc_mp.mul(v16, v15, v16);
                                                                      if ( !v10 )
                                                                      {
                                                                        v10 = ltc_mp.montgomery_reduce(v16, modulus, mp);
                                                                        if ( !v10 )
                                                                        {
                                                                          v10 = ltc_mp.mul(a, v15, a);
                                                                          if ( !v10 )
                                                                          {
                                                                            v10 = ltc_mp.montgomery_reduce(a, modulus, mp);
                                                                            if ( !v10 )
                                                                            {
                                                                              v10 = ltc_mp.sqr(v17, v15);
                                                                              if ( !v10 )
                                                                              {
                                                                                v10 = ltc_mp.montgomery_reduce(v15, modulus, mp);
                                                                                if ( !v10 )
                                                                                {
                                                                                  v10 = ltc_mp.sub(v15, v16, v15);
                                                                                  if ( !v10 && (ltc_mp.compare_d(v15, 0) != -1 || (v10 = ltc_mp.add(v15, modulus, v15)) == 0) )
                                                                                  {
                                                                                    v10 = ltc_mp.sub(v16, v15, v16);
                                                                                    if ( !v10 && (ltc_mp.compare_d(v16, 0) != -1 || (v10 = ltc_mp.add(v16, modulus, v16)) == 0) )
                                                                                    {
                                                                                      v10 = ltc_mp.sub(v16, v15, v16);
                                                                                      if ( !v10 && (ltc_mp.compare_d(v16, 0) != -1 || (v10 = ltc_mp.add(v16, modulus, v16)) == 0) )
                                                                                      {
                                                                                        v10 = ltc_mp.mul(v16, v17, v16);
                                                                                        if ( !v10 )
                                                                                        {
                                                                                          v10 = ltc_mp.montgomery_reduce(v16, modulus, mp);
                                                                                          if ( !v10 )
                                                                                          {
                                                                                            v10 = ltc_mp.sub(v16, a, v17);
                                                                                            if ( !v10 && (ltc_mp.compare_d(v17, 0) != -1 || (v10 = ltc_mp.add(v17, modulus, v17)) == 0) && (ltc_mp.get_digit_count(v17) <= 0 || (ltc_mp.get_digit(v17, 0) & 1) == 0 || (v10 = ltc_mp.add(v17, modulus, v17)) == 0) )
                                                                                            {
                                                                                              v10 = ltc_mp.div_2(v17, v17);
                                                                                              if ( !v10 )
                                                                                              {
                                                                                                v10 = ltc_mp.copy(v15, R->x);
                                                                                                if ( !v10 )
                                                                                                {
                                                                                                  v10 = ltc_mp.copy(v17, R->y);
                                                                                                  if ( !v10 )
                                                                                                    v10 = ltc_mp.copy(v18, R->z);
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
    j_ltc_deinit_multi(a, v16, v15, v17, v18, 0i64);
    return v10;
  }
  return result;
}

