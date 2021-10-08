/*
==============
ltc_ecc_mulmod
==============
*/
int ltc_ecc_mulmod(void *k, ecc_point *G, ecc_point *R, void *modulus, int map)
{
  int result; 
  int v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  ecc_point *v13; 
  ecc_point *v14; 
  ecc_point *v15; 
  int v16; 
  ecc_point *v17; 
  ecc_point *v18; 
  int v19; 
  int v20; 
  ecc_point *v21; 
  unsigned int v22; 
  char bits_per_digit; 
  unsigned int v24; 
  unsigned int v25; 
  __int64 v26; 
  ecc_point *v27; 
  void *mp; 
  ecc_point *v29; 
  int v30; 
  void *v31; 
  unsigned int v32; 
  BOOL v33; 
  void *v34; 
  ecc_point *P; 
  ecc_point *p; 
  ecc_point *v37; 
  ecc_point *v38; 

  v34 = k;
  P = R;
  result = ltc_mp.montgomery_setup(modulus, &mp);
  if ( !result )
  {
    v9 = ltc_mp.init(&v31);
    if ( v9 )
    {
LABEL_5:
      ltc_mp.montgomery_deinit(mp);
      return v9;
    }
    v9 = ltc_mp.montgomery_normalization(v31, modulus);
    if ( v9 )
    {
      ltc_mp.deinit(v31);
      goto LABEL_5;
    }
    v10 = 0i64;
    v11 = 0;
    v12 = 0i64;
    do
    {
      v13 = j_ltc_ecc_new_point();
      *(&p + v12) = v13;
      if ( !v13 )
      {
        if ( v12 > 0 )
        {
          do
            j_ltc_ecc_del_point(*(&p + v10++));
          while ( v10 < v12 );
        }
        ltc_mp.deinit(v31);
        ltc_mp.montgomery_deinit(mp);
        return 13;
      }
      ++v11;
      ++v12;
    }
    while ( v11 < 3 );
    v14 = j_ltc_ecc_new_point();
    v29 = v14;
    v15 = v14;
    if ( v14 )
    {
      v16 = ltc_mp.mulmod(G->x, v31, modulus, v14->x);
      if ( !v16 )
      {
        v16 = ltc_mp.mulmod(G->y, v31, modulus, v15->y);
        if ( !v16 )
        {
          v16 = ltc_mp.mulmod(G->z, v31, modulus, v15->z);
          if ( !v16 )
          {
            ltc_mp.deinit(v31);
            v17 = p;
            v31 = NULL;
            v16 = ltc_mp.copy(v15->x, p->x);
            if ( !v16 )
            {
              v16 = ltc_mp.copy(v15->y, v17->y);
              if ( !v16 )
              {
                v16 = ltc_mp.copy(v15->z, v17->z);
                if ( !v16 )
                {
                  v18 = v37;
                  v16 = ltc_mp.ecc_ptdbl(v15, v37, modulus, mp);
                  if ( !v16 )
                  {
                    v33 = 0;
                    v19 = 1;
                    v32 = 0;
                    v20 = ltc_mp.get_digit_count(k) - 1;
                    while ( 2 )
                    {
                      v21 = v38;
                      while ( 1 )
                      {
                        v30 = v19 - 1;
                        if ( v19 == 1 )
                        {
                          if ( v20 == -1 )
                          {
                            v27 = P;
                            v16 = ltc_mp.copy(v17->x, P->x);
                            if ( !v16 )
                            {
                              v16 = ltc_mp.copy(v17->y, v27->y);
                              if ( !v16 )
                              {
                                v16 = ltc_mp.copy(v17->z, v27->z);
                                if ( !v16 )
                                {
                                  if ( map )
                                    v16 = j_ltc_ecc_map(v27, modulus, mp);
                                  else
                                    v16 = 0;
                                }
                              }
                            }
                            goto LABEL_37;
                          }
                          v22 = ltc_mp.get_digit(v34, v20);
                          bits_per_digit = ltc_mp.bits_per_digit;
                          --v20;
                          v24 = v22;
                          v30 = ltc_mp.bits_per_digit;
                        }
                        else
                        {
                          bits_per_digit = ltc_mp.bits_per_digit;
                          v24 = v32;
                        }
                        v25 = (v24 >> (bits_per_digit - 1)) & 1;
                        v32 = 2 * v24;
                        if ( v33 )
                          break;
                        v33 = v25 != 0;
                        v16 = ltc_mp.ecc_ptadd(v17, v18, v21, modulus, mp);
                        if ( v16 )
                          goto LABEL_37;
                        v16 = ltc_mp.ecc_ptdbl(v18, v21, modulus, mp);
                        if ( v16 )
                          goto LABEL_37;
                        v19 = v30;
                      }
                      v26 = v25;
                      v16 = ltc_mp.ecc_ptadd(v17, v18, *(&p + !((v24 >> (bits_per_digit - 1)) & 1)), modulus, mp);
                      if ( !v16 )
                      {
                        v16 = ltc_mp.ecc_ptdbl(*(&p + v26), *(&p + v26), modulus, mp);
                        if ( !v16 )
                        {
                          v19 = v30;
                          continue;
                        }
                      }
                      break;
                    }
LABEL_37:
                    v15 = v29;
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v16 = 13;
    }
    if ( v31 )
      ltc_mp.deinit(v31);
    ltc_mp.montgomery_deinit(mp);
    j_ltc_ecc_del_point(v15);
    do
      j_ltc_ecc_del_point(*(&p + v10++));
    while ( v10 < 3 );
    return v16;
  }
  return result;
}

