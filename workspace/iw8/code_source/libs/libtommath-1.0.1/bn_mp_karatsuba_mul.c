/*
==============
mp_karatsuba_mul
==============
*/
__int64 mp_karatsuba_mul(mp_int *a, mp_int *b, mp_int *c)
{
  int used; 
  unsigned int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int *dp; 
  unsigned int *v12; 
  unsigned int *v13; 
  unsigned int *v14; 
  int v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int *v19; 
  int v20; 
  int v21; 
  unsigned int *i; 
  mp_int v24; 
  mp_int aa; 
  mp_int ba; 
  mp_int v27; 
  mp_int v28; 
  mp_int v29; 
  mp_int ca; 

  used = a->used;
  if ( a->used >= b->used )
    used = b->used;
  v7 = -2;
  v8 = used >> 1;
  if ( !j_mp_init_size(&aa, v8) )
  {
    if ( !j_mp_init_size(&v29, a->used - v8) )
    {
      if ( !j_mp_init_size(&ba, v8) )
      {
        if ( !j_mp_init_size(&v28, b->used - v8) )
        {
          v9 = 2 * v8;
          if ( !j_mp_init_size(&v24, 2 * v8) )
          {
            if ( !j_mp_init_size(&ca, v9) )
            {
              if ( !j_mp_init_size(&v27, v9) )
              {
                v10 = a->used;
                dp = a->dp;
                v12 = b->dp;
                v13 = aa.dp;
                v14 = ba.dp;
                v29.used = a->used - v8;
                v15 = b->used - v8;
                ba.used = v8;
                aa.used = v8;
                v28.used = v15;
                if ( v8 > 0 )
                {
                  v16 = (unsigned int)v8;
                  do
                  {
                    v17 = *dp++;
                    *v13++ = v17;
                    v18 = *v12++;
                    *v14++ = v18;
                    --v16;
                  }
                  while ( v16 );
                  v10 = a->used;
                }
                v19 = v29.dp;
                v20 = v8;
                if ( v8 < v10 )
                {
                  do
                  {
                    ++v20;
                    *v19++ = *dp++;
                  }
                  while ( v20 < a->used );
                }
                v21 = v8;
                for ( i = v28.dp; v21 < b->used; ++v12 )
                {
                  ++v21;
                  *i++ = *v12;
                }
                j_mp_clamp(&aa);
                j_mp_clamp(&ba);
                if ( !j_mp_mul(&aa, &ba, &ca) && !j_mp_mul(&v29, &v28, &v27) && !j_s_mp_add(&v29, &aa, &v24) && !j_s_mp_add(&v28, &ba, &aa) && !j_mp_mul(&v24, &aa, &v24) && !j_mp_add(&ca, &v27, &aa) && !j_s_mp_sub(&v24, &aa, &v24) && !j_mp_lshd(&v24, v8) && !j_mp_lshd(&v27, v9) && !j_mp_add(&ca, &v24, &v24) && !j_mp_add(&v24, &v27, c) )
                  v7 = 0;
                j_mp_clear(&v27);
              }
              j_mp_clear(&ca);
            }
            j_mp_clear(&v24);
          }
          j_mp_clear(&v28);
        }
        j_mp_clear(&ba);
      }
      j_mp_clear(&v29);
    }
    j_mp_clear(&aa);
  }
  return v7;
}

