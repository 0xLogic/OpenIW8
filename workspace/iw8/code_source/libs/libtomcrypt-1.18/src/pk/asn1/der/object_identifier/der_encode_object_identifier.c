/*
==============
der_encode_object_identifier
==============
*/
int der_encode_object_identifier(unsigned int *words, unsigned int nwords, unsigned __int8 *out, unsigned int *outlen)
{
  unsigned int *v5; 
  int result; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  unsigned __int8 v21; 
  __int64 i; 
  __int64 v23; 
  unsigned __int8 v24; 
  unsigned int outlena[4]; 

  v5 = outlen;
  result = j_der_length_object_identifier(words, nwords, outlena);
  if ( !result )
  {
    if ( outlena[0] > *v5 )
    {
      *v5 = outlena[0];
      return 6;
    }
    v9 = 0;
    v10 = 1;
    v11 = 1;
    v12 = words[1] + 40 * *words;
    if ( nwords > 1 )
    {
      do
      {
        v13 = j_der_object_identifier_bits(v12);
        v9 += v13 / 7 + (v13 != 7 * (v13 / 7)) + (v12 == 0);
        if ( v11 < nwords - 1 )
          v12 = words[v11 + 1];
        ++v11;
      }
      while ( v11 < nwords );
      v5 = outlen;
    }
    outlena[0] = 0;
    *out = 6;
    v14 = ++outlena[0];
    if ( v9 >= 0x80 )
    {
      if ( v9 >= 0x100 )
      {
        if ( v9 >= 0x10000 )
          return 16;
        out[v14] = -126;
        out[++outlena[0]] = BYTE1(v9);
      }
      else
      {
        out[v14] = -127;
      }
      out[++outlena[0]] = v9;
    }
    else
    {
      out[v14] = v9;
    }
    v15 = *words;
    v16 = ++outlena[0];
    v17 = words[1] + 40 * v15;
    if ( nwords > 1 )
    {
      do
      {
        v18 = v17;
        if ( v17 )
        {
          v19 = v16;
          v20 = 0;
          do
          {
            v21 = v20 | v18 & 0x7F;
            v20 |= 0x80u;
            out[v16] = v21;
            v16 = outlena[0] + 1;
            v18 >>= 7;
            ++outlena[0];
          }
          while ( v18 );
          for ( i = (unsigned int)(v16 - 1); v19 < (unsigned int)i; i = (unsigned int)(i - 1) )
          {
            v23 = v19++;
            v24 = out[v23];
            out[v23] = out[i];
            out[i] = v24;
          }
        }
        else
        {
          out[v16] = 0;
          v16 = ++outlena[0];
        }
        if ( v10 < nwords - 1 )
          v17 = words[v10 + 1];
        ++v10;
      }
      while ( v10 < nwords );
    }
    *v5 = v16;
    return 0;
  }
  return result;
}

