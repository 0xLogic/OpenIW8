/*
==============
R_CullBoxDpvs
==============
*/

int __fastcall R_CullBoxDpvs(const Bounds *bounds, const DpvsPlane *planes, int planeCount)
{
  return ?R_CullBoxDpvs@@YAHPEIBUBounds@@PEIBUDpvsPlane@@H@Z(bounds, planes, planeCount);
}

/*
==============
R_CullBoxDpvs
==============
*/
__int64 R_CullBoxDpvs(const Bounds *bounds, const DpvsPlane *planes, int planeCount)
{
  int v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  vec3_t *i; 

  v3 = 0;
  if ( planeCount <= 0 )
    return 0i64;
  v4 = bounds->halfSize.v[0];
  v5 = bounds->midPoint.v[0];
  v6 = bounds->midPoint.v[1];
  v7 = bounds->halfSize.v[1];
  v8 = bounds->midPoint.v[2];
  v9 = bounds->halfSize.v[2];
  for ( i = &planes->coeffs.xyz + 1; (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(i[-1].v[0]) & _xmm) * v4) + (float)((float)(v5 * i[-1].v[0]) + i->v[0])) + (float)(v6 * i[-1].v[1])) + (float)(COERCE_FLOAT(LODWORD(i[-1].v[1]) & _xmm) * v7)) + (float)(v8 * i[-1].v[2])) + (float)(COERCE_FLOAT(LODWORD(i[-1].v[2]) & _xmm) * v9)) > 0.0; i = (vec3_t *)((char *)i + 16) )
  {
    if ( ++v3 >= planeCount )
      return 0i64;
  }
  return 1i64;
}

