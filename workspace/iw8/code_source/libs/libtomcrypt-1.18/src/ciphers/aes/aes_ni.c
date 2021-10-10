/*
==============
aes_ni_ecb_decrypt
==============
*/
__int64 aes_ni_ecb_decrypt(const unsigned __int8 *ct, unsigned __int8 *pt, Symmetric_key *skey)
{
  void **v3; 
  int Nr; 

  v3 = &skey->data + 30;
  j_sse2_aligned(&skey->data + 30);
  _XMM2 = *(_OWORD *)v3;
  Nr = skey->rijndael.Nr;
  __asm
  {
    vpxor   xmm0, xmm2, xmm6
    vaesdec xmm1, xmm0, xmmword ptr [rbx+10h]
    vaesdec xmm2, xmm1, xmmword ptr [rbx+20h]
    vaesdec xmm3, xmm2, xmmword ptr [rbx+30h]
    vaesdec xmm0, xmm3, xmmword ptr [rbx+40h]
    vaesdec xmm1, xmm0, xmmword ptr [rbx+50h]
    vaesdec xmm2, xmm1, xmmword ptr [rbx+60h]
    vaesdec xmm3, xmm2, xmmword ptr [rbx+70h]
    vaesdec xmm0, xmm3, xmmword ptr [rbx+80h]
    vaesdec xmm1, xmm0, xmmword ptr [rbx+90h]
  }
  if ( Nr > 10 )
  {
    __asm
    {
      vaesdec xmm0, xmm1, xmmword ptr [rbx+0A0h]
      vaesdec xmm1, xmm0, xmmword ptr [rbx+0B0h]
    }
  }
  if ( Nr > 12 )
  {
    __asm
    {
      vaesdec xmm0, xmm1, xmmword ptr [rbx+0C0h]
      vaesdec xmm1, xmm0, xmmword ptr [rbx+0D0h]
    }
  }
  __asm { vaesdeclast xmm0, xmm1, xmmword ptr [rbx+rax*8] }
  *(_OWORD *)pt = _XMM0;
  return 0i64;
}

/*
==============
aes_ni_ecb_encrypt
==============
*/
__int64 aes_ni_ecb_encrypt(const unsigned __int8 *pt, unsigned __int8 *ct, Symmetric_key *skey)
{
  int Nr; 

  j_sse2_aligned(skey);
  _XMM2 = *(_OWORD *)skey->des.ek;
  Nr = skey->rijndael.Nr;
  __asm
  {
    vpxor   xmm0, xmm2, xmm6
    vaesenc xmm1, xmm0, xmmword ptr [rcx+10h]
    vaesenc xmm2, xmm1, xmmword ptr [rcx+20h]
    vaesenc xmm3, xmm2, xmmword ptr [rcx+30h]
    vaesenc xmm0, xmm3, xmmword ptr [rcx+40h]
    vaesenc xmm1, xmm0, xmmword ptr [rcx+50h]
    vaesenc xmm2, xmm1, xmmword ptr [rcx+60h]
    vaesenc xmm3, xmm2, xmmword ptr [rcx+70h]
    vaesenc xmm0, xmm3, xmmword ptr [rcx+80h]
    vaesenc xmm1, xmm0, xmmword ptr [rcx+90h]
  }
  if ( Nr > 10 )
  {
    __asm
    {
      vaesenc xmm0, xmm1, xmmword ptr [rcx+0A0h]
      vaesenc xmm1, xmm0, xmmword ptr [rcx+0B0h]
    }
  }
  if ( Nr > 12 )
  {
    __asm
    {
      vaesenc xmm0, xmm1, xmmword ptr [rcx+0C0h]
      vaesenc xmm1, xmm0, xmmword ptr [rcx+0D0h]
    }
  }
  __asm { vaesenclast xmm0, xmm1, xmmword ptr [rcx+rax*8] }
  *(_OWORD *)ct = _XMM0;
  return 0i64;
}

/*
==============
aes_ni_setup
==============
*/
__int64 aes_ni_setup(const unsigned __int8 *key, int keylen, int num_rounds, Symmetric_key *skey)
{
  unsigned int v4; 

  v4 = skey->des3.dk[0][24];
  switch ( v4 )
  {
    case 0xAu:
      aesni_expand_key_128(key, skey);
      return 0i64;
    case 0xCu:
      aesni_expand_key_192(key, skey);
      return 0i64;
    case 0xEu:
      aesni_expand_key_256(key, skey);
      return 0i64;
    default:
      return 1i64;
  }
}

/*
==============
aesni_expand_key_128
==============
*/
void aesni_expand_key_128(const unsigned __int8 *key, Symmetric_key *skey)
{
  int v4; 

  _RDI = skey;
  v4 = j_sse2_aligned(skey);
  _XMM1 = *(_OWORD *)key;
  __asm
  {
    vpslldq xmm0, xmm1, 4
    vpxor   xmm2, xmm0, xmm1
  }
  *(_OWORD *)_RDI->des.ek = *(_OWORD *)key;
  __asm { vaeskeygenassist xmm4, xmm1, 1 }
  if ( v4 )
  {
    __asm
    {
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 2
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
    }
    *((_OWORD *)&_RDI->data + 1) = _XMM4;
    __asm
    {
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 4
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
    }
    *((_OWORD *)&_RDI->data + 2) = _XMM4;
    __asm
    {
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 8
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
    }
    *((_OWORD *)&_RDI->data + 3) = _XMM4;
    __asm
    {
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 10h
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
    }
    *((_OWORD *)&_RDI->data + 4) = _XMM4;
    __asm
    {
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 20h ; ' '
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
    }
    *((_OWORD *)&_RDI->data + 5) = _XMM4;
    __asm
    {
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 40h ; '@'
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
    }
    *((_OWORD *)&_RDI->data + 6) = _XMM4;
    __asm
    {
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 80h ; '€'
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
    }
    *((_OWORD *)&_RDI->data + 7) = _XMM4;
    __asm
    {
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
    }
    *((_OWORD *)&_RDI->data + 8) = _XMM4;
    __asm
    {
      vaeskeygenassist xmm5, xmm4, 1Bh
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm4, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 9) = _XMM4;
    __asm
    {
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm5, xmm4, 36h ; '6'
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm4, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 10) = _XMM4;
    *((_OWORD *)&_RDI->data + 15) = _XMM4;
    __asm { vaesimc xmm1, xmmword ptr [rdi+90h] }
    *((_OWORD *)&_RDI->data + 16) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rdi+80h] }
    *((_OWORD *)&_RDI->data + 17) = _XMM0;
    __asm { vaesimc xmm2, xmmword ptr [rdi+70h] }
    *((_OWORD *)&_RDI->data + 18) = _XMM2;
    __asm { vaesimc xmm1, xmmword ptr [rdi+60h] }
    *((_OWORD *)&_RDI->data + 19) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rdi+50h] }
    *((_OWORD *)&_RDI->data + 20) = _XMM0;
    __asm { vaesimc xmm2, xmmword ptr [rdi+40h] }
    *((_OWORD *)&_RDI->data + 21) = _XMM2;
    __asm { vaesimc xmm1, xmmword ptr [rdi+30h] }
    *((_OWORD *)&_RDI->data + 22) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rdi+20h] }
    *((_OWORD *)&_RDI->data + 23) = _XMM0;
    __asm { vaesimc xmm2, xmmword ptr [rdi+10h] }
    *((_OWORD *)&_RDI->data + 24) = _XMM2;
    *((_OWORD *)&_RDI->data + 25) = *(_OWORD *)_RDI->des.ek;
  }
  else
  {
    *((_OWORD *)&_RDI->data + 25) = _XMM1;
    __asm
    {
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 1) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RDI->data + 24) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 2) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RDI->data + 23) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 4
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 3) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RDI->data + 22) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 8
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 4) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RDI->data + 21) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 10h
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 5) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RDI->data + 20) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 20h ; ' '
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vaesimc xmm0, xmm5
    }
    *((_OWORD *)&_RDI->data + 6) = _XMM5;
    *((_OWORD *)&_RDI->data + 19) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vaeskeygenassist xmm4, xmm5, 40h ; '@'
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 7) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RDI->data + 18) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 80h ; '€'
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 8) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RDI->data + 17) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 1Bh
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 9) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RDI->data + 16) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 36h ; '6'
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm4, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 10) = _XMM4;
    *((_OWORD *)&_RDI->data + 15) = _XMM4;
  }
}

/*
==============
aesni_expand_key_192
==============
*/
void aesni_expand_key_192(const unsigned __int8 *key, Symmetric_key *skey)
{
  int v4; 

  _RDI = skey;
  v4 = j_sse2_aligned(skey);
  _XMM1 = *(_OWORD *)key;
  _XMM7 = *((_OWORD *)key + 1);
  __asm
  {
    vpslldq xmm0, xmm1, 4
    vpxor   xmm2, xmm0, xmm1
  }
  *(_OWORD *)_RDI->des.ek = *(_OWORD *)key;
  __asm { vaeskeygenassist xmm4, xmm7, 1 }
  if ( v4 )
  {
    __asm
    {
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm7, 4
      vpxor   xmm2, xmm0, xmm7
      vpxor   xmm6, xmm2, xmm1
      vshufpd xmm0, xmm7, xmm5, 0
      vmovupd xmmword ptr [rdi+10h], xmm0
      vshufpd xmm1, xmm5, xmm6, 1
    }
    *((_OWORD *)&_RDI->data + 2) = _XMM1;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 2
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpxor   xmm7, xmm2, xmm1
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm7, 4
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpslldq xmm0, xmm7, 4
    }
    *((_OWORD *)&_RDI->data + 3) = _XMM5;
    __asm
    {
      vpxor   xmm5, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm7
      vshufpd xmm0, xmm7, xmm5, 0
      vmovupd xmmword ptr [rdi+40h], xmm0
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm6, xmm2, xmm1
      vshufpd xmm1, xmm5, xmm6, 1
    }
    *((_OWORD *)&_RDI->data + 5) = _XMM1;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 8
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm7, xmm2, xmm1
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm7, 10h
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpslldq xmm0, xmm7, 4
    }
    *((_OWORD *)&_RDI->data + 6) = _XMM5;
    __asm
    {
      vpxor   xmm5, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm7
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm6, xmm2, xmm1
      vshufpd xmm0, xmm7, xmm5, 0
      vshufpd xmm1, xmm5, xmm6, 1
      vmovupd xmmword ptr [rdi+70h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
    }
    *((_OWORD *)&_RDI->data + 8) = _XMM1;
    __asm
    {
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm6, 20h ; ' '
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 9) = _XMM5;
    __asm
    {
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm6, xmm2, xmm1
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 40h ; '@'
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm3, xmm2, xmm1
      vshufpd xmm1, xmm5, xmm3, 1
    }
    *((_OWORD *)&_RDI->data + 11) = _XMM1;
    __asm
    {
      vaeskeygenassist xmm4, xmm3, 80h ; '€'
      vshufpd xmm0, xmm6, xmm5, 0
      vmovupd xmmword ptr [rdi+0A0h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm4, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 12) = _XMM4;
    *((_OWORD *)&_RDI->data + 15) = _XMM4;
    __asm { vaesimc xmm1, xmmword ptr [rdi+0B0h] }
    *((_OWORD *)&_RDI->data + 16) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rdi+0A0h] }
    *((_OWORD *)&_RDI->data + 17) = _XMM0;
    __asm { vaesimc xmm2, xmmword ptr [rdi+90h] }
    *((_OWORD *)&_RDI->data + 18) = _XMM2;
    __asm { vaesimc xmm1, xmmword ptr [rdi+80h] }
    *((_OWORD *)&_RDI->data + 19) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rdi+70h] }
    *((_OWORD *)&_RDI->data + 20) = _XMM0;
    __asm { vaesimc xmm2, xmmword ptr [rdi+60h] }
    *((_OWORD *)&_RDI->data + 21) = _XMM2;
    __asm { vaesimc xmm1, xmmword ptr [rdi+50h] }
    *((_OWORD *)&_RDI->data + 22) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rdi+40h] }
    *((_OWORD *)&_RDI->data + 23) = _XMM0;
    __asm { vaesimc xmm2, xmmword ptr [rdi+30h] }
    *((_OWORD *)&_RDI->data + 24) = _XMM2;
    __asm { vaesimc xmm1, xmmword ptr [rdi+20h] }
    *((_OWORD *)&_RDI->data + 25) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rdi+10h] }
    *((_OWORD *)&_RDI->data + 26) = _XMM0;
    *((_OWORD *)&_RDI->data + 27) = *(_OWORD *)_RDI->des.ek;
  }
  else
  {
    *((_OWORD *)&_RDI->data + 27) = _XMM1;
    __asm
    {
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm7, 4
      vpxor   xmm2, xmm0, xmm7
      vpxor   xmm6, xmm2, xmm1
      vshufpd xmm1, xmm5, xmm6, 1
      vshufpd xmm0, xmm7, xmm5, 0
    }
    *((_OWORD *)&_RDI->data + 1) = _XMM0;
    *((_OWORD *)&_RDI->data + 2) = _XMM1;
    __asm { vaesimc xmm0, xmm0 }
    *((_OWORD *)&_RDI->data + 26) = _XMM0;
    __asm { vaesimc xmm1, xmm1 }
    *((_OWORD *)&_RDI->data + 25) = _XMM1;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 2
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 3) = _XMM5;
    __asm
    {
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpxor   xmm6, xmm2, xmm1
      vaesimc xmm0, xmm5
    }
    *((_OWORD *)&_RDI->data + 24) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 4
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpxor   xmm7, xmm2, xmm1
      vshufpd xmm0, xmm6, xmm5, 0
    }
    *((_OWORD *)&_RDI->data + 4) = _XMM0;
    __asm
    {
      vaesimc xmm0, xmm0
      vshufpd xmm1, xmm5, xmm7, 1
    }
    *((_OWORD *)&_RDI->data + 5) = _XMM1;
    *((_OWORD *)&_RDI->data + 23) = _XMM0;
    __asm { vaesimc xmm1, xmm1 }
    *((_OWORD *)&_RDI->data + 22) = _XMM1;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm7, 8
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm7, 4
      vpxor   xmm2, xmm0, xmm7
      vpxor   xmm6, xmm2, xmm1
      vaesimc xmm0, xmm5
    }
    *((_OWORD *)&_RDI->data + 6) = _XMM5;
    *((_OWORD *)&_RDI->data + 21) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vaeskeygenassist xmm4, xmm6, 10h
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vshufpd xmm0, xmm6, xmm5, 0
    }
    *((_OWORD *)&_RDI->data + 7) = _XMM0;
    __asm
    {
      vaesimc xmm0, xmm0
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm7, xmm2, xmm1
      vshufpd xmm1, xmm5, xmm7, 1
    }
    *((_OWORD *)&_RDI->data + 8) = _XMM1;
    *((_OWORD *)&_RDI->data + 20) = _XMM0;
    __asm { vaesimc xmm1, xmm1 }
    *((_OWORD *)&_RDI->data + 19) = _XMM1;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm7, 20h ; ' '
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 9) = _XMM5;
    __asm
    {
      vpslldq xmm0, xmm7, 4
      vpxor   xmm2, xmm0, xmm7
      vaesimc xmm0, xmm5
    }
    *((_OWORD *)&_RDI->data + 18) = _XMM0;
    __asm
    {
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm6, xmm2, xmm1
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 40h ; '@'
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vshufpd xmm0, xmm6, xmm5, 0
    }
    *((_OWORD *)&_RDI->data + 10) = _XMM0;
    __asm
    {
      vaesimc xmm0, xmm0
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm3, xmm2, xmm1
      vshufpd xmm1, xmm5, xmm3, 1
    }
    *((_OWORD *)&_RDI->data + 11) = _XMM1;
    *((_OWORD *)&_RDI->data + 17) = _XMM0;
    __asm { vaesimc xmm1, xmm1 }
    *((_OWORD *)&_RDI->data + 16) = _XMM1;
    __asm
    {
      vaeskeygenassist xmm4, xmm3, 80h ; '€'
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm4, xmm2, xmm1
    }
    *((_OWORD *)&_RDI->data + 12) = _XMM4;
    *((_OWORD *)&_RDI->data + 15) = _XMM4;
  }
}

/*
==============
aesni_expand_key_256
==============
*/
void aesni_expand_key_256(const unsigned __int8 *key, Symmetric_key *skey)
{
  int v5; 

  _RBX = skey;
  v5 = j_sse2_aligned(skey);
  _XMM1 = *(_OWORD *)key;
  if ( v5 )
  {
    __asm
    {
      vpslldq xmm0, xmm1, 4
      vpxor   xmm2, xmm0, xmm1
    }
    *(_OWORD *)_RBX->des.ek = _XMM1;
    _XMM5 = *((_OWORD *)key + 1);
    __asm
    {
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 1
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm6, xmm2, xmm1
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm6, 4
    }
    *((_OWORD *)&_RBX->data + 1) = _XMM5;
    __asm
    {
      vpxor   xmm5, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm5, 4
    }
    *((_OWORD *)&_RBX->data + 2) = _XMM6;
    __asm
    {
      vpxor   xmm6, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm6, 4
    }
    *((_OWORD *)&_RBX->data + 3) = _XMM5;
    __asm
    {
      vpxor   xmm5, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 4
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm5, 4
    }
    *((_OWORD *)&_RBX->data + 4) = _XMM6;
    __asm
    {
      vpxor   xmm6, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm6, 4
    }
    *((_OWORD *)&_RBX->data + 5) = _XMM5;
    __asm
    {
      vpxor   xmm5, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 8
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm5, 4
    }
    *((_OWORD *)&_RBX->data + 6) = _XMM6;
    __asm
    {
      vpxor   xmm6, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vaeskeygenassist xmm4, xmm6, 0
      vpxor   xmm2, xmm0, xmm3
    }
    *((_OWORD *)&_RBX->data + 7) = _XMM5;
    *((_OWORD *)&_RBX->data + 8) = _XMM6;
    __asm
    {
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 9) = _XMM5;
    __asm
    {
      vaeskeygenassist xmm4, xmm5, 10h
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm6, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 10) = _XMM6;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 11) = _XMM5;
    __asm
    {
      vaeskeygenassist xmm4, xmm5, 20h ; ' '
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm6, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 12) = _XMM6;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm4, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 13) = _XMM4;
    __asm
    {
      vaeskeygenassist xmm5, xmm4, 40h ; '@'
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm4, xmm2, xmm1
      vaesimc xmm1, xmmword ptr [rbx+0D0h]
      vinsertf128 ymm4, ymm4, xmm4, 1
    }
    *((__m256i *)&_RBX->data + 7) = _YMM4;
    *((_OWORD *)&_RBX->data + 16) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rbx+0C0h] }
    *((_OWORD *)&_RBX->data + 17) = _XMM0;
    __asm { vaesimc xmm2, xmmword ptr [rbx+0B0h] }
    *((_OWORD *)&_RBX->data + 18) = _XMM2;
    __asm { vaesimc xmm1, xmmword ptr [rbx+0A0h] }
    *((_OWORD *)&_RBX->data + 19) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rbx+90h] }
    *((_OWORD *)&_RBX->data + 20) = _XMM0;
    __asm { vaesimc xmm2, xmmword ptr [rbx+80h] }
    *((_OWORD *)&_RBX->data + 21) = _XMM2;
    __asm { vaesimc xmm1, xmmword ptr [rbx+70h] }
    *((_OWORD *)&_RBX->data + 22) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rbx+60h] }
    *((_OWORD *)&_RBX->data + 23) = _XMM0;
    __asm { vaesimc xmm2, xmmword ptr [rbx+50h] }
    *((_OWORD *)&_RBX->data + 24) = _XMM2;
    __asm { vaesimc xmm1, xmmword ptr [rbx+40h] }
    *((_OWORD *)&_RBX->data + 25) = _XMM1;
    __asm { vaesimc xmm0, xmmword ptr [rbx+30h] }
    *((_OWORD *)&_RBX->data + 26) = _XMM0;
    __asm { vaesimc xmm2, xmmword ptr [rbx+20h] }
    *((_OWORD *)&_RBX->data + 27) = _XMM2;
    __asm { vaesimc xmm1, xmmword ptr [rbx+10h] }
    *((_OWORD *)&_RBX->data + 28) = _XMM1;
    *((_OWORD *)&_RBX->data + 29) = *(_OWORD *)_RBX->des.ek;
  }
  else
  {
    _XMM6 = *((_OWORD *)key + 1);
    *(_OWORD *)_RBX->des.ek = _XMM1;
    *((_OWORD *)&_RBX->data + 29) = _XMM1;
    *((_OWORD *)&_RBX->data + 1) = _XMM6;
    __asm { vaesimc xmm0, xmm6 }
    *((_OWORD *)&_RBX->data + 28) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm1, 4
      vpxor   xmm2, xmm0, xmm1
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 1
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 2) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RBX->data + 27) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm6, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 3) = _XMM6;
    __asm { vaesimc xmm0, xmm6 }
    *((_OWORD *)&_RBX->data + 26) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 2
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 4) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RBX->data + 25) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm6, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 5) = _XMM6;
    __asm { vaesimc xmm0, xmm6 }
    *((_OWORD *)&_RBX->data + 24) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 4
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 6) = _XMM5;
    __asm { vaesimc xmm0, xmm5 }
    *((_OWORD *)&_RBX->data + 23) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm6, xmm2, xmm1
      vaesimc xmm0, xmm6
    }
    *((_OWORD *)&_RBX->data + 7) = _XMM6;
    *((_OWORD *)&_RBX->data + 22) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vaeskeygenassist xmm4, xmm6, 8
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 8) = _XMM5;
    __asm
    {
      vaeskeygenassist xmm4, xmm5, 0
      vaesimc xmm0, xmm5
    }
    *((_OWORD *)&_RBX->data + 21) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm6, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 9) = _XMM6;
    __asm
    {
      vaeskeygenassist xmm4, xmm6, 10h
      vaesimc xmm0, xmm6
    }
    *((_OWORD *)&_RBX->data + 20) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm5, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 10) = _XMM5;
    __asm
    {
      vaeskeygenassist xmm4, xmm5, 0
      vaesimc xmm0, xmm5
    }
    *((_OWORD *)&_RBX->data + 19) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm6, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 11) = _XMM6;
    __asm
    {
      vaeskeygenassist xmm4, xmm6, 20h ; ' '
      vaesimc xmm0, xmm6
    }
    *((_OWORD *)&_RBX->data + 18) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm7, xmm2, xmm1
    }
    *((_OWORD *)&_RBX->data + 12) = _XMM7;
    __asm
    {
      vaeskeygenassist xmm4, xmm7, 0
      vaesimc xmm0, xmm7
    }
    *((_OWORD *)&_RBX->data + 17) = _XMM0;
    __asm
    {
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm4, xmm2, xmm1
      vaesimc xmm0, xmm4
    }
    *((_OWORD *)&_RBX->data + 13) = _XMM4;
    *((_OWORD *)&_RBX->data + 16) = _XMM0;
    __asm
    {
      vaeskeygenassist xmm5, xmm4, 40h ; '@'
      vpslldq xmm0, xmm7, 4
      vpxor   xmm2, xmm0, xmm7
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm4, xmm2, xmm1
      vinsertf128 ymm4, ymm4, xmm4, 1
    }
    *((__m256i *)&_RBX->data + 7) = _YMM4;
  }
}

