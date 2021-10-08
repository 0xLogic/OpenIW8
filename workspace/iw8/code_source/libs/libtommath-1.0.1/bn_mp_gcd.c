/*
==============
mp_gcd
==============
*/
int mp_gcd(mp_int *a, mp_int *b, mp_int *c)
{
  int result; 
  int inited; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  mp_int ca; 
  mp_int aa; 

  if ( !a->used )
    return j_mp_abs(b, c);
  if ( !b->used )
    return j_mp_abs(a, c);
  result = j_mp_init_copy(&aa, a);
  if ( !result )
  {
    inited = j_mp_init_copy(&ca, b);
    if ( !inited )
    {
      ca.sign = 0;
      aa.sign = 0;
      v7 = j_mp_cnt_lsb(&aa);
      v8 = j_mp_cnt_lsb(&ca);
      v9 = v8;
      if ( v7 < v8 )
        v8 = v7;
      if ( (v8 <= 0 || (inited = j_mp_div_2d(&aa, v8, &aa, NULL)) == 0 && (inited = j_mp_div_2d(&ca, v8, &ca, NULL)) == 0) && (v7 == v8 || (inited = j_mp_div_2d(&aa, v7 - v8, &aa, NULL)) == 0) && (v9 == v8 || (inited = j_mp_div_2d(&ca, v9 - v8, &ca, NULL)) == 0) )
      {
        if ( ca.used )
        {
          while ( 1 )
          {
            if ( j_mp_cmp_mag(&aa, &ca) == 1 )
              j_mp_exch(&aa, &ca);
            inited = j_s_mp_sub(&ca, &aa, &ca);
            if ( inited )
              break;
            v10 = j_mp_cnt_lsb(&ca);
            inited = j_mp_div_2d(&ca, v10, &ca, NULL);
            if ( inited )
              break;
            if ( !ca.used )
              goto LABEL_22;
          }
        }
        else
        {
LABEL_22:
          inited = j_mp_mul_2d(&aa, v8, c);
          if ( !inited )
            c->sign = 0;
        }
      }
      j_mp_clear(&aa);
    }
    j_mp_clear(&ca);
    return inited;
  }
  return result;
}

