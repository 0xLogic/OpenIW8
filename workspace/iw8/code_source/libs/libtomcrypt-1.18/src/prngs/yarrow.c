/*
==============
yarrow_start
==============
*/
int yarrow_start(prng_state *prng)
{
  int v2; 
  int result; 
  int v4; 

  prng->ready = 0;
  v2 = j_register_cipher(&aes_desc);
  prng->yarrow.cipher = v2;
  result = j_cipher_is_valid(v2);
  if ( !result )
  {
    v4 = j_register_hash(&sha256_desc);
    prng->yarrow.hash = v4;
    result = j_hash_is_valid(v4);
    if ( !result )
    {
      j_zeromem(&prng->fortuna.pool[0].data + 1, 0x80ui64);
      return 0;
    }
  }
  return result;
}

/*
==============
yarrow_add_entropy
==============
*/
int yarrow_add_entropy(const unsigned __int8 *in, unsigned int inlen, prng_state *prng)
{
  int result; 
  char v7[400]; 

  result = j_hash_is_valid(prng->yarrow.hash);
  if ( !result )
  {
    result = hash_descriptor[(__int64)prng->yarrow.hash].init((Hash_state *)v7);
    if ( !result )
    {
      result = hash_descriptor[(__int64)prng->yarrow.hash].process((Hash_state *)v7, (const unsigned __int8 *)(&prng->fortuna.pool[0].data + 1), hash_descriptor[(__int64)prng->yarrow.hash].hashsize);
      if ( !result )
      {
        result = hash_descriptor[(__int64)prng->yarrow.hash].process((Hash_state *)v7, in, inlen);
        if ( !result )
          return hash_descriptor[(__int64)prng->yarrow.hash].done((Hash_state *)v7, (unsigned __int8 *)(&prng->fortuna.pool[0].data + 1));
      }
    }
  }
  return result;
}

/*
==============
yarrow_ready
==============
*/
int yarrow_ready(prng_state *prng)
{
  int result; 
  int keylen; 

  result = j_hash_is_valid(prng->yarrow.hash);
  if ( !result )
  {
    result = j_cipher_is_valid(prng->yarrow.cipher);
    if ( !result )
    {
      keylen = hash_descriptor[(__int64)prng->yarrow.hash].hashsize;
      result = cipher_descriptor[prng->yarrow.cipher].keysize(&keylen);
      if ( !result )
      {
        result = j_ctr_start(prng->yarrow.cipher, prng->yarrow.pool, prng->yarrow.pool, keylen, 0, 0, &prng->yarrow.ctr);
        if ( !result )
          prng->ready = 1;
      }
    }
  }
  return result;
}

/*
==============
yarrow_read
==============
*/
__int64 yarrow_read(unsigned __int8 *out, unsigned int outlen, prng_state *prng)
{
  unsigned int v3; 

  v3 = outlen;
  if ( !outlen || !prng || !out )
    return 0i64;
  if ( !prng->ready )
    return 0i64;
  j_zeromem(out, outlen);
  if ( j_ctr_encrypt(out, out, v3, &prng->yarrow.ctr) )
    return 0;
  return v3;
}

/*
==============
yarrow_done
==============
*/
int yarrow_done(prng_state *prng)
{
  prng->ready = 0;
  return j_ctr_done(&prng->yarrow.ctr);
}

/*
==============
yarrow_export
==============
*/
int yarrow_export(unsigned __int8 *out, unsigned int *outlen, prng_state *prng)
{
  int result; 

  if ( *outlen >= 0x40 )
  {
    if ( prng && out && prng->ready && (j_zeromem(out, 0x40ui64), (result = j_ctr_encrypt(out, out, 0x40u, &prng->yarrow.ctr)) == 0) )
      *outlen = 64;
    else
      return 9;
  }
  else
  {
    *outlen = 64;
    return 6;
  }
  return result;
}

/*
==============
yarrow_import
==============
*/
int yarrow_import(const unsigned __int8 *in, unsigned int inlen, prng_state *prng)
{
  int result; 
  int v7; 
  int v8; 
  char v9[400]; 

  if ( inlen < 0x40 )
    return 16;
  prng->ready = 0;
  v7 = j_register_cipher(&aes_desc);
  prng->yarrow.cipher = v7;
  result = j_cipher_is_valid(v7);
  if ( !result )
  {
    v8 = j_register_hash(&sha256_desc);
    prng->yarrow.hash = v8;
    result = j_hash_is_valid(v8);
    if ( !result )
    {
      j_zeromem(&prng->fortuna.pool[0].data + 1, 0x80ui64);
      result = j_hash_is_valid(prng->yarrow.hash);
      if ( !result )
      {
        result = hash_descriptor[(__int64)prng->yarrow.hash].init((Hash_state *)v9);
        if ( !result )
        {
          result = hash_descriptor[(__int64)prng->yarrow.hash].process((Hash_state *)v9, (const unsigned __int8 *)(&prng->fortuna.pool[0].data + 1), hash_descriptor[(__int64)prng->yarrow.hash].hashsize);
          if ( !result )
          {
            result = hash_descriptor[(__int64)prng->yarrow.hash].process((Hash_state *)v9, in, inlen);
            if ( !result )
              return hash_descriptor[(__int64)prng->yarrow.hash].done((Hash_state *)v9, (unsigned __int8 *)(&prng->fortuna.pool[0].data + 1));
          }
        }
      }
    }
  }
  return result;
}

/*
==============
yarrow_test
==============
*/
__int64 yarrow_test()
{
  return 2i64;
}

