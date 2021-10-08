/*
==============
_is_point
==============
*/
int is_point(ecc_key *key)
{
  int result; 
  int v3; 
  void *v4; 
  void *v5; 
  void *a; 
  void *v7; 

  result = j_ltc_init_multi(&a, &v4, &v5, &v7, 0i64);
  if ( !result )
  {
    v3 = ltc_mp.read_radix(a, key->dp->prime, 16);
    if ( !v3 )
    {
      v3 = ltc_mp.read_radix(v4, key->dp->B, 16);
      if ( !v3 )
      {
        v3 = ltc_mp.sqr(key->pubkey.y, v5);
        if ( !v3 )
        {
          v3 = ltc_mp.sqr(key->pubkey.x, v7);
          if ( !v3 )
          {
            v3 = ltc_mp.mpdiv(v7, a, NULL, v7);
            if ( !v3 )
            {
              v3 = ltc_mp.mul(key->pubkey.x, v7, v7);
              if ( !v3 )
              {
                v3 = ltc_mp.sub(v5, v7, v5);
                if ( !v3 )
                {
                  v3 = ltc_mp.add(v5, key->pubkey.x, v5);
                  if ( !v3 )
                  {
                    v3 = ltc_mp.add(v5, key->pubkey.x, v5);
                    if ( !v3 )
                    {
                      v3 = ltc_mp.add(v5, key->pubkey.x, v5);
                      if ( !v3 )
                      {
                        v3 = ltc_mp.mpdiv(v5, a, NULL, v5);
                        if ( !v3 )
                        {
                          if ( ltc_mp.compare_d(v5, 0) == -1 )
                          {
                            while ( 1 )
                            {
                              v3 = ltc_mp.add(v5, a, v5);
                              if ( v3 )
                                break;
                              if ( ltc_mp.compare_d(v5, 0) != -1 )
                                goto LABEL_16;
                            }
                          }
                          else
                          {
LABEL_16:
                            if ( ltc_mp.compare(v5, a) == -1 )
                            {
LABEL_19:
                              v3 = ltc_mp.compare(v5, v4) != 0 ? 7 : 0;
                            }
                            else
                            {
                              while ( 1 )
                              {
                                v3 = ltc_mp.sub(v5, a, v5);
                                if ( v3 )
                                  break;
                                if ( ltc_mp.compare(v5, a) == -1 )
                                  goto LABEL_19;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    j_ltc_deinit_multi(a, v4, v5, v7, 0i64);
    return v3;
  }
  return result;
}

/*
==============
ecc_import
==============
*/
int ecc_import(const unsigned __int8 *in, unsigned int inlen, ecc_key *key)
{
  return j_ecc_import_ex(in, inlen, key, NULL);
}

/*
==============
ecc_import_ex
==============
*/
int ecc_import_ex(const unsigned __int8 *in, unsigned int inlen, ecc_key *key, const ltc_ecc_set_type *dp)
{
  int result; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  void **p_k; 
  char v16; 

  p_k = &key->k;
  if ( j_ltc_init_multi(&key->pubkey.x, &key->pubkey.y, &key->pubkey.z, &key->k, 0i64) )
    return 13;
  v9 = j_der_decode_sequence_multi(in, inlen, 4i64);
  v10 = v9;
  if ( v9 && v9 != 21 )
    goto $done_23;
  if ( v16 == 1 )
  {
    key->type = 1;
    v11 = j_der_decode_sequence_multi(in, inlen, 4i64);
  }
  else
  {
    if ( v16 )
    {
LABEL_16:
      v10 = 7;
      goto $done_23;
    }
    key->type = 0;
    v11 = j_der_decode_sequence_multi(in, inlen, 4i64);
  }
  v10 = v11;
  if ( v11 )
  {
$done_23:
    j_ltc_deinit_multi(key->pubkey.x, key->pubkey.y, key->pubkey.z, *p_k, 0i64);
    return v10;
  }
  if ( dp )
  {
    key->idx = -1;
  }
  else
  {
    v12 = 0;
    key->idx = 0;
    if ( ltc_ecc_sets[0].size )
    {
      v13 = 0;
      do
      {
        if ( ltc_ecc_sets[v13].size == v14 )
          break;
        v12 = ++v13;
        key->idx = v13;
      }
      while ( ltc_ecc_sets[v13].size );
    }
    dp = &ltc_ecc_sets[v12];
    if ( !dp->size )
      goto LABEL_16;
  }
  key->dp = dp;
  v10 = ltc_mp.set_int(key->pubkey.z, 1u);
  if ( v10 )
    goto $done_23;
  result = is_point(key);
  v10 = result;
  if ( result )
    goto $done_23;
  return result;
}

