/*
==============
mp_to_unsigned_bin
==============
*/
int mp_to_unsigned_bin(mp_int *a, unsigned __int8 *b)
{
  int result; 
  int v4; 
  unsigned __int8 *v5; 
  int v6; 
  mp_int aa; 

  result = j_mp_init_copy(&aa, a);
  if ( !result )
  {
    v4 = 0;
    if ( aa.used )
    {
      v5 = b;
      while ( 1 )
      {
        ++v5;
        ++v4;
        *(v5 - 1) = *(_BYTE *)aa.dp;
        v6 = j_mp_div_2d(&aa, 8, &aa, NULL);
        if ( v6 )
          break;
        if ( !aa.used )
          goto LABEL_6;
      }
      j_mp_clear(&aa);
      return v6;
    }
    else
    {
LABEL_6:
      j_bn_reverse(b, v4);
      j_mp_clear(&aa);
      return 0;
    }
  }
  return result;
}

