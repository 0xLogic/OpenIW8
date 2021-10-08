/*
==============
rand_prime
==============
*/
int rand_prime(void *N, int len, prng_state *prng, int wprng)
{
  __int64 v4; 
  unsigned int v5; 
  signed int v8; 
  int result; 
  unsigned __int8 *v10; 
  unsigned int (__fastcall **p_read)(unsigned __int8 *, unsigned int, prng_state *); 
  int v12; 
  int v13; 

  v4 = wprng;
  v5 = (unsigned int)len >> 31;
  v8 = abs32(len);
  if ( (unsigned int)(v8 - 2) > 0x1FE )
    return 23;
  result = j_prng_is_valid(wprng);
  if ( !result )
  {
    v10 = (unsigned __int8 *)ltc_calloc(1ui64, v8);
    if ( v10 )
    {
      p_read = &prng_descriptor[v4].read;
      while ( (*p_read)(v10, v8, prng) == v8 )
      {
        *v10 |= 0xC0u;
        v10[v8 - 1] |= (unsigned __int8)(2 * v5) | 1;
        v12 = ltc_mp.unsigned_read(N, v10, v8);
        if ( v12 || (v12 = ltc_mp.isprime(N, 40, &v13)) != 0 )
        {
          ltc_free(v10);
          return v12;
        }
        if ( v13 )
        {
          ltc_free(v10);
          return 0;
        }
      }
      ltc_free(v10);
      return 9;
    }
    else
    {
      return 13;
    }
  }
  return result;
}

