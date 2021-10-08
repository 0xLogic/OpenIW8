/*
==============
der_encode_utctime
==============
*/
int der_encode_utctime(ltc_utctime *utctime, unsigned __int8 *out, unsigned int *outlen)
{
  int result; 
  unsigned int v7; 
  int v8; 
  unsigned int outlena; 

  result = j_der_length_utctime(utctime, &outlena);
  if ( !result )
  {
    if ( outlena <= *outlen )
    {
      *out = 23;
      out[2] = j_der_ia5_char_encode(a0123456789[utctime->YY / 0xA % 0xA]);
      out[3] = j_der_ia5_char_encode(a0123456789[utctime->YY % 0xA]);
      out[4] = j_der_ia5_char_encode(a0123456789[utctime->MM / 0xA % 0xA]);
      out[5] = j_der_ia5_char_encode(a0123456789[utctime->MM % 0xA]);
      out[6] = j_der_ia5_char_encode(a0123456789[utctime->DD / 0xA % 0xA]);
      out[7] = j_der_ia5_char_encode(a0123456789[utctime->DD % 0xA]);
      out[8] = j_der_ia5_char_encode(a0123456789[utctime->hh / 0xA % 0xA]);
      out[9] = j_der_ia5_char_encode(a0123456789[utctime->hh % 0xA]);
      out[10] = j_der_ia5_char_encode(a0123456789[utctime->mm / 0xA % 0xA]);
      out[11] = j_der_ia5_char_encode(a0123456789[utctime->mm % 0xA]);
      out[12] = j_der_ia5_char_encode(a0123456789[utctime->ss / 0xA % 0xA]);
      out[13] = j_der_ia5_char_encode(a0123456789[utctime->ss % 0xA]);
      if ( utctime->off_mm || utctime->off_hh )
      {
        v8 = 43;
        if ( utctime->off_dir )
          v8 = 45;
        out[14] = j_der_ia5_char_encode(v8);
        out[15] = j_der_ia5_char_encode(a0123456789[utctime->off_hh / 0xA % 0xA]);
        out[16] = j_der_ia5_char_encode(a0123456789[utctime->off_hh % 0xA]);
        out[17] = j_der_ia5_char_encode(a0123456789[utctime->off_mm / 0xA % 0xA]);
        out[18] = j_der_ia5_char_encode(a0123456789[utctime->off_mm % 0xA]);
        v7 = 19;
      }
      else
      {
        out[14] = j_der_ia5_char_encode(90);
        v7 = 15;
      }
      out[1] = v7 - 2;
      result = 0;
      *outlen = v7;
    }
    else
    {
      *outlen = outlena;
      return 6;
    }
  }
  return result;
}

