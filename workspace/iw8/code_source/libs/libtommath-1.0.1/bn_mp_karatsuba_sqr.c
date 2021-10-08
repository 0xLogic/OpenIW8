/*
==============
mp_karatsuba_sqr
==============
*/
__int64 mp_karatsuba_sqr(mp_int *a, mp_int *b)
{
  int v4; 
  unsigned int v5; 
  unsigned int *dp; 
  unsigned int *v7; 
  __int64 v8; 
  unsigned int v9; 
  int used; 
  int v11; 
  unsigned int *i; 
  mp_int c; 
  mp_int aa; 
  mp_int v16; 
  mp_int v17; 
  mp_int ba; 
  mp_int v19; 

  v4 = a->used >> 1;
  v5 = -2;
  if ( !j_mp_init_size(&aa, v4) )
  {
    if ( !j_mp_init_size(&v17, a->used - v4) )
    {
      if ( !j_mp_init_size(&c, 2 * a->used) )
      {
        if ( !j_mp_init_size(&v19, 2 * a->used) )
        {
          if ( !j_mp_init_size(&ba, 2 * v4) )
          {
            if ( !j_mp_init_size(&v16, 2 * (a->used - v4)) )
            {
              dp = a->dp;
              v7 = aa.dp;
              if ( v4 > 0 )
              {
                v8 = (unsigned int)v4;
                do
                {
                  v9 = *dp++;
                  *v7++ = v9;
                  --v8;
                }
                while ( v8 );
              }
              used = a->used;
              v11 = v4;
              for ( i = v17.dp; v11 < a->used; ++dp )
              {
                ++v11;
                *i++ = *dp;
                used = a->used;
              }
              aa.used = v4;
              v17.used = used - v4;
              j_mp_clamp(&aa);
              if ( !j_mp_sqr(&aa, &ba) && !j_mp_sqr(&v17, &v16) && !j_s_mp_add(&v17, &aa, &c) && !j_mp_sqr(&c, &c) && !j_s_mp_add(&ba, &v16, &v19) && !j_s_mp_sub(&c, &v19, &c) && !j_mp_lshd(&c, v4) && !j_mp_lshd(&v16, 2 * v4) && !j_mp_add(&ba, &c, &c) && !j_mp_add(&c, &v16, b) )
                v5 = 0;
              j_mp_clear(&v16);
            }
            j_mp_clear(&ba);
          }
          j_mp_clear(&v19);
        }
        j_mp_clear(&c);
      }
      j_mp_clear(&v17);
    }
    j_mp_clear(&aa);
  }
  return v5;
}

