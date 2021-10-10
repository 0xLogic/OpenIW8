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
  __m256 *v7; 
  const __m256 *v8; 
  const __m256 *v12; 
  unsigned int v13; 
  __int64 v14; 
  __m256 v15; 
  __int64 v16; 

  v7 = SD_DSP::RegisterTraits<__m256>::Upcast(_outgoing);
  v8 = SD_DSP::RegisterTraits<__m256>::Upcast(_incoming1);
  __asm { vbroadcastss ymm3, [rsp+38h+incomingGain2] }
  _YMM2 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(*(__m128 *)&incomingGain1, *(__m128 *)&incomingGain1, 0);
  __asm { vinsertf128 ymm2, ymm2, xmm2, 1 }
  v12 = SD_DSP::RegisterTraits<__m256>::Upcast(_incoming2);
  v13 = 2;
  do
  {
    v14 = v13 - 1;
    v15 = _mm256_mul_ps(_YMM2, v8[v14]);
    v7[v13 - 2] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 - 2]), _mm256_mul_ps(_YMM2, v8[v13 - 2]));
    v7[v14] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v14]), v15);
    v7[v13] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13]), _mm256_mul_ps(_YMM2, v8[v13]));
    v7[v13 + 1] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 1]), _mm256_mul_ps(_YMM2, v8[v13 + 1]));
    v7[v13 + 2] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 2]), _mm256_mul_ps(_YMM2, v8[v13 + 2]));
    v7[v13 + 3] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 3]), _mm256_mul_ps(_YMM2, v8[v13 + 3]));
    v7[v13 + 4] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 4]), _mm256_mul_ps(_YMM2, v8[v13 + 4]));
    v7[v13 + 5] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 5]), _mm256_mul_ps(_YMM2, v8[v13 + 5]));
    v7[v13 + 6] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 6]), _mm256_mul_ps(_YMM2, v8[v13 + 6]));
    v7[v13 + 7] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 7]), _mm256_mul_ps(_YMM2, v8[v13 + 7]));
    v7[v13 + 8] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 8]), _mm256_mul_ps(_YMM2, v8[v13 + 8]));
    v7[v13 + 9] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 9]), _mm256_mul_ps(_YMM2, v8[v13 + 9]));
    v7[v13 + 10] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 10]), _mm256_mul_ps(_YMM2, v8[v13 + 10]));
    v7[v13 + 11] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 11]), _mm256_mul_ps(_YMM2, v8[v13 + 11]));
    v7[v13 + 12] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v13 + 12]), _mm256_mul_ps(_YMM2, v8[v13 + 12]));
    v16 = v13 + 13;
    v13 += 16;
    v7[v16] = _mm256_add_ps(_mm256_mul_ps(_YMM3, v12[v16]), _mm256_mul_ps(_YMM2, v8[v16]));
  }
  while ( v13 - 2 < 0x20 );
}

/*
==============
SD_DSP::RawSum<256>
==============
*/
void SD_DSP::RawSum<256>(float *const _outgoing, const float *const _incoming)
{
  __m256 *v3; 
  const __m256 *v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __m256 v8; 
  __m256 v9; 
  __m256 v10; 
  __int64 v11; 

  v3 = SD_DSP::RegisterTraits<__m256>::Upcast(_outgoing);
  v4 = SD_DSP::RegisterTraits<__m256>::Upcast(_incoming);
  v5 = 2;
  do
  {
    v6 = v5 + 1;
    v7 = v5;
    v3[v5 - 2] = _mm256_add_ps(v4[v5 - 2], v3[v5 - 2]);
    v8 = v4[v7];
    v3[v5 - 1] = _mm256_add_ps(v4[v5 - 1], v3[v5 - 1]);
    v9 = _mm256_add_ps(v8, v3[v7]);
    v10 = v4[v6];
    v3[v7] = v9;
    v3[v6] = _mm256_add_ps(v10, v3[v6]);
    v3[v5 + 2] = _mm256_add_ps(v4[v5 + 2], v3[v5 + 2]);
    v3[v5 + 3] = _mm256_add_ps(v4[v5 + 3], v3[v5 + 3]);
    v3[v5 + 4] = _mm256_add_ps(v4[v5 + 4], v3[v5 + 4]);
    v3[v5 + 5] = _mm256_add_ps(v4[v5 + 5], v3[v5 + 5]);
    v3[v5 + 6] = _mm256_add_ps(v4[v5 + 6], v3[v5 + 6]);
    v3[v5 + 7] = _mm256_add_ps(v4[v5 + 7], v3[v5 + 7]);
    v3[v5 + 8] = _mm256_add_ps(v4[v5 + 8], v3[v5 + 8]);
    v3[v5 + 9] = _mm256_add_ps(v4[v5 + 9], v3[v5 + 9]);
    v3[v5 + 10] = _mm256_add_ps(v4[v5 + 10], v3[v5 + 10]);
    v3[v5 + 11] = _mm256_add_ps(v4[v5 + 11], v3[v5 + 11]);
    v3[v5 + 12] = _mm256_add_ps(v4[v5 + 12], v3[v5 + 12]);
    v11 = v5 + 13;
    v5 += 16;
    v3[v11] = _mm256_add_ps(v4[v11], v3[v11]);
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
  __m256 *v5; 
  const __m256 *v6; 
  const __m256 *v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __m256 v11; 
  __m256 v12; 
  __m256 v13; 
  __int64 v14; 

  v5 = SD_DSP::RegisterTraits<__m256>::Upcast(_outgoing);
  v6 = SD_DSP::RegisterTraits<__m256>::Upcast(_incoming1);
  v7 = SD_DSP::RegisterTraits<__m256>::Upcast(_incoming2);
  v8 = 2;
  do
  {
    v9 = v8 + 1;
    v10 = v8;
    v5[v8 - 2] = _mm256_add_ps(v7[v8 - 2], v6[v8 - 2]);
    v11 = v7[v10];
    v5[v8 - 1] = _mm256_add_ps(v7[v8 - 1], v6[v8 - 1]);
    v12 = _mm256_add_ps(v11, v6[v10]);
    v13 = v7[v9];
    v5[v10] = v12;
    v5[v9] = _mm256_add_ps(v13, v6[v9]);
    v5[v8 + 2] = _mm256_add_ps(v7[v8 + 2], v6[v8 + 2]);
    v5[v8 + 3] = _mm256_add_ps(v7[v8 + 3], v6[v8 + 3]);
    v5[v8 + 4] = _mm256_add_ps(v7[v8 + 4], v6[v8 + 4]);
    v5[v8 + 5] = _mm256_add_ps(v7[v8 + 5], v6[v8 + 5]);
    v5[v8 + 6] = _mm256_add_ps(v7[v8 + 6], v6[v8 + 6]);
    v5[v8 + 7] = _mm256_add_ps(v7[v8 + 7], v6[v8 + 7]);
    v5[v8 + 8] = _mm256_add_ps(v7[v8 + 8], v6[v8 + 8]);
    v5[v8 + 9] = _mm256_add_ps(v7[v8 + 9], v6[v8 + 9]);
    v5[v8 + 10] = _mm256_add_ps(v7[v8 + 10], v6[v8 + 10]);
    v5[v8 + 11] = _mm256_add_ps(v7[v8 + 11], v6[v8 + 11]);
    v5[v8 + 12] = _mm256_add_ps(v7[v8 + 12], v6[v8 + 12]);
    v14 = v8 + 13;
    v8 += 16;
    v5[v14] = _mm256_add_ps(v7[v14], v6[v14]);
  }
  while ( v8 - 2 < 0x20 );
}

/*
==============
SD_DSP::RawCopy<256>
==============
*/
void SD_DSP::RawCopy<256>(float *const _outgoing, const float *const _incoming)
{
  __m256i *v3; 
  __m256i *v4; 
  __m256i v5; 
  __m256i v6; 
  __m256i v7; 
  __m256i v8; 
  __m256i v9; 
  __m256i v10; 
  __m256i v11; 
  __m256i v12; 
  __m256i v13; 
  __m256i v14; 
  __m256i v15; 
  __m256i v16; 
  __m256i v17; 
  __m256i v18; 
  __m256i v19; 
  __m256i v20; 
  __m256i v21; 
  __m256i v22; 
  __m256i v23; 
  __m256i v24; 
  __m256i v25; 
  __m256i v26; 
  __m256i v27; 
  __m256i v28; 
  __m256i v29; 
  __m256i v30; 
  __m256i v31; 
  __m256i v32; 
  __m256i v33; 
  __m256i v34; 
  __m256i v35; 

  v3 = (__m256i *)SD_DSP::RegisterTraits<__m256>::Upcast(_outgoing);
  v4 = (__m256i *)SD_DSP::RegisterTraits<__m256>::Upcast(_incoming);
  v5 = v4[1];
  *v3 = *v4;
  v6 = v4[2];
  v3[1] = v5;
  v7 = v4[3];
  v3[2] = v6;
  v8 = v4[4];
  v3[3] = v7;
  v9 = v4[5];
  v3[4] = v8;
  v10 = v4[6];
  v3[5] = v9;
  v11 = v4[7];
  v3[6] = v10;
  v12 = v4[8];
  v3[7] = v11;
  v13 = v4[9];
  v3[8] = v12;
  v14 = v4[10];
  v3[9] = v13;
  v15 = v4[11];
  v3[10] = v14;
  v16 = v4[12];
  v3[11] = v15;
  v17 = v4[13];
  v3[12] = v16;
  v18 = v4[14];
  v3[13] = v17;
  v19 = v4[15];
  v3[14] = v18;
  v20 = v4[16];
  v3[15] = v19;
  v21 = v4[17];
  v3[16] = v20;
  v22 = v4[18];
  v3[17] = v21;
  v23 = v4[19];
  v3[18] = v22;
  v24 = v4[20];
  v3[19] = v23;
  v25 = v4[21];
  v3[20] = v24;
  v26 = v4[22];
  v3[21] = v25;
  v27 = v4[23];
  v3[22] = v26;
  v28 = v4[24];
  v3[23] = v27;
  v29 = v4[25];
  v3[24] = v28;
  v30 = v4[26];
  v3[25] = v29;
  v31 = v4[27];
  v3[26] = v30;
  v32 = v4[28];
  v3[27] = v31;
  v33 = v4[29];
  v3[28] = v32;
  v34 = v4[30];
  v3[29] = v33;
  v35 = v4[31];
  v3[30] = v34;
  v3[31] = v35;
}

