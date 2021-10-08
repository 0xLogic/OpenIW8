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
  bool v15; 
  __int64 v20; 
  unsigned int v24; 
  unsigned int v25; 
  bool v27; 
  __int64 *v28; 
  unsigned int v29; 
  __int64 v30; 
  bool v39; 
  bool v40; 
  bool v41; 
  __int64 v42; 
  sd_mix_channel *v43; 
  __int64 *v46; 
  bool v47; 
  unsigned int v48; 
  __int64 v49; 
  unsigned int v58; 
  __int64 v59; 
  sd_mix_channel *v60; 
  void *retaddr; 

  _R11 = &retaddr;
  _RDI = volsX;
  *(_QWORD *)volsX = 0i64;
  _RBP = objPos;
  *((_QWORD *)volsX + 1) = 0i64;
  *((_QWORD *)volsX + 2) = 0i64;
  *((_QWORD *)volsX + 3) = 0i64;
  *((_QWORD *)volsX + 4) = 0i64;
  *((_QWORD *)volsX + 5) = 0i64;
  *((_QWORD *)volsX + 6) = 0i64;
  *((_QWORD *)volsX + 7) = 0i64;
  if ( numSpkInfos )
  {
    _RBX = &spkInfos->channel;
    v15 = 0;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm7
      vmovaps xmmword ptr [r11-48h], xmm8
      vmovaps xmmword ptr [r11-58h], xmm9
      vmovss  xmm9, cs:__real@40000000
      vmovaps xmmword ptr [r11-68h], xmm10
      vmovss  xmm10, cs:__real@3fc90fdb
      vmovaps xmmword ptr [r11-78h], xmm11
      vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+0B8h+var_88], xmm12
      vmovss  xmm12, cs:__real@c0000000
      vmovaps xmmword ptr [r11-28h], xmm6
    }
    v20 = numSpkInfos;
    __asm { vxorps  xmm8, xmm8, xmm8 }
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx-0Ch]
        vmovss  xmm3, dword ptr [rbp+0]
        vcomiss xmm2, xmm3
      }
      v24 = *((_DWORD *)_RBX + 33);
      v25 = 0;
      if ( v15 )
      {
        __asm { vmovaps xmm1, xmm9 }
        if ( v24 >= 4 )
        {
          v46 = (__int64 *)(_RBX + 3);
          v48 = ((v24 - 4) >> 2) + 1;
          v47 = __CFSHR__(v24 - 4, 2) || v48 == 0;
          v49 = v48;
          v25 = 4 * v48;
          do
          {
            _RAX = *(v46 - 1);
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vcomiss xmm0, xmm2
            }
            if ( !v47 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _RAX = *v46;
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vcomiss xmm0, xmm2
            }
            if ( !v47 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _RAX = v46[1];
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vcomiss xmm0, xmm2
            }
            if ( !v47 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _RAX = v46[2];
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vcomiss xmm0, xmm2
            }
            if ( !v47 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            v46 += 4;
            v15 = v49-- == 0;
            v47 = v15 || v49 == 0;
          }
          while ( v49 );
        }
        v39 = v25 < v24;
        v40 = v25 == v24;
        v41 = v25 <= v24;
        if ( v25 < v24 )
        {
          v15 = v24 < v25;
          v58 = v24 - v25;
          v41 = v15 || v58 == 0;
          v59 = v58;
          v60 = &_RBX[2 * v25 + 1];
          do
          {
            _RAX = *(_QWORD *)v60;
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vcomiss xmm0, xmm2
            }
            if ( !v41 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            v60 += 2;
            v39 = v59-- == 0;
            v40 = v59 == 0;
            v41 = v39 || v59 == 0;
          }
          while ( v59 );
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm12 }
        if ( v24 >= 4 )
        {
          v27 = __CFSHR__(v24 - 4, 2);
          v28 = (__int64 *)(_RBX + 3);
          v29 = ((v24 - 4) >> 2) + 1;
          v30 = v29;
          v25 = 4 * v29;
          do
          {
            _RAX = *(v28 - 1);
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vcomiss xmm0, xmm2
            }
            if ( v27 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _RAX = *v28;
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vcomiss xmm0, xmm2
            }
            if ( v27 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _RAX = v28[1];
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vcomiss xmm0, xmm2
            }
            if ( v27 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _RAX = v28[2];
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vcomiss xmm0, xmm2
            }
            if ( v27 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            v28 += 4;
            v27 = v30-- == 0;
          }
          while ( v30 );
        }
        v39 = v25 < v24;
        v40 = v25 == v24;
        v41 = v25 <= v24;
        if ( v25 < v24 )
        {
          v39 = v24 < v25;
          v42 = v24 - v25;
          v43 = &_RBX[2 * v25 + 1];
          do
          {
            _RAX = *(_QWORD *)v43;
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vcomiss xmm0, xmm2
            }
            if ( v39 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            v43 += 2;
            v39 = v42-- == 0;
            v40 = v42 == 0;
            v41 = v39 || v42 == 0;
          }
          while ( v42 );
        }
      }
      __asm
      {
        vandps  xmm0, xmm1, xmm11
        vcomiss xmm0, xmm9
        vsubss  xmm7, xmm2, xmm3
        vsubss  xmm3, xmm1, xmm3
      }
      if ( v39 )
        break;
      _RDI[*(int *)_RBX] = 1.0;
LABEL_50:
      _RBX += 72;
      v15 = v20-- == 0;
      if ( !v20 )
      {
        __asm
        {
          vmovaps xmm12, [rsp+0B8h+var_88]
          vmovaps xmm11, [rsp+0B8h+var_78]
          vmovaps xmm10, [rsp+0B8h+var_68]
          vmovaps xmm9, [rsp+0B8h+var_58]
          vmovaps xmm8, [rsp+0B8h+var_48]
          vmovaps xmm7, [rsp+0B8h+var_38]
          vmovaps xmm6, [rsp+0B8h+var_28]
        }
        return;
      }
    }
    __asm { vcomiss xmm3, xmm8 }
    if ( !v41 )
    {
      __asm { vcomiss xmm7, xmm8 }
      if ( !v41 )
      {
LABEL_45:
        _RDI[*(int *)_RBX] = 0.0;
        goto LABEL_50;
      }
      __asm { vcomiss xmm3, xmm8 }
    }
    if ( v39 )
    {
      __asm { vcomiss xmm7, xmm8 }
    }
    else
    {
      __asm { vucomiss xmm3, xmm8 }
      if ( !v40 )
      {
        __asm
        {
          vsubss  xmm6, xmm1, xmm2
          vucomiss xmm6, xmm8
        }
        if ( v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_spatialize.cpp", 241, ASSERT_TYPE_ASSERT, "(( adjacentX - speakerX ) != 0.0f)", (const char *)&queryFormat, "( adjacentX - speakerX ) != 0.0f") )
          __debugbreak();
        __asm
        {
          vdivss  xmm0, xmm7, xmm6
          vmulss  xmm0, xmm0, xmm10; X
        }
        *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
        _RAX = *(int *)_RBX;
        __asm { vmovss  dword ptr [rdi+rax*4], xmm0 }
        goto LABEL_50;
      }
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
  bool v15; 
  __int64 v20; 
  unsigned int v24; 
  unsigned int v25; 
  bool v27; 
  __int64 *v28; 
  unsigned int v29; 
  __int64 v30; 
  bool v39; 
  bool v40; 
  bool v41; 
  __int64 v42; 
  sd_mix_channel *v43; 
  __int64 *v46; 
  bool v47; 
  unsigned int v48; 
  __int64 v49; 
  unsigned int v58; 
  __int64 v59; 
  sd_mix_channel *v60; 
  void *retaddr; 

  _R11 = &retaddr;
  _RDI = volsY;
  *(_QWORD *)volsY = 0i64;
  _RBP = objPos;
  *((_QWORD *)volsY + 1) = 0i64;
  *((_QWORD *)volsY + 2) = 0i64;
  *((_QWORD *)volsY + 3) = 0i64;
  *((_QWORD *)volsY + 4) = 0i64;
  *((_QWORD *)volsY + 5) = 0i64;
  *((_QWORD *)volsY + 6) = 0i64;
  *((_QWORD *)volsY + 7) = 0i64;
  if ( numSpkInfos )
  {
    _RBX = &spkInfos->channel;
    v15 = 0;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm7
      vmovaps xmmword ptr [r11-48h], xmm8
      vmovaps xmmword ptr [r11-58h], xmm9
      vmovss  xmm9, cs:__real@40000000
      vmovaps xmmword ptr [r11-68h], xmm10
      vmovss  xmm10, cs:__real@3fc90fdb
      vmovaps xmmword ptr [r11-78h], xmm11
      vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+0B8h+var_88], xmm12
      vmovss  xmm12, cs:__real@c0000000
      vmovaps xmmword ptr [r11-28h], xmm6
    }
    v20 = numSpkInfos;
    __asm { vxorps  xmm8, xmm8, xmm8 }
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx-8]
        vmovss  xmm3, dword ptr [rbp+4]
        vcomiss xmm2, xmm3
      }
      v24 = *((_DWORD *)_RBX + 67);
      v25 = 0;
      if ( v15 )
      {
        __asm { vmovaps xmm1, xmm9 }
        if ( v24 >= 4 )
        {
          v46 = (__int64 *)(_RBX + 37);
          v48 = ((v24 - 4) >> 2) + 1;
          v47 = __CFSHR__(v24 - 4, 2) || v48 == 0;
          v49 = v48;
          v25 = 4 * v48;
          do
          {
            _RAX = *(v46 - 1);
            __asm
            {
              vmovss  xmm0, dword ptr [rax+4]
              vcomiss xmm0, xmm2
            }
            if ( !v47 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _RAX = *v46;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+4]
              vcomiss xmm0, xmm2
            }
            if ( !v47 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _RAX = v46[1];
            __asm
            {
              vmovss  xmm0, dword ptr [rax+4]
              vcomiss xmm0, xmm2
            }
            if ( !v47 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            _RAX = v46[2];
            __asm
            {
              vmovss  xmm0, dword ptr [rax+4]
              vcomiss xmm0, xmm2
            }
            if ( !v47 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            v46 += 4;
            v15 = v49-- == 0;
            v47 = v15 || v49 == 0;
          }
          while ( v49 );
        }
        v39 = v25 < v24;
        v40 = v25 == v24;
        v41 = v25 <= v24;
        if ( v25 < v24 )
        {
          v15 = v24 < v25;
          v58 = v24 - v25;
          v41 = v15 || v58 == 0;
          v59 = v58;
          v60 = &_RBX[2 * v25 + 35];
          do
          {
            _RAX = *(_QWORD *)v60;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+4]
              vcomiss xmm0, xmm2
            }
            if ( !v41 )
              __asm { vminss  xmm1, xmm0, xmm1 }
            v60 += 2;
            v39 = v59-- == 0;
            v40 = v59 == 0;
            v41 = v39 || v59 == 0;
          }
          while ( v59 );
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm12 }
        if ( v24 >= 4 )
        {
          v27 = __CFSHR__(v24 - 4, 2);
          v28 = (__int64 *)(_RBX + 37);
          v29 = ((v24 - 4) >> 2) + 1;
          v30 = v29;
          v25 = 4 * v29;
          do
          {
            _RAX = *(v28 - 1);
            __asm
            {
              vmovss  xmm0, dword ptr [rax+4]
              vcomiss xmm0, xmm2
            }
            if ( v27 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _RAX = *v28;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+4]
              vcomiss xmm0, xmm2
            }
            if ( v27 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _RAX = v28[1];
            __asm
            {
              vmovss  xmm0, dword ptr [rax+4]
              vcomiss xmm0, xmm2
            }
            if ( v27 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _RAX = v28[2];
            __asm
            {
              vmovss  xmm0, dword ptr [rax+4]
              vcomiss xmm0, xmm2
            }
            if ( v27 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            v28 += 4;
            v27 = v30-- == 0;
          }
          while ( v30 );
        }
        v39 = v25 < v24;
        v40 = v25 == v24;
        v41 = v25 <= v24;
        if ( v25 < v24 )
        {
          v39 = v24 < v25;
          v42 = v24 - v25;
          v43 = &_RBX[2 * v25 + 35];
          do
          {
            _RAX = *(_QWORD *)v43;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+4]
              vcomiss xmm0, xmm2
            }
            if ( v39 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            v43 += 2;
            v39 = v42-- == 0;
            v40 = v42 == 0;
            v41 = v39 || v42 == 0;
          }
          while ( v42 );
        }
      }
      __asm
      {
        vandps  xmm0, xmm1, xmm11
        vcomiss xmm0, xmm9
        vsubss  xmm7, xmm2, xmm3
        vsubss  xmm3, xmm1, xmm3
      }
      if ( v39 )
        break;
      _RDI[*(int *)_RBX] = 1.0;
LABEL_50:
      _RBX += 72;
      v15 = v20-- == 0;
      if ( !v20 )
      {
        __asm
        {
          vmovaps xmm12, [rsp+0B8h+var_88]
          vmovaps xmm11, [rsp+0B8h+var_78]
          vmovaps xmm10, [rsp+0B8h+var_68]
          vmovaps xmm9, [rsp+0B8h+var_58]
          vmovaps xmm8, [rsp+0B8h+var_48]
          vmovaps xmm7, [rsp+0B8h+var_38]
          vmovaps xmm6, [rsp+0B8h+var_28]
        }
        return;
      }
    }
    __asm { vcomiss xmm3, xmm8 }
    if ( !v41 )
    {
      __asm { vcomiss xmm7, xmm8 }
      if ( !v41 )
      {
LABEL_45:
        _RDI[*(int *)_RBX] = 0.0;
        goto LABEL_50;
      }
      __asm { vcomiss xmm3, xmm8 }
    }
    if ( v39 )
    {
      __asm { vcomiss xmm7, xmm8 }
    }
    else
    {
      __asm { vucomiss xmm3, xmm8 }
      if ( !v40 )
      {
        __asm
        {
          vsubss  xmm6, xmm1, xmm2
          vucomiss xmm6, xmm8
        }
        if ( v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_spatialize.cpp", 306, ASSERT_TYPE_ASSERT, "(( adjacentY - speakerY ) != 0.0f)", (const char *)&queryFormat, "( adjacentY - speakerY ) != 0.0f") )
          __debugbreak();
        __asm
        {
          vdivss  xmm0, xmm7, xmm6
          vmulss  xmm0, xmm0, xmm10; X
        }
        *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
        _RAX = *(int *)_RBX;
        __asm { vmovss  dword ptr [rdi+rax*4], xmm0 }
        goto LABEL_50;
      }
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
  int v34; 
  bool v71; 
  bool v72; 
  bool v73; 
  unsigned int v74; 
  void *retaddr; 

  _R11 = &retaddr;
  _EBX = 0;
  *(_QWORD *)volsZ = 0i64;
  _R12 = volsZ;
  *((_QWORD *)volsZ + 1) = 0i64;
  _R13 = objPos;
  *((_QWORD *)volsZ + 2) = 0i64;
  *((_QWORD *)volsZ + 3) = 0i64;
  _R14 = spkInfos;
  *((_QWORD *)volsZ + 4) = 0i64;
  *((_QWORD *)volsZ + 5) = 0i64;
  *((_QWORD *)volsZ + 6) = 0i64;
  *((_QWORD *)volsZ + 7) = 0i64;
  if ( numSpkInfos )
  {
    _R15 = &spkInfos->channel;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovaps [rsp+0F8h+var_88], xmm11
      vmovaps [rsp+0F8h+var_98], xmm12
      vmovaps [rsp+0F8h+var_A8], xmm13
      vmovaps [rsp+0F8h+var_B8], xmm14
      vmovdqu xmm14, cs:__xmm@ffffffffffffffffffffffffffffffff
      vmovaps [rsp+0F8h+var_C8], xmm15
      vmovss  xmm15, cs:__real@40000000
      vxorps  xmm12, xmm12, xmm12
    }
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [r15-4]
        vmovss  xmm13, dword ptr [r13+8]
      }
      _R11 = 0i64;
      __asm
      {
        vcomiss xmm6, xmm13
        vmovaps xmm7, xmm6
        vmovd   xmm8, ebx
        vshufps xmm7, xmm7, xmm7, 0
        vpshufd xmm8, xmm8, 0
        vmovss  xmm2, cs:__real@c0000000
      }
      if ( numSpkInfos >= 8 )
      {
        __asm
        {
          vmovups xmm9, cs:__xmm@c0000000c0000000c0000000c0000000
          vmovdqu xmm11, cs:__xmm@00000003000000020000000100000000
        }
        v34 = 2;
        __asm { vmovups xmm10, xmm9 }
        do
        {
          __asm
          {
            vmovd   xmm0, r11d
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm0, xmm0, xmm11
            vpcmpeqd xmm1, xmm0, xmm8
            vpandn  xmm3, xmm1, xmm14
          }
          _RAX = 288 * _R11;
          _R11 = (unsigned int)(_R11 + 8);
          __asm
          {
            vmovss  xmm5, dword ptr [rax+r14+8]
            vinsertps xmm5, xmm5, dword ptr [rdx+r14+8], 10h
            vinsertps xmm5, xmm5, dword ptr [r8+r14+8], 20h ; ' '
            vinsertps xmm5, xmm5, dword ptr [r10+r14+8], 30h ; '0'
            vmaxps  xmm0, xmm9, xmm5
            vcmpltps xmm2, xmm5, xmm7
            vandps  xmm4, xmm3, xmm2
            vandps  xmm2, xmm0, xmm4
          }
          _R10 = (unsigned int)(v34 + 2);
          __asm
          {
            vandnps xmm1, xmm4, xmm9
            vorps   xmm9, xmm2, xmm1
          }
          v34 += 8;
          _RCX = 288 * _R10;
          __asm
          {
            vmovd   xmm0, r10d
            vpshufd xmm0, xmm0, 0
            vmovss  xmm5, dword ptr [rcx+r14+8]
            vinsertps xmm5, xmm5, dword ptr [rdx+r14+8], 10h
            vinsertps xmm5, xmm5, dword ptr [r8+r14+8], 20h ; ' '
            vinsertps xmm5, xmm5, dword ptr [r9+r14+8], 30h ; '0'
            vpaddd  xmm0, xmm0, xmm11
            vpcmpeqd xmm1, xmm0, xmm8
            vcmpltps xmm2, xmm5, xmm7
            vpandn  xmm3, xmm1, xmm14
            vandps  xmm4, xmm3, xmm2
            vmaxps  xmm0, xmm10, xmm5
            vandps  xmm2, xmm0, xmm4
            vandnps xmm1, xmm4, xmm10
            vorps   xmm10, xmm2, xmm1
          }
        }
        while ( (unsigned int)_R11 < (numSpkInfos & 0xFFFFFFF8) );
        __asm
        {
          vmaxps  xmm1, xmm9, xmm10
          vmovhlps xmm0, xmm1, xmm1
          vmaxps  xmm2, xmm0, xmm1
          vshufps xmm0, xmm2, xmm2, 0F5h ; 'õ'
          vmaxss  xmm2, xmm2, xmm0
        }
      }
      v71 = (unsigned int)_R11 < numSpkInfos;
      v72 = (_DWORD)_R11 == numSpkInfos;
      v73 = (unsigned int)_R11 <= numSpkInfos;
      if ( (unsigned int)_R11 < numSpkInfos )
      {
        if ( numSpkInfos - (unsigned int)_R11 >= 4 )
        {
          v74 = _R11 + 2;
          _RCX = (__int64)&_R14[_R11 + 1].pos.z;
          do
          {
            if ( (_DWORD)_R11 != _EBX )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rcx-120h]
                vcomiss xmm0, xmm6
              }
              if ( (unsigned int)_R11 < _EBX )
                __asm { vmaxss  xmm2, xmm0, xmm2 }
            }
            if ( v74 - 1 != _EBX )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rcx]
                vcomiss xmm0, xmm6
              }
              if ( v74 - 1 < _EBX )
                __asm { vmaxss  xmm2, xmm0, xmm2 }
            }
            if ( v74 != _EBX )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+120h]
                vcomiss xmm0, xmm6
              }
              if ( v74 < _EBX )
                __asm { vmaxss  xmm2, xmm0, xmm2 }
            }
            if ( v74 + 1 != _EBX )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+240h]
                vcomiss xmm0, xmm6
              }
              if ( v74 + 1 < _EBX )
                __asm { vmaxss  xmm2, xmm0, xmm2 }
            }
            _RCX += 1152i64;
            _R11 = (unsigned int)(_R11 + 4);
            v74 += 4;
          }
          while ( (unsigned int)_R11 < numSpkInfos - 3 );
        }
        v71 = (unsigned int)_R11 < numSpkInfos;
        v72 = (_DWORD)_R11 == numSpkInfos;
        v73 = (unsigned int)_R11 <= numSpkInfos;
        if ( (unsigned int)_R11 < numSpkInfos )
        {
          _RAX = (__int64)&_R14[_R11].pos.z;
          do
          {
            if ( (_DWORD)_R11 != _EBX )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rax]
                vcomiss xmm0, xmm6
              }
              if ( (unsigned int)_R11 < _EBX )
                __asm { vmaxss  xmm2, xmm0, xmm2 }
            }
            _RAX += 288i64;
            LODWORD(_R11) = _R11 + 1;
            v71 = (unsigned int)_R11 < numSpkInfos;
            v72 = (_DWORD)_R11 == numSpkInfos;
            v73 = (unsigned int)_R11 <= numSpkInfos;
          }
          while ( (unsigned int)_R11 < numSpkInfos );
        }
      }
      __asm
      {
        vandps  xmm0, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm15
        vsubss  xmm7, xmm6, xmm13
        vsubss  xmm1, xmm2, xmm13
      }
      if ( v71 )
        break;
      _R12[*(int *)_R15] = 1.0;
LABEL_42:
      ++_EBX;
      _R15 += 72;
      if ( _EBX >= numSpkInfos )
      {
        __asm
        {
          vmovaps xmm15, [rsp+0F8h+var_C8]
          vmovaps xmm14, [rsp+0F8h+var_B8]
          vmovaps xmm13, [rsp+0F8h+var_A8]
          vmovaps xmm12, [rsp+0F8h+var_98]
          vmovaps xmm11, [rsp+0F8h+var_88]
          vmovaps xmm10, [rsp+0F8h+var_78]
          vmovaps xmm9, [rsp+0F8h+var_68]
          vmovaps xmm8, [rsp+0F8h+var_58]
          vmovaps xmm7, [rsp+0F8h+var_48]
          vmovaps xmm6, [rsp+0F8h+var_38]
        }
        return;
      }
    }
    __asm { vcomiss xmm1, xmm12 }
    if ( !v73 )
    {
      __asm { vcomiss xmm7, xmm12 }
      if ( !v73 )
      {
LABEL_37:
        _R12[*(int *)_R15] = 0.0;
        goto LABEL_42;
      }
      __asm { vcomiss xmm1, xmm12 }
    }
    if ( v71 )
    {
      __asm { vcomiss xmm7, xmm12 }
    }
    else
    {
      __asm { vucomiss xmm1, xmm12 }
      if ( !v72 )
      {
        __asm
        {
          vsubss  xmm6, xmm2, xmm6
          vucomiss xmm6, xmm12
        }
        if ( v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_spatialize.cpp", 371, ASSERT_TYPE_ASSERT, "(( adjacentZ - speakerZ ) != 0.0f)", (const char *)&queryFormat, "( adjacentZ - speakerZ ) != 0.0f") )
          __debugbreak();
        __asm
        {
          vdivss  xmm0, xmm7, xmm6
          vmulss  xmm0, xmm0, cs:__real@3fc90fdb; X
        }
        *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
        _RAX = *(int *)_R15;
        __asm { vmovss  dword ptr [r12+rax*4], xmm0 }
        goto LABEL_42;
      }
    }
    goto LABEL_37;
  }
}

/*
==============
SND_InitDolbyPanner
==============
*/
void SND_InitDolbyPanner(SpeakerInfo *const spkInfos, const unsigned int numSpkInfos)
{
  unsigned int v6; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v22; 
  unsigned int v37; 

  if ( numSpkInfos )
  {
    __asm
    {
      vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm3, cs:__real@3a83126f
    }
    v6 = 0;
    _R8 = spkInfos;
    do
    {
      __asm
      {
        vmovss  xmm5, dword ptr [r8]
        vmovss  xmm4, dword ptr [r8+8]
      }
      v10 = 0i64;
      v11 = 0i64;
      v12 = 0i64;
      if ( numSpkInfos >= 4 )
      {
        v13 = 2;
        _RDX = (char *)&spkInfos[2].pos.z;
        do
        {
          if ( (_DWORD)v12 != v6 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx-240h]
              vsubss  xmm1, xmm0, xmm4
              vandps  xmm1, xmm1, xmm2
              vcomiss xmm1, xmm3
            }
            if ( (unsigned int)v12 < v6 )
            {
              _R11 = (const SpeakerInfo *)(_RDX - 584);
              _R8->speakersInPlane[v10] = (const SpeakerInfo *)(_RDX - 584);
              v10 = (unsigned int)(v10 + 1);
              __asm
              {
                vmovss  xmm0, dword ptr [r11]
                vsubss  xmm1, xmm0, xmm5
                vandps  xmm1, xmm1, xmm2
                vcomiss xmm1, xmm3
              }
              if ( (unsigned int)v12 < v6 )
              {
                _R8->speakersInRow[v11] = _R11;
                v11 = (unsigned int)(v11 + 1);
              }
            }
          }
          v22 = v13 - 1;
          if ( v13 - 1 != v6 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx-120h]
              vsubss  xmm1, xmm0, xmm4
              vandps  xmm1, xmm1, xmm2
              vcomiss xmm1, xmm3
            }
            if ( v22 < v6 )
            {
              _R11 = (const SpeakerInfo *)(_RDX - 296);
              _R8->speakersInPlane[v10] = (const SpeakerInfo *)(_RDX - 296);
              v10 = (unsigned int)(v10 + 1);
              __asm
              {
                vmovss  xmm0, dword ptr [r11]
                vsubss  xmm1, xmm0, xmm5
                vandps  xmm1, xmm1, xmm2
                vcomiss xmm1, xmm3
              }
              if ( v22 < v6 )
              {
                _R8->speakersInRow[v11] = _R11;
                v11 = (unsigned int)(v11 + 1);
              }
            }
          }
          if ( v13 != v6 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx]
              vsubss  xmm1, xmm0, xmm4
              vandps  xmm1, xmm1, xmm2
              vcomiss xmm1, xmm3
            }
            if ( v13 < v6 )
            {
              _R11 = (const SpeakerInfo *)(_RDX - 8);
              _R8->speakersInPlane[v10] = (const SpeakerInfo *)(_RDX - 8);
              v10 = (unsigned int)(v10 + 1);
              __asm
              {
                vmovss  xmm0, dword ptr [r11]
                vsubss  xmm1, xmm0, xmm5
                vandps  xmm1, xmm1, xmm2
                vcomiss xmm1, xmm3
              }
              if ( v13 < v6 )
              {
                _R8->speakersInRow[v11] = _R11;
                v11 = (unsigned int)(v11 + 1);
              }
            }
          }
          v37 = v13 + 1;
          if ( v13 + 1 != v6 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx+120h]
              vsubss  xmm1, xmm0, xmm4
              vandps  xmm1, xmm1, xmm2
              vcomiss xmm1, xmm3
            }
            if ( v37 < v6 )
            {
              _R11 = (const SpeakerInfo *)(_RDX + 280);
              _R8->speakersInPlane[v10] = (const SpeakerInfo *)(_RDX + 280);
              v10 = (unsigned int)(v10 + 1);
              __asm
              {
                vmovss  xmm0, dword ptr [r11]
                vsubss  xmm1, xmm0, xmm5
                vandps  xmm1, xmm1, xmm2
                vcomiss xmm1, xmm3
              }
              if ( v37 < v6 )
              {
                _R8->speakersInRow[v11] = _R11;
                v11 = (unsigned int)(v11 + 1);
              }
            }
          }
          _RDX += 1152;
          v12 = (unsigned int)(v12 + 4);
          v13 += 4;
        }
        while ( (unsigned int)v12 < numSpkInfos - 3 );
      }
      if ( (unsigned int)v12 < numSpkInfos )
      {
        _RDX = &spkInfos[v12];
        do
        {
          if ( (_DWORD)v12 != v6 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx+8]
              vsubss  xmm1, xmm0, xmm4
              vandps  xmm1, xmm1, xmm2
              vcomiss xmm1, xmm3
            }
            if ( (unsigned int)v12 < v6 )
            {
              _R8->speakersInPlane[v10] = _RDX;
              v10 = (unsigned int)(v10 + 1);
              __asm
              {
                vmovss  xmm0, dword ptr [rdx]
                vsubss  xmm1, xmm0, xmm5
                vandps  xmm1, xmm1, xmm2
                vcomiss xmm1, xmm3
              }
              if ( (unsigned int)v12 < v6 )
              {
                _R8->speakersInRow[v11] = _RDX;
                v11 = (unsigned int)(v11 + 1);
              }
            }
          }
          ++_RDX;
          LODWORD(v12) = v12 + 1;
        }
        while ( (unsigned int)v12 < numSpkInfos );
      }
      _R8->numSpeakersInPlane = v10;
      ++v6;
      _R8->numSpeakersInRow = v11;
      ++_R8;
    }
    while ( v6 < numSpkInfos );
  }
}

/*
==============
SND_InitDolbyPanners
==============
*/
void SND_InitDolbyPanners(void)
{
  unsigned int v2; 
  int v6; 
  int v7; 

  __asm
  {
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm3, cs:__real@3a83126f
  }
  v2 = 0;
  _RCX = s_speakerInfoStereo[0].speakersInPlane;
  do
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rcx-10h]
      vmovss  xmm4, dword ptr [rcx-8]
    }
    v6 = 0;
    v7 = 0;
    if ( v2 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr cs:s_speakerInfoStereo.pos+8
        vsubss  xmm1, xmm0, xmm4
        vandps  xmm1, xmm1, xmm2
        vcomiss xmm1, xmm3
      }
    }
    if ( v2 != 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr cs:s_speakerInfoStereo.pos+128h
        vsubss  xmm1, xmm0, xmm4
        vandps  xmm1, xmm1, xmm2
        vcomiss xmm1, xmm3
      }
      v6 = 1;
      *_RCX = &s_speakerInfoStereo[1];
      __asm
      {
        vmovss  xmm0, dword ptr cs:s_speakerInfoStereo.pos+120h
        vsubss  xmm1, xmm0, xmm5
        vandps  xmm1, xmm1, xmm2
        vcomiss xmm1, xmm3
      }
      v7 = 1;
      _RCX[17] = &s_speakerInfoStereo[1];
    }
    *((_DWORD *)_RCX + 32) = v6;
    ++v2;
    *((_DWORD *)_RCX + 66) = v7;
    _RCX += 36;
  }
  while ( v2 < 2 );
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

void __fastcall SND_Spatialize51(float *volumes, const vec3_t *delta, const snd_listener *listener, double dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  const SpeakerInfo *v28; 
  int v51; 
  float *v52; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  char v90; 

  _RDI = delta;
  __asm
  {
    vmovaps [rsp+118h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_dolby_panning_disable, "snd_dolby_panning_disable") )
  {
    __asm
    {
      vmovss  xmm3, [rsp+118h+spreadMaxDist]
      vmovaps [rsp+118h+var_28], xmm7
      vmovaps [rsp+118h+var_68], xmm11
      vmovaps [rsp+118h+var_78], xmm12
      vmovss  xmm12, cs:__real@3f800000
      vmovaps [rsp+118h+var_98], xmm14
      vmovss  xmm14, cs:__real@3f000000
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm3, xmm7
      vmovaps [rsp+118h+var_A8], xmm15
      vxorps  xmm11, xmm11, xmm11
      vmovss  xmm4, dword ptr [rdi+4]
      vmovss  xmm3, dword ptr [rdi]
      vmulss  xmm1, xmm4, dword ptr [rbx+10h]
      vmulss  xmm0, xmm3, dword ptr [rbx+0Ch]
      vmovss  xmm5, dword ptr [rdi+8]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbx+14h]
      vmulss  xmm0, xmm3, dword ptr [rbx+18h]
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm1, xmm4, dword ptr [rbx+1Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbx+20h]
      vaddss  xmm0, xmm2, xmm1
      vxorps  xmm15, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovaps xmm0, xmm15; Y
      vmovaps xmm1, xmm6; X
      vmovss  [rsp+118h+var_B4], xmm6
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmulss  xmm1, xmm0, cs:__real@42652ee0 }
    v51 = 0;
    __asm { vmovss  [rsp+118h+var_B0], xmm1 }
    if ( srcChannelCount > 0 )
    {
      v52 = volumes;
      __asm
      {
        vmovss  xmm6, cs:__real@439d8000
        vmovss  xmm5, cs:__real@3c360b61
        vmovaps [rsp+118h+var_38], xmm8
        vmovss  xmm8, cs:__real@43610000
        vmovaps [rsp+118h+var_48], xmm9
        vmovss  xmm9, cs:__real@43070000
        vmovaps [rsp+118h+var_58], xmm10
        vmovss  xmm10, cs:__real@42340000
        vmovaps [rsp+118h+var_88], xmm13
        vmovss  xmm13, cs:__real@3cb60b61
      }
      do
      {
        __asm { vmovss  xmm0, [rsp+118h+var_B4] }
        _RDX = v52;
        __asm
        {
          vucomiss xmm0, xmm7
          vucomiss xmm15, xmm7
        }
        if ( includeCenterChannel )
        {
          __asm { vmovss  xmm0, cs:__real@3e90a4d3 }
          v52[2] = 0.28250751;
        }
        else
        {
          __asm { vmovss  xmm0, cs:__real@3eb4ce08 }
        }
        __asm
        {
          vmovss  dword ptr [rdx], xmm0
          vmovss  dword ptr [rdx+4], xmm0
          vmovss  dword ptr [rdx+10h], xmm0
          vmovss  dword ptr [rdx+14h], xmm0
        }
        ++v51;
        v52 += 16;
      }
      while ( v51 < srcChannelCount );
      __asm
      {
        vmovaps xmm13, [rsp+118h+var_88]
        vmovaps xmm10, [rsp+118h+var_58]
        vmovaps xmm9, [rsp+118h+var_48]
        vmovaps xmm8, [rsp+118h+var_38]
      }
    }
    __asm
    {
      vmovaps xmm14, [rsp+118h+var_98]
      vmovaps xmm12, [rsp+118h+var_78]
      vmovaps xmm11, [rsp+118h+var_68]
      vmovaps xmm7, [rsp+118h+var_28]
      vmovaps xmm15, [rsp+118h+var_A8]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+118h+stereoSpreadMaxAngle]
      vmovss  xmm1, [rsp+118h+spreadMidPoint]
      vmovss  [rsp+118h+var_C0], xmm0
      vmovss  xmm0, [rsp+118h+spreadMaxDist]
      vmovss  [rsp+118h+var_C8], xmm1
      vmovss  xmm1, [rsp+118h+spreadMinDist]
      vmovss  [rsp+118h+var_D0], xmm0
      vmovss  [rsp+118h+var_D8], xmm1
    }
    v28 = s_speakerInfo51;
    if ( !includeCenterChannel )
      v28 = s_speakerInfoQuad;
    __asm { vmovss  [rsp+118h+var_F0], xmm6 }
    SND_SpatializeDolby(v28, includeCenterChannel + 4, volumes, _RDI, listener, v73, srcChannelCount, includeCenterChannel, v74, v75, v76, v77);
  }
  _R11 = &v90;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
SND_Spatialize7144
==============
*/

void __fastcall SND_Spatialize7144(float *volumes, const vec3_t *delta, const snd_listener *listener, double dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 

  __asm
  {
    vmovss  xmm0, [rsp+68h+stereoSpreadMaxAngle]
    vmovss  xmm1, [rsp+68h+spreadMidPoint]
    vmovss  [rsp+68h+var_10], xmm0
    vmovss  xmm0, [rsp+68h+spreadMaxDist]
    vmovss  [rsp+68h+var_18], xmm1
    vmovss  xmm1, [rsp+68h+spreadMinDist]
    vmovss  [rsp+68h+var_20], xmm0
    vmovss  [rsp+68h+var_28], xmm1
    vmovss  [rsp+68h+var_40], xmm3
  }
  SND_SpatializeDolby(s_speakerInfo7144, 0xFu, volumes, delta, listener, v14, srcChannelCount, includeCenterChannel, v15, v16, v17, v18);
}

/*
==============
SND_Spatialize71
==============
*/

void __fastcall SND_Spatialize71(float *volumes, const vec3_t *delta, const snd_listener *listener, double dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  const SpeakerInfo *v28; 
  int v57; 
  float *v58; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  char v92; 

  _RDI = delta;
  __asm
  {
    vmovaps [rsp+118h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_dolby_panning_disable, "snd_dolby_panning_disable") )
  {
    __asm
    {
      vmovss  xmm3, [rsp+118h+spreadMaxDist]
      vmovaps [rsp+118h+var_28], xmm7
      vmovaps [rsp+118h+var_38], xmm8
      vmovaps [rsp+118h+var_48], xmm9
      vmovaps [rsp+118h+var_58], xmm10
      vmovaps [rsp+118h+var_68], xmm11
      vmovaps [rsp+118h+var_78], xmm12
      vmovaps [rsp+118h+var_88], xmm13
      vmovaps [rsp+118h+var_98], xmm14
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm3, xmm7
      vmovaps [rsp+118h+var_A8], xmm15
      vmovss  xmm15, cs:__real@3f800000
      vxorps  xmm14, xmm14, xmm14
      vmovss  xmm4, dword ptr [rdi+4]
      vmovss  xmm3, dword ptr [rdi]
      vmulss  xmm1, xmm4, dword ptr [rbx+10h]
      vmulss  xmm0, xmm3, dword ptr [rbx+0Ch]
      vmovss  xmm5, dword ptr [rdi+8]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbx+14h]
      vmulss  xmm0, xmm3, dword ptr [rbx+18h]
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm1, xmm4, dword ptr [rbx+1Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbx+20h]
      vaddss  xmm0, xmm2, xmm1
      vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000; Y
      vmovaps xmm1, xmm6; X
      vmovss  [rsp+118h+var_B0], xmm0
      vmovss  [rsp+118h+var_B4], xmm6
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42652ee0
      vmovss  xmm6, cs:__real@439d8000
      vmovss  xmm5, cs:__real@3cb60b61
      vmovss  xmm8, cs:__real@43870000
      vmovss  xmm9, cs:__real@43610000
      vmovss  xmm10, cs:__real@43070000
      vmovss  xmm13, cs:__real@3c360b61
      vmovss  xmm11, cs:__real@42b40000
      vmovss  xmm12, cs:__real@42340000
      vmovss  [rsp+118h+var_AC], xmm1
    }
    v57 = 0;
    v58 = volumes;
    do
    {
      __asm { vmovss  xmm0, [rsp+118h+var_B4] }
      _RDX = v58;
      __asm
      {
        vucomiss xmm0, xmm7
        vmovss  xmm0, [rsp+118h+var_B0]
        vucomiss xmm0, xmm7
      }
      if ( includeCenterChannel )
      {
        __asm { vmovss  xmm0, cs:__real@3e4ea252 }
        v58[2] = 0.20179108;
      }
      else
      {
        __asm { vmovss  xmm0, cs:__real@3e7112b5 }
      }
      __asm
      {
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm0
        vmovss  dword ptr [rdx+10h], xmm0
        vmovss  dword ptr [rdx+14h], xmm0
      }
      ++v57;
      v58 += 16;
    }
    while ( v57 < 1 );
    __asm
    {
      vmovaps xmm15, [rsp+118h+var_A8]
      vmovaps xmm14, [rsp+118h+var_98]
      vmovaps xmm13, [rsp+118h+var_88]
      vmovaps xmm12, [rsp+118h+var_78]
      vmovaps xmm11, [rsp+118h+var_68]
      vmovaps xmm10, [rsp+118h+var_58]
      vmovaps xmm9, [rsp+118h+var_48]
      vmovaps xmm8, [rsp+118h+var_38]
      vmovaps xmm7, [rsp+118h+var_28]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+118h+stereoSpreadMaxAngle]
      vmovss  xmm1, [rsp+118h+spreadMidPoint]
      vmovss  [rsp+118h+var_C0], xmm0
      vmovss  xmm0, [rsp+118h+spreadMaxDist]
      vmovss  [rsp+118h+var_C8], xmm1
      vmovss  xmm1, [rsp+118h+spreadMinDist]
      vmovss  [rsp+118h+var_D0], xmm0
      vmovss  [rsp+118h+var_D8], xmm1
    }
    v28 = s_speakerInfo71;
    if ( !includeCenterChannel )
      v28 = s_speakerInfo61;
    __asm { vmovss  [rsp+118h+var_F0], xmm6 }
    SND_SpatializeDolby(v28, includeCenterChannel + 6, volumes, _RDI, listener, v74, srcChannelCount, includeCenterChannel, v75, v76, v77, v78);
  }
  _R11 = &v92;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
SND_SpatializeDolby
==============
*/
void SND_SpatializeDolby(const SpeakerInfo *const spkInfos, const unsigned int numSpkInfos, float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  bool v19; 
  int v25; 
  float *v33; 
  orientation_t *p_inverse; 
  unsigned __int64 v61; 
  __int64 v65; 
  _BYTE v94[32]; 
  char v95[488]; 
  char v96; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  _RBP = (unsigned __int64)v95 & 0xFFFFFFFFFFFFFFE0ui64;
  v19 = (unsigned __int64)v94 == _security_cookie;
  *(_QWORD *)(_RBP + 384) = (unsigned __int64)v94 ^ _security_cookie;
  __asm
  {
    vmovss  xmm3, [rsp+278h+spreadMaxDist]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm3, xmm7
  }
  *(_QWORD *)(_RBP + 16) = delta;
  v25 = 1;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( !v19 )
  {
    __asm
    {
      vmovss  xmm0, [rsp+278h+stereoSpreadMaxAngle]
      vmovss  xmm2, [rsp+278h+spreadMidPoint]
      vucomiss xmm2, xmm3
      vmulss  xmm8, xmm0, cs:__real@3f000000
      vmovss  xmm0, [rsp+278h+dist]
    }
    v25 = 2;
    if ( v19 )
    {
      __asm
      {
        vcomiss xmm0, xmm3
        vxorps  xmm8, xmm8, xmm8
      }
    }
    else
    {
      __asm
      {
        vcomiss xmm0, xmm2
        vcomiss xmm0, xmm3
        vmovss  xmm3, [rsp+278h+spreadMinDist]
        vcomiss xmm0, xmm3
        vcomiss xmm0, xmm2
      }
    }
  }
  __asm
  {
    vxorps  xmm10, xmm8, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm9, cs:__real@3a83126f
  }
  v33 = volumes;
  _EDI = 0;
  p_inverse = &listener->inverse;
  *(_QWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = &listener->inverse;
  *(_QWORD *)_RBP = &listener->orient.axis.row2;
  do
  {
    _RBX = volumes;
    if ( srcChannelCount != 1 )
      _RBX = v33;
    _RAX = OrientationDirToWorldDir((vec3_t *)(_RBP + 24), p_inverse, delta);
    __asm
    {
      vmovaps xmm2, xmm9; epsilon
      vmovsd  xmm0, qword ptr [rax]
      vmovsd  qword ptr [rbp+28h], xmm0
    }
    *(float *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = _RAX->v[2];
    __asm
    {
      vmovss  dword ptr [rbp+38h], xmm7
      vmovss  dword ptr [rbp+3Ch], xmm7
      vmovss  dword ptr [rbp+40h], xmm7
    }
    if ( !VecNCompareCustomEpsilon((const float *)(_RBP + 40), (const float *)(_RBP + 56), *(float *)&_XMM2, 3) )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+2Ch]
        vmovss  xmm4, dword ptr [rbp+28h]
        vmovss  xmm5, dword ptr [rbp+30h]
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm6, xmm2, xmm1
        vcomiss xmm6, xmm7
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
        __debugbreak();
      __asm
      {
        vmovss  xmm4, dword ptr [rbp+28h]
        vmovss  xmm3, dword ptr [rbp+2Ch]
        vmovss  xmm5, dword ptr [rbp+30h]
        vmovaps xmm1, xmm6
        vrsqrtss xmm2, xmm1, xmm6
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rbp+28h], xmm0
        vmulss  xmm0, xmm5, xmm2
        vmulss  xmm1, xmm3, xmm2
        vmovss  dword ptr [rbp+30h], xmm0
        vmovss  dword ptr [rbp+2Ch], xmm1
      }
    }
    _EAX = 0;
    __asm
    {
      vmovd   xmm1, eax
      vmovd   xmm0, edi
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm3, xmm10, xmm8, xmm2; degrees
    }
    RotatePointAroundVector((vec3_t *)(_RBP + 72), *(const vec3_t **)_RBP, (const vec3_t *)(_RBP + 40), *(float *)&_XMM3);
    SND_GetPannerVolsX(spkInfos, numSpkInfos, (const vec3_t *)(_RBP + 72), (float *)(_RBP + 192));
    SND_GetPannerVolsY(spkInfos, numSpkInfos, (const vec3_t *)(_RBP + 72), (float *)(_RBP + 96));
    SND_GetPannerVolsZ(spkInfos, numSpkInfos, (const vec3_t *)(_RBP + 72), (float *)(_RBP + 288));
    v61 = (unsigned __int64)(_RBX + 15);
    if ( ((unsigned __int64)_RBX > _RBP + 348 || v61 < _RBP + 288) && ((unsigned __int64)_RBX > _RBP + 252 || v61 < _RBP + 192) && ((unsigned __int64)_RBX > _RBP + 156 || v61 < _RBP + 96) )
    {
      for ( _RAX = 0i64; _RAX < 64; _RAX += 16i64 )
      {
        __asm
        {
          vmovups xmm1, xmmword ptr [rbp+rax+60h]
          vmulps  xmm2, xmm1, xmmword ptr [rbp+rax+0C0h]
          vmovups xmm0, xmmword ptr [rax+rbx]
          vmulps  xmm3, xmm2, xmmword ptr [rbp+rax+120h]
          vmaxps  xmm1, xmm0, xmm3
          vmovups xmmword ptr [rax+rbx], xmm1
        }
      }
    }
    else
    {
      _RDX = _RBP + 192 - (_QWORD)_RBX;
      _R10 = _RBP + 100 - (_QWORD)_RBX;
      _RAX = _RBX + 2;
      v65 = 4i64;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+rax-8]
          vmulss  xmm1, xmm0, dword ptr [rcx+rax-8]
          vmulss  xmm2, xmm1, dword ptr [r8+rax-8]
          vmaxss  xmm3, xmm2, dword ptr [rax-8]
          vmovss  xmm0, dword ptr [r10+rax-8]
          vmulss  xmm1, xmm0, dword ptr [r9+rax-8]
          vmulss  xmm2, xmm1, dword ptr [r11+rax-8]
          vmovss  xmm0, dword ptr [rdx+rax]
          vmulss  xmm1, xmm0, dword ptr [rcx+rax]
          vmovss  xmm0, dword ptr [r10+rax]
          vmovss  dword ptr [rax-8], xmm3
          vmaxss  xmm3, xmm2, dword ptr [rax-4]
          vmulss  xmm2, xmm1, dword ptr [r8+rax]
          vmulss  xmm1, xmm0, dword ptr [r9+rax]
          vmovss  dword ptr [rax-4], xmm3
          vmaxss  xmm3, xmm2, dword ptr [rax]
          vmulss  xmm2, xmm1, dword ptr [r11+rax]
          vmovss  dword ptr [rax], xmm3
          vmaxss  xmm3, xmm2, dword ptr [rax+4]
          vmovss  dword ptr [rax+4], xmm3
        }
        _RAX += 4;
        --v65;
      }
      while ( v65 );
    }
    p_inverse = *(orientation_t **)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
    ++_EDI;
    delta = *(const vec3_t **)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
    v33 += 16;
  }
  while ( _EDI < v25 );
  _R11 = &v96;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
}

/*
==============
SND_SpatializeReverb
==============
*/

void __fastcall SND_SpatializeReverb(float *volumes, const vec3_t *delta, const snd_listener *listener, double minVol)
{
  bool v44; 
  bool v45; 
  bool v46; 
  char v96; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+8]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = volumes;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vxorps  xmm6, xmm0, xmm7
    vmovss  xmm0, dword ptr [rdx+4]
    vxorps  xmm4, xmm0, xmm7
    vmulss  xmm0, xmm6, dword ptr [r8+0Ch]
    vxorps  xmm5, xmm1, xmm7
    vmulss  xmm1, xmm4, dword ptr [r8+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [r8+14h]
    vmulss  xmm0, xmm6, dword ptr [r8+18h]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
    vaddss  xmm13, xmm2, xmm1
    vmulss  xmm1, xmm4, dword ptr [r8+1Ch]
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps [rsp+0D8h+var_A8], xmm15
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [r8+20h]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm14, xmm0, xmm7
    vmovaps xmm0, xmm14; Y
    vmovaps xmm1, xmm13; X
    vmovaps xmm15, xmm3
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm12, xmm0, cs:__real@42652ee0
    vmovss  xmm5, cs:__real@42340000
    vmovss  xmm7, cs:__real@43b40000
    vmovss  xmm11, cs:__real@439d8000
    vmovss  xmm8, cs:__real@43610000
    vmovss  xmm9, cs:__real@43070000
    vmovss  xmm10, cs:__real@3f800000
  }
  v44 = 0;
  v45 = 1;
  v46 = 1;
  _ER9 = 0;
  *_RBX = 1.0;
  _ER8 = 0;
  _RBX[17] = 1.0;
  _RBX[36] = 1.0;
  _RBX[53] = 1.0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  do
  {
    __asm { vucomiss xmm13, xmm6 }
    if ( v45 )
      goto LABEL_17;
    __asm
    {
      vucomiss xmm14, xmm6
      vmovd   xmm1, r9d
      vmovd   xmm0, r8d
      vpcmpeqd xmm1, xmm0, xmm1
      vaddss  xmm3, xmm12, xmm5
      vsubss  xmm2, xmm12, xmm5
      vblendvps xmm4, xmm3, xmm2, xmm1
      vcomiss xmm4, xmm6
      vmovss  [rsp+0D8h+var_B8], xmm4
    }
    if ( v44 )
      __asm { vaddss  xmm4, xmm4, xmm7 }
    __asm
    {
      vsubss  xmm1, xmm4, xmm7
      vcmpless xmm0, xmm7, xmm4
      vblendvps xmm2, xmm4, xmm1, xmm0
      vcomiss xmm2, xmm11
      vmovss  [rsp+0D8h+var_B8], xmm2
    }
    if ( !v46 )
    {
      __asm { vsubss  xmm0, xmm2, xmm11 }
LABEL_15:
      _RDX = 0i64;
      _RCX = 0i64;
      _RAX = 68i64;
      goto LABEL_16;
    }
    __asm { vcomiss xmm2, xmm8 }
    if ( v46 )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v46 )
      {
        __asm { vcomiss xmm2, xmm5 }
        if ( v46 )
        {
          __asm { vaddss  xmm0, xmm2, xmm5 }
          goto LABEL_15;
        }
        _RCX = 68i64;
        _RAX = 212i64;
        _RDX = 68i64;
        __asm { vsubss  xmm0, xmm2, xmm5 }
      }
      else
      {
        _RCX = 212i64;
        _RAX = 144i64;
        _RDX = 212i64;
        __asm { vsubss  xmm0, xmm2, xmm9 }
      }
    }
    else
    {
      _RCX = 144i64;
      _RAX = 0i64;
      _RDX = 144i64;
      __asm { vsubss  xmm0, xmm2, xmm8 }
    }
LABEL_16:
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3c360b61
      vmaxss  xmm0, xmm1, xmm6
      vsubss  xmm3, xmm10, xmm1
      vminss  xmm2, xmm0, xmm10
      vsubss  xmm4, xmm10, xmm15
      vmulss  xmm0, xmm4, xmm2
      vaddss  xmm1, xmm0, xmm15
      vmovss  xmm0, dword ptr [rcx+rbx]
      vsubss  xmm2, xmm10, xmm1
      vsubss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rdx+rbx], xmm1
      vmaxss  xmm0, xmm3, xmm6
      vminss  xmm1, xmm0, xmm10
      vmovss  xmm0, dword ptr [rax+rbx]
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm3, xmm2, xmm15
      vsubss  xmm1, xmm10, xmm3
      vsubss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rax+rbx], xmm1
    }
LABEL_17:
    v44 = (unsigned int)++_ER8 < 2;
    v45 = _ER8 == 2;
    v46 = (unsigned int)_ER8 <= 2;
  }
  while ( _ER8 < 2 );
  __asm { vmovaps xmm14, [rsp+0D8h+var_98] }
  _R11 = &v96;
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
    vmovaps xmm15, [rsp+0D8h+var_A8]
  }
}

/*
==============
SND_SpatializeStereo
==============
*/

void __fastcall SND_SpatializeStereo(float *volumes, const vec3_t *delta, const snd_listener *listener, double dist, const int srcChannelCount, const bool includeCenterChannel, const float spreadMinDist, const float spreadMaxDist, const float spreadMidPoint, const float stereoSpreadMaxAngle)
{
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 

  __asm
  {
    vmovss  xmm0, [rsp+68h+stereoSpreadMaxAngle]
    vmovss  xmm1, [rsp+68h+spreadMidPoint]
    vmovss  [rsp+68h+var_10], xmm0
    vmovss  xmm0, [rsp+68h+spreadMaxDist]
    vmovss  [rsp+68h+var_18], xmm1
    vmovss  xmm1, [rsp+68h+spreadMinDist]
    vmovss  [rsp+68h+var_20], xmm0
    vmovss  [rsp+68h+var_28], xmm1
    vmovss  [rsp+68h+var_40], xmm3
  }
  SND_SpatializeDolby(s_speakerInfoStereo, 2u, volumes, delta, listener, v14, srcChannelCount, includeCenterChannel, v15, v16, v17, v18);
}

