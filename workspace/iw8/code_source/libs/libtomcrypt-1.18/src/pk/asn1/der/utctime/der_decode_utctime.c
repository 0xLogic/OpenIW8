/*
==============
der_decode_utctime
==============
*/
__int64 der_decode_utctime(const unsigned __int8 *in, unsigned int *inlen, ltc_utctime *out)
{
  unsigned int v5; 
  unsigned __int8 v6; 
  unsigned __int8 v8; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
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
  unsigned __int8 v23; 
  int v24; 
  unsigned int v25; 
  int v26; 
  int v27; 
  unsigned int v28; 
  unsigned __int8 v29; 
  int v30; 
  int v31; 
  unsigned int v32; 
  unsigned __int8 v33; 
  int v34; 
  int v35; 
  unsigned int v36; 
  unsigned __int8 v37; 
  int v38; 
  int v39; 
  unsigned int v40; 
  bool v42; 
  unsigned __int8 v43; 
  int v44; 
  int v45; 
  unsigned int v46; 
  int v47; 
  int v48; 
  unsigned int v49; 
  unsigned __int8 x[8]; 
  unsigned __int8 v51[8]; 
  __int64 v52; 

  v5 = *inlen;
  v6 = 0;
  *(_QWORD *)x = 0i64;
  *(_QWORD *)v51 = 0i64;
  v52 = 0i64;
  if ( v5 < 2 )
    return 7i64;
  v8 = in[1];
  if ( v8 >= 0x20u || (unsigned int)v8 + 2 > v5 )
    return 7i64;
  v9 = 0;
  v10 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v11 = j_der_ia5_value_decode(in[v10 + 2]);
      if ( v11 == -1 )
        return 7i64;
      v12 = v10++;
      x[v12] = v11;
      if ( v10 >= in[1] )
      {
        v6 = x[0];
        break;
      }
    }
  }
  *inlen = v10 + 2;
  char_to_int(v6);
  v13 = char_to_int(x[1]);
  v15 = v13 + 2 * v14;
  out->YY = v15;
  if ( v15 >= 0x64 )
    return 7i64;
  char_to_int(x[2]);
  v16 = char_to_int(x[3]);
  v18 = v16 + 2 * v17;
  out->MM = v18;
  if ( v18 >= 0xD )
    return 7i64;
  char_to_int(x[4]);
  v19 = char_to_int(x[5]);
  v21 = v19 + 2 * v20;
  out->DD = v21;
  if ( v21 >= 0x20 )
    return 7i64;
  char_to_int(x[6]);
  v22 = char_to_int(x[7]);
  v25 = v22 + 2 * v24;
  out->hh = v25;
  if ( v25 >= 0x18 )
    return 7i64;
  char_to_int(v23);
  v26 = char_to_int(v51[1]);
  v28 = v26 + 2 * v27;
  out->mm = v28;
  if ( v28 >= 0x3C )
    return 7i64;
  v29 = v51[2];
  *(_QWORD *)&out->ss = 0i64;
  *(_QWORD *)&out->off_hh = 0i64;
  if ( v29 != 90 )
  {
    if ( ((v29 - 43) & 0xFD) != 0 )
    {
      char_to_int(v29);
      v30 = char_to_int(v51[3]);
      v32 = v30 + 2 * v31;
      out->ss = v32;
      if ( v32 >= 0x3C )
        return 7i64;
      if ( v51[4] != 90 )
      {
        if ( ((v51[4] - 43) & 0xFD) != 0 )
          return 7i64;
        v33 = v51[5];
        LOBYTE(v9) = v51[4] != 43;
        out->off_dir = v9;
        char_to_int(v33);
        v34 = char_to_int(v51[6]);
        v36 = v34 + 2 * v35;
        out->off_hh = v36;
        if ( v36 >= 0x18 )
          return 7i64;
        char_to_int(v51[7]);
        v38 = char_to_int(v37);
        v40 = v38 + 2 * v39;
        out->off_mm = v40;
        if ( v40 >= 0x3C )
          return 7i64;
      }
    }
    else
    {
      v42 = v29 == 43;
      v43 = v51[3];
      LOBYTE(v9) = !v42;
      out->off_dir = v9;
      char_to_int(v43);
      v44 = char_to_int(v51[4]);
      v46 = v44 + 2 * v45;
      out->off_hh = v46;
      if ( v46 >= 0x18 )
        return 7i64;
      char_to_int(v51[5]);
      v47 = char_to_int(v51[6]);
      v49 = v47 + 2 * v48;
      out->off_mm = v49;
      if ( v49 >= 0x3C )
        return 7i64;
    }
  }
  return 0i64;
}

