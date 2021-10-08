/*
==============
rsa_export
==============
*/
int rsa_export(unsigned __int8 *out, unsigned int *outlen, int type, Rsa_key *key)
{
  unsigned int *v4; 
  int v7; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 
  int v10; 
  unsigned int outlena; 

  v4 = outlen;
  if ( type == 1 )
  {
    if ( key->type == 1 )
      return j_der_encode_sequence_multi(out, outlen, 3i64);
    else
      return 18;
  }
  else
  {
    v7 = type & 0x1000;
    if ( (type & 0x1000) != 0 )
    {
      outlena = 2 * (ltc_mp.count_bits(key->N) / 8) + 8;
      v8 = (unsigned __int8 *)ltc_malloc(outlena);
      outlen = &outlena;
      v9 = v8;
      if ( !v8 )
        return 13;
    }
    else
    {
      v9 = out;
    }
    v10 = j_der_encode_sequence_multi(v9, outlen, 2i64);
    if ( !v10 && v7 )
      v10 = j_der_encode_subject_public_key_info(out, v4, 0, v9, outlena, 6u, NULL, 0);
    if ( v9 != out )
      ltc_free(v9);
    return v10;
  }
}

