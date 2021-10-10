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
  unsigned int v4; 
  __int64 v5; 
  __int128 interpT_low; 
  float v9; 
  __int128 v10; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  __int64 v14; 
  __int128 v15; 
  __int128 v16; 
  __int64 v17; 
  __int128 v19; 
  unsigned int v20; 

  v4 = 0;
  v5 = numDestFrames;
  interpT_low = LODWORD(this->interpT);
  if ( srcFrameRate == destFrameRate )
    return numDestFrames;
  _XMM7 = LODWORD(FLOAT_1_0);
  v10 = 0i64;
  v9 = (float)srcFrameRate;
  v11 = (float)destFrameRate;
  *(float *)&v10 = v9 / v11;
  v12 = v10;
  if ( (float)(v9 / v11) < 1.0 )
  {
    if ( *(float *)&interpT_low > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 385, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
      __debugbreak();
    if ( (_DWORD)v5 )
    {
      v17 = v5;
      do
      {
        v19 = v12;
        *(float *)&v19 = *(float *)&v12 + *(float *)&interpT_low;
        _XMM2 = v19;
        v20 = v4 + 1;
        if ( (float)(*(float *)&v12 + *(float *)&interpT_low) < 1.0 )
          v20 = v4;
        v4 = v20;
        __asm
        {
          vcmpless xmm0, xmm7, xmm2
          vblendvps xmm1, xmm2, xmm1, xmm0
        }
        LODWORD(interpT_low) = _XMM1;
        --v17;
      }
      while ( v17 );
    }
    if ( *(float *)&interpT_low > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 398, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
      __debugbreak();
  }
  else
  {
    if ( *(float *)&interpT_low >= 1.0 )
    {
      do
      {
        v13 = interpT_low;
        *(float *)&v13 = *(float *)&interpT_low + -1.0;
        interpT_low = v13;
        ++v4;
      }
      while ( *(float *)&v13 >= 1.0 );
    }
    if ( numDestFrames )
    {
      v14 = numDestFrames;
      do
      {
        v15 = interpT_low;
        *(float *)&v15 = *(float *)&interpT_low + *(float *)&v12;
        interpT_low = v15;
        if ( *(float *)&v15 >= 1.0 )
        {
          do
          {
            v16 = interpT_low;
            *(float *)&v16 = *(float *)&interpT_low + -1.0;
            interpT_low = v16;
            ++v4;
          }
          while ( *(float *)&v16 >= 1.0 );
        }
        --v14;
      }
      while ( v14 );
    }
  }
  return v4;
}

/*
==============
AD_InterleavedFrameInterpolator<16>::GetFramesForSrc
==============
*/
__int64 AD_InterleavedFrameInterpolator<16>::GetFramesForSrc(AD_InterleavedFrameInterpolator<16> *this, const unsigned int numSrcFrames, const unsigned int srcFrameRate, const unsigned int destFrameRate)
{
  unsigned int v4; 
  unsigned int v6; 
  __int128 interpT_low; 
  float v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 

  v4 = 0;
  v6 = 0;
  interpT_low = LODWORD(this->interpT);
  if ( srcFrameRate == destFrameRate )
    return numSrcFrames;
  v9 = (float)srcFrameRate;
  v10 = (float)destFrameRate;
  v11 = v9 / v10;
  if ( (float)(v9 / v10) < 1.0 )
  {
    if ( *(float *)&interpT_low > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 328, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
      __debugbreak();
    if ( numSrcFrames )
    {
      do
      {
        v15 = interpT_low;
        *(float *)&v15 = *(float *)&interpT_low + v11;
        interpT_low = v15;
        ++v4;
        if ( *(float *)&v15 >= 1.0 )
        {
          if ( v6 >= numSrcFrames && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 337, ASSERT_TYPE_ASSERT, "incomingFramesConsumed < numSrcFrames", "incomingFramesConsumed < numSrcFrames") )
            __debugbreak();
          *(float *)&v15 = *(float *)&v15 + -1.0;
          interpT_low = v15;
          ++v6;
        }
      }
      while ( v6 < numSrcFrames );
    }
    if ( *(float *)&interpT_low > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 343, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
      __debugbreak();
  }
  else if ( *(float *)&interpT_low < 1.0 )
  {
LABEL_7:
    while ( v6 < numSrcFrames )
    {
      v13 = interpT_low;
      *(float *)&v13 = *(float *)&interpT_low + v11;
      interpT_low = v13;
      ++v4;
      if ( *(float *)&v13 >= 1.0 )
      {
        do
        {
          v14 = interpT_low;
          *(float *)&v14 = *(float *)&interpT_low + -1.0;
          interpT_low = v14;
          ++v6;
        }
        while ( *(float *)&v14 >= 1.0 );
      }
    }
  }
  else
  {
    while ( v6 < numSrcFrames )
    {
      v12 = interpT_low;
      *(float *)&v12 = *(float *)&interpT_low + -1.0;
      interpT_low = v12;
      ++v6;
      if ( *(float *)&v12 < 1.0 )
        goto LABEL_7;
    }
  }
  return v4;
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
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  float *v17; 
  unsigned int v18; 
  __int64 v20; 
  AD_InterleavedFrameInterpolator<16> *v21; 
  unsigned int v22; 
  unsigned int v23; 
  __int128 interpT_low; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  __int64 v31; 
  __int64 v32; 
  float a0; 
  float a1; 
  float a2; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned __int64 v38; 
  float *p_x2; 
  unsigned int v40; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  int v46; 
  float v47; 
  __int128 v48; 
  unsigned int v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  unsigned __int64 v53; 
  __int64 v54; 
  float v55; 
  float v56; 
  float *v57; 
  float v58; 
  double v59; 
  __int128 v60; 
  __int128 v61; 
  __int64 v62; 
  float v63; 
  __int64 v64; 
  __int64 v65; 
  unsigned __int64 v66; 
  __int64 v67; 
  float v68; 
  float v69; 
  float *v70; 
  float v71; 
  double v72; 
  __int128 v73; 
  unsigned int v74; 
  char *v75; 
  unsigned int v76; 
  _DWORD *histB; 
  __int64 v78; 
  __int64 v79; 
  _DWORD *v80; 
  unsigned __int64 v81; 
  float *v82; 
  unsigned int v83; 
  __int64 v84; 
  int v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  int v89; 
  float *v90; 
  __int64 v91; 
  __int64 v92; 
  float a3; 
  float a4; 
  __int64 v97; 
  __int64 v98; 
  float v99; 
  __int64 v100; 
  __int64 v101; 
  __int64 v102[9]; 
  char v103[192]; 
  __int128 v104; 
  __int128 v105; 
  __int128 v106; 
  __int128 v107; 
  __int128 v108; 
  __int128 v109; 
  __int128 v110; 
  __int128 v111; 
  __int128 v112; 

  v17 = dest;
  v18 = numSrcFrames;
  v20 = numChannels;
  v21 = this;
  v90 = dest;
  v102[0] = (__int64)this;
  if ( numChannels > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 406, ASSERT_TYPE_ASSERT, "numChannels <= T_MAX_CHANNELS", "numChannels <= T_MAX_CHANNELS") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 407, ASSERT_TYPE_ASSERT, "src != nullptr", "src != nullptr") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 408, ASSERT_TYPE_ASSERT, "dest != nullptr", "dest != nullptr") )
    __debugbreak();
  v22 = srcFrameRate;
  LODWORD(v101) = 0;
  v23 = 0;
  interpT_low = LODWORD(v21->interpT);
  if ( srcFrameRate == destFrameRate )
  {
    if ( numDestFrames != v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 416, ASSERT_TYPE_ASSERT, "numDestFrames == numSrcFrames", "numDestFrames == numSrcFrames") )
      __debugbreak();
    memcpy_0(dest, src, 4 * (unsigned int)v20 * v18);
    return v18;
  }
  v109 = v11;
  v26 = FLOAT_1_0;
  v107 = v13;
  v106 = v14;
  v27 = (float)srcFrameRate;
  v28 = (float)destFrameRate;
  v29 = v27 / v28;
  v105 = v15;
  v99 = v27 / v28;
  v104 = v16;
  if ( __PAIR64__(destFrameRate, srcFrameRate) != *(_QWORD *)&v21->resampleFilterSrcFreq )
  {
    v21->resampleFilterSrcFreq = srcFrameRate;
    if ( (float)(v27 / v28) >= 1.0 )
      v22 = destFrameRate;
    v21->resampleFilterDestFreq = destFrameRate;
    v30 = (float)v22;
    AD_CalcBiquadCoefficientsAtRate(&v21->resampleFilterCoeffs, (const AD_EQType)0, v30 * 0.5, 1.0, 1.0, destFrameRate);
    if ( (_DWORD)v20 )
    {
      v31 = 0i64;
      v32 = v20;
      do
      {
        AD_ResetBiquadState(&v21->resampleFilterState[v31++]);
        --v32;
      }
      while ( v32 );
      v17 = dest;
    }
  }
  a0 = v21->resampleFilterCoeffs.a0;
  a1 = v21->resampleFilterCoeffs.a1;
  a2 = v21->resampleFilterCoeffs.a2;
  v36 = 0;
  v37 = 0;
  a3 = v21->resampleFilterCoeffs.a3;
  a4 = v21->resampleFilterCoeffs.a4;
  if ( (unsigned int)v20 >= 4 )
  {
    v38 = 0i64;
    p_x2 = &v21->resampleFilterState[0].x2;
    v40 = ((unsigned int)(v20 - 4) >> 2) + 1;
    v41 = v40;
    v37 = 4 * v40;
    do
    {
      v42 = *((_DWORD *)p_x2 - 1);
      p_x2 += 16;
      LODWORD(v102[v38 / 8 + 1]) = v42;
      v38 += 16i64;
      *(float *)&v102[v38 / 8 + 7] = *(p_x2 - 16);
      *(float *)&v103[v38 + 48] = *(p_x2 - 15);
      *(float *)&v103[v38 + 112] = *(p_x2 - 14);
      *(float *)((char *)&v101 + v38 + 4) = *(p_x2 - 13);
      *((float *)&v102[v38 / 8 + 7] + 1) = *(p_x2 - 12);
      *(float *)&v103[v38 + 52] = *(p_x2 - 11);
      *(float *)&v103[v38 + 116] = *(p_x2 - 10);
      *(float *)&v102[v38 / 8] = *(p_x2 - 9);
      *(float *)&v102[v38 / 8 + 8] = *(p_x2 - 8);
      *(float *)&v103[v38 + 56] = *(p_x2 - 7);
      *(float *)&v103[v38 + 120] = *(p_x2 - 6);
      *((float *)&v102[v38 / 8] + 1) = *(p_x2 - 5);
      *((float *)&v102[v38 / 8 + 8] + 1) = *(p_x2 - 4);
      *(float *)&v103[v38 + 60] = *(p_x2 - 3);
      *(float *)&v103[v38 + 124] = *(p_x2 - 2);
      --v41;
    }
    while ( v41 );
  }
  if ( v37 < (unsigned int)v20 )
  {
    v43 = (unsigned int)v20 - v37;
    v44 = (__int64)&v21->resampleFilterState[v37].x2;
    v45 = 4i64 * v37;
    do
    {
      v46 = *(_DWORD *)(v44 - 4);
      v44 += 16i64;
      *(_DWORD *)((char *)&v102[1] + v45) = v46;
      v45 += 4i64;
      *(_DWORD *)((char *)&v102[8] + v45 + 4) = *(_DWORD *)(v44 - 16);
      *(_DWORD *)&v103[v45 + 60] = *(_DWORD *)(v44 - 12);
      *(_DWORD *)&v103[v45 + 124] = *(_DWORD *)(v44 - 8);
      --v43;
    }
    while ( v43 );
  }
  v112 = v8;
  v111 = v9;
  v110 = v10;
  v108 = v12;
  if ( v29 < 1.0 )
  {
    if ( v29 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 498, ASSERT_TYPE_ASSERT, "ratio > 0.0f", "ratio > 0.0f") )
      __debugbreak();
    if ( *(float *)&interpT_low > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 499, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
      __debugbreak();
    v62 = numDestFrames;
    if ( numDestFrames )
    {
      v63 = FLOAT_N1_0;
      v64 = 4 * v20;
      v92 = numDestFrames;
      v98 = 4 * v20;
      v65 = v20;
      LODWORD(v101) = numDestFrames;
      do
      {
        if ( (_DWORD)v20 )
        {
          v66 = 0i64;
          v67 = v65;
          do
          {
            v68 = *(float *)((char *)&v102[1] + v66);
            v69 = *(float *)&v103[v66 + 64];
            v70 = (float *)&v103[v66];
            v71 = (float)((float)(v26 - *(float *)&interpT_low) * *(float *)((char *)v70 + (char *)v21 - v103 + 4)) + (float)(*(float *)&interpT_low * *(float *)((char *)v70 + (char *)v21 - v103 + 68));
            v72 = AD_ScrutinizeSample((float)((float)((float)((float)(v68 * a1) + (float)(v71 * a0)) + (float)(a2 * *(float *)&v103[v66])) - (float)(v69 * a3)) - (float)(a4 * *(float *)&v103[v66 + 128]));
            *(float *)&v103[v66 + 64] = *(float *)&v72;
            v90[v66 / 4] = *(float *)&v72;
            *(float *)((char *)&v102[1] + v66) = v71;
            *(float *)&v103[v66 + 128] = v69;
            v66 += 4i64;
            *v70 = v68;
            --v67;
          }
          while ( v67 );
          v26 = FLOAT_1_0;
          v63 = FLOAT_N1_0;
          LODWORD(v20) = numChannels;
          v21 = (AD_InterleavedFrameInterpolator<16> *)v102[0];
          v36 = 0;
          v17 = v90;
          v18 = numSrcFrames;
          v62 = v92;
          v64 = v98;
        }
        v73 = interpT_low;
        *(float *)&v73 = *(float *)&interpT_low + v99;
        interpT_low = v73;
        v17 = (float *)((char *)v17 + v64);
        v90 = v17;
        if ( *(float *)&v73 >= v26 )
        {
          if ( v23 >= v18 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 521, ASSERT_TYPE_ASSERT, "incomingFramesConsumed < numSrcFrames", "incomingFramesConsumed < numSrcFrames") )
              __debugbreak();
            v64 = v98;
          }
          ++v23;
          v74 = 0;
          *(float *)&v73 = *(float *)&v73 + v63;
          interpT_low = v73;
          if ( (unsigned int)v20 >= 4 )
          {
            v75 = (char *)((char *)src - (char *)v21);
            v76 = ((unsigned int)(v20 - 4) >> 2) + 1;
            histB = (_DWORD *)v21->histB;
            v78 = v76;
            v74 = 4 * v76;
            do
            {
              *(histB - 16) = *histB;
              *histB = *(_DWORD *)((char *)histB + (_QWORD)v75 - 68);
              *(histB - 15) = histB[1];
              histB[1] = *(_DWORD *)((char *)histB + (_QWORD)v75 - 64);
              *(histB - 14) = histB[2];
              histB[2] = *(_DWORD *)((char *)histB + (_QWORD)v75 - 60);
              *(histB - 13) = histB[3];
              histB[3] = *(_DWORD *)((char *)histB + (_QWORD)v75 - 56);
              histB += 4;
              --v78;
            }
            while ( v78 );
          }
          if ( v74 < (unsigned int)v20 )
          {
            v79 = (unsigned int)v20 - v74;
            v80 = (_DWORD *)&v21->histB[v74];
            do
            {
              *(v80 - 16) = *v80;
              *v80 = *(_DWORD *)((char *)v80 + (char *)src - (char *)v21 - 68);
              ++v80;
              --v79;
            }
            while ( v79 );
          }
          v62 = v92;
          src = (const float *)((char *)src + v64);
        }
        --v62;
        v65 = (unsigned int)v20;
        v92 = v62;
      }
      while ( v62 );
    }
    if ( *(float *)&interpT_low > v26 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 534, ASSERT_TYPE_ASSERT, "t <= 1.0f", "t <= 1.0f") )
      __debugbreak();
  }
  else
  {
    v47 = FLOAT_N1_0;
    if ( *(float *)&interpT_low >= 1.0 )
    {
      do
      {
        if ( v23 >= v18 )
          break;
        ++v23;
        src += v20;
        v48 = interpT_low;
        *(float *)&v48 = *(float *)&interpT_low + -1.0;
        interpT_low = v48;
      }
      while ( *(float *)&v48 >= 1.0 );
    }
    v49 = numDestFrames;
    if ( !numDestFrames )
      goto LABEL_72;
    v50 = numDestFrames;
    v51 = 4 * v20;
    v52 = v20;
    v97 = 4 * v20;
    v100 = v20;
    v101 = numDestFrames;
    v91 = numDestFrames;
    do
    {
      if ( (_DWORD)v20 )
      {
        v53 = 0i64;
        v54 = v52;
        do
        {
          v55 = *(float *)((char *)&v102[1] + v53);
          v56 = *(float *)&v103[v53 + 64];
          v57 = (float *)&v103[v53];
          v58 = *(float *)&v103[v53 + (char *)src - v103];
          v59 = AD_ScrutinizeSample((float)((float)((float)((float)(v55 * a1) + (float)(a0 * v58)) + (float)(a2 * *(float *)&v103[v53])) - (float)(v56 * a3)) - (float)(a4 * *(float *)&v103[v53 + 128]));
          *(float *)&v103[v53 + 64] = *(float *)&v59;
          v90[v53 / 4] = *(float *)&v59;
          *(float *)((char *)&v102[1] + v53) = v58;
          *(float *)&v103[v53 + 128] = v56;
          v53 += 4i64;
          *v57 = v55;
          --v54;
        }
        while ( v54 );
        v26 = FLOAT_1_0;
        v47 = FLOAT_N1_0;
        LODWORD(v20) = numChannels;
        v36 = 0;
        v51 = v97;
        v17 = v90;
        v18 = numSrcFrames;
        v50 = v91;
        v52 = v100;
      }
      v17 = (float *)((char *)v17 + v51);
      v60 = interpT_low;
      *(float *)&v60 = *(float *)&interpT_low + v29;
      interpT_low = v60;
      v90 = v17;
      if ( *(float *)&v60 >= v26 )
      {
        do
        {
          if ( v23 >= v18 )
            break;
          v61 = interpT_low;
          *(float *)&v61 = *(float *)&interpT_low + v47;
          interpT_low = v61;
          ++v23;
          src = (const float *)((char *)src + v51);
        }
        while ( *(float *)&v61 >= v26 );
      }
      v91 = --v50;
    }
    while ( v50 );
    v21 = (AD_InterleavedFrameInterpolator<16> *)v102[0];
  }
  v49 = numDestFrames;
LABEL_72:
  v21->interpT = *(float *)&interpT_low;
  if ( (unsigned int)v20 >= 4 )
  {
    v81 = 0i64;
    v82 = &v21->resampleFilterState[0].x2;
    v83 = ((unsigned int)(v20 - 4) >> 2) + 1;
    v84 = v83;
    v36 = 4 * v83;
    do
    {
      v85 = v102[v81 / 8 + 1];
      v81 += 16i64;
      *((_DWORD *)v82 - 1) = v85;
      v82 += 16;
      *(v82 - 16) = *(float *)&v102[v81 / 8 + 7];
      *(v82 - 15) = *(float *)&v103[v81 + 48];
      *(v82 - 14) = *(float *)&v103[v81 + 112];
      *(v82 - 13) = *(float *)((char *)&v101 + v81 + 4);
      *(v82 - 12) = *((float *)&v102[v81 / 8 + 7] + 1);
      *(v82 - 11) = *(float *)&v103[v81 + 52];
      *(v82 - 10) = *(float *)&v103[v81 + 116];
      *(v82 - 9) = *(float *)&v102[v81 / 8];
      *(v82 - 8) = *(float *)&v102[v81 / 8 + 8];
      *(v82 - 7) = *(float *)&v103[v81 + 56];
      *(v82 - 6) = *(float *)&v103[v81 + 120];
      *(v82 - 5) = *((float *)&v102[v81 / 8] + 1);
      *(v82 - 4) = *((float *)&v102[v81 / 8 + 8] + 1);
      *(v82 - 3) = *(float *)&v103[v81 + 60];
      *(v82 - 2) = *(float *)&v103[v81 + 124];
      --v84;
    }
    while ( v84 );
  }
  if ( v36 < (unsigned int)v20 )
  {
    v86 = (unsigned int)v20 - v36;
    v87 = (__int64)&v21->resampleFilterState[v36].x2;
    v88 = 4i64 * v36;
    do
    {
      v89 = *(_DWORD *)((char *)&v102[1] + v88);
      v88 += 4i64;
      *(_DWORD *)(v87 - 4) = v89;
      v87 += 16i64;
      *(_DWORD *)(v87 - 16) = *(_DWORD *)((char *)&v102[8] + v88 + 4);
      *(_DWORD *)(v87 - 12) = *(_DWORD *)&v103[v88 + 60];
      *(_DWORD *)(v87 - 8) = *(_DWORD *)&v103[v88 + 124];
      --v86;
    }
    while ( v86 );
  }
  if ( (_DWORD)v101 != v49 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 547, ASSERT_TYPE_ASSERT, "framesGenerated == numDestFrames", "framesGenerated == numDestFrames") )
    __debugbreak();
  if ( v23 != v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 548, ASSERT_TYPE_ASSERT, "incomingFramesConsumed == numSrcFrames", "incomingFramesConsumed == numSrcFrames") )
    __debugbreak();
  return (unsigned int)v101;
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

