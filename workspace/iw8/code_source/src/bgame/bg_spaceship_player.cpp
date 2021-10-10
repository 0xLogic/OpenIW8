/*
==============
BgSpaceshipPlayer::BuildAxisFromForward
==============
*/

void __fastcall BgSpaceshipPlayer::BuildAxisFromForward(const vec3_t *forward, const tmat33_t<vec3_t> *refAxis, tmat33_t<vec3_t> *outAxis)
{
  ?BuildAxisFromForward@BgSpaceshipPlayer@@SAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT3@@Z(forward, refAxis, outAxis);
}

/*
==============
BgSpaceshipPlayer::BuildAxisFromForward
==============
*/
void BgSpaceshipPlayer::BuildAxisFromForward(const vec3_t *forward, const tmat33_t<vec3_t> *refAxis, tmat33_t<vec3_t> *outAxis)
{
  float v3; 
  float v4; 
  float v5; 
  vec3_t *v7; 
  __int128 v8; 
  __int128 v9; 
  vec3_t *v13; 
  __int128 v14; 
  __int128 v15; 

  v3 = forward->v[0];
  outAxis->m[0].v[0] = forward->v[0];
  v4 = forward->v[1];
  outAxis->m[0].v[1] = v4;
  v5 = forward->v[2];
  outAxis->m[0].v[2] = v5;
  v7 = &outAxis->m[1];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v4 * refAxis->m[2].v[1]) + (float)(v3 * refAxis->m[2].v[0])) + (float)(v5 * refAxis->m[2].v[2])) & _xmm) >= 0.99900001 )
  {
    v13 = &outAxis->m[2];
    Vec3Cross(outAxis->m, &refAxis->m[1], &outAxis->m[2]);
    v14 = LODWORD(v13->v[0]);
    v15 = v14;
    *(float *)&v15 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13->v[1] * v13->v[1])) + (float)(v13->v[2] * v13->v[2]));
    _XMM4 = v15;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v13->v[0] = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM0);
    v13->v[1] = (float)(1.0 / *(float *)&_XMM0) * v13->v[1];
    v13->v[2] = (float)(1.0 / *(float *)&_XMM0) * v13->v[2];
    Vec3Cross(v13, outAxis->m, v7);
  }
  else
  {
    Vec3Cross(&refAxis->m[2], outAxis->m, &outAxis->m[1]);
    v8 = LODWORD(v7->v[0]);
    v9 = v8;
    *(float *)&v9 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v7->v[1] * v7->v[1])) + (float)(v7->v[2] * v7->v[2]));
    _XMM4 = v9;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v7->v[0] = *(float *)&v8 * (float)(1.0 / *(float *)&_XMM0);
    v7->v[1] = (float)(1.0 / *(float *)&_XMM0) * v7->v[1];
    v7->v[2] = (float)(1.0 / *(float *)&_XMM0) * v7->v[2];
    Vec3Cross(outAxis->m, v7, &outAxis->m[2]);
  }
}

