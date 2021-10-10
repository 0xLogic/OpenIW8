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
  double v2; 

  v2 = 1.0 / this->m_sampleRate;
  _XMM0 = COERCE_UNSIGNED_INT64(1.0 - exp_0(this->m_rmsRiseFilterCutoff * -6.283185307179586 * v2));
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  *(double *)&_XMM0 = this->m_rmsFallFilterCutoff * -6.283185307179586 * v2;
  this->m_rmsRiseCoeff = *(float *)&_XMM1;
  _XMM0 = COERCE_UNSIGNED_INT64(1.0 - exp_0(*(double *)&_XMM0));
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_rmsFallCoeff = *(float *)&_XMM1;
}

/*
==============
SD_DSP::PeakLimiter<16,64>::Process
==============
*/
void SD_DSP::PeakLimiter<16,64>::Process(SD_DSP::PeakLimiter<16,64> *this, float *inout_pBuffer, unsigned int sampleCount)
{
  unsigned int uBufferIndex; 
  unsigned int v5; 
  unsigned int v6; 
  __m128 m_releaseRateMax_low; 
  __m128 m_storedReleaseScalar_low; 
  float v10; 
  float m_storedRmsSquare; 
  SD_DSP::PeakLimiter<16,64> *v14; 
  unsigned int v15; 
  __int64 v18; 
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

  __asm { vbroadcastss xmm3, dword ptr [rcx+1260h] }
  uBufferIndex = this->m_bufferIndex;
  v5 = 16 * sampleCount;
  v6 = 0;
  vInvSampleRate.v = (__m128)LODWORD(this->m_invSampleRate);
  vRmsRiseCoeff.v = (__m128)LODWORD(this->m_rmsRiseCoeff);
  vRmsFallCoeff.v = (__m128)LODWORD(this->m_rmsFallCoeff);
  vReleaseRateMin.v = (__m128)LODWORD(this->m_releaseRateMin);
  m_releaseRateMax_low = (__m128)LODWORD(this->m_releaseRateMax);
  vSqrt2.v = (__m128)_xmm;
  __asm { vbroadcastss xmm1, dword ptr [rcx+123Ch] }
  vReleaseRateMax.v = m_releaseRateMax_low;
  vOutputGain.v = _XMM1;
  m_storedReleaseScalar_low = (__m128)LODWORD(this->m_storedReleaseScalar);
  vSignalClampVal.v = (__m128)_xmm;
  v10 = m_storedReleaseScalar_low.m128_f32[0];
  vOne.v = (__m128)_xmm;
  __asm { vbroadcastss xmm0, dword ptr [rcx+1238h] }
  vCurrentReleaseScalar.v = m_storedReleaseScalar_low;
  m_storedRmsSquare = this->m_storedRmsSquare;
  vCurrentRmsSquare.v = (__m128)LODWORD(m_storedRmsSquare);
  v14 = this;
  vInputGain.v = _XMM0;
  vCurrentGain.v = _XMM3;
  v15 = 0;
  if ( 16 * sampleCount )
  {
    do
    {
      SD_DSP::PeakLimiter<16,64>::ProcessSingleChannelFrame(v14, &inout_pBuffer[v15], &vOne, &vSqrt2, &vInputGain, &vOutputGain, &vInvSampleRate, &vRmsRiseCoeff, &vRmsFallCoeff, &vReleaseRateMin, &vReleaseRateMax, &vSignalClampVal, &vCurrentGain, &vCurrentReleaseScalar, &vCurrentRmsSquare, uBufferIndex);
      v15 += 16;
      uBufferIndex = ((_BYTE)uBufferIndex + 1) & 0x3F;
    }
    while ( v15 < v5 );
    _XMM3.m128_i32[0] = vCurrentGain.v.m128_i32[0];
    v10 = vCurrentReleaseScalar.v.m128_f32[0];
    m_storedRmsSquare = vCurrentRmsSquare.v.m128_f32[0];
  }
  v14->m_currentGain = _XMM3.m128_f32[0];
  v14->m_storedReleaseScalar = v10;
  _XMM2 = 0i64;
  _XMM3 = 0i64;
  v14->m_storedRmsSquare = m_storedRmsSquare;
  v14->m_bufferIndex = uBufferIndex;
  do
  {
    v18 = (int)v6;
    v6 += 16;
    _XMM2 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_XMM2, *(__m128 *)&v14->m_gainBuffer0[v18]), *(__m128 *)&v14->m_gainBuffer0[v18 + 4]), *(__m128 *)&v14->m_gainBuffer0[v18 + 8]), *(__m128 *)&v14->m_gainBuffer0[v18 + 12]);
    _XMM3 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_XMM3, *(__m128 *)&v14->m_gainBuffer1[v18]), *(__m128 *)&v14->m_gainBuffer1[v18 + 4]), *(__m128 *)&v14->m_gainBuffer1[v18 + 8]), *(__m128 *)&v14->m_gainBuffer1[v18 + 12]);
  }
  while ( v6 < 0x20 );
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm3, xmm3
  }
  v14->m_gainBufferSum0 = *(float *)&_XMM1;
  __asm { vhaddps xmm1, xmm0, xmm0 }
  v14->m_gainBufferSum1 = *(float *)&_XMM1;
}

/*
==============
SD_DSP::PeakLimiter<16,64>::ProcessSingleChannelFrame
==============
*/
void SD_DSP::PeakLimiter<16,64>::ProcessSingleChannelFrame(SD_DSP::PeakLimiter<16,64> *this, float *inout_pBuffer, const float4 *vOne, const float4 *vSqrt2, const float4 *vInputGain, const float4 *vOutputGain, const float4 *vInvSampleRate, const float4 *vRmsRiseCoeff, const float4 *vRmsFallCoeff, const float4 *vReleaseRateMin, const float4 *vReleaseRateMax, const float4 *vSignalClampVal, float4 *vCurrentGain, float4 *vCurrentReleaseScalar, float4 *vCurrentRmsSquare, unsigned int uBufferIndex)
{
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  const float4 *v22; 
  float4 *v23; 
  const float4 *v24; 
  const float4 *v25; 
  __m128 v26; 
  __m128 v27; 
  const float4 *v28; 
  float4 *v29; 
  const float4 *v30; 
  const float4 *v31; 
  __m128 v32; 
  const float4 *v33; 
  float4 *v34; 
  const float4 *v35; 
  const float4 *v36; 
  const float4 *v37; 
  float4 *v38; 
  const float4 *v39; 
  const float4 *v40; 
  __m128 v51; 
  __m128 v55; 
  __m128 v61; 
  __m128 v; 
  __m128 v72; 
  float4 v73; 
  __m128 v74; 
  __m128 v75; 
  __m128 v76; 
  __m128 v77; 
  unsigned __int64 v78; 
  __m128 v88; 
  __m128 v91; 
  __m128 v92; 
  float4 v95; 
  __m128 *v98; 
  __m128 v99; 
  __m128 v100; 
  __m128 v101; 
  __m128 v102; 
  __m128 v103; 
  float v105; 
  __m128 v106; 
  __m128 v107; 

  v19 = _mm128_mul_ps(vInputGain->v, *(__m128 *)inout_pBuffer);
  _mm128_sub_ps((__m128)0i64, vSignalClampVal->v);
  Float4Clamp((float4 *)this, (const float4 *)inout_pBuffer, vOne, vSqrt2);
  _mm128_sub_ps((__m128)0i64, vSignalClampVal->v);
  v20 = v19;
  v21 = _mm128_mul_ps(vInputGain->v, *(__m128 *)(inout_pBuffer + 4));
  Float4Clamp(v23, v22, v24, v25);
  _mm128_sub_ps((__m128)0i64, vSignalClampVal->v);
  v26 = v21;
  v27 = _mm128_mul_ps(vInputGain->v, *(__m128 *)(inout_pBuffer + 8));
  Float4Clamp(v29, v28, v30, v31);
  _mm128_sub_ps((__m128)0i64, vSignalClampVal->v);
  v106 = v27;
  v32 = _mm128_mul_ps(vInputGain->v, *(__m128 *)(inout_pBuffer + 12));
  Float4Clamp(v34, v33, v35, v36);
  _XMM5 = g_negativeZero.v;
  __asm
  {
    vandnps xmm3, xmm5, xmm6
    vandnps xmm2, xmm5, xmm15
    vandnps xmm1, xmm5, xmm14
    vmaxps  xmm4, xmm1, xmm2
    vandnps xmm2, xmm5, xmm0
    vmaxps  xmm1, xmm3, xmm2
    vmaxps  xmm4, xmm4, xmm1
  }
  v107 = v32;
  _mm_shuffle_ps(_XMM4, _XMM4, 177);
  __asm { vmaxps  xmm3, xmm4, xmm2 }
  _mm_shuffle_ps(_XMM3, _XMM3, 15);
  __asm { vmaxps  xmm0, xmm3, xmm1 }
  v51 = _mm128_mul_ps(_XMM0, _XMM0);
  v105 = _XMM0.m128_f32[0];
  _XMM0 = _mm128_sub_ps(v51, v51);
  __asm
  {
    vcmpneqps xmm1, xmm0, xmm13
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 411, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vSampleSquare ))", (const char *)&queryFormat, "Float4IsFinite( vSampleSquare )") )
    __debugbreak();
  v55 = _mm128_sub_ps(v51, vCurrentRmsSquare->v);
  _XMM0 = _mm128_sub_ps(v55, v55);
  __asm
  {
    vcmpneqps xmm1, xmm0, xmm13
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 413, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vRmsDelta ))", (const char *)&queryFormat, "Float4IsFinite( vRmsDelta )") )
    __debugbreak();
  _XMM7 = _mm128_add_ps(_mm128_mul_ps(v55, vRmsRiseCoeff->v), vCurrentRmsSquare->v);
  _XMM1 = _mm128_sub_ps(_XMM7, _XMM7);
  v61 = _mm128_add_ps(_mm128_mul_ps(v55, vRmsFallCoeff->v), vCurrentRmsSquare->v);
  __asm
  {
    vcmpneqps xmm0, xmm1, xmm13
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 416, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vFastRmsSquare ))", (const char *)&queryFormat, "Float4IsFinite( vFastRmsSquare )") )
    __debugbreak();
  _XMM0 = _mm128_sub_ps(v61, v61);
  __asm
  {
    vcmpneqps xmm1, xmm0, xmm13
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 417, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vSlowRmsSquare ))", (const char *)&queryFormat, "Float4IsFinite( vSlowRmsSquare )") )
    __debugbreak();
  __asm { vmaxps  xmm0, xmm7, xmm6 }
  *vCurrentRmsSquare = (float4)_XMM0.v;
  _XMM0 = _mm128_sub_ps(_XMM0.v, _XMM0.v);
  __asm
  {
    vcmpneqps xmm1, xmm0, xmm13
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 420, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vCurrentRmsSquare ))", (const char *)&queryFormat, "Float4IsFinite( vCurrentRmsSquare )") )
    __debugbreak();
  v = vCurrentRmsSquare->v;
  v.m128_f32[0] = fsqrt(COERCE_FLOAT(*vCurrentRmsSquare));
  v72 = _mm128_sub_ps(_mm128_mul_ps(v, vSqrt2->v), vOne->v);
  v73.v = _mm128_add_ps(v72, v72);
  *vCurrentReleaseScalar = (float4)v73.v;
  Float4Clamp(v38, v37, v39, v40);
  *vCurrentReleaseScalar = (float4)v73.v;
  v74 = vReleaseRateMax->v;
  v75 = vReleaseRateMin->v;
  v76 = vCurrentGain->v;
  v77 = v73.v;
  this->m_maxBuffer[uBufferIndex] = v105;
  v78 = uBufferIndex & 0xFFFFFFF8;
  _XMM0 = *(_OWORD *)&this->m_maxBuffer[v78];
  __asm { vmaxps  xmm2, xmm0, xmmword ptr [r14+rax*4+1010h] }
  _mm_shuffle_ps(_XMM2, _XMM2, 177);
  __asm { vmaxps  xmm3, xmm2, xmm1 }
  _mm_shuffle_ps(_XMM3, _XMM3, 15);
  __asm { vmaxps  xmm1, xmm3, xmm0 }
  this->m_maxTreeBuffer[v78 >> 3] = *(float *)&_XMM1;
  _XMM0 = *(_OWORD *)this->m_maxTreeBuffer;
  __asm { vmaxps  xmm2, xmm0, xmmword ptr [r14+1110h] }
  _mm_shuffle_ps(_XMM2, _XMM2, 177);
  __asm { vmaxps  xmm3, xmm2, xmm1 }
  _mm_shuffle_ps(_XMM3, _XMM3, 15);
  __asm { vmaxps  xmm1, xmm3, xmm0 }
  v88 = vOne->v;
  v88.m128_f32[0] = COERCE_FLOAT(*vOne) / *(float *)&_XMM1;
  _XMM2 = v88;
  __asm { vminps  xmm5, xmm2, xmm4 }
  _RAX = uBufferIndex & 0x1F;
  v91 = _mm128_sub_ps(_mm128_add_ps((__m128)LODWORD(this->m_gainBufferSum0), _XMM5), (__m128)LODWORD(this->m_gainBuffer0[_RAX]));
  this->m_gainBufferSum0 = v91.m128_f32[0];
  this->m_gainBuffer0[_RAX] = _XMM5.m128_f32[0];
  v92 = _mm128_sub_ps(_mm128_add_ps((__m128)LODWORD(this->m_gainBufferSum1), v91), (__m128)LODWORD(this->m_gainBuffer1[_RAX]));
  this->m_gainBufferSum1 = v92.m128_f32[0];
  this->m_gainBuffer1[_RAX] = v91.m128_f32[0];
  _XMM4 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v74, v75), _mm128_mul_ps(v77, v77)), v75), v76), vInvSampleRate->v), vCurrentGain->v);
  _mm128_mul_ps((__m128)LODWORD(FLOAT_0_0009765625), v92);
  __asm { vminps  xmm3, xmm4, xmm2 }
  v95.v = _mm_shuffle_ps(_XMM3, _XMM3, 0);
  *vCurrentGain = (float4)v95.v;
  _XMM0 = _mm128_sub_ps(v95.v, v95.v);
  __asm
  {
    vcmpneqps xmm1, xmm0, xmm13
    vmovmskps eax, xmm1
  }
  if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_peak_limiter.h", 436, ASSERT_TYPE_ASSERT, "(Float4IsFinite( vCurrentGain ))", (const char *)&queryFormat, "Float4IsFinite( vCurrentGain )") )
    __debugbreak();
  v98 = (__m128 *)this->m_delayBuffer[(unsigned __int64)uBufferIndex];
  v99 = _mm128_mul_ps(vOutputGain->v, vCurrentGain->v);
  v100 = _mm128_mul_ps(v99, *v98);
  *v98 = v20;
  *(__m128 *)inout_pBuffer = v100;
  v101 = _mm128_mul_ps(v99, v98[1]);
  v98[1] = v26;
  *((__m128 *)inout_pBuffer + 1) = v101;
  v102 = _mm128_mul_ps(v99, v98[2]);
  v98[2] = v106;
  *((__m128 *)inout_pBuffer + 2) = v102;
  v103 = _mm128_mul_ps(v99, v98[3]);
  v98[3] = v107;
  *((__m128 *)inout_pBuffer + 3) = v103;
}

/*
==============
SD_DSP::PeakLimiter<16,64>::SetParams
==============
*/
void SD_DSP::PeakLimiter<16,64>::SetParams(SD_DSP::PeakLimiter<16,64> *this, const SD_DSP::PeakLimiterParams *params)
{
  char v3; 
  float m_rmsRiseFilterCutoff; 
  float v9; 
  float m_rmsFallFilterCutoff; 
  float v11; 
  double v12; 

  this->m_inputGain = params->m_inputGain;
  this->m_outputGain = params->m_outputGain;
  v3 = 0;
  _XMM0 = LODWORD(params->m_releaseTimeMin);
  __asm { vmaxss  xmm1, xmm0, cs:__real@3dcccccd }
  this->m_releaseRateMin = 1000.0 / *(float *)&_XMM1;
  _XMM1 = LODWORD(params->m_releaseTimeMax);
  __asm { vmaxss  xmm2, xmm1, cs:__real@3dcccccd }
  m_rmsRiseFilterCutoff = this->m_rmsRiseFilterCutoff;
  this->m_releaseRateMax = 1000.0 / *(float *)&_XMM2;
  v9 = params->m_rmsRiseFilterCutoff;
  if ( m_rmsRiseFilterCutoff != v9 )
  {
    this->m_rmsRiseFilterCutoff = v9;
    v3 = 1;
    m_rmsRiseFilterCutoff = v9;
  }
  m_rmsFallFilterCutoff = this->m_rmsFallFilterCutoff;
  v11 = params->m_rmsFallFilterCutoff;
  if ( m_rmsFallFilterCutoff == v11 )
  {
    if ( !v3 )
      return;
  }
  else
  {
    this->m_rmsFallFilterCutoff = v11;
    m_rmsFallFilterCutoff = v11;
  }
  v12 = 1.0 / this->m_sampleRate;
  _XMM0 = COERCE_UNSIGNED_INT64(1.0 - exp_0(m_rmsRiseFilterCutoff * -6.283185307179586 * v12));
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_rmsRiseCoeff = *(float *)&_XMM1;
  _XMM0 = COERCE_UNSIGNED_INT64(1.0 - exp_0(m_rmsFallFilterCutoff * -6.283185307179586 * v12));
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_rmsFallCoeff = *(float *)&_XMM1;
}

