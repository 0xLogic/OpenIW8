/*
==============
pkcs_1_oaep_encode
==============
*/
int pkcs_1_oaep_encode(const unsigned __int8 *msg, unsigned int msglen, const unsigned __int8 *lparam, unsigned int lparamlen, unsigned int modulus_bitlen, prng_state *prng, int prng_idx, int hash_idx, unsigned __int8 *out, unsigned int *outlen)
{
  int result; 
  size_t hashsize; 
  unsigned int v13; 
  int v14; 
  int v15; 
  unsigned __int8 *v18; 
  int v20; 
  int v21; 
  unsigned int v22; 
  unsigned __int8 *v23; 
  unsigned int v24; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned __int8 *v40; 
  __int64 v41; 
  __int64 v43; 
  unsigned __int8 *v55; 
  __int64 v56; 
  unsigned __int8 *v57; 
  unsigned __int8 *v58; 
  unsigned int v59[6]; 

  result = j_hash_is_valid(hash_idx);
  if ( result )
    return result;
  result = j_prng_is_valid(prng_idx);
  if ( result )
    return result;
  hashsize = hash_descriptor[(__int64)hash_idx].hashsize;
  v13 = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
  v14 = 2 * hashsize;
  if ( 2 * (int)hashsize >= v13 - 2 )
    return 22;
  v15 = v13 - v14;
  if ( msglen > v13 - v14 - 2 )
    return 22;
  _RBP = (unsigned __int8 *)ltc_malloc(v13);
  _RDI = (unsigned __int8 *)ltc_malloc(v13);
  v18 = (unsigned __int8 *)ltc_malloc((unsigned int)hashsize);
  _RSI = v18;
  if ( _RBP )
  {
    if ( _RDI && v18 )
    {
      v59[0] = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
      if ( lparam )
        v20 = j_hash_memory(hash_idx, lparam, lparamlen, _RBP, v59);
      else
        v20 = j_hash_memory(hash_idx, _RBP, 0, _RBP, v59);
      v21 = v20;
      if ( !v20 )
      {
        v59[0] = hashsize;
        v22 = v15 - msglen - 2;
        memset_0(&_RBP[hashsize], 0, v22);
        v59[0] += v22;
        _RBP[v59[0]] = 1;
        v23 = &_RBP[++v59[0]];
        memcpy_0(v23, msg, msglen);
        v59[0] += msglen;
        if ( prng_descriptor[prng_idx].read(_RSI, hashsize, prng) == (_DWORD)hashsize )
        {
          v24 = v13 - hashsize - 1;
          v21 = j_pkcs_1_mgf1(hash_idx, _RSI, hashsize, _RDI, v24);
          if ( !v21 )
          {
            _R8 = 0i64;
            v26 = 32;
            if ( v13 - (_DWORD)hashsize != 1 )
            {
              if ( v24 >= 0x40 )
              {
                v27 = v13 - (unsigned int)hashsize - 2;
                if ( _RBP > &_RDI[v27] || &_RBP[v27] < _RDI )
                {
                  v28 = 32;
                  do
                  {
                    __asm
                    {
                      vmovdqu xmm1, xmmword ptr [r8+rdi]
                      vpxor   xmm1, xmm1, xmmword ptr [r8+rbp]
                      vmovdqu xmmword ptr [r8+rbp], xmm1
                    }
                    _RAX = v28 - 16;
                    _R8 = (unsigned int)(_R8 + 64);
                    __asm
                    {
                      vmovdqu xmm1, xmmword ptr [rax+rdi]
                      vpxor   xmm1, xmm1, xmmword ptr [rax+rbp]
                      vmovdqu xmmword ptr [rax+rbp], xmm1
                    }
                    _RAX = v28;
                    __asm
                    {
                      vmovdqu xmm1, xmmword ptr [rax+rdi]
                      vpxor   xmm1, xmm1, xmmword ptr [rax+rbp]
                      vmovdqu xmmword ptr [rax+rbp], xmm1
                    }
                    _RAX = v28 + 16;
                    v28 += 64;
                    __asm
                    {
                      vmovdqu xmm1, xmmword ptr [rax+rdi]
                      vpxor   xmm1, xmm1, xmmword ptr [rax+rbp]
                      vmovdqu xmmword ptr [rax+rbp], xmm1
                    }
                  }
                  while ( (unsigned int)_R8 < (v24 & 0xFFFFFFC0) );
                }
              }
              if ( (unsigned int)_R8 < v24 )
              {
                v40 = &_RBP[(unsigned int)_R8];
                v41 = v24 - (unsigned int)_R8;
                do
                {
                  *v40 ^= v40[_RDI - _RBP];
                  ++v40;
                  --v41;
                }
                while ( v41 );
              }
            }
            v21 = j_pkcs_1_mgf1(hash_idx, _RBP, v24, _RDI, hashsize);
            if ( !v21 )
            {
              _RDX = 0i64;
              if ( (_DWORD)hashsize )
              {
                if ( (unsigned int)hashsize >= 0x40 )
                {
                  v43 = (unsigned int)(hashsize - 1);
                  if ( _RSI > &_RDI[v43] || &_RSI[v43] < _RDI )
                  {
                    do
                    {
                      __asm
                      {
                        vmovdqu xmm1, xmmword ptr [rdx+rdi]
                        vpxor   xmm1, xmm1, xmmword ptr [rdx+rsi]
                        vmovdqu xmmword ptr [rdx+rsi], xmm1
                      }
                      _RAX = v26 - 16;
                      _RDX = (unsigned int)(_RDX + 64);
                      __asm
                      {
                        vmovdqu xmm1, xmmword ptr [rax+rdi]
                        vpxor   xmm1, xmm1, xmmword ptr [rax+rsi]
                        vmovdqu xmmword ptr [rax+rsi], xmm1
                      }
                      _RAX = v26;
                      __asm
                      {
                        vmovdqu xmm1, xmmword ptr [rax+rdi]
                        vpxor   xmm1, xmm1, xmmword ptr [rax+rsi]
                        vmovdqu xmmword ptr [rax+rsi], xmm1
                      }
                      _RAX = v26 + 16;
                      v26 += 64;
                      __asm
                      {
                        vmovdqu xmm1, xmmword ptr [rax+rdi]
                        vpxor   xmm1, xmm1, xmmword ptr [rax+rsi]
                        vmovdqu xmmword ptr [rax+rsi], xmm1
                      }
                    }
                    while ( (unsigned int)_RDX < (hashsize & 0xFFFFFFC0) );
                  }
                }
                if ( (unsigned int)_RDX < (unsigned int)hashsize )
                {
                  v55 = &_RSI[(unsigned int)_RDX];
                  v56 = (unsigned int)(hashsize - _RDX);
                  do
                  {
                    *v55 ^= v55[_RDI - _RSI];
                    ++v55;
                    --v56;
                  }
                  while ( v56 );
                }
              }
              if ( *outlen >= v13 )
              {
                v59[0] = 0;
                *out = 0;
                v57 = &out[++v59[0]];
                memcpy_0(v57, _RSI, hashsize);
                v58 = &out[(unsigned int)(hashsize + v59[0])];
                v59[0] += hashsize;
                memcpy_0(v58, _RBP, v24);
                v21 = 0;
                v59[0] = v59[0] + v13 - hashsize - 1;
                *outlen = v59[0];
              }
              else
              {
                *outlen = v13;
                v21 = 6;
              }
            }
          }
        }
        else
        {
          v21 = 9;
        }
      }
      ltc_free(_RSI);
      ltc_free(_RDI);
      ltc_free(_RBP);
      return v21;
    }
    ltc_free(_RBP);
  }
  if ( _RDI )
    ltc_free(_RDI);
  if ( _RSI )
    ltc_free(_RSI);
  return 13;
}

