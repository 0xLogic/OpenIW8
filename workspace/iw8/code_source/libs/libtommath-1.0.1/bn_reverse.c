/*
==============
bn_reverse
==============
*/
void bn_reverse(unsigned __int8 *s, int len)
{
  unsigned __int8 *v2; 
  __int64 v3; 
  unsigned __int8 v4; 
  unsigned __int8 v5; 

  if ( len - 1i64 > 0 )
  {
    v2 = &s[len - 1];
    v3 = -(__int64)s;
    do
    {
      v4 = *v2--;
      v5 = *s;
      *s++ = v4;
      v2[1] = v5;
    }
    while ( (__int64)&s[v3] < (__int64)&v2[v3] );
  }
}

