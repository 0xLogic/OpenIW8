/*
==============
rsa_encrypt_key_ex
==============
*/
int rsa_encrypt_key_ex(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen, const unsigned __int8 *lparam, unsigned int lparamlen, prng_state *prng, int prng_idx, int hash_idx, int padding, Rsa_key *key)
{
  int v11; 
  int result; 
  Rsa_key *v17; 
  unsigned int v18; 
  int modulus_bitlen; 

  v11 = padding;
  if ( (unsigned int)(padding - 1) > 1 )
    return 24;
  result = j_prng_is_valid(prng_idx);
  if ( !result && (v11 != 2 || (result = j_hash_is_valid(hash_idx)) == 0) )
  {
    v17 = key;
    modulus_bitlen = ltc_mp.count_bits(key->N);
    v18 = ltc_mp.unsigned_size(v17->N);
    if ( v18 > *outlen )
    {
      *outlen = v18;
      return 6;
    }
    padding = *outlen;
    if ( v11 == 2 )
    {
      result = j_pkcs_1_oaep_encode(in, inlen, lparam, lparamlen, modulus_bitlen, prng, prng_idx, hash_idx, out, (unsigned int *)&padding);
      if ( result )
        return result;
    }
    else
    {
      result = j_pkcs_1_v1_5_encode(in, inlen, 2, modulus_bitlen, prng, prng_idx, out, (unsigned int *)&padding);
      if ( result )
        return result;
    }
    return ltc_mp.rsa_me(out, padding, out, outlen, 0, v17);
  }
  return result;
}

