/*
==============
rsa_sign_hash_ex
==============
*/
int rsa_sign_hash_ex(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen, int padding, prng_state *prng, int prng_idx, int hash_idx, unsigned int saltlen, Rsa_key *key)
{
  int v10; 
  int result; 
  __int64 v16; 
  Rsa_key *v17; 
  unsigned int v18; 
  void *N; 
  unsigned int v20; 
  int v21; 
  void *v22; 
  unsigned __int8 *v23; 
  int v24; 
  unsigned int msglen; 
  unsigned int modulus_bitlen; 
  int v27; 
  unsigned int *OID; 
  unsigned int OIDlen; 
  int v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  ltc_asn1_list_ list; 
  int v35; 
  const unsigned __int8 *v36; 
  unsigned int v37; 
  int v38; 

  v10 = padding;
  if ( padding != 1 )
  {
    if ( padding == 3 )
    {
      result = j_prng_is_valid(prng_idx);
      if ( result )
        return result;
    }
    else if ( padding != 4 )
    {
      return 24;
    }
  }
  v16 = hash_idx;
  if ( v10 == 4 || (result = j_hash_is_valid(hash_idx)) == 0 )
  {
    v17 = key;
    v18 = ltc_mp.count_bits(key->N);
    N = v17->N;
    modulus_bitlen = v18;
    v20 = ltc_mp.unsigned_size(N);
    v21 = *outlen;
    if ( v20 > *outlen )
    {
      *outlen = v20;
      return 6;
    }
    if ( v10 == 3 )
    {
      padding = *outlen;
      result = j_pkcs_1_pss_encode(in, inlen, saltlen, prng, prng_idx, v16, modulus_bitlen, out, (unsigned int *)&padding);
      if ( result )
        return result;
      return ltc_mp.rsa_me(out, padding, out, outlen, 1, v17);
    }
    if ( v10 == 1 )
    {
      if ( !hash_descriptor[v16].OIDlen )
        return 16;
      OIDlen = hash_descriptor[v16].OIDlen;
      v22 = v17->N;
      OID = hash_descriptor[v16].OID;
      list.data = &v27;
      v27 = 7;
      v30 = 0;
      v31 = 6;
      v32 = 0i64;
      v33 = 0i64;
      list.type = LTC_ASN1_SEQUENCE;
      *(_QWORD *)&list.size = 2i64;
      v35 = 5;
      v36 = in;
      v37 = inlen;
      v38 = 0;
      msglen = ltc_mp.unsigned_size(v22);
      v23 = (unsigned __int8 *)ltc_malloc(msglen);
      in = v23;
      if ( !v23 )
        return 13;
      v24 = j_der_encode_sequence_ex(&list, 2u, v23, &msglen, 13);
      if ( v24 )
      {
        ltc_free((void *)in);
        return v24;
      }
      v21 = *outlen;
      inlen = msglen;
    }
    else
    {
      msglen = inlen;
    }
    padding = v21;
    v24 = j_pkcs_1_v1_5_encode(in, inlen, 1, modulus_bitlen, NULL, 0, out, (unsigned int *)&padding);
    if ( v10 == 1 )
      ltc_free((void *)in);
    if ( !v24 )
      return ltc_mp.rsa_me(out, padding, out, outlen, 1, v17);
    return v24;
  }
  return result;
}

