/*
==============
SD_DSP::RawCopy<256>
==============
*/

void __fastcall SD_DSP::RawCopy<256>(float *const _outgoing, const float *const _incoming)
{
  ??$RawCopy@$0BAA@@SD_DSP@@YAXQEIAMQEIBM@Z(_outgoing, _incoming);
}

/*
==============
SD_DSP::RawGainCopy<256>
==============
*/

void __fastcall SD_DSP::RawGainCopy<256>(float *const _outgoing, const float *const _incoming1, const float incomingGain1, const float *const _incoming2, const float incomingGain2)
{
  ??$RawGainCopy@$0BAA@@SD_DSP@@YAXQEIAMQEIBMM1M@Z(_outgoing, _incoming1, incomingGain1, _incoming2, incomingGain2);
}

/*
==============
SD_DSP::RawSumCopy<256>
==============
*/

void __fastcall SD_DSP::RawSumCopy<256>(float *const _outgoing, const float *const _incoming1, const float *const _incoming2)
{
  ??$RawSumCopy@$0BAA@@SD_DSP@@YAXQEIAMQEIBM1@Z(_outgoing, _incoming1, _incoming2);
}

/*
==============
SD_DSP::RawSum<256>
==============
*/

void __fastcall SD_DSP::RawSum<256>(float *const _outgoing, const float *const _incoming)
{
  ??$RawSum@$0BAA@@SD_DSP@@YAXQEIAMQEIBM@Z(_outgoing, _incoming);
}

/*
==============
SD_DSP::RawGainCopy<256>
==============
*/

void __fastcall SD_DSP::RawGainCopy<256>(float *const _outgoing, const float *const _incoming1, double incomingGain1, const float *const _incoming2, const float incomingGain2)
{
  unsigned int v15; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  _RSI = SD_DSP::RegisterTraits<__m256>::Upcast(_outgoing);
  SD_DSP::RegisterTraits<__m256>::Upcast(_incoming1);
  SD_DSP::RegisterTraits<__m256>::Upcast(_incoming2);
  __asm
  {
    vbroadcastss ymm3, [rsp+38h+incomingGain2]
    vmovaps xmm2, xmm6
    vshufps xmm2, xmm2, xmm2, 0
    vinsertf128 ymm2, ymm2, xmm2, 1
  }
  v15 = 2;
  do
  {
    _RDX = 32i64 * (v15 - 2);
    _RCX = 32i64 * (v15 - 1);
    _RAX = 32i64 * v15;
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rdx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
      vmulps  ymm0, ymm2, ymmword ptr [rax+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rax+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rax+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 1);
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 2);
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 3);
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 4);
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 5);
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 6);
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 7);
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 8);
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 9);
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 10);
    __asm
    {
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 11);
    __asm
    {
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = 32i64 * (v15 + 12);
    __asm
    {
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
    _RCX = v15 + 13;
    v15 += 16;
    _RCX *= 32i64;
    __asm
    {
      vmulps  ymm1, ymm3, ymmword ptr [rcx+r9]
      vmulps  ymm0, ymm2, ymmword ptr [rcx+rbx]
      vaddps  ymm1, ymm1, ymm0
      vmovups ymmword ptr [rcx+rsi], ymm1
    }
  }
  while ( v15 - 2 < 0x20 );
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
SD_DSP::RawSum<256>
==============
*/
void SD_DSP::RawSum<256>(float *const _outgoing, const float *const _incoming)
{
  unsigned int v5; 

  _RDI = SD_DSP::RegisterTraits<__m256>::Upcast(_outgoing);
  _R9 = SD_DSP::RegisterTraits<__m256>::Upcast(_incoming);
  v5 = 2;
  do
  {
    _R8 = 32i64 * (v5 - 2);
    _RDX = 32i64 * (v5 + 1);
    _RAX = 32i64 * v5;
    __asm
    {
      vmovups ymm0, ymmword ptr [r8+r9]
      vaddps  ymm1, ymm0, ymmword ptr [r8+rdi]
      vmovups ymmword ptr [r8+rdi], ymm1
    }
    _R8 = 32i64 * (v5 - 1);
    __asm
    {
      vmovups ymm0, ymmword ptr [r8+r9]
      vaddps  ymm1, ymm0, ymmword ptr [r8+rdi]
      vmovups ymm0, ymmword ptr [rax+r9]
      vmovups ymmword ptr [r8+rdi], ymm1
      vaddps  ymm1, ymm0, ymmword ptr [rax+rdi]
      vmovups ymm0, ymmword ptr [rdx+r9]
      vmovups ymmword ptr [rax+rdi], ymm1
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 2);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 3);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 4);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 5);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 6);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 7);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 8);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 9);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 10);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 11);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 12);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
    _RDX = 32i64 * (v5 + 13);
    v5 += 16;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rdi]
      vmovups ymmword ptr [rdx+rdi], ymm1
    }
  }
  while ( v5 - 2 < 0x20 );
}

/*
==============
SD_DSP::RawSumCopy<256>
==============
*/
void SD_DSP::RawSumCopy<256>(float *const _outgoing, const float *const _incoming1, const float *const _incoming2)
{
  unsigned int v7; 

  _RSI = SD_DSP::RegisterTraits<__m256>::Upcast(_outgoing);
  SD_DSP::RegisterTraits<__m256>::Upcast(_incoming1);
  _R9 = SD_DSP::RegisterTraits<__m256>::Upcast(_incoming2);
  v7 = 2;
  do
  {
    _R8 = 32i64 * (v7 - 2);
    _RDX = 32i64 * (v7 + 1);
    _RAX = 32i64 * v7;
    __asm
    {
      vmovups ymm0, ymmword ptr [r8+r9]
      vaddps  ymm1, ymm0, ymmword ptr [r8+rbx]
      vmovups ymmword ptr [r8+rsi], ymm1
    }
    _R8 = 32i64 * (v7 - 1);
    __asm
    {
      vmovups ymm0, ymmword ptr [r8+r9]
      vaddps  ymm1, ymm0, ymmword ptr [r8+rbx]
      vmovups ymm0, ymmword ptr [rax+r9]
      vmovups ymmword ptr [r8+rsi], ymm1
      vaddps  ymm1, ymm0, ymmword ptr [rax+rbx]
      vmovups ymm0, ymmword ptr [rdx+r9]
      vmovups ymmword ptr [rax+rsi], ymm1
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 2);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 3);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 4);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 5);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 6);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 7);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 8);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 9);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 10);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 11);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 12);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
    _RDX = 32i64 * (v7 + 13);
    v7 += 16;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+r9]
      vaddps  ymm1, ymm0, ymmword ptr [rdx+rbx]
      vmovups ymmword ptr [rdx+rsi], ymm1
    }
  }
  while ( v7 - 2 < 0x20 );
}

/*
==============
SD_DSP::RawCopy<256>
==============
*/
void SD_DSP::RawCopy<256>(float *const _outgoing, const float *const _incoming)
{
  _RDI = SD_DSP::RegisterTraits<__m256>::Upcast(_outgoing);
  _RAX = SD_DSP::RegisterTraits<__m256>::Upcast(_incoming);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rdi], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rdi+20h], ymm1
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rdi+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rdi+60h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
    vmovups ymmword ptr [rdi+80h], ymm0
    vmovups ymm0, ymmword ptr [rax+0C0h]
    vmovups ymmword ptr [rdi+0A0h], ymm1
    vmovups ymm1, ymmword ptr [rax+0E0h]
    vmovups ymmword ptr [rdi+0C0h], ymm0
    vmovups ymm0, ymmword ptr [rax+100h]
    vmovups ymmword ptr [rdi+0E0h], ymm1
    vmovups ymm1, ymmword ptr [rax+120h]
    vmovups ymmword ptr [rdi+100h], ymm0
    vmovups ymm0, ymmword ptr [rax+140h]
    vmovups ymmword ptr [rdi+120h], ymm1
    vmovups ymm1, ymmword ptr [rax+160h]
    vmovups ymmword ptr [rdi+140h], ymm0
    vmovups ymm0, ymmword ptr [rax+180h]
    vmovups ymmword ptr [rdi+160h], ymm1
    vmovups ymm1, ymmword ptr [rax+1A0h]
    vmovups ymmword ptr [rdi+180h], ymm0
    vmovups ymm0, ymmword ptr [rax+1C0h]
    vmovups ymmword ptr [rdi+1A0h], ymm1
    vmovups ymm1, ymmword ptr [rax+1E0h]
    vmovups ymmword ptr [rdi+1C0h], ymm0
    vmovups ymm0, ymmword ptr [rax+200h]
    vmovups ymmword ptr [rdi+1E0h], ymm1
    vmovups ymm1, ymmword ptr [rax+220h]
    vmovups ymmword ptr [rdi+200h], ymm0
    vmovups ymm0, ymmword ptr [rax+240h]
    vmovups ymmword ptr [rdi+220h], ymm1
    vmovups ymm1, ymmword ptr [rax+260h]
    vmovups ymmword ptr [rdi+240h], ymm0
    vmovups ymm0, ymmword ptr [rax+280h]
    vmovups ymmword ptr [rdi+260h], ymm1
    vmovups ymm1, ymmword ptr [rax+2A0h]
    vmovups ymmword ptr [rdi+280h], ymm0
    vmovups ymm0, ymmword ptr [rax+2C0h]
    vmovups ymmword ptr [rdi+2A0h], ymm1
    vmovups ymm1, ymmword ptr [rax+2E0h]
    vmovups ymmword ptr [rdi+2C0h], ymm0
    vmovups ymm0, ymmword ptr [rax+300h]
    vmovups ymmword ptr [rdi+2E0h], ymm1
    vmovups ymm1, ymmword ptr [rax+320h]
    vmovups ymmword ptr [rdi+300h], ymm0
    vmovups ymm0, ymmword ptr [rax+340h]
    vmovups ymmword ptr [rdi+320h], ymm1
    vmovups ymm1, ymmword ptr [rax+360h]
    vmovups ymmword ptr [rdi+340h], ymm0
    vmovups ymm0, ymmword ptr [rax+380h]
    vmovups ymmword ptr [rdi+360h], ymm1
    vmovups ymm1, ymmword ptr [rax+3A0h]
    vmovups ymmword ptr [rdi+380h], ymm0
    vmovups ymm0, ymmword ptr [rax+3C0h]
    vmovups ymmword ptr [rdi+3A0h], ymm1
    vmovups ymm1, ymmword ptr [rax+3E0h]
    vmovups ymmword ptr [rdi+3C0h], ymm0
    vmovups ymmword ptr [rdi+3E0h], ymm1
  }
}

