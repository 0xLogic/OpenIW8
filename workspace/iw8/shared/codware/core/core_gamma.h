/*
==============
LinearToGammaColor_Srgb
==============
*/

void __fastcall LinearToGammaColor_Srgb(vec3_t *color)
{
  ?LinearToGammaColor_Srgb@@YAXAEATvec3_t@@@Z(color);
}

/*
==============
GammaToLinearColor_Srgb
==============
*/

void __fastcall GammaToLinearColor_Srgb(vec3_t *color)
{
  ?GammaToLinearColor_Srgb@@YAXAEATvec3_t@@@Z(color);
}

/*
==============
LinearToGammaColor_Srgb
==============
*/
void LinearToGammaColor_Srgb(vec3_t *color)
{
  float v1; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 

  v1 = color->v[0];
  if ( color->v[0] > 0.0031308001 )
    v3 = (float)(powf_0(v1, 0.41666666) * 1.0549999) - 0.055;
  else
    v3 = v1 * 12.92;
  v4 = color->v[1];
  color->v[0] = v3;
  if ( v4 > 0.0031308001 )
    v5 = (float)(powf_0(v4, 0.41666666) * 1.0549999) - 0.055;
  else
    v5 = v4 * 12.92;
  v6 = color->v[2];
  color->v[1] = v5;
  if ( v6 > 0.0031308001 )
    color->v[2] = (float)(powf_0(v6, 0.41666666) * 1.0549999) - 0.055;
  else
    color->v[2] = v6 * 12.92;
}

/*
==============
GammaToLinearColor_Srgb
==============
*/
void GammaToLinearColor_Srgb(vec3_t *color)
{
  float v1; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 

  v1 = color->v[0];
  if ( color->v[0] > 0.039280001 )
    v3 = powf_0((float)(v1 * 0.94786733) + 0.052132703, 2.4000001);
  else
    v3 = v1 * 0.077399381;
  color->v[0] = v3;
  v4 = color->v[1];
  if ( v4 > 0.039280001 )
    v5 = powf_0((float)(v4 * 0.94786733) + 0.052132703, 2.4000001);
  else
    v5 = v4 * 0.077399381;
  color->v[1] = v5;
  v6 = color->v[2];
  if ( v6 > 0.039280001 )
    color->v[2] = powf_0((float)(v6 * 0.94786733) + 0.052132703, 2.4000001);
  else
    color->v[2] = v6 * 0.077399381;
}

