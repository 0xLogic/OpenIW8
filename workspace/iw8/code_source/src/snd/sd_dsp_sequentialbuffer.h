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
  const float *v5; 
  const SD_DSP::ConstSampleBufferRefType<256> *v6; 
  char *v8; 
  __int64 v9; 
  __m128 v10; 
  __m128 v11; 
  const float *data; 
  __m256 *v13; 
  const __m256 *v14; 
  unsigned __int64 v19; 
  __int64 v20; 

  v5 = startGains;
  v6 = incoming;
  if ( !startGains && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 295, ASSERT_TYPE_ASSERT, "(startGains != nullptr)", (const char *)&queryFormat, "startGains != nullptr", -2i64) )
    __debugbreak();
  if ( !endGains && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 296, ASSERT_TYPE_ASSERT, "(endGains != nullptr)", (const char *)&queryFormat, "endGains != nullptr") )
    __debugbreak();
  v8 = (char *)((char *)endGains - (char *)v5);
  v9 = 16i64;
  do
  {
    v10 = (__m128)*(unsigned int *)((char *)v5 + (_QWORD)v8);
    v11 = (__m128)*(unsigned int *)v5;
    data = v6->data;
    v13 = SD_DSP::RegisterTraits<__m256>::Upcast(this->data._Elems[0]);
    v14 = SD_DSP::RegisterTraits<__m256>::Upcast(data);
    if ( ((unsigned __int64)g_lerp_t & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 55, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    if ( ((unsigned __int64)g_lerp_s & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 55, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    _YMM3 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v11, v11, 0);
    __asm { vinsertf128 ymm3, ymm3, xmm3, 1 }
    _YMM4 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v10, v10, 0);
    __asm { vinsertf128 ymm4, ymm4, xmm4, 1 }
    v19 = 0i64;
    v20 = 4i64;
    do
    {
      v13[v19 / 0x20] = _mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_s[v19 / 4]), _mm256_mul_ps(_YMM3, *(__m256 *)&g_lerp_t[v19 / 4])), v14[v19 / 0x20]);
      v13[v19 / 0x20 + 1] = _mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_s[v19 / 4 + 8]), _mm256_mul_ps(_YMM3, *(__m256 *)&g_lerp_t[v19 / 4 + 8])), v14[v19 / 0x20 + 1]);
      v13[v19 / 0x20 + 2] = _mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_s[v19 / 4 + 16]), _mm256_mul_ps(_YMM3, *(__m256 *)&g_lerp_t[v19 / 4 + 16])), v14[v19 / 0x20 + 2]);
      v13[v19 / 0x20 + 3] = _mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_s[v19 / 4 + 24]), _mm256_mul_ps(_YMM3, *(__m256 *)&g_lerp_t[v19 / 4 + 24])), v14[v19 / 0x20 + 3]);
      v13[v19 / 0x20 + 4] = _mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_s[v19 / 4 + 32]), _mm256_mul_ps(_YMM3, *(__m256 *)&g_lerp_t[v19 / 4 + 32])), v14[v19 / 0x20 + 4]);
      v13[v19 / 0x20 + 5] = _mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_s[v19 / 4 + 40]), _mm256_mul_ps(_YMM3, *(__m256 *)&g_lerp_t[v19 / 4 + 40])), v14[v19 / 0x20 + 5]);
      v13[v19 / 0x20 + 6] = _mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_s[v19 / 4 + 48]), _mm256_mul_ps(_YMM3, *(__m256 *)&g_lerp_t[v19 / 4 + 48])), v14[v19 / 0x20 + 6]);
      v13[v19 / 0x20 + 7] = _mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_s[v19 / 4 + 56]), _mm256_mul_ps(_YMM3, *(__m256 *)&g_lerp_t[v19 / 4 + 56])), v14[v19 / 0x20 + 7]);
      v19 += 256i64;
      --v20;
    }
    while ( v20 );
    ++v5;
    this = (SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *)((char *)this + 8);
    --v9;
    v6 = incoming;
  }
  while ( v9 );
}

/*
==============
SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum
==============
*/
void SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *this, const SD_DSP::ConstSampleBufferRefType<256> *incoming, const float *const startGains, const float *const endGains)
{
  const float *v5; 
  const SD_DSP::ConstSampleBufferRefType<256> *v6; 
  char *v8; 
  __int64 v9; 
  __m128 v10; 
  __m128 v11; 
  const float *data; 
  __m256 *v13; 
  const __m256 *v14; 
  unsigned __int64 v19; 
  __int64 v20; 

  v5 = startGains;
  v6 = incoming;
  if ( !startGains && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 283, ASSERT_TYPE_ASSERT, "(startGains != nullptr)", (const char *)&queryFormat, "startGains != nullptr", -2i64) )
    __debugbreak();
  if ( !endGains && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 284, ASSERT_TYPE_ASSERT, "(endGains != nullptr)", (const char *)&queryFormat, "endGains != nullptr") )
    __debugbreak();
  v8 = (char *)((char *)endGains - (char *)v5);
  v9 = 16i64;
  do
  {
    v10 = (__m128)*(unsigned int *)((char *)v5 + (_QWORD)v8);
    v11 = (__m128)*(unsigned int *)v5;
    data = v6->data;
    v13 = SD_DSP::RegisterTraits<__m256>::Upcast(this->data._Elems[0]);
    v14 = SD_DSP::RegisterTraits<__m256>::Upcast(data);
    if ( ((unsigned __int64)g_lerp_t & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 55, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    if ( ((unsigned __int64)g_lerp_s & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 55, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    _YMM4 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v11, v11, 0);
    __asm { vinsertf128 ymm4, ymm4, xmm4, 1 }
    _YMM5 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v10, v10, 0);
    __asm { vinsertf128 ymm5, ymm5, xmm5, 1 }
    v19 = 0i64;
    v20 = 4i64;
    do
    {
      v13[v19 / 0x20] = _mm256_add_ps(_mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM5, *(__m256 *)&g_lerp_s[v19 / 4]), _mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_t[v19 / 4])), v14[v19 / 0x20]), v13[v19 / 0x20]);
      v13[v19 / 0x20 + 1] = _mm256_add_ps(_mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM5, *(__m256 *)&g_lerp_s[v19 / 4 + 8]), _mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_t[v19 / 4 + 8])), v14[v19 / 0x20 + 1]), v13[v19 / 0x20 + 1]);
      v13[v19 / 0x20 + 2] = _mm256_add_ps(_mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM5, *(__m256 *)&g_lerp_s[v19 / 4 + 16]), _mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_t[v19 / 4 + 16])), v14[v19 / 0x20 + 2]), v13[v19 / 0x20 + 2]);
      v13[v19 / 0x20 + 3] = _mm256_add_ps(_mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM5, *(__m256 *)&g_lerp_s[v19 / 4 + 24]), _mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_t[v19 / 4 + 24])), v14[v19 / 0x20 + 3]), v13[v19 / 0x20 + 3]);
      v13[v19 / 0x20 + 4] = _mm256_add_ps(_mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM5, *(__m256 *)&g_lerp_s[v19 / 4 + 32]), _mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_t[v19 / 4 + 32])), v14[v19 / 0x20 + 4]), v13[v19 / 0x20 + 4]);
      v13[v19 / 0x20 + 5] = _mm256_add_ps(_mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM5, *(__m256 *)&g_lerp_s[v19 / 4 + 40]), _mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_t[v19 / 4 + 40])), v14[v19 / 0x20 + 5]), v13[v19 / 0x20 + 5]);
      v13[v19 / 0x20 + 6] = _mm256_add_ps(_mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM5, *(__m256 *)&g_lerp_s[v19 / 4 + 48]), _mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_t[v19 / 4 + 48])), v14[v19 / 0x20 + 6]), v13[v19 / 0x20 + 6]);
      v13[v19 / 0x20 + 7] = _mm256_add_ps(_mm256_mul_ps(_mm256_add_ps(_mm256_mul_ps(_YMM5, *(__m256 *)&g_lerp_s[v19 / 4 + 56]), _mm256_mul_ps(_YMM4, *(__m256 *)&g_lerp_t[v19 / 4 + 56])), v14[v19 / 0x20 + 7]), v13[v19 / 0x20 + 7]);
      v19 += 256i64;
      --v20;
    }
    while ( v20 );
    ++v5;
    this = (SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *)((char *)this + 8);
    --v9;
    v6 = incoming;
  }
  while ( v9 );
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

