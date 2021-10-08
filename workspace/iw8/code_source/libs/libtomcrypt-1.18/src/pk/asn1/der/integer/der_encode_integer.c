/*
==============
der_encode_integer
==============
*/
int der_encode_integer(void *num, unsigned __int8 *out, unsigned int *outlen)
{
  int result; 
  int v7; 
  unsigned int v8; 
  int v9; 
  int v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  void *v18; 
  unsigned int outlena; 

  result = j_der_length_integer(num, &outlena);
  if ( !result )
  {
    if ( *outlen < outlena )
    {
      *outlen = outlena;
      return 6;
    }
    if ( ltc_mp.compare_d(num, 0) == -1 )
    {
      v7 = 0;
      v9 = ltc_mp.count_bits(num);
      v8 = (v9 - (v9 & 7u) + 8) >> 3;
      v10 = ltc_mp.count_lsb_bits(num) + 1;
      if ( v10 == ltc_mp.count_bits(num) && (ltc_mp.count_bits(num) & 7) == 0 )
        --v8;
    }
    else if ( (ltc_mp.count_bits(num) & 7) != 0 && ltc_mp.compare_d(num, 0) )
    {
      v7 = 0;
      v8 = ltc_mp.unsigned_size(num);
    }
    else
    {
      v7 = 1;
      v8 = ltc_mp.unsigned_size(num) + 1;
    }
    *out = 2;
    v11 = out + 1;
    if ( v8 >= 0x80 )
    {
      if ( v8 >= 0x100 )
      {
        if ( v8 >= 0x10000 )
        {
          if ( v8 >= 0x1000000 )
            return 16;
          *v11 = -125;
          v11[1] = BYTE2(v8);
          v11[2] = BYTE1(v8);
          v11 += 3;
        }
        else
        {
          *v11 = -126;
          v11[1] = BYTE1(v8);
          v11 += 2;
        }
      }
      else
      {
        *v11++ = -127;
      }
    }
    *v11 = v8;
    v12 = v11 + 1;
    if ( v7 )
      *v12++ = 0;
    if ( ltc_mp.compare_d(num, 0) == 1 )
    {
      result = ltc_mp.unsigned_write(num, v12);
      if ( result )
        return result;
      goto LABEL_23;
    }
    if ( !ltc_mp.compare_d(num, 0) )
    {
LABEL_23:
      *outlen = outlena;
      return 0;
    }
    if ( !ltc_mp.init(&v18) )
    {
      v13 = ltc_mp.count_bits(num);
      v14 = v13 - (v13 & 7);
      v15 = v14 + 8;
      v16 = ltc_mp.count_lsb_bits(num) + 1;
      if ( v16 == ltc_mp.count_bits(num) && (ltc_mp.count_bits(num) & 7) == 0 )
        v15 = v14;
      if ( !ltc_mp.twoexpt(v18, v15) && !ltc_mp.add(v18, num, v18) )
      {
        v17 = ltc_mp.unsigned_write(v18, v12);
        ltc_mp.deinit(v18);
        if ( v17 )
          return v17;
        *outlen = outlena;
        return 0;
      }
      ltc_mp.deinit(v18);
    }
    return 13;
  }
  return result;
}

