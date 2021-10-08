/*
==============
der_encode_sequence_multi
==============
*/
__int64 der_encode_sequence_multi(unsigned __int8 *out, unsigned int *outlen, ltc_asn1_type_ a3, unsigned int a4, void *a5, ...)
{
  unsigned int v5; 
  ltc_asn1_type_ v6; 
  va_list v7; 
  ltc_asn1_list_ *v10; 
  signed int v11; 
  ltc_asn1_type_ v12; 
  unsigned int v13; 
  va_list v14; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  va_list va; 

  va_start(va, a5);
  v5 = 0;
  v6 = a3;
  va_copy(v7, va);
  if ( a3 )
  {
    while ( 2 )
    {
      switch ( v6 )
      {
        case LTC_ASN1_EOL:
        case LTC_ASN1_CHOICE:
        case LTC_ASN1_TELETEX_STRING:
        case LTC_ASN1_CONSTRUCTED:
        case LTC_ASN1_CONTEXT_SPECIFIC:
          return 16i64;
        case LTC_ASN1_BOOLEAN:
        case LTC_ASN1_INTEGER:
        case LTC_ASN1_SHORT_INTEGER:
        case LTC_ASN1_BIT_STRING:
        case LTC_ASN1_OCTET_STRING:
        case LTC_ASN1_NULL:
        case LTC_ASN1_OBJECT_IDENTIFIER:
        case LTC_ASN1_IA5_STRING:
        case LTC_ASN1_PRINTABLE_STRING:
        case LTC_ASN1_UTF8_STRING:
        case LTC_ASN1_UTCTIME:
        case LTC_ASN1_SEQUENCE:
        case LTC_ASN1_SET:
        case LTC_ASN1_SETOF:
        case LTC_ASN1_RAW_BIT_STRING:
        case LTC_ASN1_GENERALIZEDTIME:
          ++v5;
          goto LABEL_4;
        default:
LABEL_4:
          v6 = *(_DWORD *)v7;
          v7 += 24;
          if ( v6 == LTC_ASN1_EOL )
            break;
          continue;
      }
      break;
    }
  }
  if ( !v5 )
    return 2i64;
  v10 = (ltc_asn1_list_ *)ltc_calloc(0x38ui64, v5);
  if ( !v10 )
    return 13i64;
  v11 = 0;
  v12 = a3;
  v13 = a4;
  va_copy(v14, va);
  if ( a3 )
  {
    while ( 2 )
    {
      switch ( v12 )
      {
        case LTC_ASN1_EOL:
        case LTC_ASN1_CHOICE:
        case LTC_ASN1_TELETEX_STRING:
        case LTC_ASN1_CONSTRUCTED:
        case LTC_ASN1_CONTEXT_SPECIFIC:
          v18 = 16;
          goto $LBL_ERR_9;
        case LTC_ASN1_BOOLEAN:
        case LTC_ASN1_INTEGER:
        case LTC_ASN1_SHORT_INTEGER:
        case LTC_ASN1_BIT_STRING:
        case LTC_ASN1_OCTET_STRING:
        case LTC_ASN1_NULL:
        case LTC_ASN1_OBJECT_IDENTIFIER:
        case LTC_ASN1_IA5_STRING:
        case LTC_ASN1_PRINTABLE_STRING:
        case LTC_ASN1_UTF8_STRING:
        case LTC_ASN1_UTCTIME:
        case LTC_ASN1_SEQUENCE:
        case LTC_ASN1_SET:
        case LTC_ASN1_SETOF:
        case LTC_ASN1_RAW_BIT_STRING:
        case LTC_ASN1_GENERALIZEDTIME:
          v16 = v11++;
          v17 = v16;
          v10[v17].type = v12;
          v10[v17].data = a5;
          v10[v17].size = v13;
          v10[v17].used = 0;
          goto LABEL_13;
        default:
LABEL_13:
          v12 = *(_DWORD *)v14;
          v13 = *((_DWORD *)v14 + 2);
          v14 += 24;
          a5 = (void *)*((_QWORD *)v14 - 1);
          if ( v12 == LTC_ASN1_EOL )
            break;
          continue;
      }
      break;
    }
  }
  v18 = j_der_encode_sequence_ex(v10, v11, out, outlen, 13);
$LBL_ERR_9:
  ltc_free(v10);
  return v18;
}

