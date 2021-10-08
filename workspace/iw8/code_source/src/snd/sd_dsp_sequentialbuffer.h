/*
==============
SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixCopy
==============
*/

void __fastcall SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixCopy(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *this, const SD_DSP::ConstSampleBufferRefType<256> *incoming, const float *const startGains, const float *const endGains)
{
  ?MatrixCopy@?$SequentialBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@QEAAXAEBU?$ConstSampleBufferRefType@$0BAA@@2@QEIBM1@Z(this, incoming, startGains, endGains);
}

/*
==============
SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum
==============
*/

void __fastcall SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *this, const SD_DSP::ConstSampleBufferRefType<256> *incoming, const float *const startGains, const float *const endGains)
{
  ?MatrixSum@?$SequentialBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@QEAAXAEBU?$ConstSampleBufferRefType@$0BAA@@2@QEIBM1@Z(this, incoming, startGains, endGains);
}

/*
==============
SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel
==============
*/

void __fastcall SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *this, const unsigned int destChannel, const SD_DSP::ConstSampleBufferRefType<256> *src)
{
  ?SumToChannel@?$SequentialBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@QEAAXIAEBU?$ConstSampleBufferRefType@$0BAA@@2@@Z(this, destChannel, src);
}

/*
==============
SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixCopy
==============
*/
void SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixCopy(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *this, const SD_DSP::ConstSampleBufferRefType<256> *incoming, const float *const startGains, const float *const endGains)
{
  const SD_DSP::ConstSampleBufferRefType<256> *v11; 
  __int64 v14; 
  const float *data; 
  __int64 v24; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RDI = startGains;
  v11 = incoming;
  if ( !startGains && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 295, ASSERT_TYPE_ASSERT, "(startGains != nullptr)", (const char *)&queryFormat, "startGains != nullptr", -2i64) )
    __debugbreak();
  if ( !endGains && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 296, ASSERT_TYPE_ASSERT, "(endGains != nullptr)", (const char *)&queryFormat, "endGains != nullptr") )
    __debugbreak();
  _R12 = (char *)((char *)endGains - (char *)_RDI);
  v14 = 16i64;
  do
  {
    __asm
    {
      vmovss  xmm6, dword ptr [r12+rdi]
      vmovss  xmm7, dword ptr [rdi]
    }
    data = v11->data;
    _R14 = SD_DSP::RegisterTraits<__m256>::Upcast(this->data._Elems[0]);
    SD_DSP::RegisterTraits<__m256>::Upcast(data);
    if ( ((unsigned __int64)g_lerp_t & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 55, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    if ( ((unsigned __int64)g_lerp_s & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 55, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    __asm
    {
      vmovaps xmm3, xmm7
      vshufps xmm3, xmm3, xmm3, 0
      vinsertf128 ymm3, ymm3, xmm3, 1
      vmovaps xmm4, xmm6
      vshufps xmm4, xmm4, xmm4, 0
      vinsertf128 ymm4, ymm4, xmm4, 1
    }
    _RAX = 0i64;
    v24 = 4i64;
    do
    {
      __asm
      {
        vmulps  ymm1, ymm4, ymmword ptr [rax+rdx]
        vmulps  ymm0, ymm3, ymmword ptr [rax+r8]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rax+rbx]
        vmovups ymmword ptr [rax+r14], ymm2
        vmulps  ymm1, ymm4, ymmword ptr [rax+rdx+20h]
        vmulps  ymm0, ymm3, ymmword ptr [rax+r8+20h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+20h]
        vmovups ymmword ptr [r14+rax+20h], ymm2
        vmulps  ymm1, ymm4, ymmword ptr [rax+rdx+40h]
        vmulps  ymm0, ymm3, ymmword ptr [rax+r8+40h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+40h]
        vmovups ymmword ptr [r14+rax+40h], ymm2
        vmulps  ymm1, ymm4, ymmword ptr [rax+rdx+60h]
        vmulps  ymm0, ymm3, ymmword ptr [rax+r8+60h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+60h]
        vmovups ymmword ptr [r14+rax+60h], ymm2
        vmulps  ymm1, ymm4, ymmword ptr [rax+rdx+80h]
        vmulps  ymm0, ymm3, ymmword ptr [rax+r8+80h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+80h]
        vmovups ymmword ptr [r14+rax+80h], ymm2
        vmulps  ymm1, ymm4, ymmword ptr [rax+rdx+0A0h]
        vmulps  ymm0, ymm3, ymmword ptr [rax+r8+0A0h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+0A0h]
        vmovups ymmword ptr [r14+rax+0A0h], ymm2
        vmulps  ymm1, ymm4, ymmword ptr [rax+rdx+0C0h]
        vmulps  ymm0, ymm3, ymmword ptr [rax+r8+0C0h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+0C0h]
        vmovups ymmword ptr [r14+rax+0C0h], ymm2
        vmulps  ymm1, ymm4, ymmword ptr [rax+rdx+0E0h]
        vmulps  ymm0, ymm3, ymmword ptr [rax+r8+0E0h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+0E0h]
        vmovups ymmword ptr [r14+rax+0E0h], ymm2
      }
      _RAX += 256i64;
      --v24;
    }
    while ( v24 );
    ++_RDI;
    this = (SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *)((char *)this + 8);
    --v14;
    v11 = incoming;
  }
  while ( v14 );
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
}

/*
==============
SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum
==============
*/
void SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *this, const SD_DSP::ConstSampleBufferRefType<256> *incoming, const float *const startGains, const float *const endGains)
{
  const SD_DSP::ConstSampleBufferRefType<256> *v11; 
  __int64 v14; 
  const float *data; 
  __int64 v24; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RDI = startGains;
  v11 = incoming;
  if ( !startGains && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 283, ASSERT_TYPE_ASSERT, "(startGains != nullptr)", (const char *)&queryFormat, "startGains != nullptr", -2i64) )
    __debugbreak();
  if ( !endGains && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 284, ASSERT_TYPE_ASSERT, "(endGains != nullptr)", (const char *)&queryFormat, "endGains != nullptr") )
    __debugbreak();
  _R12 = (char *)((char *)endGains - (char *)_RDI);
  v14 = 16i64;
  do
  {
    __asm
    {
      vmovss  xmm6, dword ptr [r12+rdi]
      vmovss  xmm7, dword ptr [rdi]
    }
    data = v11->data;
    _RSI = SD_DSP::RegisterTraits<__m256>::Upcast(this->data._Elems[0]);
    SD_DSP::RegisterTraits<__m256>::Upcast(data);
    if ( ((unsigned __int64)g_lerp_t & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 55, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    if ( ((unsigned __int64)g_lerp_s & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 55, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    __asm
    {
      vmovaps xmm4, xmm7
      vshufps xmm4, xmm4, xmm4, 0
      vinsertf128 ymm4, ymm4, xmm4, 1
      vmovaps xmm5, xmm6
      vshufps xmm5, xmm5, xmm5, 0
      vinsertf128 ymm5, ymm5, xmm5, 1
    }
    _RAX = 0i64;
    v24 = 4i64;
    do
    {
      __asm
      {
        vmulps  ymm1, ymm5, ymmword ptr [rax+rdx]
        vmulps  ymm0, ymm4, ymmword ptr [rax+r8]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rax+rbx]
        vaddps  ymm3, ymm2, ymmword ptr [rax+rsi]
        vmovups ymmword ptr [rax+rsi], ymm3
        vmulps  ymm1, ymm5, ymmword ptr [rax+rdx+20h]
        vmulps  ymm0, ymm4, ymmword ptr [rax+r8+20h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+20h]
        vaddps  ymm3, ymm2, ymmword ptr [rsi+rax+20h]
        vmovups ymmword ptr [rsi+rax+20h], ymm3
        vmulps  ymm1, ymm5, ymmword ptr [rax+rdx+40h]
        vmulps  ymm0, ymm4, ymmword ptr [rax+r8+40h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+40h]
        vaddps  ymm3, ymm2, ymmword ptr [rsi+rax+40h]
        vmovups ymmword ptr [rsi+rax+40h], ymm3
        vmulps  ymm1, ymm5, ymmword ptr [rax+rdx+60h]
        vmulps  ymm0, ymm4, ymmword ptr [rax+r8+60h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+60h]
        vaddps  ymm3, ymm2, ymmword ptr [rsi+rax+60h]
        vmovups ymmword ptr [rsi+rax+60h], ymm3
        vmulps  ymm1, ymm5, ymmword ptr [rax+rdx+80h]
        vmulps  ymm0, ymm4, ymmword ptr [rax+r8+80h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+80h]
        vaddps  ymm3, ymm2, ymmword ptr [rsi+rax+80h]
        vmovups ymmword ptr [rsi+rax+80h], ymm3
        vmulps  ymm1, ymm5, ymmword ptr [rax+rdx+0A0h]
        vmulps  ymm0, ymm4, ymmword ptr [rax+r8+0A0h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+0A0h]
        vaddps  ymm3, ymm2, ymmword ptr [rsi+rax+0A0h]
        vmovups ymmword ptr [rsi+rax+0A0h], ymm3
        vmulps  ymm1, ymm5, ymmword ptr [rax+rdx+0C0h]
        vmulps  ymm0, ymm4, ymmword ptr [rax+r8+0C0h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+0C0h]
        vaddps  ymm3, ymm2, ymmword ptr [rsi+rax+0C0h]
        vmovups ymmword ptr [rsi+rax+0C0h], ymm3
        vmulps  ymm1, ymm5, ymmword ptr [rax+rdx+0E0h]
        vmulps  ymm0, ymm4, ymmword ptr [rax+r8+0E0h]
        vaddps  ymm1, ymm1, ymm0
        vmulps  ymm2, ymm1, ymmword ptr [rbx+rax+0E0h]
        vaddps  ymm3, ymm2, ymmword ptr [rsi+rax+0E0h]
        vmovups ymmword ptr [rsi+rax+0E0h], ymm3
      }
      _RAX += 256i64;
      --v24;
    }
    while ( v24 );
    ++_RDI;
    this = (SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *)((char *)this + 8);
    --v14;
    v11 = incoming;
  }
  while ( v14 );
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
}

/*
==============
SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel
==============
*/
void SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *this, const unsigned int destChannel, const SD_DSP::ConstSampleBufferRefType<256> *src)
{
  float *v4; 

  v4 = this->data._Elems[destChannel];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr", -2i64) )
    __debugbreak();
  SD_DSP::RawSum<256>(v4, src->data);
}

