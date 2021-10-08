/*
==============
_char_to_int
==============
*/
__int64 char_to_int(unsigned __int8 x)
{
  __int64 result; 

  switch ( x )
  {
    case '0':
      result = 0i64;
      break;
    case '1':
      result = 1i64;
      break;
    case '2':
      result = 2i64;
      break;
    case '3':
      result = 3i64;
      break;
    case '4':
      result = 4i64;
      break;
    case '5':
      result = 5i64;
      break;
    case '6':
      result = 6i64;
      break;
    case '7':
      result = 7i64;
      break;
    case '8':
      result = 8i64;
      break;
    case '9':
      result = 9i64;
      break;
    default:
      result = 100i64;
      break;
  }
  return result;
}

/*
==============
der_decode_generalizedtime
==============
*/
__int64 der_decode_generalizedtime(const unsigned __int8 *in, unsigned int *inlen, ltc_generalizedtime *out)
{
  unsigned __int8 v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  int v22; 
  int v23; 
  unsigned int v24; 
  int v25; 
  int v26; 
  unsigned int v27; 
  int v28; 
  int v29; 
  unsigned int v30; 
  unsigned __int8 v31; 
  __int64 v32; 
  unsigned __int8 v33; 
  int v34; 
  int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned __int8 v38; 
  __int64 v39; 
  int v40; 
  int v41; 
  int v42; 
  unsigned int v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  unsigned int v47; 
  unsigned __int8 v49[15]; 
  unsigned __int8 v50; 

  if ( *inlen >= 2 )
  {
    v6 = in[1];
    if ( v6 < 0x20u && (unsigned int)v6 + 2 <= *inlen )
    {
      v7 = 0;
      v8 = 0;
      if ( v6 )
      {
        v9 = 0x800000007FEDi64;
        while ( 1 )
        {
          v10 = j_der_ia5_value_decode(in[v8 + 2]);
          v11 = (unsigned int)(v10 - 43);
          if ( (unsigned int)v11 > 0x2F || !_bittest64(&v9, v11) )
            break;
          v12 = v8++;
          v49[v12] = v10;
          if ( v8 >= in[1] )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        *inlen = v8 + 2;
        if ( v8 >= 0xF )
        {
          char_to_int_0(v49[0]);
          char_to_int_0(v49[1]);
          char_to_int_0(v49[2]);
          v13 = char_to_int_0(v49[3]);
          v15 = v13 + 2 * v14;
          out->YYYY = v15;
          if ( v15 < 0x2710 )
          {
            char_to_int_0(v49[4]);
            v16 = char_to_int_0(v49[5]);
            v18 = v16 + 2 * v17;
            out->MM = v18;
            if ( v18 < 0xD )
            {
              char_to_int_0(v49[6]);
              v19 = char_to_int_0(v49[7]);
              v21 = v19 + 2 * v20;
              out->DD = v21;
              if ( v21 < 0x20 )
              {
                char_to_int_0(v49[8]);
                v22 = char_to_int_0(v49[9]);
                v24 = v22 + 2 * v23;
                out->hh = v24;
                if ( v24 < 0x18 )
                {
                  char_to_int_0(v49[10]);
                  v25 = char_to_int_0(v49[11]);
                  v27 = v25 + 2 * v26;
                  out->mm = v27;
                  if ( v27 < 0x3C )
                  {
                    char_to_int_0(v49[12]);
                    v28 = char_to_int_0(v49[13]);
                    v30 = v28 + 2 * v29;
                    out->ss = v30;
                    if ( v30 < 0x3C )
                    {
                      v31 = v49[14];
                      LODWORD(v32) = 14;
                      out->fs = 0;
                      if ( v31 == 90 )
                        return 0i64;
                      if ( v31 == 46 )
                      {
                        v33 = v50;
                        LODWORD(v32) = 15;
                        if ( v50 >= 0x30u )
                        {
                          while ( v33 <= 0x39u )
                          {
                            if ( (unsigned int)v32 >= 0x20 )
                              return 7i64;
                            v34 = char_to_int_0(v33);
                            v37 = v34 + 10 * v36;
                            out->fs = v37;
                            if ( v36 > v37 )
                              return 19i64;
                            v32 = (unsigned int)(v35 + 1);
                            v33 = v49[v32];
                            if ( v33 < 0x30u )
                              break;
                          }
                        }
                      }
                      v38 = v49[(unsigned int)v32];
                      if ( v38 == 90 )
                        return 0i64;
                      if ( ((v38 - 43) & 0xFD) == 0 )
                      {
                        LOBYTE(v7) = v38 != 43;
                        out->off_dir = v7;
                        char_to_int_0(v49[(unsigned int)(v32 + 2)]);
                        v40 = char_to_int_0(v49[v39]);
                        v43 = v42 + 10 * v40;
                        out->off_hh = v43;
                        if ( v43 < 0x18 )
                        {
                          char_to_int_0(v49[v41 + 3]);
                          v45 = char_to_int_0(v49[v44]);
                          v47 = v46 + 10 * v45;
                          out->off_mm = v47;
                          if ( v47 < 0x3C )
                            return 0i64;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 7i64;
}

