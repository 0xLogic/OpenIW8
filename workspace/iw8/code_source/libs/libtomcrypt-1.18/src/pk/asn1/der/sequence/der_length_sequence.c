/*
==============
der_length_sequence
==============
*/
int der_length_sequence(ltc_asn1_list_ *list, unsigned int inlen, unsigned int *outlen)
{
  return j_der_length_sequence_ex(list, inlen, outlen, NULL);
}

/*
==============
der_length_sequence_ex
==============
*/
int der_length_sequence_ex(ltc_asn1_list_ *list, unsigned int inlen, unsigned int *outlen, unsigned int *payloadlen)
{
  unsigned int v4; 
  unsigned int v5; 
  void **p_data; 
  int v10; 
  unsigned int v11; 
  int result; 
  int v13; 
  unsigned int outlena; 

  v4 = 0;
  v5 = 0;
  if ( !inlen )
    goto LABEL_30;
  p_data = &list->data;
  while ( 2 )
  {
    v10 = *((_DWORD *)p_data - 2);
    v11 = *((_DWORD *)p_data + 2);
    if ( v10 )
    {
      switch ( v10 )
      {
        case 0:
        case 12:
        case 18:
        case 19:
          return 16;
        case 1:
          result = j_der_length_boolean(&outlena);
          goto LABEL_19;
        case 2:
          result = j_der_length_integer(*p_data, &outlena);
          goto LABEL_19;
        case 3:
          result = j_der_length_short_integer(*(_DWORD *)*p_data, &outlena);
          goto LABEL_19;
        case 4:
        case 16:
          result = j_der_length_bit_string(v11, &outlena);
          goto LABEL_19;
        case 5:
          result = j_der_length_octet_string(v11, &outlena);
          goto LABEL_19;
        case 6:
          v4 += 2;
          goto LABEL_21;
        case 7:
          result = j_der_length_object_identifier((unsigned int *)*p_data, v11, &outlena);
          goto LABEL_19;
        case 8:
          result = j_der_length_ia5_string((const unsigned __int8 *)*p_data, v11, &outlena);
          goto LABEL_19;
        case 9:
          result = j_der_length_printable_string((const unsigned __int8 *)*p_data, v11, &outlena);
          goto LABEL_19;
        case 10:
          result = j_der_length_utf8_string((const wchar_t *)*p_data, v11, &outlena);
          goto LABEL_19;
        case 11:
          result = j_der_length_utctime((ltc_utctime *)*p_data, &outlena);
          goto LABEL_19;
        case 13:
        case 14:
        case 15:
          result = j_der_length_sequence_ex((ltc_asn1_list_ *)*p_data, v11, &outlena, NULL);
          goto LABEL_19;
        case 17:
          result = j_der_length_teletex_string((const unsigned __int8 *)*p_data, v11, &outlena);
          goto LABEL_19;
        case 20:
          result = j_der_length_generalizedtime((ltc_generalizedtime *)*p_data, &outlena);
LABEL_19:
          if ( result )
            return result;
          v4 += outlena;
LABEL_21:
          ++v5;
          p_data += 7;
          if ( v5 >= inlen )
            break;
          continue;
        default:
          goto LABEL_21;
      }
    }
    break;
  }
  if ( v4 >= 0x80 )
  {
    if ( v4 >= 0x100 )
    {
      if ( v4 >= 0x10000 )
      {
        if ( v4 >= 0x1000000 )
          return 16;
        v13 = 5;
      }
      else
      {
        v13 = 4;
      }
    }
    else
    {
      v13 = 3;
    }
  }
  else
  {
LABEL_30:
    v13 = 2;
  }
  if ( payloadlen )
    *payloadlen = v4;
  *outlen = v13 + v4;
  return 0;
}

