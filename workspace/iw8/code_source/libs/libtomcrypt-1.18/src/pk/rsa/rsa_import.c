/*
==============
rsa_import
==============
*/
int rsa_import(const unsigned __int8 *in, unsigned int inlen, Rsa_key *key)
{
  int result; 
  int v7; 
  void *v8; 
  int v9; 
  int v10; 
  void *N; 
  int v12; 
  __int64 parameters_type; 
  __int64 parameters_typea; 
  ltc_asn1_list_ *parameters; 
  ltc_asn1_list_ *parametersa; 
  void **p_q; 
  void **p_p; 
  void **p_qP; 
  void **p_dP; 
  void **p_dQ; 
  void **p_d; 
  unsigned int inlena; 
  void *v24; 

  p_qP = &key->qP;
  p_p = &key->p;
  p_q = &key->q;
  p_dP = &key->dP;
  p_d = &key->d;
  p_dQ = &key->dQ;
  result = j_ltc_init_multi(&key->e, &key->d, &key->N);
  if ( result )
    return result;
  v7 = 1;
  inlena = inlen;
  v8 = ltc_calloc(1ui64, inlen);
  if ( v8 )
  {
    v10 = j_der_decode_subject_public_key_info(in, inlen, 0, v8, &inlena, 6u, NULL, 0);
    N = key->N;
    if ( v10 )
    {
      v12 = j_der_decode_sequence_multi(in, inlen, 2i64, 1i64, N, 0i64, 0i64, 0i64);
      v9 = v12;
      if ( v12 && v12 != 21 )
        goto $LBL_ERR;
      if ( ltc_mp.compare_d(key->N, 0) )
      {
        if ( !ltc_mp.compare_d(key->N, 1u) )
        {
          v9 = 18;
          goto $LBL_ERR;
        }
        LODWORD(parametersa) = 1;
        LODWORD(parameters_typea) = 2;
        v9 = j_der_decode_sequence_multi(in, inlen, 2i64, 1i64, key->N, parameters_typea, parametersa, key->e, 0i64, 0i64, 0i64);
        if ( v9 )
          goto $LBL_ERR;
        v7 = 0;
      }
      else
      {
        v9 = ltc_mp.init(&v24);
        if ( v9 )
          goto $LBL_ERR;
        LODWORD(parametersa) = 1;
        LODWORD(parameters_typea) = 2;
        v9 = j_der_decode_sequence_multi(in, inlen, 2i64, 1i64, v24, parameters_typea, parametersa, key->N, 2i64, 1, key->e, 2, 1, key->d, 2, 1, key->p, 2, 1, key->q, 2, 1, key->dP, 2, 1, key->dQ, 2, 1, key->qP, 0i64, 0i64, 0i64);
        if ( v9 )
        {
          ltc_mp.deinit(v24);
          goto $LBL_ERR;
        }
        ltc_mp.deinit(v24);
      }
      key->type = v7;
    }
    else
    {
      LODWORD(parameters) = 1;
      LODWORD(parameters_type) = 2;
      v9 = j_der_decode_sequence_multi((const unsigned __int8 *)v8, inlena, 2i64, 1i64, N, parameters_type, parameters, key->e, 0i64, 0i64, 0i64);
      if ( v9 )
        goto $LBL_ERR;
      key->type = 0;
    }
    v9 = 0;
    goto $LBL_FREE;
  }
  v9 = 13;
$LBL_ERR:
  j_ltc_deinit_multi(*p_d, key->e, key->N, *p_dQ, *p_dP, *p_qP, *p_p, *p_q, 0i64);
$LBL_FREE:
  if ( v8 )
    ltc_free(v8);
  return v9;
}

