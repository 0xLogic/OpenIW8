/*
==============
BG_Weapon_IsExecutionEnabled
==============
*/

bool __fastcall BG_Weapon_IsExecutionEnabled(const playerState_s *const ps)
{
  return ?BG_Weapon_IsExecutionEnabled@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Weapon_Execution
==============
*/

int __fastcall PM_Weapon_Execution(pmove_t *pm, pml_t *pml)
{
  return ?PM_Weapon_Execution@@YAHPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Execution_GetActiveAnimIndex
==============
*/

bool __fastcall BG_Execution_GetActiveAnimIndex(const entityState_t *const es, bool isVictim, unsigned int *outAnimIndex, ExecutionAnimError *outError)
{
  return ?BG_Execution_GetActiveAnimIndex@@YA_NQEBUentityState_t@@_NPEAIPEAW4ExecutionAnimError@@@Z(es, isVictim, outAnimIndex, outError);
}

/*
==============
BG_Execution_GetDef
==============
*/

const ExecutionDef *__fastcall BG_Execution_GetDef(unsigned int index)
{
  return ?BG_Execution_GetDef@@YAPEBUExecutionDef@@I@Z(index);
}

/*
==============
BG_Weapon_UpdateExecutionWeapon
==============
*/

void __fastcall BG_Weapon_UpdateExecutionWeapon(BgWeaponMap *const weaponMap, playerState_s *const ps)
{
  ?BG_Weapon_UpdateExecutionWeapon@@YAXQEAVBgWeaponMap@@QEAUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
PM_Weapon_BeginExecution
==============
*/

void __fastcall PM_Weapon_BeginExecution(pmove_t *pm, pml_t *pml)
{
  ?PM_Weapon_BeginExecution@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Execution_CalcRootAbs
==============
*/

void __fastcall BG_Execution_CalcRootAbs(DObj *const obj, unsigned int animIndex, const float time, tmat43_t<vec3_t> *outRootTransform)
{
  ?BG_Execution_CalcRootAbs@@YAXQEAUDObj@@IMAEAT?$tmat43_t@Tvec3_t@@@@@Z(obj, animIndex, time, outRootTransform);
}

/*
==============
BG_Execution_CalcWorldGoal
==============
*/

void __fastcall BG_Execution_CalcWorldGoal(const vec3_t *attackerOrigin, const vec3_t *attackerAngles, const vec3_t *victimOrigin, DObj *const attackerObj, const unsigned int attackerAnimIndex, DObj *const victimObj, const unsigned int victimAnimIndex, const float time, vec3_t *outAttackerGoalPos, vec3_t *outVictimGoalPos, vec3_t *outVictimGoalAngles)
{
  ?BG_Execution_CalcWorldGoal@@YAXAEBTvec3_t@@00QEAUDObj@@I1IMAEAT1@22@Z(attackerOrigin, attackerAngles, victimOrigin, attackerObj, attackerAnimIndex, victimObj, victimAnimIndex, time, outAttackerGoalPos, outVictimGoalPos, outVictimGoalAngles);
}

/*
==============
BG_Execution_InitAssets
==============
*/

void __fastcall BG_Execution_InitAssets(bool isFullInit)
{
  ?BG_Execution_InitAssets@@YAX_N@Z(isFullInit);
}

/*
==============
BG_Execution_ShouldHideExecutionWeapon
==============
*/

bool __fastcall BG_Execution_ShouldHideExecutionWeapon(const Weapon *weapon)
{
  return ?BG_Execution_ShouldHideExecutionWeapon@@YA_NAEBUWeapon@@@Z(weapon);
}

/*
==============
BG_Execution_CanUpdateViewangles
==============
*/

bool __fastcall BG_Execution_CanUpdateViewangles(const playerState_s *ps)
{
  return ?BG_Execution_CanUpdateViewangles@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Execution_CalcRootRel
==============
*/

void __fastcall BG_Execution_CalcRootRel(DObj *const obj, unsigned int animIndex, const float prevTime, const float curTime, tmat43_t<vec3_t> *outRootTransform)
{
  ?BG_Execution_CalcRootRel@@YAXQEAUDObj@@IMMAEAT?$tmat43_t@Tvec3_t@@@@@Z(obj, animIndex, prevTime, curTime, outRootTransform);
}

/*
==============
BG_Execution_GetAttackerEntNum
==============
*/

int __fastcall BG_Execution_GetAttackerEntNum(const playerState_s *const ps)
{
  return ?BG_Execution_GetAttackerEntNum@@YAHQEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Weapon_CheckExecution
==============
*/

void __fastcall PM_Weapon_CheckExecution(pmove_t *pm, pml_t *pml)
{
  ?PM_Weapon_CheckExecution@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Execution_UpdateViewAngles
==============
*/

void __fastcall PM_Execution_UpdateViewAngles(pmove_t *pm)
{
  ?PM_Execution_UpdateViewAngles@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_Execution_GetVictimEntNum
==============
*/

int __fastcall BG_Execution_GetVictimEntNum(const playerState_s *const ps)
{
  return ?BG_Execution_GetVictimEntNum@@YAHQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Execution_MarkExecutionWeaponDirty
==============
*/

void __fastcall BG_Execution_MarkExecutionWeaponDirty(playerState_s *const ps)
{
  ?BG_Execution_MarkExecutionWeaponDirty@@YAXQEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_Execution_IsExecutionWeaponPresent
==============
*/

bool __fastcall BG_Execution_IsExecutionWeaponPresent(const characterInfo_t *const ci)
{
  return ?BG_Execution_IsExecutionWeaponPresent@@YA_NQEBUcharacterInfo_t@@@Z(ci);
}

/*
==============
BG_Execution_ClearAssets
==============
*/

void BG_Execution_ClearAssets(void)
{
  ?BG_Execution_ClearAssets@@YAXXZ();
}

/*
==============
BG_Execution_GetIndexForPtr
==============
*/

unsigned int __fastcall BG_Execution_GetIndexForPtr(const ExecutionDef *const def)
{
  return ?BG_Execution_GetIndexForPtr@@YAIQEBUExecutionDef@@@Z(def);
}

/*
==============
BG_Execution_CalcRootOffsetAtTime
==============
*/

void __fastcall BG_Execution_CalcRootOffsetAtTime(DObj *const attackerObj, const unsigned int attackerAnimIndex, DObj *const victimObj, const unsigned int victimAnimIndex, const float time, tmat43_t<vec3_t> *outReferenceEntToMoveEnt)
{
  ?BG_Execution_CalcRootOffsetAtTime@@YAXQEAUDObj@@I0IMAEAT?$tmat43_t@Tvec3_t@@@@@Z(attackerObj, attackerAnimIndex, victimObj, victimAnimIndex, time, outReferenceEntToMoveEnt);
}

/*
==============
BG_Execution_GetDurationMs
==============
*/

int __fastcall BG_Execution_GetDurationMs(const unsigned int execution, const ExecutionVictimStance stance)
{
  return ?BG_Execution_GetDurationMs@@YAHIW4ExecutionVictimStance@@@Z(execution, stance);
}

/*
==============
BG_Execution_GetScrubTime
==============
*/

double __fastcall BG_Execution_GetScrubTime(const unsigned int execution, const ExecutionVictimStance stance, int startTime, int serverTime, int snapshotDeltaTime)
{
  double result; 

  *(float *)&result = ?BG_Execution_GetScrubTime@@YAMIW4ExecutionVictimStance@@HHH@Z(execution, stance, startTime, serverTime, snapshotDeltaTime);
  return result;
}

/*
==============
BG_Execution_UpdateScrubTime
==============
*/

void __fastcall BG_Execution_UpdateScrubTime(const characterInfo_t *const ci, DObj *obj, const int serverTime, const int deltaTime)
{
  ?BG_Execution_UpdateScrubTime@@YAXQEBUcharacterInfo_t@@PEAUDObj@@HH@Z(ci, obj, serverTime, deltaTime);
}

/*
==============
BG_Execution_MyChanges
==============
*/

void BG_Execution_MyChanges(void)
{
  ?BG_Execution_MyChanges@@YAXXZ();
}

/*
==============
BG_Execution_CalcRootAbs
==============
*/

void __fastcall BG_Execution_CalcRootAbs(DObj *const obj, unsigned int animIndex, double time, tmat43_t<vec3_t> *outRootTransform)
{
  bool v11; 
  bool v12; 
  float fmt; 
  double v19; 
  double v20; 
  __int64 v21; 
  double v22; 
  vec3_t trans; 
  vec4_t rot; 

  __asm
  {
    vmovaps [rsp+0D8h+var_48], xmm6
    vmovaps xmm6, xmm2
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_Execution_CalcRootAbs");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 216, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  v11 = animIndex == 0;
  if ( !animIndex )
  {
    LODWORD(v21) = 0;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 217, ASSERT_TYPE_ASSERT, "( animIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "animIndex", "0", v21, 0i64);
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, cs:__real@3f800000
  }
  if ( !v11 )
  {
    __asm
    {
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 218, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( time ) && ( time ) <= ( 1.0f )", "time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v19, v20, v22) )
      __debugbreak();
  }
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 220, ASSERT_TYPE_ASSERT, "( obj->tree ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !obj->tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 221, ASSERT_TYPE_ASSERT, "( obj->tree->anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree->anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !XAnimIsLeafNode(obj->tree->anims, animIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 222, ASSERT_TYPE_ASSERT, "(XAnimIsLeafNode( obj->tree->anims, animIndex ))", (const char *)&queryFormat, "XAnimIsLeafNode( obj->tree->anims, animIndex )") )
    __debugbreak();
  __asm { vmovss  dword ptr [rsp+0D8h+fmt], xmm6 }
  XAnimGetAbsDelta(obj->tree->anims, animIndex, &rot, &trans, fmt);
  QuatAndOriginToMatrix43(&rot, &trans, outRootTransform);
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
}

/*
==============
BG_Execution_CalcRootOffsetAtTime
==============
*/
void BG_Execution_CalcRootOffsetAtTime(DObj *const attackerObj, const unsigned int attackerAnimIndex, DObj *const victimObj, const unsigned int victimAnimIndex, const float time, tmat43_t<vec3_t> *outReferenceEntToMoveEnt)
{
  tmat43_t<vec3_t> outRootTransform; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in1; 

  __asm { vmovss  xmm2, [rsp+0D8h+time]; time }
  BG_Execution_CalcRootAbs(attackerObj, attackerAnimIndex, *(const float *)&_XMM2, &outRootTransform);
  __asm { vmovss  xmm2, [rsp+0D8h+time]; time }
  BG_Execution_CalcRootAbs(victimObj, victimAnimIndex, *(const float *)&_XMM2, &in1);
  MatrixInverseOrthogonal43(&outRootTransform, &out);
  MatrixMultiply43(&in1, &out, outReferenceEntToMoveEnt);
}

/*
==============
BG_Execution_CalcRootRel
==============
*/

void __fastcall BG_Execution_CalcRootRel(DObj *const obj, unsigned int animIndex, double prevTime, double curTime, tmat43_t<vec3_t> *outRootTransform)
{
  bool v15; 
  bool v16; 
  bool v21; 
  float fmt; 
  double time2; 
  double time2a; 
  float time2b; 
  double v33; 
  double v34; 
  __int64 v35; 
  double v36; 
  double v37; 
  vec3_t trans; 
  vec4_t rot; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmm8, xmm3
    vmovaps xmm9, xmm2
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_Execution_CalcRootRel");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 196, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  v15 = animIndex == 0;
  if ( !animIndex )
  {
    LODWORD(v35) = 0;
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 197, ASSERT_TYPE_ASSERT, "( animIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "animIndex", "0", v35, 0i64);
    v15 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovsd  xmm10, cs:__real@3ff0000000000000
    vxorpd  xmm11, xmm11, xmm11
    vcomiss xmm9, xmm7
    vcomiss xmm9, cs:__real@3f800000
  }
  if ( !v15 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm9, xmm9
      vmovsd  [rsp+118h+var_E0], xmm10
      vmovsd  [rsp+118h+var_E8], xmm11
      vmovsd  qword ptr [rsp+118h+time2], xmm0
    }
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 198, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( prevTime ) && ( prevTime ) <= ( 1.0f )", "prevTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", time2, v33, v36);
    v15 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm8, xmm7
    vcomiss xmm8, cs:__real@3f800000
  }
  if ( !v15 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  [rsp+118h+var_E0], xmm10
      vmovsd  [rsp+118h+var_E8], xmm11
      vmovsd  qword ptr [rsp+118h+time2], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 199, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( curTime ) && ( curTime ) <= ( 1.0f )", "curTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", time2a, v34, v37) )
      __debugbreak();
  }
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 201, ASSERT_TYPE_ASSERT, "( obj->tree ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !obj->tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 202, ASSERT_TYPE_ASSERT, "( obj->tree->anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree->anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !XAnimIsLeafNode(obj->tree->anims, animIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 203, ASSERT_TYPE_ASSERT, "(XAnimIsLeafNode( obj->tree->anims, animIndex ))", (const char *)&queryFormat, "XAnimIsLeafNode( obj->tree->anims, animIndex )") )
    __debugbreak();
  __asm
  {
    vmovss  [rsp+118h+time2], xmm8
    vmovss  dword ptr [rsp+118h+fmt], xmm9
  }
  XAnimGetRelDelta3D(obj->tree->anims, animIndex, &rot, &trans, fmt, time2b);
  QuatAndOriginToMatrix43(&rot, &trans, outRootTransform);
  Sys_ProfEndNamedEvent();
  _R11 = &v40;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-18h]
    vmovaps xmm8, xmmword ptr [r11-28h]
    vmovaps xmm9, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-58h]
  }
}

/*
==============
BG_Execution_CalcWorldGoal
==============
*/
void BG_Execution_CalcWorldGoal(const vec3_t *attackerOrigin, const vec3_t *attackerAngles, const vec3_t *victimOrigin, DObj *const attackerObj, const unsigned int attackerAnimIndex, DObj *const victimObj, const unsigned int victimAnimIndex, const float time, vec3_t *outAttackerGoalPos, vec3_t *outVictimGoalPos, vec3_t *outVictimGoalAngles)
{
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> v70; 
  tmat33_t<vec3_t> axis; 
  tmat43_t<vec3_t> outRootTransform; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in1; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _R15 = outAttackerGoalPos;
  _R12 = outVictimGoalPos;
  _R14 = victimOrigin;
  AnglesAndOriginToMatrix43(attackerAngles, attackerOrigin, &result);
  __asm { vmovss  xmm2, [rbp+0C0h+time]; time }
  BG_Execution_CalcRootAbs(attackerObj, attackerAnimIndex, *(const float *)&_XMM2, &outRootTransform);
  __asm { vmovss  xmm2, [rbp+0C0h+time]; time }
  BG_Execution_CalcRootAbs(victimObj, victimAnimIndex, *(const float *)&_XMM2, &in1);
  MatrixInverseOrthogonal43(&outRootTransform, &out);
  MatrixMultiply43(&in1, &out, &v70);
  __asm
  {
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm7, dword ptr [rsp+1C0h+var_170+24h]
    vmovss  xmm6, dword ptr [rsp+1C0h+var_170+28h]
    vmulss  xmm2, xmm7, dword ptr [rsp+1C0h+result]
    vmulss  xmm0, xmm6, dword ptr [rsp+1C0h+result+0Ch]
    vmovss  xmm5, dword ptr [rsp+1C0h+var_170+2Ch]
    vmulss  xmm1, xmm5, dword ptr [rsp+1C0h+result+1Ch]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm5, dword ptr [rsp+1C0h+result+18h]
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, dword ptr [r14]
    vmulss  xmm3, xmm7, dword ptr [rsp+1C0h+result+4]
    vmulss  xmm10, xmm2, xmm8
    vmulss  xmm2, xmm6, dword ptr [rsp+1C0h+result+10h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm7, dword ptr [rsp+1C0h+result+8]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm5, dword ptr [rsp+1C0h+result+20h]
    vmulss  xmm9, xmm2, xmm8
    vmulss  xmm2, xmm6, dword ptr [rsp+1C0h+result+14h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vsubss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm0, dword ptr [r14+4]
    vmulss  xmm7, xmm2, xmm8
    vmulss  xmm2, xmm1, xmm8
    vsubss  xmm1, xmm0, dword ptr [rsi+4]
    vaddss  xmm6, xmm2, dword ptr [rsi]
    vmovss  xmm0, dword ptr [r14+8]
    vmulss  xmm2, xmm1, xmm8
    vsubss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm4, xmm2, dword ptr [rsi+4]
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm3, xmm2, dword ptr [rsi+8]
    vsubss  xmm0, xmm6, xmm10
    vmovss  dword ptr [r15], xmm0
    vsubss  xmm1, xmm4, xmm9
    vmovss  dword ptr [r15+4], xmm1
    vsubss  xmm0, xmm3, xmm7
    vmovss  dword ptr [r15+8], xmm0
    vaddss  xmm1, xmm6, xmm10
    vmovss  dword ptr [r12], xmm1
    vaddss  xmm1, xmm3, xmm7
    vaddss  xmm0, xmm4, xmm9
    vmovss  dword ptr [r12+8], xmm1
    vmovss  dword ptr [r12+4], xmm0
  }
  MatrixMultiply((const tmat33_t<vec3_t> *)&v70, (const tmat33_t<vec3_t> *)&result, &axis);
  AxisToAngles(&axis, outVictimGoalAngles);
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
BG_Execution_CanUpdateViewangles
==============
*/
bool BG_Execution_CanUpdateViewangles(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 576, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (ps->linkFlags.m_flags[0] & 4) == 0 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u) && ps->viewlocked_entNum == 2047;
}

/*
==============
BG_Execution_ClearAssets
==============
*/
void BG_Execution_ClearAssets(void)
{
  s_bgExecutionDefsInitialized = 0;
  memset_0(s_bgExecutionDefs, 0, sizeof(s_bgExecutionDefs));
}

/*
==============
BG_Execution_FindExecutionPropWeapon
==============
*/
void BG_Execution_FindExecutionPropWeapon(const BgWeaponMap *const weaponMap, const playerState_s *const ps, Weapon *outPropWeapon)
{
  const ExecutionDef *Def; 
  const ExecutionDef *v10; 
  const WeaponDef *v16; 
  int v20; 
  const WeaponDef *v22; 

  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups ymmword ptr [r8], ymm0
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups xmmword ptr [r8+20h], xmm1
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [r8+30h], xmm0
  }
  *(_DWORD *)&outPropWeapon->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  _RDI = outPropWeapon;
  Def = BG_Execution_GetDef(ps->equippedExecution);
  v10 = Def;
  if ( Def )
  {
    if ( Def->usePropWeapon )
    {
      _RAX = BG_GetFirstEquippedWeaponBySlot(weaponMap, ps, WEAPON_SLOT_EXECUTION);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rdi], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rdi+20h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rdi+30h], xmm0
      }
      *(_DWORD *)&_RDI->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      if ( v10->propWeaponInventoryOverrideEnabled && v10->propWeaponInventoryOverrideClass != WEAPCLASS_NONE )
      {
        _RBX = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weapCommon.weaponHandle);
        v16 = BG_WeaponDef(_RBX, 0);
        if ( v16 && v16->inventoryType == WEAPINVENTORY_PRIMARY && v16->weapClass == v10->propWeaponInventoryOverrideClass )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rdi], ymm0
            vmovups xmm1, xmmword ptr [rbx+20h]
            vmovups xmmword ptr [rdi+20h], xmm1
            vmovsd  xmm0, qword ptr [rbx+30h]
            vmovsd  qword ptr [rdi+30h], xmm0
          }
          *(_DWORD *)&_RDI->weaponCamo = *(_DWORD *)&_RBX->weaponCamo;
        }
        else
        {
          v20 = 0;
          while ( 1 )
          {
            if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
              __debugbreak();
            _RSI = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[v20]);
            v22 = BG_WeaponDef(_RSI, 0);
            if ( v22 )
            {
              if ( v22->inventoryType == WEAPINVENTORY_PRIMARY && v22->weapClass == v10->propWeaponInventoryOverrideClass )
                break;
            }
            if ( (unsigned int)++v20 >= 0xF )
              return;
          }
          __asm
          {
            vmovups ymm0, ymmword ptr [rsi]
            vmovups ymmword ptr [rdi], ymm0
            vmovups xmm1, xmmword ptr [rsi+20h]
            vmovups xmmword ptr [rdi+20h], xmm1
            vmovsd  xmm0, qword ptr [rsi+30h]
            vmovsd  qword ptr [rdi+30h], xmm0
          }
          *(_DWORD *)&_RDI->weaponCamo = *(_DWORD *)&_RSI->weaponCamo;
        }
      }
    }
  }
}

/*
==============
BG_Execution_GetActiveAnimIndex
==============
*/
bool BG_Execution_GetActiveAnimIndex(const entityState_t *const es, bool isVictim, unsigned int *outAnimIndex, ExecutionAnimError *outError)
{
  entityType_s eType; 
  unsigned int Anim; 
  unsigned int Animset; 
  unsigned int XAnimIndex; 
  scr_string_t AnimsetName; 
  const Animset *v13; 
  int v14; 
  bool IsStateExecutionVictim; 
  __int64 v17; 
  unsigned int pOutGraftNode; 
  XAnim_s *pSubtreeAnims; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 106, ASSERT_TYPE_ASSERT, "( es ) != ( nullptr )", "%s != %s\n\t%p, %p", "es", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 107, ASSERT_TYPE_ASSERT, "( outAnimIndex ) != ( nullptr )", "%s != %s\n\t%p, %p", "outAnimIndex", "nullptr", NULL, NULL) )
    __debugbreak();
  eType = es->eType;
  if ( ((eType - 1) & 0xFFEE) != 0 )
  {
    LODWORD(v17) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 113, ASSERT_TYPE_ASSERT, "(isValidEType)", "%s\n\tBG_Execution_GetActiveAnim: unexpected es->eType %i", "isValidEType", v17) )
      __debugbreak();
  }
  if ( outError )
    *outError = UNKNOWN;
  if ( (*(_BYTE *)&es->animInfo.selectAnim & 1) != 0 )
  {
    AnimsetName = BG_AnimationState_GetAnimsetName(es);
    v13 = Animset_Find(AnimsetName);
    BG_Animset_GetAnimIndexFromStateIndexAndEntry(v13, (es->animInfo.animData >> 1) & 0x3FF, (es->animInfo.animData >> 11) & 0x7F, outAnimIndex, &pOutGraftNode, (const XAnim_s **)&pSubtreeAnims);
    v14 = (es->animInfo.animData >> 1) & 0x3FF;
    if ( isVictim )
      IsStateExecutionVictim = BG_Animset_IsStateExecutionVictim(v13, v14);
    else
      IsStateExecutionVictim = BG_Animset_IsStateExecutionAttacker(v13, v14);
    if ( !IsStateExecutionVictim )
      goto LABEL_28;
    goto LABEL_21;
  }
  Anim = BG_PlayerASM_GetAnim(es, MOVEMENT);
  Animset = BG_PlayerASM_GetAnimset(es);
  XAnimIndex = BG_PlayerASM_GetXAnimIndex(Animset, Anim);
  *outAnimIndex = XAnimIndex;
  if ( XAnimIndex )
  {
    if ( BG_PlayerASM_IsDeathAlias(Anim, Animset) == 1 )
    {
      if ( outError )
      {
        *outError = 2;
        LOBYTE(XAnimIndex) = 0;
        return XAnimIndex;
      }
LABEL_28:
      LOBYTE(XAnimIndex) = 0;
      return XAnimIndex;
    }
    if ( isVictim )
    {
      if ( BG_PlayerASM_IsExecutionVictimAlias(Anim, Animset) != 1 )
        goto LABEL_28;
    }
    else if ( BG_PlayerASM_IsExecutionAttackerAlias(Anim, Animset) != 1 )
    {
      LOBYTE(XAnimIndex) = 0;
      return XAnimIndex;
    }
LABEL_21:
    LOBYTE(XAnimIndex) = 1;
    return XAnimIndex;
  }
  if ( !outError )
    goto LABEL_28;
  *outError = 1;
  return XAnimIndex;
}

/*
==============
BG_Execution_GetAttackerEntNum
==============
*/
int BG_Execution_GetAttackerEntNum(const playerState_s *const ps)
{
  int result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 54, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( ps->activeExecution == 255 )
    return 2047;
  LOWORD(result) = ps->activeExecutionPartnerEntNum;
  if ( (_WORD)result == 2047 )
    return 2047;
  if ( ps->activeExecutionIsVictim )
    return (__int16)result;
  return ps->clientNum;
}

/*
==============
BG_Execution_GetDef
==============
*/
ExecutionDef *BG_Execution_GetDef(unsigned int index)
{
  __int64 v1; 

  v1 = index;
  if ( !s_bgExecutionDefsInitialized || index == 255 )
    return 0i64;
  if ( index >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 680, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_bgExecutionDefs ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_bgExecutionDefs )\n\t%i not in [0, %i)", index, 256) )
    __debugbreak();
  return s_bgExecutionDefs[v1];
}

/*
==============
BG_Execution_GetDurationMs
==============
*/
__int64 BG_Execution_GetDurationMs(const unsigned int execution, const ExecutionVictimStance stance)
{
  const ExecutionDef *Def; 
  __int32 v5; 

  Def = BG_Execution_GetDef(execution);
  if ( Def )
  {
    if ( (unsigned int)stance >= LONG_LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 295, ASSERT_TYPE_ASSERT, "(unsigned)( stance ) < (unsigned)( static_cast<int>( ExecutionVictimStance::COUNT ) )", "stance doesn't index static_cast<int>( ExecutionVictimStance::COUNT )\n\t%i not in [0, %i)", stance, 4) )
      __debugbreak();
    v5 = stance - 2;
    if ( v5 )
    {
      if ( v5 == 1 )
        return (unsigned int)Def->durationVictimLastStandMs;
      else
        return (unsigned int)Def->durationVictimStandMs;
    }
    else
    {
      return (unsigned int)Def->durationVictimProneMs;
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 288, ASSERT_TYPE_ASSERT, "( def ) != ( nullptr )", "%s != %s\n\t%p, %p", "def", "nullptr", NULL, NULL) )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
BG_Execution_GetIndexForPtr
==============
*/
__int64 BG_Execution_GetIndexForPtr(const ExecutionDef *const def)
{
  __int64 result; 

  if ( !def )
    return 255i64;
  result = 0i64;
  while ( s_bgExecutionDefs[result] != def )
  {
    if ( (unsigned __int64)++result >= 0x100 )
      return 255i64;
  }
  return result;
}

/*
==============
BG_Execution_GetScrubTime
==============
*/
float BG_Execution_GetScrubTime(const unsigned int execution, const ExecutionVictimStance stance, int startTime, int serverTime)
{
  const ExecutionDef *Def; 
  int durationVictimLastStandMs; 
  __int32 v10; 
  __int64 v19; 

  if ( !BG_Execution_GetDef(execution) )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    return *(float *)&_XMM0;
  }
  Def = BG_Execution_GetDef(execution);
  if ( Def )
  {
    if ( (unsigned int)stance >= LONG_LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 295, ASSERT_TYPE_ASSERT, "(unsigned)( stance ) < (unsigned)( static_cast<int>( ExecutionVictimStance::COUNT ) )", "stance doesn't index static_cast<int>( ExecutionVictimStance::COUNT )\n\t%i not in [0, %i)", stance, 4) )
      __debugbreak();
    v10 = stance - 2;
    if ( v10 )
    {
      if ( v10 == 1 )
        durationVictimLastStandMs = Def->durationVictimLastStandMs;
      else
        durationVictimLastStandMs = Def->durationVictimStandMs;
    }
    else
    {
      durationVictimLastStandMs = Def->durationVictimProneMs;
    }
    if ( durationVictimLastStandMs > 0 )
      goto LABEL_17;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 288, ASSERT_TYPE_ASSERT, "( def ) != ( nullptr )", "%s != %s\n\t%p, %p", "def", "nullptr", NULL, NULL) )
      __debugbreak();
    durationVictimLastStandMs = 0;
  }
  LODWORD(v19) = durationVictimLastStandMs;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 360, ASSERT_TYPE_ASSERT, "( 0 ) < ( durationMs )", "%s < %s\n\t%i, %i", "0", "durationMs", 0i64, v19) )
    __debugbreak();
LABEL_17:
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, ebp
    vcvtsi2ss xmm0, xmm0, ebx
    vdivss  xmm0, xmm1, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  return *(float *)&_XMM0;
}

/*
==============
BG_Execution_GetVictimEntNum
==============
*/
int BG_Execution_GetVictimEntNum(const playerState_s *const ps)
{
  int result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 80, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( ps->activeExecution == 255 )
    return 2047;
  LOWORD(result) = ps->activeExecutionPartnerEntNum;
  if ( (_WORD)result == 2047 )
    return 2047;
  if ( ps->activeExecutionIsVictim )
    return ps->clientNum;
  return (__int16)result;
}

/*
==============
BG_Execution_InitAssets
==============
*/
void BG_Execution_InitAssets(bool isFullInit)
{
  if ( isFullInit )
  {
    NetConstStrings_CallForAllExecutionStrings(BG_Execution_LoadCache_Callback);
    s_bgExecutionDefsInitialized = 1;
  }
  else
  {
    if ( !s_bgExecutionDefsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 638, ASSERT_TYPE_ASSERT, "(s_bgExecutionDefsInitialized)", (const char *)&queryFormat, "s_bgExecutionDefsInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllExecutionStrings(BG_Execution_Validate_Callback);
  }
}

/*
==============
BG_Execution_IsExecutionWeaponPresent
==============
*/
bool BG_Execution_IsExecutionWeaponPresent(const characterInfo_t *const ci)
{
  const dvar_t *v1; 
  const dvar_t *v3; 

  v1 = DVARBOOL_killswitch_execution_use_censorship_worldmodel_fix_enabled;
  if ( !DVARBOOL_killswitch_execution_use_censorship_worldmodel_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_execution_use_censorship_worldmodel_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled && BG_Weapons_UseCensorshipWorldModel() )
  {
    v3 = DVARBOOL_killswitch_dog_execution_region_fix_enabled;
    if ( !DVARBOOL_killswitch_dog_execution_region_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_dog_execution_region_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( (!v3->current.enabled || !BG_IsExecutionDog(&ci->dobjExecutionWeapon)) && BG_IsMeleeOnlyWeapon(&ci->dobjExecutionWeapon, 0) )
      return 0;
  }
  return BG_Execution_GetDef(ci->execution) && ci->dobjUsingExecutionProp;
}

/*
==============
BG_Execution_LoadCache_Callback
==============
*/
void BG_Execution_LoadCache_Callback(const unsigned int executionIndex, const char *executionName)
{
  ExecutionDef *v2; 
  __int64 v3; 

  v2 = NULL;
  v3 = executionIndex;
  if ( !executionName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 600, ASSERT_TYPE_ASSERT, "(executionName)", (const char *)&queryFormat, "executionName") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 602, ASSERT_TYPE_ASSERT, "( executionIndex ) < ( ((1<<8)-1) )", "%s < %s\n\t%i, %i", "executionIndex", "INVALID_EXECUTION_DEF", v3, 255) )
    __debugbreak();
  if ( *executionName )
    v2 = Execution_Register(executionName);
  s_bgExecutionDefs[v3] = v2;
}

/*
==============
BG_Execution_MarkExecutionWeaponDirty
==============
*/
void BG_Execution_MarkExecutionWeaponDirty(playerState_s *const ps)
{
  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x3Au);
  }
}

/*
==============
BG_Execution_MyChanges
==============
*/
void BG_Execution_MyChanges(void)
{
  s_bgExecutionDefsInitialized = 0;
  memset_0(s_bgExecutionDefs, 0, sizeof(s_bgExecutionDefs));
  if ( NetConstStrings_AreStringsLoaded() )
  {
    NetConstStrings_CallForAllExecutionStrings(BG_Execution_LoadCache_Callback);
    s_bgExecutionDefsInitialized = 1;
  }
}

/*
==============
BG_Execution_ShouldHideExecutionWeapon
==============
*/
bool BG_Execution_ShouldHideExecutionWeapon(const Weapon *weapon)
{
  const dvar_t *v1; 
  const dvar_t *v3; 

  v1 = DVARBOOL_killswitch_execution_use_censorship_worldmodel_fix_enabled;
  if ( !DVARBOOL_killswitch_execution_use_censorship_worldmodel_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_execution_use_censorship_worldmodel_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled || !BG_Weapons_UseCensorshipWorldModel() )
    return 0;
  v3 = DVARBOOL_killswitch_dog_execution_region_fix_enabled;
  if ( !DVARBOOL_killswitch_dog_execution_region_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_dog_execution_region_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return !v3->current.enabled || !BG_IsExecutionDog(weapon);
}

/*
==============
BG_Execution_UpdateScrubTime
==============
*/
void BG_Execution_UpdateScrubTime(const characterInfo_t *const ci, DObj *obj, const int serverTime, const int deltaTime)
{
  const dvar_t *v11; 
  ExecutionVictimStance executionStance; 
  unsigned int execution; 
  const ExecutionDef *Def; 
  int durationVictimLastStandMs; 
  __int32 v17; 
  unsigned __int16 v25; 
  const dvar_t *v27; 
  const char *v28; 
  char *fmt; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 312, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 313, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 314, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree") )
    __debugbreak();
  if ( BG_Execution_GetDef(ci->execution) )
    goto LABEL_15;
  v11 = DVARBOOL_killswitch_execution_scrubtime_fix_enabled;
  if ( !DVARBOOL_killswitch_execution_scrubtime_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_execution_scrubtime_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled )
  {
LABEL_15:
    executionStance = ci->executionStance;
    execution = ci->execution;
    __asm
    {
      vmovaps [rsp+88h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    if ( !BG_Execution_GetDef(execution) )
    {
LABEL_32:
      v25 = 31;
      if ( !ci->usingAnimState )
        v25 = 50;
      __asm { vmovaps xmm2, xmm6; value }
      XAnimSetFloatGameParameterByIndex(obj, v25, *(float *)&_XMM2);
      v27 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      if ( v27->current.integer == 4 )
      {
        if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 341, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree") )
          __debugbreak();
        LODWORD(v34) = deltaTime;
        v28 = "cli";
        __asm { vcvtss2sd xmm0, xmm6, xmm6 }
        if ( !obj->tree->owner[0] )
          v28 = "srv";
        LODWORD(v32) = ci->entityNum;
        __asm { vmovsd  [rsp+88h+fmt], xmm0 }
        LODWORD(v33) = ci->executionStartTime;
        Com_Printf(0, "[execution %s] %i UpdateScrubTime, time %.3f - player %i, startTime %i, deltaTime %i\n", v28, (unsigned int)serverTime, fmt, v32, v33, v34);
      }
      __asm { vmovaps xmm6, [rsp+88h+var_38] }
      return;
    }
    Def = BG_Execution_GetDef(execution);
    if ( Def )
    {
      if ( (unsigned int)executionStance >= LONG_LONG )
      {
        LODWORD(v33) = 4;
        LODWORD(v32) = executionStance;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 295, ASSERT_TYPE_ASSERT, "(unsigned)( stance ) < (unsigned)( static_cast<int>( ExecutionVictimStance::COUNT ) )", "stance doesn't index static_cast<int>( ExecutionVictimStance::COUNT )\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      v17 = executionStance - 2;
      if ( v17 )
      {
        if ( v17 == 1 )
          durationVictimLastStandMs = Def->durationVictimLastStandMs;
        else
          durationVictimLastStandMs = Def->durationVictimStandMs;
      }
      else
      {
        durationVictimLastStandMs = Def->durationVictimProneMs;
      }
      if ( durationVictimLastStandMs > 0 )
        goto LABEL_31;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 288, ASSERT_TYPE_ASSERT, "( def ) != ( nullptr )", "%s != %s\n\t%p, %p", "def", "nullptr", NULL, NULL) )
        __debugbreak();
      durationVictimLastStandMs = 0;
    }
    LODWORD(v35) = durationVictimLastStandMs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 360, ASSERT_TYPE_ASSERT, "( 0 ) < ( durationMs )", "%s < %s\n\t%i, %i", "0", "durationMs", 0i64, v35) )
      __debugbreak();
LABEL_31:
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, r14d
      vcvtsi2ss xmm0, xmm0, ebx
      vdivss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
    goto LABEL_32;
  }
}

/*
==============
BG_Execution_Validate_Callback
==============
*/
void BG_Execution_Validate_Callback(const unsigned int executionIndex, const char *executionName)
{
  __int64 v2; 
  const char *v3; 
  ExecutionDef **v4; 
  __int64 v5; 
  const char *name; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 

  v2 = executionIndex;
  v3 = executionName;
  if ( !executionName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 616, ASSERT_TYPE_ASSERT, "(executionName)", (const char *)&queryFormat, "executionName") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xFF )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 617, ASSERT_TYPE_ASSERT, "(unsigned)( executionIndex ) < (unsigned)( ((1<<8)-1) )", "executionIndex doesn't index INVALID_EXECUTION_DEF\n\t%i not in [0, %i)", v13, 255) )
      __debugbreak();
  }
  v4 = &s_bgExecutionDefs[v2];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 619, ASSERT_TYPE_ASSERT, "(s_bgExecutionDefs[executionIndex])", (const char *)&queryFormat, "s_bgExecutionDefs[executionIndex]") )
    __debugbreak();
  v5 = 0x7FFFFFFFi64;
  name = (*v4)->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = name - v3;
  do
  {
    v8 = (unsigned __int8)v3[v7];
    v9 = v5;
    v10 = *(unsigned __int8 *)v3++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 620, ASSERT_TYPE_ASSERT, "(!I_stricmp( s_bgExecutionDefs[executionIndex]->name, executionName ))", "%s\n\tInvalid Execution asset mapping", "!I_stricmp( s_bgExecutionDefs[executionIndex]->name, executionName )") )
          __debugbreak();
        return;
      }
    }
  }
  while ( v8 );
}

/*
==============
BG_Weapon_IsExecutionEnabled
==============
*/
bool BG_Weapon_IsExecutionEnabled(const playerState_s *const ps)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_execution_enabled;
  if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled && Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu);
}

/*
==============
BG_Weapon_UpdateExecutionWeapon
==============
*/
void BG_Weapon_UpdateExecutionWeapon(BgWeaponMap *const weaponMap, playerState_s *const ps)
{
  const dvar_t *v7; 
  bool v8; 
  const Weapon *Weapon; 
  const Weapon *v13; 
  int EquippedWeaponIndex; 
  Weapon outPropWeapon; 

  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x3Au) )
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x3Bu);
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups ymmword ptr [rsp+0B8h+outPropWeapon.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      }
      *(_DWORD *)&outPropWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      __asm
      {
        vmovsd  qword ptr [rsp+0B8h+outPropWeapon.attachmentVariationIndices+15h], xmm0
        vmovups xmmword ptr [rsp+0B8h+outPropWeapon.attachmentVariationIndices+5], xmm1
      }
      BG_Execution_FindExecutionPropWeapon(weaponMap, ps, &outPropWeapon);
      v7 = DVARBOOL_killswitch_execution_prop_streaming_enabled;
      if ( !DVARBOOL_killswitch_execution_prop_streaming_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_execution_prop_streaming_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.enabled && BG_WeaponHasStreamedModels(&outPropWeapon) )
      {
        BG_SetExecutionWeaponForPlayer(weaponMap, ps, &outPropWeapon);
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagStrict(&ps->weapCommon.weapFlags, FLAG_COUNT|AIM_ASSIST|0x20);
      }
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagStrict(&ps->weapCommon.weapFlags, FOG_SCALE|AIM_ASSIST|0x20);
    }
    if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x3Bu) )
    {
      v8 = !ps->activeExecutionIsPropVisible;
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups ymmword ptr [rsp+0B8h+outPropWeapon.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  qword ptr [rsp+0B8h+outPropWeapon.attachmentVariationIndices+15h], xmm0
        vmovups xmmword ptr [rsp+0B8h+outPropWeapon.attachmentVariationIndices+5], xmm1
      }
      *(_DWORD *)&outPropWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      if ( !v8 )
        BG_Execution_FindExecutionPropWeapon(weaponMap, ps, &outPropWeapon);
      BG_SetExecutionWeaponForPlayer(weaponMap, ps, &outPropWeapon);
    }
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 821, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 822, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(weaponMap, ps->executionWeapon);
    v13 = Weapon;
    if ( Weapon->weaponIdx && BG_GetEquippedWeaponIndex(weaponMap, ps, Weapon) < 0 )
    {
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, v13);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 479, ASSERT_TYPE_ASSERT, "( 0 ) <= ( BG_GetEquippedWeaponIndex( weaponMap, ps, executionWeapon ) )", "%s <= %s\n\t%i, %i", "0", "BG_GetEquippedWeaponIndex( weaponMap, ps, executionWeapon )", 0i64, EquippedWeaponIndex) )
        __debugbreak();
    }
  }
  else
  {
    BG_SetExecutionWeaponForPlayer(weaponMap, ps, &NULL_WEAPON);
  }
}

/*
==============
PM_Execution_UpdateViewAngles
==============
*/
void PM_Execution_UpdateViewAngles(pmove_t *pm)
{
  playerState_s *ps; 
  const char *v14; 
  int v15; 
  const char *v16; 
  const char *v17; 
  char *v24; 
  unsigned int v25; 
  bool v27; 
  __int64 v65; 
  __int64 v66; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovaps [rsp+0D8h+var_98], xmm14
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 562, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 562, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2510, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
      goto LABEL_15;
    v14 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )";
    v15 = 2514;
    v16 = "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))";
    v17 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h";
  }
  else
  {
    v14 = "BG_IsPlayerInExecution( ps )";
    v15 = 563;
    v16 = "(BG_IsPlayerInExecution( ps ))";
    v17 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp";
  }
  if ( CoreAssert_Handler(v17, v15, ASSERT_TYPE_ASSERT, v16, (const char *)&queryFormat, v14) )
    __debugbreak();
LABEL_15:
  __asm
  {
    vmovss  xmm12, cs:__real@43340000
    vmovss  xmm11, cs:__real@3b360b61
    vmovss  xmm9, cs:__real@3f000000
    vmovss  xmm10, cs:__real@43b40000
    vmovss  xmm13, cs:__real@43360b61
    vmovss  xmm14, cs:__real@37800000
  }
  v24 = (char *)((char *)&pm->cmd.angles - (char *)&ps->viewangles);
  v25 = 0;
  _RDI = &ps->delta_angles;
  v27 = 1;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  do
  {
    if ( !v27 )
    {
      LODWORD(v66) = 3;
      LODWORD(v65) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v65, v66) )
        __debugbreak();
    }
    __asm { vmovaps xmm1, xmm12; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(*(_DWORD *)&v24[(_QWORD)_RDI + 292], *(float *)&_XMM1, 0x14u);
    __asm
    {
      vmulss  xmm6, xmm0, xmm11
      vaddss  xmm2, xmm6, xmm9
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm7, xmm8, xmm0, 1
    }
    if ( v25 >= 3 )
    {
      LODWORD(v66) = 3;
      LODWORD(v65) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v65, v66) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+124h]
      vsubss  xmm0, xmm6, xmm7
      vmulss  xmm2, xmm0, xmm10
      vsubss  xmm2, xmm1, xmm2
      vmulss  xmm4, xmm2, xmm11
      vaddss  xmm3, xmm4, xmm9
      vroundss xmm2, xmm8, xmm3, 1
      vsubss  xmm0, xmm4, xmm2
      vmulss  xmm6, xmm0, xmm10
    }
    if ( v25 >= 3 )
    {
      LODWORD(v66) = 3;
      LODWORD(v65) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v65, v66) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    if ( v25 >= 3 )
    {
      LODWORD(v66) = 3;
      LODWORD(v65) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v65, v66) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm13, dword ptr [rdi]
      vaddss  xmm3, xmm1, xmm9
      vroundss xmm1, xmm8, xmm3, 1
      vcvttss2si eax, xmm1
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, xmm14
      vaddss  xmm2, xmm4, xmm9
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm6, xmm1, xmm10
    }
    if ( v25 >= 3 )
    {
      LODWORD(v66) = 3;
      LODWORD(v65) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v65, v66) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v27 = ++v25 < 3;
  }
  while ( (int)v25 < 3 );
  __asm { vmovaps xmm14, [rsp+0D8h+var_98] }
  _R11 = &v69;
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
  }
}

/*
==============
PM_Weapon_BeginExecution
==============
*/
void PM_Weapon_BeginExecution(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 532, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 532, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapState[0].weaponState = 25;
  ps->weapState[0].weaponTime = 0;
  BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
  PM_StartWeaponAnimBothHands(ps, WEAP_IDLE);
}

/*
==============
PM_Weapon_CheckExecution
==============
*/
void PM_Weapon_CheckExecution(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  unsigned __int64 weaponState; 
  __int64 v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 499, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 499, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_Weapon_UpdateExecutionWeapon(pm->weaponMap, ps);
  if ( BG_IsPlayerInExecutionAttacker(ps) )
  {
    if ( (unsigned int)(ps->weapState[0].weaponState - 22) <= 2 )
      PM_Weapon_MeleeEnd(pm, pml, 0, WEAPON_HAND_DEFAULT, 0, 0, 0);
    if ( (pm->cmd.buttons & 0x200000) != 0 )
      PM_ExitAimDownSight(pm);
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)weaponState > 0x32 || (v6 = 0x4000002001F80i64, !_bittest64(&v6, weaponState)) )
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x23u);
      PM_BeginWeaponChange(pm, pml, &NULL_WEAPON, 0, 1);
    }
  }
  else
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x23u);
  }
}

/*
==============
PM_Weapon_Execution
==============
*/
__int64 PM_Weapon_Execution(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  bool v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 544, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 544, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsPlayerInExecutionAttacker(ps) )
    return 1i64;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x23u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x18u);
  v6 = ps && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu));
  PM_BeginWeaponChange(pm, pml, &pm->cmd.weapon, v6, 0);
  return 0i64;
}

