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
  __int64 v11; 
  const SuitDef *SuitDef; 
  int bounds_height_prone; 
  float v14; 
  float bounds_radius; 
  int v17; 
  bool v18; 
  bool v19; 
  int v20; 
  float radius; 
  bool v22; 
  bool v23; 
  float v24; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v29; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  __int64 v43; 
  __int64 v44; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 507, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entityCharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 508, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
    __debugbreak();
  DebugWipe(outData, 0x48ui64);
  if ( isSameTeam )
    friendlyTestsCount = parsedCmd->friendlyTestsCount;
  else
    friendlyTestsCount = parsedCmd->enemyTestsCount;
  outData->testCount = friendlyTestsCount;
  if ( friendlyTestsCount )
  {
    if ( friendlyTestsCount > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 519, ASSERT_TYPE_ASSERT, "( outData.testCount ) <= ( isSameTeam ? ( sizeof( *array_counter( parsedCmd.friendlyTests ) ) + 0 ) : ( sizeof( *array_counter( parsedCmd.friendlyTests ) ) + 0 ) )", "%s <= %s\n\t%u, %u", "outData.testCount", "isSameTeam ? ARRAY_COUNT( parsedCmd.friendlyTests ) : ARRAY_COUNT( parsedCmd.friendlyTests )", friendlyTestsCount, 8) )
      __debugbreak();
    v11 = 216i64;
    if ( !isSameTeam )
      v11 = 52i64;
    outData->tests = (const CgPlayerCrosshairsVisibilityParsedCmdData::TestData *)((char *)parsedCmd + v11);
    SuitDef = BG_GetSuitDef(entityCharacterInfo->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 523, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->nextState.lerp.eFlags, ACTIVE, 4u) )
    {
      bounds_height_prone = SuitDef->bounds_height_prone;
    }
    else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->nextState.lerp.eFlags, ACTIVE, 3u) )
    {
      bounds_height_prone = SuitDef->bounds_height_crouch;
    }
    else
    {
      bounds_height_prone = SuitDef->bounds_height_stand;
    }
    v14 = (float)bounds_height_prone * 0.5;
    outData->halfBoundsHeight = v14;
    __asm { vxorpd  xmm11, xmm11, xmm11 }
    if ( v14 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 537, ASSERT_TYPE_ASSERT, "( outData.halfBoundsHeight ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "outData.halfBoundsHeight", "0.0f", v14, *(double *)&_XMM11) )
      __debugbreak();
    bounds_radius = (float)SuitDef->bounds_radius;
    outData->radius = bounds_radius;
    v17 = (int)bounds_radius;
    v18 = bounds_radius >= -16777216.0 && bounds_radius <= 16777216.0;
    v19 = bounds_radius >= -2147483600.0 && bounds_radius <= 2147483600.0;
    if ( (!v18 || !v19) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "int __cdecl float_to_integral_cast<int,float>(float)", v17, bounds_radius) )
      __debugbreak();
    v20 = SuitDef->bounds_radius;
    if ( v17 != v20 )
    {
      radius = outData->radius;
      v22 = radius >= -16777216.0 && radius <= 16777216.0;
      v23 = radius >= -2147483600.0 && radius <= 2147483600.0;
      if ( (!v22 || !v23) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "int __cdecl float_to_integral_cast<int,float>(float)", (int)radius, radius) )
        __debugbreak();
      LODWORD(v44) = v20;
      LODWORD(v43) = (int)radius;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 540, ASSERT_TYPE_ASSERT, "( float_to_integral_cast<int>(outData.radius) ) == ( suitDef->bounds_radius )", "%s == %s\n\t%i, %i", "float_to_integral_cast<int>(outData.radius)", "suitDef->bounds_radius", v43, v44) )
        __debugbreak();
    }
    v24 = outData->radius;
    if ( v24 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 541, ASSERT_TYPE_ASSERT, "( outData.radius ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "outData.radius", "0.0f", v24, *(double *)&_XMM11) )
      __debugbreak();
    if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( !entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(entity->pose.origin.Get_origin, &entity->pose);
    FunctionPointer_origin(&entity->pose.origin.origin.origin, (vec3_t *)&outData->center);
    if ( entity->pose.isPosePrecise )
    {
      _XMM0 = LODWORD(outData->center.x);
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
      _XMM0 = v29;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      _XMM0 = LODWORD(outData->center.y);
      __asm { vcvtdq2pd xmm0, xmm0 }
      outData->center.x = *(float *)&_XMM1;
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v29;
      _XMM0 = LODWORD(outData->center.z);
      __asm
      {
        vcvtsd2ss xmm2, xmm1, xmm1
        vcvtdq2pd xmm0, xmm0
      }
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v29;
      outData->center.y = *(float *)&_XMM2;
      __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
      outData->center.z = *(float *)&_XMM2;
    }
    outData->center.z = outData->halfBoundsHeight + outData->center.z;
    v39 = outData->center.x - parsedCmd->viewOrigin.x;
    outData->viewToEntity.x = v39;
    v40 = outData->center.y - parsedCmd->viewOrigin.y;
    outData->viewToEntity.y = v40;
    outData->viewToEntity.z = outData->center.z - parsedCmd->viewOrigin.z;
    v41 = (float)(v39 * v39) + (float)(v40 * v40);
    outData->entityXYDistSq = v41;
    v42 = fsqrt(v41);
    outData->entityXYDist = v42;
    outData->viewToEntityXY = *(vec2_t *)&outData->viewToEntity.x;
    if ( parsedCmd->viewDirXYIsValid )
    {
      outData->entityXYDistTimesCosYaw = (float)(outData->viewToEntityXY.v[1] * parsedCmd->viewDirXY.v[1]) + (float)(outData->viewToEntityXY.v[0] * parsedCmd->viewDirXY.v[0]);
      outData->zViewDirHeightAtEntity = (float)(v42 * parsedCmd->viewDir.v[2]) / parsedCmd->viewDirXYLen;
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
  double v9; 
  double v10; 
  float v11; 
  double v12; 
  double v13; 
  float v14; 
  CgPlayerCrosshairsVisibilityTest::ConfigData *v19; 

  _RSI = result;
  if ( !testSameTeam && !testEnemyTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 218, ASSERT_TYPE_ASSERT, "(testSameTeam || testEnemyTeam)", (const char *)&queryFormat, "testSameTeam || testEnemyTeam") )
    __debugbreak();
  v9 = I_snap(extendedPitchAngle, 0.5);
  v10 = I_fclamp(*(float *)&v9 * 0.017453292, 0.0, 1.5707964);
  v11 = *(float *)&v10;
  v12 = I_snap(extendedYawAngle, 0.5);
  v13 = I_fclamp(*(float *)&v12 * 0.017453292, 0.0, 3.1415927);
  v14 = *(float *)&v13;
  *((double *)&_XMM0 + 1) = *(&worldSpacePadding + 1);
  _RSI->testSameTeam = testSameTeam;
  _RSI->testEnemyTeam = testEnemyTeam;
  *(double *)&_XMM0 = I_snap(*(float *)&worldSpacePadding, 0.5);
  __asm { vmaxss  xmm1, xmm0, xmm10 }
  _RSI->worldSpacePadding = *(float *)&_XMM1;
  *((_QWORD *)&_XMM0 + 1) = 0i64;
  _RSI->extendedPitchAngle = v11;
  *(double *)&_XMM0 = j___libm_sse2_sincosf_();
  __asm
  {
    vmaxss  xmm0, xmm0, xmm10
    vminss  xmm0, xmm0, cs:__real@3f800000
  }
  _RSI->extendedPitchCosAngle = *(float *)&_XMM0;
  *((_QWORD *)&_XMM0 + 1) = 0i64;
  _RSI->extendedYawAngle = v14;
  *(double *)&_XMM0 = j___libm_sse2_sincosf_();
  v19 = _RSI;
  __asm
  {
    vextractps dword ptr [rsi+1Ch], xmm0, 1
    vmaxss  xmm0, xmm0, xmm10
    vminss  xmm1, xmm0, cs:__real@3f800000
  }
  _RSI->extendedYawSinAngle = *(float *)&_XMM1;
  return v19;
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
  unsigned __int8 v5; 
  unsigned __int64 v6; 
  unsigned __int8 testId; 
  __int64 v13; 
  CgPlayerCrosshairsVisibilityTest *v14; 
  float worldSpacePadding; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  bool v23; 
  float entityXYDistTimesCosYaw; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float z; 
  const CgPlayerCrosshairsVisibilityParsedCmdData::TestData *tests; 
  float cosViewPitchPlusExtended; 
  bool v32; 
  float cosViewPitchMinusExtended; 
  char *v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 

  v5 = 0;
  v6 = clientNum;
  if ( playerData->testCount )
  {
    _XMM9 = 0i64;
    __asm { vxorpd  xmm10, xmm10, xmm10 }
    while ( 1 )
    {
      testId = playerData->tests[v5].testId;
      if ( testId >= 8u )
      {
        LODWORD(v39) = 8;
        LODWORD(v38) = testId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 566, ASSERT_TYPE_ASSERT, "(unsigned)( playerData.tests[playerTestIdx].testId ) < (unsigned)( ( sizeof( *array_counter( testGlob.tests ) ) + 0 ) )", "playerData.tests[playerTestIdx].testId doesn't index testGlob.tests\n\t%i not in [0, %i)", v38, v39) )
          __debugbreak();
      }
      v13 = playerData->tests[v5].testId;
      v14 = &testGlob->tests[v13];
      worldSpacePadding = testGlob->tests[v13].config.worldSpacePadding;
      v16 = worldSpacePadding + playerData->radius;
      v18 = LODWORD(worldSpacePadding);
      *(float *)&v18 = worldSpacePadding + playerData->halfBoundsHeight;
      v17 = *(float *)&v18;
      if ( !parsedCmd->viewDirXYIsValid )
      {
        *(float *)&v18 = *(float *)&v18 - playerData->viewToEntity.z;
        _XMM2 = v18;
        __asm
        {
          vcmpltss xmm0, xmm9, dword ptr [r12+0Ch]
          vblendvps xmm4, xmm2, xmm1, xmm0
        }
        if ( *(float *)&_XMM4 >= 0.0 && (float)((float)(*(float *)&_XMM4 * testGlob->tests[v13].config.extendedPitchSinAngle) + (float)(testGlob->tests[v13].config.extendedPitchCosAngle * v16)) >= (float)(testGlob->tests[v13].config.extendedPitchCosAngle * playerData->entityXYDist) )
        {
          v37 = (char *)v14 + 28 * testGlob->nextWriteIndex;
          if ( (unsigned int)v6 >= 0xE0 )
          {
            LODWORD(v41) = 224;
            LODWORD(v40) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v40, v41) )
              __debugbreak();
          }
          *(_DWORD *)&v37[4 * (v6 >> 5) + 40] |= 0x80000000 >> (v6 & 0x1F);
        }
        goto LABEL_32;
      }
      LODWORD(v19) = LODWORD(v16) ^ _xmm;
      if ( testGlob->tests[v13].config.extendedYawCosAngle >= 0.0 )
        break;
      entityXYDistTimesCosYaw = playerData->entityXYDistTimesCosYaw;
      v26 = entityXYDistTimesCosYaw * testGlob->tests[v13].config.extendedYawSinAngle;
      v25 = v26;
      if ( v26 < v19 )
      {
        v27 = v26 + v16;
        v28 = playerData->entityXYDistSq - (float)(entityXYDistTimesCosYaw * entityXYDistTimesCosYaw);
        if ( (float)(v25 + v16) > 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 647, ASSERT_TYPE_ASSERT, "( discriminant ) <= ( 0.0f )", "%s <= %s\n\t%g, %g", "discriminant", "0.0f", v27, *(double *)&_XMM10) )
          __debugbreak();
        v23 = (float)((float)(v14->config.extendedYawCosAngle * v14->config.extendedYawCosAngle) * v28) < (float)(v27 * v27);
LABEL_18:
        if ( v23 )
          goto LABEL_32;
      }
      z = playerData->viewToEntity.z;
      tests = playerData->tests;
      if ( z < playerData->zViewDirHeightAtEntity )
      {
        cosViewPitchMinusExtended = tests[v5].cosViewPitchMinusExtended;
        if ( cosViewPitchMinusExtended <= 0.0 )
          goto LABEL_25;
        v32 = (float)(z + v17) < (float)((float)(tests[v5].sinViewPitchMinusExtended * playerData->entityXYDist) / cosViewPitchMinusExtended);
      }
      else
      {
        cosViewPitchPlusExtended = tests[v5].cosViewPitchPlusExtended;
        if ( cosViewPitchPlusExtended <= 0.0 )
          goto LABEL_25;
        v32 = (float)((float)(tests[v5].sinViewPitchPlusExtended * playerData->entityXYDist) / cosViewPitchPlusExtended) < (float)(z - v17);
      }
      if ( !v32 )
LABEL_25:
        bitarray_base<bitarray<224>>::setBit(&v14->results[testGlob->nextWriteIndex], v6);
LABEL_32:
      if ( ++v5 >= playerData->testCount )
        return;
    }
    v20 = playerData->entityXYDistTimesCosYaw;
    if ( v20 < v19 )
      goto LABEL_32;
    v21 = playerData->entityXYDistSq - (float)(v20 * v20);
    v22 = (float)(v20 * testGlob->tests[v13].config.extendedYawSinAngle) + v16;
    if ( v22 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 610, ASSERT_TYPE_ASSERT, "( discriminant ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "discriminant", "0.0f", v22, *(double *)&_XMM10) )
      __debugbreak();
    v23 = (float)(v22 * v22) < (float)((float)(v14->config.extendedYawCosAngle * v14->config.extendedYawCosAngle) * v21);
    goto LABEL_18;
  }
}

/*
==============
CG_PlayerVisibilityMP_DebugTest
==============
*/
void CG_PlayerVisibilityMP_DebugTest(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  const dvar_t *v3; 
  __int64 v4; 
  __int64 v5; 
  CgPlayerVisibilityTestRefId *v6; 
  unsigned int v7; 
  CgPlayerVisibilityTestRefId v8; 
  const dvar_t *v9; 
  CgPlayerVisibilityTestRefId v10; 
  CgPlayerVisibilityTestRefId v11; 
  const ClientBits *CrosshairsTestResult; 
  const ClientBits *v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  CgEntitySystem *v18; 
  __int64 v19; 
  const dvar_t *v20; 
  float value; 
  const dvar_t *v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  CgPlayerVisibilityTestRefId updated; 
  CgPlayerVisibilityTestRefId v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 extendedPitchAngle; 
  __int64 extendedYawAngle; 
  bool enabled; 
  unsigned int v33; 
  CgPlayerVisibilityTestRefId *v34; 

  v1 = localClientNum;
  v2 = 2i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 874, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_testId ) ) + 0 ) )", "localClientNum doesn't index s_testId\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v3 = DCONST_DVARBOOL_cg_player_visibility_test_active;
  if ( !DCONST_DVARBOOL_cg_player_visibility_test_active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_player_visibility_test_active") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = v1;
  v5 = v1;
  if ( v3->current.enabled )
  {
    v6 = s_testId[v1];
    v7 = 0;
    v33 = 0;
    v34 = v6;
    do
    {
      v8 = *v6;
      if ( v6->id != 0xFF )
      {
        if ( v8.id >= 8u )
        {
          LODWORD(extendedYawAngle) = 8;
          LODWORD(extendedPitchAngle) = v8.id;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( testId.id ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests[localClientNum].tests ) ) + 0 ) )", "testId.id doesn't index s_crosshairsVisibilityTests[localClientNum].tests\n\t%i not in [0, %i)", extendedPitchAngle, extendedYawAngle) )
            __debugbreak();
          v7 = v33;
        }
        if ( s_crosshairsVisibilityTests[v5].tests[v8.id].generation == v8.generation )
        {
          v9 = DCONST_DVARBOOL_cg_player_visibility_test_getResultWithWait;
          if ( !DCONST_DVARBOOL_cg_player_visibility_test_getResultWithWait && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_player_visibility_test_getResultWithWait") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v9);
          enabled = v9->current.enabled;
          if ( enabled )
          {
            v10 = *v6;
            if ( Sys_IsAnyWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 857, ASSERT_TYPE_ASSERT, "(!Sys_IsAnyWorkerContext())", (const char *)&queryFormat, "!Sys_IsAnyWorkerContext()") )
              __debugbreak();
            Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_PLAYER_VISIBILITY_CROSSHAIRS_TEST);
            v11 = v10;
          }
          else
          {
            v11 = s_testId[v4][v33];
          }
          CrosshairsTestResult = CG_PlayerVisibilityMP_GetCrosshairsTestResult((const LocalClientNum_t)v1, v11);
          v13 = CrosshairsTestResult;
          if ( CrosshairsTestResult )
          {
            v14 = CrosshairsTestResult->array[0];
            LODWORD(v15) = 0;
            while ( v14 )
            {
LABEL_29:
              v16 = __lzcnt(v14);
              v17 = v16 + 32 * v15;
              if ( v16 >= 0x20 )
              {
                LODWORD(extendedYawAngle) = 32;
                LODWORD(extendedPitchAngle) = v16;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", extendedPitchAngle, extendedYawAngle) )
                  __debugbreak();
              }
              if ( (v14 & (0x80000000 >> v16)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
                __debugbreak();
              v14 &= ~(0x80000000 >> v16);
              if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
              {
                LODWORD(extendedYawAngle) = v1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", extendedYawAngle) )
                  __debugbreak();
              }
              if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
              {
                LODWORD(extendedYawAngle) = CgEntitySystem::ms_allocatedCount;
                LODWORD(extendedPitchAngle) = v1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", extendedPitchAngle, extendedYawAngle) )
                  __debugbreak();
              }
              if ( !CgEntitySystem::ms_entitySystemArray[v1] )
              {
                LODWORD(extendedYawAngle) = v1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", extendedYawAngle) )
                  __debugbreak();
              }
              v18 = CgEntitySystem::ms_entitySystemArray[v1];
              if ( v17 >= 0x800 )
              {
                LODWORD(extendedYawAngle) = 2048;
                LODWORD(extendedPitchAngle) = v16 + 32 * v15;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", extendedPitchAngle, extendedYawAngle) )
                  __debugbreak();
              }
              v19 = (__int64)&v18->m_entities[v17];
              if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 895, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
                __debugbreak();
              if ( (*(_BYTE *)(v19 + 648) & 1) != 0 && *(_WORD *)(v19 + 408) == 1 )
              {
                CG_DrawDebugMP_DrawBoxAroundPlayer((const LocalClientNum_t)v1, (const centity_t *const)v19, &colorRed, 0, 0);
              }
              else if ( enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 898, ASSERT_TYPE_ASSERT, "(!waitForResult)", (const char *)&queryFormat, "!waitForResult") )
              {
                __debugbreak();
              }
            }
            while ( 1 )
            {
              v15 = (unsigned int)(v15 + 1);
              if ( (unsigned int)v15 >= 7 )
                break;
              v14 = v13->array[v15];
              if ( v14 )
                goto LABEL_29;
            }
            v4 = v1;
            v5 = v1;
            v6 = v34;
          }
          v7 = v33;
        }
      }
      ++v7;
      ++v6;
      v33 = v7;
      v34 = v6;
    }
    while ( v7 < 2 );
    v20 = DCONST_DVARFLT_cg_player_visibility_test_worldspacePadding;
    if ( !DCONST_DVARFLT_cg_player_visibility_test_worldspacePadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_player_visibility_test_worldspacePadding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    value = v20->current.value;
    v22 = DCONST_DVARFLT_cg_player_visibility_test_extendedPitchAngle;
    if ( !DCONST_DVARFLT_cg_player_visibility_test_extendedPitchAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_player_visibility_test_extendedPitchAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v23 = v22->current.value;
    v24 = DCONST_DVARFLT_cg_player_visibility_test_extendedYawAngle;
    if ( !DCONST_DVARFLT_cg_player_visibility_test_extendedYawAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_player_visibility_test_extendedYawAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v25 = v24->current.value;
    updated = CG_PlayerVisibilityMP_UpdateCrosshairsTest((const LocalClientNum_t)v1, s_testId[v5][0], 0, 1, value, v23, v25);
    v27 = s_testId[v5][1];
    s_testId[v5][0] = updated;
    s_testId[v5][1] = CG_PlayerVisibilityMP_UpdateCrosshairsTest((const LocalClientNum_t)v1, v27, 1, 0, value, v23, v25);
  }
  else
  {
    v28 = 0i64;
    v29 = 0i64;
    do
    {
      s_testId[v4][v28] = CG_PlayerVisibilityMP_DeregisterCrosshairsTest((const LocalClientNum_t)v1, s_testId[0][v29 + v4 * 2]);
      ++v29;
      ++v28;
      --v2;
    }
    while ( v2 );
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
  __int64 localClientNum; 
  float x; 
  float v6; 
  __int128 v7; 
  float v10; 
  unsigned __int8 v11; 
  const char *v12; 
  CgPlayerCrosshairsVisibilityTest::ConfigData *p_config; 
  const ObfuscateErrorText *v14; 
  __int64 v15; 
  CgPlayerVisibilityTestRefId v16; 
  __int64 v17; 
  __int64 v18; 
  __int128 viewPitch_low; 
  CgPlayerCrosshairsVisibilityTest::ConfigData *v20; 
  unsigned __int64 v21; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int8 enemyTestsCount; 
  __int64 v32; 
  unsigned __int8 friendlyTestsCount; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int128 v37; 
  float v38; 
  double v39; 

  DebugWipe(parsedCmd, 0x178ui64);
  if ( cmd->localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 463, ASSERT_TYPE_ASSERT, "(unsigned)( cmd.localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "cmd.localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", cmd->localClientNum, 2) )
    __debugbreak();
  localClientNum = cmd->localClientNum;
  parsedCmd->viewOrigin.x = cmd->viewOrigin.x;
  parsedCmd->viewOrigin.y = cmd->viewOrigin.y;
  parsedCmd->viewOrigin.z = cmd->viewOrigin.z;
  x = cmd->viewDir.x;
  parsedCmd->viewDir.v[0] = x;
  parsedCmd->viewDir.v[1] = cmd->viewDir.y;
  parsedCmd->viewDir.v[2] = cmd->viewDir.z;
  v6 = fsqrt((float)(x * x) + (float)(parsedCmd->viewDir.v[1] * parsedCmd->viewDir.v[1]));
  parsedCmd->viewDirXYLen = v6;
  parsedCmd->viewDirXYIsValid = v6 >= 0.000001;
  if ( v6 < 0.000001 )
  {
    v39 = 0.0;
  }
  else
  {
    v7 = LODWORD(FLOAT_1_0);
    *(float *)&v7 = (float)(1.0 / v6) * parsedCmd->viewDir.v[0];
    _XMM3 = v7;
    __asm { vunpcklps xmm1, xmm3, xmm2 }
    *((float *)&v37 + 2) = 0.0;
    v39 = *(double *)&_XMM1;
  }
  *(double *)parsedCmd->viewDirXY.v = v39;
  parsedCmd->viewDirXY.v[2] = 0.0;
  v10 = atan2f_0(parsedCmd->viewDir.v[2], v6);
  v11 = 0;
  parsedCmd->enemyTestsCount = 0;
  parsedCmd->viewPitch = v10;
  parsedCmd->friendlyTestsCount = 0;
  if ( cmd->testCount )
  {
    v12 = "CG_PlayerVisibilityMP_TestIdIsValid( cmd.localClientNum, cmd.tests[cmdIndex] )";
    p_config = &s_crosshairsVisibilityTests[localClientNum].tests[0].config;
    v14 = &queryFormat;
    do
    {
      v15 = cmd->localClientNum;
      v16 = cmd->tests[v11];
      if ( v16.id == 0xFF )
        goto LABEL_30;
      if ( v16.id >= 8u )
      {
        LODWORD(v36) = 8;
        LODWORD(v35) = v16.id;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( testId.id ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests[localClientNum].tests ) ) + 0 ) )", "testId.id doesn't index s_crosshairsVisibilityTests[localClientNum].tests\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
        v14 = &queryFormat;
        v12 = "CG_PlayerVisibilityMP_TestIdIsValid( cmd.localClientNum, cmd.tests[cmdIndex] )";
      }
      v17 = 96i64 * v16.id;
      v18 = v17 + 776 * v15;
      if ( *(&s_crosshairsVisibilityTests[0].tests[0].generation + v18) != v16.generation )
      {
LABEL_30:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 479, ASSERT_TYPE_ASSERT, "(CG_PlayerVisibilityMP_TestIdIsValid( cmd.localClientNum, cmd.tests[cmdIndex] ))", (const char *)&queryFormat, "CG_PlayerVisibilityMP_TestIdIsValid( cmd.localClientNum, cmd.tests[cmdIndex] )") )
          __debugbreak();
      }
      viewPitch_low = LODWORD(parsedCmd->viewPitch);
      LOBYTE(v37) = cmd->tests[v11].id;
      v20 = &p_config[3 * (unsigned __int8)v37];
      *(double *)&v21 = j___libm_sse2_sincosf_(v17, v18, v12, v14);
      _mm_shuffle_ps((__m128)v21, (__m128)v21, 1);
      *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&viewPitch_low + 1);
      *(double *)&_XMM0 = j___libm_sse2_sincosf_(v24, v23, v25, v26);
      _XMM6 = v37;
      __asm
      {
        vinsertps xmm6, xmm6, xmm8, 10h
        vinsertps xmm6, xmm6, xmm9, 20h ; ' '
        vinsertps xmm6, xmm6, xmm0, 30h ; '0'
        vextractps [rsp+0F8h+var_A0], xmm0, 1
      }
      v37 = _XMM6;
      if ( v20->testEnemyTeam )
      {
        enemyTestsCount = parsedCmd->enemyTestsCount;
        if ( enemyTestsCount >= 8u )
        {
          LODWORD(v36) = 8;
          LODWORD(v35) = enemyTestsCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 491, ASSERT_TYPE_ASSERT, "(unsigned)( parsedCmd.enemyTestsCount ) < (unsigned)( ( sizeof( *array_counter( parsedCmd.enemyTests ) ) + 0 ) )", "parsedCmd.enemyTestsCount doesn't index parsedCmd.enemyTests\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
        v32 = parsedCmd->enemyTestsCount;
        *(_OWORD *)&parsedCmd->enemyTests[v32].testId = _XMM6;
        parsedCmd->enemyTests[v32].cosViewPitchMinusExtended = v38;
        ++parsedCmd->enemyTestsCount;
      }
      if ( v20->testSameTeam )
      {
        friendlyTestsCount = parsedCmd->friendlyTestsCount;
        if ( friendlyTestsCount >= 8u )
        {
          LODWORD(v36) = 8;
          LODWORD(v35) = friendlyTestsCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 497, ASSERT_TYPE_ASSERT, "(unsigned)( parsedCmd.friendlyTestsCount ) < (unsigned)( ( sizeof( *array_counter( parsedCmd.friendlyTests ) ) + 0 ) )", "parsedCmd.friendlyTestsCount doesn't index parsedCmd.friendlyTests\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
        v34 = parsedCmd->friendlyTestsCount;
        *(_OWORD *)&parsedCmd->friendlyTests[v34].testId = _XMM6;
        parsedCmd->friendlyTests[v34].cosViewPitchMinusExtended = v38;
        ++parsedCmd->friendlyTestsCount;
      }
      ++v11;
      v12 = "CG_PlayerVisibilityMP_TestIdIsValid( cmd.localClientNum, cmd.tests[cmdIndex] )";
      v14 = &queryFormat;
    }
    while ( v11 < cmd->testCount );
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
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int refdefViewOrg_aab; 
  char v7; 
  unsigned __int8 v8; 
  unsigned int *p_refCount; 
  signed __int64 v10; 
  char *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int16 v16; 
  __int64 v17; 
  CgPlayerCrosshairsVisibilityTestGlob *v18; 
  int mem[7]; 
  unsigned __int8 v20; 
  __int16 v21[9]; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 411, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 412, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 776 * v1;
  v17 = v1;
  v3 = &s_crosshairsVisibilityTests[v1];
  if ( !v3->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(s_crosshairsVisibilityTests[localClientNum].isInitialized)", (const char *)&queryFormat, "s_crosshairsVisibilityTests[localClientNum].isInitialized") )
    __debugbreak();
  v18 = &s_crosshairsVisibilityTests[v1];
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
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v1);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 425, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    DebugWipe(mem, 0x30ui64);
    mem[0] = v1;
    if ( LocalClientGlobals == (CgGlobalsMP *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (CgGlobalsMP *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    mem[1] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    mem[2] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    mem[3] = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    mem[4] = LODWORD(LocalClientGlobals->refdef.view.axis.m[0].v[0]);
    mem[5] = LODWORD(LocalClientGlobals->refdef.view.axis.m[0].v[1]);
    mem[6] = LODWORD(LocalClientGlobals->refdef.view.axis.m[0].v[2]);
    v7 = 0;
    v20 = 0;
    v8 = 0;
    p_refCount = &s_crosshairsVisibilityTests[v2 / 0x308].tests[0].refCount;
    v10 = (char *)&v3[v2 / 0xFFFFFFFFFFFFFCF8ui64] - (char *)&s_crosshairsVisibilityTests[0].tests[0].refCount;
    do
    {
      if ( *(unsigned int *)((char *)p_refCount + v10 + 8) )
      {
        v11 = (char *)p_refCount + 28i64 * v3->nextWriteIndex - (_QWORD)&s_crosshairsVisibilityTests[v2 / 0x308].tests[0].refCount;
        *(_QWORD *)((char *)v3->tests[0].results[0].array + (_QWORD)v11) = 0i64;
        *(_QWORD *)((char *)&v3->tests[0].results[0].array[2] + (_QWORD)v11) = 0i64;
        *(_QWORD *)((char *)&v3->tests[0].results[0].array[4] + (_QWORD)v11) = 0i64;
        *(unsigned int *)((char *)&v3->tests[0].results[0].array[6] + (_QWORD)v11) = 0;
        if ( v20 >= 8u )
        {
          LODWORD(v13) = 8;
          LODWORD(v12) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 442, ASSERT_TYPE_ASSERT, "(unsigned)( cmd.testCount ) < (unsigned)( ( sizeof( *array_counter( cmd.tests ) ) + 0 ) )", "cmd.testCount doesn't index cmd.tests\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( *(unsigned int *)((char *)p_refCount + v10 + 8) == -1 )
        {
          LODWORD(v15) = -1;
          LODWORD(v14) = -1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 446, ASSERT_TYPE_ASSERT, "( r_testGlob.tests[testIndex].refCount ) < ( 0xffffffffui32 )", "%s < %s\n\t%u, %u", "r_testGlob.tests[testIndex].refCount", "UINT32_MAX", v14, v15) )
            __debugbreak();
        }
        ++*p_refCount;
        LOBYTE(v16) = v8;
        HIBYTE(v16) = *((_BYTE *)p_refCount + v10 + 4);
        v21[v20] = v16;
        v7 = ++v20;
      }
      ++v8;
      p_refCount += 24;
    }
    while ( v8 < 8u );
    if ( !v7 )
    {
      LODWORD(v12) = s_crosshairsVisibilityTests[v17].registeredTestCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 454, ASSERT_TYPE_ASSERT, "( cmd.testCount > 0 )", "CG_PlayerVisibilityMP_QueueVisibilityTests: didn't find any valid tests, but expected to find %i", v12) )
        __debugbreak();
    }
    Sys_AddWorkerCmd(WRKCMD_PLAYER_VISIBILITY_CROSSHAIRS_TEST, mem);
    memset(&mem[1], 0, 24);
  }
  if ( v18 )
  {
    if ( !v18->addRemoveTestLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 189, ASSERT_TYPE_ASSERT, "(testGlob.addRemoveTestLock)", (const char *)&queryFormat, "testGlob.addRemoveTestLock") )
      __debugbreak();
    v18->addRemoveTestLock = 0;
  }
}

/*
==============
CG_PlayerVisibilityMP_RegisterCrosshairsTest
==============
*/
CgPlayerVisibilityTestRefId CG_PlayerVisibilityMP_RegisterCrosshairsTest(const LocalClientNum_t localClientNum, const bool testSameTeam, const bool testEnemyTeam, double worldSpacePadding, const float extendedPitchAngle, const float extendedYawAngle)
{
  CgPlayerCrosshairsVisibilityTest::ConfigData result; 

  result = *CG_PlayerVisibilityMP_CreateConfigData(&result, testSameTeam, testEnemyTeam, worldSpacePadding, extendedPitchAngle, extendedYawAngle);
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
  CgPlayerCrosshairsVisibilityTestGlob *v5; 
  volatile signed __int32 *p_addRemoveTestLock; 
  int v7; 
  unsigned int i; 
  __int64 v9; 
  unsigned int refCount; 
  int v11; 
  CgPlayerVisibilityTestRefId v12; 
  unsigned __int8 v13; 
  __int64 v14; 
  __int64 v16; 
  CgPlayerVisibilityTestRefId v17; 
  CgPlayerCrosshairsVisibilityTestGlob *v18; 

  v3 = localClientNum;
  v4 = 2i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 271, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v5 = &s_crosshairsVisibilityTests[v3];
  if ( !v5->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 272, ASSERT_TYPE_ASSERT, "(s_crosshairsVisibilityTests[localClientNum].isInitialized)", (const char *)&queryFormat, "s_crosshairsVisibilityTests[localClientNum].isInitialized") )
    __debugbreak();
  v18 = &s_crosshairsVisibilityTests[v3];
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
  v7 = -1;
  for ( i = 0; i < 8; ++i )
  {
    v9 = i;
    refCount = v5->tests[v9].refCount;
    if ( refCount )
    {
      if ( newConfigData->testSameTeam == v5->tests[v9].config.testSameTeam && newConfigData->testEnemyTeam == v5->tests[v9].config.testEnemyTeam && v5->tests[v9].config.worldSpacePadding == newConfigData->worldSpacePadding && v5->tests[v9].config.extendedPitchAngle == newConfigData->extendedPitchAngle && v5->tests[v9].config.extendedYawAngle == newConfigData->extendedYawAngle )
      {
        if ( refCount == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 295, ASSERT_TYPE_ASSERT, "( r_test.refCount ) < ( 0xffffffffui32 )", "%s < %s\n\t%u, %u", "r_test.refCount", "UINT32_MAX", -1, -1) )
          __debugbreak();
        ++v5->tests[v9].refCount;
        v17.id = i;
        goto LABEL_39;
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
    v13 = v5->registeredTestCount + 1;
    v5->registeredTestCount = v13;
    if ( v13 > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 310, ASSERT_TYPE_ASSERT, "( r_testGlob.registeredTestCount ) <= ( ( sizeof( *array_counter( r_testGlob.tests ) ) + 0 ) )", "%s <= %s\n\t%u, %u", "r_testGlob.registeredTestCount", "ARRAY_COUNT( r_testGlob.tests )", v13, 8) )
      __debugbreak();
    v9 = v7;
    ++v5->tests[v9].generation;
    v5->tests[v9].refCount = 1;
    v5->tests[v9].config = *newConfigData;
    v14 = (__int64)&v5->tests[v9].results[0].array[2];
    do
    {
      *(_QWORD *)(v14 - 8) = 0i64;
      *(_QWORD *)v14 = 0i64;
      *(_QWORD *)(v14 + 8) = 0i64;
      *(_DWORD *)(v14 + 16) = 0;
      v14 += 28i64;
      --v4;
    }
    while ( v4 );
    v17.id = v7;
LABEL_39:
    v17.generation = v5->tests[v9].generation;
    v12 = v17;
    goto LABEL_40;
  }
  LODWORD(v16) = 8;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 304, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_PlayerVisibilityMP_RegisterCrosshairsTest: test limit (%i) reached. Failed to allocate a new test. Is someone leaking testIds?", v16) )
    __debugbreak();
  v12 = CG_PLAYER_VISIBILITY_INVALID_ID_0;
LABEL_40:
  if ( v18 )
  {
    if ( !v18->addRemoveTestLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 189, ASSERT_TYPE_ASSERT, "(testGlob.addRemoveTestLock)", (const char *)&queryFormat, "testGlob.addRemoveTestLock") )
      __debugbreak();
    v18->addRemoveTestLock = 0;
  }
  return *(unsigned __int16 *)&v12;
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
  CgPlayerCrosshairsVisibilityTest::ConfigData *p_config; 
  CgPlayerCrosshairsVisibilityTest::ConfigData newConfigData; 
  CgPlayerCrosshairsVisibilityTest::ConfigData result; 

  v7 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_crosshairsVisibilityTests ) ) + 0 ) )", "localClientNum doesn't index s_crosshairsVisibilityTests\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !s_crosshairsVisibilityTests[v7].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 369, ASSERT_TYPE_ASSERT, "(s_crosshairsVisibilityTests[localClientNum].isInitialized)", (const char *)&queryFormat, "s_crosshairsVisibilityTests[localClientNum].isInitialized") )
    __debugbreak();
  if ( !testSameTeam && !testEnemyTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_visibility_mp.cpp", 371, ASSERT_TYPE_ASSERT, "(testSameTeam || testEnemyTeam)", (const char *)&queryFormat, "testSameTeam || testEnemyTeam") )
    __debugbreak();
  if ( CG_PlayerVisibilityMP_TestIdIsValid((const LocalClientNum_t)v7, oldTestId) )
  {
    newConfigData = *CG_PlayerVisibilityMP_CreateConfigData(&result, testSameTeam, testEnemyTeam, COERCE_DOUBLE((unsigned __int64)LODWORD(worldSpacePadding)), extendedPitchAngle, extendedYawAngle);
    p_config = &s_crosshairsVisibilityTests[v7].tests[oldTestId.id].config;
    if ( LOWORD(extendedYawAngle) == *(_WORD *)&p_config->testSameTeam && newConfigData.worldSpacePadding == p_config->worldSpacePadding && newConfigData.extendedPitchAngle == p_config->extendedPitchAngle && newConfigData.extendedYawAngle == p_config->extendedYawAngle )
      return *(unsigned __int16 *)&oldTestId;
    CG_PlayerVisibilityMP_DeregisterCrosshairsTest((const LocalClientNum_t)v7, oldTestId);
  }
  else
  {
    newConfigData = *CG_PlayerVisibilityMP_CreateConfigData(&result, testSameTeam, testEnemyTeam, COERCE_DOUBLE((unsigned __int64)LODWORD(worldSpacePadding)), extendedPitchAngle, extendedYawAngle);
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

