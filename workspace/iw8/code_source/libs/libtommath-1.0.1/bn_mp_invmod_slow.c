/*
==============
mp_invmod_slow
==============
*/
int mp_invmod_slow(mp_int *a, mp_int *b, mp_int *c)
{
  int result; 
  int v7; 
  bool v8; 
  mp_int *v9; 
  mp_int *p_ca; 
  mp_int *v11; 
  mp_int v12; 
  mp_int v13; 
  mp_int aa; 
  mp_int v15; 
  mp_int v16; 
  mp_int ca; 
  mp_int ba; 
  mp_int mp; 

  if ( b->sign == 1 || !b->used )
    return -3;
  result = j_mp_init_multi(&mp, &ba, &v16, &v15, &aa, &ca, &v12, &v13, 0i64);
  if ( !result )
  {
    v7 = j_mp_mod(a, b, &mp);
    if ( !v7 )
    {
      v7 = j_mp_copy(b, &ba);
      if ( !v7 )
      {
        if ( mp.used <= 0 || (*(_BYTE *)mp.dp & 1) != 0 || ba.used <= v7 || (*(_BYTE *)ba.dp & 1) != 0 )
        {
          v7 = j_mp_copy(&mp, &v16);
          if ( !v7 )
          {
            v7 = j_mp_copy(&ba, &v15);
            if ( !v7 )
            {
              j_mp_set(&aa, 1u);
              j_mp_set(&v13, 1u);
              while ( 2 )
              {
                v8 = v16.used <= 0;
                while ( v8 || (*(_BYTE *)v16.dp & 1) != 0 )
                {
                  while ( v15.used > 0 && (*(_BYTE *)v15.dp & 1) == 0 )
                  {
                    v7 = j_mp_div_2(&v15, &v15);
                    if ( !v7 && ((v12.used <= 0 || (*(_BYTE *)v12.dp & 1) == 0) && (v13.used <= 0 || (*(_BYTE *)v13.dp & 1) == 0) || (v7 = j_mp_add(&v12, &ba, &v12)) == 0 && (v7 = j_mp_sub(&v13, &mp, &v13)) == 0) )
                    {
                      v7 = j_mp_div_2(&v12, &v12);
                      if ( !v7 )
                      {
                        v7 = j_mp_div_2(&v13, &v13);
                        if ( !v7 )
                          continue;
                      }
                    }
                    goto $LBL_ERR_12;
                  }
                  if ( j_mp_cmp(&v16, &v15) == -1 )
                  {
                    v7 = j_mp_sub(&v15, &v16, &v15);
                    if ( v7 )
                      goto $LBL_ERR_12;
                    v7 = j_mp_sub(&v12, &aa, &v12);
                    if ( v7 )
                      goto $LBL_ERR_12;
                    v9 = &v13;
                    p_ca = &ca;
                    v11 = &v13;
                  }
                  else
                  {
                    v7 = j_mp_sub(&v16, &v15, &v16);
                    if ( v7 )
                      goto $LBL_ERR_12;
                    v7 = j_mp_sub(&aa, &v12, &aa);
                    if ( v7 )
                      goto $LBL_ERR_12;
                    v9 = &ca;
                    p_ca = &v13;
                    v11 = &ca;
                  }
                  v7 = j_mp_sub(v11, p_ca, v9);
                  if ( v7 )
                    goto $LBL_ERR_12;
                  v8 = v16.used <= 0;
                  if ( !v16.used )
                  {
                    if ( j_mp_cmp_d(&v15, 1u) )
                      goto LABEL_10;
                    if ( j_mp_cmp_d(&v12, 0) == -1 )
                    {
                      while ( 1 )
                      {
                        v7 = j_mp_add(&v12, b, &v12);
                        if ( v7 )
                          break;
                        if ( j_mp_cmp_d(&v12, 0) != -1 )
                          goto LABEL_52;
                      }
                    }
                    else
                    {
LABEL_52:
                      if ( j_mp_cmp_mag(&v12, b) == -1 )
                      {
LABEL_55:
                        j_mp_exch(&v12, c);
                        v7 = 0;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v7 = j_mp_sub(&v12, b, &v12);
                          if ( v7 )
                            break;
                          if ( j_mp_cmp_mag(&v12, b) == -1 )
                            goto LABEL_55;
                        }
                      }
                    }
                    goto $LBL_ERR_12;
                  }
                }
                v7 = j_mp_div_2(&v16, &v16);
                if ( !v7 && ((aa.used <= 0 || (*(_BYTE *)aa.dp & 1) == 0) && (ca.used <= 0 || (*(_BYTE *)ca.dp & 1) == 0) || (v7 = j_mp_add(&aa, &ba, &aa)) == 0 && (v7 = j_mp_sub(&ca, &mp, &ca)) == 0) )
                {
                  v7 = j_mp_div_2(&aa, &aa);
                  if ( !v7 )
                  {
                    v7 = j_mp_div_2(&ca, &ca);
                    if ( !v7 )
                      continue;
                  }
                }
                break;
              }
            }
          }
        }
        else
        {
LABEL_10:
          v7 = -3;
        }
      }
    }
$LBL_ERR_12:
    j_mp_clear_multi(&mp, &ba, &v16, &v15, &aa, &ca, &v12, &v13, 0i64);
    return v7;
  }
  return result;
}

