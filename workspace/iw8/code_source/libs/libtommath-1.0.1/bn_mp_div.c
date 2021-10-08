/*
==============
mp_div
==============
*/
int mp_div(mp_int *a, mp_int *b, mp_int *c, mp_int *d)
{
  mp_int *v4; 
  int result; 
  int inited; 
  bool v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  mp_int ca; 
  int v28; 
  mp_int ba; 
  mp_int v30; 
  mp_int aa; 
  int v32; 
  __int64 v33; 
  mp_int v34; 
  int v36; 

  v4 = d;
  if ( !b->used )
    return -3;
  if ( j_mp_cmp_mag(a, b) != -1 )
  {
    result = j_mp_init_size(&aa, a->used + 2);
    if ( result )
      return result;
    aa.used = a->used + 2;
    inited = j_mp_init(&v30);
    if ( inited )
      goto $LBL_Q;
    inited = j_mp_init(&v34);
    if ( inited )
    {
$LBL_T1:
      j_mp_clear(&v30);
$LBL_Q:
      j_mp_clear(&aa);
      return inited;
    }
    inited = j_mp_init_copy(&ca, a);
    if ( inited )
    {
$LBL_T2:
      j_mp_clear(&v34);
      goto $LBL_T1;
    }
    inited = j_mp_init_copy(&ba, b);
    if ( inited )
    {
$LBL_X:
      j_mp_clear(&ca);
      goto $LBL_T2;
    }
    v10 = a->sign == b->sign;
    ba.sign = 0;
    ca.sign = 0;
    v32 = !v10;
    v11 = j_mp_count_bits(&ba) % 28;
    if ( v11 >= 27 )
    {
      v28 = 0;
    }
    else
    {
      v12 = 27 - v11;
      v28 = 27 - v11;
      inited = j_mp_mul_2d(&ca, 27 - v11, &ca);
      if ( inited )
        goto $LBL_Y;
      inited = j_mp_mul_2d(&ba, v12, &ba);
      if ( inited )
        goto $LBL_Y;
    }
    v13 = ca.used - 1;
    v14 = ba.used - 1;
    v36 = ba.used - 1;
    v15 = ca.used - ba.used;
    inited = j_mp_lshd(&ba, ca.used - ba.used);
    if ( !inited )
    {
      v16 = v14;
      while ( j_mp_cmp(&ca, &ba) != -1 )
      {
        ++aa.dp[v13 - (__int64)v14];
        inited = j_mp_sub(&ca, &ba, &ca);
        if ( inited )
          goto $LBL_Y;
      }
      j_mp_rshd(&ba, v15);
      v17 = v13;
      v18 = v14 + 1;
      v33 = v18;
      if ( v13 < v18 )
      {
LABEL_52:
        if ( ca.used )
          ca.sign = a->sign;
        else
          ca.sign = 0;
        if ( c )
        {
          j_mp_clamp(&aa);
          j_mp_exch(&aa, c);
          c->sign = v32;
        }
        if ( d )
        {
          inited = j_mp_div_2d(&ca, v28, &ca, NULL);
          if ( inited )
            goto $LBL_Y;
          j_mp_exch(&ca, d);
        }
        inited = 0;
        goto $LBL_Y;
      }
      while ( v13 > ca.used )
      {
LABEL_51:
        --v13;
        if ( --v17 < v18 )
          goto LABEL_52;
      }
      v19 = ca.dp[v17];
      v20 = ba.dp[v16];
      if ( (_DWORD)v19 == (_DWORD)v20 )
      {
        v21 = 4 * (v17 - v16) - 4;
        *(unsigned int *)((char *)aa.dp + v21) = 0xFFFFFFF;
      }
      else
      {
        v22 = ((v19 << 28) | (unsigned __int64)ca.dp[v17 - 1]) / v20;
        if ( v22 > 0xFFFFFFF )
          LODWORD(v22) = 0xFFFFFFF;
        v21 = 4 * (v17 - v16) - 4;
        *(unsigned int *)((char *)aa.dp + v21) = v22 & 0xFFFFFFF;
      }
      *(unsigned int *)((char *)aa.dp + v21) = (*(unsigned int *)((char *)aa.dp + v21) + 1) & 0xFFFFFFF;
      v23 = v14 - 1;
      do
      {
        *(unsigned int *)((char *)aa.dp + v21) = (*(unsigned int *)((char *)aa.dp + v21) - 1) & 0xFFFFFFF;
        j_mp_zero(&v30);
        if ( v23 >= 0 )
          v24 = ba.dp[v16 - 1];
        else
          v24 = 0;
        *v30.dp = v24;
        v30.dp[1] = ba.dp[v16];
        v30.used = 2;
        inited = j_mp_mul_d(&v30, *(unsigned int *)((char *)aa.dp + v21), &v30);
        if ( inited )
          goto $LBL_Y;
        if ( v13 - 2 >= 0 )
          v25 = ca.dp[v17 - 2];
        else
          v25 = 0;
        *v34.dp = v25;
        if ( v13 - 1 >= 0 )
          v26 = ca.dp[v17 - 1];
        else
          v26 = 0;
        v34.dp[1] = v26;
        v34.dp[2] = ca.dp[v17];
        v34.used = 3;
      }
      while ( j_mp_cmp_mag(&v30, &v34) == 1 );
      inited = j_mp_mul_d(&ba, *(unsigned int *)((char *)aa.dp + v21), &v30);
      if ( !inited )
      {
        inited = j_mp_lshd(&v30, v13 - v36 - 1);
        if ( !inited )
        {
          inited = j_mp_sub(&ca, &v30, &ca);
          if ( !inited )
          {
            if ( ca.sign != 1 )
            {
LABEL_50:
              v18 = v33;
              v14 = v36;
              goto LABEL_51;
            }
            inited = j_mp_copy(&ba, &v30);
            if ( !inited )
            {
              inited = j_mp_lshd(&v30, v13 - v36 - 1);
              if ( !inited )
              {
                inited = j_mp_add(&ca, &v30, &ca);
                if ( !inited )
                {
                  *(unsigned int *)((char *)aa.dp + v21) = (*(unsigned int *)((char *)aa.dp + v21) - 1) & 0xFFFFFFF;
                  goto LABEL_50;
                }
              }
            }
          }
        }
      }
    }
$LBL_Y:
    j_mp_clear(&ba);
    goto $LBL_X;
  }
  if ( v4 )
    LODWORD(v4) = j_mp_copy(a, v4);
  if ( c )
    j_mp_zero(c);
  return (int)v4;
}

