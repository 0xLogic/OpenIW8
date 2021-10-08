/*
==============
mp_exptmod
==============
*/
int mp_exptmod(mp_int *G, mp_int *X, mp_int *P, mp_int *Y)
{
  int result; 
  int v9; 
  int v10; 
  int v11; 
  int redmode; 
  mp_int a; 
  mp_int b; 

  if ( P->sign == 1 )
    return -3;
  if ( X->sign == 1 )
  {
    result = j_mp_init(&a);
    if ( !result )
    {
      v9 = j_mp_invmod(G, P, &a);
      if ( v9 || (v9 = j_mp_init(&b)) != 0 )
      {
        j_mp_clear(&a);
        return v9;
      }
      else
      {
        v10 = j_mp_abs(X, &b);
        if ( v10 )
        {
          j_mp_clear_multi(&a, &b, 0i64);
          return v10;
        }
        else
        {
          v11 = j_mp_exptmod(&a, &b, P, Y);
          j_mp_clear_multi(&a, &b, 0i64);
          return v11;
        }
      }
    }
  }
  else if ( j_mp_reduce_is_2k_l(P) == 1 )
  {
    return j_s_mp_exptmod(G, X, P, Y, 1);
  }
  else
  {
    redmode = j_mp_dr_is_modulus(P);
    if ( !redmode )
      redmode = 2 * j_mp_reduce_is_2k(P);
    if ( P->used > 0 && (*(_BYTE *)P->dp & 1) != 0 || redmode )
      return j_mp_exptmod_fast(G, X, P, Y, redmode);
    else
      return j_s_mp_exptmod(G, X, P, Y, 0);
  }
  return result;
}

