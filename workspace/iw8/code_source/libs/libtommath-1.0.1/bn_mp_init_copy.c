/*
==============
mp_init_copy
==============
*/
int mp_init_copy(mp_int *a, mp_int *b)
{
  int result; 
  int v5; 

  result = j_mp_init_size(a, b->used);
  if ( !result )
  {
    v5 = j_mp_copy(b, a);
    if ( v5 )
      j_mp_clear(a);
    return v5;
  }
  return result;
}

