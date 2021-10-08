/*
==============
ecc_make_key
==============
*/
__int64 ecc_make_key(prng_state *prng, int wprng, int keysize, ecc_key *key)
{
  int size; 
  int v5; 
  __int64 v6; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  const ltc_ecc_set_type *v12; 
  unsigned int is_valid; 
  unsigned int v14; 
  void *v15; 
  ecc_point *v16; 
  __int64 result; 
  void *v18; 
  void *a; 

  size = ltc_ecc_sets[0].size;
  v5 = 0;
  v6 = wprng;
  if ( keysize > ltc_ecc_sets[0].size )
  {
    v9 = 0i64;
    do
    {
      if ( !size )
        break;
      ++v9;
      ++v5;
      size = ltc_ecc_sets[v9].size;
    }
    while ( keysize > size );
  }
  v10 = v5;
  v11 = ltc_ecc_sets[v10].size;
  v12 = &ltc_ecc_sets[v10];
  if ( v11 <= 66 && v11 )
  {
    is_valid = j_prng_is_valid(wprng);
    if ( is_valid )
    {
LABEL_18:
      result = is_valid;
      key->idx = v5;
      return result;
    }
    key->idx = -1;
    key->dp = v12;
    v14 = v12->size;
    v15 = ltc_malloc(0x42ui64);
    if ( !v15 )
    {
      is_valid = 13;
      goto LABEL_18;
    }
    if ( prng_descriptor[v6].read((unsigned __int8 *)v15, v14, prng) != v14 )
    {
      is_valid = 9;
LABEL_17:
      ltc_free(v15);
      goto LABEL_18;
    }
    is_valid = j_ltc_init_multi(&key->pubkey.x, &key->pubkey.y, &key->pubkey.z, &key->k, &a, &v18, 0i64);
    if ( is_valid )
      goto LABEL_17;
    v16 = j_ltc_ecc_new_point();
    if ( v16 )
    {
      is_valid = ltc_mp.read_radix(a, key->dp->prime, 16);
      if ( !is_valid )
      {
        is_valid = ltc_mp.read_radix(v18, key->dp->order, 16);
        if ( !is_valid )
        {
          is_valid = ltc_mp.read_radix(v16->x, key->dp->Gx, 16);
          if ( !is_valid )
          {
            is_valid = ltc_mp.read_radix(v16->y, key->dp->Gy, 16);
            if ( !is_valid )
            {
              is_valid = ltc_mp.set_int(v16->z, 1u);
              if ( !is_valid )
              {
                is_valid = ltc_mp.unsigned_read(key->k, (unsigned __int8 *)v15, v14);
                if ( !is_valid && (ltc_mp.compare(key->k, v18) == -1 || (is_valid = ltc_mp.mpdiv(key->k, v18, NULL, key->k)) == 0) )
                {
                  is_valid = ltc_mp.ecc_ptmul(key->k, v16, &key->pubkey, a, 1);
                  if ( !is_valid )
                  {
                    key->type = 1;
                    goto LABEL_16;
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      is_valid = 13;
    }
    j_ltc_deinit_multi(key->pubkey.x, key->pubkey.y, key->pubkey.z, key->k, 0i64);
LABEL_16:
    j_ltc_ecc_del_point(v16);
    j_ltc_deinit_multi(a, v18, 0i64);
    goto LABEL_17;
  }
  return 3i64;
}

/*
==============
ecc_make_key_ex
==============
*/
int ecc_make_key_ex(prng_state *prng, int wprng, ecc_key *key, const ltc_ecc_set_type *dp)
{
  __int64 v4; 
  int result; 
  int size; 
  void *v10; 
  int inited; 
  ecc_point *v12; 
  void *v13; 
  void *a; 
  void **p_y; 

  v4 = wprng;
  result = j_prng_is_valid(wprng);
  if ( !result )
  {
    key->idx = -1;
    key->dp = dp;
    size = dp->size;
    v10 = ltc_malloc(0x42ui64);
    if ( !v10 )
      return 13;
    if ( prng_descriptor[v4].read((unsigned __int8 *)v10, size, prng) != size )
    {
      inited = 9;
$ERR_BUF:
      ltc_free(v10);
      return inited;
    }
    p_y = &key->pubkey.y;
    inited = j_ltc_init_multi(&key->pubkey.x, &key->pubkey.y, &key->pubkey.z, &key->k, &a, &v13, 0i64);
    if ( inited )
      goto $ERR_BUF;
    v12 = j_ltc_ecc_new_point();
    if ( v12 )
    {
      inited = ltc_mp.read_radix(a, key->dp->prime, 16);
      if ( !inited )
      {
        inited = ltc_mp.read_radix(v13, key->dp->order, 16);
        if ( !inited )
        {
          inited = ltc_mp.read_radix(v12->x, key->dp->Gx, 16);
          if ( !inited )
          {
            inited = ltc_mp.read_radix(v12->y, key->dp->Gy, 16);
            if ( !inited )
            {
              inited = ltc_mp.set_int(v12->z, 1u);
              if ( !inited )
              {
                inited = ltc_mp.unsigned_read(key->k, (unsigned __int8 *)v10, size);
                if ( !inited && (ltc_mp.compare(key->k, v13) == -1 || (inited = ltc_mp.mpdiv(key->k, v13, NULL, key->k)) == 0) )
                {
                  inited = ltc_mp.ecc_ptmul(key->k, v12, &key->pubkey, a, 1);
                  if ( !inited )
                  {
                    key->type = 1;
                    goto $cleanup_0;
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      inited = 13;
    }
    j_ltc_deinit_multi(key->pubkey.x, *p_y, key->pubkey.z, key->k, 0i64);
$cleanup_0:
    j_ltc_ecc_del_point(v12);
    j_ltc_deinit_multi(a, v13, 0i64);
    goto $ERR_BUF;
  }
  return result;
}

