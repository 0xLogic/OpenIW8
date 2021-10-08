/*
==============
register_cipher
==============
*/
__int64 register_cipher(const ltc_cipher_descriptor *cipher)
{
  unsigned int v1; 
  unsigned __int8 *p_ID; 
  unsigned int v4; 
  ltc_cipher_descriptor *v5; 
  __int64 result; 

  v1 = 0;
  p_ID = &cipher_descriptor[0].ID;
  _R10 = cipher;
  v4 = 0;
  do
  {
    if ( *((_QWORD *)p_ID - 1) && *p_ID == cipher->ID )
      return v4;
    ++v4;
    p_ID += 192;
  }
  while ( (__int64)p_ID < (__int64)&unk_156677368 );
  v5 = cipher_descriptor;
  while ( v5->name )
  {
    ++v1;
    if ( (__int64)++v5 >= (__int64)&unk_156677360 )
      return 0xFFFFFFFFi64;
  }
  __asm { vmovups xmm0, xmmword ptr [r10] }
  result = v1;
  _RDX = &cipher_descriptor[v1];
  __asm
  {
    vmovups xmmword ptr [rdx], xmm0
    vmovups xmm1, xmmword ptr [r10+10h]
    vmovups xmmword ptr [rdx+10h], xmm1
    vmovups xmm0, xmmword ptr [r10+20h]
    vmovups xmmword ptr [rdx+20h], xmm0
    vmovups xmm1, xmmword ptr [r10+30h]
    vmovups xmmword ptr [rdx+30h], xmm1
    vmovups xmm0, xmmword ptr [r10+40h]
    vmovups xmmword ptr [rdx+40h], xmm0
    vmovups xmm1, xmmword ptr [r10+50h]
    vmovups xmmword ptr [rdx+50h], xmm1
    vmovups xmm0, xmmword ptr [r10+60h]
    vmovups xmmword ptr [rdx+60h], xmm0
    vmovups xmm0, xmmword ptr [r10+70h]
    vmovups xmmword ptr [rdx+70h], xmm0
    vmovups xmm1, xmmword ptr [r10+80h]
    vmovups xmmword ptr [rdx+80h], xmm1
    vmovups xmm0, xmmword ptr [r10+90h]
    vmovups xmmword ptr [rdx+90h], xmm0
    vmovups xmm1, xmmword ptr [r10+0A0h]
    vmovups xmmword ptr [rdx+0A0h], xmm1
    vmovups xmm0, xmmword ptr [r10+0B0h]
    vmovups xmmword ptr [rdx+0B0h], xmm0
  }
  return result;
}

