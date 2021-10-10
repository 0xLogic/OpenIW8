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
  double v3; 
  int v4; 

  v3 = I_fclamp(pitch, 0.001, 2.0);
  if ( blendMsec > 0xFFFF )
    blendMsec = 0xFFFF;
  v4 = MSG_PackUnsignedFloat(*(float *)&v3, 2.0, 0x10u) << 16;
  if ( blendMsec < 0 )
    blendMsec = 0;
  return blendMsec | (unsigned int)v4;
}

/*
==============
BG_SoundEntity_PackScaleVolumeEventParam
==============
*/
__int64 BG_SoundEntity_PackScaleVolumeEventParam(float volume, int blendMsec)
{
  double v3; 
  int v4; 

  v3 = I_fclamp(volume, 0.0, 4.0);
  if ( blendMsec > 0xFFFF )
    blendMsec = 0xFFFF;
  v4 = MSG_PackUnsignedFloat(*(float *)&v3, 4.0, 0x10u) << 16;
  if ( blendMsec < 0 )
    blendMsec = 0;
  return blendMsec | (unsigned int)v4;
}

/*
==============
BG_SoundEntity_UnpackScalePitchEventParam
==============
*/
void BG_SoundEntity_UnpackScalePitchEventParam(int parm, float *pitch, int *blendMsec)
{
  double v4; 

  *blendMsec = (unsigned __int16)parm;
  v4 = MSG_UnpackUnsignedFloat(HIWORD(parm), 2.0, 0x10u);
  *pitch = *(float *)&v4;
}

/*
==============
BG_SoundEntity_UnpackScaleVolumeEventParam
==============
*/
void BG_SoundEntity_UnpackScaleVolumeEventParam(int parm, float *volume, int *blendMsec)
{
  double v4; 

  *blendMsec = (unsigned __int16)parm;
  v4 = MSG_UnpackUnsignedFloat(HIWORD(parm), 4.0, 0x10u);
  *volume = *(float *)&v4;
}

