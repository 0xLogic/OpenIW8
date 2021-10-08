/*
==============
mp_init_multi
==============
*/
__int64 mp_init_multi(mp_int *mp, ...)
{
  int v1; 
  mp_int **p_a; 
  mp_int *v4; 
  mp_int **v5; 
  mp_int *a; 

  a = mp;
  v1 = 0;
  if ( !mp )
    return 0i64;
  p_a = &a;
  while ( !j_mp_init(mp) )
  {
    mp = p_a[1];
    ++p_a;
    ++v1;
    if ( !mp )
      return 0i64;
  }
  v4 = a;
  if ( v1 )
  {
    v5 = &a;
    do
    {
      j_mp_clear(v4);
      v4 = v5[1];
      ++v5;
      --v1;
    }
    while ( v1 );
  }
  return 4294967294i64;
}

