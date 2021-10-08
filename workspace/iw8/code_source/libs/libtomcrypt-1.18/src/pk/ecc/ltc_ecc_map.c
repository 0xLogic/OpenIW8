/*
==============
ltc_ecc_map
==============
*/
int ltc_ecc_map(ecc_point *P, void *modulus, void *mp)
{
  int result; 
  int v7; 
  void *v8; 
  void *a; 

  result = j_ltc_init_multi(&a, &v8, 0i64);
  if ( !result )
  {
    v7 = ltc_mp.montgomery_reduce(P->z, modulus, mp);
    if ( !v7 )
    {
      v7 = ltc_mp.invmod(P->z, modulus, a);
      if ( !v7 )
      {
        v7 = ltc_mp.sqr(a, v8);
        if ( !v7 )
        {
          v7 = ltc_mp.mpdiv(v8, modulus, NULL, v8);
          if ( !v7 )
          {
            v7 = ltc_mp.mul(a, v8, a);
            if ( !v7 )
            {
              v7 = ltc_mp.mpdiv(a, modulus, NULL, a);
              if ( !v7 )
              {
                v7 = ltc_mp.mul(P->x, v8, P->x);
                if ( !v7 )
                {
                  v7 = ltc_mp.montgomery_reduce(P->x, modulus, mp);
                  if ( !v7 )
                  {
                    v7 = ltc_mp.mul(P->y, a, P->y);
                    if ( !v7 )
                    {
                      v7 = ltc_mp.montgomery_reduce(P->y, modulus, mp);
                      if ( !v7 )
                        v7 = ltc_mp.set_int(P->z, 1u);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    j_ltc_deinit_multi(a, v8, 0i64);
    return v7;
  }
  return result;
}

