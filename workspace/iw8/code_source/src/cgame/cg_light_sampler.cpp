/*
==============
CG_LightSampler_DataChanged
==============
*/

bool __fastcall CG_LightSampler_DataChanged(const usercmd_s *pPrevCmd, const usercmd_s *pNextCmd)
{
  return ?CG_LightSampler_DataChanged@@YA_NPEBUusercmd_s@@0@Z(pPrevCmd, pNextCmd);
}

/*
==============
CG_LightSampler_Update
==============
*/

void __fastcall CG_LightSampler_Update(LocalClientNum_t clientNum)
{
  ?CG_LightSampler_Update@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
CG_LightSampler_ProcessResults
==============
*/

void __fastcall CG_LightSampler_ProcessResults(LocalClientNum_t clientNum)
{
  ?CG_LightSampler_ProcessResults@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
CG_LightSampler_AddSamples
==============
*/

void __fastcall CG_LightSampler_AddSamples(LocalClientNum_t clientNum)
{
  ?CG_LightSampler_AddSamples@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
CG_LightSampler_AddSamples
==============
*/
void CG_LightSampler_AddSamples(LocalClientNum_t clientNum)
{
  const dvar_t *v13; 
  bool v30; 
  const dvar_t *v36; 
  int integer; 
  __int64 v39; 
  int v40; 
  __int64 v49; 
  __int64 v58; 
  unsigned int refdefViewOrg_aab; 
  const dvar_t *v234; 
  int v235; 
  __int64 v236; 
  vec3_t *p_center; 
  __int64 v238; 
  const dvar_t *v280; 
  const vec3_t *v289; 
  float c[2]; 
  float s[6]; 
  __int64 v304; 
  __int64 v305; 
  __int64 v306; 
  vec3_t out; 
  vec3_t end; 
  _BYTE v309[64]; 
  __int64 v345[28]; 
  vec3_t center; 
  char v347; 
  void *retaddr; 

  _RAX = &retaddr;
  v306 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _R12 = CG_GetLocalClientGlobals(clientNum);
  if ( _R12->predictedPlayerState.pm_type != 3 )
    goto LABEL_6;
  v13 = DCONST_DVARBOOL_cg_drawPlayerLightSample;
  if ( !DCONST_DVARBOOL_cg_drawPlayerLightSample && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerLightSample") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
LABEL_6:
    _RDI = DVARFLT_cg_playerLightSampleSize;
    if ( !DVARFLT_cg_playerLightSampleSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSampleSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm14, dword ptr [rdi+28h]
      vmovss  [rsp+410h+c], xmm14
      vmovaps ymm0, cs:__ymm@c000000041100000400000004000000041100000000000000000000041100000
      vmovups [rbp+310h+var_370], ymm0
      vmovaps ymm0, cs:__ymm@40a00000c00000004000000040a00000000000000000000040a00000c0000000
      vmovups [rbp+310h+var_350], ymm0
      vmovups xmm0, cs:__xmm@00000000c0c0000040000000c0000000
      vmovups [rbp+310h+var_330], xmm0
      vmovss  xmm1, dword ptr [r12+1F0h]
      vmulss  xmm5, xmm1, cs:__real@beb33333
      vmovss  [rbp+310h+var_320], xmm5
      vmovss  xmm6, cs:__real@c0c00000
      vmovss  [rbp+310h+var_31C], xmm6
      vxorps  xmm12, xmm12, xmm12
      vmovss  [rbp+310h+var_318], xmm12
      vmulss  xmm4, xmm1, cs:__real@bf000000
      vmovss  [rbp+310h+var_314], xmm4
      vmovss  [rbp+310h+var_310], xmm6
      vmovss  [rbp+310h+var_30C], xmm12
      vmulss  xmm3, xmm1, cs:__real@bf266666
      vmovss  [rbp+310h+var_308], xmm3
      vmovss  [rbp+310h+var_304], xmm6
      vmovss  [rbp+310h+var_300], xmm12
      vmulss  xmm2, xmm1, cs:__real@bf4ccccd
      vmovss  [rbp+310h+var_2FC], xmm2
      vmovss  [rbp+310h+var_2F8], xmm6
      vmovss  xmm0, cs:__real@40c00000
      vmovss  [rbp+310h+var_2F4], xmm0
      vmovss  [rbp+310h+var_2F0], xmm5
      vmovss  [rbp+310h+var_2EC], xmm6
      vmovss  [rbp+310h+var_2E8], xmm0
      vmovss  [rbp+310h+var_2E4], xmm4
      vmovss  [rbp+310h+var_2E0], xmm6
      vmovss  [rbp+310h+var_2DC], xmm0
      vmovss  [rbp+310h+var_2D8], xmm3
      vmovss  [rbp+310h+var_2D4], xmm6
      vmovss  [rbp+310h+var_2D0], xmm0
      vmovss  [rbp+310h+var_2CC], xmm2
      vmovss  [rbp+310h+var_2C8], xmm6
      vmovss  [rbp+310h+var_2C4], xmm6
      vmovss  [rbp+310h+var_2C0], xmm5
      vmovss  [rbp+310h+var_2BC], xmm6
      vmovss  [rbp+310h+var_2B8], xmm6
      vmovss  [rbp+310h+var_2B4], xmm4
      vmovss  [rbp+310h+var_2B0], xmm6
      vmovss  [rbp+310h+var_2AC], xmm6
      vmovss  [rbp+310h+var_2A8], xmm3
      vmovss  [rbp+310h+var_2A4], xmm6
      vmovss  [rbp+310h+var_2A0], xmm6
      vmovss  [rbp+310h+var_29C], xmm2
    }
    _RDI = DVARFLT_cg_playerLightSampleShapeSize;
    if ( !DVARFLT_cg_playerLightSampleShapeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSampleShapeSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm9, dword ptr [rdi+28h] }
    _RDI = DVARVEC3_cg_playerLightSampleShapeOffset;
    if ( !DVARVEC3_cg_playerLightSampleShapeOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSampleShapeOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm11, dword ptr [rdi+28h]
      vmovss  xmm10, dword ptr [rdi+2Ch]
      vmovss  xmm15, dword ptr [rdi+30h]
      vmovss  xmm0, cs:s_radius
      vucomiss xmm0, xmm9
    }
    if ( !v30 )
      goto LABEL_19;
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_sampleOffset
      vucomiss xmm0, xmm11
    }
    if ( !v30 )
      goto LABEL_19;
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_sampleOffset+4
      vucomiss xmm0, xmm10
    }
    if ( !v30 )
      goto LABEL_19;
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_sampleOffset+8
      vucomiss xmm0, xmm15
    }
    if ( !v30 )
    {
LABEL_19:
      s_offsetCylinderReady = 0;
      s_offsetHemisphereReady = 0;
    }
    _R13 = (vec3_t *)v309;
    v36 = DVARINT_cg_playerLightSamplePos;
    if ( !DVARINT_cg_playerLightSamplePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSamplePos") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    integer = v36->current.integer;
    __asm { vmovss  xmm13, cs:__real@3f800000 }
    if ( !integer )
    {
      _R13 = (vec3_t *)v309;
      v39 = 6i64;
      *(_QWORD *)s = 6i64;
      goto LABEL_40;
    }
    if ( integer == 1 )
    {
      if ( !s_offsetCylinderReady )
      {
        v40 = 0;
        _RDI = &s_offsetCylinder[0].v[1];
        __asm { vmovss  xmm8, cs:__real@3f860a92 }
        do
        {
          __asm
          {
            vmovaps xmm6, xmm12
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, esi
            vsubss  xmm0, xmm13, xmm0
            vmulss  xmm1, xmm0, cs:__real@41400000
            vaddss  xmm7, xmm1, xmm15
          }
          v49 = 6i64;
          do
          {
            __asm { vmovaps xmm0, xmm6; radians }
            FastSinCos(*(const float *)&_XMM0, s, c);
            __asm
            {
              vmulss  xmm1, xmm9, [rsp+410h+s]
              vaddss  xmm2, xmm1, xmm11
              vmovss  dword ptr [rdi-4], xmm2
              vmulss  xmm1, xmm9, [rsp+410h+c]
              vaddss  xmm2, xmm1, xmm10
              vmovss  dword ptr [rdi], xmm2
              vmovss  dword ptr [rdi+4], xmm7
              vaddss  xmm6, xmm6, xmm8
            }
            _RDI += 3;
            --v49;
          }
          while ( v49 );
          ++v40;
        }
        while ( v40 < 3 );
        s_offsetCylinderReady = 1;
      }
      _R13 = s_offsetCylinder;
      v39 = 0i64;
    }
    else
    {
      v39 = 0i64;
      *(_QWORD *)s = 0i64;
      if ( integer != 2 )
        goto LABEL_40;
      if ( !s_offsetHemisphereReady )
      {
        __asm
        {
          vmovss  xmm7, cs:__real@3ce38e39
          vxorps  xmm14, xmm14, xmm14
          vmovaps xmm12, xmm13
        }
        _RAX = &s_offsetHemisphere[1].v[1];
        v58 = 2i64;
        __asm
        {
          vmovss  xmm6, cs:__real@3d638e39
          vmovss  xmm4, cs:__real@bf2cecef
          vmovss  xmm8, cs:__real@3f3cc435
        }
        do
        {
          __asm
          {
            vmulss  xmm0, xmm7, xmm7
            vsubss  xmm0, xmm13, xmm0
            vsqrtss xmm1, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm9
            vmulss  xmm2, xmm3, xmm12
            vaddss  xmm0, xmm2, xmm11
            vmovss  dword ptr [rax-10h], xmm0
            vmulss  xmm1, xmm3, xmm14
            vaddss  xmm2, xmm1, xmm10
            vmovss  dword ptr [rax-0Ch], xmm2
            vmulss  xmm0, xmm7, xmm9
            vaddss  xmm1, xmm0, xmm15
            vmovss  dword ptr [rax-8], xmm1
            vaddss  xmm5, xmm7, xmm6
            vmulss  xmm1, xmm12, xmm4
            vmulss  xmm0, xmm14, xmm8
            vsubss  xmm7, xmm1, xmm0
            vmulss  xmm2, xmm12, cs:__real@bf3cc435
            vmulss  xmm1, xmm14, xmm4
            vsubss  xmm4, xmm2, xmm1
            vmulss  xmm0, xmm5, xmm5
            vsubss  xmm0, xmm13, xmm0
            vsqrtss xmm1, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm9
            vmulss  xmm2, xmm3, xmm4
            vaddss  xmm0, xmm2, xmm11
            vmovss  dword ptr [rax-4], xmm0
            vmulss  xmm1, xmm3, xmm7
            vaddss  xmm2, xmm1, xmm10
            vmovss  dword ptr [rax], xmm2
            vmulss  xmm0, xmm5, xmm9
            vaddss  xmm1, xmm0, xmm15
            vmovss  dword ptr [rax+4], xmm1
            vaddss  xmm6, xmm5, xmm6
            vmulss  xmm1, xmm4, cs:__real@bf2cecef
            vmulss  xmm0, xmm7, xmm8
            vsubss  xmm8, xmm1, xmm0
            vmulss  xmm2, xmm4, cs:__real@bf3cc435
            vmovss  xmm4, cs:__real@bf2cecef
            vmulss  xmm1, xmm7, xmm4
            vsubss  xmm5, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vsubss  xmm0, xmm13, xmm0
            vsqrtss xmm1, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm9
            vmulss  xmm2, xmm3, xmm5
            vaddss  xmm0, xmm2, xmm11
            vmovss  dword ptr [rax+8], xmm0
            vmulss  xmm1, xmm3, xmm8
            vaddss  xmm2, xmm1, xmm10
            vmovss  dword ptr [rax+0Ch], xmm2
            vmulss  xmm0, xmm6, xmm9
            vaddss  xmm1, xmm0, xmm15
            vmovss  dword ptr [rax+10h], xmm1
            vaddss  xmm6, xmm6, cs:__real@3d638e39
            vmulss  xmm1, xmm5, xmm4
            vmulss  xmm0, xmm8, cs:__real@3f3cc435
            vsubss  xmm7, xmm1, xmm0
            vmulss  xmm2, xmm5, cs:__real@bf3cc435
            vmulss  xmm1, xmm8, xmm4
            vsubss  xmm4, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vsubss  xmm0, xmm13, xmm0
            vsqrtss xmm1, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm9
            vmulss  xmm2, xmm3, xmm4
            vaddss  xmm0, xmm2, xmm11
            vmovss  dword ptr [rax+14h], xmm0
            vmulss  xmm1, xmm3, xmm7
            vaddss  xmm2, xmm1, xmm10
            vmovss  dword ptr [rax+18h], xmm2
            vmulss  xmm0, xmm6, xmm9
            vaddss  xmm1, xmm0, xmm15
            vmovss  dword ptr [rax+1Ch], xmm1
            vaddss  xmm6, xmm6, cs:__real@3d638e39
            vmulss  xmm1, xmm4, cs:__real@bf2cecef
            vmulss  xmm0, xmm7, cs:__real@3f3cc435
            vsubss  xmm8, xmm1, xmm0
            vmulss  xmm2, xmm4, cs:__real@bf3cc435
            vmovss  xmm4, cs:__real@bf2cecef
            vmulss  xmm1, xmm7, xmm4
            vsubss  xmm5, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vsubss  xmm0, xmm13, xmm0
            vsqrtss xmm1, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm9
            vmulss  xmm2, xmm3, xmm5
            vaddss  xmm0, xmm2, xmm11
            vmovss  dword ptr [rax+20h], xmm0
            vmulss  xmm1, xmm3, xmm8
            vaddss  xmm2, xmm1, xmm10
            vmovss  dword ptr [rax+24h], xmm2
            vmulss  xmm0, xmm6, xmm9
            vaddss  xmm1, xmm0, xmm15
            vmovss  dword ptr [rax+28h], xmm1
            vaddss  xmm6, xmm6, cs:__real@3d638e39
            vmulss  xmm1, xmm5, xmm4
            vmulss  xmm0, xmm8, cs:__real@3f3cc435
            vsubss  xmm7, xmm1, xmm0
            vmulss  xmm2, xmm5, cs:__real@bf3cc435
            vmulss  xmm1, xmm8, xmm4
            vsubss  xmm4, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vsubss  xmm0, xmm13, xmm0
            vsqrtss xmm1, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm9
            vmulss  xmm2, xmm3, xmm4
            vaddss  xmm0, xmm2, xmm11
            vmovss  dword ptr [rax+2Ch], xmm0
            vmulss  xmm1, xmm3, xmm7
            vaddss  xmm2, xmm1, xmm10
            vmovss  dword ptr [rax+30h], xmm2
            vmulss  xmm0, xmm6, xmm9
            vaddss  xmm1, xmm0, xmm15
            vmovss  dword ptr [rax+34h], xmm1
            vaddss  xmm6, xmm6, cs:__real@3d638e39
            vmulss  xmm1, xmm4, cs:__real@bf2cecef
            vmulss  xmm0, xmm7, cs:__real@3f3cc435
            vsubss  xmm8, xmm1, xmm0
            vmulss  xmm2, xmm4, cs:__real@bf3cc435
            vmovss  xmm4, cs:__real@bf2cecef
            vmulss  xmm1, xmm7, xmm4
            vsubss  xmm5, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vsubss  xmm0, xmm13, xmm0
            vsqrtss xmm1, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm9
            vmulss  xmm2, xmm5, xmm3
            vaddss  xmm0, xmm2, xmm11
            vmovss  dword ptr [rax+38h], xmm0
            vmulss  xmm1, xmm8, xmm3
            vaddss  xmm2, xmm1, xmm10
            vmovss  dword ptr [rax+3Ch], xmm2
            vmulss  xmm0, xmm6, xmm9
            vaddss  xmm1, xmm0, xmm15
            vmovss  dword ptr [rax+40h], xmm1
            vaddss  xmm6, xmm6, cs:__real@3d638e39
            vmulss  xmm1, xmm5, xmm4
            vmulss  xmm0, xmm8, cs:__real@3f3cc435
            vsubss  xmm7, xmm1, xmm0
            vmulss  xmm2, xmm5, cs:__real@bf3cc435
            vmulss  xmm1, xmm8, xmm4
            vsubss  xmm4, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vsubss  xmm0, xmm13, xmm0
            vsqrtss xmm1, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm9
            vmulss  xmm2, xmm4, xmm3
            vaddss  xmm0, xmm2, xmm11
            vmovss  dword ptr [rax+44h], xmm0
            vmulss  xmm1, xmm7, xmm3
            vaddss  xmm2, xmm1, xmm10
            vmovss  dword ptr [rax+48h], xmm2
            vmulss  xmm0, xmm6, xmm9
            vaddss  xmm1, xmm0, xmm15
            vmovss  dword ptr [rax+4Ch], xmm1
            vaddss  xmm6, xmm6, cs:__real@3d638e39
            vmulss  xmm1, xmm4, cs:__real@bf2cecef
            vmulss  xmm0, xmm7, cs:__real@3f3cc435
            vsubss  xmm8, xmm1, xmm0
            vmulss  xmm2, xmm4, cs:__real@bf3cc435
            vmovss  xmm4, cs:__real@bf2cecef
            vmulss  xmm1, xmm7, xmm4
            vsubss  xmm5, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vsubss  xmm0, xmm13, xmm0
            vsqrtss xmm1, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm9
            vmulss  xmm2, xmm5, xmm3
            vaddss  xmm0, xmm2, xmm11
            vmovss  dword ptr [rax+50h], xmm0
            vmulss  xmm1, xmm8, xmm3
            vaddss  xmm2, xmm1, xmm10
            vmovss  dword ptr [rax+54h], xmm2
            vmulss  xmm0, xmm6, xmm9
            vaddss  xmm1, xmm0, xmm15
            vmovss  dword ptr [rax+58h], xmm1
            vaddss  xmm7, xmm6, cs:__real@3d638e39
            vmulss  xmm1, xmm5, xmm4
            vmulss  xmm0, xmm8, cs:__real@3f3cc435
            vsubss  xmm14, xmm1, xmm0
            vmulss  xmm2, xmm5, cs:__real@bf3cc435
            vmulss  xmm1, xmm8, xmm4
            vsubss  xmm12, xmm2, xmm1
          }
          _RAX += 27;
          --v58;
          __asm
          {
            vmovss  xmm6, cs:__real@3d638e39
            vmovss  xmm8, cs:__real@3f3cc435
          }
        }
        while ( v58 );
        s_offsetHemisphereReady = 1;
        __asm
        {
          vxorps  xmm12, xmm12, xmm12
          vmovss  xmm14, [rsp+410h+c]
        }
      }
      _R13 = s_offsetHemisphere;
    }
    *(_QWORD *)s = 0i64;
LABEL_40:
    if ( _R12 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = _R12->refdef.view.refdefViewOrg_aab;
    if ( _R12 == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(s[2]) = LODWORD(_R12->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_R12 + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)_R12 + 26936)) + 2));
    LODWORD(s[3]) = LODWORD(_R12->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_R12 + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)_R12 + 26940)) + 2));
    LODWORD(s[4]) = ((refdefViewOrg_aab ^ ((_DWORD)_R12 + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)_R12 + 26944)) + 2)) ^ LODWORD(_R12->refdef.view.org.org.v[2]);
    _RSI = &_R12->refdef.view.axis;
    __asm
    {
      vmovss  xmm4, dword ptr [rsi+4]
      vmovss  xmm3, dword ptr [rsi]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vmovss  xmm15, cs:__real@80000000
      vcmpless xmm0, xmm2, xmm15
      vblendvps xmm1, xmm2, xmm13, xmm0
      vdivss  xmm0, xmm13, xmm1
      vmulss  xmm10, xmm0, xmm3
      vmulss  xmm11, xmm0, xmm4
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm7, xmm11, xmm9
    }
    v234 = DVARINT_cg_playerLightSampleNormal;
    if ( !DVARINT_cg_playerLightSampleNormal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSampleNormal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v234);
    v235 = v234->current.integer;
    v236 = 0i64;
    p_center = &center;
    v238 = (char *)_R13 - (char *)&center;
    v305 = (char *)_R13 - (char *)&center;
    _RDI = 0i64;
    v304 = 18i64;
    while ( 1 )
    {
      if ( v236 < 0 || v236 >= v39 )
      {
        _R15 = &_R13[_RDI / 0xC];
        if ( &_R13[_RDI / 0xC] == &out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        __asm
        {
          vmovss  xmm4, dword ptr [rdi+r13+4]
          vmovss  xmm5, dword ptr [r15]
          vmovss  xmm6, dword ptr [rdi+r13+8]
          vmulss  xmm1, xmm4, xmm7
          vmulss  xmm0, xmm5, xmm10
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm12, xmm6
          vaddss  xmm8, xmm2, xmm1
          vmovss  dword ptr [rsp+410h+out], xmm8
          vmulss  xmm3, xmm4, xmm10
          vmulss  xmm0, xmm11, xmm5
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm1, xmm12, xmm6
          vaddss  xmm7, xmm2, xmm1
          vmovss  dword ptr [rsp+410h+out+4], xmm7
          vmulss  xmm3, xmm4, xmm12
          vmulss  xmm0, xmm12, xmm5
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm1, xmm13, xmm6
          vaddss  xmm4, xmm2, xmm1
          vmovss  dword ptr [rbp+310h+out+8], xmm4
        }
      }
      else
      {
        MatrixTransformVector((vec3_t *)((char *)p_center + v238), _RSI, &out);
        __asm
        {
          vmovss  xmm4, dword ptr [rbp+310h+out+8]
          vmovss  xmm7, dword ptr [rsp+410h+out+4]
          vmovss  xmm8, dword ptr [rsp+410h+out]
        }
      }
      __asm
      {
        vaddss  xmm0, xmm8, [rsp+410h+var_3C0]
        vmovss  dword ptr [rbp+rdi+310h+center], xmm0
        vaddss  xmm1, xmm7, [rsp+410h+var_3BC]
        vmovss  dword ptr [rbp+rdi+310h+center+4], xmm1
        vaddss  xmm0, xmm4, dword ptr [rsp+410h+var_3B8]
        vmovss  dword ptr [rbp+rdi+310h+center+8], xmm0
      }
      switch ( v235 )
      {
        case 0:
          *(__int64 *)((char *)v345 + _RDI) = 0i64;
          *(_DWORD *)((char *)&v345[1] + _RDI) = 0;
          goto LABEL_68;
        case 1:
          *(__int64 *)((char *)v345 + _RDI) = 0i64;
          *(_DWORD *)((char *)&v345[1] + _RDI) = 1065353216;
          goto LABEL_68;
        case 2:
          __asm
          {
            vmovsd  xmm0, qword ptr [rsi]
            vmovsd  [rbp+rdi+310h+var_290], xmm0
          }
          *(float *)((char *)&v345[1] + _RDI) = _RSI->m[0].v[2];
          goto LABEL_68;
        case 3:
          __asm
          {
            vmovss  xmm0, dword ptr [rsi]
            vxorps  xmm1, xmm0, xmm9
            vmovss  dword ptr [rbp+rdi+310h+var_290], xmm1
            vmovss  xmm0, dword ptr [rsi+4]
            vxorps  xmm1, xmm0, xmm9
            vmovss  dword ptr [rbp+rdi+310h+var_290+4], xmm1
            vmovss  xmm2, dword ptr [rsi+8]
            vxorps  xmm0, xmm2, xmm9
          }
          break;
        case 4:
          __asm
          {
            vmulss  xmm1, xmm7, xmm7
            vmulss  xmm0, xmm8, xmm8
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm3, xmm2, xmm2
            vcmpless xmm0, xmm3, xmm15
            vblendvps xmm1, xmm3, xmm13, xmm0
            vdivss  xmm2, xmm13, xmm1
            vmulss  xmm0, xmm2, xmm8
            vmovss  dword ptr [rbp+rdi+310h+var_290], xmm0
            vmulss  xmm1, xmm2, xmm7
            vmovss  dword ptr [rbp+rdi+310h+var_290+4], xmm1
            vmulss  xmm0, xmm2, xmm4
          }
          break;
        default:
          goto LABEL_68;
      }
      __asm { vmovss  [rbp+rdi+310h+var_288], xmm0 }
LABEL_68:
      v280 = DCONST_DVARBOOL_cg_drawPlayerLightSample;
      if ( !DCONST_DVARBOOL_cg_drawPlayerLightSample && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerLightSample") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v280);
      if ( v280->current.enabled )
      {
        __asm { vmovaps xmm1, xmm14; radius }
        CG_DebugSphere(p_center, *(float *)&_XMM1, &colorYellow, 1, 1);
        if ( v235 )
        {
          __asm
          {
            vmulss  xmm0, xmm14, dword ptr [rbp+rdi+310h+var_290]
            vmulss  xmm1, xmm14, dword ptr [rbp+rdi+310h+var_290+4]
            vmulss  xmm2, xmm14, [rbp+rdi+310h+var_288]
            vaddss  xmm0, xmm0, dword ptr [rbp+rdi+310h+center]
            vmovss  dword ptr [rbp+310h+end], xmm0
            vaddss  xmm1, xmm1, dword ptr [rbp+rdi+310h+center+4]
            vmovss  dword ptr [rbp+310h+end+4], xmm1
            vaddss  xmm0, xmm2, dword ptr [rbp+rdi+310h+center+8]
            vmovss  dword ptr [rbp+310h+end+8], xmm0
          }
          CG_DebugLine(p_center, &end, &colorRed, 1, 1);
        }
      }
      ++p_center;
      ++v236;
      _RDI += 12i64;
      v30 = v304-- == 1;
      __asm { vxorps  xmm7, xmm11, xmm9 }
      v39 = *(_QWORD *)s;
      v238 = v305;
      if ( v30 )
      {
        v289 = (const vec3_t *)v345;
        if ( !v235 )
          v289 = NULL;
        __asm { vmovaps xmm3, xmm14; pointSize }
        R_AllocLightSensors(0, &center, 0x12u, *(float *)&_XMM3, v289);
        memset(&s[2], 0, 0xCui64);
        break;
      }
    }
  }
  _R11 = &v347;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CG_LightSampler_Compare
==============
*/
__int64 CG_LightSampler_Compare(const void *a, const void *b)
{
  char v2; 
  char v3; 
  __int64 result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, dword ptr [rdx]
  }
  result = 1i64;
  if ( v2 | v3 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
CG_LightSampler_DataChanged
==============
*/
bool CG_LightSampler_DataChanged(const usercmd_s *pPrevCmd, const usercmd_s *pNextCmd)
{
  return pPrevCmd->lightSample.bValid != pNextCmd->lightSample.bValid || pPrevCmd->lightSample.value != pNextCmd->lightSample.value;
}

/*
==============
CG_LightSampler_ProcessResults
==============
*/
void CG_LightSampler_ProcessResults(LocalClientNum_t clientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v9; 
  unsigned int v10; 
  bool v12; 
  bool v13; 
  signed int v20; 
  __int64 v22; 
  unsigned int sampleCount; 
  __int64 v29; 
  bool v31; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  unsigned int v38; 
  const OmnvarDef *v39; 
  const OmnvarData *v40; 
  const dvar_t *v49; 
  const char *v57; 
  const char *v69; 
  GfxLightSensorResult lightSensorOut; 
  __int64 v79; 
  int v80; 
  __int128 Base[16]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(clientNum);
  if ( R_LightSensor_Query(&lightSensorOut) )
  {
    v9 = DVARINT_cg_playerLightSampleFilter;
    __asm
    {
      vmovaps [rsp+12A0h+var_30], xmm6
      vmovaps [rsp+12A0h+var_40], xmm7
      vmovaps [rsp+12A0h+var_50], xmm9
      vmovaps [rsp+12A0h+var_60], xmm10
      vmovaps [rsp+12A0h+var_70], xmm11
    }
    if ( !DVARINT_cg_playerLightSampleFilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSampleFilter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.integer )
    {
      if ( lightSensorOut.entity[0].sampleCount > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_light_sampler.cpp", 117, ASSERT_TYPE_ASSERT, "(64 >= pMapping->sampleCount)", (const char *)&queryFormat, "LIGHT_SENSOR_MAX_ENTITY_SAMPLES >= pMapping->sampleCount") )
        __debugbreak();
      sampleCount = lightSensorOut.entity[0].sampleCount;
      memcpy_0(Base, &lightSensorOut.sampleLuminance[lightSensorOut.entity[0].firstSample], 4i64 * lightSensorOut.entity[0].sampleCount);
      qsort(Base, sampleCount, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CG_LightSampler_Compare);
      if ( lightSensorOut.entity[0].sampleCount < 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_light_sampler.cpp", 124, ASSERT_TYPE_ASSERT, "(pMapping->sampleCount >= 12)", (const char *)&queryFormat, "pMapping->sampleCount >= 12") )
        __debugbreak();
      v29 = lightSensorOut.entity[0].sampleCount - 3;
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vxorps  xmm6, xmm6, xmm6
      }
      v31 = (unsigned __int64)v29 <= 3;
      if ( v29 > 3 )
      {
        for ( _RBX = 3i64; _RBX < v29; v31 = _RBX <= (unsigned __int64)v29 )
        {
          __asm { vcomiss xmm7, dword ptr [rbp+rbx*4+11A0h+Base] }
          if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_light_sampler.cpp", 134, ASSERT_TYPE_ASSERT, "(sampleLuminance[i] >= 0.0f)", (const char *)&queryFormat, "sampleLuminance[i] >= 0.0f") )
            __debugbreak();
          __asm { vaddss  xmm6, xmm6, dword ptr [rbp+rbx*4+11A0h+Base] }
          ++_RBX;
        }
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vdivss  xmm6, xmm6, xmm0
      }
    }
    else
    {
      v10 = 0;
      v79 = 0i64;
      v80 = 0;
      __asm { vxorps  xmm7, xmm7, xmm7 }
      v12 = 0;
      v13 = lightSensorOut.entity[0].sampleCount == 0;
      if ( lightSensorOut.entity[0].sampleCount )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rbp+11A0h+var_190+8]
          vmovss  xmm2, dword ptr [rbp+11A0h+var_190+4]
          vmovss  xmm4, dword ptr [rbp+11A0h+var_190]
        }
        do
        {
          _RAX = lightSensorOut.entity[0].firstSample + v10;
          __asm
          {
            vmovss  xmm1, [rbp+rax*4+11A0h+lightSensorOut.sampleLuminance]
            vcomiss xmm1, xmm7
          }
          if ( !v12 )
          {
            __asm { vcomiss xmm1, xmm4 }
            if ( v13 )
            {
              __asm
              {
                vcomiss xmm1, xmm2
                vcmpltss xmm0, xmm3, xmm1
                vblendvps xmm0, xmm3, xmm1, xmm0
                vmovaps xmm3, xmm0
                vmovss  dword ptr [rbp+11A0h+var_190+8], xmm0
              }
            }
            else
            {
              __asm
              {
                vmovss  dword ptr [rbp+11A0h+var_190+8], xmm2
                vmovaps xmm3, xmm2
                vmovaps xmm2, xmm4
                vmovss  dword ptr [rbp+11A0h+var_190+4], xmm4
                vmovaps xmm4, xmm1
              }
            }
          }
          v12 = ++v10 < lightSensorOut.entity[0].sampleCount;
          v13 = v10 <= lightSensorOut.entity[0].sampleCount;
        }
        while ( v10 < lightSensorOut.entity[0].sampleCount );
        __asm { vmovss  dword ptr [rbp+11A0h+var_190], xmm4 }
      }
      v20 = 3;
      __asm { vmovaps xmm1, xmm7 }
      if ( (int)lightSensorOut.entity[0].sampleCount < 3 )
        v20 = lightSensorOut.entity[0].sampleCount;
      v22 = 0i64;
      if ( v20 > 0i64 )
      {
        if ( v20 >= 4i64 )
        {
          do
          {
            __asm
            {
              vaddss  xmm0, xmm1, dword ptr [rbp+rcx*4+11A0h+var_190]
              vaddss  xmm1, xmm0, dword ptr [rbp+rcx*4+11A0h+var_190+4]
              vaddss  xmm2, xmm1, dword ptr [rbp+rcx*4+11A0h+var_190+8]
              vaddss  xmm1, xmm2, dword ptr [rbp+rcx*4+11A0h+var_190+0Ch]
            }
            v22 += 4i64;
          }
          while ( v22 < v20 - 3i64 );
        }
        for ( ; v22 < v20; ++v22 )
          __asm { vaddss  xmm1, xmm1, dword ptr [rbp+rcx*4+11A0h+var_190] }
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vdivss  xmm6, xmm1, xmm0
      }
    }
    IndexByName = BG_Omnvar_GetIndexByName("ai_fulllight");
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData(clientNum, IndexByName);
    *(double *)&_XMM0 = Omnvar_GetFloat(Def, Data);
    __asm { vmovaps xmm10, xmm0 }
    v38 = BG_Omnvar_GetIndexByName("ai_nolight");
    v39 = BG_Omnvar_GetDef(v38);
    v40 = CG_Omnvar_GetData(clientNum, v38);
    *(double *)&_XMM0 = Omnvar_GetFloat(v39, v40);
    __asm
    {
      vsubss  xmm2, xmm10, xmm0
      vsubss  xmm3, xmm6, xmm0
      vmovaps xmm9, xmm0
      vdivss  xmm0, xmm3, xmm2; val
      vmovss  xmm2, cs:__real@3f800000; max
      vmovaps xmm1, xmm7; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@40e00000
      vcvttss2si eax, xmm1
    }
    LocalClientGlobals->lightSample.value = _EAX;
    LocalClientGlobals->lightSample.bValid = 1;
    v49 = DCONST_DVARBOOL_cg_drawPlayerLightSample;
    __asm { vmovaps xmm11, xmm0 }
    if ( !DCONST_DVARBOOL_cg_drawPlayerLightSample && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerLightSample") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v49);
    if ( v49->current.enabled )
    {
      __asm
      {
        vmovss  xmm7, cs:__real@447a0000
        vmulss  xmm0, xmm6, xmm7
        vcvtss2sd xmm2, xmm0, xmm0
        vcvtss2sd xmm1, xmm6, xmm6
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v57 = j_va("light %.3f knits, %.3f nits", _RDX, _R8);
      __asm
      {
        vmovss  xmm3, cs:__real@3f800000; scale
        vmovss  xmm1, cs:__real@437a0000; y
        vmovss  xmm0, cs:__real@42c80000; x
      }
      CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, v57, 0, 1);
      __asm
      {
        vmulss  xmm1, xmm9, xmm7
        vcvtss2sd xmm2, xmm1, xmm1
        vmulss  xmm0, xmm10, xmm7
        vcvtss2sd xmm1, xmm11, xmm11
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   rdx, xmm1
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      v69 = j_va("light nml = %.3f, no light = %.3f nits, full light = %.3f nits", _RDX, _R8, _R9);
      __asm
      {
        vmovss  xmm3, cs:__real@3f800000; scale
        vmovss  xmm1, cs:__real@43870000; y
        vmovss  xmm0, cs:__real@42c80000; x
      }
      CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, v69, 0, 1);
    }
    __asm
    {
      vmovaps xmm10, [rsp+12A0h+var_60]
      vmovaps xmm9, [rsp+12A0h+var_50]
      vmovaps xmm7, [rsp+12A0h+var_40]
      vmovaps xmm6, [rsp+12A0h+var_30]
      vmovaps xmm11, [rsp+12A0h+var_70]
    }
  }
  else
  {
    LocalClientGlobals->lightSample = 0;
  }
}

/*
==============
CG_LightSampler_Update
==============
*/
void CG_LightSampler_Update(LocalClientNum_t clientNum)
{
  CG_LightSampler_ProcessResults(clientNum);
  CG_LightSampler_AddSamples(clientNum);
}

