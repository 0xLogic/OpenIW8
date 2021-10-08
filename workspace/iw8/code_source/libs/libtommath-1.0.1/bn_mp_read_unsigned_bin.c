/*
==============
mp_read_unsigned_bin
==============
*/
int mp_read_unsigned_bin(mp_int *a, const unsigned __int8 *b, int c)
{
  int result; 
  int v7; 

  if ( a->alloc >= 2 || (result = j_mp_grow(a, 2)) == 0 )
  {
    j_mp_zero(a);
    if ( c <= 0 )
    {
LABEL_6:
      j_mp_clamp(a);
      return 0;
    }
    else
    {
      while ( 1 )
      {
        --c;
        result = j_mp_mul_2d(a, 8, a);
        if ( result )
          break;
        v7 = *b++;
        *a->dp |= v7;
        ++a->used;
        if ( c <= 0 )
          goto LABEL_6;
      }
    }
  }
  return result;
}

