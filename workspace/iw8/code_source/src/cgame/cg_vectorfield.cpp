/*
==============
CG_VectorField_GetInstance
==============
*/

const VectorFieldInstance *__fastcall CG_VectorField_GetInstance(unsigned __int8 vfHandle)
{
  return ?CG_VectorField_GetInstance@@YAPEBUVectorFieldInstance@@E@Z(vfHandle);
}

/*
==============
CG_VectorField_AllocInstanceForFx
==============
*/

unsigned __int8 __fastcall CG_VectorField_AllocInstanceForFx(const VectorField *vf, const orientation_t *orient, unsigned int effectHandle, ParticleSystemHandle systemOwner)
{
  return ?CG_VectorField_AllocInstanceForFx@@YAEPEBUVectorField@@PEBUorientation_t@@IW4ParticleSystemHandle@@@Z(vf, orient, effectHandle, systemOwner);
}

/*
==============
CG_VectorField_GetInstancePool
==============
*/

const VectorFieldInstance *__fastcall CG_VectorField_GetInstancePool()
{
  return ?CG_VectorField_GetInstancePool@@YAPEBUVectorFieldInstance@@XZ();
}

/*
==============
CG_VectorField_UpdateInstanceForFxWithHandle
==============
*/

void __fastcall CG_VectorField_UpdateInstanceForFxWithHandle(unsigned __int8 vfHandle, const orientation_t *orient, float strengthScale, float sizeScale, bool isRotated)
{
  ?CG_VectorField_UpdateInstanceForFxWithHandle@@YAXEPEBUorientation_t@@MM_N@Z(vfHandle, orient, strengthScale, sizeScale, isRotated);
}

/*
==============
CG_VectorField_FreeInstanceForFxWithEffectHandle
==============
*/

void __fastcall CG_VectorField_FreeInstanceForFxWithEffectHandle(unsigned int effectHandle)
{
  ?CG_VectorField_FreeInstanceForFxWithEffectHandle@@YAXI@Z(effectHandle);
}

/*
==============
CG_VectorField_GetIntersectingInstances
==============
*/

unsigned int __fastcall CG_VectorField_GetIntersectingInstances(const vec3_t *pos, float radius, unsigned __int8 *destInstances, unsigned int maxDestInstances)
{
  return ?CG_VectorField_GetIntersectingInstances@@YAIAEBTvec3_t@@MPEAEI@Z(pos, radius, destInstances, maxDestInstances);
}

/*
==============
CG_VectorField_DrawActiveFields
==============
*/

void CG_VectorField_DrawActiveFields(void)
{
  ?CG_VectorField_DrawActiveFields@@YAXXZ();
}

/*
==============
CG_VectorField_SamplePosAgainstInstances
==============
*/

int __fastcall CG_VectorField_SamplePosAgainstInstances(const vec3_t *pos, vec3_t *outSample, unsigned int numInstances, unsigned __int8 *samplers, VectorFieldType filterType)
{
  return ?CG_VectorField_SamplePosAgainstInstances@@YAHAEBTvec3_t@@AEAT1@IPEAEW4VectorFieldType@@@Z(pos, outSample, numInstances, samplers, filterType);
}

/*
==============
CG_VectorField_FreeInstanceForFxWithHandle
==============
*/

void __fastcall CG_VectorField_FreeInstanceForFxWithHandle(unsigned __int8 vfHandle)
{
  ?CG_VectorField_FreeInstanceForFxWithHandle@@YAXE@Z(vfHandle);
}

/*
==============
CG_VectorField_UpdateInstanceForFxWithEffectHandle
==============
*/

void __fastcall CG_VectorField_UpdateInstanceForFxWithEffectHandle(unsigned int effectHandle, const orientation_t *orient, float strengthScale, float sizeScale, int isRotated)
{
  ?CG_VectorField_UpdateInstanceForFxWithEffectHandle@@YAXIPEBUorientation_t@@MMH@Z(effectHandle, orient, strengthScale, sizeScale, isRotated);
}

/*
==============
CG_VectorField_DrawField
==============
*/

void __fastcall CG_VectorField_DrawField(const VectorFieldInstance *vfi, int depthTest)
{
  ?CG_VectorField_DrawField@@YAXPEBUVectorFieldInstance@@H@Z(vfi, depthTest);
}

/*
==============
CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius
==============
*/

int __fastcall CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius(const CapsuleBounds *const cpBounds, vec3_t *outSample, const unsigned int numInstances, const unsigned __int8 *const samplers, VectorFieldType filterType)
{
  return ?CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius@@YAHQEBUCapsuleBounds@@AEATvec3_t@@IQEBEW4VectorFieldType@@@Z(cpBounds, outSample, numInstances, samplers, filterType);
}

/*
==============
CG_DebugVectorFieldBox
==============
*/
void CG_DebugVectorFieldBox(const orientation_t *orient, const Bounds *box, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v18; 
  bool v72; 
  char v73; 
  char v76; 
  char v82; 
  char v85; 
  const int *v86; 
  __int64 v87; 
  char v101[32]; 
  char v102; 
  char v103; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm11, cs:__real@437f0000
    vmovss  xmm12, cs:__real@3f000000
  }
  _ER13 = 0;
  _RBX = &v102;
  v18 = 0;
  _RDI = box;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  do
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+0Ch]
      vxorps  xmm3, xmm4, xmm9
      vmovd   xmm1, r13d
    }
    _RSI = _RBX - 8;
    _EAX = v18 & 1;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm7, xmm1, dword ptr [rdi]
      vmovss  xmm4, dword ptr [rdi+10h]
      vmovd   xmm1, r13d
      vxorps  xmm3, xmm4, xmm9
    }
    _EAX = v18 & 2;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm6, xmm1, dword ptr [rdi+4]
      vmovss  xmm4, dword ptr [rdi+14h]
    }
    _EAX = v18 & 4;
    __asm
    {
      vmovd   xmm1, r13d
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm3, xmm4, xmm9
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm8, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rbx], xmm8
      vmovss  dword ptr [rsi], xmm7
      vmovss  dword ptr [rbx-4], xmm6
    }
    if ( _RBX - 8 == v101 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
      __debugbreak();
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [r12+10h]
      vmulss  xmm0, xmm7, dword ptr [r12+0Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [r12+14h]
      vmulss  xmm0, xmm7, dword ptr [r12+18h]
      vaddss  xmm5, xmm2, xmm1
      vmulss  xmm1, xmm6, dword ptr [r12+1Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [r12+20h]
      vmulss  xmm0, xmm7, dword ptr [r12+24h]
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm1, xmm6, dword ptr [r12+28h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [r12+2Ch]
      vaddss  xmm0, xmm5, dword ptr [r12]
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm11, dword ptr [r14]
      vaddss  xmm1, xmm4, dword ptr [r12+4]
      vmovss  dword ptr [rbx-4], xmm1
      vmulss  xmm1, xmm11, dword ptr [r14+4]
      vmovss  dword ptr [rsi], xmm0
      vaddss  xmm0, xmm3, dword ptr [r12+8]
      vmovss  dword ptr [rbx], xmm0
      vaddss  xmm3, xmm2, xmm12
      vroundss xmm2, xmm10, xmm3, 1
      vaddss  xmm3, xmm1, xmm12
      vroundss xmm1, xmm10, xmm3, 1
      vcvttss2si ecx, xmm2
    }
    if ( _ECX > 255 )
      _ECX = 255;
    v72 = _ECX < 0;
    v73 = _ECX;
    __asm
    {
      vcvttss2si ecx, xmm1
      vmulss  xmm1, xmm11, dword ptr [r14+8]
    }
    if ( v72 )
      v73 = 0;
    _RBX[4] = v73;
    if ( _ECX > 255 )
      _ECX = 255;
    v76 = _ECX;
    __asm { vaddss  xmm3, xmm1, xmm12 }
    if ( _ECX < 0 )
      v76 = 0;
    _RBX[5] = v76;
    __asm
    {
      vroundss xmm1, xmm10, xmm3, 1
      vcvttss2si ecx, xmm1
      vmulss  xmm1, xmm11, dword ptr [r14+0Ch]
      vaddss  xmm3, xmm1, xmm12
    }
    if ( _ECX > 255 )
      _ECX = 255;
    v82 = _ECX;
    __asm { vroundss xmm1, xmm10, xmm3, 1 }
    if ( _ECX < 0 )
      v82 = 0;
    __asm { vcvttss2si ecx, xmm1 }
    _RBX[6] = v82;
    if ( _ECX > 255 )
      _ECX = 255;
    v85 = _ECX;
    if ( _ECX < 0 )
      v85 = 0;
    ++v18;
    _RBX[7] = v85;
    _RBX += 16;
  }
  while ( v18 < 8 );
  v86 = &iEdgePairs_4[0][1];
  v87 = 12i64;
  do
  {
    _RAX = 2i64 * *(v86 - 1);
    __asm { vmovups xmm0, xmmword ptr [rsp+rax*8+50h] }
    _RAX = 2i64 * *v86;
    __asm
    {
      vmovups xmmword ptr cs:debugEdge, xmm0
      vmovups xmm0, xmmword ptr [rsp+rax*8+50h]
      vmovups xmmword ptr cs:stru_1512E3C68, xmm0
    }
    CG_DebugLine(&debugEdge, &stru_1512E3C68, color, depthTest, duration);
    v86 += 2;
    --v87;
  }
  while ( v87 );
  _R11 = &v103;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
CG_VectorField_AllocInstanceForFx
==============
*/
unsigned __int8 CG_VectorField_AllocInstanceForFx(const VectorField *vf, const orientation_t *orient, unsigned int effectHandle, ParticleSystemHandle systemOwner)
{
  __int64 v4; 
  VectorFieldInstance *v9; 
  unsigned __int8 v11; 

  v4 = 0i64;
  while ( 1 )
  {
    v9 = &s_vectorFieldInstancePool[v4];
    if ( (((_BYTE)v9 + 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v9->inUse) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&v9->inUse, 1, 0) )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0xFF )
      return -1;
  }
  v9->vf = vf;
  v9->effectHandle = effectHandle;
  v9->isRotated = 0;
  v9->sizeScale = 1.0;
  v9->orient.origin.v[0] = orient->origin.v[0];
  v9->orient.origin.v[1] = orient->origin.v[1];
  v9->orient.origin.v[2] = orient->origin.v[2];
  v9->orient.axis.m[0].v[0] = orient->axis.m[0].v[0];
  v9->orient.axis.m[0].v[1] = orient->axis.m[0].v[1];
  v9->orient.axis.m[0].v[2] = orient->axis.m[0].v[2];
  v9->orient.axis.m[1].v[0] = orient->axis.m[1].v[0];
  v9->orient.axis.m[1].v[1] = orient->axis.m[1].v[1];
  v9->orient.axis.m[1].v[2] = orient->axis.m[1].v[2];
  v9->orient.axis.m[2].v[0] = orient->axis.m[2].v[0];
  v9->orient.axis.m[2].v[1] = orient->axis.m[2].v[1];
  v9->orient.axis.m[2].v[2] = orient->axis.m[2].v[2];
  v9->systemOwner = systemOwner;
  v11 = truncate_cast<unsigned char,unsigned int>(v4);
  CG_Wind_AddVectorField(v11);
  return truncate_cast<unsigned char,unsigned int>(v4);
}

/*
==============
CG_VectorField_DrawActiveFields
==============
*/
void CG_VectorField_DrawActiveFields(void)
{
  __int64 v1; 
  const dvar_t *v2; 
  __int64 v3; 
  int integer; 
  __int64 v5; 
  int v6; 

  _RBX = &s_vectorFieldInstancePool[0].strengthScale;
  v1 = 255i64;
  do
  {
    if ( *((_DWORD *)_RBX + 2) )
    {
      v2 = DVARINT_cg_vectorFieldsDraw;
      if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      v3 = *((_QWORD *)_RBX - 7);
      integer = v2->current.integer;
      v5 = 0i64;
      if ( *(_DWORD *)(v3 + 52) )
      {
        v6 = integer > 1;
        do
        {
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; strengthScale
            vmovss  xmm1, dword ptr [rbx+4]; sizeScale
          }
          CG_VectorField_DrawSubField((const orientation_t *)_RBX - 1, *(float *)&_XMM1, *(float *)&_XMM2, (const VectorSubField *)(*(_QWORD *)(v3 + 8) + 80 * v5), v6);
          v3 = *((_QWORD *)_RBX - 7);
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *(_DWORD *)(v3 + 52) );
      }
    }
    _RBX += 20;
    --v1;
  }
  while ( v1 );
}

/*
==============
CG_VectorField_DrawField
==============
*/
void CG_VectorField_DrawField(const VectorFieldInstance *vfi, int depthTest)
{
  __int64 v3; 
  const VectorField *vf; 

  _RBX = vfi;
  v3 = 0i64;
  vf = vfi->vf;
  if ( vf->numSubFields )
  {
    do
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+38h]; strengthScale
        vmovss  xmm1, dword ptr [rbx+3Ch]; sizeScale
      }
      CG_VectorField_DrawSubField(&_RBX->orient, *(float *)&_XMM1, *(float *)&_XMM2, &vf->subFields[v3], depthTest);
      vf = _RBX->vf;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < _RBX->vf->numSubFields );
  }
}

/*
==============
CG_VectorField_DrawSubField
==============
*/

void __fastcall CG_VectorField_DrawSubField(const orientation_t *orient, double sizeScale, double strengthScale, const VectorSubField *vf, int depthTest)
{
  const char *v21; 
  VectorFieldType type; 
  unsigned int v24; 
  unsigned int v25; 
  int v26; 
  char v86; 
  char v87; 
  int v89; 
  int v90; 
  int v92; 
  int v93; 
  unsigned int v94; 
  unsigned int v95; 
  int v96; 
  unsigned int v97; 
  bool v139; 
  char v140; 
  char v143; 
  char v149; 
  char v152; 
  char v188; 
  char v192; 
  char v197; 
  char v202; 
  char v207; 
  char v212; 
  char v217; 
  char v221; 
  int v231; 
  char v233; 
  int v241; 
  char v242; 
  int v243; 
  char v244; 
  int v249; 
  char v250; 
  char v251; 
  char v253; 
  char v255; 
  char v256; 
  __int64 v272; 
  __int64 v273; 
  int v274; 
  int v275; 
  int v276; 
  unsigned int v287; 
  unsigned int v292; 
  unsigned int v293; 
  vec4_t color; 
  __int128 v296; 
  Bounds box; 
  char v298; 
  __int128 v299; 
  __int128 v300; 
  char v303; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  v287 = vf->numEntries[0];
  v293 = vf->numEntries[1];
  __asm
  {
    vmovaps xmm6, xmm2
    vmovaps xmm9, xmm1
  }
  if ( vf->type == VECTOR_FIELD_TYPE_VELOCITY )
  {
    _R15 = DVARFLT_cg_vectorFieldsDrawVelocityScale;
    if ( DVARFLT_cg_vectorFieldsDrawVelocityScale )
      goto LABEL_8;
    v21 = "cg_vectorFieldsDrawVelocityScale";
  }
  else
  {
    _R15 = DVARFLT_cg_vectorFieldsDrawForceScale;
    if ( DVARFLT_cg_vectorFieldsDrawForceScale )
      goto LABEL_8;
    v21 = "cg_vectorFieldsDrawForceScale";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v21) )
    __debugbreak();
LABEL_8:
  Dvar_CheckFrontendServerThread(_R15);
  __asm { vmovss  xmm0, dword ptr [r15+28h] }
  type = vf->type;
  v24 = vf->numEntries[0];
  v25 = vf->numEntries[1];
  v26 = vf->numEntries[2];
  __asm
  {
    vmovaps xmmword ptr [rsp+1C0h+var_88+8], xmm10
    vmovaps xmmword ptr [rsp+1C0h+var_B8+8], xmm13
  }
  v275 = v24;
  v274 = v25;
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vmovss  [rsp+1C0h+var_148], xmm1
  }
  if ( type == VECTOR_FIELD_TYPE_FORCE )
  {
    __asm
    {
      vmovss  xmm10, cs:__real@3f800000
      vmovups xmm0, cs:__xmm@3f8000003f800000000000003f800000
      vmovss  [rsp+1C0h+var_170], xmm10
      vmovss  [rsp+1C0h+var_16C], xmm10
      vmovss  [rsp+1C0h+var_168], xmm10
      vmovups xmmword ptr [rbp+0C0h+color], xmm0
    }
  }
  else if ( type == VECTOR_FIELD_TYPE_VELOCITY )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ecx
      vdivss  xmm10, xmm2, xmm1
      vmovups xmmword ptr [rbp+0C0h+color], xmm0
      vmovss  [rsp+1C0h+var_170], xmm10
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm10, xmm2, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r13d
      vmovss  [rsp+1C0h+var_16C], xmm10
      vdivss  xmm10, xmm2, xmm1
      vmovss  [rsp+1C0h+var_168], xmm10
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 123, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported vf type") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, [rsp+1C0h+var_174]
      vmovss  [rsp+1C0h+var_170], xmm0
      vmovss  xmm0, [rsp+1C0h+var_174]
      vmovss  [rsp+1C0h+var_168], xmm0
      vmovss  xmm0, [rsp+1C0h+var_174]
      vmovss  [rsp+1C0h+var_16C], xmm0
    }
  }
  __asm
  {
    vmulss  xmm2, xmm9, dword ptr [rsi+14h]
    vmulss  xmm6, xmm9, dword ptr [rsi+18h]
    vmulss  xmm7, xmm9, dword ptr [rsi+1Ch]
    vmulss  xmm11, xmm9, dword ptr [rsi+8]
    vmovss  xmm8, cs:__real@3f000000
    vmulss  xmm15, xmm9, dword ptr [rsi+0Ch]
    vmulss  xmm14, xmm9, dword ptr [rsi+10h]
    vmulss  xmm12, xmm9, dword ptr [rsi+20h]
    vaddss  xmm0, xmm11, xmm2
    vmulss  xmm3, xmm0, xmm8
    vaddss  xmm0, xmm15, xmm6
    vmulss  xmm4, xmm0, xmm8
    vmovss  dword ptr [rbp+0C0h+box.halfSize], xmm2
    vaddss  xmm1, xmm7, xmm14
    vmulss  xmm5, xmm1, xmm8
    vsubss  xmm0, xmm3, xmm11
    vsubss  xmm2, xmm2, xmm3
    vmaxss  xmm1, xmm2, xmm0
    vsubss  xmm0, xmm4, xmm15
    vmovss  dword ptr [rbp+0C0h+box.halfSize], xmm1
    vsubss  xmm2, xmm7, xmm5
    vmovss  dword ptr [rbp+0C0h+box.midPoint], xmm3
    vsubss  xmm3, xmm6, xmm4
    vmaxss  xmm1, xmm3, xmm0
    vsubss  xmm0, xmm5, xmm14
    vmovss  dword ptr [rbp+0C0h+box.halfSize+4], xmm6
    vmulss  xmm6, xmm9, dword ptr [rsi+28h]
    vmovss  dword ptr [rbp+0C0h+box.halfSize+4], xmm1
    vmovss  dword ptr [rbp+0C0h+box.halfSize+8], xmm7
    vmulss  xmm7, xmm9, dword ptr [rsi+24h]
    vmaxss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rbp+0C0h+box.halfSize+8], xmm1
    vmovss  [rsp+1C0h+var_158], xmm11
    vmovss  dword ptr [rbp+0C0h+box.midPoint+4], xmm4
    vmovss  dword ptr [rbp+0C0h+box.midPoint+8], xmm5
    vmovss  [rsp+1C0h+var_154], xmm12
    vmovss  [rsp+1C0h+var_15C], xmm7
    vmovss  [rsp+1C0h+var_160], xmm6
  }
  _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  _R15 = DVARFLT_cg_vectorFieldsDrawBoxDist;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+38h]
    vsubss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rax+3Ch]
    vsubss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rax+40h]
    vsubss  xmm4, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm9, xmm2, xmm2
  }
  if ( !DVARFLT_cg_vectorFieldsDrawBoxDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDrawBoxDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R15);
  __asm { vcomiss xmm9, dword ptr [r15+28h] }
  if ( v86 | v87 )
    CG_DebugVectorFieldBox(orient, &box, &color, depthTest, 2);
  _R15 = DVARFLT_cg_vectorFieldsDrawEntryDist;
  if ( !DVARFLT_cg_vectorFieldsDrawEntryDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDrawEntryDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R15);
  __asm { vcomiss xmm9, dword ptr [r15+28h] }
  if ( v86 | v87 )
  {
    v89 = v275;
    v90 = 0;
    v276 = 0;
    if ( v275 > 0 )
    {
      __asm { vmovss  xmm10, cs:__real@437f0000 }
      v92 = v274;
      do
      {
        v93 = 0;
        if ( v92 > 0 )
        {
          v94 = v287;
          v95 = v90;
          v292 = v90;
          do
          {
            v96 = 0;
            if ( v26 > 0 )
            {
              v97 = v95;
              __asm { vxorps  xmm9, xmm9, xmm9 }
              do
              {
                if ( v97 >= vf->numEntries[0] * vf->numEntries[2] * vf->numEntries[1] )
                {
                  LODWORD(v273) = vf->numEntries[0] * vf->numEntries[2] * vf->numEntries[1];
                  LODWORD(v272) = v97;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 27, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2] )", "index doesn't index vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2]\n\t%i not in [0, %i)", v272, v273) )
                    __debugbreak();
                  v89 = v275;
                  v92 = v274;
                }
                _RDI = (char *)&vf->linearData[v97];
                if ( v26 == 1 )
                {
                  __asm { vmovaps xmm0, xmm8 }
                }
                else
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, r12d
                  }
                }
                __asm
                {
                  vmulss  xmm0, xmm6, xmm0
                  vaddss  xmm5, xmm0, xmm14
                }
                if ( v92 == 1 )
                {
                  __asm { vmovaps xmm0, xmm8 }
                }
                else
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, r15d
                  }
                }
                __asm
                {
                  vmulss  xmm0, xmm7, xmm0
                  vaddss  xmm4, xmm0, xmm15
                }
                if ( v89 == 1 )
                {
                  __asm { vmovaps xmm0, xmm8 }
                }
                else
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, edx
                  }
                }
                __asm
                {
                  vmulss  xmm1, xmm4, dword ptr [rbx+10h]
                  vmulss  xmm0, xmm12, xmm0
                  vaddss  xmm3, xmm0, xmm11
                  vmulss  xmm0, xmm3, dword ptr [rbx+0Ch]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm5, dword ptr [rbx+14h]
                  vaddss  xmm0, xmm2, xmm1
                  vaddss  xmm11, xmm0, dword ptr [rbx]
                  vmulss  xmm1, xmm3, dword ptr [rbx+18h]
                  vmulss  xmm0, xmm4, dword ptr [rbx+1Ch]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm5, dword ptr [rbx+20h]
                  vaddss  xmm0, xmm2, xmm1
                  vmulss  xmm1, xmm3, dword ptr [rbx+24h]
                  vaddss  xmm12, xmm0, dword ptr [rbx+4]
                  vmulss  xmm0, xmm4, dword ptr [rbx+28h]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm5, dword ptr [rbx+2Ch]
                  vaddss  xmm0, xmm2, xmm1
                  vaddss  xmm13, xmm0, dword ptr [rbx+8]
                  vmulss  xmm0, xmm10, dword ptr [rbp+0C0h+color]
                  vmulss  xmm1, xmm10, dword ptr [rbp+0C0h+color+4]
                  vaddss  xmm3, xmm0, xmm8
                  vroundss xmm0, xmm9, xmm3, 1
                  vaddss  xmm3, xmm1, xmm8
                  vroundss xmm1, xmm9, xmm3, 1
                  vcvttss2si ecx, xmm0
                  vmovss  dword ptr [rbp+0C0h+var_130], xmm11
                }
                if ( _ECX > 255 )
                  _ECX = 255;
                v139 = _ECX < 0;
                v140 = _ECX;
                __asm
                {
                  vcvttss2si ecx, xmm1
                  vmulss  xmm1, xmm10, dword ptr [rbp+0C0h+color+8]
                }
                if ( v139 )
                  v140 = 0;
                BYTE12(v296) = v140;
                if ( _ECX > 255 )
                  _ECX = 255;
                v143 = _ECX;
                __asm { vaddss  xmm3, xmm1, xmm8 }
                if ( _ECX < 0 )
                  v143 = 0;
                BYTE13(v296) = v143;
                __asm
                {
                  vroundss xmm1, xmm9, xmm3, 1
                  vcvttss2si ecx, xmm1
                  vmulss  xmm1, xmm10, dword ptr [rbp+0C0h+color+0Ch]
                  vaddss  xmm3, xmm1, xmm8
                }
                if ( _ECX > 255 )
                  _ECX = 255;
                v149 = _ECX;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( _ECX < 0 )
                  v149 = 0;
                BYTE14(v296) = v149;
                __asm
                {
                  vcvttss2si ecx, xmm1
                  vmovss  dword ptr [rbp+0C0h+var_130+4], xmm12
                }
                if ( _ECX > 255 )
                  _ECX = 255;
                v152 = _ECX;
                __asm { vmovss  dword ptr [rbp+0C0h+var_130+8], xmm13 }
                if ( _ECX < 0 )
                  v152 = 0;
                HIBYTE(v296) = v152;
                if ( _RDI == &v298 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
                  __debugbreak();
                __asm
                {
                  vmovss  xmm6, dword ptr [rdi+4]
                  vmovss  xmm3, dword ptr [rdi]
                  vmulss  xmm0, xmm3, dword ptr [rbx+0Ch]
                  vmulss  xmm1, xmm6, dword ptr [rbx+10h]
                  vmovss  xmm7, dword ptr [rdi+8]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm7, dword ptr [rbx+14h]
                  vaddss  xmm0, xmm2, xmm1
                  vmulss  xmm1, xmm3, dword ptr [rbx+18h]
                  vmulss  xmm5, xmm0, [rsp+1C0h+var_170]
                  vmulss  xmm0, xmm6, dword ptr [rbx+1Ch]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm7, dword ptr [rbx+20h]
                  vaddss  xmm0, xmm2, xmm1
                  vmulss  xmm1, xmm3, dword ptr [rbx+24h]
                  vmulss  xmm4, xmm0, [rsp+1C0h+var_16C]
                  vmulss  xmm0, xmm6, dword ptr [rbx+28h]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm7, dword ptr [rbx+2Ch]
                  vaddss  xmm0, xmm2, xmm1
                  vmovss  xmm2, [rsp+1C0h+var_148]
                  vmulss  xmm3, xmm0, [rsp+1C0h+var_168]
                  vmulss  xmm1, xmm5, xmm2
                  vaddss  xmm5, xmm1, xmm11
                  vmulss  xmm1, xmm3, xmm2
                  vaddss  xmm6, xmm1, xmm13
                  vmulss  xmm1, xmm10, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
                  vmulss  xmm0, xmm4, xmm2
                  vmulss  xmm2, xmm10, dword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                  vaddss  xmm3, xmm2, xmm8
                  vroundss xmm2, xmm9, xmm3, 1
                  vaddss  xmm3, xmm1, xmm8
                  vroundss xmm1, xmm9, xmm3, 1
                  vcvttss2si ecx, xmm2
                  vaddss  xmm4, xmm0, xmm12
                }
                if ( _ECX > 255 )
                  _ECX = 255;
                v139 = _ECX < 0;
                v188 = _ECX;
                __asm
                {
                  vcvttss2si ecx, xmm1
                  vmulss  xmm1, xmm10, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
                }
                if ( v139 )
                  v188 = 0;
                __asm { vaddss  xmm3, xmm1, xmm8 }
                if ( _ECX > 255 )
                  _ECX = 255;
                LOBYTE(box.halfSize.v[0]) = v188;
                v192 = _ECX;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( _ECX < 0 )
                  v192 = 0;
                __asm
                {
                  vcvttss2si ecx, xmm1
                  vmulss  xmm1, xmm10, dword ptr cs:?colorRed@@3Tvec4_t@@B+0Ch; vec4_t const colorRed
                }
                BYTE1(box.halfSize.v[0]) = v192;
                __asm { vaddss  xmm3, xmm1, xmm8 }
                if ( _ECX > 255 )
                  _ECX = 255;
                v197 = _ECX;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( _ECX < 0 )
                  v197 = 0;
                __asm
                {
                  vcvttss2si ecx, xmm1
                  vmulss  xmm1, xmm10, dword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
                }
                BYTE2(box.halfSize.x) = v197;
                __asm { vaddss  xmm3, xmm1, xmm8 }
                if ( _ECX > 255 )
                  _ECX = 255;
                v202 = _ECX;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( _ECX < 0 )
                  v202 = 0;
                __asm
                {
                  vcvttss2si ecx, xmm1
                  vmulss  xmm1, xmm10, dword ptr cs:?colorGreen@@3Tvec4_t@@B+4; vec4_t const colorGreen
                }
                HIBYTE(box.halfSize.x) = v202;
                __asm { vaddss  xmm3, xmm1, xmm8 }
                if ( _ECX > 255 )
                  _ECX = 255;
                v207 = _ECX;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( _ECX < 0 )
                  v207 = 0;
                BYTE12(v296) = v207;
                __asm
                {
                  vcvttss2si ecx, xmm1
                  vmulss  xmm1, xmm10, dword ptr cs:?colorGreen@@3Tvec4_t@@B+8; vec4_t const colorGreen
                  vaddss  xmm3, xmm1, xmm8
                }
                if ( _ECX > 255 )
                  _ECX = 255;
                v139 = _ECX < 0;
                v212 = _ECX;
                __asm
                {
                  vroundss xmm1, xmm9, xmm3, 1
                  vcvttss2si ecx, xmm1
                  vmulss  xmm1, xmm10, dword ptr cs:?colorGreen@@3Tvec4_t@@B+0Ch; vec4_t const colorGreen
                }
                if ( v139 )
                  v212 = 0;
                BYTE13(v296) = v212;
                __asm { vaddss  xmm3, xmm1, xmm8 }
                if ( _ECX > 255 )
                  _ECX = 255;
                v139 = _ECX < 0;
                v217 = _ECX;
                __asm
                {
                  vroundss xmm1, xmm9, xmm3, 1
                  vcvttss2si ecx, xmm1
                  vmovups xmm1, xmmword ptr [rbp+0C0h+box.midPoint]
                }
                if ( v139 )
                  v217 = 0;
                BYTE14(v296) = v217;
                if ( _ECX > 255 )
                  _ECX = 255;
                v221 = _ECX;
                __asm { vmovss  xmm1, xmm1, xmm5 }
                if ( _ECX < 0 )
                  v221 = 0;
                __asm
                {
                  vinsertps xmm1, xmm1, xmm4, 10h
                  vinsertps xmm1, xmm1, xmm6, 20h ; ' '
                }
                HIBYTE(v296) = v221;
                __asm
                {
                  vmovups xmm0, [rbp+0C0h+var_130]
                  vmovups [rbp+0C0h+var_F8], xmm0
                  vmovups xmmword ptr [rbp+0C0h+box.midPoint], xmm1
                  vmovups [rbp+0C0h+var_E8], xmm1
                }
                CG_DebugLine((const vec3_t *)&v299, (const vec3_t *)&v300, &color, depthTest, 2);
                __asm
                {
                  vmulss  xmm1, xmm10, dword ptr [rbp+0C0h+color]
                  vaddss  xmm3, xmm1, xmm8
                  vroundss xmm1, xmm9, xmm3, 1
                  vcvttss2si r10d, xmm1
                  vmulss  xmm1, xmm10, dword ptr [rbp+0C0h+color+4]
                }
                v231 = _ER10;
                __asm { vaddss  xmm3, xmm1, xmm8 }
                if ( _ER10 > 255 )
                  v231 = 255;
                v233 = v231;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( v231 < 0 )
                  v233 = 0;
                __asm
                {
                  vcvttss2si r9d, xmm1
                  vmulss  xmm1, xmm10, dword ptr [rbp+0C0h+color+8]
                }
                BYTE12(v299) = v233;
                __asm
                {
                  vaddss  xmm3, xmm1, xmm8
                  vroundss xmm1, xmm9, xmm3, 1
                  vcvttss2si r8d, xmm1
                  vmulss  xmm1, xmm10, dword ptr [rbp+0C0h+color+0Ch]
                }
                v241 = _ER9;
                if ( _ER9 > 255 )
                  v241 = 255;
                v139 = v241 < 0;
                v242 = v241;
                v243 = _ER8;
                if ( v139 )
                  v242 = 0;
                BYTE13(v299) = v242;
                if ( _ER8 > 255 )
                  v243 = 255;
                v244 = v243;
                __asm { vaddss  xmm3, xmm1, xmm8 }
                if ( v243 < 0 )
                  v244 = 0;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                BYTE14(v299) = v244;
                __asm
                {
                  vcvttss2si edx, xmm1
                  vmovss  xmm6, cs:__real@40a00000
                }
                v249 = _EDX;
                if ( _EDX > 255 )
                  v249 = 255;
                v250 = v249;
                if ( v249 < 0 )
                  v250 = 0;
                HIBYTE(v299) = v250;
                if ( _ER10 > 255 )
                  _ER10 = 255;
                v251 = _ER10;
                __asm { vsubss  xmm0, xmm11, xmm6 }
                if ( _ER10 < 0 )
                  v251 = 0;
                BYTE12(v300) = v251;
                if ( _ER9 > 255 )
                  _ER9 = 255;
                v253 = _ER9;
                __asm { vmovss  dword ptr [rbp+0C0h+var_F8], xmm0 }
                if ( _ER9 < 0 )
                  v253 = 0;
                BYTE13(v300) = v253;
                __asm { vaddss  xmm0, xmm11, xmm6 }
                if ( _ER8 > 255 )
                  _ER8 = 255;
                v255 = _ER8;
                if ( _ER8 < 0 )
                  v255 = 0;
                BYTE14(v300) = v255;
                if ( _EDX > 255 )
                  _EDX = 255;
                v256 = _EDX;
                if ( _EDX < 0 )
                  v256 = 0;
                HIBYTE(v300) = v256;
                __asm
                {
                  vmovss  dword ptr [rbp+0C0h+var_F8+4], xmm12
                  vmovss  dword ptr [rbp+0C0h+var_F8+8], xmm13
                  vmovss  dword ptr [rbp+0C0h+var_E8], xmm0
                  vmovss  dword ptr [rbp+0C0h+var_E8+4], xmm12
                  vmovss  dword ptr [rbp+0C0h+var_E8+8], xmm13
                }
                CG_DebugLine((const vec3_t *)&v299, (const vec3_t *)&v300, &color, depthTest, 2);
                __asm
                {
                  vsubss  xmm0, xmm12, xmm6
                  vmovss  dword ptr [rbp+0C0h+var_F8+4], xmm0
                  vaddss  xmm0, xmm12, xmm6
                  vmovss  dword ptr [rbp+0C0h+var_E8+4], xmm0
                  vmovss  dword ptr [rbp+0C0h+var_F8], xmm11
                  vmovss  dword ptr [rbp+0C0h+var_F8+8], xmm13
                  vmovss  dword ptr [rbp+0C0h+var_E8], xmm11
                  vmovss  dword ptr [rbp+0C0h+var_E8+8], xmm13
                }
                CG_DebugLine((const vec3_t *)&v299, (const vec3_t *)&v300, &color, depthTest, 2);
                __asm
                {
                  vsubss  xmm0, xmm13, xmm6
                  vmovss  dword ptr [rbp+0C0h+var_F8+8], xmm0
                  vaddss  xmm0, xmm13, xmm6
                  vmovss  dword ptr [rbp+0C0h+var_E8+8], xmm0
                  vmovss  dword ptr [rbp+0C0h+var_F8], xmm11
                  vmovss  dword ptr [rbp+0C0h+var_F8+4], xmm12
                  vmovss  dword ptr [rbp+0C0h+var_E8], xmm11
                  vmovss  dword ptr [rbp+0C0h+var_E8+4], xmm12
                }
                CG_DebugLine((const vec3_t *)&v299, (const vec3_t *)&v300, &color, depthTest, 2);
                v97 += v287 * v293;
                ++v96;
                __asm
                {
                  vmovss  xmm6, [rsp+1C0h+var_160]
                  vmovss  xmm7, [rsp+1C0h+var_15C]
                  vmovss  xmm11, [rsp+1C0h+var_158]
                  vmovss  xmm12, [rsp+1C0h+var_154]
                }
                v92 = v274;
                v90 = v276;
                v89 = v275;
              }
              while ( v96 < v26 );
              v95 = v292;
              v94 = v287;
            }
            v95 += v94;
            ++v93;
            v292 = v95;
          }
          while ( v93 < v92 );
        }
        v276 = ++v90;
      }
      while ( v90 < v89 );
    }
  }
  __asm
  {
    vmovaps xmm13, xmmword ptr [rsp+1C0h+var_B8+8]
    vmovaps xmm10, xmmword ptr [rsp+1C0h+var_88+8]
  }
  _R11 = &v303;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CG_VectorField_FreeInstanceForFxWithEffectHandle
==============
*/
void CG_VectorField_FreeInstanceForFxWithEffectHandle(unsigned int effectHandle)
{
  unsigned int v1; 
  volatile int *p_inUse; 
  __int64 v3; 

  v1 = 0;
  p_inUse = &s_vectorFieldInstancePool[0].inUse;
  v3 = 0i64;
  do
  {
    if ( *((_DWORD *)p_inUse + 2) == effectHandle )
    {
      CG_Wind_RemoveVectorField(v1);
      if ( ((unsigned __int8)p_inUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_inUse) )
        __debugbreak();
      _InterlockedExchange(p_inUse, 0);
    }
    ++v1;
    ++v3;
    p_inUse += 20;
  }
  while ( v1 < 0xFF );
}

/*
==============
CG_VectorField_FreeInstanceForFxWithHandle
==============
*/
void CG_VectorField_FreeInstanceForFxWithHandle(unsigned __int8 vfHandle)
{
  volatile int *p_inUse; 

  if ( vfHandle == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( vfHandle ) < (unsigned)( ( sizeof( *array_counter( s_vectorFieldInstancePool ) ) + 0 ) )", "vfHandle doesn't index ARRAY_COUNT( s_vectorFieldInstancePool )\n\t%i not in [0, %i)", 255, 255) )
    __debugbreak();
  p_inUse = &s_vectorFieldInstancePool[vfHandle].inUse;
  if ( !*p_inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 285, ASSERT_TYPE_ASSERT, "(s_vectorFieldInstancePool[vfHandle].inUse)", (const char *)&queryFormat, "s_vectorFieldInstancePool[vfHandle].inUse") )
    __debugbreak();
  CG_Wind_RemoveVectorField(vfHandle);
  if ( ((unsigned __int8)p_inUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_vectorFieldInstancePool[vfHandle].inUse) )
    __debugbreak();
  _InterlockedExchange(p_inUse, 0);
}

/*
==============
CG_VectorField_GetEntry
==============
*/
vec4_t *CG_VectorField_GetEntry(const VectorSubField *vf, const unsigned int xCoord, const unsigned int yCoord, const unsigned int zCoord, const unsigned int width, const unsigned int height)
{
  unsigned int v7; 
  unsigned int v9; 
  unsigned int v10; 

  v7 = xCoord + width * (yCoord + height * zCoord);
  if ( v7 >= vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2] )
  {
    v10 = vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2];
    v9 = xCoord + width * (yCoord + height * zCoord);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 27, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2] )", "index doesn't index vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2]\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return &vf->linearData[v7];
}

/*
==============
CG_VectorField_GetInstance
==============
*/
VectorFieldInstance *CG_VectorField_GetInstance(unsigned __int8 vfHandle)
{
  if ( vfHandle == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 238, ASSERT_TYPE_ASSERT, "(unsigned)( vfHandle ) < (unsigned)( ( sizeof( *array_counter( s_vectorFieldInstancePool ) ) + 0 ) )", "vfHandle doesn't index ARRAY_COUNT( s_vectorFieldInstancePool )\n\t%i not in [0, %i)", 255, 255) )
    __debugbreak();
  return &s_vectorFieldInstancePool[vfHandle];
}

/*
==============
CG_VectorField_GetInstancePool
==============
*/
VectorFieldInstance *CG_VectorField_GetInstancePool()
{
  return s_vectorFieldInstancePool;
}

/*
==============
CG_VectorField_GetIntersectingInstances
==============
*/

__int64 __fastcall CG_VectorField_GetIntersectingInstances(const vec3_t *pos, double radius, unsigned __int8 *destInstances, unsigned int maxDestInstances)
{
  unsigned int i; 
  __int64 result; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmm7, xmm1
  }
  _R14 = pos;
  for ( i = 0; i < 0xFF; ++i )
  {
    _RCX = &s_vectorFieldInstancePool[i];
    if ( _RCX->inUse )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vsubss  xmm6, xmm0, dword ptr [rcx+8]
        vmovss  xmm1, dword ptr [r14+4]
        vsubss  xmm4, xmm1, dword ptr [rcx+0Ch]
        vmulss  xmm1, xmm4, dword ptr [rcx+20h]
        vmulss  xmm3, xmm4, dword ptr [rcx+24h]
        vmovss  xmm0, dword ptr [r14+8]
        vsubss  xmm5, xmm0, dword ptr [rcx+10h]
        vmulss  xmm0, xmm6, dword ptr [rcx+14h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rcx+2Ch]
        vmulss  xmm0, xmm6, dword ptr [rcx+18h]
        vaddss  xmm9, xmm2, xmm1
        vmulss  xmm1, xmm5, dword ptr [rcx+30h]
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm3, xmm4, dword ptr [rcx+28h]
        vmulss  xmm0, xmm6, dword ptr [rcx+1Ch]
        vaddss  xmm8, xmm2, xmm1
        vmulss  xmm1, xmm5, dword ptr [rcx+34h]
        vaddss  xmm2, xmm3, xmm0
        vmovss  xmm0, dword ptr [rcx+3Ch]
        vmulss  xmm4, xmm0, dword ptr [rax+24h]
        vmulss  xmm5, xmm0, dword ptr [rax+10h]
        vmulss  xmm6, xmm0, dword ptr [rax+14h]
        vmulss  xmm10, xmm0, dword ptr [rax+18h]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm0, dword ptr [rax+20h]
        vmulss  xmm0, xmm0, dword ptr [rax+1Ch]
        vaddss  xmm1, xmm0, xmm7
        vcomiss xmm9, xmm1
      }
    }
  }
  __asm { vmovaps xmm10, [rsp+0C8h+var_78] }
  _R11 = &v54;
  result = 0i64;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, [rsp+0C8h+var_68]
    vmovaps xmm8, [rsp+0C8h+var_58]
    vmovaps xmm6, [rsp+0C8h+var_38]
  }
  return result;
}

/*
==============
CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius
==============
*/
__int64 CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius(const CapsuleBounds *const cpBounds, vec3_t *outSample, const unsigned int numInstances, const unsigned __int8 *const samplers, VectorFieldType filterType)
{
  __int64 v11; 
  const unsigned __int8 *v12; 
  unsigned int v15; 
  __int64 v16; 
  bool v61; 
  int v66; 
  vec3_t pos; 
  __int128 v75; 
  __int128 v76; 
  __int128 v77; 

  v11 = numInstances;
  v12 = samplers;
  _R12 = cpBounds;
  if ( !samplers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 793, ASSERT_TYPE_ASSERT, "(samplers)", (const char *)&queryFormat, "samplers") )
    __debugbreak();
  v15 = 0;
  *(_QWORD *)outSample->v = 0i64;
  outSample->v[2] = 0.0;
  if ( (_DWORD)v11 )
  {
    v16 = v11;
    __asm
    {
      vmovaps [rsp+118h+var_98], xmm11
      vmovss  xmm11, cs:__real@3f000000
      vmovaps [rsp+118h+var_48], xmm6
      vmovaps [rsp+118h+var_58], xmm7
      vmovaps [rsp+118h+var_68], xmm8
      vmovaps [rsp+118h+var_78], xmm9
      vmovaps [rsp+118h+var_88], xmm10
    }
    do
    {
      _RBX = &s_vectorFieldInstancePool[*v12];
      if ( _RBX->inUse )
      {
        _RAX = _RBX->vf;
        __asm
        {
          vmovss  xmm0, dword ptr [r12]
          vbroadcastss xmm6, dword ptr [r12+1Ch]
          vbroadcastss xmm7, dword ptr [r12+18h]
          vmovss  xmm1, dword ptr [rax+1Ch]
          vsubss  xmm2, xmm1, dword ptr [rax+10h]
        }
        HIDWORD(v75) = 0;
        __asm
        {
          vmovups xmm10, xmmword ptr [rsp+40h]
          vmovss  xmm10, xmm10, xmm0
          vmovss  xmm0, dword ptr [r12+0Ch]
          vinsertps xmm10, xmm10, dword ptr [r12+4], 10h
          vinsertps xmm10, xmm10, dword ptr [r12+8], 20h ; ' '
        }
        HIDWORD(v76) = 0;
        __asm
        {
          vmovups xmm9, xmmword ptr [rsp+50h]
          vmovss  xmm9, xmm9, xmm0
          vmovss  xmm0, dword ptr [rbx+8]
          vinsertps xmm9, xmm9, dword ptr [r12+10h], 10h
          vinsertps xmm9, xmm9, dword ptr [r12+14h], 20h ; ' '
        }
        HIDWORD(v77) = 0;
        __asm
        {
          vmovups xmm5, xmmword ptr [rsp+60h]
          vmovss  xmm5, xmm5, xmm0
          vmovss  xmm0, dword ptr [rax+20h]
          vsubss  xmm3, xmm0, dword ptr [rax+14h]
          vmovss  xmm0, dword ptr [rax+24h]
          vsubss  xmm1, xmm0, dword ptr [rax+18h]
          vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 10h
          vinsertps xmm5, xmm5, dword ptr [rbx+10h], 20h ; ' '
          vmaxss  xmm4, xmm3, xmm2
          vmaxss  xmm2, xmm4, xmm1
          vmulss  xmm3, xmm2, dword ptr [rbx+3Ch]
          vmulss  xmm0, xmm3, xmm11
          vshufps xmm0, xmm0, xmm0, 0
          vaddps  xmm4, xmm0, xmm6
          vsubps  xmm0, xmm5, xmm10
          vmulps  xmm1, xmm0, xmm9
          vinsertps xmm2, xmm1, xmm1, 8
          vhaddps xmm0, xmm2, xmm2
          vhaddps xmm6, xmm0, xmm0
          vxorps  xmm8, xmm8, xmm8
          vsubps  xmm0, xmm8, xmm4
          vcmpltps xmm1, xmm6, xmm0
          vmovmskps eax, xmm1
          vmovups xmmword ptr [rsp+40h], xmm10
          vmovups xmmword ptr [rsp+50h], xmm9
          vmovups xmmword ptr [rsp+60h], xmm5
        }
        if ( ((unsigned __int8)_RAX & 0xF) != 15 )
        {
          __asm
          {
            vaddps  xmm0, xmm7, xmm4
            vcmpltps xmm1, xmm0, xmm6
            vmovmskps eax, xmm1
          }
          if ( (_EAX & 0xF) != 15 )
          {
            __asm
            {
              vcmpltps xmm0, xmm7, xmm8
              vmovmskps eax, xmm0
            }
            if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
              __debugbreak();
            v61 = _RBX->isRotated == 0;
            __asm
            {
              vmaxps  xmm0, xmm6, xmm8
              vminps  xmm1, xmm0, xmm7
              vmulps  xmm2, xmm1, xmm9
              vaddps  xmm3, xmm2, xmm10
              vmovss  dword ptr [rsp+118h+pos], xmm3
              vextractps dword ptr [rsp+118h+pos+4], xmm3, 1
              vextractps dword ptr [rsp+118h+pos+8], xmm3, 2
            }
            if ( v61 )
              v66 = CG_VectorField_SamplePosAgainstSubFields_0_(_RBX, &pos, outSample, filterType);
            else
              v66 = CG_VectorField_SamplePosAgainstSubFields_1_(_RBX, &pos, outSample, filterType);
            v15 |= v66;
          }
        }
      }
      ++v12;
      --v16;
    }
    while ( v16 );
    __asm
    {
      vmovaps xmm11, [rsp+118h+var_98]
      vmovaps xmm10, [rsp+118h+var_88]
      vmovaps xmm9, [rsp+118h+var_78]
      vmovaps xmm8, [rsp+118h+var_68]
      vmovaps xmm7, [rsp+118h+var_58]
      vmovaps xmm6, [rsp+118h+var_48]
    }
  }
  return v15;
}

/*
==============
CG_VectorField_SamplePosAgainstInstances
==============
*/
__int64 CG_VectorField_SamplePosAgainstInstances(const vec3_t *pos, vec3_t *outSample, unsigned int numInstances, unsigned __int8 *samplers, VectorFieldType filterType)
{
  unsigned int v13; 
  unsigned __int8 v14; 
  __int64 v16; 
  const VectorField *vf; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  const dvar_t *v22; 
  const orientation_t *p_orient; 
  int v25; 
  char v81; 
  unsigned int v82; 
  unsigned __int8 *v84; 
  vec3_t outSamplea; 

  v84 = samplers;
  _R15 = outSample;
  _R12 = pos;
  if ( !samplers )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 718, ASSERT_TYPE_ASSERT, "(samplers)", (const char *)&queryFormat, "samplers") )
      __debugbreak();
    samplers = NULL;
  }
  v13 = 0;
  v14 = 0;
  v82 = 0;
  *(_QWORD *)_R15->v = 0i64;
  _R15->v[2] = 0.0;
  v81 = 0;
  if ( numInstances )
  {
    __asm
    {
      vmovaps [rsp+120h+var_40], xmm6
      vmovaps [rsp+120h+var_50], xmm7
      vmovaps [rsp+120h+var_60], xmm8
      vmovaps [rsp+120h+var_70], xmm9
      vmovaps [rsp+120h+var_80], xmm10
      vxorps  xmm8, xmm8, xmm8
    }
    while ( 1 )
    {
      v16 = samplers[v14];
      _RDI = &s_vectorFieldInstancePool[v16];
      if ( !_RDI->inUse )
        goto LABEL_35;
      if ( !_RDI->isRotated )
      {
        v13 |= CG_VectorField_SamplePosAgainstSubFields_0_(&s_vectorFieldInstancePool[v16], _R12, _R15, filterType);
        goto LABEL_34;
      }
      vf = _RDI->vf;
      v19 = 0;
      v20 = 0i64;
      if ( !_RDI->vf->numSubFields )
        goto LABEL_32;
      do
      {
        v21 = (__int64)&vf->subFields[v20];
        if ( *(_DWORD *)(v21 + 60) != filterType )
          goto LABEL_30;
        if ( (*(_BYTE *)(v21 + 56) & 1) == 0 )
        {
          v22 = DVARBOOL_cg_vectorFieldsForceUniform;
          if ( !DVARBOOL_cg_vectorFieldsForceUniform && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsForceUniform") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v22);
          if ( !v22->current.enabled )
          {
            __asm { vmovss  xmm1, dword ptr [rdi+3Ch]; sizeScale }
            p_orient = &_RDI->orient;
            if ( _RDI->isRotated )
              v25 = CG_VectorField_SamplePosFromSubField_1_(p_orient, *(float *)&_XMM1, (const VectorSubField *)v21, _R12, &outSamplea);
            else
              v25 = CG_VectorField_SamplePosFromSubField_0_(p_orient, *(float *)&_XMM1, (const VectorSubField *)v21, _R12, &outSamplea);
            goto LABEL_29;
          }
        }
        __asm
        {
          vmovss  xmm7, dword ptr [rdi+3Ch]
          vmovss  xmm0, dword ptr [r12]
          vmovss  xmm1, dword ptr [r12+8]
        }
        if ( _RDI->isRotated )
        {
          __asm
          {
            vsubss  xmm4, xmm0, dword ptr [rdi+8]
            vsubss  xmm6, xmm1, dword ptr [rdi+10h]
            vmovss  xmm0, dword ptr [r12+4]
            vsubss  xmm5, xmm0, dword ptr [rdi+0Ch]
            vmulss  xmm1, xmm5, dword ptr [rdx+0Ch]
            vmulss  xmm0, xmm4, dword ptr [rdx]
            vmulss  xmm3, xmm4, dword ptr [rdx+4]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, dword ptr [rdx+18h]
            vmulss  xmm0, xmm5, dword ptr [rdx+10h]
            vaddss  xmm10, xmm2, xmm1
            vmulss  xmm1, xmm6, dword ptr [rdx+1Ch]
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm3, xmm4, dword ptr [rdx+8]
            vmulss  xmm0, xmm5, dword ptr [rdx+14h]
            vmulss  xmm4, xmm7, dword ptr [rbx+8]
            vmulss  xmm5, xmm7, dword ptr [rbx+0Ch]
            vaddss  xmm9, xmm2, xmm1
            vmulss  xmm1, xmm6, dword ptr [rdx+20h]
            vmulss  xmm6, xmm7, dword ptr [rbx+10h]
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm0, xmm7, dword ptr [rbx+14h]
            vcomiss xmm10, xmm0
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm1, xmm7, dword ptr [rbx+18h]
            vmulss  xmm2, xmm7, dword ptr [rbx+1Ch]
          }
          if ( _RDI->isRotated )
            goto LABEL_28;
          __asm { vcomiss xmm9, xmm1 }
          if ( _RDI->isRotated )
            goto LABEL_28;
          __asm { vcomiss xmm3, xmm2 }
          if ( _RDI->isRotated )
            goto LABEL_28;
          __asm
          {
            vcomiss xmm10, xmm4
            vcomiss xmm9, xmm5
            vcomiss xmm3, xmm6
          }
          Vec3Rotate(*(const vec3_t **)v21, &_RDI->orient.axis, &outSamplea);
          v25 = 1;
        }
        else
        {
          __asm
          {
            vsubss  xmm5, xmm0, dword ptr [rdi+8]
            vmovss  xmm0, dword ptr [r12+4]
            vsubss  xmm2, xmm0, dword ptr [rdi+0Ch]
            vmulss  xmm0, xmm7, dword ptr [rbx+14h]
            vcomiss xmm5, xmm0
            vsubss  xmm3, xmm1, dword ptr [rdi+10h]
            vmulss  xmm6, xmm7, dword ptr [rbx+8]
            vmulss  xmm9, xmm7, dword ptr [rbx+0Ch]
            vmulss  xmm10, xmm7, dword ptr [rbx+10h]
            vmulss  xmm1, xmm7, dword ptr [rbx+18h]
            vmulss  xmm4, xmm7, dword ptr [rbx+1Ch]
          }
          if ( _RDI->isRotated )
            goto LABEL_28;
          __asm { vcomiss xmm2, xmm1 }
          if ( _RDI->isRotated )
            goto LABEL_28;
          __asm { vcomiss xmm3, xmm4 }
          if ( _RDI->isRotated )
          {
LABEL_28:
            __asm
            {
              vmovss  dword ptr [rbp+4Fh+outSample], xmm8
              vmovss  dword ptr [rbp+4Fh+outSample+8], xmm8
              vmovss  dword ptr [rbp+4Fh+outSample+4], xmm8
            }
            v25 = 0;
            goto LABEL_29;
          }
          __asm
          {
            vcomiss xmm5, xmm6
            vcomiss xmm2, xmm9
            vcomiss xmm3, xmm10
          }
          _RAX = *(const vec3_t **)v21;
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vmovss  xmm1, dword ptr [rax+4]
            vmovss  dword ptr [rbp+4Fh+outSample], xmm0
            vmovss  xmm0, dword ptr [rax+8]
            vmovss  dword ptr [rbp+4Fh+outSample+8], xmm0
            vmovss  dword ptr [rbp+4Fh+outSample+4], xmm1
          }
          v25 = 1;
        }
LABEL_29:
        __asm
        {
          vmovss  xmm3, dword ptr [rdi+38h]
          vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+outSample]
          vaddss  xmm2, xmm1, dword ptr [r15]
          vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+outSample+4]
          vmovss  dword ptr [r15], xmm2
          vaddss  xmm2, xmm1, dword ptr [r15+4]
          vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+outSample+8]
          vmovss  dword ptr [r15+4], xmm2
          vaddss  xmm2, xmm1, dword ptr [r15+8]
          vmovss  dword ptr [r15+8], xmm2
        }
        v19 |= v25;
LABEL_30:
        vf = _RDI->vf;
        v20 = (unsigned int)(v20 + 1);
      }
      while ( (unsigned int)v20 < _RDI->vf->numSubFields );
      v13 = v82;
      v14 = v81;
LABEL_32:
      v13 |= v19;
LABEL_34:
      v82 = v13;
LABEL_35:
      samplers = v84;
      v81 = ++v14;
      if ( v14 >= numInstances )
      {
        __asm
        {
          vmovaps xmm10, [rsp+120h+var_80]
          vmovaps xmm9, [rsp+120h+var_70]
          vmovaps xmm8, [rsp+120h+var_60]
          vmovaps xmm7, [rsp+120h+var_50]
          vmovaps xmm6, [rsp+120h+var_40]
        }
        return v13;
      }
    }
  }
  return v13;
}

/*
==============
CG_VectorField_TransformUpdated
==============
*/

__int64 __fastcall CG_VectorField_TransformUpdated(double vf_sizesScale, const orientation_t *vf_orient, float fx_sizesScale, const orientation_t *fx_orient)
{
  __int64 result; 

  __asm
  {
    vsubss  xmm1, xmm0, xmm2
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, cs:__real@3a83126f
    vcomiss xmm1, xmm6
  }
  result = 1i64;
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
}

/*
==============
CG_VectorField_UpdateInstanceForFxWithEffectHandle
==============
*/

void __fastcall CG_VectorField_UpdateInstanceForFxWithEffectHandle(unsigned int effectHandle, const orientation_t *orient, double strengthScale, double sizeScale, int isRotated)
{
  unsigned int i; 
  int v27; 
  unsigned __int8 v28; 
  unsigned __int8 v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  char v40; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  _RBP = orient;
  __asm
  {
    vmovaps [rsp+98h+var_48], xmm7
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm3, xmm0
    vmovaps [rsp+98h+var_58], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  _RBX = &s_vectorFieldInstancePool[0].orient.axis.m[0].v[1];
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  for ( i = 0; i < 0xFF; ++i )
  {
    _RAX = *((_QWORD *)_RBX - 3);
    _RDX = (const orientation_t *)(_RBX - 4);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vaddss  xmm1, xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rdx], xmm1
      vmovss  xmm0, dword ptr [rax+2Ch]
      vaddss  xmm1, xmm0, dword ptr [rbp+4]
      vmovss  dword ptr [rbx-0Ch], xmm1
      vmovss  xmm2, dword ptr [rax+30h]
      vaddss  xmm0, xmm2, dword ptr [rbp+8]
      vmovss  dword ptr [rbx-8], xmm0
    }
    if ( *((_DWORD *)_RBX + 12) == effectHandle && *((_DWORD *)_RBX + 10) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+24h]; vf_sizesScale
        vmovaps xmm2, xmm6; fx_sizesScale
      }
      v27 = CG_VectorField_TransformUpdated(*(double *)&_XMM0, _RDX, *(float *)&_XMM2, _RBP);
      if ( v27 )
      {
        v28 = truncate_cast<unsigned char,unsigned int>(i);
        CG_Wind_RemoveVectorField(v28);
      }
      *((_DWORD *)_RBX + 11) = isRotated;
      if ( isRotated )
      {
        *(_RBX - 1) = _RBP->axis.m[0].v[0];
        *_RBX = _RBP->axis.m[0].v[1];
        _RBX[1] = _RBP->axis.m[0].v[2];
        _RBX[2] = _RBP->axis.m[1].v[0];
        _RBX[3] = _RBP->axis.m[1].v[1];
        _RBX[4] = _RBP->axis.m[1].v[2];
        _RBX[5] = _RBP->axis.m[2].v[0];
        _RBX[6] = _RBP->axis.m[2].v[1];
        __asm { vmovss  xmm0, dword ptr [rbp+2Ch] }
      }
      else
      {
        *(_QWORD *)(_RBX - 1) = 1065353216i64;
        *(_QWORD *)(_RBX + 1) = 0i64;
        *(_QWORD *)(_RBX + 3) = 1065353216i64;
        *(_QWORD *)(_RBX + 5) = 0i64;
        __asm { vmovaps xmm0, xmm8 }
      }
      __asm
      {
        vmovss  dword ptr [rbx+1Ch], xmm0
        vmovss  dword ptr [rbx+20h], xmm7
        vmovss  dword ptr [rbx+24h], xmm6
      }
      if ( v27 )
      {
        v30 = truncate_cast<unsigned char,unsigned int>(i);
        CG_Wind_AddVectorField(v30);
      }
      v31 = DVARINT_cg_vectorFieldsDraw;
      if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( v31->current.integer )
      {
        v32 = DVARINT_cg_vectorFieldsDraw;
        if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        CG_VectorField_DrawField((const VectorFieldInstance *)(_RBX - 6), v32->current.integer > 1);
      }
    }
    _RBX += 20;
  }
  _R11 = &v40;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm6, [rsp+98h+var_38]
    vmovaps xmm7, [rsp+98h+var_48]
  }
}

/*
==============
CG_VectorField_UpdateInstanceForFxWithHandle
==============
*/

void __fastcall CG_VectorField_UpdateInstanceForFxWithHandle(unsigned __int8 vfHandle, const orientation_t *orient, double strengthScale, double sizeScale, bool isRotated)
{
  int v16; 

  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  _RSI = orient;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  if ( vfHandle == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 331, ASSERT_TYPE_ASSERT, "(unsigned)( vfHandle ) < (unsigned)( ( sizeof( *array_counter( s_vectorFieldInstancePool ) ) + 0 ) )", "vfHandle doesn't index ARRAY_COUNT( s_vectorFieldInstancePool )\n\t%i not in [0, %i)", 255, 255) )
    __debugbreak();
  _R15 = s_vectorFieldInstancePool;
  _RBX = 10i64 * vfHandle;
  if ( !s_vectorFieldInstancePool[vfHandle].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 332, ASSERT_TYPE_ASSERT, "(s_vectorFieldInstancePool[vfHandle].inUse)", (const char *)&queryFormat, "s_vectorFieldInstancePool[vfHandle].inUse") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [r15+rbx*8+3Ch]; vf_sizesScale }
  _RBP = &s_vectorFieldInstancePool[vfHandle].orient;
  __asm { vmovaps xmm2, xmm6; fx_sizesScale }
  v16 = CG_VectorField_TransformUpdated(*(double *)&_XMM0, _RBP, *(float *)&_XMM2, _RSI);
  if ( v16 )
    CG_Wind_RemoveVectorField(vfHandle);
  __asm { vmovss  xmm3, cs:__real@3f800000 }
  s_vectorFieldInstancePool[vfHandle].isRotated = isRotated;
  _RCX = s_vectorFieldInstancePool[vfHandle].vf;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm1, xmm0, dword ptr [rcx+28h]
    vmovss  dword ptr [rbp+0], xmm1
    vmovss  xmm2, dword ptr [rcx+2Ch]
    vaddss  xmm0, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+4], xmm0
    vmovss  xmm1, dword ptr [rcx+30h]
    vaddss  xmm2, xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+8], xmm2
  }
  if ( s_vectorFieldInstancePool[vfHandle].isRotated )
  {
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[0].v[0] = _RSI->axis.m[0].v[0];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[0].v[1] = _RSI->axis.m[0].v[1];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[0].v[2] = _RSI->axis.m[0].v[2];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[1].v[0] = _RSI->axis.m[1].v[0];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[1].v[1] = _RSI->axis.m[1].v[1];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[1].v[2] = _RSI->axis.m[1].v[2];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[2].v[0] = _RSI->axis.m[2].v[0];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[2].v[1] = _RSI->axis.m[2].v[1];
    __asm { vmovss  xmm0, dword ptr [rsi+2Ch] }
  }
  else
  {
    *(_QWORD *)s_vectorFieldInstancePool[vfHandle].orient.axis.m[0].v = 1065353216i64;
    *(_QWORD *)&s_vectorFieldInstancePool[vfHandle].orient.axis.row0.z = 0i64;
    *(_QWORD *)&s_vectorFieldInstancePool[vfHandle].orient.axis.row1.y = 1065353216i64;
    *(_QWORD *)s_vectorFieldInstancePool[vfHandle].orient.axis.row2.v = 0i64;
    __asm { vmovaps xmm0, xmm3 }
  }
  __asm
  {
    vmovss  dword ptr [r15+rbx*8+34h], xmm0
    vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vcmpltsd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm6, xmm2
    vmovss  dword ptr [r15+rbx*8+3Ch], xmm0
    vmovss  dword ptr [r15+rbx*8+38h], xmm7
  }
  if ( v16 )
    CG_Wind_AddVectorField(vfHandle);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

