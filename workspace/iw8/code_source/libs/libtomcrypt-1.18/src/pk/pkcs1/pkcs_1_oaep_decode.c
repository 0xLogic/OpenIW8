/*
==============
pkcs_1_oaep_decode
==============
*/
int pkcs_1_oaep_decode(const unsigned __int8 *msg, unsigned int msglen, const unsigned __int8 *lparam, unsigned int lparamlen, unsigned int modulus_bitlen, int hash_idx, unsigned __int8 *out, unsigned int *outlen, int *res)
{
  int result; 
  unsigned __int64 masklen; 
  unsigned int v14; 
  unsigned __int8 *v17; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  unsigned int v23; 
  unsigned __int8 *v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned int v39; 
  unsigned __int8 *v51; 
  __int64 v52; 
  int v53; 
  int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  int v60; 

  _R12 = 0i64;
  *res = 0;
  result = j_hash_is_valid(hash_idx);
  if ( result )
    return result;
  masklen = hash_descriptor[(__int64)hash_idx].hashsize;
  v14 = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
  if ( 2 * (int)masklen >= v14 - 2 || msglen != v14 )
    return 22;
  _RDI = (unsigned __int8 *)ltc_malloc(v14);
  _RBX = (unsigned __int8 *)ltc_malloc(v14);
  v17 = (unsigned __int8 *)ltc_malloc((unsigned int)masklen);
  _RBP = v17;
  if ( _RDI )
  {
    if ( _RBX && v17 )
    {
      v60 = *msg != 0 ? 7 : 0;
      memcpy_0(v17, msg + 1, (unsigned int)masklen);
      v19 = v14 - masklen - 1;
      memcpy_0(_RDI, &msg[(unsigned int)(masklen + 1)], v19);
      v59 = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
      v20 = j_pkcs_1_mgf1(hash_idx, _RDI, v19, _RBX, masklen);
      if ( !v20 )
      {
        v21 = 0;
        if ( (_DWORD)masklen )
        {
          if ( (unsigned int)masklen >= 0x40 )
          {
            v22 = (unsigned int)(masklen - 1);
            if ( _RBP > &_RBX[v22] || &_RBP[v22] < _RBX )
            {
              v23 = 32;
              do
              {
                _RAX = v21;
                v21 += 64;
                __asm
                {
                  vmovdqu xmm1, xmmword ptr [rax+rbx]
                  vpxor   xmm1, xmm1, xmmword ptr [rax+rbp]
                  vmovdqu xmmword ptr [rax+rbp], xmm1
                }
                _RAX = v23 - 16;
                __asm
                {
                  vmovdqu xmm1, xmmword ptr [rax+rbx]
                  vpxor   xmm1, xmm1, xmmword ptr [rax+rbp]
                  vmovdqu xmmword ptr [rax+rbp], xmm1
                }
                _RAX = v23;
                __asm
                {
                  vmovdqu xmm1, xmmword ptr [rax+rbx]
                  vpxor   xmm1, xmm1, xmmword ptr [rax+rbp]
                  vmovdqu xmmword ptr [rax+rbp], xmm1
                }
                _RAX = v23 + 16;
                v23 += 64;
                __asm
                {
                  vmovdqu xmm1, xmmword ptr [rax+rbx]
                  vpxor   xmm1, xmm1, xmmword ptr [rax+rbp]
                  vmovdqu xmmword ptr [rax+rbp], xmm1
                }
              }
              while ( v21 < (masklen & 0xFFFFFFC0) );
            }
          }
          if ( v21 < (unsigned int)masklen )
          {
            v36 = &_RBP[v21];
            v37 = (unsigned int)masklen - v21;
            do
            {
              *v36 ^= v36[_RBX - _RBP];
              ++v36;
              --v37;
            }
            while ( v37 );
          }
        }
        v20 = j_pkcs_1_mgf1(hash_idx, _RBP, masklen, _RBX, v14 - masklen - 1);
        if ( !v20 )
        {
          if ( v14 - (_DWORD)masklen != 1 )
          {
            if ( v19 >= 0x40 )
            {
              v38 = v14 - (unsigned int)masklen - 2;
              if ( _RDI > &_RBX[v38] || &_RDI[v38] < _RBX )
              {
                v39 = 32;
                do
                {
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [r12+rbx]
                    vpxor   xmm1, xmm1, xmmword ptr [r12+rdi]
                    vmovdqu xmmword ptr [r12+rdi], xmm1
                  }
                  _RAX = v39 - 16;
                  _R12 = (unsigned int)(_R12 + 64);
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [rax+rbx]
                    vpxor   xmm1, xmm1, xmmword ptr [rax+rdi]
                    vmovdqu xmmword ptr [rax+rdi], xmm1
                  }
                  _RAX = v39;
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [rax+rbx]
                    vpxor   xmm1, xmm1, xmmword ptr [rax+rdi]
                    vmovdqu xmmword ptr [rax+rdi], xmm1
                  }
                  _RAX = v39 + 16;
                  v39 += 64;
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [rax+rbx]
                    vpxor   xmm1, xmm1, xmmword ptr [rax+rdi]
                    vmovdqu xmmword ptr [rax+rdi], xmm1
                  }
                }
                while ( (unsigned int)_R12 < (v19 & 0xFFFFFFC0) );
              }
            }
            if ( (unsigned int)_R12 < v19 )
            {
              v51 = &_RDI[(unsigned int)_R12];
              v52 = v19 - (unsigned int)_R12;
              do
              {
                *v51 ^= v51[_RBX - _RDI];
                ++v51;
                --v52;
              }
              while ( v52 );
            }
          }
          v59 = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
          if ( lparam )
            v53 = j_hash_memory(hash_idx, lparam, lparamlen, _RBP, &v59);
          else
            v53 = j_hash_memory(hash_idx, _RDI, 0, _RBP, &v59);
          v20 = v53;
          if ( !v53 )
          {
            v20 = v60;
            v54 = j_mem_neq(_RBP, _RDI, masklen);
            v59 = masklen;
            v55 = masklen;
            if ( v54 )
              v20 = 7;
            if ( (unsigned int)masklen < v19 )
            {
              v56 = masklen;
              do
              {
                v55 = v56;
                if ( _RDI[v56] )
                  break;
                v55 = v56 + 1;
                v59 = v55;
                ++v56;
              }
              while ( v55 < v19 );
            }
            if ( v55 == v19 || _RDI[v55] != 1 )
              v20 = 7;
            v57 = v55 + 1;
            v59 = v57;
            v58 = v14 - v57 - masklen - 1;
            if ( v58 > *outlen )
              v20 = 7;
            if ( !v20 )
            {
              *outlen = v58;
              memcpy_0(out, &_RDI[v57], v58);
              *res = 1;
            }
          }
        }
      }
      ltc_free(_RBP);
      ltc_free(_RBX);
      ltc_free(_RDI);
      return v20;
    }
    ltc_free(_RDI);
  }
  if ( _RBX )
    ltc_free(_RBX);
  if ( _RBP )
    ltc_free(_RBP);
  return 13;
}

