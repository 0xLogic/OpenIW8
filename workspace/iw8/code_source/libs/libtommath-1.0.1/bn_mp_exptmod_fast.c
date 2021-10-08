/*
==============
mp_exptmod_fast
==============
*/
int mp_exptmod_fast(mp_int *G, mp_int *X, mp_int *P, mp_int *Y, int redmode)
{
  int v7; 
  int v8; 
  int result; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int inited; 
  int (__fastcall *v15)(mp_int *, mp_int *, unsigned int); 
  __int64 v16; 
  mp_int *v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  mp_int *v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  unsigned int *dp; 
  unsigned int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  unsigned int rho; 
  int v38; 
  int v39; 
  mp_int b; 
  int v41; 
  mp_int *v42; 
  __int64 v43; 
  mp_int *v44; 
  mp_int x; 
  mp_int a; 

  v44 = Y;
  v42 = X;
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
  result = j_mp_init_size(&a, P->alloc);
  if ( result )
    return result;
  v10 = 1 << (v8 - 1);
  v11 = 1 << v8;
  v12 = v10;
  v38 = 1 << v8;
  if ( v10 >= 1 << v8 )
  {
LABEL_16:
    if ( redmode )
    {
      if ( redmode == 1 )
      {
        j_mp_dr_setup(P, &rho);
        v15 = j_mp_dr_reduce;
      }
      else
      {
        inited = j_mp_reduce_2k_setup(P, &rho);
        if ( inited )
          goto $LBL_M;
        v15 = j_mp_reduce_2k;
      }
    }
    else
    {
      inited = j_mp_montgomery_setup(P, &rho);
      if ( inited )
        goto $LBL_M;
      if ( 2 * P->used >= 511 || P->used >= 256 )
        v15 = j_mp_montgomery_reduce;
      else
        v15 = j_fast_mp_montgomery_reduce;
    }
    inited = j_mp_init_size(&b, P->alloc);
    if ( !inited )
    {
      if ( redmode )
      {
        j_mp_set(&b, 1u);
        v18 = j_mp_mod(G, P, &a);
      }
      else
      {
        inited = j_mp_montgomery_calc_normalization(&b, P);
        if ( inited )
          goto $LBL_RES;
        v18 = j_mp_mulmod(G, &b, P, &a);
      }
      inited = v18;
      if ( !v18 )
      {
        inited = j_mp_copy(&a, &x + v10);
        if ( !inited )
        {
          v19 = 0;
          do
          {
            inited = j_mp_sqr(&x + v10, &x + v10);
            if ( inited )
              goto $LBL_RES;
            inited = v15(&x + v10, P, rho);
            if ( inited )
              goto $LBL_RES;
            ++v19;
          }
          while ( v19 < v8 - 1 );
          v20 = v10 + 1;
          if ( v10 + 1 < v38 )
          {
            v21 = 1 << (v8 - 1);
            do
            {
              inited = j_mp_mul(&x + v21, &a, &x + v20);
              if ( inited )
                goto $LBL_RES;
              inited = v15(&x + v20, P, rho);
              if ( inited )
                goto $LBL_RES;
              ++v20;
              ++v21;
            }
            while ( v20 < v38 );
          }
          v22 = v42;
          v23 = 0;
          v24 = 0;
          v25 = 0;
          v26 = 1;
          v27 = v42->used - 1;
          v28 = 0;
          v29 = v27;
          v36 = 0;
          v43 = v27;
          while ( 1 )
          {
            while ( 1 )
            {
              v39 = --v26;
              if ( !v26 )
              {
                if ( v29 == -1 )
                {
                  if ( v23 == 2 && v25 > 0 )
                  {
                    v34 = v38;
                    v35 = 0;
                    while ( 1 )
                    {
                      inited = j_mp_sqr(&b, &b);
                      if ( inited )
                        break;
                      inited = v15(&b, P, rho);
                      if ( inited )
                        break;
                      v36 *= 2;
                      if ( (v34 & v36) != 0 )
                      {
                        inited = j_mp_mul(&b, &a, &b);
                        if ( inited )
                          break;
                        inited = v15(&b, P, rho);
                        if ( inited )
                          break;
                      }
                      if ( ++v35 >= v25 )
                        goto LABEL_75;
                    }
                  }
                  else
                  {
LABEL_75:
                    if ( redmode || (inited = v15(&b, P, rho)) == 0 )
                    {
                      j_mp_exch(&b, v44);
                      inited = 0;
                    }
                  }
                  goto $LBL_RES;
                }
                dp = v22->dp;
                v26 = 28;
                v39 = 28;
                v24 = dp[v29--];
                v43 = v29;
              }
              v31 = v24;
              v24 *= 2;
              v32 = (v31 >> 27) & 1;
              v41 = v24;
              if ( !v23 )
                break;
              if ( v23 != 1 || v32 )
                goto LABEL_53;
              inited = j_mp_sqr(&b, &b);
              if ( inited )
                goto $LBL_RES;
              inited = v15(&b, P, rho);
              if ( inited )
                goto $LBL_RES;
              v28 = v36;
              v29 = v43;
              v26 = v39;
              v24 = v41;
LABEL_47:
              v22 = v42;
            }
            if ( !v32 )
              goto LABEL_47;
LABEL_53:
            ++v25;
            v23 = 2;
            v29 = v43;
            v28 |= v32 << (v8 - v25);
            v22 = v42;
            v36 = v28;
            if ( v25 == v8 )
            {
              v33 = 0;
              while ( 1 )
              {
                inited = j_mp_sqr(&b, &b);
                if ( inited )
                  goto $LBL_RES;
                inited = v15(&b, P, rho);
                if ( inited )
                  goto $LBL_RES;
                if ( ++v33 >= v8 )
                {
                  inited = j_mp_mul(&b, &x + v36, &b);
                  if ( !inited )
                  {
                    inited = v15(&b, P, rho);
                    if ( !inited )
                    {
                      v29 = v43;
                      v23 = 1;
                      v26 = v39;
                      v25 = 0;
                      v24 = v41;
                      v28 = 0;
                      v36 = 0;
                      goto LABEL_47;
                    }
                  }
                  goto $LBL_RES;
                }
              }
            }
          }
        }
      }
$LBL_RES:
      j_mp_clear(&b);
    }
    v11 = v38;
$LBL_M:
    j_mp_clear(&a);
    for ( ; v10 < v11; ++v10 )
      j_mp_clear(&x + v10);
    return inited;
  }
  while ( 1 )
  {
    v13 = j_mp_init_size(&x + v12, P->alloc);
    if ( v13 )
      break;
    if ( ++v12 >= v11 )
      goto LABEL_16;
  }
  if ( v10 < v12 )
  {
    v16 = (unsigned int)(v12 - v10);
    v17 = &x + v10;
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

