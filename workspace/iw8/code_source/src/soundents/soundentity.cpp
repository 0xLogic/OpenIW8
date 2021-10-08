/*
==============
BG_SoundEntity_UnpackScalePitchEventParam
==============
*/

void __fastcall BG_SoundEntity_UnpackScalePitchEventParam(int parm, float *pitch, int *blendMsec)
{
  ?BG_SoundEntity_UnpackScalePitchEventParam@@YAXHPEAMPEAH@Z(parm, pitch, blendMsec);
}

/*
==============
BG_SoundEntity_PackScalePitchEventParam
==============
*/

int __fastcall BG_SoundEntity_PackScalePitchEventParam(float pitch, int blendMsec)
{
  return ?BG_SoundEntity_PackScalePitchEventParam@@YAHMH@Z(pitch, blendMsec);
}

/*
==============
BG_SoundEntity_PackScaleVolumeEventParam
==============
*/

int __fastcall BG_SoundEntity_PackScaleVolumeEventParam(float volume, int blendMsec)
{
  return ?BG_SoundEntity_PackScaleVolumeEventParam@@YAHMH@Z(volume, blendMsec);
}

/*
==============
BG_SoundEntity_UnpackScaleVolumeEventParam
==============
*/

void __fastcall BG_SoundEntity_UnpackScaleVolumeEventParam(int parm, float *volume, int *blendMsec)
{
  ?BG_SoundEntity_UnpackScaleVolumeEventParam@@YAXHPEAMPEAH@Z(parm, volume, blendMsec);
}

/*
==============
BG_SoundEntity_PackScalePitchEventParam
==============
*/
__int64 BG_SoundEntity_PackScalePitchEventParam(float pitch, int blendMsec)
{
  double v5; 
  int v7; 

  __asm
  {
    vmovss  xmm2, cs:__real@40000000; max
    vmovss  xmm1, cs:__real@3a83126f; min
  }
  v5 = I_fclamp(pitch, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm1, cs:__real@40000000; maxAbsValueSize }
  if ( blendMsec > 0xFFFF )
    blendMsec = 0xFFFF;
  v7 = MSG_PackUnsignedFloat(*(float *)&v5, *(float *)&_XMM1, 0x10u) << 16;
  if ( blendMsec < 0 )
    blendMsec = 0;
  return blendMsec | (unsigned int)v7;
}

/*
==============
BG_SoundEntity_PackScaleVolumeEventParam
==============
*/
__int64 BG_SoundEntity_PackScaleVolumeEventParam(float volume, int blendMsec)
{
  double v6; 
  int v8; 

  __asm
  {
    vmovss  xmm2, cs:__real@40800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  v6 = I_fclamp(volume, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm1, cs:__real@40800000; maxAbsValueSize }
  if ( blendMsec > 0xFFFF )
    blendMsec = 0xFFFF;
  v8 = MSG_PackUnsignedFloat(*(float *)&v6, *(float *)&_XMM1, 0x10u) << 16;
  if ( blendMsec < 0 )
    blendMsec = 0;
  return blendMsec | (unsigned int)v8;
}

/*
==============
BG_SoundEntity_UnpackScalePitchEventParam
==============
*/
void BG_SoundEntity_UnpackScalePitchEventParam(int parm, float *pitch, int *blendMsec)
{
  __asm { vmovss  xmm1, cs:__real@40000000; maxAbsValueSize }
  _RBX = pitch;
  *blendMsec = (unsigned __int16)parm;
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(HIWORD(parm), *(float *)&_XMM1, 0x10u);
  __asm { vmovss  dword ptr [rbx], xmm0 }
}

/*
==============
BG_SoundEntity_UnpackScaleVolumeEventParam
==============
*/
void BG_SoundEntity_UnpackScaleVolumeEventParam(int parm, float *volume, int *blendMsec)
{
  __asm { vmovss  xmm1, cs:__real@40800000; maxAbsValueSize }
  _RBX = volume;
  *blendMsec = (unsigned __int16)parm;
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(HIWORD(parm), *(float *)&_XMM1, 0x10u);
  __asm { vmovss  dword ptr [rbx], xmm0 }
}

