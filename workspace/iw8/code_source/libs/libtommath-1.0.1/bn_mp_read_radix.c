/*
==============
mp_read_radix
==============
*/
int mp_read_radix(mp_int *a, const char *str, int radix)
{
  const char *v6; 
  int v7; 
  char i; 
  char v9; 
  int v10; 
  __int64 v11; 
  int result; 

  j_mp_zero(a);
  if ( (unsigned int)(radix - 2) > 0x3E )
    return -3;
  v6 = str + 1;
  v7 = *str == 45;
  if ( *str != 45 )
    v6 = str;
  j_mp_zero(a);
  for ( i = *v6; i; i = *++v6 )
  {
    v9 = radix > 36 ? i : toupper(i);
    v10 = 0;
    v11 = 0i64;
    while ( v9 != mp_s_rmap[v11] )
    {
      if ( v9 == mp_s_rmap[v11 + 1] )
      {
        ++v10;
        break;
      }
      if ( v9 == mp_s_rmap[v11 + 2] )
      {
        v10 += 2;
        break;
      }
      if ( v9 == mp_s_rmap[v11 + 3] )
      {
        v10 += 3;
        break;
      }
      v11 += 4i64;
      v10 += 4;
      if ( v11 >= 64 )
        break;
    }
    if ( v10 >= radix )
      break;
    result = j_mp_mul_d(a, radix, a);
    if ( result )
      return result;
    result = j_mp_add_d(a, v10, a);
    if ( result )
      return result;
  }
  if ( a->used )
    a->sign = v7;
  return 0;
}

