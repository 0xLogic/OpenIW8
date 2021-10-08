/*
==============
ATClient_TraverseAddRandomInBounds
==============
*/

void __fastcall ATClient_TraverseAddRandomInBounds(const vec3_t *min, const vec3_t *max, const vec3_t *angles)
{
  ?ATClient_TraverseAddRandomInBounds@@YAXAEBTvec3_t@@0PEBT1@@Z(min, max, angles);
}

/*
==============
ATClient_TraversalNavGeneratePerfPositions
==============
*/

void ATClient_TraversalNavGeneratePerfPositions(void)
{
  ?ATClient_TraversalNavGeneratePerfPositions@@YAXXZ();
}

/*
==============
ATClient_TraverseAddReferenceQA
==============
*/

void __fastcall ATClient_TraverseAddReferenceQA(const vec3_t *angle)
{
  ?ATClient_TraverseAddReferenceQA@@YAXPEBTvec3_t@@@Z(angle);
}

/*
==============
ATCLient_TraverseInit
==============
*/

void __fastcall ATCLient_TraverseInit(const bool regenerate)
{
  ?ATCLient_TraverseInit@@YAX_N@Z(regenerate);
}

/*
==============
ATCLient_TraverseShutdown
==============
*/

void ATCLient_TraverseShutdown(void)
{
  ?ATCLient_TraverseShutdown@@YAXXZ();
}

/*
==============
ATClient_TraverseReset
==============
*/

void ATClient_TraverseReset(void)
{
  ?ATClient_TraverseReset@@YAXXZ();
}

/*
==============
ATClient_TraverseGetRandomAngle
==============
*/

void __fastcall ATClient_TraverseGetRandomAngle(const float minPitchDegrees, const float maxPitchDegrees, vec3_t *outAngles)
{
  ?ATClient_TraverseGetRandomAngle@@YAXMMPEATvec3_t@@@Z(minPitchDegrees, maxPitchDegrees, outAngles);
}

/*
==============
ATCLient_TraverseGetIndexMax
==============
*/

int __fastcall ATCLient_TraverseGetIndexMax()
{
  return ?ATCLient_TraverseGetIndexMax@@YAHXZ();
}

/*
==============
ATClient_TraverseGetByIndex
==============
*/

bool __fastcall ATClient_TraverseGetByIndex(const int index, vec3_t *pos, vec3_t *angles)
{
  return ?ATClient_TraverseGetByIndex@@YA_NHPEATvec3_t@@0@Z(index, pos, angles);
}

/*
==============
ATClient_TraverseGetAngle
==============
*/

bool __fastcall ATClient_TraverseGetAngle(const int index, vec3_t *angles)
{
  return ?ATClient_TraverseGetAngle@@YA_NHPEATvec3_t@@@Z(index, angles);
}

/*
==============
ATClient_TraverseGetRandomInBounds
==============
*/

void __fastcall ATClient_TraverseGetRandomInBounds(const vec3_t *boundsMin, const vec3_t *boundsMax, vec3_t *outPos)
{
  ?ATClient_TraverseGetRandomInBounds@@YAXAEBTvec3_t@@0PEAT1@@Z(boundsMin, boundsMax, outPos);
}

/*
==============
ATCLient_TraverseGetIndexMax
==============
*/
__int64 ATCLient_TraverseGetIndexMax()
{
  return (unsigned int)s_samplePosUsed;
}

/*
==============
ATCLient_TraverseInit
==============
*/
void ATCLient_TraverseInit(const bool regenerate)
{
  const dvar_t *v1; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  char v11; 
  bool v12; 
  bool v14; 
  bool v16; 
  bool v18; 
  bool v20; 
  __int64 v23; 
  float outRadius; 

  v1 = DVARINT_ATClient_PerfProbeSampleCountMax;
  s_samplePosUsed = 0;
  if ( !DVARINT_ATClient_PerfProbeSampleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfProbeSampleCountMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v4 = DVARINT_ATClient_PerfMode;
  if ( integer > 200 )
    integer = 200;
  s_samplePosUseMax = integer;
  if ( !DVARINT_ATClient_PerfMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer;
  v6 = DVARINT_ATClient_PerfModeAngles;
  s_traversalMode = v5;
  if ( !DVARINT_ATClient_PerfModeAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfModeAngles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.integer;
  _RBX = DVARFLT_ATClient_PerfClientPitchMin;
  s_traversalModeAngles = v7;
  if ( !DVARFLT_ATClient_PerfClientPitchMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientPitchMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DVARFLT_ATClient_PerfClientPitchMax;
  __asm { vmovss  cs:s_minPitchDegrees, xmm0 }
  if ( !DVARFLT_ATClient_PerfClientPitchMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientPitchMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcomiss xmm0, cs:s_minPitchDegrees
    vmovss  cs:s_maxPitchDegrees, xmm0
  }
  if ( v11 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 366, ASSERT_TYPE_ASSERT, "(s_maxPitchDegrees >= s_minPitchDegrees)", (const char *)&queryFormat, "s_maxPitchDegrees >= s_minPitchDegrees");
    v11 = 0;
    v12 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:s_maxPitchDegrees
    vcomiss xmm0, cs:__real@c2b40000
  }
  if ( v11 )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 367, ASSERT_TYPE_ASSERT, "(s_maxPitchDegrees >= -90.0f)", (const char *)&queryFormat, "s_maxPitchDegrees >= -90.0f");
    v11 = 0;
    v12 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:s_maxPitchDegrees
    vcomiss xmm0, cs:__real@42b40000
  }
  if ( !(v11 | v12) )
  {
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 368, ASSERT_TYPE_ASSERT, "(s_maxPitchDegrees <= 90.0f)", (const char *)&queryFormat, "s_maxPitchDegrees <= 90.0f");
    v11 = 0;
    v12 = !v18;
    if ( v18 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:s_minPitchDegrees
    vcomiss xmm0, cs:__real@c2b40000
  }
  if ( v11 )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 369, ASSERT_TYPE_ASSERT, "(s_minPitchDegrees >= -90.0f)", (const char *)&queryFormat, "s_minPitchDegrees >= -90.0f");
    v11 = 0;
    v12 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:s_minPitchDegrees
    vcomiss xmm0, cs:__real@42b40000
  }
  if ( !(v11 | v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 370, ASSERT_TYPE_ASSERT, "(s_minPitchDegrees <= 90.0f)", (const char *)&queryFormat, "s_minPitchDegrees <= 90.0f") )
    __debugbreak();
  ATClient_NavGetPerfTestBounds(&s_worldBoundMin, &s_worldBoundMax);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+48h+outRadius], xmm0
  }
  s_hasBounds = ATClient_NavGetMeshBoundsMinMax(&s_tileBoundMin, &s_tileBoundMax, &outRadius);
  switch ( s_traversalMode )
  {
    case -1:
      v23 = s_samplePosUsed;
      _R8 = s_samplePos;
      __asm
      {
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+10h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8], xmm0
        vmovsd  qword ptr [r8+rax*8+10h], xmm1
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+18h
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+28h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+18h], xmm0
        vmovsd  qword ptr [r8+rax*8+28h], xmm1
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+30h
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+40h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+30h], xmm0
        vmovsd  qword ptr [r8+rax*8+40h], xmm1
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+48h
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+58h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+48h], xmm0
        vmovsd  qword ptr [r8+rax*8+58h], xmm1
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+60h
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+70h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+60h], xmm0
        vmovsd  qword ptr [r8+rax*8+70h], xmm1
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+78h
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+88h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+78h], xmm0
        vmovsd  qword ptr [r8+rax*8+88h], xmm1
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+90h
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+0A0h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+90h], xmm0
        vmovsd  qword ptr [r8+rax*8+0A0h], xmm1
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+0A8h
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+0B8h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+0A8h], xmm0
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+0C0h
        vmovsd  qword ptr [r8+rax*8+0B8h], xmm1
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+0D0h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+0C0h], xmm0
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+0D8h
        vmovsd  qword ptr [r8+rax*8+0D0h], xmm1
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+0E8h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+0D8h], xmm0
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+0F0h
        vmovsd  qword ptr [r8+rax*8+0E8h], xmm1
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+100h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+0F0h], xmm0
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+108h
        vmovsd  qword ptr [r8+rax*8+100h], xmm1
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+118h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+108h], xmm0
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+120h
        vmovsd  qword ptr [r8+rax*8+118h], xmm1
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+130h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+120h], xmm0
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+138h
        vmovsd  qword ptr [r8+rax*8+130h], xmm1
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+148h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+138h], xmm0
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+150h
        vmovsd  qword ptr [r8+rax*8+148h], xmm1
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+160h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+150h], xmm0
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+168h
        vmovsd  qword ptr [r8+rax*8+160h], xmm1
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+178h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+168h], xmm0
        vmovups xmm0, xmmword ptr cs:s_samplePosDEV+180h
        vmovsd  qword ptr [r8+rax*8+178h], xmm1
        vmovsd  xmm1, qword ptr cs:s_samplePosDEV+190h
      }
      _RAX = 3 * v23;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+180h], xmm0
        vmovsd  qword ptr [r8+rax*8+190h], xmm1
      }
      s_samplePosUsed = v23 + 17;
      break;
    case 0:
      ATCLient_TraverseInitQA(s_traversalModeAngles);
      break;
    case 1:
      goto LABEL_38;
    case 3:
      ATCLient_TraverseInitQA(s_traversalModeAngles);
LABEL_38:
      ATCLient_TraverseInitRandom(s_samplePosUseMax, s_traversalModeAngles, regenerate);
      break;
  }
  s_initializedTraversal = 1;
}

/*
==============
ATCLient_TraverseInitQA
==============
*/
void ATCLient_TraverseInitQA(const int angleSelection)
{
  int v1; 
  int v2; 
  int v5; 
  int v6; 
  __int64 v9; 
  int v14; 
  int v15; 
  __int64 v18; 

  v1 = angleSelection - 1;
  if ( !v1 )
  {
    ATClient_TraverseAddReferenceQA(s_sampleAngles);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[2]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[4]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[6]);
    return;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
LABEL_10:
    ATClient_TraverseAddReferenceQA(s_sampleAngles);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[2]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[4]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[6]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[8]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[9]);
    return;
  }
  _RDX = &s_samplePosQA[1];
  _R8 = s_samplePos;
  if ( v2 == 1 )
  {
    v14 = s_samplePosUsed;
    v15 = s_samplePosUsed;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx-18h]
        vmovsd  xmm1, qword ptr [rdx-8]
      }
      v18 = v15;
      v15 += 2;
      _RAX = 3 * v18;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8], xmm0
        vmovups xmm0, xmmword ptr [rdx]
        vmovsd  qword ptr [r8+rax*8+10h], xmm1
        vmovsd  xmm1, qword ptr [rdx+10h]
      }
      _RAX = 3 * v18;
      _RDX += 2;
      __asm
      {
        vmovups xmmword ptr [r8+rax*8+18h], xmm0
        vmovsd  qword ptr [r8+rax*8+28h], xmm1
      }
    }
    while ( (__int64)_RDX < (__int64)&s_samplePosDEV[0].pos.z );
    s_samplePosUsed = v14 + 132;
    goto LABEL_10;
  }
  v5 = s_samplePosUsed;
  v6 = s_samplePosUsed;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx-18h]
      vmovsd  xmm1, qword ptr [rdx-8]
    }
    v9 = v6;
    v6 += 2;
    _RAX = 3 * v9;
    __asm
    {
      vmovups xmmword ptr [r8+rax*8], xmm0
      vmovups xmm0, xmmword ptr [rdx]
      vmovsd  qword ptr [r8+rax*8+10h], xmm1
      vmovsd  xmm1, qword ptr [rdx+10h]
    }
    _RAX = 3 * v9;
    _RDX += 2;
    __asm
    {
      vmovups xmmword ptr [r8+rax*8+18h], xmm0
      vmovsd  qword ptr [r8+rax*8+28h], xmm1
    }
  }
  while ( (__int64)_RDX < (__int64)&s_samplePosDEV[0].pos.z );
  s_samplePosUsed = v5 + 132;
}

/*
==============
ATCLient_TraverseInitRandom
==============
*/
void ATCLient_TraverseInitRandom(const int numPointsMax, const int angleSelection, const bool regenerate)
{
  int v25; 
  int v26; 
  bool v28; 
  unsigned int UInt; 
  bool v30; 
  bool v40; 
  bool v41; 
  bool v47; 
  vec6_t *v61; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RBX = DVARFLT_ATClient_PerfClientPaddingXY;
  if ( !DVARFLT_ATClient_PerfClientPaddingXY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientPaddingXY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcvttss2si r13d, dword ptr [rbx+28h] }
  if ( _ER13 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 308, ASSERT_TYPE_ASSERT, "(padding >=0)", (const char *)&queryFormat, "padding >=0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_worldBoundMax
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
    vaddss  xmm1, xmm6, dword ptr cs:s_worldBoundMin
    vsubss  xmm1, xmm0, xmm1
    vcvttss2si r14d, xmm1
  }
  if ( _ER14 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 311, ASSERT_TYPE_ASSERT, "(xSpan >= 0)", (const char *)&queryFormat, "xSpan >= 0") )
    __debugbreak();
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr cs:s_worldBoundMin+4
    vmovss  xmm0, dword ptr cs:s_worldBoundMax+4
    vsubss  xmm1, xmm0, xmm1
    vcvttss2si r15d, xmm1
  }
  if ( _ER15 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 313, ASSERT_TYPE_ASSERT, "(ySpan >= 0)", (const char *)&queryFormat, "ySpan >= 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_worldBoundMax+8
    vsubss  xmm1, xmm0, dword ptr cs:s_worldBoundMin+8
    vcvttss2si r12d, xmm1
  }
  if ( _ER12 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 315, ASSERT_TYPE_ASSERT, "(zSpan >= 0)", (const char *)&queryFormat, "zSpan >= 0") )
    __debugbreak();
  v25 = s_samplePosUsed;
  v26 = s_samplePosUseMax;
  if ( regenerate )
    v25 = 0;
  s_samplePosUsed = v25;
  if ( v25 < s_samplePosUseMax )
  {
    __asm
    {
      vmovaps [rsp+0D8h+var_48], xmm7
      vmovaps [rsp+0D8h+var_58], xmm8
      vmovaps [rsp+0D8h+var_68], xmm9
    }
    v61 = &s_samplePos[v25];
    __asm { vxorps  xmm9, xmm9, xmm9 }
    do
    {
      if ( _ER14 > 0 )
        bdRandom::nextUInt(&s_randTraverse);
      if ( _ER15 > 0 )
        bdRandom::nextUInt(&s_randTraverse);
      v28 = _ER12 == 0;
      if ( _ER12 > 0 )
      {
        UInt = bdRandom::nextUInt(&s_randTraverse);
        v28 = UInt % _ER12 == 0;
        if ( ((UInt % _ER12) & 0x80000000) != 0 )
        {
          v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 327, ASSERT_TYPE_ASSERT, "(zofs >= 0)", (const char *)&queryFormat, "zofs >= 0");
          v28 = !v30;
          if ( v30 )
            __debugbreak();
        }
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm6, xmm0, dword ptr cs:s_worldBoundMin
        vcomiss xmm6, dword ptr cs:s_worldBoundMin
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm7, xmm0, dword ptr cs:s_worldBoundMin+4
        vcvtsi2ss xmm1, xmm1, ebx
        vaddss  xmm8, xmm1, dword ptr cs:s_worldBoundMin+8
        vmovss  dword ptr [rsp+0D8h+var_90+4], xmm7
        vmovss  dword ptr [rsp+0D8h+var_90], xmm6
        vmovss  dword ptr [rsp+0D8h+var_90+8], xmm8
        vcomiss xmm6, dword ptr cs:s_worldBoundMax
      }
      if ( !v28 )
      {
        v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 334, ASSERT_TYPE_ASSERT, "(vec[0] <= s_worldBoundMax[0])", (const char *)&queryFormat, "vec[0] <= s_worldBoundMax[0]");
        v28 = !v40;
        if ( v40 )
          __debugbreak();
      }
      __asm
      {
        vcomiss xmm7, dword ptr cs:s_worldBoundMin+4
        vcomiss xmm7, dword ptr cs:s_worldBoundMax+4
      }
      if ( !v28 )
      {
        v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 336, ASSERT_TYPE_ASSERT, "(vec[1] <= s_worldBoundMax[1])", (const char *)&queryFormat, "vec[1] <= s_worldBoundMax[1]");
        v28 = !v41;
        if ( v41 )
          __debugbreak();
      }
      __asm
      {
        vcomiss xmm8, dword ptr cs:s_worldBoundMin+8
        vcomiss xmm8, dword ptr cs:s_worldBoundMax+8
      }
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 338, ASSERT_TYPE_ASSERT, "(vec[2] <= s_worldBoundMax[2])", (const char *)&queryFormat, "vec[2] <= s_worldBoundMax[2]") )
        __debugbreak();
      __asm
      {
        vmovss  xmm6, cs:s_minPitchDegrees
        vmovss  xmm0, cs:s_maxPitchDegrees
        vsubss  xmm1, xmm0, xmm6
        vxorps  xmm2, xmm2, xmm2
        vroundss xmm2, xmm2, xmm1, 1
        vcvttss2si ebx, xmm2
      }
      v47 = _EBX <= 0;
      if ( _EBX < 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 443, ASSERT_TYPE_ASSERT, "(pitchSpan >= 0)", (const char *)&queryFormat, "pitchSpan >= 0") )
          __debugbreak();
        v47 = _EBX <= 0;
      }
      if ( !v47 )
        bdRandom::nextUInt(&s_randTraverse);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vaddss  xmm0, xmm0, xmm6; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm { vmovaps xmm6, xmm0 }
      bdRandom::nextUInt(&s_randTraverse);
      __asm { vmovups xmm0, [rsp+0D8h+var_90] }
      ++v25;
      v26 = s_samplePosUseMax;
      __asm
      {
        vinsertps xmm0, xmm0, xmm6, 30h ; '0'
        vxorps  xmm1, xmm1, xmm1
      }
      _RCX = v61;
      __asm
      {
        vcvtsi2ss xmm1, xmm1, r8d
        vmovups xmmword ptr [rcx], xmm0
        vunpcklps xmm0, xmm1, xmm9
        vmovsd  qword ptr [rcx+10h], xmm0
      }
      ++v61;
    }
    while ( v25 < v26 );
    __asm
    {
      vmovaps xmm9, [rsp+0D8h+var_68]
      vmovaps xmm8, [rsp+0D8h+var_58]
      vmovaps xmm7, [rsp+0D8h+var_48]
    }
  }
  s_samplePosUsed = v26;
  _R11 = &v66;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
ATCLient_TraverseShutdown
==============
*/
void ATCLient_TraverseShutdown(void)
{
  s_samplePosUsed = 0;
  s_initializedTraversal = 0;
}

/*
==============
ATClient_TraversalNavGeneratePerfPositions
==============
*/
void ATClient_TraversalNavGeneratePerfPositions()
{
  nav_space_s *DefaultSpace; 
  int v39; 
  int v53; 
  bfx::SpaceHandle v62; 
  char v68; 
  char v70; 
  unsigned int v71; 
  bfx::SpaceHandle v85; 
  bfx::SpaceHandle v106; 
  bfx::SpaceHandle rhs; 
  __int64 v108; 
  Bounds pOutBounds; 
  vec3_t start; 
  vec3_t end; 
  vec3_t testPoint; 
  vec3_t outPoint; 
  trace_t results; 
  char v115; 
  void *retaddr; 

  _RAX = &retaddr;
  v108 = -2i64;
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
  DefaultSpace = Nav_GetDefaultSpace();
  bfx::SpaceHandle::SpaceHandle(&rhs, &DefaultSpace->hSpace);
  if ( Nav_GetBounds(&pOutBounds) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+120h+pOutBounds.halfSize]
      vucomiss xmm0, cs:__real@ff7fffff
      vmovups xmm0, xmmword ptr [rbp+120h+pOutBounds.midPoint]
      vmovups xmmword ptr cs:sampleBounds.midPoint, xmm0
      vmovsd  xmm1, qword ptr [rbp+120h+pOutBounds.halfSize+4]
      vmovsd  qword ptr cs:sampleBounds.halfSize+4, xmm1
      vmovss  xmm6, cs:__real@40000000
      vmovss  xmm0, dword ptr [rbp+120h+pOutBounds.halfSize]
      vmulss  xmm15, xmm0, xmm6
      vmovss  dword ptr [rsp+220h+var_1B0], xmm15
      vmovss  xmm1, dword ptr [rbp+120h+pOutBounds.halfSize+4]
      vmulss  xmm7, xmm1, xmm6
      vmovss  [rsp+220h+var_1BC], xmm7
      vmulss  xmm2, xmm6, dword ptr [rbp+120h+pOutBounds.halfSize+8]
      vmaxss  xmm9, xmm2, cs:__real@42000000
      vmulss  xmm0, xmm15, cs:__real@3c638e39
      vcvttss2si r14d, xmm0
    }
    if ( _ER14 < 1 )
      _ER14 = 1;
    if ( _ER14 > 100 )
      _ER14 = 100;
    __asm
    {
      vmulss  xmm0, xmm7, cs:__real@3c638e39
      vcvttss2si edi, xmm0
    }
    if ( _EDI < 1 )
      _EDI = 1;
    if ( _EDI > 100 )
      _EDI = 100;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r14d
      vmovss  xmm8, cs:__real@3f800000
      vdivss  xmm4, xmm8, xmm0
      vmovss  [rsp+220h+var_1B4], xmm4
      vmulss  xmm1, xmm6, dword ptr [rbp+120h+pOutBounds.halfSize]
      vmulss  xmm3, xmm1, xmm4
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, edi
      vdivss  xmm5, xmm8, xmm2
      vmovss  [rsp+220h+var_1B8], xmm5
      vmulss  xmm1, xmm6, dword ptr [rbp+120h+pOutBounds.halfSize+4]
      vmulss  xmm2, xmm1, xmm5
    }
    s_samplesX = _ER14;
    s_samplesY = _EDI;
    __asm
    {
      vmovss  cs:s_sampleSizeX, xmm3
      vmovss  cs:s_sampleSizeY, xmm2
      vmovss  xmm0, dword ptr [rbp+120h+pOutBounds.halfSize+8]
      vaddss  xmm6, xmm0, dword ptr [rbp+120h+pOutBounds.midPoint+8]
      vmovss  [rsp+220h+var_1C0], xmm6
    }
    v39 = 0;
    _R12 = s_positions;
    __asm
    {
      vmovss  xmm14, cs:__real@3f000000
      vmovss  xmm10, cs:__real@41400000
      vmovss  xmm11, cs:__real@41c00000
      vmovss  xmm12, cs:__real@42f00000
      vxorps  xmm13, xmm13, xmm13
    }
    while ( 1 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vaddss  xmm1, xmm0, xmm14
        vmulss  xmm4, xmm1, xmm4
        vmovss  xmm2, dword ptr [rbp+120h+pOutBounds.midPoint]
        vsubss  xmm3, xmm2, dword ptr [rbp+120h+pOutBounds.halfSize]
        vmulss  xmm0, xmm4, xmm15
        vaddss  xmm15, xmm3, xmm0
      }
      v53 = 0;
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vaddss  xmm1, xmm0, xmm14
          vmulss  xmm4, xmm1, xmm5
          vmovss  xmm2, dword ptr [rbp+120h+pOutBounds.midPoint+4]
          vsubss  xmm3, xmm2, dword ptr [rbp+120h+pOutBounds.halfSize+4]
          vmulss  xmm0, xmm4, xmm7
          vaddss  xmm1, xmm3, xmm0
          vmovss  dword ptr [rbp+120h+testPoint], xmm15
          vmovss  dword ptr [rbp+120h+testPoint+4], xmm1
          vmovss  dword ptr [rbp+120h+testPoint+8], xmm6
        }
        bfx::SpaceHandle::SpaceHandle(&v106, &rhs);
        __asm { vmovaps xmm3, xmm9; probeDistance }
        if ( Nav_TryFindPointOnMeshBelowPoint(v62, 0, &testPoint, *(const float *)&_XMM3, &outPoint) )
        {
          while ( 1 )
          {
            __asm
            {
              vmovss  xmm2, dword ptr [rbp+120h+outPoint+8]
              vsubss  xmm0, xmm2, xmm10
              vmovss  dword ptr [rbp+120h+testPoint+8], xmm0
              vmovss  xmm1, dword ptr [rbp+120h+outPoint]
              vmovss  dword ptr [rbp+120h+start], xmm1
              vmovss  xmm0, dword ptr [rbp+120h+outPoint+4]
              vmovss  dword ptr [rbp+120h+start+4], xmm0
              vmovss  dword ptr [rbp+120h+end], xmm1
              vmovss  dword ptr [rbp+120h+end+4], xmm0
              vaddss  xmm0, xmm2, xmm11
              vmovss  dword ptr [rbp+120h+start+8], xmm0
              vsubss  xmm1, xmm2, xmm12
              vmovss  dword ptr [rbp+120h+end+8], xmm1
            }
            PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &actorBox, NULL, 0, 65553, NULL, 0, NULL, NULL);
            __asm
            {
              vmovss  xmm7, [rbp+120h+results.fraction]
              vcomiss xmm7, xmm13
            }
            if ( !(v68 | v70) )
            {
              __asm { vcomiss xmm7, xmm8 }
              if ( v68 )
              {
                v71 = s_numPositions;
                if ( s_numPositions >= 0x3E8 )
                {
                  Com_PrintWarning(20, "Physics Performance Test - too many pmove samples\n");
                  goto LABEL_23;
                }
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+120h+end]
                  vsubss  xmm1, xmm0, dword ptr [rbp+120h+start]
                  vmulss  xmm2, xmm1, xmm7
                  vaddss  xmm6, xmm2, dword ptr [rbp+120h+start]
                  vmovss  xmm0, dword ptr [rbp+120h+end+4]
                  vsubss  xmm1, xmm0, dword ptr [rbp+120h+start+4]
                  vmulss  xmm2, xmm1, xmm7
                  vaddss  xmm5, xmm2, dword ptr [rbp+120h+start+4]
                  vmovss  xmm0, dword ptr [rbp+120h+end+8]
                  vsubss  xmm1, xmm0, dword ptr [rbp+120h+start+8]
                  vmulss  xmm2, xmm1, xmm7
                  vaddss  xmm4, xmm2, dword ptr [rbp+120h+start+8]
                }
                _RCX = 3i64 * s_numPositions;
                __asm
                {
                  vmovss  dword ptr [r12+rcx*4], xmm6
                  vmovss  dword ptr [r12+rcx*4+4], xmm5
                  vmovss  dword ptr [r12+rcx*4+8], xmm4
                }
                s_numPositions = v71 + 1;
              }
            }
            bfx::SpaceHandle::SpaceHandle(&v106, &rhs);
            __asm { vmovaps xmm3, xmm9; probeDistance }
            if ( !Nav_TryFindPointOnMeshBelowPoint(v85, 0, &testPoint, *(const float *)&_XMM3, &outPoint) )
            {
              __asm
              {
                vmovss  xmm6, [rsp+220h+var_1C0]
                vmovss  xmm7, [rsp+220h+var_1BC]
              }
              break;
            }
          }
        }
        ++v53;
        __asm { vmovss  xmm5, [rsp+220h+var_1B8] }
      }
      while ( v53 < _EDI );
      if ( ++v39 >= _ER14 )
        break;
      __asm
      {
        vmovss  xmm4, [rsp+220h+var_1B4]
        vmovss  xmm15, dword ptr [rsp+220h+var_1B0]
      }
    }
  }
LABEL_23:
  bfx::SpaceHandle::~SpaceHandle(&rhs);
  _R11 = &v115;
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
ATClient_TraverseAddRandomInBounds
==============
*/
void ATClient_TraverseAddRandomInBounds(const vec3_t *min, const vec3_t *max, const vec3_t *angles)
{
  float v5; 
  int v7; 
  float v10; 
  float v14; 
  vec3_t outPos; 
  vec3_t outAngles; 

  _RBX = angles;
  ATClient_TraverseGetRandomInBounds(min, max, &outPos);
  if ( _RBX )
  {
    __asm { vmovsd  xmm0, qword ptr [rsp+58h+outPos] }
    v5 = outPos.v[2];
    _R8 = s_samplePos;
    v7 = s_samplePosUsed;
    _RCX = s_samplePosUsed;
    __asm { vmovsd  qword ptr [r8+rcx*8], xmm0 }
    s_samplePos[_RCX].v[2] = v5;
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx]
      vmovsd  qword ptr [r8+rcx*8+0Ch], xmm0
    }
    v10 = _RBX->v[2];
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@42340000; maxPitchDegrees
      vmovss  xmm0, cs:__real@c2340000; minPitchDegrees
    }
    ATClient_TraverseGetRandomAngle(*(const float *)&_XMM0, *(const float *)&_XMM1, &outAngles);
    __asm { vmovsd  xmm0, qword ptr [rsp+58h+outPos] }
    v14 = outPos.v[2];
    _R8 = s_samplePos;
    v7 = s_samplePosUsed;
    _RCX = s_samplePosUsed;
    __asm
    {
      vmovsd  qword ptr [r8+rcx*8], xmm0
      vmovsd  xmm0, qword ptr [rsp+58h+outAngles]
    }
    s_samplePos[_RCX].v[2] = v14;
    v10 = outAngles.v[2];
    __asm { vmovsd  qword ptr [r8+rcx*8+0Ch], xmm0 }
  }
  s_samplePos[_RCX].v[5] = v10;
  s_samplePosUsed = v7 + 1;
}

/*
==============
ATClient_TraverseAddReferenceQA
==============
*/
void ATClient_TraverseAddReferenceQA(const vec3_t *angle)
{
  int v4; 
  int v5; 
  __int64 v8; 
  int v13; 
  __int64 v15; 
  float v17; 
  float v21; 

  _RAX = &s_samplePosQA[1];
  _R10 = angle;
  _R9 = s_samplePos;
  if ( angle )
  {
    v13 = s_samplePosUsed;
    do
    {
      __asm { vmovsd  xmm0, qword ptr [rax-18h] }
      v15 = v13;
      v13 += 2;
      _RDX = v15;
      v17 = _RAX[-1].v[2];
      __asm { vmovsd  qword ptr [rdx+r9], xmm0 }
      s_samplePos[_RDX].v[2] = v17;
      __asm
      {
        vmovsd  xmm0, qword ptr [r10]
        vmovsd  qword ptr [rdx+r9+0Ch], xmm0
        vmovsd  xmm0, qword ptr [rax]
      }
      s_samplePos[_RDX].v[5] = _R10->v[2];
      _RDX = 2 * (3 * v15 + 3);
      v21 = _RAX->v[2];
      __asm { vmovsd  qword ptr [rdx+r9], xmm0 }
      s_samplePos[0].v[_RDX + 2] = v21;
      _RAX += 2;
      __asm
      {
        vmovsd  xmm0, qword ptr [r10]
        vmovsd  qword ptr [rdx+r9+0Ch], xmm0
      }
      s_samplePos[0].v[_RDX + 5] = _R10->v[2];
    }
    while ( (__int64)_RAX < (__int64)&s_samplePosDEV[0].pos.z );
  }
  else
  {
    v4 = s_samplePosUsed;
    v5 = s_samplePosUsed;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rax-18h]
        vmovsd  xmm1, qword ptr [rax-8]
      }
      v8 = v5;
      v5 += 2;
      _RCX = 3 * v8;
      __asm
      {
        vmovups xmmword ptr [r9+rcx*8], xmm0
        vmovups xmm0, xmmword ptr [rax]
        vmovsd  qword ptr [r9+rcx*8+10h], xmm1
        vmovsd  xmm1, qword ptr [rax+10h]
      }
      _RCX = 3 * v8;
      _RAX += 2;
      __asm
      {
        vmovups xmmword ptr [r9+rcx*8+18h], xmm0
        vmovsd  qword ptr [r9+rcx*8+28h], xmm1
      }
    }
    while ( (__int64)_RAX < (__int64)&s_samplePosDEV[0].pos.z );
    s_samplePosUsed = v4 + 132;
  }
}

/*
==============
ATClient_TraverseGetAngle
==============
*/
char ATClient_TraverseGetAngle(const int index, vec3_t *angles)
{
  __int64 v2; 

  v2 = index;
  _RBX = angles;
  if ( (unsigned int)index > 9 )
    return 0;
  if ( !angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 520, ASSERT_TYPE_ASSERT, "(angles)", (const char *)&queryFormat, "angles") )
    __debugbreak();
  _RCX = 3 * v2;
  _RAX = s_sampleAngles;
  __asm
  {
    vmovsd  xmm0, qword ptr [rax+rcx*4]
    vmovsd  qword ptr [rbx], xmm0
  }
  _RBX->v[2] = s_sampleAngles[v2].v[2];
  return 1;
}

/*
==============
ATClient_TraverseGetByIndex
==============
*/
char ATClient_TraverseGetByIndex(const int index, vec3_t *pos, vec3_t *angles)
{
  __int64 v3; 

  v3 = index;
  _RSI = angles;
  _RDI = pos;
  if ( index < 0 || index >= s_samplePosUsed )
    return 0;
  if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 504, ASSERT_TYPE_ASSERT, "(pos)", (const char *)&queryFormat, "pos") )
    __debugbreak();
  _RCX = 3 * v3;
  _RDX = s_samplePos;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdx+rcx*8]
    vmovsd  qword ptr [rdi], xmm0
  }
  _RDI->v[2] = s_samplePos[v3].v[2];
  if ( _RSI )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rdx+rcx*8+0Ch]
      vmovsd  qword ptr [rsi], xmm0
    }
    _RSI->v[2] = s_samplePos[v3].v[5];
  }
  return 1;
}

/*
==============
ATClient_TraverseGetRandomAngle
==============
*/

void __fastcall ATClient_TraverseGetRandomAngle(double minPitchDegrees, double maxPitchDegrees, vec3_t *outAngles)
{
  bool v12; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = outAngles;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm0
    vmovaps xmm6, xmm1
  }
  if ( !outAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 440, ASSERT_TYPE_ASSERT, "(outAngles)", (const char *)&queryFormat, "outAngles") )
    __debugbreak();
  __asm
  {
    vsubss  xmm0, xmm6, xmm7
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm0, 1
    vcvttss2si ebx, xmm1
  }
  v12 = _EBX <= 0;
  if ( _EBX < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 443, ASSERT_TYPE_ASSERT, "(pitchSpan >= 0)", (const char *)&queryFormat, "pitchSpan >= 0") )
      __debugbreak();
    v12 = _EBX <= 0;
  }
  if ( !v12 )
    bdRandom::nextUInt(&s_randTraverse);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vaddss  xmm0, xmm0, xmm7; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  bdRandom::nextUInt(&s_randTraverse);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _RDI->v[2] = 0.0;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, r8d
    vmovss  dword ptr [rdi+4], xmm0
  }
}

/*
==============
ATClient_TraverseGetRandomInBounds
==============
*/
void ATClient_TraverseGetRandomInBounds(const vec3_t *boundsMin, const vec3_t *boundsMax, vec3_t *outPos)
{
  unsigned int v5; 
  bool v8; 
  int v13; 
  float v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v25; 
  float v26; 

  _RSI = boundsMax;
  if ( !outPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 457, ASSERT_TYPE_ASSERT, "(outPos)", (const char *)&queryFormat, "outPos") )
    __debugbreak();
  v5 = 0;
  _R15 = (char *)((char *)&v25 - (char *)_RSI);
  _R14 = (char *)((char *)boundsMin - (char *)_RSI);
  v8 = 1;
  do
  {
    if ( !v8 )
    {
      LODWORD(v22) = 3;
      LODWORD(v20) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v22) )
        __debugbreak();
    }
    __asm { vcvttss2si ebp, dword ptr [r14+rsi] }
    if ( v5 >= 3 )
    {
      LODWORD(v22) = 3;
      LODWORD(v20) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v22) )
        __debugbreak();
      LODWORD(v23) = 3;
      LODWORD(v21) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v23) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, dword ptr [r14+rsi]
      vcvttss2si ebx, xmm1
    }
    v13 = _EBP + bdRandom::nextUInt(&s_randTraverse) % _EBX;
    if ( v5 >= 3 )
    {
      LODWORD(v22) = 3;
      LODWORD(v20) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v22) )
        __debugbreak();
    }
    __asm { vcvttss2si eax, dword ptr [rsi] }
    if ( v13 > _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 465, ASSERT_TYPE_ASSERT, "(r <= int( boundsMax[i] ))", (const char *)&queryFormat, "r <= int( boundsMax[i] )") )
      __debugbreak();
    if ( v5 >= 3 )
    {
      LODWORD(v22) = 3;
      LODWORD(v20) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v22) )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmovss  dword ptr [r15+rsi], xmm0
    }
    _RSI = (const vec3_t *)((char *)_RSI + 4);
    v8 = ++v5 < 3;
  }
  while ( (int)v5 < 3 );
  _R13 = outPos;
  __asm { vmovsd  xmm0, [rsp+88h+var_40] }
  v19 = v26;
  __asm { vmovsd  qword ptr [r13+0], xmm0 }
  outPos->v[2] = v19;
}

/*
==============
ATClient_TraverseReset
==============
*/
void ATClient_TraverseReset(void)
{
  s_samplePosUsed = 0;
}

