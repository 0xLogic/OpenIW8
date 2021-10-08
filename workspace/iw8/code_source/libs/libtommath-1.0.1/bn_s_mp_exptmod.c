/*
==============
s_mp_exptmod
==============
*/
int s_mp_exptmod(mp_int *G, mp_int *X, mp_int *P, mp_int *Y, int redmode)
{
  mp_int *v6; 
  int v7; 
  int v8; 
  int result; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int (__fastcall *v15)(mp_int *, mp_int *, mp_int *); 
  __int64 v16; 
  mp_int *v17; 
  int v18; 
  int v19; 
  int v20; 
  mp_int *v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  mp_int *v28; 
  unsigned int v29; 
  int v30; 
  int v31; 
  int v32; 
  int i; 
  int v34; 
  int v35; 
  mp_int *ma; 
  mp_int x; 
  int v39; 
  mp_int *v40; 
  mp_int d; 
  mp_int *v42; 
  mp_int b; 
  mp_int a; 

  v42 = Y;
  v6 = P;
  v40 = X;
  v7 = j_mp_count_bits(X);
  if ( v7 > 7 )
  {
    if ( v7 > 36 )
    {
      if ( v7 > 140 )
      {
        if ( v7 > 450 )
        {
          if ( v7 > 1303 )
            v8 = (v7 > 3529) + 7;
          else
            v8 = 6;
        }
        else
        {
          v8 = 5;
        }
      }
      else
      {
        v8 = 4;
      }
    }
    else
    {
      v8 = 3;
    }
  }
  else
  {
    v8 = 2;
  }
  result = j_mp_init(&a);
  if ( result )
    return result;
  v10 = 1 << (v8 - 1);
  v11 = 1 << v8;
  v12 = v10;
  for ( i = 1 << v8; v12 < v11; ++v12 )
  {
    v13 = j_mp_init(&b + v12);
    if ( v13 )
    {
      if ( v10 < v12 )
      {
        v16 = (unsigned int)(v12 - v10);
        v17 = &b + v10;
        do
        {
          j_mp_clear(v17++);
          --v16;
        }
        while ( v16 );
      }
      j_mp_clear(&a);
      return v13;
    }
  }
  v14 = j_mp_init(&d);
  if ( v14 )
    goto $LBL_M_0;
  if ( redmode )
  {
    v14 = j_mp_reduce_2k_setup_l(v6, &d);
    if ( v14 )
      goto $LBL_MU;
    v15 = j_mp_reduce_2k_l;
  }
  else
  {
    v14 = j_mp_reduce_setup(&d, v6);
    if ( v14 )
      goto $LBL_MU;
    v15 = j_mp_reduce;
  }
  v14 = j_mp_mod(G, v6, &a);
  if ( v14 )
    goto LABEL_70;
  v14 = j_mp_copy(&a, &b + v10);
  if ( v14 )
    goto LABEL_70;
  v18 = 0;
  do
  {
    v14 = j_mp_sqr(&b + v10, &b + v10);
    if ( v14 )
      goto LABEL_70;
    v14 = v15(&b + v10, v6, &d);
    if ( v14 )
      goto LABEL_70;
    ++v18;
  }
  while ( v18 < v8 - 1 );
  v19 = v10 + 1;
  if ( v10 + 1 < i )
  {
    v20 = 1 << (v8 - 1);
    do
    {
      v14 = j_mp_mul(&b + v20, &a, &b + v19);
      if ( v14 )
        goto LABEL_70;
      v14 = v15(&b + v19, P, &d);
      if ( v14 )
        goto LABEL_70;
      ++v19;
      ++v20;
    }
    while ( v19 < i );
    v6 = P;
  }
  v14 = j_mp_init(&x);
  if ( v14 )
    goto LABEL_70;
  j_mp_set(&x, 1u);
  v21 = v40;
  v22 = 1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = v40->used - 1;
  v27 = 0;
  v28 = (mp_int *)v26;
  v34 = 0;
  ma = (mp_int *)v26;
  while ( 1 )
  {
    v35 = --v22;
    if ( !v22 )
      break;
LABEL_44:
    v29 = v24;
    v24 *= 2;
    v30 = (v29 >> 27) & 1;
    v39 = v24;
    if ( v23 )
    {
      if ( v23 != 1 || v30 )
        goto LABEL_46;
      v14 = j_mp_sqr(&x, &x);
      if ( v14 )
        goto $LBL_RES_0;
      v14 = v15(&x, v6, &d);
      if ( v14 )
        goto $LBL_RES_0;
      v27 = v34;
      v28 = ma;
      v22 = v35;
      v24 = v39;
LABEL_40:
      v21 = v40;
    }
    else
    {
      if ( !v30 )
        goto LABEL_40;
LABEL_46:
      ++v25;
      v23 = 2;
      v28 = ma;
      v27 |= v30 << (v8 - v25);
      v21 = v40;
      v34 = v27;
      if ( v25 == v8 )
      {
        v31 = 0;
        while ( 1 )
        {
          v14 = j_mp_sqr(&x, &x);
          if ( v14 )
            goto $LBL_RES_0;
          v14 = v15(&x, v6, &d);
          if ( v14 )
            goto $LBL_RES_0;
          if ( ++v31 >= v8 )
          {
            v14 = j_mp_mul(&x, &b + v34, &x);
            if ( !v14 )
            {
              v14 = v15(&x, v6, &d);
              if ( !v14 )
              {
                v28 = ma;
                v23 = 1;
                v22 = v35;
                v25 = 0;
                v24 = v39;
                v27 = 0;
                v34 = 0;
                goto LABEL_40;
              }
            }
            goto $LBL_RES_0;
          }
        }
      }
    }
  }
  if ( v28 != (mp_int *)-1i64 )
  {
    v22 = 28;
    v35 = 28;
    v24 = v21->dp[(_QWORD)v28];
    v28 = (mp_int *)((char *)v28 - 1);
    ma = v28;
    goto LABEL_44;
  }
  if ( v23 == 2 && v25 > 0 )
  {
    v32 = 0;
    while ( 1 )
    {
      v14 = j_mp_sqr(&x, &x);
      if ( v14 )
        break;
      v14 = v15(&x, v6, &d);
      if ( v14 )
        break;
      v34 *= 2;
      if ( (i & v34) != 0 )
      {
        v14 = j_mp_mul(&x, &a, &x);
        if ( v14 )
          break;
        v14 = v15(&x, v6, &d);
        if ( v14 )
          break;
      }
      if ( ++v32 >= v25 )
        goto LABEL_68;
    }
  }
  else
  {
LABEL_68:
    j_mp_exch(&x, v42);
    v14 = 0;
  }
$LBL_RES_0:
  j_mp_clear(&x);
LABEL_70:
  v11 = 1 << v8;
$LBL_MU:
  j_mp_clear(&d);
$LBL_M_0:
  j_mp_clear(&a);
  for ( ; v10 < v11; ++v10 )
    j_mp_clear(&b + v10);
  return v14;
}

