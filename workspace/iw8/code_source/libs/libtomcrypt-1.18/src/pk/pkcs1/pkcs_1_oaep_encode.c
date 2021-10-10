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
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  unsigned __int8 *v18; 
  unsigned __int8 *v19; 
  int v20; 
  int v21; 
  unsigned int v22; 
  unsigned __int8 *v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v31; 
  __int64 v36; 
  unsigned __int8 *v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v45; 
  __int64 v50; 
  unsigned __int8 *v53; 
  __int64 v54; 
  unsigned __int8 *v55; 
  unsigned __int8 *v56; 
  unsigned int v57[6]; 

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
  v16 = (unsigned __int8 *)ltc_malloc(v13);
  v17 = (unsigned __int8 *)ltc_malloc(v13);
  v18 = (unsigned __int8 *)ltc_malloc((unsigned int)hashsize);
  v19 = v18;
  if ( v16 )
  {
    if ( v17 && v18 )
    {
      v57[0] = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
      if ( lparam )
        v20 = j_hash_memory(hash_idx, lparam, lparamlen, v16, v57);
      else
        v20 = j_hash_memory(hash_idx, v16, 0, v16, v57);
      v21 = v20;
      if ( !v20 )
      {
        v57[0] = hashsize;
        v22 = v15 - msglen - 2;
        memset_0(&v16[hashsize], 0, v22);
        v57[0] += v22;
        v16[v57[0]] = 1;
        v23 = &v16[++v57[0]];
        memcpy_0(v23, msg, msglen);
        v57[0] += msglen;
        if ( prng_descriptor[prng_idx].read(v19, hashsize, prng) == (_DWORD)hashsize )
        {
          v24 = v13 - hashsize - 1;
          v21 = j_pkcs_1_mgf1(hash_idx, v19, hashsize, v17, v24);
          if ( !v21 )
          {
            v25 = 0i64;
            v26 = 32;
            if ( v13 - (_DWORD)hashsize != 1 )
            {
              if ( v24 >= 0x40 )
              {
                v27 = v13 - (unsigned int)hashsize - 2;
                if ( v16 > &v17[v27] || &v16[v27] < v17 )
                {
                  v28 = 32;
                  do
                  {
                    _XMM1 = *(_OWORD *)&v17[v25];
                    __asm { vpxor   xmm1, xmm1, xmmword ptr [r8+rbp] }
                    *(_OWORD *)&v16[v25] = _XMM1;
                    v31 = v28 - 16;
                    v25 = (unsigned int)(v25 + 64);
                    _XMM1 = *(_OWORD *)&v17[v31];
                    __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rbp] }
                    *(_OWORD *)&v16[v31] = _XMM1;
                    _XMM1 = *(_OWORD *)&v17[v28];
                    __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rbp] }
                    *(_OWORD *)&v16[v28] = _XMM1;
                    v36 = v28 + 16;
                    v28 += 64;
                    _XMM1 = *(_OWORD *)&v17[v36];
                    __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rbp] }
                    *(_OWORD *)&v16[v36] = _XMM1;
                  }
                  while ( (unsigned int)v25 < (v24 & 0xFFFFFFC0) );
                }
              }
              if ( (unsigned int)v25 < v24 )
              {
                v39 = &v16[(unsigned int)v25];
                v40 = v24 - (unsigned int)v25;
                do
                {
                  *v39 ^= v39[v17 - v16];
                  ++v39;
                  --v40;
                }
                while ( v40 );
              }
            }
            v21 = j_pkcs_1_mgf1(hash_idx, v16, v24, v17, hashsize);
            if ( !v21 )
            {
              v41 = 0i64;
              if ( (_DWORD)hashsize )
              {
                if ( (unsigned int)hashsize >= 0x40 )
                {
                  v42 = (unsigned int)(hashsize - 1);
                  if ( v19 > &v17[v42] || &v19[v42] < v17 )
                  {
                    do
                    {
                      _XMM1 = *(_OWORD *)&v17[v41];
                      __asm { vpxor   xmm1, xmm1, xmmword ptr [rdx+rsi] }
                      *(_OWORD *)&v19[v41] = _XMM1;
                      v45 = v26 - 16;
                      v41 = (unsigned int)(v41 + 64);
                      _XMM1 = *(_OWORD *)&v17[v45];
                      __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rsi] }
                      *(_OWORD *)&v19[v45] = _XMM1;
                      _XMM1 = *(_OWORD *)&v17[v26];
                      __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rsi] }
                      *(_OWORD *)&v19[v26] = _XMM1;
                      v50 = v26 + 16;
                      v26 += 64;
                      _XMM1 = *(_OWORD *)&v17[v50];
                      __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rsi] }
                      *(_OWORD *)&v19[v50] = _XMM1;
                    }
                    while ( (unsigned int)v41 < (hashsize & 0xFFFFFFC0) );
                  }
                }
                if ( (unsigned int)v41 < (unsigned int)hashsize )
                {
                  v53 = &v19[(unsigned int)v41];
                  v54 = (unsigned int)(hashsize - v41);
                  do
                  {
                    *v53 ^= v53[v17 - v19];
                    ++v53;
                    --v54;
                  }
                  while ( v54 );
                }
              }
              if ( *outlen >= v13 )
              {
                v57[0] = 0;
                *out = 0;
                v55 = &out[++v57[0]];
                memcpy_0(v55, v19, hashsize);
                v56 = &out[(unsigned int)(hashsize + v57[0])];
                v57[0] += hashsize;
                memcpy_0(v56, v16, v24);
                v21 = 0;
                v57[0] = v57[0] + v13 - hashsize - 1;
                *outlen = v57[0];
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
      ltc_free(v19);
      ltc_free(v17);
      ltc_free(v16);
      return v21;
    }
    ltc_free(v16);
  }
  if ( v17 )
    ltc_free(v17);
  if ( v19 )
    ltc_free(v19);
  return 13;
}

