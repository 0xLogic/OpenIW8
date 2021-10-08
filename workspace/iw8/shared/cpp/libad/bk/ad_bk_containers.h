/*
==============
AD_InterleavedFrameInterpolator<16>::GetFramesForSrc
==============
*/

unsigned int __fastcall AD_InterleavedFrameInterpolator<16>::GetFramesForSrc(AD_InterleavedFrameInterpolator<16> *this, const unsigned int numSrcFrames, const unsigned int srcFrameRate, const unsigned int destFrameRate)
{
  return ?GetFramesForSrc@?$AD_InterleavedFrameInterpolator@$0BA@@@QEBAIIII@Z(this, numSrcFrames, srcFrameRate, destFrameRate);
}

/*
==============
AD_StaticSampleRingBuffer<32768,32>::~AD_StaticSampleRingBuffer<32768,32>
==============
*/

void __fastcall AD_StaticSampleRingBuffer<32768,32>::~AD_StaticSampleRingBuffer<32768,32>(AD_StaticSampleRingBuffer<32768,32> *this)
{
  ??1?$AD_StaticSampleRingBuffer@$0IAAA@$0CA@@@UEAA@XZ(this);
}

/*
==============
AD_StaticSampleRingBuffer<32768,32>::Skip
==============
*/

void __fastcall AD_StaticSampleRingBuffer<32768,32>::Skip(AD_StaticSampleRingBuffer<32768,32> *this, const unsigned int numSamples)
{
  ?Skip@?$AD_StaticSampleRingBuffer@$0IAAA@$0CA@@@QEAAXI@Z(this, numSamples);
}

/*
==============
AD_StaticSampleRingBuffer<32768,32>::Init
==============
*/

void __fastcall AD_StaticSampleRingBuffer<32768,32>::Init(AD_StaticSampleRingBuffer<32768,32> *this)
{
  ?Init@?$AD_StaticSampleRingBuffer@$0IAAA@$0CA@@@UEAAXXZ(this);
}

/*
==============
AD_InterleavedFrameInterpolator<16>::ResampleFrames
==============
*/

unsigned int __fastcall AD_InterleavedFrameInterpolator<16>::ResampleFrames(AD_InterleavedFrameInterpolator<16> *this, const unsigned int numChannels, const float *src, const unsigned int numSrcFrames, float *dest, const unsigned int numDestFrames, const unsigned int srcFrameRate, const unsigned int destFrameRate)
{
  return ?ResampleFrames@?$AD_InterleavedFrameInterpolator@$0BA@@@QEAAIIPEIBMIPEIAMIII@Z(this, numChannels, src, numSrcFrames, dest, numDestFrames, srcFrameRate, destFrameRate);
}

/*
==============
AD_StaticSampleRingBuffer<32768,32>::Read
==============
*/

void __fastcall AD_StaticSampleRingBuffer<32768,32>::Read(AD_StaticSampleRingBuffer<32768,32> *this, float *destData, const unsigned int numSamples)
{
  ?Read@?$AD_StaticSampleRingBuffer@$0IAAA@$0CA@@@QEAAXPEIAMI@Z(this, destData, numSamples);
}

/*
==============
AD_StaticSampleRingBuffer<32768,32>::Write
==============
*/

void __fastcall AD_StaticSampleRingBuffer<32768,32>::Write(AD_StaticSampleRingBuffer<32768,32> *this, const float *srcData, const unsigned int numSamples)
{
  ?Write@?$AD_StaticSampleRingBuffer@$0IAAA@$0CA@@@QEAAXPEIBMI@Z(this, srcData, numSamples);
}

/*
==============
AD_StaticSampleBuffer<32768,32>::Init
==============
*/

void __fastcall AD_StaticSampleBuffer<32768,32>::Init(AD_StaticSampleBuffer<32768,32> *this, const unsigned int s, const unsigned int alignment)
{
  ?Init@?$AD_StaticSampleBuffer@$0IAAA@$0CA@@@QEAAXII@Z(this, s, alignment);
}

/*
==============
AD_InterleavedFrameInterpolator<16>::Reset
==============
*/

void __fastcall AD_InterleavedFrameInterpolator<16>::Reset(AD_InterleavedFrameInterpolator<16> *this)
{
  ?Reset@?$AD_InterleavedFrameInterpolator@$0BA@@@QEAAXXZ(this);
}

/*
==============
AD_InterleavedFrameInterpolator<16>::GetFramesForDest
==============
*/

unsigned int __fastcall AD_InterleavedFrameInterpolator<16>::GetFramesForDest(AD_InterleavedFrameInterpolator<16> *this, const unsigned int srcFrameRate, const unsigned int destFrameRate, const unsigned int numDestFrames)
{
  return ?GetFramesForDest@?$AD_InterleavedFrameInterpolator@$0BA@@@QEBAIIII@Z(this, srcFrameRate, destFrameRate, numDestFrames);
}

/*
==============
AD_StaticSampleRingBuffer<32768,32>::~AD_StaticSampleRingBuffer<32768,32>
==============
*/
void AD_StaticSampleRingBuffer<32768,32>::~AD_StaticSampleRingBuffer<32768,32>(AD_StaticSampleRingBuffer<32768,32> *this)
{
  this->__vftable = (AD_StaticSampleRingBuffer<32768,32>_vtbl *)&AD_StaticRingBuffer<131072,32>::`vftable';
}

/*
==============
AD_StaticSampleRingBuffer<32768,32>::Init
==============
*/
void AD_StaticSampleRingBuffer<32768,32>::Init(AD_StaticSampleRingBuffer<32768,32> *this)
{
  *(_QWORD *)&this->m_readPos = 0i64;
  AD_InterlockedExchange(&this->m_dataAvail, 0);
  memset_0(this->m_buffer, 0, this->m_size);
}

/*
==============
AD_InterleavedFrameInterpolator<16>::Reset
==============
*/
void AD_InterleavedFrameInterpolator<16>::Reset(AD_InterleavedFrameInterpolator<16> *this)
{
  *(_QWORD *)&this->interpT = 0i64;
  *(_QWORD *)&this->resampleFilterSrcFreq = 0i64;
  *(_QWORD *)this->histB = 0i64;
  *(_QWORD *)&this->resampleFilterState[0].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[0].y1 = 0i64;
  *(_QWORD *)&this->histA[1] = 0i64;
  *(_QWORD *)&this->resampleFilterState[1].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[1].y1 = 0i64;
  *(_QWORD *)&this->histB[2] = 0i64;
  *(_QWORD *)&this->resampleFilterState[2].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[2].y1 = 0i64;
  *(_QWORD *)&this->histA[3] = 0i64;
  *(_QWORD *)&this->resampleFilterState[3].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[3].y1 = 0i64;
  *(_QWORD *)&this->histB[4] = 0i64;
  *(_QWORD *)&this->resampleFilterState[4].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[4].y1 = 0i64;
  *(_QWORD *)&this->histA[5] = 0i64;
  *(_QWORD *)&this->resampleFilterState[5].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[5].y1 = 0i64;
  *(_QWORD *)&this->histB[6] = 0i64;
  *(_QWORD *)&this->resampleFilterState[6].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[6].y1 = 0i64;
  *(_QWORD *)&this->histA[7] = 0i64;
  *(_QWORD *)&this->resampleFilterState[7].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[7].y1 = 0i64;
  *(_QWORD *)&this->histB[8] = 0i64;
  *(_QWORD *)&this->resampleFilterState[8].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[8].y1 = 0i64;
  *(_QWORD *)&this->histA[9] = 0i64;
  *(_QWORD *)&this->resampleFilterState[9].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[9].y1 = 0i64;
  *(_QWORD *)&this->histB[10] = 0i64;
  *(_QWORD *)&this->resampleFilterState[10].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[10].y1 = 0i64;
  *(_QWORD *)&this->histA[11] = 0i64;
  *(_QWORD *)&this->resampleFilterState[11].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[11].y1 = 0i64;
  *(_QWORD *)&this->histB[12] = 0i64;
  *(_QWORD *)&this->resampleFilterState[12].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[12].y1 = 0i64;
  *(_QWORD *)&this->histA[13] = 0i64;
  *(_QWORD *)&this->resampleFilterState[13].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[13].y1 = 0i64;
  *(_QWORD *)&this->histB[14] = 0i64;
  *(_QWORD *)&this->resampleFilterState[14].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[14].y1 = 0i64;
  this->histA[15] = 0.0;
  *(_QWORD *)&this->resampleFilterState[15].x1 = 0i64;
  *(_QWORD *)&this->resampleFilterState[15].y1 = 0i64;
}

/*
==============
AD_InterleavedFrameInterpolator<16>::GetFramesForDest
==============
*/
__int64 AD_InterleavedFrameInterpolator<16>::GetFramesForDest(AD_InterleavedFrameInterpolator<16> *this, const unsigned int srcFrameRate, const unsigned int destFrameRate, const unsigned int numDestFrames)
{
  unsigned int v9; 
  __int64 v10; 
  __int64 result; 
  bool v21; 
  __int64 v22; 
  bool v23; 
  bool v24; 
  __int64 v25; 
  unsigned int v27; 

  v9 = 0;
  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  v10 = numDestFrames;
  __asm { vmovss  xmm6, dword ptr [rcx] }
  if ( srcFrameRate == destFrameRate )
  {
    result = numDestFrames;
    __asm { vmovaps xmm6, [rsp+68h+var_18] }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovaps [rsp+68h+var_38], xmm8
      vdivss  xmm8, xmm1, xmm0
      vcomiss xmm8, xmm7
    }
    if ( srcFrameRate < destFrameRate )
    {
      __asm { vcomiss xmm6, xmm7 }
      if ( srcFrameRate > destFrameRate && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 385, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
        __debugbreak();
      v23 = 0;
      v24 = (_DWORD)v10 == 0;
      if ( (_DWORD)v10 )
      {
        v25 = v10;
        do
        {
          __asm
          {
            vaddss  xmm2, xmm8, xmm6
            vcomiss xmm2, xmm7
          }
          v27 = v9 + 1;
          if ( v23 )
            v27 = v9;
          v9 = v27;
          __asm
          {
            vsubss  xmm1, xmm2, xmm7
            vcmpless xmm0, xmm7, xmm2
            vblendvps xmm1, xmm2, xmm1, xmm0
            vmovaps xmm6, xmm1
            vmovss  [rsp+68h+arg_8], xmm1
          }
          v23 = v25-- == 0;
          v24 = v23 || v25 == 0;
        }
        while ( v25 );
      }
      __asm { vcomiss xmm6, xmm7 }
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 398, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
        __debugbreak();
    }
    else
    {
      __asm
      {
        vcomiss xmm6, xmm7
        vmovss  xmm0, cs:__real@bf800000
      }
      while ( srcFrameRate >= destFrameRate )
      {
        __asm { vaddss  xmm6, xmm6, xmm0 }
        ++v9;
        __asm { vcomiss xmm6, xmm7 }
      }
      v21 = 0;
      if ( numDestFrames )
      {
        v22 = numDestFrames;
        do
        {
          __asm
          {
            vaddss  xmm6, xmm6, xmm8
            vcomiss xmm6, xmm7
          }
          while ( !v21 )
          {
            __asm { vaddss  xmm6, xmm6, xmm0 }
            ++v9;
            __asm { vcomiss xmm6, xmm7 }
          }
          v21 = v22-- == 0;
        }
        while ( v22 );
      }
    }
    __asm { vmovaps xmm8, [rsp+68h+var_38] }
    result = v9;
    __asm
    {
      vmovaps xmm7, [rsp+68h+var_28]
      vmovaps xmm6, [rsp+68h+var_18]
    }
  }
  return result;
}

/*
==============
AD_InterleavedFrameInterpolator<16>::GetFramesForSrc
==============
*/
__int64 AD_InterleavedFrameInterpolator<16>::GetFramesForSrc(AD_InterleavedFrameInterpolator<16> *this, const unsigned int numSrcFrames, const unsigned int srcFrameRate, const unsigned int destFrameRate)
{
  unsigned int v10; 
  unsigned int v12; 
  __int64 result; 
  bool v22; 
  bool i; 
  bool v24; 
  bool v25; 

  v10 = 0;
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  v12 = 0;
  __asm { vmovss  xmm6, dword ptr [rcx] }
  if ( srcFrameRate == destFrameRate )
  {
    result = numSrcFrames;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovaps [rsp+78h+var_38], xmm8
      vdivss  xmm8, xmm1, xmm0
      vcomiss xmm8, xmm7
    }
    if ( srcFrameRate < destFrameRate )
    {
      __asm { vcomiss xmm6, xmm7 }
      if ( srcFrameRate > destFrameRate && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 328, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
        __debugbreak();
      v24 = 0;
      v25 = numSrcFrames == 0;
      if ( numSrcFrames )
      {
        __asm
        {
          vmovaps [rsp+78h+var_48], xmm9
          vmovss  xmm9, cs:__real@bf800000
        }
        do
        {
          __asm { vaddss  xmm6, xmm6, xmm8 }
          ++v10;
          __asm { vcomiss xmm6, xmm7 }
          if ( !v24 )
          {
            if ( v12 >= numSrcFrames && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 337, ASSERT_TYPE_ASSERT, "incomingFramesConsumed < numSrcFrames", "incomingFramesConsumed < numSrcFrames") )
              __debugbreak();
            __asm { vaddss  xmm6, xmm6, xmm9 }
            ++v12;
          }
          v24 = v12 < numSrcFrames;
          v25 = v12 <= numSrcFrames;
        }
        while ( v12 < numSrcFrames );
        __asm { vmovaps xmm9, [rsp+78h+var_48] }
      }
      __asm { vcomiss xmm6, xmm7 }
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 343, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
        __debugbreak();
    }
    else
    {
      __asm
      {
        vcomiss xmm6, xmm7
        vmovss  xmm0, cs:__real@bf800000
      }
      if ( srcFrameRate < destFrameRate )
      {
LABEL_7:
        for ( i = v12 < numSrcFrames; v12 < numSrcFrames; i = v12 < numSrcFrames )
        {
          __asm { vaddss  xmm6, xmm6, xmm8 }
          ++v10;
          __asm { vcomiss xmm6, xmm7 }
          while ( !i )
          {
            __asm { vaddss  xmm6, xmm6, xmm0 }
            ++v12;
            __asm { vcomiss xmm6, xmm7 }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v22 = v12 < numSrcFrames;
          if ( v12 >= numSrcFrames )
            break;
          __asm { vaddss  xmm6, xmm6, xmm0 }
          ++v12;
          __asm { vcomiss xmm6, xmm7 }
          if ( v22 )
            goto LABEL_7;
        }
      }
    }
    __asm { vmovaps xmm8, [rsp+78h+var_38] }
    result = v10;
    __asm { vmovaps xmm7, [rsp+78h+var_28] }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
}

/*
==============
AD_StaticSampleRingBuffer<32768,32>::Read
==============
*/
void AD_StaticSampleRingBuffer<32768,32>::Read(AD_StaticSampleRingBuffer<32768,32> *this, float *destData, const unsigned int numSamples)
{
  unsigned int v3; 
  __int64 m_readPos; 
  unsigned int m_size; 
  char *v8; 
  unsigned int v9; 

  v3 = 4 * numSamples;
  if ( !this->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 431, ASSERT_TYPE_ASSERT, "BufferSize() > 0", "BufferSize() > 0") )
    __debugbreak();
  if ( !destData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 450, ASSERT_TYPE_ASSERT, "destData", "destData") )
    __debugbreak();
  if ( this->m_dataAvail < v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 451, ASSERT_TYPE_ASSERT, "BytesAvail() >= dataSize", "BytesAvail() >= dataSize") )
    __debugbreak();
  if ( v3 )
  {
    m_readPos = this->m_readPos;
    m_size = this->m_size;
    v8 = &this->m_buffer[m_readPos];
    if ( (unsigned int)m_readPos + v3 <= m_size )
    {
      memcpy_0(destData, v8, v3);
    }
    else
    {
      v9 = m_size - m_readPos;
      memcpy_0(destData, v8, v9);
      memcpy_0((char *)destData + v9, this->m_buffer, v3 - v9);
    }
  }
  this->m_readPos = (v3 + this->m_readPos) % this->m_size;
  AD_InterlockedSubtract(&this->m_dataAvail, v3);
}

/*
==============
AD_InterleavedFrameInterpolator<16>::ResampleFrames
==============
*/
__int64 AD_InterleavedFrameInterpolator<16>::ResampleFrames(AD_InterleavedFrameInterpolator<16> *this, const unsigned int numChannels, const float *src, const unsigned int numSrcFrames, float *dest, const unsigned int numDestFrames, const unsigned int srcFrameRate, const unsigned int destFrameRate)
{
  float *v20; 
  unsigned int v21; 
  __int64 v23; 
  unsigned int v25; 
  __int64 result; 
  __int64 v38; 
  __int64 v39; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned __int64 v47; 
  float *p_x2; 
  unsigned int v49; 
  __int64 v50; 
  int v51; 
  bool v52; 
  bool v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  int v57; 
  unsigned int v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v68; 
  bool v84; 
  __int64 v85; 
  bool v86; 
  __int64 v88; 
  __int64 v89; 
  __int64 v95; 
  unsigned int v112; 
  char *v113; 
  unsigned int v114; 
  _DWORD *histB; 
  __int64 v116; 
  __int64 v117; 
  _DWORD *v118; 
  unsigned __int64 v128; 
  float *v129; 
  unsigned int v130; 
  __int64 v131; 
  int v132; 
  __int64 v133; 
  __int64 v134; 
  __int64 v135; 
  int v136; 
  float fmt; 
  float *v139; 
  __int64 v140; 
  __int64 v141; 
  __int64 v146; 
  __int64 v147; 
  __int64 v149; 
  __int64 v150; 
  __int64 v151[9]; 
  char v152[192]; 

  __asm { vmovaps [rsp+260h+var_80], xmm9 }
  v20 = dest;
  v21 = numSrcFrames;
  v23 = numChannels;
  _R13 = this;
  v139 = dest;
  v151[0] = (__int64)this;
  if ( numChannels > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 406, ASSERT_TYPE_ASSERT, "numChannels <= T_MAX_CHANNELS", "numChannels <= T_MAX_CHANNELS") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 407, ASSERT_TYPE_ASSERT, "src != nullptr", "src != nullptr") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 408, ASSERT_TYPE_ASSERT, "dest != nullptr", "dest != nullptr") )
    __debugbreak();
  LODWORD(v150) = 0;
  v25 = 0;
  __asm { vmovss  xmm9, dword ptr [r13+0] }
  if ( srcFrameRate == destFrameRate )
  {
    if ( numDestFrames != v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 416, ASSERT_TYPE_ASSERT, "numDestFrames == numSrcFrames", "numDestFrames == numSrcFrames") )
      __debugbreak();
    memcpy_0(dest, src, 4 * (unsigned int)v23 * v21);
    result = v21;
    goto LABEL_84;
  }
  __asm
  {
    vmovaps [rsp+260h+var_90], xmm10
    vmovss  xmm10, cs:__real@3f800000
    vmovaps [rsp+260h+var_B0], xmm12
    vmovaps [rsp+260h+var_C0], xmm13
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, rdx
    vcvtsi2ss xmm0, xmm0, rbx
    vdivss  xmm12, xmm1, xmm0
    vmovaps [rsp+260h+var_D0], xmm14
    vmovss  dword ptr [rsp+260h+var_208], xmm12
    vmovaps [rsp+260h+var_E0], xmm15
  }
  if ( destFrameRate != _R13->resampleFilterDestFreq || srcFrameRate != _R13->resampleFilterSrcFreq )
  {
    _R13->resampleFilterSrcFreq = srcFrameRate;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm12, xmm10
    }
    _R13->resampleFilterDestFreq = destFrameRate;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm2, xmm0, cs:__real@3f000000; freqIn
      vmovaps xmm3, xmm10; qIn
      vmovss  dword ptr [rsp+260h+fmt], xmm10
    }
    AD_CalcBiquadCoefficientsAtRate(&_R13->resampleFilterCoeffs, (const AD_EQType)0, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, destFrameRate);
    if ( (_DWORD)v23 )
    {
      v38 = 0i64;
      v39 = v23;
      do
      {
        AD_ResetBiquadState(&_R13->resampleFilterState[v38++]);
        --v39;
      }
      while ( v39 );
      v20 = dest;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r13+98h]
    vmovss  xmm13, dword ptr [r13+8Ch]
    vmovss  xmm14, dword ptr [r13+90h]
    vmovss  xmm15, dword ptr [r13+94h]
  }
  v44 = 0;
  v45 = 0;
  __asm
  {
    vmovss  [rsp+260h+var_220], xmm0
    vmovss  xmm0, dword ptr [r13+9Ch]
    vmovss  [rsp+260h+var_21C], xmm0
  }
  if ( (unsigned int)v23 >= 4 )
  {
    v47 = 0i64;
    p_x2 = &_R13->resampleFilterState[0].x2;
    v49 = ((unsigned int)(v23 - 4) >> 2) + 1;
    v50 = v49;
    v45 = 4 * v49;
    do
    {
      v51 = *((_DWORD *)p_x2 - 1);
      p_x2 += 16;
      LODWORD(v151[v47 / 8 + 1]) = v51;
      v47 += 16i64;
      *(float *)&v151[v47 / 8 + 7] = *(p_x2 - 16);
      *(float *)&v152[v47 + 48] = *(p_x2 - 15);
      *(float *)&v152[v47 + 112] = *(p_x2 - 14);
      *(float *)((char *)&v150 + v47 + 4) = *(p_x2 - 13);
      *((float *)&v151[v47 / 8 + 7] + 1) = *(p_x2 - 12);
      *(float *)&v152[v47 + 52] = *(p_x2 - 11);
      *(float *)&v152[v47 + 116] = *(p_x2 - 10);
      *(float *)&v151[v47 / 8] = *(p_x2 - 9);
      *(float *)&v151[v47 / 8 + 8] = *(p_x2 - 8);
      *(float *)&v152[v47 + 56] = *(p_x2 - 7);
      *(float *)&v152[v47 + 120] = *(p_x2 - 6);
      *((float *)&v151[v47 / 8] + 1) = *(p_x2 - 5);
      *((float *)&v151[v47 / 8 + 8] + 1) = *(p_x2 - 4);
      *(float *)&v152[v47 + 60] = *(p_x2 - 3);
      *(float *)&v152[v47 + 124] = *(p_x2 - 2);
      --v50;
    }
    while ( v50 );
  }
  v52 = v45 < (unsigned int)v23;
  v53 = v45 <= (unsigned int)v23;
  if ( v45 < (unsigned int)v23 )
  {
    v54 = (unsigned int)v23 - v45;
    v55 = (__int64)&_R13->resampleFilterState[v45].x2;
    v56 = 4i64 * v45;
    do
    {
      v57 = *(_DWORD *)(v55 - 4);
      v55 += 16i64;
      *(_DWORD *)((char *)&v151[1] + v56) = v57;
      v56 += 4i64;
      *(_DWORD *)((char *)&v151[8] + v56 + 4) = *(_DWORD *)(v55 - 16);
      *(_DWORD *)&v152[v56 + 60] = *(_DWORD *)(v55 - 12);
      *(_DWORD *)&v152[v56 + 124] = *(_DWORD *)(v55 - 8);
      v52 = v54-- == 0;
      v53 = v52 || v54 == 0;
    }
    while ( v54 );
  }
  __asm
  {
    vcomiss xmm12, xmm10
    vmovaps [rsp+260h+var_50], xmm6
    vmovaps [rsp+260h+var_60], xmm7
    vmovaps [rsp+260h+var_70], xmm8
    vmovaps [rsp+260h+var_A0], xmm11
  }
  if ( v52 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm12, xmm0
    }
    if ( v53 )
    {
      v84 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 498, ASSERT_TYPE_ASSERT, "ratio > 0.0f", "ratio > 0.0f");
      v53 = !v84;
      if ( v84 )
        __debugbreak();
    }
    __asm { vcomiss xmm9, xmm10 }
    if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 499, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
      __debugbreak();
    v85 = numDestFrames;
    v86 = numDestFrames == 0;
    if ( numDestFrames )
    {
      __asm { vmovss  xmm12, cs:__real@bf800000 }
      v88 = 4 * v23;
      v141 = numDestFrames;
      v147 = 4 * v23;
      v89 = v23;
      LODWORD(v150) = numDestFrames;
      do
      {
        if ( (_DWORD)v23 )
        {
          __asm { vmovss  xmm12, [rsp+260h+var_220] }
          _R13 = v139;
          __asm
          {
            vsubss  xmm11, xmm10, xmm9
            vmovss  xmm10, [rsp+260h+var_21C]
          }
          _RDI = 0i64;
          v95 = v89;
          do
          {
            __asm
            {
              vmovss  xmm6, [rsp+rdi+260h+var_1F0]
              vmovss  xmm7, [rbp+rdi+160h+var_170]
            }
            _RBX = &v152[_RDI];
            __asm
            {
              vmulss  xmm1, xmm11, dword ptr [r12+rbx+4]
              vmulss  xmm0, xmm9, dword ptr [r12+rbx+44h]
              vaddss  xmm8, xmm1, xmm0
              vmulss  xmm1, xmm6, xmm14
              vmulss  xmm0, xmm8, xmm13
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm15, dword ptr [rbx]
              vaddss  xmm2, xmm2, xmm1
              vmulss  xmm1, xmm10, [rbp+rdi+160h+var_130]
              vmulss  xmm0, xmm7, xmm12
              vsubss  xmm3, xmm2, xmm0
              vsubss  xmm0, xmm3, xmm1; in
            }
            *(double *)&_XMM0 = AD_ScrutinizeSample(*(const float *)&_XMM0);
            __asm
            {
              vmovss  [rbp+rdi+160h+var_170], xmm0
              vmovss  dword ptr [rdi+r13], xmm0
              vmovss  [rsp+rdi+260h+var_1F0], xmm8
              vmovss  [rbp+rdi+160h+var_130], xmm7
            }
            _RDI += 4i64;
            __asm { vmovss  dword ptr [rbx], xmm6 }
            --v95;
          }
          while ( v95 );
          __asm
          {
            vmovss  xmm10, cs:__real@3f800000
            vmovss  xmm12, cs:__real@bf800000
          }
          LODWORD(v23) = numChannels;
          _R13 = (AD_InterleavedFrameInterpolator<16> *)v151[0];
          v44 = 0;
          v20 = v139;
          v21 = numSrcFrames;
          v85 = v141;
          v88 = v147;
        }
        __asm { vaddss  xmm9, xmm9, dword ptr [rsp+260h+var_208] }
        v52 = __CFADD__(v88, v20);
        v20 = (float *)((char *)v20 + v88);
        __asm { vcomiss xmm9, xmm10 }
        v139 = v20;
        if ( !v52 )
        {
          if ( v25 >= v21 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 521, ASSERT_TYPE_ASSERT, "incomingFramesConsumed < numSrcFrames", "incomingFramesConsumed < numSrcFrames") )
              __debugbreak();
            v88 = v147;
          }
          ++v25;
          v112 = 0;
          __asm { vaddss  xmm9, xmm9, xmm12 }
          if ( (unsigned int)v23 >= 4 )
          {
            v113 = (char *)((char *)src - (char *)_R13);
            v114 = ((unsigned int)(v23 - 4) >> 2) + 1;
            histB = (_DWORD *)_R13->histB;
            v116 = v114;
            v112 = 4 * v114;
            do
            {
              *(histB - 16) = *histB;
              *histB = *(_DWORD *)((char *)histB + (_QWORD)v113 - 68);
              *(histB - 15) = histB[1];
              histB[1] = *(_DWORD *)((char *)histB + (_QWORD)v113 - 64);
              *(histB - 14) = histB[2];
              histB[2] = *(_DWORD *)((char *)histB + (_QWORD)v113 - 60);
              *(histB - 13) = histB[3];
              histB[3] = *(_DWORD *)((char *)histB + (_QWORD)v113 - 56);
              histB += 4;
              --v116;
            }
            while ( v116 );
          }
          if ( v112 < (unsigned int)v23 )
          {
            v117 = (unsigned int)v23 - v112;
            v118 = (_DWORD *)&_R13->histB[v112];
            do
            {
              *(v118 - 16) = *v118;
              *v118 = *(_DWORD *)((char *)v118 + (char *)src - (char *)_R13 - 68);
              ++v118;
              --v117;
            }
            while ( v117 );
          }
          v85 = v141;
          src = (const float *)((char *)src + v88);
        }
        v52 = v85-- == 0;
        v86 = v52 || v85 == 0;
        v89 = (unsigned int)v23;
        v141 = v85;
      }
      while ( v85 );
    }
    __asm { vcomiss xmm9, xmm10 }
    if ( !v86 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 534, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
      __debugbreak();
  }
  else
  {
    __asm
    {
      vcomiss xmm9, xmm10
      vmovss  xmm11, cs:__real@bf800000
    }
    do
    {
      if ( v25 >= v21 )
        break;
      ++v25;
      v52 = __CFADD__(4 * v23, src);
      src += v23;
      __asm
      {
        vaddss  xmm9, xmm9, xmm11
        vcomiss xmm9, xmm10
      }
    }
    while ( !v52 );
    v59 = numDestFrames;
    if ( !numDestFrames )
      goto LABEL_71;
    v60 = numDestFrames;
    v61 = 4 * v23;
    v62 = v23;
    v146 = 4 * v23;
    v149 = v23;
    v150 = numDestFrames;
    v140 = numDestFrames;
    do
    {
      if ( (_DWORD)v23 )
      {
        __asm
        {
          vmovss  xmm11, [rsp+260h+var_220]
          vmovss  xmm10, [rsp+260h+var_21C]
        }
        _R15 = v139;
        _RDI = 0i64;
        _R12 = (char *)src - v152;
        v68 = v62;
        do
        {
          __asm
          {
            vmovss  xmm6, [rsp+rdi+260h+var_1F0]
            vmovss  xmm7, [rbp+rdi+160h+var_170]
            vmulss  xmm1, xmm6, xmm14
          }
          _RBX = &v152[_RDI];
          __asm
          {
            vmovss  xmm8, dword ptr [r12+rbx]
            vmulss  xmm0, xmm13, xmm8
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm15, dword ptr [rbx]
            vaddss  xmm2, xmm2, xmm1
            vmulss  xmm1, xmm10, [rbp+rdi+160h+var_130]
            vmulss  xmm0, xmm7, xmm11
            vsubss  xmm3, xmm2, xmm0
            vsubss  xmm0, xmm3, xmm1; in
          }
          *(double *)&_XMM0 = AD_ScrutinizeSample(*(const float *)&_XMM0);
          __asm
          {
            vmovss  [rbp+rdi+160h+var_170], xmm0
            vmovss  dword ptr [rdi+r15], xmm0
            vmovss  [rsp+rdi+260h+var_1F0], xmm8
            vmovss  [rbp+rdi+160h+var_130], xmm7
          }
          _RDI += 4i64;
          __asm { vmovss  dword ptr [rbx], xmm6 }
          --v68;
        }
        while ( v68 );
        __asm
        {
          vmovss  xmm10, cs:__real@3f800000
          vmovss  xmm11, cs:__real@bf800000
        }
        LODWORD(v23) = numChannels;
        v44 = 0;
        v61 = v146;
        v20 = v139;
        v21 = numSrcFrames;
        v60 = v140;
        v62 = v149;
      }
      v52 = __CFADD__(v61, v20);
      v20 = (float *)((char *)v20 + v61);
      __asm
      {
        vaddss  xmm9, xmm9, xmm12
        vcomiss xmm9, xmm10
      }
      v139 = v20;
      while ( !v52 )
      {
        if ( v25 >= v21 )
          break;
        __asm { vaddss  xmm9, xmm9, xmm11 }
        ++v25;
        v52 = __CFADD__(v61, src);
        src = (const float *)((char *)src + v61);
        __asm { vcomiss xmm9, xmm10 }
      }
      v140 = --v60;
    }
    while ( v60 );
    _R13 = (AD_InterleavedFrameInterpolator<16> *)v151[0];
  }
  v59 = numDestFrames;
LABEL_71:
  __asm
  {
    vmovaps xmm15, [rsp+260h+var_E0]
    vmovaps xmm14, [rsp+260h+var_D0]
    vmovaps xmm13, [rsp+260h+var_C0]
    vmovaps xmm12, [rsp+260h+var_B0]
    vmovaps xmm11, [rsp+260h+var_A0]
    vmovaps xmm10, [rsp+260h+var_90]
    vmovaps xmm8, [rsp+260h+var_70]
    vmovaps xmm7, [rsp+260h+var_60]
    vmovaps xmm6, [rsp+260h+var_50]
    vmovss  dword ptr [r13+0], xmm9
  }
  if ( (unsigned int)v23 >= 4 )
  {
    v128 = 0i64;
    v129 = &_R13->resampleFilterState[0].x2;
    v130 = ((unsigned int)(v23 - 4) >> 2) + 1;
    v131 = v130;
    v44 = 4 * v130;
    do
    {
      v132 = v151[v128 / 8 + 1];
      v128 += 16i64;
      *((_DWORD *)v129 - 1) = v132;
      v129 += 16;
      *(v129 - 16) = *(float *)&v151[v128 / 8 + 7];
      *(v129 - 15) = *(float *)&v152[v128 + 48];
      *(v129 - 14) = *(float *)&v152[v128 + 112];
      *(v129 - 13) = *(float *)((char *)&v150 + v128 + 4);
      *(v129 - 12) = *((float *)&v151[v128 / 8 + 7] + 1);
      *(v129 - 11) = *(float *)&v152[v128 + 52];
      *(v129 - 10) = *(float *)&v152[v128 + 116];
      *(v129 - 9) = *(float *)&v151[v128 / 8];
      *(v129 - 8) = *(float *)&v151[v128 / 8 + 8];
      *(v129 - 7) = *(float *)&v152[v128 + 56];
      *(v129 - 6) = *(float *)&v152[v128 + 120];
      *(v129 - 5) = *((float *)&v151[v128 / 8] + 1);
      *(v129 - 4) = *((float *)&v151[v128 / 8 + 8] + 1);
      *(v129 - 3) = *(float *)&v152[v128 + 60];
      *(v129 - 2) = *(float *)&v152[v128 + 124];
      --v131;
    }
    while ( v131 );
  }
  if ( v44 < (unsigned int)v23 )
  {
    v133 = (unsigned int)v23 - v44;
    v134 = (__int64)&_R13->resampleFilterState[v44].x2;
    v135 = 4i64 * v44;
    do
    {
      v136 = *(_DWORD *)((char *)&v151[1] + v135);
      v135 += 4i64;
      *(_DWORD *)(v134 - 4) = v136;
      v134 += 16i64;
      *(_DWORD *)(v134 - 16) = *(_DWORD *)((char *)&v151[8] + v135 + 4);
      *(_DWORD *)(v134 - 12) = *(_DWORD *)&v152[v135 + 60];
      *(_DWORD *)(v134 - 8) = *(_DWORD *)&v152[v135 + 124];
      --v133;
    }
    while ( v133 );
  }
  if ( (_DWORD)v150 != v59 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 547, ASSERT_TYPE_ASSERT, "framesGenerated == numDestFrames", "framesGenerated == numDestFrames") )
    __debugbreak();
  if ( v25 != v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 548, ASSERT_TYPE_ASSERT, "incomingFramesConsumed == numSrcFrames", "incomingFramesConsumed == numSrcFrames") )
    __debugbreak();
  result = (unsigned int)v150;
LABEL_84:
  __asm { vmovaps xmm9, [rsp+260h+var_80] }
  return result;
}

/*
==============
AD_StaticSampleRingBuffer<32768,32>::Skip
==============
*/
void AD_StaticSampleRingBuffer<32768,32>::Skip(AD_StaticSampleRingBuffer<32768,32> *this, const unsigned int numSamples)
{
  int v2; 

  v2 = 4 * numSamples;
  if ( this->m_dataAvail < 4 * numSamples && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 441, ASSERT_TYPE_ASSERT, "BytesAvail() >= dataSize", "BytesAvail() >= dataSize") )
    __debugbreak();
  if ( !this->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 442, ASSERT_TYPE_ASSERT, "BufferSize() > 0", "BufferSize() > 0") )
    __debugbreak();
  this->m_readPos = (v2 + this->m_readPos) % this->m_size;
  AD_InterlockedSubtract(&this->m_dataAvail, v2);
}

/*
==============
AD_StaticSampleRingBuffer<32768,32>::Write
==============
*/
void AD_StaticSampleRingBuffer<32768,32>::Write(AD_StaticSampleRingBuffer<32768,32> *this, const float *srcData, const unsigned int numSamples)
{
  unsigned int v3; 
  __int64 m_writePos; 
  unsigned int m_size; 
  char *v8; 
  unsigned int v9; 

  v3 = 4 * numSamples;
  if ( !srcData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 400, ASSERT_TYPE_ASSERT, "srcData", "srcData") )
    __debugbreak();
  if ( this->m_size - this->m_dataAvail < v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 401, ASSERT_TYPE_ASSERT, "BytesFree() >= dataSize", "BytesFree() >= dataSize") )
    __debugbreak();
  if ( !this->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 402, ASSERT_TYPE_ASSERT, "BufferSize() > 0", "BufferSize() > 0") )
    __debugbreak();
  if ( v3 )
  {
    m_writePos = this->m_writePos;
    m_size = this->m_size;
    v8 = &this->m_buffer[m_writePos];
    if ( (unsigned int)m_writePos + v3 <= m_size )
    {
      memcpy_0(v8, srcData, v3);
    }
    else
    {
      v9 = m_size - m_writePos;
      memcpy_0(v8, srcData, v9);
      memcpy_0(this->m_buffer, (char *)srcData + v9, v3 - v9);
    }
    this->m_writePos = (v3 + this->m_writePos) % this->m_size;
    AD_InterlockedAdd(&this->m_dataAvail, v3);
  }
}

/*
==============
AD_StaticSampleBuffer<32768,32>::Init
==============
*/
void AD_StaticSampleBuffer<32768,32>::Init(AD_StaticSampleBuffer<32768,32> *this, const unsigned int s, const unsigned int alignment)
{
  unsigned int v6; 

  if ( s > 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 29, ASSERT_TYPE_ASSERT, "s <= T_SIZE", "s <= T_SIZE") )
    __debugbreak();
  if ( alignment != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 30, ASSERT_TYPE_ASSERT, "alignment == ALIGNMENT", "alignment == ALIGNMENT") )
    __debugbreak();
  v6 = 4 * s;
  if ( alignment != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 684, ASSERT_TYPE_ASSERT, "alignment == T_ALIGNMENT", "alignment == T_ALIGNMENT") )
    __debugbreak();
  if ( v6 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 685, ASSERT_TYPE_ASSERT, "s <= T_SIZE", "s <= T_SIZE") )
    __debugbreak();
  this->m_size = v6;
  memset_0(this->m_buffer, 0, v6);
}

