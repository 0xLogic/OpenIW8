/*
==============
der_decode_choice
==============
*/
__int64 der_decode_choice(const unsigned __int8 *in, unsigned int *inlen, ltc_asn1_list_ *list, unsigned int outlen)
{
  unsigned int v7; 
  int *p_used; 
  __int64 v9; 
  const unsigned __int8 *v10; 
  void **p_data; 
  int v12; 
  unsigned int v13; 
  ltc_utctime *v14; 
  int v15; 
  ltc_asn1_list_ *v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 result; 
  ltc_asn1_list_ *v20; 
  unsigned int v21; 
  unsigned int outlena[4]; 
  unsigned int num; 
  ltc_asn1_list_ *v24; 

  v24 = list;
  if ( *inlen >= 2 )
  {
    v7 = 0;
    if ( outlen )
    {
      p_used = &list->used;
      v9 = outlen;
      do
      {
        *p_used = 0;
        p_used += 14;
        --v9;
      }
      while ( v9 );
      v10 = in;
      p_data = &list->data;
      while ( 2 )
      {
        v12 = *((_DWORD *)p_data - 2);
        v13 = *((_DWORD *)p_data + 2);
        v14 = (ltc_utctime *)*p_data;
        num = v13;
        switch ( v12 )
        {
          case 0:
          case 12:
          case 18:
          case 19:
            return 16i64;
          case 1:
            if ( j_der_decode_boolean(in, *inlen, (int *)v14) )
              goto LABEL_46;
            v15 = j_der_length_boolean(outlena);
            goto LABEL_45;
          case 2:
            if ( j_der_decode_integer(in, *inlen, v14) )
              goto LABEL_46;
            v15 = j_der_length_integer(v14, outlena);
            goto LABEL_45;
          case 3:
            if ( j_der_decode_short_integer(in, *inlen, &v14->YY) )
              goto LABEL_46;
            v15 = j_der_length_short_integer(num, outlena);
            goto LABEL_45;
          case 4:
            if ( !j_der_decode_bit_string(in, *inlen, (unsigned __int8 *)v14, &num) && !j_der_length_bit_string(num, outlena) )
              goto LABEL_15;
            goto LABEL_46;
          case 5:
            if ( j_der_decode_octet_string(in, *inlen, (unsigned __int8 *)v14, &num) || j_der_length_octet_string(num, outlena) )
              goto LABEL_46;
            goto LABEL_15;
          case 6:
            if ( *inlen != 2 || *v10 != 5 || in[v7 + 1] )
              goto LABEL_46;
            v20 = v24;
            *inlen = 2;
            result = 0i64;
            v20[v7].used = 1;
            return result;
          case 7:
            if ( j_der_decode_object_identifier(in, *inlen, &v14->YY, &num) || j_der_length_object_identifier(&v14->YY, num, outlena) )
              goto LABEL_46;
            goto LABEL_15;
          case 8:
            if ( j_der_decode_ia5_string(in, *inlen, (unsigned __int8 *)v14, &num) || j_der_length_ia5_string((const unsigned __int8 *)v14, num, outlena) )
              goto LABEL_46;
            goto LABEL_15;
          case 9:
            if ( j_der_decode_printable_string(in, *inlen, (unsigned __int8 *)v14, &num) || j_der_length_printable_string((const unsigned __int8 *)v14, num, outlena) )
              goto LABEL_46;
            goto LABEL_15;
          case 10:
            if ( j_der_decode_utf8_string(in, *inlen, (wchar_t *)v14, &num) || j_der_length_utf8_string((const wchar_t *)v14, num, outlena) )
              goto LABEL_46;
            goto LABEL_15;
          case 11:
            outlena[0] = *inlen;
            v15 = j_der_decode_utctime(in, outlena, v14);
            goto LABEL_45;
          case 13:
          case 14:
          case 15:
            if ( j_der_decode_sequence_ex(in, *inlen, (ltc_asn1_list_ *)v14, v13, 1) )
              goto LABEL_46;
            v15 = j_der_length_sequence((ltc_asn1_list_ *)v14, num, outlena);
            goto LABEL_45;
          case 16:
            if ( j_der_decode_raw_bit_string(in, *inlen, (unsigned __int8 *)v14, &num) || j_der_length_bit_string(num, outlena) )
              goto LABEL_46;
            goto LABEL_15;
          case 17:
            if ( j_der_decode_teletex_string(in, *inlen, (unsigned __int8 *)v14, &num) || j_der_length_teletex_string((const unsigned __int8 *)v14, num, outlena) )
              goto LABEL_46;
LABEL_15:
            v16 = v24;
            v17 = v7;
            v24[v17].size = num;
            v18 = outlena[0];
            v16[v17].used = 1;
            *inlen = v18;
            return 0i64;
          case 20:
            outlena[0] = *inlen;
            v15 = j_der_decode_generalizedtime(in, outlena, (ltc_generalizedtime *)v14);
LABEL_45:
            if ( v15 )
              goto LABEL_46;
            v21 = outlena[0];
            v24[v7].used = 1;
            *inlen = v21;
            return 0i64;
          default:
LABEL_46:
            ++v7;
            p_data += 7;
            ++v10;
            if ( v7 >= outlen )
              return 7i64;
            continue;
        }
      }
    }
  }
  return 7i64;
}

