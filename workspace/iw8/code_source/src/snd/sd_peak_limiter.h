/*
==============
SD_DSP::PeakLimiter<16,64>::SetParams
==============
*/

void __fastcall SD_DSP::PeakLimiter<16,64>::SetParams(SD_DSP::PeakLimiter<16,64> *this, const SD_DSP::PeakLimiterParams *params)
{
  ?SetParams@?$PeakLimiter@$0BA@$0EA@@SD_DSP@@QEAAXAEBUPeakLimiterParams@2@@Z(this, params);
}

/*
==============
SD_DSP::PeakLimiter<16,64>::PeakLimiter<16,64>
==============
*/

void __fastcall SD_DSP::PeakLimiter<16,64>::PeakLimiter<16,64>(SD_DSP::PeakLimiter<16,64> *this)
{
  ??0?$PeakLimiter@$0BA@$0EA@@SD_DSP@@QEAA@XZ(this);
}

/*
==============
SD_DSP::PeakLimiter<16,64>::RecalculateFilterCoefficients
==============
*/

void __fastcall SD_DSP::PeakLimiter<16,64>::RecalculateFilterCoefficients(SD_DSP::PeakLimiter<16,64> *this)
{
  ?RecalculateFilterCoefficients@?$PeakLimiter@$0BA@$0EA@@SD_DSP@@AEAAXXZ(this);
}

/*
==============
SD_DSP::PeakLimiter<16,64>::ClearBuffers
==============
*/

void __fastcall SD_DSP::PeakLimiter<16,64>::ClearBuffers(SD_DSP::PeakLimiter<16,64> *this)
{
  ?ClearBuffers@?$PeakLimiter@$0BA@$0EA@@SD_DSP@@QEAAXXZ(this);
}

/*
==============
SD_DSP::PeakLimiter<16,64>::ProcessSingleChannelFrame
==============
*/

void __fastcall SD_DSP::PeakLimiter<16,64>::ProcessSingleChannelFrame(SD_DSP::PeakLimiter<16,64> *this, float *inout_pBuffer, const float4 *vOne, const float4 *vSqrt2, const float4 *vInputGain, const float4 *vOutputGain, const float4 *vInvSampleRate, const float4 *vRmsRiseCoeff, const float4 *vRmsFallCoeff, const float4 *vReleaseRateMin, const float4 *vReleaseRateMax, const float4 *vSignalClampVal, float4 *vCurrentGain, float4 *vCurrentReleaseScalar, float4 *vCurrentRmsSquare, unsigned int uBufferIndex)
{
  ?ProcessSingleChannelFrame@?$PeakLimiter@$0BA@$0EA@@SD_DSP@@AEAAXPEAMAEBUfloat4@@111111111AEAU3@22I@Z(this, inout_pBuffer, vOne, vSqrt2, vInputGain, vOutputGain, vInvSampleRate, vRmsRiseCoeff, vRmsFallCoeff, vReleaseRateMin, vReleaseRateMax, vSignalClampVal, vCurrentGain, vCurrentReleaseScalar, vCurrentRmsSquare, uBufferIndex);
}

/*
==============
SD_DSP::PeakLimiter<16,64>::Process
==============
*/

void __fastcall SD_DSP::PeakLimiter<16,64>::Process(SD_DSP::PeakLimiter<16,64> *this, float *inout_pBuffer, unsigned int sampleCount)
{
  ?Process@?$PeakLimiter@$0BA@$0EA@@SD_DSP@@QEAAXPEAMI@Z(this, inout_pBuffer, sampleCount);
}

/*
==============
SD_DSP::PeakLimiter<16,64>::PeakLimiter<16,64>
==============
*/
void SD_DSP::PeakLimiter<16,64>::PeakLimiter<16,64>(SD_DSP::PeakLimiter<16,64> *this)
{
  this->m_inputGain = 1.0;
  this->m_outputGain = 1.0;
  this->m_sampleRate = 48000.0;
  this->m_invSampleRate = 0.000020833333;
  this->m_releaseRateMin = 1000.0;
  this->m_releaseRateMax = 10.0;
  this->m_rmsRiseFilterCutoff = 20.0;
  this->m_rmsFallFilterCutoff = 2.0;
  this->m_bufferIndex = 0;
  this->m_rmsRiseCoeff = 0.0026145699;
  this->m_rmsFallCoeff = 0.00026176512;
  memset_0(this, 0, 0x1124ui64);
  this->m_gainBuffer0[0] = 1.0;
  this->m_gainBuffer1[0] = 32.0;
  this->m_gainBuffer0[1] = 1.0;
  this->m_gainBuffer1[1] = 32.0;
  this->m_gainBuffer0[2] = 1.0;
  this->m_gainBuffer1[2] = 32.0;
  this->m_gainBuffer0[3] = 1.0;
  this->m_gainBuffer1[3] = 32.0;
  this->m_gainBuffer0[4] = 1.0;
  this->m_gainBuffer1[4] = 32.0;
  this->m_gainBuffer0[5] = 1.0;
  this->m_gainBuffer1[5] = 32.0;
  this->m_gainBuffer0[6] = 1.0;
  this->m_gainBuffer1[6] = 32.0;
  this->m_gainBuffer0[7] = 1.0;
  this->m_gainBuffer1[7] = 32.0;
  this->m_gainBuffer0[8] = 1.0;
  this->m_gainBuffer1[8] = 32.0;
  this->m_gainBuffer0[9] = 1.0;
  this->m_gainBuffer1[9] = 32.0;
  this->m_gainBuffer0[10] = 1.0;
  this->m_gainBuffer1[10] = 32.0;
  this->m_gainBuffer0[11] = 1.0;
  this->m_gainBuffer1[11] = 32.0;
  this->m_gainBuffer0[12] = 1.0;
  this->m_gainBuffer1[12] = 32.0;
  this->m_gainBuffer0[13] = 1.0;
  this->m_gainBuffer1[13] = 32.0;
  this->m_gainBuffer0[14] = 1.0;
  this->m_gainBuffer1[14] = 32.0;
  this->m_gainBuffer0[15] = 1.0;
  this->m_gainBuffer1[15] = 32.0;
  this->m_gainBuffer0[16] = 1.0;
  this->m_gainBuffer1[16] = 32.0;
  this->m_gainBuffer0[17] = 1.0;
  this->m_gainBuffer1[17] = 32.0;
  this->m_gainBuffer0[18] = 1.0;
  this->m_gainBuffer1[18] = 32.0;
  this->m_gainBuffer0[19] = 1.0;
  this->m_gainBuffer1[19] = 32.0;
  this->m_gainBuffer0[20] = 1.0;
  this->m_gainBuffer1[20] = 32.0;
  this->m_gainBuffer0[21] = 1.0;
  this->m_gainBuffer1[21] = 32.0;
  this->m_gainBuffer0[22] = 1.0;
  this->m_gainBuffer1[22] = 32.0;
  this->m_gainBuffer0[23] = 1.0;
  this->m_gainBuffer1[23] = 32.0;
  this->m_gainBuffer0[24] = 1.0;
  this->m_gainBuffer1[24] = 32.0;
  this->m_gainBuffer0[25] = 1.0;
  this->m_gainBuffer1[25] = 32.0;
  this->m_gainBuffer0[26] = 1.0;
  this->m_gainBuffer1[26] = 32.0;
  this->m_gainBuffer0[27] = 1.0;
  this->m_gainBuffer1[27] = 32.0;
  this->m_gainBuffer0[28] = 1.0;
  this->m_gainBuffer1[28] = 32.0;
  this->m_gainBuffer0[29] = 1.0;
  this->m_gainBuffer1[29] = 32.0;
  this->m_gainBuffer0[30] = 1.0;
  this->m_gainBuffer1[30] = 32.0;
  this->m_gainBuffer0[31] = 1.0;
  this->m_gainBuffer1[31] = 32.0;
  *(_QWORD *)&this->m_currentGain = 1065353216i64;
  this->m_gainBufferSum0 = 32.0;
  this->m_gainBufferSum1 = 1024.0;
  this->m_storedReleaseScalar = 0.0;
}

/*
==============
SD_DSP::PeakLimiter<16,64>::ClearBuffers
==============
*/
void SD_DSP::PeakLimiter<16,64>::ClearBuffers(SD_DSP::PeakLimiter<16,64> *this)
{
  memset_0(this, 0, 0x1124ui64);
  this->m_gainBuffer0[0] = 1.0;
  this->m_gainBuffer1[0] = 32.0;
  this->m_gainBuffer0[1] = 1.0;
  this->m_gainBuffer1[1] = 32.0;
  this->m_gainBuffer0[2] = 1.0;
  this->m_gainBuffer1[2] = 32.0;
  this->m_gainBuffer0[3] = 1.0;
  this->m_gainBuffer1[3] = 32.0;
  this->m_gainBuffer0[4] = 1.0;
  this->m_gainBuffer1[4] = 32.0;
  this->m_gainBuffer0[5] = 1.0;
  this->m_gainBuffer1[5] = 32.0;
  this->m_gainBuffer0[6] = 1.0;
  this->m_gainBuffer1[6] = 32.0;
  this->m_gainBuffer0[7] = 1.0;
  this->m_gainBuffer1[7] = 32.0;
  this->m_gainBuffer0[8] = 1.0;
  this->m_gainBuffer1[8] = 32.0;
  this->m_gainBuffer0[9] = 1.0;
  this->m_gainBuffer1[9] = 32.0;
  this->m_gainBuffer0[10] = 1.0;
  this->m_gainBuffer1[10] = 32.0;
  this->m_gainBuffer0[11] = 1.0;
  this->m_gainBuffer1[11] = 32.0;
  this->m_gainBuffer0[12] = 1.0;
  this->m_gainBuffer1[12] = 32.0;
  this->m_gainBuffer0[13] = 1.0;
  this->m_gainBuffer1[13] = 32.0;
  this->m_gainBuffer0[14] = 1.0;
  this->m_gainBuffer1[14] = 32.0;
  this->m_gainBuffer0[15] = 1.0;
  this->m_gainBuffer1[15] = 32.0;
  this->m_gainBuffer0[16] = 1.0;
  this->m_gainBuffer1[16] = 32.0;
  this->m_gainBuffer0[17] = 1.0;
  this->m_gainBuffer1[17] = 32.0;
  this->m_gainBuffer0[18] = 1.0;
  this->m_gainBuffer1[18] = 32.0;
  this->m_gainBuffer0[19] = 1.0;
  this->m_gainBuffer1[19] = 32.0;
  this->m_gainBuffer0[20] = 1.0;
  this->m_gainBuffer1[20] = 32.0;
  this->m_gainBuffer0[21] = 1.0;
  this->m_gainBuffer1[21] = 32.0;
  this->m_gainBuffer0[22] = 1.0;
  this->m_gainBuffer1[22] = 32.0;
  this->m_gainBuffer0[23] = 1.0;
  this->m_gainBuffer1[23] = 32.0;
  this->m_gainBuffer0[24] = 1.0;
  this->m_gainBuffer1[24] = 32.0;
  this->m_gainBuffer0[25] = 1.0;
  this->m_gainBuffer1[25] = 32.0;
  this->m_gainBuffer0[26] = 1.0;
  this->m_gainBuffer1[26] = 32.0;
  this->m_gainBuffer0[27] = 1.0;
  this->m_gainBuffer1[27] = 32.0;
  this->m_gainBuffer0[28] = 1.0;
  this->m_gainBuffer1[28] = 32.0;
  this->m_gainBuffer0[29] = 1.0;
  this->m_gainBuffer1[29] = 32.0;
  this->m_gainBuffer0[30] = 1.0;
  this->m_gainBuffer1[30] = 32.0;
  this->m_gainBuffer0[31] = 1.0;
  this->m_gainBuffer1[31] = 32.0;
  *(_QWORD *)&this->m_currentGain = 1065353216i64;
  this->m_gainBufferSum0 = 32.0;
  this->m_gainBufferSum1 = 1024.0;
  this->m_storedReleaseScalar = 0.0;
}

/*
==============
SD_DSP::PeakLimiter<16,64>::RecalculateFilterCoefficients
==============
*/
void SD_DSP::PeakLimiter<16,64>::RecalculateFilterCoefficients(SD_DSP::PeakLimiter<16,64> *this)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1240h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps [rsp+48h+var_18], xmm7
  }
  _RBX = this;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm8
    vmovsd  xmm8, cs:__real@3ff0000000000000
    vdivsd  xmm7, xmm8, xmm0
    vmovss  xmm0, dword ptr [rcx+1250h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm0, xmm0, cs:__real@c01921fb54442d18
    vmulsd  xmm0, xmm0, xmm7; X
  }
  exp_0(*(double *)&_XMM0);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+1254h]
    vsubsd  xmm0, xmm8, xmm0
    vcvtsd2ss xmm1, xmm0, xmm0
    vcvtss2sd xmm2, xmm2, xmm2
    vmulsd  xmm0, xmm2, cs:__real@c01921fb54442d18
    vmulsd  xmm0, xmm0, xmm7; X
    vmovss  dword ptr [rbx+1258h], xmm1
  }
  exp_0(*(double *)&_XMM0);
  __asm
  {
    vmovaps xmm7, [rsp+48h+var_18]
    vsubsd  xmm0, xmm8, xmm0
    vmovaps xmm8, [rsp+48h+var_28]
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+125Ch], xmm1
  }
}

/*
==============
SD_DSP::PeakLimiter<16,64>::Process
==============
*/
void SD_DSP::PeakLimiter<16,64>::Process(SD_DSP::PeakLimiter<16,64> *this, float *inout_pBuffer, unsigned int sampleCount)
{
  unsigned int uBufferIndex; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v23; 
  float4 vCurrentGain; 
  float4 vCurrentReleaseScalar; 
  float4 vCurrentRmsSquare; 
  float4 vSignalClampVal; 
  float4 vReleaseRateMax; 
  float4 vReleaseRateMin; 
  float4 vRmsFallCoeff; 
  float4 vRmsRiseCoeff; 
  float4 vInvSampleRate; 
  float4 vOutputGain; 
  float4 vInputGain; 
  float4 vSqrt2; 
  float4 vOne; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx+1244h]
    vmovups xmm1, cs:__xmm@3fb504f33fb504f33fb504f33fb504f3
    vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
    vbroadcastss xmm3, dword ptr [rcx+1260h]
  }
  uBufferIndex = this->m_bufferIndex;
  v8 = 16 * sampleCount;
  v9 = 0;
  __asm
  {
    vmovups xmmword ptr [rbp+80h+var_80.v], xmm2
    vmovss  xmm2, dword ptr [rcx+1258h]
    vmovups xmmword ptr [rbp+80h+var_90.v], xmm2
    vmovss  xmm2, dword ptr [rcx+125Ch]
    vmovups xmmword ptr [rbp+80h+var_A0.v], xmm2
    vmovss  xmm2, dword ptr [rcx+1248h]
    vmovups xmmword ptr [rbp+80h+var_B0.v], xmm2
    vmovss  xmm2, dword ptr [rcx+124Ch]
    vmovups xmmword ptr [rbp+80h+vSqrt2.v], xmm1
    vbroadcastss xmm1, dword ptr [rcx+123Ch]
    vmovups xmmword ptr [rbp+80h+var_C0.v], xmm2
    vmovdqu xmm2, cs:__xmm@5f7fffff5f7fffff5f7fffff5f7fffff
    vmovups xmmword ptr [rbp+80h+var_70.v], xmm1
    vmovss  xmm1, dword ptr [rcx+1268h]
    vmovdqu xmmword ptr [rbp+80h+var_D0.v], xmm2
    vmovaps xmm2, xmm1
    vmovups xmmword ptr [rbp+80h+vOne.v], xmm0
    vbroadcastss xmm0, dword ptr [rcx+1238h]
    vmovups xmmword ptr [rbp+80h+var_F0.v], xmm1
    vmovss  xmm1, dword ptr [rcx+1264h]
    vmovaps xmm4, xmm1
    vmovups xmmword ptr [rbp+80h+var_E0.v], xmm1
  }
  _RBX = this;
  __asm
  {
    vmovups xmmword ptr [rbp+80h+var_60.v], xmm0
    vmovups xmmword ptr [rbp+80h+var_100.v], xmm3
  }
  v23 = 0;
  if ( 16 * sampleCount )
  {
    do
    {
      SD_DSP::PeakLimiter<16,64>::ProcessSingleChannelFrame(_RBX, &inout_pBuffer[v23], &vOne, &vSqrt2, &vInputGain, &vOutputGain, &vInvSampleRate, &vRmsRiseCoeff, &vRmsFallCoeff, &vReleaseRateMin, &vReleaseRateMax, &vSignalClampVal, &vCurrentGain, &vCurrentReleaseScalar, &vCurrentRmsSquare, uBufferIndex);
      v23 += 16;
      uBufferIndex = ((_BYTE)uBufferIndex + 1) & 0x3F;
    }
    while ( v23 < v8 );
    __asm
    {
      vmovups xmm3, xmmword ptr [rbp+80h+var_100.v]
      vmovups xmm2, xmmword ptr [rbp+80h+var_F0.v]
      vmovups xmm4, xmmword ptr [rbp+80h+var_E0.v]
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+1260h], xmm3
    vmovss  dword ptr [rbx+1268h], xmm2
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm3, xmm3, xmm3
    vmovss  dword ptr [rbx+1264h], xmm4
  }
  _RBX->m_bufferIndex = uBufferIndex;
  do
  {
    v9 += 16;
    __asm
    {
      vaddps  xmm0, xmm2, xmmword ptr [rbx+rax*4+1130h]
      vaddps  xmm1, xmm0, xmmword ptr [rbx+rax*4+1140h]
      vaddps  xmm0, xmm1, xmmword ptr [rbx+rax*4+1150h]
      vaddps  xmm2, xmm0, xmmword ptr [rbx+rax*4+1160h]
      vaddps  xmm0, xmm3, xmmword ptr [rbx+rax*4+11B0h]
      vaddps  xmm1, xmm0, xmmword ptr [rbx+rax*4+11C0h]
      vaddps  xmm0, xmm1, xmmword ptr [rbx+rax*4+11D0h]
      vaddps  xmm3, xmm0, xmmword ptr [rbx+rax*4+11E0h]
    }
  }
  while ( v9 < 0x20 );
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm3, xmm3
    vmovss  dword ptr [rbx+1230h], xmm1
    vhaddps xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+1234h], xmm1
  }
}

/*
==============
SD_DSP::PeakLimiter<16,64>::ProcessSingleChannelFrame
==============
*/
void SD_DSP::PeakLimiter<16,64>::ProcessSingleChannelFrame(SD_DSP::PeakLimiter<16,64> *this, float *inout_pBuffer, const float4 *vOne, const float4 *vSqrt2, const float4 *vInputGain, const float4 *vOutputGain, const float4 *vInvSampleRate, const float4 *vRmsRiseCoeff, const float4 *vRmsFallCoeff, const float4 *vReleaseRateMin, const float4 *vReleaseRateMax, const float4 *vSignalClampVal, float4 *vCurrentGain, float4 *vCurrentReleaseScalar, float4 *vCurrentRmsSquare, unsigned int uBufferIndex)
{
  const float4 *v45; 
  float4 *v46; 
  const float4 *v47; 
  const float4 *v48; 
  const float4 *v54; 
  float4 *v55; 
  const float4 *v56; 
  const float4 *v57; 
  const float4 *v63; 
  float4 *v64; 
  const float4 *v65; 
  const float4 *v66; 
  const float4 *v67; 
  float4 *v68; 
  const float4 *v69; 
  const float4 *v70; 
  char v182; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RDI = vSignalClampVal;
  _R12 = vOne;
  _RSI = inout_pBuffer;
  _RBX = vInputGain;
  _R14 = this;
  _R15 = vCurrentGain;
  __asm { vmovups xmm2, xmmword ptr [rdi] }
  _R13 = vCurrentReleaseScalar;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmulps  xmm0, xmm0, xmmword ptr [rdx]
  }
  _RBP = vCurrentRmsSquare;
  __asm
  {
    vxorps  xmm13, xmm13, xmm13
    vsubps  xmm1, xmm13, xmmword ptr [rdi]
  }
  Float4Clamp((float4 *)this, (const float4 *)inout_pBuffer, vOne, vSqrt2);
  __asm
  {
    vmovups xmm2, xmmword ptr [rbx]
    vsubps  xmm1, xmm13, xmmword ptr [rdi]
    vmovups xmm14, xmm0
    vmulps  xmm0, xmm2, xmmword ptr [rsi+10h]
    vmovups xmm2, xmmword ptr [rdi]
  }
  Float4Clamp(v46, v45, v47, v48);
  __asm
  {
    vmovups xmm2, xmmword ptr [rbx]
    vsubps  xmm1, xmm13, xmmword ptr [rdi]
    vmovups xmm15, xmm0
    vmulps  xmm0, xmm2, xmmword ptr [rsi+20h]
    vmovups xmm2, xmmword ptr [rdi]
  }
  Float4Clamp(v55, v54, v56, v57);
  __asm
  {
    vmovups xmm2, xmmword ptr [rbx]
    vsubps  xmm1, xmm13, xmmword ptr [rdi]
    vmovups xmm6, xmm0
    vmovups [rsp+158h+var_108], xmm0
    vmulps  xmm0, xmm2, xmmword ptr [rsi+30h]
    vmovups xmm2, xmmword ptr [rdi]
  }
  Float4Clamp(v64, v63, v65, v66);
  __asm
  {
    vmovups xmm5, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm3, xmm5, xmm6
    vandnps xmm2, xmm5, xmm15
    vandnps xmm1, xmm5, xmm14
    vmaxps  xmm4, xmm1, xmm2
    vandnps xmm2, xmm5, xmm0
    vmaxps  xmm1, xmm3, xmm2
    vmaxps  xmm4, xmm4, xmm1
    vmovups [rsp+158h+var_F8], xmm0
    vshufps xmm2, xmm4, xmm4, 0B1h ; '±'
    vmaxps  xmm3, xmm4, xmm2
    vshufps xmm1, xmm3, xmm3, 0Fh
    vmaxps  xmm0, xmm3, xmm1
    vmulps  xmm6, xmm0, xmm0
    vmovups [rsp+158h+var_118], xmm0
    vsubps  xmm0, xmm6, xmm6
    vcmpneqps xmm1, xmm0, xmm13
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 411, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vSampleSquare ))", (const char *)&queryFormat, "Float4IsFinite( vSampleSquare )") )
    __debugbreak();
  __asm
  {
    vsubps  xmm6, xmm6, xmmword ptr [rbp+0]
    vsubps  xmm0, xmm6, xmm6
    vcmpneqps xmm1, xmm0, xmm13
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 413, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vRmsDelta ))", (const char *)&queryFormat, "Float4IsFinite( vRmsDelta )") )
    __debugbreak();
  __asm
  {
    vmulps  xmm0, xmm6, xmmword ptr [rax]
    vaddps  xmm7, xmm0, xmmword ptr [rbp+0]
    vsubps  xmm1, xmm7, xmm7
    vmulps  xmm0, xmm6, xmmword ptr [rax]
    vaddps  xmm6, xmm0, xmmword ptr [rbp+0]
    vcmpneqps xmm0, xmm1, xmm13
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 416, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vFastRmsSquare ))", (const char *)&queryFormat, "Float4IsFinite( vFastRmsSquare )") )
    __debugbreak();
  __asm
  {
    vsubps  xmm0, xmm6, xmm6
    vcmpneqps xmm1, xmm0, xmm13
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 417, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vSlowRmsSquare ))", (const char *)&queryFormat, "Float4IsFinite( vSlowRmsSquare )") )
    __debugbreak();
  __asm
  {
    vmaxps  xmm0, xmm7, xmm6
    vmovups xmmword ptr [rbp+0], xmm0
    vsubps  xmm0, xmm0, xmm0
    vcmpneqps xmm1, xmm0, xmm13
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 420, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vCurrentRmsSquare ))", (const char *)&queryFormat, "Float4IsFinite( vCurrentRmsSquare )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vsqrtss xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vmulps  xmm0, xmm0, xmmword ptr [rax]
    vsubps  xmm3, xmm0, xmmword ptr [r12]
    vaddps  xmm0, xmm3, xmm3
    vmovups xmmword ptr [r13+0], xmm0
    vmovups xmm2, xmmword ptr [r12]
  }
  Float4Clamp(v68, v67, v69, v70);
  _RAX = vReleaseRateMax;
  _RCX = vReleaseRateMin;
  __asm
  {
    vmovss  xmm6, cs:__real@3a800000
    vmovups xmmword ptr [r13+0], xmm0
    vmovups xmm9, xmmword ptr [rax]
    vmovups xmm11, xmmword ptr [rcx]
    vmovups xmm8, xmmword ptr [r15]
  }
  _RAX = uBufferIndex;
  __asm
  {
    vmovups xmm12, xmm0
    vmovups xmm0, [rsp+158h+var_118]
    vmovss  dword ptr [r14+rax*4+1000h], xmm0
  }
  _RAX = uBufferIndex & 0xFFFFFFF8;
  __asm
  {
    vmovups xmm0, xmmword ptr [r14+rax*4+1000h]
    vmaxps  xmm2, xmm0, xmmword ptr [r14+rax*4+1010h]
    vshufps xmm1, xmm2, xmm2, 0B1h ; '±'
    vmaxps  xmm3, xmm2, xmm1
    vshufps xmm0, xmm3, xmm3, 0Fh
    vmaxps  xmm1, xmm3, xmm0
  }
  _RAX >>= 3;
  __asm
  {
    vmovss  dword ptr [r14+rax*4+1100h], xmm1
    vmovups xmm4, xmmword ptr [r12]
    vmovups xmm0, xmmword ptr [r14+1100h]
    vmaxps  xmm2, xmm0, xmmword ptr [r14+1110h]
    vshufps xmm1, xmm2, xmm2, 0B1h ; '±'
    vmaxps  xmm3, xmm2, xmm1
    vshufps xmm0, xmm3, xmm3, 0Fh
    vmaxps  xmm1, xmm3, xmm0
    vdivss  xmm2, xmm4, xmm1
    vmovss  xmm1, dword ptr [r14+1230h]
    vminps  xmm5, xmm2, xmm4
  }
  _RAX = uBufferIndex & 0x1F;
  __asm
  {
    vaddps  xmm3, xmm1, xmm5
    vmulps  xmm0, xmm12, xmm12
    vmovss  xmm2, dword ptr [r14+rax*4+1130h]
    vsubps  xmm4, xmm3, xmm2
    vmovss  dword ptr [r14+1230h], xmm4
    vmovss  dword ptr [r14+rax*4+1130h], xmm5
    vmovss  xmm2, dword ptr [r14+rax*4+11B0h]
    vmovss  xmm1, dword ptr [r14+1234h]
    vaddps  xmm3, xmm1, xmm4
    vsubps  xmm7, xmm3, xmm2
    vmovss  dword ptr [r14+1234h], xmm7
    vmovss  dword ptr [r14+rax*4+11B0h], xmm4
    vsubps  xmm1, xmm9, xmm11
    vmulps  xmm1, xmm1, xmm0
    vaddps  xmm2, xmm1, xmm11
    vmulps  xmm3, xmm2, xmm8
    vmulps  xmm0, xmm3, xmmword ptr [rax]
    vaddps  xmm4, xmm0, xmmword ptr [r15]
    vmulps  xmm2, xmm6, xmm7
    vminps  xmm3, xmm4, xmm2
    vshufps xmm0, xmm3, xmm3, 0
    vmovups xmmword ptr [r15], xmm0
    vsubps  xmm0, xmm0, xmm0
    vcmpneqps xmm1, xmm0, xmm13
    vmovmskps eax, xmm1
  }
  if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 436, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vCurrentGain ))", (const char *)&queryFormat, "Float4IsFinite( vCurrentGain )") )
    __debugbreak();
  _RAX = vOutputGain;
  _RBX = (char *)_R14->m_delayBuffer[(unsigned __int64)uBufferIndex];
  __asm
  {
    vmovups xmm1, xmmword ptr [rax]
    vmulps  xmm2, xmm1, xmmword ptr [r15]
    vmulps  xmm0, xmm2, xmmword ptr [rbx]
    vmovups xmm1, [rsp+158h+var_108]
    vmovups xmmword ptr [rbx], xmm14
    vmovups xmmword ptr [rsi], xmm0
    vmulps  xmm0, xmm2, xmmword ptr [rbx+10h]
    vmovups xmmword ptr [rbx+10h], xmm15
    vmovups xmmword ptr [rsi+10h], xmm0
    vmulps  xmm0, xmm2, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovups xmm1, [rsp+158h+var_F8]
    vmovups xmmword ptr [rsi+20h], xmm0
    vmulps  xmm0, xmm2, xmmword ptr [rbx+30h]
    vmovups xmmword ptr [rbx+30h], xmm1
    vmovups xmmword ptr [rsi+30h], xmm0
  }
  _R11 = &v182;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
SD_DSP::PeakLimiter<16,64>::SetParams
==============
*/
void SD_DSP::PeakLimiter<16,64>::SetParams(SD_DSP::PeakLimiter<16,64> *this, const SD_DSP::PeakLimiterParams *params)
{
  __asm { vmovss  xmm3, cs:__real@447a0000 }
  this->m_inputGain = params->m_inputGain;
  this->m_outputGain = params->m_outputGain;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmaxss  xmm1, xmm0, cs:__real@3dcccccd
    vdivss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rcx+1248h], xmm0
    vmovss  xmm1, dword ptr [rdx+0Ch]
    vmaxss  xmm2, xmm1, cs:__real@3dcccccd
    vmovss  xmm1, dword ptr [rcx+1250h]
    vdivss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rcx+124Ch], xmm0
    vmovss  xmm0, dword ptr [rdx+10h]
    vucomiss xmm1, xmm0
    vmovaps [rsp+58h+var_38], xmm9
    vmovss  xmm9, dword ptr [rcx+1254h]
    vmovss  xmm0, dword ptr [rdx+14h]
    vucomiss xmm9, xmm0
    vmovaps xmm9, [rsp+58h+var_38]
  }
}

