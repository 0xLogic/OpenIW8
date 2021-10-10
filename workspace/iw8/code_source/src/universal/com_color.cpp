/*
==============
PQFromLinear
==============
*/

vec3_t *__fastcall PQFromLinear(vec3_t *result, vec3_t *linearValues)
{
  return ?PQFromLinear@@YA?ATvec3_t@@T1@@Z(result, linearValues);
}

/*
==============
LinearFromPQ
==============
*/

vec3_t *__fastcall LinearFromPQ(vec3_t *result, vec3_t *pqValues)
{
  return ?LinearFromPQ@@YA?ATvec3_t@@T1@@Z(result, pqValues);
}

/*
==============
Primaries_BT2020FromBT709
==============
*/

vec3_t *__fastcall Primaries_BT2020FromBT709(vec3_t *result, vec3_t *linearBT709)
{
  return ?Primaries_BT2020FromBT709@@YA?ATvec3_t@@T1@@Z(result, linearBT709);
}

/*
==============
LinearFromPQ
==============
*/
vec3_t *LinearFromPQ(vec3_t *result, vec3_t *pqValues)
{
  __int128 v2; 
  __int128 v6; 
  __int128 v8; 
  __int128 v10; 
  __int128 v12; 
  __int128 v14; 
  vec3_t *v16; 

  v2 = LODWORD(pqValues->v[0]);
  *(float *)&v2 = powf_0(*(float *)&v2, 0.012683313);
  v6 = v2;
  *(float *)&v6 = *(float *)&v2 - 0.8359375;
  _XMM1 = v6;
  __asm { vmaxss  xmm2, xmm1, xmm11 }
  result->v[0] = powf_0(*(float *)&_XMM2 / (float)(18.851562 - (float)(*(float *)&v2 * 18.6875)), 6.2773948) * 10000.0;
  v8 = LODWORD(pqValues->v[1]);
  *(float *)&v8 = powf_0(*(float *)&v8, 0.012683313);
  v10 = v8;
  *(float *)&v10 = *(float *)&v8 - 0.8359375;
  _XMM2 = v10;
  __asm { vmaxss  xmm3, xmm2, xmm11 }
  *(float *)&v10 = powf_0(*(float *)&_XMM3 / (float)(18.851562 - (float)(*(float *)&v8 * 18.6875)), 6.2773948) * 10000.0;
  v12 = LODWORD(pqValues->v[2]);
  result->v[1] = *(float *)&v10;
  *(float *)&v12 = powf_0(*(float *)&v12, 0.012683313);
  v14 = v12;
  *(float *)&v14 = *(float *)&v12 - 0.8359375;
  _XMM2 = v14;
  __asm { vmaxss  xmm3, xmm2, xmm11 }
  *(float *)&v12 = powf_0(*(float *)&_XMM3 / (float)(18.851562 - (float)(*(float *)&v12 * 18.6875)), 6.2773948);
  v16 = result;
  result->v[2] = *(float *)&v12 * 10000.0;
  return v16;
}

/*
==============
PQFromLinear
==============
*/
vec3_t *PQFromLinear(vec3_t *result, vec3_t *linearValues)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t *v12; 

  v4 = powf_0(linearValues->v[0] * 0.000099999997, 0.15930176);
  v5 = powf_0((float)((float)(v4 * 18.851562) + 0.8359375) / (float)((float)(v4 * 18.6875) + 1.0), 78.84375);
  v6 = linearValues->v[1];
  result->v[0] = v5;
  v7 = powf_0(v6 * 0.000099999997, 0.15930176);
  v8 = powf_0((float)((float)(v7 * 18.851562) + 0.8359375) / (float)((float)(v7 * 18.6875) + 1.0), 78.84375);
  v9 = linearValues->v[2];
  result->v[1] = v8;
  v10 = powf_0(v9 * 0.000099999997, 0.15930176);
  v11 = powf_0((float)((float)(v10 * 18.851562) + 0.8359375) / (float)((float)(v10 * 18.6875) + 1.0), 78.84375);
  v12 = result;
  result->v[2] = v11;
  return v12;
}

/*
==============
Primaries_BT2020FromBT709
==============
*/
vec3_t *Primaries_BT2020FromBT709(vec3_t *result, vec3_t *linearBT709)
{
  double v2; 
  vec3_t vec; 

  v2 = *(double *)linearBT709->v;
  vec.v[2] = linearBT709->v[2];
  *(double *)vec.v = v2;
  AxisTransformVec3(&BT2020_FROM_BT709_MAT, &vec, result);
  return result;
}

