/*
==============
mp_set_int
==============
*/
int mp_set_int(mp_int *a, unsigned int b)
{
  int v4; 
  int result; 
  int v6; 

  j_mp_zero(a);
  v4 = 0;
  while ( 1 )
  {
    result = j_mp_mul_2d(a, 4, a);
    if ( result )
      break;
    ++v4;
    v6 = (unsigned __int64)b >> 28;
    b *= 16;
    *a->dp |= v6;
    ++a->used;
    if ( v4 >= 8 )
    {
      j_mp_clamp(a);
      return 0;
    }
  }
  return result;
}

