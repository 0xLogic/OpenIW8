/*
==============
Particle_AssertFloat4IsNormalized
==============
*/

void __fastcall Particle_AssertFloat4IsNormalized(const float4 *normal)
{
  ?Particle_AssertFloat4IsNormalized@@YAXAEBUfloat4@@@Z(normal);
}

/*
==============
Particle_GenerateMatrixFromLookAt
==============
*/

void __fastcall Particle_GenerateMatrixFromLookAt(const float4 *lookAtInput, vector3 *outMatrix)
{
  ?Particle_GenerateMatrixFromLookAt@@YAXAEBUfloat4@@AEAUvector3@@@Z(lookAtInput, outMatrix);
}

/*
==============
Particle_RotMatrixToQuatVec
==============
*/

void __fastcall Particle_RotMatrixToQuatVec(const vector3 *rotMatrix, vec4_t *quat)
{
  ?Particle_RotMatrixToQuatVec@@YAXAEBUvector3@@AEATvec4_t@@@Z(rotMatrix, quat);
}

/*
==============
Particle_VerifyAssetList
==============
*/

void __fastcall Particle_VerifyAssetList(const ParticleLinkedAssetListDef *pLinkedAssetList)
{
  ?Particle_VerifyAssetList@@YAXPEBUParticleLinkedAssetListDef@@@Z(pLinkedAssetList);
}

/*
==============
Particle_bitset<2560>::Particle_bitset<2560>
==============
*/

void __fastcall Particle_bitset<2560>::Particle_bitset<2560>(Particle_bitset<2560> *this)
{
  ??0?$Particle_bitset@$0KAA@@@QEAA@XZ(this);
}

/*
==============
Particle_bitset<2560>::test
==============
*/

bool __fastcall Particle_bitset<2560>::test(Particle_bitset<2560> *this, const unsigned __int64 pos)
{
  return ?test@?$Particle_bitset@$0KAA@@@QEBA_N_K@Z(this, pos);
}

/*
==============
Particle_GetDynEntTransform
==============
*/

bool __fastcall Particle_GetDynEntTransform(LocalClientNum_t localClientNum, unsigned int dynEntId, unsigned int partIndex, vec3_t *outOrigin, vec4_t *outQuat, const char *pVFXName)
{
  return ?Particle_GetDynEntTransform@@YA_NW4LocalClientNum_t@@IIAEATvec3_t@@AEATvec4_t@@PEBD@Z(localClientNum, dynEntId, partIndex, outOrigin, outQuat, pVFXName);
}

/*
==============
Particle_bitset<256>::Particle_bitset<256>
==============
*/

void __fastcall Particle_bitset<256>::Particle_bitset<256>(Particle_bitset<256> *this)
{
  ??0?$Particle_bitset@$0BAA@@@QEAA@XZ(this);
}

/*
==============
Particle_GenerateCameraFacingMatrix
==============
*/

void __fastcall Particle_GenerateCameraFacingMatrix(const float4 *cameraPos, const float4 *targetPos, const float4 *currLookAt, vector3 *outMatrix)
{
  ?Particle_GenerateCameraFacingMatrix@@YAXAEBUfloat4@@00AEAUvector3@@@Z(cameraPos, targetPos, currLookAt, outMatrix);
}

/*
==============
Particle_bitset<2560>::set
==============
*/

void __fastcall Particle_bitset<2560>::set(Particle_bitset<2560> *this, const unsigned __int64 pos)
{
  ?set@?$Particle_bitset@$0KAA@@@QEAAX_K@Z(this, pos);
}

/*
==============
Particle_RotMatrixAutoRenormalize
==============
*/

void __fastcall Particle_RotMatrixAutoRenormalize(vector3 *rotMatrix)
{
  ?Particle_RotMatrixAutoRenormalize@@YAXAEAUvector3@@@Z(rotMatrix);
}

/*
==============
Particle_RotMatrixToQuat
==============
*/

void __fastcall Particle_RotMatrixToQuat(const vector3 *rotMatrix, float4 *quat)
{
  ?Particle_RotMatrixToQuat@@YAXAEBUvector3@@AEAUfloat4@@@Z(rotMatrix, quat);
}

/*
==============
Particle_bitset<4096>::Particle_bitset<4096>
==============
*/

void __fastcall Particle_bitset<4096>::Particle_bitset<4096>(Particle_bitset<4096> *this)
{
  ??0?$Particle_bitset@$0BAAA@@@QEAA@XZ(this);
}

/*
==============
Particle_AssertFloat4IsNormalized
==============
*/
void Particle_AssertFloat4IsNormalized(const float4 *normal)
{
  double v20; 
  double v21; 
  double v22; 
  double v23; 

  __asm
  {
    vmovups xmm3, xmmword ptr [rcx]
    vmulss  xmm1, xmm3, xmm3
    vshufps xmm4, xmm3, xmm3, 55h ; 'U'
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vshufps xmm5, xmm3, xmm3, 0AAh ; 'ª'
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm0
    vmovaps [rsp+68h+var_18], xmm6
    vshufps xmm6, xmm3, xmm3, 0FFh
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm1, xmm1, xmm0
    vsubss  xmm2, xmm1, cs:__real@3f800000
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3b83126f
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  [rsp+68h+var_20], xmm0
    vcvtss2sd xmm1, xmm5, xmm5
    vmovsd  [rsp+68h+var_28], xmm1
    vcvtss2sd xmm2, xmm4, xmm4
    vmovsd  [rsp+68h+var_30], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+68h+var_38], xmm3
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 136, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( normalVec ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( normalVec )", v20, v21, v22, v23) )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
Particle_GenerateCameraFacingMatrix
==============
*/
void Particle_GenerateCameraFacingMatrix(const float4 *cameraPos, const float4 *targetPos, const float4 *currLookAt, vector3 *outMatrix)
{
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  _RBX = outMatrix;
  _RDI = currLookAt;
  _RBP = targetPos;
  _RSI = cameraPos;
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 412, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( targetPos ))", (const char *)&queryFormat, "!Float4IsNaN( targetPos )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 413, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( cameraPos ))", (const char *)&queryFormat, "!Float4IsNaN( cameraPos )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 414, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( currLookAt ))", (const char *)&queryFormat, "!Float4IsNaN( currLookAt )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vsubps  xmm4, xmm0, xmmword ptr [rsi]
    vmovups xmm2, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vmovups xmm3, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
    vandnps xmm0, xmm2, xmm4
    vcmpltps xmm0, xmm3, xmm0
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) == 0 )
    __asm { vmovdqa xmm4, xmmword ptr cs:?g_0010@@3Ufloat4@@B.v; float4 const g_0010 }
  __asm
  {
    vmovups xmm5, xmmword ptr [rdi]
    vandnps xmm1, xmm2, xmm5
    vcmpltps xmm0, xmm3, xmm1
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) == 0 )
    __asm { vmovdqa xmm5, xmmword ptr cs:?g_1000@@3Ufloat4@@B.v; float4 const g_1000 }
  __asm
  {
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm4, xmm0, xmm3
    vmovups xmmword ptr [rbx], xmm4
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vmovups xmm1, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
    vandnps xmm2, xmm0, xmm4
    vcmpltps xmm0, xmm1, xmm2
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 )
  {
    __asm
    {
      vmulps  xmm1, xmm4, xmm4
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
      vrsqrtps xmm1, xmm0
      vmulps  xmm2, xmm1, xmm4
      vmovups xmmword ptr [rbx], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_0100@@3Ufloat4@@B.v; float4 const g_0100
      vmovups xmmword ptr [rbx], xmm0
    }
  }
  __asm
  {
    vmovups xmm4, xmmword ptr [rbx]
    vmulps  xmm0, xmm5, xmm5
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
    vmulps  xmm3, xmm1, xmm5
    vxorps  xmm0, xmm0, xmm0
    vsubps  xmm2, xmm0, xmm3
    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vmovups xmmword ptr [rbx+10h], xmm2
    vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm4, xmm0, xmm3
    vmovups xmmword ptr [rbx+20h], xmm4
  }
}

/*
==============
Particle_VerifyAssetList
==============
*/
void Particle_VerifyAssetList(const ParticleLinkedAssetListDef *pLinkedAssetList)
{
  if ( !pLinkedAssetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 215, ASSERT_TYPE_ASSERT, "(pLinkedAssetList)", (const char *)&queryFormat, "pLinkedAssetList") )
    __debugbreak();
  if ( !pLinkedAssetList->assetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 216, ASSERT_TYPE_ASSERT, "(pLinkedAssetList->assetList)", (const char *)&queryFormat, "pLinkedAssetList->assetList") )
    __debugbreak();
  if ( pLinkedAssetList->numAssets <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 217, ASSERT_TYPE_ASSERT, "(pLinkedAssetList->numAssets > 0)", (const char *)&queryFormat, "pLinkedAssetList->numAssets > 0") )
    __debugbreak();
}

/*
==============
Particle_GetDynEntTransform
==============
*/
char Particle_GetDynEntTransform(LocalClientNum_t localClientNum, unsigned int dynEntId, unsigned int partIndex, vec3_t *outOrigin, vec4_t *outQuat, const char *pVFXName)
{
  __int64 v6; 
  const DynEntityDef *Def; 
  unsigned __int16 v11; 
  DynEntityPose *PoseFromClientId; 
  DynEnt_ExtraPosePart *v13; 
  unsigned int numParts; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  float v17; 
  __int64 v19; 
  __int64 v20; 

  v6 = localClientNum;
  if ( !pVFXName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 525, ASSERT_TYPE_ASSERT, "(pVFXName)", (const char *)&queryFormat, "pVFXName") )
    __debugbreak();
  Def = DynEnt_GetDef(dynEntId, DYNENT_BASIS_MODEL);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 204, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v11 = Def->clientId[v6];
  if ( v11 == 0xFFFF )
    return 0;
  PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)v6, v11, DYNENT_BASIS_MODEL);
  v13 = (DynEnt_ExtraPosePart *)PoseFromClientId;
  if ( !PoseFromClientId )
    return 0;
  numParts = PoseFromClientId->numParts;
  if ( partIndex >= numParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 534, ASSERT_TYPE_ASSERT, "(partIndex < dynEntPose->numParts)", "%s\n\tpartIndex %d is an invalid for number of parts %d in effect: %s", "partIndex < dynEntPose->numParts", partIndex, numParts, pVFXName) )
    __debugbreak();
  v15 = truncate_cast<unsigned char,unsigned int>(partIndex);
  v16 = *((_BYTE *)&v13[3].nextFreeIndex + 20);
  if ( v15 >= v16 )
  {
    LODWORD(v20) = v16;
    LODWORD(v19) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localPoseIdx ) < (unsigned)( pose->numParts )", "localPoseIdx doesn't index pose->numParts\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  if ( v15 )
  {
    v17 = v13[1].posePart.quat.v[1];
    if ( LODWORD(v17) + (unsigned int)v15 - 1 >= g_dynEntExtraPosePartsAllocCount[v6] )
    {
      LODWORD(v20) = g_dynEntExtraPosePartsAllocCount[v6];
      LODWORD(v19) = LODWORD(v17) + v15 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    v13 = &g_dynEntPoseExtraParts[v6][LODWORD(v13[1].posePart.quat.v[1]) - 1 + (unsigned int)v15];
  }
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 537, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
    __debugbreak();
  outOrigin->v[0] = v13->posePart.origin.v[0];
  outOrigin->v[1] = v13->posePart.origin.v[1];
  outOrigin->v[2] = v13->posePart.origin.v[2];
  *outQuat = v13->posePart.quat;
  return 1;
}

/*
==============
Particle_GenerateMatrixFromLookAt
==============
*/
void Particle_GenerateMatrixFromLookAt(const float4 *lookAtInput, vector3 *outMatrix)
{
  char v4; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 

  __asm
  {
    vmovss  xmm1, dword ptr [rcx+0Ch]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  _RSI = outMatrix;
  _RBX = lookAtInput;
  if ( !v4 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+0Ch]
      vmovss  xmm1, dword ptr [rcx+8]
      vmovss  xmm2, dword ptr [rcx+4]
      vmovss  xmm3, dword ptr [rcx]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+78h+var_30], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+78h+var_38], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+78h+var_40], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+78h+var_48], xmm3
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 301, ASSERT_TYPE_ASSERT, "(Float4ExtractW( lookAtInput ) == 0.0f)", "%s\n\t%g %g %g %g", "Float4ExtractW( lookAtInput ) == 0.0f", v58, v59, v60, v61) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm2, xmm0, xmmword ptr [rbx]
    vmovups xmm1, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
    vmovups xmm4, cs:__xmm@000000003f8000000000000000000000
    vcmpltps xmm0, xmm1, xmm2
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 )
  {
    __asm
    {
      vmovups xmm3, xmmword ptr [rbx]
      vmulps  xmm1, xmm3, xmm3
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
      vsqrtps xmm1, xmm0
      vmovaps [rsp+78h+var_18], xmm6
      vdivps  xmm6, xmm3, xmm1
      vmulps  xmm0, xmm6, xmm4
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vcomiss xmm0, cs:__real@3f7fbe77
    }
    if ( (_EAX & 0xF) != 0 )
    {
      __asm { vmovups xmm5, cs:__xmm@0000000000000000000000003f800000 }
    }
    else
    {
      __asm
      {
        vcomiss xmm0, cs:__real@bf7fbe77
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vshufps xmm2, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm4, xmm3, xmm0
        vmulps  xmm1, xmm4, xmm4
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vdivps  xmm5, xmm4, xmm1
      }
    }
    __asm
    {
      vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
      vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
      vmulps  xmm3, xmm1, xmm0
      vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
      vshufps xmm2, xmm6, xmm6, 0D2h ; 'Ò'
      vmulps  xmm0, xmm2, xmm1
      vsubps  xmm4, xmm0, xmm3
      vmovups xmmword ptr [rsi+20h], xmm4
      vmovups xmmword ptr [rsi], xmm5
      vmovups xmmword ptr [rsi+10h], xmm6
    }
    Particle_AssertFloat4IsNormalized(&_RSI->x);
    Particle_AssertFloat4IsNormalized(&_RSI->y);
    Particle_AssertFloat4IsNormalized(&_RSI->z);
    __asm { vmovaps xmm6, [rsp+78h+var_18] }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
      vmovups xmmword ptr [rsi], xmm0
      vmovups xmm1, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+10h; tmat44_t<vec4_t> const identityMatrix44
      vmovups xmmword ptr [rsi+10h], xmm1
      vmovups xmm0, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
      vmovups xmmword ptr [rsi+20h], xmm0
    }
  }
}

/*
==============
Particle_RotMatrixToQuatVec
==============
*/
void Particle_RotMatrixToQuatVec(const vector3 *rotMatrix, vec4_t *quat)
{
  char v22; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 
  tmat33_t<vec3_t> mat; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovups xmm2, xmmword ptr [rcx+10h]
    vmovups xmm1, xmmword ptr [rcx]
    vmovss  dword ptr [rsp+0A8h+mat+0Ch], xmm2
    vextractps dword ptr [rsp+0A8h+mat+10h], xmm2, 1
    vextractps dword ptr [rsp+0A8h+mat+14h], xmm2, 2
    vmovups xmm2, xmmword ptr [rcx+20h]
  }
  _RBX = quat;
  __asm
  {
    vmovss  dword ptr [rsp+0A8h+mat+18h], xmm2
    vextractps dword ptr [rsp+0A8h+mat+1Ch], xmm2, 1
    vextractps dword ptr [rsp+0A8h+mat+20h], xmm2, 2
    vmovss  dword ptr [rsp+0A8h+mat], xmm1
    vextractps dword ptr [rsp+0A8h+mat+4], xmm1, 1
    vextractps dword ptr [rsp+0A8h+mat+8], xmm1, 2
  }
  AxisToQuat(&mat, quat);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm6, dword ptr [rbx+8]
    vmovss  xmm7, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, cs:__real@3f800000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  if ( !v22 )
  {
    __asm
    {
      vsqrtss xmm0, xmm2, xmm2
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0A8h+var_60], xmm1
      vcvtss2sd xmm0, xmm4, xmm4
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+0A8h+var_68], xmm2
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+0A8h+var_70], xmm3
      vmovsd  [rsp+0A8h+var_78], xmm0
      vcvtss2sd xmm4, xmm5, xmm5
      vmovsd  [rsp+0A8h+var_80], xmm4
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 272, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v31, v32, v33, v34, v35) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_18]
    vmovaps xmm7, [rsp+0A8h+var_28]
  }
}

/*
==============
Particle_bitset<256>::Particle_bitset<256>
==============
*/
void Particle_bitset<256>::Particle_bitset<256>(Particle_bitset<256> *this)
{
  this->m_data[0] = 0i64;
  this->m_data[1] = 0i64;
  this->m_data[2] = 0i64;
  this->m_data[3] = 0i64;
}

/*
==============
Particle_bitset<4096>::Particle_bitset<4096>
==============
*/
void Particle_bitset<4096>::Particle_bitset<4096>(Particle_bitset<4096> *this)
{
  memset_0(this, 0, sizeof(Particle_bitset<4096>));
}

/*
==============
Particle_bitset<2560>::Particle_bitset<2560>
==============
*/
void Particle_bitset<2560>::Particle_bitset<2560>(Particle_bitset<2560> *this)
{
  memset_0(this, 0, sizeof(Particle_bitset<2560>));
}

/*
==============
Particle_bitset<2560>::set
==============
*/
void Particle_bitset<2560>::set(Particle_bitset<2560> *this, const unsigned __int64 pos)
{
  int v4; 
  int v5; 

  if ( (unsigned int)pos >= 0xA00 )
  {
    v5 = 2560;
    v4 = pos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 601, ASSERT_TYPE_ASSERT, "(unsigned)( pos ) < (unsigned)( NumBits )", "pos doesn't index NumBits\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  this->m_data[pos >> 6] |= 1i64 << (pos & 0x3F);
}

/*
==============
Particle_bitset<2560>::test
==============
*/
unsigned __int8 Particle_bitset<2560>::test(Particle_bitset<2560> *this, const unsigned __int64 pos)
{
  unsigned __int64 v4; 
  int v6; 
  int v7; 

  if ( (unsigned int)pos >= 0xA00 )
  {
    v7 = 2560;
    v6 = pos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 607, ASSERT_TYPE_ASSERT, "(unsigned)( pos ) < (unsigned)( NumBits )", "pos doesn't index NumBits\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v4 = this->m_data[pos >> 6];
  return _bittest64((const __int64 *)&v4, pos & 0x3F);
}

/*
==============
Particle_RotMatrixToQuat
==============
*/
void Particle_RotMatrixToQuat(const vector3 *rotMatrix, float4 *quat)
{
  char v21; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  vec4_t v35; 
  tmat33_t<vec3_t> v36; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovups xmm2, xmmword ptr [rcx+10h]
    vmovups xmm1, xmmword ptr [rcx]
    vmovss  [rsp+0A8h+var_3C], xmm2
    vextractps [rsp+0A8h+var_38], xmm2, 1
    vextractps [rsp+0A8h+var_34], xmm2, 2
    vmovups xmm2, xmmword ptr [rcx+20h]
  }
  _RBX = quat;
  __asm
  {
    vmovss  [rsp+0A8h+var_30], xmm2
    vextractps [rsp+0A8h+var_2C], xmm2, 1
    vmovss  [rsp+0A8h+var_48], xmm1
    vextractps [rsp+0A8h+var_44], xmm1, 1
    vextractps [rsp+0A8h+var_40], xmm1, 2
    vextractps dword ptr [r11-28h], xmm2, 2
  }
  AxisToQuat(&v36, &v35);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0A8h+var_58]
    vmovss  xmm5, dword ptr [rsp+0A8h+var_58+4]
    vmovss  xmm6, dword ptr [rsp+0A8h+var_58+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rsp+0A8h+var_58+0Ch]
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm0, xmm3, xmm0
    vsubss  xmm1, xmm0, cs:__real@3f800000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  if ( !v21 )
  {
    __asm
    {
      vsqrtss xmm0, xmm0, xmm0
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0A8h+var_60], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+0A8h+var_68], xmm2
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+0A8h+var_70], xmm3
      vcvtss2sd xmm0, xmm5, xmm5
      vmovsd  [rsp+0A8h+var_78], xmm0
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0A8h+var_80], xmm4
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 272, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v30, v31, v32, v33, v34) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, [rsp+0A8h+var_58]
    vmovups xmmword ptr [rbx], xmm0
    vmovaps xmm6, [rsp+0A8h+var_18]
  }
}

/*
==============
Particle_RotMatrixAutoRenormalize
==============
*/
void Particle_RotMatrixAutoRenormalize(vector3 *rotMatrix)
{
  vector3 *v7; 

  __asm
  {
    vmovups xmm2, xmmword ptr [rcx]
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vrsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, xmm2
    vmovups xmmword ptr [rcx], xmm2
  }
  v7 = rotMatrix;
  Particle_AssertFloat4IsNormalized(&rotMatrix->x);
  _RCX = &v7->y;
  __asm
  {
    vmovups xmm2, xmmword ptr [rcx]
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vrsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, xmm2
    vmovups xmmword ptr [rcx], xmm2
  }
  Particle_AssertFloat4IsNormalized(&v7->y);
  _RCX = &v7->z;
  __asm
  {
    vmovups xmm2, xmmword ptr [rcx]
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vrsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, xmm2
    vmovups xmmword ptr [rcx], xmm2
  }
  Particle_AssertFloat4IsNormalized(&v7->z);
}

