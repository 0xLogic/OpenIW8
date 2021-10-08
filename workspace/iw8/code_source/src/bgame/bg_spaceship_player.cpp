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
  tmat33_t<vec3_t> *v6; 
  vec3_t *v13; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx]
    vmovss  dword ptr [r8], xmm2
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [r8+4], xmm0
    vmovss  xmm3, dword ptr [rcx+8]
  }
  v6 = outAxis;
  __asm
  {
    vmovss  dword ptr [r8+8], xmm3
    vmulss  xmm1, xmm0, dword ptr [rcx+4]
    vmulss  xmm0, xmm2, dword ptr [rcx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rcx+8]
    vaddss  xmm0, xmm2, xmm1
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3f7fbe77
  }
  v13 = &outAxis->m[1];
  _RSI = &outAxis->m[2];
  Vec3Cross(outAxis->m, &refAxis->m[1], &outAxis->m[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  xmm5, dword ptr [rsi]
    vmovss  xmm3, dword ptr [rsi+8]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsi], xmm0
    vmulss  xmm1, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+8], xmm0
  }
  Vec3Cross(_RSI, v6->m, v13);
}

