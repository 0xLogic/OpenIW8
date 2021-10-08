/*
==============
mp_toradix
==============
*/
int mp_toradix(mp_int *a, char *str, int radix)
{
  char *v4; 
  unsigned __int8 *v5; 
  int result; 
  int v7; 
  int v8; 
  mp_int aa; 
  unsigned int d; 

  v4 = str;
  v5 = (unsigned __int8 *)str;
  if ( (unsigned int)(radix - 2) > 0x3E )
    return -3;
  if ( a->used )
  {
    result = j_mp_init_copy(&aa, a);
    if ( !result )
    {
      v7 = 0;
      if ( aa.sign == 1 )
      {
        v5 = (unsigned __int8 *)(v4 + 1);
        *v4++ = 45;
        aa.sign = 0;
      }
      if ( aa.used )
      {
        while ( 1 )
        {
          v8 = j_mp_div_d(&aa, radix, &aa, &d);
          if ( v8 )
            break;
          ++v7;
          *v4++ = mp_s_rmap[d];
          if ( !aa.used )
            goto LABEL_10;
        }
        j_mp_clear(&aa);
        return v8;
      }
      else
      {
LABEL_10:
        j_bn_reverse(v5, v7);
        *v4 = 0;
        j_mp_clear(&aa);
        return 0;
      }
    }
  }
  else
  {
    *(_WORD *)str = 48;
    return 0;
  }
  return result;
}

