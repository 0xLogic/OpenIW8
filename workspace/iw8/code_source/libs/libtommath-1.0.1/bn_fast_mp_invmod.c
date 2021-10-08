/*
==============
fast_mp_invmod
==============
*/
int fast_mp_invmod(mp_int *a, mp_int *b, mp_int *c)
{
  int result; 
  int v7; 
  bool v8; 
  mp_int *p_aa; 
  mp_int *v10; 
  mp_int *v11; 
  int sign; 
  mp_int aa; 
  mp_int v14; 
  mp_int ba; 
  mp_int v16; 
  mp_int mp; 
  mp_int ca; 

  if ( b->used > 0 && (*(_BYTE *)b->dp & 1) == 0 )
    return -3;
  result = j_mp_init_multi(&mp, &ca, &ba, &v14, &v16, &aa, 0i64);
  if ( !result )
  {
    v7 = j_mp_copy(b, &mp);
    if ( !v7 )
    {
      v7 = j_mp_mod(a, b, &ca);
      if ( !v7 )
      {
        v7 = j_mp_copy(&mp, &ba);
        if ( !v7 )
        {
          v7 = j_mp_copy(&ca, &v14);
          if ( !v7 )
          {
            j_mp_set(&aa, 1u);
            while ( 2 )
            {
              v8 = ba.used <= 0;
              while ( v8 || (*(_BYTE *)ba.dp & 1) != 0 )
              {
                while ( v14.used > 0 && (*(_BYTE *)v14.dp & 1) == 0 )
                {
                  v7 = j_mp_div_2(&v14, &v14);
                  if ( !v7 && (aa.used <= 0 || (*(_BYTE *)aa.dp & 1) == 0 || (v7 = j_mp_sub(&aa, &mp, &aa)) == 0) )
                  {
                    v7 = j_mp_div_2(&aa, &aa);
                    if ( !v7 )
                      continue;
                  }
                  goto $LBL_ERR_11;
                }
                if ( j_mp_cmp(&ba, &v14) == -1 )
                {
                  v7 = j_mp_sub(&v14, &ba, &v14);
                  if ( v7 )
                    goto $LBL_ERR_11;
                  p_aa = &aa;
                  v10 = &v16;
                  v11 = &aa;
                }
                else
                {
                  v7 = j_mp_sub(&ba, &v14, &ba);
                  if ( v7 )
                    goto $LBL_ERR_11;
                  p_aa = &v16;
                  v10 = &aa;
                  v11 = &v16;
                }
                v7 = j_mp_sub(v11, v10, p_aa);
                if ( v7 )
                  goto $LBL_ERR_11;
                v8 = ba.used <= 0;
                if ( !ba.used )
                {
                  if ( j_mp_cmp_d(&v14, 1u) )
                  {
                    v7 = -3;
                  }
                  else
                  {
                    sign = a->sign;
                    if ( aa.sign == 1 )
                    {
                      while ( 1 )
                      {
                        v7 = j_mp_add(&aa, b, &aa);
                        if ( v7 )
                          break;
                        if ( aa.sign != 1 )
                          goto LABEL_39;
                      }
                    }
                    else
                    {
LABEL_39:
                      j_mp_exch(&aa, c);
                      v7 = 0;
                      c->sign = sign;
                    }
                  }
                  goto $LBL_ERR_11;
                }
              }
              v7 = j_mp_div_2(&ba, &ba);
              if ( !v7 && (v16.used <= 0 || (*(_BYTE *)v16.dp & 1) == 0 || (v7 = j_mp_sub(&v16, &mp, &v16)) == 0) )
              {
                v7 = j_mp_div_2(&v16, &v16);
                if ( !v7 )
                  continue;
              }
              break;
            }
          }
        }
      }
    }
$LBL_ERR_11:
    j_mp_clear_multi(&mp, &ca, &ba, &v14, &v16, &aa, 0i64);
    return v7;
  }
  return result;
}

