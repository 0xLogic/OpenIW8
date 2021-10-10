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
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  void *v14; 
  void *v15; 
  int v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v25; 
  __int64 v30; 
  unsigned __int8 *v33; 
  __int64 v34; 
  unsigned int v35; 
  unsigned __int8 *v36; 
  unsigned int Size; 
  void *Block; 
  char v43[400]; 

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
    v12 = (unsigned __int8 *)ltc_malloc(v11);
    v13 = (unsigned __int8 *)ltc_malloc(v11);
    Block = ltc_malloc(v11);
    v14 = ltc_malloc(v11);
    v15 = v14;
    if ( v12 )
    {
      if ( v13 && Block && v14 )
      {
        if ( sig[siglen - 1] == 0xBC )
        {
          v17 = v11 - v10;
          v18 = v17 - 1;
          memcpy_0(v12, sig, v17 - 1);
          memcpy_0(v15, &sig[v17 - 1], Size);
          v19 = 255 >> (((modulus_bitlen - 1) & 0xF8) + ((((_BYTE)modulus_bitlen - 1) & 7) != 0 ? 8 : 0) - (modulus_bitlen - 1));
          if ( ((unsigned __int8)~(_BYTE)v19 & *sig) == 0 )
          {
            v16 = j_pkcs_1_mgf1(hash_idx, (const unsigned __int8 *)v15, Size, v13, v17 - 1);
            if ( v16 )
              goto $LBL_ERR_3;
            v20 = 0i64;
            if ( v17 != 1 )
            {
              if ( v18 >= 0x40 )
              {
                v21 = v17 - 2;
                if ( v12 > &v13[v21] || &v12[v21] < v13 )
                {
                  v22 = 32;
                  do
                  {
                    _XMM1 = *(_OWORD *)&v13[v20];
                    __asm { vpxor   xmm1, xmm1, xmmword ptr [rdx+rsi] }
                    *(_OWORD *)&v12[v20] = _XMM1;
                    v25 = v22 - 16;
                    v20 = (unsigned int)(v20 + 64);
                    _XMM1 = *(_OWORD *)&v13[v25];
                    __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rsi] }
                    *(_OWORD *)&v12[v25] = _XMM1;
                    _XMM1 = *(_OWORD *)&v13[v22];
                    __asm { vpxor   xmm1, xmm1, xmmword ptr [rsi+rax] }
                    *(_OWORD *)&v12[v22] = _XMM1;
                    v30 = v22 + 16;
                    v22 += 64;
                    _XMM1 = *(_OWORD *)&v13[v30];
                    __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+rsi] }
                    *(_OWORD *)&v12[v30] = _XMM1;
                  }
                  while ( (unsigned int)v20 < (v18 & 0xFFFFFFC0) );
                }
              }
              if ( (unsigned int)v20 < v18 )
              {
                v33 = &v12[(unsigned int)v20];
                v20 = v18 - (unsigned int)v20;
                do
                {
                  *v33 ^= v33[v13 - v12];
                  ++v33;
                  --v20;
                }
                while ( v20 );
              }
            }
            *v12 &= v19;
            v34 = 0i64;
            v35 = v17 - saltlen - 2;
            if ( v35 )
            {
              v36 = v12;
              while ( !*v36 )
              {
                v34 = (unsigned int)(v34 + 1);
                ++v36;
                if ( (unsigned int)v34 >= v35 )
                  goto LABEL_25;
              }
            }
            else
            {
LABEL_25:
              if ( v12[v34] == 1 )
              {
                v16 = (*(__int64 (__fastcall **)(char *, __int64))((char *)&hash_descriptor[0].init + v9))(v43, v20);
                if ( !v16 )
                {
                  j_zeromem(v13, 8ui64);
                  v16 = (*(__int64 (__fastcall **)(char *, unsigned __int8 *, __int64))((char *)&hash_descriptor[0].process + v9))(v43, v13, 8i64);
                  if ( !v16 )
                  {
                    v16 = (*(__int64 (__fastcall **)(char *, const unsigned __int8 *, _QWORD))((char *)&hash_descriptor[0].process + v9))(v43, msghash, msghashlen);
                    if ( !v16 )
                    {
                      v16 = (*(__int64 (__fastcall **)(char *, unsigned __int8 *, _QWORD))((char *)&hash_descriptor[0].process + v9))(v43, &v12[(unsigned int)(v34 + 1)], saltlen);
                      if ( !v16 )
                      {
                        v16 = (*(__int64 (__fastcall **)(char *, unsigned __int8 *))((char *)&hash_descriptor[0].done + v9))(v43, v13);
                        if ( !v16 )
                        {
                          if ( !j_mem_neq(v13, v15, Size) )
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
        ltc_free(v13);
        ltc_free(v12);
        return v16;
      }
      ltc_free(v12);
    }
    if ( v13 )
      ltc_free(v13);
    if ( Block )
      ltc_free(Block);
    if ( v15 )
      ltc_free(v15);
    return 13;
  }
  return result;
}

