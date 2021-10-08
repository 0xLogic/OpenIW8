/*
==============
mp_init
==============
*/
__int64 mp_init(mp_int *a)
{
  unsigned int *v2; 
  unsigned int **p_dp; 
  __int64 result; 
  unsigned __int64 v5; 
  unsigned int *v6; 
  __int64 i; 
  __int64 v8; 

  v2 = (unsigned int *)ltc_malloc(0x80ui64);
  a->dp = v2;
  p_dp = &a->dp;
  if ( !v2 )
    return 4294967294i64;
  if ( v2 > (unsigned int *)p_dp || (v5 = 0i64, v2 + 31 < (unsigned int *)p_dp) )
  {
    v6 = v2;
    for ( i = 32i64; i; --i )
      *v6++ = 0;
    v5 = 32i64;
  }
  if ( v5 < 0x20 )
  {
    v8 = v5;
    do
      (*p_dp)[v8++] = 0;
    while ( v8 < 32 );
  }
  a->used = 0;
  result = 0i64;
  *(_QWORD *)&a->alloc = 32i64;
  return result;
}

