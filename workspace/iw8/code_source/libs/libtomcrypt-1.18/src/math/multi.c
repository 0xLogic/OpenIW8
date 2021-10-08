/*
==============
ltc_cleanup_multi
==============
*/
void ltc_cleanup_multi(void **a, ...)
{
  void ***v1; 
  void **v2; 
  void **v3; 

  if ( a )
  {
    v3 = a;
    v1 = &v3;
    v2 = a;
    do
    {
      if ( *v2 )
      {
        ltc_mp.deinit(*v2);
        *v2 = NULL;
      }
      v2 = v1[1];
      ++v1;
    }
    while ( v2 );
  }
}

/*
==============
ltc_deinit_multi
==============
*/
void ltc_deinit_multi(void *a, ...)
{
  _QWORD *v1; 
  __int64 v2; 

  if ( a )
  {
    v1 = &v2 + 6;
    do
    {
      ltc_mp.deinit(a);
      a = (void *)v1[1];
      ++v1;
    }
    while ( a );
  }
}

/*
==============
ltc_init_multi
==============
*/
__int64 ltc_init_multi(void **a, ...)
{
  int v1; 
  void ***v2; 
  void **v4; 
  void ***v5; 
  void **v6; 

  v6 = a;
  v1 = 0;
  if ( !a )
    return 0i64;
  v2 = &v6;
  while ( !ltc_mp.init(a) )
  {
    a = v2[1];
    ++v2;
    ++v1;
    if ( !a )
      return 0i64;
  }
  v4 = v6;
  if ( v1 )
  {
    v5 = &v6;
    do
    {
      ltc_mp.deinit(*v4);
      v4 = v5[1];
      ++v5;
      --v1;
    }
    while ( v1 );
  }
  return 13i64;
}

