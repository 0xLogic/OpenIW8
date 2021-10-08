/*
==============
rsa_make_key
==============
*/
int rsa_make_key(prng_state *prng, int wprng, int size, int e, Rsa_key *key)
{
  int result; 
  int inited; 
  int v11; 
  void *v12; 
  void *v13; 
  void *a; 
  void *N; 
  void *v16; 

  if ( e < 3 || (e & 1) == 0 )
    return 16;
  result = j_prng_is_valid(wprng);
  if ( !result )
  {
    result = j_ltc_init_multi(&a, &N, &v12, &v13, &v16, 0i64);
    if ( !result )
    {
      inited = ltc_mp.set_int(v16, e);
      if ( !inited )
      {
        v11 = size / 2;
        while ( 1 )
        {
          inited = j_rand_prime(a, v11, prng, wprng);
          if ( inited )
            break;
          inited = ltc_mp.subi(a, 1u, v12);
          if ( inited )
            break;
          inited = ltc_mp.gcd(v12, v16, v13);
          if ( inited )
            break;
          if ( !ltc_mp.compare_d(v13, 1u) )
          {
            while ( 1 )
            {
              inited = j_rand_prime(N, v11, prng, wprng);
              if ( inited )
                goto $cleanup;
              inited = ltc_mp.subi(N, 1u, v12);
              if ( inited )
                goto $cleanup;
              inited = ltc_mp.gcd(v12, v16, v13);
              if ( inited )
                goto $cleanup;
              if ( !ltc_mp.compare_d(v13, 1u) )
              {
                inited = ltc_mp.subi(a, inited + 1, v13);
                if ( !inited )
                {
                  inited = ltc_mp.lcm(v12, v13, v12);
                  if ( !inited )
                  {
                    inited = j_ltc_init_multi(&key->e, &key->d, &key->N, &key->dQ, &key->dP, &key->qP, &key->p, &key->q, 0i64);
                    if ( inited )
                      goto $errkey;
                    inited = ltc_mp.set_int(key->e, e);
                    if ( inited )
                      goto $errkey;
                    inited = ltc_mp.invmod(key->e, v12, key->d);
                    if ( inited )
                      goto $errkey;
                    inited = ltc_mp.mul(a, N, key->N);
                    if ( inited || (inited = ltc_mp.subi(a, 1u, v12)) != 0 || (inited = ltc_mp.subi(N, 1u, v13)) != 0 || (inited = ltc_mp.mpdiv(key->d, v12, NULL, key->dP)) != 0 || (inited = ltc_mp.mpdiv(key->d, v13, NULL, key->dQ)) != 0 || (inited = ltc_mp.invmod(N, a, key->qP)) != 0 || (inited = ltc_mp.copy(a, key->p)) != 0 || (inited = ltc_mp.copy(N, key->q)) != 0 )
$errkey:
                      j_rsa_free(key);
                    else
                      key->type = 1;
                  }
                }
                goto $cleanup;
              }
            }
          }
        }
      }
$cleanup:
      j_ltc_deinit_multi(v16, v13, v12, N, a, 0i64);
      return inited;
    }
  }
  return result;
}

