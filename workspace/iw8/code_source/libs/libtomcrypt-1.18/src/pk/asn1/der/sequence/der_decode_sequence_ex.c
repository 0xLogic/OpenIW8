/*
==============
der_decode_sequence_ex
==============
*/
int der_decode_sequence_ex(const unsigned __int8 *in, unsigned int inlen, ltc_asn1_list_ *list, unsigned int outlen, int ordered)
{
  __int64 v5; 
  ltc_asn1_list_ *v6; 
  const unsigned __int8 *v7; 
  unsigned __int8 v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  __int64 v14; 
  int *p_used; 
  __int64 v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  ltc_asn1_list_ *v20; 
  unsigned int size; 
  ltc_asn1_type_ type; 
  ltc_utctime *data; 
  int result; 
  __int64 v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  const unsigned __int8 *v33; 
  int *i; 
  int v35; 
  unsigned int nbits; 
  __int64 v37; 
  unsigned int outlena; 
  ltc_asn1_list_ *v40; 
  unsigned int v41; 

  v41 = outlen;
  v40 = list;
  v5 = outlen;
  v6 = list;
  v7 = in;
  if ( inlen < 2 || (unsigned __int8)(*in - 48) > 1u )
    return 7;
  v9 = in[1];
  v10 = 0;
  if ( v9 >= 0x80u )
  {
    if ( (unsigned __int8)(v9 + 127) > 2u )
      return 7;
    v12 = 2;
    v13 = v9 & 0x7F;
    if ( v13 + 2 > inlen )
      return 7;
    v11 = 0;
    if ( (v9 & 0x7F) != 0 )
    {
      do
      {
        v14 = v12++;
        v11 = in[v14] | (v11 << 8);
        --v13;
      }
      while ( v13 );
    }
  }
  else
  {
    v11 = v9;
    v12 = 2;
  }
  if ( v11 + v12 > inlen )
    return 7;
  if ( (int)v5 > 0 )
  {
    p_used = &v6->used;
    v16 = v5;
    do
    {
      *p_used = 0;
      p_used += 14;
      --v16;
    }
    while ( v16 );
  }
  v17 = 0;
  if ( (int)v5 <= 0 )
    return v11 != 0 ? 0x15 : 0;
  v18 = ordered;
  v19 = 0i64;
  v37 = 0i64;
  while ( 1 )
  {
    outlena = 0;
    v20 = &v6[v19];
    size = v20->size;
    type = v20->type;
    data = (ltc_utctime *)v20->data;
    nbits = size;
    if ( !v18 && v20->used == 1 )
      goto LABEL_55;
    if ( type == LTC_ASN1_EOL )
      break;
    switch ( type )
    {
      case LTC_ASN1_EOL:
      case LTC_ASN1_CONSTRUCTED:
      case LTC_ASN1_CONTEXT_SPECIFIC:
        return 16;
      case LTC_ASN1_BOOLEAN:
        outlena = v11;
        result = j_der_decode_boolean(&v7[v12], v11, (int *)data);
        if ( result )
          goto LABEL_53;
        result = j_der_length_boolean(&outlena);
        goto LABEL_21;
      case LTC_ASN1_INTEGER:
        outlena = v11;
        result = j_der_decode_integer(&v7[v12], v11, data);
        if ( result )
          goto LABEL_53;
        result = j_der_length_integer(data, &outlena);
        goto LABEL_21;
      case LTC_ASN1_SHORT_INTEGER:
        outlena = v11;
        result = j_der_decode_short_integer(&v7[v12], v11, &data->YY);
        if ( result )
          goto LABEL_53;
        result = j_der_length_short_integer(data->YY, &outlena);
        goto LABEL_21;
      case LTC_ASN1_BIT_STRING:
        outlena = v11;
        result = j_der_decode_bit_string(&v7[v12], v11, (unsigned __int8 *)data, &nbits);
        goto LABEL_30;
      case LTC_ASN1_OCTET_STRING:
        outlena = v11;
        result = j_der_decode_octet_string(&v7[v12], v11, (unsigned __int8 *)data, &nbits);
        if ( result )
          goto LABEL_53;
        v27 = nbits;
        v20->size = nbits;
        result = j_der_length_octet_string(v27, &outlena);
        goto LABEL_21;
      case LTC_ASN1_NULL:
        if ( v11 >= 2 && v7[v12] == 5 && !v7[v12 + 1] )
        {
          outlena = 2;
          goto LABEL_23;
        }
        if ( v18 )
          return 7;
        break;
      case LTC_ASN1_OBJECT_IDENTIFIER:
        outlena = v11;
        result = j_der_decode_object_identifier(&v7[v12], v11, &data->YY, &nbits);
        if ( result )
          goto LABEL_53;
        v28 = nbits;
        v20->size = nbits;
        result = j_der_length_object_identifier(&data->YY, v28, &outlena);
        goto LABEL_21;
      case LTC_ASN1_IA5_STRING:
        outlena = v11;
        result = j_der_decode_ia5_string(&v7[v12], v11, (unsigned __int8 *)data, &nbits);
        if ( result )
          goto LABEL_53;
        v30 = nbits;
        v20->size = nbits;
        result = j_der_length_ia5_string((const unsigned __int8 *)data, v30, &outlena);
        goto LABEL_21;
      case LTC_ASN1_PRINTABLE_STRING:
        outlena = v11;
        result = j_der_decode_printable_string(&v7[v12], v11, (unsigned __int8 *)data, &nbits);
        if ( result )
          goto LABEL_53;
        v31 = nbits;
        v20->size = nbits;
        result = j_der_length_printable_string((const unsigned __int8 *)data, v31, &outlena);
        goto LABEL_21;
      case LTC_ASN1_UTF8_STRING:
        outlena = v11;
        result = j_der_decode_utf8_string(&v7[v12], v11, (wchar_t *)data, &nbits);
        if ( result )
          goto LABEL_53;
        v32 = nbits;
        v20->size = nbits;
        result = j_der_length_utf8_string((const wchar_t *)data, v32, &outlena);
        goto LABEL_21;
      case LTC_ASN1_UTCTIME:
        outlena = v11;
        result = j_der_decode_utctime(&v7[v12], &outlena, data);
        goto LABEL_52;
      case LTC_ASN1_CHOICE:
        outlena = v11;
        result = j_der_decode_choice(&v7[v12], &outlena, (ltc_asn1_list_ *)data, size);
        goto LABEL_52;
      case LTC_ASN1_SEQUENCE:
      case LTC_ASN1_SETOF:
        if ( type == LTC_ASN1_SETOF && (v7[v12] & 0x3F) != 49 )
          return 7;
        v33 = &v7[v12];
        if ( type == LTC_ASN1_SEQUENCE && (*v33 & 0x3F) != 48 )
          return 7;
        v35 = 1;
        goto LABEL_60;
      case LTC_ASN1_SET:
        v33 = &v7[v12];
        v35 = 0;
LABEL_60:
        outlena = v11;
        result = j_der_decode_sequence_ex(v33, v11, (ltc_asn1_list_ *)data, size, v35);
        if ( result )
          goto LABEL_53;
        result = j_der_length_sequence((ltc_asn1_list_ *)data, nbits, &outlena);
        goto LABEL_21;
      case LTC_ASN1_RAW_BIT_STRING:
        outlena = v11;
        result = j_der_decode_raw_bit_string(&v7[v12], v11, (unsigned __int8 *)data, &nbits);
LABEL_30:
        if ( result )
          goto LABEL_53;
        v26 = nbits;
        v20->size = nbits;
        result = j_der_length_bit_string(v26, &outlena);
        goto LABEL_21;
      case LTC_ASN1_TELETEX_STRING:
        outlena = v11;
        result = j_der_decode_teletex_string(&v7[v12], v11, (unsigned __int8 *)data, &nbits);
        if ( result )
          goto LABEL_53;
        v29 = nbits;
        v20->size = nbits;
        result = j_der_length_teletex_string((const unsigned __int8 *)data, v29, &outlena);
LABEL_21:
        if ( !result )
          goto LABEL_22;
        return result;
      case LTC_ASN1_GENERALIZEDTIME:
        outlena = v11;
        result = j_der_decode_generalizedtime(&v7[v12], &outlena, (ltc_generalizedtime *)data);
LABEL_52:
        if ( result )
        {
LABEL_53:
          if ( v18 )
            return result;
          LODWORD(v5) = v41;
        }
        else
        {
LABEL_22:
          LODWORD(v5) = v41;
LABEL_23:
          v12 += outlena;
          v11 -= outlena;
          v20->used = 1;
          if ( !v18 )
          {
            v25 = -1i64;
            v17 = -1;
            goto LABEL_56;
          }
        }
        break;
      default:
        goto LABEL_23;
    }
LABEL_55:
    v25 = v37;
LABEL_56:
    v6 = v40;
    v19 = v25 + 1;
    ++v17;
    v37 = v19;
    if ( v17 >= (int)v5 )
      goto LABEL_70;
    v7 = in;
  }
  v6 = v40;
LABEL_70:
  if ( (int)v5 <= 0 )
    return v11 != 0 ? 0x15 : 0;
  for ( i = &v6->used; *i; i += 14 )
  {
    if ( ++v10 >= (int)v5 )
      return v11 != 0 ? 0x15 : 0;
  }
  return 7;
}

