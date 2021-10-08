/*
==============
rsa_verify_hash_ex
==============
*/
int rsa_verify_hash_ex(const unsigned __int8 *sig, unsigned int siglen, const unsigned __int8 *hash, unsigned int hashlen, int padding, int hash_idx, unsigned int saltlen, int *stat, Rsa_key *key)
{
  size_t v9; 
  unsigned __int64 v10; 
  int result; 
  unsigned int modulus_bitlen; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned __int8 *out; 
  __int64 v19; 
  unsigned int v20; 
  unsigned __int8 *v21; 
  unsigned int inlen; 
  unsigned int v23; 
  unsigned int siglena; 
  unsigned __int8 *msghash; 
  int is_valid[2]; 
  ltc_asn1_list_ list; 
  int v28; 
  unsigned __int8 *v29; 
  int v30; 
  int v31; 
  int v32; 
  void *Buf1; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  __int64 v37; 
  char v38; 

  *(_QWORD *)is_valid = sig;
  v9 = hashlen;
  msghash = (unsigned __int8 *)hash;
  v10 = siglen;
  v23 = hash_idx;
  *stat = 0;
  if ( ((padding - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( padding != 4 )
      return 24;
LABEL_6:
    modulus_bitlen = ltc_mp.count_bits(key->N);
    if ( ltc_mp.unsigned_size(key->N) != (_DWORD)v10 )
      return 7;
    v13 = (unsigned __int8 *)ltc_malloc(v10);
    v14 = v13;
    if ( !v13 )
      return 13;
    siglena = v10;
    v15 = ltc_mp.rsa_me(*(const unsigned __int8 **)is_valid, v10, v13, &siglena, 0, key);
    if ( v15 )
    {
      ltc_free(v14);
      return v15;
    }
    if ( siglena != (_DWORD)v10 )
    {
      ltc_free(v14);
      return 7;
    }
    v16 = modulus_bitlen & 7;
    if ( padding == 3 )
    {
      if ( v16 == 1 )
        v17 = j_pkcs_1_pss_decode(msghash, v9, v14 + 1, siglena - 1, saltlen, v23, modulus_bitlen, stat);
      else
        v17 = j_pkcs_1_pss_decode(msghash, v9, v14, siglena, saltlen, v23, modulus_bitlen, stat);
      goto $bail_2;
    }
    inlen = (v16 != 0) + (modulus_bitlen >> 3) - 3;
    out = (unsigned __int8 *)ltc_malloc(inlen);
    if ( !out )
    {
      v17 = 13;
$bail_2:
      ltc_free(v14);
      return v17;
    }
    v17 = j_pkcs_1_v1_5_decode(v14, siglena, 1, modulus_bitlen, out, &inlen, is_valid);
    if ( !v17 )
    {
      if ( padding == 1 )
      {
        v19 = (__int64)(int)v23 << 7;
        if ( !*(unsigned int *)((char *)&hash_descriptor[0].OID[16] + v19) )
        {
          v17 = 16;
          goto $bail_2;
        }
        Buf1 = &v38;
        v36 = 0i64;
        v37 = 0i64;
        v31 = 0;
        v32 = 7;
        v34 = 16i64;
        v35 = 6;
        list.type = LTC_ASN1_SEQUENCE;
        list.data = &v32;
        *(_QWORD *)&list.size = 2i64;
        v28 = 5;
        v29 = v14;
        v30 = v10;
        if ( !j_der_decode_sequence_ex(out, inlen, &list, 2u, 1) || (list.data = &v32, list.type = LTC_ASN1_SEQUENCE, *(_QWORD *)&list.size = 1i64, (v17 = j_der_decode_sequence_ex(out, inlen, &list, 2u, 1)) == 0) )
        {
          v17 = j_der_length_sequence(&list, 2u, &v23);
          if ( !v17 && v23 == inlen )
          {
            v20 = *(unsigned int *)((char *)&hash_descriptor[0].OID[16] + v19);
            if ( (_DWORD)v34 == v20 && !memcmp_0(Buf1, (char *)hash_descriptor[0].OID + v19, 4i64 * v20) && v30 == (_DWORD)v9 )
            {
              v21 = v29;
              goto LABEL_34;
            }
          }
        }
      }
      else if ( (_DWORD)v9 == inlen )
      {
        v21 = out;
LABEL_34:
        if ( !memcmp_0(v21, msghash, v9) )
          *stat = 1;
      }
    }
    ltc_free(out);
    goto $bail_2;
  }
  if ( padding == 4 )
    goto LABEL_6;
  result = j_hash_is_valid(hash_idx);
  if ( !result )
    goto LABEL_6;
  return result;
}

