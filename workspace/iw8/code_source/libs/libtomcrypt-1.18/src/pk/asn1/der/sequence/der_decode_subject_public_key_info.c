/*
==============
der_decode_subject_public_key_info
==============
*/
int der_decode_subject_public_key_info(const unsigned __int8 *in, unsigned int inlen, unsigned int algorithm, void *public_key, unsigned int *public_key_len, unsigned int parameters_type, ltc_asn1_list_ *parameters, unsigned int parameters_len)
{
  int result; 
  void *v12; 
  int v13; 
  unsigned int v14; 
  int v15; 
  void *Buf2; 
  __int64 v17; 
  unsigned int v18; 
  ltc_asn1_list_ *v19; 
  unsigned int v20; 
  int v21; 
  ltc_asn1_list_ list; 
  int v23; 
  void *Src; 
  unsigned int v25; 
  int v26; 
  Oid st; 
  char v28; 

  result = j_pk_get_oid(algorithm, &st);
  if ( !result )
  {
    v12 = ltc_calloc(1ui64, inlen);
    v13 = 13;
    if ( v12 )
    {
      Buf2 = &v28;
      v18 = parameters_type;
      v19 = parameters;
      v20 = parameters_len;
      list.data = &v15;
      v25 = 8 * inlen;
      v15 = 7;
      v17 = 16i64;
      v21 = 0;
      list.type = LTC_ASN1_SEQUENCE;
      *(_QWORD *)&list.size = 2i64;
      v23 = 16;
      Src = v12;
      v26 = 0;
      v13 = j_der_decode_sequence_ex(in, inlen, &list, 2u, 1);
      if ( !v13 )
      {
        if ( (_DWORD)v17 == st.OIDlen && !memcmp_0(&st, Buf2, 4i64 * st.OIDlen) )
        {
          v14 = v25 >> 3;
          if ( *public_key_len <= v25 >> 3 )
          {
            *public_key_len = v14;
            v13 = 6;
          }
          else
          {
            memcpy_0(public_key, Src, v14);
            *public_key_len = v14;
            v13 = 0;
          }
        }
        else
        {
          v13 = 18;
        }
      }
    }
    ltc_free(v12);
    return v13;
  }
  return result;
}

