/*
==============
s_mp_sqr
==============
*/
int s_mp_sqr(mp_int *a, mp_int *b)
{
  __int64 used; 
  int result; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  int v14; 
  unsigned __int64 v15; 
  unsigned int *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  mp_int aa; 

  used = a->used;
  result = j_mp_init_size(&aa, 2 * used + 1);
  if ( !result )
  {
    aa.used = 2 * used + 1;
    if ( used > 0 )
    {
      v6 = 0;
      v7 = 1i64;
      v8 = used;
      v9 = 0i64;
      v10 = 0i64;
      do
      {
        v11 = v7;
        v12 = a->dp[v9];
        v13 = aa.dp[v10] + v12 * v12;
        v14 = v13;
        v15 = v13 >> 28;
        aa.dp[v10] = v14 & 0xFFFFFFF;
        v16 = &aa.dp[v6 + 1];
        if ( v7 < used )
        {
          v17 = a->dp[v9];
          do
          {
            v18 = a->dp[v11++];
            v19 = v17 * v18;
            v20 = (v15 + *v16 + 2 * v19) & 0xFFFFFFF;
            LODWORD(v15) = ((unsigned int)v15 + (unsigned __int64)*v16 + 2 * v19) >> 28;
            *v16++ = v20;
          }
          while ( v11 < used );
        }
        for ( ; (_DWORD)v15; *(v16 - 1) = v22 & 0xFFFFFFF )
        {
          v21 = *v16++;
          v22 = (unsigned int)v15 + v21;
          LODWORD(v15) = v22 >> 28;
        }
        v6 += 2;
        v10 += 2i64;
        ++v9;
        ++v7;
        --v8;
      }
      while ( v8 );
    }
    j_mp_clamp(&aa);
    j_mp_exch(&aa, b);
    j_mp_clear(&aa);
    return 0;
  }
  return result;
}

