/*
==============
rsa_decrypt_key_ex
==============
*/
int rsa_decrypt_key_ex(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen, const unsigned __int8 *lparam, unsigned int lparamlen, int hash_idx, int padding, int *stat, Rsa_key *key)
{
  int *res; 
  int v12; 
  unsigned __int64 v14; 
  int result; 
  Rsa_key *v16; 
  unsigned int modulus_bitlen; 
  unsigned __int8 *v18; 
  int v19; 
  int v20; 
  int v21; 

  res = stat;
  v12 = padding;
  v14 = inlen;
  *stat = 0;
  if ( v12 == 1 )
    goto LABEL_5;
  if ( v12 != 2 )
    return 24;
  result = j_hash_is_valid(hash_idx);
  if ( !result )
  {
LABEL_5:
    v16 = key;
    modulus_bitlen = ltc_mp.count_bits(key->N);
    if ( ltc_mp.unsigned_size(v16->N) == (_DWORD)v14 )
    {
      v18 = (unsigned __int8 *)ltc_malloc(v14);
      if ( v18 )
      {
        padding = v14;
        v19 = ltc_mp.rsa_me(in, v14, v18, (unsigned int *)&padding, 1, key);
        if ( v19 )
        {
          ltc_free(v18);
          return v19;
        }
        else
        {
          if ( v12 == 2 )
            v20 = j_pkcs_1_oaep_decode(v18, padding, lparam, lparamlen, modulus_bitlen, hash_idx, out, outlen, res);
          else
            v20 = j_pkcs_1_v1_5_decode(v18, padding, 2, modulus_bitlen, out, outlen, res);
          v21 = v20;
          ltc_free(v18);
          return v21;
        }
      }
      else
      {
        return 13;
      }
    }
    else
    {
      return 7;
    }
  }
  return result;
}

