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
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  int v18; 
  __int64 v19; 
  unsigned int masklen; 
  __int64 v22; 
  unsigned int v23; 
  unsigned __int8 *v35; 
  __int64 v36; 
  unsigned int *v37; 
  unsigned int seedlen; 
  char v42[400]; 
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
  _RDI = (unsigned __int8 *)ltc_malloc(v12);
  _RSI = (unsigned __int8 *)ltc_malloc(v12);
  v15 = (unsigned __int8 *)ltc_malloc(v12);
  v16 = (unsigned __int8 *)ltc_malloc(v12);
  v17 = v16;
  if ( _RDI )
  {
    if ( _RSI && v15 && v16 )
    {
      if ( !(_DWORD)v9 || prng_descriptor[prng_idx].read(v15, v9, prng) == (_DWORD)v9 )
      {
        v18 = hash_descriptor[(__int64)hash_idx].init((Hash_state *)v42);
        if ( !v18 )
        {
          j_zeromem(_RDI, 8ui64);
          v18 = hash_descriptor[(__int64)hash_idx].process((Hash_state *)v42, _RDI, 8u);
          if ( !v18 )
          {
            v18 = hash_descriptor[(__int64)hash_idx].process((Hash_state *)v42, msghash, msghashlen);
            if ( !v18 )
            {
              v18 = hash_descriptor[(__int64)hash_idx].process((Hash_state *)v42, v15, v9);
              if ( !v18 )
              {
                v18 = hash_descriptor[(__int64)hash_idx].done((Hash_state *)v42, v17);
                if ( !v18 )
                {
                  memset_0(_RDI, 0, v12 - (_DWORD)v9 - seedlen - 2);
                  v19 = v12 - (_DWORD)v9 - seedlen - 2;
                  _RDI[v19] = 1;
                  memcpy_0(&_RDI[(unsigned int)(v19 + 1)], v15, v9);
                  masklen = v12 - seedlen - 1;
                  v18 = j_pkcs_1_mgf1(hash_idx, v17, seedlen, _RSI, masklen);
                  if ( !v18 )
                  {
                    _RDX = 0i64;
                    if ( v12 - seedlen != 1 )
                    {
                      if ( masklen >= 0x40 )
                      {
                        v22 = v12 - seedlen - 2;
                        if ( _RDI > &_RSI[v22] || &_RDI[v22] < _RSI )
                        {
                          v23 = 32;
                          do
                          {
                            __asm
                            {
                              vmovdqu xmm1, xmmword ptr [rdx+rsi]
                              vpxor   xmm1, xmm1, xmmword ptr [rdx+rdi]
                              vmovdqu xmmword ptr [rdx+rdi], xmm1
                            }
                            _RAX = v23 - 16;
                            _RDX = (unsigned int)(_RDX + 64);
                            __asm
                            {
                              vmovdqu xmm1, xmmword ptr [rax+rsi]
                              vpxor   xmm1, xmm1, xmmword ptr [rax+rdi]
                              vmovdqu xmmword ptr [rax+rdi], xmm1
                            }
                            _RAX = v23;
                            __asm
                            {
                              vmovdqu xmm1, xmmword ptr [rax+rsi]
                              vpxor   xmm1, xmm1, xmmword ptr [rax+rdi]
                              vmovdqu xmmword ptr [rax+rdi], xmm1
                            }
                            _RAX = v23 + 16;
                            v23 += 64;
                            __asm
                            {
                              vmovdqu xmm1, xmmword ptr [rax+rsi]
                              vpxor   xmm1, xmm1, xmmword ptr [rax+rdi]
                              vmovdqu xmmword ptr [rax+rdi], xmm1
                            }
                          }
                          while ( (unsigned int)_RDX < (masklen & 0xFFFFFFC0) );
                        }
                      }
                      if ( (unsigned int)_RDX < masklen )
                      {
                        v35 = &_RDI[(unsigned int)_RDX];
                        v36 = masklen - (unsigned int)_RDX;
                        do
                        {
                          *v35 ^= v35[_RSI - _RDI];
                          ++v35;
                          --v36;
                        }
                        while ( v36 );
                      }
                    }
                    v37 = outlen;
                    if ( *outlen >= v12 )
                    {
                      memcpy_0(out, _RDI, masklen);
                      memcpy_0(&out[v12 - seedlen - 1], v17, seedlen);
                      out[v12 - 1] = -68;
                      *out &= 255 >> (8 * v12 - modulus_bitlena);
                      v37 = outlen;
                      v18 = 0;
                    }
                    else
                    {
                      v18 = 6;
                    }
                    *v37 = v12;
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
      ltc_free(_RSI);
      ltc_free(_RDI);
      return v18;
    }
    ltc_free(_RDI);
  }
  if ( _RSI )
    ltc_free(_RSI);
  if ( v15 )
    ltc_free(v15);
  if ( v17 )
    ltc_free(v17);
  return 13;
}

