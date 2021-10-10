/*
==============
pkcs_1_oaep_decode
==============
*/
int pkcs_1_oaep_decode(const unsigned __int8 *msg, unsigned int msglen, const unsigned __int8 *lparam, unsigned int lparamlen, unsigned int modulus_bitlen, int hash_idx, unsigned __int8 *out, unsigned int *outlen, int *res)
{
  __int64 v10; 
  int result; 
  unsigned __int64 masklen; 
  unsigned int v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  unsigned __int8 *v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v27; 
  __int64 v32; 
  unsigned __int8 *v35; 
  __int64 v36; 
  __int64 v37; 
  unsigned int v38; 
  __int64 v41; 
  __int64 v46; 
  unsigned __int8 *v49; 
  __int64 v50; 
  int v51; 
  int v52; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  int v58; 

  v10 = 0i64;
  *res = 0;
  result = j_hash_is_valid(hash_idx);
  if ( result )
    return result;
  masklen = hash_descriptor[(__int64)hash_idx].hashsize;
  v14 = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
  if ( 2 * (int)masklen >= v14 - 2 || msglen != v14 )
    return 22;
  v15 = (unsigned __int8 *)ltc_malloc(v14);
  v16 = (unsigned __int8 *)ltc_malloc(v14);
  v17 = (unsigned __int8 *)ltc_malloc((unsigned int)masklen);
  v18 = v17;
  if ( v15 )
  {
    if ( v16 && v17 )
    {
      v58 = *msg != 0 ? 7 : 0;
      memcpy_0(v17, msg + 1, (unsigned int)masklen);
      v19 = v14 - masklen - 1;
      memcpy_0(v15, &msg[(unsigned int)(masklen + 1)], v19);
      v57 = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
      v20 = j_pkcs_1_mgf1(hash_idx, v15, v19, v16, masklen);
      if ( !v20 )
      {
        v21 = 0;
        if ( (_DWORD)masklen )
        {
          if ( (unsigned int)masklen >= 0x40 )
          {
            v22 = (unsigned int)(masklen - 1);
            if ( v18 > &v16[v22] || &v18[v22] < v16 )
            {
              v23 = 32;
              do
              {
                v24 = v21;
                v21 += 64;
                _XMM1 = *(_OWORD *)&v16[v24];
                __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rbp] }
                *(_OWORD *)&v18[v24] = _XMM1;
                v27 = v23 - 16;
                _XMM1 = *(_OWORD *)&v16[v27];
                __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rbp] }
                *(_OWORD *)&v18[v27] = _XMM1;
                _XMM1 = *(_OWORD *)&v16[v23];
                __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rbp] }
                *(_OWORD *)&v18[v23] = _XMM1;
                v32 = v23 + 16;
                v23 += 64;
                _XMM1 = *(_OWORD *)&v16[v32];
                __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rbp] }
                *(_OWORD *)&v18[v32] = _XMM1;
              }
              while ( v21 < (masklen & 0xFFFFFFC0) );
            }
          }
          if ( v21 < (unsigned int)masklen )
          {
            v35 = &v18[v21];
            v36 = (unsigned int)masklen - v21;
            do
            {
              *v35 ^= v35[v16 - v18];
              ++v35;
              --v36;
            }
            while ( v36 );
          }
        }
        v20 = j_pkcs_1_mgf1(hash_idx, v18, masklen, v16, v14 - masklen - 1);
        if ( !v20 )
        {
          if ( v14 - (_DWORD)masklen != 1 )
          {
            if ( v19 >= 0x40 )
            {
              v37 = v14 - (unsigned int)masklen - 2;
              if ( v15 > &v16[v37] || &v15[v37] < v16 )
              {
                v38 = 32;
                do
                {
                  _XMM1 = *(_OWORD *)&v16[v10];
                  __asm { vpxor   xmm1, xmm1, xmmword ptr [r12+rdi] }
                  *(_OWORD *)&v15[v10] = _XMM1;
                  v41 = v38 - 16;
                  v10 = (unsigned int)(v10 + 64);
                  _XMM1 = *(_OWORD *)&v16[v41];
                  __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rdi] }
                  *(_OWORD *)&v15[v41] = _XMM1;
                  _XMM1 = *(_OWORD *)&v16[v38];
                  __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rdi] }
                  *(_OWORD *)&v15[v38] = _XMM1;
                  v46 = v38 + 16;
                  v38 += 64;
                  _XMM1 = *(_OWORD *)&v16[v46];
                  __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rdi] }
                  *(_OWORD *)&v15[v46] = _XMM1;
                }
                while ( (unsigned int)v10 < (v19 & 0xFFFFFFC0) );
              }
            }
            if ( (unsigned int)v10 < v19 )
            {
              v49 = &v15[(unsigned int)v10];
              v50 = v19 - (unsigned int)v10;
              do
              {
                *v49 ^= v49[v16 - v15];
                ++v49;
                --v50;
              }
              while ( v50 );
            }
          }
          v57 = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
          if ( lparam )
            v51 = j_hash_memory(hash_idx, lparam, lparamlen, v18, &v57);
          else
            v51 = j_hash_memory(hash_idx, v15, 0, v18, &v57);
          v20 = v51;
          if ( !v51 )
          {
            v20 = v58;
            v52 = j_mem_neq(v18, v15, masklen);
            v57 = masklen;
            v53 = masklen;
            if ( v52 )
              v20 = 7;
            if ( (unsigned int)masklen < v19 )
            {
              v54 = masklen;
              do
              {
                v53 = v54;
                if ( v15[v54] )
                  break;
                v53 = v54 + 1;
                v57 = v53;
                ++v54;
              }
              while ( v53 < v19 );
            }
            if ( v53 == v19 || v15[v53] != 1 )
              v20 = 7;
            v55 = v53 + 1;
            v57 = v55;
            v56 = v14 - v55 - masklen - 1;
            if ( v56 > *outlen )
              v20 = 7;
            if ( !v20 )
            {
              *outlen = v56;
              memcpy_0(out, &v15[v55], v56);
              *res = 1;
            }
          }
        }
      }
      ltc_free(v18);
      ltc_free(v16);
      ltc_free(v15);
      return v20;
    }
    ltc_free(v15);
  }
  if ( v16 )
    ltc_free(v16);
  if ( v18 )
    ltc_free(v18);
  return 13;
}

