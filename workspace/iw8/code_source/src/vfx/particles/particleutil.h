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
  __m128 v; 
  float v2; 
  float v3; 
  float v4; 

  v = normal->v;
  v2 = _mm_shuffle_ps(v, v, 85).m128_f32[0];
  v3 = _mm_shuffle_ps(v, v, 170).m128_f32[0];
  v4 = _mm_shuffle_ps(v, v, 255).m128_f32[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(v.m128_f32[0] * v.m128_f32[0]) + (float)(v2 * v2)) + (float)(v3 * v3)) + (float)(v4 * v4)) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 136, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( normalVec ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( normalVec )", v.m128_f32[0], v2, v3, v4) )
    __debugbreak();
}

/*
==============
Particle_GenerateCameraFacingMatrix
==============
*/
void Particle_GenerateCameraFacingMatrix(const float4 *cameraPos, const float4 *targetPos, const float4 *currLookAt, vector3 *outMatrix)
{
  __m128 v; 
  __m128 v23; 
  float4 v27; 
  float4 v38; 
  float4 v44; 

  _XMM0 = targetPos->v;
  __asm
  {
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 412, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( targetPos ))", (const char *)&queryFormat, "!Float4IsNaN( targetPos )") )
    __debugbreak();
  _XMM0 = cameraPos->v;
  __asm
  {
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 413, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( cameraPos ))", (const char *)&queryFormat, "!Float4IsNaN( cameraPos )") )
    __debugbreak();
  _XMM0 = currLookAt->v;
  __asm
  {
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 414, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( currLookAt ))", (const char *)&queryFormat, "!Float4IsNaN( currLookAt )") )
    __debugbreak();
  v = _mm128_sub_ps(targetPos->v, cameraPos->v);
  _XMM2 = g_negativeZero.v;
  _XMM3 = g_equalsEpsilon.v;
  __asm
  {
    vandnps xmm0, xmm2, xmm4
    vcmpltps xmm0, xmm3, xmm0
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) == 0 )
    v = g_0010.v;
  v23 = currLookAt->v;
  __asm
  {
    vandnps xmm1, xmm2, xmm5
    vcmpltps xmm0, xmm3, xmm1
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) == 0 )
    v23 = g_1000.v;
  v27.v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v23, v23, 210), _mm_shuffle_ps(v, v, 201)), _mm128_mul_ps(_mm_shuffle_ps(v23, v23, 201), _mm_shuffle_ps(v, v, 210)));
  outMatrix->x = (float4)v27.v;
  _XMM0 = g_negativeZero.v;
  _XMM1 = g_equalsEpsilon.v;
  __asm
  {
    vandnps xmm2, xmm0, xmm4
    vcmpltps xmm0, xmm1, xmm2
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 )
  {
    _XMM1 = _mm128_mul_ps(v27.v, v27.v);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
      vrsqrtps xmm1, xmm0
    }
    outMatrix->x.v = _mm128_mul_ps(_XMM1, v27.v);
  }
  else
  {
    outMatrix->x = (float4)g_0100.v;
  }
  v38.v = (__m128)outMatrix->x;
  _XMM0 = _mm128_mul_ps(v23, v23);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
  }
  v44.v = _mm128_sub_ps((__m128)0i64, _mm128_mul_ps(_XMM1, v23));
  outMatrix->y = (float4)v44.v;
  outMatrix->z.v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v44.v, v44.v, 210), _mm_shuffle_ps(v38.v, v38.v, 201)), _mm128_mul_ps(_mm_shuffle_ps(v44.v, v44.v, 201), _mm_shuffle_ps(v38.v, v38.v, 210)));
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
  float4 v13; 
  float4 v18; 
  __m128 v19; 

  if ( lookAtInput->v.m128_f32[3] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 301, ASSERT_TYPE_ASSERT, "(Float4ExtractW( lookAtInput ) == 0.0f)", "%s\n\t%g %g %g %g", "Float4ExtractW( lookAtInput ) == 0.0f", lookAtInput->v.m128_f32[0], lookAtInput->v.m128_f32[1], lookAtInput->v.m128_f32[2], lookAtInput->v.m128_f32[3]) )
    __debugbreak();
  _XMM0 = g_negativeZero.v;
  __asm { vandnps xmm2, xmm0, xmmword ptr [rbx] }
  _XMM1 = g_equalsEpsilon.v;
  __asm
  {
    vcmpltps xmm0, xmm1, xmm2
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 )
  {
    _XMM1 = _mm128_mul_ps(lookAtInput->v, lookAtInput->v);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
    }
    v13.v = _mm128_div_ps(lookAtInput->v, _mm_sqrt_ps(_XMM0));
    _XMM0 = _mm128_mul_ps(v13.v, (__m128)_xmm);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
    }
    if ( *(float *)&_XMM0 <= 0.99900001 )
    {
      if ( *(float *)&_XMM0 >= -0.99900001 )
      {
        v19 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v13.v, v13.v, 201), _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 210)), _mm128_mul_ps(_mm_shuffle_ps(v13.v, v13.v, 210), _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 201)));
        _XMM1 = _mm128_mul_ps(v19, v19);
        __asm
        {
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
          vhaddps xmm0, xmm2, xmm2
        }
        v18.v = _mm128_div_ps(v19, _mm_sqrt_ps(_XMM0));
      }
      else
      {
        v18.v = (__m128)_xmm;
      }
    }
    else
    {
      v18.v = (__m128)_xmm;
    }
    outMatrix->z.v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v13.v, v13.v, 210), _mm_shuffle_ps(v18.v, v18.v, 201)), _mm128_mul_ps(_mm_shuffle_ps(v13.v, v13.v, 201), _mm_shuffle_ps(v18.v, v18.v, 210)));
    outMatrix->x = (float4)v18.v;
    outMatrix->y = (float4)v13.v;
    Particle_AssertFloat4IsNormalized(&outMatrix->x);
    Particle_AssertFloat4IsNormalized(&outMatrix->y);
    Particle_AssertFloat4IsNormalized(&outMatrix->z);
  }
  else
  {
    outMatrix->x = (float4)identityMatrix44.m[0];
    outMatrix->y = (float4)identityMatrix44.row1;
    outMatrix->z = (float4)identityMatrix44.row2;
  }
}

/*
==============
Particle_RotMatrixToQuatVec
==============
*/
void Particle_RotMatrixToQuatVec(const vector3 *rotMatrix, vec4_t *quat)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  tmat33_t<vec3_t> mat; 

  _XMM2.v = (__m128)rotMatrix->y;
  _XMM1.v = (__m128)rotMatrix->x;
  LODWORD(mat.m[1].v[0]) = _XMM2.v.m128_i32[0];
  __asm
  {
    vextractps dword ptr [rsp+0A8h+mat+10h], xmm2, 1
    vextractps dword ptr [rsp+0A8h+mat+14h], xmm2, 2
  }
  _XMM2.v = (__m128)rotMatrix->z;
  LODWORD(mat.m[2].v[0]) = _XMM2.v.m128_i32[0];
  __asm
  {
    vextractps dword ptr [rsp+0A8h+mat+1Ch], xmm2, 1
    vextractps dword ptr [rsp+0A8h+mat+20h], xmm2, 2
  }
  mat.m[0].v[0] = _XMM1.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rsp+0A8h+mat+4], xmm1, 1
    vextractps dword ptr [rsp+0A8h+mat+8], xmm1, 2
  }
  AxisToQuat(&mat, quat);
  v6 = quat->v[1];
  v7 = quat->v[0];
  v8 = quat->v[2];
  v9 = quat->v[3];
  v10 = (float)((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8)) + (float)(v9 * v9);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 272, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v7, v6, v8, v9, fsqrt(v10)) )
    __debugbreak();
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
  float v7; 
  float4 v8; 
  tmat33_t<vec3_t> v9; 
  void *retaddr; 

  _R11 = &retaddr;
  _XMM2.v = (__m128)rotMatrix->y;
  _XMM1.v = (__m128)rotMatrix->x;
  LODWORD(v9.m[1].v[0]) = _XMM2.v.m128_i32[0];
  __asm
  {
    vextractps [rsp+0A8h+var_38], xmm2, 1
    vextractps [rsp+0A8h+var_34], xmm2, 2
  }
  _XMM2.v = (__m128)rotMatrix->z;
  LODWORD(v9.m[2].v[0]) = _XMM2.v.m128_i32[0];
  __asm { vextractps [rsp+0A8h+var_2C], xmm2, 1 }
  v9.m[0].v[0] = _XMM1.v.m128_f32[0];
  __asm
  {
    vextractps [rsp+0A8h+var_44], xmm1, 1
    vextractps [rsp+0A8h+var_40], xmm1, 2
    vextractps dword ptr [r11-28h], xmm2, 2
  }
  AxisToQuat(&v9, (vec4_t *)&v8);
  v7 = (float)((float)((float)(v8.v.m128_f32[0] * v8.v.m128_f32[0]) + (float)(v8.v.m128_f32[1] * v8.v.m128_f32[1])) + (float)(v8.v.m128_f32[2] * v8.v.m128_f32[2])) + (float)(v8.v.m128_f32[3] * v8.v.m128_f32[3]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 272, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v8.v.m128_f32[0], v8.v.m128_f32[1], v8.v.m128_f32[2], v8.v.m128_f32[3], fsqrt(v7)) )
    __debugbreak();
  *quat = (float4)v8.v;
}

/*
==============
Particle_RotMatrixAutoRenormalize
==============
*/
void Particle_RotMatrixAutoRenormalize(vector3 *rotMatrix)
{
  float4 v6; 
  float4 v11; 

  _XMM0 = _mm128_mul_ps(rotMatrix->x.v, rotMatrix->x.v);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vrsqrtps xmm1, xmm0
  }
  rotMatrix->x.v = _mm128_mul_ps(_XMM1, rotMatrix->x.v);
  Particle_AssertFloat4IsNormalized(&rotMatrix->x);
  v6.v = (__m128)rotMatrix->y;
  _XMM0 = _mm128_mul_ps(v6.v, v6.v);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vrsqrtps xmm1, xmm0
  }
  rotMatrix->y.v = _mm128_mul_ps(_XMM1, v6.v);
  Particle_AssertFloat4IsNormalized(&rotMatrix->y);
  v11.v = (__m128)rotMatrix->z;
  _XMM0 = _mm128_mul_ps(v11.v, v11.v);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vrsqrtps xmm1, xmm0
  }
  rotMatrix->z.v = _mm128_mul_ps(_XMM1, v11.v);
  Particle_AssertFloat4IsNormalized(&rotMatrix->z);
}

