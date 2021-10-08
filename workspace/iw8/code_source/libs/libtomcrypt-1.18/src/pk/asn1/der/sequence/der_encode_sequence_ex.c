/*
==============
der_encode_sequence_ex
==============
*/
int der_encode_sequence_ex(ltc_asn1_list_ *list, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen, int type_of)
{
  unsigned int v7; 
  int result; 
  unsigned int v11; 
  int v12; 
  unsigned __int8 v13; 
  __int16 v14; 
  unsigned int v15; 
  unsigned int v16; 
  void **p_data; 
  int v18; 
  unsigned int v19; 
  ltc_utctime *v20; 
  unsigned int v21; 
  unsigned int payloadlen; 
  unsigned int outlena[3]; 

  v7 = 0;
  outlena[0] = 0;
  payloadlen = 0;
  if ( j_der_length_sequence_ex(list, inlen, outlena, &payloadlen) )
    return 16;
  if ( *outlen >= outlena[0] )
  {
    v11 = payloadlen;
    v12 = 1;
    *out = (type_of != 13) + 48;
    if ( v11 >= 0x80 )
    {
      v13 = payloadlen;
      if ( payloadlen >= 0x100 )
      {
        v14 = payloadlen;
        if ( payloadlen >= 0x10000 )
        {
          v15 = payloadlen;
          if ( payloadlen < 0x1000000 )
          {
            out[1] = -125;
            v12 = 5;
            out[2] = BYTE2(v15);
            out[3] = BYTE1(v15);
            out[4] = v15;
          }
        }
        else
        {
          out[1] = -126;
          v12 = 4;
          out[2] = HIBYTE(v14);
          out[3] = v14;
        }
      }
      else
      {
        out[1] = -127;
        v12 = 3;
        out[2] = v13;
      }
    }
    else
    {
      out[1] = v11;
      v12 = 2;
    }
    v16 = *outlen - v12;
    *outlen = v16;
    if ( inlen )
    {
      p_data = &list->data;
      while ( 2 )
      {
        v18 = *((_DWORD *)p_data - 2);
        v19 = *((_DWORD *)p_data + 2);
        v20 = (ltc_utctime *)*p_data;
        if ( v18 )
        {
          switch ( v18 )
          {
            case 0:
            case 12:
            case 17:
            case 18:
            case 19:
              return 16;
            case 1:
              payloadlen = v16;
              result = j_der_encode_boolean(v20->YY, &out[v12], &payloadlen);
              goto LABEL_33;
            case 2:
              payloadlen = v16;
              result = j_der_encode_integer(v20, &out[v12], &payloadlen);
              goto LABEL_33;
            case 3:
              payloadlen = v16;
              result = j_der_encode_short_integer(v20->YY, &out[v12], &payloadlen);
              goto LABEL_33;
            case 4:
              payloadlen = v16;
              result = j_der_encode_bit_string((const unsigned __int8 *)v20, v19, &out[v12], &payloadlen);
              goto LABEL_33;
            case 5:
              payloadlen = v16;
              result = j_der_encode_octet_string((const unsigned __int8 *)v20, v19, &out[v12], &payloadlen);
              goto LABEL_33;
            case 6:
              payloadlen = 2;
              out[v12] = 5;
              out[v12 + 1] = 0;
              goto LABEL_34;
            case 7:
              payloadlen = v16;
              result = j_der_encode_object_identifier(&v20->YY, v19, &out[v12], &payloadlen);
              goto LABEL_33;
            case 8:
              payloadlen = v16;
              result = j_der_encode_ia5_string((const unsigned __int8 *)v20, v19, &out[v12], &payloadlen);
              goto LABEL_33;
            case 9:
              payloadlen = v16;
              result = j_der_encode_printable_string((const unsigned __int8 *)v20, v19, &out[v12], &payloadlen);
              goto LABEL_33;
            case 10:
              payloadlen = v16;
              result = j_der_encode_utf8_string((const wchar_t *)v20, v19, &out[v12], &payloadlen);
              goto LABEL_33;
            case 11:
              payloadlen = v16;
              result = j_der_encode_utctime(v20, &out[v12], &payloadlen);
              goto LABEL_33;
            case 13:
              payloadlen = v16;
              result = j_der_encode_sequence_ex((ltc_asn1_list_ *)v20, v19, &out[v12], &payloadlen, 13);
              goto LABEL_33;
            case 14:
              payloadlen = v16;
              result = j_der_encode_set((ltc_asn1_list_ *)v20, v19, &out[v12], &payloadlen);
              goto LABEL_33;
            case 15:
              payloadlen = v16;
              result = j_der_encode_setof((ltc_asn1_list_ *)v20, v19, &out[v12], &payloadlen);
              goto LABEL_33;
            case 16:
              payloadlen = v16;
              result = j_der_encode_raw_bit_string((const unsigned __int8 *)v20, v19, &out[v12], &payloadlen);
              goto LABEL_33;
            case 20:
              payloadlen = v16;
              result = j_der_encode_generalizedtime((ltc_generalizedtime *)v20, &out[v12], &payloadlen);
LABEL_33:
              if ( !result )
                goto LABEL_34;
              return result;
            default:
LABEL_34:
              v21 = payloadlen;
              ++v7;
              *outlen -= payloadlen;
              v12 += v21;
              v16 = *outlen;
              p_data += 7;
              if ( v7 >= inlen )
                break;
              continue;
          }
        }
        break;
      }
    }
    *outlen = v12;
    return 0;
  }
  else
  {
    *outlen = outlena[0];
    return 6;
  }
}

