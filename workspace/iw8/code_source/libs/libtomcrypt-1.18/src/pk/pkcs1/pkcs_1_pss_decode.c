/*
==============
pkcs_1_pss_decode
==============
*/
int pkcs_1_pss_decode(const unsigned __int8 *msghash, unsigned int msghashlen, const unsigned __int8 *sig, unsigned int siglen, unsigned int saltlen, int hash_idx, unsigned int modulus_bitlen, int *res)
{
  int result; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  void *v14; 
  void *v15; 
  int v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 
  __int64 v21; 
  unsigned int v22; 
  unsigned __int8 *v34; 
  __int64 v35; 
  unsigned int v36; 
  unsigned __int8 *v37; 
  unsigned int Size; 
  void *Block; 
  char v44[400]; 

  *res = 0;
  result = j_hash_is_valid(hash_idx);
  if ( !result )
  {
    v9 = (__int64)hash_idx << 7;
    v10 = *(unsigned int *)((char *)&hash_descriptor[0].hashsize + v9);
    Size = v10;
    v11 = ((modulus_bitlen - 1) >> 3) + ((((_BYTE)modulus_bitlen - 1) & 7) != 0);
    if ( saltlen > v11 || v11 < v10 + saltlen + 2 )
      return 22;
    _RSI = (unsigned __int8 *)ltc_malloc(v11);
    _RBP = (unsigned __int8 *)ltc_malloc(v11);
    Block = ltc_malloc(v11);
    v14 = ltc_malloc(v11);
    v15 = v14;
    if ( _RSI )
    {
      if ( _RBP && Block && v14 )
      {
        if ( sig[siglen - 1] == 0xBC )
        {
          v17 = v11 - v10;
          v18 = v17 - 1;
          memcpy_0(_RSI, sig, v17 - 1);
          memcpy_0(v15, &sig[v17 - 1], Size);
          v19 = 255 >> (((modulus_bitlen - 1) & 0xF8) + ((((_BYTE)modulus_bitlen - 1) & 7) != 0 ? 8 : 0) - (modulus_bitlen - 1));
          if ( ((unsigned __int8)~(_BYTE)v19 & *sig) == 0 )
          {
            v16 = j_pkcs_1_mgf1(hash_idx, (const unsigned __int8 *)v15, Size, _RBP, v17 - 1);
            if ( v16 )
              goto $LBL_ERR_3;
            _RDX = 0i64;
            if ( v17 != 1 )
            {
              if ( v18 >= 0x40 )
              {
                v21 = v17 - 2;
                if ( _RSI > &_RBP[v21] || &_RSI[v21] < _RBP )
                {
                  v22 = 32;
                  do
                  {
                    __asm
                    {
                      vmovdqu xmm1, xmmword ptr [rdx+rbp]
                      vpxor   xmm1, xmm1, xmmword ptr [rdx+rsi]
                      vmovdqu xmmword ptr [rdx+rsi], xmm1
                    }
                    _RAX = v22 - 16;
                    _RDX = (unsigned int)(_RDX + 64);
                    __asm
                    {
                      vmovdqu xmm1, xmmword ptr [rax+rbp]
                      vpxor   xmm1, xmm1, xmmword ptr [rax+rsi]
                      vmovdqu xmmword ptr [rax+rsi], xmm1
                    }
                    _RAX = v22;
                    __asm
                    {
                      vmovdqu xmm1, xmmword ptr [rax+rbp]
                      vpxor   xmm1, xmm1, xmmword ptr [rsi+rax]
                      vmovdqu xmmword ptr [rsi+rax], xmm1
                    }
                    _RAX = v22 + 16;
                    v22 += 64;
                    __asm
                    {
                      vmovdqu xmm1, xmmword ptr [rax+rbp]
                      vpxor   xmm1, xmm1, xmmword ptr [rax+rsi]
                      vmovdqu xmmword ptr [rax+rsi], xmm1
                    }
                  }
                  while ( (unsigned int)_RDX < (v18 & 0xFFFFFFC0) );
                }
              }
              if ( (unsigned int)_RDX < v18 )
              {
                v34 = &_RSI[(unsigned int)_RDX];
                _RDX = v18 - (unsigned int)_RDX;
                do
                {
                  *v34 ^= v34[_RBP - _RSI];
                  ++v34;
                  --_RDX;
                }
                while ( _RDX );
              }
            }
            *_RSI &= v19;
            v35 = 0i64;
            v36 = v17 - saltlen - 2;
            if ( v36 )
            {
              v37 = _RSI;
              while ( !*v37 )
              {
                v35 = (unsigned int)(v35 + 1);
                ++v37;
                if ( (unsigned int)v35 >= v36 )
                  goto LABEL_25;
              }
            }
            else
            {
LABEL_25:
              if ( _RSI[v35] == 1 )
              {
                v16 = (*(__int64 (__fastcall **)(char *, __int64))((char *)&hash_descriptor[0].init + v9))(v44, _RDX);
                if ( !v16 )
                {
                  j_zeromem(_RBP, 8ui64);
                  v16 = (*(__int64 (__fastcall **)(char *, unsigned __int8 *, __int64))((char *)&hash_descriptor[0].process + v9))(v44, _RBP, 8i64);
                  if ( !v16 )
                  {
                    v16 = (*(__int64 (__fastcall **)(char *, const unsigned __int8 *, _QWORD))((char *)&hash_descriptor[0].process + v9))(v44, msghash, msghashlen);
                    if ( !v16 )
                    {
                      v16 = (*(__int64 (__fastcall **)(char *, unsigned __int8 *, _QWORD))((char *)&hash_descriptor[0].process + v9))(v44, &_RSI[(unsigned int)(v35 + 1)], saltlen);
                      if ( !v16 )
                      {
                        v16 = (*(__int64 (__fastcall **)(char *, unsigned __int8 *))((char *)&hash_descriptor[0].done + v9))(v44, _RBP);
                        if ( !v16 )
                        {
                          if ( !j_mem_neq(_RBP, v15, Size) )
                            *res = 1;
                          v16 = 0;
                        }
                      }
                    }
                  }
                }
                goto $LBL_ERR_3;
              }
            }
          }
        }
        v16 = 7;
$LBL_ERR_3:
        ltc_free(v15);
        ltc_free(Block);
        ltc_free(_RBP);
        ltc_free(_RSI);
        return v16;
      }
      ltc_free(_RSI);
    }
    if ( _RBP )
      ltc_free(_RBP);
    if ( Block )
      ltc_free(Block);
    if ( v15 )
      ltc_free(v15);
    return 13;
  }
  return result;
}

