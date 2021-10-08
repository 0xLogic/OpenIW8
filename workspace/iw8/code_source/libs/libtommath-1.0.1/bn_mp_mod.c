/*
==============
mp_mod
==============
*/
int mp_mod(mp_int *a, mp_int *b, mp_int *c)
{
  int result; 
  int v7; 
  int v8; 
  mp_int aa; 

  result = j_mp_init_size(&aa, b->used);
  if ( !result )
  {
    v7 = j_mp_div(a, b, NULL, &aa);
    if ( v7 )
    {
      j_mp_clear(&aa);
      return v7;
    }
    else
    {
      if ( !aa.used || aa.sign == b->sign )
      {
        v8 = 0;
        j_mp_exch(&aa, c);
      }
      else
      {
        v8 = j_mp_add(b, &aa, c);
      }
      j_mp_clear(&aa);
      return v8;
    }
  }
  return result;
}

