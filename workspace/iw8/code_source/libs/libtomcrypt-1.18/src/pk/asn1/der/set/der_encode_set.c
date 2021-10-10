/*
==============
_ltc_to_asn1
==============
*/
__int64 ltc_to_asn1(ltc_asn1_type_ v)
{
  __int64 result; 

  switch ( v )
  {
    case LTC_ASN1_BOOLEAN:
      result = 1i64;
      break;
    case LTC_ASN1_INTEGER:
    case LTC_ASN1_SHORT_INTEGER:
      result = 2i64;
      break;
    case LTC_ASN1_BIT_STRING:
    case LTC_ASN1_RAW_BIT_STRING:
      result = 3i64;
      break;
    case LTC_ASN1_OCTET_STRING:
      result = 4i64;
      break;
    case LTC_ASN1_NULL:
      result = 5i64;
      break;
    case LTC_ASN1_OBJECT_IDENTIFIER:
      result = 6i64;
      break;
    case LTC_ASN1_IA5_STRING:
      result = 22i64;
      break;
    case LTC_ASN1_PRINTABLE_STRING:
      result = 19i64;
      break;
    case LTC_ASN1_UTF8_STRING:
      result = 12i64;
      break;
    case LTC_ASN1_UTCTIME:
      result = 23i64;
      break;
    case LTC_ASN1_SEQUENCE:
      result = 48i64;
      break;
    case LTC_ASN1_SET:
    case LTC_ASN1_SETOF:
      result = 49i64;
      break;
    case LTC_ASN1_TELETEX_STRING:
      result = 20i64;
      break;
    case LTC_ASN1_GENERALIZEDTIME:
      result = 24i64;
      break;
    default:
      result = 0xFFFFFFFFi64;
      break;
  }
  return result;
}

/*
==============
der_encode_set
==============
*/
__int64 der_encode_set(ltc_asn1_list_ *list, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  size_t v4; 
  ltc_asn1_list_ *v8; 
  unsigned int v10; 
  signed __int64 v11; 
  unsigned int v12; 

  v4 = inlen;
  v8 = (ltc_asn1_list_ *)ltc_calloc(inlen, 0x38ui64);
  if ( !v8 )
    return 13i64;
  v10 = 0;
  if ( (_DWORD)v4 )
  {
    v11 = (char *)v8 - (char *)list;
    do
    {
      *(__m256i *)((char *)&list->type + v11) = *(__m256i *)&list->type;
      *(_OWORD *)((char *)&list->next + v11) = *(_OWORD *)&list->next;
      *(ltc_asn1_list_ **)((char *)&list->parent + v11) = list->parent;
      *(int *)((char *)&list->used + v11) = v10;
      ++list;
      ++v10;
    }
    while ( v10 < (unsigned int)v4 );
  }
  qsort(v8, v4, 0x38ui64, (_CoreCrtNonSecureSearchSortCompareFunction)qsort_helper);
  v12 = j_der_encode_sequence_ex(v8, v4, out, outlen, 14);
  ltc_free(v8);
  return v12;
}

