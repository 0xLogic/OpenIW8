/*
==============
CG_PlayerVisibilityMP_GetCrosshairsTestResultForPlayerWithWait
==============
*/

bool __fastcall CG_PlayerVisibilityMP_GetCrosshairsTestResultForPlayerWithWait(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId, const int clientNum)
{
  return ?CG_PlayerVisibilityMP_GetCrosshairsTestResultForPlayerWithWait@@YA_NW4LocalClientNum_t@@UCgPlayerVisibilityTestRefId@@H@Z(localClientNum, testId, clientNum);
}

/*
==============
CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait
==============
*/

const ClientBits *__fastcall CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId)
{
  return ?CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait@@YAPEBUClientBits@@W4LocalClientNum_t@@UCgPlayerVisibilityTestRefId@@@Z(localClientNum, testId);
}

/*
==============
CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock::~CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock
==============
*/

void __fastcall CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock::~CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock(CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock *this)
{
  ??1CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock@@QEAA@XZ(this);
}

/*
==============
CG_PlayerVisibilityMP_CrosshairsTestCmd
==============
*/

void __fastcall CG_PlayerVisibilityMP_CrosshairsTestCmd(const void *const cmdInfo)
{
  ?CG_PlayerVisibilityMP_CrosshairsTestCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
CG_PlayerVisibilityMP_Init
==============
*/

void __fastcall CG_PlayerVisibilityMP_Init(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerVisibilityMP_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerVisibilityMP_QueueVisibilityTests
==============
*/

void __fastcall CG_PlayerVisibilityMP_QueueVisibilityTests(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerVisibilityMP_QueueVisibilityTests@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerVisibilityMP_Shutdown
==============
*/

void __fastcall CG_PlayerVisibilityMP_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerVisibilityMP_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerVisibilityMP_DebugTest
==============
*/

void __fastcall CG_PlayerVisibilityMP_DebugTest(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerVisibilityMP_DebugTest@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerVisibilityMP_DeregisterCrosshairsTest
==============
*/

CgPlayerVisibilityTestRefId __fastcall CG_PlayerVisibilityMP_DeregisterCrosshairsTest(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId)
{
  return ?CG_PlayerVisibilityMP_DeregisterCrosshairsTest@@YA?AUCgPlayerVisibilityTestRefId@@W4LocalClientNum_t@@U1@@Z(localClientNum, testId);
}

/*
==============
CG_PlayerVisibilityMP_RegisterCrosshairsTest
==============
*/

CgPlayerVisibilityTestRefId __fastcall CG_PlayerVisibilityMP_RegisterCrosshairsTest(const LocalClientNum_t localClientNum, const bool testSameTeam, const bool testEnemyTeam, const float worldSpacePadding, const float extendedPitchAngle, const float extendedYawAngle)
{
  return ?CG_PlayerVisibilityMP_RegisterCrosshairsTest@@YA?AUCgPlayerVisibilityTestRefId@@W4LocalClientNum_t@@_N1MMM@Z(localClientNum, testSameTeam, testEnemyTeam, worldSpacePadding, extendedPitchAngle, extendedYawAngle);
}

/*
==============
CG_PlayerVisibilityMP_WaitForAllWorkers
==============
*/

void CG_PlayerVisibilityMP_WaitForAllWorkers(void)
{
  ?CG_PlayerVisibilityMP_WaitForAllWorkers@@YAXXZ();
}

/*
==============
CG_PlayerVisibilityMP_GetCrosshairsTestResultForPlayer
==============
*/

bool __fastcall CG_PlayerVisibilityMP_GetCrosshairsTestResultForPlayer(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId, const int clientNum)
{
  return ?CG_PlayerVisibilityMP_GetCrosshairsTestResultForPlayer@@YA_NW4LocalClientNum_t@@UCgPlayerVisibilityTestRefId@@H@Z(localClientNum, testId, clientNum);
}

/*
==============
CG_PlayerVisibilityMP_GetCrosshairsTestResult
==============
*/

const ClientBits *__fastcall CG_PlayerVisibilityMP_GetCrosshairsTestResult(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId)
{
  return ?CG_PlayerVisibilityMP_GetCrosshairsTestResult@@YAPEBUClientBits@@W4LocalClientNum_t@@UCgPlayerVisibilityTestRefId@@@Z(localClientNum, testId);
}

/*
==============
CG_PlayerVisibilityMP_UpdateCrosshairsTest
==============
*/

CgPlayerVisibilityTestRefId __fastcall CG_PlayerVisibilityMP_UpdateCrosshairsTest(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId oldTestId, const bool testSameTeam, const bool testEnemyTeam, const float worldSpacePadding, const float extendedPitchAngle, const float extendedYawAngle)
{
  return ?CG_PlayerVisibilityMP_UpdateCrosshairsTest@@YA?AUCgPlayerVisibilityTestRefId@@W4LocalClientNum_t@@U1@_N2MMM@Z(localClientNum, oldTestId, testSameTeam, testEnemyTeam, worldSpacePadding, extendedPitchAngle, extendedYawAngle);
}

/*
==============
CG_PlayerVisibilityMP_CopyCrosshairsTest
==============
*/

CgPlayerVisibilityTestRefId __fastcall CG_PlayerVisibilityMP_CopyCrosshairsTest(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId)
{
  return ?CG_PlayerVisibilityMP_CopyCrosshairsTest@@YA?AUCgPlayerVisibilityTestRefId@@W4LocalClientNum_t@@U1@@Z(localClientNum, testId);
}

/*
==============
CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock::~CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock
==============
*/
void CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock::~CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock(CG_PlayerVisibilityMP_AddRemoveTests_ScopedLock *this)
{
  CgPlayerCrosshairsVisibilityTestGlob *testGlobPtr; 

  testGlobPtr = this->testGlobPtr;
  if ( this->testGlobPtr )
  {
    if ( !testGlobPtr->addRemoveTestLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 189, ASSERT_TYPE_ASSERT, "(testGlob.addRemoveTestLock)", (const char *)&queryFormat, "testGlob.addRemoveTestLock", -2i64) )
      __debugbreak();
    testGlobPtr->addRemoveTestLock = 0;
  }
}

/*
==============
CG_PlayerVisibilityMP_CalcCrosshairsTestPlayerData
==============
*/
void CG_PlayerVisibilityMP_CalcCrosshairsTestPlayerData(const CgPlayerCrosshairsVisibilityParsedCmdData *parsedCmd, const centity_t *const entity, const characterInfo_t *const entityCharacterInfo, const bool isSameTeam, CgPlayerCrosshairsVisibilityPlayerData *outData)
{
  unsigned __int8 friendlyTestsCount; 
  __int64 v14; 
  const SuitDef *SuitDef; 
  bool v16; 
  bool v17; 
  char v26; 
  char v27; 
  unsigned int bounds_radius; 
  bool v30; 
  bool v31; 
  char v34; 
  char v35; 
  bool v37; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 v77; 
  double v78; 
  double v79; 
  double v80; 
  __int64 v81; 
  double v82; 
  CgPlayerCrosshairsVisibilityPlayerData *outDataa; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 507, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entityCharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 508, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
    __debugbreak();
  _RBX = outData;
  DebugWipe(outData, 0x48ui64);
  if ( isSameTeam )
    friendlyTestsCount = parsedCmd->friendlyTestsCount;
  else
    friendlyTestsCount = parsedCmd->enemyTestsCount;
  outData->testCount = friendlyTestsCount;
  if ( friendlyTestsCount )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm10
      vmovaps [rsp+98h+var_48], xmm11
    }
    if ( friendlyTestsCount > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 519, ASSERT_TYPE_ASSERT, "( outData.testCount ) <= ( isSameTeam ? ( sizeof( *array_counter( parsedCmd.friendlyTests ) ) + 0 ) : ( sizeof( *array_counter( parsedCmd.friendlyTests ) ) + 0 ) )", "%s <= %s\n\t%u, %u", "outData.testCount", "isSameTeam ? ARRAY_COUNT( parsedCmd.friendlyTests ) : ARRAY_COUNT( parsedCmd.friendlyTests )", friendlyTestsCount, 8) )
      __debugbreak();
    v14 = 216i64;
    if ( !isSameTeam )
      v14 = 52i64;
    outData->tests = (const CgPlayerCrosshairsVisibilityParsedCmdData::TestData *)((char *)parsedCmd + v14);
    SuitDef = BG_GetSuitDef(entityCharacterInfo->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 523, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    v16 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->nextState.lerp.eFlags, ACTIVE, 4u);
    v17 = !v16;
    if ( !v16 )
      v17 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->nextState.lerp.eFlags, ACTIVE, 3u);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vxorps  xmm10, xmm10, xmm10
      vcomiss xmm1, xmm10
      vmovss  dword ptr [rbx+20h], xmm1
      vxorpd  xmm11, xmm11, xmm11
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+220h]
      vcomiss xmm0, cs:__real@cb800000
      vmovss  dword ptr [rbx+1Ch], xmm0
      vcvttss2si r14d, xmm0
      vcomiss xmm0, cs:__real@4b800000
    }
    if ( v17 )
    {
      v26 = 1;
    }
    else
    {
      v26 = 0;
      v17 = 1;
    }
    __asm
    {
      vcomiss xmm0, cs:__real@cf000000
      vcomiss xmm0, cs:__real@4f000000
    }
    v27 = v17;
    if ( !v26 || !v27 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+98h+var_60], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "int __cdecl float_to_integral_cast<int,float>(float)", (int)_ER14, v78) )
        __debugbreak();
    }
    bounds_radius = SuitDef->bounds_radius;
    v30 = _ER14 < bounds_radius;
    v31 = _ER14 <= bounds_radius;
    if ( _ER14 != bounds_radius )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1Ch]
        vcomiss xmm0, cs:__real@cb800000
        vcvttss2si r14d, xmm0
      }
      if ( v30 )
        goto LABEL_35;
      __asm { vcomiss xmm0, cs:__real@4b800000 }
      if ( !v31 )
      {
LABEL_35:
        v34 = 0;
        v31 = 1;
      }
      else
      {
        v34 = 1;
      }
      __asm
      {
        vcomiss xmm0, cs:__real@cf000000
        vcomiss xmm0, cs:__real@4f000000
      }
      v35 = v31;
      if ( !v34 || !v35 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+98h+var_60], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "int __cdecl float_to_integral_cast<int,float>(float)", _ER14, v79) )
          __debugbreak();
      }
      LODWORD(v81) = bounds_radius;
      LODWORD(v77) = _ER14;
      v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 540, ASSERT_TYPE_ASSERT, "( float_to_integral_cast<int>(outData.radius) ) == ( suitDef->bounds_radius )", "%s == %s\n\t%i, %i", "float_to_integral_cast<int>(outData.radius)", "suitDef->bounds_radius", v77, v81);
      v30 = 0;
      if ( v37 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vcomiss xmm0, xmm10
      vmovaps xmm10, [rsp+98h+var_38]
    }
    if ( v30 )
    {
      __asm
      {
        vmovsd  [rsp+98h+var_58], xmm11
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+98h+var_60], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 541, ASSERT_TYPE_ASSERT, "( outData.radius ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "outData.radius", "0.0f", v80, v82) )
        __debugbreak();
    }
    __asm { vmovaps xmm11, [rsp+98h+var_48] }
    if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( !entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(entity->pose.origin.Get_origin, &entity->pose);
    FunctionPointer_origin(&entity->pose.origin.origin.origin, (vec3_t *)&outData->center);
    if ( entity->pose.isPosePrecise )
    {
      __asm
      {
        vmovsd  xmm3, cs:__real@3f30000000000000
        vmovd   xmm0, dword ptr [rbx+10h]
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm0, xmm0, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovd   xmm0, dword ptr [rbx+14h]
        vcvtdq2pd xmm0, xmm0
        vmovss  dword ptr [rbx+10h], xmm1
        vmulsd  xmm1, xmm0, xmm3
        vmovd   xmm0, dword ptr [rbx+18h]
        vcvtsd2ss xmm2, xmm1, xmm1
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm1, xmm0, xmm3
        vmovss  dword ptr [rbx+14h], xmm2
        vcvtsd2ss xmm2, xmm1, xmm1
        vmovss  dword ptr [rbx+18h], xmm2
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+20h]
      vaddss  xmm1, xmm0, dword ptr [rbx+18h]
      vmovss  dword ptr [rbx+18h], xmm1
      vmovss  xmm0, dword ptr [rbx+10h]
      vsubss  xmm3, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rbx+24h], xmm3
      vmovss  xmm1, dword ptr [rbx+14h]
      vsubss  xmm0, xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rbx+28h], xmm0
      vmovss  xmm2, dword ptr [rbx+18h]
      vsubss  xmm1, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [rbx+2Ch], xmm1
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm1, xmm0
      vmovss  dword ptr [rbx+34h], xmm2
      vsqrtss xmm4, xmm2, xmm2
      vmovss  dword ptr [rbx+30h], xmm4
      vmovss  xmm0, dword ptr [rbx+24h]
      vmovss  xmm1, dword ptr [rbx+28h]
      vmovss  dword ptr [rsp+98h+outData], xmm0
      vmovss  dword ptr [rsp+98h+outData+4], xmm1
    }
    _RBX->viewToEntityXY = (vec2_t)outDataa;
    if ( parsedCmd->viewDirXYIsValid )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+3Ch]
        vmovss  xmm1, dword ptr [rbx+38h]
        vmulss  xmm3, xmm0, dword ptr [rsi+28h]
        vmulss  xmm2, xmm1, dword ptr [rsi+24h]
        vaddss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rbx+40h], xmm0
        vmulss  xmm1, xmm4, dword ptr [rsi+18h]
        vdivss  xmm0, xmm1, dword ptr [rsi+1Ch]
        vmovss  dword ptr [rbx+44h], xmm0
      }
    }
  }
}

/*
==============
CG_PlayerVisibilityMP_CopyCrosshairsTest
==============
*/
__int64 CG_PlayerVisibilityMP_CopyCrosshairsTest(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId)
{
  __int64 v3; 
  CgPlayerCrosshairsVisibilityTestGlob *v4; 
  volatile signed __int32 *p_addRemoveTestLock; 
  unsigned int *p_refCount; 
  int v9; 
  int v10; 
  int v11; 
  CgPlayerCrosshairsVisibilityTestGlob *v12; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 391, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  v4 = &s_crosshairsVisibilityTests[v3];
  if ( !v4->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 392, ASSERT_TYPE_ASSERT, "(s_crosshairsVisibilityTests[localClientNum].isInitialized)", (const char *)&queryFormat, "s_crosshairsVisibilityTests[localClientNum].isInitialized") )
    __debugbreak();
  if ( !CG_PlayerVisibilityMP_TestIdIsValid((const LocalClientNum_t)v3, testId) )
    return *(unsigned __int16 *)&CG_PLAYER_VISIBILITY_INVALID_ID_0;
  v12 = &s_crosshairsVisibilityTests[v3];
  p_addRemoveTestLock = &v4->addRemoveTestLock;
  while ( 1 )
  {
    if ( !*p_addRemoveTestLock )
    {
      if ( ((unsigned __int8)p_addRemoveTestLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v4->addRemoveTestLock) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(p_addRemoveTestLock, 1, 0) )
        break;
    }
    Sys_Sleep(0);
  }
  p_refCount = &v4->tests[testId.id].refCount;
  if ( *p_refCount == -1 )
  {
    v11 = -1;
    v10 = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 402, ASSERT_TYPE_ASSERT, "( r_test.refCount ) < ( 0xffffffffui32 )", "%s < %s\n\t%u, %u", "r_test.refCount", "UINT32_MAX", v10, v11) )
      __debugbreak();
  }
  ++*p_refCount;
  if ( v12 )
  {
    if ( !v12->addRemoveTestLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 189, ASSERT_TYPE_ASSERT, "(testGlob.addRemoveTestLock)", (const char *)&queryFormat, "testGlob.addRemoveTestLock") )
      __debugbreak();
    v12->addRemoveTestLock = 0;
  }
  return *(unsigned __int16 *)&testId;
}

/*
==============
CG_PlayerVisibilityMP_CreateConfigData
==============
*/

CgPlayerCrosshairsVisibilityTest::ConfigData *__fastcall CG_PlayerVisibilityMP_CreateConfigData(CgPlayerCrosshairsVisibilityTest::ConfigData *result, const bool testSameTeam, const bool testEnemyTeam, double worldSpacePadding, const float extendedPitchAngle, const float extendedYawAngle)
{
  CgPlayerCrosshairsVisibilityTest::ConfigData *v41; 
  char v48; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm7
    vmovaps xmmword ptr [r11-28h], xmm9
    vmovaps xmmword ptr [r11-38h], xmm10
  }
  _RSI = result;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm11
    vmovaps xmm11, xmm3
  }
  if ( !testSameTeam && !testEnemyTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 218, ASSERT_TYPE_ASSERT, "(testSameTeam || testEnemyTeam)", (const char *)&queryFormat, "testSameTeam || testEnemyTeam") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000; step
    vmovss  xmm0, [rsp+78h+extendedPitchAngle]; f
  }
  *(double *)&_XMM0 = I_snap(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; val
    vmovss  xmm2, cs:__real@3fc90fdb; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm10, xmm10, xmm10
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000; step
    vmovaps xmm7, xmm0
    vmovss  xmm0, [rsp+78h+extendedYawAngle]; f
  }
  *(double *)&_XMM0 = I_snap(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; val
    vmovss  xmm2, cs:__real@40490fdb; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000; step
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; f
  }
  _RSI->testSameTeam = testSameTeam;
  _RSI->testEnemyTeam = testEnemyTeam;
  *(double *)&_XMM0 = I_snap(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmaxss  xmm1, xmm0, xmm10
    vmovss  dword ptr [rsi+4], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovaps xmm2, xmm7
    vmovss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rsi+8], xmm7
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_();
  __asm
  {
    vmaxss  xmm0, xmm0, xmm10
    vminss  xmm0, xmm0, cs:__real@3f800000
    vmovss  dword ptr [rsi+10h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovaps xmm1, xmm9
    vmovss  xmm0, xmm0, xmm1
    vmovss  dword ptr [rsi+14h], xmm9
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_();
  __asm { vmovaps xmm7, [rsp+78h+var_18] }
  _R11 = &v48;
  v41 = _RSI;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-20h]
    vmovaps xmm11, xmmword ptr [r11-40h]
    vextractps dword ptr [rsi+1Ch], xmm0, 1
    vmaxss  xmm0, xmm0, xmm10
    vminss  xmm1, xmm0, cs:__real@3f800000
    vmovaps xmm10, xmmword ptr [r11-30h]
    vmovss  dword ptr [rsi+18h], xmm1
  }
  return v41;
}

/*
==============
CG_PlayerVisibilityMP_CrosshairsTestCmd
==============
*/
void CG_PlayerVisibilityMP_CrosshairsTestCmd(const void *const cmdInfo)
{
  CgPlayerCrosshairsVisibilityTestGlob *v2; 
  CgGlobalsMP *LocalClientGlobals; 
  __int64 clientNum; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 i; 
  __int64 v9; 
  CgEntitySystem *v10; 
  __int64 v11; 
  const characterInfo_t *v12; 
  team_t team; 
  team_t v14; 
  bool v15; 
  unsigned __int8 v16; 
  unsigned __int8 j; 
  unsigned __int8 nextWriteIndex; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  CgGlobalsMP *v23; 
  const characterInfo_t *CharacterInfo; 
  CgPlayerCrosshairsVisibilityPlayerData outData; 
  CgPlayerCrosshairsVisibilityParsedCmdData parsedCmd; 

  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 749, ASSERT_TYPE_ASSERT, "(cmdInfo)", (const char *)&queryFormat, "cmdInfo") )
    __debugbreak();
  if ( *((_BYTE *)cmdInfo + 28) )
  {
    CG_PlayerVisibilityMP_ParseTestCmd((const CgPlayerVisibilityCrossHairsTestCmd *)cmdInfo, &parsedCmd);
    if ( *(_DWORD *)cmdInfo >= 2u )
    {
      LODWORD(v19) = *(_DWORD *)cmdInfo;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 760, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "cmd->localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", v19, 2) )
        __debugbreak();
    }
    v2 = &s_crosshairsVisibilityTests[*(int *)cmdInfo];
    if ( !v2->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 762, ASSERT_TYPE_ASSERT, "(r_testGlob.isInitialized)", (const char *)&queryFormat, "r_testGlob.isInitialized") )
      __debugbreak();
    if ( v2->nextWriteIndex == v2->readableResultIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 764, ASSERT_TYPE_ASSERT, "( r_testGlob.nextWriteIndex != r_testGlob.readableResultIndex )", "CG_PlayerVisibilityMP_CrosshairsTestCmd: invalid worker cmd management--trying to write to the current readIndex") )
      __debugbreak();
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)*(_DWORD *)cmdInfo);
    v23 = LocalClientGlobals;
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    CharacterInfo = CgGlobalsMP::GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 769, ASSERT_TYPE_ASSERT, "(myCharacterInfo)", (const char *)&queryFormat, "myCharacterInfo") )
      __debugbreak();
    v5 = 0;
    v6 = clientNum;
    v22 = clientNum;
    v7 = 0i64;
    for ( i = 0i64; ; i += 760i64 )
    {
      v21 = i;
      if ( !ComCharacterLimits::ms_isGameDataValid )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v6 = v22;
        i = v21;
      }
      if ( v5 >= (int)ComCharacterLimits::ms_gameData.m_clientCount )
        break;
      if ( v7 != v6 )
      {
        v9 = *(int *)cmdInfo;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v20) = *(_DWORD *)cmdInfo;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v20) )
            __debugbreak();
        }
        if ( (unsigned int)v9 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v20) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v19) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v9] )
        {
          LODWORD(v20) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v20) )
            __debugbreak();
        }
        v10 = CgEntitySystem::ms_entitySystemArray[v9];
        if ( (unsigned int)v5 >= 0x800 )
        {
          LODWORD(v20) = 2048;
          LODWORD(v19) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v11 = (__int64)v10->m_entities + v21;
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 779, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( (*(_BYTE *)(v11 + 648) & 1) != 0 && *(_WORD *)(v11 + 408) == 1 && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v11 + 412), ACTIVE, 0x11u) )
        {
          v12 = CgGlobalsMP::GetCharacterInfo(LocalClientGlobals, v5);
          team = v12->team;
          v14 = CharacterInfo->team;
          if ( v23 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
            __debugbreak();
          if ( v11 == -400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
            __debugbreak();
          v15 = v14 && v14 == team;
          CG_PlayerVisibilityMP_CalcCrosshairsTestPlayerData(&parsedCmd, (const centity_t *const)v11, v12, v15, &outData);
          if ( outData.testCount )
            CG_PlayerVisibilityMP_CrosshairsTestForPlayer(v5, v2, &parsedCmd, &outData);
          memset(&outData.viewToEntity, 0, sizeof(outData.viewToEntity));
          LocalClientGlobals = v23;
          memset(&outData.center, 0, sizeof(outData.center));
        }
        i = v21;
        v6 = v22;
      }
      ++v5;
      ++v7;
    }
    v16 = *((_BYTE *)cmdInfo + 28);
    if ( v16 > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 806, ASSERT_TYPE_ASSERT, "( cmd->testCount ) <= ( ( sizeof( *array_counter( cmd->tests ) ) + 0 ) )", "%s <= %s\n\t%u, %u", "cmd->testCount", "ARRAY_COUNT( cmd->tests )", v16, 8) )
      __debugbreak();
    for ( j = 0; j < *((_BYTE *)cmdInfo + 28); ++j )
      CG_PlayerVisibilityMP_DeregisterCrosshairsTest(*(const LocalClientNum_t *)cmdInfo, *(const CgPlayerVisibilityTestRefId *)((char *)cmdInfo + 2 * j + 29));
    nextWriteIndex = v2->nextWriteIndex;
    v2->readableResultIndex = nextWriteIndex;
    v2->nextWriteIndex = (nextWriteIndex - 1) & 1;
    memset(&parsedCmd, 0, 0xCui64);
  }
}

/*
==============
CG_PlayerVisibilityMP_CrosshairsTestForPlayer
==============
*/
void CG_PlayerVisibilityMP_CrosshairsTestForPlayer(const unsigned int clientNum, CgPlayerCrosshairsVisibilityTestGlob *testGlob, const CgPlayerCrosshairsVisibilityParsedCmdData *parsedCmd, const CgPlayerCrosshairsVisibilityPlayerData *playerData)
{
  unsigned __int8 v11; 
  unsigned __int64 v12; 
  unsigned __int8 testId; 
  bool v21; 
  char *v55; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  void *retaddr; 

  _RAX = &retaddr;
  v11 = 0;
  v12 = clientNum;
  _RBX = playerData;
  if ( playerData->testCount )
  {
    __asm
    {
      vmovaps xmmword ptr [rax-58h], xmm8
      vmovaps xmmword ptr [rax-68h], xmm9
      vmovaps xmmword ptr [rax-78h], xmm10
      vmovaps [rsp+0D8h+var_88], xmm11
      vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps xmmword ptr [rax-38h], xmm6
      vmovaps xmmword ptr [rax-48h], xmm7
      vxorps  xmm9, xmm9, xmm9
      vxorpd  xmm10, xmm10, xmm10
    }
    do
    {
      _RDI = 5i64 * v11;
      testId = _RBX->tests[v11].testId;
      if ( testId >= 8u )
      {
        LODWORD(v63) = 8;
        LODWORD(v62) = testId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 566, ASSERT_TYPE_ASSERT, "(unsigned)( playerData.tests[playerTestIdx].testId ) < (unsigned)( ( sizeof( *array_counter( testGlob.tests ) ) + 0 ) )", "playerData.tests[playerTestIdx].testId doesn't index testGlob.tests\n\t%i not in [0, %i)", v62, v63) )
          __debugbreak();
      }
      v21 = !parsedCmd->viewDirXYIsValid;
      _RSI = &testGlob->tests[_RBX->tests[v11].testId];
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vaddss  xmm3, xmm0, dword ptr [rbx+1Ch]
        vaddss  xmm8, xmm0, dword ptr [rbx+20h]
      }
      if ( parsedCmd->viewDirXYIsValid )
      {
        __asm
        {
          vcomiss xmm9, dword ptr [rsi+24h]
          vxorps  xmm0, xmm3, xmm11
        }
        if ( parsedCmd->viewDirXYIsValid )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+40h]
            vmulss  xmm2, xmm1, dword ptr [rsi+20h]
            vcomiss xmm2, xmm0
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm2, dword ptr [rbx+40h]
            vcomiss xmm2, xmm0
            vmovss  xmm0, dword ptr [rbx+34h]
            vmulss  xmm1, xmm2, xmm2
            vsubss  xmm7, xmm0, xmm1
            vmulss  xmm1, xmm2, dword ptr [rsi+20h]
            vaddss  xmm6, xmm1, xmm3
            vcomiss xmm6, xmm9
            vmovss  xmm0, dword ptr [rsi+24h]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm7
            vmulss  xmm2, xmm6, xmm6
            vcomiss xmm2, xmm3
          }
          v21 = 0;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+2Ch]
          vcomiss xmm0, dword ptr [rbx+44h]
        }
        _RAX = _RBX->tests;
        __asm
        {
          vmovss  xmm2, dword ptr [rax+rdi*4+8]
          vcomiss xmm2, xmm9
        }
        if ( !v21 )
        {
          __asm
          {
            vsubss  xmm3, xmm0, xmm8
            vmovss  xmm0, dword ptr [rax+rdi*4+4]
            vmulss  xmm1, xmm0, dword ptr [rbx+30h]
            vdivss  xmm2, xmm1, xmm2
            vcomiss xmm2, xmm3
          }
        }
        bitarray_base<bitarray<224>>::setBit(&_RSI->results[testGlob->nextWriteIndex], v12);
      }
      else
      {
        __asm
        {
          vsubss  xmm2, xmm8, dword ptr [rbx+2Ch]
          vaddss  xmm1, xmm8, dword ptr [rbx+2Ch]
          vcmpltss xmm0, xmm9, dword ptr [r12+0Ch]
          vblendvps xmm4, xmm2, xmm1, xmm0
          vcomiss xmm4, xmm9
          vmovss  [rsp+0D8h+arg_18], xmm4
          vmovss  xmm0, dword ptr [rsi+18h]
          vmulss  xmm2, xmm0, dword ptr [rbx+30h]
          vmulss  xmm1, xmm4, dword ptr [rsi+14h]
          vmulss  xmm0, xmm0, xmm3
          vaddss  xmm1, xmm1, xmm0
          vcomiss xmm1, xmm2
        }
        v55 = (char *)_RSI + 28 * testGlob->nextWriteIndex;
        if ( (unsigned int)v12 >= 0xE0 )
        {
          LODWORD(v65) = 224;
          LODWORD(v64) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v64, v65) )
            __debugbreak();
        }
        *(_DWORD *)&v55[4 * (v12 >> 5) + 40] |= 0x80000000 >> (v12 & 0x1F);
      }
      ++v11;
    }
    while ( v11 < _RBX->testCount );
    __asm
    {
      vmovaps xmm11, [rsp+0D8h+var_88]
      vmovaps xmm10, [rsp+0D8h+var_78]
      vmovaps xmm9, [rsp+0D8h+var_68]
      vmovaps xmm8, [rsp+0D8h+var_58]
      vmovaps xmm7, [rsp+0D8h+var_48]
      vmovaps xmm6, [rsp+0D8h+var_38]
    }
  }
}

/*
==============
CG_PlayerVisibilityMP_DebugTest
==============
*/
void CG_PlayerVisibilityMP_DebugTest(const LocalClientNum_t localClientNum)
{
  __int64 v4; 
  __int64 v5; 
  const dvar_t *v6; 
  __int64 v7; 
  __int64 v8; 
  CgPlayerVisibilityTestRefId *v9; 
  unsigned int v10; 
  CgPlayerVisibilityTestRefId v11; 
  const dvar_t *v12; 
  CgPlayerVisibilityTestRefId v13; 
  CgPlayerVisibilityTestRefId v14; 
  const ClientBits *CrosshairsTestResult; 
  const ClientBits *v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  CgEntitySystem *v21; 
  __int64 v22; 
  CgPlayerVisibilityTestRefId updated; 
  CgPlayerVisibilityTestRefId v30; 
  __int64 v34; 
  __int64 v35; 
  float fmt; 
  float fmta; 
  __int64 extendedPitchAngle; 
  float extendedPitchAnglea; 
  float extendedPitchAngleb; 
  __int64 extendedYawAngle; 
  float extendedYawAnglea; 
  float extendedYawAngleb; 
  bool enabled; 
  unsigned int v48; 
  CgPlayerVisibilityTestRefId *v49; 

  v4 = localClientNum;
  v5 = 2i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 874, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_testId ) ) + 0 ) )", "localClientNum doesn't index s_testId\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v6 = DCONST_DVARBOOL_cg_player_visibility_test_active;
  if ( !DCONST_DVARBOOL_cg_player_visibility_test_active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_player_visibility_test_active") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v4;
  v8 = v4;
  if ( v6->current.enabled )
  {
    v9 = s_testId[v4];
    __asm
    {
      vmovaps [rsp+0B8h+var_58], xmm6
      vmovaps [rsp+0B8h+var_68], xmm7
    }
    v10 = 0;
    __asm { vmovaps [rsp+0B8h+var_78], xmm8 }
    v48 = 0;
    v49 = v9;
    do
    {
      v11 = *v9;
      if ( v9->id != 0xFF )
      {
        if ( v11.id >= 8u )
        {
          LODWORD(extendedYawAngle) = 8;
          LODWORD(extendedPitchAngle) = v11.id;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( testId.id ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests[localClientNum].tests ) ) + 0 ) )", "testId.id doesn't index s_crosshairsVisibilityTests[localClientNum].tests\n\t%i not in [0, %i)", extendedPitchAngle, extendedYawAngle) )
            __debugbreak();
          v10 = v48;
        }
        if ( s_crosshairsVisibilityTests[v8].tests[v11.id].generation == v11.generation )
        {
          v12 = DCONST_DVARBOOL_cg_player_visibility_test_getResultWithWait;
          if ( !DCONST_DVARBOOL_cg_player_visibility_test_getResultWithWait && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_player_visibility_test_getResultWithWait") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v12);
          enabled = v12->current.enabled;
          if ( enabled )
          {
            v13 = *v9;
            if ( Sys_IsAnyWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 857, ASSERT_TYPE_ASSERT, "(!Sys_IsAnyWorkerContext())", (const char *)&queryFormat, "!Sys_IsAnyWorkerContext()") )
              __debugbreak();
            Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_PLAYER_VISIBILITY_CROSSHAIRS_TEST);
            v14 = v13;
          }
          else
          {
            v14 = s_testId[v7][v48];
          }
          CrosshairsTestResult = CG_PlayerVisibilityMP_GetCrosshairsTestResult((const LocalClientNum_t)v4, v14);
          v16 = CrosshairsTestResult;
          if ( CrosshairsTestResult )
          {
            v17 = CrosshairsTestResult->array[0];
            LODWORD(v18) = 0;
            while ( v17 )
            {
LABEL_29:
              v19 = __lzcnt(v17);
              v20 = v19 + 32 * v18;
              if ( v19 >= 0x20 )
              {
                LODWORD(extendedYawAngle) = 32;
                LODWORD(extendedPitchAngle) = v19;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", extendedPitchAngle, extendedYawAngle) )
                  __debugbreak();
              }
              if ( (v17 & (0x80000000 >> v19)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
                __debugbreak();
              v17 &= ~(0x80000000 >> v19);
              if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
              {
                LODWORD(extendedYawAngle) = v4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", extendedYawAngle) )
                  __debugbreak();
              }
              if ( (unsigned int)v4 >= CgEntitySystem::ms_allocatedCount )
              {
                LODWORD(extendedYawAngle) = CgEntitySystem::ms_allocatedCount;
                LODWORD(extendedPitchAngle) = v4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", extendedPitchAngle, extendedYawAngle) )
                  __debugbreak();
              }
              if ( !CgEntitySystem::ms_entitySystemArray[v4] )
              {
                LODWORD(extendedYawAngle) = v4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", extendedYawAngle) )
                  __debugbreak();
              }
              v21 = CgEntitySystem::ms_entitySystemArray[v4];
              if ( v20 >= 0x800 )
              {
                LODWORD(extendedYawAngle) = 2048;
                LODWORD(extendedPitchAngle) = v19 + 32 * v18;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", extendedPitchAngle, extendedYawAngle) )
                  __debugbreak();
              }
              v22 = (__int64)&v21->m_entities[v20];
              if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 895, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
                __debugbreak();
              if ( (*(_BYTE *)(v22 + 648) & 1) != 0 && *(_WORD *)(v22 + 408) == 1 )
              {
                CG_DrawDebugMP_DrawBoxAroundPlayer((const LocalClientNum_t)v4, (const centity_t *const)v22, &colorRed, 0, 0);
              }
              else if ( enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 898, ASSERT_TYPE_ASSERT, "(!waitForResult)", (const char *)&queryFormat, "!waitForResult") )
              {
                __debugbreak();
              }
            }
            while ( 1 )
            {
              v18 = (unsigned int)(v18 + 1);
              if ( (unsigned int)v18 >= 7 )
                break;
              v17 = v16->array[v18];
              if ( v17 )
                goto LABEL_29;
            }
            v7 = v4;
            v8 = v4;
            v9 = v49;
          }
          v10 = v48;
        }
      }
      ++v10;
      ++v9;
      v48 = v10;
      v49 = v9;
    }
    while ( v10 < 2 );
    _RBX = DCONST_DVARFLT_cg_player_visibility_test_worldspacePadding;
    if ( !DCONST_DVARFLT_cg_player_visibility_test_worldspacePadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_player_visibility_test_worldspacePadding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm8, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_cg_player_visibility_test_extendedPitchAngle;
    if ( !DCONST_DVARFLT_cg_player_visibility_test_extendedPitchAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_player_visibility_test_extendedPitchAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_cg_player_visibility_test_extendedYawAngle;
    if ( !DCONST_DVARFLT_cg_player_visibility_test_extendedYawAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_player_visibility_test_extendedYawAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+28h]
      vmovss  [rsp+0B8h+extendedYawAngle], xmm6
      vmovss  [rsp+0B8h+extendedPitchAngle], xmm7
      vmovss  dword ptr [rsp+0B8h+fmt], xmm8
    }
    updated = CG_PlayerVisibilityMP_UpdateCrosshairsTest((const LocalClientNum_t)v4, s_testId[v8][0], 0, 1, fmt, extendedPitchAnglea, extendedYawAnglea);
    v30 = s_testId[v8][1];
    __asm
    {
      vmovss  [rsp+0B8h+extendedYawAngle], xmm6
      vmovss  [rsp+0B8h+extendedPitchAngle], xmm7
    }
    s_testId[v8][0] = updated;
    __asm
    {
      vmovss  dword ptr [rsp+0B8h+fmt], xmm8
      vmovaps xmm8, [rsp+0B8h+var_78]
      vmovaps xmm7, [rsp+0B8h+var_68]
      vmovaps xmm6, [rsp+0B8h+var_58]
    }
    s_testId[v8][1] = CG_PlayerVisibilityMP_UpdateCrosshairsTest((const LocalClientNum_t)v4, v30, 1, 0, fmta, extendedPitchAngleb, extendedYawAngleb);
  }
  else
  {
    v34 = 0i64;
    v35 = 0i64;
    do
    {
      s_testId[v7][v34] = CG_PlayerVisibilityMP_DeregisterCrosshairsTest((const LocalClientNum_t)v4, s_testId[0][v35 + v7 * 2]);
      ++v35;
      ++v34;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
CG_PlayerVisibilityMP_DeregisterCrosshairsTest
==============
*/
__int64 CG_PlayerVisibilityMP_DeregisterCrosshairsTest(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId)
{
  unsigned __int8 id; 
  __int64 v3; 
  __int64 v4; 
  CgPlayerCrosshairsVisibilityTestGlob *v5; 
  unsigned __int64 v7; 
  unsigned __int8 v8; 
  volatile signed __int32 *p_addRemoveTestLock; 
  __int64 v11; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  unsigned __int8 generation; 

  generation = testId.generation;
  id = testId.id;
  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v14 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 333, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", localClientNum, v14) )
      __debugbreak();
  }
  v4 = v3;
  v5 = &s_crosshairsVisibilityTests[v3];
  if ( !v5->isInitialized || id == 0xFF )
    return *(unsigned __int16 *)&CG_PLAYER_VISIBILITY_INVALID_ID_0;
  if ( id >= 8u )
  {
    LODWORD(v13) = 8;
    LODWORD(v11) = id;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( testId.id ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests[localClientNum].tests ) ) + 0 ) )", "testId.id doesn't index s_crosshairsVisibilityTests[localClientNum].tests\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v7 = id;
  v8 = s_crosshairsVisibilityTests[v4].tests[v7].generation;
  if ( v8 != generation )
  {
    LODWORD(v13) = v8;
    LODWORD(v11) = generation;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 347, ASSERT_TYPE_ASSERT, "( CG_PlayerVisibilityMP_TestIdIsValid(localClientNum, testId) )", "CG_PlayerVisibilityMP_DeregisterCrosshairsTest: invalid (out of date) testId with generation (%i). Expected (%i).", v11, v13) )
      __debugbreak();
  }
  p_addRemoveTestLock = &v5->addRemoveTestLock;
  while ( 1 )
  {
    if ( !*p_addRemoveTestLock )
    {
      if ( ((unsigned __int8)p_addRemoveTestLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v5->addRemoveTestLock) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(p_addRemoveTestLock, 1, 0) )
        break;
    }
    Sys_Sleep(0);
  }
  if ( !v5->tests[v7].refCount )
  {
    v16 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 353, ASSERT_TYPE_ASSERT, "( r_test.refCount ) > ( 0 )", "%s > %s\n\t%u, %u", "r_test.refCount", "0", v16, 0i64) )
      __debugbreak();
  }
  if ( v5->tests[v7].refCount-- == 1 )
  {
    if ( !v5->registeredTestCount )
    {
      LODWORD(v15) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 358, ASSERT_TYPE_ASSERT, "( r_testGlob.registeredTestCount ) > ( 0 )", "%s > %s\n\t%u, %u", "r_testGlob.registeredTestCount", "0", v15, 0i64) )
        __debugbreak();
    }
    --v5->registeredTestCount;
  }
  if ( v5 )
  {
    if ( !v5->addRemoveTestLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 189, ASSERT_TYPE_ASSERT, "(testGlob.addRemoveTestLock)", (const char *)&queryFormat, "testGlob.addRemoveTestLock") )
      __debugbreak();
    v5->addRemoveTestLock = 0;
  }
  return *(unsigned __int16 *)&CG_PLAYER_VISIBILITY_INVALID_ID_0;
}

/*
==============
CG_PlayerVisibilityMP_GetCrosshairsTestResult
==============
*/
const ClientBits *CG_PlayerVisibilityMP_GetCrosshairsTestResult(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId)
{
  __int64 v2; 
  unsigned __int8 id; 
  __int64 v4; 
  __int64 v5; 
  CgPlayerCrosshairsVisibilityTestGlob *v6; 
  unsigned __int8 readableResultIndex; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  unsigned __int8 generation; 

  generation = testId.generation;
  v2 = localClientNum;
  id = testId.id;
  if ( testId.id == 0xFF )
    return 0i64;
  if ( testId.id >= 8u )
  {
    v12 = 8;
    v10 = testId.id;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( testId.id ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests[localClientNum].tests ) ) + 0 ) )", "testId.id doesn't index s_crosshairsVisibilityTests[localClientNum].tests\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v4 = v2;
  v5 = id;
  if ( s_crosshairsVisibilityTests[v2].tests[v5].generation != generation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 827, ASSERT_TYPE_ASSERT, "(CG_PlayerVisibilityMP_TestIdIsValid( localClientNum, testId ))", (const char *)&queryFormat, "CG_PlayerVisibilityMP_TestIdIsValid( localClientNum, testId )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v11) = 2;
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 829, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  v6 = &s_crosshairsVisibilityTests[v4];
  if ( !s_crosshairsVisibilityTests[v4].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 831, ASSERT_TYPE_ASSERT, "(r_testGlob.isInitialized)", (const char *)&queryFormat, "r_testGlob.isInitialized") )
    __debugbreak();
  readableResultIndex = v6->readableResultIndex;
  if ( readableResultIndex == 0xFF )
    return 0i64;
  if ( readableResultIndex >= 2u )
  {
    LODWORD(v11) = 2;
    LODWORD(v9) = readableResultIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 838, ASSERT_TYPE_ASSERT, "(unsigned)( r_testGlob.readableResultIndex ) < (unsigned)( ( sizeof( *array_counter( r_testGlob.tests[testId.id].results ) ) + 0 ) )", "r_testGlob.readableResultIndex doesn't index r_testGlob.tests[testId.id].results\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  return (ClientBits *)((char *)&v6->tests[0].results[v6->readableResultIndex] + v5 * 96);
}

/*
==============
CG_PlayerVisibilityMP_GetCrosshairsTestResultForPlayer
==============
*/
bool CG_PlayerVisibilityMP_GetCrosshairsTestResultForPlayer(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId, const int clientNum)
{
  unsigned __int64 v3; 
  const ClientBits *CrosshairsTestResult; 
  const ClientBits *v5; 
  int v7; 
  int v8; 

  v3 = (unsigned int)clientNum;
  CrosshairsTestResult = CG_PlayerVisibilityMP_GetCrosshairsTestResult(localClientNum, testId);
  v5 = CrosshairsTestResult;
  if ( CrosshairsTestResult )
  {
    if ( (unsigned int)v3 >= 0xE0 )
    {
      v8 = 224;
      v7 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
        __debugbreak();
    }
    LOBYTE(CrosshairsTestResult) = ((0x80000000 >> (v3 & 0x1F)) & v5->array[v3 >> 5]) != 0;
  }
  return (char)CrosshairsTestResult;
}

/*
==============
CG_PlayerVisibilityMP_GetCrosshairsTestResultForPlayerWithWait
==============
*/
bool CG_PlayerVisibilityMP_GetCrosshairsTestResultForPlayerWithWait(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId, const int clientNum)
{
  unsigned __int64 v3; 
  const ClientBits *CrosshairsTestResult; 
  const ClientBits *v7; 
  __int64 v9; 
  int v10; 

  v3 = (unsigned int)clientNum;
  if ( Sys_IsAnyWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 865, ASSERT_TYPE_ASSERT, "(!Sys_IsAnyWorkerContext())", (const char *)&queryFormat, "!Sys_IsAnyWorkerContext()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_PLAYER_VISIBILITY_CROSSHAIRS_TEST);
  CrosshairsTestResult = CG_PlayerVisibilityMP_GetCrosshairsTestResult(localClientNum, testId);
  v7 = CrosshairsTestResult;
  if ( CrosshairsTestResult )
  {
    if ( (unsigned int)v3 >= 0xE0 )
    {
      v10 = 224;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, v10) )
        __debugbreak();
    }
    LOBYTE(CrosshairsTestResult) = ((0x80000000 >> (v3 & 0x1F)) & v7->array[v3 >> 5]) != 0;
  }
  return (char)CrosshairsTestResult;
}

/*
==============
CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait
==============
*/
const ClientBits *CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId)
{
  if ( Sys_IsAnyWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 857, ASSERT_TYPE_ASSERT, "(!Sys_IsAnyWorkerContext())", (const char *)&queryFormat, "!Sys_IsAnyWorkerContext()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_PLAYER_VISIBILITY_CROSSHAIRS_TEST);
  return CG_PlayerVisibilityMP_GetCrosshairsTestResult(localClientNum, testId);
}

/*
==============
CG_PlayerVisibilityMP_Init
==============
*/
void CG_PlayerVisibilityMP_Init(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  int v5; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  v2 = v1;
  v3 = v1;
  *(_WORD *)&s_crosshairsVisibilityTests[v3].readableResultIndex = 255;
  s_crosshairsVisibilityTests[v3].registeredTestCount = 0;
  memset_0(s_crosshairsVisibilityTests[v3].tests, 0, sizeof(s_crosshairsVisibilityTests[v3].tests));
  s_crosshairsVisibilityTests[v3].isInitialized = 1;
  s_crosshairsVisibilityTests[v3].addRemoveTestLock = 0;
  s_testId[v2][0] = CG_PLAYER_VISIBILITY_INVALID_ID_0;
  s_testId[v2][1] = CG_PLAYER_VISIBILITY_INVALID_ID_0;
}

/*
==============
CG_PlayerVisibilityMP_ParseTestCmd
==============
*/
void CG_PlayerVisibilityMP_ParseTestCmd(const CgPlayerVisibilityCrossHairsTestCmd *cmd, CgPlayerCrosshairsVisibilityParsedCmdData *parsedCmd)
{
  bool v8; 
  __int64 localClientNum; 
  unsigned __int8 v28; 
  const char *v29; 
  CgPlayerCrosshairsVisibilityTest::ConfigData *p_config; 
  const ObfuscateErrorText *v31; 
  __int64 v32; 
  CgPlayerVisibilityTestRefId v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned __int8 enemyTestsCount; 
  unsigned __int8 friendlyTestsCount; 
  __int64 v59; 
  __int64 v60; 
  __int128 v61; 
  float v62; 
  __int64 v63; 
  int v64; 

  _RDI = parsedCmd;
  _RSI = cmd;
  DebugWipe(parsedCmd, 0x178ui64);
  if ( _RSI->localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 463, ASSERT_TYPE_ASSERT, "(unsigned)( cmd.localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "cmd.localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", _RSI->localClientNum, 2) )
    __debugbreak();
  localClientNum = _RSI->localClientNum;
  v8 = (unsigned __int128)(776 * (__int128)(int)_RSI->localClientNum) >> 64 != 0;
  _RDI->viewOrigin.x = _RSI->viewOrigin.x;
  _RDI->viewOrigin.y = _RSI->viewOrigin.y;
  _RDI->viewOrigin.z = _RSI->viewOrigin.z;
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+10h]
    vmovss  dword ptr [rdi+10h], xmm1
  }
  _RDI->viewDir.v[1] = _RSI->viewDir.y;
  _RDI->viewDir.v[2] = _RSI->viewDir.z;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm4, xmm1, xmm1
    vcvtss2sd xmm0, xmm4, xmm4
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vmovss  dword ptr [rdi+1Ch], xmm4
  }
  _RDI->viewDirXYIsValid = !v8;
  if ( v8 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+0F8h+var_98], xmm0
      vmovss  dword ptr [rsp+0F8h+var_98+4], xmm0
      vmovss  [rsp+0F8h+var_90], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm1, xmm0, xmm4
      vmulss  xmm3, xmm1, dword ptr [rdi+10h]
      vmulss  xmm2, xmm1, dword ptr [rdi+14h]
      vxorps  xmm0, xmm0, xmm0
      vunpcklps xmm1, xmm3, xmm2
      vmovss  dword ptr [rsp+0F8h+var_B0+8], xmm0
      vmovsd  [rsp+0F8h+var_98], xmm1
    }
    v64 = DWORD2(v61);
  }
  _RAX = &v63;
  __asm { vmovsd  xmm0, qword ptr [rax] }
  LODWORD(_RAX) = v64;
  __asm { vmovsd  qword ptr [rdi+24h], xmm0 }
  LODWORD(_RDI->viewDirXY.v[2]) = (_DWORD)_RAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]; Y
    vmovaps xmm1, xmm4; X
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  v28 = 0;
  _RDI->enemyTestsCount = 0;
  __asm { vmovss  dword ptr [rdi+0Ch], xmm0 }
  _RDI->friendlyTestsCount = 0;
  if ( _RSI->testCount )
  {
    v29 = "CG_PlayerVisibilityMP_TestIdIsValid( cmd.localClientNum, cmd.tests[cmdIndex] )";
    p_config = &s_crosshairsVisibilityTests[localClientNum].tests[0].config;
    __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
    v31 = &queryFormat;
    __asm
    {
      vmovaps [rsp+0F8h+var_58], xmm7
      vmovaps [rsp+0F8h+var_68], xmm8
      vmovaps [rsp+0F8h+var_78], xmm9
    }
    do
    {
      v32 = _RSI->localClientNum;
      v33 = _RSI->tests[v28];
      if ( v33.id == 0xFF )
        goto LABEL_31;
      if ( v33.id >= 8u )
      {
        LODWORD(v60) = 8;
        LODWORD(v59) = v33.id;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( testId.id ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests[localClientNum].tests ) ) + 0 ) )", "testId.id doesn't index s_crosshairsVisibilityTests[localClientNum].tests\n\t%i not in [0, %i)", v59, v60) )
          __debugbreak();
        v31 = &queryFormat;
        v29 = "CG_PlayerVisibilityMP_TestIdIsValid( cmd.localClientNum, cmd.tests[cmdIndex] )";
      }
      v34 = 96i64 * v33.id;
      v35 = v34 + 776 * v32;
      if ( *(&s_crosshairsVisibilityTests[0].tests[0].generation + v35) != v33.generation )
      {
LABEL_31:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 479, ASSERT_TYPE_ASSERT, "(CG_PlayerVisibilityMP_TestIdIsValid( cmd.localClientNum, cmd.tests[cmdIndex] ))", (const char *)&queryFormat, "CG_PlayerVisibilityMP_TestIdIsValid( cmd.localClientNum, cmd.tests[cmdIndex] )") )
          __debugbreak();
      }
      __asm { vmovss  xmm7, dword ptr [rdi+0Ch] }
      LOBYTE(v61) = _RSI->tests[v28].id;
      _RBX = &p_config[3 * (unsigned __int8)v61];
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+8]
        vaddss  xmm0, xmm6, xmm7
      }
      *(double *)&_XMM0 = j___libm_sse2_sincosf_(v34, v35, v29, v31);
      __asm
      {
        vmovups xmm8, xmm0
        vshufps xmm9, xmm0, xmm0, 1
        vsubss  xmm0, xmm7, xmm6
      }
      *(double *)&_XMM0 = j___libm_sse2_sincosf_(v44, v43, v45, v46);
      __asm
      {
        vmovups xmm6, [rsp+0F8h+var_B0]
        vinsertps xmm6, xmm6, xmm8, 10h
        vinsertps xmm6, xmm6, xmm9, 20h ; ' '
        vinsertps xmm6, xmm6, xmm0, 30h ; '0'
        vextractps [rsp+0F8h+var_A0], xmm0, 1
        vmovups [rsp+0F8h+var_B0], xmm6
      }
      if ( _RBX->testEnemyTeam )
      {
        enemyTestsCount = _RDI->enemyTestsCount;
        if ( enemyTestsCount >= 8u )
        {
          LODWORD(v60) = 8;
          LODWORD(v59) = enemyTestsCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 491, ASSERT_TYPE_ASSERT, "(unsigned)( parsedCmd.enemyTestsCount ) < (unsigned)( ( sizeof( *array_counter( parsedCmd.enemyTests ) ) + 0 ) )", "parsedCmd.enemyTestsCount doesn't index parsedCmd.enemyTests\n\t%i not in [0, %i)", v59, v60) )
            __debugbreak();
        }
        _RCX = _RDI->enemyTestsCount;
        __asm { vmovups xmmword ptr [rdi+rcx*4+34h], xmm6 }
        _RDI->enemyTests[_RCX].cosViewPitchMinusExtended = v62;
        ++_RDI->enemyTestsCount;
      }
      if ( _RBX->testSameTeam )
      {
        friendlyTestsCount = _RDI->friendlyTestsCount;
        if ( friendlyTestsCount >= 8u )
        {
          LODWORD(v60) = 8;
          LODWORD(v59) = friendlyTestsCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 497, ASSERT_TYPE_ASSERT, "(unsigned)( parsedCmd.friendlyTestsCount ) < (unsigned)( ( sizeof( *array_counter( parsedCmd.friendlyTests ) ) + 0 ) )", "parsedCmd.friendlyTestsCount doesn't index parsedCmd.friendlyTests\n\t%i not in [0, %i)", v59, v60) )
            __debugbreak();
        }
        _RCX = _RDI->friendlyTestsCount;
        __asm { vmovups xmmword ptr [rdi+rcx*4+0D8h], xmm6 }
        _RDI->friendlyTests[_RCX].cosViewPitchMinusExtended = v62;
        ++_RDI->friendlyTestsCount;
      }
      ++v28;
      v29 = "CG_PlayerVisibilityMP_TestIdIsValid( cmd.localClientNum, cmd.tests[cmdIndex] )";
      v31 = &queryFormat;
    }
    while ( v28 < _RSI->testCount );
    __asm
    {
      vmovaps xmm9, [rsp+0F8h+var_78]
      vmovaps xmm8, [rsp+0F8h+var_68]
      vmovaps xmm7, [rsp+0F8h+var_58]
      vmovaps xmm6, [rsp+0F8h+var_48]
    }
  }
}

/*
==============
CG_PlayerVisibilityMP_QueueVisibilityTests
==============
*/
void CG_PlayerVisibilityMP_QueueVisibilityTests(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned __int64 v2; 
  CgPlayerCrosshairsVisibilityTestGlob *v3; 
  volatile signed __int32 *p_addRemoveTestLock; 
  unsigned int refdefViewOrg_aab; 
  char v10; 
  unsigned __int8 v11; 
  unsigned int *p_refCount; 
  signed __int64 v13; 
  char *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int16 v19; 
  __int64 v20; 
  CgPlayerCrosshairsVisibilityTestGlob *v21; 
  int mem[7]; 
  unsigned __int8 v23; 
  __int16 v24[9]; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 411, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 412, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 776 * v1;
  v20 = v1;
  v3 = &s_crosshairsVisibilityTests[v1];
  if ( !v3->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(s_crosshairsVisibilityTests[localClientNum].isInitialized)", (const char *)&queryFormat, "s_crosshairsVisibilityTests[localClientNum].isInitialized") )
    __debugbreak();
  v21 = &s_crosshairsVisibilityTests[v1];
  p_addRemoveTestLock = &v3->addRemoveTestLock;
  while ( 1 )
  {
    if ( !*p_addRemoveTestLock )
    {
      if ( ((unsigned __int8)p_addRemoveTestLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v3->addRemoveTestLock) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(p_addRemoveTestLock, 1, 0) )
        break;
    }
    Sys_Sleep(0);
  }
  if ( v3->registeredTestCount )
  {
    if ( v3->nextWriteIndex == v3->readableResultIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 422, ASSERT_TYPE_ASSERT, "( r_testGlob.nextWriteIndex != r_testGlob.readableResultIndex )", "CG_PlayerVisibilityMP_CrosshairsTestCmd: invalid worker cmd management--trying to write to the current readIndex") )
      __debugbreak();
    _R14 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v1);
    if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 425, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    DebugWipe(mem, 0x30ui64);
    mem[0] = v1;
    if ( _R14 == (CgGlobalsMP *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = _R14->refdef.view.refdefViewOrg_aab;
    if ( _R14 == (CgGlobalsMP *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    mem[1] = LODWORD(_R14->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_R14 + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)_R14 + 26936)) + 2));
    mem[2] = LODWORD(_R14->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_R14 + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)_R14 + 26940)) + 2));
    mem[3] = ((refdefViewOrg_aab ^ ((_DWORD)_R14 + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)_R14 + 26944)) + 2)) ^ LODWORD(_R14->refdef.view.org.org.v[2]);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+6944h]
      vmovss  [rbp+57h+var_48], xmm0
      vmovss  xmm1, dword ptr [r14+6948h]
      vmovss  [rbp+57h+var_44], xmm1
      vmovss  xmm0, dword ptr [r14+694Ch]
      vmovss  [rbp+57h+var_40], xmm0
    }
    v10 = 0;
    v23 = 0;
    v11 = 0;
    p_refCount = &s_crosshairsVisibilityTests[v2 / 0x308].tests[0].refCount;
    v13 = (char *)&v3[v2 / 0xFFFFFFFFFFFFFCF8ui64] - (char *)&s_crosshairsVisibilityTests[0].tests[0].refCount;
    do
    {
      if ( *(unsigned int *)((char *)p_refCount + v13 + 8) )
      {
        v14 = (char *)p_refCount + 28i64 * v3->nextWriteIndex - (_QWORD)&s_crosshairsVisibilityTests[v2 / 0x308].tests[0].refCount;
        *(_QWORD *)((char *)v3->tests[0].results[0].array + (_QWORD)v14) = 0i64;
        *(_QWORD *)((char *)&v3->tests[0].results[0].array[2] + (_QWORD)v14) = 0i64;
        *(_QWORD *)((char *)&v3->tests[0].results[0].array[4] + (_QWORD)v14) = 0i64;
        *(unsigned int *)((char *)&v3->tests[0].results[0].array[6] + (_QWORD)v14) = 0;
        if ( v23 >= 8u )
        {
          LODWORD(v16) = 8;
          LODWORD(v15) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 442, ASSERT_TYPE_ASSERT, "(unsigned)( cmd.testCount ) < (unsigned)( ( sizeof( *array_counter( cmd.tests ) ) + 0 ) )", "cmd.testCount doesn't index cmd.tests\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        if ( *(unsigned int *)((char *)p_refCount + v13 + 8) == -1 )
        {
          LODWORD(v18) = -1;
          LODWORD(v17) = -1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 446, ASSERT_TYPE_ASSERT, "( r_testGlob.tests[testIndex].refCount ) < ( 0xffffffffui32 )", "%s < %s\n\t%u, %u", "r_testGlob.tests[testIndex].refCount", "UINT32_MAX", v17, v18) )
            __debugbreak();
        }
        ++*p_refCount;
        LOBYTE(v19) = v11;
        HIBYTE(v19) = *((_BYTE *)p_refCount + v13 + 4);
        v24[v23] = v19;
        v10 = ++v23;
      }
      ++v11;
      p_refCount += 24;
    }
    while ( v11 < 8u );
    if ( !v10 )
    {
      LODWORD(v15) = s_crosshairsVisibilityTests[v20].registeredTestCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 454, ASSERT_TYPE_ASSERT, "( cmd.testCount > 0 )", "CG_PlayerVisibilityMP_QueueVisibilityTests: didn't find any valid tests, but expected to find %i", v15) )
        __debugbreak();
    }
    Sys_AddWorkerCmd(WRKCMD_PLAYER_VISIBILITY_CROSSHAIRS_TEST, mem);
    memset(&mem[1], 0, 24);
  }
  if ( v21 )
  {
    if ( !v21->addRemoveTestLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 189, ASSERT_TYPE_ASSERT, "(testGlob.addRemoveTestLock)", (const char *)&queryFormat, "testGlob.addRemoveTestLock") )
      __debugbreak();
    v21->addRemoveTestLock = 0;
  }
}

/*
==============
CG_PlayerVisibilityMP_RegisterCrosshairsTest
==============
*/
CgPlayerVisibilityTestRefId CG_PlayerVisibilityMP_RegisterCrosshairsTest(const LocalClientNum_t localClientNum, const bool testSameTeam, const bool testEnemyTeam, double worldSpacePadding, const float extendedPitchAngle, const float extendedYawAngle)
{
  float v12; 
  float v13; 
  CgPlayerCrosshairsVisibilityTest::ConfigData result; 

  __asm
  {
    vmovss  xmm0, [rsp+58h+extendedYawAngle]
    vmovss  xmm1, [rsp+58h+extendedPitchAngle]
    vmovss  [rsp+58h+var_30], xmm0
    vmovss  [rsp+58h+var_38], xmm1
  }
  _RAX = CG_PlayerVisibilityMP_CreateConfigData(&result, testSameTeam, testEnemyTeam, worldSpacePadding, v12, v13);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+58h+result.testSameTeam], ymm0
  }
  return CG_PlayerVisibilityMP_RegisterCrosshairsTest_Internal(localClientNum, &result);
}

/*
==============
CG_PlayerVisibilityMP_RegisterCrosshairsTest_Internal
==============
*/
__int64 CG_PlayerVisibilityMP_RegisterCrosshairsTest_Internal(const LocalClientNum_t localClientNum, const CgPlayerCrosshairsVisibilityTest::ConfigData *newConfigData)
{
  __int64 v3; 
  __int64 v4; 
  volatile signed __int32 *p_addRemoveTestLock; 
  int v7; 
  unsigned int i; 
  unsigned int refCount; 
  int v11; 
  bool testEnemyTeam; 
  CgPlayerVisibilityTestRefId v16; 
  unsigned __int8 v17; 
  __int64 v19; 
  __int64 v21; 
  CgPlayerVisibilityTestRefId v22; 
  CgPlayerCrosshairsVisibilityTestGlob *v23; 

  _R14 = newConfigData;
  v3 = localClientNum;
  v4 = 2i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 271, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  _RDI = &s_crosshairsVisibilityTests[v3];
  if ( !_RDI->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 272, ASSERT_TYPE_ASSERT, "(s_crosshairsVisibilityTests[localClientNum].isInitialized)", (const char *)&queryFormat, "s_crosshairsVisibilityTests[localClientNum].isInitialized") )
    __debugbreak();
  v23 = &s_crosshairsVisibilityTests[v3];
  p_addRemoveTestLock = &_RDI->addRemoveTestLock;
  while ( 1 )
  {
    if ( !*p_addRemoveTestLock )
    {
      if ( ((unsigned __int8)p_addRemoveTestLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &_RDI->addRemoveTestLock) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(p_addRemoveTestLock, 1, 0) )
        break;
    }
    Sys_Sleep(0);
  }
  v7 = -1;
  for ( i = 0; i < 8; ++i )
  {
    _RBX = i;
    refCount = _RDI->tests[_RBX].refCount;
    if ( refCount )
    {
      if ( _R14->testSameTeam == _RDI->tests[_RBX].config.testSameTeam )
      {
        testEnemyTeam = _RDI->tests[_RBX].config.testEnemyTeam;
        if ( _R14->testEnemyTeam == testEnemyTeam )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rdi+10h]
            vucomiss xmm0, dword ptr [r14+4]
          }
          if ( _R14->testEnemyTeam == testEnemyTeam )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+rdi+14h]
              vucomiss xmm0, dword ptr [r14+8]
            }
            if ( _R14->testEnemyTeam == testEnemyTeam )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+rdi+20h]
                vucomiss xmm0, dword ptr [r14+14h]
              }
              if ( _R14->testEnemyTeam == testEnemyTeam )
              {
                if ( refCount == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 295, ASSERT_TYPE_ASSERT, "( r_test.refCount ) < ( 0xffffffffui32 )", "%s < %s\n\t%u, %u", "r_test.refCount", "UINT32_MAX", -1, -1) )
                  __debugbreak();
                ++_RDI->tests[_RBX].refCount;
                v22.id = i;
                goto LABEL_39;
              }
            }
          }
        }
      }
    }
    else
    {
      v11 = i;
      if ( v7 != -1 )
        v11 = v7;
      v7 = v11;
    }
  }
  if ( v7 != -1 )
  {
    v17 = _RDI->registeredTestCount + 1;
    _RDI->registeredTestCount = v17;
    if ( v17 > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 310, ASSERT_TYPE_ASSERT, "( r_testGlob.registeredTestCount ) <= ( ( sizeof( *array_counter( r_testGlob.tests ) ) + 0 ) )", "%s <= %s\n\t%u, %u", "r_testGlob.registeredTestCount", "ARRAY_COUNT( r_testGlob.tests )", v17, 8) )
      __debugbreak();
    _RBX = v7;
    ++_RDI->tests[_RBX].generation;
    _RDI->tests[_RBX].refCount = 1;
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups ymmword ptr [rbx+rdi+0Ch], ymm0
    }
    v19 = (__int64)&_RDI->tests[_RBX].results[0].array[2];
    do
    {
      *(_QWORD *)(v19 - 8) = 0i64;
      *(_QWORD *)v19 = 0i64;
      *(_QWORD *)(v19 + 8) = 0i64;
      *(_DWORD *)(v19 + 16) = 0;
      v19 += 28i64;
      --v4;
    }
    while ( v4 );
    v22.id = v7;
LABEL_39:
    v22.generation = _RDI->tests[_RBX].generation;
    v16 = v22;
    goto LABEL_40;
  }
  LODWORD(v21) = 8;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 304, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_PlayerVisibilityMP_RegisterCrosshairsTest: test limit (%i) reached. Failed to allocate a new test. Is someone leaking testIds?", v21) )
    __debugbreak();
  v16 = CG_PLAYER_VISIBILITY_INVALID_ID_0;
LABEL_40:
  if ( v23 )
  {
    if ( !v23->addRemoveTestLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 189, ASSERT_TYPE_ASSERT, "(testGlob.addRemoveTestLock)", (const char *)&queryFormat, "testGlob.addRemoveTestLock") )
      __debugbreak();
    v23->addRemoveTestLock = 0;
  }
  return *(unsigned __int16 *)&v16;
}

/*
==============
CG_PlayerVisibilityMP_Shutdown
==============
*/
void CG_PlayerVisibilityMP_Shutdown(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  int v3; 

  v1 = localClientNum;
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_PLAYER_VISIBILITY_CROSSHAIRS_TEST);
  if ( (unsigned int)v1 >= 2 )
  {
    v3 = 2;
    v2 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 151, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  s_crosshairsVisibilityTests[v1].isInitialized = 0;
}

/*
==============
CG_PlayerVisibilityMP_TestIdIsValid
==============
*/
bool CG_PlayerVisibilityMP_TestIdIsValid(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId testId)
{
  __int64 v2; 
  unsigned __int8 id; 
  unsigned __int8 generation; 

  generation = testId.generation;
  v2 = localClientNum;
  id = testId.id;
  if ( testId.id == 0xFF )
    return 0;
  if ( testId.id >= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( testId.id ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests[localClientNum].tests ) ) + 0 ) )", "testId.id doesn't index s_crosshairsVisibilityTests[localClientNum].tests\n\t%i not in [0, %i)", testId.id, 8) )
    __debugbreak();
  return s_crosshairsVisibilityTests[v2].tests[id].generation == generation;
}

/*
==============
CG_PlayerVisibilityMP_UpdateCrosshairsTest
==============
*/
__int64 CG_PlayerVisibilityMP_UpdateCrosshairsTest(const LocalClientNum_t localClientNum, const CgPlayerVisibilityTestRefId oldTestId, const bool testSameTeam, const bool testEnemyTeam, const float worldSpacePadding, const float extendedPitchAngle, const float extendedYawAngle)
{
  __int64 v7; 
  unsigned __int64 v20; 
  float fmt; 
  float v26; 
  CgPlayerCrosshairsVisibilityTest::ConfigData newConfigData; 
  CgPlayerCrosshairsVisibilityTest::ConfigData result; 

  v7 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !s_crosshairsVisibilityTests[v7].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 369, ASSERT_TYPE_ASSERT, "(s_crosshairsVisibilityTests[localClientNum].isInitialized)", (const char *)&queryFormat, "s_crosshairsVisibilityTests[localClientNum].isInitialized") )
    __debugbreak();
  if ( !testSameTeam && !testEnemyTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 371, ASSERT_TYPE_ASSERT, "(testSameTeam || testEnemyTeam)", (const char *)&queryFormat, "testSameTeam || testEnemyTeam") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+98h+extendedYawAngle]
    vmovss  xmm1, [rsp+98h+extendedPitchAngle]
    vmovss  xmm3, [rsp+98h+worldSpacePadding]; worldSpacePadding
    vmovss  [rsp+98h+var_70], xmm0
    vmovss  dword ptr [rsp+98h+fmt], xmm1
  }
  if ( CG_PlayerVisibilityMP_TestIdIsValid((const LocalClientNum_t)v7, oldTestId) )
  {
    _RAX = CG_PlayerVisibilityMP_CreateConfigData(&result, testSameTeam, testEnemyTeam, *(double *)&_XMM3, fmt, v26);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+98h+newConfigData.testSameTeam], ymm0
    }
    _RCX = &s_crosshairsVisibilityTests[v7].tests[oldTestId.id].config;
    __asm { vmovq   rax, xmm0 }
    if ( (_BYTE)_RAX == _RCX->testSameTeam )
    {
      v20 = _RAX >> 8;
      if ( (_BYTE)v20 == _RCX->testEnemyTeam )
      {
        __asm
        {
          vmovss  xmm0, [rsp+98h+newConfigData.worldSpacePadding]
          vucomiss xmm0, dword ptr [rcx+4]
        }
        if ( (_BYTE)v20 == _RCX->testEnemyTeam )
        {
          __asm
          {
            vmovss  xmm0, [rsp+98h+newConfigData.extendedPitchAngle]
            vucomiss xmm0, dword ptr [rcx+8]
          }
          if ( (_BYTE)v20 == _RCX->testEnemyTeam )
          {
            __asm
            {
              vmovss  xmm0, [rsp+98h+newConfigData.extendedYawAngle]
              vucomiss xmm0, dword ptr [rcx+14h]
            }
            if ( (_BYTE)v20 == _RCX->testEnemyTeam )
              return *(unsigned __int16 *)&oldTestId;
          }
        }
      }
    }
    CG_PlayerVisibilityMP_DeregisterCrosshairsTest((const LocalClientNum_t)v7, oldTestId);
  }
  else
  {
    _RAX = CG_PlayerVisibilityMP_CreateConfigData(&result, testSameTeam, testEnemyTeam, *(double *)&_XMM3, fmt, v26);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+98h+newConfigData.testSameTeam], ymm0
    }
  }
  return CG_PlayerVisibilityMP_RegisterCrosshairsTest_Internal((const LocalClientNum_t)v7, &newConfigData);
}

/*
==============
CG_PlayerVisibilityMP_WaitForAllWorkers
==============
*/
void CG_PlayerVisibilityMP_WaitForAllWorkers(void)
{
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_PLAYER_VISIBILITY_CROSSHAIRS_TEST);
}

