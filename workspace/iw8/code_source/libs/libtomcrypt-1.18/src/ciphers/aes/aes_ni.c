/*
==============
aes_ni_ecb_decrypt
==============
*/
__int64 aes_ni_ecb_decrypt(const unsigned __int8 *ct, unsigned __int8 *pt, Symmetric_key *skey)
{
  int v8; 
  int Nr; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+148h+var_28], xmm6
    vmovdqu xmm6, xmmword ptr [rcx]
  }
  _RBX = &skey->data + 30;
  _RDI = skey;
  _RSI = pt;
  v8 = j_sse2_aligned(&skey->data + 30);
  __asm { vmovdqu xmm2, xmmword ptr [rbx] }
  if ( !v8 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+100h]
      vmovups [rsp+148h+var_118], ymm0
      vmovups ymm0, ymmword ptr [rdi+120h]
      vmovups [rsp+148h+var_F8], ymm0
      vmovups ymm0, ymmword ptr [rdi+140h]
      vmovups [rsp+148h+var_D8], ymm0
      vmovups ymm0, ymmword ptr [rdi+160h]
      vmovups [rsp+148h+var_B8], ymm0
      vmovups ymm0, ymmword ptr [rdi+180h]
      vmovups [rsp+148h+var_98], ymm0
      vmovups ymm0, ymmword ptr [rdi+1A0h]
      vmovups [rsp+148h+var_78], ymm0
      vmovups ymm0, ymmword ptr [rdi+1C0h]
      vmovups [rsp+148h+var_58], ymm0
      vmovdqu [rsp+148h+var_128], xmm2
    }
  }
  Nr = _RDI->rijndael.Nr;
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
  __asm
  {
    vaesdeclast xmm0, xmm1, xmmword ptr [rbx+rax*8]
    vmovdqu xmmword ptr [rsi], xmm0
  }
  result = 0i64;
  __asm { vmovaps xmm6, [rsp+148h+var_28] }
  return result;
}

/*
==============
aes_ni_ecb_encrypt
==============
*/
__int64 aes_ni_ecb_encrypt(const unsigned __int8 *pt, unsigned __int8 *ct, Symmetric_key *skey)
{
  int v7; 
  int Nr; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+138h+var_18], xmm6
    vmovdqu xmm6, xmmword ptr [rcx]
  }
  _RBX = skey;
  _RDI = ct;
  v7 = j_sse2_aligned(skey);
  __asm { vmovdqu xmm2, xmmword ptr [rbx] }
  if ( !v7 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+10h]
      vmovups [rsp+138h+var_108], ymm0
      vmovups ymm0, ymmword ptr [rbx+30h]
      vmovups [rsp+138h+var_E8], ymm0
      vmovups ymm0, ymmword ptr [rbx+50h]
      vmovups [rsp+138h+var_C8], ymm0
      vmovups ymm0, ymmword ptr [rbx+70h]
      vmovups [rsp+138h+var_A8], ymm0
      vmovups ymm0, ymmword ptr [rbx+90h]
      vmovups [rsp+138h+var_88], ymm0
      vmovups ymm0, ymmword ptr [rbx+0B0h]
      vmovups [rsp+138h+var_68], ymm0
      vmovups ymm0, ymmword ptr [rbx+0D0h]
      vmovups [rsp+138h+var_48], ymm0
      vmovdqu [rsp+138h+var_118], xmm2
    }
  }
  Nr = _RBX->rijndael.Nr;
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
  __asm
  {
    vaesenclast xmm0, xmm1, xmmword ptr [rcx+rax*8]
    vmovdqu xmmword ptr [rdi], xmm0
  }
  result = 0i64;
  __asm { vmovaps xmm6, [rsp+138h+var_18] }
  return result;
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

  _RBX = key;
  _RDI = skey;
  v4 = j_sse2_aligned(skey);
  __asm
  {
    vmovdqu xmm1, xmmword ptr [rbx]
    vpslldq xmm0, xmm1, 4
    vpxor   xmm2, xmm0, xmm1
    vmovdqu xmmword ptr [rdi], xmm1
    vaeskeygenassist xmm4, xmm1, 1
  }
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
      vmovdqu xmmword ptr [rdi+10h], xmm4
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 4
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vmovdqu xmmword ptr [rdi+20h], xmm4
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 8
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vmovdqu xmmword ptr [rdi+30h], xmm4
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 10h
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vmovdqu xmmword ptr [rdi+40h], xmm4
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 20h ; ' '
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vmovdqu xmmword ptr [rdi+50h], xmm4
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 40h ; '@'
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vmovdqu xmmword ptr [rdi+60h], xmm4
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm5, xmm4, 80h ; '€'
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vmovdqu xmmword ptr [rdi+70h], xmm4
      vpxor   xmm4, xmm2, xmm1
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vmovdqu xmmword ptr [rdi+80h], xmm4
      vaeskeygenassist xmm5, xmm4, 1Bh
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm4, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+90h], xmm4
      vpslldq xmm0, xmm4, 4
      vpxor   xmm2, xmm0, xmm4
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm5, xmm4, 36h ; '6'
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm4, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+0A0h], xmm4
      vmovdqu xmmword ptr [rdi+0F0h], xmm4
      vaesimc xmm1, xmmword ptr [rdi+90h]
      vmovdqu xmmword ptr [rdi+100h], xmm1
      vaesimc xmm0, xmmword ptr [rdi+80h]
      vmovdqu xmmword ptr [rdi+110h], xmm0
      vaesimc xmm2, xmmword ptr [rdi+70h]
      vmovdqu xmmword ptr [rdi+120h], xmm2
      vaesimc xmm1, xmmword ptr [rdi+60h]
      vmovdqu xmmword ptr [rdi+130h], xmm1
      vaesimc xmm0, xmmword ptr [rdi+50h]
      vmovdqu xmmword ptr [rdi+140h], xmm0
      vaesimc xmm2, xmmword ptr [rdi+40h]
      vmovdqu xmmword ptr [rdi+150h], xmm2
      vaesimc xmm1, xmmword ptr [rdi+30h]
      vmovdqu xmmword ptr [rdi+160h], xmm1
      vaesimc xmm0, xmmword ptr [rdi+20h]
      vmovdqu xmmword ptr [rdi+170h], xmm0
      vaesimc xmm2, xmmword ptr [rdi+10h]
      vmovdqu xmmword ptr [rdi+180h], xmm2
      vmovdqu xmm0, xmmword ptr [rdi]
      vmovdqu xmmword ptr [rdi+190h], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovdqu xmmword ptr [rdi+190h], xmm1
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+10h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rdi+180h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+20h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rdi+170h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 4
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+30h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rdi+160h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 8
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+40h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rdi+150h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 10h
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+50h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rdi+140h], xmm0
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
      vmovdqu xmmword ptr [rdi+60h], xmm5
      vmovdqu xmmword ptr [rdi+130h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vaeskeygenassist xmm4, xmm5, 40h ; '@'
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+70h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rdi+120h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 80h ; '€'
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+80h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rdi+110h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 1Bh
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+90h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rdi+100h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm5, 36h ; '6'
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm4, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+0A0h], xmm4
      vmovdqu xmmword ptr [rdi+0F0h], xmm4
    }
  }
}

/*
==============
aesni_expand_key_192
==============
*/
void aesni_expand_key_192(const unsigned __int8 *key, Symmetric_key *skey)
{
  int v6; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = skey;
  __asm { vmovaps [rsp+48h+var_28], xmm7 }
  _RBX = key;
  v6 = j_sse2_aligned(skey);
  __asm
  {
    vmovdqu xmm1, xmmword ptr [rbx]
    vmovdqu xmm7, xmmword ptr [rbx+10h]
    vpslldq xmm0, xmm1, 4
    vpxor   xmm2, xmm0, xmm1
    vmovdqu xmmword ptr [rdi], xmm1
    vaeskeygenassist xmm4, xmm7, 1
  }
  if ( v6 )
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
      vmovdqu xmmword ptr [rdi+20h], xmm1
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
      vmovdqu xmmword ptr [rdi+30h], xmm5
      vpxor   xmm5, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm7
      vshufpd xmm0, xmm7, xmm5, 0
      vmovupd xmmword ptr [rdi+40h], xmm0
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm6, xmm2, xmm1
      vshufpd xmm1, xmm5, xmm6, 1
      vmovdqu xmmword ptr [rdi+50h], xmm1
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
      vmovdqu xmmword ptr [rdi+60h], xmm5
      vpxor   xmm5, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm7
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm6, xmm2, xmm1
      vshufpd xmm0, xmm7, xmm5, 0
      vshufpd xmm1, xmm5, xmm6, 1
      vmovupd xmmword ptr [rdi+70h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vmovdqu xmmword ptr [rdi+80h], xmm1
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vaeskeygenassist xmm4, xmm6, 20h ; ' '
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+90h], xmm5
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
      vmovdqu xmmword ptr [rdi+0B0h], xmm1
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
      vmovdqu xmmword ptr [rdi+0C0h], xmm4
      vmovdqu xmmword ptr [rdi+0F0h], xmm4
      vaesimc xmm1, xmmword ptr [rdi+0B0h]
      vmovdqu xmmword ptr [rdi+100h], xmm1
      vaesimc xmm0, xmmword ptr [rdi+0A0h]
      vmovdqu xmmword ptr [rdi+110h], xmm0
      vaesimc xmm2, xmmword ptr [rdi+90h]
      vmovdqu xmmword ptr [rdi+120h], xmm2
      vaesimc xmm1, xmmword ptr [rdi+80h]
      vmovdqu xmmword ptr [rdi+130h], xmm1
      vaesimc xmm0, xmmword ptr [rdi+70h]
      vmovdqu xmmword ptr [rdi+140h], xmm0
      vaesimc xmm2, xmmword ptr [rdi+60h]
      vmovdqu xmmword ptr [rdi+150h], xmm2
      vaesimc xmm1, xmmword ptr [rdi+50h]
      vmovdqu xmmword ptr [rdi+160h], xmm1
      vaesimc xmm0, xmmword ptr [rdi+40h]
      vmovdqu xmmword ptr [rdi+170h], xmm0
      vaesimc xmm2, xmmword ptr [rdi+30h]
      vmovdqu xmmword ptr [rdi+180h], xmm2
      vaesimc xmm1, xmmword ptr [rdi+20h]
      vmovdqu xmmword ptr [rdi+190h], xmm1
      vaesimc xmm0, xmmword ptr [rdi+10h]
      vmovdqu xmmword ptr [rdi+1A0h], xmm0
      vmovdqu xmm1, xmmword ptr [rdi]
      vmovdqu xmmword ptr [rdi+1B0h], xmm1
      vmovaps xmm6, [rsp+48h+var_18]
      vmovaps xmm7, [rsp+48h+var_28]
    }
  }
  else
  {
    __asm
    {
      vmovdqu xmmword ptr [rdi+1B0h], xmm1
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
      vmovdqu xmmword ptr [rdi+10h], xmm0
      vmovdqu xmmword ptr [rdi+20h], xmm1
      vaesimc xmm0, xmm0
      vmovdqu xmmword ptr [rdi+1A0h], xmm0
      vaesimc xmm1, xmm1
      vmovdqu xmmword ptr [rdi+190h], xmm1
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 2
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+30h], xmm5
      vpshufd xmm1, xmm5, 0FFh
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpxor   xmm6, xmm2, xmm1
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rdi+180h], xmm0
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
      vmovdqu xmmword ptr [rdi+40h], xmm0
      vaesimc xmm0, xmm0
      vshufpd xmm1, xmm5, xmm7, 1
      vmovdqu xmmword ptr [rdi+50h], xmm1
      vmovdqu xmmword ptr [rdi+170h], xmm0
      vaesimc xmm1, xmm1
      vmovdqu xmmword ptr [rdi+160h], xmm1
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
      vmovdqu xmmword ptr [rdi+60h], xmm5
      vmovdqu xmmword ptr [rdi+150h], xmm0
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
      vmovdqu xmmword ptr [rdi+70h], xmm0
      vaesimc xmm0, xmm0
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm7, xmm2, xmm1
      vshufpd xmm1, xmm5, xmm7, 1
      vmovdqu xmmword ptr [rdi+80h], xmm1
      vmovdqu xmmword ptr [rdi+140h], xmm0
      vaesimc xmm1, xmm1
      vmovdqu xmmword ptr [rdi+130h], xmm1
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm7, 20h ; ' '
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+90h], xmm5
      vpslldq xmm0, xmm7, 4
      vpxor   xmm2, xmm0, xmm7
      vmovaps xmm7, [rsp+48h+var_28]
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rdi+120h], xmm0
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
      vmovaps xmm6, [rsp+48h+var_18]
      vmovdqu xmmword ptr [rdi+0A0h], xmm0
      vaesimc xmm0, xmm0
      vpshufd xmm1, xmm5, 0FFh
      vpxor   xmm3, xmm2, xmm1
      vshufpd xmm1, xmm5, xmm3, 1
      vmovdqu xmmword ptr [rdi+0B0h], xmm1
      vmovdqu xmmword ptr [rdi+110h], xmm0
      vaesimc xmm1, xmm1
      vmovdqu xmmword ptr [rdi+100h], xmm1
      vaeskeygenassist xmm4, xmm3, 80h ; '€'
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpshufd xmm1, xmm4, 55h ; 'U'
      vpxor   xmm4, xmm2, xmm1
      vmovdqu xmmword ptr [rdi+0C0h], xmm4
      vmovdqu xmmword ptr [rdi+0F0h], xmm4
    }
  }
}

/*
==============
aesni_expand_key_256
==============
*/
void aesni_expand_key_256(const unsigned __int8 *key, Symmetric_key *skey)
{
  int v7; 

  _RDI = key;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = skey;
  v7 = j_sse2_aligned(skey);
  __asm { vmovdqu xmm1, xmmword ptr [rdi] }
  if ( v7 )
  {
    __asm
    {
      vpslldq xmm0, xmm1, 4
      vpxor   xmm2, xmm0, xmm1
      vmovdqu xmmword ptr [rbx], xmm1
      vmovdqu xmm5, xmmword ptr [rdi+10h]
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
      vmovdqu xmmword ptr [rbx+10h], xmm5
      vpxor   xmm5, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm5, 4
      vmovdqu xmmword ptr [rbx+20h], xmm6
      vpxor   xmm6, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm6, 4
      vmovdqu xmmword ptr [rbx+30h], xmm5
      vpxor   xmm5, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 4
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm5, 4
      vmovdqu xmmword ptr [rbx+40h], xmm6
      vpxor   xmm6, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm6, 4
      vmovdqu xmmword ptr [rbx+50h], xmm5
      vpxor   xmm5, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 8
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm5, 4
      vmovdqu xmmword ptr [rbx+60h], xmm6
      vpxor   xmm6, xmm2, xmm1
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vaeskeygenassist xmm4, xmm6, 0
      vpxor   xmm2, xmm0, xmm3
      vmovdqu xmmword ptr [rbx+70h], xmm5
      vmovdqu xmmword ptr [rbx+80h], xmm6
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+90h], xmm5
      vaeskeygenassist xmm4, xmm5, 10h
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm6, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+0A0h], xmm6
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+0B0h], xmm5
      vaeskeygenassist xmm4, xmm5, 20h ; ' '
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm6, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+0C0h], xmm6
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm4, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+0D0h], xmm4
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
      vmovups ymmword ptr [rbx+0E0h], ymm4
      vmovdqu xmmword ptr [rbx+100h], xmm1
      vaesimc xmm0, xmmword ptr [rbx+0C0h]
      vmovdqu xmmword ptr [rbx+110h], xmm0
      vaesimc xmm2, xmmword ptr [rbx+0B0h]
      vmovdqu xmmword ptr [rbx+120h], xmm2
      vaesimc xmm1, xmmword ptr [rbx+0A0h]
      vmovdqu xmmword ptr [rbx+130h], xmm1
      vaesimc xmm0, xmmword ptr [rbx+90h]
      vmovdqu xmmword ptr [rbx+140h], xmm0
      vaesimc xmm2, xmmword ptr [rbx+80h]
      vmovdqu xmmword ptr [rbx+150h], xmm2
      vaesimc xmm1, xmmword ptr [rbx+70h]
      vmovdqu xmmword ptr [rbx+160h], xmm1
      vaesimc xmm0, xmmword ptr [rbx+60h]
      vmovdqu xmmword ptr [rbx+170h], xmm0
      vaesimc xmm2, xmmword ptr [rbx+50h]
      vmovdqu xmmword ptr [rbx+180h], xmm2
      vaesimc xmm1, xmmword ptr [rbx+40h]
      vmovdqu xmmword ptr [rbx+190h], xmm1
      vaesimc xmm0, xmmword ptr [rbx+30h]
      vmovdqu xmmword ptr [rbx+1A0h], xmm0
      vaesimc xmm2, xmmword ptr [rbx+20h]
      vmovdqu xmmword ptr [rbx+1B0h], xmm2
      vaesimc xmm1, xmmword ptr [rbx+10h]
      vmovdqu xmmword ptr [rbx+1C0h], xmm1
      vmovdqu xmm2, xmmword ptr [rbx]
      vmovdqu xmmword ptr [rbx+1D0h], xmm2
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    __asm
    {
      vmovdqu xmm6, xmmword ptr [rdi+10h]
      vmovdqu xmmword ptr [rbx], xmm1
      vmovdqu xmmword ptr [rbx+1D0h], xmm1
      vmovdqu xmmword ptr [rbx+10h], xmm6
      vaesimc xmm0, xmm6
      vmovdqu xmmword ptr [rbx+1C0h], xmm0
      vpslldq xmm0, xmm1, 4
      vpxor   xmm2, xmm0, xmm1
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 1
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+20h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rbx+1B0h], xmm0
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm6, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+30h], xmm6
      vaesimc xmm0, xmm6
      vmovdqu xmmword ptr [rbx+1A0h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 2
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+40h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rbx+190h], xmm0
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm5, 0
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpxor   xmm6, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+50h], xmm6
      vaesimc xmm0, xmm6
      vmovdqu xmmword ptr [rbx+180h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vaeskeygenassist xmm4, xmm6, 4
      vpshufd xmm1, xmm4, 0FFh
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+60h], xmm5
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rbx+170h], xmm0
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
      vmovdqu xmmword ptr [rbx+70h], xmm6
      vmovdqu xmmword ptr [rbx+160h], xmm0
      vpslldq xmm0, xmm5, 4
      vmovaps [rsp+48h+var_28], xmm7
      vaeskeygenassist xmm4, xmm6, 8
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+80h], xmm5
      vaeskeygenassist xmm4, xmm5, 0
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rbx+150h], xmm0
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm6, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+90h], xmm6
      vaeskeygenassist xmm4, xmm6, 10h
      vaesimc xmm0, xmm6
      vmovdqu xmmword ptr [rbx+140h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm5, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+0A0h], xmm5
      vaeskeygenassist xmm4, xmm5, 0
      vaesimc xmm0, xmm5
      vmovdqu xmmword ptr [rbx+130h], xmm0
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm6, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+0B0h], xmm6
      vaeskeygenassist xmm4, xmm6, 20h ; ' '
      vaesimc xmm0, xmm6
      vmovdqu xmmword ptr [rbx+120h], xmm0
      vpslldq xmm0, xmm5, 4
      vpxor   xmm2, xmm0, xmm5
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0FFh
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm7, xmm2, xmm1
      vmovdqu xmmword ptr [rbx+0C0h], xmm7
      vaeskeygenassist xmm4, xmm7, 0
      vaesimc xmm0, xmm7
      vmovdqu xmmword ptr [rbx+110h], xmm0
      vpslldq xmm0, xmm6, 4
      vpxor   xmm2, xmm0, xmm6
      vpslldq xmm1, xmm2, 4
      vpxor   xmm3, xmm1, xmm2
      vpshufd xmm1, xmm4, 0AAh ; 'ª'
      vpslldq xmm0, xmm3, 4
      vpxor   xmm2, xmm0, xmm3
      vpxor   xmm4, xmm2, xmm1
      vaesimc xmm0, xmm4
      vmovdqu xmmword ptr [rbx+0D0h], xmm4
      vmovdqu xmmword ptr [rbx+100h], xmm0
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
      vmovups ymmword ptr [rbx+0E0h], ymm4
      vmovaps xmm7, [rsp+48h+var_28]
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
}

