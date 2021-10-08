/*
==============
der_encode_generalizedtime
==============
*/
int der_encode_generalizedtime(ltc_generalizedtime *gtime, unsigned __int8 *out, unsigned int *outlen)
{
  int result; 
  __int64 v7; 
  unsigned int fs; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned __int8 v14; 
  __int64 v15; 
  unsigned __int8 v16; 
  __int64 v17; 
  int v18; 
  unsigned __int8 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int outlena; 

  result = j_der_length_generalizedtime(gtime, &outlena);
  if ( !result )
  {
    if ( outlena <= *outlen )
    {
      *out = 24;
      out[2] = j_der_ia5_char_encode(a0123456789[gtime->YYYY / 0x3E8 % 0xA]);
      out[3] = j_der_ia5_char_encode(a0123456789[gtime->YYYY / 0x64 % 0xA]);
      out[4] = j_der_ia5_char_encode(a0123456789[gtime->YYYY / 0xA % 0xA]);
      out[5] = j_der_ia5_char_encode(a0123456789[gtime->YYYY % 0xA]);
      out[6] = j_der_ia5_char_encode(a0123456789[gtime->MM / 0xA % 0xA]);
      out[7] = j_der_ia5_char_encode(a0123456789[gtime->MM % 0xA]);
      out[8] = j_der_ia5_char_encode(a0123456789[gtime->DD / 0xA % 0xA]);
      out[9] = j_der_ia5_char_encode(a0123456789[gtime->DD % 0xA]);
      out[10] = j_der_ia5_char_encode(a0123456789[gtime->hh / 0xA % 0xA]);
      out[11] = j_der_ia5_char_encode(a0123456789[gtime->hh % 0xA]);
      out[12] = j_der_ia5_char_encode(a0123456789[gtime->mm / 0xA % 0xA]);
      out[13] = j_der_ia5_char_encode(a0123456789[gtime->mm % 0xA]);
      out[14] = j_der_ia5_char_encode(a0123456789[gtime->ss / 0xA % 0xA]);
      out[15] = j_der_ia5_char_encode(a0123456789[gtime->ss % 0xA]);
      LODWORD(v7) = 16;
      fs = gtime->fs;
      if ( fs )
      {
        v9 = 0;
        out[16] = j_der_ia5_char_encode(46);
        v10 = 17;
        v11 = 1;
        do
        {
          v12 = v9++;
          v11 *= 10;
          fs /= 0xAu;
        }
        while ( fs );
        if ( v9 > 1 )
        {
          v13 = v12;
          do
          {
            v11 /= 0xAu;
            v14 = j_der_ia5_char_encode(a0123456789[gtime->fs / v11 % 0xA]);
            v15 = v10++;
            out[v15] = v14;
            --v13;
          }
          while ( v13 );
        }
        v16 = j_der_ia5_char_encode(a0123456789[gtime->fs % 0xA]);
        v17 = v10;
        LODWORD(v7) = v10 + 1;
        out[v17] = v16;
      }
      if ( gtime->off_mm || gtime->off_hh )
      {
        v18 = 43;
        if ( gtime->off_dir )
          v18 = 45;
        v19 = j_der_ia5_char_encode(v18);
        v20 = (unsigned int)v7;
        v21 = (unsigned int)(v7 + 1);
        out[v20] = v19;
        out[v21] = j_der_ia5_char_encode(a0123456789[gtime->off_hh / 0xA % 0xA]);
        v22 = (unsigned int)(v21 + 1);
        out[v22] = j_der_ia5_char_encode(a0123456789[gtime->off_hh % 0xA]);
        v23 = (unsigned int)(v22 + 1);
        out[v23] = j_der_ia5_char_encode(a0123456789[gtime->off_mm / 0xA % 0xA]);
        v7 = (unsigned int)(v23 + 1);
        out[v7] = j_der_ia5_char_encode(a0123456789[gtime->off_mm % 0xA]);
      }
      else
      {
        out[(unsigned int)v7] = j_der_ia5_char_encode(90);
      }
      out[1] = v7 - 1;
      result = 0;
      *outlen = v7 + 1;
    }
    else
    {
      *outlen = outlena;
      return 6;
    }
  }
  return result;
}

