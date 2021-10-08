/*
==============
pkcs_1_v1_5_encode
==============
*/
int pkcs_1_v1_5_encode(const unsigned __int8 *msg, unsigned int msglen, int block_type, unsigned int modulus_bitlen, prng_state *prng, int prng_idx, unsigned __int8 *out, unsigned int *outlen)
{
  int result; 
  int v11; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  unsigned int v15; 
  unsigned int (__fastcall **p_read)(unsigned __int8 *, unsigned int, prng_state *); 
  unsigned int v17; 
  unsigned __int8 *v18; 
  unsigned __int8 *v19; 
  unsigned int v20; 
  int v23; 

  v23 = block_type;
  if ( block_type == 1 )
  {
LABEL_7:
    v11 = 0;
    v12 = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
    if ( msglen + 11 > v12 )
      return 22;
    if ( *outlen < v12 )
    {
      *outlen = v12;
      return 6;
    }
    v13 = out + 2;
    v14 = out + 2;
    v20 = v12 - msglen;
    v15 = v12 - msglen - 3;
    if ( block_type == 2 )
    {
      p_read = &prng_descriptor[prng_idx].read;
      if ( (*p_read)(v14, v15, prng) != v15 )
        return 9;
      v17 = 0;
      if ( v15 )
      {
        v18 = out + 2;
        while ( *v18 )
        {
LABEL_20:
          ++v17;
          ++v18;
          if ( v17 >= v15 )
            goto LABEL_24;
        }
        v19 = &v13[v17];
        while ( (*p_read)(v19, 1u, prng) == 1 )
        {
          if ( *v18 )
          {
            v13 = out + 2;
            goto LABEL_20;
          }
        }
        return 9;
      }
    }
    else
    {
      memset_0(v14, 255, v15);
    }
LABEL_24:
    *out = 0;
    out[1] = v23;
    out[v15 + 2] = 0;
    memcpy_0(&out[v20], msg, msglen);
    *outlen = v12;
    return v11;
  }
  if ( block_type != 2 )
    return 24;
  result = j_prng_is_valid(prng_idx);
  if ( !result )
  {
    block_type = v23;
    goto LABEL_7;
  }
  return result;
}

