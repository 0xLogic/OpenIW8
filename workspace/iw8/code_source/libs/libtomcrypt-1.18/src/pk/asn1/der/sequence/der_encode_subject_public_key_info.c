/*
==============
der_encode_subject_public_key_info
==============
*/
int der_encode_subject_public_key_info(unsigned __int8 *out, unsigned int *outlen, unsigned int algorithm, void *public_key, unsigned int public_key_len, unsigned int parameters_type, void *parameters, unsigned int parameters_len)
{
  int result; 
  int v12; 
  unsigned int v13; 
  int v14; 
  Oid *p_st; 
  __int64 OIDlen; 
  unsigned int v17; 
  void *v18; 
  __int64 v19; 
  Oid st; 

  result = j_pk_get_oid(algorithm, &st);
  if ( !result )
  {
    v14 = 7;
    p_st = &st;
    OIDlen = st.OIDlen;
    v17 = parameters_type;
    v18 = parameters;
    v19 = parameters_len;
    v13 = 8 * public_key_len;
    v12 = 16;
    return j_der_encode_sequence_multi(out, outlen, 13i64, 2i64, &v14, v12, v13, public_key, 0i64, 0i64, 0i64);
  }
  return result;
}

