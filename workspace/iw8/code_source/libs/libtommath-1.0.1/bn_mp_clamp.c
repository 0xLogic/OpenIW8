/*
==============
mp_clamp
==============
*/
void mp_clamp(mp_int *a)
{
  int used; 
  bool v2; 
  unsigned int *dp; 
  int v4; 

  used = a->used;
  v2 = a->used == 0;
  if ( a->used > 0 )
  {
    dp = a->dp;
    v4 = a->used;
    do
    {
      if ( dp[v4 - 1] )
        break;
      a->used = --v4;
      used = v4;
    }
    while ( v4 > 0 );
    v2 = used == 0;
  }
  if ( v2 )
    a->sign = 0;
}

