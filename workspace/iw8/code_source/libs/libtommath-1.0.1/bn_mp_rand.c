/*
==============
mp_rand
==============
*/
int mp_rand(mp_int *a, int digits)
{
  int v4; 
  int v5; 
  int v6; 
  int result; 
  int v8; 
  int v9; 
  int v10; 

  j_mp_zero(a);
  if ( digits <= 0 )
    return 0;
  do
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v5 = (v5 << 15) | 0x7FFF;
      v4 = rand() | (v4 << 15);
    }
    while ( (v5 & 0xFFFFFFF) != 0xFFFFFFF );
    v6 = v4 & 0xFFFFFFF;
  }
  while ( !v6 );
  result = j_mp_add_d(a, v6, a);
  if ( result )
    return result;
  v8 = digits - 1;
  if ( v8 <= 0 )
    return 0;
  while ( 1 )
  {
    result = j_mp_lshd(a, 1);
    if ( result )
      break;
    v9 = 0;
    v10 = 0;
    do
    {
      v10 = (v10 << 15) | 0x7FFF;
      v9 = rand() | (v9 << 15);
    }
    while ( (v10 & 0xFFFFFFF) != 0xFFFFFFF );
    result = j_mp_add_d(a, v9 & 0xFFFFFFF, a);
    if ( result )
      break;
    if ( --v8 <= 0 )
      return 0;
  }
  return result;
}

