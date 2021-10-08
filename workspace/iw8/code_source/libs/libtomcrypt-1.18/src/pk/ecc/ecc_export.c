/*
==============
ecc_export
==============
*/
int ecc_export(unsigned __int8 *out, unsigned int *outlen, int type, ecc_key *key)
{
  if ( key->type != 1 && type == 1 )
    return 14;
  if ( j_ltc_ecc_is_valid_idx(key->idx) )
    return j_der_encode_sequence_multi(out, outlen, 4i64);
  return 16;
}

