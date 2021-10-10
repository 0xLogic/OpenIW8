/*
==============
pkcs_1_pss_encode
==============
*/
int pkcs_1_pss_encode(const unsigned __int8 *msghash, unsigned int msghashlen, unsigned int saltlen, prng_state *prng, int prng_idx, int hash_idx, unsigned int modulus_bitlen, unsigned __int8 *out, unsigned int *outlen)
{
  size_t v9; 
  int result; 
  bool v11; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  int v18; 
  __int64 v19; 
  unsigned int masklen; 
  __int64 v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v26; 
  __int64 v31; 
  unsigned __int8 *v34; 
  __int64 v35; 
  unsigned int *v36; 
  unsigned int seedlen; 
  char v41[400]; 
  unsigned int modulus_bitlena; 

  v9 = saltlen;
  result = j_hash_is_valid(hash_idx);
  if ( result )
    return result;
  result = j_prng_is_valid(prng_idx);
  if ( result )
    return result;
  seedlen = hash_descriptor[(__int64)hash_idx].hashsize;
  v11 = (((_BYTE)modulus_bitlen - 1) & 7) == 0;
  modulus_bitlena = modulus_bitlen - 1;
  v12 = !v11 + (modulus_bitlena >> 3);
  if ( (unsigned int)v9 > v12 || v12 < (int)v9 + hash_descriptor[(__int64)hash_idx].hashsize + 2 )
    return 22;
  v13 = (unsigned __int8 *)ltc_malloc(v12);
  v14 = (unsigned __int8 *)ltc_malloc(v12);
  v15 = (unsigned __int8 *)ltc_malloc(v12);
  v16 = (unsigned __int8 *)ltc_malloc(v12);
  v17 = v16;
  if ( v13 )
  {
    if ( v14 && v15 && v16 )
    {
      if ( !(_DWORD)v9 || prng_descriptor[prng_idx].read(v15, v9, prng) == (_DWORD)v9 )
      {
        v18 = hash_descriptor[(__int64)hash_idx].init((Hash_state *)v41);
        if ( !v18 )
        {
          j_zeromem(v13, 8ui64);
          v18 = hash_descriptor[(__int64)hash_idx].process((Hash_state *)v41, v13, 8u);
          if ( !v18 )
          {
            v18 = hash_descriptor[(__int64)hash_idx].process((Hash_state *)v41, msghash, msghashlen);
            if ( !v18 )
            {
              v18 = hash_descriptor[(__int64)hash_idx].process((Hash_state *)v41, v15, v9);
              if ( !v18 )
              {
                v18 = hash_descriptor[(__int64)hash_idx].done((Hash_state *)v41, v17);
                if ( !v18 )
                {
                  memset_0(v13, 0, v12 - (_DWORD)v9 - seedlen - 2);
                  v19 = v12 - (_DWORD)v9 - seedlen - 2;
                  v13[v19] = 1;
                  memcpy_0(&v13[(unsigned int)(v19 + 1)], v15, v9);
                  masklen = v12 - seedlen - 1;
                  v18 = j_pkcs_1_mgf1(hash_idx, v17, seedlen, v14, masklen);
                  if ( !v18 )
                  {
                    v21 = 0i64;
                    if ( v12 - seedlen != 1 )
                    {
                      if ( masklen >= 0x40 )
                      {
                        v22 = v12 - seedlen - 2;
                        if ( v13 > &v14[v22] || &v13[v22] < v14 )
                        {
                          v23 = 32;
                          do
                          {
                            _XMM1 = *(_OWORD *)&v14[v21];
                            __asm { vpxor   xmm1, xmm1, xmmword ptr [rdx+rdi] }
                            *(_OWORD *)&v13[v21] = _XMM1;
                            v26 = v23 - 16;
                            v21 = (unsigned int)(v21 + 64);
                            _XMM1 = *(_OWORD *)&v14[v26];
                            __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rdi] }
                            *(_OWORD *)&v13[v26] = _XMM1;
                            _XMM1 = *(_OWORD *)&v14[v23];
                            __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rdi] }
                            *(_OWORD *)&v13[v23] = _XMM1;
                            v31 = v23 + 16;
                            v23 += 64;
                            _XMM1 = *(_OWORD *)&v14[v31];
                            __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rdi] }
                            *(_OWORD *)&v13[v31] = _XMM1;
                          }
                          while ( (unsigned int)v21 < (masklen & 0xFFFFFFC0) );
                        }
                      }
                      if ( (unsigned int)v21 < masklen )
                      {
                        v34 = &v13[(unsigned int)v21];
                        v35 = masklen - (unsigned int)v21;
                        do
                        {
                          *v34 ^= v34[v14 - v13];
                          ++v34;
                          --v35;
                        }
                        while ( v35 );
                      }
                    }
                    v36 = outlen;
                    if ( *outlen >= v12 )
                    {
                      memcpy_0(out, v13, masklen);
                      memcpy_0(&out[v12 - seedlen - 1], v17, seedlen);
                      out[v12 - 1] = -68;
                      *out &= 255 >> (8 * v12 - modulus_bitlena);
                      v36 = outlen;
                      v18 = 0;
                    }
                    else
                    {
                      v18 = 6;
                    }
                    *v36 = v12;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v18 = 9;
      }
      ltc_free(v17);
      ltc_free(v15);
      ltc_free(v14);
      ltc_free(v13);
      return v18;
    }
    ltc_free(v13);
  }
  if ( v14 )
    ltc_free(v14);
  if ( v15 )
    ltc_free(v15);
  if ( v17 )
    ltc_free(v17);
  return 13;
}

