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
void BG_Execution_CalcRootAbs(DObj *const obj, unsigned int animIndex, const float time, tmat43_t<vec3_t> *outRootTransform)
{
  __int64 v9; 
  vec3_t trans; 
  vec4_t rot; 

  Sys_ProfBeginNamedEvent(0xFF808080, "BG_Execution_CalcRootAbs");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 216, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !animIndex )
  {
    LODWORD(v9) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 217, ASSERT_TYPE_ASSERT, "( animIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "animIndex", "0", v9, 0i64) )
      __debugbreak();
  }
  if ( time < 0.0 || time > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 218, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( time ) && ( time ) <= ( 1.0f )", "time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", time, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 220, ASSERT_TYPE_ASSERT, "( obj->tree ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !obj->tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 221, ASSERT_TYPE_ASSERT, "( obj->tree->anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree->anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !XAnimIsLeafNode(obj->tree->anims, animIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 222, ASSERT_TYPE_ASSERT, "(XAnimIsLeafNode( obj->tree->anims, animIndex ))", (const char *)&queryFormat, "XAnimIsLeafNode( obj->tree->anims, animIndex )") )
    __debugbreak();
  XAnimGetAbsDelta(obj->tree->anims, animIndex, &rot, &trans, time);
  QuatAndOriginToMatrix43(&rot, &trans, outRootTransform);
  Sys_ProfEndNamedEvent();
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

  BG_Execution_CalcRootAbs(attackerObj, attackerAnimIndex, time, &outRootTransform);
  BG_Execution_CalcRootAbs(victimObj, victimAnimIndex, time, &in1);
  MatrixInverseOrthogonal43(&outRootTransform, &out);
  MatrixMultiply43(&in1, &out, outReferenceEntToMoveEnt);
}

/*
==============
BG_Execution_CalcRootRel
==============
*/
void BG_Execution_CalcRootRel(DObj *const obj, unsigned int animIndex, const float prevTime, const float curTime, tmat43_t<vec3_t> *outRootTransform)
{
  __int64 v9; 
  vec3_t trans; 
  vec4_t rot; 

  Sys_ProfBeginNamedEvent(0xFF808080, "BG_Execution_CalcRootRel");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 196, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !animIndex )
  {
    LODWORD(v9) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 197, ASSERT_TYPE_ASSERT, "( animIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "animIndex", "0", v9, 0i64) )
      __debugbreak();
  }
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  if ( (prevTime < 0.0 || prevTime > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 198, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( prevTime ) && ( prevTime ) <= ( 1.0f )", "prevTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", prevTime, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  if ( (curTime < 0.0 || curTime > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 199, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( curTime ) && ( curTime ) <= ( 1.0f )", "curTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", curTime, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 201, ASSERT_TYPE_ASSERT, "( obj->tree ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !obj->tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 202, ASSERT_TYPE_ASSERT, "( obj->tree->anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree->anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !XAnimIsLeafNode(obj->tree->anims, animIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 203, ASSERT_TYPE_ASSERT, "(XAnimIsLeafNode( obj->tree->anims, animIndex ))", (const char *)&queryFormat, "XAnimIsLeafNode( obj->tree->anims, animIndex )") )
    __debugbreak();
  XAnimGetRelDelta3D(obj->tree->anims, animIndex, &rot, &trans, prevTime, curTime);
  QuatAndOriginToMatrix43(&rot, &trans, outRootTransform);
  Sys_ProfEndNamedEvent();
}

/*
==============
BG_Execution_CalcWorldGoal
==============
*/
void BG_Execution_CalcWorldGoal(const vec3_t *attackerOrigin, const vec3_t *attackerAngles, const vec3_t *victimOrigin, DObj *const attackerObj, const unsigned int attackerAnimIndex, DObj *const victimObj, const unsigned int victimAnimIndex, const float time, vec3_t *outAttackerGoalPos, vec3_t *outVictimGoalPos, vec3_t *outVictimGoalAngles)
{
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> v21; 
  tmat33_t<vec3_t> axis; 
  tmat43_t<vec3_t> outRootTransform; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in1; 

  AnglesAndOriginToMatrix43(attackerAngles, attackerOrigin, &result);
  BG_Execution_CalcRootAbs(attackerObj, attackerAnimIndex, time, &outRootTransform);
  BG_Execution_CalcRootAbs(victimObj, victimAnimIndex, time, &in1);
  MatrixInverseOrthogonal43(&outRootTransform, &out);
  MatrixMultiply43(&in1, &out, &v21);
  v14 = (float)((float)((float)(v21.m[3].v[0] * result.m[0].v[0]) + (float)(v21.m[3].v[1] * result.m[1].v[0])) + (float)(v21.m[3].v[2] * result.m[2].v[0])) * 0.5;
  v15 = (float)((float)((float)(v21.m[3].v[0] * result.m[0].v[1]) + (float)(v21.m[3].v[1] * result.m[1].v[1])) + (float)(v21.m[3].v[2] * result.m[2].v[1])) * 0.5;
  v16 = (float)((float)((float)(v21.m[3].v[0] * result.m[0].v[2]) + (float)(v21.m[3].v[1] * result.m[1].v[2])) + (float)(v21.m[3].v[2] * result.m[2].v[2])) * 0.5;
  v17 = (float)((float)(victimOrigin->v[0] - attackerOrigin->v[0]) * 0.5) + attackerOrigin->v[0];
  v18 = (float)((float)(victimOrigin->v[1] - attackerOrigin->v[1]) * 0.5) + attackerOrigin->v[1];
  v19 = (float)((float)(victimOrigin->v[2] - attackerOrigin->v[2]) * 0.5) + attackerOrigin->v[2];
  outAttackerGoalPos->v[0] = v17 - v14;
  outAttackerGoalPos->v[1] = v18 - v15;
  outAttackerGoalPos->v[2] = v19 - v16;
  outVictimGoalPos->v[0] = v17 + v14;
  outVictimGoalPos->v[2] = v19 + v16;
  outVictimGoalPos->v[1] = v18 + v15;
  MatrixMultiply((const tmat33_t<vec3_t> *)&v21, (const tmat33_t<vec3_t> *)&result, &axis);
  AxisToAngles(&axis, outVictimGoalAngles);
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
  const ExecutionDef *v7; 
  const Weapon *Weapon; 
  const WeaponDef *v9; 
  int v10; 
  const Weapon *v11; 
  const WeaponDef *v12; 

  *outPropWeapon = NULL_WEAPON;
  Def = BG_Execution_GetDef(ps->equippedExecution);
  v7 = Def;
  if ( Def )
  {
    if ( Def->usePropWeapon )
    {
      *outPropWeapon = *BG_GetFirstEquippedWeaponBySlot(weaponMap, ps, WEAPON_SLOT_EXECUTION);
      if ( v7->propWeaponInventoryOverrideEnabled && v7->propWeaponInventoryOverrideClass != WEAPCLASS_NONE )
      {
        Weapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weapCommon.weaponHandle);
        v9 = BG_WeaponDef(Weapon, 0);
        if ( v9 && v9->inventoryType == WEAPINVENTORY_PRIMARY && v9->weapClass == v7->propWeaponInventoryOverrideClass )
        {
          *(__m256i *)&outPropWeapon->weaponIdx = *(__m256i *)&Weapon->weaponIdx;
          *(_OWORD *)&outPropWeapon->attachmentVariationIndices[5] = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
          *(double *)&outPropWeapon->attachmentVariationIndices[21] = *(double *)&Weapon->attachmentVariationIndices[21];
          *(_DWORD *)&outPropWeapon->weaponCamo = *(_DWORD *)&Weapon->weaponCamo;
        }
        else
        {
          v10 = 0;
          while ( 1 )
          {
            if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
              __debugbreak();
            v11 = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[v10]);
            v12 = BG_WeaponDef(v11, 0);
            if ( v12 )
            {
              if ( v12->inventoryType == WEAPINVENTORY_PRIMARY && v12->weapClass == v7->propWeaponInventoryOverrideClass )
                break;
            }
            if ( (unsigned int)++v10 >= 0xF )
              return;
          }
          *(__m256i *)&outPropWeapon->weaponIdx = *(__m256i *)&v11->weaponIdx;
          *(_OWORD *)&outPropWeapon->attachmentVariationIndices[5] = *(_OWORD *)&v11->attachmentVariationIndices[5];
          *(double *)&outPropWeapon->attachmentVariationIndices[21] = *(double *)&v11->attachmentVariationIndices[21];
          *(_DWORD *)&outPropWeapon->weaponCamo = *(_DWORD *)&v11->weaponCamo;
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
float BG_Execution_GetScrubTime(const unsigned int execution, const ExecutionVictimStance stance, int startTime, int serverTime, int snapshotDeltaTime)
{
  int v9; 
  int v10; 
  const ExecutionDef *Def; 
  int durationVictimLastStandMs; 
  __int32 v13; 
  double v14; 
  __int64 v16; 

  if ( !BG_Execution_GetDef(execution) )
  {
    LODWORD(v14) = 0;
    return *(float *)&v14;
  }
  v9 = serverTime - startTime - snapshotDeltaTime;
  v10 = 0;
  if ( v9 > 0 )
    v10 = v9;
  Def = BG_Execution_GetDef(execution);
  if ( Def )
  {
    if ( (unsigned int)stance >= LONG_LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 295, ASSERT_TYPE_ASSERT, "(unsigned)( stance ) < (unsigned)( static_cast<int>( ExecutionVictimStance::COUNT ) )", "stance doesn't index static_cast<int>( ExecutionVictimStance::COUNT )\n\t%i not in [0, %i)", stance, 4) )
      __debugbreak();
    v13 = stance - 2;
    if ( v13 )
    {
      if ( v13 == 1 )
        durationVictimLastStandMs = Def->durationVictimLastStandMs;
      else
        durationVictimLastStandMs = Def->durationVictimStandMs;
    }
    else
    {
      durationVictimLastStandMs = Def->durationVictimProneMs;
    }
    if ( durationVictimLastStandMs > 0 )
      goto LABEL_19;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 288, ASSERT_TYPE_ASSERT, "( def ) != ( nullptr )", "%s != %s\n\t%p, %p", "def", "nullptr", NULL, NULL) )
      __debugbreak();
    durationVictimLastStandMs = 0;
  }
  LODWORD(v16) = durationVictimLastStandMs;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 360, ASSERT_TYPE_ASSERT, "( 0 ) < ( durationMs )", "%s < %s\n\t%i, %i", "0", "durationMs", 0i64, v16) )
    __debugbreak();
LABEL_19:
  v14 = I_fclamp((float)v10 / (float)durationVictimLastStandMs, 0.0, 1.0);
  return *(float *)&v14;
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
  const dvar_t *v8; 
  ExecutionVictimStance executionStance; 
  unsigned int execution; 
  int executionStartTime; 
  float v12; 
  int v13; 
  int v14; 
  int v15; 
  const ExecutionDef *Def; 
  int durationVictimLastStandMs; 
  __int32 v18; 
  unsigned __int16 v19; 
  const dvar_t *v20; 
  const char *v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 312, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 313, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 314, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree") )
    __debugbreak();
  if ( BG_Execution_GetDef(ci->execution) )
    goto LABEL_15;
  v8 = DVARBOOL_killswitch_execution_scrubtime_fix_enabled;
  if ( !DVARBOOL_killswitch_execution_scrubtime_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_execution_scrubtime_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
  {
LABEL_15:
    executionStance = ci->executionStance;
    execution = ci->execution;
    executionStartTime = ci->executionStartTime;
    v12 = 0.0;
    if ( !BG_Execution_GetDef(execution) )
    {
LABEL_34:
      v19 = 31;
      if ( !ci->usingAnimState )
        v19 = 50;
      XAnimSetFloatGameParameterByIndex(obj, v19, v12);
      v20 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.integer == 4 )
      {
        if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 341, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree") )
          __debugbreak();
        LODWORD(v24) = deltaTime;
        v21 = "cli";
        if ( !obj->tree->owner[0] )
          v21 = "srv";
        LODWORD(v22) = ci->entityNum;
        LODWORD(v23) = ci->executionStartTime;
        Com_Printf(0, "[execution %s] %i UpdateScrubTime, time %.3f - player %i, startTime %i, deltaTime %i\n", v21, (unsigned int)serverTime, v12, v22, v23, v24);
      }
      return;
    }
    v13 = serverTime - executionStartTime;
    v14 = 0;
    v15 = v13 - deltaTime;
    if ( v15 > 0 )
      v14 = v15;
    Def = BG_Execution_GetDef(execution);
    if ( Def )
    {
      if ( (unsigned int)executionStance >= LONG_LONG )
      {
        LODWORD(v23) = 4;
        LODWORD(v22) = executionStance;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 295, ASSERT_TYPE_ASSERT, "(unsigned)( stance ) < (unsigned)( static_cast<int>( ExecutionVictimStance::COUNT ) )", "stance doesn't index static_cast<int>( ExecutionVictimStance::COUNT )\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      v18 = executionStance - 2;
      if ( v18 )
      {
        if ( v18 == 1 )
          durationVictimLastStandMs = Def->durationVictimLastStandMs;
        else
          durationVictimLastStandMs = Def->durationVictimStandMs;
      }
      else
      {
        durationVictimLastStandMs = Def->durationVictimProneMs;
      }
      if ( durationVictimLastStandMs > 0 )
        goto LABEL_33;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 288, ASSERT_TYPE_ASSERT, "( def ) != ( nullptr )", "%s != %s\n\t%p, %p", "def", "nullptr", NULL, NULL) )
        __debugbreak();
      durationVictimLastStandMs = 0;
    }
    LODWORD(v25) = durationVictimLastStandMs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp", 360, ASSERT_TYPE_ASSERT, "( 0 ) < ( durationMs )", "%s < %s\n\t%i, %i", "0", "durationMs", 0i64, v25) )
      __debugbreak();
LABEL_33:
    LODWORD(v12) = COERCE_UNSIGNED_INT64(I_fclamp((float)v14 / (float)durationVictimLastStandMs, 0.0, 1.0));
    goto LABEL_34;
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
  const dvar_t *v4; 
  bool v5; 
  const Weapon *Weapon; 
  const Weapon *v7; 
  int EquippedWeaponIndex; 
  Weapon outPropWeapon; 

  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x3Au) )
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x3Bu);
      memset(&outPropWeapon, 0, 48);
      *(_DWORD *)&outPropWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      *(double *)&outPropWeapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
      BG_Execution_FindExecutionPropWeapon(weaponMap, ps, &outPropWeapon);
      v4 = DVARBOOL_killswitch_execution_prop_streaming_enabled;
      if ( !DVARBOOL_killswitch_execution_prop_streaming_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_execution_prop_streaming_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled && BG_WeaponHasStreamedModels(&outPropWeapon) )
      {
        BG_SetExecutionWeaponForPlayer(weaponMap, ps, &outPropWeapon);
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagStrict(&ps->weapCommon.weapFlags, FLAG_COUNT|AIM_ASSIST|0x20);
      }
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagStrict(&ps->weapCommon.weapFlags, FOG_SCALE|AIM_ASSIST|0x20);
    }
    if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x3Bu) )
    {
      v5 = !ps->activeExecutionIsPropVisible;
      memset(&outPropWeapon, 0, 48);
      *(double *)&outPropWeapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
      *(_DWORD *)&outPropWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      if ( !v5 )
        BG_Execution_FindExecutionPropWeapon(weaponMap, ps, &outPropWeapon);
      BG_SetExecutionWeaponForPlayer(weaponMap, ps, &outPropWeapon);
    }
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 821, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 822, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(weaponMap, ps->executionWeapon);
    v7 = Weapon;
    if ( Weapon->weaponIdx && BG_GetEquippedWeaponIndex(weaponMap, ps, Weapon) < 0 )
    {
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, v7);
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
  const char *v3; 
  int v4; 
  const char *v5; 
  const char *v6; 
  char *v7; 
  unsigned int v8; 
  float *v; 
  bool v10; 
  double v12; 
  float v15; 
  float v18; 
  __int64 v19; 
  __int64 v20; 

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
    v3 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )";
    v4 = 2514;
    v5 = "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))";
    v6 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h";
  }
  else
  {
    v3 = "BG_IsPlayerInExecution( ps )";
    v4 = 563;
    v5 = "(BG_IsPlayerInExecution( ps ))";
    v6 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution.cpp";
  }
  if ( CoreAssert_Handler(v6, v4, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v3) )
    __debugbreak();
LABEL_15:
  v7 = (char *)((char *)&pm->cmd.angles - (char *)&ps->viewangles);
  v8 = 0;
  v = ps->delta_angles.v;
  v10 = 1;
  _XMM8 = 0i64;
  do
  {
    if ( !v10 )
    {
      LODWORD(v20) = 3;
      LODWORD(v19) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    v12 = MSG_UnpackSignedFloat(*(_DWORD *)&v7[(_QWORD)v + 292], 180.0, 0x14u);
    __asm { vroundss xmm7, xmm8, xmm0, 1 }
    if ( v8 >= 3 )
    {
      LODWORD(v20) = 3;
      LODWORD(v19) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    __asm { vroundss xmm2, xmm8, xmm3, 1 }
    v15 = (float)((float)((float)(v[73] - (float)((float)((float)(*(float *)&v12 * 0.0027777778) - *(float *)&_XMM7) * 360.0)) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    if ( v8 >= 3 )
    {
      LODWORD(v20) = 3;
      LODWORD(v19) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    *v = v15;
    if ( v8 >= 3 )
    {
      LODWORD(v20) = 3;
      LODWORD(v19) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    __asm
    {
      vroundss xmm1, xmm8, xmm3, 1
      vroundss xmm3, xmm8, xmm2, 1
    }
    v18 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    if ( v8 >= 3 )
    {
      LODWORD(v20) = 3;
      LODWORD(v19) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    *v++ = v18;
    v10 = ++v8 < 3;
  }
  while ( (int)v8 < 3 );
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

