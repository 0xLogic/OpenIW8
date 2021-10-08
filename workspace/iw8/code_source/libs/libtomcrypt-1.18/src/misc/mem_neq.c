/*
==============
mem_neq
==============
*/
__int64 mem_neq(const void *a, const void *b, unsigned __int64 len)
{
  unsigned __int8 v3; 
  signed __int64 v4; 
  char v5; 

  v3 = 0;
  if ( len )
  {
    v4 = (_BYTE *)b - (_BYTE *)a;
    do
    {
      v5 = *(_BYTE *)a ^ *((_BYTE *)a + v4);
      a = (char *)a + 1;
      v3 |= v5;
      --len;
    }
    while ( len );
  }
  return ((v3 & 0x10) != 0) | v3 & 1u | ((((v3 >> 4) | v3) & 4) != 0) | ((((unsigned __int8)((v3 >> 4) | v3) | ((unsigned __int8)((v3 >> 4) | v3) >> 2)) & 2) != 0);
}

