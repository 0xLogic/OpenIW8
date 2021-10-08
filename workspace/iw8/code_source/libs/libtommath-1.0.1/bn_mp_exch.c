/*
==============
mp_exch
==============
*/
void mp_exch(mp_int *a, mp_int *b)
{
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmm3, xmmword ptr [rcx]
    vmovsd  xmm2, qword ptr [rcx+10h]
    vmovups xmmword ptr [rcx], xmm0
    vmovsd  xmm1, qword ptr [rdx+10h]
    vmovsd  qword ptr [rcx+10h], xmm1
    vmovups xmmword ptr [rdx], xmm3
    vmovsd  qword ptr [rdx+10h], xmm2
  }
}

