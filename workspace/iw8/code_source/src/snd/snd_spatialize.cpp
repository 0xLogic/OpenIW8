/*
==============
SND_SpatializeStereo
==============
*/

void __fastcall SND_SpatializeStereo(float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  ?SND_SpatializeStereo@@YAXPEAMAEBTvec3_t@@PEBUsnd_listener@@MH_NMMMM@Z(volumes, delta, listener, dist, srcChannelCount, includeCenterChannel, spreadMinDist, spreadMaxDist, spreadMidPoint, stereoSpreadMaxAngle);
}

/*
==============
SND_InitDolbyPanners
==============
*/

void SND_InitDolbyPanners(void)
{
  ?SND_InitDolbyPanners@@YAXXZ();
}

/*
==============
SND_SpatializeReverb
==============
*/

void __fastcall SND_SpatializeReverb(float *volumes, const vec3_t *delta, const snd_listener *listener, const float minVol)
{
  ?SND_SpatializeReverb@@YAXPEAMAEBTvec3_t@@PEBUsnd_listener@@M@Z(volumes, delta, listener, minVol);
}

/*
==============
SND_Spatialize7144
==============
*/

void __fastcall SND_Spatialize7144(float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  ?SND_Spatialize7144@@YAXPEAMAEBTvec3_t@@PEBUsnd_listener@@MH_NMMMM@Z(volumes, delta, listener, dist, srcChannelCount, includeCenterChannel, spreadMinDist, spreadMaxDist, spreadMidPoint, stereoSpreadMaxAngle);
}

/*
==============
SND_Spatialize71
==============
*/

void __fastcall SND_Spatialize71(float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  ?SND_Spatialize71@@YAXPEAMAEBTvec3_t@@PEBUsnd_listener@@MH_NMMMM@Z(volumes, delta, listener, dist, srcChannelCount, includeCenterChannel, spreadMinDist, spreadMaxDist, spreadMidPoint, stereoSpreadMaxAngle);
}

/*
==============
SND_Spatialize51
==============
*/

void __fastcall SND_Spatialize51(float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  ?SND_Spatialize51@@YAXPEAMAEBTvec3_t@@PEBUsnd_listener@@MH_NMMMM@Z(volumes, delta, listener, dist, srcChannelCount, includeCenterChannel, spreadMinDist, spreadMaxDist, spreadMidPoint, stereoSpreadMaxAngle);
}

/*
==============
SND_GetPannerVolsX
==============
*/
void SND_GetPannerVolsX(const SpeakerInfo *const spkInfos, const unsigned int numSpkInfos, const vec3_t *objPos, float *volsX)
{
  sd_mix_channel *p_channel; 
  __int64 v7; 
  float v8; 
  float v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int **v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v20; 
  sd_mix_channel *v21; 
  unsigned int **v23; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v30; 
  sd_mix_channel *v31; 
  float v33; 
  float v34; 
  bool v35; 

  *(_QWORD *)volsX = 0i64;
  *((_QWORD *)volsX + 1) = 0i64;
  *((_QWORD *)volsX + 2) = 0i64;
  *((_QWORD *)volsX + 3) = 0i64;
  *((_QWORD *)volsX + 4) = 0i64;
  *((_QWORD *)volsX + 5) = 0i64;
  *((_QWORD *)volsX + 6) = 0i64;
  *((_QWORD *)volsX + 7) = 0i64;
  if ( numSpkInfos )
  {
    p_channel = &spkInfos->channel;
    v7 = numSpkInfos;
    while ( 1 )
    {
      v8 = *((float *)p_channel - 3);
      v9 = objPos->v[0];
      v10 = *((_DWORD *)p_channel + 33);
      v11 = 0;
      if ( v8 < objPos->v[0] )
      {
        *(float *)&_XMM1 = FLOAT_2_0;
        if ( v10 >= 4 )
        {
          v23 = (unsigned int **)(p_channel + 3);
          v24 = ((v10 - 4) >> 2) + 1;
          v25 = v24;
          v11 = 4 * v24;
          do
          {
            _XMM0 = **(v23 - 1);
            if ( *(float *)&_XMM0 > v8 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _XMM0 = **v23;
            if ( *(float *)&_XMM0 > v8 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _XMM0 = *v23[1];
            if ( *(float *)&_XMM0 > v8 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _XMM0 = *v23[2];
            if ( *(float *)&_XMM0 > v8 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            v23 += 4;
            --v25;
          }
          while ( v25 );
        }
        if ( v11 < v10 )
        {
          v30 = v10 - v11;
          v31 = &p_channel[2 * v11 + 1];
          do
          {
            _XMM0 = **(unsigned int **)v31;
            if ( *(float *)&_XMM0 > v8 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            v31 += 2;
            --v30;
          }
          while ( v30 );
        }
      }
      else
      {
        *(float *)&_XMM1 = FLOAT_N2_0;
        if ( v10 >= 4 )
        {
          v13 = (unsigned int **)(p_channel + 3);
          v14 = ((v10 - 4) >> 2) + 1;
          v15 = v14;
          v11 = 4 * v14;
          do
          {
            _XMM0 = **(v13 - 1);
            if ( *(float *)&_XMM0 < v8 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = **v13;
            if ( *(float *)&_XMM0 < v8 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = *v13[1];
            if ( *(float *)&_XMM0 < v8 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = *v13[2];
            if ( *(float *)&_XMM0 < v8 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            v13 += 4;
            --v15;
          }
          while ( v15 );
        }
        if ( v11 < v10 )
        {
          v20 = v10 - v11;
          v21 = &p_channel[2 * v11 + 1];
          do
          {
            _XMM0 = **(unsigned int **)v21;
            if ( *(float *)&_XMM0 < v8 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            v21 += 2;
            --v20;
          }
          while ( v20 );
        }
      }
      v33 = v8 - v9;
      v34 = *(float *)&_XMM1 - v9;
      if ( COERCE_FLOAT(_XMM1 & _xmm) < 2.0 )
        break;
      volsX[*(int *)p_channel] = 1.0;
LABEL_50:
      p_channel += 72;
      if ( !--v7 )
        return;
    }
    v35 = v34 < 0.0;
    if ( v34 > 0.0 )
    {
      if ( v33 > 0.0 )
      {
LABEL_45:
        volsX[*(int *)p_channel] = 0.0;
        goto LABEL_50;
      }
      v35 = v34 < 0.0;
    }
    if ( (!v35 || v33 >= 0.0) && v34 != 0.0 )
    {
      if ( (float)(*(float *)&_XMM1 - v8) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_spatialize.cpp", 241, ASSERT_TYPE_ASSERT, "(( adjacentX - speakerX ) != 0.0f)", (const char *)&queryFormat, "( adjacentX - speakerX ) != 0.0f") )
        __debugbreak();
      volsX[*(int *)p_channel] = cosf_0((float)(v33 / (float)(*(float *)&_XMM1 - v8)) * 1.5707964);
      goto LABEL_50;
    }
    goto LABEL_45;
  }
}

/*
==============
SND_GetPannerVolsY
==============
*/
void SND_GetPannerVolsY(const SpeakerInfo *const spkInfos, const unsigned int numSpkInfos, const vec3_t *objPos, float *volsY)
{
  sd_mix_channel *p_channel; 
  __int64 v7; 
  float v8; 
  float v9; 
  unsigned int v10; 
  unsigned int v11; 
  _QWORD *v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v20; 
  __int64 v21; 
  _QWORD *v23; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v30; 
  __int64 v31; 
  float v33; 
  float v34; 
  bool v35; 

  *(_QWORD *)volsY = 0i64;
  *((_QWORD *)volsY + 1) = 0i64;
  *((_QWORD *)volsY + 2) = 0i64;
  *((_QWORD *)volsY + 3) = 0i64;
  *((_QWORD *)volsY + 4) = 0i64;
  *((_QWORD *)volsY + 5) = 0i64;
  *((_QWORD *)volsY + 6) = 0i64;
  *((_QWORD *)volsY + 7) = 0i64;
  if ( numSpkInfos )
  {
    p_channel = &spkInfos->channel;
    v7 = numSpkInfos;
    while ( 1 )
    {
      v8 = *((float *)p_channel - 2);
      v9 = objPos->v[1];
      v10 = *((_DWORD *)p_channel + 67);
      v11 = 0;
      if ( v8 < v9 )
      {
        *(float *)&_XMM1 = FLOAT_2_0;
        if ( v10 >= 4 )
        {
          v23 = p_channel + 37;
          v24 = ((v10 - 4) >> 2) + 1;
          v25 = v24;
          v11 = 4 * v24;
          do
          {
            _XMM0 = *(unsigned int *)(*(v23 - 1) + 4i64);
            if ( *(float *)&_XMM0 > v8 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _XMM0 = *(unsigned int *)(*v23 + 4i64);
            if ( *(float *)&_XMM0 > v8 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _XMM0 = *(unsigned int *)(v23[1] + 4i64);
            if ( *(float *)&_XMM0 > v8 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _XMM0 = *(unsigned int *)(v23[2] + 4i64);
            if ( *(float *)&_XMM0 > v8 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            v23 += 4;
            --v25;
          }
          while ( v25 );
        }
        if ( v11 < v10 )
        {
          v30 = v10 - v11;
          v31 = (__int64)&p_channel[2 * v11 + 35];
          do
          {
            _XMM0 = *(unsigned int *)(*(_QWORD *)v31 + 4i64);
            if ( *(float *)&_XMM0 > v8 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            v31 += 8i64;
            --v30;
          }
          while ( v30 );
        }
      }
      else
      {
        *(float *)&_XMM1 = FLOAT_N2_0;
        if ( v10 >= 4 )
        {
          v13 = p_channel + 37;
          v14 = ((v10 - 4) >> 2) + 1;
          v15 = v14;
          v11 = 4 * v14;
          do
          {
            _XMM0 = *(unsigned int *)(*(v13 - 1) + 4i64);
            if ( *(float *)&_XMM0 < v8 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = *(unsigned int *)(*v13 + 4i64);
            if ( *(float *)&_XMM0 < v8 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = *(unsigned int *)(v13[1] + 4i64);
            if ( *(float *)&_XMM0 < v8 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = *(unsigned int *)(v13[2] + 4i64);
            if ( *(float *)&_XMM0 < v8 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            v13 += 4;
            --v15;
          }
          while ( v15 );
        }
        if ( v11 < v10 )
        {
          v20 = v10 - v11;
          v21 = (__int64)&p_channel[2 * v11 + 35];
          do
          {
            _XMM0 = *(unsigned int *)(*(_QWORD *)v21 + 4i64);
            if ( *(float *)&_XMM0 < v8 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            v21 += 8i64;
            --v20;
          }
          while ( v20 );
        }
      }
      v33 = v8 - v9;
      v34 = *(float *)&_XMM1 - v9;
      if ( COERCE_FLOAT(_XMM1 & _xmm) < 2.0 )
        break;
      volsY[*(int *)p_channel] = 1.0;
LABEL_50:
      p_channel += 72;
      if ( !--v7 )
        return;
    }
    v35 = v34 < 0.0;
    if ( v34 > 0.0 )
    {
      if ( v33 > 0.0 )
      {
LABEL_45:
        volsY[*(int *)p_channel] = 0.0;
        goto LABEL_50;
      }
      v35 = v34 < 0.0;
    }
    if ( (!v35 || v33 >= 0.0) && v34 != 0.0 )
    {
      if ( (float)(*(float *)&_XMM1 - v8) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_spatialize.cpp", 306, ASSERT_TYPE_ASSERT, "(( adjacentY - speakerY ) != 0.0f)", (const char *)&queryFormat, "( adjacentY - speakerY ) != 0.0f") )
        __debugbreak();
      volsY[*(int *)p_channel] = cosf_0((float)(v33 / (float)(*(float *)&_XMM1 - v8)) * 1.5707964);
      goto LABEL_50;
    }
    goto LABEL_45;
  }
}

/*
==============
SND_GetPannerVolsZ
==============
*/
void SND_GetPannerVolsZ(const SpeakerInfo *const spkInfos, const unsigned int numSpkInfos, const vec3_t *objPos, float *volsZ)
{
  unsigned int v4; 
  sd_mix_channel *i; 
  float v10; 
  float v11; 
  __int64 v12; 
  int v18; 
  __int64 v25; 
  __int64 v33; 
  int v51; 
  float *v52; 
  float *v57; 
  int v60; 
  __int64 v67; 
  __int64 v75; 
  int v93; 
  float *v94; 
  float *v99; 
  float v101; 
  float v102; 
  bool v103; 
  float v104; 

  v4 = 0;
  *(_QWORD *)volsZ = 0i64;
  *((_QWORD *)volsZ + 1) = 0i64;
  *((_QWORD *)volsZ + 2) = 0i64;
  *((_QWORD *)volsZ + 3) = 0i64;
  *((_QWORD *)volsZ + 4) = 0i64;
  *((_QWORD *)volsZ + 5) = 0i64;
  *((_QWORD *)volsZ + 6) = 0i64;
  *((_QWORD *)volsZ + 7) = 0i64;
  if ( numSpkInfos )
  {
    for ( i = &spkInfos->channel; ; i += 72 )
    {
      v10 = *((float *)i - 1);
      v11 = objPos->v[2];
      v12 = 0i64;
      _XMM8 = v4;
      _XMM7 = _mm_shuffle_ps((__m128)LODWORD(v10), (__m128)LODWORD(v10), 0);
      __asm { vpshufd xmm8, xmm8, 0 }
      if ( v10 < v11 )
      {
        *(float *)&_XMM2 = FLOAT_2_0;
        if ( numSpkInfos >= 8 )
        {
          _XMM9 = _xmm;
          v60 = 2;
          _XMM10 = _xmm;
          do
          {
            _XMM0 = (unsigned int)v12;
            __asm
            {
              vpshufd xmm0, xmm0, 0
              vpaddd  xmm0, xmm0, xmm11
              vpcmpeqd xmm1, xmm0, xmm8
              vpandn  xmm3, xmm1, xmm14
            }
            v67 = v12;
            v12 = (unsigned int)(v12 + 8);
            _XMM5 = LODWORD(spkInfos[v67].pos.v[2]);
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [rdx+r14+8], 10h
              vinsertps xmm5, xmm5, dword ptr [r8+r14+8], 20h ; ' '
              vinsertps xmm5, xmm5, dword ptr [r10+r14+8], 30h ; '0'
              vminps  xmm0, xmm9, xmm5
              vcmpltps xmm2, xmm7, xmm5
            }
            _XMM4 = _XMM3 & _XMM2;
            v75 = (unsigned int)(v60 + 2);
            __asm { vandnps xmm1, xmm4, xmm9 }
            _XMM9 = _XMM0 & _XMM3 & _XMM2 | _XMM1;
            v60 += 8;
            _XMM0 = (unsigned int)v75;
            __asm { vpshufd xmm0, xmm0, 0 }
            _XMM5 = LODWORD(spkInfos[v75].pos.v[2]);
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [rdx+r14+8], 10h
              vinsertps xmm5, xmm5, dword ptr [r8+r14+8], 20h ; ' '
              vinsertps xmm5, xmm5, dword ptr [r9+r14+8], 30h ; '0'
              vpaddd  xmm0, xmm0, xmm11
              vpcmpeqd xmm1, xmm0, xmm8
              vcmpltps xmm2, xmm7, xmm5
              vpandn  xmm3, xmm1, xmm14
            }
            _XMM4 = _XMM3 & _XMM2;
            __asm
            {
              vminps  xmm0, xmm10, xmm5
              vandnps xmm1, xmm4, xmm10
            }
            _XMM10 = _XMM0 & _XMM3 & _XMM2 | _XMM1;
          }
          while ( (unsigned int)v12 < (numSpkInfos & 0xFFFFFFF8) );
          __asm
          {
            vminps  xmm1, xmm9, xmm10
            vmovhlps xmm0, xmm1, xmm1
            vminps  xmm2, xmm0, xmm1
          }
          _mm_shuffle_ps(_XMM2, _XMM2, 245);
          __asm { vminss  xmm2, xmm2, xmm0 }
        }
        if ( (unsigned int)v12 < numSpkInfos )
        {
          if ( numSpkInfos - (unsigned int)v12 >= 4 )
          {
            v93 = v12 + 2;
            v94 = &spkInfos[v12 + 1].pos.v[2];
            do
            {
              if ( (_DWORD)v12 != v4 )
              {
                _XMM0 = *((unsigned int *)v94 - 72);
                if ( *(float *)&_XMM0 > v10 )
                  __asm { vminss  xmm2, xmm0, xmm2 }
              }
              if ( v93 - 1 != v4 )
              {
                _XMM0 = *(unsigned int *)v94;
                if ( *(float *)&_XMM0 > v10 )
                  __asm { vminss  xmm2, xmm0, xmm2 }
              }
              if ( v93 != v4 )
              {
                _XMM0 = *((unsigned int *)v94 + 72);
                if ( *(float *)&_XMM0 > v10 )
                  __asm { vminss  xmm2, xmm0, xmm2 }
              }
              if ( v93 + 1 != v4 )
              {
                _XMM0 = *((unsigned int *)v94 + 144);
                if ( *(float *)&_XMM0 > v10 )
                  __asm { vminss  xmm2, xmm0, xmm2 }
              }
              v94 += 288;
              v12 = (unsigned int)(v12 + 4);
              v93 += 4;
            }
            while ( (unsigned int)v12 < numSpkInfos - 3 );
          }
          if ( (unsigned int)v12 < numSpkInfos )
          {
            v99 = &spkInfos[v12].pos.v[2];
            do
            {
              if ( (_DWORD)v12 != v4 )
              {
                _XMM0 = *(unsigned int *)v99;
                if ( *(float *)&_XMM0 > v10 )
                  __asm { vminss  xmm2, xmm0, xmm2 }
              }
              v99 += 72;
              LODWORD(v12) = v12 + 1;
            }
            while ( (unsigned int)v12 < numSpkInfos );
          }
        }
      }
      else
      {
        *(float *)&_XMM2 = FLOAT_N2_0;
        if ( numSpkInfos >= 8 )
        {
          _XMM9 = _xmm_c0000000c0000000c0000000c0000000;
          v18 = 2;
          _XMM10 = _xmm_c0000000c0000000c0000000c0000000;
          do
          {
            _XMM0 = (unsigned int)v12;
            __asm
            {
              vpshufd xmm0, xmm0, 0
              vpaddd  xmm0, xmm0, xmm11
              vpcmpeqd xmm1, xmm0, xmm8
              vpandn  xmm3, xmm1, xmm14
            }
            v25 = v12;
            v12 = (unsigned int)(v12 + 8);
            _XMM5 = LODWORD(spkInfos[v25].pos.v[2]);
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [rdx+r14+8], 10h
              vinsertps xmm5, xmm5, dword ptr [r8+r14+8], 20h ; ' '
              vinsertps xmm5, xmm5, dword ptr [r10+r14+8], 30h ; '0'
              vmaxps  xmm0, xmm9, xmm5
              vcmpltps xmm2, xmm5, xmm7
            }
            _XMM4 = _XMM3 & _XMM2;
            v33 = (unsigned int)(v18 + 2);
            __asm { vandnps xmm1, xmm4, xmm9 }
            _XMM9 = _XMM0 & _XMM3 & _XMM2 | _XMM1;
            v18 += 8;
            _XMM0 = (unsigned int)v33;
            __asm { vpshufd xmm0, xmm0, 0 }
            _XMM5 = LODWORD(spkInfos[v33].pos.v[2]);
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [rdx+r14+8], 10h
              vinsertps xmm5, xmm5, dword ptr [r8+r14+8], 20h ; ' '
              vinsertps xmm5, xmm5, dword ptr [r9+r14+8], 30h ; '0'
              vpaddd  xmm0, xmm0, xmm11
              vpcmpeqd xmm1, xmm0, xmm8
              vcmpltps xmm2, xmm5, xmm7
              vpandn  xmm3, xmm1, xmm14
            }
            _XMM4 = _XMM3 & _XMM2;
            __asm
            {
              vmaxps  xmm0, xmm10, xmm5
              vandnps xmm1, xmm4, xmm10
            }
            _XMM10 = _XMM0 & _XMM3 & _XMM2 | _XMM1;
          }
          while ( (unsigned int)v12 < (numSpkInfos & 0xFFFFFFF8) );
          __asm
          {
            vmaxps  xmm1, xmm9, xmm10
            vmovhlps xmm0, xmm1, xmm1
            vmaxps  xmm2, xmm0, xmm1
          }
          _mm_shuffle_ps(_XMM2, _XMM2, 245);
          __asm { vmaxss  xmm2, xmm2, xmm0 }
        }
        if ( (unsigned int)v12 < numSpkInfos )
        {
          if ( numSpkInfos - (unsigned int)v12 >= 4 )
          {
            v51 = v12 + 2;
            v52 = &spkInfos[v12 + 1].pos.v[2];
            do
            {
              if ( (_DWORD)v12 != v4 )
              {
                _XMM0 = *((unsigned int *)v52 - 72);
                if ( *(float *)&_XMM0 < v10 )
                  __asm { vmaxss  xmm2, xmm0, xmm2 }
              }
              if ( v51 - 1 != v4 )
              {
                _XMM0 = *(unsigned int *)v52;
                if ( *(float *)&_XMM0 < v10 )
                  __asm { vmaxss  xmm2, xmm0, xmm2 }
              }
              if ( v51 != v4 )
              {
                _XMM0 = *((unsigned int *)v52 + 72);
                if ( *(float *)&_XMM0 < v10 )
                  __asm { vmaxss  xmm2, xmm0, xmm2 }
              }
              if ( v51 + 1 != v4 )
              {
                _XMM0 = *((unsigned int *)v52 + 144);
                if ( *(float *)&_XMM0 < v10 )
                  __asm { vmaxss  xmm2, xmm0, xmm2 }
              }
              v52 += 288;
              v12 = (unsigned int)(v12 + 4);
              v51 += 4;
            }
            while ( (unsigned int)v12 < numSpkInfos - 3 );
          }
          if ( (unsigned int)v12 < numSpkInfos )
          {
            v57 = &spkInfos[v12].pos.v[2];
            do
            {
              if ( (_DWORD)v12 != v4 )
              {
                _XMM0 = *(unsigned int *)v57;
                if ( *(float *)&_XMM0 < v10 )
                  __asm { vmaxss  xmm2, xmm0, xmm2 }
              }
              v57 += 72;
              LODWORD(v12) = v12 + 1;
            }
            while ( (unsigned int)v12 < numSpkInfos );
          }
        }
      }
      v101 = v10 - v11;
      v102 = *(float *)&_XMM2 - v11;
      if ( COERCE_FLOAT(_XMM2 & _xmm) < 2.0 )
        break;
      volsZ[*(int *)i] = 1.0;
LABEL_70:
      if ( ++v4 >= numSpkInfos )
        return;
    }
    v103 = v102 < 0.0;
    if ( v102 > 0.0 )
    {
      if ( v101 > 0.0 )
      {
LABEL_65:
        volsZ[*(int *)i] = 0.0;
        goto LABEL_70;
      }
      v103 = v102 < 0.0;
    }
    if ( (!v103 || v101 >= 0.0) && v102 != 0.0 )
    {
      v104 = *(float *)&_XMM2 - v10;
      if ( v104 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_spatialize.cpp", 371, ASSERT_TYPE_ASSERT, "(( adjacentZ - speakerZ ) != 0.0f)", (const char *)&queryFormat, "( adjacentZ - speakerZ ) != 0.0f") )
        __debugbreak();
      volsZ[*(int *)i] = cosf_0((float)(v101 / v104) * 1.5707964);
      goto LABEL_70;
    }
    goto LABEL_65;
  }
}

/*
==============
SND_InitDolbyPanner
==============
*/
void SND_InitDolbyPanner(SpeakerInfo *const spkInfos, const unsigned int numSpkInfos)
{
  unsigned int v4; 
  SpeakerInfo *v5; 
  float v6; 
  float v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  float *v12; 
  SpeakerInfo *v13; 

  if ( numSpkInfos )
  {
    v4 = 0;
    v5 = spkInfos;
    do
    {
      v6 = v5->pos.v[0];
      v7 = v5->pos.v[2];
      v8 = 0i64;
      v9 = 0i64;
      v10 = 0i64;
      if ( numSpkInfos >= 4 )
      {
        v11 = 2;
        v12 = &spkInfos[2].pos.v[2];
        do
        {
          if ( (_DWORD)v10 != v4 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(v12 - 144) - v7) & _xmm) < 0.001 )
          {
            v5->speakersInPlane[v8] = (const SpeakerInfo *)(v12 - 146);
            v8 = (unsigned int)(v8 + 1);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(v12 - 146) - v6) & _xmm) < 0.001 )
            {
              v5->speakersInRow[v9] = (const SpeakerInfo *)(v12 - 146);
              v9 = (unsigned int)(v9 + 1);
            }
          }
          if ( v11 - 1 != v4 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(v12 - 72) - v7) & _xmm) < 0.001 )
          {
            v5->speakersInPlane[v8] = (const SpeakerInfo *)(v12 - 74);
            v8 = (unsigned int)(v8 + 1);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(v12 - 74) - v6) & _xmm) < 0.001 )
            {
              v5->speakersInRow[v9] = (const SpeakerInfo *)(v12 - 74);
              v9 = (unsigned int)(v9 + 1);
            }
          }
          if ( v11 != v4 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*v12 - v7) & _xmm) < 0.001 )
          {
            v5->speakersInPlane[v8] = (const SpeakerInfo *)(v12 - 2);
            v8 = (unsigned int)(v8 + 1);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(v12 - 2) - v6) & _xmm) < 0.001 )
            {
              v5->speakersInRow[v9] = (const SpeakerInfo *)(v12 - 2);
              v9 = (unsigned int)(v9 + 1);
            }
          }
          if ( v11 + 1 != v4 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v12[72] - v7) & _xmm) < 0.001 )
          {
            v5->speakersInPlane[v8] = (const SpeakerInfo *)(v12 + 70);
            v8 = (unsigned int)(v8 + 1);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12[70] - v6) & _xmm) < 0.001 )
            {
              v5->speakersInRow[v9] = (const SpeakerInfo *)(v12 + 70);
              v9 = (unsigned int)(v9 + 1);
            }
          }
          v12 += 288;
          v10 = (unsigned int)(v10 + 4);
          v11 += 4;
        }
        while ( (unsigned int)v10 < numSpkInfos - 3 );
      }
      if ( (unsigned int)v10 < numSpkInfos )
      {
        v13 = &spkInfos[v10];
        do
        {
          if ( (_DWORD)v10 != v4 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v13->pos.v[2] - v7) & _xmm) < 0.001 )
          {
            v5->speakersInPlane[v8] = v13;
            v8 = (unsigned int)(v8 + 1);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13->pos.v[0] - v6) & _xmm) < 0.001 )
            {
              v5->speakersInRow[v9] = v13;
              v9 = (unsigned int)(v9 + 1);
            }
          }
          ++v13;
          LODWORD(v10) = v10 + 1;
        }
        while ( (unsigned int)v10 < numSpkInfos );
      }
      v5->numSpeakersInPlane = v8;
      ++v4;
      v5->numSpeakersInRow = v9;
      ++v5;
    }
    while ( v4 < numSpkInfos );
  }
}

/*
==============
SND_InitDolbyPanners
==============
*/
void SND_InitDolbyPanners(void)
{
  unsigned int v0; 
  const SpeakerInfo **speakersInPlane; 
  float v2; 
  float v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = 0;
  speakersInPlane = s_speakerInfoStereo[0].speakersInPlane;
  do
  {
    v2 = *((float *)speakersInPlane - 4);
    v3 = *((float *)speakersInPlane - 2);
    v4 = 0;
    v5 = 0;
    if ( v0 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(s_speakerInfoStereo[0].pos.v[2] - v3) & _xmm) < 0.001 )
      {
        *speakersInPlane = s_speakerInfoStereo;
        v4 = 1;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(s_speakerInfoStereo[0].pos.v[0] - v2) & _xmm) < 0.001 )
        {
          speakersInPlane[17] = s_speakerInfoStereo;
          v5 = 1;
        }
      }
    }
    if ( v0 != 1 && COERCE_FLOAT(COERCE_UNSIGNED_INT(s_speakerInfoStereo[1].pos.v[2] - v3) & _xmm) < 0.001 )
    {
      v6 = v4++;
      speakersInPlane[v6] = &s_speakerInfoStereo[1];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(s_speakerInfoStereo[1].pos.v[0] - v2) & _xmm) < 0.001 )
      {
        v7 = v5++;
        speakersInPlane[v7 + 17] = &s_speakerInfoStereo[1];
      }
    }
    *((_DWORD *)speakersInPlane + 32) = v4;
    ++v0;
    *((_DWORD *)speakersInPlane + 66) = v5;
    speakersInPlane += 36;
  }
  while ( v0 < 2 );
  SND_InitDolbyPanner(s_speakerInfoQuad, 4u);
  SND_InitDolbyPanner(s_speakerInfo51, 5u);
  SND_InitDolbyPanner(s_speakerInfo61, 6u);
  SND_InitDolbyPanner(s_speakerInfo71, 7u);
  SND_InitDolbyPanner(s_speakerInfo7144, 0xFu);
}

/*
==============
SND_Spatialize51
==============
*/
void SND_Spatialize51(float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  const SpeakerInfo *v13; 
  int v14; 
  bool v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  unsigned int v26; 
  float *i; 
  float *v28; 
  float v29; 
  __int128 v31; 
  __int128 v40; 
  __int64 v42; 
  __int64 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v51; 
  float v58; 
  float v59; 

  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_dolby_panning_disable, "snd_dolby_panning_disable") )
  {
    v14 = srcChannelCount;
    v15 = 0;
    v16 = 0.0;
    if ( spreadMaxDist <= 0.0 )
    {
LABEL_18:
      v19 = delta->v[1];
      v20 = delta->v[2];
      v21 = LODWORD(v19);
      *(float *)&v21 = (float)((float)(v19 * listener->orient.axis.m[1].v[1]) + (float)(delta->v[0] * listener->orient.axis.m[1].v[0])) + (float)(v20 * listener->orient.axis.m[1].v[2]);
      LODWORD(v22) = v21 ^ _xmm;
      v23 = v21 ^ _xmm;
      v58 = (float)((float)(v19 * listener->orient.axis.m[0].v[1]) + (float)(delta->v[0] * listener->orient.axis.m[0].v[0])) + (float)(v20 * listener->orient.axis.m[0].v[2]);
      *(float *)&v23 = atan2f_0(COERCE_FLOAT(v21 ^ _xmm), v58);
      v25 = v23;
      *(float *)&v25 = *(float *)&v23 * 57.295776;
      v24 = v25;
      v26 = 0;
      v59 = *(float *)&v23 * 57.295776;
      if ( v14 <= 0 )
        return;
      for ( i = volumes; ; i += 16 )
      {
        v28 = i;
        if ( v15 )
          v28 = volumes;
        if ( v58 == 0.0 && v22 == 0.0 )
        {
          if ( includeCenterChannel )
          {
            v29 = FLOAT_0_28250751;
            v28[2] = 0.28250751;
          }
          else
          {
            v29 = FLOAT_0_35313439;
          }
          *v28 = v29;
          v28[1] = v29;
          v28[4] = v29;
          v28[5] = v29;
          goto LABEL_47;
        }
        v31 = v24;
        *(float *)&v31 = *(float *)&v24 + v16;
        _XMM3 = v31;
        _XMM0 = v26;
        __asm
        {
          vpcmpeqd xmm1, xmm0, xmm1
          vblendvps xmm4, xmm3, xmm2, xmm1
        }
        _XMM3 = LODWORD(FLOAT_360_0);
        __asm
        {
          vcmpltss xmm0, xmm4, xmm7
          vblendvps xmm2, xmm4, xmm1, xmm0
          vcmpless xmm0, xmm3, xmm2
          vblendvps xmm0, xmm2, xmm1, xmm0
        }
        if ( !includeCenterChannel )
          break;
        if ( *(float *)&_XMM0 > 315.0 )
        {
          v40 = (unsigned int)_XMM0;
          *(float *)&v40 = (float)(*(float *)&_XMM0 - 315.0) * 0.022222223;
          _XMM2 = v40;
          v42 = 2i64;
          goto LABEL_45;
        }
        if ( *(float *)&_XMM0 > 225.0 )
          goto LABEL_38;
        if ( *(float *)&_XMM0 > 135.0 )
          goto LABEL_40;
        if ( *(float *)&_XMM0 > 45.0 )
          goto LABEL_42;
        v43 = 2i64;
        v44 = (unsigned int)_XMM0;
        *(float *)&v44 = *(float *)&_XMM0 * 0.022222223;
        _XMM2 = v44;
        v42 = 1i64;
LABEL_46:
        v51 = LODWORD(FLOAT_1_0);
        *(float *)&v51 = 1.0 - *(float *)&_XMM2;
        _XMM0 = v51;
        __asm
        {
          vmaxss  xmm0, xmm0, xmm7
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm1, xmm1, dword ptr [rdx+rax*4]
        }
        v28[v43] = *(float *)&_XMM1;
        __asm
        {
          vmaxss  xmm0, xmm2, xmm7
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, dword ptr [rdx+rcx*4]
        }
        v24 = LODWORD(v59);
        v28[v42] = *(float *)&_XMM2;
LABEL_47:
        if ( (int)++v26 >= v14 )
          return;
      }
      if ( *(float *)&_XMM0 > 315.0 )
      {
        v45 = (unsigned int)_XMM0;
        *(float *)&v45 = (float)(*(float *)&_XMM0 - 315.0) * 0.011111111;
        _XMM2 = v45;
        goto LABEL_44;
      }
      if ( *(float *)&_XMM0 <= 225.0 )
      {
        if ( *(float *)&_XMM0 <= 135.0 )
        {
          if ( *(float *)&_XMM0 <= 45.0 )
          {
            v49 = (unsigned int)_XMM0;
            *(float *)&v49 = (float)(*(float *)&_XMM0 * 0.011111111) + 0.5;
            _XMM2 = v49;
LABEL_44:
            v42 = 1i64;
LABEL_45:
            v43 = 0i64;
            goto LABEL_46;
          }
LABEL_42:
          v43 = 1i64;
          v48 = (unsigned int)_XMM0;
          *(float *)&v48 = (float)(*(float *)&_XMM0 - 45.0) * 0.011111111;
          _XMM2 = v48;
          v42 = 5i64;
          goto LABEL_46;
        }
LABEL_40:
        v43 = 5i64;
        v47 = (unsigned int)_XMM0;
        *(float *)&v47 = (float)(*(float *)&_XMM0 - 135.0) * 0.011111111;
        _XMM2 = v47;
        v42 = 4i64;
        goto LABEL_46;
      }
LABEL_38:
      v46 = (unsigned int)_XMM0;
      *(float *)&v46 = (float)(*(float *)&_XMM0 - 225.0) * 0.011111111;
      _XMM2 = v46;
      v43 = 4i64;
      v42 = 0i64;
      goto LABEL_46;
    }
    v14 = 2;
    v16 = stereoSpreadMaxAngle * 0.5;
    v15 = srcChannelCount == 1;
    if ( spreadMidPoint == spreadMaxDist )
    {
      if ( dist >= spreadMaxDist )
      {
        v16 = 0.0;
        goto LABEL_18;
      }
      v17 = spreadMinDist;
      if ( dist < spreadMinDist )
        goto LABEL_18;
    }
    else
    {
      if ( dist >= spreadMidPoint && dist < spreadMaxDist )
      {
        v18 = (float)(dist - spreadMidPoint) / (float)(spreadMaxDist - spreadMidPoint);
LABEL_17:
        v16 = (float)(stereoSpreadMaxAngle * 0.5) * v18;
        goto LABEL_18;
      }
      v17 = spreadMinDist;
      if ( dist < spreadMinDist || dist >= spreadMidPoint )
        goto LABEL_18;
    }
    v18 = 1.0 - (float)((float)(dist - v17) / (float)(spreadMidPoint - v17));
    goto LABEL_17;
  }
  v13 = s_speakerInfo51;
  if ( !includeCenterChannel )
    v13 = s_speakerInfoQuad;
  SND_SpatializeDolby(v13, includeCenterChannel + 4, volumes, delta, listener, dist, srcChannelCount, includeCenterChannel, spreadMinDist, spreadMaxDist, spreadMidPoint, stereoSpreadMaxAngle);
}

/*
==============
SND_Spatialize7144
==============
*/
void SND_Spatialize7144(float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  SND_SpatializeDolby(s_speakerInfo7144, 0xFu, volumes, delta, listener, dist, srcChannelCount, includeCenterChannel, spreadMinDist, spreadMaxDist, spreadMidPoint, stereoSpreadMaxAngle);
}

/*
==============
SND_Spatialize71
==============
*/
void SND_Spatialize71(float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  const SpeakerInfo *v13; 
  int v14; 
  bool v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 
  unsigned int v25; 
  float *i; 
  float *v27; 
  float v28; 
  __int128 v30; 
  __int128 v39; 
  __int64 v41; 
  __int64 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 
  __int128 v54; 
  float v61; 
  float v62; 
  float v63; 

  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_dolby_panning_disable, "snd_dolby_panning_disable") )
  {
    v14 = 1;
    v15 = 0;
    v16 = 0.0;
    if ( spreadMaxDist <= 0.0 )
    {
LABEL_18:
      v19 = delta->v[1];
      v20 = delta->v[2];
      v21 = LODWORD(v19);
      *(float *)&v21 = (float)((float)(v19 * listener->orient.axis.m[1].v[1]) + (float)(delta->v[0] * listener->orient.axis.m[1].v[0])) + (float)(v20 * listener->orient.axis.m[1].v[2]);
      v22 = v21 ^ _xmm;
      LODWORD(v62) = v21 ^ _xmm;
      v61 = (float)((float)(v19 * listener->orient.axis.m[0].v[1]) + (float)(delta->v[0] * listener->orient.axis.m[0].v[0])) + (float)(v20 * listener->orient.axis.m[0].v[2]);
      *(float *)&v22 = atan2f_0(COERCE_FLOAT(v21 ^ _xmm), v61);
      v24 = v22;
      *(float *)&v24 = *(float *)&v22 * 57.295776;
      v23 = v24;
      v63 = *(float *)&v22 * 57.295776;
      v25 = 0;
      for ( i = volumes; ; i += 16 )
      {
        v27 = i;
        if ( v15 )
          v27 = volumes;
        if ( v61 == 0.0 && v62 == 0.0 )
        {
          if ( includeCenterChannel )
          {
            v28 = FLOAT_0_20179108;
            v27[2] = 0.20179108;
          }
          else
          {
            v28 = FLOAT_0_23542292;
          }
          *v27 = v28;
          v27[1] = v28;
          v27[4] = v28;
          v27[5] = v28;
          goto LABEL_53;
        }
        v30 = v23;
        *(float *)&v30 = *(float *)&v23 + v16;
        _XMM3 = v30;
        _XMM0 = v25;
        __asm
        {
          vpcmpeqd xmm1, xmm0, xmm1
          vblendvps xmm4, xmm3, xmm2, xmm1
        }
        _XMM3 = LODWORD(FLOAT_360_0);
        __asm
        {
          vcmpltss xmm0, xmm4, xmm7
          vblendvps xmm2, xmm4, xmm1, xmm0
          vcmpless xmm0, xmm3, xmm2
          vblendvps xmm0, xmm2, xmm1, xmm0
        }
        if ( includeCenterChannel )
        {
          if ( *(float *)&_XMM0 > 315.0 )
          {
            v39 = (unsigned int)_XMM0;
            *(float *)&v39 = (float)(*(float *)&_XMM0 - 315.0) * 0.022222223;
            _XMM3 = v39;
            v41 = 2i64;
            goto LABEL_51;
          }
          if ( *(float *)&_XMM0 > 270.0 )
          {
LABEL_40:
            v46 = (unsigned int)_XMM0;
            *(float *)&v46 = (float)(*(float *)&_XMM0 - 270.0) * 0.022222223;
            _XMM3 = v46;
            v42 = 4i64;
            v41 = 0i64;
            goto LABEL_52;
          }
          if ( *(float *)&_XMM0 > 225.0 )
            goto LABEL_42;
          if ( *(float *)&_XMM0 <= 135.0 )
          {
            if ( *(float *)&_XMM0 > 90.0 )
              goto LABEL_46;
            if ( *(float *)&_XMM0 > 45.0 )
              goto LABEL_48;
            v42 = 2i64;
            v44 = (unsigned int)_XMM0;
            *(float *)&v44 = *(float *)&_XMM0 * 0.022222223;
            _XMM3 = v44;
            v41 = 1i64;
          }
          else
          {
            v42 = 7i64;
            v43 = (unsigned int)_XMM0;
            *(float *)&v43 = (float)(*(float *)&_XMM0 - 135.0) * 0.011111111;
            _XMM3 = v43;
            v41 = 6i64;
          }
        }
        else
        {
          if ( *(float *)&_XMM0 > 315.0 )
          {
            v45 = (unsigned int)_XMM0;
            *(float *)&v45 = (float)(*(float *)&_XMM0 - 315.0) * 0.011111111;
            _XMM3 = v45;
            goto LABEL_50;
          }
          if ( *(float *)&_XMM0 > 270.0 )
            goto LABEL_40;
          if ( *(float *)&_XMM0 > 225.0 )
          {
LABEL_42:
            v42 = 6i64;
            v47 = (unsigned int)_XMM0;
            *(float *)&v47 = (float)(*(float *)&_XMM0 - 225.0) * 0.022222223;
            _XMM3 = v47;
            v41 = 4i64;
            goto LABEL_52;
          }
          if ( *(float *)&_XMM0 <= 135.0 )
          {
            if ( *(float *)&_XMM0 <= 90.0 )
            {
              if ( *(float *)&_XMM0 <= 45.0 )
              {
                v51 = (unsigned int)_XMM0;
                *(float *)&v51 = (float)(*(float *)&_XMM0 * 0.011111111) + 0.5;
                _XMM3 = v51;
LABEL_50:
                v41 = 1i64;
LABEL_51:
                v42 = 0i64;
                goto LABEL_52;
              }
LABEL_48:
              v42 = 1i64;
              v50 = (unsigned int)_XMM0;
              *(float *)&v50 = (float)(*(float *)&_XMM0 - 45.0) * 0.022222223;
              _XMM3 = v50;
              v41 = 5i64;
              goto LABEL_52;
            }
LABEL_46:
            v42 = 5i64;
            v49 = (unsigned int)_XMM0;
            *(float *)&v49 = (float)(*(float *)&_XMM0 - 90.0) * 0.022222223;
            _XMM3 = v49;
            v41 = 7i64;
            goto LABEL_52;
          }
          v42 = 7i64;
          v48 = (unsigned int)_XMM0;
          *(float *)&v48 = (float)(*(float *)&_XMM0 - 135.0) * 0.011111111;
          _XMM3 = v48;
          v41 = 6i64;
        }
LABEL_52:
        _XMM1 = LODWORD(v27[v42]);
        v54 = LODWORD(FLOAT_1_0);
        *(float *)&v54 = 1.0 - *(float *)&_XMM3;
        _XMM0 = v54;
        __asm
        {
          vmaxss  xmm0, xmm0, xmm7
          vminss  xmm2, xmm0, xmm15
          vmaxss  xmm0, xmm1, xmm2
        }
        v27[v42] = *(float *)&_XMM0;
        __asm
        {
          vmaxss  xmm0, xmm3, xmm7
          vminss  xmm1, xmm0, xmm15
          vmaxss  xmm2, xmm1, dword ptr [rdx+rcx*4]
        }
        v23 = LODWORD(v63);
        v27[v41] = *(float *)&_XMM2;
LABEL_53:
        if ( (int)++v25 >= v14 )
          return;
      }
    }
    v14 = 2;
    v16 = stereoSpreadMaxAngle * 0.5;
    v15 = srcChannelCount == 1;
    if ( spreadMidPoint == spreadMaxDist )
    {
      if ( dist >= spreadMaxDist )
      {
        v16 = 0.0;
        goto LABEL_18;
      }
      v17 = spreadMinDist;
      if ( dist < spreadMinDist )
        goto LABEL_18;
    }
    else
    {
      if ( dist >= spreadMidPoint && dist < spreadMaxDist )
      {
        v18 = (float)(dist - spreadMidPoint) / (float)(spreadMaxDist - spreadMidPoint);
LABEL_17:
        v16 = (float)(stereoSpreadMaxAngle * 0.5) * v18;
        goto LABEL_18;
      }
      v17 = spreadMinDist;
      if ( dist < spreadMinDist || dist >= spreadMidPoint )
        goto LABEL_18;
    }
    v18 = 1.0 - (float)((float)(dist - v17) / (float)(spreadMidPoint - v17));
    goto LABEL_17;
  }
  v13 = s_speakerInfo71;
  if ( !includeCenterChannel )
    v13 = s_speakerInfo61;
  SND_SpatializeDolby(v13, includeCenterChannel + 6, volumes, delta, listener, dist, srcChannelCount, includeCenterChannel, spreadMinDist, spreadMaxDist, spreadMidPoint, stereoSpreadMaxAngle);
}

/*
==============
SND_SpatializeDolby
==============
*/
void SND_SpatializeDolby(const SpeakerInfo *const spkInfos, const unsigned int numSpkInfos, float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  unsigned __int64 v12; 
  int v16; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  float *v21; 
  int v22; 
  orientation_t *p_inverse; 
  float *v24; 
  vec3_t *v25; 
  __int128 v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  unsigned __int64 v35; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  unsigned __int64 v41; 
  float *v42; 
  __int64 v43; 
  __int128 v44; 
  __int128 v47; 
  __int128 v49; 
  __int128 v50; 
  __int128 v53; 
  __int64 i; 
  __int64 v60; 
  char v61[488]; 

  v12 = (unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v12 + 384) = (unsigned __int64)&v60 ^ _security_cookie;
  *(_QWORD *)(v12 + 16) = delta;
  v16 = 1;
  v17 = 0i64;
  if ( spreadMaxDist <= 0.0 )
    goto LABEL_13;
  v18 = LODWORD(stereoSpreadMaxAngle);
  *(float *)&v18 = stereoSpreadMaxAngle * 0.5;
  v17 = v18;
  v16 = 2;
  if ( spreadMidPoint != spreadMaxDist )
  {
    if ( dist >= spreadMidPoint && dist < spreadMaxDist )
    {
      *(float *)&v18 = *(float *)&v18 * (float)((float)(dist - spreadMidPoint) / (float)(spreadMaxDist - spreadMidPoint));
      v17 = v18;
      goto LABEL_13;
    }
    v19 = spreadMinDist;
    if ( dist < spreadMinDist || dist >= spreadMidPoint )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( dist < spreadMaxDist )
  {
    v19 = spreadMinDist;
    if ( dist < spreadMinDist )
      goto LABEL_13;
LABEL_12:
    *(float *)&v18 = *(float *)&v18 * (float)(1.0 - (float)((float)(dist - v19) / (float)(spreadMidPoint - v19)));
    v17 = v18;
    goto LABEL_13;
  }
  v17 = 0i64;
LABEL_13:
  _XMM10 = v17 ^ _xmm;
  v21 = volumes;
  v22 = 0;
  p_inverse = &listener->inverse;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = &listener->inverse;
  *(_QWORD *)v12 = &listener->orient.axis.row2;
  do
  {
    v24 = volumes;
    if ( srcChannelCount != 1 )
      v24 = v21;
    v25 = OrientationDirToWorldDir((vec3_t *)(v12 + 24), p_inverse, delta);
    *(double *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = *(double *)v25->v;
    *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = v25->v[2];
    *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = 0;
    *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3C) = 0;
    *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = 0;
    if ( !VecNCompareCustomEpsilon((const float *)(v12 + 40), (const float *)(v12 + 56), 0.001, 3) )
    {
      v26 = *(unsigned int *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C);
      v27 = *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
      v28 = *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
      v29 = v26;
      *(float *)&v29 = (float)((float)(*(float *)&v26 * *(float *)&v26) + (float)(v27 * v27)) + (float)(v28 * v28);
      if ( *(float *)&v29 <= 0.0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
          __debugbreak();
        v27 = *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
        LODWORD(v26) = *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C);
        v28 = *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
      }
      _XMM1 = v29;
      __asm { vrsqrtss xmm2, xmm1, xmm6 }
      *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = v27 * *(float *)&_XMM2;
      *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = v28 * *(float *)&_XMM2;
      *(float *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C) = *(float *)&v26 * *(float *)&_XMM2;
    }
    _XMM0 = (unsigned int)v22;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm3, xmm10, xmm8, xmm2; degrees
    }
    RotatePointAroundVector((vec3_t *)(v12 + 72), *(const vec3_t **)v12, (const vec3_t *)(v12 + 40), *(float *)&_XMM3);
    SND_GetPannerVolsX(spkInfos, numSpkInfos, (const vec3_t *)(v12 + 72), (float *)(v12 + 192));
    SND_GetPannerVolsY(spkInfos, numSpkInfos, (const vec3_t *)(v12 + 72), (float *)(v12 + 96));
    SND_GetPannerVolsZ(spkInfos, numSpkInfos, (const vec3_t *)(v12 + 72), (float *)(v12 + 288));
    v35 = (unsigned __int64)(v24 + 15);
    if ( ((unsigned __int64)v24 > v12 + 348 || v35 < v12 + 288) && ((unsigned __int64)v24 > v12 + 252 || v35 < v12 + 192) && ((unsigned __int64)v24 > v12 + 156 || v35 < v12 + 96) )
    {
      for ( i = 0i64; i < 16; i += 4i64 )
      {
        _XMM0 = *(_OWORD *)&v24[i];
        _mm128_mul_ps(_mm128_mul_ps(*(__m128 *)(v12 + i * 4 + 96), *(__m128 *)(v12 + i * 4 + 192)), *(__m128 *)(v12 + i * 4 + 288));
        __asm { vmaxps  xmm1, xmm0, xmm3 }
        *(_OWORD *)&v24[i] = _XMM1;
      }
    }
    else
    {
      v36 = v12 + 96 - (_QWORD)v24;
      v37 = v12 + 192 - (_QWORD)v24;
      v38 = v12 + 288 - (_QWORD)v24;
      v39 = v12 + 196 - (_QWORD)v24;
      v40 = v12 + 100 - (_QWORD)v24;
      v41 = v12 + 292 - (_QWORD)v24;
      v42 = v24 + 2;
      v43 = 4i64;
      do
      {
        v44 = *(unsigned int *)((char *)v42 + v37 - 8);
        *(float *)&v44 = (float)(*(float *)((char *)v42 + v37 - 8) * *(float *)((char *)v42 + v36 - 8)) * *(float *)((char *)v42 + v38 - 8);
        _XMM2 = v44;
        __asm { vmaxss  xmm3, xmm2, dword ptr [rax-8] }
        v47 = *(unsigned int *)((char *)v42 + v40 - 8);
        *(float *)&v47 = (float)(*(float *)((char *)v42 + v40 - 8) * *(float *)((char *)v42 + v39 - 8)) * *(float *)((char *)v42 + v41 - 8);
        _XMM2 = v47;
        v49 = *(unsigned int *)((char *)v42 + v37);
        *(float *)&v49 = *(float *)((char *)v42 + v37) * *(float *)((char *)v42 + v36);
        v50 = *(unsigned int *)((char *)v42 + v40);
        *(v42 - 2) = *(float *)&_XMM3;
        __asm { vmaxss  xmm3, xmm2, dword ptr [rax-4] }
        *(float *)&v49 = *(float *)&v49 * *(float *)((char *)v42 + v38);
        _XMM2 = v49;
        v53 = v50;
        *(float *)&v53 = *(float *)&v50 * *(float *)((char *)v42 + v39);
        *(v42 - 1) = *(float *)&_XMM3;
        __asm { vmaxss  xmm3, xmm2, dword ptr [rax] }
        *(float *)&v53 = *(float *)&v53 * *(float *)((char *)v42 + v41);
        _XMM2 = v53;
        *v42 = *(float *)&_XMM3;
        __asm { vmaxss  xmm3, xmm2, dword ptr [rax+4] }
        v42[1] = *(float *)&_XMM3;
        v42 += 4;
        --v43;
      }
      while ( v43 );
    }
    p_inverse = *(orientation_t **)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
    ++v22;
    delta = *(const vec3_t **)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
    v21 += 16;
  }
  while ( v22 < v16 );
}

/*
==============
SND_SpatializeReverb
==============
*/
void SND_SpatializeReverb(float *volumes, const vec3_t *delta, const snd_listener *listener, const float minVol)
{
  float v4; 
  float v6; 
  float v7; 
  float v8; 
  unsigned __int128 v9; 
  float v10; 
  unsigned __int128 v11; 
  unsigned __int128 v13; 
  unsigned __int128 v14; 
  int v16; 
  unsigned __int128 v20; 
  __int128 v22; 
  __int128 v25; 
  __int128 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v35; 
  __int128 v38; 

  v4 = delta->v[2];
  LODWORD(v6) = LODWORD(delta->v[0]) ^ _xmm;
  LODWORD(v7) = LODWORD(delta->v[1]) ^ _xmm;
  v8 = (float)((float)(v7 * listener->orient.axis.m[0].v[1]) + (float)(v6 * listener->orient.axis.m[0].v[0])) + (float)(COERCE_FLOAT(LODWORD(v4) ^ _xmm) * listener->orient.axis.m[0].v[2]);
  v9 = LODWORD(delta->v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
  *(float *)&v9 = (float)((float)(v7 * listener->orient.axis.m[1].v[1]) + (float)(v6 * listener->orient.axis.m[1].v[0])) + (float)(COERCE_FLOAT(LODWORD(v4) ^ _xmm) * listener->orient.axis.m[1].v[2]);
  LODWORD(v10) = v9 ^ _xmm;
  v11 = v9 ^ (unsigned int)_xmm;
  *(float *)&v11 = atan2f_0(*(float *)&v11, v8);
  v14 = v11;
  *(float *)&v14 = *(float *)&v11 * 57.295776;
  v13 = v14;
  _XMM7 = LODWORD(FLOAT_360_0);
  *volumes = 1.0;
  v16 = 0;
  volumes[17] = 1.0;
  volumes[36] = 1.0;
  volumes[53] = 1.0;
  do
  {
    if ( v8 != 0.0 && v10 != 0.0 )
    {
      _XMM0 = (unsigned int)v16;
      __asm { vpcmpeqd xmm1, xmm0, xmm1 }
      v20 = v13;
      *(float *)&v20 = *(float *)&v13 + 45.0;
      _XMM3 = v20;
      __asm { vblendvps xmm4, xmm3, xmm2, xmm1 }
      if ( *(float *)&_XMM4 < 0.0 )
      {
        v22 = _XMM4;
        *(float *)&v22 = *(float *)&_XMM4 + 360.0;
        _XMM4 = v22;
      }
      __asm
      {
        vcmpless xmm0, xmm7, xmm4
        vblendvps xmm2, xmm4, xmm1, xmm0
      }
      if ( *(float *)&_XMM2 > 315.0 )
      {
        v26 = _XMM2;
        *(float *)&v26 = *(float *)&_XMM2 - 315.0;
        v25 = v26;
LABEL_15:
        v29 = 0i64;
        v27 = 0i64;
        v28 = 17i64;
        goto LABEL_16;
      }
      if ( *(float *)&_XMM2 <= 225.0 )
      {
        if ( *(float *)&_XMM2 <= 135.0 )
        {
          if ( *(float *)&_XMM2 <= 45.0 )
          {
            v33 = _XMM2;
            *(float *)&v33 = *(float *)&_XMM2 + 45.0;
            v25 = v33;
            goto LABEL_15;
          }
          v27 = 17i64;
          v28 = 53i64;
          v29 = 17i64;
          v32 = _XMM2;
          *(float *)&v32 = *(float *)&_XMM2 - 45.0;
          v25 = v32;
        }
        else
        {
          v27 = 53i64;
          v28 = 36i64;
          v29 = 53i64;
          v31 = _XMM2;
          *(float *)&v31 = *(float *)&_XMM2 - 135.0;
          v25 = v31;
        }
      }
      else
      {
        v27 = 36i64;
        v28 = 0i64;
        v29 = 36i64;
        v30 = _XMM2;
        *(float *)&v30 = *(float *)&_XMM2 - 225.0;
        v25 = v30;
      }
LABEL_16:
      v35 = v25;
      *(float *)&v35 = *(float *)&v25 * 0.011111111;
      _XMM1 = v35;
      __asm { vmaxss  xmm0, xmm1, xmm6 }
      v38 = LODWORD(FLOAT_1_0);
      *(float *)&v38 = 1.0 - *(float *)&_XMM1;
      _XMM3 = v38;
      __asm { vminss  xmm2, xmm0, xmm10 }
      volumes[v29] = volumes[v27] - (float)(1.0 - (float)((float)((float)(1.0 - minVol) * *(float *)&_XMM2) + minVol));
      __asm
      {
        vmaxss  xmm0, xmm3, xmm6
        vminss  xmm1, xmm0, xmm10
      }
      volumes[v28] = volumes[v28] - (float)(1.0 - (float)((float)(*(float *)&_XMM1 * (float)(1.0 - minVol)) + minVol));
    }
    ++v16;
  }
  while ( v16 < 2 );
}

/*
==============
SND_SpatializeStereo
==============
*/
void SND_SpatializeStereo(float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  SND_SpatializeDolby(s_speakerInfoStereo, 2u, volumes, delta, listener, dist, srcChannelCount, includeCenterChannel, spreadMinDist, spreadMaxDist, spreadMidPoint, stereoSpreadMaxAngle);
}

