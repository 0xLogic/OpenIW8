/*
==============
der_decode_integer
==============
*/
int der_decode_integer(const unsigned __int8 *in, unsigned int inlen, void *num)
{
  unsigned int v5; 
  unsigned int v6; 
  int result; 
  int v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  void *v13; 

  if ( inlen < 3 || (*in & 0x1F) != 2 )
    return 7;
  v5 = in[1];
  v6 = 2;
  if ( (v5 & 0x80u) != 0 )
  {
    v8 = v5 & 0x7F;
    if ( v8 + 2 <= inlen && (unsigned int)(v8 - 1) <= 3 )
    {
      v9 = 0;
      do
      {
        v10 = v6++;
        v11 = (v9 << 8) | in[v10];
        v9 = v11;
        --v8;
      }
      while ( v8 );
      if ( v11 + v6 <= inlen )
      {
        result = ltc_mp.unsigned_read(num, (unsigned __int8 *)&in[v6], v11);
        if ( result )
          return result;
LABEL_13:
        if ( (in[v6] & 0x80u) != 0 )
        {
          if ( !ltc_mp.init(&v13) )
          {
            v12 = ltc_mp.count_bits(num);
            if ( !ltc_mp.twoexpt(v13, v12) && !ltc_mp.sub(num, v13, num) )
            {
              ltc_mp.deinit(v13);
              return 0;
            }
            ltc_mp.deinit(v13);
          }
          return 13;
        }
        return 0;
      }
    }
    return 7;
  }
  if ( v5 + 2 > inlen )
    return 7;
  result = ltc_mp.unsigned_read(num, (unsigned __int8 *)in + 2, v5);
  if ( !result )
    goto LABEL_13;
  return result;
}

