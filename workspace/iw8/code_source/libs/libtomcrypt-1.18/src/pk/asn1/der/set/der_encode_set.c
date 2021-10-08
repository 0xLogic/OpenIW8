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
  unsigned int v15; 

  v4 = inlen;
  _RBX = list;
  v8 = (ltc_asn1_list_ *)ltc_calloc(inlen, 0x38ui64);
  if ( !v8 )
    return 13i64;
  v10 = 0;
  if ( (_DWORD)v4 )
  {
    _RCX = (char *)v8 - (char *)_RBX;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rcx+rbx], ymm0
        vmovups xmm1, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rcx+rbx+20h], xmm1
        vmovsd  xmm0, qword ptr [rbx+30h]
        vmovsd  qword ptr [rcx+rbx+30h], xmm0
      }
      *(int *)((char *)&_RBX->used + _RCX) = v10;
      ++_RBX;
      ++v10;
    }
    while ( v10 < (unsigned int)v4 );
  }
  qsort(v8, v4, 0x38ui64, (_CoreCrtNonSecureSearchSortCompareFunction)qsort_helper);
  v15 = j_der_encode_sequence_ex(v8, v4, out, outlen, 14);
  ltc_free(v8);
  return v15;
}

